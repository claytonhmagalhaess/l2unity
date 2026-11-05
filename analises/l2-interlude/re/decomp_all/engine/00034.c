// ==== 107bd205 ___report_gsfailure

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
  
  _DAT_11d89a70 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_11d89a74 = &stack0x00000004;
  _DAT_11d899b0 = 0x10001;
  _DAT_11d89958 = 0xc0000409;
  _DAT_11d8995c = 1;
  local_32c = DAT_10b171d4;
  local_328 = DAT_10b171d8;
  _DAT_11d89964 = unaff_retaddr;
  _DAT_11d89a3c = in_GS;
  _DAT_11d89a40 = in_FS;
  _DAT_11d89a44 = in_ES;
  _DAT_11d89a48 = in_DS;
  _DAT_11d89a4c = unaff_EDI;
  _DAT_11d89a50 = unaff_ESI;
  _DAT_11d89a54 = unaff_EBX;
  _DAT_11d89a58 = in_EDX;
  _DAT_11d89a5c = in_ECX;
  _DAT_11d89a60 = in_EAX;
  _DAT_11d89a64 = unaff_EBP;
  DAT_11d89a68 = unaff_retaddr;
  _DAT_11d89a6c = in_CS;
  _DAT_11d89a78 = in_SS;
  DAT_11d899a8 = IsDebuggerPresent();
  FUN_107c4473(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_108fe530);
  if (DAT_11d899a8 == 0) {
    FUN_107c4473(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 107bd32a HeapManager::Destructor

/* Library Function - Single Match
    public: void __thiscall HeapManager::Destructor(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall HeapManager::Destructor(HeapManager *this)

{
  if (*(int *)(this + 4) != 0) {
    while (*(int *)(this + 0xc) = *(int *)(this + 8), *(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = **(undefined4 **)(this + 0xc);
      (**(code **)(this + 4))(*(undefined4 *)(this + 0xc));
    }
  }
  return;
}


// ==== 107bd350 UnDecorator::getNumberOfDimensions

/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2005 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_11d89c9c;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_107bd39c:
    if (cVar2 == '@') {
      cVar2 = *DAT_11d89c9c;
      DAT_11d89c9c = DAT_11d89c9c + 1;
      if (cVar2 != '@') {
LAB_107bd3af:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_107bd3af;
      DAT_11d89c9c = DAT_11d89c9c + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_11d89c9c;
      goto LAB_107bd39c;
    }
  }
  return 0;
}


// ==== 107bd3b3 UnDecorator::getTypeEncoding

/* WARNING: Removing unreachable block (ram,0x107bd75d) */
/* WARNING: Removing unreachable block (ram,0x107bd5fd) */
/* WARNING: Removing unreachable block (ram,0x107bd772) */
/* WARNING: Removing unreachable block (ram,0x107bd723) */
/* WARNING: Removing unreachable block (ram,0x107bd6e9) */
/* WARNING: Removing unreachable block (ram,0x107bd6fe) */
/* WARNING: Removing unreachable block (ram,0x107bd738) */
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2005 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  do {
    uVar3 = 0;
    if (*DAT_11d89c9c == '_') {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      uVar3 = 0x4000;
    }
    cVar1 = *DAT_11d89c9c;
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar7 = (int)*DAT_11d89c9c - 0x41;
      DAT_11d89c9c = DAT_11d89c9c + 1;
      if ((uVar7 & 1) == 0) {
        uVar3 = uVar3 | 0x8000;
      }
      else {
        uVar3 = uVar3 | 0xa000;
      }
      if (0x17 < (int)uVar7) {
        return uVar3;
      }
      if ((uVar3 & 0x8000) == 0) {
        uVar3 = uVar3 & 0xffff9fff;
      }
      else {
        uVar3 = uVar3 | 0x800;
      }
      uVar6 = uVar7 & 0x18;
      if (uVar6 == 0) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 | 0x800;
        }
        else {
          uVar3 = uVar3 | 0x40;
        }
      }
      else if (uVar6 == 8) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar3 = uVar3 | 0x80;
        }
      }
      else {
        if (uVar6 != 0x10) {
          return 0xffff;
        }
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xffffe7ff;
        }
      }
      uVar7 = uVar7 & 6;
      if (uVar7 != 0) {
        if (uVar7 == 2) {
          if ((uVar3 & 0x8000) == 0) {
            return uVar3 & 0xffff9fff;
          }
          return uVar3 | 0x200;
        }
        if (uVar7 != 4) {
          if (uVar7 != 6) {
            return 0xffff;
          }
          return uVar3 | 0x400;
        }
        return uVar3 | 0x100;
      }
      return uVar3;
    }
    if (cVar1 != '$') {
      cVar1 = *DAT_11d89c9c;
      if (('/' < cVar1) && (cVar1 < '9')) {
        DAT_11d89c9c = DAT_11d89c9c + 1;
        switch(cVar1) {
        case '0':
          return 0x800;
        case '1':
          return 0x1000;
        case '2':
          return 0;
        case '3':
          return 0x4000;
        case '4':
          return 0x2000;
        case '5':
          return 0x6000;
        case '6':
          return 0x6800;
        case '7':
          return 0x7000;
        case '8':
          return 0x7800;
        default:
          return 0xffff;
        }
      }
      if (cVar1 != '9') {
        return (cVar1 != '\0') + 0xfffe;
      }
      DAT_11d89c9c = DAT_11d89c9c + 1;
      return 0xfffd;
    }
    bVar2 = false;
    pcVar4 = DAT_11d89c9c + 1;
    cVar1 = *pcVar4;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar3 = 0x7c00;
      }
      else if (cVar1 == 'D') {
        uVar3 = uVar3 | 0x9100;
      }
      else if (cVar1 == 'E') {
        uVar3 = uVar3 | 0x9200;
      }
      else {
        if (cVar1 != 'R') {
          DAT_11d89c9c = pcVar4;
          return 0xffff;
        }
        pcVar4 = DAT_11d89c9c + 2;
        bVar2 = true;
LAB_107bd5dc:
        if (bVar2) {
          uVar3 = uVar3 | 0x8e00;
        }
        else {
          uVar3 = uVar3 | 0x8d00;
        }
        if (((int)*pcVar4 - 0x30U & 1) != 0) {
          uVar3 = uVar3 | 0x2000;
        }
        uVar7 = (int)*pcVar4 - 0x30U & 6;
        if (uVar7 == 0) {
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 | 0x800;
          }
          else {
            uVar3 = uVar3 | 0x40;
          }
        }
        else if (uVar7 == 2) {
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xfffff7ff | 0x1000;
          }
          else {
            uVar3 = uVar3 | 0x80;
          }
        }
        else {
          if (uVar7 != 4) {
            DAT_11d89c9c = pcVar4;
            return 0xffff;
          }
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xffffe7ff;
          }
        }
      }
      goto switchD_107bd43a_caseD_47;
    }
    if (cVar1 == 'B') {
      uVar3 = uVar3 | 0x9800;
      goto switchD_107bd43a_caseD_47;
    }
    if (cVar1 == '\0') {
      uVar3 = 0xfffe;
      goto switchD_107bd43a_caseD_47;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        DAT_11d89c9c = pcVar4;
        return 0xffff;
      }
      if (cVar1 < '6') goto LAB_107bd5dc;
      if (cVar1 != 'A') {
        DAT_11d89c9c = pcVar4;
        return 0xffff;
      }
      uVar3 = uVar3 | 0x9000;
switchD_107bd43a_caseD_47:
      DAT_11d89c9c = pcVar4 + 1;
      return uVar3;
    }
    pcVar5 = pcVar4;
    if (DAT_11d89c9c[2] == 'P') {
      pcVar5 = DAT_11d89c9c + 2;
    }
    pcVar4 = pcVar5 + 1;
    switch(*pcVar4) {
    case 'F':
    case 'H':
    case 'L':
    case 'M':
    case 'Q':
      DAT_11d89c9c = pcVar5 + 2;
      break;
    default:
      goto switchD_107bd43a_caseD_47;
    case 'J':
    case 'N':
    case 'O':
      pcVar4 = pcVar5 + 2;
      cVar1 = *pcVar4;
      if (('/' < cVar1) && (cVar1 < ':')) {
        DAT_11d89c9c = pcVar5 + cVar1 + -0x2d;
        uVar3 = getTypeEncoding();
        return uVar3 | 0x10000;
      }
      uVar3 = 0xffff;
      goto switchD_107bd43a_caseD_47;
    }
  } while( true );
}


// ==== 107bd8fb UnDecorator::UScore

/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__108fead0)[param_1];
  if ((~DAT_11d89cac & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}


// ==== 107bd914 HeapManager::getMemory

/* Library Function - Single Match
    public: void * __thiscall HeapManager::getMemory(unsigned int,int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall HeapManager::getMemory(HeapManager *this,uint param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = (void *)(**(code **)this)(uVar3);
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = getMemory((HeapManager *)&DAT_11d89c7c,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar2;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar2;
        }
        *(undefined4 **)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_107bd988;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_107bd988:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}


// ==== 107bd9b7 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName const &)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::DName(DName *this,DName *param_1)

{
  uint uVar1;
  
  *(uint *)(this + 4) =
       *(uint *)(this + 4) ^ ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ *(uint *)(this + 4)) & 0xf;
  uVar1 = (*(uint *)(param_1 + 4) ^ *(uint *)(this + 4)) & 0x10 ^ *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) ^ (uVar1 ^ *(uint *)(param_1 + 4)) & 0x100;
  uVar1 = (*(uint *)(param_1 + 4) ^ *(uint *)(this + 4)) & 0x200 ^ *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  *(uint *)(this + 4) = (*(uint *)(param_1 + 4) ^ uVar1) & 0x800 ^ uVar1;
  return;
}


// ==== 107bdacd DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 4);
  iVar1 = (int)(uVar2 << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    uVar2 = ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ uVar2) & 0xf ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x10 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x20 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x40 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x80 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    *(uint *)(this + 4) = (*(uint *)(param_1 + 4) ^ uVar2) & 0x800 ^ uVar2;
    *(undefined4 *)this = *(undefined4 *)param_1;
  }
  return this;
}


// ==== 107bdb51 Replicator::operator[]

/* Library Function - Single Match
    public: class DName const & __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  DName *pDVar1;
  
  if ((uint)param_1 < 10) {
    if ((*(int *)this == -1) || (*(int *)this < param_1)) {
      pDVar1 = (DName *)(this + 0x34);
    }
    else {
      pDVar1 = *(DName **)(this + param_1 * 4 + 4);
    }
  }
  else {
    pDVar1 = (DName *)(this + 0x2c);
  }
  return pDVar1;
}


// ==== 107bdb87 DNameNode::operator+=

/* Library Function - Single Match
    public: class DNameNode & __thiscall DNameNode::operator+=(class DNameNode *)
   
   Library: Visual Studio 2005 Release */

DNameNode * __thiscall DNameNode::operator+=(DNameNode *this,DNameNode *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (DNameNode *)0x0) {
    iVar1 = *(int *)(this + 4);
    if (*(int *)(this + 4) == 0) {
      *(DNameNode **)(this + 4) = param_1;
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 4);
      } while (iVar1 != 0);
      *(DNameNode **)(iVar2 + 4) = param_1;
    }
  }
  return this;
}


// ==== 107bdbc6 FUN_107bdbc6

undefined4 FUN_107bdbc6(void)

{
  return 1;
}


// ==== 107bdbca FUN_107bdbca

undefined1 FUN_107bdbca(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 8);
}


// ==== 107bdbce FUN_107bdbce

undefined1 * FUN_107bdbce(undefined1 *param_1,int param_2)

{
  int in_ECX;
  
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    param_1 = (undefined1 *)0x0;
  }
  else {
    *param_1 = *(undefined1 *)(in_ECX + 8);
  }
  return param_1;
}


// ==== 107bdbe9 FUN_107bdbe9

undefined4 FUN_107bdbe9(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 107bdbed pDNameNode::pDNameNode

/* Library Function - Single Match
    public: __thiscall pDNameNode::pDNameNode(class DName *)
   
   Library: Visual Studio 2005 Release */

void __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1)

{
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  if ((param_1 != (DName *)0x0) &&
     ((iVar1 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c, iVar1 == 1 || (iVar1 == 3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 8) = param_1;
  return;
}


// ==== 107bdc1c DNameStatusNode::DNameStatusNode

/* Library Function - Single Match
    public: __thiscall DNameStatusNode::DNameStatusNode(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

void __thiscall DNameStatusNode::DNameStatusNode(DNameStatusNode *this,DNameStatus param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  *(DNameStatus *)(this + 8) = param_1;
  if (param_1 == 2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


// ==== 107bdc41 FUN_107bdc41

undefined4 FUN_107bdc41(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 107bdc45 FUN_107bdc45

byte FUN_107bdc45(void)

{
  int in_ECX;
  
  return (*(int *)(in_ECX + 8) != 2) - 1U & 0x20;
}


// ==== 107bdc60 und_strncpy

/* Library Function - Single Match
    char * __cdecl und_strncpy(char *,char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl und_strncpy(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = param_1;
  for (; (param_2 != (char *)0x0 && (cVar1 = *in_EDX, *pcVar2 = cVar1, cVar1 != '\0'));
      in_EDX = in_EDX + 1) {
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + -1;
  }
  return param_1;
}


// ==== 107bdca5 UnDecorator::getDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDataIndirectType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


// ==== 107bdcd8 UnDecorator::getThisType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThisType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getThisType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


// ==== 107bdd1f DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  if (param_1 == (DName *)0x0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
    *(undefined4 *)this = 0;
  }
  else {
    this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0xc,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    *(uint *)(this + 4) =
         *(uint *)(this + 4) ^ ((-(uint)(iVar1 != 0) & 0xfffffffd) + 3 ^ *(uint *)(this + 4)) & 0xf;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff00f;
  return this;
}


// ==== 107bdd75 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  DVar1 = param_1;
  if ((param_1 != 1) && (param_1 != 3)) {
    DVar1 = 0;
  }
  *(DNameStatus *)(this + 4) =
       *(DNameStatus *)(this + 4) ^ (*(DNameStatus *)(this + 4) ^ DVar1) & 0xf;
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff00f;
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  }
  return this;
}


// ==== 107bddd6 DName::isValid

/* Library Function - Single Match
    public: int __thiscall DName::isValid(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::isValid(DName *this)

{
  int iVar1;
  
  iVar1 = (*(int *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 != 0) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}


// ==== 107bdded DName::isEmpty

/* Library Function - Single Match
    public: int __thiscall DName::isEmpty(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall DName::isEmpty(DName *this)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    iVar1 = isValid(this);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 107bde02 DName::isUDC

/* Library Function - Single Match
    public: int __thiscall DName::isUDC(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::isUDC(DName *this)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = isEmpty(this);
  if ((iVar1 == 0) && ((*(byte *)(extraout_ECX + 4) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 107bde38 DName::length

/* Library Function - Single Match
    public: int __thiscall DName::length(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::length(DName *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    for (puVar2 = (undefined4 *)*extraout_ECX; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      iVar1 = (**(code **)*puVar2)();
      iVar3 = iVar3 + iVar1;
    }
  }
  return iVar3;
}


// ==== 107bde5d DName::getLastChar

/* Library Function - Single Match
    public: char __thiscall DName::getLastChar(void)const 
   
   Library: Visual Studio 2005 Release */

char __thiscall DName::getLastChar(DName *this)

{
  char cVar1;
  int iVar2;
  int *extraout_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  iVar2 = isEmpty(this);
  if ((iVar2 == 0) && (piVar3 = (int *)*extraout_ECX, piVar3 != (int *)0x0)) {
    do {
      iVar2 = (**(code **)*piVar3)();
      if (iVar2 != 0) {
        piVar4 = piVar3;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x107bde8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      cVar1 = (**(code **)(*piVar4 + 4))();
      return cVar1;
    }
  }
  return '\0';
}


// ==== 107bde95 DName::getString

/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,int)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall DName::getString(DName *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  DName *this_00;
  uint uVar3;
  int *piVar4;
  
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    uVar3 = param_2;
    if (param_1 == (char *)0x0) {
      iVar1 = length(this_00);
      uVar3 = iVar1 + 1;
      param_1 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,uVar3,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    piVar4 = *(int **)this;
    param_2 = (int)param_1;
    while ((piVar4 != (int *)0x0 && (0 < (int)uVar3))) {
      uVar2 = (**(code **)*piVar4)();
      if (uVar2 != 0) {
        if ((int)(uVar3 - uVar2) < 0) {
          uVar2 = uVar3;
        }
        iVar1 = (**(code **)(*piVar4 + 8))(param_2,uVar2);
        if (iVar1 != 0) {
          uVar3 = uVar3 - uVar2;
          param_2 = param_2 + uVar2;
        }
      }
      piVar4 = (int *)piVar4[1];
    }
  }
  else {
    param_2 = (int)param_1;
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  *(char *)param_2 = '\0';
  return param_1;
}


// ==== 107bdf26 DName::operator|=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator|=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator|=(DName *this,DName *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  DName *extraout_EDX;
  
  uVar1 = *(uint *)(this + 4);
  if (((byte)uVar1 & 0xf) != 3) {
    iVar2 = isValid(param_1);
    this = extraout_EDX;
    if (iVar2 == 0) {
      *(uint *)(extraout_EDX + 4) =
           ((*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c ^ uVar1) & 0xf ^ uVar1;
    }
  }
  return this;
}


// ==== 107bdf5b DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  if ((param_1 == 1) || (param_1 == 3)) {
    DVar1 = *(DNameStatus *)(this + 4);
    *(undefined4 *)this = 0;
    if (((byte)DVar1 & 0xf) != 3) {
      *(DNameStatus *)(this + 4) = (DVar1 ^ param_1) & 0xf ^ DVar1;
    }
  }
  else {
    iVar2 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
    if ((iVar2 == 0) || (iVar2 == 2)) {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0x10,0);
      if (this_00 == (DNameStatusNode *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
      }
      *(int *)this = iVar2;
      if (iVar2 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


// ==== 107bdfdc Replicator::Replicator

/* Library Function - Single Match
    public: __thiscall Replicator::Replicator(void)
   
   Library: Visual Studio 2005 Release */

Replicator * __thiscall Replicator::Replicator(Replicator *this)

{
  DName::DName((DName *)(this + 0x2c),3);
  DName::DName((DName *)(this + 0x34),1);
  *(undefined4 *)this = 0xffffffff;
  return this;
}


// ==== 107bdffa Replicator::operator+=

/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Library: Visual Studio 2005 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  
  if (*(int *)this != 9) {
    iVar1 = DName::isEmpty(param_1);
    if (iVar1 == 0) {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,8,0);
      if (this_00 == (DName *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DName::DName(this_00,param_1);
      }
      if (iVar1 != 0) {
        *(int *)this = *(int *)this + 1;
        *(int *)(this + *(int *)this * 4 + 4) = iVar1;
      }
    }
  }
  return this;
}


// ==== 107be041 DNameNode::clone

/* Library Function - Single Match
    public: class DNameNode * __thiscall DNameNode::clone(void)
   
   Library: Visual Studio 2005 Release */

DNameNode * __thiscall DNameNode::clone(DNameNode *this)

{
  pDNameNode *this_00;
  DName *pDVar1;
  DNameNode *pDVar2;
  
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,8,0);
    if (pDVar1 == (DName *)0x0) {
      pDVar1 = (DName *)0x0;
    }
    else {
      *(uint *)(pDVar1 + 4) = *(uint *)(pDVar1 + 4) & 0xfffff000;
      *(DNameNode **)pDVar1 = this;
    }
    pDVar2 = (DNameNode *)pDNameNode::pDNameNode(this_00,pDVar1);
  }
  return pDVar2;
}


// ==== 107be088 pcharNode::pcharNode

/* Library Function - Single Match
    public: __thiscall pcharNode::pcharNode(char const *,int)
   
   Library: Visual Studio 2005 Release */

pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint unaff_EDI;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  if (param_2 == 0) {
    if (param_1 == (char *)0x0) goto LAB_107be0df;
    param_2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      cVar1 = *(char *)(param_2 + (int)param_1);
    }
    if ((char *)param_2 == (char *)0x0) goto LAB_107be0df;
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,param_2,0);
    *(char **)(this + 8) = pcVar2;
    *(int *)(this + 0xc) = param_2;
    if (pcVar2 == (char *)0x0) {
      return this;
    }
    und_strncpy(pcVar2,(char *)param_2,unaff_EDI);
    return this;
  }
LAB_107be0df:
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


// ==== 107be0ed FUN_107be0ed

undefined4 FUN_107be0ed(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(*(int *)(in_ECX + 8) + -1 + iVar1));
  }
  return 0;
}


// ==== 107be0ff pcharNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  uint unaff_retaddr;
  
  if ((int)*(char **)(this + 0xc) < param_2) {
    param_2 = (int)*(char **)(this + 0xc);
  }
  pcVar1 = (char *)0x0;
  if (((*(int *)(this + 8) != 0) && (param_1 != (char *)0x0)) && ((char *)param_2 != (char *)0x0)) {
    pcVar1 = und_strncpy(param_1,(char *)param_2,unaff_retaddr);
  }
  return pcVar1;
}


// ==== 107be130 pDNameNode::length

/* Library Function - Single Match
    public: virtual int __thiscall pDNameNode::length(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall pDNameNode::length(pDNameNode *this)

{
  int iVar1;
  
  if (*(DName **)(this + 8) != (DName *)0x0) {
    iVar1 = DName::length(*(DName **)(this + 8));
    return iVar1;
  }
  return 0;
}


// ==== 107be13f pDNameNode::getLastChar

/* Library Function - Single Match
    public: virtual char __thiscall pDNameNode::getLastChar(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char __thiscall pDNameNode::getLastChar(pDNameNode *this)

{
  char cVar1;
  
  if (*(DName **)(this + 8) != (DName *)0x0) {
    cVar1 = DName::getLastChar(*(DName **)(this + 8));
    return cVar1;
  }
  return '\0';
}


// ==== 107be14e pDNameNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall pDNameNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (((*(DName **)(this + 8) != (DName *)0x0) && (param_1 != (char *)0x0)) && (param_2 != 0)) {
    pcVar1 = DName::getString(*(DName **)(this + 8),param_1,param_2);
    return pcVar1;
  }
  return (char *)0x0;
}


// ==== 107be16b DNameStatusNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall DNameStatusNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall DNameStatusNode::getString(DNameStatusNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  uint unaff_retaddr;
  
  if ((int)*(char **)(this + 0xc) < param_2) {
    param_2 = (int)*(char **)(this + 0xc);
  }
  pcVar1 = (char *)0x0;
  if (((*(int *)(this + 8) == 2) && (param_1 != (char *)0x0)) && ((char *)param_2 != (char *)0x0)) {
    pcVar1 = und_strncpy(param_1,(char *)param_2,unaff_retaddr);
  }
  return pcVar1;
}


// ==== 107be19e UnDecorator::UnDecorator

/* Library Function - Single Match
    public: __thiscall UnDecorator::UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Library: Visual Studio 2005 Release */

UnDecorator * __thiscall
UnDecorator::UnDecorator
          (UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  Replicator::Replicator((Replicator *)this);
  Replicator::Replicator((Replicator *)(this + 0x3c));
  DAT_11d89ca0 = param_2;
  DAT_11d89c9c = param_2;
  if (param_1 == (char *)0x0) {
    DAT_11d89ca4 = (char *)0x0;
    DAT_11d89ca8 = 0;
  }
  else {
    DAT_11d89ca8 = param_3 + -1;
    DAT_11d89ca4 = param_1;
  }
  DAT_11d89cac = param_5;
  DAT_11d89c94 = (Replicator *)(this + 0x3c);
  DAT_11d89cb0 = param_4;
  DAT_11d89c90 = this;
  DAT_11d89cb4 = 0;
  return this;
}


// ==== 107be211 UnDecorator::getReturnType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_11d89c9c == '@') {
    DAT_11d89c9c = DAT_11d89c9c + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}


// ==== 107be24f DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1)

{
  int iVar1;
  DNameStatusNode *this_00;
  DNameNode *pDVar2;
  DNameNode *this_01;
  DName *this_02;
  
  iVar1 = isEmpty(this);
  if (((iVar1 != 0) || (param_1 == 1)) || (param_1 == 3)) {
    operator=(this_02,param_1);
    return this;
  }
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar2 = (DNameNode *)DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  if (pDVar2 == (DNameNode *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    this_01 = DNameNode::clone(*(DNameNode **)this);
    *(DNameNode **)this = this_01;
    if (this_01 == (DNameNode *)0x0) goto LAB_107be2ad;
    DNameNode::operator+=(this_01,pDVar2);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_107be2ad:
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  return this;
}


// ==== 107be2c8 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  iVar1 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    if (param_1 == (DName *)0x0) {
      operator=(this,3);
    }
    else {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0xc,0);
      if (this_00 == (pDNameNode *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = pDNameNode::pDNameNode(this_00,param_1);
      }
      *(int *)this = iVar1;
      if (iVar1 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


// ==== 107be330 DName::doPchar

/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(this + 4);
  iVar4 = (int)(uVar3 << 0x1c) >> 0x1c;
  if (iVar4 == 1) {
    return;
  }
  if (iVar4 == 3) {
    return;
  }
  if (*(int *)this != 0) {
    operator=(this,3);
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    uVar3 = uVar3 & 0xfffffff1 | 1;
    goto LAB_107be3cd;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar2 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0xc,0);
      if (puVar2 == (undefined4 *)0x0) goto LAB_107be399;
      cVar1 = *param_1;
      puVar2[1] = 0;
      *puVar2 = charNode::vftable;
      *(char *)(puVar2 + 2) = cVar1;
    }
    else {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0x10,0);
      if (this_00 == (pcharNode *)0x0) {
LAB_107be399:
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
      }
    }
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      return;
    }
    uVar3 = *(uint *)(this + 4);
  }
  uVar3 = uVar3 & 0xfffffff3 | 3;
LAB_107be3cd:
  *(uint *)(this + 4) = uVar3;
  return;
}


// ==== 107be3d6 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char param_1)

{
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}


// ==== 107be3fc DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  *(undefined4 *)this = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar2];
    }
    doPchar(this,param_1,iVar2);
  }
  return this;
}


// ==== 107be42d DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char const * &,char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char **param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  uVar4 = *(uint *)(this + 4);
  iVar6 = 0;
  *(undefined4 *)this = 0;
  pcVar3 = *param_1;
  if (pcVar3 == (char *)0x0) {
LAB_107be4d6:
    uVar4 = uVar4 & 0xfffffff1 | 1;
  }
  else {
    if (*pcVar3 != '\0') {
      do {
        bVar1 = **param_1;
        if (bVar1 == param_2) break;
        if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
              (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1)))))
              ) && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
            (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
           (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((DAT_11d89cac & 0x10000) == 0)))) {
          uVar4 = *(uint *)(this + 4);
          goto LAB_107be4d6;
        }
        iVar6 = iVar6 + 1;
        pbVar5 = (byte *)(*param_1 + 1);
        *param_1 = (char *)pbVar5;
      } while (*pbVar5 != 0);
      doPchar(this,pcVar3,iVar6);
      cVar2 = **param_1;
      if (cVar2 != '\0') {
        *param_1 = *param_1 + 1;
        if (cVar2 == param_2) {
          *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
          return this;
        }
        uVar4 = *(uint *)(this + 4) & 0xfffffff3 | 3;
        *(undefined4 *)this = 0;
        goto LAB_107be4dc;
      }
      uVar4 = *(uint *)(this + 4);
      if ((uVar4 & 0xf) != 0) {
        return this;
      }
    }
    uVar4 = uVar4 & 0xfffffff2 | 2;
  }
LAB_107be4dc:
  *(uint *)(this + 4) = uVar4;
  return this;
}


// ==== 107be4fd DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(unsigned __int64)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  pcVar1 = local_d + 1;
  local_d[1] = 0;
  do {
    pcVar1 = pcVar1 + -1;
    param_1 = __aulldvrm(param_1,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (param_1 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107be566 FUN_107be566

void FUN_107be566(int param_1,int param_2)

{
  bool bVar1;
  char extraout_CL;
  DName *in_ECX;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) & 0xfffff000;
  pcVar3 = local_d + 2;
  *(undefined4 *)in_ECX = 0;
  local_d[2] = 0;
  bVar1 = false;
  lVar4 = CONCAT44(param_2,param_1);
  if ((param_2 < 1) && (lVar4 = CONCAT44(param_2,param_1), param_2 < 0)) {
    bVar1 = true;
    lVar4 = CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
  }
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + -1;
    lVar4 = __aulldvrm(lVar4,10,0);
    *pcVar3 = extraout_CL + '0';
  } while (lVar4 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  DName::doPchar(in_ECX,pcVar3,(int)(local_d + (2 - (int)pcVar3)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107be5fc DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(enum DNameStatus)const 
   
   Library: Visual Studio 2005 Release */

DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1)

{
  int iVar1;
  DName *this_00;
  DNameStatus in_stack_00000008;
  
  DName((DName *)param_1,this);
  iVar1 = isEmpty((DName *)param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 107be62a DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  int iVar1;
  DNameNode *this_00;
  DName *this_01;
  
  iVar1 = isEmpty(param_1);
  if (iVar1 == 0) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      this_00 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = this_00;
      if (this_00 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        DNameNode::operator+=(this_00,*(DNameNode **)param_1);
      }
    }
    else {
      operator=(this_01,param_1);
    }
  }
  else {
    operator+=(this,(*(int *)(param_1 + 4) << 0x1c) >> 0x1c);
  }
  return this;
}


// ==== 107be68c FUN_107be68c

void FUN_107be68c(DName *param_1)

{
  int iVar1;
  DNameStatus DVar2;
  pDNameNode *this;
  DNameNode *pDVar3;
  DNameNode *this_00;
  DName *in_ECX;
  DName *this_01;
  
  if (param_1 == (DName *)0x0) {
    return;
  }
  iVar1 = DName::isEmpty(in_ECX);
  if (iVar1 != 0) {
    DName::operator=(this_01,param_1);
    return;
  }
  DVar2 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c;
  if ((DVar2 != 0) && (DVar2 != 2)) {
    DName::operator+=(this_01,DVar2);
    return;
  }
  this = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0xc,0);
  if (this == (pDNameNode *)0x0) {
    pDVar3 = (DNameNode *)0x0;
  }
  else {
    pDVar3 = (DNameNode *)pDNameNode::pDNameNode(this,param_1);
  }
  if (pDVar3 == (DNameNode *)0x0) {
    *(undefined4 *)in_ECX = 0;
  }
  else {
    this_00 = DNameNode::clone(*(DNameNode **)in_ECX);
    *(DNameNode **)in_ECX = this_00;
    if (this_00 == (DNameNode *)0x0) goto LAB_107be704;
    DNameNode::operator+=(this_00,pDVar3);
  }
  if (*(int *)in_ECX != 0) {
    return;
  }
LAB_107be704:
  *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) & 0xfffffff3 | 3;
  return;
}


// ==== 107be717 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
  doPchar(this,&param_1,1);
  return this;
}


// ==== 107be733 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}


// ==== 107be75d UnDecorator::getCallingConvention

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  char *pcVar2;
  uint in_ECX;
  DName *in_stack_00000004;
  Tokens TVar3;
  DNameStatus DVar4;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_11d89c9c == '\0') {
    DVar4 = 2;
  }
  else {
    uVar1 = (int)*DAT_11d89c9c - 0x41;
    DAT_11d89c9c = DAT_11d89c9c + 1;
    if (uVar1 < 0xd) {
      local_c = 0;
      local_8 = in_ECX & 0xfffff000;
      if ((~(DAT_11d89cac >> 1) & 1) != 0) {
        uVar1 = uVar1 & 0xfffffffe;
        if (uVar1 == 0) {
          TVar3 = 1;
        }
        else if (uVar1 == 2) {
          TVar3 = 2;
        }
        else if (uVar1 == 4) {
          TVar3 = 4;
        }
        else if (uVar1 == 6) {
          TVar3 = 3;
        }
        else if (uVar1 == 8) {
          TVar3 = 5;
        }
        else {
          if (uVar1 != 0xc) goto LAB_107be7e2;
          TVar3 = 6;
        }
        pcVar2 = UScore(TVar3);
        DName::operator=((DName *)&local_c,pcVar2);
      }
LAB_107be7e2:
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    DVar4 = 1;
  }
  DName::DName(in_stack_00000004,DVar4);
  return in_stack_00000004;
}


// ==== 107be803 UnDecorator::getVCallThunkType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  DNameStatus DVar1;
  
  if (*DAT_11d89c9c == '\0') {
    DVar1 = 2;
  }
  else {
    if (*DAT_11d89c9c == 'A') {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      DName::DName(in_stack_00000004,"{flat}");
      return in_stack_00000004;
    }
    DVar1 = 1;
  }
  DName::DName(in_stack_00000004,DVar1);
  return in_stack_00000004;
}


// ==== 107be83a DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName const &)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  DName *extraout_ECX;
  DName *in_stack_00000008;
  
  DName(param_1,this);
  iVar1 = isEmpty(param_1);
  if (iVar1 == 0) {
    iVar1 = isEmpty(in_stack_00000008);
    if (iVar1 == 0) {
      operator+=(param_1,extraout_ECX);
    }
    else {
      operator+=(param_1,(*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c);
    }
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 107be88b FUN_107be88b

DName * FUN_107be88b(DName *param_1,DName *param_2)

{
  int iVar1;
  DName *in_ECX;
  DName *this;
  
  DName::DName(param_1,in_ECX);
  iVar1 = DName::isEmpty(param_1);
  if (iVar1 == 0) {
    FUN_107be68c(param_2);
  }
  else {
    DName::operator=(this,param_2);
  }
  return param_1;
}


// ==== 107be8b9 DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,char param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  DName *this_00;
  
  if (param_1 != '\0') {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0xc,0);
        if (pDVar2 == (DNameNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          *(undefined4 *)(pDVar2 + 4) = 0;
          *(undefined ***)pDVar2 = charNode::vftable;
          pDVar2[8] = (DNameNode)param_1;
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_00,param_1);
    }
  }
  return this;
}


// ==== 107be923 DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,char *param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  pcharNode *this_00;
  DName *this_01;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        this_00 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,0x10,0);
        if (this_00 == (pcharNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          pDVar2 = (DNameNode *)pcharNode::pcharNode(this_00,param_1,0);
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_01,param_1);
    }
  }
  return this;
}


// ==== 107be98f UnDecorator::getArgumentList

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  char *pcVar1;
  DName *pDVar2;
  uint uVar3;
  DName *in_stack_00000004;
  DName local_18 [8];
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  local_8 = 1;
  if ((*(uint *)(in_stack_00000004 + 4) & 0xf) == 0) {
    do {
      if (*DAT_11d89c9c == '@') {
        return in_stack_00000004;
      }
      if (*DAT_11d89c9c == 'Z') {
        return in_stack_00000004;
      }
      if (local_8 == 0) {
        DName::operator+=(in_stack_00000004,',');
      }
      else {
        local_8 = 0;
      }
      pcVar1 = DAT_11d89c9c;
      if (*DAT_11d89c9c == '\0') {
        DName::operator+=(in_stack_00000004,2);
        return in_stack_00000004;
      }
      uVar3 = (int)*DAT_11d89c9c - 0x30;
      if (uVar3 < 10) {
        DAT_11d89c9c = DAT_11d89c9c + 1;
        pDVar2 = Replicator::operator[](DAT_11d89c90,uVar3);
      }
      else {
        local_10 = 0;
        local_c = local_c & 0xfffff000;
        getPrimaryDataType(local_18);
        if ((1 < (int)DAT_11d89c9c - (int)pcVar1) && (*(int *)DAT_11d89c90 != 9)) {
          Replicator::operator+=(DAT_11d89c90,local_18);
        }
        pDVar2 = local_18;
      }
      DName::operator+=(in_stack_00000004,pDVar2);
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  return in_stack_00000004;
}


// ==== 107bea6f UnDecorator::getVdispMapType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  DName *in_stack_00000008;
  
  DName::DName(param_1,in_stack_00000008);
  DName::operator+=(param_1,"{for ");
  pDVar1 = (DName *)getScope();
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_11d89c9c == '@') {
    DAT_11d89c9c = DAT_11d89c9c + 1;
  }
  return param_1;
}


// ==== 107beabe operator+

/* Library Function - Single Match
    class DName __cdecl operator+(char,class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl operator+(char param_1,DName *param_2)

{
  DName *this;
  undefined3 in_stack_00000005;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = _param_1;
  this = (DName *)DName::DName(local_c,(char)param_2);
  DName::operator+(this,pDVar1);
  return _param_1;
}


// ==== 107beae0 operator+

/* Library Function - Single Match
    class DName __cdecl operator+(enum DNameStatus,class DName const &)
   
   Library: Visual Studio 2005 Release */

DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(DNameStatus)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


// ==== 107beb02 operator+

/* Library Function - Single Match
    class DName __cdecl operator+(char const *,class DName const &)
   
   Library: Visual Studio 2005 Release */

char * __cdecl operator+(char *param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(char *)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


// ==== 107beb24 DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+(DName *this,char param_1)

{
  int iVar1;
  DName *this_00;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  
  DName(_param_1,this);
  iVar1 = isEmpty(_param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return _param_1;
}


// ==== 107beb52 DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall DName::operator+(DName *this,char *param_1)

{
  int iVar1;
  DName *this_00;
  char *in_stack_00000008;
  
  DName((DName *)param_1,this);
  iVar1 = isEmpty((DName *)param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 107beb80 UnDecorator::getDimension

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  __uint64 _Var1;
  char *pcVar2;
  char cVar3;
  DName *pDVar4;
  longlong lVar5;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DNameStatus DVar6;
  DName local_20 [8];
  char local_18 [8];
  DName local_10 [4];
  int local_c;
  DName *local_8;
  
  local_8 = (DName *)0x0;
  if (*DAT_11d89c9c == 'Q') {
    DAT_11d89c9c = DAT_11d89c9c + 1;
    local_8 = (DName *)0x108fecb8;
  }
  cVar3 = *DAT_11d89c9c;
  if (cVar3 == '\0') {
    DName::DName(_param_1,2);
    return _param_1;
  }
  if (('/' < cVar3) && (cVar3 < ':')) {
    cVar3 = *DAT_11d89c9c;
    DAT_11d89c9c = DAT_11d89c9c + 1;
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_20,(longlong)(cVar3 + -0x2f));
    }
    else {
      DName::DName(local_10,(longlong)(cVar3 + -0x2f));
      pDVar4 = (DName *)operator+(local_18,local_8);
    }
    DName::DName(_param_1,pDVar4);
    return _param_1;
  }
  _Var1 = 0;
  while (pcVar2 = DAT_11d89c9c, cVar3 != '@') {
    if (cVar3 == '\0') {
      DVar6 = 2;
      goto LAB_107bec71;
    }
    if ((cVar3 < 'A') || ('P' < cVar3)) goto LAB_107bec7b;
    local_c = cVar3 + -0x41 >> 0x1f;
    lVar5 = __allmul(_Var1,0x10,0);
    _Var1 = lVar5 + CONCAT44(local_c,cVar3 + -0x41);
    DAT_11d89c9c = pcVar2 + 1;
    cVar3 = *DAT_11d89c9c;
  }
  cVar3 = *DAT_11d89c9c;
  DAT_11d89c9c = DAT_11d89c9c + 1;
  if (cVar3 != '@') {
LAB_107bec7b:
    DVar6 = 1;
LAB_107bec71:
    DName::DName(_param_1,DVar6);
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_107becb0;
    }
    DName::DName(local_20,_Var1);
  }
  else {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)FUN_107be566(_Var1);
      goto LAB_107becb0;
    }
    FUN_107be566(_Var1);
  }
  pDVar4 = (DName *)operator+(local_18,local_8);
