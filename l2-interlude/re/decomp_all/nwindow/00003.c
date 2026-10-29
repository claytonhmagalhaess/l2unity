// ==== 10056ff8 Catch@10056ff8

void Catch_10056ff8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005700c Catch@1005700c

void Catch_1005700c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRelativeSize::~NCRelativeSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057030 FUN_10057030

void FUN_10057030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


// ==== 10057096 Catch@10057096

void Catch_10057096(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100570aa Catch@100570aa

void Catch_100570aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRelativeSize::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100570d0 FUN_100570d0

bool FUN_100570d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_10009a20(param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (param_1 != 0xf) {
      if (param_1 == 0x102) {
        iVar1 = (**(code **)(*in_ECX + 0x194))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x100) {
        iVar1 = (**(code **)(*in_ECX + 0x198))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x101) {
        iVar1 = (**(code **)(*in_ECX + 0x19c))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x200) {
        iVar1 = (**(code **)(*in_ECX + 0x1a0))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x201) {
        iVar1 = (**(code **)(*in_ECX + 0x1a4))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x204) {
        iVar1 = (**(code **)(*in_ECX + 0x1ac))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x202) {
        iVar1 = (**(code **)(*in_ECX + 0x1a8))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x205) {
        iVar1 = (**(code **)(*in_ECX + 0x1b0))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x203) {
        iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x206) {
        iVar1 = (**(code **)(*in_ECX + 0x1c0))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 3) {
        iVar1 = (**(code **)(*in_ECX + 0x1b8))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x50e) {
        iVar1 = (**(code **)(*in_ECX + 0xa0))();
        return iVar1 != 0;
      }
      if (param_1 == 0x514) {
        iVar1 = (**(code **)(*in_ECX + 0x1b4))();
        return iVar1 != 0;
      }
      if (param_1 == 0x20a) {
        iVar1 = (**(code **)(*in_ECX + 0x1c4))(param_2,param_3);
        return iVar1 != 0;
      }
      if (param_1 == 0x50a) {
        if ((*(byte *)(in_ECX + 0x2b) & 2) != 0) {
          (**(code **)(*in_ECX + 400))(param_2);
        }
        return true;
      }
      if (param_1 == 0x501) {
        if (param_2 == 0x1f1f1f1f) {
          iVar1 = (**(code **)(*in_ECX + 0x1c8))(param_3);
          return iVar1 != 0;
        }
      }
      else {
        if (param_1 == 0x503) {
          iVar1 = (**(code **)(*in_ECX + 0x1d8))(param_2,param_3);
          return iVar1 != 0;
        }
        if (param_1 == 0x504) {
          iVar1 = (**(code **)(*in_ECX + 0x1dc))(param_2,param_3);
          return iVar1 != 0;
        }
        if (param_1 == 0x505) {
          iVar1 = (**(code **)(*in_ECX + 0x1e0))(param_2,param_3);
          return iVar1 != 0;
        }
        if (param_1 == 0x506) {
          iVar1 = (**(code **)(*in_ECX + 0x1e4))(param_2,param_3);
          return iVar1 != 0;
        }
        if (param_1 == 0x511) {
          iVar1 = (**(code **)(*in_ECX + 0x1cc))();
          return iVar1 != 0;
        }
        if (param_1 == 0x510) {
          iVar1 = (**(code **)(*in_ECX + 0xa4))();
          return iVar1 != 0;
        }
      }
      return false;
    }
    if ((*(byte *)(in_ECX + 0x2b) & 2) != 0) {
      (**(code **)(*in_ECX + 0x18c))(param_2);
    }
  }
  return true;
}


// ==== 10057430 FUN_10057430

UObject * FUN_10057430(FString *param_1,int param_2)

{
  ushort *puVar1;
  UClass *this;
  int iVar2;
  UObject *this_00;
  int in_ECX;
  int *piVar3;
  uint local_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e1ad2;
  local_10 = ExceptionList;
  local_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_44;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*(param_1);
  FString::Printf((ushort *)local_34,&DAT_10243b00,puVar1);
  local_8._0_1_ = 1;
  piVar3 = *(int **)(in_ECX + 0x48);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
      ExceptionList = local_10;
      return (UObject *)0x0;
    }
    this_00 = *(UObject **)(*piVar3 + 4);
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8 = CONCAT31(local_8._1_3_,2);
    this = UObject::GetClass(this_00);
    if (this != (UClass *)0x0) {
      puVar1 = UObject::GetName((UObject *)this);
      FString::operator=(local_28,puVar1);
    }
    iVar2 = FString::operator==(local_28,local_34);
    if (iVar2 != 0) break;
    if (param_2 != 0) {
      this_00 = (UObject *)FUN_10057430(param_1,1);
      if (this_00 != (UObject *)0x0) break;
    }
    local_8._0_1_ = 1;
    FString::~FString(local_28);
    piVar3 = (int *)piVar3[2];
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return this_00;
}


// ==== 1005755c Catch@1005755c

void Catch_1005755c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057570 Catch@10057570

void Catch_10057570(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetChildWindowWithClassName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057590 FUN_10057590

FString * FUN_10057590(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1b0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(FString *)(in_ECX + 0x180));
  ExceptionList = local_10;
  return param_1;
}


// ==== 100575f5 Catch@100575f5

void Catch_100575f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10057609 Catch@10057609

void Catch_10057609(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetWindowName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057630 FUN_10057630

undefined4 FUN_10057630(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18c);
}


// ==== 1005767a Catch@1005767a

void Catch_1005767a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005768e Catch@1005768e

void Catch_1005768e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsXMLWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100576b0 FUN_100576b0

void FUN_100576b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18c) = param_1;
  return;
}


// ==== 10057706 Catch@10057706

void Catch_10057706(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005771a Catch@1005771a

void Catch_1005771a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetXMLWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057740 FUN_10057740

void FUN_10057740(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1b70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 0x180),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1005779d Catch@1005779d

void Catch_1005779d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100577b1 Catch@100577b1

void Catch_100577b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100577d0 FUN_100577d0

void FUN_100577d0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1b90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DAT_1036c678 = DAT_1036c678 + 1;
  *(int *)(in_ECX + 0xf8) = DAT_1036c678;
  *(int *)(in_ECX + 0xfc) = param_1;
  if (param_1 != 0) {
    FUN_1016e770(in_ECX);
  }
  *(int *)(in_ECX + 0x100) = param_2;
  if (param_2 != 0) {
    FUN_1016e810(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10057864 Catch@10057864

void Catch_10057864(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057878 Catch@10057878

void Catch_10057878(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetSaveWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100578a0 FUN_100578a0

undefined4 FUN_100578a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xf8);
}


// ==== 100578ea Catch@100578ea

void Catch_100578ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100578fe Catch@100578fe

void Catch_100578fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetSaveWndID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057920 FUN_10057920

undefined4 FUN_10057920(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xfc);
}


// ==== 1005796a Catch@1005796a

void Catch_1005796a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005797e Catch@1005797e

void Catch_1005797e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetSavePosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100579a0 FUN_100579a0

undefined4 FUN_100579a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x100);
}


// ==== 100579ea Catch@100579ea

void Catch_100579ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100579fe Catch@100579fe

void Catch_100579fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetSaveSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057a20 FUN_10057a20

undefined4 FUN_10057a20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xd8);
}


// ==== 10057a6a Catch@10057a6a

void Catch_10057a6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057a7e Catch@10057a7e

void Catch_10057a7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetNextOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057aa0 FUN_10057aa0

undefined4 FUN_10057aa0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xdc);
}


// ==== 10057aea Catch@10057aea

void Catch_10057aea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057afe Catch@10057afe

void Catch_10057afe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetPreOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057b20 FUN_10057b20

void FUN_10057b20(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x54) = param_1;
  return;
}


// ==== 10057b73 Catch@10057b73

void Catch_10057b73(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057b87 Catch@10057b87

void Catch_10057b87(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057bb0 FUN_10057bb0

void FUN_10057bb0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x58) = param_1;
  return;
}


// ==== 10057c03 Catch@10057c03

void Catch_10057c03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057c17 Catch@10057c17

void Catch_10057c17(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetFrameDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057c40 FUN_10057c40

void FUN_10057c40(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5c) = param_1;
  return;
}


// ==== 10057c93 Catch@10057c93

void Catch_10057c93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057ca7 Catch@10057ca7

void Catch_10057ca7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetResizeFrameDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057cd0 FUN_10057cd0

void FUN_10057cd0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x74) = param_1;
  return;
}


// ==== 10057d23 Catch@10057d23

void Catch_10057d23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057d37 Catch@10057d37

void Catch_10057d37(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetResizeMaxValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057d60 FUN_10057d60

void FUN_10057d60(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1cd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1001b620(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10057dc0 Catch@10057dc0

void Catch_10057dc0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057dd4 Catch@10057dd4

void Catch_10057dd4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::CreateExpandBtn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057e00 FUN_10057e00

undefined4 FUN_10057e00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x54);
}


// ==== 10057e47 Catch@10057e47

void Catch_10057e47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057e5b Catch@10057e5b

void Catch_10057e5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057e80 FUN_10057e80

undefined4 FUN_10057e80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x58);
}


// ==== 10057ec7 Catch@10057ec7

void Catch_10057ec7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057edb Catch@10057edb

void Catch_10057edb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetFrameDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057f00 FUN_10057f00

undefined4 FUN_10057f00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5c);
}


// ==== 10057f47 Catch@10057f47

void Catch_10057f47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057f5b Catch@10057f5b

void Catch_10057f5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetResizeFrameDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10057f80 FUN_10057f80

void FUN_10057f80(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x60);
  param_1[1] = *(undefined4 *)(in_ECX + 100);
  param_1[2] = *(undefined4 *)(in_ECX + 0x68);
  param_1[3] = *(undefined4 *)(in_ECX + 0x6c);
  return;
}


// ==== 10057fe0 Catch@10057fe0

void Catch_10057fe0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10057ff4 Catch@10057ff4

void Catch_10057ff4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetResizeFrameRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058020 FUN_10058020

undefined4 FUN_10058020(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xb8);
}


// ==== 1005806a Catch@1005806a

void Catch_1005806a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005807e Catch@1005807e

void Catch_1005807e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100580a0 FUN_100580a0

undefined4 FUN_100580a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 400);
}


// ==== 100580ea Catch@100580ea

void Catch_100580ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100580fe Catch@100580fe

void Catch_100580fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058120 FUN_10058120

undefined4 FUN_10058120(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xd4);
}


// ==== 1005816a Catch@1005816a

void Catch_1005816a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005817e Catch@1005817e

void Catch_1005817e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetTooltip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100581a0 FUN_100581a0

void FUN_100581a0(FString *param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xd4) == 0) {
    appFailAssert("m_pTooltip",".\\Src\\NWnd.cpp",0x2c3);
  }
  FUN_10054cc0();
  FString::operator=((FString *)(in_ECX + 0x164),param_1);
  iVar1 = FString::operator==((FString *)(in_ECX + 0x164),(ushort *)&DAT_1022f9f8);
  if (iVar1 == 0) {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x20;
  }
  else {
    *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) & 0xffffffdf;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10058251 Catch@10058251

void Catch_10058251(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058265 Catch@10058265

void Catch_10058265(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetTooltipType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058290 FUN_10058290

void FUN_10058290(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1df0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xd4) == 0) {
    appFailAssert("m_pTooltip",".\\Src\\NWnd.cpp",0x2d4);
  }
  FUN_10054cc0();
  *(undefined4 *)(in_ECX + 0x170) = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 10058317 Catch@10058317

void Catch_10058317(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005832b Catch@1005832b

void Catch_1005832b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetTooltipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058350 FUN_10058350

void FUN_10058350(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1e19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(int *)(in_ECX + 0xd4) == 0) {
    appFailAssert("m_pTooltip",".\\Src\\NWnd.cpp",0x2e1);
  }
  FUN_10054cc0();
  FString::operator=((FString *)(in_ECX + 0x174),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100583eb Catch@100583eb

void Catch_100583eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100583ff Catch@100583ff

void Catch_100583ff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetTooltipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058420 FUN_10058420

FString * FUN_10058420(FString *param_1)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1e5a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(int *)(in_ECX + 0x170) < 1) {
    FString::FString(param_1,(FString *)(in_ECX + 0x174));
  }
  else {
    puVar1 = FString::operator*((FString *)
                                (GL2GameData_exref + *(int *)(in_ECX + 0x170) * 0xc + 0x6a8dc));
    FString::FString(param_1,puVar1);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100584b3 Catch@100584b3

void Catch_100584b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100584c7 Catch@100584c7

void Catch_100584c7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetTooltipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100584f0 FUN_100584f0

void FUN_100584f0(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_1 != 0) {
    *(int *)(in_ECX + 0xd8) = param_1;
  }
  if (param_2 != 0) {
    *(int *)(in_ECX + 0xdc) = param_2;
  }
  return;
}


// ==== 10058557 Catch@10058557

void Catch_10058557(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005856b Catch@1005856b

void Catch_1005856b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetTabOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058590 FUN_10058590

void FUN_10058590(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1ea0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 0xe0),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100585ed Catch@100585ed

void Catch_100585ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058601 Catch@10058601

void Catch_10058601(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetTabPreOrderWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058620 FUN_10058620

void FUN_10058620(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 0xec),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1005867d Catch@1005867d

void Catch_1005867d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058691 Catch@10058691

void Catch_10058691(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetTabPostOrderWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100586b0 FUN_100586b0

void FUN_100586b0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(**(int **)(*piVar1 + 4) + 0x118))(param_1);
  }
  return;
}


// ==== 100586e0 FUN_100586e0

uint FUN_100586e0(void)

{
  uint uVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1ee0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = (**(code **)(*in_ECX + 0x84))();
  ExceptionList = local_10;
  return uVar1 & 8;
}


// ==== 10058731 Catch@10058731

void Catch_10058731(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058745 Catch@10058745

void Catch_10058745(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsPassThrough");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058770 FUN_10058770

void FUN_10058770(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x80);
  param_1[1] = *(undefined4 *)(in_ECX + 0x84);
  param_1[3] = *(undefined4 *)(in_ECX + 0x8c);
  param_1[2] = *(undefined4 *)(in_ECX + 0x88);
  return;
}


// ==== 100587e5 Catch@100587e5

void Catch_100587e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100587f9 Catch@100587f9

void Catch_100587f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetWindowRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058820 FUN_10058820

undefined4 FUN_10058820(void)

{
  int in_ECX;
  undefined1 local_10 [12];
  
  return CONCAT31((int3)((uint)local_10 >> 8),*(undefined1 *)(in_ECX + 0x78));
}


// ==== 10058867 Catch@10058867

void Catch_10058867(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005887b Catch@1005887b

void Catch_1005887b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100588a0 FUN_100588a0

undefined4 FUN_100588a0(int param_1)

{
  void **ppvVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1f40;
  local_10 = ExceptionList;
  local_8 = 0;
  piVar3 = *(int **)(in_ECX + 0x48);
  if (piVar3 != (int *)0x0) {
    ppvVar1 = &local_10;
    if (*piVar3 == param_1) {
      return 1;
    }
    for (; ExceptionList = ppvVar1, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == param_1) {
        ExceptionList = local_10;
        return 1;
      }
      uVar2 = (**(code **)(**(int **)(*piVar3 + 4) + 0x84))();
      if ((uVar2 & 2) != 0) {
        ExceptionList = local_10;
        return 0;
      }
      ppvVar1 = ExceptionList;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10058930 Catch@10058930

void Catch_10058930(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058944 Catch@10058944

void Catch_10058944(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsChildHead");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058970 FUN_10058970

void FUN_10058970(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1f60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != **(int **)(in_ECX + 0x48)) {
    for (piVar3 = (int *)(*(int **)(in_ECX + 0x48))[2]; piVar3 != (int *)0x0;
        piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == param_1) {
        if (piVar3[2] == 0) {
          iVar1 = piVar3[1];
          *(int *)(in_ECX + 0x4c) = iVar1;
          *(undefined4 *)(iVar1 + 8) = 0;
        }
        else {
          *(int *)(piVar3[2] + 4) = piVar3[1];
          *(int *)(piVar3[1] + 8) = piVar3[2];
        }
        uVar2 = (**(code **)(**(int **)(*piVar3 + 4) + 0x84))();
        if (((uVar2 & 0x800000) == 0) &&
           (uVar2 = (**(code **)(**(int **)(**(int **)(in_ECX + 0x48) + 4) + 0x84))(),
           (uVar2 & 0x800000) != 0)) {
          piVar4 = *(int **)(*(int *)(in_ECX + 0x48) + 8);
          goto LAB_10058a22;
        }
        *(int **)(*(int *)(in_ECX + 0x48) + 4) = piVar3;
        piVar3[2] = *(int *)(in_ECX + 0x48);
        *(int **)(in_ECX + 0x48) = piVar3;
        piVar3[1] = 0;
        break;
      }
    }
  }
LAB_10058a52:
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) &&
     (uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x84))(), (uVar2 & 0x1000000) == 0)) {
    FUN_10058970(*(undefined4 *)(in_ECX + 0xb8));
  }
  ExceptionList = local_10;
  return;
LAB_10058a22:
  if (piVar4 == (int *)0x0) goto code_r0x10058ab4;
  uVar2 = (**(code **)(**(int **)(*piVar4 + 4) + 0x84))();
  if ((uVar2 & 0x800000) == 0) {
    *(int **)(piVar4[1] + 8) = piVar3;
    piVar3[1] = piVar4[1];
    piVar4[1] = (int)piVar3;
    piVar3[2] = (int)piVar4;
    goto LAB_10058a52;
  }
  piVar4 = (int *)piVar4[2];
  goto LAB_10058a22;
code_r0x10058ab4:
  *(int **)(*(int *)(in_ECX + 0x4c) + 8) = piVar3;
  piVar3[1] = *(int *)(in_ECX + 0x4c);
  *(int **)(in_ECX + 0x4c) = piVar3;
  piVar3[2] = 0;
  goto LAB_10058a52;
}


// ==== 10058aeb Catch@10058aeb

void Catch_10058aeb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058aff Catch@10058aff

void Catch_10058aff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetHeadWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058b20 FUN_10058b20

void FUN_10058b20(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  if (param_1 != *piVar1) {
    do {
      piVar1 = (int *)piVar1[2];
      if (piVar1 == (int *)0x0) {
        return;
      }
    } while (*piVar1 != param_1);
    if (piVar1[1] != 0) {
      *(int *)(piVar1[1] + 8) = piVar1[2];
    }
    if (piVar1[2] != 0) {
      *(int *)(piVar1[2] + 4) = piVar1[1];
    }
    *(int **)(*(int *)(in_ECX + 0x48) + 4) = piVar1;
    piVar1[2] = *(int *)(in_ECX + 0x48);
    *(int **)(in_ECX + 0x48) = piVar1;
    piVar1[1] = 0;
  }
  return;
}


// ==== 10058bb6 Catch@10058bb6

void Catch_10058bb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058bca Catch@10058bca

void Catch_10058bca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ForceSetHeadWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058bf0 FUN_10058bf0

undefined4 FUN_10058bf0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0xb8) + 4);
  if (((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x88))(), iVar2 == 0)) ||
     (iVar2 = (**(code **)(*piVar1 + 0xfc))(1), iVar2 == 0)) {
    iVar2 = piVar1[0x12];
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = FUN_10058bf0();
      if (iVar3 != 0) break;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  else {
    (**(code **)(*piVar1 + 0x78))();
  }
  return 1;
}


// ==== 10058c60 FUN_10058c60

void FUN_10058c60(void)

{
  int in_ECX;
  
  if (DAT_1036c674 == *(int *)(in_ECX + 0xb8)) {
    DAT_1036c674 = 0;
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  return;
}


// ==== 10058c80 FUN_10058c80

void FUN_10058c80(uint param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1fa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x80))(in_ECX[0x2b] | param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10058ce1 Catch@10058ce1

void Catch_10058ce1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058cf5 Catch@10058cf5

void Catch_10058cf5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::AddWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058d20 FUN_10058d20

void FUN_10058d20(uint param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1fc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x80))(in_ECX[0x2b] & ~param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10058d85 Catch@10058d85

void Catch_10058d85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058d99 Catch@10058d99

void Catch_10058d99(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::RemoveWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058dc0 FUN_10058dc0

void FUN_10058dc0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1fe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 < '\0') {
    iVar1 = FUN_10057e80();
    if (iVar1 == 0) {
      FUN_10057bb0(3);
    }
    iVar1 = FUN_10057e00();
    if (iVar1 == -1) {
      FUN_10057b20(0);
    }
  }
  in_ECX[0x2b] = param_1;
  if (in_ECX[0x2e] != 0) {
    if (((param_1 & 0x1000) == 0) || (iVar1 = (**(code **)(*in_ECX + 0xfc))(0), iVar1 == 0)) {
      iVar1 = in_ECX[0x2e];
      pcVar2 = *(code **)(**(int **)(iVar1 + 8) + 0x8c);
    }
    else {
      iVar1 = in_ECX[0x2e];
      pcVar2 = *(code **)(**(int **)(iVar1 + 8) + 0x88);
    }
    (*pcVar2)(iVar1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10058e8d Catch@10058e8d

void Catch_10058e8d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058ea1 Catch@10058ea1

void Catch_10058ea1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058ec0 FUN_10058ec0

void FUN_10058ec0(int param_1,int param_2,undefined4 param_3)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2000;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x148))(param_1 - in_ECX[0x20],param_2 - in_ECX[0x21],param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10058f34 Catch@10058f34

void Catch_10058f34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058f48 Catch@10058f48

void Catch_10058f48(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MoveWindowAbs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10058f70 FUN_10058f70

undefined4 FUN_10058f70(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2020;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10058020();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(iVar1 + 0xc) + 4);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10058fdd Catch@10058fdd

void Catch_10058fdd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10058ff1 Catch@10058ff1

void Catch_10058ff1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetParentWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059010 FUN_10059010

void FUN_10059010(float param_1,float param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2040;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = (undefined4)(longlong)ROUND(param_2);
  uVar1 = local_1c;
  local_1c = (undefined4)(longlong)ROUND(param_1);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x1f8))(local_1c,uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 100590ad Catch@100590ad

void Catch_100590ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100590c1 Catch@100590c1

void Catch_100590c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100590e0 FUN_100590e0

void FUN_100590e0(byte param_1)

{
  FUN_10056fa0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10059110 FUN_10059110

undefined4 FUN_10059110(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 <= param_1) {
    iVar1 = FUN_101c19e0();
    if (param_1 <= iVar1) {
      if (param_4 <= param_2) {
        iVar1 = FUN_101c19e0();
        if (param_2 <= iVar1 + param_4) {
          return 1;
        }
      }
    }
  }
  return 0;
}


// ==== 10059160 FUN_10059160

void FUN_10059160(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2060;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x104))
            (param_1,param_2,in_ECX[0x20],in_ECX[0x21],in_ECX[0x22],in_ECX[0x23]);
  ExceptionList = local_10;
  return;
}


// ==== 100591e0 Catch@100591e0

void Catch_100591e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100591f4 Catch@100591f4

void Catch_100591f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsInclude");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059220 FUN_10059220

undefined4 FUN_10059220(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2080;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0xb8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    ExceptionList = &local_10;
    uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x94))(param_1,param_2,iVar1);
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}


// ==== 100592a2 Catch@100592a2

void Catch_100592a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100592b6 Catch@100592b6

void Catch_100592b6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsTopWindowAt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100592e0 FUN_100592e0

undefined4 FUN_100592e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 0x2b) & 2) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*in_ECX + 0x104))
                    (param_1,param_2,in_ECX[0x20],in_ECX[0x21],in_ECX[0x22],in_ECX[0x23]);
  return uVar1;
}


// ==== 10059330 FUN_10059330

void FUN_10059330(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1005933e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xb8) + 8) + 0x70))();
  return;
}


// ==== 10059340 FUN_10059340

undefined4 FUN_10059340(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  int iStack_8;
  
  if ((in_ECX[0x2b] & 0x8000000U) == 0) {
    return 1;
  }
  iVar4 = in_ECX[0x1c];
  if (iVar4 < 0) {
    return 1;
  }
  iVar2 = in_ECX[0x1d];
  if (iVar2 < 1) {
    return 1;
  }
  if ((param_1 < 1) || (iVar2 <= iVar4)) {
    if (-1 < param_1) {
      return 1;
    }
    if (iVar4 < 1) {
      return 1;
    }
    iVar4 = iVar4 + param_1;
    in_ECX[0x1c] = iVar4;
    if (iVar4 < 0) {
      param_1 = param_1 - iVar4;
      in_ECX[0x1c] = 0;
    }
  }
  else {
    iVar4 = iVar4 + param_1;
    in_ECX[0x1c] = iVar4;
    if (iVar2 < iVar4) {
      param_1 = (iVar2 - iVar4) + param_1;
      in_ECX[0x1c] = iVar2;
    }
  }
  iVar4 = in_ECX[0x17];
  if (iVar4 == 3) {
    (**(code **)(*in_ECX + 0x148))(0,-param_1,0);
    (**(code **)(*in_ECX + 0x128))(in_ECX[0x22],(float)in_ECX[0x23] + (float)iStack_8);
    uVar5 = (undefined4)(longlong)ROUND((float)in_ECX[0x1b]);
    uVar1 = (undefined4)(longlong)ROUND((float)in_ECX[0x1a]);
LAB_100596b8:
    iVar4 = *(int *)in_ECX[0x31];
    iVar2 = in_ECX[0x19];
  }
  else {
    if (iVar4 != 4) {
      if (iVar4 == 2) {
        iVar4 = in_ECX[0x23];
        fVar6 = (float)param_1 + (float)in_ECX[0x22];
        (**(code **)(*in_ECX + 0x128))();
        (**(code **)(*in_ECX + 0xbc))(0,0,0,fVar6,iVar4);
        iVar4 = *(int *)in_ECX[0x31];
        uVar5 = (undefined4)(longlong)ROUND((float)in_ECX[0x1b]);
        uVar1 = (undefined4)(longlong)ROUND((float)in_ECX[0x1a]);
        iVar2 = in_ECX[0x19];
        iVar3 = (int)(longlong)ROUND((float)in_ECX[0x22] - (float)in_ECX[0x1a]);
        goto LAB_100596c8;
      }
      if (iVar4 != 1) {
        return 1;
      }
      (**(code **)(*in_ECX + 0x148))(-param_1,0,0);
      (**(code **)(*in_ECX + 0x128))((float)in_ECX[0x22] + (float)iStack_8,in_ECX[0x23]);
      uVar5 = (undefined4)(longlong)ROUND((float)in_ECX[0x1b]);
      uVar1 = (undefined4)(longlong)ROUND((float)in_ECX[0x1a]);
      goto LAB_100596b8;
    }
    fVar6 = (float)param_1 + (float)in_ECX[0x23];
    iVar4 = in_ECX[0x22];
    (**(code **)(*in_ECX + 0x128))();
    (**(code **)(*in_ECX + 0xbc))(0,0,0,iVar4,fVar6);
    iVar4 = *(int *)in_ECX[0x31];
    uVar5 = (undefined4)(longlong)ROUND((float)in_ECX[0x1b]);
    uVar1 = (undefined4)(longlong)ROUND((float)in_ECX[0x1a]);
    iVar2 = (int)(longlong)ROUND((float)in_ECX[0x23] - (float)in_ECX[0x1b]);
  }
  iVar3 = in_ECX[0x18];
LAB_100596c8:
  (**(code **)(iVar4 + 0xc0))(iVar3,iVar2,uVar1,uVar5,0,0,3);
  return 1;
}


// ==== 100596e0 FUN_100596e0

undefined4 FUN_100596e0(void)

{
  return 1;
}


// ==== 10059729 Catch@10059729

void Catch_10059729(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005973d Catch@1005973d

void Catch_1005973d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnGotFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059760 FUN_10059760

undefined4 FUN_10059760(void)

{
  return 1;
}


// ==== 100597a9 Catch@100597a9

void Catch_100597a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100597bd Catch@100597bd

void Catch_100597bd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnLostFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100597e0 FUN_100597e0

undefined4 FUN_100597e0(void)

{
  return 1;
}


// ==== 10059829 Catch@10059829

void Catch_10059829(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005983d Catch@1005983d

void Catch_1005983d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnLanguageChanged");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059860 FUN_10059860

void FUN_10059860(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014ed50(6);
  if ((in_ECX[0x20] < 0) && (in_ECX[0x14] != 0)) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x14c))(-in_ECX[0x20],0);
  }
  (**(code **)(*in_ECX + 0x13c))();
  if (in_ECX[0x14] != 0) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x138))();
    (**(code **)(*(int *)in_ECX[0x14] + 0x78))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10059905 Catch@10059905

void Catch_10059905(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059919 Catch@10059919

void Catch_10059919(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MinimizeWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059940 FUN_10059940

void FUN_10059940(byte param_1)

{
  FUN_10055110();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10059970 FUN_10059970

undefined4 FUN_10059970(void)

{
  return 1;
}


// ==== 100599b9 Catch@100599b9

void Catch_100599b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100599cd Catch@100599cd

void Catch_100599cd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnEnterState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100599f0 FUN_100599f0

undefined4 FUN_100599f0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x148))((int)(short)param_2,(int)(short)((uint)param_2 >> 0x10),0);
  ExceptionList = local_10;
  return 1;
}


// ==== 10059a5b Catch@10059a5b

void Catch_10059a5b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059a6f Catch@10059a6f

void Catch_10059a6f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059a90 FUN_10059a90

void FUN_10059a90(short *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((*(int *)(in_ECX + 0xc0) != 0) && (param_1 != (short *)0x0)) && (*param_1 != 0)) {
    FUN_1001aea0(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10059afa Catch@10059afa

void Catch_10059afa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059b0e Catch@10059b0e

void Catch_10059b0e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059b30 FUN_10059b30

void FUN_10059b30(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2180;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xc0) != 0) {
    FUN_1001af50(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10059b90 Catch@10059b90

void Catch_10059b90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059ba4 Catch@10059ba4

void Catch_10059ba4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059bd0 FUN_10059bd0

void FUN_10059bd0(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0xb4) = *(uint *)(in_ECX + 0xb4) | param_1;
  return;
}


// ==== 10059c26 Catch@10059c26

void Catch_10059c26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059c3a Catch@10059c3a

void Catch_10059c3a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetNWndFlags");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059c60 FUN_10059c60

void FUN_10059c60(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0xb4) = *(uint *)(in_ECX + 0xb4) & ~param_1;
  return;
}


// ==== 10059cb8 Catch@10059cb8

void Catch_10059cb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059ccc Catch@10059ccc

void Catch_10059ccc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ClearNWndFlags");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059cf0 FUN_10059cf0

undefined4 FUN_10059cf0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xb4);
}


// ==== 10059d3a Catch@10059d3a

void Catch_10059d3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059d4e Catch@10059d4e

void Catch_10059d4e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetNWndFlags");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059d70 FUN_10059d70

void FUN_10059d70(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xb8) + 8) + 0x78))(param_1);
  *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 0x100;
  ExceptionList = local_10;
  return;
}


// ==== 10059ddd Catch@10059ddd

void Catch_10059ddd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059df1 Catch@10059df1

void Catch_10059df1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::AddModalWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059e10 FUN_10059e10

void FUN_10059e10(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xb8) + 8) + 0x7c))(param_1);
  *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) & 0xfffffeff;
  ExceptionList = local_10;
  return;
}


// ==== 10059e7d Catch@10059e7d

void Catch_10059e7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059e91 Catch@10059e91

void Catch_10059e91(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::DeleteModalWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059eb0 FUN_10059eb0

undefined4 FUN_10059eb0(void)

{
  return 0;
}


// ==== 10059ef8 Catch@10059ef8

void Catch_10059ef8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059f0c Catch@10059f0c

void Catch_10059f0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059f30 FUN_10059f30

void FUN_10059f30(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xb8) + 8) + 0x80))(*(int *)(in_ECX + 0xb8));
  ExceptionList = local_10;
  return;
}


// ==== 10059f8f Catch@10059f8f

void Catch_10059f8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10059fa3 Catch@10059fa3

void Catch_10059fa3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetCapture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10059fc0 FUN_10059fc0

void FUN_10059fc0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xb8) + 8) + 0x84))(*(int *)(in_ECX + 0xb8));
  ExceptionList = local_10;
  return;
}


// ==== 1005a01f Catch@1005a01f

void Catch_1005a01f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a033 Catch@1005a033

void Catch_1005a033(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ReleaseCapture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a050 FUN_1005a050

undefined4 FUN_1005a050(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e22a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0xffdcdcdc;
  iVar1 = appStrlen(param_1);
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    if (param_1[iVar3] == 0x2c) {
      iVar4 = iVar4 + 1;
    }
  }
  if (4 < iVar1 - iVar4) {
    uVar2 = (iVar1 - iVar4) - 2U & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar2) {
    case 0:
      uVar5 = 0xffff80ff;
      break;
    case 1:
      uVar5 = 0xffffff00;
      break;
    case 2:
      uVar5 = 0xff00ff00;
      break;
    case 3:
      uVar5 = 0xff00ffff;
    }
  }
  ExceptionList = local_10;
  return uVar5;
}


// ==== 1005a10c Catch@1005a10c

void Catch_1005a10c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1005a120 Catch@1005a120

void Catch_1005a120(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetNumericColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a150 FUN_1005a150

undefined4 FUN_1005a150(undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e22c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 0:
    uVar1 = 3;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 0;
    break;
  default:
    appFailAssert("FALSE",".\\Src\\NWnd.cpp",0xe9a);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1005a1db Catch@1005a1db

void Catch_1005a1db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a1ef Catch@1005a1ef

void Catch_1005a1ef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetOppStickDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a220 FUN_1005a220

uint FUN_1005a220(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0xac) & 0x1000;
}


// ==== 1005a26f Catch@1005a26f

void Catch_1005a26f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a283 Catch@1005a283

void Catch_1005a283(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsStuckable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a2a0 FUN_1005a2a0

void FUN_1005a2a0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x154);
  param_1[1] = *(undefined4 *)(in_ECX + 0x158);
  return;
}


// ==== 1005a2fa Catch@1005a2fa

void Catch_1005a2fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a30e Catch@1005a30e

void Catch_1005a30e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetAnchorOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a330 FUN_1005a330

undefined4 FUN_1005a330(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x13c) == 0) {
    return 0;
  }
  return 1;
}


// ==== 1005a396 Catch@1005a396

void Catch_1005a396(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a3aa Catch@1005a3aa

void Catch_1005a3aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsAnchored");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a3d0 FUN_1005a3d0

undefined4 FUN_1005a3d0(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0xac) & 0x400000) != 0) {
    return 1;
  }
  return 0;
}


// ==== 1005a439 Catch@1005a439

void Catch_1005a439(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a44d Catch@1005a44d

void Catch_1005a44d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsDragable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a470 FUN_1005a470

int FUN_1005a470(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = 0;
  if (*(int *)(in_ECX + 0xb8) == 0) goto LAB_1005a4c6;
  iVar3 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if (iVar3 == 0) goto LAB_1005a4c6;
  iVar3 = *(int *)(iVar3 + 4);
  if (iVar3 == 0) goto LAB_1005a4c6;
  while( true ) {
    iVar2 = iVar3;
LAB_1005a4c6:
    iVar3 = 0;
    if ((iVar2 == 0) || (iVar1 = FUN_1005a3d0(), iVar3 = iVar2, iVar1 != 0)) break;
    iVar2 = FUN_10058020();
    if (((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 0)) ||
       (iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 4), iVar3 == 0)) {
      iVar3 = 0;
    }
  }
  ExceptionList = local_10;
  return iVar3;
}


// ==== 1005a509 Catch@1005a509

void Catch_1005a509(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1005a51d Catch@1005a51d

void Catch_1005a51d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetDragableParentWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a540 FUN_1005a540

undefined4 FUN_1005a540(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xac);
}


// ==== 1005a58a Catch@1005a58a

void Catch_1005a58a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a59e Catch@1005a59e

void Catch_1005a59e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetNWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a5c0 FUN_1005a5c0

undefined4 FUN_1005a5c0(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e23a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1005a330();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0xbc))(0,0,0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005a62c Catch@1005a62c

void Catch_1005a62c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a640 Catch@1005a640

void Catch_1005a640(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ApplyAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a660 FUN_1005a660

int FUN_1005a660(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x150);
  if ((iVar1 == 0) &&
     (((*(int *)(in_ECX + 0xb8) == 0 ||
       (iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc), iVar1 == 0)) ||
      (iVar1 = *(int *)(iVar1 + 4), iVar1 == 0)))) {
    iVar1 = 0;
  }
  return iVar1;
}


// ==== 1005a6c8 Catch@1005a6c8

void Catch_1005a6c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a6dc Catch@1005a6dc

void Catch_1005a6dc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetAnchorTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a700 FUN_1005a700

undefined4 FUN_1005a700(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e23e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 == (undefined4 *)0x0) {
code_r0x1005a73f:
    return 0;
  }
  switch(param_1) {
  case 1:
    *param_2 = *(undefined4 *)(in_ECX + 0x80);
    param_2[1] = *(undefined4 *)(in_ECX + 0x84);
    break;
  case 2:
    ExceptionList = &local_10;
    uVar1 = FUN_101c19e0();
    *param_2 = uVar1;
    param_2[1] = *(undefined4 *)(in_ECX + 0x84);
    break;
  case 3:
    ExceptionList = &local_10;
    uVar1 = FUN_101c19e0();
    *param_2 = uVar1;
    param_2[1] = *(undefined4 *)(in_ECX + 0x84);
    break;
  case 4:
    ExceptionList = &local_10;
    *param_2 = *(undefined4 *)(in_ECX + 0x80);
    goto LAB_1005a7d4;
  case 5:
    ExceptionList = &local_10;
    uVar1 = FUN_101c19e0();
    *param_2 = uVar1;
    uVar1 = FUN_101c19e0();
    param_2[1] = uVar1;
    break;
  case 6:
    ExceptionList = &local_10;
    uVar1 = FUN_101c19e0();
    *param_2 = uVar1;
LAB_1005a7d4:
    uVar1 = FUN_101c19e0();
    param_2[1] = uVar1;
    break;
  case 7:
    ExceptionList = &local_10;
    *param_2 = *(undefined4 *)(in_ECX + 0x80);
    goto LAB_1005a87b;
  case 8:
    goto LAB_1005a874;
  case 9:
LAB_1005a874:
    ExceptionList = &local_10;
    uVar1 = FUN_101c19e0();
    *param_2 = uVar1;
LAB_1005a87b:
    uVar1 = FUN_101c19e0();
    param_2[1] = uVar1;
    break;
  default:
    goto code_r0x1005a73f;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005a899 Catch@1005a899

void Catch_1005a899(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a8ad Catch@1005a8ad

void Catch_1005a8ad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetAnchorPoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a8f0 FUN_1005a8f0

undefined4 FUN_1005a8f0(void)

{
  uint uVar1;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2400;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  uVar1 = (**(code **)(*in_ECX + 0x84))();
  if (((uVar1 & 0x18) == 0) && ((uVar1 & 0x8000) == 0)) {
    *unaff_FS_OFFSET = local_10;
    return 0;
  }
  *unaff_FS_OFFSET = local_10;
  return 1;
}


// ==== 1005a962 Catch@1005a962

void Catch_1005a962(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005a976 Catch@1005a976

void Catch_1005a976(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsForceDispatchMessageToChild");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005a9a0 FUN_1005a9a0

void FUN_1005a9a0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 0xfc))(0);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x50) + 0x17c))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005aa13 Catch@1005aa13

void Catch_1005aa13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005aa27 Catch@1005aa27

void Catch_1005aa27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::NotifyAlarm");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005aa50 FUN_1005aa50

void FUN_1005aa50(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c8) = 0;
  return;
}


// ==== 1005aaa5 Catch@1005aaa5

void Catch_1005aaa5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005aab9 Catch@1005aab9

void Catch_1005aab9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::EnterState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005aae0 FUN_1005aae0

void FUN_1005aae0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c8) = 1;
  return;
}


// ==== 1005ab35 Catch@1005ab35

void Catch_1005ab35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005ab49 Catch@1005ab49

void Catch_1005ab49(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ExitState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005ab70 FUN_1005ab70

bool FUN_1005ab70(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x1c8) == 0;
}


// ==== 1005abbf Catch@1005abbf

void Catch_1005abbf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005abd3 Catch@1005abd3

void Catch_1005abd3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsCurrentState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005abf0 FUN_1005abf0

void FUN_1005abf0(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e24ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1005ac60 FItemInfo::~FItemInfo

/* public: __thiscall FItemInfo::~FItemInfo(void) */

void __thiscall FItemInfo::~FItemInfo(FItemInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x5ac60  223  ??1FItemInfo@@QAE@XZ */
  puStack_8 = &LAB_101e2551;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 9;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x7c));
  local_4._0_1_ = 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x6c));
  local_4._0_1_ = 7;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x60));
  local_4._0_1_ = 6;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x54));
  local_4._0_1_ = 5;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x48));
  local_4._0_1_ = 4;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_4._0_1_ = 3;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x30));
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x24));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x18));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1005ad40 FItemInfo::FItemInfo

/* public: __thiscall FItemInfo::FItemInfo(struct FItemInfo const &) */

FItemInfo * __thiscall FItemInfo::FItemInfo(FItemInfo *this,FItemInfo *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5ad40  18  ??0FItemInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e25f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this,(FStringNoInit *)param_1);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x24),(FStringNoInit *)(param_1 + 0x24));
  local_4._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x30),(FStringNoInit *)(param_1 + 0x30));
  local_4._0_1_ = 4;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  local_4._0_1_ = 5;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  local_4._0_1_ = 6;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x54),(FStringNoInit *)(param_1 + 0x54));
  local_4._0_1_ = 7;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x60),(FStringNoInit *)(param_1 + 0x60));
  local_4._0_1_ = 8;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x6c),(FStringNoInit *)(param_1 + 0x6c));
  local_4 = CONCAT31(local_4._1_3_,9);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x7c),(FStringNoInit *)(param_1 + 0x7c));
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 300);
  *(uint *)(this + 0x130) =
       *(uint *)(this + 0x130) ^ (*(uint *)(this + 0x130) ^ *(uint *)(param_1 + 0x130)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ *(uint *)(this + 0x130)) & 2 ^ *(uint *)(this + 0x130);
  *(uint *)(this + 0x130) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x130) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x130) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x130) = uVar1;
  *(uint *)(this + 0x130) = (*(uint *)(param_1 + 0x130) ^ uVar1) & 0x20 ^ uVar1;
  ExceptionList = local_c;
  return this;
}


// ==== 1005b0d0 FItemInfo::operator=

/* public: struct FItemInfo & __thiscall FItemInfo::operator=(struct FItemInfo const &) */

FItemInfo * __thiscall FItemInfo::operator=(FItemInfo *this,FItemInfo *param_1)

{
  uint uVar1;
  
                    /* 0x5b0d0  505  ??4FItemInfo@@QAEAAU0@ABU0@@Z */
  FStringNoInit::operator=((FStringNoInit *)this,(FStringNoInit *)param_1);
  FStringNoInit::operator=((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x24),(FStringNoInit *)(param_1 + 0x24));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x30),(FStringNoInit *)(param_1 + 0x30));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x54),(FStringNoInit *)(param_1 + 0x54));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x60),(FStringNoInit *)(param_1 + 0x60));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x6c),(FStringNoInit *)(param_1 + 0x6c));
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x7c),(FStringNoInit *)(param_1 + 0x7c));
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 300);
  *(uint *)(this + 0x130) =
       *(uint *)(this + 0x130) ^ (*(uint *)(this + 0x130) ^ *(uint *)(param_1 + 0x130)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ *(uint *)(this + 0x130)) & 2 ^ *(uint *)(this + 0x130);
  *(uint *)(this + 0x130) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x130) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x130) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x130) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x130) = uVar1;
  *(uint *)(this + 0x130) = (*(uint *)(param_1 + 0x130) ^ uVar1) & 0x20 ^ uVar1;
  return this;
}


// ==== 1005b3e0 UUIScript::eventOnRButtonDblClick

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnRButtonDblClick(int,int) */

void __thiscall UUIScript::eventOnRButtonDblClick(UUIScript *this,int param_1,int param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int local_8;
  int local_4;
  
                    /* 0x5b3e0  1042  ?eventOnRButtonDblClick@UUIScript@@QAEXHH@Z */
  iVar1 = *(int *)this;
  local_8 = param_1;
  local_4 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnRButtonDblClick,0,&local_8,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b420 UUIScript::eventOnRButtonUp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnRButtonUp(int,int) */

void __thiscall UUIScript::eventOnRButtonUp(UUIScript *this,int param_1,int param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int local_8;
  int local_4;
  
                    /* 0x5b420  1044  ?eventOnRButtonUp@UUIScript@@QAEXHH@Z */
  iVar1 = *(int *)this;
  local_8 = param_1;
  local_4 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnRButtonUp,0,&local_8,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b460 UUIScript::eventOnRButtonDown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnRButtonDown(int,int) */

void __thiscall UUIScript::eventOnRButtonDown(UUIScript *this,int param_1,int param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int local_8;
  int local_4;
  
                    /* 0x5b460  1043  ?eventOnRButtonDown@UUIScript@@QAEXHH@Z */
  iVar1 = *(int *)this;
  local_8 = param_1;
  local_4 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnRButtonDown,0,&local_8,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b4a0 UUIScript::eventOnLButtonDblClick

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnLButtonDblClick(int,int) */

void __thiscall UUIScript::eventOnLButtonDblClick(UUIScript *this,int param_1,int param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int local_8;
  int local_4;
  
                    /* 0x5b4a0  1035  ?eventOnLButtonDblClick@UUIScript@@QAEXHH@Z */
  iVar1 = *(int *)this;
  local_8 = param_1;
  local_4 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnLButtonDblClick,0,&local_8,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b4e0 UUIScript::eventOnLButtonUp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnLButtonUp(class UWindowHandle *,int,int) */

void __thiscall
UUIScript::eventOnLButtonUp(UUIScript *this,UWindowHandle *param_1,int param_2,int param_3)

{
  int iVar1;
  UFunction *pUVar2;
  UWindowHandle *local_c;
  int local_8;
  int local_4;
  
                    /* 0x5b4e0  1037  ?eventOnLButtonUp@UUIScript@@QAEXPAVUWindowHandle@@HH@Z */
  iVar1 = *(int *)this;
  local_c = param_1;
  local_8 = param_2;
  local_4 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnLButtonUp,0,&local_c,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b530 UUIScript::eventOnLButtonDown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnLButtonDown(class UWindowHandle *,int,int) */

void __thiscall
UUIScript::eventOnLButtonDown(UUIScript *this,UWindowHandle *param_1,int param_2,int param_3)

{
  int iVar1;
  UFunction *pUVar2;
  UWindowHandle *local_c;
  int local_8;
  int local_4;
  
                    /* 0x5b530  1036  ?eventOnLButtonDown@UUIScript@@QAEXPAVUWindowHandle@@HH@Z */
  iVar1 = *(int *)this;
  local_c = param_1;
  local_8 = param_2;
  local_4 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnLButtonDown,0,&local_c,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b580 UUIScript::eventOnKeyUp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnKeyUp(unsigned char) */

void __thiscall UUIScript::eventOnKeyUp(UUIScript *this,uchar param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x5b580  1034  ?eventOnKeyUp@UUIScript@@QAEXE@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnKeyUp,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b5c0 UUIScript::eventOnKeyDown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnKeyDown(unsigned char) */

void __thiscall UUIScript::eventOnKeyDown(UUIScript *this,uchar param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x5b5c0  1033  ?eventOnKeyDown@UUIScript@@QAEXE@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnKeyDown,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1005b600 FUN_1005b600

void FUN_1005b600(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e2624;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FItemInfo::FItemInfo((FItemInfo *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 1005b660 FUN_1005b660

void FUN_1005b660(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e2654;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FItemInfo::~FItemInfo((FItemInfo *)(in_ECX + 0xc));
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1005b6c0 FUN_1005b6c0

void FUN_1005b6c0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e2679;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1005b710 FUN_1005b710

void FUN_1005b710(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e26b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FItemInfo::FItemInfo((FItemInfo *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 1005b770 FUN_1005b770

void FUN_1005b770(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e26e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FItemInfo::~FItemInfo((FItemInfo *)(in_ECX + 0xc));
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1005b7d0 FUN_1005b7d0

void FUN_1005b7d0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e2714;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FItemInfo::FItemInfo((FItemInfo *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 1005b830 FUN_1005b830

void FUN_1005b830(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e2744;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FItemInfo::~FItemInfo((FItemInfo *)(in_ECX + 0xc));
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1005b890 FUN_1005b890

void FUN_1005b890(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e2768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f540(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCCmdTarget::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1005b8f0 FUN_1005b8f0

void FUN_1005b8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036c680,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1005b920 FUN_1005b920

void FUN_1005b920(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    *(int *)(in_ECX + 0x80) = *(int *)(in_ECX + 0x80) + *(int *)(iVar1 + 0x80);
    *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + *(int *)(iVar1 + 0x84);
  }
  return;
}


// ==== 1005b950 FUN_1005b950

void FUN_1005b950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035db10,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1005b980 FUN_1005b980

void FUN_1005b980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035e040,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1005b9b0 FUN_1005b9b0

void FUN_1005b9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10361508,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1005b9e0 FUN_1005b9e0

FArchive * FUN_1005b9e0(FArchive *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2790;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FArchive::IsSaving(param_1);
  if (iVar1 == 0) {
    FUN_100052e0(param_1,&local_18);
    *param_2 = local_18;
  }
  else {
    local_18 = *param_2;
    FUN_100052e0(param_1,&local_18);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1005ba5e Catch@1005ba5e

void Catch_1005ba5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1005ba72 Catch@1005ba72

void Catch_1005ba72(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator <<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005ba90 FUN_1005ba90

FArchive * FUN_1005ba90(FArchive *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e27b0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FArchive::IsSaving(param_1);
  if (iVar1 == 0) {
    FUN_100052e0(param_1,&local_18);
    *param_2 = local_18;
  }
  else {
    local_18 = *param_2;
    FUN_100052e0(param_1,&local_18);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1005bb0e Catch@1005bb0e

void Catch_1005bb0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1005bb22 Catch@1005bb22

void Catch_1005bb22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator <<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005bb40 FUN_1005bb40

void FUN_1005bb40(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e27d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1003f540();
  *in_ECX = NCPositionInfo::vftable;
  in_ECX[0x10] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0xffffffff;
  in_ECX[0x12] = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 1005bbc1 Catch@1005bbc1

void Catch_1005bbc1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005bbd5 Catch@1005bbd5

void Catch_1005bbd5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::NCPositionInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005bc00 FUN_1005bc00

void FUN_1005bc00(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e2808;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPositionInfo::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10001f30(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1005bc60 FUN_1005bc60

void FUN_1005bc60(byte param_1)

{
  void *in_ECX;
  
  FUN_1005bc00();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 1005bc90 FUN_1005bc90

void FUN_1005bc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e2838;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1003f540();
  *in_ECX = NCPositionInfo::vftable;
  in_ECX[0x10] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = param_1;
  in_ECX[0xe] = param_2;
  in_ECX[0xf] = param_3;
  in_ECX[0x10] = param_4;
  in_ECX[0x11] = param_5;
  in_ECX[0x12] = param_6;
  ExceptionList = local_10;
  return;
}


// ==== 1005bd1b Catch@1005bd1b

void Catch_1005bd1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005bd2f Catch@1005bd2f

void Catch_1005bd2f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::NCPositionInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005bd50 FUN_1005bd50

void FUN_1005bd50(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3c) = param_1;
  *(undefined4 *)(in_ECX + 0x40) = param_2;
  return;
}


// ==== 1005bda9 Catch@1005bda9

void Catch_1005bda9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005bdbd Catch@1005bdbd

void Catch_1005bdbd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPositionInfo::SetOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005bde0 FUN_1005bde0

void FUN_1005bde0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2880;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10057030(param_1,param_2,param_3,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 1005be52 Catch@1005be52

void Catch_1005be52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005be66 Catch@1005be66

void Catch_1005be66(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRelativeSize::NCRelativeSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005be90 FUN_1005be90

undefined4 FUN_1005be90(int param_1)

{
  undefined4 uVar1;
  uint uStack_3c;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e28a0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_2c[0] = 0;
    local_24 = 0;
    FUN_10058770(local_2c);
    uVar1 = FUN_101c19e0();
  }
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1005bf07 Catch@1005bf07

void Catch_1005bf07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005bf1b Catch@1005bf1b

void Catch_1005bf1b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRelativeSize::GetWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005bf40 FUN_1005bf40

void FUN_1005bf40(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uStack_3c;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e28c0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (int *)0x0) {
    local_28 = 0;
    local_2c = 0;
    local_24 = 0.0;
    local_20 = 0.0;
    FUN_10058770(&local_2c);
    cVar1 = (**(code **)(*param_1 + 0x84))();
    if (cVar1 < '\0') {
      iVar2 = FUN_10057e80();
      if (iVar2 == 3) {
        local_28 = local_28 + 0x14;
        local_20 = local_20 - 20.0;
        FUN_101c19e0();
        ExceptionList = local_10;
        return;
      }
      iVar2 = FUN_10057e80();
      if (iVar2 == 1) {
        local_2c = local_2c + 0xc;
        local_24 = local_24 - 12.0;
      }
    }
    FUN_101c19e0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005c013 Catch@1005c013

void Catch_1005c013(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005c027 Catch@1005c027

void Catch_1005c027(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCRelativeSize::GetHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c050 FUN_1005c050

void FUN_1005c050(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e28e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1001d9e0(&stack0x00000004);
  if (in_ECX[0x31] != 0) {
    (**(code **)(*in_ECX + 0x1c8))(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005c0c2 Catch@1005c0c2

void Catch_1005c0c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005c0d6 Catch@1005c0d6

void Catch_1005c0d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetResizeFrameRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c100 FUN_1005c100

undefined4 FUN_1005c100(void)

{
  int iVar1;
  int in_ECX;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2900;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_10058770(&local_2c);
  iVar1 = FUN_1004fad0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),
                       *(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c));
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005c1ad Catch@1005c1ad

void Catch_1005c1ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005c1c1 Catch@1005c1c1

void Catch_1005c1c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsOutOfRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c1e0 FUN_1005c1e0

void FUN_1005c1e0(int param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0x2e] = param_1;
  FUN_1005b920();
  (**(code **)(*in_ECX + 0x68))(1,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1005c24c Catch@1005c24c

void Catch_1005c24c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005c260 Catch@1005c260

void Catch_1005c260(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c280 FUN_1005c280

void FUN_1005c280(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    piVar1 = (int *)FUN_10058f70();
    iVar3 = DAT_103663bc;
    if (((piVar1 == (int *)0x0) || (piVar1 == *(int **)(DAT_103663bc + 0x50ac))) ||
       (iVar2 = (**(code **)(*piVar1 + 0xfc))(1), iVar3 = DAT_103663bc, iVar2 == 0)) {
      do {
        iVar2 = param_1;
        if (iVar2 == 0) goto LAB_1005c32d;
        if (*(int *)(iVar2 + 0xc) == 0) goto LAB_1005c328;
        param_1 = *(int *)(iVar2 + 0xc);
      } while (*(int *)(*(int *)(iVar2 + 0xc) + 4) != *(int *)(iVar3 + 0x50ac));
      if (*(int *)(iVar2 + 0xc) == 0) {
LAB_1005c328:
        iVar2 = 0;
      }
LAB_1005c32d:
      if (((*(int *)(iVar3 + 0x50ac) != 0) &&
          (iVar3 = (**(code **)(**(int **)(iVar3 + 0x50ac) + 0xfc))(0), iVar3 != 0)) &&
         ((iVar2 != 0 &&
          ((iVar3 = FUN_10058020(), iVar3 != 0 &&
           (piVar1 = *(int **)(*(int *)(iVar3 + 4) + 0x48), piVar1 != (int *)0x0)))))) {
        do {
          piVar1 = (int *)piVar1[2];
          if (piVar1 == (int *)0x0) {
            ExceptionList = local_10;
            return;
          }
          uVar4 = (**(code **)(**(int **)(*piVar1 + 4) + 0x84))();
          iVar3 = (**(code **)(**(int **)(*piVar1 + 4) + 0xfc))(0);
        } while ((iVar3 == 0) || ((~(uVar4 >> 0x1a) & 1) == 0));
        (**(code **)(**(int **)(*piVar1 + 4) + 0x78))();
      }
      ExceptionList = local_10;
      return;
    }
    (**(code **)(*piVar1 + 0x78))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005c3e5 Catch@1005c3e5

void Catch_1005c3e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1005c3f9 Catch@1005c3f9

void Catch_1005c3f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetNextFocusUnderConsole");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c420 FUN_1005c420

FString * FUN_1005c420(FString *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e297a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  piVar1 = (int *)FUN_10058f70();
  if (piVar1 == (int *)0x0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    (**(code **)(*piVar1 + 0xf0))(param_1);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1005c49b Catch@1005c49b

void Catch_1005c49b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1005c4af Catch@1005c4af

void Catch_1005c4af(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetParentWndName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c4d0 FUN_1005c4d0

undefined4 FUN_1005c4d0(int param_1)

{
  int *piVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e29a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((param_1 != 0) && (piVar1 = (int *)FUN_10058f70(), piVar1 != (int *)0x0)) &&
      (((piVar1[0x2b] & 0x2000U) == 0 ||
       (iVar2 = UObject::IsA(in_ECX,(UClass *)&DAT_10361508), iVar2 == 0)))) &&
     (iVar2 = (**(code **)(*piVar1 + 0xfc))(param_1), iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if (((byte)in_ECX[0xac] & 2) == 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005c57c Catch@1005c57c

void Catch_1005c57c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005c590 Catch@1005c590

void Catch_1005c590(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c5b0 FUN_1005c5b0

void FUN_1005c5b0(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e29c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((DAT_1036c674 != in_ECX[0x2e]) && (iVar1 = (**(code **)(*in_ECX + 0xfc))(1), iVar1 != 0)) {
    if (DAT_1036c674 != 0) {
      (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x7c))();
      DAT_1036c674 = 0;
    }
    iVar1 = (**(code **)(**(int **)(in_ECX[0x2e] + 4) + 0x88))();
    if ((iVar1 != 0) || (iVar1 = FUN_10058bf0(), iVar1 == 0)) {
      in_ECX[0x1f] = 1;
      if (DAT_1036c674 != 0) {
        (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x68))(0x513,0,0);
      }
      DAT_1036c674 = in_ECX[0x2e];
      if (DAT_1036c674 != 0) {
        (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x68))(0x512,0,0);
      }
      iVar1 = *(int *)(in_ECX[0x2e] + 0xc);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) &&
         (uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x84))(), (uVar2 & 0x1000000) == 0)) {
        FUN_10058970(in_ECX[0x2e]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005c6e5 Catch@1005c6e5

void Catch_1005c6e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005c6f9 Catch@1005c6f9

void Catch_1005c6f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c720 FUN_1005c720

void FUN_1005c720(int param_1,int param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  uint uStack_40;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e29e0;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_3 == 0.0) {
    iVar2 = FUN_1005a330();
    if ((iVar2 != 0) && (iVar2 = FUN_1005a660(), iVar2 != 0)) {
      local_1c = 0;
      local_20 = 0;
      FUN_1005a700(*(undefined4 *)(in_ECX + 0x140),&local_20);
      local_24 = 0;
      local_28 = 0;
      FUN_1005a700(*(undefined4 *)(in_ECX + 0x13c),&local_28);
      param_1 = (*(int *)(in_ECX + 0x154) - local_28) + local_20;
      param_2 = (*(int *)(in_ECX + 0x158) - local_24) + local_1c;
    }
    *(int *)(in_ECX + 0x80) = *(int *)(in_ECX + 0x80) + param_1;
    *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + param_2;
    for (piVar3 = *(int **)(in_ECX + 0x48); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      piVar1 = *(int **)(*piVar3 + 4);
      uVar4 = (**(code **)(*piVar1 + 0x84))();
      if ((uVar4 & 0x80000) == 0) {
        (**(code **)(*piVar1 + 0xbc))(param_1,param_2,0);
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x198); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(in_ECX + 0x194) + iVar2 * 4) != 0) {
        local_18 = iVar2;
        FUN_1005a5c0();
      }
    }
  }
  else {
    param_1 = *(int *)(in_ECX + 0x80) + param_1;
    *(int *)(in_ECX + 0x1c0) = param_1;
    param_2 = *(int *)(in_ECX + 0x84) + param_2;
    *(int *)(in_ECX + 0x1c4) = param_2;
    *(undefined4 *)(in_ECX + 0x1b8) = 0;
    *(undefined4 *)(in_ECX + 0x1bc) = 0;
    *(float *)(in_ECX + 0x1ac) = ((float)param_1 - (float)*(int *)(in_ECX + 0x80)) / param_3;
    *(float *)(in_ECX + 0x1b0) = ((float)param_2 - (float)*(int *)(in_ECX + 0x84)) / param_3;
    *(float *)(in_ECX + 0x1b4) = param_3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005c8de Catch@1005c8de

void Catch_1005c8de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1005c8f2 Catch@1005c8f2

void Catch_1005c8f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MoveChildWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c910 FUN_1005c910

void FUN_1005c910(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0xbc))(param_1,param_2,0);
  ExceptionList = local_10;
  return;
}


// ==== 1005c984 Catch@1005c984

void Catch_1005c984(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005c998 Catch@1005c998

void Catch_1005c998(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MoveWindowEX");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005c9c0 FUN_1005c9c0

undefined4 FUN_1005c9c0(void)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_10058f70();
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc4))();
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1005ca2d Catch@1005ca2d

void Catch_1005ca2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005ca41 Catch@1005ca41

void Catch_1005ca41(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetUIScript");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005ca60 FUN_1005ca60

void FUN_1005ca60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2a40;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iStack_38 = *(int *)(in_ECX + 0xa8);
  if (iStack_38 == 0) {
    iStack_34 = iStack_38;
    FName::FName((FName *)&iStack_38,0);
    pUVar1 = UObject::GetTransientPackage();
    iVar2 = FUN_1005b8f0(0x4c,pUVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0xa8) = 0;
    }
    else {
      iStack_34 = param_6;
      iStack_38 = param_5;
      uVar3 = FUN_1005bc90(param_1,param_2,param_3,param_4);
      *(undefined4 *)(in_ECX + 0xa8) = uVar3;
    }
  }
  else {
    iStack_34 = param_1;
    iStack_38 = 0x1005cafc;
    FUN_10056ad0();
    iStack_34 = param_2;
    iStack_38 = 0x1005cb0b;
    FUN_10056b60();
    iStack_34 = param_4;
    iStack_38 = param_3;
    FUN_1005bd50();
    iStack_34 = param_5;
    iStack_38 = 0x1005cb2d;
    FUN_10056bf0();
    iStack_34 = param_6;
    iStack_38 = 0x1005cb3c;
    FUN_10056c80();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005cb57 Catch@1005cb57

void Catch_1005cb57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005cb6b Catch@1005cb6b

void Catch_1005cb6b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetDefaultPositionInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005cb90 FUN_1005cb90

void FUN_1005cb90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  int local_2c;
  int local_28;
  int local_20;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = in_ECX[0x20];
  iVar5 = in_ECX[0x21];
  iVar7 = 0;
  local_2c = FUN_101c19e0();
  local_28 = FUN_101c19e0();
  if ((in_ECX[0x2e] != 0) && (iVar6 = *(int *)(in_ECX[0x2e] + 0xc), iVar6 != 0)) {
    iVar7 = *(int *)(iVar6 + 4);
  }
  local_8 = 0;
  local_c = 0;
  local_4 = 0;
  local_10 = 0;
  if (iVar7 != 0) {
    FUN_10058770(&local_10);
    iVar1 = FUN_101c19e0();
    iVar6 = local_10;
    iVar7 = in_ECX[0x20];
    if ((iVar7 <= iVar1 + local_10) && (iVar2 = FUN_101c19e0(), iVar6 <= iVar2 + iVar7)) {
      iVar2 = FUN_101c19e0();
      iVar3 = iVar2 + local_c;
      if ((in_ECX[0x21] <= iVar3) && (iVar4 = FUN_101c19e0(), local_c <= iVar4 + in_ECX[0x21])) {
        if (iVar7 < iVar6) {
          *param_1 = iVar6 - iVar7;
          in_ECX[0x41] = iVar6 - iVar7;
          local_2c = local_2c - *param_1;
          local_20 = iVar6;
        }
        else {
          in_ECX[0x41] = 0;
        }
        param_1[2] = (int)(float)local_2c;
        iVar4 = FUN_101c19e0();
        iVar7 = local_c;
        fVar8 = extraout_ST0;
        if (iVar1 + iVar6 < iVar4 + in_ECX[0x20]) {
          fVar8 = (float10)(local_2c + ((iVar1 - iVar4) - in_ECX[0x20]) + iVar6);
        }
        param_1[2] = (int)(float)fVar8;
        if (in_ECX[0x21] < local_c) {
          iVar5 = local_c - in_ECX[0x21];
          param_1[1] = iVar5;
          in_ECX[0x42] = iVar5;
          local_28 = local_28 - param_1[1];
          iVar5 = local_c;
        }
        else {
          in_ECX[0x42] = 0;
        }
        param_1[3] = (int)(float)local_28;
        iVar6 = FUN_101c19e0();
        fVar8 = extraout_ST0_00;
        if (iVar3 < iVar6 + in_ECX[0x21]) {
          fVar8 = (float10)(local_28 + ((iVar2 - iVar6) - in_ECX[0x21]) + iVar7);
        }
        param_1[3] = (int)(float)fVar8;
        if (((float10)0 == (float10)(float)param_1[2]) && ((float10)0 == fVar8)) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = in_ECX[0x22];
          param_1[3] = in_ECX[0x23];
          return;
        }
        in_ECX[0x21] = iVar5;
        in_ECX[0x22] = (int)(float)extraout_ST1;
        in_ECX[0x23] = (int)(float)fVar8;
        in_ECX[0x20] = local_20;
        return;
      }
    }
    (**(code **)(*in_ECX + 0x13c))();
  }
  return;
}


// ==== 1005ce00 FUN_1005ce00

void FUN_1005ce00(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e2a6b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((0.0 <= param_1) || (0.0 <= param_2)) {
    if (in_ECX[0x58] == 0) {
      iVar1 = FUN_10004ed0(0x10);
      local_8._0_1_ = 1;
      if (iVar1 == 0) {
        local_8 = (uint)local_8._1_3_ << 8;
        in_ECX[0x58] = 0;
      }
      else {
        iVar1 = FUN_1005bde0(param_1,param_2,param_3,param_4);
        local_8 = (uint)local_8._1_3_ << 8;
        in_ECX[0x58] = iVar1;
      }
    }
    else {
      FUN_10057030(param_1,param_2,param_3,param_4);
    }
    (**(code **)(*in_ECX + 300))(0,0);
  }
  else {
    if (in_ECX[0x58] != 0) {
      FUN_100590e0(1);
    }
    in_ECX[0x58] = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005cf13 Catch@1005cf13

void Catch_1005cf13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005cf27 Catch@1005cf27

void Catch_1005cf27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowSizeRel43");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005cf50 FUN_1005cf50

void FUN_1005cf50(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e2a9b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((0.0 <= param_1) || (0.0 <= param_2)) {
    if (in_ECX[0x58] == 0) {
      iVar1 = FUN_10004ed0(0x10);
      local_8._0_1_ = 1;
      if (iVar1 == 0) {
        local_8 = (uint)local_8._1_3_ << 8;
        in_ECX[0x58] = 0;
      }
      else {
        iVar1 = FUN_1005bde0(param_1,param_2,param_3,param_4);
        local_8 = (uint)local_8._1_3_ << 8;
        in_ECX[0x58] = iVar1;
      }
    }
    else {
      FUN_10057030(param_1,param_2,param_3,param_4);
    }
    (**(code **)(*in_ECX + 0x128))(0,0);
  }
  else {
    if (in_ECX[0x58] != 0) {
      FUN_100590e0(1);
    }
    in_ECX[0x58] = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005d063 Catch@1005d063

void Catch_1005d063(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d077 Catch@1005d077

void Catch_1005d077(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowSizeRel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d0a0 FUN_1005d0a0

void FUN_1005d0a0(int *param_1)

{
  int iVar1;
  int in_ECX;
  uint uStack_40;
  int local_30;
  int local_2c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2ac0;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = 0;
  local_30 = 0;
  if (((*(int *)(in_ECX + 0xb8) != 0) &&
      (iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc), iVar1 != 0)) &&
     (local_18 = *(int *)(iVar1 + 4), local_18 != 0)) {
    FUN_10058770(&local_30);
  }
  *param_1 = *(int *)(in_ECX + 0x80) - local_30;
  param_1[1] = *(int *)(in_ECX + 0x84) - local_2c;
  param_1[3] = *(int *)(in_ECX + 0x8c);
  param_1[2] = *(int *)(in_ECX + 0x88);
  ExceptionList = local_10;
  return;
}


// ==== 1005d148 Catch@1005d148

void Catch_1005d148(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1005d15c Catch@1005d15c

void Catch_1005d15c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetClientRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d180 FUN_1005d180

void FUN_1005d180(int *param_1)

{
  int iVar1;
  int in_ECX;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  if (((*(int *)(in_ECX + 0xb8) != 0) &&
      (iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc), iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0))
  {
    FUN_10058770(&local_10);
  }
  iVar1 = *(int *)(in_ECX + 0x84);
  *param_1 = *(int *)(in_ECX + 0x80) - local_10;
  param_1[1] = iVar1 - local_c;
  return;
}


// ==== 1005d1e0 FUN_1005d1e0

void FUN_1005d1e0(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  uint uStack_3c;
  int local_2c;
  int local_28;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2ae0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10058f70();
  if (iVar1 != 0) {
    local_28 = 0;
    local_2c = 0;
    FUN_10058770(&local_2c);
    (**(code **)(*in_ECX + 0x144))(local_2c + param_1,local_28 + param_2,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005d26d Catch@1005d26d

void Catch_1005d26d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d281 Catch@1005d281

void Catch_1005d281(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MoveWindowClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d2a0 FUN_1005d2a0

void FUN_1005d2a0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2b00;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014ed50(5);
  local_34 = 0;
  local_38 = 0;
  FUN_10058770(&local_38);
  local_20._0_4_ = (undefined4)(longlong)ROUND((float)in_ECX[0x23]);
  uVar1 = (undefined4)local_20;
  local_20 = (longlong)ROUND((float)in_ECX[0x22]);
  (**(code **)(*in_ECX + 0xc0))(local_38,local_34,(undefined4)local_20,uVar1,0,0,3);
  (**(code **)(*(int *)in_ECX[0x14] + 0xc0))(0,0,0,0,0,0,3);
  (**(code **)(*in_ECX + 0x138))();
  (**(code **)(*in_ECX + 0x78))();
  (**(code **)(*(int *)in_ECX[0x14] + 0x13c))();
  ExceptionList = local_10;
  return;
}


// ==== 1005d39f Catch@1005d39f

void Catch_1005d39f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1005d3b3 Catch@1005d3b3

void Catch_1005d3b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MaximizeWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d3d0 FUN_1005d3d0

undefined4 FUN_1005d3d0(undefined4 param_1,undefined4 param_2)

{
  UUIScript *this;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    UUIScript::eventOnLButtonDblClick(this,(int)(short)param_2,(int)(short)((uint)param_2 >> 0x10));
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005d43e Catch@1005d43e

void Catch_1005d43e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d452 Catch@1005d452

void Catch_1005d452(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnLButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d470 FUN_1005d470

undefined4 FUN_1005d470(undefined4 param_1,undefined4 param_2)

{
  UUIScript *this;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    UUIScript::eventOnRButtonDblClick(this,(int)(short)param_2,(int)(short)((uint)param_2 >> 0x10));
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005d4de Catch@1005d4de

void Catch_1005d4de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d4f2 Catch@1005d4f2

void Catch_1005d4f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnRButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d510 FUN_1005d510

bool FUN_1005d510(int param_1)

{
  UUIScript *this;
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2b60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0x10) {
    DAT_1036c670 = 0;
  }
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    UUIScript::eventOnKeyUp(this,(uchar)param_1);
  }
  iVar1 = (**(code **)(*in_ECX + 0x88))();
  ExceptionList = local_10;
  return iVar1 != 0;
}


// ==== 1005d594 Catch@1005d594

void Catch_1005d594(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d5a8 Catch@1005d5a8

void Catch_1005d5a8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnKeyUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d5d0 FUN_1005d5d0

undefined4 FUN_1005d5d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1005a3d0();
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_1005a470();
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    (**(code **)(*piVar2 + 0x1a0))(param_1,param_2);
  }
  else if (in_ECX[0x2c] != 0) {
    iVar3 = (int)(short)((uint)param_2 >> 0x10);
    in_ECX[0x33] = (int)(short)param_2 - in_ECX[0x33];
    iVar1 = iVar3 - in_ECX[0x34];
    in_ECX[0x34] = iVar1;
    (**(code **)(*in_ECX + 0x68))(3,0,iVar1 * 0x10000 | (uint)*(ushort *)(in_ECX + 0x33));
    in_ECX[0x33] = (int)(short)param_2;
    in_ECX[0x34] = iVar3;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005d6b7 Catch@1005d6b7

void Catch_1005d6b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d6cb Catch@1005d6cb

void Catch_1005d6cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d6f0 FUN_1005d6f0

undefined4 FUN_1005d6f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  UUIScript *this;
  int iVar2;
  UWindowHandle *pUVar3;
  short sVar4;
  int *in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0x2c] = 1;
  (**(code **)(*in_ECX + 0x16c))();
  sVar4 = (short)((uint)param_2 >> 0x10);
  if ((in_ECX[0x2b] & 0x400000U) == 0) {
    piVar1 = (int *)FUN_1005a470();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1a4))(param_1,param_2);
    }
  }
  else {
    FUN_1003f950();
    in_ECX[0x33] = (int)(short)param_2;
    in_ECX[0x34] = (int)sVar4;
  }
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    iVar2 = (int)(short)param_2;
    iVar5 = (int)sVar4;
    pUVar3 = (UWindowHandle *)FUN_100580a0();
    UUIScript::eventOnLButtonDown(this,pUVar3,iVar2,iVar5);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005d7c9 Catch@1005d7c9

void Catch_1005d7c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d7dd Catch@1005d7dd

void Catch_1005d7dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d800 FUN_1005d800

undefined4 FUN_1005d800(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  UUIScript *this;
  int iVar2;
  UWindowHandle *pUVar3;
  int *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2bc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x170))();
  in_ECX[0x2c] = 0;
  if ((in_ECX[0x2b] & 0x400000U) == 0) {
    piVar1 = (int *)FUN_1005a470();
    if (piVar1 == (int *)0x0) {
      this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
      if (this != (UUIScript *)0x0) {
        iVar4 = (int)(short)param_2;
        iVar2 = (int)(short)((uint)param_2 >> 0x10);
        pUVar3 = (UWindowHandle *)FUN_100580a0();
        UUIScript::eventOnLButtonUp(this,pUVar3,iVar4,iVar2);
      }
      ExceptionList = local_10;
      return 0;
    }
    (**(code **)(*piVar1 + 0x1a8))(param_1,param_2);
  }
  else {
    FUN_1003f960();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005d8d8 Catch@1005d8d8

void Catch_1005d8d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d8ec Catch@1005d8ec

void Catch_1005d8ec(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d910 FUN_1005d910

undefined4 FUN_1005d910(undefined4 param_1,undefined4 param_2)

{
  UUIScript *this;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2be0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    UUIScript::eventOnRButtonDown(this,(int)(short)param_2,(int)(short)((uint)param_2 >> 0x10));
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005d97e Catch@1005d97e

void Catch_1005d97e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005d992 Catch@1005d992

void Catch_1005d992(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnRButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005d9b0 FUN_1005d9b0

undefined4 FUN_1005d9b0(undefined4 param_1,undefined4 param_2)

{
  UUIScript *this;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2c00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    UUIScript::eventOnRButtonUp(this,(int)(short)param_2,(int)(short)((uint)param_2 >> 0x10));
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1005da1b Catch@1005da1b

void Catch_1005da1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005da2f Catch@1005da2f

void Catch_1005da2f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnRButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005da50 FUN_1005da50

undefined4 FUN_1005da50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2c20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x170) < 0) {
    iVar3 = FString::Len((FString *)(in_ECX + 0x174));
    if (0 < iVar3) {
      FUN_101b8ab0((FString *)(in_ECX + 0x174),*(int *)(in_ECX + 0xd4) + 0x24,0);
    }
  }
  else {
    FUN_101b8d20(*(int *)(in_ECX + 0x170),*(int *)(in_ECX + 0xd4) + 0x24);
  }
  if (*(int *)(in_ECX + 0xd4) != 0) {
    FUN_10054680(param_1,*(int *)(in_ECX + 0xd4) + 0x24,0,0,*(undefined4 *)(in_ECX + 0x80),
                 *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                 *(undefined4 *)(in_ECX + 0x8c));
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 0;
}


// ==== 1005db8b Catch@1005db8b

void Catch_1005db8b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005db9f Catch@1005db9f

void Catch_1005db9f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005dbc0 FUN_1005dbc0

void FUN_1005dbc0(int param_1,int param_2,FString *param_3,int param_4,int param_5,int param_6)

{
  FString *this;
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2c40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (FString *)(in_ECX + 0x51);
  iVar1 = FString::Len(this);
  if (iVar1 != 0) {
    appFailAssert("m_AnchorRelativeTo.Len() == 0",".\\Src\\NWnd.cpp",0xeb0);
  }
  (**(code **)(*in_ECX + 0xe4))();
  if (param_1 == 0) {
    if (param_2 == 0) {
      ExceptionList = local_10;
      return;
    }
    in_ECX[0x50] = param_2;
    in_ECX[0x4f] = param_2;
  }
  else {
    in_ECX[0x4f] = param_1;
    in_ECX[0x50] = param_2;
  }
  FString::operator=(this,param_3);
  in_ECX[0x55] = param_4;
  in_ECX[0x56] = param_5;
  in_ECX[0x57] = param_6;
  FUN_1005a5c0();
  iVar1 = FString::operator==(this,(ushort *)&DAT_1022f9f8);
  if ((iVar1 != 0) && (in_ECX[0x57] != 0)) {
    (**(code **)(*in_ECX + 0xd0))(0,0,0);
    in_ECX[0x57] = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005dcdc Catch@1005dcdc

void Catch_1005dcdc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005dcf0 Catch@1005dcf0

void Catch_1005dcf0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005dd10 FUN_1005dd10

void FUN_1005dd10(int param_1,int param_2,int param_3)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2c60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0xe4))();
  in_ECX[0x4f] = param_1;
  in_ECX[0x50] = param_1;
  FString::operator=((FString *)(in_ECX + 0x51),(ushort *)&DAT_1022f9f8);
  in_ECX[0x54] = 0;
  in_ECX[0x55] = param_2;
  in_ECX[0x56] = param_3;
  FUN_1005a5c0();
  ExceptionList = local_10;
  return;
}


// ==== 1005ddac Catch@1005ddac

void Catch_1005ddac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005ddc0 Catch@1005ddc0

void Catch_1005ddc0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005dde0 FUN_1005dde0

void FUN_1005dde0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x154) = param_1;
  *(undefined4 *)(in_ECX + 0x158) = param_2;
  return;
}


// ==== 1005de3f Catch@1005de3f

void Catch_1005de3f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005de53 Catch@1005de53

void Catch_1005de53(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetAnchorOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005de70 FUN_1005de70

UObject * FUN_1005de70(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10361508);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1005dea0 FUN_1005dea0

UObject * FUN_1005dea0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036cbb0);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&DAT_1036cbb0);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 1005df00 UUIScript::eventOnDropItemSource

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnDropItemSource(class FString const &,struct FItemInfo)
    */

void __thiscall UUIScript::eventOnDropItemSource(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  FString local_14c [12];
  FItemInfo local_140 [288];
  void *pvStack_20;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5df00  1027
                       ?eventOnDropItemSource@UUIScript@@QAEXABVFString@@UFItemInfo@@@Z */
  puStack_8 = &LAB_101e2cb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1005b600(DAT_103554c4 ^ (uint)&stack0xfffffeac);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::operator=(local_14c,param_1);
  FItemInfo::operator=(local_140,(FItemInfo *)&stack0x00000008);
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnDropItemSource,0,local_14c,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  uStack_18 = uStack_18 & 0xffffff00;
  FUN_1005b660();
  uStack_18 = 0xffffffff;
  FItemInfo::~FItemInfo((FItemInfo *)&local_c);
  ExceptionList = pvStack_20;
  return;
}


// ==== 1005dfd0 UUIScript::eventOnDragItemEnd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnDragItemEnd(class FString const &) */

void __thiscall UUIScript::eventOnDragItemEnd(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5dfd0  1024  ?eventOnDragItemEnd@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e2cfa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x1005e018;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnDragItemEnd,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 1005e060 UUIScript::eventOnDragItemStart

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnDragItemStart(class FString const &,struct FItemInfo)
    */

void __thiscall UUIScript::eventOnDragItemStart(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  FString local_14c [12];
  FItemInfo local_140 [288];
  void *pvStack_20;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5e060  1025
                       ?eventOnDragItemStart@UUIScript@@QAEXABVFString@@UFItemInfo@@@Z */
  puStack_8 = &LAB_101e2d33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1005b710(DAT_103554c4 ^ (uint)&stack0xfffffeac);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::operator=(local_14c,param_1);
  FItemInfo::operator=(local_140,(FItemInfo *)&stack0x00000008);
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnDragItemStart,0,local_14c,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  uStack_18 = uStack_18 & 0xffffff00;
  FUN_1005b770();
  uStack_18 = 0xffffffff;
  FItemInfo::~FItemInfo((FItemInfo *)&local_c);
  ExceptionList = pvStack_20;
  return;
}


// ==== 1005e130 UUIScript::eventOnDropItem

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnDropItem(class FString const &,struct
   FItemInfo,int,int) */

void __thiscall UUIScript::eventOnDropItem(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 in_stack_0000013c;
  undefined4 in_stack_00000140;
  FString local_154 [12];
  FItemInfo local_148 [296];
  void *pvStack_20;
  uint uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5e130  1026  ?eventOnDropItem@UUIScript@@QAEXABVFString@@UFItemInfo@@HH@Z
                        */
  puStack_8 = &LAB_101e2d73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1005b7d0(DAT_103554c4 ^ (uint)&stack0xfffffea4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::operator=(local_154,param_1);
  FItemInfo::operator=(local_148,(FItemInfo *)&stack0x00000008);
  iVar1 = *(int *)this;
  local_14 = in_stack_0000013c;
  local_10 = in_stack_00000140;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnDropItem,0,local_154,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  uStack_18 = uStack_18 & 0xffffff00;
  FUN_1005b830();
  uStack_18 = 0xffffffff;
  FItemInfo::~FItemInfo((FItemInfo *)&local_c);
  ExceptionList = pvStack_20;
  return;
}


// ==== 1005e230 FUN_1005e230

void FUN_1005e230(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2da0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_10058f70();
  iVar2 = in_ECX + 0x144;
  FUN_10005c30(iVar2,uVar1);
  uVar1 = FUN_100d0cb0(iVar2,uVar1);
  FUN_10010290(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1005e29a Catch@1005e29a

void Catch_1005e29a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005e2ae Catch@1005e2ae

void Catch_1005e2ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::FindXMLControl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e2d0 FUN_1005e2d0

void FUN_1005e2d0(void)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2dc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0);
  if (iVar1 != 0) {
    iVar1 = FUN_1005a220();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(in_ECX[0x2e] + 8) + 0x88))(in_ECX[0x2e]);
    }
  }
  for (piVar2 = (int *)in_ECX[0x12]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    iVar1 = FUN_10010290(*(undefined4 *)(*piVar2 + 4));
    if (iVar1 != 0) {
      FUN_1005e2d0();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005e371 Catch@1005e371

void Catch_1005e371(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005e385 Catch@1005e385

void Catch_1005e385(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::AddStuckableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e3b0 FUN_1005e3b0

void FUN_1005e3b0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2de0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xb8) + 8) + 0x8c))(*(int *)(in_ECX + 0xb8));
  for (piVar2 = *(int **)(in_ECX + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    iVar1 = FUN_10010290(*(undefined4 *)(*piVar2 + 4));
    if (iVar1 != 0) {
      FUN_1005e3b0();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005e43b Catch@1005e43b

void Catch_1005e43b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005e44f Catch@1005e44f

void Catch_1005e44f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::DeleteStuckableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e470 FUN_1005e470

void FUN_1005e470(void)

{
  int *piVar1;
  int *in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2e00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x7c))();
  for (piVar2 = (int *)in_ECX[0x12]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    piVar1 = (int *)FUN_10010290(*(undefined4 *)(*piVar2 + 4));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x11c))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005e4f0 Catch@1005e4f0

void Catch_1005e4f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005e504 Catch@1005e504

void Catch_1005e504(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ReleaseFocusAll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e530 FUN_1005e530

void FUN_1005e530(uint param_1,float param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2e20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 0.0) {
    *(undefined1 *)(in_ECX + 0x78) = (undefined1)param_1;
    if (param_3 != 0) {
      *(undefined4 *)(in_ECX + 0x1a0) = 0;
      *(undefined4 *)(in_ECX + 0x1a4) = 0;
      *(undefined1 *)(in_ECX + 0x1a8) = 0;
    }
    for (piVar2 = *(int **)(in_ECX + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      piVar1 = (int *)FUN_10010290(*(undefined4 *)(*piVar2 + 4));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xe8))(param_1,0,1);
      }
    }
  }
  else {
    *(float *)(in_ECX + 0x1a0) =
         ((float)(param_1 & 0xff) - (float)*(byte *)(in_ECX + 0x78)) / param_2;
    *(float *)(in_ECX + 0x1a4) = param_2;
    *(undefined1 *)(in_ECX + 0x1a8) = (undefined1)param_1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005e622 Catch@1005e622

void Catch_1005e622(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005e636 Catch@1005e636

void Catch_1005e636(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e660 FUN_1005e660

int FUN_1005e660(FString *param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e2e49;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*(param_1);
  FString::FString(local_28,puVar1);
  local_8._0_1_ = 1;
  piVar2 = (int *)FUN_100c8aa0(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  if (piVar2 != (int *)0x0) {
    ExceptionList = local_10;
    return *piVar2;
  }
  if (param_2 != 0) {
    for (piVar2 = *(int **)(in_ECX + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      piVar3 = (int *)FUN_10010290(*(undefined4 *)(*piVar2 + 4));
      if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xf4))(param_1,1), iVar4 != 0))
      {
        ExceptionList = local_10;
        return iVar4;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1005e734 Catch@1005e734

void Catch_1005e734(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005e748 Catch@1005e748

void Catch_1005e748(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::FindChildWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e770 FUN_1005e770

void FUN_1005e770(void)

{
  FArray *this;
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2e70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    this = (FArray *)(in_ECX + 0x10c + iVar2 * 0xc);
    for (iVar1 = 0; iVar1 < *(int *)(this + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(this,4,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005e7ef Catch@1005e7ef

void Catch_1005e7ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1005e803 Catch@1005e803

void Catch_1005e803(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::InitStuckState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e820 FUN_1005e820

undefined4 FUN_1005e820(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2e90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(uint *)(in_ECX + 0xac) & 0x2000) != 0) {
    for (piVar3 = *(int **)(in_ECX + 0x48); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      piVar1 = (int *)FUN_1005de70(*(undefined4 *)(*piVar3 + 4));
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xfc))(0);
        if (iVar2 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1005e8b9 Catch@1005e8b9

void Catch_1005e8b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005e8cd Catch@1005e8cd

void Catch_1005e8cd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsMinimizedWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005e8f0 FUN_1005e8f0

void FUN_1005e8f0(int param_1,int param_2,int param_3,int param_4,char param_5,undefined4 param_6,
                 undefined4 param_7)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2eb0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_5 == '\0') goto switchD_1005e98b_default;
  *(undefined1 *)(in_ECX + 0xa4) = 1;
  *(undefined4 *)(in_ECX + 0x94) = param_6;
  *(undefined4 *)(in_ECX + 0x98) = param_7;
  switch(param_6) {
  case 0:
    iVar3 = param_1;
    goto LAB_1005e97d;
  case 1:
    iVar3 = *(int *)GSEKScreenX_exref;
    goto LAB_1005e97a;
  case 2:
    *(int *)(in_ECX + 0x9c) = param_3;
    break;
  case 5:
    iVar3 = *(int *)GSEKScreenX_exref / 2;
LAB_1005e97a:
    iVar3 = iVar3 - param_1;
LAB_1005e97d:
    *(int *)(in_ECX + 0x9c) = iVar3;
  }
  switch(param_7) {
  case 2:
    *(int *)(in_ECX + 0xa0) = param_4;
    break;
  case 3:
    *(int *)(in_ECX + 0xa0) = param_2;
    break;
  case 4:
    iVar3 = *(int *)GSEKScreenY_exref;
    goto LAB_1005e9bf;
  case 5:
    iVar3 = *(int *)GSEKScreenY_exref / 2;
LAB_1005e9bf:
    *(int *)(in_ECX + 0xa0) = iVar3 - param_2;
  }
switchD_1005e98b_default:
  FUN_1005e770();
  iVar3 = *(int *)(in_ECX + 0x80);
  iVar1 = *(int *)(in_ECX + 0x84);
  *(int *)(in_ECX + 0x80) = param_1;
  *(int *)(in_ECX + 0x84) = param_2;
  if (param_3 != 0) {
    fVar2 = (float)param_3;
    if (param_3 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(in_ECX + 0x88) = fVar2;
  }
  if (param_4 != 0) {
    fVar2 = (float)param_4;
    if (param_4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(in_ECX + 0x8c) = fVar2;
  }
  for (piVar4 = *(int **)(in_ECX + 0x48); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    (**(code **)(**(int **)(*piVar4 + 4) + 0x14c))(param_1 - iVar3,param_2 - iVar1);
  }
  if ((*(int *)(in_ECX + 0xb8) != 0) && (*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) != 0)) {
    FUN_1005b920();
  }
  if ((*(uint *)(in_ECX + 0xac) & 0x100000) != 0) {
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_1005cb90(&local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005eaac Catch@1005eaac

void Catch_1005eaac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005eac0 Catch@1005eac0

void Catch_1005eac0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005eb10 FUN_1005eb10

void FUN_1005eb10(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int unaff_retaddr;
  
  FUN_1005e770();
  iVar1 = in_ECX[0x21];
  iVar2 = param_3[1];
  (**(code **)(*in_ECX + 0x14c))((*param_3 - in_ECX[0x20]) + param_1,0);
  (**(code **)(*in_ECX + 0x14c))(0,unaff_retaddr - (iVar1 - iVar2));
  return;
}


// ==== 1005eb60 FUN_1005eb60

void FUN_1005eb60(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  int *piVar8;
  uint uStack_50;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2ed0;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  puVar4 = &uStack_50;
  if (*(int *)(in_ECX + 0x160) != 0) {
    iVar5 = FUN_10058f70();
    if (iVar5 == 0) {
      param_2 = 0.0;
      param_1 = 0.0;
      puVar4 = (uint *)local_14;
    }
    else {
      iVar6 = FUN_1005be90(iVar5);
      param_1 = (float)iVar6;
      iVar5 = FUN_1005bf40(iVar5);
      param_2 = (float)iVar5;
      puVar4 = (uint *)local_14;
    }
  }
  local_14 = (undefined1 *)puVar4;
  fVar1 = param_1 * 3.0;
  fVar2 = param_2 * 4.0;
  if (fVar2 < fVar1 == (fVar2 == fVar1)) {
    param_2 = fVar1 * 0.25;
  }
  else {
    param_1 = fVar2 / 3.0;
  }
  FUN_1005e770();
  if ((*(byte *)(in_ECX + 0xac) & 0x80) != 0) {
    local_28[0] = 0;
    local_20 = local_20 & 0xffffffff;
    FUN_1005d0a0(local_28);
    local_20._0_4_ = (undefined4)(longlong)ROUND(local_20._4_4_);
    uVar3 = (undefined4)local_20;
    local_20 = (ulonglong)ROUND(param_1);
    (**(code **)(**(int **)(in_ECX + 0xc0) + 0x1f8))((undefined4)local_20,uVar3);
  }
  local_18 = *(undefined4 *)(in_ECX + 0x88);
  local_20 = CONCAT44(*(undefined4 *)(in_ECX + 0x8c),(undefined4)local_20);
  *(float *)(in_ECX + 0x8c) = param_2;
  *(float *)(in_ECX + 0x88) = param_1;
  FUN_1005a5c0();
  for (piVar8 = *(int **)(in_ECX + 0x48); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
    piVar7 = (int *)FUN_1005dea0(*(undefined4 *)(*piVar8 + 4));
    local_40[0] = 0;
    local_38 = 0;
    local_34 = 0;
    FUN_10058770(local_40);
    (**(code **)(*piVar7 + 0x128))(local_38,local_34);
  }
  for (piVar8 = *(int **)(in_ECX + 0x48); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
    iVar5 = FUN_1005dea0(*(undefined4 *)(*piVar8 + 4));
    if (iVar5 != 0) {
      FUN_1005a5c0();
    }
  }
  for (piVar8 = *(int **)(in_ECX + 0x48); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
    iVar5 = FUN_10005c80(*(undefined4 *)(*piVar8 + 4));
    if (iVar5 != 0) {
      FUN_10059c60(3);
    }
  }
  for (piVar8 = *(int **)(in_ECX + 0x48); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
    iVar5 = FUN_10005c80(*(undefined4 *)(*piVar8 + 4));
    if (iVar5 != 0) {
      FUN_1001fca0(local_18,local_20._4_4_,param_1,param_2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005edd3 Catch@1005edd3

void Catch_1005edd3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1005ede7 Catch@1005ede7

void Catch_1005ede7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowSize43");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005ee10 FUN_1005ee10

void FUN_1005ee10(float param_1,float param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  uint uStack_50;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2ef0;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  puVar2 = &uStack_50;
  if (*(int *)(in_ECX + 0x160) != 0) {
    iVar3 = FUN_10058f70();
    if (iVar3 == 0) {
      param_2 = 0.0;
      param_1 = 0.0;
      puVar2 = (uint *)local_14;
    }
    else {
      iVar4 = FUN_1005be90(iVar3);
      param_1 = (float)iVar4;
      iVar3 = FUN_1005bf40(iVar3);
      param_2 = (float)iVar3;
      puVar2 = (uint *)local_14;
    }
  }
  local_14 = (undefined1 *)puVar2;
  FUN_1005e770();
  if ((*(byte *)(in_ECX + 0xac) & 0x80) != 0) {
    local_28[0] = 0;
    local_20 = local_20 & 0xffffffff;
    FUN_1005d0a0(local_28);
    local_20._0_4_ = (undefined4)(longlong)ROUND(local_20._4_4_);
    uVar1 = (undefined4)local_20;
    local_20 = (ulonglong)ROUND(param_1);
    (**(code **)(**(int **)(in_ECX + 0xc0) + 0x1f8))((undefined4)local_20,uVar1);
  }
  local_18 = *(undefined4 *)(in_ECX + 0x88);
  local_20 = CONCAT44(*(undefined4 *)(in_ECX + 0x8c),(undefined4)local_20);
  *(float *)(in_ECX + 0x8c) = param_2;
  *(float *)(in_ECX + 0x88) = param_1;
  FUN_1005a5c0();
  for (piVar6 = *(int **)(in_ECX + 0x48); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
    piVar5 = (int *)FUN_1005dea0(*(undefined4 *)(*piVar6 + 4));
    local_40[0] = 0;
    local_38 = 0;
    local_34 = 0;
    FUN_10058770(local_40);
    (**(code **)(*piVar5 + 0x128))(local_38,local_34);
  }
  for (piVar6 = *(int **)(in_ECX + 0x48); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
    iVar3 = FUN_1005dea0(*(undefined4 *)(*piVar6 + 4));
    if (iVar3 != 0) {
      FUN_1005a5c0();
    }
  }
  for (piVar6 = *(int **)(in_ECX + 0x48); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
    iVar3 = FUN_10005c80(*(undefined4 *)(*piVar6 + 4));
    if (iVar3 != 0) {
      FUN_10059c60(3);
    }
  }
  for (piVar6 = *(int **)(in_ECX + 0x48); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
    iVar3 = FUN_10005c80(*(undefined4 *)(*piVar6 + 4));
    if (iVar3 != 0) {
      FUN_1001fca0(local_18,local_20._4_4_,param_1,param_2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005f053 Catch@1005f053

void Catch_1005f053(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1005f067 Catch@1005f067

void Catch_1005f067(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005f090 FUN_1005f090

void FUN_1005f090(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_10 [4];
  
  FUN_1005e770();
  if ((*(int *)(in_ECX[0x2e] + 0xc) != 0) && (*(int *)(*(int *)(in_ECX[0x2e] + 0xc) + 4) != 0)) {
    local_18 = 0;
    local_10[0] = 0;
    FUN_1005d0a0(local_20);
    FUN_1005d0a0(local_10);
    iVar1 = *in_ECX;
    uVar2 = FUN_101c19e0(0);
    (**(code **)(iVar1 + 0x14c))(uVar2);
  }
  return;
}


// ==== 1005f110 FUN_1005f110

undefined4 FUN_1005f110(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (0.0 < (float)in_ECX[0x69]) {
    fVar1 = (float)in_ECX[0x69] - *(float *)(DAT_103663bc + 0x50f4);
    in_ECX[0x69] = (int)fVar1;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      iVar2 = FUN_101c19e0();
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      (**(code **)(*in_ECX + 0xe8))(iVar2,0,0);
    }
    else {
      (**(code **)(*in_ECX + 0xe8))((char)in_ECX[0x6a],0,1);
      (**(code **)(*in_ECX + 0x1ec))();
    }
  }
  if (0.0 < (float)in_ECX[0x6d]) {
    fVar1 = (float)in_ECX[0x6d] - *(float *)(DAT_103663bc + 0x50f4);
    in_ECX[0x6d] = (int)fVar1;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      in_ECX[0x6e] = (int)(*(float *)(DAT_103663bc + 0x50f4) * (float)in_ECX[0x6b] +
                          (float)in_ECX[0x6e]);
      iVar2 = FUN_101c19e0();
      in_ECX[0x6e] = (int)(float)(extraout_ST0 - (float10)iVar2);
      in_ECX[0x6f] = (int)(*(float *)(DAT_103663bc + 0x50f4) * (float)in_ECX[0x6c] +
                          (float)in_ECX[0x6f]);
      iVar3 = FUN_101c19e0();
      in_ECX[0x6f] = (int)(float)(extraout_ST0_00 - (float10)iVar3);
      (**(code **)(*in_ECX + 0x144))(in_ECX[0x20] + iVar2,in_ECX[0x21] + iVar3,0);
    }
    else {
      (**(code **)(*in_ECX + 0x144))(in_ECX[0x70],in_ECX[0x71],0);
      in_ECX[0x6b] = 0;
      in_ECX[0x6c] = 0;
      in_ECX[0x6d] = 0;
      in_ECX[0x70] = 0;
      in_ECX[0x71] = 0;
      in_ECX[0x6e] = 0;
      in_ECX[0x6f] = 0;
      (**(code **)(*in_ECX + 0x1e8))();
    }
  }
  for (piVar5 = (int *)in_ECX[0x12]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
    piVar4 = (int *)FUN_10010290(*(undefined4 *)(*piVar5 + 4));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x68))(0x510,0,0);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005f368 Catch@1005f368

void Catch_1005f368(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1005f37c Catch@1005f37c

void Catch_1005f37c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005f3a0 FUN_1005f3a0

bool FUN_1005f3a0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  UUIScript *this;
  int iVar3;
  int *in_ECX;
  FString *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e2f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 9) {
    if (param_1 == 0x10) {
      DAT_1036c670 = 1;
    }
    goto LAB_1005f479;
  }
  if (DAT_1036c670 == 0) {
    if (in_ECX[0x36] == 0) {
      this_00 = (FString *)(in_ECX + 0x3b);
      goto LAB_1005f43b;
    }
    piVar1 = (int *)FUN_10010290(*(undefined4 *)(in_ECX[0x36] + 4));
  }
  else if (in_ECX[0x37] == 0) {
    this_00 = (FString *)(in_ECX + 0x38);
LAB_1005f43b:
    iVar3 = FString::operator!=(this_00,(ushort *)&DAT_1022f9f8);
    if (iVar3 == 0) goto LAB_1005f479;
    uVar2 = FUN_10058f70();
    FUN_10005c30(this_00,uVar2);
    piVar1 = (int *)FUN_100d0cb0(this_00,uVar2);
  }
  else {
    piVar1 = (int *)FUN_10010290(*(undefined4 *)(in_ECX[0x37] + 4));
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*in_ECX + 0x7c))();
    (**(code **)(*piVar1 + 0x78))();
  }
LAB_1005f479:
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    UUIScript::eventOnKeyDown(this,(uchar)param_1);
  }
  iVar3 = (**(code **)(*in_ECX + 0x88))();
  ExceptionList = local_10;
  return iVar3 != 0;
}


// ==== 1005f4b7 Catch@1005f4b7

void Catch_1005f4b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005f4cb Catch@1005f4cb

void Catch_1005f4cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnKeyDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005f4f0 FUN_1005f4f0

undefined4 FUN_1005f4f0(int param_1)

{
  int *piVar1;
  UUIScript *pUVar2;
  undefined4 uVar3;
  int *in_ECX;
  FItemInfo aFStack_2a0 [300];
  undefined4 uStack_174;
  FItemInfo *pFStack_170;
  uint uStack_16c;
  FItemInfo local_15c [308];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e2f6c;
  local_10 = ExceptionList;
  uStack_16c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_16c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_170 = (FItemInfo *)0x1005f532;
  FItemInfo::FItemInfo(local_15c);
  local_8._0_1_ = 1;
  pFStack_170 = (FItemInfo *)0x1005f542;
  piVar1 = (int *)FUN_1014a620();
  uStack_174 = 0x1005f550;
  FUN_1014a570();
  if ((piVar1 != (int *)0x0) && (piVar1 != in_ECX)) {
    pFStack_170 = (FItemInfo *)0x1005f564;
    pUVar2 = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
    if ((pUVar2 != (UUIScript *)0x0) && (param_1 != 0)) {
      pFStack_170 = local_15c;
      uStack_174 = 0x1005f57d;
      FUN_1002c640();
      FItemInfo::FItemInfo(aFStack_2a0,local_15c);
      local_8._0_1_ = 2;
      uVar3 = FUN_10057590(local_28);
      local_8._0_1_ = 4;
      UUIScript::eventOnDragItemStart(pUVar2,uVar3);
      local_8._0_1_ = 1;
      pFStack_170 = (FItemInfo *)0x1005f5bf;
      FString::~FString(local_28);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_170 = (FItemInfo *)0x1005f5ce;
  FItemInfo::~FItemInfo(local_15c);
  ExceptionList = local_10;
  return 0;
}


// ==== 1005f5e4 Catch@1005f5e4

void Catch_1005f5e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005f5f8 Catch@1005f5f8

void Catch_1005f5f8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnDragItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005f620 FUN_1005f620

undefined4 FUN_1005f620(void)

{
  UUIScript *this;
  FString *pFVar1;
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e2f99;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    pFVar1 = (FString *)FUN_10057590(local_28);
    local_8._0_1_ = 1;
    UUIScript::eventOnDragItemEnd(this,pFVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1005f6a1 Catch@1005f6a1

void Catch_1005f6a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005f6b5 Catch@1005f6b5

void Catch_1005f6b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnDragItemEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005f6e0 FUN_1005f6e0

undefined4 FUN_1005f6e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *in_ECX;
  FItemInfo aFStack_2ac [308];
  int iStack_178;
  FItemInfo *pFStack_174;
  uint uStack_170;
  FItemInfo local_160 [308];
  FString local_2c [20];
  UUIScript *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e2fdc;
  local_10 = ExceptionList;
  uStack_170 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_170;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_174 = (FItemInfo *)0x1005f722;
  FItemInfo::FItemInfo(local_160);
  local_8._0_1_ = 1;
  pFStack_174 = (FItemInfo *)0x1005f732;
  local_18 = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if ((local_18 != (UUIScript *)0x0) && (param_1 != 0)) {
    pFStack_174 = local_160;
    iStack_178 = 0x1005f758;
    FUN_1002c640();
    iStack_178 = 0x1005f764;
    FUN_10147b00();
    iStack_178 = (int)(short)param_2;
    pFStack_174 = (FItemInfo *)(int)(short)((uint)param_2 >> 0x10);
    FItemInfo::FItemInfo(aFStack_2ac,local_160);
    local_8._0_1_ = 2;
    uVar1 = FUN_10057590(local_2c);
    local_8._0_1_ = 4;
    UUIScript::eventOnDropItem(local_18,uVar1);
    local_8._0_1_ = 1;
    pFStack_174 = (FItemInfo *)0x1005f7aa;
    FString::~FString(local_2c);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_174 = (FItemInfo *)0x1005f7b9;
  FItemInfo::~FItemInfo(local_160);
  ExceptionList = local_10;
  return 1;
}


// ==== 1005f7d2 Catch@1005f7d2

void Catch_1005f7d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1005f7e6 Catch@1005f7e6

void Catch_1005f7e6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnDropItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005f810 FUN_1005f810

undefined4 FUN_1005f810(int param_1,int param_2)

{
  UUIScript *pUVar1;
  FString *pFVar2;
  int *in_ECX;
  FItemInfo aFStack_2ac [300];
  undefined4 uStack_180;
  uint uStack_178;
  FItemInfo local_168 [308];
  FString local_34 [20];
  FString local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e3025;
  local_10 = ExceptionList;
  uStack_178 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_178;
  ExceptionList = &local_10;
  local_8 = 0;
  FItemInfo::FItemInfo(local_168);
  local_8._0_1_ = 1;
  pUVar1 = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if ((pUVar1 != (UUIScript *)0x0) && (param_1 != 0)) {
    uStack_180 = 0x1005f883;
    FUN_1002c640();
    uStack_180 = 0x1005f891;
    FString::FString(local_20,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 2;
    if (param_2 == *(int *)(DAT_103663bc + 0x50ac)) {
      uStack_180 = 0x1005f8b5;
      FString::operator=(local_20,(ushort *)L"Console");
    }
    else if (param_2 == 0) {
      uStack_180 = 0x1005f8c9;
      FString::operator=(local_20,(ushort *)&DAT_1022f9f8);
    }
    else {
      uStack_180 = 0x1005f8d4;
      pFVar2 = (FString *)FUN_10057590();
      local_8._0_1_ = 3;
      uStack_180 = 0x1005f8e2;
      FString::operator=(local_20,pFVar2);
      local_8._0_1_ = 2;
      FString::~FString(local_34);
    }
    FItemInfo::FItemInfo(aFStack_2ac,local_168);
    local_8._0_1_ = 2;
    UUIScript::eventOnDropItemSource(pUVar1,local_20);
    local_8._0_1_ = 1;
    FString::~FString(local_20);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FItemInfo::~FItemInfo(local_168);
  ExceptionList = local_10;
  return 1;
}


// ==== 1005f94c Catch@1005f94c

void Catch_1005f94c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1005f960 Catch@1005f960

void Catch_1005f960(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnDropItemSource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005f980 FUN_1005f980

void FUN_1005f980(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  NCWnd *in_ECX;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UWindowHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10002070(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1005fa0a;
    appFailAssert("m_pScriptHandle",".\\Src\\NWnd.cpp",0xce9);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1005fa3e Catch@1005fa3e

void Catch_1005fa3e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005fa52 Catch@1005fa52

void Catch_1005fa52(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005fa70 FUN_1005fa70

void FUN_1005fa70(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uStack_3c;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3070;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  puVar2 = &uStack_3c;
  if (param_1 == 0) {
    appFailAssert("a_StuckWndList",".\\Src\\NWnd.cpp",0xde7);
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  iVar3 = FUN_100ac320(local_18);
  if (iVar3 == -1) {
    FUN_100d9a30(local_1c);
    for (; iVar4 < 4; iVar4 = iVar4 + 1) {
      iVar3 = 0;
      while( true ) {
        iVar1 = in_ECX + iVar4 * 0xc;
        if (*(int *)(iVar1 + 0x110) <= iVar3) break;
        if (*(int *)(*(int *)(iVar1 + 0x10c) + iVar3 * 4) != 0) {
          FUN_1005fa70(param_1);
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005fb3b Catch@1005fb3b

void Catch_1005fb3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1005fb4f Catch@1005fb4f

void Catch_1005fb4f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetStuckWndList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005fb70 FUN_1005fb70

undefined4 FUN_1005fb70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_2;
  puStack_c = &LAB_101e3090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  if (param_1 == -1) {
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      if (iVar3 == -1) {
        iVar2 = *(int *)(in_ECX + 0x110 + iVar4 * 0xc);
joined_r0x1005fbfc:
        if (iVar2 != 0) goto LAB_1005fc9d;
      }
      else if (iVar3 == -2) {
        iVar2 = in_ECX + iVar4 * 0xc;
        iVar1 = *(int *)(iVar2 + 0x110);
        if (0 < iVar1) {
          if (iVar1 == 1) {
            iVar2 = **(int **)(iVar2 + 0x10c);
            goto joined_r0x1005fbfc;
          }
          goto LAB_1005fc9d;
        }
      }
      else {
        iVar2 = FUN_100ac320(&param_2);
        if (iVar2 != -1) goto LAB_1005fc9d;
      }
    }
  }
  else {
    if ((param_1 < 0) || (3 < param_1)) {
      appFailAssert("0 <= a_nStickDirection && a_nStickDirection < SD_MAX",".\\Src\\NWnd.cpp",0xe2c)
      ;
    }
    if (param_2 == -1) {
      bVar5 = *(int *)(in_ECX + 0x110 + param_1 * 0xc) == 0;
    }
    else {
      if (param_2 == -2) {
        iVar3 = in_ECX + param_1 * 0xc;
        iVar4 = *(int *)(iVar3 + 0x110);
        if (iVar4 < 1) {
          ExceptionList = local_10;
          return 0;
        }
        if ((iVar4 == 1) && (**(int **)(iVar3 + 0x10c) == 0)) {
          ExceptionList = local_10;
          return 0;
        }
        ExceptionList = local_10;
        return 1;
      }
      iVar3 = FUN_100ac320(&param_2);
      bVar5 = iVar3 == -1;
    }
    if (!bVar5) {
LAB_1005fc9d:
      local_18 = 1;
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1005fcbb Catch@1005fcbb

void Catch_1005fcbb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1005fccf Catch@1005fccf

void Catch_1005fccf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::IsStuck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005fcf0 FUN_1005fcf0

void FUN_1005fcf0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e30b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100717b0(&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1005fd4c Catch@1005fd4c

void Catch_1005fd4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005fd60 Catch@1005fd60

void Catch_1005fd60(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::AddAnchorChildWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005fd80 FUN_1005fd80

undefined4 * FUN_1005fd80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_10097bd0(0x14);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_1005abf0(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1006b150();
  }
  return puVar2 + 4;
}


// ==== 1005fe00 FUN_1005fe00

void FUN_1005fe00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e30e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1005fe50 FUN_1005fe50

void FUN_1005fe50(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(uint *)(in_ECX + 0xac) = *(uint *)(in_ECX + 0xac) | 2;
  if ((*(uint *)(in_ECX + 0xac) & 0x2000) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x13c))();
  }
  FUN_1005e2d0();
  ExceptionList = local_10;
  return;
}


// ==== 1005fec4 Catch@1005fec4

void Catch_1005fec4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005fed8 Catch@1005fed8

void Catch_1005fed8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005ff00 FUN_1005ff00

void FUN_1005ff00(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0x2b] = in_ECX[0x2b] & 0xfffffffd;
  iVar1 = FUN_1005e820();
  if (iVar1 != 0) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x13c))();
  }
  FUN_1005e3b0();
  (**(code **)(*in_ECX + 0x11c))();
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  if (iVar1 != 0) {
    FUN_1005c280(in_ECX[0x2e]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1005ff98 Catch@1005ff98

void Catch_1005ff98(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1005ffac Catch@1005ffac

void Catch_1005ffac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1005ffd0 FUN_1005ffd0

void FUN_1005ffd0(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *in_ECX;
  int *piVar7;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3140;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0x2a] == 0) {
    puVar1 = &uStack_48;
    if ((char)in_ECX[0x29] != '\0') {
      switch(in_ECX[0x25]) {
      case 0:
        iVar3 = in_ECX[0x27];
        break;
      case 1:
        iVar3 = *(int *)GSEKScreenX_exref - in_ECX[0x27];
        break;
      case 2:
        iVar3 = *(int *)GSEKScreenX_exref / 2 - in_ECX[0x27] / 2;
        break;
      default:
        iVar3 = local_1c;
        break;
      case 5:
        iVar3 = *(int *)GSEKScreenX_exref / 2 - in_ECX[0x27];
      }
      iVar4 = local_1c;
      switch(in_ECX[0x26]) {
      case 2:
        iVar4 = *(int *)GSEKScreenY_exref / 2 - in_ECX[0x28] / 2;
        break;
      case 3:
        iVar4 = in_ECX[0x28];
        break;
      case 4:
        iVar4 = *(int *)GSEKScreenY_exref - in_ECX[0x28];
        break;
      case 5:
        iVar4 = *(int *)GSEKScreenY_exref / 2 - in_ECX[0x28];
      }
      local_34 = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      FUN_1005d0a0(&local_38);
      FUN_1005eb10(iVar3,iVar4,&local_38);
      puVar1 = (uint *)local_14;
    }
  }
  else {
    local_14 = (undefined1 *)&uStack_48;
    uVar2 = FUN_10056d10();
    FUN_10056e10(&local_20);
    iVar3 = FUN_10056d90();
    (**(code **)(*in_ECX + 0xd0))(uVar2,local_20,local_1c);
    if (iVar3 == 0) {
      local_20 = 0;
      (**(code **)(*in_ECX + 0xd0))(0,0,0);
    }
    iVar3 = FUN_10056ea0();
    local_1c = iVar3;
    iVar4 = FUN_10056f20();
    local_18 = iVar4;
    if ((iVar3 != -1) || (puVar1 = (uint *)local_14, iVar4 != -1)) {
      uVar5 = (**(code **)(*in_ECX + 0x84))();
      if ((uVar5 & 0x8000000) == 0) {
        local_1c = iVar3;
        if (iVar3 == -1) {
          local_1c = FUN_101c19e0();
        }
        local_18 = iVar4;
        if (iVar4 == -1) {
          local_18 = FUN_101c19e0();
        }
        (**(code **)(*in_ECX + 0x128))((float)local_1c,(float)local_18);
        puVar1 = (uint *)local_14;
      }
      else {
        puVar1 = (uint *)local_14;
        switch(in_ECX[0x17]) {
        case 1:
        case 2:
          if (iVar3 != -1) {
            iVar3 = *in_ECX;
            uVar2 = FUN_101c19e0();
            (**(code **)(iVar3 + 0x68))(0x501,0x1f1f1f1f,uVar2);
            puVar1 = (uint *)local_14;
          }
          break;
        case 3:
        case 4:
          if (iVar4 != -1) {
            iVar3 = *in_ECX;
            uVar2 = FUN_101c19e0();
            (**(code **)(iVar3 + 0x68))(0x501,0x1f1f1f1f,uVar2);
            puVar1 = (uint *)local_14;
          }
        }
      }
    }
  }
  local_14 = (undefined1 *)puVar1;
  if ((in_ECX[0x14] != 0) && (iVar3 = (**(code **)(*(int *)in_ECX[0x14] + 0xfc))(0), iVar3 != 0)) {
    (**(code **)(*in_ECX + 0x158))();
  }
  for (piVar7 = (int *)in_ECX[0x12]; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    piVar6 = (int *)FUN_10005c80(*(undefined4 *)(*piVar7 + 4));
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 200))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100602d9 Catch@100602d9

void Catch_100602d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100602ed Catch@100602ed

void Catch_100602ed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetDefaultPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060350 FUN_10060350

undefined4 FUN_10060350(void)

{
  FString *this;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (FString *)(in_ECX + 0x51);
  iVar1 = FString::operator!=(this,(ushort *)&DAT_1022f9f8);
  if (iVar1 != 0) {
    uVar2 = FUN_1005e230(this);
    iVar1 = FUN_10010290(uVar2);
    in_ECX[0x54] = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_10005c30(L"Anchor RelativeTo window(name=%s) not found!!",*(undefined4 *)this,
                           in_ECX[0x52],in_ECX[0x53]);
      FUN_100d01f0(uVar2);
    }
    else {
      FUN_1005fcf0(in_ECX);
      FUN_1005a5c0();
      FString::operator=(this,(ushort *)&DAT_1022f9f8);
      if (in_ECX[0x57] != 0) {
        (**(code **)(*in_ECX + 0xd0))(0,0,0);
        in_ECX[0x57] = 0;
      }
    }
  }
  for (piVar4 = (int *)in_ECX[0x12]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    piVar3 = (int *)FUN_10010290(*(undefined4 *)(*piVar4 + 4));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x68))(0x50e,0,0);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10060474 Catch@10060474

void Catch_10060474(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060488 Catch@10060488

void Catch_10060488(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100604b0 FUN_100604b0

void FUN_100604b0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uStack_50;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e3188;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  puVar2 = &uStack_50;
  if (param_1 == (int *)0x0) {
    appFailAssert("a_pRect",".\\Src\\NWnd.cpp",0xdb9);
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  FUN_1001d7d0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1005fa70(&local_30);
  while (local_18 = iVar3, iVar3 < local_2c) {
    iVar1 = *(int *)(local_30 + iVar3 * 4);
    if (iVar1 == 0) {
      appFailAssert("pStuckWnd",".\\Src\\NWnd.cpp",0xdc1);
    }
    local_3c = 0;
    local_40 = 0;
    local_38 = 0.0;
    local_34 = 0.0;
    FUN_10058770(&local_40);
    if (local_40 < *param_1) {
      param_1[2] = (int)((float)(*param_1 - local_40) + (float)param_1[2]);
      *param_1 = local_40;
      *param_2 = iVar1;
    }
    if (local_3c < param_1[1]) {
      param_1[3] = (int)((float)(param_1[1] - local_3c) + (float)param_1[3]);
      param_1[1] = local_3c;
      *param_4 = iVar1;
    }
    if ((float)*param_1 + (float)param_1[2] < (float)local_40 + local_38) {
      param_1[2] = (int)(((float)local_40 + local_38) - (float)*param_1);
      *param_3 = iVar1;
    }
    if ((float)local_3c + local_34 <= (float)param_1[1] + (float)param_1[3]) {
      iVar3 = iVar3 + 1;
    }
    else {
      param_1[3] = (int)(((float)local_3c + local_34) - (float)param_1[1]);
      *param_5 = iVar1;
      iVar3 = iVar3 + 1;
    }
  }
  for (local_1c = 0; local_1c < local_2c; local_1c = local_1c + 1) {
  }
  FArray::Empty((FArray *)&local_30,4,0);
  local_8 = local_8 & 0xffffff00;
  FUN_10002520();
  ExceptionList = local_10;
  return;
}


// ==== 10060650 Catch@10060650

void Catch_10060650(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10060664 Catch@10060664

void Catch_10060664(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::GetPositioningRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060690 FUN_10060690

void FUN_10060690(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e31b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1005fb70(param_1,param_2);
  if (iVar1 != 0) {
    FUN_100ac320(&param_2);
    FUN_100562c0(&param_2);
    if (param_2 != 0) {
      FUN_1005dea0(*(undefined4 *)(param_2 + 4));
      uVar2 = FUN_1005a150(param_1);
      iVar1 = FUN_1005fb70(uVar2,*(undefined4 *)(in_ECX + 0xb8));
      if (iVar1 != 0) {
        FUN_10060690(uVar2,*(undefined4 *)(in_ECX + 0xb8));
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10060751 Catch@10060751

void Catch_10060751(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060765 Catch@10060765

void Catch_10060765(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::UnstickWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060790 FUN_10060790

void FUN_10060790(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e31d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0xe4))();
  if (param_1 == 0) {
    if (param_2 == 0) {
      in_ECX[0x50] = 0;
      in_ECX[0x4f] = 0;
    }
    else {
      in_ECX[0x50] = param_2;
      in_ECX[0x4f] = param_2;
    }
  }
  else {
    in_ECX[0x4f] = param_1;
    in_ECX[0x50] = param_2;
  }
  in_ECX[0x54] = param_3;
  if (param_3 == 0) {
    iVar1 = FUN_10058f70();
    in_ECX[0x54] = iVar1;
  }
  FString::operator=((FString *)(in_ECX + 0x51),(ushort *)&DAT_1022f9f8);
  in_ECX[0x55] = param_4;
  in_ECX[0x56] = param_5;
  in_ECX[0x57] = 0;
  iVar1 = FUN_1005a330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_1005a660();
    if (piVar2 == in_ECX) {
      (**(code **)(*(int *)in_ECX[0x54] + 0xe4))();
    }
  }
  FUN_1005fcf0(in_ECX);
  FUN_1005a5c0();
  ExceptionList = local_10;
  return;
}


// ==== 100608a4 Catch@100608a4

void Catch_100608a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100608b8 Catch@100608b8

void Catch_100608b8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::SetAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100608e0 FUN_100608e0

void FUN_100608e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e31f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100562c0(&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1006093c Catch@1006093c

void Catch_1006093c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060950 Catch@10060950

void Catch_10060950(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::RemoveAnchorChildWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060970 FUN_10060970

int FUN_10060970(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_1005fd80(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 100609f0 FUN_100609f0

int FUN_100609f0(ushort *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4 * 0x14;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar2 + 4),param_1);
      if (iVar1 != 0) {
        FUN_100025c0(iVar4,1);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -0x14;
    } while (-1 < iVar4);
    if (iVar3 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar4 = in_ECX[4];
          in_ECX[4] = iVar4 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar4 / 2);
      }
      FUN_1006b150();
    }
  }
  return iVar3;
}


// ==== 10060a70 FUN_10060a70

undefined4 FUN_10060a70(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uStack_3c;
  FString local_2c [16];
  int *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e3224;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xb8);
  local_1c = (int *)FUN_10004ed0(0xc);
  if (local_1c == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *local_1c = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    piVar5 = local_1c;
  }
  local_8 = local_8 & 0xffffff00;
  *piVar5 = param_1;
  if ((*(int *)(in_ECX + 0x4c) == 0) && (*(int *)(in_ECX + 0x48) == 0)) {
    *(int **)(in_ECX + 0x4c) = piVar5;
    *(int **)(in_ECX + 0x48) = piVar5;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x84))();
    if ((uVar1 & 0x800000) == 0) {
      if ((uVar1 & 0x1000000) == 0) {
        for (piVar4 = *(int **)(in_ECX + 0x48); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
          uVar1 = (**(code **)(**(int **)(*piVar4 + 4) + 0x84))();
          if ((uVar1 & 0x1000000) != 0) {
            if (piVar4 == *(int **)(in_ECX + 0x48)) {
              piVar5[2] = (int)*(int **)(in_ECX + 0x48);
              *(int **)(*(int *)(in_ECX + 0x48) + 4) = piVar5;
              *(int **)(in_ECX + 0x48) = piVar5;
            }
            else {
              *(int **)(piVar4[1] + 8) = piVar5;
              piVar5[1] = piVar4[1];
              piVar4[1] = (int)piVar5;
              piVar5[2] = (int)piVar4;
            }
            goto LAB_10060b7b;
          }
        }
      }
      piVar5[1] = *(int *)(in_ECX + 0x4c);
      *(int **)(*(int *)(in_ECX + 0x4c) + 8) = piVar5;
      *(int **)(in_ECX + 0x4c) = piVar5;
    }
    else {
      piVar5[2] = *(int *)(in_ECX + 0x48);
      *(int **)(*(int *)(in_ECX + 0x48) + 4) = piVar5;
      *(int **)(in_ECX + 0x48) = piVar5;
    }
  }
LAB_10060b7b:
  FUN_10057590(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar2 = FString::operator_int(local_2c);
  if (iVar2 != 0) {
    param_1 = *(int *)(param_1 + 4);
    puVar6 = &param_1;
    puVar3 = FString::operator*(local_2c);
    FUN_10060970(puVar3,puVar6);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return 1;
}


// ==== 10060be0 Catch@10060be0

void Catch_10060be0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060bf4 Catch@10060bf4

void Catch_10060bf4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::AddChild");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060c20 FUN_10060c20

void FUN_10060c20(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  int in_ECX;
  uint local_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e3249;
  local_10 = ExceptionList;
  local_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10057590(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FString::operator_int(local_28);
  if (iVar1 != 0) {
    puVar2 = FString::operator*(local_28);
    FUN_100609f0(puVar2);
  }
  piVar3 = *(int **)(in_ECX + 0x48);
  do {
    if (piVar3 == (int *)0x0) {
LAB_10060cd5:
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_28);
      ExceptionList = local_10;
      return;
    }
    if (param_1 == *piVar3) {
      if (piVar3[1] != 0) {
        *(int *)(piVar3[1] + 8) = piVar3[2];
      }
      if (piVar3[2] != 0) {
        *(int *)(piVar3[2] + 4) = piVar3[1];
      }
      if (*(int **)(in_ECX + 0x48) == piVar3) {
        *(int *)(in_ECX + 0x48) = piVar3[2];
      }
      if (*(int **)(in_ECX + 0x4c) == piVar3) {
        *(int *)(in_ECX + 0x4c) = piVar3[1];
      }
      FUN_10024ca0(piVar3);
      goto LAB_10060cd5;
    }
    piVar3 = (int *)piVar3[2];
  } while( true );
}


// ==== 10060d02 Catch@10060d02

void Catch_10060d02(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060d16 Catch@10060d16

void Catch_10060d16(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::DeleteChild");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060d40 FUN_10060d40

undefined4 FUN_10060d40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3270;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xb8) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xb8) + 8) + 0x68))
                    (param_1,param_2,*(int *)(in_ECX + 0xb8));
  FUN_10060a70(uVar1);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 10060dcc Catch@10060dcc

void Catch_10060dcc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060de0 Catch@10060de0

void Catch_10060de0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::RegisterChildWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060e00 FUN_10060e00

void FUN_10060e00(int param_1)

{
  int in_ECX;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == DAT_1036c674) {
    DAT_1036c674 = 0;
  }
  if ((*(byte *)(in_ECX + 0xac) & 0x40) == 0) {
    FUN_10060c20(param_1);
    piVar1 = *(int **)(*(int *)(in_ECX + 0xb8) + 8);
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 0xb8) + 8);
  }
  (**(code **)(*piVar1 + 0x6c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10060e91 Catch@10060e91

void Catch_10060e91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060ea5 Catch@10060ea5

void Catch_10060ea5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::UnRegisterChildWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060ed0 FUN_10060ed0

void FUN_10060ed0(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e32b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while (*(int *)(in_ECX + 0x48) != 0) {
    piVar1 = *(int **)(**(int **)(in_ECX + 0x48) + 4);
    FUN_10060e00(**(int **)(in_ECX + 0x48));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10060f44 Catch@10060f44

void Catch_10060f44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10060f58 Catch@10060f58

void Catch_10060f58(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::UnRegisterAllChildWindows");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10060f80 FUN_10060f80

void FUN_10060f80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e32d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 < 0) || (3 < param_1)) {
    appFailAssert("0 <= a_nStickDirection && a_nStickDirection < SD_MAX",".\\Src\\NWnd.cpp",0xe50);
  }
  iVar4 = param_2;
  iVar1 = FUN_1005fb70(param_1,param_2);
  if (iVar1 == 0) {
    if (iVar4 != 0) {
      for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
        if ((iVar1 != param_1) && (iVar2 = FUN_1005fb70(iVar1,iVar4), iVar2 != 0)) {
          FUN_10060690(iVar1,iVar4);
        }
      }
    }
    FUN_100d9a30(&param_2);
    if (iVar4 != 0) {
      FUN_1005dea0(*(undefined4 *)(iVar4 + 4));
      uVar3 = FUN_1005a150(param_1);
      iVar4 = FUN_1005fb70(uVar3,*(undefined4 *)(in_ECX + 0xb8));
      if (iVar4 == 0) {
        FUN_10060f80(uVar3,*(undefined4 *)(in_ECX + 0xb8));
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10061089 Catch@10061089

void Catch_10061089(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006109d Catch@1006109d

void Catch_1006109d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::StickWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100610c0 FUN_100610c0

void FUN_100610c0(void)

{
  int iVar1;
  int in_ECX;
  FString *this;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e32f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x150) == 0) {
    this = (FString *)(in_ECX + 0x144);
    iVar1 = FString::Len(this);
    if (iVar1 == 0) goto LAB_10061128;
    uVar2 = 0;
    FUN_10005c30(this,0);
    iVar1 = FUN_100d0cb0(this,uVar2);
    if (iVar1 == 0) goto LAB_10061128;
  }
  FUN_100608e0(in_ECX);
LAB_10061128:
  *(undefined4 *)(in_ECX + 0x13c) = 0;
  *(undefined4 *)(in_ECX + 0x140) = 0;
  FString::operator=((FString *)(in_ECX + 0x144),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0x150) = 0;
  *(undefined4 *)(in_ECX + 0x154) = 0;
  *(undefined4 *)(in_ECX + 0x158) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1006117d Catch@1006117d

void Catch_1006117d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10061191 Catch@10061191

void Catch_10061191(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::ClearAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100611b0 FUN_100611b0

void FUN_100611b0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e3321;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10061220 FUN_10061220

void FUN_10061220(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  UObject *pUVar5;
  UObject *in_ECX;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uStack_78;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3340;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)in_ECX + 0x84))();
  if ((uVar1 & 0x1000) == 0) {
    ExceptionList = local_10;
    return;
  }
  local_54 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_10058770(&local_58);
  local_40 = 0;
  iVar2 = UObject::IsA(in_ECX,(UClass *)&DAT_10361508);
  if (iVar2 == 0) {
    if (*(int *)(in_ECX + 0xc0) == 0) {
      ExceptionList = local_10;
      return;
    }
    piVar3 = (int *)FUN_1013d570(&local_48,*(int *)(in_ECX + 0xc0));
    iVar2 = *piVar3;
    local_3c = (float)piVar3[1];
    local_30 = iVar2;
    local_2c = local_3c;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x2dc);
    local_3c = *(float *)(in_ECX + 0x2e0);
  }
  local_40 = iVar2;
  FUN_10145670(&local_20,&local_24);
  local_48 = local_20;
  local_44 = local_24;
  iVar4 = FUN_1005fb70(1,0);
  if (iVar4 != 0) {
    uVar1 = local_20 - iVar2;
    if (9 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
      *param_1 = uVar1;
      uVar8 = 1;
      goto LAB_10061331;
    }
    *param_1 = 0;
  }
  iVar4 = FUN_1005fb70(0,0);
  if (iVar4 != 0) {
    uVar1 = local_44 - (int)local_3c;
    if (9 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
      param_1[1] = uVar1;
      uVar8 = 0;
      goto LAB_10061331;
    }
    param_1[1] = 0;
  }
  iVar4 = FUN_1005fb70(2,0);
  if (iVar4 != 0) {
    uVar1 = (local_48 - *(int *)(in_ECX + 0x80)) - iVar2;
    if (9 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
      *param_1 = uVar1;
      uVar8 = 2;
      goto LAB_10061331;
    }
    *param_1 = 0;
  }
  iVar2 = FUN_1005fb70(3,0);
  if (iVar2 != 0) {
    uVar1 = (local_44 - *(int *)(in_ECX + 0x84)) - (int)local_3c;
    if (10 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
      param_1[1] = uVar1;
      uVar8 = 3;
LAB_10061331:
      FUN_10060690(uVar8,0);
      ExceptionList = local_10;
      return;
    }
    param_1[1] = 0;
  }
  iVar4 = FUN_1005fb70(1,0);
  iVar2 = local_58;
  if ((iVar4 == 0) && (local_58 + 9U < 0x13)) {
    *param_1 = -local_58;
    FUN_10060f80(1,0);
  }
  iVar4 = FUN_1005fb70(0,0);
  if ((iVar4 == 0) && (local_54 + 9U < 0x13)) {
    param_1[1] = -local_54;
    FUN_10060f80(0,0);
  }
  iVar4 = FUN_1005fb70(2,0);
  if (iVar4 == 0) {
    iVar4 = FUN_101c19e0();
    local_18 = *(int *)GSEKScreenX_exref;
    if ((local_18 + -10 < iVar4 + iVar2) && (iVar4 + iVar2 < local_18 + 10)) {
      uVar1 = FUN_101c19e0();
      *param_1 = uVar1;
      FUN_10060f80(2,0);
    }
  }
  iVar2 = FUN_1005fb70(3,0);
  if (iVar2 == 0) {
    iVar2 = FUN_101c19e0();
    local_18 = *(int *)GSEKScreenY_exref;
    if ((local_18 + -10 < iVar2 + local_54) && (iVar2 + local_54 < local_18 + 10)) {
      uVar1 = FUN_101c19e0();
      param_1[1] = uVar1;
      FUN_10060f80(3,0);
    }
  }
  local_28 = *(int *)(*(int *)(*(int *)(in_ECX + 0xb8) + 8) + 0x70);
  local_1c = 0;
LAB_10061520:
  do {
    iVar2 = local_1c;
    if (local_28 <= local_1c) {
      ExceptionList = local_10;
      return;
    }
    local_64 = 0;
    local_68 = 0;
    local_60 = 0.0;
    local_5c = 0.0;
    FUN_10058770(&local_68);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0xb8) + 8) + 0x6c) + iVar2 * 4);
    local_18 = iVar2;
    do {
      pUVar5 = (UObject *)FUN_1005a660();
      if (pUVar5 == (UObject *)0x0) goto LAB_1006158f;
      iVar4 = FUN_1005a330();
    } while (iVar4 != 0);
    if (pUVar5 != in_ECX) {
LAB_1006158f:
      iVar4 = FUN_1005fb70(1,iVar2);
      if (iVar4 != 0) {
        local_2c = ABS((float)local_48 - (local_60 + (float)(local_68 + local_40)));
        if (local_2c < 10.0) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          uVar1 = (local_64 - local_54) + iVar2;
          uVar6 = (int)uVar1 >> 0x1f;
          if (((int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4) &&
             (uVar1 = (iVar4 - local_64) + local_54, uVar6 = (int)uVar1 >> 0x1f,
             (int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4)) {
            *param_1 = 0;
            iVar2 = local_18;
            goto LAB_1006162b;
          }
        }
        local_2c = (float)((local_48 - local_68) - local_40);
        uVar1 = FUN_101c19e0();
        *param_1 = uVar1;
        FUN_10060690(1,local_18);
        local_1c = local_1c + 1;
        goto LAB_10061520;
      }
LAB_1006162b:
      iVar2 = FUN_1005fb70(0,iVar2);
      if (iVar2 != 0) {
        local_2c = ABS((float)local_44 - (local_5c + (float)(local_64 + (int)local_3c)));
        if (local_2c < 10.0) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          uVar1 = (iVar2 - local_58) + local_68;
          uVar6 = (int)uVar1 >> 0x1f;
          if (((int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4) &&
             (uVar1 = (iVar4 - local_68) + local_58, uVar6 = (int)uVar1 >> 0x1f,
             (int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4)) {
            param_1[1] = 0;
            goto LAB_100616c5;
          }
        }
        local_2c = (float)((local_44 - local_64) - (int)local_3c);
        uVar1 = FUN_101c19e0();
        param_1[1] = uVar1;
        FUN_10060690(0,local_18);
        local_1c = local_1c + 1;
        goto LAB_10061520;
      }
LAB_100616c5:
      iVar2 = FUN_1005fb70(2,local_18);
      if (iVar2 != 0) {
        uVar1 = (local_48 - *(int *)(in_ECX + 0x80)) - local_40;
        if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < 10) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          local_2c = (float)(iVar2 + iVar4);
          uVar6 = (local_64 - local_54) + iVar2;
          uVar7 = (int)uVar6 >> 0x1f;
          if (((int)((uVar6 ^ uVar7) - uVar7) <= (int)local_2c) &&
             (uVar6 = (iVar4 - local_64) + local_54, uVar7 = (int)uVar6 >> 0x1f,
             (int)((uVar6 ^ uVar7) - uVar7) <= (int)local_2c)) {
            *param_1 = 0;
            goto LAB_10061742;
          }
        }
        *param_1 = uVar1;
        FUN_10060690(2,local_18);
        local_1c = local_1c + 1;
        goto LAB_10061520;
      }
LAB_10061742:
      iVar2 = FUN_1005fb70(3,local_18);
      if (iVar2 != 0) {
        uVar1 = (local_44 - *(int *)(in_ECX + 0x84)) - (int)local_3c;
        if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < 10) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          local_2c = (float)(iVar2 + iVar4);
          uVar6 = (iVar2 - local_58) + local_68;
          uVar7 = (int)uVar6 >> 0x1f;
          if (((int)((uVar6 ^ uVar7) - uVar7) <= (int)local_2c) &&
             (uVar6 = (iVar4 - local_68) + local_58, uVar7 = (int)uVar6 >> 0x1f,
             (int)((uVar6 ^ uVar7) - uVar7) <= (int)local_2c)) {
            param_1[1] = 0;
            goto LAB_100617c0;
          }
        }
        param_1[1] = uVar1;
        FUN_10060690(3,local_18);
        local_1c = local_1c + 1;
        goto LAB_10061520;
      }
LAB_100617c0:
      iVar2 = FUN_1005fb70(3,local_18);
      if (iVar2 == 0) {
        iVar2 = FUN_101c19e0();
        if ((iVar2 + local_68 + -10 < local_58) && (local_58 < iVar2 + local_68 + 10)) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          uVar1 = (local_64 - local_54) + iVar2;
          uVar6 = (int)uVar1 >> 0x1f;
          if (((int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4) &&
             (uVar1 = (iVar4 - local_64) + local_54, uVar6 = (int)uVar1 >> 0x1f,
             (int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4)) {
            uVar1 = FUN_101c19e0();
            *param_1 = uVar1;
            FUN_10060f80(1,local_18);
          }
        }
      }
      iVar2 = FUN_1005fb70(0,local_18);
      if (iVar2 == 0) {
        iVar2 = FUN_101c19e0();
        if ((iVar2 + local_64 + -10 < local_54) && (local_54 < iVar2 + local_64 + 10)) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          uVar1 = (iVar2 - local_58) + local_68;
          uVar6 = (int)uVar1 >> 0x1f;
          if (((int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4) &&
             (uVar1 = (iVar4 - local_68) + local_58, uVar6 = (int)uVar1 >> 0x1f,
             (int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4)) {
            uVar1 = FUN_101c19e0();
            param_1[1] = uVar1;
            FUN_10060f80(0,local_18);
          }
        }
      }
      iVar2 = local_18;
      iVar4 = FUN_1005fb70(2,local_18);
      if ((iVar4 == 0) && (iVar2 = FUN_1005fb70(1,iVar2), iVar2 == 0)) {
        iVar2 = FUN_101c19e0();
        if ((local_68 + -10 < iVar2 + local_58) && (iVar2 + local_58 < local_68 + 10)) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          uVar1 = (local_64 - local_54) + iVar2;
          uVar6 = (int)uVar1 >> 0x1f;
          if (((int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4) &&
             (uVar1 = (iVar4 - local_64) + local_54, uVar6 = (int)uVar1 >> 0x1f,
             (int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4)) {
            uVar1 = FUN_101c19e0();
            *param_1 = uVar1;
            FUN_10060f80(2,local_18);
          }
        }
      }
      iVar2 = local_18;
      iVar4 = FUN_1005fb70(3,local_18);
      if ((iVar4 == 0) && (iVar2 = FUN_1005fb70(0,iVar2), iVar2 == 0)) {
        iVar2 = FUN_101c19e0();
        if ((local_64 + -10 < iVar2 + local_54) && (iVar2 + local_54 < local_64 + 10)) {
          iVar2 = FUN_101c19e0();
          iVar4 = FUN_101c19e0();
          uVar1 = (iVar2 - local_58) + local_68;
          uVar6 = (int)uVar1 >> 0x1f;
          if (((int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4) &&
             (uVar1 = (iVar4 - local_68) + local_58, uVar6 = (int)uVar1 >> 0x1f,
             (int)((uVar1 ^ uVar6) - uVar6) <= iVar2 + iVar4)) {
            uVar1 = FUN_101c19e0();
            param_1[1] = uVar1;
            FUN_10060f80(3,local_18);
            local_1c = local_1c + 1;
            goto LAB_10061520;
          }
        }
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}


// ==== 10061b06 Catch@10061b06

void Catch_10061b06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10061b1a Catch@10061b1a

void Catch_10061b1a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::StickToWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10061b40 FUN_10061b40

undefined4 FUN_10061b40(void)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uStack_50;
  undefined4 *puStack_4c;
  uint uStack_48;
  undefined4 local_38 [6];
  undefined8 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e336b;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38[0] = 0;
  puStack_4c = local_38;
  uStack_50 = 0x10061b7f;
  FUN_1005d0a0();
  in_ECX[0x30] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x2c] = 0;
  if ((*(byte *)(in_ECX + 0x2b) & 0x80) == 0) goto LAB_10061c86;
  uVar4 = (uint)(in_ECX[0x16] == 1);
  puStack_4c = (undefined4 *)0x0;
  local_20 = CONCAT44(&uStack_50,(undefined4)local_20);
  FName::FName((FName *)&uStack_50,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_1005b950(0x350,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    puStack_4c = (undefined4 *)in_ECX[0x15];
    uStack_50 = uVar4;
    iVar2 = FUN_1001c510(1);
  }
  in_ECX[0x30] = iVar2;
  in_ECX[0x32] = DAT_1034c9b4;
  DAT_1034c9b4 = DAT_1034c9b4 + 1;
  *(int *)(iVar2 + 0x1cc) = in_ECX[0x32];
  if (in_ECX[0x15] == 1) {
    if (uVar4 == 0) {
      puStack_4c = (undefined4 *)0xc;
      goto LAB_10061c30;
    }
    if (uVar4 != 1) goto LAB_10061c2e;
    puStack_4c = (undefined4 *)0x0;
    uStack_50 = 0xc;
    uVar6 = 0x3f800000;
    uVar3 = 0;
  }
  else {
LAB_10061c2e:
    puStack_4c = (undefined4 *)0x14;
LAB_10061c30:
    uStack_50 = 0;
    uVar6 = 0;
    uVar3 = 0x3f800000;
  }
  (**(code **)(*(int *)in_ECX[0x30] + 0x130))(uVar3,uVar6);
  local_20 = local_20 & 0xffffffff00000000;
  (**(code **)(*(int *)in_ECX[0x30] + 0xd0))(1,0,0);
  puStack_4c = (undefined4 *)0x2;
  uStack_50 = in_ECX[0x30];
  puStack_4c = (undefined4 *)FUN_10060d40();
  uStack_50 = 0x10061c86;
  FUN_1005c1e0();
LAB_10061c86:
  if ((in_ECX[0x2b] & 0x8000000U) != 0) {
    uVar4 = in_ECX[0x17];
    uVar5 = uVar4;
    if ((((uVar4 != 3) && (uVar4 != 4)) && (uVar5 = 2, uVar4 != 2)) && (uVar4 == 1)) {
      uVar5 = uVar4;
    }
    puStack_4c = (undefined4 *)0x0;
    local_20 = CONCAT44(&uStack_50,(undefined4)local_20);
    FName::FName((FName *)&uStack_50,0);
    pUVar1 = UObject::GetTransientPackage();
    iVar2 = FUN_1005b980(0x378,pUVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      puStack_4c = (undefined4 *)0x1;
      uStack_50 = uVar5;
      iVar2 = FUN_1001c6a0();
    }
    in_ECX[0x31] = iVar2;
    *(undefined4 *)(iVar2 + 0x1cc) = 0x1f1f1f1f;
    puStack_4c = (undefined4 *)0x3;
    uStack_50 = 0;
    local_20._0_4_ = (undefined4)(longlong)ROUND((float)in_ECX[0x1b]);
    uVar3 = (undefined4)local_20;
    local_20 = (ulonglong)ROUND((float)in_ECX[0x1a]);
    (**(code **)(*(int *)in_ECX[0x31] + 0xc0))
              (in_ECX[0x18],in_ECX[0x19],(undefined4)local_20,uVar3,0);
    puStack_4c = (undefined4 *)0x804002;
    uStack_50 = in_ECX[0x31];
    puStack_4c = (undefined4 *)FUN_10060d40();
    uStack_50 = 0x10061d79;
    FUN_1005c1e0();
  }
  if ((in_ECX[0x2b] & 0x2000U) != 0) {
    puStack_4c = (undefined4 *)0x0;
    local_20 = CONCAT44(&uStack_50,(undefined4)local_20);
    FName::FName((FName *)&uStack_50,0);
    pUVar1 = UObject::GetTransientPackage();
    iVar2 = FUN_1005b9b0(0x310,pUVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      puStack_4c = (undefined4 *)0x10061db2;
      iVar2 = FUN_10024220();
    }
    in_ECX[0x14] = iVar2;
    *(undefined4 *)(iVar2 + 0x1cc) = 0xf;
    puStack_4c = (undefined4 *)0x3;
    uStack_50 = 0;
    (**(code **)(*(int *)in_ECX[0x14] + 0xc0))(0,0,0x20,0x20,0);
    uVar3 = FUN_10060d40(in_ECX[0x14],0x2001020);
    FUN_1005c1e0(uVar3);
    (**(code **)(*(int *)in_ECX[0x14] + 0x13c))();
  }
  puStack_4c = (undefined4 *)0x60;
  uStack_50 = 0x10061e07;
  iVar2 = FUN_10004ed0();
  local_20 = CONCAT44(iVar2,(undefined4)local_20);
  local_8._0_1_ = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    puStack_4c = (undefined4 *)0x10061e1c;
    iVar2 = FUN_10055020();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  in_ECX[0x35] = iVar2;
  puStack_4c = (undefined4 *)0x10061e30;
  FUN_1005a5c0();
  puStack_4c = (undefined4 *)0x10061e3c;
  (**(code **)(*in_ECX + 0x1f0))();
  ExceptionList = local_10;
  return 1;
}


// ==== 10061e54 Catch@10061e54

void Catch_10061e54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10061e68 Catch@10061e68

void Catch_10061e68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10061e90 FUN_10061e90

undefined4 FUN_10061e90(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xd4) != 0) {
    FUN_10059940(1);
    *(undefined4 *)(in_ECX + 0xd4) = 0;
  }
  if (*(int *)(in_ECX + 0x160) != 0) {
    FUN_100590e0(1);
    *(undefined4 *)(in_ECX + 0x160) = 0;
  }
  if (*(UObject **)(in_ECX + 400) != (UObject *)0x0) {
    UObject::RemoveFromRoot(*(UObject **)(in_ECX + 400));
    if (*(int **)(in_ECX + 400) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 400) + 0xc))(1);
    }
    *(undefined4 *)(in_ECX + 400) = 0;
  }
  if (DAT_103663bc != (int *)0x0) {
    (**(code **)(*DAT_103663bc + 0x7b8))();
  }
  FUN_1005e770();
  iVar1 = FUN_10058f70();
  if (iVar1 != 0) {
    FUN_10060c20(*(undefined4 *)(in_ECX + 0xb8));
  }
  FUN_10060ed0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10061f6c Catch@10061f6c

void Catch_10061f6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10061f80 Catch@10061f80

void Catch_10061f80(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10061fa0 FUN_10061fa0

void FUN_10061fa0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e3454;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1005b890();
  local_8 = 0;
  *in_ECX = NCWnd::vftable;
  FUN_100611b0();
  local_8._0_1_ = 2;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 1;
  in_ECX[0x34] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  FString::FString((FString *)(in_ECX + 0x38));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x3b));
  local_8._0_1_ = 4;
  _eh_vector_constructor_iterator_(in_ECX + 0x43,0xc,4,FUN_1005fe00,FUN_10002790);
  local_8._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x51));
  local_8._0_1_ = 6;
  in_ECX[0x56] = 0;
  in_ECX[0x55] = 0;
  FString::FString((FString *)(in_ECX + 0x59));
  local_8._0_1_ = 7;
  FString::FString((FString *)(in_ECX + 0x5d));
  local_8._0_1_ = 8;
  FString::FString((FString *)(in_ECX + 0x60));
  local_8._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x65));
  in_ECX[0x71] = 0;
  in_ECX[0x70] = 0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_1005e770();
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  FString::operator=((FString *)(in_ECX + 0x51),(ushort *)&DAT_1022f9f8);
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x58] = 0;
  in_ECX[100] = 0;
  *(undefined1 *)(in_ECX + 0x29) = 0;
  in_ECX[99] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  FString::operator=((FString *)(in_ECX + 0x38),(ushort *)&DAT_1022f9f8);
  FString::operator=((FString *)(in_ECX + 0x3b),(ushort *)&DAT_1022f9f8);
  *(undefined1 *)(in_ECX + 0x1e) = 0xff;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  *(undefined1 *)(in_ECX + 0x6a) = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x71] = 0;
  in_ECX[0x6e] = 0;
  in_ECX[0x6f] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x5c] = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 1006220d Catch@1006220d

void Catch_1006220d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10062221 Catch@10062221

void Catch_10062221(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::NCWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062240 FUN_10062240

void FUN_10062240(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int *in_ECX;
  int iVar8;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3470;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  local_8 = 0;
  if (param_1 == 0) {
    return;
  }
  local_20 = 0;
  local_24 = 0;
  iVar8 = 0;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    uVar7 = _rand();
    uVar7 = uVar7 & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    in_ECX[0x24] = uVar7;
    puVar1 = (uint *)local_14;
    puVar2 = (uint *)local_14;
    puVar3 = (uint *)local_14;
    puVar4 = (uint *)local_14;
    puVar5 = (uint *)local_14;
    puVar6 = (uint *)local_14;
    switch(uVar7) {
    case 0:
      local_24 = param_1;
      local_20 = 0;
      iVar8 = param_1;
      break;
    case 2:
switchD_100622b8_caseD_2:
      local_14 = (undefined1 *)puVar5;
      iVar8 = -param_1;
      local_24 = iVar8;
      local_20 = param_1;
      break;
    case 3:
switchD_100622b8_caseD_3:
      local_14 = (undefined1 *)puVar4;
      local_20 = -param_1;
      iVar8 = param_1;
      local_24 = param_1;
      break;
    case 4:
switchD_100622b8_caseD_4:
      local_14 = (undefined1 *)puVar3;
      param_1 = -param_1;
      puVar6 = (uint *)local_14;
    case 1:
switchD_100622b8_caseD_1:
      local_14 = (undefined1 *)puVar6;
      iVar8 = param_1;
      local_24 = param_1;
      local_20 = param_1;
      break;
    case 5:
      local_20 = 0;
      iVar8 = -param_1;
      local_24 = -param_1;
      break;
    case 6:
switchD_100622b8_caseD_6:
      local_14 = (undefined1 *)puVar2;
      iVar8 = 0;
      local_24 = 0;
      local_20 = param_1;
      break;
    case 7:
switchD_100622b8_caseD_7:
      local_14 = (undefined1 *)puVar1;
      local_20 = -param_1;
      iVar8 = 0;
      local_24 = 0;
    }
  }
  else {
    local_14 = (undefined1 *)&uStack_34;
    puVar1 = &uStack_34;
    puVar2 = &uStack_34;
    puVar3 = &uStack_34;
    puVar4 = &uStack_34;
    puVar5 = &uStack_34;
    puVar6 = &uStack_34;
    switch(in_ECX[0x24]) {
    case 0:
      param_1 = -param_1;
    case 5:
      local_20 = 0;
      iVar8 = param_1;
      local_24 = param_1;
      local_14 = (undefined1 *)&uStack_34;
      break;
    case 1:
      goto switchD_100622b8_caseD_4;
    case 2:
      goto switchD_100622b8_caseD_3;
    case 3:
      goto switchD_100622b8_caseD_2;
    case 4:
      goto switchD_100622b8_caseD_1;
    case 6:
      goto switchD_100622b8_caseD_7;
    case 7:
      goto switchD_100622b8_caseD_6;
    default:
      break;
    }
  }
  if (*(int *)GIsStickyWindow_exref != 0) {
    FUN_10061220(&local_24);
    iVar8 = local_24;
  }
  (**(code **)(*in_ECX + 0xbc))(iVar8,local_20,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10062367 Catch@10062367

void Catch_10062367(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006237b Catch@1006237b

void Catch_1006237b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MoveWindowShake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100623e0 FUN_100623e0

void FUN_100623e0(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int *in_ECX;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3490;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  local_8 = 0;
  if ((param_1 == 0) && (param_2 == 0)) {
    return;
  }
  local_24 = param_1;
  local_20 = param_2;
  ExceptionList = &local_10;
  puVar1 = &uStack_34;
  if (*(int *)GIsStickyWindow_exref != 0) {
    FUN_10061220(&local_24);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  (**(code **)(*in_ECX + 0xbc))(local_24,local_20,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10062493 Catch@10062493

void Catch_10062493(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100624a7 Catch@100624a7

void Catch_100624a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWnd::MoveWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100624e0 FUN_100624e0

undefined4 FUN_100624e0(int param_1)

{
  if ((((0xb < param_1 - 0x70U) && (param_1 != 9)) && (param_1 != 0x1b)) && (param_1 != 0x90)) {
    return 1;
  }
  return 0;
}


// ==== 10062559 Catch@10062559

void Catch_10062559(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006256d Catch@1006256d

void Catch_1006256d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::IsTypingKey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062590 FUN_10062590

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10062590(FString *param_1,int param_2,int param_3)

{
  ushort uVar1;
  FString *this;
  ushort *puVar2;
  FString *pFVar3;
  bool bVar4;
  int iVar5;
  uint uStack_1054;
  FString local_1044 [20];
  int local_1030;
  FString *local_102c;
  int local_1028;
  int local_1024;
  int local_1020;
  uint local_101c;
  undefined1 *local_1018;
  void *local_1014;
  undefined1 *puStack_1010;
  undefined4 local_100c;
  ushort local_1008;
  undefined1 local_1006 [2046];
  ushort local_808 [1024];
  uint local_8;
  
  puStack_1010 = &LAB_101e34f3;
  local_1014 = ExceptionList;
  uStack_1054 = DAT_103554c4 ^ (uint)&local_1008;
  local_1018 = (undefined1 *)&uStack_1054;
  ExceptionList = &local_1014;
  local_102c = param_1;
  local_101c = 0;
  local_100c = 1;
  local_1024 = 0;
  if ((param_3 < 1) && (param_3 < 0)) {
    local_1024 = 1;
    bVar4 = param_2 != 0;
    param_2 = -param_2;
    param_3 = -(param_3 + (uint)bVar4);
  }
  iVar5 = 0x3ff;
  local_8 = uStack_1054;
  puVar2 = appI64toa(CONCAT44(param_3,param_2));
  appStrncpy(&local_1008,puVar2,iVar5);
  this = local_102c;
  puVar2 = &local_1008;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  iVar5 = (int)puVar2 - (int)local_1006 >> 1;
  local_1028 = iVar5 + -1;
  iVar5 = local_1028 / 3 + iVar5;
  local_808[iVar5] = 0;
  local_1030 = 0;
  for (; local_1020 = iVar5 + -1, -1 < local_1028; local_1028 = local_1028 + -1) {
    if (local_1030 == (local_1030 / 3) * 3) {
      puVar2 = &local_1008;
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (uVar1 != 0);
      if (local_1028 < ((int)puVar2 - (int)local_1006 >> 1) + -1) {
        local_808[local_1020] = 0x2c;
        local_1020 = iVar5 + -2;
      }
    }
    local_808[local_1020] = (&local_1008)[local_1028];
    local_1030 = local_1030 + 1;
    iVar5 = local_1020;
  }
  FString::FString(local_102c);
  local_101c = local_101c | 1;
  if (local_1024 == 0) {
    FString::operator=(this,local_808);
  }
  else {
    pFVar3 = (FString *)FString::Printf((ushort *)local_1044,&DAT_10245ab4,local_808);
    local_100c._0_1_ = 2;
    FString::operator=(this,pFVar3);
    local_100c = CONCAT31(local_100c._1_3_,1);
    FString::~FString(local_1044);
  }
  ExceptionList = local_1014;
  __security_check_cookie(local_8 ^ (uint)&local_1008);
  return;
}


// ==== 10062759 Catch@10062759

void Catch_10062759(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 1006276d Catch@1006276d

void Catch_1006276d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::MakeStackableNumStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062790 FUN_10062790

void FUN_10062790(FString *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_410 = &LAB_101e353a;
  local_414 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_408;
  ExceptionList = &local_414;
  local_40c = 1;
  iVar1 = (param_2 % 0x15180) / 0xe10;
  iVar5 = ((param_2 % 0x15180) % 0xe10) / 0x3c;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6dcf0));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6dce4));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6dcd8));
  appSprintf(local_408,(ushort *)L"%d%s %d%s %d%s",param_2 / 0x15180,puVar4,iVar1,puVar3,iVar5,
             puVar2);
  FString::FString(param_1,local_408);
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}


// ==== 100628b3 Catch@100628b3

void Catch_100628b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100628c7 Catch@100628c7

void Catch_100628c7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::MakeTimeStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100628f0 FUN_100628f0

void FUN_100628f0(FString *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_410 = &LAB_101e358a;
  local_414 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_408;
  ExceptionList = &local_414;
  local_40c = 1;
  iVar1 = (param_2 % 0x15180) / 0xe10;
  iVar4 = (param_2 % 0x15180) % 0xe10;
  iVar2 = iVar4 / 0x3c;
  iVar4 = iVar4 % 0x3c;
  if (iVar1 < 1) {
    if (iVar2 < 1) {
      puVar3 = (ushort *)&DAT_10245b34;
    }
    else {
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6dcf0));
      iVar4 = iVar2;
    }
  }
  else {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6dce4));
    iVar4 = iVar1;
  }
  appSprintf(local_408,(ushort *)L"%d%s",iVar4,puVar3);
  FString::FString(param_1,local_408);
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}


// ==== 10062a14 Catch@10062a14

void Catch_10062a14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10062a28 Catch@10062a28

void Catch_10062a28(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::MakeTimeStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062a50 FUN_10062a50

void FUN_10062a50(FString *param_1)

{
  void *local_c14;
  undefined1 *puStack_c10;
  undefined4 local_c0c;
  wchar_t local_c08 [1024];
  CHAR local_408 [1024];
  uint local_8;
  
  puStack_c10 = &LAB_101e35da;
  local_c14 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_c08;
  ExceptionList = &local_c14;
  local_c0c = 1;
  GetCurrentDirectoryA(0x400,local_408);
  _mbstowcs(local_c08,local_408,0x400);
  FString::FString(param_1,(ushort *)local_c08);
  ExceptionList = local_c14;
  __security_check_cookie(local_8 ^ (uint)local_c08);
  return;
}


// ==== 10062b0b Catch@10062b0b

void Catch_10062b0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10062b1f Catch@10062b1f

void Catch_10062b1f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetSystemDir");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062b40 FUN_10062b40

void FUN_10062b40(FString *param_1)

{
  FString *pFVar1;
  FString aFStack_c68 [4];
  undefined4 uStack_c64;
  undefined4 uStack_c5c;
  uint uStack_c4c;
  FString local_c2c [16];
  undefined4 local_c1c;
  undefined1 *local_c18;
  void *local_c14;
  undefined1 *puStack_c10;
  undefined4 local_c0c;
  wchar_t local_c08 [1024];
  CHAR local_408 [1024];
  uint local_8;
  
  puStack_c10 = &LAB_101e364e;
  local_c14 = ExceptionList;
  uStack_c4c = DAT_103554c4 ^ (uint)local_c08;
  local_c18 = (undefined1 *)&uStack_c4c;
  ExceptionList = &local_c14;
  local_c1c = 0;
  local_c0c = 1;
  local_8 = uStack_c4c;
  GetCurrentDirectoryA(0x400,local_408);
  uStack_c5c = 0x10062bc2;
  _mbstowcs(local_c08,local_408,0x400);
  FString::FString(param_1,(ushort *)local_c08);
  local_c1c = 1;
  pFVar1 = (FString *)FString::Locs(param_1);
  local_c0c._0_1_ = 2;
  FString::operator=(param_1,pFVar1);
  local_c0c._0_1_ = 1;
  FString::~FString(local_c2c);
  uStack_c64 = 0x10062c0c;
  FString::FString((FString *)&uStack_c5c,(ushort *)L"Interface");
  local_c0c._0_1_ = 3;
  FString::FString(aFStack_c68,(ushort *)L"system");
  local_c0c._0_1_ = 1;
  pFVar1 = (FString *)FString::Substitute(param_1,local_c2c);
  local_c0c._0_1_ = 5;
  FString::operator=(param_1,pFVar1);
  local_c0c = CONCAT31(local_c0c._1_3_,1);
  FString::~FString(local_c2c);
  ExceptionList = local_c14;
  __security_check_cookie(local_8 ^ (uint)local_c08);
  return;
}


// ==== 10062c76 Catch@10062c76

void Catch_10062c76(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10062c8a Catch@10062c8a

void Catch_10062c8a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetInterfaceDir");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062cb0 FUN_10062cb0

void FUN_10062cb0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e3689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10062d00 FUN_10062d00

void FUN_10062d00(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e36b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10062d50 FUN_10062d50

void FUN_10062d50(FString *param_1)

{
  FString *in_ECX;
  
  FString::operator=(in_ECX,param_1);
  return;
}


// ==== 10062d70 FUN_10062d70

undefined4 FUN_10062d70(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  if ((*param_1 & 0x10) != 0) {
    iVar2 = 2;
    bVar5 = false;
    iVar1 = 0;
    bVar6 = true;
    pbVar3 = param_1 + 0x2c;
    pbVar4 = &DAT_10245bf4;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pbVar3 < *pbVar4;
      bVar6 = *pbVar3 == *pbVar4;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar1 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
    if (iVar1 != 0) {
      iVar2 = 3;
      bVar5 = false;
      iVar1 = 0;
      bVar6 = true;
      pbVar3 = param_1 + 0x2c;
      pbVar4 = &DAT_10245bf0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pbVar3 < *pbVar4;
        bVar6 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar1 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      }
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 10062e0e Catch@10062e0e

void Catch_10062e0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10062e22 Catch@10062e22

void Catch_10062e22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::IsValidDirectory");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062e40 FUN_10062e40

undefined4 FUN_10062e40(byte *param_1)

{
  if ((*param_1 & 0x10) != 0) {
    return 0;
  }
  return 1;
}


// ==== 10062ea5 Catch@10062ea5

void Catch_10062ea5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10062eb9 Catch@10062eb9

void Catch_10062eb9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::IsValidFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10062ee0 FUN_10062ee0

void FUN_10062ee0(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_2 + 1) >> 1;
    iVar5 = iVar2 + -1;
    iVar2 = iVar5 / 3 + iVar2;
    *(undefined2 *)(param_1 + iVar2 * 2) = 0;
    for (; iVar4 = iVar2 + -1, -1 < iVar5; iVar5 = iVar5 + -1) {
      if (iVar6 == (iVar6 / 3) * 3) {
        psVar3 = param_2;
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
        } while (sVar1 != 0);
        if (iVar5 < ((int)psVar3 - (int)(param_2 + 1) >> 1) + -1) {
          *(undefined2 *)(param_1 + iVar4 * 2) = 0x2c;
          iVar4 = iVar2 + -2;
        }
      }
      *(short *)(param_1 + iVar4 * 2) = param_2[iVar5];
      iVar6 = iVar6 + 1;
      iVar2 = iVar4;
    }
  }
  return;
}


// ==== 10062fe1 Catch@10062fe1

void Catch_10062fe1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10062ff5 Catch@10062ff5

void Catch_10062ff5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::MakeCostString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10063020 FUN_10063020

undefined4 FUN_10063020(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0xffdcdcdc;
  iVar1 = appStrlen(param_1);
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    if (param_1[iVar3] == 0x2c) {
      iVar4 = iVar4 + 1;
    }
  }
  if (4 < iVar1 - iVar4) {
    uVar2 = (iVar1 - iVar4) - 2U & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar2) {
    case 0:
      uVar5 = 0xffff80ff;
      break;
    case 1:
      uVar5 = 0xffffff00;
      break;
    case 2:
      uVar5 = 0xff00ff00;
      break;
    case 3:
      uVar5 = 0xff00ffff;
    }
  }
  ExceptionList = local_10;
  return uVar5;
}


// ==== 100630da Catch@100630da

void Catch_100630da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100630ee Catch@100630ee

void Catch_100630ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetNumericColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10063120 FUN_10063120

longlong FUN_10063120(int param_1,uint param_2)

{
  longlong lVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3760;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  lVar1 = __allmul(param_1,param_1 >> 0x1f,0,1);
  ExceptionList = local_10;
  return lVar1 + (ulonglong)param_2;
}


// ==== 1006317c Catch@1006317c

void Catch_1006317c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10063190 Catch@10063190

void Catch_10063190(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::StructToInt64");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100631b0 FUN_100631b0

void FUN_100631b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_2;
  param_3[1] = param_1;
  return;
}


// ==== 10063209 Catch@10063209

void Catch_10063209(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006321d Catch@1006321d

void Catch_1006321d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::Int64ToStruct");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10063240 FUN_10063240

void FUN_10063240(byte *param_1,uint *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  FString *this;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e37a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  param_2[1] = *(uint *)(param_1 + 4);
  param_2[2] = *(uint *)(param_1 + 8);
  *param_2 = (uint)*param_1;
  param_2[3] = *(uint *)(param_1 + 0xc) & 1;
  FString::operator=((FString *)(param_2 + 0x13),(FString *)(param_1 + 0x48));
  bVar1 = *param_1;
  if (bVar1 == 0) {
    param_2[4] = *(uint *)(param_1 + 0x10);
  }
  else if (bVar1 == 1) {
    param_2[5] = *(uint *)(param_1 + 0x14);
    FString::operator=((FString *)(param_2 + 6),(FString *)(param_1 + 0x18));
    uVar2 = FColor::operator_unsigned_long((FColor *)(param_1 + 0x24));
    if (uVar2 != 0) {
      puVar3 = FColor::DWColor((FColor *)(param_1 + 0x24));
      param_2[9] = *puVar3;
    }
    param_2[10] = *(uint *)(param_1 + 0x28) & 1;
  }
  else if (bVar1 == 2) {
    param_2[0xb] = *(uint *)(param_1 + 0x2c);
    param_2[0xc] = *(uint *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x34);
    if ((int)uVar6 < 1) {
      uVar6 = *(uint *)(param_1 + 0x2c);
    }
    param_2[0xd] = uVar6;
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      param_2[0xe] = *(uint *)(param_1 + 0x30);
    }
    else {
      param_2[0xe] = *(uint *)(param_1 + 0x38);
    }
    this = (FString *)(param_1 + 0x3c);
    iVar4 = FString::Len(this);
    if (0 < iVar4) {
      uVar7 = 1;
      puVar5 = FString::operator*(this);
      uVar6 = FUN_1003f630(puVar5,uVar7);
      param_2[0x12] = uVar6;
      FString::operator=((FString *)(param_2 + 0xf),this);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006336e Catch@1006336e

void Catch_1006336e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10063382 Catch@10063382

void Catch_10063382(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::DrawInfoToNCDrawItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100633a0 FUN_100633a0

void FUN_100633a0(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uStack_30;
  FColor local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e37c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_2 + 4) = param_1[1];
  *(int *)(param_2 + 8) = param_1[2];
  *param_2 = (char)*param_1;
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) ^ (param_1[3] ^ *(uint *)(param_2 + 0xc)) & 1;
  FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x48),(FString *)(param_1 + 0x13));
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *(int *)(param_2 + 0x10) = param_1[4];
  }
  else if (iVar1 == 1) {
    *(int *)(param_2 + 0x14) = param_1[5];
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x18),(FString *)(param_1 + 6));
    puVar2 = (undefined4 *)FColor::FColor(local_1c,param_1[9]);
    *(undefined4 *)(param_2 + 0x24) = *puVar2;
    *(uint *)(param_2 + 0x28) =
         *(uint *)(param_2 + 0x28) ^ (param_1[10] ^ *(uint *)(param_2 + 0x28)) & 1;
  }
  else if (iVar1 == 2) {
    *(int *)(param_2 + 0x2c) = param_1[0xb];
    *(int *)(param_2 + 0x30) = param_1[0xc];
    if (param_1[0xd] < 1) {
      *(int *)(param_2 + 0x2c) = param_1[0xb];
    }
    else {
      *(int *)(param_2 + 0x34) = param_1[0xd];
    }
    if (param_1[0xe] < 1) {
      *(int *)(param_2 + 0x30) = param_1[0xc];
    }
    else {
      *(int *)(param_2 + 0x38) = param_1[0xe];
    }
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x3c),(FString *)(param_1 + 0xf));
  }
  ExceptionList = local_10;
  return;
}


// ==== 100634a2 Catch@100634a2

void Catch_100634a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100634b6 Catch@100634b6

void Catch_100634b6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::NCDrawItemToDrawInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100634e0 FUN_100634e0

void FUN_100634e0(int param_1)

{
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e3a83;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FString::FString(local_34,(ushort *)(param_1 + 0x4c));
    local_8._0_1_ = 1;
    FString::FString(local_28,(ushort *)L"Name");
    local_8._0_1_ = 2;
    FUN_10040230(local_28,local_34);
    local_8._0_1_ = 1;
    FString::~FString(local_28);
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_28,(ushort *)(param_1 + 0x24c));
    local_8._0_1_ = 3;
    FString::FString(local_34,(ushort *)L"AdditionalName");
    local_8._0_1_ = 4;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 3;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x44c));
    local_8._0_1_ = 5;
    FString::FString(local_34,(ushort *)L"IconName");
    local_8._0_1_ = 6;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 5;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x54c));
    local_8._0_1_ = 7;
    FString::FString(local_34,(ushort *)L"IconNameEx1");
    local_8._0_1_ = 8;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 7;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x64c));
    local_8._0_1_ = 9;
    FString::FString(local_34,(ushort *)L"IconNameEx2");
    local_8._0_1_ = 10;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 9;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x74c));
    local_8._0_1_ = 0xb;
    FString::FString(local_34,(ushort *)L"IconNameEx3");
    local_8._0_1_ = 0xc;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 0xb;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x84c));
    local_8._0_1_ = 0xd;
    FString::FString(local_34,(ushort *)L"IconNameEx4");
    local_8._0_1_ = 0xe;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 0xd;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x94c));
    local_8._0_1_ = 0xf;
    FString::FString(local_34,(ushort *)L"ForeTexture");
    local_8._0_1_ = 0x10;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 0xf;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0xa4c));
    local_8._0_1_ = 0x11;
    FString::FString(local_34,(ushort *)L"Description");
    local_8._0_1_ = 0x12;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 0x11;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x1a4c));
    local_8._0_1_ = 0x13;
    FString::FString(local_34,(ushort *)L"FullName");
    local_8._0_1_ = 0x14;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 0x13;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)(param_1 + 0x1c4c));
    local_8._0_1_ = 0x15;
    FString::FString(local_34,(ushort *)L"DragSrcName");
    local_8._0_1_ = 0x16;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 0x15;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_34,(ushort *)L"DragSrcReserved");
    local_8._0_1_ = 0x17;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1d4c));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_28,(ushort *)(param_1 + 0x1d50));
    local_8._0_1_ = 0x18;
    FString::FString(local_34,(ushort *)L"MacroCommand");
    local_8._0_1_ = 0x19;
    FUN_10040230(local_34,local_28);
    local_8._0_1_ = 0x18;
    FString::~FString(local_34);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_34,(ushort *)L"ItemType");
    local_8._0_1_ = 0x1a;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e50));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ItemSubType");
    local_8._0_1_ = 0x1b;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e54));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ServerID");
    local_8._0_1_ = 0x1c;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e58));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ClassID");
    local_8._0_1_ = 0x1d;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e5c));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Level");
    local_8._0_1_ = 0x1e;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e60));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ItemNum");
    local_8._0_1_ = 0x1f;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e64));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Price");
    local_8._0_1_ = 0x20;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e68));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"SlotBitType");
    local_8._0_1_ = 0x21;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e6c));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Weight");
    local_8._0_1_ = 0x22;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e70));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"MaterialType");
    local_8._0_1_ = 0x23;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e74));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"WeaponType");
    local_8._0_1_ = 0x24;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e78));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Reserved");
    local_8._0_1_ = 0x25;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e7c));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Enchanted");
    local_8._0_1_ = 0x26;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e80));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"siBlessed");
    local_8._0_1_ = 0x27;
    FUN_10040090(local_34,*(undefined2 *)(param_1 + 0x1e84));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ConsumeType");
    local_8._0_1_ = 0x28;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e88));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Equipped");
    local_8._0_1_ = 0x29;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e8c));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Count");
    local_8._0_1_ = 0x2a;
    FUN_100403f0(local_34,*(undefined4 *)(param_1 + 0x1e90),*(undefined4 *)(param_1 + 0x1e94));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Selected");
    local_8._0_1_ = 0x2b;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e98));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Durability");
    local_8._0_1_ = 0x2c;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e9c));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"CrystalType");
    local_8._0_1_ = 0x2d;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ea0));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"RandomDamage");
    local_8._0_1_ = 0x2e;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ea4));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Critical");
    local_8._0_1_ = 0x2f;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ea8));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"HitModify");
    local_8._0_1_ = 0x30;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1eac));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"AttackSpeed");
    local_8._0_1_ = 0x31;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1eb0));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"MpConsume");
    local_8._0_1_ = 0x32;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1eb4));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ArmorType");
    local_8._0_1_ = 0x33;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1eb8));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"AvoidModify");
    local_8._0_1_ = 0x34;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ebc));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Damaged");
    local_8._0_1_ = 0x35;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ec0));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"PhysicalDamage");
    local_8._0_1_ = 0x36;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ec4));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"MagicalDamage");
    local_8._0_1_ = 0x37;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ec8));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"PhysicalDefense");
    local_8._0_1_ = 0x38;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ecc));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"MagicalDefense");
    local_8._0_1_ = 0x39;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ed0));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ShieldDefense");
    local_8._0_1_ = 0x3a;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ed4));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ShieldDefenseRate");
    local_8._0_1_ = 0x3b;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ed8));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Arrow");
    local_8._0_1_ = 0x3c;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1edc));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Recipe");
    local_8._0_1_ = 0x3d;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ee0));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"MpBonus");
    local_8._0_1_ = 0x3e;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ee4));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"SoulshotCount");
    local_8._0_1_ = 0x3f;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ee8));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"SpiritshotCount");
    local_8._0_1_ = 0x40;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1eec));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"DefaultPrice");
    local_8._0_1_ = 0x41;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ef0));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"PopMsgNum");
    local_8._0_1_ = 0x42;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ef4));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"BodyPart");
    local_8._0_1_ = 0x43;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ef8));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"RefineryOp1");
    local_8._0_1_ = 0x44;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1efc));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"RefineryOp2");
    local_8._0_1_ = 0x45;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1f00));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"CurrentDurability");
    local_8._0_1_ = 0x46;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1f04));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Lock");
    local_8._0_1_ = 0x47;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1f08));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"AllItemCount");
    local_8._0_1_ = 0x48;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1f0c));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ReuseDelayShareGroupID");
    local_8._0_1_ = 0x49;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1f10));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"ShowCount");
    local_8._0_1_ = 0x4a;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1f14));
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)L"Disabled");
    local_8._0_1_ = 0x4b;
    FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1f18));
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_34);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10064274 Catch@10064274

void Catch_10064274(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10064288 Catch@10064288

void Catch_10064288(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::NCItemOnlyToNCParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100642b0 FUN_100642b0

void FUN_100642b0(undefined4 *param_1)

{
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e3b39;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003faa0();
  FString::FString(local_28,(ushort *)L"HennaID");
  local_8._0_1_ = 1;
  FUN_10040090(local_28,*param_1);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"ClassID");
  local_8._0_1_ = 2;
  FUN_10040090(local_28,param_1[1]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)&DAT_10246480);
  local_8._0_1_ = 3;
  FUN_10040090(local_28,param_1[2]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)&DAT_10246478);
  local_8._0_1_ = 4;
  FUN_10040090(local_28,param_1[3]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"CanUse");
  local_8._0_1_ = 5;
  FUN_10040090(local_28,param_1[4]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"INTnow");
  local_8._0_1_ = 6;
  FUN_10040090(local_28,param_1[5]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"INTchange");
  local_8._0_1_ = 7;
  FUN_10040090(local_28,param_1[6]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"STRnow");
  local_8._0_1_ = 8;
  FUN_10040090(local_28,param_1[7]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"STRchange");
  local_8._0_1_ = 9;
  FUN_10040090(local_28,param_1[8]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"CONnow");
  local_8._0_1_ = 10;
  FUN_10040090(local_28,param_1[9]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"CONchange");
  local_8._0_1_ = 0xb;
  FUN_10040090(local_28,param_1[10]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"MENnow");
  local_8._0_1_ = 0xc;
  FUN_10040090(local_28,param_1[0xb]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"MENchange");
  local_8._0_1_ = 0xd;
  FUN_10040090(local_28,param_1[0xc]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"DEXnow");
  local_8._0_1_ = 0xe;
  FUN_10040090(local_28,param_1[0xd]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"DEXchange");
  local_8._0_1_ = 0xf;
  FUN_10040090(local_28,param_1[0xe]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"WITnow");
  local_8._0_1_ = 0x10;
  FUN_10040090(local_28,param_1[0xf]);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  FString::FString(local_28,(ushort *)L"WITchange");
  local_8._0_1_ = 0x11;
  FUN_10040090(local_28,param_1[0x10]);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10064602 Catch@10064602

void Catch_10064602(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10064616 Catch@10064616

void Catch_10064616(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::HennaInfoToNCParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10064640 FUN_10064640

void FUN_10064640(ushort *param_1,FString *param_2)

{
  int iVar1;
  FString *pFVar2;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e3b7b;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=(param_2,param_1);
  local_18 = FString::Len(param_2);
  iVar1 = FString::InStr(param_2,(ushort *)&DAT_1024265c,0);
  while (iVar1 != -1) {
    FString::FString(local_2c,param_2);
    local_8._0_1_ = 1;
    pFVar2 = (FString *)FString::Left(local_2c,(int)local_38);
    local_8._0_1_ = 2;
    FString::operator=(param_2,pFVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_38);
    FString::operator+=(param_2,(ushort *)&DAT_1023d1c8);
    pFVar2 = (FString *)FString::Mid(local_2c,(int)local_44,iVar1 + 2);
    local_8._0_1_ = 3;
    FString::operator+=(param_2,pFVar2);
    local_8._0_1_ = 1;
    FString::~FString(local_44);
    iVar1 = FString::InStr(param_2,(ushort *)&DAT_1024265c,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10064759 Catch@10064759

void Catch_10064759(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006476d Catch@1006476d

void Catch_1006476d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetNewLineString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10064790 FUN_10064790

void FUN_10064790(undefined4 param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  int iVar1;
  uint uStack_3c;
  int local_2c;
  int local_28;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3ba0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_5 != (ushort *)0x0) {
    iVar1 = appStrlen(param_5);
    local_1c = param_2 + 0xf;
    switch(iVar1) {
    case 4:
      local_18 = (uint)param_5[3];
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0((local_1c - local_2c / 2) + 8,((param_3 + 0x10) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    case 3:
      local_18 = (uint)param_5[2];
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0(((param_2 + 2) - local_2c / 2) + 8,((param_3 + 0x10) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    case 2:
      local_18 = (uint)param_5[1];
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0((local_1c - local_2c / 2) + 8,((param_3 + 3) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    case 1:
      local_18 = (uint)*param_5;
      (**(code **)(*DAT_103663c0 + 0xd0))(&local_18,&local_2c,0,0,0,0,0,0);
      FUN_100217a0(((param_2 + 2) - local_2c / 2) + 8,((param_3 + 3) - local_28 / 2) + 8,param_4,
                   &local_18,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100649ed Catch@100649ed

void Catch_100649ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10064a01 Catch@10064a01

void Catch_10064a01(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::DrawMacroText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10064a30 FUN_10064a30

FString * FUN_10064a30(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3bda;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar2 = 0;
  local_8 = 1;
  FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  while( true ) {
    iVar1 = FString::Len(param_2);
    if (iVar1 <= iVar2) break;
    FString::operator+=(param_1,&DAT_10246538);
    iVar2 = iVar2 + 1;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ==== 10064ab3 Catch@10064ab3

void Catch_10064ab3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10064ac7 Catch@10064ac7

void Catch_10064ac7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetPasswordString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10064af0 FUN_10064af0

void FUN_10064af0(short *param_1,undefined4 *param_2)

{
  short *psVar1;
  
  if ((param_1 != (short *)0x0) && (*param_1 == 8)) {
    param_1 = param_1 + 1;
  }
  if (*param_1 != 0) {
    *param_2 = param_1;
    for (; (*param_1 != 0 && (*param_1 != 8)); param_1 = param_1 + 1) {
    }
    psVar1 = param_1;
    if (param_1 != (short *)*param_2) {
      while ((psVar1 = psVar1 + -1, psVar1 != (short *)*param_2 && (*psVar1 == 0x20))) {
        *psVar1 = 0;
      }
    }
    if (*param_1 != 0) {
      *param_1 = 0;
    }
  }
  return;
}


// ==== 10064b9d Catch@10064b9d

void Catch_10064b9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10064bb1 Catch@10064bb1

void Catch_10064bb1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetLeftString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10064bd0 FUN_10064bd0

int FUN_10064bd0(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3c20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = FString::Len(param_1);
    if (iVar1 <= iVar4) break;
    puVar2 = FString::operator[](param_1,iVar4);
    uVar3 = (uint)*puVar2;
    if ((((uVar3 < 0x20) || (0x7f < uVar3)) && ((uVar3 < 0xff61 || (0xffdc < uVar3)))) &&
       (6 < uVar3 - 0xffe8)) {
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 1;
    }
    else {
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
    }
  }
  ExceptionList = local_10;
  return iVar5;
}


// ==== 10064c6d Catch@10064c6d

void Catch_10064c6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10064c81 Catch@10064c81

void Catch_10064c81(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetNativeStrLen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10064ca0 FUN_10064ca0

void FUN_10064ca0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3c40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  FStringNoInit::operator=((FStringNoInit *)(param_2 + 1),(ushort *)(param_1 + 0x1c));
  FStringNoInit::operator=((FStringNoInit *)(param_2 + 4),(ushort *)(param_1 + 0x254));
  param_2[7] = *(undefined4 *)(param_1 + 0x58);
  param_2[8] = *(undefined4 *)(param_1 + 0x14);
  param_2[9] = *(undefined4 *)(param_1 + 0x2c0);
  param_2[10] = *(undefined4 *)(param_1 + 0x218);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x80);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x7c);
  param_2[0xd] = *(undefined4 *)(param_1 + 0x88);
  param_2[0xe] = *(undefined4 *)(param_1 + 0x84);
  param_2[0xf] = *(undefined4 *)(param_1 + 0x2c8);
  param_2[0x10] = *(undefined4 *)(param_1 + 0x2c4);
  FUN_100631b0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),param_2 + 0x11);
  param_2[0x13] = *(undefined4 *)(param_1 + 0x30c);
  param_2[0x14] = *(undefined4 *)(param_1 + 0x284);
  param_2[0x15] = *(undefined4 *)(param_1 + 0x28c);
  param_2[0x16] = *(undefined4 *)(param_1 + 0x8c);
  param_2[0x17] = *(undefined4 *)(param_1 + 0x214);
  param_2[0x18] = *(undefined4 *)(param_1 + 0x224);
  param_2[0x19] = *(undefined4 *)(param_1 + 0x22c);
  param_2[0x1a] = *(undefined4 *)(param_1 + 0x21c);
  param_2[0x1b] = *(undefined4 *)(param_1 + 0x220);
  param_2[0x1c] = *(undefined4 *)(param_1 + 0x228);
  param_2[0x1d] = *(undefined4 *)(param_1 + 0x234);
  param_2[0x1e] = *(undefined4 *)(param_1 + 0x238);
  param_2[0x1f] = *(undefined4 *)(param_1 + 0x230);
  param_2[0x20] = *(undefined4 *)(param_1 + 0x1a4);
  param_2[0x21] = *(undefined4 *)(param_1 + 0x1a8);
  param_2[0x22] = *(undefined4 *)(param_1 + 0x1ac);
  param_2[0x23] = *(undefined4 *)(param_1 + 0x1b0);
  param_2[0x24] = *(undefined4 *)(param_1 + 0x19c);
  param_2[0x25] = *(undefined4 *)(param_1 + 0x1a0);
  param_2[0x26] = (float)*(double *)(param_1 + 0x1c4);
  param_2[0x27] = *(undefined4 *)(param_1 + 0x23c);
  param_2[0x28] = *(undefined4 *)(param_1 + 100);
  param_2[0x29] = *(undefined4 *)(param_1 + 0x68);
  param_2[0x2a] = *(undefined4 *)(param_1 + 0x6c);
  param_2[0x2b] = *(undefined4 *)(param_1 + 0x70);
  param_2[0x2c] = *(undefined4 *)(param_1 + 0x74);
  param_2[0x2d] = *(undefined4 *)(param_1 + 0x78);
  param_2[0x2e] = *(undefined4 *)(param_1 + 0x198);
  param_2[0x2f] = *(undefined4 *)(param_1 + 0x2b8);
  param_2[0x30] = *(undefined4 *)(param_1 + 0x2b4);
  param_2[0x31] = (int)*(short *)(param_1 + 0x2e2);
  param_2[0x32] = (int)*(short *)(param_1 + 0x2e0);
  param_2[0x33] = param_2[0x33] ^ (*(uint *)(param_1 + 0x2fc) ^ param_2[0x33]) & 1;
  uVar2 = (*(int *)(param_1 + 0x2f8) * 2 ^ param_2[0x33]) & 2U ^ param_2[0x33];
  param_2[0x33] = uVar2;
  uVar2 = (*(int *)(param_1 + 8) * 4 ^ uVar2) & 4 ^ uVar2;
  param_2[0x33] = uVar2;
  uVar2 = (*(int *)(param_1 + 0xc) * 8 ^ uVar2) & 8 ^ uVar2;
  param_2[0x33] = uVar2;
  param_2[0x33] = (*(int *)(param_1 + 0x10) << 4 ^ uVar2) & 0x10 ^ uVar2;
  iVar1 = *(int *)(param_1 + 0x204);
  if (iVar1 != 0) {
    param_2[0x34] = *(undefined4 *)(iVar1 + 0x1bc);
    param_2[0x35] = *(undefined4 *)(iVar1 + 0x1c0);
    param_2[0x36] = *(undefined4 *)(iVar1 + 0x1c4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10064f56 Catch@10064f56

void Catch_10064f56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10064f6a Catch@10064f6a

void Catch_10064f6a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::User2FUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10064f90 FUN_10064f90

float10 FUN_10064f90(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(L"CWnd" + param_3 * 4 + 3);
  return (float10)(float)((float10)CONCAT44((param_2 - *(int *)(&DAT_10245714 + param_3 * 8)) -
                                            (uint)(param_1 < uVar1),param_1 - uVar1) /
                         (float10)CONCAT44((*(int *)(&DAT_1024571c + param_3 * 8) -
                                           *(int *)(&DAT_10245714 + param_3 * 8)) -
                                           (uint)(*(uint *)(&DAT_10245718 + param_3 * 8) < uVar1),
                                           *(uint *)(&DAT_10245718 + param_3 * 8) - uVar1));
}


// ==== 1006501d Catch@1006501d

void Catch_1006501d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10065031 Catch@10065031

void Catch_10065031(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetExpRate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10065050 FUN_10065050

void FUN_10065050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_10063120(param_1,param_2,param_3);
  FUN_10064f90(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 100650b4 Catch@100650b4

void Catch_100650b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100650c8 Catch@100650c8

void Catch_100650c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetExpRate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100650f0 FUN_100650f0

undefined4 FUN_100650f0(short param_1)

{
  if (((ushort)(param_1 + 0x5400U) < 0x2ba4) &&
     ((short)(((uint)(ushort)(param_1 + 0x5400) % 0x24c) % 0x1c) != 0)) {
    return 0;
  }
  return 1;
}


// ==== 10065180 Catch@10065180

void Catch_10065180(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10065194 Catch@10065194

void Catch_10065194(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::Han_ChongSung_AType_Check");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100651c0 FUN_100651c0

void FUN_100651c0(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uStack_230;
  ushort local_218 [256];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3cc0;
  local_10 = ExceptionList;
  uStack_230 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_230;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_230;
  iVar1 = FString::Len(param_1);
  if ((0 < iVar1) && (iVar1 = FString::Len(param_1), iVar1 < 0x11)) {
    puVar2 = FString::operator*(param_1);
    appStrcpy(local_218,puVar2);
    iVar1 = FUN_10145750(local_218);
    if (iVar1 == 0) {
      FUN_1016e320(local_218);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1006527f Catch@1006527f

void Catch_1006527f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x218) = *(undefined4 *)(unaff_EBP + -0x21c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x218,&DAT_102a47f0);
}


// ==== 1006529c Catch@1006529c

void Catch_1006529c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::CheckCharacterName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100652c0 FUN_100652c0

void FUN_100652c0(FString *param_1)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  uint uStack_550;
  CHAR local_538 [800];
  WCHAR local_218 [256];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3cf0;
  local_10 = ExceptionList;
  uStack_550 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_550;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_550;
  iVar2 = FString::Len(param_1);
  if ((0 < iVar2) && (iVar2 = FString::Len(param_1), iVar2 < 0x11)) {
    puVar3 = FString::operator*(param_1);
    appStrcpy((ushort *)local_218,puVar3);
    WideCharToMultiByte(0,0,local_218,-1,local_538,800,(LPCSTR)0x0,(LPBOOL)0x0);
    pcVar4 = local_538;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_10145750(local_218);
    if (iVar2 == 0) {
      FUN_101457c0(local_218);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100653c8 Catch@100653c8

void Catch_100653c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x538) = *(undefined4 *)(unaff_EBP + -0x53c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x538,&DAT_102a47f0);
}


// ==== 100653e5 Catch@100653e5

void Catch_100653e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::CheckClanName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10065410 FUN_10065410

void FUN_10065410(UObject *param_1,ushort *param_2,int param_3)

{
  UClass *pUVar1;
  
  pUVar1 = UEnum::StaticClass();
  UObject::StaticFindObjectChecked(pUVar1,param_1,param_2,param_3);
  return;
}


// ==== 10065430 FUN_10065430

FString * FUN_10065430(FString *param_1,int param_2)

{
  uint *puVar1;
  UClass *pUVar2;
  ushort *puVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e3d4c;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  puVar1 = &uStack_3c;
  if (DAT_1036d0e0 == 0) {
    pwVar5 = L"EInputKey";
    iVar6 = DAT_1036d0e0;
    pUVar2 = UInteractions::StaticClass();
    DAT_1036d0e0 = FUN_10065410(pUVar2,pwVar5,iVar6);
    puVar1 = (uint *)local_14;
    if (DAT_1036d0e0 == 0) {
      appFailAssert("m_pInputKey",".\\Src\\NWndUtil.cpp",0x25);
      puVar1 = (uint *)local_14;
    }
  }
  local_14 = (undefined1 *)puVar1;
  puVar3 = FName::operator*((FName *)(*(int *)(DAT_1036d0e0 + 0x40) + param_2 * 4));
  FString::FString(param_1,puVar3);
  local_18 = 1;
  FString::Len(param_1);
  pFVar4 = (FString *)FString::Right(param_1,(int)local_2c);
  local_8._0_1_ = 2;
  FString::operator=(param_1,pFVar4);
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  pFVar4 = (FString *)FString::Caps(param_1);
  local_8._0_1_ = 3;
  FString::operator=(param_1,pFVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1006553a Catch@1006553a

void Catch_1006553a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006554e Catch@1006554e

void Catch_1006554e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetKeyStringFromInputKey");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10065570 FUN_10065570

void FUN_10065570(int *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  FString *this;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FString *pFVar12;
  undefined4 uVar13;
  uint uStack_68;
  FString local_58 [12];
  int local_4c;
  int local_48;
  float local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e3d79;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  uVar7 = 0;
  local_8 = 0;
  FString::FString(local_58);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_24 = 0;
  local_30 = 0;
  local_20 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = param_4;
  local_18 = 0;
  local_38 = 0;
  uVar4 = 0;
  do {
    while( true ) {
      if (param_1[1] <= local_38) {
        if ((int)param_4 < (int)uVar4) {
          param_4 = uVar4;
          local_28 = uVar4;
        }
        if ((int)local_18 < (int)uVar4) {
          local_18 = uVar4;
        }
        local_20 = local_20 + local_1c;
        *(float *)(param_2 + 8) = (float)(int)(((int)param_4 < 1) - 1 & param_4);
        local_3c = (float)(int)(((int)local_20 < 1) - 1 & local_20);
        *(float *)(param_2 + 0xc) = local_3c;
        local_2c = local_2c + 1;
        if (local_2c <= param_5) {
          fVar5 = (float)(((int)local_18 < 1) - 1 & local_18);
          *(float *)(param_3 + 8) = (float)(int)fVar5;
          *(float *)(param_3 + 0xc) = local_3c;
          local_3c = fVar5;
        }
        local_8 = local_8 & 0xffffff00;
        FString::~FString(local_58);
        ExceptionList = local_10;
        return;
      }
      piVar1 = *(int **)(*param_1 + local_38 * 4);
      if (piVar1 != (int *)0x0) break;
LAB_1006579c:
      local_38 = local_38 + 1;
    }
    if ((piVar1[3] == 0) && (*piVar1 != 0)) {
      uVar7 = uVar7 + piVar1[1];
      local_34 = uVar4 + piVar1[1];
    }
    else {
      local_2c = local_2c + 1;
      uVar7 = piVar1[1];
      local_30 = local_30 + local_1c;
      if ((int)param_4 < (int)uVar4) {
        param_4 = uVar4;
        local_28 = uVar4;
      }
      if ((int)local_18 < (int)uVar4) {
        local_18 = uVar4;
      }
      local_20 = local_20 + local_1c;
      if (local_2c == param_5) {
        *(float *)(param_3 + 8) = (float)(int)(((int)local_18 < 1) - 1 & local_18);
        local_3c = (float)(((int)local_20 < 1) - 1 & local_20);
        *(float *)(param_3 + 0xc) = (float)(int)local_3c;
      }
      local_34 = 0;
      local_1c = 0;
    }
    iVar3 = *piVar1;
    uVar4 = local_34;
    if (iVar3 != 0) {
      local_24 = uVar7;
      if (iVar3 == 1) {
        pFVar12 = local_58;
        if (piVar1[5] < 1) {
          this = (FString *)(piVar1 + 6);
        }
        else {
          this = (FString *)(GL2GameData_exref + piVar1[5] * 0xc + 0x6a8dc);
        }
        puVar2 = FString::operator*(this);
        FUN_10146040(puVar2,pFVar12);
        iVar3 = FUN_10146430(local_58);
        if (iVar3 == 0) {
          if ((piVar1[10] == 0) && (0 < (int)param_4)) {
            uVar13 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 1;
            uVar8 = 0;
            iVar3 = param_4 - uVar7;
            puVar2 = FString::operator*(local_58);
          }
          else {
            uVar13 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            iVar3 = 0;
            puVar2 = FString::operator*(local_58);
          }
          FUN_10020bb0(&local_4c,puVar2,iVar3,uVar8,uVar9,uVar10,uVar11,uVar13);
        }
        else {
          local_4c = 0xc;
          local_48 = 0xc;
        }
        uVar7 = uVar7 + local_4c;
        if ((int)param_4 < (int)uVar7) {
          param_4 = uVar7;
          local_28 = uVar7;
        }
        if ((int)local_18 < (int)uVar7) {
          local_18 = uVar7;
        }
        iVar3 = piVar1[2];
        iVar6 = local_48;
      }
      else {
        if (iVar3 != 2) goto LAB_1006579c;
        uVar7 = uVar7 + piVar1[0xb];
        if ((int)param_4 < (int)uVar7) {
          param_4 = uVar7;
          local_28 = uVar7;
        }
        if ((int)local_18 < (int)uVar7) {
          local_18 = uVar7;
        }
        iVar3 = piVar1[0xc];
        iVar6 = piVar1[2];
      }
      uVar4 = uVar7;
      local_34 = uVar7;
      local_24 = uVar7;
      if (local_1c < iVar3 + iVar6) {
        local_1c = iVar3 + iVar6;
      }
      goto LAB_1006579c;
    }
    local_20 = local_20 + piVar1[4];
    uVar7 = 0;
    local_24 = 0;
    local_30 = local_30 + piVar1[4];
    local_38 = local_38 + 1;
    local_1c = 0;
  } while( true );
}


// ==== 10065850 Catch@10065850

void Catch_10065850(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 10065864 Catch@10065864

void Catch_10065864(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::CalculateDrawItemListRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10065890 FUN_10065890

void FUN_10065890(FString *param_1)

{
  byte bVar1;
  User *this;
  LPCWSTR lpWideCharStr;
  byte *pbVar2;
  FString *pFVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int cchWideChar;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  undefined4 uVar7;
  uint uStack_258;
  FString local_244 [12];
  FString local_238 [12];
  uint local_22c;
  undefined2 local_224 [2];
  undefined1 *local_220;
  void *local_21c;
  undefined1 *puStack_218;
  int local_214;
  byte local_210 [512];
  char local_10 [3];
  undefined1 local_d;
  uint local_8;
  
  puStack_218 = &LAB_101e3dbb;
  local_21c = ExceptionList;
  uStack_258 = DAT_103554c4 ^ (uint)local_210;
  local_220 = (undefined1 *)&uStack_258;
  ExceptionList = &local_21c;
  local_214 = 0;
  local_8 = uStack_258;
  this = (User *)FUN_1014dd00();
  FString::FString(local_238);
  local_214 = CONCAT31(local_214._1_3_,1);
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0x200;
  cchWideChar = -1;
  pbVar2 = local_210;
  lpWideCharStr = (LPCWSTR)User::GetName(this);
  WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)pbVar2,cbMultiByte,lpDefaultChar,
                      lpUsedDefaultChar);
  local_224[0] = 0xf5;
  local_224[1] = 0xa1;
  uVar6 = 0;
  while( true ) {
    pbVar2 = local_210;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    local_22c = uVar6;
    if ((int)pbVar2 - (int)(local_210 + 1) <= (int)uVar6) break;
    uVar5 = uVar6 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    bVar1 = (byte)local_224[uVar5] ^ local_210[uVar6];
    local_210[uVar6] = bVar1;
    __snprintf(local_10,3,"%d",(uint)bVar1);
    local_d = 0;
    pFVar3 = (FString *)FString::FString(local_244,local_10);
    local_214._0_1_ = 2;
    FString::operator+=(local_238,pFVar3);
    local_214 = CONCAT31(local_214._1_3_,1);
    FString::~FString(local_244);
    uVar6 = uVar6 + 1;
  }
  uVar7 = *(undefined4 *)(DAT_103663bc + 0x5124);
  puVar4 = FString::operator*(local_238);
  pFVar3 = (FString *)FString::Printf((ushort *)local_244,L"..\\iwo\\%s_%d.dat",puVar4,uVar7);
  local_214._0_1_ = 3;
  FString::operator=(param_1,pFVar3);
  local_214._0_1_ = 1;
  FString::~FString(local_244);
  local_214 = (uint)local_214._1_3_ << 8;
  FString::~FString(local_238);
  local_214 = 0xffffffff;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 10065a21 Catch@10065a21

void Catch_10065a21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10065a35 Catch@10065a35

void Catch_10065a35(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetInventoryOrderFileName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10065a60 FUN_10065a60

int FUN_10065a60(FString *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < in_ECX[1]) {
    iVar3 = 0;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar3),param_1);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  return -1;
}


// ==== 10065aa0 FUN_10065aa0

void FUN_10065aa0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e3df9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0xc,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10065b20 FUN_10065b20

void FUN_10065b20(FString *param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  FString *this;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = FUN_10048c20(puVar2);
  for (iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4); iVar1 != -1;
      iVar1 = *(int *)(iVar1 + *in_ECX)) {
    iVar1 = iVar1 * 0x1c;
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 + 4),param_1);
    if ((iVar4 != 0) && (this = (FString *)FUN_10083a80(0xc,param_2), this != (FString *)0x0)) {
      FString::FString(this,(FString *)(iVar1 + 0x10 + *in_ECX));
    }
  }
  return;
}


// ==== 10065ba0 FUN_10065ba0

void FUN_10065ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  wchar_t *pwVar5;
  BOOL BVar6;
  DWORD DVar7;
  int in_stack_00000024;
  ushort auStack_4f0 [6];
  int iStack_4e4;
  size_t _MaxCount;
  uint uStack_4c8;
  FString local_4b8 [12];
  FString local_4ac [12];
  undefined1 *local_4a0;
  undefined1 *local_498;
  FString local_494 [16];
  FString local_484 [12];
  FString local_478 [12];
  HANDLE local_46c;
  int local_468;
  undefined1 *local_464;
  void *local_460;
  undefined1 *puStack_45c;
  int local_458;
  _WIN32_FIND_DATAA local_454;
  char local_314 [260];
  wchar_t local_210 [260];
  uint local_8;
  
  iVar1 = param_4;
  puStack_45c = &LAB_101e3e88;
  local_460 = ExceptionList;
  uStack_4c8 = DAT_103554c4 ^ (uint)&local_454;
  local_464 = (undefined1 *)&uStack_4c8;
  ExceptionList = &local_460;
  local_458 = 2;
  local_8 = uStack_4c8;
  iVar2 = FString::operator!=((FString *)&param_1,(ushort *)&DAT_1022f9f8);
  if (iVar2 == 0) {
    appFailAssert("a_strDirectory != TEXT( \"\" )",".\\Src\\NWndUtil.cpp",0xd9);
  }
  if (iVar1 == 0) {
    appFailAssert("a_pFileList",".\\Src\\NWndUtil.cpp",0xda);
  }
  if (in_stack_00000024 == 0) {
    FUN_10065aa0();
  }
  pFVar3 = (FString *)FString::Locs((FString *)&stack0x00000018);
  local_458._0_1_ = 3;
  FString::operator=((FString *)&stack0x00000018,pFVar3);
  local_458._0_1_ = 2;
  FString::~FString(local_484);
  FString::FString(local_478);
  local_458._0_1_ = 4;
  iStack_4e4 = 0x10065cb3;
  pFVar3 = (FString *)FString::Printf((ushort *)local_484);
  local_458._0_1_ = 5;
  puVar4 = FString::operator*(pFVar3);
  FString::operator=(local_478,puVar4);
  local_458 = CONCAT31(local_458._1_3_,4);
  FString::~FString(local_484);
  _MaxCount = 0x104;
  pwVar5 = (wchar_t *)FString::operator*(local_478);
  _wcstombs(local_314,pwVar5,_MaxCount);
  local_46c = FindFirstFileA(local_314,&local_454);
  if (local_46c == (HANDLE)0xffffffff) {
    GetLastError();
  }
  else {
    do {
      iVar2 = FUN_10062d70();
      if (iVar2 == 0) {
        iVar2 = FUN_10062e40();
        if (iVar2 != 0) {
          local_468 = 0;
          iVar2 = FString::operator!=((FString *)&stack0x00000018,(ushort *)&DAT_1022f9f8);
          if (iVar2 != 0) {
            _mbstowcs(local_210,local_454.cFileName,0x104);
            FString::FString(local_484,(ushort *)local_210);
            local_458._0_1_ = 8;
            FString::Len((FString *)&stack0x00000018);
            pFVar3 = (FString *)FString::Right(local_484,(int)local_4ac);
            local_458._0_1_ = 9;
            iVar2 = FString::operator!=(pFVar3,(FString *)&stack0x00000018);
            local_458._0_1_ = 8;
            FString::~FString(local_4ac);
            if (iVar2 != 0) {
              local_468 = 1;
            }
            local_458 = CONCAT31(local_458._1_3_,4);
            FString::~FString(local_484);
            if (local_468 != 0) goto LAB_10065f55;
          }
          _mbstowcs(local_210,local_454.cFileName,0x104);
          FUN_10062cb0();
          local_458._0_1_ = 10;
          FString::operator*((FString *)&param_1);
          pFVar3 = (FString *)FString::Printf((ushort *)local_4b8);
          local_458._0_1_ = 0xb;
          FString::operator=(local_494,pFVar3);
          local_458 = CONCAT31(local_458._1_3_,10);
          FString::~FString(local_4b8);
          iVar2 = FUN_10083a80();
          if (iVar2 != 0) {
            FUN_10062cb0();
          }
          FUN_10062d50();
          local_458 = CONCAT31(local_458._1_3_,4);
          FUN_10062d00();
        }
      }
      else if (param_5 != 0) {
        _mbstowcs(local_210,local_454.cFileName,0x104);
        local_498 = &stack0xfffffb24;
        iStack_4e4 = 0x10065dbd;
        FString::FString((FString *)&stack0xfffffb24,(FString *)&stack0x00000018);
        local_458._0_1_ = 6;
        iStack_4e4 = iVar1;
        local_4a0 = (undefined1 *)auStack_4f0;
        pwVar5 = local_210;
        puVar4 = FString::operator*((FString *)&param_1);
        FString::Printf(auStack_4f0,L"%s\\%s",puVar4,pwVar5);
        local_458 = CONCAT31(local_458._1_3_,4);
        FUN_10065ba0();
      }
LAB_10065f55:
      BVar6 = FindNextFileA(local_46c,&local_454);
    } while (BVar6 != 0);
    DVar7 = GetLastError();
    if (DVar7 == 0x12) {
      BVar6 = FindClose(local_46c);
      if (BVar6 != 0) {
        DVar7 = GetLastError();
        if (DVar7 != 0x12) goto LAB_10065d16;
      }
      local_458 = CONCAT31(local_458._1_3_,2);
      FString::~FString(local_478);
      local_458 = 0;
      goto LAB_10065d27;
    }
  }
LAB_10065d16:
  local_458._0_1_ = 2;
  FString::~FString(local_478);
  local_458 = (uint)local_458._1_3_ << 8;
LAB_10065d27:
  FString::~FString((FString *)&param_1);
  local_458 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000018);
  ExceptionList = local_460;
  __security_check_cookie(local_8 ^ (uint)&local_454);
  return;
}


// ==== 10065fae Catch@10065fae

void Catch_10065fae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 10065fc2 Catch@10065fc2

void Catch_10065fc2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetFileList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10065fe0 FUN_10065fe0

undefined4 FUN_10065fe0(short *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  FString *pFVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e40e7;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar6 = (int *)(param_1 + 4);
  iVar2 = FUN_10187a60(piVar6);
  if ((*piVar6 < 0) || (iVar2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  FString::FString(local_2c,(ushort *)L"classID");
  local_8._0_1_ = 1;
  FUN_10040090(local_2c,*piVar6);
  local_8._0_1_ = 0;
  FString::~FString(local_2c);
  puVar3 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 4));
  FString::FString(local_38,puVar3);
  local_8._0_1_ = 2;
  FString::FString(local_2c,(ushort *)L"name");
  local_8._0_1_ = 3;
  FUN_10040230(local_2c,local_38);
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x54));
  if (puVar3 != (ushort *)0x0) {
    puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x54));
    FString::FString(local_2c,puVar3);
    local_8._0_1_ = 4;
    FString::FString(local_38,(ushort *)L"additionalName");
    local_8._0_1_ = 5;
    FUN_10040230(local_38,local_2c);
    local_8._0_1_ = 4;
    FString::~FString(local_38);
    local_8._0_1_ = 0;
    FString::~FString(local_2c);
  }
  puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
  if (puVar3 != (ushort *)0x0) {
    puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
    FString::FString(local_2c,puVar3);
    local_8._0_1_ = 6;
    FString::FString(local_38,(ushort *)L"iconName");
    local_8._0_1_ = 7;
    FUN_10040230(local_38,local_2c);
    local_8._0_1_ = 6;
    FString::~FString(local_38);
    local_8._0_1_ = 0;
    FString::~FString(local_2c);
  }
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x40 + local_18 * 4));
    if (puVar3 != (ushort *)0x0) {
      puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x40 + local_18 * 4));
      FString::FString(local_2c,puVar3);
      local_8._0_1_ = 8;
      pFVar4 = (FString *)FString::Printf((ushort *)local_44,L"iconNameEx%d",local_18 + 1);
      local_8._0_1_ = 9;
      puVar3 = FString::operator*(pFVar4);
      FString::FString(local_38,puVar3);
      local_8._0_1_ = 10;
      FUN_10040230(local_38,local_2c);
      local_8._0_1_ = 9;
      FString::~FString(local_38);
      local_8._0_1_ = 8;
      FString::~FString(local_44);
      local_8._0_1_ = 0;
      FString::~FString(local_2c);
    }
  }
  puVar3 = FL2GameData::GetItemDescription((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 4));
  FString::FString(local_2c,puVar3);
  local_8._0_1_ = 0xb;
  FString::FString(local_38,(ushort *)L"description");
  local_8._0_1_ = 0xc;
  FUN_10040230(local_38,local_2c);
  local_8._0_1_ = 0xb;
  FString::~FString(local_38);
  local_8._0_1_ = 0;
  FString::~FString(local_2c);
  FString::FString(local_38,(ushort *)L"itemType");
  local_8._0_1_ = 0xd;
  FUN_10040090(local_38,(int)*param_1);
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"serverID");
  local_8._0_1_ = 0xe;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 2));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"itemNum");
  local_8._0_1_ = 0xf;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 6));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"slotBitType");
  local_8._0_1_ = 0x10;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0xc));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"enchanted");
  local_8._0_1_ = 0x11;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0x10));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"blessed");
  local_8._0_1_ = 0x12;
  FUN_10040090(local_38,param_1[0xe]);
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"damaged");
  local_8._0_1_ = 0x13;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0x12));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"equipped");
  local_8._0_1_ = 0x14;
  FUN_10040090(local_38,(int)param_1[0xf]);
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"price");
  local_8._0_1_ = 0x15;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 8));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"reserved");
  local_8._0_1_ = 0x16;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0x16));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"defaultPrice");
  local_8._0_1_ = 0x17;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0x14));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"refineryOp1");
  local_8._0_1_ = 0x18;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0x18));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"refineryOp2");
  local_8._0_1_ = 0x19;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0x1a));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  FString::FString(local_38,(ushort *)L"currentDurability");
  local_8._0_1_ = 0x1a;
  FUN_10040090(local_38,*(undefined4 *)(param_1 + 0x1c));
  local_8._0_1_ = 0;
  FString::~FString(local_38);
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 == 0) {
    FString::FString(local_38,(ushort *)L"weight");
    local_8._0_1_ = 0x1b;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0xc4));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"materialType");
    local_8._0_1_ = 0x1c;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 200));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"weaponType");
    local_8._0_1_ = 0x1d;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x130));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"physicalDamage");
    local_8._0_1_ = 0x1e;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x128));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"magicalDamage");
    local_8._0_1_ = 0x1f;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 300));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"shieldDefense");
    local_8._0_1_ = 0x20;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x144));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"shieldDefenseRate");
    local_8._0_1_ = 0x21;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x148));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"durability");
    local_8._0_1_ = 0x22;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0xc0));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"crystalType");
    local_8._0_1_ = 0x23;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x134));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"randomDamage");
    local_8._0_1_ = 0x24;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x124));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"critical");
    local_8._0_1_ = 0x25;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x138));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"hitModify");
    local_8._0_1_ = 0x26;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x13c));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"attackSpeed");
    local_8._0_1_ = 0x27;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x14c));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"mpConsume");
    local_8._0_1_ = 0x28;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x150));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"avoidModify");
    local_8._0_1_ = 0x29;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x140));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"soulshotCount");
    local_8._0_1_ = 0x2a;
    FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x154));
    local_8._0_1_ = 0;
    FString::~FString(local_38);
    FString::FString(local_38,(ushort *)L"spiritshotCount");
    local_8._0_1_ = 0x2b;
    uVar5 = *(undefined4 *)(iVar2 + 0x158);
LAB_10066850:
    FUN_10040090(local_38,uVar5);
    local_8._0_1_ = 0;
    FString::~FString(local_38);
  }
  else {
    if (iVar1 == 1) {
      FString::FString(local_38,(ushort *)L"weight");
      local_8._0_1_ = 0x2c;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0xc4));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"materialType");
      local_8._0_1_ = 0x2d;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 200));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"durability");
      local_8._0_1_ = 0x2e;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0xc0));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"crystalType");
      local_8._0_1_ = 0x2f;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x5e8));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"armorType");
      local_8._0_1_ = 0x30;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x5e4));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"avoidModify");
      local_8._0_1_ = 0x31;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x5ec));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"physicalDefense");
      local_8._0_1_ = 0x32;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x5f0));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"magicalDefense");
      local_8._0_1_ = 0x33;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x5f4));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"mpBonus");
      local_8._0_1_ = 0x34;
      uVar5 = *(undefined4 *)(iVar2 + 0x5f8);
      goto LAB_10066850;
    }
    if (iVar1 == 2) {
      FString::FString(local_38,(ushort *)L"weight");
      local_8._0_1_ = 0x35;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0xc4));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"materialType");
      local_8._0_1_ = 0x36;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 200));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"durability");
      local_8._0_1_ = 0x37;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0xc0));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"crystalType");
      local_8._0_1_ = 0x38;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x104));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"consumeType");
      local_8._0_1_ = 0x39;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0xfc));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      FString::FString(local_38,(ushort *)L"ItemSubType");
      local_8._0_1_ = 0x3a;
      FUN_10040090(local_38,*(undefined4 *)(iVar2 + 0x100));
      local_8._0_1_ = 0;
      FString::~FString(local_38);
      iVar2 = *(int *)(iVar2 + 0x100);
      if ((iVar2 == 2) || (iVar2 == 0x10)) {
        FString::FString(local_2c,&DAT_102468e4);
        local_8._0_1_ = 0x3b;
        FString::FString(local_38,(ushort *)L"arrow");
        local_8._0_1_ = 0x3c;
        FUN_10040230(local_38,local_2c);
        local_8._0_1_ = 0x3b;
        FString::~FString(local_38);
        local_8 = (uint)local_8._1_3_ << 8;
        pFVar4 = local_2c;
      }
      else {
        if (iVar2 != 5) {
          ExceptionList = local_10;
          return 1;
        }
        FString::FString(local_2c,&DAT_102468e4);
        local_8._0_1_ = 0x3d;
        FString::FString(local_38,(ushort *)L"recipe");
        local_8._0_1_ = 0x3e;
        FUN_10040230(local_38,local_2c);
        local_8._0_1_ = 0x3d;
        FString::~FString(local_38);
        local_8 = (uint)local_8._1_3_ << 8;
        pFVar4 = local_2c;
      }
      goto LAB_1006688d;
    }
  }
  FString::FString(local_38,(ushort *)L"ItemSubType");
  local_8._0_1_ = 0x3f;
  FUN_10040090(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  pFVar4 = local_38;
LAB_1006688d:
  FString::~FString(pFVar4);
  ExceptionList = local_10;
  return 1;
}


// ==== 10066c3c Catch@10066c3c

void Catch_10066c3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10066c50 Catch@10066c50

void Catch_10066c50(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::ItemInfoToNCParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10066c70 FUN_10066c70

void FUN_10066c70(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e42e4;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x1e5c);
    iVar2 = FUN_10187a60(piVar1);
    if ((-1 < *piVar1) && (iVar2 != 0)) {
      FString::FString(local_28,(ushort *)L"classID");
      local_8._0_1_ = 1;
      FUN_10040090(local_28,*piVar1);
      local_8._0_1_ = 0;
      FString::~FString(local_28);
      puVar3 = (ushort *)FUN_1002c9c0();
      FString::FString(local_34,puVar3);
      local_8._0_1_ = 2;
      FString::FString(local_28,(ushort *)L"name");
      local_8._0_1_ = 3;
      FUN_10040230(local_28,local_34);
      local_8._0_1_ = 2;
      FString::~FString(local_28);
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      iVar4 = FUN_1002cc10();
      if (iVar4 != 0) {
        puVar3 = (ushort *)FUN_1002cc10();
        FString::FString(local_28,puVar3);
        local_8._0_1_ = 4;
        FString::FString(local_34,(ushort *)L"additionalName");
        local_8._0_1_ = 5;
        FUN_10040230(local_34,local_28);
        local_8._0_1_ = 4;
        FString::~FString(local_34);
        local_8._0_1_ = 0;
        FString::~FString(local_28);
      }
      puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
      if (puVar3 != (ushort *)0x0) {
        puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
        FString::FString(local_28,puVar3);
        local_8._0_1_ = 6;
        FString::FString(local_34,(ushort *)L"iconName");
        local_8._0_1_ = 7;
        FUN_10040230(local_34,local_28);
        local_8._0_1_ = 6;
        FString::~FString(local_34);
        local_8._0_1_ = 0;
        FString::~FString(local_28);
      }
      puVar3 = FL2GameData::GetItemDescription
                         ((FL2GameData *)GL2GameData_exref,*(int *)(param_1 + 0x1e5c));
      FString::FString(local_28,puVar3);
      local_8._0_1_ = 8;
      FString::FString(local_34,(ushort *)L"description");
      local_8._0_1_ = 9;
      FUN_10040230(local_34,local_28);
      local_8._0_1_ = 8;
      FString::~FString(local_34);
      local_8._0_1_ = 0;
      FString::~FString(local_28);
      FString::FString(local_34,(ushort *)L"itemType");
      local_8._0_1_ = 10;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e50));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"serverID");
      local_8._0_1_ = 0xb;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e58));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"itemNum");
      local_8._0_1_ = 0xc;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e64));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"slotBitType");
      local_8._0_1_ = 0xd;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e6c));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"enchanted");
      local_8._0_1_ = 0xe;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e80));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"blessed");
      local_8._0_1_ = 0xf;
      FUN_10040090(local_34,*(undefined2 *)(param_1 + 0x1e84));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"damaged");
      local_8._0_1_ = 0x10;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ec0));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"equipped");
      local_8._0_1_ = 0x11;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e8c));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"price");
      local_8._0_1_ = 0x12;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e68));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"reserved");
      local_8._0_1_ = 0x13;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1e7c));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      FString::FString(local_34,(ushort *)L"defaultPrice");
      local_8._0_1_ = 0x14;
      FUN_10040090(local_34,*(undefined4 *)(param_1 + 0x1ef0));
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      iVar4 = *(int *)(iVar2 + 4);
      if (iVar4 == 0) {
        FString::FString(local_34,(ushort *)L"weight");
        local_8._0_1_ = 0x15;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0xc4));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"materialType");
        local_8._0_1_ = 0x16;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 200));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"weaponType");
        local_8._0_1_ = 0x17;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x130));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"physicalDamage");
        local_8._0_1_ = 0x18;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x128));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"magicalDamage");
        local_8._0_1_ = 0x19;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 300));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"shieldDefense");
        local_8._0_1_ = 0x1a;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x144));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"shieldDefenseRate");
        local_8._0_1_ = 0x1b;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x148));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"durability");
        local_8._0_1_ = 0x1c;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0xc0));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"crystalType");
        local_8._0_1_ = 0x1d;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x134));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"randomDamage");
        local_8._0_1_ = 0x1e;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x124));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"critical");
        local_8._0_1_ = 0x1f;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x138));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"hitModify");
        local_8._0_1_ = 0x20;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x13c));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"attackSpeed");
        local_8._0_1_ = 0x21;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x14c));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"mpConsume");
        local_8._0_1_ = 0x22;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x150));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"avoidModify");
        local_8._0_1_ = 0x23;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x140));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"soulshotCount");
        local_8._0_1_ = 0x24;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x154));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"spiritshotCount");
        local_8._0_1_ = 0x25;
        uVar5 = *(undefined4 *)(iVar2 + 0x158);
      }
      else if (iVar4 == 1) {
        FString::FString(local_34,(ushort *)L"weight");
        local_8._0_1_ = 0x26;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0xc4));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"materialType");
        local_8._0_1_ = 0x27;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 200));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"durability");
        local_8._0_1_ = 0x28;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0xc0));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"crystalType");
        local_8._0_1_ = 0x29;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x5e8));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"armorType");
        local_8._0_1_ = 0x2a;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x5e4));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"avoidModify");
        local_8._0_1_ = 0x2b;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x5ec));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"physicalDefense");
        local_8._0_1_ = 0x2c;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x5f0));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"magicalDefense");
        local_8._0_1_ = 0x2d;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x5f4));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"mpBonus");
        local_8._0_1_ = 0x2e;
        uVar5 = *(undefined4 *)(iVar2 + 0x5f8);
      }
      else {
        if (iVar4 != 2) {
          ExceptionList = local_10;
          return;
        }
        FString::FString(local_34,(ushort *)L"weight");
        local_8._0_1_ = 0x2f;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0xc4));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"materialType");
        local_8._0_1_ = 0x30;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 200));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"durability");
        local_8._0_1_ = 0x31;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0xc0));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"crystalType");
        local_8._0_1_ = 0x32;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0x104));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"consumeType");
        local_8._0_1_ = 0x33;
        FUN_10040090(local_34,*(undefined4 *)(iVar2 + 0xfc));
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"etcItemType");
        local_8._0_1_ = 0x34;
        uVar5 = *(undefined4 *)(iVar2 + 0x100);
      }
      FUN_10040090(local_34,uVar5);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100676ae Catch@100676ae

void Catch_100676ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100676c2 Catch@100676c2

void Catch_100676c2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::NCItemToNCParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100676e0 FUN_100676e0

void FUN_100676e0(ushort *param_1,ushort *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  FString *pFVar6;
  float10 extraout_ST0;
  uint local_1c8;
  FString local_1b8 [12];
  FString local_1ac [12];
  FString local_1a0 [16];
  int local_190;
  int local_188;
  float local_184;
  FString local_180 [12];
  int local_174;
  int local_170;
  int local_16c;
  int local_164;
  int local_160;
  int local_158;
  ushort *local_154;
  int local_150;
  int local_14c;
  FString *local_148;
  int local_144;
  int local_13c;
  ushort local_138 [2];
  int local_134;
  int local_130;
  int local_12c;
  FString *local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  int local_10c;
  ushort local_108 [128];
  uint local_8;
  
  puStack_110 = &LAB_101e4345;
  local_114 = ExceptionList;
  local_1c8 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&local_1c8;
  ExceptionList = &local_114;
  local_154 = param_2;
  local_10c = 0;
  *param_1 = 0;
  puVar2 = &local_1c8;
  local_8 = local_1c8;
  if (((param_2 != (ushort *)0x0) &&
      (iVar3 = appStrlen(param_2), puVar2 = (uint *)local_118, 0 < iVar3)) &&
     (iVar4 = appStrcmp(param_2,(ushort *)&DAT_10233714), puVar2 = (uint *)local_118, iVar4 != 0)) {
    if (iVar3 < 0xd) {
      for (local_174 = 0; local_174 < iVar3; local_174 = local_174 + 1) {
        if ((param_2[local_174] < 0x30) || (0x39 < param_2[local_174])) goto code_r0x10067773;
      }
      iVar4 = (iVar3 + -1) / 2;
      local_188 = (int)((param_2[((iVar3 - iVar4) + -1) / 2] - 0x60) + (uint)param_2[iVar4]) % 10;
      iVar3 = local_188 * 0xc;
      local_128 = (FString *)(&DAT_1036d0e8 + iVar3);
      puVar5 = FString::operator*(local_128);
      iVar4 = appStrcmp(param_2,puVar5);
      if (iVar4 == 0) {
        puVar5 = FString::operator*((FString *)(&DAT_1036d160 + iVar3));
        appStrcpy(param_1,puVar5);
        iVar3 = appStrlen(param_1);
        puVar2 = (uint *)local_118;
        if ((0 < iVar3) && (param_3 == 0)) {
          appStrcat(param_1,&DAT_1023d5d0);
          puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6bed8));
          appStrcat(param_1,puVar5);
          puVar2 = (uint *)local_118;
        }
      }
      else {
        FString::operator=(local_128,param_2);
        local_128 = *(FString **)GLanguageType_exref;
        if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
          local_12c = 3;
          puVar5 = (ushort *)&DAT_10246d48;
        }
        else if (local_128 == (FString *)0x5) {
          local_12c = 6;
          puVar5 = &DAT_1023d5d0;
        }
        else {
          local_12c = 4;
          if (local_128 == (FString *)0x0) {
            puVar5 = (ushort *)&DAT_10246d48;
          }
          else {
            puVar5 = (ushort *)&DAT_1022f9f8;
          }
        }
        appStrcpy(local_138,puVar5);
        FString::FString(local_180);
        local_10c._0_1_ = 1;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6e4c4));
        FString::FString(local_1a0,puVar5);
        local_10c._0_1_ = 2;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6e4d0));
        FString::FString(local_1ac,puVar5);
        local_10c._0_1_ = 3;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6eb3c));
        FString::FString(local_1b8,puVar5);
        local_10c._0_1_ = 4;
        if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
          pFVar6 = (FString *)(GL2GameData_exref + 0x6e4e8);
        }
        else if (local_128 == (FString *)0x5) {
          pFVar6 = (FString *)(GL2GameData_exref + 0x6e4f4);
        }
        else {
          pFVar6 = (FString *)(GL2GameData_exref + 0x6e4dc);
        }
        puVar5 = FString::operator*(pFVar6);
        FString::operator=(local_180,puVar5);
        FUN_10051aa0();
        local_10c._0_1_ = 5;
        FUN_10051aa0();
        local_10c._0_1_ = 6;
        FUN_10051aa0();
        local_10c = CONCAT31(local_10c._1_3_,7);
        FString::ParseIntoArray(local_1a0,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_170);
        FString::ParseIntoArray(local_1ac,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_164);
        FString::ParseIntoArray(local_180,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_148);
        local_158 = 0;
        local_134 = appStrlen(param_2);
        iVar3 = 0;
        local_190 = 0;
        for (local_120 = 0; local_120 < local_134; local_120 = local_120 + 1) {
          if (local_158 == 0) {
            if (param_2[local_120] != 0x30) {
              local_158 = 1;
              goto LAB_10067a30;
            }
          }
          else {
LAB_10067a30:
            local_108[iVar3] = param_2[local_120];
            iVar3 = iVar3 + 1;
            local_190 = iVar3;
          }
        }
        local_108[iVar3] = 0;
        appStrcpy(param_2,local_108);
        iVar3 = appStrlen(param_2);
        local_11c = iVar3 % local_12c;
        local_184 = (float)iVar3 / (float)local_12c;
        local_150 = 0;
        local_14c = 0;
        local_134 = iVar3;
        local_124 = FUN_101c19e0();
        if ((float10)local_124 == extraout_ST0) {
          local_124 = local_124 + -1;
        }
        bVar1 = false;
        if (local_128 == (FString *)0x5) {
          local_128 = (FString *)(uint)(6 < iVar3);
          local_13c = 0;
          if (local_128 != (FString *)0x0) {
            local_13c = iVar3 + -6;
          }
          local_130 = 0;
          local_120 = 0;
          while (local_120 < iVar3) {
            if (local_11c == 0) {
              local_11c = local_12c;
            }
            iVar3 = local_154[local_120] - 0x30;
            if (local_128 == (FString *)0x0) {
              if (iVar3 != 0) {
                if (iVar3 <= local_16c) {
                  if (((local_120 == local_134 + -1) && (1 < local_134)) && (iVar3 == 1)) {
                    if (0 < local_144) {
                      pFVar6 = local_148 + 0xc;
                      goto LAB_10067bd0;
                    }
                  }
                  else if (((local_120 == local_134 + -2) && (1 < local_134)) && (iVar3 == 2)) {
                    if (1 < local_144) {
                      pFVar6 = local_148 + 0x18;
LAB_10067bd0:
                      puVar5 = FString::operator*(pFVar6);
                      appStrcat(param_1,puVar5);
                    }
                  }
                  else if ((iVar3 != 1) || (local_11c != 2)) {
                    pFVar6 = (FString *)(local_170 + -0xc + iVar3 * 0xc);
                    goto LAB_10067bd0;
                  }
                }
                if ((1 < local_11c) && (local_11c + -1 <= local_160)) {
                  puVar5 = FString::operator*((FString *)(local_164 + (local_11c * 3 + -6) * 4));
                  appStrcat(param_1,puVar5);
                }
                local_130 = 1;
              }
              if (local_11c == 1) {
                if ((((local_130 == 1) && (local_124 <= local_144)) && (0 < local_124)) &&
                   (local_124 <= local_144)) {
                  puVar5 = FString::operator*(local_148 + local_124 * 0xc + -0xc);
                  appStrcat(param_1,puVar5);
                }
                local_124 = local_124 + -1;
                local_130 = 0;
              }
LAB_10067c4e:
              local_11c = local_11c + -1;
              local_120 = local_120 + 1;
              iVar3 = local_134;
            }
            else {
              if (((local_11c < local_12c) && (local_11c % 3 == 0)) && (0 < local_120)) {
                appStrcat(param_1,(ushort *)&DAT_10246d48);
              }
              puVar5 = appItoa(iVar3);
              appStrcat(param_1,puVar5);
              if ((local_13c < 1) || (local_13c = local_13c + -1, local_13c != 0))
              goto LAB_10067c4e;
              puVar5 = FString::operator*(local_1b8);
              appStrcat(param_1,puVar5);
              local_11c = local_11c + -1;
              local_120 = local_120 + 1;
              iVar3 = local_134;
            }
          }
          if ((local_128 != (FString *)0x0) && (0 < local_144)) {
            appStrcat(param_1,&DAT_1023d5d0);
            puVar5 = FString::operator*(local_148);
            appStrcat(param_1,puVar5);
          }
        }
        else {
          local_130 = 0;
          for (local_120 = 0; local_120 < iVar3; local_120 = local_120 + 1) {
            if (local_11c == 0) {
              local_11c = local_12c;
            }
            iVar3 = local_154[local_120] - 0x30;
            if ((iVar3 != 0) || (local_150 != 0)) {
              if (local_14c != 0) {
                appStrcat(param_1,local_138);
                local_14c = 0;
              }
              if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
                puVar5 = appItoa(iVar3);
                appStrcat(param_1,puVar5);
                local_150 = 1;
              }
              else {
                if (iVar3 <= local_16c) {
                  puVar5 = FString::operator*((FString *)(local_170 + -0xc + iVar3 * 0xc));
                  appStrcat(param_1,puVar5);
                }
                if ((1 < local_11c) && (local_11c + -1 <= local_160)) {
                  puVar5 = FString::operator*((FString *)(local_164 + (local_11c * 3 + -6) * 4));
                  appStrcat(param_1,puVar5);
                }
              }
              bVar1 = true;
              local_130 = 1;
            }
            if (local_11c == 1) {
              if (bVar1) {
                if (local_124 <= local_144) {
                  if ((local_128 == (FString *)0x1) || (local_128 == (FString *)0x6)) {
                    appStrcat(param_1,&DAT_1023d5d0);
                    local_150 = 0;
                  }
                  if ((0 < local_124) && (local_124 <= local_144)) {
                    puVar5 = FString::operator*(local_148 + local_124 * 0xc + -0xc);
                    appStrcat(param_1,puVar5);
                  }
                }
                local_14c = 1;
              }
              local_124 = local_124 + -1;
              bVar1 = false;
              local_130 = 0;
            }
            local_11c = local_11c + -1;
            iVar3 = local_134;
          }
        }
        FString::operator=((FString *)(&DAT_1036d160 + local_188 * 0xc),param_1);
        iVar3 = appStrlen(param_1);
        if ((0 < iVar3) && (param_3 == 0)) {
          appStrcat(param_1,&DAT_1023d5d0);
          puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6bed8));
          appStrcat(param_1,puVar5);
        }
        local_10c._0_1_ = 6;
        FUN_10052740();
        local_10c._0_1_ = 5;
        FUN_10052740();
        local_10c._0_1_ = 4;
        FUN_10052740();
        local_10c._0_1_ = 3;
        FString::~FString(local_1b8);
        local_10c._0_1_ = 2;
        FString::~FString(local_1ac);
        local_10c._0_1_ = 1;
        FString::~FString(local_1a0);
        local_10c = (uint)local_10c._1_3_ << 8;
        FString::~FString(local_180);
        puVar2 = (uint *)local_118;
      }
    }
    else {
      FUN_10062ee0(param_1,param_2);
      puVar2 = (uint *)local_118;
    }
  }
code_r0x10067773:
  local_118 = (undefined1 *)puVar2;
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 10067e7b Catch@10067e7b

void Catch_10067e7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x84,&DAT_102a47f0);
}


// ==== 10067e98 Catch@10067e98

void Catch_10067e98(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::ConvertNumToText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10067ec0 FUN_10067ec0

void FUN_10067ec0(int param_1)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  FString *pFVar10;
  uint uVar11;
  uint uStack_12c;
  undefined1 local_11c [32];
  int local_fc;
  FString local_dc [12];
  int local_d0;
  FString local_cc [12];
  undefined4 local_c0;
  int local_bc;
  FString local_b8 [12];
  int local_ac;
  FString local_a4 [12];
  int local_98;
  FString local_94 [12];
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  FString local_78 [12];
  int local_6c;
  FString local_68 [12];
  FString *local_5c [3];
  FString *local_50 [3];
  int local_44;
  FString local_40 [12];
  FString *local_34;
  int local_30;
  FString *local_28;
  FString *local_24 [4];
  int local_14;
  int local_10;
  char local_9;
  uint local_8;
  
  pFVar3 = local_78;
  puStack_80 = &LAB_101e458e;
  local_84 = ExceptionList;
  uStack_12c = DAT_103554c4 ^ (uint)pFVar3;
  local_88 = (undefined1 *)&uStack_12c;
  local_8 = 0;
  local_7c = 0;
  if (param_1 == 0) {
    return;
  }
  ExceptionList = &local_84;
  iVar2 = FString::Len((FString *)(param_1 + 0x4c));
  if (iVar2 < 1) {
    ExceptionList = local_84;
    return;
  }
  FString::FString(local_94);
  local_7c._0_1_ = 1;
  FUN_1003fa00((FString *)(param_1 + 0x4c));
  local_7c._0_1_ = 2;
  FString::FString(local_40,(ushort *)L"Type");
  local_7c._0_1_ = 3;
  iVar2 = FUN_100406e0(local_40,local_94);
  local_7c._0_1_ = 2;
  FString::~FString(local_40);
  if (iVar2 == 0) {
    local_7c._0_1_ = 1;
    FUN_1003fff0();
    local_7c = (uint)local_7c._1_3_ << 8;
    FString::~FString(local_94);
    ExceptionList = local_84;
    return;
  }
  iVar2 = FString::operator==(local_94,(ushort *)L"RemainTime");
  if (iVar2 == 0) {
    iVar2 = FString::operator==(local_94,(ushort *)L"Equip");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_94,(ushort *)L"SetEffect");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_94,(ushort *)L"EnchantEffect");
        if (iVar2 == 0) {
          iVar2 = FString::operator==(local_94,(ushort *)L"InventoryCount");
          if (iVar2 == 0) goto LAB_10068a3c;
          FString::FString(local_68,(ushort *)L"ClassID");
          local_7c._0_1_ = 0x20;
          iVar2 = FUN_100404d0(local_68,local_24);
          local_7c._0_1_ = 2;
          FString::~FString(local_68);
          if (iVar2 == 0) goto LAB_10068a3c;
          uVar9 = FUN_101b28d0(local_24[0]);
          pFVar3 = (FString *)FString::Printf((ushort *)local_68,&DAT_10233718,uVar9);
          local_7c._0_1_ = 0x21;
          goto LAB_10068a25;
        }
        FString::FString(pFVar3);
        local_7c._0_1_ = 0x17;
        FString::FString(local_40);
        local_7c._0_1_ = 0x18;
        FUN_10051aa0();
        local_7c._0_1_ = 0x19;
        FString::FString((FString *)local_50);
        local_7c._0_1_ = 0x1a;
        FUN_10051aa0();
        local_7c._0_1_ = 0x1b;
        FString::FString(local_a4,(ushort *)L"ServerID");
        local_7c = CONCAT31(local_7c._1_3_,0x1c);
        uVar11 = 0x200;
        local_8 = 0x200;
        iVar2 = FUN_100404d0(local_a4,local_24);
        if (iVar2 == 0) {
LAB_1006870c:
          bVar1 = false;
        }
        else {
          FString::FString(local_cc,(ushort *)L"ClassID");
          local_7c = 0x1d;
          uVar11 = 0x600;
          local_8 = 0x600;
          iVar2 = FUN_100404d0(local_cc,&local_10);
          if (iVar2 == 0) goto LAB_1006870c;
          FString::FString(local_dc,(ushort *)L"NormalColor");
          local_7c = 0x1e;
          uVar11 = 0xe00;
          local_8 = 0xe00;
          iVar2 = FUN_100406e0(local_dc,pFVar3);
          if (iVar2 == 0) goto LAB_1006870c;
          FString::FString(local_68,(ushort *)L"EnableColor");
          local_7c = 0x1f;
          uVar11 = 0x1e00;
          local_8 = 0x1e00;
          iVar2 = FUN_100406e0(local_68,local_40);
          if (iVar2 == 0) goto LAB_1006870c;
          bVar1 = true;
        }
        local_7c = 0x1e;
        if ((uVar11 & 0x1000) != 0) {
          uVar11 = uVar11 & 0xffffefff;
          local_8 = uVar11;
          FString::~FString(local_68);
        }
        local_7c = 0x1d;
        if ((uVar11 & 0x800) != 0) {
          uVar11 = uVar11 & 0xfffff7ff;
          local_8 = uVar11;
          FString::~FString(local_dc);
        }
        local_7c = 0x1c;
        if ((uVar11 & 0x400) != 0) {
          uVar11 = uVar11 & 0xfffffbff;
          local_8 = uVar11;
          FString::~FString(local_cc);
        }
        local_7c = 0x1b;
        if ((uVar11 & 0x200) != 0) {
          local_8 = uVar11 & 0xfffffdff;
          FString::~FString(local_a4);
        }
        if (bVar1) {
          iVar2 = 1;
          local_14 = 1;
          local_28 = (FString *)
                     FL2GameData::GetItemSetEnchantCount((FL2GameData *)GL2GameData_exref,local_10);
          pFVar10 = pFVar3;
          if (((int)local_28 < 1) || (iVar7 = FUN_101b2b30(local_24[0]), iVar7 == -1)) {
LAB_100687c4:
            local_14 = 0;
          }
          else {
            for (iVar7 = 0; local_98 = iVar7, iVar7 < 3; iVar7 = iVar7 + 1) {
              puVar4 = FL2GameData::GetItemSetListID
                                 ((FL2GameData *)GL2GameData_exref,local_10,iVar7);
              FString::operator=((FString *)local_50,puVar4);
              iVar8 = FString::Len((FString *)local_50);
              if (0 < iVar8) {
                FUN_100520c0(0);
                FString::ParseIntoArray
                          ((FString *)local_50,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_34)
                ;
                for (iVar2 = 0; local_ac = iVar2, iVar2 < local_30; iVar2 = iVar2 + 1) {
                  puVar4 = FString::operator*(local_34 + iVar2 * 0xc);
                  iVar7 = appAtoi(puVar4);
                  iVar8 = FUN_101b2b50(iVar7);
                  if (iVar8 < 0) goto LAB_100687c4;
                  FUN_1000eea0();
                  iVar7 = FUN_101b2b50(iVar7);
                  if (iVar7 == -1) goto LAB_100687c4;
                  iVar8 = FUN_101b2720(iVar7,local_11c);
                  iVar7 = 0;
                  if (iVar8 != 0) {
                    iVar7 = local_fc;
                  }
                  if (iVar7 < (int)local_28) goto LAB_100687c4;
                }
                iVar7 = local_98;
                iVar2 = local_14;
                if (local_14 == 0) goto LAB_100687d2;
              }
            }
            if (iVar2 != 0) {
              pFVar10 = local_40;
            }
          }
LAB_100687d2:
          iVar2 = FString::SplitIntoArray
                            (pFVar10,(ushort *)&DAT_10246d48,(TArray<FString> *)local_5c);
          if (2 < iVar2) {
            puVar4 = FString::operator*(local_5c[0]);
            uVar11 = appAtoi(puVar4);
            puVar4 = FString::operator*(local_5c[0] + 0xc);
            uVar5 = appAtoi(puVar4);
            puVar4 = FString::operator*(local_5c[0] + 0x18);
            uVar6 = appAtoi(puVar4);
            *(uint *)(param_1 + 0x24) = uVar6 | (uVar5 | (uVar11 | 0xffffff00) << 8) << 8;
          }
        }
        local_7c._0_1_ = 0x1a;
        FUN_10052740();
        local_7c._0_1_ = 0x19;
        FString::~FString((FString *)local_50);
        local_7c._0_1_ = 0x18;
        FUN_10052740();
        local_7c._0_1_ = 0x17;
        FString::~FString(local_40);
        goto LAB_10068a36;
      }
      FString::FString(local_40);
      local_7c._0_1_ = 0xd;
      FString::FString(pFVar3);
      local_7c._0_1_ = 0xe;
      FUN_10051aa0();
      local_7c._0_1_ = 0xf;
      FString::FString((FString *)local_5c);
      local_7c._0_1_ = 0x10;
      FUN_10051aa0();
      local_7c._0_1_ = 0x11;
      FString::FString(local_68,(ushort *)L"ServerID");
      local_7c = CONCAT31(local_7c._1_3_,0x12);
      uVar11 = 0x10;
      local_8 = 0x10;
      iVar2 = FUN_100404d0(local_68,&local_28);
      if (iVar2 == 0) {
LAB_100683a3:
        local_9 = '\0';
      }
      else {
        FString::FString(local_dc,(ushort *)L"ClassID");
        local_7c = 0x13;
        uVar11 = 0x30;
        local_8 = 0x30;
        iVar2 = FUN_100404d0(local_dc,&local_10);
        if (iVar2 == 0) goto LAB_100683a3;
        FString::FString(local_cc,(ushort *)L"EffectID");
        local_7c = 0x14;
        uVar11 = 0x70;
        local_8 = 0x70;
        iVar2 = FUN_100404d0(local_cc,&local_6c);
        if (iVar2 == 0) goto LAB_100683a3;
        FString::FString(local_b8,(ushort *)L"NormalColor");
        local_7c = 0x15;
        uVar11 = 0xf0;
        local_8 = 0xf0;
        iVar2 = FUN_100406e0(local_b8,local_40);
        if (iVar2 == 0) goto LAB_100683a3;
        FString::FString(local_a4,(ushort *)L"EnableColor");
        local_7c = 0x16;
        uVar11 = 0x1f0;
        local_8 = 0x1f0;
        iVar2 = FUN_100406e0(local_a4,pFVar3);
        local_9 = '\x01';
        if (iVar2 == 0) goto LAB_100683a3;
      }
      local_7c = 0x15;
      if ((uVar11 & 0x100) != 0) {
        uVar11 = uVar11 & 0xfffffeff;
        local_8 = uVar11;
        FString::~FString(local_a4);
      }
      local_7c = 0x14;
      if ((char)uVar11 < '\0') {
        uVar11 = uVar11 & 0xffffff7f;
        local_8 = uVar11;
        FString::~FString(local_b8);
      }
      local_7c = 0x13;
      if ((uVar11 & 0x40) != 0) {
        uVar11 = uVar11 & 0xffffffbf;
        local_8 = uVar11;
        FString::~FString(local_cc);
      }
      local_7c = 0x12;
      if ((uVar11 & 0x20) != 0) {
        uVar11 = uVar11 & 0xffffffdf;
        local_8 = uVar11;
        FString::~FString(local_dc);
      }
      local_7c = 0x11;
      if ((uVar11 & 0x10) != 0) {
        local_8 = uVar11 & 0xffffffef;
        FString::~FString(local_68);
      }
      if (local_9 != '\0') {
        local_44 = 1;
        iVar2 = FUN_101b2b30(local_28);
        if (iVar2 == -1) {
          local_44 = 0;
LAB_10068505:
          pFVar10 = local_40;
        }
        else {
          local_bc = 0;
          while (iVar2 = local_bc, local_bc <= local_6c) {
            puVar4 = FL2GameData::GetItemSetListID
                               ((FL2GameData *)GL2GameData_exref,local_10,local_bc);
            FString::operator=((FString *)local_5c,puVar4);
            iVar7 = FString::Len((FString *)local_5c);
            if (0 < iVar7) {
              FUN_100520c0(0);
              FString::ParseIntoArray
                        ((FString *)local_5c,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_34);
              for (iVar7 = 0; local_d0 = iVar7, iVar7 < local_30; iVar7 = iVar7 + 1) {
                puVar4 = FString::operator*(local_34 + iVar7 * 0xc);
                iVar8 = appAtoi(puVar4);
                iVar8 = FUN_101b2b50(iVar8);
                if (iVar8 < 0) {
                  local_44 = 0;
                  goto LAB_10068505;
                }
              }
              if (local_44 == 0) goto LAB_10068505;
            }
            local_bc = iVar2 + 1;
          }
          pFVar10 = pFVar3;
          if (local_44 == 0) goto LAB_10068505;
        }
        iVar2 = FString::SplitIntoArray(pFVar10,(ushort *)&DAT_10246d48,(TArray<FString> *)local_50)
        ;
        if (2 < iVar2) {
          local_24[0] = local_50[0] + 0x18;
          puVar4 = FString::operator*(local_50[0]);
          uVar11 = appAtoi(puVar4);
          puVar4 = FString::operator*(local_50[0] + 0xc);
          uVar5 = appAtoi(puVar4);
          puVar4 = FString::operator*(local_24[0]);
          uVar6 = appAtoi(puVar4);
          *(uint *)(param_1 + 0x24) = uVar6 | (uVar5 | (uVar11 | 0xffffff00) << 8) << 8;
        }
      }
      local_7c._0_1_ = 0x10;
      FUN_10052740();
      local_7c._0_1_ = 0xf;
      FString::~FString((FString *)local_5c);
      local_7c._0_1_ = 0xe;
      FUN_10052740();
      local_7c._0_1_ = 0xd;
      FString::~FString(pFVar3);
      pFVar3 = local_40;
    }
    else {
      FString::FString((FString *)local_5c);
      local_7c._0_1_ = 6;
      FString::FString((FString *)local_50);
      local_7c._0_1_ = 7;
      FUN_10051aa0();
      local_7c._0_1_ = 8;
      FString::FString(local_a4,(ushort *)L"ServerID");
      local_7c = CONCAT31(local_7c._1_3_,9);
      uVar11 = 1;
      local_8 = 1;
      iVar2 = FUN_100404d0(local_a4,&local_10);
      if (iVar2 == 0) {
LAB_100680fb:
        local_9 = '\0';
      }
      else {
        FString::FString(local_b8,(ushort *)L"EquipID");
        local_7c = 10;
        uVar11 = 3;
        local_8 = 3;
        iVar2 = FUN_100404d0(local_b8,&local_6c);
        if (iVar2 == 0) goto LAB_100680fb;
        FString::FString(pFVar3,(ushort *)L"NormalColor");
        local_7c = 0xb;
        uVar11 = 7;
        local_8 = 7;
        iVar2 = FUN_100406e0(pFVar3,local_5c);
        if (iVar2 == 0) goto LAB_100680fb;
        FString::FString(local_40,(ushort *)L"EnableColor");
        local_7c = 0xc;
        uVar11 = 0xf;
        local_8 = 0xf;
        iVar2 = FUN_100406e0(local_40,local_50);
        local_9 = '\x01';
        if (iVar2 == 0) goto LAB_100680fb;
      }
      local_7c = 0xb;
      if ((uVar11 & 8) != 0) {
        uVar11 = uVar11 & 0xfffffff7;
        local_8 = uVar11;
        FString::~FString(local_40);
      }
      local_7c = 10;
      if ((uVar11 & 4) != 0) {
        uVar11 = uVar11 & 0xfffffffb;
        local_8 = uVar11;
        FString::~FString(pFVar3);
      }
      local_7c = 9;
      if ((uVar11 & 2) != 0) {
        uVar11 = uVar11 & 0xfffffffd;
        local_8 = uVar11;
        FString::~FString(local_b8);
      }
      local_7c = 8;
      if ((uVar11 & 1) != 0) {
        local_8 = uVar11 & 0xfffffffe;
        FString::~FString(local_a4);
      }
      if (local_9 != '\0') {
        local_c0 = 0;
        iVar2 = FUN_101b2b30(local_10);
        if ((iVar2 == -1) || (iVar2 = FUN_101b2b50(local_6c), iVar2 == -1)) {
          pFVar3 = (FString *)local_5c;
        }
        else {
          local_c0 = 1;
          pFVar3 = (FString *)local_50;
        }
        iVar2 = FString::SplitIntoArray(pFVar3,(ushort *)&DAT_10246d48,(TArray<FString> *)&local_34)
        ;
        if (2 < iVar2) {
          local_28 = local_34 + 0x18;
          puVar4 = FString::operator*(local_34);
          uVar11 = appAtoi(puVar4);
          puVar4 = FString::operator*(local_34 + 0xc);
          uVar5 = appAtoi(puVar4);
          puVar4 = FString::operator*(local_28);
          uVar6 = appAtoi(puVar4);
          *(uint *)(param_1 + 0x24) = uVar6 | (uVar5 | (uVar11 | 0xffffff00) << 8) << 8;
        }
      }
      local_7c._0_1_ = 7;
      FUN_10052740();
      local_7c._0_1_ = 6;
      FString::~FString((FString *)local_50);
      pFVar3 = (FString *)local_5c;
    }
  }
  else {
    FString::FString(local_40,(ushort *)L"Value");
    local_7c._0_1_ = 4;
    iVar2 = FUN_100404d0(local_40,&local_10);
    local_7c._0_1_ = 2;
    FString::~FString(local_40);
    if (iVar2 == 0) goto LAB_10068a3c;
    pFVar3 = (FString *)FUN_100628f0(local_68,local_10);
    local_7c._0_1_ = 5;
LAB_10068a25:
    FString::operator=((FString *)(param_1 + 0x18),pFVar3);
    pFVar3 = local_68;
  }
LAB_10068a36:
  local_7c._0_1_ = 2;
  FString::~FString(pFVar3);
LAB_10068a3c:
  local_7c._0_1_ = 1;
  FUN_1003fff0();
  local_7c = (uint)local_7c._1_3_ << 8;
  FString::~FString(local_94);
  ExceptionList = local_84;
  return;
}


// ==== 10068a61 Catch@10068a61

void Catch_10068a61(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10068a75 Catch@10068a75

void Catch_10068a75(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::DrawItemApplyCondition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10068aa0 FUN_10068aa0

undefined4 FUN_10068aa0(undefined4 param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  FString *this;
  ushort *puVar3;
  uint uStack_48;
  FString local_38 [12];
  int local_2c;
  int local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e45c1;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  local_8 = 0;
  if (param_4 != 0) {
    ExceptionList = &local_10;
    iVar1 = (**(code **)(**(int **)GConfig_exref + 0x1c))(param_1,0,1,param_3);
    if (iVar1 != 0) {
      FUN_10051aa0();
      local_8._0_1_ = 1;
      uVar2 = FString::FString(local_38,param_2);
      local_8._0_1_ = 2;
      FUN_10065b20(uVar2,&local_2c);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_38);
      iVar1 = local_28;
      while (iVar1 = iVar1 + -1, local_18 = iVar1, -1 < iVar1) {
        this = (FString *)FUN_10083a80(0xc,param_4);
        if (this != (FString *)0x0) {
          puVar3 = FString::operator*((FString *)(local_2c + iVar1 * 0xc));
          FString::FString(this,puVar3);
        }
      }
      local_8 = local_8 & 0xffffff00;
      FUN_10052740();
    }
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 10068ba1 Catch@10068ba1

void Catch_10068ba1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10068bb5 Catch@10068bb5

void Catch_10068bb5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::GetUCList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10068be0 FUN_10068be0

void FUN_10068be0(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  FString *this;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FString *pFVar18;
  undefined4 uVar19;
  uint uStack_5c;
  FString local_4c [12];
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e45e9;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_4c);
  local_8._0_1_ = 1;
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_20 = param_3;
  local_24 = param_4;
  local_18 = param_5;
  local_30 = 0;
  iVar3 = 0;
  iVar6 = param_3;
  do {
    while( true ) {
      if (param_2[1] <= local_30) {
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        ExceptionList = local_10;
        return;
      }
      piVar1 = *(int **)(*param_2 + local_30 * 4);
      if (piVar1 != (int *)0x0) break;
LAB_10068ec6:
      local_30 = local_30 + 1;
    }
    if ((piVar1[3] == 0) && (*piVar1 != 0)) {
      iVar6 = iVar6 + piVar1[1];
      local_28 = iVar3 + piVar1[1];
    }
    else {
      local_2c = local_2c + 1;
      if ((0 < param_6) && (local_2c == param_6)) {
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        ExceptionList = local_10;
        return;
      }
      iVar6 = piVar1[1] + param_3;
      param_4 = param_4 + local_1c;
      if (local_18 < iVar3) {
        local_18 = iVar3;
      }
      local_28 = 0;
      local_1c = 0;
      local_24 = param_4;
    }
    iVar4 = *piVar1;
    iVar3 = local_28;
    if (iVar4 != 0) {
      local_20 = iVar6;
      if (iVar4 == 1) {
        FUN_10067ec0(piVar1);
        pFVar18 = local_4c;
        if (piVar1[5] < 1) {
          this = (FString *)(piVar1 + 6);
        }
        else {
          this = (FString *)(GL2GameData_exref + piVar1[5] * 0xc + 0x6a8dc);
        }
        puVar2 = FString::operator*(this);
        FUN_10146040(puVar2,pFVar18);
        iVar3 = FUN_10146430(local_4c);
        if (iVar3 == 0) {
          if ((piVar1[10] == 0) && (0 < local_18)) {
            iVar3 = (local_18 - iVar6) + param_3;
            uVar17 = 0xffffffff;
            uVar16 = 0;
            uVar15 = 0;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 1;
            uVar7 = 0;
            iVar4 = iVar3;
            puVar2 = FString::operator*(local_4c);
            FUN_100217a0(iVar6,piVar1[2] + local_24,piVar1[9],puVar2,iVar4,uVar7,uVar8,uVar9,uVar10,
                         uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 1;
            uVar7 = 0;
            puVar2 = FString::operator*(local_4c);
            FUN_10020bb0(&local_40,puVar2,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11);
            param_4 = local_24;
          }
          else {
            uVar19 = 0xffffffff;
            uVar17 = 0;
            uVar16 = 0;
            uVar15 = 0;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            puVar2 = FString::operator*(local_4c);
            FUN_100217a0(iVar6,piVar1[2] + param_4,piVar1[9],puVar2,uVar7,uVar8,uVar9,uVar10,uVar11,
                         uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar19);
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            puVar2 = FString::operator*(local_4c);
            FUN_10020bb0(&local_40,puVar2,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
          }
        }
        else {
          uVar19 = 0xffffffff;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 1;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          puVar2 = FString::operator*(local_4c);
          FUN_100217a0(iVar6,piVar1[2] + param_4,piVar1[9],puVar2,uVar7,uVar8,uVar9,uVar10,uVar11,
                       uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar19);
          local_40 = 0xc;
          local_3c = 0xc;
        }
        iVar6 = iVar6 + local_40;
        local_28 = iVar6 - param_3;
        if (local_18 < local_28) {
          local_18 = local_28;
        }
        iVar4 = piVar1[2];
        iVar5 = local_3c;
      }
      else {
        if (iVar4 != 2) goto LAB_10068ec6;
        FUN_10021a00(iVar6,piVar1[2] + param_4,piVar1[0xb],piVar1[0xc],0,0,piVar1[0xd],piVar1[0xe],
                     piVar1[0x12],0xff,1);
        iVar6 = iVar6 + piVar1[0xb];
        local_28 = iVar6 - param_3;
        if (local_18 < local_28) {
          local_18 = local_28;
        }
        iVar4 = piVar1[0xc];
        iVar5 = piVar1[2];
      }
      iVar3 = local_28;
      local_20 = iVar6;
      if (local_1c < iVar4 + iVar5) {
        local_1c = iVar4 + iVar5;
      }
      goto LAB_10068ec6;
    }
    local_1c = 0;
    local_20 = param_3;
    param_4 = param_4 + piVar1[4];
    local_30 = local_30 + 1;
    iVar6 = param_3;
    local_24 = param_4;
  } while( true );
}


// ==== 10068ef8 Catch@10068ef8

void Catch_10068ef8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10068f0c Catch@10068f0c

void Catch_10068f0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::DrawItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10068f30 FUN_10068f30

/* WARNING: Removing unreachable block (ram,0x10069173) */

int FUN_10068f30(FString *param_1)

{
  ushort *puVar1;
  FString *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uStack_ac;
  FString local_9c [12];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  undefined1 local_74 [8];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  undefined1 local_48 [4];
  int local_44;
  FString local_3c [12];
  FString local_30 [12];
  int local_24;
  int local_1c;
  int local_18;
  longlong local_10;
  int local_8;
  
  puStack_7c = &LAB_101e467a;
  local_80 = ExceptionList;
  uStack_ac = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_ac;
  ExceptionList = &local_80;
  iVar4 = 0;
  local_78 = 0;
  puVar1 = FString::operator*(param_1);
  FString::Printf((ushort *)local_54,L"%s.u",puVar1);
  local_78._0_1_ = 1;
  iVar3 = **(int **)GFileManager_exref;
  puVar1 = FString::operator*(local_54);
  local_10 = (**(code **)(iVar3 + 0x20))(puVar1);
  local_8 = 1;
  if (local_10 == 0) {
    local_78 = (uint)local_78._1_3_ << 8;
    FString::~FString(local_54);
    local_8 = 0;
  }
  else {
    pFVar2 = (FString *)FString::FString(local_30,(ushort *)&DAT_102407c8);
    local_78._0_1_ = 2;
    pFVar2 = (FString *)FString::operator*(pFVar2,local_3c);
    local_78._0_1_ = 3;
    pwVar10 = L"Classes";
    FString::operator*(pFVar2,(ushort *)local_60);
    local_78._0_1_ = 5;
    FString::~FString(local_3c);
    local_78._0_1_ = 6;
    FString::~FString(local_30);
    pwVar9 = L"*.uc";
    FString::operator*(local_60,(ushort *)local_6c);
    local_78._0_1_ = 7;
    FUN_10051aa0(pwVar9,pwVar10);
    local_78._0_1_ = 8;
    pwVar9 = L"uclist.int";
    pFVar2 = (FString *)FString::operator*(local_60,(ushort *)local_30);
    local_78._0_1_ = 9;
    puVar7 = local_48;
    puVar1 = FString::operator*(pFVar2);
    FUN_10068aa0(L"Classes",L"Class",puVar1,puVar7,pwVar9);
    local_78._0_1_ = 8;
    FString::~FString(local_30);
    iVar3 = **(int **)GFileManager_exref;
    uVar8 = 0;
    uVar6 = 1;
    puVar1 = FString::operator*(local_6c);
    (**(code **)(iVar3 + 0x30))(&local_1c,puVar1,uVar6,uVar8);
    local_78._0_1_ = 10;
    if (local_44 != local_18) {
      local_8 = 0;
    }
    for (; local_24 = iVar4, iVar4 < local_18; iVar4 = iVar4 + 1) {
      pFVar2 = (FString *)FString::FString(local_9c,(ushort *)&DAT_102407c8);
      local_78._0_1_ = 0xb;
      pFVar2 = (FString *)FString::operator*(pFVar2,local_90);
      local_78._0_1_ = 0xc;
      pFVar2 = (FString *)FString::operator*(pFVar2,(ushort *)local_30);
      local_78._0_1_ = 0xd;
      FString::operator*(pFVar2,local_3c);
      local_78._0_1_ = 0xf;
      FString::~FString(local_30);
      local_78._0_1_ = 0x10;
      FString::~FString(local_90);
      local_78._0_1_ = 0x11;
      FString::~FString(local_9c);
      iVar3 = **(int **)GFileManager_exref;
      puVar1 = FString::operator*(local_3c);
      lVar5 = (**(code **)(iVar3 + 0x20))(puVar1);
      if (local_10 <= lVar5) {
LAB_100691a4:
        local_8 = 0;
        local_78._0_1_ = 10;
        FString::~FString(local_3c);
        goto LAB_100691c0;
      }
      iVar3 = FUN_10065a60(iVar4 * 0xc + local_1c);
      if (iVar3 == -1) goto LAB_100691a4;
      local_78._0_1_ = 10;
      FString::~FString(local_3c);
    }
    if (local_8 == 0) {
LAB_100691c0:
      iVar3 = **(int **)GFileManager_exref;
      uVar8 = 1;
      uVar6 = 0;
      puVar1 = FString::operator*(local_54);
      (**(code **)(iVar3 + 0x14))(puVar1,uVar6,uVar8);
    }
    local_78._0_1_ = 8;
    FUN_10052740();
    local_78._0_1_ = 7;
    FUN_10052740();
    local_78._0_1_ = 6;
    FString::~FString(local_6c);
    local_78._0_1_ = 1;
    FString::~FString(local_60);
    local_78 = (uint)local_78._1_3_ << 8;
    FString::~FString(local_54);
  }
  ExceptionList = local_80;
  return local_8;
}


// ==== 1006922e Catch@1006922e

void Catch_1006922e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x54) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x54,&DAT_102a47f0);
}


// ==== 10069242 Catch@10069242

void Catch_10069242(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NWndUtil::CheckDependency");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069260 FUN_10069260

bool FUN_10069260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1001cb30(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 10069280 FUN_10069280

void FUN_10069280(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_58;
  FString local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e46b2;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  appSystemTime(&local_38,&local_34,&local_30,&local_2c,&local_20,&local_1c,&local_18,local_28);
  puVar2 = FString::operator*((FString *)&stack0x00000004);
  FString::Printf((ushort *)local_48,L"(%02d:%02d:%02d) %s",local_20,local_1c,local_18,puVar2);
  local_8._0_1_ = 2;
  if (*(int **)(in_ECX + 0x230) != (int *)0x0) {
    iVar1 = **(int **)(in_ECX + 0x230);
    uVar4 = 0xffffffff;
    uVar3 = 0xffdcdcdc;
    puVar2 = FString::operator*(local_48);
    (**(code **)(iVar1 + 0x1fc))(puVar2,uVar3,uVar4);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_48);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10069369 Catch@10069369

void Catch_10069369(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1006937d Catch@1006937d

void Catch_1006937d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLDebugWnd::AddErrorMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100693a0 FUN_100693a0

void FUN_100693a0(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_58;
  FString local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e46d9;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  appSystemTime(&local_38,&local_34,&local_30,&local_2c,&local_20,&local_1c,&local_18,local_28);
  FString::Printf((ushort *)local_48,L"(%02d:%02d:%02d) ",local_20,local_1c,local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::operator+=(local_48,param_1);
  if (*(int *)(in_ECX + 0x230) != 0) {
    iVar1 = **(int **)(in_ECX + 0x230);
    uVar4 = 0xffffffff;
    uVar3 = 0xffdcdcdc;
    puVar2 = FString::operator*(local_48);
    (**(code **)(iVar1 + 0x1fc))(puVar2,uVar3,uVar4);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 10069481 Catch@10069481

void Catch_10069481(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10069495 Catch@10069495

void Catch_10069495(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLDebugWnd::AddMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100694c0 FUN_100694c0

void FUN_100694c0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e4709;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 0x301) {
    uVar1 = FString::Printf((ushort *)local_28,L"ScriptWarning: %s",param_1);
    local_8._0_1_ = 1;
    FUN_100693a0(uVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006954b Catch@1006954b

void Catch_1006954b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006955f Catch@1006955f

void Catch_1006955f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLDebugWnd::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069580 FUN_10069580

void FUN_10069580(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4730;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)GLogHook2_exref = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return;
}


// ==== 100695d4 Catch@100695d4

void Catch_100695d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100695e8 Catch@100695e8

void Catch_100695e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLDebugWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069610 FUN_10069610

void FUN_10069610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103649c0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10069640 FUN_10069640

undefined4 FUN_10069640(void)

{
  UPackage *pUVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX + 0x22c;
  }
  *(int *)GLogHook2_exref = iVar2;
  FUN_10061b40();
  FName::FName((FName *)&stack0xffffffc4,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_10069610(0x324,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10034070();
  }
  *(int *)(in_ECX + 0x230) = iVar2;
  if (iVar2 == 0) {
    appFailAssert("m_pDebugListBox",".\\Src\\NXMLDebugWnd.cpp",0x41);
  }
  FUN_10060d40();
  FUN_1005c1e0();
  (**(code **)(**(int **)(in_ECX + 0x230) + 0xd0))(2);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x130))(0x3f7ae148,0x3f666666,0,0);
  *(undefined4 *)(*(int *)(in_ECX + 0x230) + 800) = 1;
  FUN_10032450(1000);
  ExceptionList = local_10;
  return 1;
}


// ==== 10069784 Catch@10069784

void Catch_10069784(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069798 Catch@10069798

void Catch_10069798(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLDebugWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100697c0 FUN_100697c0

void FUN_100697c0(void)

{
  undefined4 *in_ECX;
  FString aFStack_50 [4];
  undefined4 uStack_4c;
  FString aFStack_44 [8];
  undefined4 uStack_3c;
  uint uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e478a;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_4c = 0x10069803;
  FString::FString(aFStack_44,(ushort *)&DAT_1022f9f8);
  local_8 = 0;
  FString::FString(aFStack_50,(ushort *)L"Default.BlackTexture");
  local_8 = 0xffffffff;
  FUN_100205d0();
  local_8 = 2;
  uStack_3c = 0x10069843;
  FOutputDevice::FOutputDevice((FOutputDevice *)(in_ECX + 0x8b));
  *in_ECX = NCXMLDebugWnd::vftable;
  *(undefined ***)(in_ECX + 0x8b) = NCXMLDebugWnd::vftable;
  in_ECX[0x8c] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10069874 Catch@10069874

void Catch_10069874(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069888 Catch@10069888

void Catch_10069888(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLDebugWnd::NCXMLDebugWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100698b0 FUN_100698b0

void FUN_100698b0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e47b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCXMLDebugWnd::vftable;
  *(undefined ***)(in_ECX + 0x22c) = NCXMLDebugWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10020a90(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10069920 FUN_10069920

void FUN_10069920(byte param_1)

{
  void *in_ECX;
  
  FUN_100698b0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x234);
  }
  return;
}


// ==== 10069960 FUN_10069960

void FUN_10069960(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e47ec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString((FString *)(in_ECX + 7));
  *in_ECX = 1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[10] = 0xffffffff;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100699ef Catch@100699ef

void Catch_100699ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069a03 Catch@10069a03

void Catch_10069a03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNodeItem::NCXMLTreeNodeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069a20 FUN_10069a20

void FUN_10069a20(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e481c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::Empty((FString *)(in_ECX + 0x1c));
  local_8 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x1c));
  ExceptionList = local_10;
  return;
}


// ==== 10069a85 Catch@10069a85

void Catch_10069a85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069a99 Catch@10069a99

void Catch_10069a99(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNodeItem::~NCXMLTreeNodeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069ac0 FUN_10069ac0

void FUN_10069ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x94) = param_1;
  *(undefined4 *)(in_ECX + 0x98) = param_2;
  *(undefined4 *)(in_ECX + 0x9c) = param_3;
  *(undefined4 *)(in_ECX + 0xa0) = param_4;
  *(undefined4 *)(in_ECX + 0xa4) = param_5;
  *(undefined4 *)(in_ECX + 0xa8) = param_6;
  *(undefined4 *)(in_ECX + 0xac) = param_7;
  *(undefined4 *)(in_ECX + 0xb0) = param_8;
  return;
}


// ==== 10069b55 Catch@10069b55

void Catch_10069b55(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069b69 Catch@10069b69

void Catch_10069b69(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::SetButtonTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069b90 FUN_10069b90

void FUN_10069b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x58) = param_1;
  *(undefined4 *)(in_ECX + 0x5c) = param_2;
  *(undefined4 *)(in_ECX + 0x60) = param_3;
  *(undefined4 *)(in_ECX + 100) = param_4;
  *(undefined4 *)(in_ECX + 0x68) = param_5;
  return;
}


// ==== 10069bfb Catch@10069bfb

void Catch_10069bfb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069c0f Catch@10069c0f

void Catch_10069c0f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::SetBackTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069c30 FUN_10069c30

void FUN_10069c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x74) = param_1;
  *(undefined4 *)(in_ECX + 0x78) = param_2;
  *(undefined4 *)(in_ECX + 0x7c) = param_3;
  *(undefined4 *)(in_ECX + 0x80) = param_4;
  *(undefined4 *)(in_ECX + 0x84) = param_5;
  *(undefined4 *)(in_ECX + 0x88) = param_6;
  *(undefined4 *)(in_ECX + 0x8c) = param_7;
  *(undefined4 *)(in_ECX + 0x90) = param_8;
  *(undefined4 *)(in_ECX + 0x6c) = param_9;
  *(undefined4 *)(in_ECX + 0x70) = param_10;
  return;
}


// ==== 10069cc8 Catch@10069cc8

void Catch_10069cc8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069cdc Catch@10069cdc

void Catch_10069cdc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::SetExpandTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069d00 FUN_10069d00

void FUN_10069d00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_2;
  *(float *)(in_ECX + 0xc) = (float)param_3;
  *(float *)(in_ECX + 0x10) = (float)param_4;
  return;
}


// ==== 10069d67 Catch@10069d67

void Catch_10069d67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069d7b Catch@10069d7b

void Catch_10069d7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::SetRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069da0 FUN_10069da0

undefined4 FUN_10069da0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x32c) = (uint)(ushort)((short)param_2 - *(short *)(in_ECX + 0x80));
  *(uint *)(in_ECX + 0x330) =
       (uint)(ushort)((short)((uint)param_2 >> 0x10) - *(short *)(in_ECX + 0x84));
  return 0;
}


// ==== 10069e17 Catch@10069e17

void Catch_10069e17(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069e2b Catch@10069e2b

void Catch_10069e2b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069e50 FUN_10069e50

void FUN_10069e50(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e48e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x78))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10069eb6 Catch@10069eb6

void Catch_10069eb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069eca Catch@10069eca

void Catch_10069eca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::SetFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069ef0 FUN_10069ef0

undefined4 FUN_10069ef0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x214) != 0) {
    *(undefined4 *)(in_ECX + 0x214) = 0;
  }
  FUN_10043b60();
  ExceptionList = local_10;
  return 1;
}


// ==== 10069f51 Catch@10069f51

void Catch_10069f51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069f65 Catch@10069f65

void Catch_10069f65(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10069f90 FUN_10069f90

void FUN_10069f90(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 10069feb Catch@10069feb

void Catch_10069feb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10069fff Catch@10069fff

void Catch_10069fff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a020 FUN_1006a020

void FUN_1006a020(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e494c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1006a090 FUN_1006a090

void FUN_1006a090(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e497c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1006a100 FUN_1006a100

void FUN_1006a100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036d708,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1006a130 FUN_1006a130

void FUN_1006a130(byte param_1)

{
  FUN_10069a20();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1006a160 FUN_1006a160

void FUN_1006a160(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e49a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1001d9e0(in_ECX + 4);
  ExceptionList = local_10;
  return;
}


// ==== 1006a1b9 Catch@1006a1b9

void Catch_1006a1b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006a1cd Catch@1006a1cd

void Catch_1006a1cd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::GetRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a1f0 FUN_1006a1f0

void FUN_1006a1f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  puStack_c = &LAB_101e49c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10054f20(param_2 + 0xb0);
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_2 + 0xc4) & 1;
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  iVar2 = *(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x4c) = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x1c);
    FUN_10069b90(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                 *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                 *(undefined4 *)(param_2 + 0x30));
  }
  iVar2 = FString::Len((FString *)(param_2 + 0x40));
  if (iVar2 < 1) {
    param_2 = 0;
  }
  else {
    uVar4 = 1;
    puVar3 = FString::operator*((FString *)(param_2 + 0x40));
    param_2 = FUN_1003f630(puVar3,uVar4);
  }
  iVar2 = FString::Len((FString *)(iVar1 + 0x34));
  if (iVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    puVar3 = FString::operator*((FString *)(iVar1 + 0x34));
    uVar4 = FUN_1003f630(puVar3,uVar4);
  }
  FUN_10069c30(*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
               *(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58),
               *(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(iVar1 + 0x60),
               *(undefined4 *)(iVar1 + 100),*(undefined4 *)(iVar1 + 0x68),uVar4,param_2);
  iVar2 = *(int *)(iVar1 + 0x6c);
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FString::Len((FString *)(iVar1 + 0xa4));
    if (iVar2 < 1) {
      param_2 = 0;
    }
    else {
      uVar4 = 1;
      puVar3 = FString::operator*((FString *)(iVar1 + 0xa4));
      param_2 = FUN_1003f630(puVar3,uVar4);
    }
    iVar2 = FString::Len((FString *)(iVar1 + 0x98));
    if (iVar2 < 1) {
      param_1 = 0;
    }
    else {
      uVar4 = 1;
      puVar3 = FString::operator*((FString *)(iVar1 + 0x98));
      param_1 = FUN_1003f630(puVar3,uVar4);
    }
    iVar2 = FString::Len((FString *)(iVar1 + 0x8c));
    if (iVar2 < 1) {
      local_1c = 0;
    }
    else {
      uVar4 = 1;
      puVar3 = FString::operator*((FString *)(iVar1 + 0x8c));
      local_1c = FUN_1003f630(puVar3,uVar4);
    }
    iVar2 = FString::Len((FString *)(iVar1 + 0x80));
    if (iVar2 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      puVar3 = FString::operator*((FString *)(iVar1 + 0x80));
      uVar4 = FUN_1003f630(puVar3,uVar4);
    }
    FUN_10069ac0(*(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x74),
                 *(undefined4 *)(iVar1 + 0x78),*(undefined4 *)(iVar1 + 0x7c),uVar4,local_1c,param_1,
                 param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006a412 Catch@1006a412

void Catch_1006a412(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1006a426 Catch@1006a426

void Catch_1006a426(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::CopyNodeFromInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a450 FUN_1006a450

void FUN_1006a450(int param_1,int param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e49e0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x44) <= iVar2) {
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + iVar2 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == param_2)) break;
    iVar2 = iVar2 + 1;
  }
  ExceptionList = &local_10;
  FString::operator=((FString *)(iVar1 + 0x1c),param_3);
  ExceptionList = local_10;
  return;
}


// ==== 1006a4e2 Catch@1006a4e2

void Catch_1006a4e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006a4f6 Catch@1006a4f6

void Catch_1006a4f6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::SetNodeItemText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a520 FUN_1006a520

void FUN_1006a520(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x2e8) == 0) && (iVar1 = *param_1, iVar1 != 0)) &&
     (iVar1 == *(int *)(in_ECX + 0x2ec))) {
    for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x38); iVar2 = iVar2 + 1) {
      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x34) + iVar2 * 4) + 0x1c) = 0;
    }
  }
  param_1[7] = param_2;
  return;
}


// ==== 1006a5a5 Catch@1006a5a5

void Catch_1006a5a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006a5b9 Catch@1006a5b9

void Catch_1006a5b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::SetExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a5e0 FUN_1006a5e0

undefined4 FUN_1006a5e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  iVar2 = in_ECX[0xb8];
  uVar1 = FUN_101c19e0(iVar2);
  FUN_10021df0(in_ECX[0x20],in_ECX[0xb7] + in_ECX[0x21],uVar1,iVar2);
  in_ECX[0xbc] = 0;
  iVar2 = (**(code **)(*in_ECX + 0x1f8))(param_1,in_ECX[0xbb],0,0);
  in_ECX[0xb6] = iVar2;
  (**(code **)(*in_ECX + 0x128))(in_ECX[0x22],(float)iVar2);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1006a6c2 Catch@1006a6c2

void Catch_1006a6c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006a6d6 Catch@1006a6d6

void Catch_1006a6d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a700 FUN_1006a700

undefined4 FUN_1006a700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4a40;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar3 = *(undefined4 *)(in_ECX + 0x2e0);
  uVar1 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(int *)(in_ECX + 0x84) + *(int *)(in_ECX + 0x2dc),
               uVar1,uVar3);
  if (*(int *)(in_ECX + 0x2f0) != 0) {
    local_18 = *(int *)(in_ECX + 0x2e0);
    iVar2 = FUN_101c19e0();
    local_2c = *(undefined4 *)(in_ECX + 0x2dc);
    local_30 = 0;
    local_28 = (float)iVar2;
    local_24 = (float)local_18;
    iVar2 = FUN_100053e0(*(undefined4 *)(in_ECX + 0x32c),*(undefined4 *)(in_ECX + 0x330));
    if (iVar2 != 0) {
      FUN_1006a160(&local_30);
      uVar3 = local_2c;
      uVar1 = local_30;
      if (*(int *)(*(int *)(in_ECX + 0x2f0) + 0xf0) != 0) {
        uVar3 = *(undefined4 *)(in_ECX + 0x330);
        uVar1 = *(undefined4 *)(in_ECX + 0x32c);
      }
      FUN_10054680(param_1,*(int *)(in_ECX + 0x2f0) + 0xb4,uVar1,uVar3,
                   *(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),
                   *(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c));
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1006a871 Catch@1006a871

void Catch_1006a871(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006a885 Catch@1006a885

void Catch_1006a885(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a8b0 FUN_1006a8b0

void FUN_1006a8b0(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4a60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = 0;
  local_8 = 0;
  if (param_1 != 0) {
    for (; iVar1 < *(int *)(param_1 + 0x38); iVar1 = iVar1 + 1) {
      FUN_1006a8b0(*(undefined4 *)(*(int *)(param_1 + 0x34) + iVar1 * 4));
      FUN_10069d00(0,0,0,0);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006a932 Catch@1006a932

void Catch_1006a932(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006a946 Catch@1006a946

void Catch_1006a946(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::SetChildHidden");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006a970 FUN_1006a970

int FUN_1006a970(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uStack_44;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4a80;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  local_30 = 0;
  local_34 = 0;
  local_2c = 0.0;
  local_28 = 0.0;
  if (param_3 != 0) {
    FUN_1006a160(&local_34);
    if ((((-1 < param_1 - local_34) && ((float)(param_1 - local_34) < local_2c)) &&
        (-1 < param_2 - local_30)) && ((float)(param_2 - local_30) < local_28)) {
      ExceptionList = local_10;
      return param_3;
    }
    if (*(int *)(param_3 + 0x1c) != 0) {
      for (; iVar2 < *(int *)(param_3 + 0x38); iVar2 = iVar2 + 1) {
        local_1c = iVar2;
        iVar1 = FUN_1006a970(param_1,param_2,*(undefined4 *)(*(int *)(param_3 + 0x34) + iVar2 * 4));
        if (iVar1 != 0) {
          ExceptionList = local_10;
          return iVar1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1006aa48 Catch@1006aa48

void Catch_1006aa48(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1006aa5c Catch@1006aa5c

void Catch_1006aa5c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::HitTest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006aa80 FUN_1006aa80

void FUN_1006aa80(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4aa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100439b0(param_1,param_2);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x128))(param_1 - 16.0,param_2);
  uVar1 = FUN_101c19e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x214) + 0x2e0) = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1006ab22 Catch@1006ab22

void Catch_1006ab22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ab36 Catch@1006ab36

void Catch_1006ab36(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::SetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ab60 FUN_1006ab60

undefined4 FUN_1006ab60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10043dd0(*(undefined4 *)(*(int *)(in_ECX + 0x214) + 0x2d8));
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1006ac11 Catch@1006ac11

void Catch_1006ac11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ac25 Catch@1006ac25

void Catch_1006ac25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ac50 FUN_1006ac50

undefined4 FUN_1006ac50(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d0) < 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) + *(int *)(in_ECX + 0x1e0);
    if (0 < *(int *)(in_ECX + 0x1d0)) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,*(undefined4 *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2dc);
    *piVar1 = *piVar1 - *(int *)(in_ECX + 0x1e0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1006ad4c Catch@1006ad4c

void Catch_1006ad4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ad60 Catch@1006ad60

void Catch_1006ad60(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::OnUpBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ad80 FUN_1006ad80

undefined4 FUN_1006ad80(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4b00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1e4) < *(int *)(in_ECX + 0x1d0)) {
    *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
    *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
    *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) - *(int *)(in_ECX + 0x1e0);
    if (*(int *)(in_ECX + 0x1d0) < *(int *)(in_ECX + 0x1e4)) {
      *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1e4);
    }
    thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
    *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
    (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,-*(int *)(in_ECX + 0x1e0),0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2dc);
    *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1e0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1006ae84 Catch@1006ae84

void Catch_1006ae84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ae98 Catch@1006ae98

void Catch_1006ae98(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::OnDownBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006aec0 FUN_1006aec0

undefined4 FUN_1006aec0(int param_1)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  *(int *)(in_ECX + 0x1d0) = -param_1;
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2dc);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  ExceptionList = local_10;
  return 1;
}


// ==== 1006af89 Catch@1006af89

void Catch_1006af89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006af9d Catch@1006af9d

void Catch_1006af9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::OnScrollMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006afc0 FUN_1006afc0

undefined4 FUN_1006afc0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  sVar4 = (short)((uint)param_1 >> 0x10) / 0x78;
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(in_ECX + 0x1d0);
  if (sVar4 < 1) {
    iVar2 = *(int *)(in_ECX + 0x1e4);
    if (*(int *)(in_ECX + 0x1d0) <= iVar2) goto LAB_1006b0a9;
    iVar3 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar3;
    if (iVar3 < iVar2) {
      *(int *)(in_ECX + 0x1d0) = iVar2;
    }
  }
  else {
    if (-1 < *(int *)(in_ECX + 0x1d0)) goto LAB_1006b0a9;
    iVar2 = *(int *)(in_ECX + 0x1d0) + (int)sVar4 * *(int *)(in_ECX + 0x1e0) * 3;
    *(int *)(in_ECX + 0x1d0) = iVar2;
    if (0 < iVar2) {
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
    }
  }
  thunk_FUN_10049b50(-*(int *)(in_ECX + 0x1d0));
LAB_1006b0a9:
  *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) - *(int *)(in_ECX + 0x1cc);
  *(int *)(in_ECX + 0x1d8) = *(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x1d0);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0x148))(0,-*(int *)(in_ECX + 0x1d8),0);
  piVar1 = (int *)(*(int *)(in_ECX + 0x214) + 0x2dc);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x1d8);
  ExceptionList = local_10;
  return 1;
}


// ==== 1006b114 Catch@1006b114

void Catch_1006b114(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b128 Catch@1006b128

void Catch_1006b128(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::OnMouseWheel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b150 FUN_1006b150

void FUN_1006b150(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  if (0 < in_ECX[1]) {
    iVar2 = 0;
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*in_ECX + iVar2);
      puVar3 = FString::operator*((FString *)(puVar6 + 1));
      uVar4 = FUN_10048c20(puVar3);
      iVar2 = iVar2 + 0x14;
      uVar4 = in_ECX[4] - 1U & uVar4;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1006b210 FUN_1006b210

undefined4 * FUN_1006b210(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  puStack_c = &LAB_101e4b60;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_1 = in_ECX;
    FUN_100d9a30(&param_1);
    ExceptionList = local_10;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


// ==== 1006b283 Catch@1006b283

void Catch_1006b283(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b297 Catch@1006b297

void Catch_1006b297(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::InsertChildNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b2c0 FUN_1006b2c0

void FUN_1006b2c0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_100d9a30(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006b31f Catch@1006b31f

void Catch_1006b31f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b333 Catch@1006b333

void Catch_1006b333(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::InsertNodeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b350 FUN_1006b350

void FUN_1006b350(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100d0a00(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1006b3a5 Catch@1006b3a5

void Catch_1006b3a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b3b9 Catch@1006b3b9

void Catch_1006b3b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::FindNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b3e0 FUN_1006b3e0

void FUN_1006b3e0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4bc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006b2c0(param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1006b439 Catch@1006b439

void Catch_1006b439(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b44d Catch@1006b44d

void Catch_1006b44d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::InsertNodeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b470 FUN_1006b470

undefined4 FUN_1006b470(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  UUIScript *this;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4be0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1006a970((short)param_2 - (short)in_ECX[0x20],
                       (short)((uint)param_2 >> 0x10) - (short)in_ECX[0x21],in_ECX[0xbb]);
  if (iVar1 != 0) {
    FUN_1006a520(iVar1,*(int *)(iVar1 + 0x1c) == 0);
    this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
    if (this != (UUIScript *)0x0) {
      UUIScript::eventOnClickButton(this,(FString *)(iVar1 + 0x20));
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1006b526 Catch@1006b526

void Catch_1006b526(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b53a Catch@1006b53a

void Catch_1006b53a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b560 FUN_1006b560

void FUN_1006b560(FString *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e4c0b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FString::Len(param_1);
  if (0 < iVar2) {
    iVar2 = FUN_1006b350(param_1);
    if (iVar2 != 0) {
      iVar3 = FUN_10004ed0(0x4c);
      local_8._0_1_ = 1;
      if (iVar3 == 0) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)FUN_10069960();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      puVar4[1] = *(uint *)(param_2 + 4);
      puVar4[2] = *(uint *)(param_2 + 8);
      *puVar4 = (uint)*param_2;
      puVar4[3] = *(uint *)(param_2 + 0xc) & 1;
      puVar4[4] = *(uint *)(param_2 + 0xc) >> 1 & 1;
      bVar1 = *param_2;
      if (bVar1 == 0) {
        puVar4[5] = *(uint *)(param_2 + 0x10);
      }
      else if (bVar1 == 1) {
        puVar4[6] = *(uint *)(param_2 + 0x14);
        FString::operator=((FString *)(puVar4 + 7),(FString *)(param_2 + 0x18));
        uVar5 = FColor::operator_unsigned_long((FColor *)(param_2 + 0x24));
        if (uVar5 != 0) {
          puVar6 = FColor::DWColor((FColor *)(param_2 + 0x24));
          puVar4[10] = *puVar6;
        }
        puVar4[0xb] = *(uint *)(param_2 + 0x28) & 1;
      }
      else if (bVar1 == 2) {
        puVar4[0xc] = *(uint *)(param_2 + 0x2c);
        puVar4[0xd] = *(uint *)(param_2 + 0x30);
        uVar8 = *(uint *)(param_2 + 0x34);
        if ((int)uVar8 < 1) {
          uVar8 = *(uint *)(param_2 + 0x2c);
        }
        puVar4[0xe] = uVar8;
        if ((int)*(uint *)(param_2 + 0x38) < 1) {
          puVar4[0xf] = *(uint *)(param_2 + 0x30);
        }
        else {
          puVar4[0xf] = *(uint *)(param_2 + 0x38);
        }
        iVar3 = FString::Len((FString *)(param_2 + 0x3c));
        if (0 < iVar3) {
          uVar9 = 1;
          puVar7 = FString::operator*((FString *)(param_2 + 0x3c));
          uVar8 = FUN_1003f630(puVar7,uVar9);
          puVar4[0x10] = uVar8;
        }
        iVar3 = FString::Len((FString *)(param_2 + 0x48));
        if (0 < iVar3) {
          uVar9 = 1;
          puVar7 = FString::operator*((FString *)(param_2 + 0x48));
          uVar8 = FUN_1003f630(puVar7,uVar9);
          puVar4[0x11] = uVar8;
        }
        iVar3 = FString::Len((FString *)(param_2 + 0x54));
        if (0 < iVar3) {
          uVar9 = 1;
          puVar7 = FString::operator*((FString *)(param_2 + 0x54));
          uVar8 = FUN_1003f630(puVar7,uVar9);
          puVar4[0x12] = uVar8;
        }
      }
      FUN_1006b3e0(iVar2,puVar4);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006b731 Catch@1006b731

void Catch_1006b731(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006b745 Catch@1006b745

void Catch_1006b745(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::InsertNodeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b770 FUN_1006b770

void FUN_1006b770(FString *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4c30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_1006b350(param_1);
    if (iVar1 != 0) {
      FUN_1006a450(iVar1,param_2,param_3);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006b7f2 Catch@1006b7f2

void Catch_1006b7f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b806 Catch@1006b806

void Catch_1006b806(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::SetNodeItemText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b830 FUN_1006b830

undefined4 FUN_1006b830(FString *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_1006b350(param_1);
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1006b8b2 Catch@1006b8b2

void Catch_1006b8b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b8c6 Catch@1006b8c6

void Catch_1006b8c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::IsNodeNameExist");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b8f0 FUN_1006b8f0

undefined4 FUN_1006b8f0(FString *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_1006b350(param_1);
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return *(undefined4 *)(iVar1 + 0x1c);
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1006b970 Catch@1006b970

void Catch_1006b970(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006b984 Catch@1006b984

void Catch_1006b984(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::IsExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006b9b0 FUN_1006b9b0

FString * FUN_1006b9b0(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4caa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  iVar1 = FString::Len(param_2);
  if (0 < iVar1) {
    iVar1 = FUN_1006b350(param_2);
    if (iVar1 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x38); iVar2 = iVar2 + 1) {
        if (iVar2 != 0) {
          FString::operator+=(param_1,(ushort *)&DAT_10230ff8);
        }
        FString::operator+=(param_1,(FString *)(*(int *)(*(int *)(iVar1 + 0x34) + iVar2 * 4) + 0x20)
                           );
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1006ba69 Catch@1006ba69

void Catch_1006ba69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1006ba7d Catch@1006ba7d

void Catch_1006ba7d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::GetChildNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006baa0 FUN_1006baa0

FString * FUN_1006baa0(FString *param_1,FString *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4cea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  iVar1 = FString::Len(param_2);
  if (0 < iVar1) {
    piVar2 = (int *)FUN_1006b350(param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      FString::operator=(param_1,(FString *)(*piVar2 + 0x20));
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1006bb37 Catch@1006bb37

void Catch_1006bb37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006bb4b Catch@1006bb4b

void Catch_1006bb4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::GetParentNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006bb70 FUN_1006bb70

void FUN_1006bb70(FString *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4d10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_1006b350(param_1);
    if (iVar1 != 0) {
      FUN_1006a520(iVar1,param_2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006bbee Catch@1006bbee

void Catch_1006bbee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006bc02 Catch@1006bc02

void Catch_1006bc02(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::SetExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006bc20 FUN_1006bc20

FString * FUN_1006bc20(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e4d4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 1;
  FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  iVar1 = FString::Len(param_2);
  if (0 < iVar1) {
    iVar1 = FUN_1006b350(param_2);
    if (iVar1 != 0) {
      for (; iVar3 < *(int *)(iVar1 + 0x38); iVar3 = iVar3 + 1) {
        if (*(int *)(*(int *)(*(int *)(iVar1 + 0x34) + iVar3 * 4) + 0x1c) != 0) {
          iVar2 = FString::Len(param_1);
          if (0 < iVar2) {
            FString::operator+=(param_1,(ushort *)&DAT_10230ff8);
          }
          FString::operator+=(param_1,(FString *)
                                      (*(int *)(*(int *)(iVar1 + 0x34) + iVar3 * 4) + 0x20));
        }
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1006bcf5 Catch@1006bcf5

void Catch_1006bcf5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1006bd09 Catch@1006bd09

void Catch_1006bd09(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::GetExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006bd30 FUN_1006bd30

void FUN_1006bd30(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e4d79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1006bdd0 FUN_1006bdd0

void FUN_1006bdd0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e4da9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1006be70 FUN_1006be70

undefined4 * FUN_1006be70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_10097bd0(0x14);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_1006a020(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1006b150();
  }
  return puVar2 + 4;
}


// ==== 1006bef0 FUN_1006bef0

void FUN_1006bef0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e4ddc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1006bf70 FUN_1006bf70

undefined4 * FUN_1006bf70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_10097bd0(0x14);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_1006a090(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_1006b150();
  }
  return puVar2 + 4;
}


// ==== 1006bff0 FUN_1006bff0

void FUN_1006bff0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e4e0c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1006c070 FUN_1006c070

void FUN_1006c070(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e4e3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 1006c150 FUN_1006c150

void FUN_1006c150(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e4e6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 1006c230 FUN_1006c230

void FUN_1006c230(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e4ed2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  FString::FString((FString *)(in_ECX + 8));
  local_8 = 0;
  FArray::FArray((FArray *)(in_ECX + 0xd));
  local_8._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x10));
  local_8._0_1_ = 4;
  FUN_10054da0();
  local_8 = CONCAT31(local_8._1_3_,6);
  FString::operator=((FString *)(in_ECX + 8),(ushort *)&DAT_1022f9f8);
  *in_ECX = 0;
  FUN_10069d00(0,0,0,0);
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0x12;
  in_ECX[0x16] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x3c] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1006c371 Catch@1006c371

void Catch_1006c371(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006c385 Catch@1006c385

void Catch_1006c385(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::NCXMLTreeNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006c3b0 FUN_1006c3b0

void FUN_1006c3b0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101e4f20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  FUN_10054e80(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4._0_1_ = 1;
  FUN_1006bdd0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1006bd30();
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x20));
  ExceptionList = local_c;
  return;
}


// ==== 1006c430 FUN_1006c430

void FUN_1006c430(void)

{
  int in_ECX;
  
  FUN_1006bef0(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150();
  return;
}


// ==== 1006c450 FUN_1006c450

int FUN_1006c450(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_1006be70(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 1006c4d0 FUN_1006c4d0

int FUN_1006c4d0(ushort *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4 * 0x14;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar2 + 4),param_1);
      if (iVar1 != 0) {
        FUN_1006c070(iVar4,1);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -0x14;
    } while (-1 < iVar4);
    if (iVar3 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar4 = in_ECX[4];
          in_ECX[4] = iVar4 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar4 / 2);
      }
      FUN_1006b150();
    }
  }
  return iVar3;
}


// ==== 1006c550 FUN_1006c550

void FUN_1006c550(void)

{
  int in_ECX;
  
  FUN_1006bff0(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150();
  return;
}


// ==== 1006c570 FUN_1006c570

int FUN_1006c570(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_1006bf70(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 1006c5f0 FUN_1006c5f0

int FUN_1006c5f0(ushort *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = in_ECX[1] + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4 * 0x14;
    do {
      iVar1 = FString::operator==((FString *)(*in_ECX + iVar2 + 4),param_1);
      if (iVar1 != 0) {
        FUN_1006c150(iVar4,1);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -0x14;
    } while (-1 < iVar4);
    if (iVar3 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          iVar4 = in_ECX[4];
          in_ECX[4] = iVar4 / 2;
        } while (in_ECX[1] * 2 + 8 < iVar4 / 2);
      }
      FUN_1006b150();
    }
  }
  return iVar3;
}


// ==== 1006c670 FUN_1006c670

void FUN_1006c670(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e4f49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1006c070(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1006c6d0 FUN_1006c6d0

void FUN_1006c6d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e4f79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1006c150(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1006c730 FUN_1006c730

void FUN_1006c730(byte param_1)

{
  FUN_1006c3b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1006c760 FUN_1006c760

int FUN_1006c760(int param_1,FString *param_2)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e4fda;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  local_18 = 0;
  FString::FString(local_2c);
  local_8._0_1_ = 1;
  iVar1 = FString::Len(param_2);
  if (iVar1 < 1) {
LAB_1006c7b2:
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
    ExceptionList = local_10;
    return 0;
  }
  if (param_1 == 0) {
    FString::operator=(local_2c,param_2);
    iVar1 = FString::Len(param_2);
    if (0 < iVar1) {
      iVar1 = FUN_10004ed0(0xf4);
      local_8._0_1_ = 6;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1006c230();
      }
      local_8._0_1_ = 1;
      local_18 = iVar4;
      FUN_1006a1f0(iVar4,param_2);
      FString::operator=((FString *)(iVar4 + 0x20),local_2c);
      *(undefined4 *)(iVar4 + 0x1c) = 1;
      *(int *)(in_ECX + 0x2ec) = iVar4;
    }
  }
  else {
    FString::FString(local_50,(ushort *)&DAT_10234780);
    local_8._0_1_ = 2;
    pFVar2 = (FString *)FString::operator+((FString *)(param_1 + 0x20),local_44);
    local_8._0_1_ = 3;
    pFVar2 = (FString *)FString::operator+(pFVar2,local_38);
    local_8._0_1_ = 4;
    FString::operator=(local_2c,pFVar2);
    local_8._0_1_ = 3;
    FString::~FString(local_38);
    local_8._0_1_ = 2;
    FString::~FString(local_44);
    local_8._0_1_ = 1;
    FString::~FString(local_50);
    iVar1 = FUN_1006b350(local_2c);
    if (iVar1 != 0) goto LAB_1006c7b2;
    iVar1 = FString::Len(param_2);
    if (0 < iVar1) {
      iVar1 = FUN_10004ed0(0xf4);
      local_8._0_1_ = 5;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1006c230();
      }
      local_8._0_1_ = 1;
      local_18 = iVar4;
      FUN_1006a1f0(iVar4,param_2);
      FString::operator=((FString *)(iVar4 + 0x20),local_2c);
      FUN_1006b210(iVar4);
    }
  }
  piVar5 = &local_18;
  puVar3 = FString::operator*(local_2c);
  FUN_1006c570(puVar3,piVar5);
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    iVar1 = FUN_100d0a00(local_2c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar4 + 0x1c) = 1;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return iVar4;
}


// ==== 1006c97c Catch@1006c97c

void Catch_1006c97c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006c990 Catch@1006c990

void Catch_1006c990(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::InsertNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006c9b0 FUN_1006c9b0

void FUN_1006c9b0(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5000;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  if (param_1 != 0) {
    for (; iVar2 < *(int *)(param_1 + 0x38); iVar2 = iVar2 + 1) {
      FUN_1006c9b0(*(undefined4 *)(*(int *)(param_1 + 0x34) + iVar2 * 4),0);
    }
    puVar1 = FString::operator*((FString *)(param_1 + 0x20));
    FUN_1006c5f0(puVar1);
    if (param_2 != 0) {
      puVar1 = FString::operator*((FString *)(param_1 + 0x20));
      FUN_1006c4d0(puVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006ca52 Catch@1006ca52

void Catch_1006ca52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006ca66 Catch@1006ca66

void Catch_1006ca66(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::DeleteNodeFromMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ca90 FUN_1006ca90

int FUN_1006ca90(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int *in_ECX;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 in_FPUControlWord;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  FString *pFVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  uint uStack_84;
  FString local_74 [12];
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  undefined8 local_50;
  int local_48;
  float local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e5029;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  local_8 = 0;
  local_54 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_3c = in_ECX;
  FString::FString(local_74);
  uVar2 = param_2;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_24 = 0;
  local_18 = 0;
  local_2c = 0;
  local_20 = 0;
  local_1c = 0;
  local_28 = 0;
  if (param_2 == 0) {
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_74);
    ExceptionList = local_10;
    return 0;
  }
  FUN_1006a160(&local_58);
  local_38 = FUN_100053e0(in_ECX[0xcb],in_ECX[0xcc]);
  if (local_38 == 0) {
    pcVar8 = *(code **)(*in_ECX + 0x170);
  }
  else {
    pcVar8 = *(code **)(*in_ECX + 0x16c);
  }
  (*pcVar8)();
  iVar11 = param_3 + *(int *)(uVar2 + 0x2c);
  param_4 = param_4 + *(int *)(uVar2 + 0x30);
  param_3 = iVar11;
  local_24 = iVar11;
  local_18 = param_4;
  if (*(int *)(uVar2 + 0x4c) != 0) {
    FUN_1006a160(&local_58);
    local_58 = local_58 + *(int *)(uVar2 + 0x60);
    param_2 = *(int *)(uVar2 + 100);
    local_54 = local_54 + param_2;
    local_50 = CONCAT44((local_50._4_4_ - (float)(int)param_2) + (float)*(int *)(uVar2 + 0x68),
                        (float)*(int *)(uVar2 + 0x58));
    param_2 = FUN_101c19e0();
    FUN_10021a00(local_58,local_54,param_2,8,0,0,*(undefined4 *)(uVar2 + 0x5c),8,in_ECX[199],0xff,1)
    ;
    uVar19 = 1;
    uVar18 = 0xff;
    iVar7 = in_ECX[200];
    uVar17 = 8;
    uVar4 = *(undefined4 *)(uVar2 + 0x5c);
    uVar16 = 0;
    uVar15 = 0;
    uVar3 = FUN_101c19e0(0,0,uVar4,8,iVar7,0xff,1);
    FUN_10021a00(local_58,local_54 + 8,param_2,uVar3,uVar15,uVar16,uVar4,uVar17,iVar7,uVar18,uVar19)
    ;
    uVar20 = 1;
    uVar19 = 0xff;
    iVar7 = in_ECX[0xc9];
    uVar18 = 8;
    uVar4 = *(undefined4 *)(uVar2 + 0x5c);
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 8;
    uVar9 = param_2;
    uVar3 = FUN_101c19e0(param_2,8,0,0,uVar4,8,iVar7,0xff,1);
    FUN_10021a00(local_58,uVar3,uVar9,uVar15,uVar16,uVar17,uVar4,uVar18,iVar7,uVar19,uVar20);
    if (*(int *)(uVar2 + 0x50) != 0) {
      param_2 = FUN_101c19e0();
      for (local_30 = 0; (int)local_30 < (int)param_2; local_30 = local_30 + 1) {
        uVar9 = local_30 & 0x80000001;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
        }
        if (uVar9 == 1) {
          uVar19 = 0xff;
          iVar7 = in_ECX[0xca];
          uVar18 = 0xf;
          uVar17 = 8;
          uVar16 = 0;
          uVar15 = 0;
          uVar3 = 0xf;
          uVar4 = FUN_101c19e0(0xf,0,0,8,0xf,iVar7,0xff,1);
          FUN_10021a00(local_58,*(int *)(uVar2 + 0x54) * local_30 + -2 + local_18,uVar4,uVar3,uVar15
                       ,uVar16,uVar17,uVar18,iVar7,uVar19,uVar9);
        }
      }
    }
  }
  if (*(int *)(uVar2 + 0x18) != 0) {
    if (*(int *)(uVar2 + 0x1c) == 0) {
      if ((local_38 == 0) || (iVar7 = *(int *)(uVar2 + 0xac), iVar7 == 0)) {
        iVar7 = *(int *)(uVar2 + 0xa4);
      }
    }
    else if ((local_38 == 0) || (iVar7 = *(int *)(uVar2 + 0xb0), iVar7 == 0)) {
      iVar7 = *(int *)(uVar2 + 0xa8);
    }
    FUN_10021a00(*(int *)(uVar2 + 0x9c) + iVar11,*(int *)(uVar2 + 0xa0) + local_18,
                 *(undefined4 *)(uVar2 + 0x94),*(undefined4 *)(uVar2 + 0x98),0,0,
                 *(undefined4 *)(uVar2 + 0x94),*(undefined4 *)(uVar2 + 0x98),iVar7,0xff,1);
    iVar7 = *(int *)(uVar2 + 0x94) + *(int *)(uVar2 + 0x9c);
    iVar11 = iVar11 + iVar7;
    local_28 = local_28 + iVar7;
    uVar9 = *(int *)(uVar2 + 0x98) + *(int *)(uVar2 + 0xa0);
    local_24 = iVar11;
    if ((int)local_1c < (int)uVar9) {
      local_1c = uVar9;
    }
  }
  if ((*(int *)(uVar2 + 0x1c) != 0) && (iVar7 = *(int *)(uVar2 + 0x6c), iVar7 != 0)) {
    uVar4 = 0xff;
    if (*(int *)(uVar2 + 0x70) == 0) {
      param_2 = *(uint *)(uVar2 + 0x74);
      uVar3 = *(undefined4 *)(uVar2 + 0x88);
      uVar15 = *(undefined4 *)(uVar2 + 0x84);
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = *(undefined4 *)(uVar2 + 0x7c);
      uVar9 = FUN_101c19e0(uVar16,0,0,uVar15,uVar3,iVar7,0xff);
      iVar10 = *(int *)(uVar2 + 0x78) + local_18;
      iVar5 = param_2 + iVar11;
    }
    else {
      param_2 = *(int *)(uVar2 + 0x74);
      uVar3 = *(undefined4 *)(uVar2 + 0x88);
      uVar15 = *(undefined4 *)(uVar2 + 0x84);
      uVar19 = 0;
      uVar18 = 0;
      uVar16 = *(undefined4 *)(uVar2 + 0x7c);
      uVar17 = FUN_101c19e0(uVar16,0,0,uVar15,uVar3,iVar7,0xff);
      FUN_10021970(param_2 + iVar11,*(int *)(uVar2 + 0x78) + local_18,uVar17,uVar16,uVar18,uVar19,
                   uVar15,uVar3,iVar7,uVar4);
      param_2 = *(uint *)(uVar2 + 0x80);
      uVar4 = 0xff;
      iVar7 = *(int *)(uVar2 + 0x70);
      uVar3 = *(undefined4 *)(uVar2 + 0x90);
      uVar15 = *(undefined4 *)(uVar2 + 0x8c);
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = *(undefined4 *)(uVar2 + 0x7c);
      iVar10 = *(int *)(uVar2 + 0x78) + local_18;
      uVar9 = param_2;
      iVar5 = FUN_101c19e0(iVar10,param_2,uVar16,0,0,uVar15,uVar3,iVar7,0xff);
    }
    FUN_10021970(iVar5,iVar10,uVar9,uVar16,uVar17,uVar18,uVar15,uVar3,iVar7,uVar4);
  }
  local_34 = 0;
  do {
    while( true ) {
      if (*(int *)(uVar2 + 0x44) <= local_34) {
        if (local_2c < local_28) {
          local_2c = local_28;
        }
        local_20 = local_20 + local_1c;
        if (local_40 == 0) {
          FUN_10069d00(param_3,param_4,(local_2c - param_3 < 1) - 1 & local_2c - param_3,
                       ((int)local_20 < 1) - 1 & local_20);
        }
        if (in_ECX[0xb9] != 0) {
          param_2 = (uint)(*(int *)(uVar2 + 0x1c) != 0);
          puVar23 = &param_2;
          puVar6 = FString::operator*((FString *)(uVar2 + 0x20));
          FUN_1006c450(puVar6,puVar23);
        }
        if (0 < *(int *)(uVar2 + 0x38)) {
          if (*(int *)(uVar2 + 0x1c) == 0) {
            FUN_1006a8b0(uVar2);
          }
          else {
            for (local_48 = 0; uVar9 = local_20, local_48 < *(int *)(uVar2 + 0x38);
                local_48 = local_48 + 1) {
              iVar11 = (**(code **)(*in_ECX + 0x1f8))
                                 (param_1,*(undefined4 *)(*(int *)(uVar2 + 0x34) + local_48 * 4),
                                  param_3,param_4 + local_20);
              local_20 = uVar9 + iVar11;
            }
          }
        }
        if (local_38 != 0) {
          in_ECX[0xbc] = uVar2;
        }
        iVar11 = *(int *)(uVar2 + 0x30) + local_20;
        local_8 = local_8 & 0xffffff00;
        FString::~FString(local_74);
        ExceptionList = local_10;
        return iVar11;
      }
      piVar1 = *(int **)(*(int *)(uVar2 + 0x40) + local_34 * 4);
      if (piVar1 != (int *)0x0) break;
LAB_1006d0e4:
      local_34 = local_34 + 1;
      in_ECX = local_3c;
    }
    if ((piVar1[4] != 0) && (local_40 == 0)) {
      local_40 = 1;
      iVar7 = local_2c;
      if (local_2c <= local_28) {
        iVar7 = local_28;
      }
      uVar9 = local_20;
      if ((int)local_20 < 1) {
        uVar9 = local_1c;
      }
      FUN_10069d00(param_3,param_4,iVar7 - param_3 & (iVar7 - param_3 < 1) - 1,
                   ((int)uVar9 < 1) - 1 & uVar9);
    }
    if ((piVar1[3] == 0) && (*piVar1 != 0)) {
      iVar11 = iVar11 + piVar1[1];
      local_28 = local_28 + piVar1[1];
    }
    else {
      iVar11 = piVar1[1] + param_3;
      local_18 = local_18 + local_1c;
      if (local_2c < local_28) {
        local_2c = local_28;
      }
      local_20 = local_20 + local_1c;
      local_28 = 0;
      local_1c = 0;
    }
    iVar7 = *piVar1;
    if (iVar7 != 0) {
      local_24 = iVar11;
      if (iVar7 == 1) {
        pFVar21 = local_74;
        puVar6 = FString::operator*((FString *)(piVar1 + 7));
        FUN_10146040(puVar6,pFVar21);
        uVar22 = 0xffffffff;
        uVar20 = 0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
        uVar16 = 0;
        uVar15 = 0;
        uVar3 = 0;
        uVar4 = 0;
        if (piVar1[0xb] == 0) {
          local_44 = (float)local_24;
          uVar14 = 1;
          uVar13 = 0;
          param_2 = CONCAT22(in_FPUControlWord,(undefined2)param_2);
          local_50 = (longlong)ROUND(((float)local_3c[0x22] - local_44) - 5.0);
          uVar12 = (undefined4)local_50;
          puVar6 = FString::operator*(local_74);
          FUN_100217a0(iVar11,piVar1[2] + local_18,piVar1[10],puVar6,uVar12,uVar13,uVar14,uVar4,
                       uVar3,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar22);
          uVar18 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 1;
          uVar3 = 0;
          param_2 = CONCAT22(in_FPUControlWord,(undefined2)param_2);
          local_50 = (longlong)ROUND(((float)local_3c[0x22] - local_44) - 5.0);
          uVar4 = (undefined4)local_50;
          puVar6 = FString::operator*(local_74);
        }
        else {
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          puVar6 = FString::operator*(local_74);
          FUN_100217a0(iVar11,piVar1[2] + local_18,piVar1[10],puVar6,uVar12,uVar13,uVar14,uVar4,
                       uVar3,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar22);
          uVar18 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 0;
          uVar3 = 0;
          uVar4 = 0;
          puVar6 = FString::operator*(local_74);
        }
        FUN_10020bb0(&local_68,puVar6,uVar4,uVar3,uVar15,uVar16,uVar17,uVar18);
        iVar11 = iVar11 + local_68;
        if (local_2c < iVar11) {
          local_2c = iVar11;
        }
        uVar9 = local_64 + piVar1[2];
      }
      else {
        if (iVar7 != 2) goto LAB_1006d0e4;
        if ((local_38 == 0) || (piVar1[0x11] == 0)) {
          if ((*(int *)(uVar2 + 0x1c) == 0) || (piVar1[0x12] == 0)) {
            iVar7 = piVar1[0x10];
          }
          else {
            iVar7 = piVar1[0x12];
          }
        }
        else {
          iVar7 = piVar1[0x11];
        }
        FUN_10021a00(iVar11,piVar1[2] + local_18,piVar1[0xc],piVar1[0xd],0,0,piVar1[0xe],piVar1[0xf]
                     ,iVar7,0xff,1);
        iVar11 = iVar11 + piVar1[0xc];
        if (local_2c < iVar11) {
          local_2c = iVar11;
        }
        uVar9 = piVar1[0xd] + piVar1[2];
      }
      local_28 = iVar11;
      local_24 = iVar11;
      if ((int)local_1c < (int)uVar9) {
        local_1c = uVar9;
      }
      goto LAB_1006d0e4;
    }
    local_1c = 0;
    local_20 = local_20 + piVar1[5];
    local_24 = param_3;
    local_18 = local_18 + piVar1[5];
    local_34 = local_34 + 1;
    iVar11 = param_3;
    in_ECX = local_3c;
  } while( true );
}


// ==== 1006d1ff Catch@1006d1ff

void Catch_1006d1ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x58,&DAT_102a47f0);
}


// ==== 1006d213 Catch@1006d213

void Catch_1006d213(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::DrawTreeNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006d230 FUN_1006d230

undefined4 FUN_1006d230(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x174))();
  FUN_1006c430();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1006d297 Catch@1006d297

void Catch_1006d297(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006d2ab Catch@1006d2ab

void Catch_1006d2ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006d2d0 FUN_1006d2d0

FString * FUN_1006d2d0(FString *param_1,FString *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e508a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = 0;
  local_8 = 1;
  iVar1 = FString::Len(param_2);
  if (0 < iVar1) {
    uVar2 = FUN_1006b350(param_2);
  }
  iVar1 = FUN_1006c760(uVar2,param_3);
  if (iVar1 == 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(iVar1 + 0x20));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1006d373 Catch@1006d373

void Catch_1006d373(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006d387 Catch@1006d387

void Catch_1006d387(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::InsertNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006d3b0 FUN_1006d3b0

void FUN_1006d3b0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e50c1;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1006d420 FUN_1006d420

void FUN_1006d420(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e50f1;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1006b150(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1006d490 FUN_1006d490

void FUN_1006d490(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e5118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))
              (*(int *)(in_ECX + 0xc),DAT_103554c4 ^ (uint)&stack0xffffffec);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  FUN_1006c670();
  ExceptionList = local_c;
  return;
}


// ==== 1006d510 FUN_1006d510

void FUN_1006d510(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e5148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))
              (*(int *)(in_ECX + 0xc),DAT_103554c4 ^ (uint)&stack0xffffffec);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  FUN_1006c6d0();
  ExceptionList = local_c;
  return;
}


// ==== 1006d590 FUN_1006d590

void FUN_1006d590(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x38); iVar1 = iVar1 + 1) {
    FUN_1006d590();
    if (*(int *)(*(int *)(in_ECX + 0x34) + iVar1 * 4) != 0) {
      FUN_1006c730(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x38); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x34),4,0);
  FString::Empty((FString *)(in_ECX + 0x20));
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x44); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x40) + iVar1 * 4) != 0) {
      FUN_1006a130(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x44); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x40),4,0);
  FUN_10054cc0();
  ExceptionList = local_10;
  return;
}


// ==== 1006d674 Catch@1006d674

void Catch_1006d674(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1006d688 Catch@1006d688

void Catch_1006d688(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeNode::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006d6b0 FUN_1006d6b0

void FUN_1006d6b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    FUN_1006c9b0(param_1,param_2);
    FUN_1006d590();
    if (iVar1 != 0) {
      FUN_100562c0(&param_1);
    }
    FUN_1006c730(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006d730 Catch@1006d730

void Catch_1006d730(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006d744 Catch@1006d744

void Catch_1006d744(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::DeleteNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006d770 FUN_1006d770

void FUN_1006d770(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e51b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x2ec) != 0) {
    FUN_1006d6b0(*(int *)(in_ECX + 0x2ec),0);
  }
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  FUN_1006c550();
  ExceptionList = local_10;
  return;
}


// ==== 1006d7e4 Catch@1006d7e4

void Catch_1006d7e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006d7f8 Catch@1006d7f8

void Catch_1006d7f8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006d820 FUN_1006d820

undefined4 FUN_1006d820(FString *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e51d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = 0;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_1006b350(param_1);
    if (iVar1 != 0) {
      FUN_1006d6b0(iVar1,1);
      uVar2 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar2;
}


// ==== 1006d8a0 Catch@1006d8a0

void Catch_1006d8a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006d8b4 Catch@1006d8b4

void Catch_1006d8b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::DeleteNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006d8e0 FUN_1006d8e0

void FUN_1006d8e0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e51f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1006d490(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1006d930 FUN_1006d930

void FUN_1006d930(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e5228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1006d510(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1006d980 FUN_1006d980

void FUN_1006d980(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e5284;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCXMLTree::vftable;
  FUN_1006d3b0();
  local_8._0_1_ = 2;
  FUN_1006d420();
  in_ECX[0xcc] = 0;
  in_ECX[0xcb] = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  in_ECX[0xbb] = 0;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xcb] = 0xffffffff;
  in_ECX[0xcc] = 0xffffffff;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.TextBackline",1);
  in_ECX[0xca] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.QUESTWND.QUESTWNDPANEL1",1);
  in_ECX[199] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.QUESTWND.QUESTWNDPANEL2",1);
  in_ECX[200] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.QUESTWND.QUESTWNDPANEL3",1);
  in_ECX[0xc9] = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1006da8e Catch@1006da8e

void Catch_1006da8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006daa2 Catch@1006daa2

void Catch_1006daa2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTree::NCXMLTree");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006dac0 FUN_1006dac0

void FUN_1006dac0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101e52d4;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCXMLTree::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_1006d510(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1006d490();
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 1006db50 FUN_1006db50

void FUN_1006db50(byte param_1)

{
  void *in_ECX;
  
  FUN_1006dac0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x334);
  }
  return;
}


// ==== 1006db80 FUN_1006db80

void FUN_1006db80(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e52f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10044de0();
  *in_ECX = NCXMLTreeCtrl::vftable;
  in_ECX[0x85] = 0;
  in_ECX[0x81] = 0x10;
  in_ECX[0x86] = 0;
  in_ECX[0x87] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1006dbfb Catch@1006dbfb

void Catch_1006dbfb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006dc0f Catch@1006dc0f

void Catch_1006dc0f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::NCXMLTreeCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006dc30 FUN_1006dc30

void FUN_1006dc30(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e5328;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCXMLTreeCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10031a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1006dc90 FUN_1006dc90

void FUN_1006dc90(byte param_1)

{
  void *in_ECX;
  
  FUN_1006dc30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x220);
  }
  return;
}


// ==== 1006dcc0 FUN_1006dcc0

void FUN_1006dcc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e5358;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10044de0();
  *in_ECX = NCXMLTreeCtrl::vftable;
  in_ECX[0x85] = 0;
  in_ECX[0x81] = 0x10;
  in_ECX[0x86] = param_1;
  in_ECX[0x87] = param_2;
  ExceptionList = local_10;
  return;
}


// ==== 1006dd49 Catch@1006dd49

void Catch_1006dd49(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006dd5d Catch@1006dd5d

void Catch_1006dd5d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::NCXMLTreeCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006dd80 FUN_1006dd80

undefined4 FUN_1006dd80(void)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5380;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_3c = 0x1006ddba;
  FUN_100440c0();
  uStack_3c = 0;
  FName::FName((FName *)&uStack_40,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_1006a100(0x334,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uStack_3c = 0x1006dde9;
    iVar2 = FUN_1006d980();
  }
  *(int *)(in_ECX + 0x214) = iVar2;
  *(undefined4 *)(iVar2 + 0x1cc) = 0xa00001;
  uStack_3c = 3;
  uStack_40 = 0;
  local_20 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uVar3 = local_20;
  local_20 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 16.0);
  (**(code **)(**(int **)(in_ECX + 0x214) + 0xc0))(0,0,local_20,uVar3,0);
  uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x214),0x22);
  FUN_1005c1e0(uVar3);
  *(undefined4 *)(*(int *)(in_ECX + 0x214) + 0x2e4) = *(undefined4 *)(in_ECX + 0x218);
  *(undefined4 *)(*(int *)(in_ECX + 0x214) + 0x2e8) = *(undefined4 *)(in_ECX + 0x21c);
  ExceptionList = local_10;
  return 1;
}


// ==== 1006deb9 Catch@1006deb9

void Catch_1006deb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1006decd Catch@1006decd

void Catch_1006decd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCXMLTreeCtrl::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006df10 FUN_1006df10

FString * FUN_1006df10(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e53ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(FString *)(in_ECX + 0x10));
  ExceptionList = local_10;
  return param_1;
}


// ==== 1006df72 Catch@1006df72

void Catch_1006df72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006df86 Catch@1006df86

void Catch_1006df86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::GetStateName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006dfb0 FUN_1006dfb0

void FUN_1006dfb0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x1006dfc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x14))();
  return;
}


// ==== 1006dfd0 FUN_1006dfd0

void FUN_1006dfd0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e53e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006dfb0();
  iVar1 = FL2ReplayManager::IsPublicMode
                    (*(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198));
  if (iVar1 == 0) {
    iVar1 = FL2ReplayManager::UseChatData
                      (*(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198));
    if (iVar1 != 0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x208) + 0x174))();
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x208) + 0x13c))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006e088 Catch@1006e088

void Catch_1006e088(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006e09c Catch@1006e09c

void Catch_1006e09c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIReplayState::OnExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e0c0 FUN_1006e0c0

void FUN_1006e0c0(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006dfb0();
  FUN_101478b0();
  piVar1 = (int *)FUN_1014b6a0();
  (**(code **)(*piVar1 + 0x13c))();
  ExceptionList = local_10;
  return;
}


// ==== 1006e132 Catch@1006e132

void Catch_1006e132(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006e146 Catch@1006e146

void Catch_1006e146(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIEventMatchObserverState::OnExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e170 FUN_1006e170

void FUN_1006e170(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006dfb0();
  piVar1 = (int *)FUN_1014b8c0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x338))(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006e1dd Catch@1006e1dd

void Catch_1006e1dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006e1f1 Catch@1006e1f1

void Catch_1006e1f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIOlympiadObserverState::OnExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e210 FUN_1006e210

void FUN_1006e210(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x84))();
    if ((uVar1 & 0x4000000) == 0) {
      iVar2 = FUN_10057630();
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return;
      }
      pcVar3 = *(code **)(*param_1 + 0x13c);
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x138);
    }
    (*pcVar3)();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006e298 Catch@1006e298

void Catch_1006e298(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006e2ac Catch@1006e2ac

void Catch_1006e2ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::ShowUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e2d0 FUN_1006e2d0

FString * FUN_1006e2d0(FString *param_1)

{
  int iVar1;
  FString *this;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e548c;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000008);
  local_18 = 1;
  iVar1 = FString::operator!=(param_1,(ushort *)&DAT_1022f9f8);
  if (iVar1 != 0) {
    this = (FString *)FString::Right(param_1,(int)local_2c);
    local_8._0_1_ = 3;
    iVar1 = FString::operator!=(this,(ushort *)L"STATE");
    local_8._0_1_ = 2;
    FString::~FString(local_2c);
    if (iVar1 != 0) {
      FString::operator+=(param_1,(ushort *)L"STATE");
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1006e392 Catch@1006e392

void Catch_1006e392(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006e3a6 Catch@1006e3a6

void Catch_1006e3a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::MakeProperStateName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e3d0 FUN_1006e3d0

FString * FUN_1006e3d0(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e54ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x24));
  ExceptionList = local_c;
  return param_1;
}


// ==== 1006e430 FUN_1006e430

undefined4 FUN_1006e430(void)

{
  int iVar1;
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  uint uStack_3c;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e550b;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = aFStack_48;
  FString::FString(aFStack_48,(FString *)&stack0x00000004);
  local_8._0_1_ = 1;
  FUN_1006e2d0(local_2c);
  local_8._0_1_ = 3;
  uStack_44 = 0x1006e4ab;
  iVar1 = FString::operator!=(local_2c,(FString *)(in_ECX + 0x10));
  if (iVar1 != 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_2c);
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000004);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 1;
}


// ==== 1006e513 Catch@1006e513

void Catch_1006e513(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006e527 Catch@1006e527

void Catch_1006e527(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::IsState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e550 FUN_1006e550

undefined4 FUN_1006e550(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 8) <= iVar2) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + iVar2 * 4);
    if ((iVar1 != 0) && (iVar1 == param_1)) break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}


// ==== 1006e5d1 Catch@1006e5d1

void Catch_1006e5d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006e5e5 Catch@1006e5e5

void Catch_1006e5e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::IsWindowInState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e610 FUN_1006e610

void FUN_1006e610(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 8); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_1006e210(iVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006e688 Catch@1006e688

void Catch_1006e688(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006e69c Catch@1006e69c

void Catch_1006e69c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::ShowUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e6c0 FUN_1006e6c0

void FUN_1006e6c0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 8); iVar2 = iVar2 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 4) + iVar2 * 4);
    if (*piVar1 != 0) {
      (**(code **)(*(int *)*piVar1 + 0x13c))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006e735 Catch@1006e735

void Catch_1006e735(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006e749 Catch@1006e749

void Catch_1006e749(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::HideUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e770 FUN_1006e770

void FUN_1006e770(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 8); iVar2 = iVar2 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 4) + iVar2 * 4);
    if (*piVar1 != 0) {
      (**(code **)(*(int *)*piVar1 + 0x174))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006e7e5 Catch@1006e7e5

void Catch_1006e7e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006e7f9 Catch@1006e7f9

void Catch_1006e7f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::ClearUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e820 FUN_1006e820

void FUN_1006e820(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 4) + iVar1 * 4) != 0) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 4) + iVar1 * 4) + 0x180))();
        (**(code **)(**(int **)(*(int *)(in_ECX + 4) + iVar1 * 4) + 0x13c))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 8));
  }
  return;
}


// ==== 1006e870 FUN_1006e870

void FUN_1006e870(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e55b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 8); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_1006e210(iVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006e8e8 Catch@1006e8e8

void Catch_1006e8e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006e8fc Catch@1006e8fc

void Catch_1006e8fc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGamingState::ShowUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006e920 FUN_1006e920

int FUN_1006e920(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  FString aFStack_2c [8];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101e55e2;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    do {
      iVar1 = *(int *)(*in_ECX + iVar3 * 4);
      if (iVar1 != 0) {
        FString::FString(aFStack_2c,(FString *)&stack0x00000004);
        local_4 = local_4 & 0xffffff00;
        iVar2 = FUN_1006e430();
        if (iVar2 != 0) {
          local_4 = 0xffffffff;
          uStack_24 = 0x1006e9cb;
          FString::~FString((FString *)&stack0x00000004);
          ExceptionList = local_c;
          return iVar1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[1]);
  }
  local_4 = 0xffffffff;
  uStack_24 = 0x1006e9a2;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 1006e9f0 UUIScript::eventOnExitState

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnExitState(class FName) */

void __thiscall UUIScript::eventOnExitState(UUIScript *this,UUIScript *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  UUIScript *local_4;
  
                    /* 0x6e9f0  1030  ?eventOnExitState@UUIScript@@QAEXVFName@@@Z */
  local_4 = this;
  FName::FName((FName *)&local_4);
  iVar1 = *(int *)this;
  local_4 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnExitState,0,&local_4,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1006ea30 UUIScript::eventOnEnterState

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnEnterState(class FName) */

void __thiscall UUIScript::eventOnEnterState(UUIScript *this,UUIScript *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  UUIScript *local_4;
  
                    /* 0x6ea30  1028  ?eventOnEnterState@UUIScript@@QAEXVFName@@@Z */
  local_4 = this;
  FName::FName((FName *)&local_4);
  iVar1 = *(int *)this;
  local_4 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnEnterState,0,&local_4,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1006ea70 FUN_1006ea70

void FUN_1006ea70(void)

{
  UObject *this;
  int iVar1;
  UUIScript *pUVar2;
  ushort *puVar3;
  int *in_ECX;
  int iVar4;
  EFindName EVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0xc))();
  for (iVar4 = 0; iVar4 < in_ECX[2]; iVar4 = iVar4 + 1) {
    this = *(UObject **)(in_ECX[1] + iVar4 * 4);
    (**(code **)(*(int *)this + 0x68))(0x514,0);
    iVar1 = UObject::IsA(this,(UClass *)&DAT_1035eaa0);
    if (iVar1 != 0) {
      pUVar2 = (UUIScript *)(**(code **)(*(int *)this + 0xc4))();
      if (pUVar2 != (UUIScript *)0x0) {
        EVar5 = 1;
        puVar3 = FString::operator*((FString *)(DAT_103663bc + 0x5078));
        FName::FName((FName *)&stack0xffffffc4,puVar3,EVar5);
        UUIScript::eventOnEnterState(pUVar2);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006eb36 Catch@1006eb36

void Catch_1006eb36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1006eb4a Catch@1006eb4a

void Catch_1006eb4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006eb70 FUN_1006eb70

void FUN_1006eb70(void)

{
  int in_ECX;
  
  FArray::Empty((FArray *)(in_ECX + 4),4,0);
                    /* WARNING: Could not recover jumptable at 0x1006eb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::Empty((FString *)(in_ECX + 0x10));
  return;
}


// ==== 1006eb90 FUN_1006eb90

void FUN_1006eb90(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5620;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  ExceptionList = local_10;
  return;
}


// ==== 1006ebe0 Catch@1006ebe0

void Catch_1006ebe0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ebf4 Catch@1006ebf4

void Catch_1006ebf4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UICharacterSelectState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ec20 FUN_1006ec20

void FUN_1006ec20(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  FUN_10186b80(0x5e);
  UL2ConsoleWnd::SetState(DAT_103663bc,2);
  ExceptionList = local_10;
  return;
}


// ==== 1006ec96 Catch@1006ec96

void Catch_1006ec96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ecaa Catch@1006ecaa

void Catch_1006ecaa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UILoginState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ecd0 FUN_1006ecd0

void FUN_1006ecd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e5669;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  iVar1 = FL2ReplayManager::IsPublicMode(*(FL2ReplayManager **)(DAT_103663bc[0x14] + 0x198));
  if (iVar1 == 0) {
    iVar1 = FL2ReplayManager::UseChatData(*(FL2ReplayManager **)(DAT_103663bc[0x14] + 0x198));
    if (iVar1 != 0) {
      FString::FString(local_28,(ushort *)&DAT_10248974);
      local_8._0_1_ = 1;
      uVar2 = (**(code **)(*DAT_103663bc + 0x778))(local_28);
      piVar3 = (int *)FUN_10010290(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x138))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006ed9f Catch@1006ed9f

void Catch_1006ed9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006edb3 Catch@1006edb3

void Catch_1006edb3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIReplayState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006edd0 FUN_1006edd0

void FUN_1006edd0(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  FUN_10147810(*(undefined4 *)GIsL2Mark_exref);
  piVar1 = (int *)FUN_1014b6a0();
  (**(code **)(*piVar1 + 0x138))();
  ExceptionList = local_10;
  return;
}


// ==== 1006ee4a Catch@1006ee4a

void Catch_1006ee4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ee5e Catch@1006ee5e

void Catch_1006ee5e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIEventMatchObserverState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ee80 FUN_1006ee80

void FUN_1006ee80(void)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e56b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  piVar1 = (int *)FUN_1014b8c0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x338))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006eeed Catch@1006eeed

void Catch_1006eeed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006ef01 Catch@1006ef01

void Catch_1006ef01(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIOlympiadObserverState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ef20 FUN_1006ef20

void FUN_1006ef20(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e56d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x230) + 0x138))();
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x230) + 0x80c) + 0x138))();
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x230) + 0x810) + 0x138))();
  FUN_101a2e60();
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x230) + 0x80c) + 500))(0);
  FUN_101a27f0();
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x230) + 500))();
  ExceptionList = local_10;
  return;
}


// ==== 1006f040 Catch@1006f040

void Catch_1006f040(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f054 Catch@1006f054

void Catch_1006f054(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIPawnViewerState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f080 FUN_1006f080

void FUN_1006f080(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e56f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x234) + 0x138))();
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x234) + 0x1d4) + 0x138))();
  FUN_10193eb0();
  ExceptionList = local_10;
  return;
}


// ==== 1006f124 Catch@1006f124

void Catch_1006f124(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f138 Catch@1006f138

void Catch_1006f138(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UINpcViewerState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f160 FUN_1006f160

void FUN_1006f160(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x238) + 0x138))();
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x238) + 0x1dc) + 0x138))();
  FUN_1018df10();
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x238) + 0x1dc) + 500))(0);
  ExceptionList = local_10;
  return;
}


// ==== 1006f227 Catch@1006f227

void Catch_1006f227(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f23b Catch@1006f23b

void Catch_1006f23b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIMSViewerState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f260 FUN_1006f260

void FUN_1006f260(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  FString aFStack_40 [4];
  undefined4 uStack_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5742;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (param_1 != (int *)0x0) {
    for (; iVar2 < in_ECX[1]; iVar2 = iVar2 + 1) {
      if (*(int *)(*in_ECX + iVar2 * 4) != 0) {
        FString::FString(aFStack_40,(FString *)&stack0x00000008);
        local_8._0_1_ = 1;
        iVar1 = FUN_1006e430();
        if (iVar1 != 0) {
          uStack_3c = 0x1006f301;
          FUN_100d9a30();
          uStack_3c = 0x1006f30e;
          iVar2 = FString::operator==((FString *)(in_ECX + 3),(FString *)&stack0x00000008);
          if (iVar2 == 0) {
            (**(code **)(*param_1 + 0x13c))();
          }
          else {
            uStack_3c = 0x1006f31d;
            FUN_1006e210();
          }
          break;
        }
      }
    }
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 1006f339 Catch@1006f339

void Catch_1006f339(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006f34d Catch@1006f34d

void Catch_1006f34d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::RegisterState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f370 FUN_1006f370

void FUN_1006f370(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e5769;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 0) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1006f410 FUN_1006f410

void FUN_1006f410(void)

{
  FString *pFVar1;
  undefined4 *in_ECX;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  uint uStack_40;
  FString local_30 [16];
  FArray *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e57cb;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = UIGameState::vftable;
  local_20 = (FArray *)(in_ECX + 1);
  FArray::FArray(local_20);
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 4));
  local_8._0_1_ = 4;
  local_20 = (FArray *)aFStack_4c;
  FString::FString(aFStack_4c,(FString *)&stack0x00000004);
  local_8._0_1_ = 4;
  pFVar1 = (FString *)FUN_1006e2d0(local_30);
  local_8._0_1_ = 6;
  uStack_48 = 0x1006f4ac;
  FString::operator=((FString *)(in_ECX + 4),pFVar1);
  local_8 = CONCAT31(local_8._1_3_,4);
  FString::~FString(local_30);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1006f4de Catch@1006f4de

void Catch_1006f4de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f4f2 Catch@1006f4f2

void Catch_1006f4f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameState::UIGameState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f510 FUN_1006f510

void FUN_1006f510(void)

{
  uint uVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e5807;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FUN_10002520(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1006f570 FUN_1006f570

void FUN_1006f570(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [8];
  undefined4 uStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e584a;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(aFStack_40,(FString *)&stack0x00000004);
  local_8 = local_8 & 0xffffff00;
  FUN_1006f410();
  *in_ECX = UILoginState::vftable;
  local_8 = 0xffffffff;
  uStack_38 = 0x1006f5e6;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1006f5fc Catch@1006f5fc

void Catch_1006f5fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f610 Catch@1006f610

void Catch_1006f610(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UILoginState::UILoginState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f630 FUN_1006f630

void FUN_1006f630(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [12];
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e5881;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FString::FString(aFStack_40,(ushort *)L"ReplayState");
  local_8 = 0xffffffff;
  FUN_1006f410();
  *in_ECX = UIReplayState::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 1006f6af Catch@1006f6af

void Catch_1006f6af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f6c3 Catch@1006f6c3

void Catch_1006f6c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIReplayState::UIReplayState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f6e0 FUN_1006f6e0

void FUN_1006f6e0(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [12];
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e58b1;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FString::FString(aFStack_40,(ushort *)L"EventMatchObserverState");
  local_8 = 0xffffffff;
  FUN_1006f410();
  *in_ECX = UIEventMatchObserverState::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 1006f75f Catch@1006f75f

void Catch_1006f75f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f773 Catch@1006f773

void Catch_1006f773(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIEventMatchObserverState::UIEventMatchObserverState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f790 FUN_1006f790

void FUN_1006f790(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [12];
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e58e1;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FString::FString(aFStack_40,(ushort *)L"OlympiadObserverState");
  local_8 = 0xffffffff;
  FUN_1006f410();
  *in_ECX = UIOlympiadObserverState::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 1006f80f Catch@1006f80f

void Catch_1006f80f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f823 Catch@1006f823

void Catch_1006f823(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIOlympiadObserverState::UIOlympiadObserverState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f840 FUN_1006f840

void FUN_1006f840(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [12];
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e5911;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FString::FString(aFStack_40,(ushort *)L"PawnViewerState");
  local_8 = 0xffffffff;
  FUN_1006f410();
  *in_ECX = UIPawnViewerState::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 1006f8bf Catch@1006f8bf

void Catch_1006f8bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f8d3 Catch@1006f8d3

void Catch_1006f8d3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIPawnViewerState::UIPawnViewerState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f8f0 FUN_1006f8f0

void FUN_1006f8f0(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [12];
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e5941;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FString::FString(aFStack_40,(ushort *)L"NpcViewerState");
  local_8 = 0xffffffff;
  FUN_1006f410();
  *in_ECX = UINpcViewerState::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 1006f96f Catch@1006f96f

void Catch_1006f96f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006f983 Catch@1006f983

void Catch_1006f983(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UINpcViewerState::UINpcViewerState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006f9a0 FUN_1006f9a0

void FUN_1006f9a0(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [12];
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e5971;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FString::FString(aFStack_40,(ushort *)L"MSViewerState");
  local_8 = 0xffffffff;
  FUN_1006f410();
  *in_ECX = UIMSViewerState::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 1006fa1f Catch@1006fa1f

void Catch_1006fa1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006fa33 Catch@1006fa33

void Catch_1006fa33(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIMSViewerState::UIMSViewerState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006fa50 FUN_1006fa50

void FUN_1006fa50(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [8];
  undefined4 uStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e59aa;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(aFStack_40,(FString *)&stack0x00000004);
  local_8 = local_8 & 0xffffff00;
  FUN_1006f410();
  *in_ECX = UIGamingState::vftable;
  local_8 = 0xffffffff;
  uStack_38 = 0x1006fac6;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1006fadc Catch@1006fadc

void Catch_1006fadc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1006faf0 Catch@1006faf0

void Catch_1006faf0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGamingState::UIGamingState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006fb10 FUN_1006fb10

void FUN_1006fb10(void)

{
  HIMC pHVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_40;
  FString local_30 [20];
  DWORD local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e59e2;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006ea70();
  FString::FString(local_30,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar3 = local_30;
  uVar2 = 0x96;
  FUN_10005c30(0x96,pFVar3);
  FUN_100d1790(uVar2,pFVar3);
  local_8._0_1_ = 0;
  FString::~FString(local_30);
  if (*(int *)GLanguageType_exref == 0) {
    pHVar1 = ImmGetContext(DAT_103663b8);
    ImmGetConversionStatus(pHVar1,&local_18,&local_1c);
    local_18 = local_18 | 1;
    ImmSetConversionStatus(pHVar1,local_18,local_1c);
    ImmDestroyContext(pHVar1);
    FString::FString(local_30,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 2;
    pFVar3 = local_30;
    uVar2 = 0x5dc;
    FUN_10005c30(0x5dc,pFVar3);
    FUN_100d1790(uVar2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1006fc04 Catch@1006fc04

void Catch_1006fc04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1006fc18 Catch@1006fc18

void Catch_1006fc18(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGamingState::OnEnter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006fc40 FUN_1006fc40

void FUN_1006fc40(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  undefined4 uVar3;
  FString *pFVar4;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e5a12;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1006e3d0(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FString::operator==(local_2c,(ushort *)L"GamingHideWindowState");
  if (iVar2 == 0) {
    iVar2 = FString::operator==(local_2c,(ushort *)L"OlympiadObserverState");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_2c,(ushort *)L"BroadcastObserverState");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_2c,(ushort *)L"SpecialCameraState");
        if (iVar2 == 0) {
          for (iVar2 = 0; local_18 = iVar2, iVar2 < in_ECX[2]; iVar2 = iVar2 + 1) {
            piVar1 = (int *)(in_ECX[1] + iVar2 * 4);
            if (*piVar1 != 0) {
              (**(code **)(*(int *)*piVar1 + 0x13c))();
              (**(code **)(**(int **)(in_ECX[1] + iVar2 * 4) + 0x174))();
            }
          }
          FUN_10165630(0);
          (**(code **)(*DAT_103663bc + 0x67c))(0);
          (**(code **)(*DAT_103663bc + 0x684))(0);
          iVar2 = FUN_10005c30();
          if (iVar2 != 0) {
            FString::FString(local_38,(ushort *)&DAT_1022f9f8);
            local_8._0_1_ = 2;
            pFVar4 = local_38;
            uVar3 = 0xa0;
            FUN_10005c30(0xa0,pFVar4);
            FUN_100d1790(uVar3,pFVar4);
            local_8 = CONCAT31(local_8._1_3_,1);
            FString::~FString(local_38);
          }
          local_8 = local_8 & 0xffffff00;
          FString::~FString(local_2c);
          ExceptionList = local_10;
          return;
        }
      }
    }
  }
  (**(code **)(*in_ECX + 0x10))();
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1006fdcf Catch@1006fdcf

void Catch_1006fdcf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006fde3 Catch@1006fde3

void Catch_1006fde3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGamingState::OnExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006fe00 FUN_1006fe00

int FUN_1006fe00(void)

{
  int iVar1;
  undefined1 *puVar2;
  FString aFStack_44 [4];
  undefined4 uStack_40;
  undefined1 **ppuStack_3c;
  uint uStack_38;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5a56;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  ppuStack_3c = (undefined1 **)0x1006fe3f;
  iVar1 = FString::operator_int((FString *)&stack0x00000004);
  if (iVar1 == 0) {
    local_8 = 0xffffffff;
    ppuStack_3c = (undefined1 **)0x1006fe53;
    FString::~FString((FString *)&stack0x00000004);
    ExceptionList = local_10;
    return 0;
  }
  local_18 = aFStack_44;
  FString::FString(aFStack_44,(FString *)&stack0x00000004);
  local_8._0_1_ = 1;
  puVar2 = (undefined1 *)FUN_1006e920();
  local_18 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)0x0;
    ppuStack_3c = (undefined1 **)0x1c;
    uStack_40 = 0x1006fe9d;
    iVar1 = FUN_10004ed0();
    local_8._0_1_ = 3;
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      FString::FString(aFStack_44,(FString *)&stack0x00000004);
      local_8._0_1_ = 3;
      puVar2 = (undefined1 *)FUN_1006f410();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    ppuStack_3c = &local_18;
    uStack_40 = 0x1006fee6;
    local_18 = puVar2;
    FUN_100d9a30();
  }
  local_8 = 0xffffffff;
  ppuStack_3c = (undefined1 **)0x1006fef6;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return (int)puVar2;
}


// ==== 1006ff0c Catch@1006ff0c

void Catch_1006ff0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1006ff20 Catch@1006ff20

void Catch_1006ff20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::CreateNewState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1006ff40 FUN_1006ff40

void FUN_1006ff40(byte param_1)

{
  FUN_1006f510();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1006ff70 FUN_1006ff70

void FUN_1006ff70(int param_1)

{
  int iVar1;
  FString aFStack_38 [8];
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5a9b;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_30 = 0x1006ffb2;
  iVar1 = FString::operator_int((FString *)&stack0x00000008);
  if ((iVar1 != 0) && (param_1 != 0)) {
    FString::FString(aFStack_38,(FString *)&stack0x00000008);
    local_8._0_1_ = 1;
    FUN_1006fe00();
    FString::FString(aFStack_38,(FString *)&stack0x00000008);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_1006f260(param_1);
  }
  local_8 = 0xffffffff;
  uStack_30 = 0x1007000e;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 10070022 Catch@10070022

void Catch_10070022(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10070036 Catch@10070036

void Catch_10070036(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::RegisterUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070060 FUN_10070060

void FUN_10070060(void)

{
  int *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < in_ECX[1]; iVar1 = iVar1 + 1) {
    if (*(int *)(*in_ECX + iVar1 * 4) != 0) {
      FUN_100562c0(&stack0x00000004);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100700d3 Catch@100700d3

void Catch_100700d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100700e7 Catch@100700e7

void Catch_100700e7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::UnregisterUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070110 FUN_10070110

void FUN_10070110(void)

{
  UObject *this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  UUIScript *pUVar4;
  ushort *puVar5;
  FString *pFVar6;
  int *in_ECX;
  EFindName EVar7;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [16];
  undefined1 *local_28;
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5b1f;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FString::Caps((FString *)&stack0x00000004);
  local_8._0_1_ = 2;
  pFVar6 = (FString *)(in_ECX + 3);
  iVar2 = FString::operator==(local_38,pFVar6);
  if (iVar2 == 0) {
    local_1c = (int *)&stack0xffffff9c;
    FString::FString((FString *)&stack0xffffff9c,pFVar6);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar3 = (int *)FUN_1006e920();
    local_1c = piVar3;
    if (piVar3 == (int *)0x0) {
      for (iVar2 = 0; local_20 = iVar2, iVar2 < in_ECX[1]; iVar2 = iVar2 + 1) {
        piVar1 = *(int **)(*in_ECX + iVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
        }
      }
    }
    else {
      FString::operator=((FString *)(in_ECX + 6),pFVar6);
      FString::operator=((FString *)(in_ECX + 9),(FString *)&stack0x00000004);
      (**(code **)(*piVar3 + 8))();
      for (local_18 = 0; local_18 < piVar3[2]; local_18 = local_18 + 1) {
        this = *(UObject **)(piVar3[1] + local_18 * 4);
        iVar2 = FUN_10057630();
        if (iVar2 != 0) {
          iVar2 = UObject::IsA(this,(UClass *)&DAT_1035eaa0);
          if (iVar2 != 0) {
            pUVar4 = (UUIScript *)(**(code **)(*(int *)this + 0xc4))();
            if (pUVar4 != (UUIScript *)0x0) {
              local_28 = &stack0xffffffa4;
              EVar7 = 1;
              puVar5 = FString::operator*((FString *)(in_ECX + 9));
              FName::FName((FName *)&stack0xffffffa4,puVar5,EVar7);
              UUIScript::eventOnExitState(pUVar4);
              piVar3 = local_1c;
            }
          }
        }
      }
    }
    local_28 = &stack0xffffff9c;
    FString::FString((FString *)&stack0xffffff9c,(FString *)&stack0x00000004);
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8._0_1_ = 2;
    iVar2 = FUN_1006e920();
    in_ECX[0xc] = iVar2;
    if (iVar2 == 0) {
      local_28 = &stack0xffffff9c;
      FString::FString((FString *)&stack0xffffff9c,(FString *)&stack0x00000004);
      local_8._0_1_ = 2;
      iVar2 = FUN_1006fe00();
      in_ECX[0xc] = iVar2;
    }
    if (piVar3 != (int *)0x0) {
      pFVar6 = (FString *)FUN_1006df10();
      local_8._0_1_ = 6;
      FString::operator=((FString *)(in_ECX + 6),pFVar6);
      local_8._0_1_ = 2;
      FString::~FString(local_44);
    }
    (*(code *)**(undefined4 **)in_ECX[0xc])();
    pFVar6 = (FString *)FUN_1006df10();
    local_8._0_1_ = 7;
    FString::operator=((FString *)(in_ECX + 3),pFVar6);
    local_8._0_1_ = 2;
    FString::~FString(local_44);
    FString::operator=((FString *)(in_ECX + 9),(ushort *)L"None");
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_38);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1007032e Catch@1007032e

void Catch_1007032e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10070342 Catch@10070342

void Catch_10070342(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::SetState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070360 FUN_10070360

undefined4 FUN_10070360(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x30) == 0) {
    uVar1 = FUN_10005c30(L"IsWindowInCurrentState failed because current state is not defined!!");
    FUN_100d01f0(uVar1);
  }
  else {
    iVar2 = FUN_1006e550(param_1);
    if (iVar2 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100703e8 Catch@100703e8

void Catch_100703e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100703fc Catch@100703fc

void Catch_100703fc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::IsWindowInCurrentState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070420 FUN_10070420

void FUN_10070420(void)

{
  undefined4 *in_ECX;
  FString aFStack_40 [8];
  undefined4 uStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e5b7a;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(aFStack_40,(FString *)&stack0x00000004);
  local_8 = local_8 & 0xffffff00;
  FUN_1006f410();
  *in_ECX = UICharacterSelectState::vftable;
  local_8 = 0xffffffff;
  uStack_38 = 0x10070496;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100704ac Catch@100704ac

void Catch_100704ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100704c0 Catch@100704c0

void Catch_100704c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UICharacterSelectState::UICharacterSelectState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100704e0 FUN_100704e0

void FUN_100704e0(void)

{
  int iVar1;
  int in_ECX;
  FString aFStack_44 [4];
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  uint uStack_38;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e5c1e;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  local_18 = 0;
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x1007051f;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    FString::FString(aFStack_44,(ushort *)PTR_u_LoginState_1034ca60);
    local_8._0_1_ = 1;
    local_18 = FUN_1006f570();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x10070567;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x1007056e;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 3;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    puStack_3c = (undefined4 *)0x10070583;
    local_18 = FUN_1006f630();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x10070598;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x1007059f;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 4;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    FString::FString(aFStack_44,(ushort *)PTR_u_GamingState_1034ca68);
    local_8._0_1_ = 4;
    local_18 = FUN_1006fa50();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x100705e7;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x100705ee;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 6;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    FString::FString(aFStack_44,(ushort *)PTR_u_CharacterSelectState_1034ca64);
    local_8._0_1_ = 6;
    local_18 = FUN_10070420();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x10070637;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x1007063e;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 8;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    puStack_3c = (undefined4 *)0x10070653;
    local_18 = FUN_1006f6e0();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x10070668;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x1007066f;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 9;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    puStack_3c = (undefined4 *)0x10070684;
    local_18 = FUN_1006f790();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x10070699;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x100706a0;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 10;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    puStack_3c = (undefined4 *)0x100706b5;
    local_18 = FUN_1006f840();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x100706ca;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x100706d1;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 0xb;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    puStack_3c = (undefined4 *)0x100706e6;
    local_18 = FUN_1006f8f0();
  }
  local_8._0_1_ = 0;
  puStack_3c = &local_18;
  uStack_40 = 0x100706fb;
  FUN_100d9a30();
  puStack_3c = (undefined4 *)0x1c;
  uStack_40 = 0x10070702;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 0xc;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    puStack_3c = (undefined4 *)0x10070717;
    local_18 = FUN_1006f9a0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_3c = &local_18;
  uStack_40 = 0x1007072c;
  FUN_100d9a30();
  ExceptionList = local_10;
  return;
}


// ==== 10070745 Catch@10070745

void Catch_10070745(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10070759 Catch@10070759

void Catch_10070759(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::CreatePreState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070780 FUN_10070780

void FUN_10070780(void)

{
  FArray *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5c40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 4); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)in_ECX + iVar1 * 4) != 0) {
      FUN_1006eb70();
      FUN_1006ff40(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 4); iVar1 = iVar1 + 1) {
  }
  FArray::Empty(in_ECX,4,0);
  FString::Empty((FString *)(in_ECX + 0xc));
  ExceptionList = local_10;
  return;
}


// ==== 10070818 Catch@10070818

void Catch_10070818(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1007082c Catch@1007082c

void Catch_1007082c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::DestroyState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070850 FUN_10070850

void FUN_10070850(void)

{
  undefined4 uVar1;
  FString aFStack_40 [8];
  undefined4 uStack_38;
  undefined1 *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5c7b;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  puStack_34 = &stack0x00000004;
  uStack_38 = 0x1007089d;
  uVar1 = (**(code **)(*DAT_103663bc + 0x778))();
  FString::FString(aFStack_40,(FString *)&stack0x00000010);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_1006ff70(uVar1);
  local_8 = 0;
  uStack_38 = 0x100708d0;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  uStack_38 = 0x100708e0;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_10;
  return;
}


// ==== 100708f4 Catch@100708f4

void Catch_100708f4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10070908 Catch@10070908

void Catch_10070908(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::RegisterUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070930 FUN_10070930

void FUN_10070930(void)

{
  FArray *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e5cd5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArray::FArray(in_ECX);
  local_8 = 1;
  FString::FString((FString *)(in_ECX + 0xc));
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x18));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x24));
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_100704e0();
  *(undefined4 *)(in_ECX + 0x30) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100709c1 Catch@100709c1

void Catch_100709c1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100709d5 Catch@100709d5

void Catch_100709d5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::UIGameStateManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070a00 FUN_10070a00

void FUN_10070a00(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e5d1c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 4;
  FUN_10070780();
  local_8 = 2;
  FString::~FString((FString *)(in_ECX + 0x24));
  local_8._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x18));
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0xc));
  local_8 = 0xffffffff;
  FUN_1006f370();
  ExceptionList = local_10;
  return;
}


// ==== 10070a8a Catch@10070a8a

void Catch_10070a8a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10070a9e Catch@10070a9e

void Catch_10070a9e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UIGameStateManager::~UIGameStateManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070ac0 FUN_10070ac0

undefined4 FUN_10070ac0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (DAT_1034cc8c <= uVar1) {
      return 0;
    }
    if ((&DAT_1034cbf8)[uVar1] == param_1) break;
    uVar1 = uVar1 + 1;
  }
  return 1;
}


// ==== 10070b44 Catch@10070b44

void Catch_10070b44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10070b58 Catch@10070b58

void Catch_10070b58(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::MessageFilter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070b80 FUN_10070b80

void FUN_10070b80(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5d60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10020c60(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10070bd2 Catch@10070bd2

void Catch_10070bd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10070be6 Catch@10070be6

void Catch_10070be6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::SetGDevice");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070c10 FUN_10070c10

void FUN_10070c10(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5d80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10020c70();
  ExceptionList = local_10;
  return;
}


// ==== 10070c63 Catch@10070c63

void Catch_10070c63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10070c77 Catch@10070c77

void Catch_10070c77(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::ReleaseGDevice");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070ca0 FUN_10070ca0

void FUN_10070ca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5da0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 4);
  for (puVar2 = (undefined4 *)piVar1[0x12]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    FUN_10070ca0(*puVar2,param_2,param_3,param_4);
  }
  (**(code **)(*piVar1 + 0x68))(param_2,param_3,param_4);
  ExceptionList = local_10;
  return;
}