LAB_107becb0:
  DName::DName(_param_1,pDVar4);
  return _param_1;
}


// ==== 107becc1 UnDecorator::getEnumType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  DName *pDVar2;
  DName *in_stack_00000004;
  char *pcVar3;
  DNameStatus DVar4;
  char local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  if (*DAT_11d89c9c == '\0') {
    DVar4 = 2;
LAB_107bed66:
    DName::DName(in_stack_00000004,DVar4);
    return in_stack_00000004;
  }
  switch(*DAT_11d89c9c) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_107becec_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    DVar4 = 1;
    goto LAB_107bed66;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_107becec_caseD_34:
  cVar1 = *DAT_11d89c9c;
  DAT_11d89c9c = DAT_11d89c9c + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = (DName *)operator+(local_14,(DName *)"unsigned ");
    DName::operator=((DName *)&local_c,pDVar2);
  }
  DName::DName(in_stack_00000004,(DName *)&local_c);
  return in_stack_00000004;
}


// ==== 107bed95 UnDecorator::getArgumentTypes

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentTypes(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArgumentTypes(void)

{
  char cVar1;
  DName *pDVar2;
  char *pcVar3;
  DName *in_stack_00000004;
  char local_14 [8];
  DName local_c [4];
  byte local_8;
  
  if (*DAT_11d89c9c == 'X') {
    pcVar3 = "void";
LAB_107bee4c:
    DAT_11d89c9c = DAT_11d89c9c + 1;
    DName::DName(in_stack_00000004,pcVar3);
    return in_stack_00000004;
  }
  if (*DAT_11d89c9c == 'Z') {
    pcVar3 = "...";
    if ((~(DAT_11d89cac >> 0x12) & 1) == 0) {
      pcVar3 = "<ellipsis>";
    }
    goto LAB_107bee4c;
  }
  getArgumentList();
  if (((local_8 & 0xf) == 0) && (cVar1 = *DAT_11d89c9c, cVar1 != '\0')) {
    if (cVar1 != '@') {
      if (cVar1 != 'Z') {
        DName::DName(in_stack_00000004,1);
        return in_stack_00000004;
      }
      DAT_11d89c9c = DAT_11d89c9c + 1;
      pDVar2 = (DName *)DName::operator+(local_c,local_14);
      goto LAB_107bee0a;
    }
    DAT_11d89c9c = DAT_11d89c9c + 1;
  }
  pDVar2 = local_c;
LAB_107bee0a:
  DName::DName(in_stack_00000004,pDVar2);
  return in_stack_00000004;
}


// ==== 107bee59 UnDecorator::getThrowTypes

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThrowTypes(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getThrowTypes(void)

{
  DName *pDVar1;
  DName *this;
  DName *in_stack_00000004;
  char *pcVar2;
  char cVar3;
  char local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_11d89c9c == '\0') {
    pcVar2 = local_14;
    pDVar1 = in_stack_00000004;
    this = (DName *)DName::DName((DName *)&local_c," throw(");
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)DName::operator+(this,(DNameStatus)pcVar2);
  }
  else {
    if (*DAT_11d89c9c == 'Z') {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      local_c = 0;
      local_8 = local_8 & 0xfffff000;
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    pDVar1 = in_stack_00000004;
    getArgumentTypes();
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)operator+(local_14,(DName *)" throw(");
  }
  DName::operator+(pDVar1,cVar3);
  return in_stack_00000004;
}


// ==== 107beed7 UnDecorator::getExtendedDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(char &,bool &,int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::getExtendedDataIndirectType(char *param_1,bool *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  DName *pDVar3;
  char *pcVar4;
  int in_stack_00000010;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  pcVar4 = (char *)((int)DAT_11d89c9c + 1);
  iVar2 = (int)*pcVar4;
  if (iVar2 == 0x41) {
    DAT_11d89c9c = pcVar4;
    if (in_stack_00000010 == 0) {
      *param_2 = (bool)(((*param_2 != true) - 1U & 199) + 0x5e);
    }
  }
  else if (iVar2 == 0x42) {
    DAT_11d89c9c = pcVar4;
    *(undefined1 *)param_3 = 1;
    DName::operator=((DName *)&local_c,'>');
  }
  else {
    if (iVar2 != 0x43) {
      uVar1 = (iVar2 + -0x30) * 0x10 + -0x30 + (int)*(char *)((int)DAT_11d89c9c + 2);
      DAT_11d89c9c = (char *)((int)DAT_11d89c9c + 3);
      if (1 < uVar1) {
        DName::operator=((DName *)&local_c,',');
        DName::DName(local_14,(ulonglong)uVar1);
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,local_1c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_24);
      DName::operator=((DName *)&local_c,pDVar3);
      if (*DAT_11d89c9c == '$') {
        DAT_11d89c9c = DAT_11d89c9c + 1;
      }
      else {
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_2c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      DAT_11d89c9c = DAT_11d89c9c + 1;
      local_8 = local_8 | 0x400;
      DName::DName((DName *)param_1,(DName *)&local_c);
      return param_1;
    }
    DAT_11d89c9c = pcVar4;
    *param_2 = true;
  }
  DAT_11d89c9c = DAT_11d89c9c + 1;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff000;
  return param_1;
}


// ==== 107beffc UnDecorator::getArrayType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  undefined4 uVar4;
  DName *pDVar5;
  DName *extraout_ECX;
  int iVar6;
  DName *in_stack_00000008;
  char cVar7;
  DName local_2c [8];
  undefined4 local_24 [2];
  DName local_1c [8];
  DName local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_11d89c9c == '\0') {
    iVar6 = DName::isEmpty(in_stack_00000008);
    cVar7 = (char)local_2c;
    puVar2 = local_24;
    if (iVar6 == 0) {
      pDVar3 = local_1c;
      pDVar5 = (DName *)operator+((char)local_14,(DName *)0x28);
      pDVar3 = (DName *)DName::operator+(pDVar5,(char *)pDVar3);
      goto LAB_107bf038;
    }
  }
  else {
    iVar1 = getNumberOfDimensions();
    iVar6 = iVar1;
    if (iVar1 < 0) {
      iVar6 = 0;
    }
    if (0 < iVar1) {
      local_c = 0;
      local_8 = local_8 & 0xfffff000;
      if (((byte)in_stack_00000008[4] & 0x80) != 0) {
        DName::operator+=((DName *)&local_c,"[]");
      }
      do {
        cVar7 = (char)local_1c;
        iVar6 = iVar6 + -1;
        getDimension(SUB41(local_24,0));
        pDVar3 = (DName *)operator+((char)local_2c,(DName *)0x5b);
        pDVar3 = (DName *)DName::operator+(pDVar3,cVar7);
        DName::operator+=((DName *)&local_c,pDVar3);
      } while (iVar6 != 0);
      iVar6 = DName::isEmpty(in_stack_00000008);
      if (iVar6 == 0) {
        pDVar3 = local_2c;
        pDVar5 = extraout_ECX;
        if (((byte)in_stack_00000008[4] & 0x80) == 0) {
          cVar7 = (char)local_24;
          pDVar5 = (DName *)operator+((char)local_1c,(DName *)0x28);
          pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
        }
        pDVar3 = (DName *)DName::operator+(pDVar5,pDVar3);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      getPrimaryDataType(local_14);
      local_10 = local_10 | 0x80;
      DName::DName(param_1,local_14);
      return param_1;
    }
    cVar7 = (char)local_14;
    puVar2 = &local_c;
  }
  pDVar3 = (DName *)DName::DName(local_1c,'[');
LAB_107bf038:
  pDVar3 = (DName *)DName::operator+(pDVar3,(DNameStatus)puVar2);
  uVar4 = DName::operator+(pDVar3,cVar7);
  FUN_107c20d5(param_1,uVar4);
  return param_1;
}


// ==== 107bf15b UnDecorator::getLexicalFrame

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getLexicalFrame(void)
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl UnDecorator::getLexicalFrame(void)

{
  DName *this;
  undefined4 in_stack_00000004;
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = in_stack_00000004;
  getDimension(true);
  cVar1 = (char)uVar2;
  this = (DName *)operator+(-0x14,(DName *)0x60);
  DName::operator+(this,cVar1);
  return in_stack_00000004;
}


// ==== 107bf1c2 UnDecorator::getVfTableType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVfTableType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVfTableType(DName *param_1)

{
  int iVar1;
  DName *this;
  DName *pDVar2;
  DName *this_00;
  DName *extraout_ECX;
  DName *extraout_ECX_00;
  DName *this_01;
  char *extraout_EDX;
  DName *in_stack_00000008;
  char cVar3;
  char *pcVar4;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  DName::DName(param_1,in_stack_00000008);
  iVar1 = DName::isValid(param_1);
  if ((iVar1 == 0) || (*DAT_11d89c9c == '\0')) {
    iVar1 = DName::isValid(this_00);
    if (iVar1 != 0) {
      pDVar2 = (DName *)operator+((DNameStatus)local_1c,(DName *)0x2);
      DName::operator=(param_1,pDVar2);
    }
  }
  else {
    getDataIndirectType();
    pDVar2 = local_14;
    this = (DName *)DName::operator+(local_c,(char)local_1c);
    pDVar2 = (DName *)DName::operator+(this,pDVar2);
    DName::operator=(param_1,pDVar2);
    iVar1 = DName::isValid(param_1);
    if (iVar1 != 0) {
      if (*DAT_11d89c9c != '@') {
        pcVar4 = "{for ";
        pDVar2 = extraout_ECX;
        do {
          DName::operator+=(pDVar2,pcVar4);
          do {
            iVar1 = DName::isValid(param_1);
            if (((iVar1 == 0) || (*DAT_11d89c9c == '\0')) || (*DAT_11d89c9c == '@')) {
              iVar1 = DName::isValid(param_1);
              if (iVar1 != 0) {
                if (*DAT_11d89c9c == '\0') {
                  DName::operator+=(this_01,2);
                }
                DName::operator+=(param_1,'}');
              }
              if (*DAT_11d89c9c != '@') {
                return param_1;
              }
              goto LAB_107bf2e5;
            }
            cVar3 = (char)local_1c;
            getScope();
            pDVar2 = (DName *)operator+((char)local_c,(DName *)0x60);
            pDVar2 = (DName *)DName::operator+(pDVar2,cVar3);
            DName::operator+=(param_1,pDVar2);
            if (*DAT_11d89c9c == '@') {
              DAT_11d89c9c = DAT_11d89c9c + 1;
            }
            iVar1 = DName::isValid(param_1);
          } while ((iVar1 == 0) || (*extraout_EDX == '@'));
          pcVar4 = "s ";
          pDVar2 = extraout_ECX_00;
        } while( true );
      }
LAB_107bf2e5:
      DAT_11d89c9c = DAT_11d89c9c + 1;
    }
  }
  return param_1;
}


// ==== 107bf312 UnDecorator::getStringEncoding

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStringEncoding(char *,int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::getStringEncoding(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  DNameStatus DVar3;
  undefined1 local_14 [8];
  DName local_c [8];
  
  DName::DName(local_c,(char *)param_2);
  pcVar1 = DAT_11d89c9c;
  cVar2 = *DAT_11d89c9c;
  DAT_11d89c9c = DAT_11d89c9c + 1;
  if ((cVar2 == '@') && (cVar2 = *DAT_11d89c9c, DAT_11d89c9c = pcVar1 + 2, cVar2 == '_')) {
    DAT_11d89c9c = pcVar1 + 3;
    getDimension(SUB41(local_14,0));
    getDimension(SUB41(local_14,0));
    cVar2 = *DAT_11d89c9c;
    if (cVar2 != '\0') {
      do {
        if (cVar2 == '@') break;
        DAT_11d89c9c = DAT_11d89c9c + 1;
        cVar2 = *DAT_11d89c9c;
      } while (cVar2 != '\0');
      if (*DAT_11d89c9c != '\0') {
        DAT_11d89c9c = DAT_11d89c9c + 1;
        DName::DName((DName *)param_1,local_c);
        return param_1;
      }
    }
    DAT_11d89c9c = DAT_11d89c9c + -1;
    DVar3 = 2;
  }
  else {
    DVar3 = 1;
  }
  DName::DName((DName *)param_1,DVar3);
  return param_1;
}


// ==== 107bf3b2 UnDecorator::getSignedDimension

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSignedDimension(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getSignedDimension(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_11d89c9c == '\0') {
    DName::DName(in_stack_00000004,2);
  }
  else if (*DAT_11d89c9c == '?') {
    DAT_11d89c9c = DAT_11d89c9c + 1;
    getDimension(true);
    operator+(SUB41(in_stack_00000004,0),(DName *)0x2d);
  }
  else {
    getDimension(SUB41(in_stack_00000004,0));
  }
  return in_stack_00000004;
}


// ==== 107bf402 UnDecorator::getTemplateConstant

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateConstant(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getTemplateConstant(void)

{
  int iVar1;
  char *pcVar2;
  DName *pDVar3;
  long lVar4;
  DName *in_stack_00000004;
  char cVar5;
  char *pcVar6;
  DNameStatus DVar7;
  DName local_d4 [8];
  char local_cc [16];
  DName local_bc [16];
  undefined1 local_ac [32];
  char local_8c [8];
  DName local_84 [8];
  char local_7c;
  char local_7b;
  char local_7a;
  undefined1 local_78 [96];
  char local_18 [8];
  DName local_10 [8];
  uint local_8;
  
  pcVar2 = DAT_11d89c9c;
  local_8 = DAT_10b171d4 ^ (uint)local_78;
  cVar5 = *DAT_11d89c9c;
  DAT_11d89c9c = DAT_11d89c9c + 1;
  if (cVar5 < 'E') {
    if (cVar5 == 'D') {
LAB_107bf591:
      getSignedDimension();
      if (((ushort)DAT_11d89cac & 0x4000) != 0) {
        DName::getString(local_84,local_18,0x10);
        lVar4 = _atol(local_18);
        pcVar2 = (char *)(*DAT_11d89cb0)(lVar4);
        if (pcVar2 != (char *)0x0) {
LAB_107bf505:
          DName::DName(in_stack_00000004,pcVar2);
          goto LAB_107bf6a9;
        }
      }
      if (cVar5 == 'D') {
        pcVar6 = "`template-parameter";
        pcVar2 = local_8c;
      }
      else {
        pcVar6 = "`non-type-template-parameter";
        pcVar2 = local_cc;
      }
      pDVar3 = (DName *)operator+(pcVar2,(DName *)pcVar6);
      DName::operator+(pDVar3,(char *)in_stack_00000004);
      goto LAB_107bf6a9;
    }
    if (cVar5 != '\0') {
      if (cVar5 == '0') {
        getSignedDimension();
        goto LAB_107bf6a9;
      }
      if (cVar5 == '1') {
        if (*DAT_11d89c9c == '@') {
          DAT_11d89c9c = pcVar2 + 2;
          pcVar2 = "NULL";
          goto LAB_107bf505;
        }
        getDecoratedName();
        pDVar3 = (DName *)DName::DName(local_bc,"&");
LAB_107bf4e4:
        DName::operator+(pDVar3,in_stack_00000004);
        goto LAB_107bf6a9;
      }
      if (cVar5 == '2') {
        getSignedDimension();
        getSignedDimension();
        iVar1 = DName::isValid(local_84);
        pcVar2 = DAT_11d89c9c;
        if ((iVar1 == 0) || (iVar1 = DName::isValid(local_10), pcVar2 = DAT_11d89c9c, iVar1 == 0))
        goto LAB_107bf53d;
        pcVar2 = DName::getString(local_84,&local_7b,100);
        if (pcVar2 != (char *)0x0) {
          local_7c = local_7b;
          if (local_7b == '-') {
            local_7b = local_7a;
            local_7a = '.';
          }
          else {
            local_7b = '.';
          }
          cVar5 = (char)local_ac;
          pDVar3 = (DName *)DName::DName(local_d4,&local_7c);
          pDVar3 = (DName *)DName::operator+(pDVar3,cVar5);
          goto LAB_107bf4e4;
        }
      }
      goto LAB_107bf49e;
    }
LAB_107bf53d:
    DAT_11d89c9c = pcVar2;
    DVar7 = 2;
  }
  else {
    if (cVar5 == 'E') {
      getDecoratedName();
      goto LAB_107bf6a9;
    }
    if ('E' < cVar5) {
      if (cVar5 < 'K') {
        DName::DName(local_84,'{');
        if (('G' < cVar5) && (cVar5 < 'K')) {
          pDVar3 = (DName *)getDecoratedName();
          DName::operator+=(local_84,pDVar3);
          DName::operator+=(local_84,',');
        }
        if (cVar5 == 'F') {
LAB_107bf665:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
          DName::operator+=(local_84,',');
LAB_107bf682:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
        }
        else {
          if (cVar5 == 'G') {
LAB_107bf648:
            pDVar3 = (DName *)getSignedDimension();
            DName::operator+=(local_84,pDVar3);
            DName::operator+=(local_84,',');
            goto LAB_107bf665;
          }
          if (cVar5 == 'H') goto LAB_107bf682;
          if (cVar5 == 'I') goto LAB_107bf665;
          if (cVar5 == 'J') goto LAB_107bf648;
        }
        DName::operator+(local_84,(char)in_stack_00000004);
        goto LAB_107bf6a9;
      }
      if (cVar5 == 'Q') goto LAB_107bf591;
      if (cVar5 == 'R') {
        getZName(SUB41(local_10,0));
        getSignedDimension();
        DName::DName(in_stack_00000004,local_10);
        goto LAB_107bf6a9;
      }
    }
LAB_107bf49e:
    DVar7 = 1;
  }
  DName::DName(in_stack_00000004,DVar7);
LAB_107bf6a9:
  __security_check_cookie(local_8 ^ (uint)local_78);
  return;
}


// ==== 107bf6bd UnDecorator::getPtrRefDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2)

{
  int iVar1;
  DName *pDVar2;
  int in_stack_0000000c;
  char *pcVar3;
  char local_14 [8];
  DName local_c [8];
  
  if (*DAT_11d89c9c == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if ((in_stack_0000000c != 0) && (*DAT_11d89c9c == 'X')) {
    DAT_11d89c9c = DAT_11d89c9c + 1;
    iVar1 = DName::isEmpty((DName *)param_2);
    if (iVar1 == 0) {
      operator+((char *)param_1,(DName *)"void ");
      return param_1;
    }
    DName::DName(param_1,"void");
    return param_1;
  }
  if (*DAT_11d89c9c == 'Y') {
    DAT_11d89c9c = DAT_11d89c9c + 1;
    getArrayType(param_1);
    return param_1;
  }
  FUN_107c20d5(local_c,param_2);
  if ((*(uint *)(param_2 + 4) & 0x400) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x200) == 0) goto LAB_107bf773;
    pcVar3 = "cli::pin_ptr<";
  }
  else {
    pcVar3 = "cli::array<";
  }
  pDVar2 = (DName *)operator+(local_14,(DName *)pcVar3);
  DName::operator=(local_c,pDVar2);
LAB_107bf773:
  DName::DName(param_1,local_c);
  return param_1;
}


// ==== 107bf7aa UnDecorator::getTemplateArgumentList

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateArgumentList(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getTemplateArgumentList(void)

{
  DName DVar1;
  char cVar2;
  char *pcVar3;
  DName *pDVar4;
  long lVar5;
  char *pcVar6;
  DName *in_stack_00000004;
  char *pcVar7;
  char local_5c [8];
  DName local_54 [8];
  char local_4c [8];
  char local_44 [8];
  char local_3c [8];
  undefined4 local_34;
  uint local_30;
  DName local_2c [8];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  DAT_11d89cb5 = 1;
  DVar1 = in_stack_00000004[4];
  local_24 = 1;
  do {
    if (((((byte)DVar1 & 0xf) != 0) || (*DAT_11d89c9c == '\0')) || (*DAT_11d89c9c == '@')) {
      DAT_11d89cb5 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_24 = 0;
    }
    pcVar3 = DAT_11d89c9c;
    cVar2 = *DAT_11d89c9c;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      pDVar4 = Replicator::operator[](DAT_11d89c98,(int)cVar2 - 0x30U);
    }
    else {
      local_20 = 0;
      local_1c = local_1c & 0xfffff000;
      if (cVar2 == 'X') {
        DAT_11d89c9c = DAT_11d89c9c + 1;
        pcVar7 = "void";
LAB_107bf852:
        DName::operator=((DName *)&local_20,pcVar7);
      }
      else {
        if ((cVar2 == '$') && (DAT_11d89c9c[1] != '$')) {
          DAT_11d89c9c = DAT_11d89c9c + 1;
          pDVar4 = (DName *)getTemplateConstant();
        }
        else if (cVar2 == '?') {
          getSignedDimension();
          if (((ushort)DAT_11d89cac & 0x4000) == 0) {
            pcVar7 = local_5c;
            pcVar6 = local_44;
          }
          else {
            DName::getString(local_2c,local_18,0x10);
            lVar5 = _atol(local_18);
            pcVar7 = (char *)(*DAT_11d89cb0)(lVar5);
            if (pcVar7 != (char *)0x0) goto LAB_107bf852;
            pcVar7 = local_3c;
            pcVar6 = local_4c;
          }
          pDVar4 = (DName *)operator+(pcVar6,(DName *)"`template-parameter");
          pDVar4 = (DName *)DName::operator+(pDVar4,pcVar7);
        }
        else {
          local_34 = 0;
          local_30 = local_30 & 0xfffff000;
          pDVar4 = (DName *)getPrimaryDataType(local_54);
        }
        DName::operator=((DName *)&local_20,pDVar4);
      }
      if ((1 < (int)DAT_11d89c9c - (int)pcVar3) && (*(int *)DAT_11d89c98 != 9)) {
        Replicator::operator+=(DAT_11d89c98,(DName *)&local_20);
      }
      pDVar4 = (DName *)&local_20;
    }
    DName::operator+=(in_stack_00000004,pDVar4);
    DVar1 = in_stack_00000004[4];
  } while( true );
}


// ==== 107bf962 UnDecorator::getOperatorName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  DName *pDVar5;
  DName *this;
  DName *pDVar6;
  DName *extraout_ECX;
  undefined3 in_stack_00000005;
  undefined1 *in_stack_0000000c;
  char *pcVar7;
  DNameStatus DVar8;
  undefined1 local_a4 [24];
  undefined1 local_8c [8];
  undefined1 local_84 [16];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  DName local_64 [16];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [16];
  undefined1 local_2c [8];
  char local_24 [8];
  undefined4 local_1c;
  uint local_18;
  DName local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar2 = *DAT_11d89c9c;
  local_8 = local_8 & 0xfffff000;
  local_18 = local_18 & 0xfffff000;
  bVar1 = false;
  pcVar3 = DAT_11d89c9c + 1;
  local_c = 0;
  local_1c = 0;
  if (cVar2 < 'B') {
    if (cVar2 == 'A') {
LAB_107bfe9d:
      cVar2 = *DAT_11d89c9c;
      DAT_11d89c9c = pcVar3;
      DName::operator=((DName *)&local_c,*(char **)("operator" + cVar2 * 4));
      pcVar3 = DAT_11d89c9c;
      if (bVar1) {
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          local_8 = local_8 | 0x20;
        }
      }
      else {
LAB_107bf9d3:
        DAT_11d89c9c = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          pDVar5 = (DName *)operator+(local_24,(DName *)"operator");
          DName::operator=((DName *)&local_c,pDVar5);
        }
      }
LAB_107bf9fc:
      pDVar5 = (DName *)&local_c;
LAB_107bf9ff:
      DName::DName(_param_1,pDVar5);
      return _param_1;
    }
    if (cVar2 == '\0') goto LAB_107bfae5;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_1c = 0;
        if ((char)param_2 != '\0') {
          DAT_11d89c9c = pcVar3;
          getTemplateArgumentList();
          pDVar5 = (DName *)operator+((char)local_a4,(DName *)0x3c);
          DName::operator+=((DName *)&local_1c,pDVar5);
          cVar2 = DName::getLastChar((DName *)&local_1c);
          if (cVar2 == '>') {
            DName::operator+=((DName *)&local_1c,' ');
          }
          DName::operator+=((DName *)&local_1c,'>');
          if (in_stack_0000000c != (undefined1 *)0x0) {
            *in_stack_0000000c = 1;
          }
          if (*DAT_11d89c9c == '\0') {
            pDVar5 = (DName *)&local_1c;
            goto LAB_107bf9ff;
          }
          pcVar3 = DAT_11d89c9c + 1;
        }
        DAT_11d89c9c = pcVar3;
        pDVar5 = (DName *)getZName(SUB41(local_3c,0));
        DName::operator=((DName *)&local_c,pDVar5);
        DAT_11d89c9c = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if ((iVar4 == 0) && (pcVar3[-1] == '1')) {
          pDVar5 = (DName *)operator+((char)local_8c,(DName *)0x7e);
          DName::operator=((DName *)&local_c,pDVar5);
        }
        iVar4 = DName::isEmpty((DName *)&local_1c);
        if (iVar4 == 0) {
          DName::operator+=((DName *)&local_c,extraout_ECX);
        }
        goto LAB_107bf9fc;
      }
      if (cVar2 < ':') {
        pcVar7 = *(char **)(&DAT_108fea48 + *DAT_11d89c9c * 4);
        DAT_11d89c9c = pcVar3;
        goto LAB_107bf9cb;
      }
    }
  }
  else {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_107bfe9d;
    }
    if (cVar2 < 'C') goto LAB_107bfbec;
    if (cVar2 < '[') goto LAB_107bfe9d;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_11d89c9c + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_107bfe7a:
          pcVar7 = *(char **)("__cdecl" + DAT_11d89c9c[1] * 4);
          DAT_11d89c9c = pcVar3;
LAB_107bfb63:
          DName::DName(_param_1,pcVar7);
          return _param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar7 = DAT_11d89c9c + 1;
            DAT_11d89c9c = pcVar3;
            DName::DName(local_14,(&PTR_s___pascal_108fead8)[*pcVar7]);
            local_10 = local_10 | 0x800;
LAB_107bfb9a:
            pDVar5 = local_14;
            goto LAB_107bf9ff;
          }
          if (cVar2 == '\0') {
LAB_107bfae5:
            pcVar3 = pcVar3 + -1;
LAB_107bfaeb:
            DAT_11d89c9c = pcVar3;
            DVar8 = 2;
            goto LAB_107bfaed;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar7 = (&PTR_s___pascal_108fead8)[DAT_11d89c9c[1]];
              DAT_11d89c9c = pcVar3;
              goto LAB_107bf9cb;
            }
            if (cVar2 < '9') {
              pcVar7 = (&PTR_s___pascal_108fead8)[DAT_11d89c9c[1]];
              DAT_11d89c9c = pcVar3;
              goto LAB_107bfb63;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_11d89c9c + 3;
          if (cVar2 == '\0') goto LAB_107bfae5;
          if (cVar2 == '0') {
            pcVar7 = "`anonymous namespace\'";
            DAT_11d89c9c = pcVar3;
LAB_107bfbc1:
            getStringEncoding((char *)local_14,(int)pcVar7);
            local_10 = local_10 | 0x100;
            goto LAB_107bfb9a;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_107bfe7a;
          if (cVar2 == 'C') {
            pcVar7 = "`string\'";
            DAT_11d89c9c = pcVar3;
            goto LAB_107bfbc1;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_107bfe7a;
        pDVar5 = _param_1;
        if (cVar2 == 'P') {
          pcVar7 = DAT_11d89c9c + 1;
          DAT_11d89c9c = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar7 * 4));
          pDVar6 = (DName *)getOperatorName(SUB41(local_84,0),(bool *)0x0);
          DName::operator=((DName *)&local_1c,pDVar6);
          iVar4 = DName::isEmpty((DName *)&local_1c);
          if ((iVar4 != 0) || (pcVar3 = DAT_11d89c9c, (local_18 & 0x40) == 0)) {
LAB_107bfc6e:
            pDVar6 = (DName *)&local_c;
LAB_107bfc78:
            DName::operator+(pDVar6,pDVar5);
            return _param_1;
          }
        }
        else {
          if (cVar2 == 'Q') goto LAB_107bf9d3;
          if (cVar2 == 'R') {
            pcVar7 = DAT_11d89c9c + 1;
            DAT_11d89c9c = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar7 * 4));
            DName::operator=((DName *)&local_1c,*(char **)(&DAT_108fea3c + *DAT_11d89c9c * 4));
            pcVar3 = DAT_11d89c9c;
            iVar4 = (int)*DAT_11d89c9c;
            DAT_11d89c9c = DAT_11d89c9c + 1;
            if (iVar4 == 0x30) {
              getDataType(local_14);
              pDVar6 = local_64;
              this = (DName *)DName::operator+(local_14,(char)local_74);
              pDVar6 = (DName *)DName::operator+(this,pDVar6);
              goto LAB_107bfc78;
            }
            if (iVar4 == 0x31) {
              DName::operator+((DName *)&local_c,local_14);
              cVar2 = (char)local_4c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_2c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_6c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_44;
              pDVar5 = (DName *)getDimension(SUB41(local_54,0));
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              DName::operator+(local_14,param_1);
              return _param_1;
            }
            if (iVar4 - 0x32U < 3) goto LAB_107bfc6e;
            goto LAB_107bfaeb;
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar7 = *(char **)("__cdecl" + DAT_11d89c9c[1] * 4);
          DAT_11d89c9c = pcVar3;
LAB_107bf9cb:
          DName::operator=((DName *)&local_c,pcVar7);
          pcVar3 = DAT_11d89c9c;
          goto LAB_107bf9d3;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_107bfe7a;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_11d89c9c + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar7 = DAT_11d89c9c + 2;
                  DAT_11d89c9c = pcVar3;
                  DName::DName(local_14,(&PTR_DAT_108feb20)[*pcVar7]);
                  if (*DAT_11d89c9c == '?') {
                    pDVar5 = (DName *)getDecoratedName();
                    DName::operator+=(local_14,pDVar5);
                    if (*DAT_11d89c9c == '@') {
                      DAT_11d89c9c = DAT_11d89c9c + 1;
                    }
                  }
                  else {
                    pDVar5 = (DName *)getSymbolName();
                    DName::operator+=(local_14,pDVar5);
                  }
                  DName::operator+=(local_14,"\'\'");
                  goto LAB_107bfb9a;
                }
                if ('J' < cVar2) goto LAB_107bfbec;
              }
              pcVar7 = (&PTR_DAT_108feb20)[DAT_11d89c9c[2]];
              DAT_11d89c9c = pcVar3;
              goto LAB_107bfb63;
            }
          }
        }
      }
    }
  }
LAB_107bfbec:
  DAT_11d89c9c = pcVar3;
  DVar8 = 1;
LAB_107bfaed:
  DName::DName(_param_1,DVar8);
  return _param_1;
}


// ==== 107bfed1 UnDecorator::getTemplateName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getTemplateName(bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  DName *pDVar5;
  int iVar6;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  Replicator local_d4 [60];
  Replicator local_98 [60];
  Replicator local_5c [60];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  uVar3 = DAT_11d89c98;
  uVar2 = DAT_11d89c94;
  uVar1 = DAT_11d89c90;
  if ((*DAT_11d89c9c == '?') && (DAT_11d89c9c[1] == '$')) {
    DAT_11d89c9c = DAT_11d89c9c + 2;
    Replicator::Replicator(local_98);
    Replicator::Replicator(local_5c);
    Replicator::Replicator(local_d4);
    local_10 = 0;
    local_c = local_c & 0xfffff000;
    DAT_11d89c90 = local_98;
    DAT_11d89c94 = local_5c;
    DAT_11d89c98 = local_d4;
    local_5 = '\0';
    if (*DAT_11d89c9c == '?') {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      pDVar5 = (DName *)getOperatorName(SUB41(local_18,0),(bool *)0x1);
    }
    else {
      pDVar5 = (DName *)getZName(SUB41(local_18,0));
    }
    DName::operator=((DName *)&local_10,pDVar5);
    iVar6 = DName::isEmpty((DName *)&local_10);
    if (iVar6 != 0) {
      DAT_11d89cb4 = 1;
    }
    if (local_5 == '\0') {
      getTemplateArgumentList();
      pDVar5 = (DName *)operator+((char)local_20,(DName *)0x3c);
      DName::operator+=((DName *)&local_10,pDVar5);
      cVar4 = DName::getLastChar((DName *)&local_10);
      if (cVar4 == '>') {
        DName::operator+=((DName *)&local_10,' ');
      }
      DName::operator+=((DName *)&local_10,'>');
      if (in_stack_00000008 != '\0') {
        DAT_11d89c9c = DAT_11d89c9c + 1;
      }
    }
    DAT_11d89c90 = (Replicator *)uVar1;
    DAT_11d89c94 = (Replicator *)uVar2;
    DAT_11d89c98 = (Replicator *)uVar3;
    DName::DName(_param_1,(DName *)&local_10);
  }
  else {
    DName::DName(_param_1,1);
  }
  return _param_1;
}


// ==== 107c0024 UnDecorator::getZName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getZName(bool)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getZName(bool param_1)

{
  DName *pDVar1;
  long lVar2;
  DName *pDVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName local_3c [8];
  DName local_34 [8];
  DName *local_2c;
  DName local_28 [8];
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  uVar4 = (int)*DAT_11d89c9c - 0x30;
  local_2c = _param_1;
  if (uVar4 < 10) {
    DAT_11d89c9c = DAT_11d89c9c + 1;
    pDVar1 = Replicator::operator[](DAT_11d89c94,uVar4);
    DName::DName(_param_1,pDVar1);
    goto LAB_107c0201;
  }
  local_20 = 0;
  local_1c = local_1c & 0xfffff000;
  if (*DAT_11d89c9c == '?') {
    pDVar1 = (DName *)getTemplateName(SUB41(local_28,0));
    DName::operator=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_11d89c9c + 1;
    if (*DAT_11d89c9c != '@') {
      DName::operator=((DName *)&local_20,(*DAT_11d89c9c == '\0') + 1);
      pcVar7 = DAT_11d89c9c;
    }
  }
  else {
    pcVar5 = "template-parameter-";
    pcVar8 = "template-parameter-";
    iVar6 = 0x12;
    pcVar7 = DAT_11d89c9c;
    do {
      if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*pcVar7 == *pcVar8) {
      DAT_11d89c9c = DAT_11d89c9c + 0x13;
    }
    else {
      pcVar5 = "generic-type-";
      pcVar8 = "generic-type-";
      iVar6 = 0xc;
      pcVar7 = DAT_11d89c9c;
      do {
        if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (*pcVar7 != *pcVar8) {
        pDVar1 = (DName *)DName::DName(local_34,&DAT_11d89c9c,'@');
        DName::operator=((DName *)&local_20,pDVar1);
        pcVar7 = DAT_11d89c9c;
        goto LAB_107c01d8;
      }
      DAT_11d89c9c = DAT_11d89c9c + 0xd;
    }
    getSignedDimension();
    if (((ushort)DAT_11d89cac & 0x4000) == 0) {
      DName::operator=((DName *)&local_20,"`");
      pDVar1 = local_34;
      pDVar3 = local_3c;
    }
    else {
      DName::getString(local_28,local_18,0x10);
      lVar2 = _atol(local_18);
      pcVar7 = (char *)(*DAT_11d89cb0)(lVar2);
      if (pcVar7 != (char *)0x0) {
        DName::operator=((DName *)&local_20,pcVar7);
        pcVar7 = DAT_11d89c9c;
        goto LAB_107c01d8;
      }
      DName::operator=((DName *)&local_20,"`");
      pDVar1 = local_3c;
      pDVar3 = local_34;
    }
    pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar5);
    pDVar1 = (DName *)DName::operator+(pDVar3,(char *)pDVar1);
    DName::operator+=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_11d89c9c;
  }
LAB_107c01d8:
  DAT_11d89c9c = pcVar7;
  if ((in_stack_00000008 != '\0') && (*(int *)DAT_11d89c94 != 9)) {
    Replicator::operator+=(DAT_11d89c94,(DName *)&local_20);
  }
  DName::DName(local_2c,(DName *)&local_20);
LAB_107c0201:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107c020e UnDecorator::getScopedName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScopedName(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getScopedName(void)

{
  DName *pDVar1;
  DName *pDVar2;
  int iVar3;
  DName *this;
  DName *in_stack_00000004;
  char *pcVar4;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  pDVar1 = (DName *)getZName(SUB41(local_c,0));
  DName::operator=(in_stack_00000004,pDVar1);
  if ((((byte)in_stack_00000004[4] & 0xf) == 0) && (*DAT_11d89c9c != '\0')) {
    if (*DAT_11d89c9c == '@') goto LAB_107c0287;
    pDVar1 = local_c;
    pcVar4 = local_14;
    pDVar2 = (DName *)getScope();
    pDVar2 = (DName *)DName::operator+(pDVar2,pcVar4);
    pDVar1 = (DName *)DName::operator+(pDVar2,pDVar1);
    DName::operator=(in_stack_00000004,pDVar1);
  }
  if (*DAT_11d89c9c != '@') {
    if (*DAT_11d89c9c == '\0') {
      iVar3 = DName::isEmpty(in_stack_00000004);
      if (iVar3 != 0) {
        DName::operator=(this,2);
        return in_stack_00000004;
      }
      pDVar1 = local_1c;
      pcVar4 = local_14;
      pDVar2 = (DName *)DName::DName(local_c,2);
      pDVar2 = (DName *)DName::operator+(pDVar2,pcVar4);
      pDVar1 = (DName *)DName::operator+(pDVar2,pDVar1);
      DName::operator=(in_stack_00000004,pDVar1);
      return in_stack_00000004;
    }
    *(undefined4 *)in_stack_00000004 = 0;
    if (((byte)*(uint *)(in_stack_00000004 + 4) & 0xf) == 3) {
      return in_stack_00000004;
    }
    *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffffff1 | 1;
    return in_stack_00000004;
  }
LAB_107c0287:
  DAT_11d89c9c = DAT_11d89c9c + 1;
  return in_stack_00000004;
}


// ==== 107c0301 UnDecorator::getECSUDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUDataType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getECSUDataType(void)

{
  char cVar1;
  DName *pDVar2;
  uint uVar3;
  uint uVar4;
  DName *in_stack_00000004;
  char *pcVar5;
  char local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar5 = DAT_11d89c9c;
  uVar4 = 1;
  uVar3 = ~(DAT_11d89cac >> 0xf) & 1;
  if ((uVar3 == 0) || ((DAT_11d89cac & 0x1000) != 0)) {
    uVar4 = 0;
  }
  cVar1 = *DAT_11d89c9c;
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  DAT_11d89c9c = DAT_11d89c9c + 1;
  if (cVar1 == '\0') {
    DAT_11d89c9c = pcVar5;
    DName::DName(in_stack_00000004,"nknown ecsu\'");
    return in_stack_00000004;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      getEnumType();
      pDVar2 = (DName *)operator+(local_1c,(DName *)"enum ");
      DName::operator=((DName *)&local_c,pDVar2);
      goto LAB_107c03ac;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar3 = uVar4;
      if (cVar1 != 'Y') goto LAB_107c03ac;
      pcVar5 = "cointerface ";
    }
  }
  DName::operator=((DName *)&local_c,pcVar5);
  uVar3 = uVar4;
LAB_107c03ac:
  local_14 = 0;
  local_10 = local_10 & 0xfffff000;
  if (uVar3 != 0) {
    DName::operator=((DName *)&local_14,(DName *)&local_c);
  }
  getScopedName();
  DName::operator+=((DName *)&local_14,(DName *)&local_c);
  DName::DName(in_stack_00000004,(DName *)&local_14);
  return in_stack_00000004;
}


// ==== 107c0401 UnDecorator::getSymbolName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSymbolName(void)
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl UnDecorator::getSymbolName(void)

{
  undefined4 in_stack_00000004;
  bool bVar1;
  
  bVar1 = SUB41(in_stack_00000004,0);
  if (*DAT_11d89c9c == '?') {
    if (DAT_11d89c9c[1] == '$') {
      getTemplateName(bVar1);
    }
    else {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      getOperatorName(bVar1,(bool *)0x0);
    }
  }
  else {
    getZName(bVar1);
  }
  return in_stack_00000004;
}


// ==== 107c0447 UnDecorator::getBasedType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasedType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getBasedType(void)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  DName local_c [8];
  
  pcVar2 = UScore(0);
  DName::DName(local_c,pcVar2);
  if (*DAT_11d89c9c == '\0') {
    DName::operator+=(local_c,2);
  }
  else {
    cVar1 = *DAT_11d89c9c;
    DAT_11d89c9c = DAT_11d89c9c + 1;
    if (cVar1 == '0') {
      DName::operator+=(local_c,"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = (DName *)getScopedName();
      DName::operator+=(local_c,pDVar3);
    }
    else if (cVar1 == '5') {
      DName::DName(in_stack_00000004,1);
      return in_stack_00000004;
    }
  }
  DName::operator+=(local_c,") ");
  DName::DName(in_stack_00000004,local_c);
  return in_stack_00000004;
}


// ==== 107c04d9 UnDecorator::composeDeclaration

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1)

{
  uint uVar1;
  uint uVar2;
  DName *pDVar3;
  DName *pDVar4;
  int iVar5;
  uint uVar6;
  DName *pDVar7;
  DName *pDVar8;
  bool bVar9;
  DName *in_stack_00000008;
  char cVar10;
  char cVar11;
  char cVar12;
  char *pcVar13;
  DName local_70 [8];
  char local_68 [8];
  DName local_60 [8];
  DName local_58 [8];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  DName local_20 [4];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  local_28 = 0;
  local_24 = local_24 & 0xfffff000;
  uVar1 = getTypeEncoding();
  local_1c = DName::isUDC(in_stack_00000008);
  if (uVar1 == 0xffff) {
    DName::DName(param_1,1);
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    DName::DName(param_1,in_stack_00000008);
    return param_1;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_107c0ad9:
    DName::operator+=((DName *)&local_28,in_stack_00000008);
    if (local_8 == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        getVfTableType(param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        getDimension(SUB41(&local_50,0));
        pDVar3 = local_70;
        pDVar4 = param_1;
        pDVar8 = (DName *)DName::operator+((DName *)&local_28,(char)local_68);
        pDVar3 = (DName *)DName::operator+(pDVar8,pDVar3);
        DName::operator+(pDVar3,(char *)pDVar4);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        getVdispMapType(param_1);
        return param_1;
      }
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar13 = "`template static data member constructor helper\'";
        goto LAB_107c0c82;
      }
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar13 = "`template static data member destructor helper\'";
        goto LAB_107c0c82;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_107c1007;
        goto LAB_107c0ca1;
      }
LAB_107c0ca7:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar13 = "`local static destructor helper\'";
LAB_107c0c82:
      DName::operator+=((DName *)&local_28,pcVar13);
LAB_107c0ca1:
      if (local_8 != 0) goto LAB_107c0ca7;
      uVar2 = uVar1 & 0x6000;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      pDVar3 = (DName *)getExternalDataType(local_70);
    }
    else {
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)&DAT_108fef18);
    }
LAB_107c0d28:
    DName::operator=((DName *)&local_28,pDVar3);
  }
  else {
    local_14 = uVar1 & 0x1800;
    local_c = (uint)(local_14 == 0x800);
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_107c0ad9;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_107c0ad9;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_11d89cac >> 1) & 1) == 0) || ((~(DAT_11d89cac >> 3) & 1) == 0)) {
        pDVar3 = (DName *)getBasedType();
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        getBasedType();
        pDVar3 = (DName *)operator+((char)&local_48,(DName *)0x20);
        DName::operator=((DName *)&local_28,pDVar3);
      }
    }
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 == 0) || (local_14 != 0x1800)) {
      local_3c = local_3c & 0xfffff000;
      local_34 = local_34 & 0xfffff000;
      local_14 = local_14 & 0xfffff000;
      local_44 = local_44 & 0xfffff000;
      local_2c = local_2c & 0xfffff000;
      local_40 = 0;
      local_38 = 0;
      local_18 = 0;
      local_48 = 0;
      local_30 = 0;
      if (local_c == 0) {
        uVar2 = uVar1 & 0x1000;
      }
      else {
        uVar2 = uVar1 & 0x400;
      }
      if (uVar2 != 0) {
        if (local_c != 0) {
          if ((uVar1 & 0x700) == 0x600) {
            getDimension(SUB41(&local_50,0));
            DName::operator=((DName *)&local_40,(DName *)&local_50);
            getDimension(SUB41(&local_50,0));
            DName::operator=((DName *)&local_38,(DName *)&local_50);
          }
          else if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_107c07d9;
          getDimension(SUB41(&local_50,0));
          DName::operator=((DName *)&local_18,(DName *)&local_50);
        }
LAB_107c07d9:
        getDimension(SUB41(&local_50,0));
        DName::operator=((DName *)&local_48,(DName *)&local_50);
      }
      if ((local_c != 0) && ((uVar1 & 0x700) != 0x200)) {
        if (((byte)DAT_11d89cac & 0x60) == 0x60) {
          pDVar3 = (DName *)getThisType();
          DName::operator|=((DName *)&local_30,pDVar3);
        }
        else {
          pDVar3 = (DName *)getThisType();
          DName::operator=((DName *)&local_30,pDVar3);
        }
      }
      if (((~(DAT_11d89cac >> 1) & 1) == 0) || ((~(DAT_11d89cac >> 4) & 1) == 0)) {
        pDVar3 = (DName *)getCallingConvention();
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        pDVar3 = (DName *)&local_50;
        pDVar4 = (DName *)getCallingConvention();
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      iVar5 = DName::isEmpty(in_stack_00000008);
      if (iVar5 == 0) {
        iVar5 = DName::isEmpty((DName *)&local_28);
        if ((iVar5 == 0) && ((DAT_11d89cac & 0x1000) == 0)) {
          pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
          DName::operator+=((DName *)&local_28,pDVar3);
        }
        else {
          DName::operator=((DName *)&local_28,in_stack_00000008);
        }
      }
      local_4c = local_4c & 0xfffff000;
      pDVar3 = (DName *)0x0;
      local_50 = 0;
      if (local_1c == 0) {
        pDVar3 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,8,0);
        if (pDVar3 == (DName *)0x0) {
          pDVar3 = (DName *)0x0;
        }
        else {
          *(undefined4 *)pDVar3 = 0;
          *(uint *)(pDVar3 + 4) = *(uint *)(pDVar3 + 4) & 0xfffff000;
        }
        pDVar4 = (DName *)getReturnType(local_58);
        DName::operator=((DName *)&local_50,pDVar4);
      }
      else {
        getReturnType(local_58);
        pDVar4 = (DName *)operator+((char *)local_20,(DName *)&DAT_108fef18);
        DName::operator+=((DName *)&local_28,pDVar4);
        if ((DAT_11d89cac & 0x1000) != 0) goto LAB_107c1007;
      }
      uVar2 = local_c;
      if (local_c == 0) {
        uVar6 = uVar1 & 0x1000;
      }
      else {
        uVar6 = uVar1 & 0x400;
      }
      if (uVar6 != 0) {
        if (local_c == 0) {
LAB_107c0a07:
          DName::operator+=((DName *)&local_28,"`adjustor{");
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            cVar12 = (char)local_58;
            pDVar4 = local_20;
            cVar11 = (char)local_10;
            pDVar8 = local_60;
            cVar10 = (char)local_68;
            pDVar7 = (DName *)operator+((char *)local_70,(DName *)"`vtordispex{");
            pDVar7 = (DName *)DName::operator+(pDVar7,cVar10);
            pDVar8 = (DName *)DName::operator+(pDVar7,pDVar8);
            pDVar8 = (DName *)DName::operator+(pDVar8,cVar11);
            pDVar4 = (DName *)DName::operator+(pDVar8,pDVar4);
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_107c0a07;
            cVar12 = (char)local_70;
            pDVar4 = (DName *)operator+(local_68,(DName *)"`vtordisp{");
          }
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
          DName::operator+=((DName *)&local_28,pDVar4);
        }
        pDVar4 = (DName *)DName::operator+((DName *)&local_48,(char *)local_70);
        DName::operator+=((DName *)&local_28,pDVar4);
      }
      cVar12 = (char)local_70;
      getArgumentTypes();
      pDVar4 = (DName *)operator+((char)local_60,(DName *)0x28);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
      DName::operator+=((DName *)&local_28,pDVar4);
      if ((uVar2 != 0) && ((uVar1 & 0x700) != 0x200)) {
        DName::operator+=((DName *)&local_28,(DName *)&local_30);
      }
      if ((~(DAT_11d89cac >> 8) & 1) == 0) {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_28,pDVar4);
      }
      else {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_28,pDVar4);
      }
      if (((~(DAT_11d89cac >> 2) & 1) == 0) || (pDVar3 == (DName *)0x0)) goto LAB_107c0d31;
      DName::operator=(pDVar3,(DName *)&local_28);
      pDVar3 = (DName *)&local_50;
      goto LAB_107c0d28;
    }
    getDimension(SUB41(&local_50,0));
    pDVar3 = (DName *)&local_48;
    pDVar4 = (DName *)DName::operator+(in_stack_00000008,(char)&local_40);
    pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
    DName::operator+=((DName *)&local_28,pDVar3);
    getVCallThunkType();
    if ((DAT_11d89cac & 0x1000) == 0) {
      pcVar13 = (char *)&local_48;
      pDVar3 = (DName *)operator+((char)&local_40,(DName *)&DAT_0000002c);
      pDVar3 = (DName *)DName::operator+(pDVar3,pcVar13);
      DName::operator+=((DName *)&local_28,pDVar3);
    }
    DName::operator+=((DName *)&local_28,"}\'");
    getCallingConvention();
    if ((((~(DAT_11d89cac >> 1) & 1) != 0) && ((~(DAT_11d89cac >> 4) & 1) != 0)) &&
       ((DAT_11d89cac & 0x1000) == 0)) {
      pDVar3 = (DName *)&local_48;
      cVar12 = (char)&local_40;
      pDVar4 = (DName *)operator+((char)&local_38,(DName *)0x20);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
      pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
      goto LAB_107c0d28;
    }
  }
LAB_107c0d31:
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    if ((~(DAT_11d89cac >> 9) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if ((uVar2 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)"static ");
        DName::operator=((DName *)&local_28,pDVar3);
      }
      if (local_8 == 0) {
LAB_107c0def:
        uVar2 = uVar1 & 0x6000;
LAB_107c0df3:
        if (uVar2 == 0) {
          uVar2 = uVar1 & 0x400;
        }
        else {
          uVar2 = uVar1 & 0x1000;
        }
        if (uVar2 == 0) goto LAB_107c0ea4;
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x500)) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x600)) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x6000;
            }
            else {
              uVar2 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_107c0ea4;
          }
        }
      }
      else if ((uVar1 & 0x700) != 0x100) {
        if (local_8 == 0) goto LAB_107c0def;
        uVar2 = (uVar1 & 0x1800) - 0x800;
        goto LAB_107c0df3;
      }
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)"virtual ");
      DName::operator=((DName *)&local_28,pDVar3);
    }
LAB_107c0ea4:
    if ((~(DAT_11d89cac >> 7) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        if (local_8 == 0) {
          bVar9 = (uVar1 & 0x1800) != 0x800;
        }
        else {
          bVar9 = ((byte)uVar1 & 0xc0) != 0x40;
        }
        if (bVar9) goto LAB_107c0ef8;
        pcVar13 = "private: ";
LAB_107c0f73:
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)pcVar13);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      else {
LAB_107c0ef8:
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            bVar9 = (uVar1 & 0x1800) != 0x1000;
          }
          else {
            bVar9 = ((byte)uVar1 & 0xc0) != 0x80;
          }
          if (!bVar9) {
            pcVar13 = "protected: ";
            goto LAB_107c0f73;
          }
        }
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x1800;
          }
          else {
            uVar2 = uVar1 & 0xc0;
          }
          if (uVar2 == 0) {
            pcVar13 = "public: ";
            goto LAB_107c0f73;
          }
        }
      }
    }
  }
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    uVar2 = uVar1 & 0x400;
  }
  else {
    uVar2 = uVar1 & 0x1000;
  }
  if ((uVar2 != 0) && ((DAT_11d89cac & 0x1000) == 0)) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)"[thunk]:");
    DName::operator=((DName *)&local_28,pDVar3);
  }
  if ((uVar1 & 0x10000) != 0) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)"extern \"C\" ");
    DName::operator=((DName *)&local_28,pDVar3);
  }
LAB_107c1007:
  DName::DName(param_1,(DName *)&local_28);
  return param_1;
}


// ==== 107c101b UnDecorator::getDecoratedName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDecoratedName(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  DName *pDVar4;
  DName *pDVar5;
  uint extraout_EDX;
  uint uVar6;
  DName *in_stack_00000004;
  DNameStatus DVar7;
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [4];
  uint local_8;
  
  if ((DAT_11d89cac & 0x2000) == 0) {
    if (*DAT_11d89c9c != '?') {
      if (*DAT_11d89c9c == '\0') {
        DVar7 = 2;
        goto LAB_107c121d;
      }
LAB_107c11cb:
      DVar7 = 1;
LAB_107c121d:
      DName::DName(in_stack_00000004,DVar7);
      return in_stack_00000004;
    }
    pcVar2 = DAT_11d89c9c + 1;
    if ((*pcVar2 != '?') || (DAT_11d89c9c[2] != '?')) {
      DAT_11d89c9c = pcVar2;
      getSymbolName();
      iVar3 = DName::isEmpty(local_c);
      if ((iVar3 == 0) && ((local_8 & 0x20) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      uVar6 = local_8 >> 0xb;
      iVar3 = DName::isValid(local_c);
      if (iVar3 != 0) {
        if ((*DAT_11d89c9c != '\0') && (*DAT_11d89c9c != '@')) {
          getScope();
          iVar3 = DName::isEmpty((DName *)&local_14);
          if (iVar3 == 0) {
            if (DAT_11d89cb4 == '\0') {
              pDVar4 = local_24;
              pDVar5 = local_1c;
            }
            else {
              DAT_11d89cb4 = '\0';
              pDVar4 = (DName *)DName::operator+(local_c,local_1c);
              DName::operator=(local_c,pDVar4);
              if (*DAT_11d89c9c == '@') goto LAB_107c1180;
              pDVar4 = (DName *)getScope();
              DName::operator=((DName *)&local_14,pDVar4);
              pDVar4 = local_1c;
              pDVar5 = local_24;
            }
            pDVar5 = (DName *)DName::operator+((DName *)&local_14,(char *)pDVar5);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(local_c,pDVar4);
          }
        }
LAB_107c1180:
        if ((bVar1) && (iVar3 = DName::isEmpty(local_c), iVar3 == 0)) {
          local_8 = local_8 | 0x20;
        }
        if ((uVar6 & 1) != 0) {
          local_8 = local_8 | 0x800;
        }
        iVar3 = DName::isEmpty(local_c);
        if ((iVar3 == 0) && ((local_8 & 0x100) == 0)) {
          if (*DAT_11d89c9c != '\0') {
            if (*DAT_11d89c9c != '@') goto LAB_107c11cb;
            DAT_11d89c9c = DAT_11d89c9c + 1;
          }
          if ((((DAT_11d89cac & 0x1000) == 0) || (bVar1)) || ((local_8 & extraout_EDX) != 0)) {
            composeDeclaration(in_stack_00000004);
            return in_stack_00000004;
          }
          local_14 = 0;
          local_10 = local_10 & 0xfffff000;
          composeDeclaration(local_24);
        }
      }
      pDVar4 = local_c;
      goto LAB_107c1050;
    }
    DAT_11d89c9c = pcVar2;
    getDecoratedName();
    for (; *DAT_11d89c9c != '\0'; DAT_11d89c9c = DAT_11d89c9c + 1) {
    }
  }
  else {
    DAT_11d89cac = DAT_11d89cac & 0xffffdfff;
    getDataType((DName *)&local_14);
    DAT_11d89cac = DAT_11d89cac | 0x2000;
  }
  pDVar4 = (DName *)&local_14;
LAB_107c1050:
  DName::DName(in_stack_00000004,pDVar4);
  return in_stack_00000004;
}


// ==== 107c122c UnDecorator::getScope

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScope(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getScope(void)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  DName *pDVar4;
  DName *pDVar5;
  DName *this;
  char *pcVar6;
  DName *this_00;
  DName *in_stack_00000004;
  char cVar7;
  char local_94 [8];
  DName local_8c [8];
  DName local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  char local_5c [8];
  DName local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  *(undefined4 *)in_stack_00000004 = 0;
  bVar1 = false;
  if ((*(uint *)(in_stack_00000004 + 4) & 0xf) == 0) {
    do {
      if ((*DAT_11d89c9c == '\0') || (*DAT_11d89c9c == '@')) break;
      if ((DAT_11d89cb4 != '\0') && (DAT_11d89cb5 == '\0')) {
        return in_stack_00000004;
      }
      iVar3 = DName::isEmpty(in_stack_00000004);
      if (iVar3 == 0) {
        pDVar4 = (DName *)operator+(local_94,(DName *)&DAT_108fedc4);
        DName::operator=(in_stack_00000004,pDVar4);
        if (bVar1) {
          pDVar4 = (DName *)operator+((char)local_7c,(DName *)0x5b);
          DName::operator=(in_stack_00000004,pDVar4);
          bVar1 = false;
        }
      }
      if (*DAT_11d89c9c == '?') {
        pcVar6 = DAT_11d89c9c + 1;
        cVar7 = *pcVar6;
        if (cVar7 == '$') {
          pDVar4 = local_6c;
          uVar2 = SUB41(local_14,0);
          goto LAB_107c1423;
        }
        if (cVar7 != '%') {
          if (cVar7 != '?') {
            if (cVar7 == 'A') goto LAB_107c13cb;
            if (cVar7 != 'I') {
              pDVar4 = local_8c;
              DAT_11d89c9c = pcVar6;
              pDVar5 = (DName *)getLexicalFrame();
              goto LAB_107c142d;
            }
            pDVar4 = local_84;
            cVar7 = (char)local_44;
            DAT_11d89c9c = DAT_11d89c9c + 2;
            pDVar5 = (DName *)getZName(SUB41(local_74,0));
            pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            bVar1 = true;
            goto LAB_107c143c;
          }
          if ((DAT_11d89c9c[2] == '_') && (DAT_11d89c9c[3] == '?')) {
            pDVar4 = local_54;
            DAT_11d89c9c = DAT_11d89c9c + 2;
            pDVar5 = (DName *)getOperatorName(SUB41(local_2c,0),(bool *)0x0);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            if (*DAT_11d89c9c == '@') {
              DAT_11d89c9c = DAT_11d89c9c + 1;
            }
            goto LAB_107c143c;
          }
          pDVar4 = local_64;
          cVar7 = (char)local_34;
          DAT_11d89c9c = pcVar6;
          getDecoratedName();
          pDVar5 = (DName *)operator+((char)local_4c,(DName *)0x60);
          pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
          goto LAB_107c142d;
        }
LAB_107c13cb:
        DAT_11d89c9c = pcVar6;
        DName::DName(local_c,&DAT_11d89c9c,'@');
        pDVar4 = (DName *)operator+(local_5c,(DName *)"`anonymous namespace\'");
        DName::operator=(in_stack_00000004,pDVar4);
        if (*(int *)DAT_11d89c94 != 9) {
          Replicator::operator+=(DAT_11d89c94,local_c);
        }
      }
      else {
        pDVar4 = local_24;
        uVar2 = SUB41(local_1c,0);
LAB_107c1423:
        pDVar5 = (DName *)getZName((bool)uVar2);
LAB_107c142d:
        pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
        DName::operator=(in_stack_00000004,pDVar4);
      }
LAB_107c143c:
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  if (*DAT_11d89c9c == '\0') {
    iVar3 = DName::isEmpty(in_stack_00000004);
    if (iVar3 == 0) {
      pDVar4 = local_1c;
      pDVar5 = local_24;
      this = (DName *)DName::DName(local_14,2);
      pDVar5 = (DName *)DName::operator+(this,(char *)pDVar5);
      pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
      DName::operator=(in_stack_00000004,pDVar4);
    }
    else {
      DName::operator=(this_00,2);
    }
  }
  else if (*DAT_11d89c9c != '@') {
    *(undefined4 *)in_stack_00000004 = 0;
    if (((byte)*(uint *)(in_stack_00000004 + 4) & 0xf) != 3) {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffffff1 | 1;
    }
  }
  return in_stack_00000004;
}


// ==== 107c14b7 UnDecorator::getFunctionIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1)

{
  char *pcVar1;
  DName *pDVar2;
  DName *pDVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  DName *in_stack_00000008;
  char cVar8;
  DNameStatus DVar9;
  DName local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [8];
  
  cVar8 = *DAT_11d89c9c;
  if (cVar8 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if (((cVar8 < '6') || ('9' < cVar8)) && (cVar8 != '_')) {
    DName::DName(param_1,1);
    return param_1;
  }
  uVar5 = (int)cVar8 - 0x36;
  pcVar1 = DAT_11d89c9c + 1;
  if (uVar5 == 0x29) {
    cVar8 = *pcVar1;
    if (cVar8 == '\0') {
      DAT_11d89c9c = pcVar1;
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    uVar5 = (int)cVar8 - 0x3d;
    DAT_11d89c9c = DAT_11d89c9c + 2;
    if ((int)uVar5 < 4) goto LAB_107c1547;
    bVar7 = SBORROW4(uVar5,7);
    iVar4 = cVar8 + -0x44;
    bVar6 = uVar5 == 7;
LAB_107c1545:
    if (!bVar6 && bVar7 == iVar4 < 0) goto LAB_107c1547;
  }
  else {
    DAT_11d89c9c = pcVar1;
    if (-1 < (int)uVar5) {
      bVar7 = SBORROW4(uVar5,3);
      iVar4 = cVar8 + -0x39;
      bVar6 = uVar5 == 3;
      goto LAB_107c1545;
    }
LAB_107c1547:
    uVar5 = 0xffffffff;
  }
  if (uVar5 == 0xffffffff) {
    DName::DName(param_1,1);
    return param_1;
  }
  local_14 = 0;
  local_10 = local_10 & 0xfffff000;
  DName::DName(local_c,in_stack_00000008);
  if ((uVar5 & 2) != 0) {
    pDVar2 = (DName *)operator+((char *)local_24,(DName *)&DAT_108fedc4);
    DName::operator=(local_c,pDVar2);
    if (*DAT_11d89c9c == '\0') {
      pDVar2 = (DName *)operator+((DNameStatus)local_34,(DName *)0x2);
    }
    else {
      pDVar2 = local_24;
      getScope();
      pDVar3 = (DName *)operator+((char)local_34,(DName *)0x20);
      pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
    }
    DName::operator=(local_c,pDVar2);
    if (*DAT_11d89c9c == '\0') {
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    if (*DAT_11d89c9c != '@') {
      DVar9 = 1;
      goto LAB_107c17e8;
    }
    DAT_11d89c9c = DAT_11d89c9c + 1;
    if (((byte)DAT_11d89cac & 0x60) == 0x60) {
      pDVar2 = (DName *)getThisType();
      DName::operator|=((DName *)&local_14,pDVar2);
    }
    else {
      pDVar2 = (DName *)getThisType();
      DName::operator=((DName *)&local_14,pDVar2);
    }
  }
  if ((uVar5 & 4) != 0) {
    if ((~(DAT_11d89cac >> 1) & 1) == 0) {
      pDVar2 = (DName *)getBasedType();
      DName::operator|=(local_c,pDVar2);
    }
    else {
      pDVar2 = local_34;
      getBasedType();
      pDVar3 = (DName *)operator+((char)local_24,(DName *)0x20);
      pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
      DName::operator=(local_c,pDVar2);
    }
  }
  if ((~(DAT_11d89cac >> 1) & 1) == 0) {
    pDVar2 = (DName *)getCallingConvention();
    DName::operator|=(local_c,pDVar2);
  }
  else {
    pDVar2 = local_34;
    pDVar3 = (DName *)getCallingConvention();
    pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
    DName::operator=(local_c,pDVar2);
  }
  iVar4 = DName::isEmpty(in_stack_00000008);
  if (iVar4 == 0) {
    cVar8 = (char)local_34;
    pDVar2 = (DName *)operator+((char)local_2c,(DName *)0x28);
    pDVar2 = (DName *)DName::operator+(pDVar2,cVar8);
    DName::operator=(local_c,pDVar2);
  }
  pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,8,0);
  if (pDVar2 == (DName *)0x0) {
    pDVar2 = (DName *)0x0;
  }
  else {
    *(undefined4 *)pDVar2 = 0;
    *(uint *)(pDVar2 + 4) = *(uint *)(pDVar2 + 4) & 0xfffff000;
  }
  getReturnType(local_1c);
  cVar8 = (char)local_34;
  getArgumentTypes();
  pDVar3 = (DName *)operator+((char)local_24,(DName *)0x28);
  pDVar3 = (DName *)DName::operator+(pDVar3,cVar8);
  DName::operator+=(local_c,pDVar3);
  if ((((byte)DAT_11d89cac & 0x60) != 0x60) && ((uVar5 & 2) != 0)) {
    DName::operator+=(local_c,(DName *)&local_14);
  }
  if ((~(DAT_11d89cac >> 8) & 1) == 0) {
    pDVar3 = (DName *)getThrowTypes();
    DName::operator|=(local_c,pDVar3);
  }
  else {
    pDVar3 = (DName *)getThrowTypes();
    DName::operator+=(local_c,pDVar3);
  }
  if (pDVar2 != (DName *)0x0) {
    DName::operator=(pDVar2,local_c);
    DName::DName(param_1,local_1c);
    return param_1;
  }
  DVar9 = 3;
LAB_107c17e8:
  DName::DName(param_1,DVar9);
  return param_1;
}


// ==== 107c17f8 UnDecorator::getDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const
   &,char,class DName const &,int)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl
UnDecorator::getDataIndirectType(DName *param_1,char param_2,DName *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  DName *pDVar4;
  char *pcVar5;
  DName *extraout_ECX;
  DName *this;
  DName *this_00;
  DName *extraout_EDX;
  DName *extraout_EDX_00;
  int extraout_EDX_01;
  uint uVar6;
  undefined3 in_stack_00000009;
  int in_stack_00000014;
  Tokens TVar7;
  DNameStatus DVar8;
  DName local_58 [8];
  char local_50 [8];
  undefined1 local_48 [8];
  char local_40 [8];
  undefined1 local_38 [8];
  char local_30 [8];
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  DName local_10 [4];
  uint local_c;
  char local_5;
  
  local_24 = local_24 & 0xfffff000;
  local_28 = 0;
  local_5 = '\0';
  if (*DAT_11d89c9c == '\0') {
    if (in_stack_00000014 == 0) {
      iVar2 = DName::isEmpty(_param_2);
      if (iVar2 == 0) {
        if (((*(byte *)(extraout_EDX_01 + 4) & 0x10) == 0) &&
           (iVar2 = DName::isEmpty((DName *)param_4), iVar2 == 0)) {
          cVar1 = (char)local_58;
          pDVar3 = param_1;
          pDVar4 = (DName *)operator+((DNameStatus)local_50,(DName *)0x2);
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar1);
          DName::operator+(pDVar4,pDVar3);
          return param_1;
        }
      }
      else {
        iVar2 = DName::isEmpty((DName *)param_4);
        if (iVar2 != 0) goto LAB_107c1cca;
      }
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
LAB_107c1cca:
    DVar8 = 2;
LAB_107c1ccc:
    DName::DName(param_1,DVar8);
    return param_1;
  }
  if (*DAT_11d89c9c == '$') {
    getExtendedDataIndirectType((char *)&local_20,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty((DName *)&local_20);
    pDVar3 = extraout_ECX;
    if (iVar2 == 0) goto LAB_107c184a;
  }
  local_14 = local_14 & 0xfffff000;
  local_18 = 0;
  uVar6 = (int)*DAT_11d89c9c - (((*DAT_11d89c9c < 'A') - 1 & 0x2b) + 0x16);
  local_1c = local_1c & 0xfffff000;
  local_20 = 0;
LAB_107c1881:
  if (uVar6 == 4) {
    if (((~(DAT_11d89cac >> 1) & 1) != 0) && ((~(DAT_11d89cac >> 0x11) & 1) != 0)) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 7;
      if (iVar2 == 0) {
        UScore(7);
        pcVar5 = local_50;
        cVar1 = (char)local_58;
LAB_107c18cb:
        pDVar3 = (DName *)DName::operator+((DName *)&local_18,cVar1);
        pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
        pDVar3 = (DName *)&local_18;
        goto LAB_107c18df;
      }
LAB_107c1972:
      pcVar5 = UScore(TVar7);
      pDVar3 = (DName *)&local_18;
LAB_107c197a:
      DName::operator=(pDVar3,pcVar5);
    }
  }
  else if (uVar6 == 5) {
    if ((~(DAT_11d89cac >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_20);
      if (iVar2 != 0) {
        pcVar5 = UScore(9);
        pDVar3 = (DName *)&local_20;
        goto LAB_107c197a;
      }
      UScore(9);
      pcVar5 = local_40;
      pDVar3 = (DName *)DName::operator+(this,(char)local_48);
      pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
      pDVar3 = (DName *)&local_20;
LAB_107c18df:
      DName::operator=(pDVar3,pDVar4);
    }
  }
  else {
    if (uVar6 != 8) {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      if (0x1f < uVar6) {
LAB_107c1a78:
        DVar8 = 1;
        goto LAB_107c1ccc;
      }
      DName::DName(local_10,(char)param_3);
      pDVar3 = (DName *)DName::operator+((DName *)&local_28,local_58);
      DName::operator=(local_10,pDVar3);
      iVar2 = DName::isEmpty((DName *)&local_18);
      if (iVar2 == 0) {
        pDVar3 = local_58;
        pDVar4 = (DName *)DName::operator+(local_10,(char)local_50);
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      iVar2 = DName::isEmpty((DName *)&local_20);
      if (iVar2 == 0) {
        pDVar3 = local_58;
        pDVar4 = (DName *)DName::operator+(this_00,(char)local_50);
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 0x10) != 0) {
        if (in_stack_00000014 != 0) goto LAB_107c1a78;
        if ((char)param_3 == '\0') {
          if (*DAT_11d89c9c != '\0') {
            pDVar3 = (DName *)getScope();
            DName::operator|=(local_10,pDVar3);
            goto LAB_107c1afb;
          }
        }
        else {
          pDVar3 = (DName *)operator+((char *)local_58,(DName *)&DAT_108fedc4);
          DName::operator=(local_10,pDVar3);
          pDVar3 = local_58;
          if (*DAT_11d89c9c == '\0') {
            pDVar3 = (DName *)operator+((DNameStatus)pDVar3,(DName *)0x2);
          }
          else {
            pDVar4 = (DName *)getScope();
            pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
          }
          DName::operator=(local_10,pDVar3);
LAB_107c1afb:
          cVar1 = *DAT_11d89c9c;
          if (cVar1 != '\0') {
            DAT_11d89c9c = DAT_11d89c9c + 1;
            if (cVar1 != '@') goto LAB_107c1a78;
            goto LAB_107c1b20;
          }
        }
        DName::operator+=(local_10,2);
      }
LAB_107c1b20:
      if ((~(DAT_11d89cac >> 1) & 1) == 0) {
        if (((byte)uVar6 & 0xc) == 0xc) {
          pDVar3 = (DName *)getBasedType();
          DName::operator|=(local_10,pDVar3);
        }
      }
      else if (((byte)uVar6 & 0xc) == 0xc) {
        if (in_stack_00000014 != 0) goto LAB_107c1a78;
        pDVar3 = local_58;
        pDVar4 = (DName *)getBasedType();
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 2) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)"volatile ");
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 1) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)"const ");
        DName::operator=(local_10,pDVar3);
      }
      if (in_stack_00000014 == 0) {
        iVar2 = DName::isEmpty(_param_2);
        if (iVar2 == 0) {
          uVar6 = *(uint *)(extraout_EDX + 4);
          pDVar3 = extraout_EDX;
          if (((uVar6 & 0x10) == 0) &&
             (iVar2 = DName::isEmpty((DName *)param_4), pDVar3 = extraout_EDX_00, iVar2 == 0)) {
            pDVar3 = local_58;
            cVar1 = (char)local_50;
            pDVar4 = (DName *)operator+((char)local_48,(DName *)0x20);
            pDVar4 = (DName *)DName::operator+(pDVar4,cVar1);
            pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
LAB_107c1c3b:
            DName::operator+=(local_10,pDVar3);
          }
          else {
            if (-1 < (char)uVar6) goto LAB_107c1c2e;
            DName::operator=(local_10,pDVar3);
          }
        }
        else {
          iVar2 = DName::isEmpty((DName *)param_4);
          if (iVar2 == 0) {
LAB_107c1c2e:
            pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
            goto LAB_107c1c3b;
          }
        }
      }
      uVar6 = local_c | 0x10;
      if (local_5 != '\0') {
        uVar6 = local_c | 0x210;
      }
LAB_107c1c55:
      local_c = uVar6;
      pDVar3 = local_10;
LAB_107c184a:
      DName::DName(param_1,pDVar3);
      return param_1;
    }
    if ((~(DAT_11d89cac >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 8;
      if (iVar2 != 0) goto LAB_107c1972;
      UScore(8);
      pcVar5 = local_30;
      cVar1 = (char)local_38;
      goto LAB_107c18cb;
    }
  }
  DAT_11d89c9c = DAT_11d89c9c + 1;
  if (*DAT_11d89c9c == '$') {
    getExtendedDataIndirectType((char *)local_10,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty(local_10);
    uVar6 = local_c;
    if (iVar2 == 0) goto LAB_107c1c55;
  }
  uVar6 = (int)*DAT_11d89c9c - (((*DAT_11d89c9c < 'A') - 1 & 0x2b) + 0x16);
  goto LAB_107c1881;
}


// ==== 107c1cdc UnDecorator::operator_char*

/* Library Function - Single Match
    public: __thiscall UnDecorator::operator char *(void)
   
   Library: Visual Studio 2005 Release */

char * __thiscall UnDecorator::operator_char_(UnDecorator *this)

{
  char cVar1;
  DName *pDVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_24 [16];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = 0;
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  if (DAT_11d89ca0 == (char *)0x0) goto LAB_107c1d72;
  if (*DAT_11d89ca0 == '?') {
    if (DAT_11d89ca0[1] != '@') {
      if (DAT_11d89ca0[1] == '$') {
        pDVar2 = (DName *)getTemplateName(SUB41(local_24,0));
        DName::operator=((DName *)&local_c,pDVar2);
        if (((byte)local_8 & 0xf) != 1) goto LAB_107c1d72;
        local_8 = local_8 & 0xfffffff0;
        DAT_11d89c9c = DAT_11d89ca0;
      }
      goto LAB_107c1d5f;
    }
    DAT_11d89c9c = DAT_11d89c9c + 2;
    getDecoratedName();
    pDVar2 = (DName *)operator+(local_24,(DName *)&DAT_108fef38);
  }
  else {
LAB_107c1d5f:
    pDVar2 = (DName *)getDecoratedName();
  }
  DName::operator=((DName *)&local_c,pDVar2);
LAB_107c1d72:
  iVar3 = (int)(local_8 << 0x1c) >> 0x1c;
  if (iVar3 == 3) {
    return (char *)0x0;
  }
  if ((iVar3 == 1) || ((((ushort)DAT_11d89cac & 0x1000) == 0 && (*DAT_11d89c9c != '\0')))) {
    DName::operator=((DName *)&local_14,DAT_11d89ca0);
  }
  else {
    DName::operator=((DName *)&local_14,(DName *)&local_c);
  }
  if (DAT_11d89ca4 == (char *)0x0) {
    iVar3 = DName::length((DName *)&local_14);
    DAT_11d89ca8 = iVar3 + 1;
    DAT_11d89ca4 = (char *)(*DAT_11d89c7c)(iVar3 + 8U & 0xfffffff8);
    if (DAT_11d89ca4 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName::getString((DName *)&local_14,DAT_11d89ca4,DAT_11d89ca8);
  pcVar4 = DAT_11d89ca4;
  pcVar5 = DAT_11d89ca4;
  while (cVar1 = *pcVar4, cVar1 != '\0') {
    if (cVar1 == ' ') {
      *pcVar5 = ' ';
      pcVar5 = pcVar5 + 1;
      do {
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 == ' ');
    }
    else {
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  *pcVar5 = '\0';
  return DAT_11d89ca4;
}


// ==== 107c1e28 UnDecorator::getPtrRefType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefType(class DName const &,class DName
   const &,char)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPtrRefType(DName *param_1,DName *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  DName *extraout_ECX;
  undefined3 in_stack_0000000d;
  DName *in_stack_00000010;
  DName local_c [8];
  
  cVar1 = *DAT_11d89c9c;
  if (cVar1 == '\0') {
    DName::DName(local_c,2);
    DName::operator+=(local_c,(char)in_stack_00000010);
    iVar2 = DName::isEmpty(param_2);
    if (iVar2 == 0) {
      DName::operator+=(local_c,extraout_ECX);
    }
    iVar2 = DName::isEmpty(_param_3);
    if (iVar2 == 0) {
      iVar2 = DName::isEmpty(param_2);
      if (iVar2 == 0) {
        DName::operator+=(local_c,' ');
      }
      DName::operator+=(local_c,_param_3);
    }
    DName::DName(param_1,local_c);
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    getDataIndirectType(local_c,param_3,in_stack_00000010,(int)param_2);
    getPtrRefDataType(param_1,(int)local_c);
  }
  else {
    DName::DName(local_c,(char)in_stack_00000010);
    iVar2 = DName::isEmpty(param_2);
    if (iVar2 == 0) {
      iVar2 = DName::isEmpty(_param_3);
      if ((iVar2 != 0) || (((byte)_param_3[4] & 0x10) == 0)) {
        DName::operator+=(local_c,param_2);
      }
    }
    iVar2 = DName::isEmpty(_param_3);
    if (iVar2 == 0) {
      DName::operator+=(local_c,_param_3);
    }
    getFunctionIndirectType(param_1);
  }
  return param_1;
}


// ==== 107c1f8f ___unDName

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2005 Release */

char * ___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                 ushort param_6)

{
  int iVar1;
  UnDecorator local_98 [120];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_109a7940;
  uStack_c = 0x107c1f9e;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_11d89c7c = param_4;
    _DAT_11d89c80 = param_5;
    _DAT_11d89c8c = 0;
    _DAT_11d89c84 = 0;
    _DAT_11d89c88 = 0;
    UnDecorator::UnDecorator
              (local_98,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_98);
    HeapManager::Destructor((HeapManager *)&DAT_11d89c7c);
    local_8 = (undefined *)0xfffffffe;
    FUN_107c2029();
    return local_20;
  }
  return (char *)0x0;
}


// ==== 107c2029 FUN_107c2029

void FUN_107c2029(void)

{
  FUN_107af6c5(5);
  return;
}


// ==== 107c20d5 FUN_107c20d5

DName * FUN_107c20d5(DName *param_1,DName *param_2)

{
  byte bVar1;
  byte *pbVar2;
  DName *pDVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  DName local_28 [8];
  DName local_20 [4];
  byte local_1c;
  DName local_18 [4];
  uint local_14;
  undefined4 local_10;
  uint local_c;
  byte local_5;
  
  pbVar2 = DAT_11d89c9c;
  bVar1 = *DAT_11d89c9c;
  if (bVar1 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  DAT_11d89c9c = DAT_11d89c9c + 1;
  local_10 = 0;
  uVar6 = (uint)bVar1;
  local_c = local_c & 0xfffff000;
  uVar5 = 0xffffffff;
  if (uVar6 < 0x4f) {
    if (uVar6 != 0x4e) {
      switch(uVar6) {
      case 0x43:
      case 0x44:
      case 0x45:
        pcVar7 = "char";
        break;
      case 0x46:
      case 0x47:
        pcVar7 = "short";
        break;
      case 0x48:
      case 0x49:
        pcVar7 = "int";
        break;
      case 0x4a:
      case 0x4b:
        pcVar7 = "long";
        break;
      default:
        goto switchD_107c2125_caseD_4c;
      case 0x4d:
        pcVar7 = "float";
      }
      goto LAB_107c22e9;
    }
LAB_107c230f:
    DName::operator+=((DName *)&local_10,"double");
LAB_107c231c:
    if (uVar5 != 0xffffffff) {
LAB_107c228d:
      local_10 = 0;
      local_c = local_c & 0xfffff000;
      DName::DName(local_18,param_2);
      if (uVar5 != 0xfffffffe) {
        iVar4 = DName::isEmpty(param_2);
        if (iVar4 != 0) {
          if ((uVar5 & 1) == 0) {
            if ((uVar5 & 2) != 0) {
              DName::operator=((DName *)&local_10,"volatile");
            }
          }
          else {
            DName::operator=((DName *)&local_10,"const");
            if ((uVar5 & 2) != 0) {
              DName::operator+=((DName *)&local_10," volatile");
            }
          }
        }
        UnDecorator::getPtrRefType(param_1,(DName *)&local_10,(char)local_18);
        return param_1;
      }
      local_14 = local_14 | 0x80;
      UnDecorator::getPtrRefType(local_20,(DName *)&local_10,(char)local_18);
      if ((local_1c & 0x80) == 0) {
        DName::operator+=(local_20,"[]");
      }
      pDVar3 = local_20;
      goto LAB_107c226e;
    }
LAB_107c2325:
    if (uVar6 == 0x43) {
      pcVar7 = "signed ";
      pDVar3 = local_18;
LAB_107c2385:
      pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar7);
      DName::operator=((DName *)&local_10,pDVar3);
    }
    else {
      if ((((uVar6 == 0x45) || (uVar6 == 0x47)) || (uVar6 == 0x49)) || (uVar6 == 0x4b)) {
        pcVar7 = "unsigned ";
        pDVar3 = local_20;
        goto LAB_107c2385;
      }
      if ((uVar6 == 0x5f) &&
         (((local_5 == 0x45 || (local_5 == 0x47)) ||
          ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))) {
        pcVar7 = "unsigned ";
        pDVar3 = local_28;
        goto LAB_107c2385;
      }
    }
    iVar4 = DName::isEmpty(param_2);
    if (iVar4 == 0) {
      pDVar3 = (DName *)operator+((char)local_28,(DName *)0x20);
      DName::operator+=((DName *)&local_10,pDVar3);
    }
  }
  else {
    if (uVar6 == 0x4f) {
      DName::operator=((DName *)&local_10,"long ");
      goto LAB_107c230f;
    }
    if (0x4f < uVar6) {
      if (uVar6 < 0x54) {
        uVar5 = uVar6 & 3;
        goto LAB_107c231c;
      }
      if (uVar6 == 0x58) {
        pcVar7 = "void";
        goto LAB_107c22e9;
      }
      if (uVar6 != 0x5f) goto switchD_107c2125_caseD_4c;
      local_5 = *DAT_11d89c9c;
      DAT_11d89c9c = pbVar2 + 2;
      uVar5 = (uint)local_5;
      if (uVar5 < 0x4e) {
        if (uVar5 < 0x4c) {
          if (uVar5 < 0x48) {
            if (uVar5 < 0x46) {
              if (uVar5 == 0x24) {
                FUN_107c20d5(local_20,param_2);
                operator+((char *)param_1,(DName *)"__w64 ");
                return param_1;
              }
              if (1 < uVar5 - 0x44) goto LAB_107c227c;
              pcVar7 = "__int8";
            }
            else {
              pcVar7 = "__int16";
            }
          }
          else if (uVar5 < 0x48) {
LAB_107c227c:
            pcVar7 = "UNKNOWN";
          }
          else if (uVar5 < 0x4a) {
            pcVar7 = "__int32";
          }
          else {
            if (0x4b < uVar5) goto LAB_107c227c;
            pcVar7 = "__int64";
          }
        }
        else {
          pcVar7 = "__int128";
        }
LAB_107c22e9:
        DName::operator=((DName *)&local_10,pcVar7);
        goto LAB_107c2325;
      }
      if (uVar5 == 0x4e) {
        pcVar7 = "bool";
        goto LAB_107c22e9;
      }
      if (uVar5 != 0x4f) {
        if (uVar5 != 0x57) {
          if (1 < uVar5 - 0x58) goto LAB_107c227c;
          goto LAB_107c2245;
        }
        pcVar7 = "wchar_t";
        goto LAB_107c22e9;
      }
      uVar5 = 0xfffffffe;
      goto LAB_107c228d;
    }
switchD_107c2125_caseD_4c:
LAB_107c2245:
    DAT_11d89c9c = DAT_11d89c9c + -1;
    pDVar3 = (DName *)UnDecorator::getECSUDataType();
    DName::operator=((DName *)&local_10,pDVar3);
    iVar4 = DName::isEmpty((DName *)&local_10);
    if (iVar4 == 0) goto LAB_107c2325;
  }
  pDVar3 = (DName *)&local_10;
LAB_107c226e:
  DName::DName(param_1,pDVar3);
  return param_1;
}


// ==== 107c245c UnDecorator::getPrimaryDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  DName *in_stack_00000008;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar1 = *DAT_11d89c9c;
  local_8 = local_8 & 0xfffff000;
  local_c = 0;
  pcVar4 = DAT_11d89c9c;
  if (cVar1 != '\0') {
    if (cVar1 != '$') {
      if (cVar1 != 'A') {
        if (cVar1 != 'B') {
          FUN_107c20d5(param_1);
          return param_1;
        }
        DName::operator=((DName *)&local_c,"volatile");
        iVar2 = DName::isEmpty(in_stack_00000008);
        if (iVar2 == 0) {
          DName::operator+=((DName *)&local_c,' ');
        }
      }
      DName::DName((DName *)&local_14,in_stack_00000008);
      DAT_11d89c9c = DAT_11d89c9c + 1;
      local_10 = local_10 | 0x10;
      getPtrRefType(param_1,(DName *)&local_c,(char)&local_14);
      return param_1;
    }
    if (DAT_11d89c9c[1] == '$') {
      pcVar4 = DAT_11d89c9c + 2;
      cVar1 = *pcVar4;
      if (cVar1 != '\0') {
        if (cVar1 == 'A') {
          DAT_11d89c9c = DAT_11d89c9c + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_11d89c9c = DAT_11d89c9c + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          local_10 = local_10 & 0xfffff000;
          DAT_11d89c9c = DAT_11d89c9c + 3;
          local_14 = 0;
          uVar3 = getDataIndirectType(local_1c,(char)in_stack_00000008,(DName *)0x0,(int)&local_14);
          FUN_107c20d5(param_1,uVar3);
          return param_1;
        }
        goto LAB_107c2501;
      }
    }
    else if (DAT_11d89c9c[1] != '\0') {
LAB_107c2501:
      DAT_11d89c9c = pcVar4;
      DName::DName(param_1,1);
      return param_1;
    }
  }
  DAT_11d89c9c = pcVar4;
  operator+((DNameStatus)param_1,(DName *)0x2);
  return param_1;
}


// ==== 107c259a UnDecorator::getDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataType(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  DName *in_stack_00000008;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [8];
  
  DName::DName(local_c,in_stack_00000008);
  cVar1 = *DAT_11d89c9c;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
  }
  else {
    if (cVar1 == '?') {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      local_10 = local_10 & 0xfffff000;
      local_14 = 0;
      pDVar3 = (DName *)getDataIndirectType(local_1c,(char)local_c,(DName *)0x0,(int)&local_14);
      DName::operator=(local_c,pDVar3);
    }
    else if (cVar1 == 'X') {
      DAT_11d89c9c = DAT_11d89c9c + 1;
      iVar2 = DName::isEmpty(local_c);
      if (iVar2 == 0) {
        operator+((char *)param_1,(DName *)"void ");
        return param_1;
      }
      DName::DName(param_1,"void");
      return param_1;
    }
    getPrimaryDataType(param_1);
  }
  return param_1;
}


// ==== 107c264b UnDecorator::getExternalDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExternalDataType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getExternalDataType(DName *param_1)

{
  DName *pDVar1;
  DName *this;
  DName *this_00;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_11d89c7c,8,0);
  this_00 = (DName *)0x0;
  if (pDVar1 != (DName *)0x0) {
    *(uint *)(pDVar1 + 4) = *(uint *)(pDVar1 + 4) & 0xfffff000;
    *(undefined4 *)pDVar1 = 0;
    this_00 = pDVar1;
  }
  getDataType(param_1);
  getDataIndirectType();
  pDVar1 = local_14;
  this = (DName *)DName::operator+(local_c,(char)local_1c);
  pDVar1 = (DName *)DName::operator+(this,pDVar1);
  DName::operator=(this_00,pDVar1);
  return param_1;
}


// ==== 107c26b0 _strrchr

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


// ==== 107c26dd __isalpha_l

/* Library Function - Single Match
    __isalpha_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c275c __isupper_l

/* Library Function - Single Match
    __isupper_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isupper_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 1;
  }
  else {
    uVar1 = __isctype_l(_C,1,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c27d4 __islower_l

/* Library Function - Single Match
    __islower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __islower_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 2;
  }
  else {
    uVar1 = __isctype_l(_C,2,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c284c __isdigit_l

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


// ==== 107c289b _isdigit

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_11d8981c == 0) {
    return (byte)PTR_DAT_10b17f80[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 107c28c4 __isxdigit_l

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


// ==== 107c2943 __isspace_l

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


// ==== 107c29bb __ispunct_l

/* Library Function - Single Match
    __ispunct_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __ispunct_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x10;
  }
  else {
    uVar1 = __isctype_l(_C,0x10,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c2a33 __isalnum_l

/* Library Function - Single Match
    __isalnum_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c2ab2 __isprint_l

/* Library Function - Single Match
    __isprint_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isprint_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x157;
  }
  else {
    uVar1 = __isctype_l(_C,0x157,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c2b31 __isgraph_l

/* Library Function - Single Match
    __isgraph_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isgraph_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x117;
  }
  else {
    uVar1 = __isctype_l(_C,0x117,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c2bb0 __iscntrl_l

/* Library Function - Single Match
    __iscntrl_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iscntrl_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x20;
  }
  else {
    uVar1 = __isctype_l(_C,0x20,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 107c2cb1 FID_conflict:__atoflt_l

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_107b8bae(&local_14,local_2c,_Str,0,0,0,0,local_28);
  IVar1 = __ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_107c2d08:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_107c2d48;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_107c2d3a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_107c2d48;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_107c2d3a;
    goto LAB_107c2d08;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_107c2d48:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 107c2d6a __atoldbl_l

/* Library Function - Single Match
    __atoldbl_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale)

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_107b8bae(&local_14,local_2c,_Str,1,0,0,0,local_28);
  IVar1 = __ld12told(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_107c2dc2:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_107c2e02;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_107c2df4:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_107c2e02;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_107c2df4;
    goto LAB_107c2dc2;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_107c2e02:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 107c2e24 FID_conflict:__atoflt_l

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_107b8bae(&local_14,local_2c,_Str,0,0,0,0,local_28);
  IVar1 = __ld12tof(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_107c2e7b:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_107c2ebb;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_107c2ead:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_107c2ebb;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_107c2ead;
    goto LAB_107c2e7b;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_107c2ebb:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 107c2f1a __fptostr

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
    puVar1 = (undefined4 *)FUN_107ad7bd();
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
    puVar1 = (undefined4 *)FUN_107ad7bd();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_107ad745(0,0,0,0,0);
  return eVar7;
}


// ==== 107c2fd7 ___dtold

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
      goto LAB_107c3089;
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
LAB_107c3089:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}


// ==== 107c3092 __fltout2

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
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,&_Dbl);
  iVar1 = FUN_107d0ee8(local_14,uStack_10,CONCAT22(uVar4,uStack_c),0x11,0,&local_30);
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


// ==== 107c3120 __alldvrm

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


// ==== 107c3200 __aullshr

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


// ==== 107c3228 __controlfp_s

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
    puVar2 = (undefined4 *)FUN_107ad7bd();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_107ad745(0,0,0,0,0);
  }
  return eVar3;
}


// ==== 107c3292 __calloc_impl

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
        if ((DAT_11d8b2d0 == 3) && (dwBytes = dwBytes + 0xf & 0xfffffff0, param_1 <= DAT_11d8b2c0))
        {
          __lock(4);
          _Dst = (void *)___sbh_alloc_block(param_1);
          FUN_107c338e();
          if (_Dst != (void *)0x0) {
            _memset(_Dst,0,param_1);
            goto LAB_107c3343;
          }
        }
        else {
LAB_107c3343:
          if (_Dst != (void *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_11d8969c,8,dwBytes);
      }
      if (_Dst != (void *)0x0) {
        return _Dst;
      }
      if (DAT_11d897f8 == 0) {
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
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0xc;
    FUN_107ad745(0,0,0,0,0);
  }
  return (void *)0x0;
}


// ==== 107c338e FUN_107c338e

void FUN_107c338e(void)

{
  FUN_107af6c5(4);
  return;
}


// ==== 107c33b0 _calloc

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
  if (((pvVar2 == (void *)0x0) && (local_8 != 0)) && (iVar3 = FUN_107ad7bd(), iVar3 != 0)) {
    piVar4 = (int *)FUN_107ad7bd();
    *piVar4 = iVar1;
  }
  return pvVar2;
}


// ==== 107c33ef _realloc

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
  if (DAT_11d8b2d0 == 3) {
    do {
      local_20 = (void *)0x0;
      if (0xffffffe0 < _NewSize) goto LAB_107c35c8;
      __lock(4);
      local_24 = thunk_FUN_107af8f5(_Memory);
      if (local_24 != 0) {
        if (_NewSize <= DAT_11d8b2c0) {
          iVar2 = ___sbh_resize_block(local_24,_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = (void *)___sbh_alloc_block(_NewSize);
            if (local_20 != (void *)0x0) {
              uVar3 = *(int *)((int)_Memory + -4) - 1;
              if (_NewSize <= uVar3) {
                uVar3 = _NewSize;
              }
              _memcpy(local_20,_Memory,uVar3);
              local_24 = thunk_FUN_107af8f5(_Memory);
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
          local_20 = HeapAlloc(DAT_11d8969c,0,_NewSize);
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
      FUN_107c3533();
      if (local_24 == 0) {
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_11d8969c,0,_Memory,_NewSize);
      }
      if (local_20 != (void *)0x0) {
        return local_20;
      }
      if (DAT_11d897f8 == 0) {
        puVar4 = (undefined4 *)FUN_107ad7bd();
        if (local_24 != 0) {
          *puVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_107c35f5;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_107ad7bd();
    if (local_24 != 0) goto LAB_107c35d4;
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) goto LAB_107c35c8;
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar7 = HeapReAlloc(DAT_11d8969c,0,_Memory,_NewSize);
      if (pvVar7 != (LPVOID)0x0) {
        return pvVar7;
      }
      if (DAT_11d897f8 == 0) {
        puVar4 = (undefined4 *)FUN_107ad7bd();
LAB_107c35f5:
        DVar5 = GetLastError();
        uVar6 = FUN_107ad782(DVar5);
        *puVar4 = uVar6;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_107ad7bd();
  }
  DVar5 = GetLastError();
  uVar6 = FUN_107ad782(DVar5);
  *puVar4 = uVar6;
  return (void *)0x0;
LAB_107c35c8:
  __callnewh(_NewSize);
  puVar4 = (undefined4 *)FUN_107ad7bd();
LAB_107c35d4:
  *puVar4 = 0xc;
  return (void *)0x0;
}


// ==== 107c3533 FUN_107c3533

void FUN_107c3533(void)

{
  FUN_107af6c5(4);
  return;
}


// ==== 107c360a FUN_107c360a

void * FUN_107c360a(void *param_1,uint param_2,uint param_3)

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
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0xc;
    FUN_107ad745(0,0,0,0,0);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}


// ==== 107c3683 __initp_misc_winsig

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __initp_misc_winsig(undefined4 param_1)

{
  DAT_11d89cbc = param_1;
  DAT_11d89cc0 = param_1;
  DAT_11d89cc4 = param_1;
  DAT_11d89cc8 = param_1;
  return;
}


// ==== 107c3737 siglookup

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
  } while (uVar1 < DAT_10b175fc * 0xc + param_1);
  if ((DAT_10b175fc * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 107c376b ___get_sigabrt

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_107ab16d(DAT_11d89cc4);
  return p_Var1;
}


// ==== 107c39c7 _raise

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
        puVar5 = &DAT_11d89cbc;
        uVar4 = DAT_11d89cbc;
        goto LAB_107c3a7c;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_107c3a5a;
        if (_SigNum != 8) goto LAB_107c3a3e;
      }
    }
    iVar6 = FUN_107ab346();
    if (iVar6 == 0) {
      return -1;
    }
    iVar2 = siglookup(*(undefined4 *)(iVar6 + 0x5c));
    puVar5 = (undefined4 *)(iVar2 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_11d89cc8;
      uVar4 = DAT_11d89cc8;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_11d89cc0;
      uVar4 = DAT_11d89cc0;
    }
    else {
      if (_SigNum != 0x16) {
LAB_107c3a3e:
        puVar5 = (undefined4 *)FUN_107ad7bd();
        *puVar5 = 0x16;
        FUN_107ad745(0,0,0,0,0);
        return -1;
      }
LAB_107c3a5a:
      puVar5 = &DAT_11d89cc4;
      uVar4 = DAT_11d89cc4;
    }
LAB_107c3a7c:
    bVar1 = true;
    pcVar3 = (code *)FUN_107ab16d(uVar4);
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
      goto LAB_107c3ae0;
    }
  }
  else {
LAB_107c3ae0:
    if (_SigNum == 8) {
      for (local_28 = DAT_10b175f0; local_28 < DAT_10b175f4 + DAT_10b175f0; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + *(int *)(iVar6 + 0x5c)) = 0;
      }
      goto LAB_107c3b1a;
    }
  }
  uVar4 = __encoded_null();
  *puVar5 = uVar4;
LAB_107c3b1a:
  FUN_107c3b3b();
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


// ==== 107c3b3b FUN_107c3b3b

void FUN_107c3b3b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_107af6c5(0);
  }
  return;
}


// ==== 107c3b77 FUN_107c3b77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c3b77(undefined4 param_1)

{
  _DAT_11d89cd0 = param_1;
  return;
}


// ==== 107c3c85 FUN_107c3c85

void FUN_107c3c85(undefined4 param_1)

{
  DAT_11d89cd4 = param_1;
  return;
}


// ==== 107c3c8f ___crtInitCritSecNoSpinCount@8

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}


// ==== 107c3c9f ___crtInitCritSecAndSpinCount

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
  
  local_8 = &DAT_109a7a20;
  uStack_c = 0x107c3cab;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_107ab16d(DAT_11d89cd4);
  if (pcVar1 != (FARPROC)0x0) goto LAB_107c3d15;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_107c3d04:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_107c3d04;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_107c3d04;
  }
  DAT_11d89cd4 = FUN_107ab0f6(pcVar1);
LAB_107c3d15:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}


// ==== 107c3d64 FUN_107c3d64

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_107c3d64(void)

{
  return 1;
}


// ==== 107c3db4 __get_sse2_info

/* WARNING: Removing unreachable block (ram,0x107c3def) */
/* WARNING: Removing unreachable block (ram,0x107c3ddc) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_107c3d64(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 107c3e21 FUN_107c3e21

undefined4 FUN_107c3e21(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_11d89cd8 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_11d89cd8 = FUN_107ab0f6(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_11d89cdc = FUN_107ab0f6(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_11d89ce0 = FUN_107ab0f6(pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_11d89ce8 = FUN_107ab0f6(pFVar1);
      if (DAT_11d89ce8 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_11d89ce4 = FUN_107ab0f6(pFVar1);
      }
    }
  }
  if ((DAT_11d89ce4 != local_c) && (DAT_11d89ce8 != local_c)) {
    pcVar3 = (code *)FUN_107ab16d(DAT_11d89ce4);
    pcVar4 = (code *)FUN_107ab16d(DAT_11d89ce8);
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
      goto LAB_107c3fb7;
    }
  }
  if ((((DAT_11d89cdc != local_c) &&
       (pcVar3 = (code *)FUN_107ab16d(DAT_11d89cdc), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_11d89ce0 != local_c &&
      (pcVar3 = (code *)FUN_107ab16d(DAT_11d89ce0), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_107c3fb7:
  pcVar3 = (code *)FUN_107ab16d(DAT_11d89cd8);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}


// ==== 107c3fde _strcat_s

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
        puVar2 = (undefined4 *)FUN_107ad7bd();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_107c3ffd;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_107ad7bd();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_107c3ffd:
  FUN_107ad745(0,0,0,0,0);
  return eVar4;
}


// ==== 107c404f _strncpy_s

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
LAB_107c4073:
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
          puVar2 = (undefined4 *)FUN_107ad7bd();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_107c4084;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_107c4073;
  puVar2 = (undefined4 *)FUN_107ad7bd();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_107c4084:
  FUN_107ad745(0,0,0,0,0);
  return eVar5;
}


// ==== 107c4102 __set_error_mode

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_11d89300;
      DAT_11d89300 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_11d89300;
    }
  }
  puVar2 = (undefined4 *)FUN_107ad7bd();
  *puVar2 = 0x16;
  FUN_107ad745(0,0,0,0,0);
  return -1;
}


// ==== 107c416a __freea

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


// ==== 107c4185 __crtGetLocaleInfoW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoW_stat(struct localeinfo_struct *,unsigned long,unsigned
   long,wchar_t *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoW_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPSTR lpLCData;
  
  uVar1 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if (DAT_11d89cec == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_11d89cec = 2;
      }
      goto LAB_107c41d7;
    }
    DAT_11d89cec = 1;
  }
  else {
LAB_107c41d7:
    if (DAT_11d89cec != 1) {
      if ((DAT_11d89cec == 2) || (DAT_11d89cec == 0)) {
        if (param_6 == 0) {
          param_6 = param_1->locinfo->lc_codepage;
        }
        cchData = GetLocaleInfoA(param_2,param_3,(LPSTR)0x0,0);
        if (cchData != 0) {
          if (((int)cchData < 1) || (0xffffffe0 / cchData == 0)) {
            lpLCData = (LPSTR)0x0;
          }
          else if (cchData + 8 < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_107c42ae;
            lpLCData = &stack0xfffffff0;
          }
          else {
            lpLCData = _malloc(cchData + 8);
            if (lpLCData != (LPSTR)0x0) {
              lpLCData[0] = -0x23;
              lpLCData[1] = -0x23;
              lpLCData[2] = '\0';
              lpLCData[3] = '\0';
              lpLCData = lpLCData + 8;
            }
          }
          if (lpLCData != (LPSTR)0x0) {
            iVar2 = GetLocaleInfoA(param_2,param_3,lpLCData,cchData);
            if (iVar2 != 0) {
              if (param_5 == 0) {
                param_5 = 0;
                param_4 = (LPWSTR)0x0;
              }
              MultiByteToWideChar(param_6,1,lpLCData,-1,param_4,param_5);
            }
            __freea(lpLCData);
          }
        }
      }
      goto LAB_107c42ae;
    }
  }
  GetLocaleInfoW(param_2,param_3,param_4,param_5);
LAB_107c42ae:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 107c42c0 ___crtGetLocaleInfoW

/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2005 Release */

void ___crtGetLocaleInfoW
               (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
               int param_6)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetLocaleInfoW_stat(&local_14,param_2,param_3,param_4,param_5,param_6);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 107c42fb __crtGetLocaleInfoA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          int param_6)

{
  uint _Size;
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPWSTR lpLCData;
  
  uVar1 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if (DAT_11d89cf0 == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_11d89cf0 = 2;
      }
      goto LAB_107c434d;
    }
    DAT_11d89cf0 = 1;
  }
  else {
LAB_107c434d:
    if ((DAT_11d89cf0 == 2) || (DAT_11d89cf0 == 0)) {
      GetLocaleInfoA(param_2,param_3,param_4,param_5);
      goto LAB_107c4426;
    }
    if (DAT_11d89cf0 != 1) goto LAB_107c4426;
  }
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_107c4426;
        lpLCData = (LPWSTR)&stack0xfffffff0;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(param_6,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_107c4426:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 107c4438 ___crtGetLocaleInfoA

/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  int in_stack_00000018;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat
                    (&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData,in_stack_00000018);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 107c4473 FUN_107c4473

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c4473(void)

{
  _DAT_11d89dd0 = 0;
  return;
}


// ==== 107c447b __ungetc_nolock

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
      puVar4 = &DAT_10b18190;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_11d89e40)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_10b18190;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_11d89e40)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_107c4538;
    }
    puVar5 = (undefined4 *)FUN_107ad7bd();
    *puVar5 = 0x16;
    FUN_107ad745(0,0,0,0,0);
  }
  else {
LAB_107c4538:
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


// ==== 107c4599 _ungetc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ungetc
   
   Library: Visual Studio 2005 Release */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    FUN_107b19f9(_File);
    iVar2 = __ungetc_nolock(_Ch,_File);
    FUN_107c4601();
  }
  return iVar2;
}


// ==== 107c4601 FUN_107c4601

void FUN_107c4601(void)

{
  int unaff_EBP;
  
  FUN_107b1a63(*(undefined4 *)(unaff_EBP + 0xc));
  return;
}


// ==== 107c460b __mbtowc_l

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
          if (iVar2 != 0) goto LAB_107c4656;
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
        puVar3 = (undefined4 *)FUN_107ad7bd();
        *puVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_107c4656:
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


// ==== 107c471e _mbtowc

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2005 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}


// ==== 107c4735 __isleadbyte_l

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


// ==== 107c476b _isleadbyte

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2005 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 107c49a0 __aulldvrm

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


// ==== 107c4a35 __getbuf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_11d897fc = _DAT_11d897fc + 1;
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


// ==== 107c4a79 __lseeki64_nolock

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
    puVar2 = (undefined4 *)FUN_107ad7bd();
    *puVar2 = 9;
LAB_107c4aa8:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_107ad7e3(DVar4);
        goto LAB_107c4aa8;
      }
    }
    pbVar1 = (byte *)((&DAT_11d89e40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}


// ==== 107c4afc __lseeki64

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
    puVar1 = (undefined4 *)FUN_107ad7d0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_11d89de8)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_11d89e40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        puVar1 = (undefined4 *)FUN_107ad7d0();
        *puVar1 = 0;
        puVar1 = (undefined4 *)FUN_107ad7bd();
        *puVar1 = 9;
        FUN_107ad745(0,0,0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_11d89e40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_107ad7bd();
          *puVar1 = 9;
          puVar1 = (undefined4 *)FUN_107ad7d0();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_107c4c0b();
      }
      goto LAB_107c4c05;
    }
    puVar1 = (undefined4 *)FUN_107ad7d0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
    FUN_107ad745(0,0,0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_107c4c05:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}


// ==== 107c4c0b FUN_107c4c0b

void FUN_107c4c0b(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 107c4c15 __set_osfhnd

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_11d89de8)) {
    iVar2 = (param_1 & 0x1fU) * 0x38;
    if (*(int *)(iVar2 + (&DAT_11d89e40)[param_1 >> 5]) == -1) {
      if (DAT_11d89304 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_107c4c6f;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_107c4c6f:
      *(intptr_t *)(iVar2 + (&DAT_11d89e40)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_107ad7bd();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_107ad7d0();
  *puVar1 = 0;
  return -1;
}


// ==== 107c4c92 __free_osfhnd

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_11d89de8)) {
    iVar3 = (param_1 & 0x1fU) * 0x38;
    piVar1 = (int *)((&DAT_11d89e40)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_11d89304 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_107c4cf0;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_107c4cf0:
      *(undefined4 *)(iVar3 + (&DAT_11d89e40)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_107ad7bd();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_107ad7d0();
  *puVar2 = 0;
  return -1;
}


// ==== 107c4d13 __get_osfhandle

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  undefined4 *puVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_107ad7d0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_11d89de8)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_11d89e40)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  puVar1 = (undefined4 *)FUN_107ad7d0();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_107ad7bd();
  *puVar1 = 9;
  FUN_107ad745(0,0,0,0,0);
  return -1;
}


// ==== 107c4d84 ___lock_fhandle

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
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_11d89e40)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_107c4e1b();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_11d89e40)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}


// ==== 107c4e1b FUN_107c4e1b

void FUN_107c4e1b(void)

{
  FUN_107af6c5(10);
  return;
}


// ==== 107c4e24 __unlock_fhandle

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_11d89e40)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  return;
}


// ==== 107c4e46 __alloc_osfhnd

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
      puVar3 = (undefined4 *)(&DAT_11d89e40)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x38);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_11d89e40)[iVar4] = puVar3;
          DAT_11d89de8 = DAT_11d89de8 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_11d89e40)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_11d89e40)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_11d89e40)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
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
            FUN_107c4f19();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_11d89e40)[iVar4]) / 0x38 + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_107c4fdc();
  }
  return local_20;
}


// ==== 107c4f19 FUN_107c4f19

void FUN_107c4f19(void)

{
  FUN_107af6c5(10);
  return;
}


// ==== 107c4fdc FUN_107c4fdc

void FUN_107c4fdc(void)

{
  FUN_107af6c5(0xb);
  return;
}


// ==== 107c5199 __write_nolock

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
  
  local_8 = DAT_10b171d4 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_107c5749;
  if (_Buf == (void *)0x0) {
    puVar6 = (undefined4 *)FUN_107ad7d0();
    *puVar6 = 0;
    puVar6 = (undefined4 *)FUN_107ad7bd();
    *puVar6 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    goto LAB_107c5749;
  }
  iVar10 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_11d89e40 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar10 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar6 = (undefined4 *)FUN_107ad7d0();
    *puVar6 = 0;
    puVar6 = (undefined4 *)FUN_107ad7bd();
    *puVar6 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    goto LAB_107c5749;
  }
  if ((*(byte *)(*piVar16 + iVar10 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar10 + 4 + *piVar16) & 0x80) == 0)) {
LAB_107c5484:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar10) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar10),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_107c56de:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_107c56e7:
      piVar16 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_107c5749;
      goto LAB_107c56f1;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_107c5718;
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
        if (BVar9 == 0) goto LAB_107c56de;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar12 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_107c56e7;
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
          if (BVar9 == 0) goto LAB_107c56de;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar12 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_107c56e7;
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
          if (iVar7 == 0) goto LAB_107c56de;
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
        goto LAB_107c56e7;
      }
    }
LAB_107c5718:
    uVar15 = 0;
    if (((*(byte *)(iVar10 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_107c5749;
    puVar6 = (undefined4 *)FUN_107ad7bd();
    *puVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar10 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_107c5484;
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
          if (BVar9 == 0) goto LAB_107c56de;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)nNumberOfBytesToWrite) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar10 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_107c56de;
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
            if (wVar5 != (wchar_t)local_570) goto LAB_107c56de;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_107c56de;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_107c56e7;
    }
LAB_107c56f1:
    if (local_570 == 0) goto LAB_107c5718;
    uVar15 = 5;
    if (local_570 != 5) {
      FUN_107ad7e3((short)local_570);
      goto LAB_107c5749;
    }
    puVar6 = (undefined4 *)FUN_107ad7bd();
    *puVar6 = 9;
  }
  puVar6 = (undefined4 *)FUN_107ad7d0();
  *puVar6 = uVar15;
LAB_107c5749:
  iVar10 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar10;
}


// ==== 107c575f __write

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
    puVar1 = (undefined4 *)FUN_107ad7d0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_11d89de8)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_11d89e40)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_11d89e40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_107ad7bd();
          *puVar1 = 9;
          puVar1 = (undefined4 *)FUN_107ad7d0();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_107c5831();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_107ad7d0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
    FUN_107ad745(0,0,0,0,0);
  }
  return -1;
}


// ==== 107c5831 FUN_107c5831

void FUN_107c5831(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 107c583b __commit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2005 Release */

int __cdecl __commit(int _FileHandle)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_11d89de8)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)(iVar4 + 4 + (&DAT_11d89e40)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_11d89e40)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_107c58fd;
          pDVar3 = (DWORD *)FUN_107ad7d0();
          *pDVar3 = local_20;
        }
        puVar1 = (undefined4 *)FUN_107ad7bd();
        *puVar1 = 9;
        local_20 = 0xffffffff;
LAB_107c58fd:
        FUN_107c5912();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
    FUN_107ad745(0,0,0,0,0);
  }
  return -1;
}


// ==== 107c5912 FUN_107c5912

void FUN_107c5912(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 107c591c FUN_107c591c

undefined4 FUN_107c591c(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

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
  iVar3 = FUN_107d2eb5(local_28);
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
        goto LAB_107c5a05;
      }
    }
    else if (uVar4 != 2) goto LAB_107c59c1;
    local_c = 0xc0000000;
  }
LAB_107c5a05:
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
    if (param_4 != 0x80) goto LAB_107c59c1;
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
      if (uVar4 == 0x200) goto LAB_107c5b0f;
      if (uVar4 != 0x300) goto LAB_107c59c1;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_107c5b0f:
        local_18 = 5;
        goto LAB_107c5ab9;
      }
      if (uVar4 != 0x700) {
LAB_107c59c1:
        puVar5 = (undefined4 *)FUN_107ad7d0();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        puVar5 = (undefined4 *)FUN_107ad7bd();
        *puVar5 = 0x16;
        FUN_107ad745(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_107c5ab9:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_11d8932c & param_5))) {
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
    puVar5 = (undefined4 *)FUN_107ad7d0();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    puVar5 = (undefined4 *)FUN_107ad7bd();
    *puVar5 = 0x18;
    goto LAB_107c5bd7;
  }
  *param_1 = 1;
  local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_107c5be3;
    }
    pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_107ad7e3(DVar6);
    goto LAB_107c5bd7;
  }
LAB_107c5be3:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_107ad7e3(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      puVar5 = (undefined4 *)FUN_107ad7bd();
      *puVar5 = 0xd;
    }
    goto LAB_107c5bd7;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar11;
  pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_107c5ded;
    if ((param_3 & 2) == 0) goto LAB_107c5d1d;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      piVar7 = (int *)FUN_107ad7d0();
      bVar11 = local_5;
      if (*piVar7 == 0x83) goto LAB_107c5d1d;
    }
    else {
      local_8 = '\0';
      iVar3 = FUN_107b1237(*in_EAX,&local_8,1);
      if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar9 != -1)) goto LAB_107c5d1d;
    }
LAB_107c5cd0:
    __close_nolock(*in_EAX);
    goto LAB_107c5bd7;
  }
LAB_107c5d1d:
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
      if ((param_3 & 0x301) == 0x301) goto LAB_107c5d8c;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_107c5d8c:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_107c5ded;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_107c5fef;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_107c5f85;
          }
LAB_107c5de4:
          if (local_18 != 5) goto LAB_107c5ded;
        }
LAB_107c5fef:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_107c5ded;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar10 == -1) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_107ad7bd();
            return *puVar5;
          }
          iVar3 = iVar3 + iVar10;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_107c5de4;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_107c5cd0;
                goto LAB_107c5f0e;
              }
            }
            goto LAB_107c5fef;
          }
          goto LAB_107c5ded;
        }
LAB_107c5f0e:
        iVar3 = FUN_107b1237(*in_EAX,&local_1c,3);
        if (iVar3 == -1) goto LAB_107c5cd0;
        if (iVar3 == 2) {
LAB_107c5f93:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_107ad7bd();
            *puVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_107c5cd0;
            local_6 = 2;
            goto LAB_107c5ded;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_107c5ded;
          }
          goto LAB_107c5f93;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_107c5f85:
        if (uVar4 == 0xffffffff) goto LAB_107c5cd0;
      }
    }
  }
LAB_107c5ded:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar8 = CreateFileA(param_2,uVar4 & 0x7fffffff,local_14,&local_38,3,local_10,(HANDLE)0x0);
    if (pvVar8 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_107ad7e3(DVar6);
      pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_107c5bd7:
      puVar5 = (undefined4 *)FUN_107ad7bd();
      return *puVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_11d89e40)[(int)*in_EAX >> 5]) = pvVar8;
  }
  return 0;
}


// ==== 107c612b FID_conflict:__sopen_helper

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
  
  local_8 = &DAT_109a7b88;
  uStack_c = 0x107c6137;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_107c591c(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_107c61c9();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


// ==== 107c61c9 FUN_107c61c9

void FUN_107c61c9(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_11d89e40)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}


// ==== 107c61f7 FID_conflict:__sopen

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


// ==== 107c6227 __sopen_s

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


// ==== 107c6245 __mbsicmp_l

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
    puVar4 = (undefined4 *)FUN_107ad7bd();
    *puVar4 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    puVar4 = (undefined4 *)FUN_107ad7bd();
    *puVar4 = 0x16;
    FUN_107ad745(0,0,0,0,0);
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
            if (iVar5 != 2) goto LAB_107c6417;
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
LAB_107c6417:
              puVar4 = (undefined4 *)FUN_107ad7bd();
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


// ==== 107c645f __mbsicmp

/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}


// ==== 107c6472 __mbsnbcmp_l

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
      puVar4 = (undefined4 *)FUN_107ad7bd();
      *puVar4 = 0x16;
      FUN_107ad745(0,0,0,0,0);
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
LAB_107c6571:
            _Str1 = puVar5;
            uVar6 = (uint)*_Str2;
            pbVar8 = _Str2 + 1;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
              if (sVar1 != 0) {
                sVar1 = _MaxCount - 2;
                if (*pbVar8 != 0) {
                  uVar6 = (uint)CONCAT11(*_Str2,*pbVar8);
                  pbVar8 = _Str2 + 2;
                  goto LAB_107c65a1;
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
              goto LAB_107c6571;
            }
            uVar6 = (uint)*_Str2;
            uVar7 = 0;
            pbVar8 = _Str2;
            _Str1 = puVar5;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
LAB_107c65b4:
              if (local_8 != '\0') {
                *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
              }
              return 0;
            }
          }
LAB_107c65a1:
          _MaxCount = sVar1;
          if ((ushort)uVar6 != uVar7) {
            iVar3 = (-(uint)((ushort)uVar6 < uVar7) & 2) - 1;
            if (local_8 == '\0') {
              return iVar3;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return iVar3;
          }
          if ((uVar7 == 0) || (_Str2 = pbVar8, _MaxCount == 0)) goto LAB_107c65b4;
        } while( true );
      }
      puVar4 = (undefined4 *)FUN_107ad7bd();
      *puVar4 = 0x16;
      FUN_107ad745(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
  }
  return iVar3;
}


// ==== 107c65db __mbsnbcmp

/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbcmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 107c65f2 __isatty

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  undefined4 *puVar1;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_11d89de8)) {
    return *(byte *)((&DAT_11d89e40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  puVar1 = (undefined4 *)FUN_107ad7bd();
  *puVar1 = 9;
  FUN_107ad745(0,0,0,0,0);
  return 0;
}


// ==== 107c6650 __wctomb_s_l

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
LAB_107c6672:
    eVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      puVar2 = (undefined4 *)FUN_107ad7bd();
      *puVar2 = 0x16;
      FUN_107ad745(0,0,0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_107c6702;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_107c6739:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_107c6672;
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
LAB_107c6702:
          puVar2 = (undefined4 *)FUN_107ad7bd();
          *puVar2 = 0x22;
          FUN_107ad745(0,0,0,0,0);
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
        goto LAB_107c6739;
      }
    }
    puVar2 = (undefined4 *)FUN_107ad7bd();
    *puVar2 = 0x2a;
    peVar3 = (errno_t *)FUN_107ad7bd();
    eVar1 = *peVar3;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return eVar1;
}


// ==== 107c67af _wctomb_s

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}


// ==== 107c67ca __wctomb_l

/* Library Function - Single Match
    __wctomb_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale)

{
  errno_t eVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  int local_8;
  
  local_8 = -1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  eVar1 = __wctomb_s_l(&local_8,_MbCh,(size_t)(local_18.locinfo)->locale_name[3],_WCh,&local_18);
  if (eVar1 != 0) {
    local_8 = -1;
  }
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return local_8;
}


// ==== 107c6819 _wctomb

/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2005 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  size_t _SizeInBytes;
  errno_t eVar1;
  _locale_t _Locale;
  int local_8;
  
  local_8 = -1;
  _Locale = (_locale_t)0x0;
  _SizeInBytes = ____mb_cur_max_func();
  eVar1 = __wctomb_s_l(&local_8,_MbCh,_SizeInBytes,_WCh,_Locale);
  if (eVar1 == 0) {
    return local_8;
  }
  return -1;
}


// ==== 107c6849 __validate_param_reuseA

/* Library Function - Single Match
    __validate_param_reuseA
   
   Library: Visual Studio 2005 Release */

bool __validate_param_reuseA(int *param_1,int param_2,char param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)param_1[2];
  if ((cVar1 == 'p') || (param_3 == 'p')) {
    return cVar1 == param_3;
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 == 's') || (param_3 == 'S')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return false;
    }
    if (((param_1[3] & 0x810U) != 0) != ((param_4 & 0x810) != 0)) {
      return false;
    }
    return true;
  }
  if (iVar2 != 0) {
    return false;
  }
  if (cVar1 == 'd') {
LAB_107c68ea:
    iVar3 = 1;
  }
  else {
    if ((((((cVar1 != 'i') && (cVar1 != 'o')) && (cVar1 != 'u')) &&
         (((cVar1 != 'x' && (cVar1 != 'X')) &&
          ((param_3 != 'd' && ((param_3 != 'i' && (param_3 != 'o')))))))) && (param_3 != 'u')) &&
       ((param_3 != 'x' && (param_3 != 'X')))) goto LAB_107c692d;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_107c68ea;
    iVar3 = 0;
  }
  if (((param_3 == 'd') || (param_3 == 'i')) ||
     ((param_3 == 'o' || (((param_3 == 'u' || (param_3 == 'x')) || (param_3 == 'X')))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return false;
  }
LAB_107c692d:
  return *param_1 == param_2;
}


// ==== 107c6972 write_char

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


// ==== 107c69a5 write_multi_char

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


// ==== 107c79ab write_char

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


// ==== 107c79de write_multi_char

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


// ==== 107c8416 __crtLCMapStringA_stat

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if (DAT_11d89cf8 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_11d89cf8 = 2;
      }
    }
    else {
      DAT_11d89cf8 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_107c8485;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_107c8485:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_11d89cf8 == 2) || (DAT_11d89cf8 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    iVar3 = ___ansicp(param_1);
    if (iVar3 == -1) goto LAB_107c87a6;
    if (iVar3 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,iVar3,param_3,&param_4,0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_107c87a6;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar7 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_107c8783;
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
LAB_107c8783:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_107c87a6;
  }
  if (DAT_11d89cf8 != 1) goto LAB_107c87a6;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_107c87a6;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_107c852d:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_107c852d;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_107c87a6;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_107c863c;
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
LAB_107c863c:
  __freea(local_10);
LAB_107c87a6:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 107c87b8 ___crtLCMapStringA

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


// ==== 107c87fb __crtGetStringTypeA_stat

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_11d89cfc == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_11d89cfc = 2;
      }
      goto LAB_107c8854;
    }
    DAT_11d89cfc = 1;
  }
  else {
LAB_107c8854:
    if ((DAT_11d89cfc == 2) || (DAT_11d89cfc == 0)) {
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
      goto LAB_107c89a1;
    }
    if (DAT_11d89cfc != 1) goto LAB_107c89a1;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_107c89a1;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_107c88e4:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_107c88e4;
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
LAB_107c89a1:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 107c89b3 ___crtGetStringTypeA

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


// ==== 107c8a22 __get_lc_time

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


// ==== 107c8e3b ___free_lc_time

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


// ==== 107c8fcb ___init_time

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
    _Memory = &PTR_DAT_10b183a8;
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
  if (ppuVar1 != &PTR_DAT_10b183a8) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *ppiVar3 = (int *)_Memory;
  return 0;
}


// ==== 107c9071 ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10b18468) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10b1846c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10b18470) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 107c90b1 ___init_numeric

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
    _LocInfo = (threadlocinfo *)&PTR_DAT_10b18468;
LAB_107c921b:
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
          _Address->refcount = (int)PTR_DAT_10b18468;
          _Address->lc_codepage = (uint)PTR_DAT_10b1846c;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_10b18470;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_107c9141:
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
            goto LAB_107c9141;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_107c91cb;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_107c91cb:
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
        goto LAB_107c921b;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}


// ==== 107c92ac ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10b18474) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10b18478) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10b1847c) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10b18480) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10b18484) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10b18488) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10b1848c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 107c9335 ___init_monetary

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
    _Memory = &PTR_DAT_10b18468;
LAB_107c959c:
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
          ppuVar22 = &PTR_DAT_10b18468;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_107c9567:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_107c959c;
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
                if (cVar2 != ';') goto LAB_107c953c;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_107c953c:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_107c9567;
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


// ==== 107c95f9 ___init_ctype

/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  LONG *lpAddend;
  undefined2 *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  uint uVar8;
  localeinfo_struct local_4c;
  wchar_t *local_44;
  LPWORD local_40;
  undefined2 *local_3c;
  int *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  undefined2 *local_28;
  LPCSTR local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_20 = (BYTE *)0x0;
  local_2c = (void *)0x0;
  local_24 = (LPCSTR)0x0;
  local_4c.locinfo = _LocInfo;
  local_4c.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    lpAddend = (LONG *)_LocInfo[1].lc_collate_cp;
    if (lpAddend != (LONG *)0x0) {
      InterlockedDecrement(lpAddend);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_108ff698;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_108ff818;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_107c997f;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_4c,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_107c9912:
    _free(local_30);
    _free(local_28);
    _free(local_20);
    _free(local_2c);
  }
  else {
    local_30 = __malloc_crt(4);
    local_28 = __calloc_crt(0x180,2);
    local_20 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_24 = __calloc_crt(0x101,1);
    if ((local_30 == (undefined4 *)0x0) ||
       ((((local_28 == (undefined2 *)0x0 || (local_24 == (LPCSTR)0x0)) || (local_20 == (BYTE *)0x0))
        || (local_2c == (void *)0x0)))) goto LAB_107c9912;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_24[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_107c9912;
    local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
    if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar5 = local_1c.LeadByte + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar8 = (uint)pBVar5[-1]; (int)uVar8 <= (int)(uint)bVar2; uVar8 = uVar8 + 1) {
          local_24[uVar8] = ' ';
          bVar2 = *pBVar5;
        }
        pBVar7 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar7 != 0);
    }
    local_40 = local_28 + 0x80;
    BVar4 = ___crtGetStringTypeA((_locale_t)0x0,1,local_24,0x100,local_40,_LocInfo->lc_codepage,0);
    if (((BVar4 == 0) ||
        (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                    local_24 + 1,0xff,(LPSTR)(local_20 + 0x81),0xff,
                                    _LocInfo->lc_codepage,0), iVar3 == 0)) ||
       (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                   local_24 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                   _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_28,
       iVar3 == 0)) goto LAB_107c9912;
    local_3c = local_28 + 0x7f;
    *local_3c = 0;
    local_44 = (wchar_t *)(local_20 + 0x80);
    local_20[0x7f] = 0;
    *(undefined1 *)((int)local_2c + 0x7f) = 0;
    *(byte *)local_44 = 0;
    local_38 = (int *)((int)local_2c + 0x80);
    *(undefined1 *)local_38 = 0;
    if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        local_20 = pBVar7;
        if (*pBVar7 == 0) break;
        uVar8 = (uint)pBVar7[-1];
        if (uVar8 <= *pBVar7) {
          local_28 = _Dst + uVar8 + 0x80;
          do {
            *local_28 = 0x8000;
            uVar8 = uVar8 + 1;
            local_28 = local_28 + 1;
          } while ((int)uVar8 <= (int)(uint)*pBVar7);
        }
        local_20 = pBVar7 + 2;
        pBVar1 = pBVar7 + 1;
        pBVar7 = local_20;
      } while (*pBVar1 != 0);
    }
    _memcpy(_Dst,_Dst + 0x100,0xfe);
    _memcpy(pBVar5,pBVar5 + 0x100,0x7f);
    _memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
    if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
      _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
      _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
      _free(_LocInfo[1].lc_category[0].refcount + -0x20);
      _free((void *)_LocInfo[1].lc_collate_cp);
    }
    *local_30 = 1;
    _LocInfo[1].lc_collate_cp = (uint)local_30;
    _LocInfo[1].lc_category[0].locale = (char *)local_40;
    _LocInfo[1].lc_time_cp = (uint)local_3c;
    _LocInfo[1].lc_category[0].wlocale = local_44;
    _LocInfo[1].lc_category[0].refcount = local_38;
    _LocInfo->locale_name[3] = local_34;
  }
  _free(local_24);
LAB_107c997f:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 107c998e ____mb_cur_max_func

/* Library Function - Single Match
    ____mb_cur_max_func
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl ____mb_cur_max_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_10b17f90) && ((p_Var1->_ownlocale & DAT_10b17eac) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (int)ptVar2->locale_name[3];
}


// ==== 107c99cd ____lc_codepage_func

/* Library Function - Single Match
    ____lc_codepage_func
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_10b17f90) && ((p_Var1->_ownlocale & DAT_10b17eac) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}


// ==== 107c9a42 __Getdays_l

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


// ==== 107c9b49 __Getmonths_l

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


// ==== 107c9c50 __Gettnames_l

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


// ==== 107c9fae FUN_107c9fae

void FUN_107c9fae(void)

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


// ==== 107ca004 FID_conflict:__store_num

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


// ==== 107ca07d FUN_107ca07d

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_107ca07d(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

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
      if ((-0x76d < in_EDX[5]) && (in_EDX[5] < 0x1fa4)) goto LAB_107ca2c8;
LAB_107ca230:
      puVar3 = (undefined4 *)FUN_107ad7bd();
      goto LAB_107ca358;
    }
    if (in_AL < 'J') {
      if (in_AL == 'I') {
        if ((-1 < in_EDX[2]) && (in_EDX[2] < 0x18)) goto LAB_107ca2c8;
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
joined_r0x107ca34c:
          if ((-1 < iVar2) && (iVar2 < 7)) goto LAB_107ca453;
        }
        else if (in_AL == 'B') {
          iVar2 = in_EDX[4];
joined_r0x107ca332:
          if ((-1 < iVar2) && (iVar2 < 0xc)) goto LAB_107ca453;
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
            goto LAB_107ca0e1;
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
LAB_107ca30f:
              uVar6 = 2;
LAB_107ca313:
              iVar2 = FUN_107ca463(param_1,uVar6);
              if (iVar2 == 0) {
                return 0;
              }
              return 1;
            }
            iVar2 = in_EDX[6];
          }
          if ((-1 < iVar2) && (iVar2 < 7)) {
            iVar2 = in_EDX[7];
joined_r0x107ca28f:
            if ((-1 < iVar2) && (iVar2 < 0x16e)) goto LAB_107ca2c8;
          }
          goto LAB_107ca353;
        }
        iVar2 = *in_EDX;
      }
      if (-1 < iVar2) {
        bVar5 = SBORROW4(iVar2,0x3b);
        iVar2 = iVar2 + -0x3b;
        bVar4 = iVar2 == 0;
LAB_107ca0e1:
        if (bVar4 || bVar5 != iVar2 < 0) {
LAB_107ca2c8:
          FID_conflict___store_num(param_4);
          return 1;
        }
      }
    }
  }
  else if (in_AL < 'n') {
    if (in_AL != 'm') {
      if (in_AL == 'Z') {
LAB_107ca3aa:
        ___tzset();
        FUN_107d3329();
LAB_107ca453:
        FUN_107c9fae();
        return 1;
      }
      if (in_AL == 'a') {
        iVar2 = in_EDX[6];
        goto joined_r0x107ca34c;
      }
      if (in_AL == 'b') {
        iVar2 = in_EDX[4];
        goto joined_r0x107ca332;
      }
      if (in_AL == 'c') {
        iVar2 = FUN_107ca463(param_1,param_4 != 0);
        if (iVar2 == 0) {
          return 0;
        }
        if (*param_2 == 0) {
          return 0;
        }
        *(undefined1 *)*in_ECX = 0x20;
        *in_ECX = *in_ECX + 1;
        *param_2 = *param_2 + -1;
        goto LAB_107ca30f;
      }
      if (in_AL != 'd') {
        if (in_AL != 'j') {
          return 0;
        }
        iVar2 = in_EDX[7];
        goto joined_r0x107ca28f;
      }
      if ((0 < in_EDX[3]) && (in_EDX[3] < 0x20)) goto LAB_107ca2c8;
      goto LAB_107ca230;
    }
    if ((-1 < in_EDX[4]) && (in_EDX[4] < 0xc)) goto LAB_107ca2c8;
  }
  else if (in_AL == 'p') {
    if ((-1 < in_EDX[2]) && (in_EDX[2] < 0x18)) goto LAB_107ca453;
  }
  else if (in_AL == 'w') {
    if ((-1 < in_EDX[6]) && (in_EDX[6] < 7)) goto LAB_107ca2c8;
  }
  else {
    if (in_AL == 'x') {
      if (param_4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      goto LAB_107ca313;
    }
    if (in_AL != 'y') {
      if (in_AL != 'z') {
        return 0;
      }
      goto LAB_107ca3aa;
    }
    if (-1 < in_EDX[5]) goto LAB_107ca2c8;
  }
LAB_107ca353:
  puVar3 = (undefined4 *)FUN_107ad7bd();
LAB_107ca358:
  *puVar3 = 0x16;
  FUN_107ad745(0,0,0,0,0);
  return 0;
}


// ==== 107ca463 FUN_107ca463

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_107ca463(_locale_t param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,
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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
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
LAB_107ca543:
          puVar6 = puVar2 + 2;
        }
      }
      else {
        puVar2 = _malloc(local_14 + 8U);
        puVar6 = (undefined4 *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0xdddd;
          goto LAB_107ca543;
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
LAB_107ca595:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  cVar1 = *_Str1;
joined_r0x107ca5ab:
  if ((cVar1 == (code)0x0) || (*param_5 == 0)) goto LAB_107ca595;
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
joined_r0x107ca72e:
        if ((uVar4 != 1) && (uVar4 != 2)) {
joined_r0x107ca734:
          if (uVar4 != 3) goto LAB_107ca5ff;
        }
      }
      goto LAB_107ca896;
    }
    if (iVar3 != 0x27) {
      if (iVar3 == 0x41) {
LAB_107ca687:
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
        if (uVar4 != 0) goto joined_r0x107ca886;
        local_c = (undefined4 *)0x1;
      }
      else {
        if (iVar3 != 0x4d) {
          if (iVar3 != 0x61) goto LAB_107ca5ff;
          goto LAB_107ca687;
        }
        if (uVar4 != 0) goto joined_r0x107ca72e;
        local_c = (undefined4 *)0x1;
      }
      goto LAB_107ca896;
    }
    _Str1 = _Str1 + uVar5;
    if ((uVar5 & 1) != 0) {
      cVar1 = *_Str1;
      if (cVar1 == (code)0x0) goto LAB_107ca595;
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
          if (*pcVar7 == (code)0x0) goto LAB_107ca595;
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
joined_r0x107ca886:
        if (uVar5 != 2) {
LAB_107ca5ff:
          iVar3 = __isleadbyte_l(iVar3,param_1);
          pcVar7 = _Str1;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar7 = _Str1 + 1;
            if (*pcVar7 == (code)0x0) goto LAB_107ca595;
            *(code *)*param_4 = *_Str1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(code *)*param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = pcVar7 + 1;
          goto LAB_107ca636;
        }
      }
    }
    else if (iVar3 == 0x6d) {
      if (uVar4 != 0) goto joined_r0x107ca886;
      local_c = (undefined4 *)0x1;
    }
    else if (iVar3 == 0x73) {
      if (uVar4 != 0) goto joined_r0x107ca886;
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
            if (*pcVar8 == '\0') goto LAB_107ca595;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = local_10;
          goto LAB_107ca636;
        }
        while ((_Str1 = local_10, *pcVar9 != '\0' && (*param_5 != 0))) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_107ca595;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          pcVar9 = pcVar8 + 1;
          *param_5 = *param_5 - 1;
        }
        goto LAB_107ca636;
      }
      if (iVar3 != 0x79) goto LAB_107ca5ff;
      if (uVar4 != 1) goto joined_r0x107ca734;
    }
LAB_107ca896:
    iVar3 = FUN_107ca07d(param_1,param_5,param_6,local_c);
    _Str1 = local_10;
    if (iVar3 == 0) goto LAB_107ca595;
  }
LAB_107ca636:
  cVar1 = *_Str1;
  goto joined_r0x107ca5ab;
}


// ==== 107ca8c0 __Strftime_l

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
    puVar2 = (undefined4 *)FUN_107ad7bd();
    *puVar2 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_107ad7bd();
    *puVar2 = 0x16;
    FUN_107ad745(0,0,0,0,0);
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
            puVar2 = (undefined4 *)FUN_107ad7bd();
            *puVar2 = 0x16;
            goto LAB_107caa5c;
          }
          pcVar4 = param_3 + 1;
          cVar1 = *pcVar4;
          if (cVar1 == '#') {
            pcVar4 = param_3 + 2;
          }
          iVar3 = FUN_107ca07d(&local_24,&local_8,local_10,cVar1 == '#');
          if (iVar3 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_107caa0d;
          }
        }
        else {
          iVar3 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar4 = param_3;
          if ((iVar3 != 0) && (1 < local_8)) {
            pcVar4 = param_3 + 1;
            if (*pcVar4 == '\0') {
              local_c = 1;
              goto LAB_107caa0d;
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
LAB_107caa0d:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      puVar2 = (undefined4 *)FUN_107ad7bd();
      *puVar2 = 0x22;
      goto LAB_107caa5c;
    }
  }
  puVar2 = (undefined4 *)FUN_107ad7bd();
  *puVar2 = 0x16;
  FUN_107ad745(0,0,0,0,0);
LAB_107caa5c:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}


// ==== 107caa6f __strftime_l

/* Library Function - Single Match
    __strftime_l
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __strftime_l(char *_Buf,size_t _Max_size,char *_Format,tm *_Tm,_locale_t _Locale)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_Max_size,_Format,_Tm,0,_Locale);
  return sVar1;
}


// ==== 107caaaa __Strftime

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(param_1,_Maxsize,param_3,param_4,param_5,0);
  return sVar1;
}


// ==== 107caaf0 _strcspn

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


// ==== 107cab36 _TranslateName

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


// ==== 107cabaa _ProcessCodePage

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if ((in_ECX == (char *)0x0) || (*in_ECX == '\0')) {
LAB_107cabf2:
    LCType = 0x1004;
LAB_107cabfd:
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),LCType,local_10,8);
    if (iVar1 == 0) goto LAB_107cac14;
    in_ECX = local_10;
  }
  else {
    iVar1 = _strcmp(in_ECX,"ACP");
    if (iVar1 == 0) goto LAB_107cabf2;
    iVar1 = _strcmp(in_ECX,"OCP");
    if (iVar1 == 0) {
      LCType = 0xb;
      goto LAB_107cabfd;
    }
  }
  _atol(in_ECX);
LAB_107cac14:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107cac21 _TestDefaultCountry

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2005 Release */

undefined4 _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_10900218 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


// ==== 107cac3f _LcidFromHexString

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


// ==== 107cac71 _GetPrimaryLen

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


// ==== 107cac8c _CountryEnumProc@4

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
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


// ==== 107cad22 _TestDefaultLanguage

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(), param_1 != uVar2)) && (param_2 != 0)) {
    _Str = (char *)*in_ECX;
    _GetPrimaryLen();
    _strlen(_Str);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107cad94 _LangCountryEnumProc@4

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  p_Var5 = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_107cade5:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_107caf53;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_107cade5;
    iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_107cae95:
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
            goto LAB_107cae95;
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
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_107caf53;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_107cade5;
  iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)p_Var5->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen)
         ) {
        uVar7 = 1;
        goto LAB_107caf2b;
      }
      goto LAB_107caf39;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80), iVar3 != 0)) goto LAB_107caf53;
    uVar7 = 0;
LAB_107caf2b:
    iVar3 = _TestDefaultLanguage(Locale,uVar7);
    if (iVar3 == 0) goto LAB_107caf53;
LAB_107caf39:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_107caf53:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107caf64 _LanguageEnumProc@4

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_107cb013;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      uVar4 = 1;
      goto LAB_107caff0;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80), iVar3 != 0))
    goto LAB_107cb013;
    uVar4 = 0;
LAB_107caff0:
    iVar3 = _TestDefaultLanguage(Locale,uVar4);
    if (iVar3 == 0) goto LAB_107cb013;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_107cb013:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107cb04f _GetLcidFromLangCountry

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


// ==== 107cb0b4 _GetLcidFromLanguage

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


// ==== 107cb0f0 ___get_qualified_locale

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
LAB_107cb1c8:
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
      _TranslateName(&PTR_s_america_10900160,0x16,ppwVar2);
    }
    (p_Var4->_setloc_data).iLocState = 0;
    if ((p_Var10->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var10->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var4->_setloc_data).iLocState = 0x104;
        goto LAB_107cb1c8;
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
      if ((p_Var4->_setloc_data).iLocState != 0) goto LAB_107cb1dd;
      iVar9 = _TranslateName(&PTR_s_american_108fff58,0x40,p_Var10);
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
LAB_107cb1dd:
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


// ==== 107cdec5 _strncmp

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
          goto LAB_107cdf7f;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_107cdf7f;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_107cdf7f;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_107cdf7f;
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
LAB_107cdf7f:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}


// ==== 107cdf90 _strpbrk

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


// ==== 107cdfd0 __crtGetStringTypeW_stat

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_107ce1e2;
  if (DAT_11d89d04 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_11d89d04 = 2;
      }
      goto LAB_107ce037;
    }
    DAT_11d89d04 = 1;
  }
  else {
LAB_107ce037:
    if (DAT_11d89d04 != 1) {
      if ((DAT_11d89d04 != 2) && (DAT_11d89d04 != 0)) goto LAB_107ce1e2;
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
      if (_Size_00 == 0) goto LAB_107ce1e2;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_107ce0e8:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_107ce0e8;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_107ce1e2;
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
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_107ce1d6;
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
LAB_107ce1d6:
      __freea(local_c);
      goto LAB_107ce1e2;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_107ce1e2:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 107ce1f4 ___crtGetStringTypeW

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


// ==== 107ce24e __crtLCMapStringW_stat

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
  
  uVar1 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  lpDestStr = (char *)0x0;
  if (DAT_11d89d08 == 0) {
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_11d89d08 = 2;
      }
    }
    else {
      DAT_11d89d08 = 1;
    }
  }
  psVar4 = (short *)param_3;
  pwVar7 = param_4;
  if (0 < (int)param_4) {
    do {
      pwVar7 = (wchar_t *)((int)pwVar7 + -1);
      if (*psVar4 == 0) goto LAB_107ce2c3;
      psVar4 = psVar4 + 1;
    } while (pwVar7 != (wchar_t *)0x0);
    pwVar7 = (wchar_t *)0xffffffff;
LAB_107ce2c3:
    param_4 = (wchar_t *)((int)param_4 + (-1 - (int)pwVar7));
  }
  if (DAT_11d89d08 == 1) {
    LCMapStringW((LCID)param_1,param_2,(LPCWSTR)param_3,(int)param_4,(LPWSTR)param_5,(int)param_6);
    goto LAB_107ce49d;
  }
  if ((DAT_11d89d08 != 2) && (DAT_11d89d08 != 0)) goto LAB_107ce49d;
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
  if (cbMultiByte == 0) goto LAB_107ce49d;
  if (((int)cbMultiByte < 1) || (0xffffffe0 / cbMultiByte == 0)) {
    local_c = (LPCSTR)0x0;
  }
  else if (cbMultiByte + 8 < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe0;
    local_c = &stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_107ce38c:
      local_c = (LPCSTR)(puVar5 + 2);
    }
  }
  else {
    puVar5 = _malloc(cbMultiByte + 8);
    local_c = (LPCSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_107ce38c;
    }
  }
  if (local_c == (LPCSTR)0x0) goto LAB_107ce49d;
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
LAB_107ce410:
          lpDestStr = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_MaxCount + 8);
        lpDestStr = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_107ce410;
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
LAB_107ce49d:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 107ce4af ___crtLCMapStringW

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


// ==== 107ce4ef __fgetwc_nolock

/* Library Function - Single Match
    __fgetwc_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __fgetwc_nolock(FILE *_File)

{
  int *piVar1;
  FILE *_File_00;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  size_t _SrcSizeInBytes;
  undefined4 local_8;
  
  _File_00 = _File;
  if ((_File->_flag & 0x40) == 0) {
    iVar3 = __fileno(_File);
    if ((iVar3 == -1) || (iVar3 = __fileno(_File_00), iVar3 == -2)) {
      puVar5 = &DAT_10b18190;
    }
    else {
      iVar3 = __fileno(_File_00);
      uVar4 = __fileno(_File_00);
      puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_11d89e40)[iVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) != 0) {
      piVar1 = &_File_00->_cnt;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar4 = __filbuf(_File_00);
      }
      else {
        uVar4 = (uint)(byte)*_File_00->_ptr;
        _File_00->_ptr = _File_00->_ptr + 1;
      }
      if (uVar4 != 0xffffffff) {
        piVar1 = &_File_00->_cnt;
        *piVar1 = *piVar1 + -1;
        _File = (FILE *)CONCAT31(_File._1_3_,(char)uVar4);
        if (*piVar1 < 0) {
          uVar4 = __filbuf(_File_00);
        }
        else {
          uVar4 = (uint)(byte)*_File_00->_ptr;
          _File_00->_ptr = _File_00->_ptr + 1;
        }
        if (uVar4 != 0xffffffff) {
          _File._0_2_ = CONCAT11((char)uVar4,_File._0_1_);
          _File = (FILE *)(uint)(ushort)_File;
          goto LAB_107ce58f;
        }
      }
      return 0xffff;
    }
    if ((_File_00->_flag & 0x40) == 0) {
      iVar3 = __fileno(_File_00);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File_00), iVar3 == -2)) {
        puVar5 = &DAT_10b18190;
      }
      else {
        iVar3 = __fileno(_File_00);
        uVar4 = __fileno(_File_00);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_11d89e40)[iVar3 >> 5]);
      }
      if ((puVar5[4] & 0x80) != 0) {
        _SrcSizeInBytes = 1;
        piVar1 = &_File_00->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar4 = __filbuf(_File_00);
        }
        else {
          uVar4 = (uint)(byte)*_File_00->_ptr;
          _File_00->_ptr = _File_00->_ptr + 1;
        }
        if (uVar4 == 0xffffffff) {
          return 0xffff;
        }
        local_8 = CONCAT31(local_8._1_3_,(char)uVar4);
        iVar3 = _isleadbyte(uVar4 & 0xff);
        if (iVar3 != 0) {
          piVar1 = &_File_00->_cnt;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            uVar4 = __filbuf(_File_00);
          }
          else {
            uVar4 = (uint)(byte)*_File_00->_ptr;
            _File_00->_ptr = _File_00->_ptr + 1;
          }
          if (uVar4 == 0xffffffff) {
            _ungetc((int)(char)local_8,_File_00);
            return 0xffff;
          }
          local_8._0_2_ = CONCAT11((char)uVar4,(char)local_8);
          _SrcSizeInBytes = 2;
        }
        iVar3 = _mbtowc((wchar_t *)&_File,(char *)&local_8,_SrcSizeInBytes);
        if (iVar3 == -1) {
          puVar6 = (undefined4 *)FUN_107ad7bd();
          *puVar6 = 0x2a;
          return 0xffff;
        }
LAB_107ce58f:
        return (ushort)_File;
      }
    }
  }
  piVar1 = &_File_00->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    iVar3 = __filwbuf(_File_00);
    wVar2 = (wint_t)iVar3;
  }
  else {
    wVar2 = *(wint_t *)_File_00->_ptr;
    _File_00->_ptr = (char *)((int)_File_00->_ptr + 2);
  }
  return wVar2;
}


// ==== 107ce70e __ungetwc_nolock

/* Library Function - Single Match
    __ungetwc_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __ungetwc_nolock(wint_t _Ch,FILE *_File)

{
  wint_t *pwVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  errno_t eVar6;
  undefined4 local_14;
  char local_10;
  undefined1 local_f;
  uint local_8;
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if (_Ch != 0xffff) {
    uVar4 = _File->_flag;
    if (((uVar4 & 1) != 0) || (((char)uVar4 < '\0' && ((uVar4 & 2) == 0)))) {
      if (_File->_base == (char *)0x0) {
        __getbuf(_File);
      }
      if ((_File->_flag & 0x40) == 0) {
        iVar3 = __fileno(_File);
        if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
          puVar5 = &DAT_10b18190;
        }
        else {
          iVar3 = __fileno(_File);
          uVar4 = __fileno(_File);
          puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_11d89e40)[iVar3 >> 5]);
        }
        if ((puVar5[4] & 0x80) != 0) {
          iVar3 = __fileno(_File);
          if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
            puVar5 = &DAT_10b18190;
          }
          else {
            iVar3 = __fileno(_File);
            uVar4 = __fileno(_File);
            puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_11d89e40)[iVar3 >> 5]);
          }
          if ((puVar5[0x24] & 0x7f) == 0) {
            eVar6 = _wctomb_s(&local_14,&local_10,5,_Ch);
            if (eVar6 != 0) goto LAB_107ce892;
          }
          else {
            local_10 = (char)_Ch;
            local_f = (char)(_Ch >> 8);
            local_14 = 2;
          }
          iVar3 = local_14;
          if (_File->_ptr < _File->_base + local_14) {
            if ((_File->_cnt != 0) || (_File->_bufsiz < local_14)) goto LAB_107ce892;
            _File->_ptr = _File->_base + local_14;
          }
          while (iVar3 = iVar3 + -1, -1 < iVar3) {
            _File->_ptr = _File->_ptr + -1;
            *_File->_ptr = (&local_10)[iVar3];
          }
          _File->_cnt = _File->_cnt + local_14;
          _File->_flag = _File->_flag & 0xffffffefU | 1;
          goto LAB_107ce892;
        }
      }
      if (_File->_ptr < _File->_base + 2) {
        if ((_File->_cnt != 0) || ((uint)_File->_bufsiz < 2)) goto LAB_107ce892;
        _File->_ptr = _File->_base + 2;
      }
      _File->_ptr = _File->_ptr + -2;
      pwVar1 = (wint_t *)_File->_ptr;
      if ((_File->_flag & 0x40) == 0) {
        *pwVar1 = _Ch;
      }
      else if (*pwVar1 != _Ch) {
        _File->_ptr = (char *)(pwVar1 + 1);
        goto LAB_107ce892;
      }
      _File->_cnt = _File->_cnt + 2;
      _File->_flag = _File->_flag & 0xffffffefU | 1;
    }
  }
LAB_107ce892:
  wVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar2;
}


// ==== 107ce930 FUN_107ce930

int FUN_107ce930(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*psVar1 == 0) break;
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((iVar2 != 0) && (*psVar1 == 0)) {
      return ((int)psVar1 - (int)param_1 >> 1) + 1;
    }
  }
  return param_2;
}


// ==== 107ce95f __wcstombs_l_helper

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  local_30 = param_2;
  local_28 = 0;
  local_14 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) goto LAB_107ceae8;
  if ((param_2 == (LPCWSTR)0x0) || (0x7fffffff < param_3)) {
    puVar3 = (undefined4 *)FUN_107ad7bd();
    *puVar3 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    goto LAB_107ceae8;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_24,param_4);
  if (param_1 == (LPSTR)0x0) {
    if (*(int *)(local_24[0] + 0x14) == 0) {
      FUN_107b4f0f(param_2);
    }
    else {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  &local_14);
      if ((iVar5 == 0) || (local_14 != 0)) goto LAB_107ceace;
    }
LAB_107cea1d:
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if (*(int *)(local_24[0] + 0x14) == 0) {
      if (param_3 != 0) {
        do {
          if (0xff < (ushort)*param_2) goto LAB_107ceace;
          param_1[local_28] = (CHAR)*param_2;
          WVar2 = *param_2;
          param_2 = param_2 + 1;
          if (WVar2 == L'\0') goto LAB_107cea1d;
          local_28 = local_28 + 1;
        } while (local_28 < param_3);
      }
      if (local_18 != '\0') {
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
      }
      goto LAB_107ceae8;
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
joined_r0x107ceab0:
        if (local_14 == 0) goto LAB_107cea1d;
      }
    }
    else {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_14);
      if (iVar5 != 0) goto joined_r0x107ceab0;
      if (local_14 == 0) {
        DVar6 = GetLastError();
        uVar8 = 0;
        if (DVar6 == 0x7a) {
          while (uVar8 < param_3) {
            uVar7 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,local_30,1,local_10,
                                        *(int *)(local_24[0] + 0xac),(LPCSTR)0x0,&local_14);
            if ((((uVar7 == 0) || (local_14 != 0)) || ((int)uVar7 < 0)) || (5 < uVar7))
            goto LAB_107ceace;
            if (param_3 < uVar7 + uVar8) break;
            iVar5 = 0;
            if (0 < (int)uVar7) {
              do {
                cVar1 = local_10[iVar5];
                param_1[uVar8] = cVar1;
                if (cVar1 == '\0') goto LAB_107ceb56;
                iVar5 = iVar5 + 1;
                uVar8 = uVar8 + 1;
              } while (iVar5 < (int)uVar7);
            }
            local_30 = local_30 + 1;
          }
LAB_107ceb56:
          if (local_18 != '\0') {
            *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
          }
          goto LAB_107ceae8;
        }
      }
    }
LAB_107ceace:
    puVar3 = (undefined4 *)FUN_107ad7bd();
    *puVar3 = 0x2a;
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
  }
LAB_107ceae8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107cebc1 __wcstombs_s_l

/* Library Function - Single Match
    __wcstombs_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,wchar_t *_Src,
              size_t _MaxCountInBytes,_locale_t _Locale)

{
  size_t sVar1;
  int iVar2;
  errno_t *peVar3;
  uint uVar4;
  errno_t eVar5;
  errno_t local_8;
  
  local_8 = 0;
  if (_Dst == (char *)0x0) {
    if (_DstSizeInBytes != 0) goto LAB_107cec1b;
  }
  else if (_DstSizeInBytes == 0) {
LAB_107cec1b:
    peVar3 = (errno_t *)FUN_107ad7bd();
    eVar5 = 0x16;
    goto LAB_107cec22;
  }
  if (_Dst != (char *)0x0) {
    *_Dst = '\0';
  }
  if (_PtNumOfCharConverted != (size_t *)0x0) {
    *_PtNumOfCharConverted = 0;
  }
  sVar1 = _MaxCountInBytes;
  if (_DstSizeInBytes < _MaxCountInBytes) {
    sVar1 = _DstSizeInBytes;
  }
  iVar2 = __wcstombs_l_helper(_Dst,_Src,sVar1,_Locale);
  if (iVar2 == -1) {
    if (_Dst != (char *)0x0) {
      *_Dst = '\0';
    }
    peVar3 = (errno_t *)FUN_107ad7bd();
    return *peVar3;
  }
  uVar4 = iVar2 + 1;
  if (_Dst != (char *)0x0) {
    if (_DstSizeInBytes < uVar4) {
      if ((_MaxCountInBytes != 0xffffffff) && (*_Dst = '\0', _DstSizeInBytes <= uVar4)) {
        peVar3 = (errno_t *)FUN_107ad7bd();
        eVar5 = 0x22;
LAB_107cec22:
        *peVar3 = eVar5;
        FUN_107ad745(0,0,0,0,0);
        return eVar5;
      }
      local_8 = 0x50;
      uVar4 = _DstSizeInBytes;
    }
    _Dst[uVar4 - 1] = '\0';
  }
  if (_PtNumOfCharConverted == (size_t *)0x0) {
    return local_8;
  }
  *_PtNumOfCharConverted = uVar4;
  return local_8;
}


// ==== 107cec72 _wcstombs_s

/* Library Function - Single Match
    _wcstombs_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
_wcstombs_s(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,wchar_t *_Src,
           size_t _MaxCountInBytes)

{
  errno_t eVar1;
  
  eVar1 = __wcstombs_s_l(_PtNumOfCharConverted,_Dst,_DstSizeInBytes,_Src,_MaxCountInBytes,
                         (_locale_t)0x0);
  return eVar1;
}


// ==== 107cec90 __87except

/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2005 Release */

void __87except(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_10b171d4 ^ (uint)&local_94;
  local_94 = (uint)*param_3;
  iVar1 = *param_2;
  if (iVar1 == 1) {
LAB_107cecea:
    uVar2 = 8;
LAB_107cecec:
    iVar1 = __handle_exc(uVar2,param_2 + 6,local_94);
    if (iVar1 == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_94,uVar2,param_1,param_2 + 2,param_2 + 6);
    }
  }
  else {
    if (iVar1 == 2) {
      uVar2 = 4;
      goto LAB_107cecec;
    }
    if (iVar1 == 3) {
      uVar2 = 0x11;
      goto LAB_107cecec;
    }
    if (iVar1 == 4) {
      uVar2 = 0x12;
      goto LAB_107cecec;
    }
    if (iVar1 == 5) goto LAB_107cecea;
    if (iVar1 == 7) {
      *param_2 = 1;
    }
    else if (iVar1 == 8) {
      uVar2 = 0x10;
      goto LAB_107cecec;
    }
  }
  __ctrlfp(local_94,0xffff);
  if ((*param_2 != 8) && (DAT_10b1879c == 0)) {
    iVar1 = FUN_107d0e62(param_2);
    if (iVar1 != 0) goto LAB_107ced77;
  }
  __set_errno_from_matherr(*param_2);
LAB_107ced77:
  __security_check_cookie(local_14 ^ (uint)&local_94);
  return;
}


// ==== 107cee3b __RoundMan

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
      if (2 < iVar4) goto LAB_107cef03;
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
LAB_107cef03:
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


// ==== 107cef69 __ShrMan

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


// ==== 107cf001 __ld12cvt

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
      if (local_24[iVar3] != 0) goto LAB_107cf171;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
LAB_107cf4e7:
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
          if (param_1 < *puVar7) goto LAB_107cf126;
          bVar13 = param_1 < uVar8;
          do {
            local_8 = 0;
            if (!bVar13) goto LAB_107cf12d;
LAB_107cf126:
            do {
              local_8 = 1;
LAB_107cf12d:
              iVar3 = iVar3 + -1;
              *puVar7 = (uint)param_1;
              if ((iVar3 < 0) || (local_8 == 0)) {
                param_1 = (ushort *)local_8;
                goto LAB_107cf13b;
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
LAB_107cf13b:
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
LAB_107cf171:
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
          goto LAB_107cf4e9;
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
        goto LAB_107cf4e7;
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
          if (2 < iVar11) goto LAB_107cf2dc;
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
LAB_107cf2dc:
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
LAB_107cf4e9:
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


// ==== 107cf52a __ld12tod

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
        goto LAB_107cfa29;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10b184b8 - 1;
    iVar4 = (int)(DAT_10b184b8 + ((int)DAT_10b184b8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10b184b8 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_107cf65d;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_107cf664;
LAB_107cf65d:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_107cf664:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_107cf672;
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
LAB_107cf672:
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
    if (iVar12 < (int)(DAT_10b184b4 - DAT_10b184b8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10b184b4 < iVar12) {
        if (iVar12 < DAT_10b184b0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10b184c4;
          iVar2 = (int)(DAT_10b184bc + ((int)DAT_10b184bc >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10b184bc & 0x8000001f;
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
          iVar12 = (int)(DAT_10b184bc + ((int)DAT_10b184bc >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10b184bc & 0x8000001f;
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
          iVar12 = DAT_10b184c4 + DAT_10b184b0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_107cfa29;
      }
      local_14 = DAT_10b184b4 - local_14;
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
      iVar2 = DAT_10b184b8 - 1;
      iVar12 = (int)(DAT_10b184b8 + ((int)DAT_10b184b8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10b184b8 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_107cf815;
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
LAB_107cf815:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10b184bc + 1;
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
LAB_107cfa29:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10b184bc & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10b184c0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10b184c0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 107cfa6c __ld12tof

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
        goto LAB_107cff6b;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10b184d0 - 1;
    iVar2 = (int)(DAT_10b184d0 + ((int)DAT_10b184d0 >> 0x1f & 0x1fU)) >> 5;
    uVar7 = DAT_10b184d0 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar5) goto LAB_107cfb9f;
          bVar14 = _Ifp < p_Var8;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_107cfba6;
LAB_107cfb9f:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_107cfba6:
              iVar2 = iVar2 + -1;
              *puVar5 = (uint)_Ifp;
              if ((iVar2 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_107cfbb4;
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
LAB_107cfbb4:
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
    if (iVar11 < (int)(DAT_10b184cc - DAT_10b184d0)) {
      local_24 = 0;
      local_20 = 0.0;
    }
    else {
      if (DAT_10b184cc < iVar11) {
        if (iVar11 < DAT_10b184c8) {
          local_24 = local_24 & 0x7fffffff;
          iVar11 = iVar11 + DAT_10b184dc;
          iVar2 = (int)(DAT_10b184d4 + ((int)DAT_10b184d4 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_10b184d4 & 0x8000001f;
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
          iVar11 = (int)(DAT_10b184d4 + ((int)DAT_10b184d4 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_10b184d4 & 0x8000001f;
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
          iVar11 = DAT_10b184dc + DAT_10b184c8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_107cff6b;
      }
      local_1c[2] = DAT_10b184cc - local_1c[2];
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
      iVar2 = DAT_10b184d0 - 1;
      iVar11 = (int)(DAT_10b184d0 + ((int)DAT_10b184d0 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = DAT_10b184d0 & 0x8000001f;
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
          if (2 < iVar11) goto LAB_107cfd57;
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
LAB_107cfd57:
      *puVar6 = *puVar6 & -1 << ((byte)local_1c[2] & 0x1f);
      iVar11 = local_1c[3] + 1;
      if (iVar11 < 3) {
        puVar6 = &local_24 + iVar11;
        for (iVar2 = 3 - iVar11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = DAT_10b184d4 + 1;
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
LAB_107cff6b:
  fVar12 = (float)(iVar11 << (0x1fU - (char)DAT_10b184d4 & 0x1f) |
                   -(uint)(local_1c[1] != 0) & 0x80000000 | local_24);
  if (DAT_10b184d8 == 0x40) {
    _F[1].f = fVar12;
    _F->f = local_20;
  }
  else if (DAT_10b184d8 == 0x20) {
    _F->f = fVar12;
  }
  return IVar3;
}


// ==== 107cffae __ld12told

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
      if (!bVar5) goto LAB_107d004c;
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
LAB_107d004c:
  local_c = (INTRNCVT_STATUS)(uVar7 == 0x7fff);
  *(uint *)_Ld->ld = uVar6;
  *(uint *)(_Ld->ld + 4) = local_18[0];
  *(ushort *)(_Ld->ld + 8) = uVar2 & 0x8000 | uVar7;
  return local_c;
}


// ==== 107d00dd ___mtold12

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
  
  uVar7 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
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


// ==== 107d02a9 FUN_107d02a9

undefined4 FUN_107d02a9(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

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
  iVar3 = FUN_107d2eb5(local_28);
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
        goto LAB_107d0392;
      }
    }
    else if (uVar4 != 2) goto LAB_107d034e;
    local_c = 0xc0000000;
  }
LAB_107d0392:
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
    if (param_4 != 0x80) goto LAB_107d034e;
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
      if (uVar4 == 0x200) goto LAB_107d049c;
      if (uVar4 != 0x300) goto LAB_107d034e;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_107d049c:
        local_18 = 5;
        goto LAB_107d0446;
      }
      if (uVar4 != 0x700) {
LAB_107d034e:
        puVar5 = (undefined4 *)FUN_107ad7d0();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        puVar5 = (undefined4 *)FUN_107ad7bd();
        *puVar5 = 0x16;
        FUN_107ad745(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_107d0446:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_11d8932c & param_5))) {
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
    puVar5 = (undefined4 *)FUN_107ad7d0();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    puVar5 = (undefined4 *)FUN_107ad7bd();
    *puVar5 = 0x18;
    goto LAB_107d0564;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_107d0570;
    }
    pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_107ad7e3(DVar6);
    goto LAB_107d0564;
  }
LAB_107d0570:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_107ad7e3(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      puVar5 = (undefined4 *)FUN_107ad7bd();
      *puVar5 = 0xd;
    }
    goto LAB_107d0564;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar11;
  pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_107d077b;
    if ((param_3 & 2) == 0) goto LAB_107d06ab;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      piVar7 = (int *)FUN_107ad7d0();
      bVar11 = local_5;
      if (*piVar7 == 0x83) goto LAB_107d06ab;
    }
    else {
      local_30 = 0;
      iVar3 = FUN_107b1237(*in_EAX,&local_30,1);
      if ((((iVar3 != 0) || ((short)local_30 != 0x1a)) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar9 != -1)) goto LAB_107d06ab;
    }
LAB_107d065d:
    __close_nolock(*in_EAX);
    goto LAB_107d0564;
  }
LAB_107d06ab:
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
      if ((param_3 & 0x301) == 0x301) goto LAB_107d071a;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_107d071a:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_107d077b;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_107d097d;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_107d0913;
          }
LAB_107d0772:
          if (local_18 != 5) goto LAB_107d077b;
        }
LAB_107d097d:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_107d077b;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar10 == -1) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_107ad7bd();
            return *puVar5;
          }
          iVar3 = iVar3 + iVar10;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_107d0772;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_107d065d;
                goto LAB_107d089c;
              }
            }
            goto LAB_107d097d;
          }
          goto LAB_107d077b;
        }
LAB_107d089c:
        iVar3 = FUN_107b1237(*in_EAX,&local_1c,3);
        if (iVar3 == -1) goto LAB_107d065d;
        if (iVar3 == 2) {
LAB_107d0921:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_107ad7bd();
            *puVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_107d065d;
            local_6 = 2;
            goto LAB_107d077b;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_107d077b;
          }
          goto LAB_107d0921;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_107d0913:
        if (uVar4 == 0xffffffff) goto LAB_107d065d;
      }
    }
  }
LAB_107d077b:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar8 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_3c,3,local_10,(HANDLE)0x0);
    if (pvVar8 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_107ad7e3(DVar6);
      pbVar1 = (byte *)((&DAT_11d89e40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_107d0564:
      puVar5 = (undefined4 *)FUN_107ad7bd();
      return *puVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_11d89e40)[(int)*in_EAX >> 5]) = pvVar8;
  }
  return 0;
}


// ==== 107d0ab9 FID_conflict:__sopen_helper

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
  
  local_8 = &DAT_109a7c08;
  uStack_c = 0x107d0ac5;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_107d02a9(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_107d0b57();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


// ==== 107d0b57 FUN_107d0b57

void FUN_107d0b57(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_11d89e40)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}


// ==== 107d0b85 FID_conflict:__sopen

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


// ==== 107d0bb5 __wsopen_s

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


// ==== 107d0bd3 _wcsncmp

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


// ==== 107d0c08 x_ismbbtype_l

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
    if (uVar1 == 0) goto LAB_107d0c4a;
  }
  iVar2 = 1;
LAB_107d0c4a:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 107d0dc6 __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 107d0e01 __ismbbkana_l

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


// ==== 107d0e62 FUN_107d0e62

undefined4 FUN_107d0e62(void)

{
  return 0;
}


// ==== 107d0e65 __frnd

/* Library Function - Single Match
    __frnd
   
   Library: Visual Studio 2005 Release */

float10 __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}


// ==== 107d0e80 __aulldiv

/* Library Function - Single Match
    __aulldiv
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

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


// ==== 107d0ee8 FUN_107d0ee8

/* WARNING: Removing unreachable block (ram,0x107d13d9) */
/* WARNING: Removing unreachable block (ram,0x107d13e3) */
/* WARNING: Removing unreachable block (ram,0x107d13e8) */

void FUN_107d0ee8(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

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
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
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
    goto LAB_107d1766;
  }
  if ((short)uVar13 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_107d1017;
        pcVar24 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_107d1017:
          pcVar24 = "1#QNAN";
          goto LAB_107d101c;
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
LAB_107d101c:
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
    goto LAB_107d1766;
  }
  local_50 = (short)(((uVar13 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar13 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar13;
  bStack_19 = (byte)(uVar13 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  uVar7 = param_1 << 0x10;
  local_6c = &PTR_DAT_10b18480;
  uStack_1c = (ushort)uStack_e;
  uStack_20 = uStack_12;
  if (uVar16 != 0) {
    uVar13 = -uVar16;
    uVar14 = uVar10;
    uVar7 = param_1 << 0x10;
    if ((int)-uVar16 < 0) {
      local_6c = (undefined **)&DAT_10b185e0;
      uVar13 = uVar16;
    }
joined_r0x107d10aa:
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
            goto joined_r0x107d10aa;
          }
          if (((uVar12 == 0) &&
              (uVar23 = uVar23 + 1,
              (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
             ((uStack_20 == 0 && (uVar7 == 0)))) {
            local_1a = 0;
            bStack_19 = 0;
            goto joined_r0x107d10aa;
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
            goto joined_r0x107d10aa;
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
LAB_107d1261:
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
            if ((short)uVar23 < 1) goto LAB_107d1261;
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
            goto joined_r0x107d10aa;
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
      goto joined_r0x107d10aa;
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
          goto LAB_107d15a5;
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
LAB_107d14b3:
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
          if ((short)uVar23 < 1) goto LAB_107d14b3;
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
        goto LAB_107d15a5;
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
LAB_107d15a5:
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
        goto LAB_107d1766;
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
LAB_107d1766:
  local_24 = uVar7;
  uStack_e = uVar10;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107d17ae __set_controlfp

/* Library Function - Single Match
    __set_controlfp
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_controlfp(uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  ushort in_FPUControlWord;
  
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((in_FPUControlWord & 0x1f3d) != 0x23d))
     || ((DAT_11d8b2ec != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = __controlfp_s((uint *)0x0,_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}


// ==== 107d18b1 __hw_cw

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


// ==== 107d1a1a ___hw_cw_sse2

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


// ==== 107d1b04 __statusfp

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
  if (DAT_11d8b2ec != 0) {
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


// ==== 107d1bca ___statusfp_sse2

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


// ==== 107d1dc4 __statusfp2

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


// ==== 107d1e1c __clearfp

/* WARNING: Removing unreachable block (ram,0x107d1ea6) */
/* WARNING: Removing unreachable block (ram,0x107d1e96) */
/* WARNING: Removing unreachable block (ram,0x107d1e86) */
/* WARNING: Removing unreachable block (ram,0x107d1e81) */
/* WARNING: Removing unreachable block (ram,0x107d1e89) */
/* WARNING: Removing unreachable block (ram,0x107d1e8e) */
/* WARNING: Removing unreachable block (ram,0x107d1e91) */
/* WARNING: Removing unreachable block (ram,0x107d1e99) */
/* WARNING: Removing unreachable block (ram,0x107d1e9e) */
/* WARNING: Removing unreachable block (ram,0x107d1ea1) */
/* WARNING: Removing unreachable block (ram,0x107d1ea9) */
/* WARNING: Removing unreachable block (ram,0x107d1eae) */
/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (DAT_11d8b2ec == 0) {
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


// ==== 107d1ef3 ___control87_2

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
    if (DAT_11d8b2ec == 0) {
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


// ==== 107d21fd __control87

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
  if (DAT_11d8b2ec != 0) {
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


// ==== 107d2809 __putwch_nolock

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if (DAT_10b187a0 != 0) {
    if (DAT_10b1885c == &DAT_fffffffe) {
      ___initconout();
    }
    if (DAT_10b1885c == (undefined1 *)0xffffffff) goto LAB_107d28b2;
    BVar2 = WriteConsoleW(DAT_10b1885c,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10b187a0 = 1;
      goto LAB_107d28b2;
    }
    if ((DAT_10b187a0 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_107d28b2;
    DAT_10b187a0 = 0;
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
  if (DAT_10b1885c != (undefined1 *)0xffffffff) {
    WriteConsoleA(DAT_10b1885c,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_107d28b2:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}


// ==== 107d29ac __chsize_nolock

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
  if (uVar13 == 0xffffffffffffffff) goto LAB_107d2a32;
  lVar14 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar5 = (int)((ulonglong)lVar14 >> 0x20);
  if (lVar14 == -1) goto LAB_107d2a32;
  uVar9 = in_stack_00000008 - (uint)lVar14;
  uVar6 = (uint)(in_stack_00000008 < (uint)lVar14);
  iVar1 = (int)_Size - iVar5;
  iVar10 = iVar1 - uVar6;
  if ((iVar10 < 0) ||
     ((iVar10 == 0 || SBORROW4((int)_Size,iVar5) != SBORROW4(iVar1,uVar6) && (uVar9 == 0)))) {
    if ((iVar10 < 1) && (iVar10 < 0)) {
      lVar14 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar14 == -1) goto LAB_107d2a32;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar7 = SetEndOfFile(pvVar2);
      local_14 = (BVar7 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        puVar3 = (undefined4 *)FUN_107ad7bd();
        *puVar3 = 0xd;
        pDVar8 = (DWORD *)FUN_107ad7d0();
        DVar15 = GetLastError();
        *pDVar8 = DVar15;
        goto LAB_107d2b30;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar15 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar15,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      puVar3 = (undefined4 *)FUN_107ad7bd();
      *puVar3 = 0xc;
      goto LAB_107d2a32;
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
      goto LAB_107d2a84;
    }
    piVar4 = (int *)FUN_107ad7d0();
    if (*piVar4 == 5) {
      puVar3 = (undefined4 *)FUN_107ad7bd();
      *puVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_107d2a84:
    __setmode_nolock(_FileHandle,iVar5);
    DVar15 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar15,_Buf);
LAB_107d2b30:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_107d2a32;
  }
  lVar14 = __lseeki64_nolock(_FileHandle,uVar13 >> 0x20,unaff_EDI);
  if (lVar14 != -1) {
    return 0;
  }
LAB_107d2a32:
  piVar4 = (int *)FUN_107ad7bd();
  return *piVar4;
}


// ==== 107d2c65 __lseek_nolock

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
    puVar2 = (undefined4 *)FUN_107ad7bd();
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
    pbVar1 = (byte *)((&DAT_11d89e40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    FUN_107ad7e3(DVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


// ==== 107d2db3 __setmode_nolock

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
  piVar1 = &DAT_11d89e40 + (_FileHandle >> 5);
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
      if (_Mode != 0x40000) goto LAB_107d2e52;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_107d2e52:
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else {
    iVar4 = (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
  }
  return iVar4;
}


// ==== 107d2eb5 FUN_107d2eb5

undefined4 FUN_107d2eb5(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    return 0x16;
  }
  *param_1 = DAT_11d89dc8;
  return 0;
}


// ==== 107d2fe0 ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107d3027 ___convertcp

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
  
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_107d31c7;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_107d31c7;
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
LAB_107d3107:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_107d3107;
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
LAB_107d31c7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 107d31d9 __get_daylight

/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  undefined4 *puVar1;
  
  if (_Daylight == (int *)0x0) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    return 0x16;
  }
  *_Daylight = DAT_10b187ac;
  return 0;
}


// ==== 107d320d __get_dstbias

/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  undefined4 *puVar1;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    return 0x16;
  }
  *_Daylight_savings_bias = DAT_10b187b0;
  return 0;
}


// ==== 107d3241 FUN_107d3241

undefined4 FUN_107d3241(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10b187a8;
  return 0;
}


// ==== 107d3275 __get_tzname

/* Library Function - Single Match
    __get_tzname
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index)

{
  undefined4 *puVar1;
  size_t sVar2;
  errno_t eVar3;
  
  if (_Buffer == (char *)0x0) {
    if (_SizeInBytes != 0) goto LAB_107d32c2;
  }
  else if (_SizeInBytes == 0) {
LAB_107d32c2:
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    return 0x16;
  }
  if (_Buffer != (char *)0x0) {
    *_Buffer = '\0';
  }
  if ((_ReturnValue == (size_t *)0x0) || ((_Index != 0 && (_Index != 1)))) {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    eVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
  }
  else {
    sVar2 = _strlen((&PTR_DAT_10b18838)[_Index]);
    *_ReturnValue = sVar2 + 1;
    if (_Buffer == (char *)0x0) {
      eVar3 = 0;
    }
    else if (_SizeInBytes < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = _strcpy_s(_Buffer,_SizeInBytes,(&PTR_DAT_10b18838)[_Index]);
    }
  }
  return eVar3;
}


// ==== 107d3317 FUN_107d3317

undefined4 * FUN_107d3317(void)

{
  return &DAT_10b187ac;
}


// ==== 107d331d FUN_107d331d

undefined4 * FUN_107d331d(void)

{
  return &DAT_10b187b0;
}


// ==== 107d3323 FUN_107d3323

undefined4 * FUN_107d3323(void)

{
  return &DAT_10b187a8;
}


// ==== 107d3329 FUN_107d3329

undefined ** FUN_107d3329(void)

{
  return &PTR_DAT_10b18838;
}


// ==== 107d3353 FUN_107d3353

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_107d3353(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  errno_t eVar5;
  UINT CodePage;
  char *_Str1;
  size_t sVar6;
  DWORD DVar7;
  int *piVar8;
  long lVar9;
  char *pcVar10;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  int *local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_109a7cc8;
  uStack_c = 0x107d335f;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (int *)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = (int *)FUN_107d3329();
  iVar4 = FUN_107d3241(local_20);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar5 = __get_daylight(&local_28);
  if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar5 = __get_dstbias(&local_2c);
  if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_11d89dbc = 0;
  DAT_10b1884c = 0xffffffff;
  DAT_10b18840 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_11d89dc0 != (char *)0x0) {
      _free(DAT_11d89dc0);
      DAT_11d89dc0 = (char *)0x0;
    }
    DVar7 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_11d89d10);
    if (DVar7 != 0xffffffff) {
      DAT_11d89dbc = 1;
      local_20[0] = DAT_11d89d10 * 0x3c;
      if (DAT_11d89d56 != 0) {
        local_20[0] = local_20[0] + DAT_11d89d64 * 0x3c;
      }
      if ((DAT_11d89daa == 0) || (DAT_11d89db8 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_11d89db8 - DAT_11d89d64) * 0x3c;
      }
      iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_11d89d14,-1,(LPSTR)*local_24,0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar4 == 0) || (local_34 != 0)) {
        *(undefined1 *)*local_24 = 0;
      }
      else {
        *(undefined1 *)(*local_24 + 0x3f) = 0;
      }
      iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_11d89d68,-1,(LPSTR)local_24[1],0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar4 == 0) || (local_34 != 0)) {
        *(undefined1 *)local_24[1] = 0;
      }
      else {
        *(undefined1 *)(local_24[1] + 0x3f) = 0;
      }
    }
  }
  else {
    if (DAT_11d89dc0 != (char *)0x0) {
      iVar4 = _strcmp(_Str1,DAT_11d89dc0);
      if (iVar4 == 0) goto LAB_107d356f;
      if (DAT_11d89dc0 != (char *)0x0) {
        _free(DAT_11d89dc0);
      }
    }
    sVar6 = _strlen(_Str1);
    DAT_11d89dc0 = __malloc_crt(sVar6 + 1);
    if (DAT_11d89dc0 != (char *)0x0) {
      pcVar10 = _Str1;
      sVar6 = _strlen(_Str1);
      eVar5 = _strcpy_s(DAT_11d89dc0,sVar6 + 1,pcVar10);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_107d3576;
    }
  }
LAB_107d356f:
  local_30 = 1;
LAB_107d3576:
  iVar3 = local_20[0];
  piVar8 = (int *)FUN_107d3323();
  iVar4 = local_28;
  *piVar8 = iVar3;
  piVar8 = (int *)FUN_107d3317();
  lVar9 = local_2c;
  *piVar8 = iVar4;
  piVar8 = (int *)FUN_107d331d();
  *piVar8 = lVar9;
  local_8 = (undefined *)0xfffffffe;
  FUN_107d3602();
  piVar8 = local_24;
  if (local_30 == 0) {
    eVar5 = _strncpy_s((char *)*local_24,0x40,_Str1,3);
    if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar10 = _Str1 + 3;
    cVar1 = *pcVar10;
    if (cVar1 == '-') {
      pcVar10 = _Str1 + 4;
    }
    lVar9 = _atol(pcVar10);
    local_20[0] = lVar9 * 0xe10;
    for (; (cVar2 = *pcVar10, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        pcVar10 = pcVar10 + 1) {
    }
    if (*pcVar10 == ':') {
      pcVar10 = pcVar10 + 1;
      lVar9 = _atol(pcVar10);
      local_20[0] = local_20[0] + lVar9 * 0x3c;
      for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
      }
      if (*pcVar10 == ':') {
        pcVar10 = pcVar10 + 1;
        lVar9 = _atol(pcVar10);
        local_20[0] = local_20[0] + lVar9;
        for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar10;
    if (local_28 == 0) {
      *(undefined1 *)piVar8[1] = 0;
    }
    else {
      eVar5 = _strncpy_s((char *)piVar8[1],0x40,pcVar10,3);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    iVar3 = local_20[0];
    piVar8 = (int *)FUN_107d3323();
    iVar4 = local_28;
    *piVar8 = iVar3;
    piVar8 = (int *)FUN_107d3317();
    *piVar8 = iVar4;
  }
  return;
}


// ==== 107d3602 FUN_107d3602

void FUN_107d3602(void)

{
  FUN_107af6c5(7);
  return;
}


// ==== 107d369c cvtdate

/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2005 Release */

int __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      iVar5 = (&DAT_10b1885c)[in_EAX];
    }
    else {
      iVar5 = *(int *)(&DAT_10b18890 + in_EAX * 4);
    }
    iVar6 = iVar5 + 1;
    iVar4 = (int)(param_3 * 0x16d + -0x63db +
                 ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) + iVar6 +
                 ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100)) % 7;
    iVar2 = (param_4 * 7 - iVar4) + param_5;
    if (iVar4 <= param_5) {
      iVar6 = iVar5 + -6;
    }
    iVar6 = iVar6 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = *(int *)(&DAT_10b18860 + in_EAX * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10b18894 + in_EAX * 4);
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      iVar6 = (&DAT_10b1885c)[in_EAX];
    }
    else {
      iVar6 = *(int *)(&DAT_10b18890 + in_EAX * 4);
    }
    iVar6 = iVar6 + param_6;
  }
  param_9 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_10b18840 = param_3;
    DAT_10b18844 = iVar6;
    DAT_10b18848 = param_9;
  }
  else {
    DAT_10b18850 = iVar6;
    DAT_10b18854 = param_9;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_10b18854 = DAT_10b18854 + iVar2;
    if (DAT_10b18854 < 0) {
      DAT_10b18854 = DAT_10b18854 + 86400000;
      DAT_10b18850 = DAT_10b18850 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_10b18854) {
        DAT_10b18854 = DAT_10b18854 + -86400000;
        DAT_10b18850 = DAT_10b18850 + 1;
      }
    }
    DAT_10b1884c = param_3;
  }
  return iVar2;
}


// ==== 107d3891 __isindst_nolock

/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2005 Release */

bool __isindst_nolock(void)

{
  bool bVar1;
  errno_t eVar2;
  int iVar3;
  int *unaff_EDI;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int local_8;
  
  local_8 = 0;
  eVar2 = __get_daylight(&local_8);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  iVar4 = unaff_EDI[5];
  if ((iVar4 != DAT_10b18840) || (iVar4 != DAT_10b1884c)) {
    if (DAT_11d89dbc == 0) {
      cvtdate(1,1,iVar4,1,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],5,0,0,0,0,0);
    }
    else {
      if (DAT_11d89da8 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar7 = DAT_11d89dae;
      }
      else {
        uVar6 = DAT_11d89dac;
        uVar5 = DAT_11d89dae;
        uVar7 = 0;
      }
      cvtdate(1,DAT_11d89da8 == 0,iVar4,uVar5,uVar6,uVar7,DAT_11d89db2,DAT_11d89db4,DAT_11d89db6);
      if (DAT_11d89d54 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        iVar4 = unaff_EDI[5];
        uVar7 = DAT_11d89d5a;
      }
      else {
        iVar4 = unaff_EDI[5];
        uVar6 = DAT_11d89d58;
        uVar5 = DAT_11d89d5a;
        uVar7 = 0;
      }
      cvtdate(0,DAT_11d89d54 == 0,iVar4,uVar5,uVar6,uVar7,DAT_11d89d5e,DAT_11d89d60,DAT_11d89d62);
    }
  }
  iVar4 = unaff_EDI[7];
  if (DAT_10b18844 < DAT_10b18850) {
    if ((iVar4 < DAT_10b18844) || (DAT_10b18850 < iVar4)) {
      return false;
    }
    if ((DAT_10b18844 < iVar4) && (iVar4 < DAT_10b18850)) {
      return true;
    }
  }
  else {
    if (iVar4 < DAT_10b18850) {
      return true;
    }
    if (DAT_10b18844 < iVar4) {
      return true;
    }
    if ((DAT_10b18850 < iVar4) && (iVar4 < DAT_10b18844)) {
      return false;
    }
  }
  iVar3 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar4 == DAT_10b18844) {
    bVar1 = DAT_10b18848 <= iVar3;
  }
  else {
    bVar1 = iVar3 < DAT_10b18854;
  }
  return bVar1;
}


// ==== 107d3a3f ___tzset

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___tzset(void)

{
  if (DAT_11d89dc4 == 0) {
    __lock(6);
    if (DAT_11d89dc4 == 0) {
      FUN_107d3353();
      DAT_11d89dc4 = DAT_11d89dc4 + 1;
    }
    FUN_107d3a85();
  }
  return;
}


// ==== 107d3a85 FUN_107d3a85

void FUN_107d3a85(void)

{
  FUN_107af6c5(6);
  return;
}


// ==== 107d3b07 __strnicmp_l

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
      puVar1 = (undefined4 *)FUN_107ad7bd();
      *puVar1 = 0x16;
      FUN_107ad745(0,0,0,0,0);
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
      puVar1 = (undefined4 *)FUN_107ad7bd();
      *puVar1 = 0x16;
      FUN_107ad745(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}


// ==== 107d3bf7 __strnicmp

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_11d8981c == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 107d3c53 xtoa_s

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
    puVar3 = (undefined4 *)FUN_107ad7bd();
    *puVar3 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_107d3c85:
    puVar3 = (undefined4 *)FUN_107ad7bd();
    uVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_107d3c85;
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
    puVar3 = (undefined4 *)FUN_107ad7bd();
    uVar7 = 0x22;
  }
  *puVar3 = uVar7;
  FUN_107ad745(0,0,0,0,0);
  return uVar7;
}


// ==== 107d3d2e __itoa_s

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


// ==== 107d3d56 __ltoa_s

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


// ==== 107d3d93 x64toa_s

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
LAB_107d3da1:
    puVar2 = (undefined4 *)FUN_107ad7bd();
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
        puVar2 = (undefined4 *)FUN_107ad7bd();
        uVar8 = 0x22;
        *puVar2 = 0x22;
        goto LAB_107d3dab;
      }
      goto LAB_107d3da1;
    }
    puVar2 = (undefined4 *)FUN_107ad7bd();
    uVar8 = 0x22;
  }
  *puVar2 = uVar8;
LAB_107d3dab:
  FUN_107ad745(0,0,0,0,0);
  return uVar8;
}


// ==== 107d3e89 __i64toa_s

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


// ==== 107d3ebc __ui64toa_s

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


// ==== 107d3ed9 __filwbuf

/* Library Function - Single Match
    __filwbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __filwbuf(FILE *_File)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_107ad7bd();
    *puVar2 = 0x16;
    FUN_107ad745(0,0,0,0,0);
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
        iVar4 = FUN_107b17f8(iVar3,pcVar7,iVar4);
        _File->_cnt = iVar4;
        if (((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar4 = __fileno(_File);
            if ((iVar4 == -1) || (iVar4 = __fileno(_File), iVar4 == -2)) {
              puVar6 = &DAT_10b18190;
            }
            else {
              iVar4 = __fileno(_File);
              uVar5 = __fileno(_File);
              puVar6 = (undefined *)((uVar5 & 0x1f) * 0x38 + (&DAT_11d89e40)[iVar4 >> 5]);
            }
            if ((puVar6[4] & 0x82) == 0x82) {
              _File->_flag = _File->_flag | 0x2000;
            }
          }
          if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
             ((_File->_flag & 0x400U) == 0)) {
            _File->_bufsiz = 0x1000;
          }
          _File->_cnt = _File->_cnt + -2;
          uVar1 = *(ushort *)_File->_ptr;
          _File->_ptr = (char *)((int)_File->_ptr + 2);
          return (uint)uVar1;
        }
        _File->_flag = _File->_flag | (-(uint)(iVar4 != 0) & 0x10) + 0x10;
        _File->_cnt = 0;
      }
      else {
        _File->_flag = uVar5 | 0x20;
      }
    }
  }
  return 0xffff;
}


// ==== 107d402a ___initconout

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10b1885c = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// ==== 107d4076 __getenv_helper_nolock

/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_11d8b2f0 == 0) {
    return (char *)0x0;
  }
  if (((DAT_11d89350 != (int *)0x0) ||
      (((DAT_11d89358 != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
       (DAT_11d89350 != (int *)0x0)))) && (piVar3 = DAT_11d89350, param_1 != (char *)0x0)) {
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


// ==== 107d40f7 __getenv_s_helper

/* Library Function - Single Match
    __getenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __getenv_s_helper(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  undefined4 *puVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_107d4134;
    }
    else if (param_2 != 0) {
LAB_107d4134:
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
  puVar1 = (undefined4 *)FUN_107ad7bd();
  *puVar1 = 0x16;
  FUN_107ad745(0,0,0,0,0);
  return 0x16;
}


// ==== 107d418a __dupenv_s_helper

/* Library Function - Single Match
    __dupenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __dupenv_s_helper(size_t *param_1,char *param_2)

{
  undefined4 *puVar1;
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
          puVar1 = (undefined4 *)FUN_107ad7bd();
          *puVar1 = 0xc;
          puVar1 = (undefined4 *)FUN_107ad7bd();
          return *puVar1;
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
  puVar1 = (undefined4 *)FUN_107ad7bd();
  *puVar1 = 0x16;
  FUN_107ad745(0,0,0,0,0);
  return 0x16;
}


// ==== 107d4470 ___ascii_strnicmp

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
      if (bVar2 != (byte)uVar3) goto LAB_107d44c1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_107d44c1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 107d44d1 __mbsnbicoll_l

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
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
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
      if (iVar2 == 0) goto LAB_107d459a;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
LAB_107d459a:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 107d45bd __mbsnbicoll

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 107d45d4 ___wtomb_environ

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
  lpWideCharStr = (LPCWSTR)*DAT_11d89358;
  puVar2 = DAT_11d89358;
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
    iVar1 = FUN_107d4c2f(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}


// ==== 107d4669 _strnlen

/* Library Function - Single Match
    _strnlen
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _strnlen(char *_Str,size_t _MaxCount)

{
  uint uVar1;
  
  uVar1 = 0;
  if (_MaxCount != 0) {
    do {
      if (*_Str == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      _Str = _Str + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}


// ==== 107d469d __crtCompareStringA_stat

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
  local_8 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_11d89dcc == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_11d89dcc = 2;
      }
    }
    else {
      DAT_11d89dcc = 1;
    }
  }
  pbVar9 = in_EDX;
  uVar8 = param_3;
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_107d4a14;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_107d4717;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_107d4717:
    param_3 = param_3 + (-1 - uVar8);
  }
  pcVar7 = lpMultiByteStr;
  iVar1 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_107d4a14;
  }
  else {
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar7 == '\0') goto LAB_107d4739;
      pcVar7 = pcVar7 + 1;
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_107d4739:
    param_5 = param_5 + (-1 - iVar1);
  }
  if ((DAT_11d89dcc == 2) || (DAT_11d89dcc == 0)) {
    _Memory = (PCNZCH)0x0;
    pbVar9 = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp(param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_107d4a14;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      pbVar9 = (byte *)___convertcp(param_6,pcVar7,in_EDX,&param_3,0,0);
      if (pbVar9 == (byte *)0x0) goto LAB_107d4a14;
      _Memory = (PCNZCH)___convertcp(param_6,pcVar7,lpMultiByteStr,&param_5,0,0);
      local_28 = pbVar9;
      local_20 = _Memory;
      if (_Memory == (PCNZCH)0x0) {
        _free(pbVar9);
        goto LAB_107d4a14;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (pbVar9 != (byte *)0x0) {
      _free(pbVar9);
      _free(_Memory);
    }
    goto LAB_107d4a14;
  }
  if (DAT_11d89dcc != 1) goto LAB_107d4a14;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_107d4a14;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_107d4a14;
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
      goto LAB_107d4a14;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_107d4a14;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_107d488d:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_107d488d;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_107d4a14;
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
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_107d494e;
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
LAB_107d494e:
  __freea(local_24);
LAB_107d4a14:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


// ==== 107d4a26 ___crtCompareStringA

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


// ==== 107d4a66 __strnicoll_l

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
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
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
        puVar1 = (undefined4 *)FUN_107ad7bd();
        *puVar1 = 0x16;
        goto LAB_107d4b3b;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
LAB_107d4b3b:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 107d4b5e __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_11d8981c == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 107d4b85 findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_11d89350;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_11d89350 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_11d89350 >> 2;
}


// ==== 107d4bd2 copy_environ

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


// ==== 107d4c2f FUN_107d4c2f

undefined4 FUN_107d4c2f(undefined4 *param_1,int param_2)

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
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    FUN_107ad745(0,0,0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_107d4cbd:
    puVar1 = (undefined4 *)FUN_107ad7bd();
    *puVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_11d89350 == DAT_11d89354) {
    DAT_11d89350 = (int *)copy_environ();
  }
  if (DAT_11d89350 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_11d89358 == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_11d89350 = __malloc_crt(4);
      if (DAT_11d89350 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_11d89350 = 0;
      if (DAT_11d89358 == (undefined4 *)0x0) {
        DAT_11d89358 = __malloc_crt(4);
        if (DAT_11d89358 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_11d89358 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_107d4cbd;
    }
  }
  piVar4 = DAT_11d89350;
  if (DAT_11d89350 == (int *)0x0) {
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
    piVar4 = __recalloc_crt(DAT_11d89350,4,_Size);
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
      goto LAB_107d4dce;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_11d89350,_Count,4), piVar4 == (int *)0x0)) goto LAB_107d4dce;
  }
  DAT_11d89350 = piVar4;
LAB_107d4dce:
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
        puVar1 = (undefined4 *)FUN_107ad7bd();
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


// ==== 107d4e7b __strdup

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


// ==== 107d4ecb __mbschr_l

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
    puVar3 = (undefined4 *)FUN_107ad7bd();
    *puVar3 = 0x16;
    FUN_107ad745(0,0,0,0,0);
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
          if (bVar1 == 0) goto LAB_107d4f73;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_107d4f65;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_107d4f73:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_107d4f65:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


// ==== 107d4f85 __mbschr

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 107d4f98 KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:0000040c

// ==== 107d5178 _strupr_s_l_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _strupr_s_l_stat(char *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

int __cdecl _strupr_s_l_stat(char *param_1,uint param_2,localeinfo_struct *param_3)

{
  char cVar1;
  LPCWSTR _LocaleName;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *unaff_EDI;
  undefined4 uVar6;
  char *local_c;
  
  uVar2 = DAT_10b171d4 ^ (uint)&stack0xfffffffc;
  if (unaff_EDI == (char *)0x0) {
LAB_107d5190:
    puVar3 = (undefined4 *)FUN_107ad7bd();
    uVar6 = 0x16;
  }
  else {
    pcVar4 = (char *)_strnlen(unaff_EDI,(size_t)param_1);
    if (param_1 <= pcVar4) {
      *unaff_EDI = '\0';
      goto LAB_107d5190;
    }
    _LocaleName = *(LPCWSTR *)(*(int *)param_2 + 0x14);
    if (_LocaleName == (LPCWSTR)0x0) {
      cVar1 = *unaff_EDI;
      while (cVar1 != '\0') {
        cVar1 = *unaff_EDI;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *unaff_EDI = cVar1 + -0x20;
        }
        unaff_EDI = unaff_EDI + 1;
        cVar1 = *unaff_EDI;
      }
      goto LAB_107d52e3;
    }
    pcVar4 = (char *)___crtLCMapStringA((_locale_t)param_2,_LocaleName,0x200,unaff_EDI,-1,(LPSTR)0x0
                                        ,0,*(int *)(*(int *)param_2 + 4),1);
    if (pcVar4 == (char *)0x0) {
      puVar3 = (undefined4 *)FUN_107ad7bd();
      *puVar3 = 0x2a;
LAB_107d521a:
      FUN_107ad7bd();
      goto LAB_107d52e3;
    }
    if (pcVar4 <= param_1) {
      if (((int)pcVar4 < 1) || (0xffffffe0U / (uint)pcVar4 == 0)) {
        local_c = (char *)0x0;
      }
      else if (pcVar4 + 8 < (char *)0x401) {
        puVar3 = (undefined4 *)&stack0xffffffe8;
        local_c = &stack0xffffffe8;
        if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_107d5277:
          local_c = (char *)(puVar3 + 2);
        }
      }
      else {
        puVar3 = _malloc((size_t)(pcVar4 + 8));
        local_c = (char *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0xdddd;
          goto LAB_107d5277;
        }
      }
      if (local_c != (char *)0x0) {
        iVar5 = ___crtLCMapStringA((_locale_t)param_2,*(LPCWSTR *)(*(int *)param_2 + 0x14),0x200,
                                   unaff_EDI,-1,local_c,(int)pcVar4,*(int *)(*(int *)param_2 + 4),1)
        ;
        if (iVar5 == 0) {
          puVar3 = (undefined4 *)FUN_107ad7bd();
          *puVar3 = 0x2a;
        }
        else {
          _strcpy_s(unaff_EDI,(rsize_t)param_1,local_c);
        }
        __freea(local_c);
        goto LAB_107d52e3;
      }
      puVar3 = (undefined4 *)FUN_107ad7bd();
      *puVar3 = 0xc;
      goto LAB_107d521a;
    }
    *unaff_EDI = '\0';
    puVar3 = (undefined4 *)FUN_107ad7bd();
    uVar6 = 0x22;
  }
  *puVar3 = uVar6;
  FUN_107ad745(0,0,0,0,0);
LAB_107d52e3:
  iVar5 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 107d52f4 __strupr_s_l

/* Library Function - Single Match
    __strupr_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __strupr_s_l(char *_Str,size_t _Size,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct *unaff_EDI;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  iVar1 = _strupr_s_l_stat((char *)_Size,(uint)local_14,unaff_EDI);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 107d5351 __strupr

/* Library Function - Single Match
    __strupr
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strupr(char *_String)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  if (DAT_11d8981c == 0) {
    pcVar2 = _String;
    if (_String == (char *)0x0) {
      puVar3 = (undefined4 *)FUN_107ad7bd();
      *puVar3 = 0x16;
      FUN_107ad745(0,0,0,0,0);
      return (char *)0x0;
    }
    if (*_String != '\0') {
      do {
        cVar1 = *_String;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *_String = cVar1 + -0x20;
        }
        _String = _String + 1;
      } while (*_String != '\0');
      return pcVar2;
    }
  }
  else {
    __strupr_s_l(_String,0xffffffff,(_locale_t)0x0);
  }
  return _String;
}


// ==== 107d53b3 FUN_107d53b3

float10 FUN_107d53b3(double param_1)

{
  double *in_EAX;
  int in_ECX;
  int in_EDX;
  double *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)in_EAX[in_ECX];
  while( true ) {
    in_ECX = in_ECX + -1;
    fVar1 = fVar1 * (float10)param_1;
    if (in_ECX < 1) break;
    fVar1 = (float10)in_EAX[in_ECX] + fVar1;
  }
  fVar2 = (float10)unaff_ESI[in_EDX];
  while( true ) {
    in_EDX = in_EDX + -1;
    fVar2 = fVar2 * (float10)param_1;
    if (in_EDX < 1) break;
    fVar2 = fVar2 + (float10)unaff_ESI[in_EDX];
  }
  return ((float10)*in_EAX + fVar1) / (fVar2 + (float10)*unaff_ESI);
}


// ==== 107d53e5 FUN_107d53e5

float10 FUN_107d53e5(double param_1)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  if (7.5 < param_1) {
    dVar1 = 8.0 / param_1;
    fVar3 = (float10)FUN_107d53b3(dVar1 * dVar1);
    fVar4 = (float10)FUN_107d53b3(dVar1 * dVar1);
    fVar5 = (float10)FUN_107a8230(param_1 - 0.7853981633974483);
    fVar6 = (float10)FUN_107a8360(param_1 - 0.7853981633974483);
    fVar2 = (float10)FUN_107a7c14(2.0 / (param_1 * 3.141592653589793));
    fVar2 = fVar2 * (float10)(double)((float10)(double)(fVar5 * (float10)(double)fVar3) -
                                     fVar6 * (float10)(double)(fVar4 * (float10)dVar1));
  }
  else {
    fVar2 = (float10)FUN_107d53b3(param_1 * param_1);
  }
  return fVar2;
}


// ==== 107d54cf FUN_107d54cf

float10 FUN_107d54cf(double param_1)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 local_8;
  
  local_8 = 1;
  if (param_1 < 0.0) {
    local_8 = -1;
    param_1 = -param_1;
  }
  if (7.5 < param_1) {
    dVar1 = 8.0 / param_1;
    fVar2 = (float10)FUN_107d53b3(dVar1 * dVar1);
    fVar3 = (float10)FUN_107d53b3(dVar1 * dVar1);
    fVar4 = (float10)FUN_107a8230(param_1 - 2.356194490192345);
    fVar5 = (float10)FUN_107a8360(param_1 - 2.356194490192345);
    fVar6 = (float10)FUN_107a7c14(2.0 / (param_1 * 3.141592653589793));
    fVar2 = fVar6 * (float10)local_8 *
            (float10)(double)((float10)(double)(fVar4 * (float10)(double)fVar2) -
                             fVar5 * (float10)(double)(fVar3 * (float10)dVar1));
  }
  else {
    fVar2 = (float10)FUN_107d53b3(param_1 * param_1);
    fVar2 = (float10)local_8 * (float10)param_1 * fVar2;
  }
  return fVar2;
}


// ==== 107d55cf FUN_107d55cf

float10 FUN_107d55cf(int param_1,double param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  int local_8;
  
  if (param_1 < 0) {
    param_1 = -param_1;
    param_2 = -param_2;
  }
  if (param_1 == 0) {
    fVar7 = (float10)FUN_107d53e5(param_2);
  }
  else if (param_1 == 1) {
    fVar7 = (float10)FUN_107d54cf(param_2);
  }
  else {
    fVar7 = (float10)0;
    if (fVar7 != (float10)param_2) {
      dVar10 = _fabs(param_2);
      iVar2 = param_1 * 2;
      if ((double)param_1 < dVar10) {
        fVar7 = (float10)FUN_107d53e5(param_2);
        fVar8 = (float10)FUN_107d54cf();
        local_8 = 4;
        fVar7 = (fVar8 + fVar8) / (float10)param_2 - (float10)(double)fVar7;
        if (iVar2 != 4) {
          do {
            fVar9 = fVar7;
            fVar7 = (float10)local_8;
            local_8 = local_8 + 2;
            fVar7 = (fVar7 * fVar9) / (float10)param_2 - fVar8;
            fVar8 = fVar9;
          } while (local_8 != iVar2);
        }
      }
      else {
        dVar10 = 0.0;
        for (iVar1 = iVar2 + 0x24; iVar2 < iVar1; iVar1 = iVar1 + -2) {
          dVar10 = (param_2 * param_2) / ((double)iVar1 - dVar10);
        }
        local_8 = iVar2 + -2;
        dVar5 = param_2 / ((double)iVar2 - dVar10);
        dVar6 = (double)local_8;
        dVar10 = dVar5;
        dVar4 = 1.0;
        while( true ) {
          local_8 = local_8 + -2;
          dVar3 = dVar6 / param_2 - dVar10;
          if (local_8 == 0) break;
          dVar6 = (double)local_8 * dVar3;
          dVar10 = dVar4;
          dVar4 = dVar3;
        }
        fVar7 = (float10)FUN_107d53e5(param_2);
        fVar7 = (fVar7 * (float10)dVar5) / (float10)dVar3;
      }
    }
  }
  return fVar7;
}


// ==== 107d570c domain_err

/* Library Function - Single Match
    _domain_err
   
   Library: Visual Studio 2005 Release */

void __cdecl domain_err(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = __ctrlfp();
  __except1(8,param_1,param_2,param_3,uVar1);
  return;
}


// ==== 107d573f FUN_107d573f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_107d573f(double param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (param_1 < 0.0) {
    fVar1 = (float10)domain_err(0x22,SUB84(param_1,0),uVar7,(int)_DAT_10b181d0,
                                (int)((ulonglong)_DAT_10b181d0 >> 0x20));
    return fVar1;
  }
  if (7.5 < param_1) {
    dVar6 = 8.0 / param_1;
    fVar1 = (float10)FUN_107d53b3(dVar6 * dVar6);
    fVar2 = (float10)FUN_107d53b3(dVar6 * dVar6);
    fVar4 = (float10)FUN_107a8230(param_1 - 0.7853981633974483);
    fVar5 = (float10)FUN_107a8360(param_1 - 0.7853981633974483);
    fVar3 = (float10)FUN_107a7c14(2.0 / (param_1 * 3.141592653589793));
    fVar3 = fVar3 * (float10)(double)(fVar5 * (float10)(double)fVar1 +
                                     (float10)(double)(fVar4 * (float10)(double)(fVar2 * (float10)
                                                  dVar6)));
  }
  else {
    fVar1 = (float10)FUN_107d53b3(param_1 * param_1);
    fVar2 = (float10)FUN_107d53e5(SUB84(param_1,0),uVar7);
    dVar6 = FID_conflict__cos(param_1);
    fVar3 = (float10)dVar6 * (float10)(double)(fVar2 * (float10)0.6366197723675814) +
            (float10)(double)fVar1;
  }
  return fVar3;
}


// ==== 107d5867 FUN_107d5867

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_107d5867(double param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (param_1 < 0.0) {
    fVar1 = (float10)domain_err(0x23,SUB84(param_1,0),uVar7,(int)_DAT_10b181d0,
                                (int)((ulonglong)_DAT_10b181d0 >> 0x20));
    return fVar1;
  }
  if (7.5 < param_1) {
    dVar6 = 8.0 / param_1;
    fVar1 = (float10)FUN_107d53b3(dVar6 * dVar6);
    fVar2 = (float10)FUN_107d53b3(dVar6 * dVar6);
    fVar4 = (float10)FUN_107a8230(param_1 - 2.356194490192345);
    fVar5 = (float10)FUN_107a8360(param_1 - 2.356194490192345);
    fVar3 = (float10)FUN_107a7c14(2.0 / (param_1 * 3.141592653589793));
    fVar3 = fVar3 * (float10)(double)(fVar5 * (float10)(double)fVar1 +
                                     (float10)(double)(fVar4 * (float10)(double)(fVar2 * (float10)
                                                  dVar6)));
  }
  else {
    fVar1 = (float10)FUN_107d54cf(SUB84(param_1,0),uVar7);
    dVar6 = FID_conflict__cos(param_1);
    fVar2 = (float10)FUN_107d53b3(param_1 * param_1);
    fVar3 = fVar2 * (float10)param_1 +
            (float10)((dVar6 * (double)fVar1 - 1.0 / param_1) * 0.6366197723675814);
  }
  return fVar3;
}


// ==== 107d5999 FUN_107d5999

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_107d5999(uint param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double local_18;
  double local_10;
  int local_8;
  
  if ((double)CONCAT44(param_3,param_2) < 0.0) {
    fVar2 = (float10)domain_err(0x24,param_2,param_3,(int)_DAT_10b181d0,
                                (int)((ulonglong)_DAT_10b181d0 >> 0x20));
    return fVar2;
  }
  local_8 = 1;
  if (((int)param_1 < 0) && (param_1 = -param_1, (param_1 & 1) != 0)) {
    local_8 = -1;
  }
  if (param_1 == 0) {
    fVar2 = (float10)FUN_107d573f(param_2,param_3);
  }
  else {
    if (param_1 != 1) {
      fVar2 = (float10)FUN_107d573f(param_2,param_3);
      fVar3 = (float10)FUN_107d5867(param_2,param_3);
      dVar1 = (double)CONCAT44(param_3,param_2);
      param_3 = 1;
      if (1 < (int)param_1) {
        do {
          fVar4 = fVar3;
          local_10 = (double)fVar2;
          fVar2 = (float10)param_3;
          param_3 = param_3 + 1;
          local_18 = (double)(fVar2 * ((float10)2.0 / (float10)dVar1) * fVar4 - (float10)local_10);
          fVar3 = (float10)local_18;
          fVar2 = fVar4;
        } while (param_3 < (int)param_1);
      }
      return (float10)local_8 * (float10)local_18;
    }
    fVar2 = (float10)FUN_107d5867();
  }
  return fVar2 * (float10)local_8;
}


// ==== 107d5a5f _fabs

/* Library Function - Single Match
    _fabs
   
   Library: Visual Studio 2005 Release */

double __cdecl _fabs(double _X)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined8 local_c;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = __sptype(_X);
    if (iVar2 == 1) {
      __ctrlfp(uVar1,0xffff);
      fVar3 = (float10)_X;
    }
    else if (iVar2 == 2) {
      __ctrlfp(uVar1,0xffff);
      fVar3 = -(float10)_X;
    }
    else if (iVar2 == 3) {
      fVar3 = (float10)__handle_qnan1();
    }
    else {
      fVar3 = (float10)__except1(8,0x15,_X,_X + 1.0,uVar1);
    }
  }
  else {
    local_c = ABS(_X);
    __ctrlfp(uVar1,0xffff);
    fVar3 = (float10)local_c;
  }
  return (double)fVar3;
}


// ==== 107d5b20 FID_conflict:_cos

/* Library Function - Multiple Matches With Different Base Names
    _acos
    _asin
    _atan
    _cos
     8 names - too many to list
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

double __cdecl FID_conflict__cos(double _X)

{
  ushort in_FPUControlWord;
  float10 fVar1;
  
  if ((DAT_11d8b2dc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    fVar1 = (float10)FUN_107d5c88();
    return (double)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}


// ==== 107d5c70 FUN_107d5c70

void FUN_107d5c70(void)

{
  float10 in_ST0;
  
  FUN_107d5c8e((double)in_ST0);
  return;
}


// ==== 107d5c88 FUN_107d5c88

float10 FUN_107d5c88(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_c;
  
  iVar4 = 0;
  dVar8 = param_1;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)dVar8 >> 0x34);
    dVar7 = (double)((ulonglong)dVar8 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar7 + 4398046511103.0073,0) & 0x7f0;
    dVar9 = (double)((ulonglong)dVar8 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar12 = (double)((ulonglong)dVar8 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar10 = dVar9 * *(double *)(&DAT_109003a0 + uVar1) - 1.0;
    dVar7 = (dVar7 - dVar9) * *(double *)(&DAT_109003a0 + uVar1);
    dVar9 = ((double)((ulonglong)dVar8 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_109003a8 + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&UNK_109003a8 + uVar1) - 1.0);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar8 * 0.1428709072311373 + -0.1666800146149218) * dVar8 +
                       0.1999999994995557) * dVar8 * dVar8 * dVar8 * dVar8 * dVar8 +
                       ((dVar12 * -0.24999999959276006 + 0.33333333333333787) * dVar12 +
                       -0.5000000000000031) * dVar12 * dVar12 +
                       *(double *)(&UNK_109007b8 + uVar1) + dVar11 * 5.497923018708371e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_10900308 + iVar5)) +
                      *(double *)(&DAT_109007b0 + uVar1) + dVar10 + dVar11 * 0.6931471805598903 +
                      (double)((ulonglong)dVar7 & *(ulonglong *)(&DAT_10900300 + iVar5)));
    }
    dStack_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(dStack_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        dStack_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 1000;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        dStack_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_107d5e82;
    }
    dVar8 = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  dStack_c = -INFINITY;
  uVar6 = 2;
LAB_107d5e82:
  ___libm_error_support(&param_1,&param_1,&dStack_c,uVar6);
  return (float10)dStack_c;
}


// ==== 107d5c8e FUN_107d5c8e

float10 FUN_107d5c8e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.0073,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_109003a0 + uVar1) - 1.0;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_109003a0 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_109003a8 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_109003a8 + uVar1) - 1.0);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar10 * 0.1428709072311373 + -0.1666800146149218) * dVar10 +
                       0.1999999994995557) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       ((in_XMM0._8_8_ * -0.24999999959276006 + 0.33333333333333787) * in_XMM0._8_8_
                       + -0.5000000000000031) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       *(double *)(&UNK_109007b8 + uVar1) + dVar12 * 5.497923018708371e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_10900308 + iVar5)) +
                      *(double *)(&DAT_109007b0 + uVar1) + dVar11 + dVar12 * 0.6931471805598903 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_10900300 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 1000;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_107d5e82;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 2;
LAB_107d5e82:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}


// ==== 107efd20 Unwind@107efd20

void Unwind_107efd20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efd23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efd40 Unwind@107efd40

void Unwind_107efd40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efd43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efd60 Unwind@107efd60

void Unwind_107efd60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efd80 Unwind@107efd80

void Unwind_107efd80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efda0 Unwind@107efda0

void Unwind_107efda0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efda3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efdc0 Unwind@107efdc0

void Unwind_107efdc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efdc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efde0 Unwind@107efde0

void Unwind_107efde0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efde3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efe00 Unwind@107efe00

void Unwind_107efe00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efe03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 107efe30 Unwind@107efe30

void Unwind_107efe30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efe33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 107efe39 Unwind@107efe39

void Unwind_107efe39(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efe3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 107efe60 Unwind@107efe60

void Unwind_107efe60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efe63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efe80 Unwind@107efe80

void Unwind_107efe80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efe83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efea0 Unwind@107efea0

void Unwind_107efea0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efea9 Unwind@107efea9

void Unwind_107efea9(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107efed0 Unwind@107efed0

void Unwind_107efed0(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107efef0 Unwind@107efef0

void Unwind_107efef0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107eff10 Unwind@107eff10

void Unwind_107eff10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107eff13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107eff30 Unwind@107eff30

void Unwind_107eff30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107eff33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107eff39 Unwind@107eff39

void Unwind_107eff39(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107eff60 Unwind@107eff60

void Unwind_107eff60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107eff63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107eff80 Unwind@107eff80

void Unwind_107eff80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107eff83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107effa0 Unwind@107effa0

void Unwind_107effa0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107effa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107effa9 Unwind@107effa9

void Unwind_107effa9(void)

{
  thunk_FUN_10326570();
  return;
}


// ==== 107effd0 Unwind@107effd0

void Unwind_107effd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107effd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107efff0 Unwind@107efff0

void Unwind_107efff0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107efff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0010 Unwind@107f0010

void Unwind_107f0010(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f0030 Unwind@107f0030

void Unwind_107f0030(void)

{
  thunk_FUN_10326740();
  return;
}


// ==== 107f0050 Unwind@107f0050

void Unwind_107f0050(void)

{
  thunk_FUN_10326800();
  return;
}


// ==== 107f0070 Unwind@107f0070

void Unwind_107f0070(void)

{
  thunk_FUN_10326570();
  return;
}


// ==== 107f0090 Unwind@107f0090

void Unwind_107f0090(void)

{
  thunk_FUN_10326910();
  return;
}


// ==== 107f00b0 Unwind@107f00b0

void Unwind_107f00b0(void)

{
  thunk_FUN_103269d0();
  return;
}


// ==== 107f00d0 Unwind@107f00d0

void Unwind_107f00d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f00d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f00d9 Unwind@107f00d9

void Unwind_107f00d9(void)

{
  thunk_FUN_10326740();
  return;
}


// ==== 107f0100 Unwind@107f0100

void Unwind_107f0100(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0109 Unwind@107f0109

void Unwind_107f0109(void)

{
  thunk_FUN_10326800();
  return;
}


// ==== 107f0130 Unwind@107f0130

void Unwind_107f0130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0139 Unwind@107f0139

void Unwind_107f0139(void)

{
  thunk_FUN_10326910();
  return;
}


// ==== 107f0160 Unwind@107f0160

void Unwind_107f0160(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0169 Unwind@107f0169

void Unwind_107f0169(void)

{
  thunk_FUN_103269d0();
  return;
}


// ==== 107f0190 Unwind@107f0190

void Unwind_107f0190(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f0199 Unwind@107f0199

void Unwind_107f0199(void)

{
  thunk_FUN_10326520();
  return;
}


// ==== 107f01a7 Unwind@107f01a7

void Unwind_107f01a7(void)

{
  thunk_FUN_10326ae0();
  return;
}


// ==== 107f01b5 Unwind@107f01b5

void Unwind_107f01b5(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f01c3 Unwind@107f01c3

void Unwind_107f01c3(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f01d1 Unwind@107f01d1

void Unwind_107f01d1(void)

{
  thunk_FUN_10326520();
  return;
}


// ==== 107f01df Unwind@107f01df

void Unwind_107f01df(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f01ed Unwind@107f01ed

void Unwind_107f01ed(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f01f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x14) + 0x218));
  return;
}


// ==== 107f01fc Unwind@107f01fc

void Unwind_107f01fc(void)

{
  thunk_FUN_10326b30();
  return;
}


// ==== 107f020a Unwind@107f020a

void Unwind_107f020a(void)

{
  thunk_FUN_10326b80();
  return;
}


// ==== 107f0218 Unwind@107f0218

void Unwind_107f0218(void)

{
  thunk_FUN_10326bd0();
  return;
}


// ==== 107f0226 Unwind@107f0226

void Unwind_107f0226(void)

{
  thunk_FUN_10326c20();
  return;
}


// ==== 107f0234 Unwind@107f0234

void Unwind_107f0234(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f0242 Unwind@107f0242

void Unwind_107f0242(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f0250 Unwind@107f0250

void Unwind_107f0250(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f0258 Unwind@107f0258

void Unwind_107f0258(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f0260 Unwind@107f0260

void Unwind_107f0260(void)

{
  thunk_FUN_103269d0();
  return;
}


// ==== 107f0268 Unwind@107f0268

void Unwind_107f0268(void)

{
  thunk_FUN_10326910();
  return;
}


// ==== 107f0270 Unwind@107f0270

void Unwind_107f0270(void)

{
  thunk_FUN_10326570();
  return;
}


// ==== 107f0278 Unwind@107f0278

void Unwind_107f0278(void)

{
  thunk_FUN_10326800();
  return;
}


// ==== 107f0280 Unwind@107f0280

void Unwind_107f0280(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f0288 Unwind@107f0288

void Unwind_107f0288(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f0290 Unwind@107f0290

void Unwind_107f0290(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f0298 Unwind@107f0298

void Unwind_107f0298(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f02a0 Unwind@107f02a0

void Unwind_107f02a0(void)

{
  thunk_FUN_10326740();
  return;
}


// ==== 107f02a8 Unwind@107f02a8

void Unwind_107f02a8(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f0310 Unwind@107f0310

void Unwind_107f0310(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0330 Unwind@107f0330

void Unwind_107f0330(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0xd0));
  return;
}


// ==== 107f033c Unwind@107f033c

void Unwind_107f033c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x90));
  return;
}


// ==== 107f0348 Unwind@107f0348

void Unwind_107f0348(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f034e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x110));
  return;
}


// ==== 107f0354 Unwind@107f0354

void Unwind_107f0354(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 107f035d Unwind@107f035d

void Unwind_107f035d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x50));
  return;
}


// ==== 107f0380 Unwind@107f0380

void Unwind_107f0380(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f03a0 Unwind@107f03a0

void Unwind_107f03a0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x107f03b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 107f03d0 Unwind@107f03d0

void Unwind_107f03d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x107f03e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 107f0400 Unwind@107f0400

void Unwind_107f0400(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0420 Unwind@107f0420

void Unwind_107f0420(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0440 Unwind@107f0440

void Unwind_107f0440(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0460 Unwind@107f0460

void Unwind_107f0460(void)

{
  thunk_FUN_103284c0();
  return;
}


// ==== 107f0468 Unwind@107f0468

void Unwind_107f0468(void)

{
  thunk_FUN_10328560();
  return;
}


// ==== 107f0473 Unwind@107f0473

void Unwind_107f0473(void)

{
  thunk_FUN_10328510();
  return;
}


// ==== 107f047e Unwind@107f047e

void Unwind_107f047e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x30c));
  return;
}


// ==== 107f048a Unwind@107f048a

void Unwind_107f048a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x2cc));
  return;
}


// ==== 107f0496 Unwind@107f0496

void Unwind_107f0496(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f049c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x28c));
  return;
}


// ==== 107f04a2 Unwind@107f04a2

void Unwind_107f04a2(void)

{
  thunk_FUN_103284c0();
  return;
}


// ==== 107f04ad Unwind@107f04ad

void Unwind_107f04ad(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f04b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x20c));
  return;
}


// ==== 107f04b9 Unwind@107f04b9

void Unwind_107f04b9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f04bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x24c));
  return;
}


// ==== 107f04c5 Unwind@107f04c5

void Unwind_107f04c5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x334) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x334) = *(uint *)(unaff_EBP + -0x334) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x107f04de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 107f04e5 Unwind@107f04e5

void Unwind_107f04e5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f04eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x1cc));
  return;
}


// ==== 107f04f1 Unwind@107f04f1

void Unwind_107f04f1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f04f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x14c));
  return;
}


// ==== 107f04fd Unwind@107f04fd

void Unwind_107f04fd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0xcc));
  return;
}


// ==== 107f0509 Unwind@107f0509

void Unwind_107f0509(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f050c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 107f0550 Unwind@107f0550

void Unwind_107f0550(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f0559 Unwind@107f0559

void Unwind_107f0559(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0562 Unwind@107f0562

void Unwind_107f0562(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f056a Unwind@107f056a

void Unwind_107f056a(void)

{
  thunk_FUN_10326520();
  return;
}


// ==== 107f0578 Unwind@107f0578

void Unwind_107f0578(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f057b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0581 Unwind@107f0581

void Unwind_107f0581(void)

{
  thunk_FUN_10326740();
  return;
}


// ==== 107f0589 Unwind@107f0589

void Unwind_107f0589(void)

{
  thunk_FUN_10326ae0();
  return;
}


// ==== 107f0597 Unwind@107f0597

void Unwind_107f0597(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f059a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f05a0 Unwind@107f05a0

void Unwind_107f05a0(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f05a8 Unwind@107f05a8

void Unwind_107f05a8(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f05b6 Unwind@107f05b6

void Unwind_107f05b6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f05b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f05bf Unwind@107f05bf

void Unwind_107f05bf(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f05c7 Unwind@107f05c7

void Unwind_107f05c7(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f05d5 Unwind@107f05d5

void Unwind_107f05d5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f05d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f05de Unwind@107f05de

void Unwind_107f05de(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f05e6 Unwind@107f05e6

void Unwind_107f05e6(void)

{
  thunk_FUN_10326520();
  return;
}


// ==== 107f05f4 Unwind@107f05f4

void Unwind_107f05f4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f05f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f05fd Unwind@107f05fd

void Unwind_107f05fd(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f0605 Unwind@107f0605

void Unwind_107f0605(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f0613 Unwind@107f0613

void Unwind_107f0613(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x14) + 0x218));
  return;
}


// ==== 107f0622 Unwind@107f0622

void Unwind_107f0622(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f062b Unwind@107f062b

void Unwind_107f062b(void)

{
  thunk_FUN_10326800();
  return;
}


// ==== 107f0633 Unwind@107f0633

void Unwind_107f0633(void)

{
  thunk_FUN_10326b30();
  return;
}


// ==== 107f0641 Unwind@107f0641

void Unwind_107f0641(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f064a Unwind@107f064a

void Unwind_107f064a(void)

{
  thunk_FUN_10326570();
  return;
}


// ==== 107f0652 Unwind@107f0652

void Unwind_107f0652(void)

{
  thunk_FUN_10326b80();
  return;
}


// ==== 107f0660 Unwind@107f0660

void Unwind_107f0660(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0669 Unwind@107f0669

void Unwind_107f0669(void)

{
  thunk_FUN_10326910();
  return;
}


// ==== 107f0671 Unwind@107f0671

void Unwind_107f0671(void)

{
  thunk_FUN_10326bd0();
  return;
}


// ==== 107f067f Unwind@107f067f

void Unwind_107f067f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0688 Unwind@107f0688

void Unwind_107f0688(void)

{
  thunk_FUN_103269d0();
  return;
}


// ==== 107f0690 Unwind@107f0690

void Unwind_107f0690(void)

{
  thunk_FUN_10326c20();
  return;
}


// ==== 107f069e Unwind@107f069e

void Unwind_107f069e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f06a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f06a7 Unwind@107f06a7

void Unwind_107f06a7(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f06af Unwind@107f06af

void Unwind_107f06af(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f06bd Unwind@107f06bd

void Unwind_107f06bd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f06c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f06c6 Unwind@107f06c6

void Unwind_107f06c6(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f06ce Unwind@107f06ce

void Unwind_107f06ce(void)

{
  thunk_FUN_10326a90();
  return;
}


// ==== 107f0750 Unwind@107f0750

void Unwind_107f0750(void)

{
  int unaff_EBP;
  
  AActor::~AActor(*(AActor **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0770 Unwind@107f0770

void Unwind_107f0770(void)

{
  int unaff_EBP;
  
  AActor::~AActor(*(AActor **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0790 Unwind@107f0790

void Unwind_107f0790(void)

{
  int unaff_EBP;
  
  AInfo::~AInfo(*(AInfo **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0798 Unwind@107f0798

void Unwind_107f0798(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f07a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0x3c0));
  return;
}


// ==== 107f07c0 Unwind@107f07c0

void Unwind_107f07c0(void)

{
  int unaff_EBP;
  
  AActor::~AActor(*(AActor **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f07c8 Unwind@107f07c8

void Unwind_107f07c8(void)

{
  int unaff_EBP;
  
  AInfo::~AInfo(*(AInfo **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f07d0 Unwind@107f07d0

void Unwind_107f07d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f07d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0x3c0));
  return;
}


// ==== 107f0800 Unwind@107f0800

void Unwind_107f0800(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UPackageMap::~UPackageMap(*(UPackageMap **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0820 Unwind@107f0820

void Unwind_107f0820(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UPackageMap::~UPackageMap(*(UPackageMap **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0840 Unwind@107f0840

void Unwind_107f0840(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UPackageMap::~UPackageMap(*(UPackageMap **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0860 Unwind@107f0860

void Unwind_107f0860(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UPackageMap::~UPackageMap(*(UPackageMap **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0880 Unwind@107f0880

void Unwind_107f0880(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitWriter::~FBitWriter(*(FBitWriter **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f08a0 Unwind@107f08a0

void Unwind_107f08a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f08a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitWriter::~FBitWriter(*(FBitWriter **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f08c0 Unwind@107f08c0

void Unwind_107f08c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f08c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitReader::~FBitReader(*(FBitReader **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f08e0 Unwind@107f08e0

void Unwind_107f08e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f08e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitReader::~FBitReader(*(FBitReader **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0900 Unwind@107f0900

void Unwind_107f0900(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitReader::~FBitReader(*(FBitReader **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0920 Unwind@107f0920

void Unwind_107f0920(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0929 Unwind@107f0929

void Unwind_107f0929(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f092f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 107f0950 Unwind@107f0950

void Unwind_107f0950(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0959 Unwind@107f0959

void Unwind_107f0959(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f095f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 107f0980 Unwind@107f0980

void Unwind_107f0980(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0989 Unwind@107f0989

void Unwind_107f0989(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f098f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 107f09b0 Unwind@107f09b0

void Unwind_107f09b0(void)

{
  int unaff_EBP;
  
  UDownload::~UDownload(*(UDownload **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f09d0 Unwind@107f09d0

void Unwind_107f09d0(void)

{
  int unaff_EBP;
  
  UDownload::~UDownload(*(UDownload **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f09f0 Unwind@107f09f0

void Unwind_107f09f0(void)

{
  int unaff_EBP;
  
  UDownload::~UDownload(*(UDownload **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0a10 Unwind@107f0a10

void Unwind_107f0a10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0a30 Unwind@107f0a30

void Unwind_107f0a30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0a50 Unwind@107f0a50

void Unwind_107f0a50(void)

{
  int unaff_EBP;
  
  UChannel::~UChannel(*(UChannel **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0a70 Unwind@107f0a70

void Unwind_107f0a70(void)

{
  int unaff_EBP;
  
  UChannel::~UChannel(*(UChannel **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0a90 Unwind@107f0a90

void Unwind_107f0a90(void)

{
  int unaff_EBP;
  
  UChannel::~UChannel(*(UChannel **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0ab0 Unwind@107f0ab0

void Unwind_107f0ab0(void)

{
  int unaff_EBP;
  
  UChannel::~UChannel(*(UChannel **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0ad0 Unwind@107f0ad0

void Unwind_107f0ad0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f0adc Unwind@107f0adc

void Unwind_107f0adc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 107f0b00 Unwind@107f0b00

void Unwind_107f0b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f0b0c Unwind@107f0b0c

void Unwind_107f0b0c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 107f0b30 Unwind@107f0b30

void Unwind_107f0b30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitWriter::~FBitWriter(*(FBitWriter **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0b50 Unwind@107f0b50

void Unwind_107f0b50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitWriter::~FBitWriter(*(FBitWriter **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0b70 Unwind@107f0b70

void Unwind_107f0b70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitReader::~FBitReader(*(FBitReader **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0b90 Unwind@107f0b90

void Unwind_107f0b90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitReader::~FBitReader(*(FBitReader **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0bc0 Unwind@107f0bc0

void Unwind_107f0bc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0be0 Unwind@107f0be0

void Unwind_107f0be0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0c00 Unwind@107f0c00

void Unwind_107f0c00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0c20 Unwind@107f0c20

void Unwind_107f0c20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0c40 Unwind@107f0c40

void Unwind_107f0c40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0c60 Unwind@107f0c60

void Unwind_107f0c60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0c80 Unwind@107f0c80

void Unwind_107f0c80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0ca0 Unwind@107f0ca0

void Unwind_107f0ca0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0cc0 Unwind@107f0cc0

void Unwind_107f0cc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0ce0 Unwind@107f0ce0

void Unwind_107f0ce0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0d40 Unwind@107f0d40

void Unwind_107f0d40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0d60 Unwind@107f0d60

void Unwind_107f0d60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0d80 Unwind@107f0d80

void Unwind_107f0d80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0da0 Unwind@107f0da0

void Unwind_107f0da0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>(*(TArray<unsigned_char> **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0dc0 Unwind@107f0dc0

void Unwind_107f0dc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0de0 Unwind@107f0de0

void Unwind_107f0de0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f0dec Unwind@107f0dec

void Unwind_107f0dec(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 107f0e10 Unwind@107f0e10

void Unwind_107f0e10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f0e1c Unwind@107f0e1c

void Unwind_107f0e1c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 107f0e40 Unwind@107f0e40

void Unwind_107f0e40(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>(*(TArray<unsigned_char> **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0e60 Unwind@107f0e60

void Unwind_107f0e60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0e80 Unwind@107f0e80

void Unwind_107f0e80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0ea0 Unwind@107f0ea0

void Unwind_107f0ea0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0ec0 Unwind@107f0ec0

void Unwind_107f0ec0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0ec9 Unwind@107f0ec9

void Unwind_107f0ec9(void)

{
  thunk_FUN_1032c6e0();
  return;
}


// ==== 107f0ed4 Unwind@107f0ed4

void Unwind_107f0ed4(void)

{
  thunk_FUN_1032ce30();
  return;
}


// ==== 107f0f00 Unwind@107f0f00

void Unwind_107f0f00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f0f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0f09 Unwind@107f0f09

void Unwind_107f0f09(void)

{
  thunk_FUN_1032c6e0();
  return;
}


// ==== 107f0f14 Unwind@107f0f14

void Unwind_107f0f14(void)

{
  thunk_FUN_1032ce30();
  return;
}


// ==== 107f0f40 Unwind@107f0f40

void Unwind_107f0f40(void)

{
  int unaff_EBP;
  
  UChannel::~UChannel(*(UChannel **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0f48 Unwind@107f0f48

void Unwind_107f0f48(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0xa4));
  return;
}


// ==== 107f0f56 Unwind@107f0f56

void Unwind_107f0f56(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0xb0));
  return;
}


// ==== 107f0f64 Unwind@107f0f64

void Unwind_107f0f64(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f0f72 Unwind@107f0f72

void Unwind_107f0f72(void)

{
  thunk_FUN_1032c940();
  return;
}


// ==== 107f0fa0 Unwind@107f0fa0

void Unwind_107f0fa0(void)

{
  int unaff_EBP;
  
  UChannel::~UChannel(*(UChannel **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f0fa8 Unwind@107f0fa8

void Unwind_107f0fa8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0xa4));
  return;
}


// ==== 107f0fb6 Unwind@107f0fb6

void Unwind_107f0fb6(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0xb0));
  return;
}


// ==== 107f0fc4 Unwind@107f0fc4

void Unwind_107f0fc4(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f0fd2 Unwind@107f0fd2

void Unwind_107f0fd2(void)

{
  thunk_FUN_1032c940();
  return;
}


// ==== 107f1000 Unwind@107f1000

void Unwind_107f1000(void)

{
  thunk_FUN_1032cb60();
  return;
}


// ==== 107f1020 Unwind@107f1020

void Unwind_107f1020(void)

{
  thunk_FUN_1032cb60();
  return;
}


// ==== 107f1040 Unwind@107f1040

void Unwind_107f1040(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1060 Unwind@107f1060

void Unwind_107f1060(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x18));
  return;
}


// ==== 107f1069 Unwind@107f1069

void Unwind_107f1069(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>(*(TArray<unsigned_char> **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f1090 Unwind@107f1090

void Unwind_107f1090(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>(*(TArray<unsigned_char> **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f10b0 Unwind@107f10b0

void Unwind_107f10b0(void)

{
  thunk_FUN_1032cf20();
  return;
}


// ==== 107f10d0 Unwind@107f10d0

void Unwind_107f10d0(void)

{
  thunk_FUN_1032cf20();
  return;
}


// ==== 107f10f0 Unwind@107f10f0

void Unwind_107f10f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f10f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f10f9 Unwind@107f10f9

void Unwind_107f10f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f10ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f1105 Unwind@107f1105

void Unwind_107f1105(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f110b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}


// ==== 107f1111 Unwind@107f1111

void Unwind_107f1111(void)

{
  thunk_FUN_1032ce30();
  return;
}


// ==== 107f111c Unwind@107f111c

void Unwind_107f111c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 107f1150 Unwind@107f1150

void Unwind_107f1150(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1159 Unwind@107f1159

void Unwind_107f1159(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f115f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f1165 Unwind@107f1165

void Unwind_107f1165(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f116b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}


// ==== 107f1171 Unwind@107f1171

void Unwind_107f1171(void)

{
  thunk_FUN_1032ce30();
  return;
}


// ==== 107f117c Unwind@107f117c

void Unwind_107f117c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 107f11b0 Unwind@107f11b0

void Unwind_107f11b0(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f11d0 Unwind@107f11d0

void Unwind_107f11d0(void)

{
  thunk_FUN_1032d070();
  return;
}


// ==== 107f11f0 Unwind@107f11f0

void Unwind_107f11f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f11f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f11f9 Unwind@107f11f9

void Unwind_107f11f9(void)

{
  thunk_FUN_1032dc00();
  return;
}


// ==== 107f1204 Unwind@107f1204

void Unwind_107f1204(void)

{
  thunk_FUN_1032cf20();
  return;
}


// ==== 107f1220 Unwind@107f1220

void Unwind_107f1220(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1229 Unwind@107f1229

void Unwind_107f1229(void)

{
  thunk_FUN_1032cf20();
  return;
}


// ==== 107f1231 Unwind@107f1231

void Unwind_107f1231(void)

{
  thunk_FUN_1032dc00();
  return;
}


// ==== 107f1250 Unwind@107f1250

void Unwind_107f1250(void)

{
  thunk_FUN_1032d920();
  return;
}


// ==== 107f1270 Unwind@107f1270

void Unwind_107f1270(void)

{
  thunk_FUN_1032d920();
  return;
}


// ==== 107f1290 Unwind@107f1290

void Unwind_107f1290(void)

{
  int unaff_EBP;
  
  UNetDriver::~UNetDriver(*(UNetDriver **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1298 Unwind@107f1298

void Unwind_107f1298(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f12a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xa4));
  return;
}


// ==== 107f12a7 Unwind@107f12a7

void Unwind_107f12a7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xb0));
  return;
}


// ==== 107f12b6 Unwind@107f12b6

void Unwind_107f12b6(void)

{
  int unaff_EBP;
  
  FURL::~FURL((FURL *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ==== 107f12e0 Unwind@107f12e0

void Unwind_107f12e0(void)

{
  int unaff_EBP;
  
  UNetDriver::~UNetDriver(*(UNetDriver **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f12e8 Unwind@107f12e8

void Unwind_107f12e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f12f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xa4));
  return;
}


// ==== 107f12f7 Unwind@107f12f7

void Unwind_107f12f7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xb0));
  return;
}


// ==== 107f1306 Unwind@107f1306

void Unwind_107f1306(void)

{
  int unaff_EBP;
  
  FURL::~FURL((FURL *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ==== 107f1330 Unwind@107f1330

void Unwind_107f1330(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>(*(TArray<unsigned_char> **)(unaff_EBP + 4));
  return;
}


// ==== 107f1350 Unwind@107f1350

void Unwind_107f1350(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>(*(TArray<unsigned_char> **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1370 Unwind@107f1370

void Unwind_107f1370(void)

{
  int unaff_EBP;
  
  AInfo::~AInfo(*(AInfo **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1390 Unwind@107f1390

void Unwind_107f1390(void)

{
  int unaff_EBP;
  
  AActor::~AActor(*(AActor **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1398 Unwind@107f1398

void Unwind_107f1398(void)

{
  int unaff_EBP;
  
  AInfo::~AInfo(*(AInfo **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f13b0 Unwind@107f13b0

void Unwind_107f13b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f13b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f13b9 Unwind@107f13b9

void Unwind_107f13b9(void)

{
  thunk_FUN_1032de90();
  return;
}


// ==== 107f13c4 Unwind@107f13c4

void Unwind_107f13c4(void)

{
  thunk_FUN_1032dee0();
  return;
}


// ==== 107f13cf Unwind@107f13cf

void Unwind_107f13cf(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f13da Unwind@107f13da

void Unwind_107f13da(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f13e5 Unwind@107f13e5

void Unwind_107f13e5(void)

{
  int unaff_EBP;
  
  FURL::~FURL((FURL *)(*(int *)(unaff_EBP + -0x14) + 0x78));
  return;
}


// ==== 107f13f0 Unwind@107f13f0

void Unwind_107f13f0(void)

{
  thunk_FUN_1032d070();
  return;
}


// ==== 107f13f8 Unwind@107f13f8

void Unwind_107f13f8(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f1420 Unwind@107f1420

void Unwind_107f1420(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1440 Unwind@107f1440

void Unwind_107f1440(void)

{
  int unaff_EBP;
  
  TArray<unsigned_char>::~TArray<unsigned_char>(*(TArray<unsigned_char> **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f1460 Unwind@107f1460

void Unwind_107f1460(void)

{
  int unaff_EBP;
  
  UPlayer::~UPlayer(*(UPlayer **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f1468 Unwind@107f1468

void Unwind_107f1468(void)

{
  int unaff_EBP;
  
  FURL::~FURL((FURL *)(*(int *)(unaff_EBP + -0x14) + 0x7c));
  return;
}


// ==== 107f1473 Unwind@107f1473

void Unwind_107f1473(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f147c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x14) + 0xe0));
  return;
}


// ==== 107f1482 Unwind@107f1482

void Unwind_107f1482(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f148b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xec));
  return;
}


// ==== 107f1491 Unwind@107f1491

void Unwind_107f1491(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f149a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xf8));
  return;
}


// ==== 107f14a0 Unwind@107f14a0

void Unwind_107f14a0(void)

{
  int unaff_EBP;
  
  FOutBunch::~FOutBunch((FOutBunch *)(*(int *)(unaff_EBP + -0x14) + 0x148));
  return;
}


// ==== 107f14ae Unwind@107f14ae

void Unwind_107f14ae(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f14b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitWriter::~FBitWriter((FBitWriter *)(*(int *)(unaff_EBP + -0x14) + 0x254));
  return;
}


// ==== 107f14bd Unwind@107f14bd

void Unwind_107f14bd(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f14cb Unwind@107f14cb

void Unwind_107f14cb(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f14d9 Unwind@107f14d9

void Unwind_107f14d9(void)

{
  thunk_FUN_1032c810();
  return;
}


// ==== 107f14e7 Unwind@107f14e7

void Unwind_107f14e7(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f14f5 Unwind@107f14f5

void Unwind_107f14f5(void)

{
  thunk_FUN_1032e280();
  return;
}


// ==== 107f1503 Unwind@107f1503

void Unwind_107f1503(void)

{
  thunk_FUN_1032d9b0();
  return;
}


// ==== 107f1511 Unwind@107f1511

void Unwind_107f1511(void)

{
  thunk_FUN_1032ead0();
  return;
}


// ==== 107f151f Unwind@107f151f

void Unwind_107f151f(void)

{
  thunk_FUN_1032d920();
  return;
}


// ==== 107f1527 Unwind@107f1527

void Unwind_107f1527(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f152a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitWriter::~FBitWriter(*(FBitWriter **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1570 Unwind@107f1570

void Unwind_107f1570(void)

{
  int unaff_EBP;
  
  UPlayer::~UPlayer(*(UPlayer **)(unaff_EBP + -0x18));
  return;
}


// ==== 107f1578 Unwind@107f1578

void Unwind_107f1578(void)

{
  int unaff_EBP;
  
  FURL::~FURL((FURL *)(*(int *)(unaff_EBP + -0x18) + 0x7c));
  return;
}


// ==== 107f1583 Unwind@107f1583

void Unwind_107f1583(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f158c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x18) + 0xe0));
  return;
}


// ==== 107f1592 Unwind@107f1592

void Unwind_107f1592(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f159b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0xec));
  return;
}


// ==== 107f15a1 Unwind@107f15a1

void Unwind_107f15a1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f15aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0xf8));
  return;
}


// ==== 107f15b0 Unwind@107f15b0

void Unwind_107f15b0(void)

{
  int unaff_EBP;
  
  FOutBunch::~FOutBunch((FOutBunch *)(*(int *)(unaff_EBP + -0x18) + 0x148));
  return;
}


// ==== 107f15be Unwind@107f15be

void Unwind_107f15be(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f15c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FBitWriter::~FBitWriter((FBitWriter *)(*(int *)(unaff_EBP + -0x18) + 0x254));
  return;
}


// ==== 107f15cd Unwind@107f15cd

void Unwind_107f15cd(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f15db Unwind@107f15db

void Unwind_107f15db(void)

{
  thunk_FUN_10325f90();
  return;
}


// ==== 107f15e9 Unwind@107f15e9

void Unwind_107f15e9(void)

{
  thunk_FUN_1032c810();
  return;
}


// ==== 107f15f7 Unwind@107f15f7

void Unwind_107f15f7(void)

{
  thunk_FUN_10326630();
  return;
}


// ==== 107f1605 Unwind@107f1605

void Unwind_107f1605(void)

{
  thunk_FUN_1032d920();
  return;
}


// ==== 107f160d Unwind@107f160d

void Unwind_107f160d(void)

{
  thunk_FUN_1032e280();
  return;
}


// ==== 107f161b Unwind@107f161b

void Unwind_107f161b(void)

{
  thunk_FUN_1032d9b0();
  return;
}


// ==== 107f1629 Unwind@107f1629

void Unwind_107f1629(void)

{
  thunk_FUN_1032ead0();
  return;
}


// ==== 107f1680 Unwind@107f1680

void Unwind_107f1680(void)

{
  int unaff_EBP;
  
  UNetConnection::~UNetConnection(*(UNetConnection **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f16a0 Unwind@107f16a0

void Unwind_107f16a0(void)

{
  int unaff_EBP;
  
  UNetConnection::~UNetConnection(*(UNetConnection **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f16c0 Unwind@107f16c0

void Unwind_107f16c0(void)

{
  int unaff_EBP;
  
  UNetConnection::~UNetConnection(*(UNetConnection **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f16e0 Unwind@107f16e0

void Unwind_107f16e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f16e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1700 Unwind@107f1700

void Unwind_107f1700(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x107f1713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 107f1730 Unwind@107f1730

void Unwind_107f1730(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1750 Unwind@107f1750

void Unwind_107f1750(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit(*(FStringNoInit **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1759 Unwind@107f1759

void Unwind_107f1759(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f175f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f1780 Unwind@107f1780

void Unwind_107f1780(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit(*(FStringNoInit **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1789 Unwind@107f1789

void Unwind_107f1789(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f178f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f17b0 Unwind@107f17b0

void Unwind_107f17b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f17b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit(*(FStringNoInit **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f17b9 Unwind@107f17b9

void Unwind_107f17b9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f17bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f17e0 Unwind@107f17e0

void Unwind_107f17e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f17e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f1800 Unwind@107f1800

void Unwind_107f1800(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f1820 Unwind@107f1820

void Unwind_107f1820(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f1840 Unwind@107f1840

void Unwind_107f1840(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 107f184c Unwind@107f184c

void Unwind_107f184c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ==== 107f1870 Unwind@107f1870

void Unwind_107f1870(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 107f187c Unwind@107f187c

void Unwind_107f187c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ==== 107f18b0 Unwind@107f18b0

void Unwind_107f18b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f18b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f18d0 Unwind@107f18d0

void Unwind_107f18d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f18d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f18f0 Unwind@107f18f0

void Unwind_107f18f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f18f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1910 Unwind@107f1910

void Unwind_107f1910(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1930 Unwind@107f1930

void Unwind_107f1930(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1950 Unwind@107f1950

void Unwind_107f1950(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f1958 Unwind@107f1958

void Unwind_107f1958(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1970 Unwind@107f1970

void Unwind_107f1970(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1990 Unwind@107f1990

void Unwind_107f1990(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f19b0 Unwind@107f19b0

void Unwind_107f19b0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f19d0 Unwind@107f19d0

void Unwind_107f19d0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f19f0 Unwind@107f19f0

void Unwind_107f19f0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1a10 Unwind@107f1a10

void Unwind_107f1a10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1a30 Unwind@107f1a30

void Unwind_107f1a30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1a50 Unwind@107f1a50

void Unwind_107f1a50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1a70 Unwind@107f1a70

void Unwind_107f1a70(void)

{
  int unaff_EBP;
  
  URenderResource::~URenderResource(*(URenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1a90 Unwind@107f1a90

void Unwind_107f1a90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1a99 Unwind@107f1a99

void Unwind_107f1a99(void)

{
  int unaff_EBP;
  
  URenderResource::~URenderResource(*(URenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1ac0 Unwind@107f1ac0

void Unwind_107f1ac0(void)

{
  int unaff_EBP;
  
  URenderResource::~URenderResource(*(URenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1ae0 Unwind@107f1ae0

void Unwind_107f1ae0(void)

{
  int unaff_EBP;
  
  URenderResource::~URenderResource(*(URenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1ae8 Unwind@107f1ae8

void Unwind_107f1ae8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_short>::~TArray<unsigned_short>
            ((TArray<unsigned_short> *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ==== 107f1b10 Unwind@107f1b10

void Unwind_107f1b10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1b19 Unwind@107f1b19

void Unwind_107f1b19(void)

{
  int unaff_EBP;
  
  URenderResource::~URenderResource(*(URenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1b21 Unwind@107f1b21

void Unwind_107f1b21(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_short>::~TArray<unsigned_short>
            ((TArray<unsigned_short> *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ==== 107f1b40 Unwind@107f1b40

void Unwind_107f1b40(void)

{
  int unaff_EBP;
  
  URenderResource::~URenderResource(*(URenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1b48 Unwind@107f1b48

void Unwind_107f1b48(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_short>::~TArray<unsigned_short>
            ((TArray<unsigned_short> *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ==== 107f1b70 Unwind@107f1b70

void Unwind_107f1b70(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x468),0xc,0x10,~FString_exref);
  return;
}


// ==== 107f1ba0 Unwind@107f1ba0

void Unwind_107f1ba0(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x468),0xc,0x10,~FString_exref);
  return;
}


// ==== 107f1bd0 Unwind@107f1bd0

void Unwind_107f1bd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 107f1bd9 Unwind@107f1bd9

void Unwind_107f1bd9(void)

{
  int unaff_EBP;
  
  FMaterialProperty::~FMaterialProperty((FMaterialProperty *)(*(int *)(unaff_EBP + -0x14) + 0x44));
  return;
}


// ==== 107f1be4 Unwind@107f1be4

void Unwind_107f1be4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x56c));
  return;
}


// ==== 107f1bf3 Unwind@107f1bf3

void Unwind_107f1bf3(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x468),0xc,0x10,~FString_exref);
  return;
}


// ==== 107f1c30 Unwind@107f1c30

void Unwind_107f1c30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1c39 Unwind@107f1c39

void Unwind_107f1c39(void)

{
  int unaff_EBP;
  
  FMaterialProperty::~FMaterialProperty((FMaterialProperty *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 107f1c44 Unwind@107f1c44

void Unwind_107f1c44(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x56c));
  return;
}


// ==== 107f1c70 Unwind@107f1c70

void Unwind_107f1c70(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1c90 Unwind@107f1c90

void Unwind_107f1c90(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1cb0 Unwind@107f1cb0

void Unwind_107f1cb0(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1cd0 Unwind@107f1cd0

void Unwind_107f1cd0(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1cf0 Unwind@107f1cf0

void Unwind_107f1cf0(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1cf8 Unwind@107f1cf8

void Unwind_107f1cf8(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1d10 Unwind@107f1d10

void Unwind_107f1d10(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1d30 Unwind@107f1d30

void Unwind_107f1d30(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1d50 Unwind@107f1d50

void Unwind_107f1d50(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1d70 Unwind@107f1d70

void Unwind_107f1d70(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1d90 Unwind@107f1d90

void Unwind_107f1d90(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1db0 Unwind@107f1db0

void Unwind_107f1db0(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1db8 Unwind@107f1db8

void Unwind_107f1db8(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1dd0 Unwind@107f1dd0

void Unwind_107f1dd0(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1df0 Unwind@107f1df0

void Unwind_107f1df0(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1e10 Unwind@107f1e10

void Unwind_107f1e10(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1e18 Unwind@107f1e18

void Unwind_107f1e18(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1e30 Unwind@107f1e30

void Unwind_107f1e30(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1e50 Unwind@107f1e50

void Unwind_107f1e50(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1e70 Unwind@107f1e70

void Unwind_107f1e70(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1e78 Unwind@107f1e78

void Unwind_107f1e78(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1e90 Unwind@107f1e90

void Unwind_107f1e90(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1eb0 Unwind@107f1eb0

void Unwind_107f1eb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + 4));
  return;
}


// ==== 107f1ed0 Unwind@107f1ed0

void Unwind_107f1ed0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + 0x44));
  return;
}


// ==== 107f1ed9 Unwind@107f1ed9

void Unwind_107f1ed9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + 4));
  return;
}


// ==== 107f1f00 Unwind@107f1f00

void Unwind_107f1f00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + 4));
  return;
}


// ==== 107f1f20 Unwind@107f1f20

void Unwind_107f1f20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1f29 Unwind@107f1f29

void Unwind_107f1f29(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1f2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 107f1f50 Unwind@107f1f50

void Unwind_107f1f50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1f59 Unwind@107f1f59

void Unwind_107f1f59(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 107f1f80 Unwind@107f1f80

void Unwind_107f1f80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1f89 Unwind@107f1f89

void Unwind_107f1f89(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f1f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 107f1fb0 Unwind@107f1fb0

void Unwind_107f1fb0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1fd0 Unwind@107f1fd0

void Unwind_107f1fd0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f1ff0 Unwind@107f1ff0

void Unwind_107f1ff0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2010 Unwind@107f2010

void Unwind_107f2010(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2018 Unwind@107f2018

void Unwind_107f2018(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2030 Unwind@107f2030

void Unwind_107f2030(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2050 Unwind@107f2050

void Unwind_107f2050(void)

{
  thunk_FUN_103358a0();
  return;
}


// ==== 107f2058 Unwind@107f2058

void Unwind_107f2058(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2060 Unwind@107f2060

void Unwind_107f2060(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2080 Unwind@107f2080

void Unwind_107f2080(void)

{
  thunk_FUN_103358a0();
  return;
}


// ==== 107f2088 Unwind@107f2088

void Unwind_107f2088(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2090 Unwind@107f2090

void Unwind_107f2090(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f20b0 Unwind@107f20b0

void Unwind_107f20b0(void)

{
  thunk_FUN_103358a0();
  return;
}


// ==== 107f20b8 Unwind@107f20b8

void Unwind_107f20b8(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f20c0 Unwind@107f20c0

void Unwind_107f20c0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f20e0 Unwind@107f20e0

void Unwind_107f20e0(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f20e8 Unwind@107f20e8

void Unwind_107f20e8(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2100 Unwind@107f2100

void Unwind_107f2100(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2108 Unwind@107f2108

void Unwind_107f2108(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2120 Unwind@107f2120

void Unwind_107f2120(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2128 Unwind@107f2128

void Unwind_107f2128(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2140 Unwind@107f2140

void Unwind_107f2140(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x107f2153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 107f2170 Unwind@107f2170

void Unwind_107f2170(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2178 Unwind@107f2178

void Unwind_107f2178(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2190 Unwind@107f2190

void Unwind_107f2190(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2198 Unwind@107f2198

void Unwind_107f2198(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f21b0 Unwind@107f21b0

void Unwind_107f21b0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f21b8 Unwind@107f21b8

void Unwind_107f21b8(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f21d0 Unwind@107f21d0

void Unwind_107f21d0(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f21d8 Unwind@107f21d8

void Unwind_107f21d8(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f21f0 Unwind@107f21f0

void Unwind_107f21f0(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f21f8 Unwind@107f21f8

void Unwind_107f21f8(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2210 Unwind@107f2210

void Unwind_107f2210(void)

{
  thunk_FUN_10331c10();
  return;
}


// ==== 107f2218 Unwind@107f2218

void Unwind_107f2218(void)

{
  int unaff_EBP;
  
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2250 Unwind@107f2250

void Unwind_107f2250(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2270 Unwind@107f2270

void Unwind_107f2270(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2290 Unwind@107f2290

void Unwind_107f2290(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f22b0 Unwind@107f22b0

void Unwind_107f22b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f22d0 Unwind@107f22d0

void Unwind_107f22d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f22f0 Unwind@107f22f0

void Unwind_107f22f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2310 Unwind@107f2310

void Unwind_107f2310(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2330 Unwind@107f2330

void Unwind_107f2330(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2350 Unwind@107f2350

void Unwind_107f2350(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2370 Unwind@107f2370

void Unwind_107f2370(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2390 Unwind@107f2390

void Unwind_107f2390(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f23b0 Unwind@107f23b0

void Unwind_107f23b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f23d0 Unwind@107f23d0

void Unwind_107f23d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f23f0 Unwind@107f23f0

void Unwind_107f23f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2410 Unwind@107f2410

void Unwind_107f2410(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2430 Unwind@107f2430

void Unwind_107f2430(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2450 Unwind@107f2450

void Unwind_107f2450(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2470 Unwind@107f2470

void Unwind_107f2470(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2490 Unwind@107f2490

void Unwind_107f2490(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f24b0 Unwind@107f24b0

void Unwind_107f24b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f24d0 Unwind@107f24d0

void Unwind_107f24d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f24f0 Unwind@107f24f0

void Unwind_107f24f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2510 Unwind@107f2510

void Unwind_107f2510(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2530 Unwind@107f2530

void Unwind_107f2530(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2550 Unwind@107f2550

void Unwind_107f2550(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2570 Unwind@107f2570

void Unwind_107f2570(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2590 Unwind@107f2590

void Unwind_107f2590(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f25b0 Unwind@107f25b0

void Unwind_107f25b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f25d0 Unwind@107f25d0

void Unwind_107f25d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f25f0 Unwind@107f25f0

void Unwind_107f25f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2610 Unwind@107f2610

void Unwind_107f2610(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2630 Unwind@107f2630

void Unwind_107f2630(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2650 Unwind@107f2650

void Unwind_107f2650(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2670 Unwind@107f2670

void Unwind_107f2670(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2690 Unwind@107f2690

void Unwind_107f2690(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f26b0 Unwind@107f26b0

void Unwind_107f26b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f26d0 Unwind@107f26d0

void Unwind_107f26d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f26f0 Unwind@107f26f0

void Unwind_107f26f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2710 Unwind@107f2710

void Unwind_107f2710(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2730 Unwind@107f2730

void Unwind_107f2730(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2750 Unwind@107f2750

void Unwind_107f2750(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2770 Unwind@107f2770

void Unwind_107f2770(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2790 Unwind@107f2790

void Unwind_107f2790(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f27b0 Unwind@107f27b0

void Unwind_107f27b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f27d0 Unwind@107f27d0

void Unwind_107f27d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f27f0 Unwind@107f27f0

void Unwind_107f27f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2810 Unwind@107f2810

void Unwind_107f2810(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2830 Unwind@107f2830

void Unwind_107f2830(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2850 Unwind@107f2850

void Unwind_107f2850(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2870 Unwind@107f2870

void Unwind_107f2870(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2890 Unwind@107f2890

void Unwind_107f2890(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f28b0 Unwind@107f28b0

void Unwind_107f28b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f28d0 Unwind@107f28d0

void Unwind_107f28d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f28f0 Unwind@107f28f0

void Unwind_107f28f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2910 Unwind@107f2910

void Unwind_107f2910(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2930 Unwind@107f2930

void Unwind_107f2930(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2950 Unwind@107f2950

void Unwind_107f2950(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2970 Unwind@107f2970

void Unwind_107f2970(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2990 Unwind@107f2990

void Unwind_107f2990(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f29b0 Unwind@107f29b0

void Unwind_107f29b0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f29d0 Unwind@107f29d0

void Unwind_107f29d0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f29f0 Unwind@107f29f0

void Unwind_107f29f0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2a10 Unwind@107f2a10

void Unwind_107f2a10(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2a30 Unwind@107f2a30

void Unwind_107f2a30(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2a50 Unwind@107f2a50

void Unwind_107f2a50(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2a70 Unwind@107f2a70

void Unwind_107f2a70(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2a90 Unwind@107f2a90

void Unwind_107f2a90(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2ab0 Unwind@107f2ab0

void Unwind_107f2ab0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2ad0 Unwind@107f2ad0

void Unwind_107f2ad0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2af0 Unwind@107f2af0

void Unwind_107f2af0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2b10 Unwind@107f2b10

void Unwind_107f2b10(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2b30 Unwind@107f2b30

void Unwind_107f2b30(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2b50 Unwind@107f2b50

void Unwind_107f2b50(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2b70 Unwind@107f2b70

void Unwind_107f2b70(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2b90 Unwind@107f2b90

void Unwind_107f2b90(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2bb0 Unwind@107f2bb0

void Unwind_107f2bb0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2bd0 Unwind@107f2bd0

void Unwind_107f2bd0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2bf0 Unwind@107f2bf0

void Unwind_107f2bf0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2c10 Unwind@107f2c10

void Unwind_107f2c10(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2c30 Unwind@107f2c30

void Unwind_107f2c30(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2c50 Unwind@107f2c50

void Unwind_107f2c50(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2c70 Unwind@107f2c70

void Unwind_107f2c70(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2c90 Unwind@107f2c90

void Unwind_107f2c90(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2cb0 Unwind@107f2cb0

void Unwind_107f2cb0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2cd0 Unwind@107f2cd0

void Unwind_107f2cd0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2cf0 Unwind@107f2cf0

void Unwind_107f2cf0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2d10 Unwind@107f2d10

void Unwind_107f2d10(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2d30 Unwind@107f2d30

void Unwind_107f2d30(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2d50 Unwind@107f2d50

void Unwind_107f2d50(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2d70 Unwind@107f2d70

void Unwind_107f2d70(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2d90 Unwind@107f2d90

void Unwind_107f2d90(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2db0 Unwind@107f2db0

void Unwind_107f2db0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2dd0 Unwind@107f2dd0

void Unwind_107f2dd0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2df0 Unwind@107f2df0

void Unwind_107f2df0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2e10 Unwind@107f2e10

void Unwind_107f2e10(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2e30 Unwind@107f2e30

void Unwind_107f2e30(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2e50 Unwind@107f2e50

void Unwind_107f2e50(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2e70 Unwind@107f2e70

void Unwind_107f2e70(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2e90 Unwind@107f2e90

void Unwind_107f2e90(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2eb0 Unwind@107f2eb0

void Unwind_107f2eb0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2ed0 Unwind@107f2ed0

void Unwind_107f2ed0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2ef0 Unwind@107f2ef0

void Unwind_107f2ef0(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2f10 Unwind@107f2f10

void Unwind_107f2f10(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2f30 Unwind@107f2f30

void Unwind_107f2f30(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2f50 Unwind@107f2f50

void Unwind_107f2f50(void)

{
  int unaff_EBP;
  
  FNAbnormalStat::~FNAbnormalStat(*(FNAbnormalStat **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2f70 Unwind@107f2f70

void Unwind_107f2f70(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2f90 Unwind@107f2f90

void Unwind_107f2f90(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2fb0 Unwind@107f2fb0

void Unwind_107f2fb0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2fd0 Unwind@107f2fd0

void Unwind_107f2fd0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f2ff0 Unwind@107f2ff0

void Unwind_107f2ff0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3010 Unwind@107f3010

void Unwind_107f3010(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3030 Unwind@107f3030

void Unwind_107f3030(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3050 Unwind@107f3050

void Unwind_107f3050(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3070 Unwind@107f3070

void Unwind_107f3070(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3090 Unwind@107f3090

void Unwind_107f3090(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f30b0 Unwind@107f30b0

void Unwind_107f30b0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f30d0 Unwind@107f30d0

void Unwind_107f30d0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f30f0 Unwind@107f30f0

void Unwind_107f30f0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3110 Unwind@107f3110

void Unwind_107f3110(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3130 Unwind@107f3130

void Unwind_107f3130(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3150 Unwind@107f3150

void Unwind_107f3150(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3170 Unwind@107f3170

void Unwind_107f3170(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3190 Unwind@107f3190

void Unwind_107f3190(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f31b0 Unwind@107f31b0

void Unwind_107f31b0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f31d0 Unwind@107f31d0

void Unwind_107f31d0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f31f0 Unwind@107f31f0

void Unwind_107f31f0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3210 Unwind@107f3210

void Unwind_107f3210(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3230 Unwind@107f3230

void Unwind_107f3230(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3250 Unwind@107f3250

void Unwind_107f3250(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3270 Unwind@107f3270

void Unwind_107f3270(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3290 Unwind@107f3290

void Unwind_107f3290(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f32b0 Unwind@107f32b0

void Unwind_107f32b0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f32d0 Unwind@107f32d0

void Unwind_107f32d0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f32f0 Unwind@107f32f0

void Unwind_107f32f0(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3310 Unwind@107f3310

void Unwind_107f3310(void)

{
  int unaff_EBP;
  
  FNAppendixEffect::~FNAppendixEffect(*(FNAppendixEffect **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3330 Unwind@107f3330

void Unwind_107f3330(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 107f3350 Unwind@107f3350

void Unwind_107f3350(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3370 Unwind@107f3370

void Unwind_107f3370(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3390 Unwind@107f3390

void Unwind_107f3390(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f33b0 Unwind@107f33b0

void Unwind_107f33b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f33b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f33d0 Unwind@107f33d0

void Unwind_107f33d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f33d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f33f0 Unwind@107f33f0

void Unwind_107f33f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f33f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3410 Unwind@107f3410

void Unwind_107f3410(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3430 Unwind@107f3430

void Unwind_107f3430(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3450 Unwind@107f3450

void Unwind_107f3450(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3470 Unwind@107f3470

void Unwind_107f3470(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix(*(FMatrix **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f34a0 Unwind@107f34a0

void Unwind_107f34a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f34a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f34a9 Unwind@107f34a9

void Unwind_107f34a9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f34af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f34d0 Unwind@107f34d0

void Unwind_107f34d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f34d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f34d9 Unwind@107f34d9

void Unwind_107f34d9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f34df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3500 Unwind@107f3500

void Unwind_107f3500(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3509 Unwind@107f3509

void Unwind_107f3509(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f350f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3530 Unwind@107f3530

void Unwind_107f3530(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3550 Unwind@107f3550

void Unwind_107f3550(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3570 Unwind@107f3570

void Unwind_107f3570(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3590 Unwind@107f3590

void Unwind_107f3590(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f35b0 Unwind@107f35b0

void Unwind_107f35b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f35b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f35d0 Unwind@107f35d0

void Unwind_107f35d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f35d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f35f0 Unwind@107f35f0

void Unwind_107f35f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f35f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3610 Unwind@107f3610

void Unwind_107f3610(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3630 Unwind@107f3630

void Unwind_107f3630(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3639 Unwind@107f3639

void Unwind_107f3639(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f363f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3645 Unwind@107f3645

void Unwind_107f3645(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f364b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f3670 Unwind@107f3670

void Unwind_107f3670(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3679 Unwind@107f3679

void Unwind_107f3679(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f367f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3685 Unwind@107f3685

void Unwind_107f3685(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f368b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f36b0 Unwind@107f36b0

void Unwind_107f36b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f36b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f36b9 Unwind@107f36b9

void Unwind_107f36b9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f36bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f36c5 Unwind@107f36c5

void Unwind_107f36c5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f36cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f36f0 Unwind@107f36f0

void Unwind_107f36f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f36f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f36f9 Unwind@107f36f9

void Unwind_107f36f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f36ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3705 Unwind@107f3705

void Unwind_107f3705(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f370b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f3730 Unwind@107f3730

void Unwind_107f3730(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3739 Unwind@107f3739

void Unwind_107f3739(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f373f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3745 Unwind@107f3745

void Unwind_107f3745(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f374b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f3751 Unwind@107f3751

void Unwind_107f3751(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 107f3780 Unwind@107f3780

void Unwind_107f3780(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3789 Unwind@107f3789

void Unwind_107f3789(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f378f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3795 Unwind@107f3795

void Unwind_107f3795(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f379b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f37a1 Unwind@107f37a1

void Unwind_107f37a1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f37a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 107f37d0 Unwind@107f37d0

void Unwind_107f37d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f37d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f37f0 Unwind@107f37f0

void Unwind_107f37f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f37f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3810 Unwind@107f3810

void Unwind_107f3810(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3819 Unwind@107f3819

void Unwind_107f3819(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f381f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3840 Unwind@107f3840

void Unwind_107f3840(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3849 Unwind@107f3849

void Unwind_107f3849(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f384f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3870 Unwind@107f3870

void Unwind_107f3870(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3879 Unwind@107f3879

void Unwind_107f3879(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f387f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3885 Unwind@107f3885

void Unwind_107f3885(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f388b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f38b0 Unwind@107f38b0

void Unwind_107f38b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f38b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f38b9 Unwind@107f38b9

void Unwind_107f38b9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f38bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f38c5 Unwind@107f38c5

void Unwind_107f38c5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f38cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 107f38f0 Unwind@107f38f0

void Unwind_107f38f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f38f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f38f9 Unwind@107f38f9

void Unwind_107f38f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f38ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3920 Unwind@107f3920

void Unwind_107f3920(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3929 Unwind@107f3929

void Unwind_107f3929(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f392f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3950 Unwind@107f3950

void Unwind_107f3950(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3970 Unwind@107f3970

void Unwind_107f3970(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3990 Unwind@107f3990

void Unwind_107f3990(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f39b0 Unwind@107f39b0

void Unwind_107f39b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f39b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3a00 Unwind@107f3a00

void Unwind_107f3a00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3a20 Unwind@107f3a20

void Unwind_107f3a20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3a40 Unwind@107f3a40

void Unwind_107f3a40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3a49 Unwind@107f3a49

void Unwind_107f3a49(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 107f3a55 Unwind@107f3a55

void Unwind_107f3a55(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}


// ==== 107f3a80 Unwind@107f3a80

void Unwind_107f3a80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3a89 Unwind@107f3a89

void Unwind_107f3a89(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 107f3a95 Unwind@107f3a95

void Unwind_107f3a95(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}


// ==== 107f3ac0 Unwind@107f3ac0

void Unwind_107f3ac0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3ae0 Unwind@107f3ae0

void Unwind_107f3ae0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3b00 Unwind@107f3b00

void Unwind_107f3b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3b20 Unwind@107f3b20

void Unwind_107f3b20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3b40 Unwind@107f3b40

void Unwind_107f3b40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3b60 Unwind@107f3b60

void Unwind_107f3b60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3b80 Unwind@107f3b80

void Unwind_107f3b80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3ba0 Unwind@107f3ba0

void Unwind_107f3ba0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3bc0 Unwind@107f3bc0

void Unwind_107f3bc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3be0 Unwind@107f3be0

void Unwind_107f3be0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3c00 Unwind@107f3c00

void Unwind_107f3c00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3c20 Unwind@107f3c20

void Unwind_107f3c20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3c40 Unwind@107f3c40

void Unwind_107f3c40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit(*(FStringNoInit **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3c60 Unwind@107f3c60

void Unwind_107f3c60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit(*(FStringNoInit **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3c80 Unwind@107f3c80

void Unwind_107f3c80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FStringNoInit::~FStringNoInit(*(FStringNoInit **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3ca0 Unwind@107f3ca0

void Unwind_107f3ca0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3ca9 Unwind@107f3ca9

void Unwind_107f3ca9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3cd0 Unwind@107f3cd0

void Unwind_107f3cd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3cd9 Unwind@107f3cd9

void Unwind_107f3cd9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 107f3d00 Unwind@107f3d00

void Unwind_107f3d00(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3d20 Unwind@107f3d20

void Unwind_107f3d20(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3d40 Unwind@107f3d40

void Unwind_107f3d40(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3d60 Unwind@107f3d60

void Unwind_107f3d60(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3d80 Unwind@107f3d80

void Unwind_107f3d80(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3da0 Unwind@107f3da0

void Unwind_107f3da0(void)

{
  int unaff_EBP;
  
  UBitmapMaterial::~UBitmapMaterial(*(UBitmapMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3dc0 Unwind@107f3dc0

void Unwind_107f3dc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 107f3de0 Unwind@107f3de0

void Unwind_107f3de0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 107f3e00 Unwind@107f3e00

void Unwind_107f3e00(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3e08 Unwind@107f3e08

void Unwind_107f3e08(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x588));
  return;
}


// ==== 107f3e17 Unwind@107f3e17

void Unwind_107f3e17(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x5c8));
  return;
}


// ==== 107f3e40 Unwind@107f3e40

void Unwind_107f3e40(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3e48 Unwind@107f3e48

void Unwind_107f3e48(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3e50 Unwind@107f3e50

void Unwind_107f3e50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x588));
  return;
}


// ==== 107f3e5f Unwind@107f3e5f

void Unwind_107f3e5f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x5c8));
  return;
}


// ==== 107f3e90 Unwind@107f3e90

void Unwind_107f3e90(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3e98 Unwind@107f3e98

void Unwind_107f3e98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x588));
  return;
}


// ==== 107f3ea7 Unwind@107f3ea7

void Unwind_107f3ea7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x5c8));
  return;
}


// ==== 107f3ed0 Unwind@107f3ed0

void Unwind_107f3ed0(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3ef0 Unwind@107f3ef0

void Unwind_107f3ef0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3f10 Unwind@107f3f10

void Unwind_107f3f10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x107f3f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 107f3f30 Unwind@107f3f30

void Unwind_107f3f30(void)

{
  int unaff_EBP;
  
  URenderedMaterial::~URenderedMaterial(*(URenderedMaterial **)(unaff_EBP + -0x10));
  return;
}


// ==== 107f3f50 Unwind@107f3f50

void Unwind_107f3f50(void)

{
  int unaff_EBP;
  
  UMaterial::~UMaterial(*(UMaterial **)(unaff_EBP + -0x10));
  return;
}


