// ==== 10086083 Catch@10086083

void Catch_10086083(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTable::CreateFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100860a0 FUN_100860a0

void FUN_100860a0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  int in_ECX;
  int *piVar9;
  uint uStack_60;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [12];
  undefined1 local_34 [4];
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eabbb;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar6 = param_2;
  FUN_101a3cf0(local_34);
  cVar3 = FUN_100822e0(uVar6);
  if (cVar3 == '\0') {
    FUN_10084ae0();
    puVar4 = (undefined4 *)FUN_10083930();
    piVar9 = (int *)*puVar4;
    *(int *)(in_ECX + 4) = *piVar9;
    local_18 = 0;
    FArray::Empty((FArray *)(in_ECX + 0x8a4),4,0);
    FArray::Empty((FArray *)(in_ECX + 0x898),4,0);
    FArray::Empty((FArray *)(in_ECX + 0x88c),4,0);
    iVar5 = FUN_10080a90(4);
    if (iVar5 != 0) {
      uVar6 = FUN_100809b0(4,0);
      uVar6 = thunk_FUN_101c1b01(uVar6);
      *(undefined4 *)(in_ECX + 0x44) = uVar6;
    }
    iVar5 = FUN_10080a90(0xb);
    if (iVar5 != 0) {
      psVar7 = (short *)FUN_100809b0(0xb,0);
      uVar6 = thunk_FUN_101c1b01(psVar7);
      *(undefined4 *)(in_ECX + 0x5c) = uVar6;
      psVar8 = psVar7;
      do {
        sVar2 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar2 != 0);
      if (psVar7[((int)psVar8 - (int)(psVar7 + 1) >> 1) + -1] == 0x25) {
        *(undefined4 *)(in_ECX + 0x60) = 1;
      }
    }
    iVar5 = FUN_10080a90(10);
    if (iVar5 != 0) {
      uVar6 = FUN_100809b0(10,0);
      uVar6 = thunk_FUN_101c1b01(uVar6);
      *(undefined4 *)(in_ECX + 0x28) = uVar6;
    }
    iVar5 = FUN_10080a90(3);
    if (iVar5 == 0) {
      *(undefined4 *)(in_ECX + 0x8c0) = 0;
    }
    else {
      uVar6 = FUN_100809b0(3,0);
      uVar6 = FUN_100825d0(uVar6);
      *(undefined4 *)(in_ECX + 0x8bc) = uVar6;
      *(undefined4 *)(in_ECX + 0x8c0) = 1;
    }
    iVar5 = FUN_10080a90(8);
    if (iVar5 != 0) {
      uVar6 = FUN_100809b0(8,0);
      uVar6 = thunk_FUN_101c1b01(uVar6);
      *(undefined4 *)(in_ECX + 0x3c) = uVar6;
    }
    iVar5 = FUN_10080a90(9);
    if (iVar5 != 0) {
      uVar6 = FUN_100809b0(9,0);
      uVar6 = thunk_FUN_101c1b01(uVar6);
      *(undefined4 *)(in_ECX + 0x40) = uVar6;
    }
LAB_10086260:
    if ((*piVar9 != *(int *)(in_ECX + 4)) || (piVar9[1] != 0)) {
      uVar6 = param_2;
      FUN_101a3cf0(local_40);
      cVar3 = FUN_100822e0(uVar6);
      if (cVar3 != '\0') goto LAB_100863e9;
      puVar4 = (undefined4 *)FUN_10083930();
      piVar9 = (int *)*puVar4;
      if (*piVar9 == 0x2a) {
        if (piVar9[1] == 0) {
          *(undefined4 *)(in_ECX + 0x87c) = 0;
          FUN_10084730(local_50,0);
        }
        else {
          *(int *)(in_ECX + 0x878) = *(int *)(in_ECX + 0x878) + 1;
          local_30 = FUN_10004ed0(0xc);
          local_8._0_1_ = 1;
          if (local_30 == 0) {
            local_18 = 0;
          }
          else {
            local_18 = FUN_10082290();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_100d9a30(&local_18);
          FUN_10084730(local_50,0);
        }
      }
      else {
        if (*piVar9 != 0x2b) {
          FUN_10084730(local_48,0);
          goto LAB_10086260;
        }
        if (local_18 != 0) {
          iVar5 = FUN_10085fd0(param_1,param_2,*(undefined4 *)(in_ECX + 0x4c));
          *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
          *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
          local_1c = iVar5;
          FUN_100d9a30(&local_1c);
          if (*(int *)(in_ECX + 0x87c) < *(int *)(in_ECX + 0x8a8)) {
            piVar1 = (int *)(*(int *)(in_ECX + 0x8a4) + *(int *)(in_ECX + 0x87c) * 4);
            if (*piVar1 < *(int *)(iVar5 + 0x24)) {
              *piVar1 = *(int *)(iVar5 + 0x24);
            }
            piVar1 = (int *)(*(int *)(in_ECX + 0x88c) + *(int *)(in_ECX + 0x87c) * 4);
            if (*piVar1 < *(int *)(iVar5 + 0x2c)) {
              *piVar1 = *(int *)(iVar5 + 0x2c);
              *(int *)(in_ECX + 0x87c) = *(int *)(in_ECX + 0x87c) + 1;
              goto LAB_10086260;
            }
          }
          else {
            local_20 = *(int *)(iVar5 + 0x24) + *(int *)(in_ECX + 0x3c) * -2;
            FUN_100d9a30(&local_20);
            local_24 = *(int *)(iVar5 + 0x2c) + *(int *)(in_ECX + 0x3c) * -2;
            FUN_100d9a30(&local_24);
          }
          *(int *)(in_ECX + 0x87c) = *(int *)(in_ECX + 0x87c) + 1;
        }
      }
      goto LAB_10086260;
    }
LAB_100863e9:
    *(undefined4 *)(in_ECX + 0x24) = 0;
    for (iVar5 = 0; iVar5 < *(int *)(in_ECX + 0x8a8); iVar5 = iVar5 + 1) {
      *(int *)(in_ECX + 0x24) =
           *(int *)(in_ECX + 0x24) +
           *(int *)(*(int *)(in_ECX + 0x8a4) + iVar5 * 4) +
           (*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x3c)) * 2 + *(int *)(in_ECX + 0x40);
      *(int *)(in_ECX + 0x2c) =
           *(int *)(in_ECX + 0x2c) + *(int *)(*(int *)(in_ECX + 0x88c) + iVar5 * 4);
    }
    iVar5 = *(int *)(in_ECX + 0x40) + *(int *)(in_ECX + 0x44) * 2;
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + iVar5;
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + iVar5;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1008644c Catch@1008644c

void Catch_1008644c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 10086460 Catch@10086460

void Catch_10086460(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTable::LoadHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086480 FUN_10086480

void FUN_10086480(void)

{
  int iVar1;
  FArray *this;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eabe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0x884);
  for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
    iVar2 = local_18 * 4;
    iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x880) + iVar2) + 4);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      (**(code **)(**(int **)(**(int **)(*(int *)(in_ECX + 0x880) + iVar2) + iVar4 * 4) + 0x14))();
      if (*(int *)(**(int **)(*(int *)(in_ECX + 0x880) + iVar2) + iVar4 * 4) != 0) {
        FUN_100829e0(1);
      }
    }
    this = *(FArray **)(iVar2 + *(int *)(in_ECX + 0x880));
    for (iVar2 = 0; iVar2 < *(int *)(this + 4); iVar2 = iVar2 + 1) {
    }
    FArray::Empty(this,4,0);
    if (*(int *)(*(int *)(in_ECX + 0x880) + local_18 * 4) != 0) {
      FUN_10085fa0(1);
    }
  }
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x884); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x880),4,0);
  FArray::Empty((FArray *)(in_ECX + 0x88c),4,0);
  FArray::Empty((FArray *)(in_ECX + 0x898),4,0);
  FArray::Empty((FArray *)(in_ECX + 0x8a4),4,0);
  FArray::Empty((FArray *)(in_ECX + 0x8b0),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 100865de Catch@100865de

void Catch_100865de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100865f2 Catch@100865f2

void Catch_100865f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTable::Release");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086610 FUN_10086610

void FUN_10086610(byte param_1)

{
  FUN_10085a90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10086640 FUN_10086640

void FUN_10086640(void)

{
  UObject *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eac08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar5 = 0;
  for (iVar6 = 0; iVar6 < *(int *)(in_ECX + 0x228); iVar6 = iVar6 + 1) {
    this = *(UObject **)(*(int *)(in_ECX + 0x224) + 8 + iVar6 * 0xc);
    iVar3 = iVar5;
    iVar1 = local_18;
    if ((this != (UObject *)0x0) &&
       ((iVar2 = UObject::IsA(this,(UClass *)&DAT_10373dc0), iVar2 != 0 ||
        (iVar2 = UObject::IsA(this,(UClass *)&DAT_10373890), iVar2 != 0)))) {
      iVar3 = FUN_10058020();
      iVar1 = iVar3;
      if ((local_1c != 0) && (iVar1 = local_1c, local_20 == 0)) {
        local_20 = iVar3;
      }
      local_1c = iVar1;
      iVar1 = iVar5;
      if (((local_18 != 0) && (iVar5 != 0)) &&
         (piVar4 = (int *)FUN_10010290(*(undefined4 *)(iVar5 + 4)), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x10c))(iVar3,local_18);
      }
    }
    local_18 = iVar1;
    iVar5 = iVar3;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  if ((((iVar5 != 0) && (local_18 != 0)) && (local_1c != 0)) && (iVar5 != local_1c)) {
    piVar4 = (int *)FUN_10010290(*(undefined4 *)(iVar5 + 4));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10c))(local_1c,local_18);
    }
    piVar4 = (int *)FUN_10010290(*(undefined4 *)(local_1c + 4));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10c))(local_20,iVar5);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100867a8 Catch@100867a8

void Catch_100867a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100867bc Catch@100867bc

void Catch_100867bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::InitTabOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100867e0 FUN_100867e0

void FUN_100867e0(void)

{
  UObject *this;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eac38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x238) != 0) && (*(int **)(in_ECX + 0x218) != (int *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0x218) + 0x14))();
    if (*(int *)(in_ECX + 0x218) != 0) {
      FUN_10086610(1);
    }
    *(undefined4 *)(in_ECX + 0x218) = 0;
  }
  iVar3 = 0;
  local_8._0_1_ = 1;
  do {
    if (*(int *)(in_ECX + 0x228) <= iVar3) {
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_100d10a0();
      FUN_1000be70();
      *(undefined4 *)(in_ECX + 0x238) = 0;
      DAT_1036edc8 = 0;
      DAT_1036ebc8 = 0;
      for (iVar3 = 0; iVar3 < DAT_1036efcc; iVar3 = iVar3 + 1) {
      }
      FArray::Empty((FArray *)&DAT_1036efc8,4,0);
      for (iVar3 = 0; iVar3 < DAT_1036efd8; iVar3 = iVar3 + 1) {
      }
      FArray::Empty((FArray *)&DAT_1036efd4,4,0);
      for (iVar3 = 0; iVar3 < DAT_1036efe4; iVar3 = iVar3 + 1) {
      }
      FArray::Empty((FArray *)&DAT_1036efe0,4,0);
      FUN_10082390();
      ExceptionList = local_10;
      return;
    }
    this = *(UObject **)(*(int *)(in_ECX + 0x224) + 8 + iVar3 * 0xc);
    if (this == (UObject *)0x0) {
      appFailAssert("pControl",".\\Src\\HtmlTranslator.cpp",0x8e8);
    }
    iVar1 = UObject::IsA(this,(UClass *)&DAT_10371970);
    if (iVar1 == 0) {
      iVar1 = UObject::IsA(this,(UClass *)&DAT_10371ea0);
      if (iVar1 != 0) goto LAB_100868b6;
    }
    else {
LAB_100868b6:
      if (*(int *)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x228) + 0x328) == 0x3c) {
        (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x228) + 0x13c))();
        (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x228) + 0x174))();
      }
    }
    uVar2 = FUN_10058020();
    FUN_10060e00(uVar2);
    if (this != (UObject *)0x0) {
      (**(code **)(*(int *)this + 0xc))(1);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 100869ea Catch@100869ea

void Catch_100869ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100869fe Catch@100869fe

void Catch_100869fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::ReleaseHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086a20 FUN_10086a20

void FUN_10086a20(undefined4 param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eac68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x228); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x224) + 8 + iVar2 * 0xc);
    if (piVar1 == (int *)0x0) {
      appFailAssert("pControl",".\\Src\\HtmlTranslator.cpp",0x988);
    }
    (**(code **)(*piVar1 + 0x148))(param_1,-param_2,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  ExceptionList = local_10;
  return;
}


// ==== 10086ae6 Catch@10086ae6

void Catch_10086ae6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10086afa Catch@10086afa

void Catch_10086afa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::MoveControl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086b20 FUN_10086b20

undefined4 FUN_10086b20(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eac90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10044970();
  FUN_10086a20(0,*(undefined4 *)(in_ECX + 0x1d8));
  ExceptionList = local_10;
  return 1;
}


// ==== 10086b80 Catch@10086b80

void Catch_10086b80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10086b94 Catch@10086b94

void Catch_10086b94(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnUpBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086bc0 FUN_10086bc0

undefined4 FUN_10086bc0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eacb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10044a70();
  FUN_10086a20(0,*(undefined4 *)(in_ECX + 0x1d8));
  ExceptionList = local_10;
  return 1;
}


// ==== 10086c20 Catch@10086c20

void Catch_10086c20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10086c34 Catch@10086c34

void Catch_10086c34(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnDownBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086c60 FUN_10086c60

undefined4 FUN_10086c60(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eacd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10044b80(param_1);
  FUN_10086a20(0,*(undefined4 *)(in_ECX + 0x1d8));
  ExceptionList = local_10;
  return 1;
}


// ==== 10086cc6 Catch@10086cc6

void Catch_10086cc6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10086cda Catch@10086cda

void Catch_10086cda(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnScrollMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086d00 FUN_10086d00

undefined4 FUN_10086d00(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eacf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10044c80(param_1,param_2);
  FUN_10086a20(0,*(undefined4 *)(in_ECX + 0x1d8));
  ExceptionList = local_10;
  return 1;
}


// ==== 10086d6c Catch@10086d6c

void Catch_10086d6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10086d80 Catch@10086d80

void Catch_10086d80(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnMouseWheel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10086da0 FUN_10086da0

void FUN_10086da0(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  UObject *this;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  LPCWSTR lpWideCharStr;
  char *pcVar6;
  int in_ECX;
  ushort *puVar7;
  int iVar8;
  bool bVar9;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  void *local_334;
  undefined1 *puStack_330;
  uint local_32c;
  char local_328 [800];
  uint local_8;
  
  puStack_330 = &LAB_101ead18;
  local_334 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_328;
  ExceptionList = &local_334;
  iVar8 = 0;
  local_32c = 0;
  if (param_1 == (ushort *)0x0) {
LAB_10086ec7:
    ExceptionList = local_334;
    __security_check_cookie(local_8 ^ (uint)local_328);
    return;
  }
  local_32c = 1;
  do {
    if (*(int *)(in_ECX + 0x228) <= iVar8) {
LAB_10086eb9:
      local_32c = local_32c & 0xffffff00;
      FUN_100d10a0();
      goto LAB_10086ec7;
    }
    this = *(UObject **)(*(int *)(in_ECX + 0x224) + 8 + iVar8 * 0xc);
    puVar3 = (ushort *)FUN_1000ccf0();
    puVar7 = param_1;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar2 = *puVar3;
        bVar9 = uVar2 < *puVar7;
        if (uVar2 != *puVar7) {
LAB_10086e56:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_10086e5b;
        }
        if (uVar2 == 0) break;
        uVar2 = puVar3[1];
        bVar9 = uVar2 < puVar7[1];
        if (uVar2 != puVar7[1]) goto LAB_10086e56;
        puVar3 = puVar3 + 2;
        puVar7 = puVar7 + 2;
      } while (uVar2 != 0);
      iVar4 = 0;
LAB_10086e5b:
      if (iVar4 == 0) {
        iVar8 = (**(code **)(*(int *)this + 500))();
        if (iVar8 != 0) {
          iVar8 = UObject::IsA(this,(UClass *)&DAT_10373890);
          if (iVar8 == 0) {
            uVar5 = (**(code **)(*(int *)this + 500))();
            iVar8 = FUN_10145750(uVar5);
            if (iVar8 != 0) goto LAB_10086ea4;
            uVar5 = (**(code **)(*(int *)this + 500))();
            iVar8 = FUN_101457c0(uVar5);
            if (iVar8 == 0) goto LAB_10086ea4;
          }
          lpUsedDefaultChar = (LPBOOL)0x0;
          lpDefaultChar = (LPCSTR)0x0;
          iVar4 = 800;
          iVar8 = -1;
          pcVar6 = local_328;
          lpWideCharStr = (LPCWSTR)(**(code **)(*(int *)this + 500))();
          WideCharToMultiByte(0,0,lpWideCharStr,iVar8,pcVar6,iVar4,lpDefaultChar,lpUsedDefaultChar);
          pcVar6 = local_328;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          iVar8 = (int)pcVar6 - (int)(local_328 + 1);
          iVar4 = UObject::IsA(this,(UClass *)&DAT_10373890);
          if ((iVar4 == 0) || ((1 < iVar8 && (iVar8 < 0xbb9)))) {
            iVar4 = UObject::IsA(this,(UClass *)&DAT_10373890);
            if ((iVar4 != 0) || ((0 < iVar8 && (iVar8 < 0x11)))) {
              bVar9 = true;
              for (iVar4 = 0; iVar4 < iVar8; iVar4 = iVar4 + 1) {
                if (local_328[iVar4] != ' ') {
                  bVar9 = false;
                }
              }
              if (!bVar9) {
                (**(code **)(*(int *)this + 500))();
                local_32c = local_32c & 0xffffff00;
                FUN_100d10a0();
                goto LAB_10086ec7;
              }
              goto LAB_10086f61;
            }
LAB_10086ea4:
            uVar5 = 0xcc;
          }
          else {
LAB_10086f61:
            uVar5 = 0x149;
          }
          FUN_10170650(uVar5,0xffb09b79);
        }
        goto LAB_10086eb9;
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}


// ==== 10086fe5 Catch@10086fe5

void Catch_10086fe5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10086ff9 Catch@10086ff9

void Catch_10086ff9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::GetData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10087020 FUN_10087020

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10087020(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  UObject *this;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  LPCWSTR lpWideCharStr;
  char *pcVar7;
  int in_ECX;
  ushort *puVar8;
  int iVar9;
  bool bVar10;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  void *local_1784;
  undefined1 *puStack_1780;
  uint local_177c;
  char local_1778 [6000];
  uint local_8;
  
  puStack_1780 = &LAB_101ead48;
  local_1784 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1778;
  ExceptionList = &local_1784;
  iVar9 = 0;
  local_177c = 0;
  if (param_1 == (ushort *)0x0) {
LAB_1008715e:
    ExceptionList = local_1784;
    __security_check_cookie(local_8 ^ (uint)local_1778);
    return;
  }
  local_177c = 1;
  do {
    if (*(int *)(in_ECX + 0x228) <= iVar9) goto LAB_10087150;
    this = *(UObject **)(*(int *)(in_ECX + 0x224) + 8 + iVar9 * 0xc);
    puVar3 = (ushort *)FUN_1000ccf0();
    puVar4 = puVar3;
    puVar8 = param_1;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar2 = *puVar4;
        bVar10 = uVar2 < *puVar8;
        if (uVar2 != *puVar8) {
LAB_100870e6:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_100870eb;
        }
        if (uVar2 == 0) break;
        uVar2 = puVar4[1];
        bVar10 = uVar2 < puVar8[1];
        if (uVar2 != puVar8[1]) goto LAB_100870e6;
        puVar4 = puVar4 + 2;
        puVar8 = puVar8 + 2;
      } while (uVar2 != 0);
      iVar5 = 0;
LAB_100870eb:
      if (iVar5 == 0) {
        iVar9 = (**(code **)(*(int *)this + 500))();
        if (iVar9 == 0) goto LAB_10087106;
        iVar9 = UObject::IsA(this,(UClass *)&DAT_10373890);
        if (iVar9 == 0) {
          uVar6 = (**(code **)(*(int *)this + 500))();
          iVar9 = FUN_10145750(uVar6);
          if (iVar9 != 0) {
            uVar6 = 0xcc;
            goto LAB_10087145;
          }
        }
        lpUsedDefaultChar = (LPBOOL)0x0;
        lpDefaultChar = (LPCSTR)0x0;
        iVar5 = 6000;
        iVar9 = -1;
        pcVar7 = local_1778;
        lpWideCharStr = (LPCWSTR)(**(code **)(*(int *)this + 500))();
        WideCharToMultiByte(0,0,lpWideCharStr,iVar9,pcVar7,iVar5,lpDefaultChar,lpUsedDefaultChar);
        pcVar7 = local_1778;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar9 = (int)pcVar7 - (int)(local_1778 + 1);
        if (iVar9 < 1) {
LAB_10087106:
          FUN_10081e90(puVar3);
        }
        else {
          iVar5 = FUN_10081f80(puVar3,iVar9);
          if (iVar5 != 0) {
            bVar10 = true;
            for (iVar5 = 0; iVar5 < iVar9; iVar5 = iVar5 + 1) {
              if (local_1778[iVar5] != ' ') {
                bVar10 = false;
              }
            }
            if (!bVar10) {
              (**(code **)(*(int *)this + 500))();
              local_177c = local_177c & 0xffffff00;
              FUN_100d10a0();
              goto LAB_1008715e;
            }
            uVar6 = 0x149;
LAB_10087145:
            FUN_10170650(uVar6,0xffb09b79);
          }
        }
LAB_10087150:
        local_177c = local_177c & 0xffffff00;
        FUN_100d10a0();
        goto LAB_1008715e;
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}


// ==== 1008723e Catch@1008723e

void Catch_1008723e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 10087252 Catch@10087252

void Catch_10087252(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::GetData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10087270 FUN_10087270

undefined4 FUN_10087270(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[1] < 1) {
    appFailAssert("ArrayNum>0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x18e);
  }
  uVar1 = *(undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
  FUN_1013d680(in_ECX[1] + -1,1);
  return uVar1;
}


// ==== 100872b0 FUN_100872b0

void FUN_100872b0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ead81;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10087320 FUN_10087320

undefined4 * FUN_10087320(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc) = *param_2;
        return (undefined4 *)(iVar2 * 0xc + 8 + *in_ECX);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  puVar3 = (undefined4 *)FUN_10083a80(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
  }
  uVar4 = puVar3[1] & in_ECX[4] - 1U;
  *puVar3 = *(undefined4 *)(in_ECX[3] + uVar4 * 4);
  *(int *)(in_ECX[3] + uVar4 * 4) = in_ECX[1] + -1;
  if (in_ECX[4] * 2 + 8 < in_ECX[1]) {
    in_ECX[4] = in_ECX[4] * 2;
    FUN_1000b930();
  }
  return puVar3 + 2;
}


// ==== 100873e0 FUN_100873e0

void FUN_100873e0(uint param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eada0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 7;
  if (uVar3 < 0x7fffffff) {
    uVar1 = *(uint *)(in_ECX + 0x18);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (uVar1 <= 0x7ffffffe - uVar2)) {
      param_1 = uVar2 + uVar1;
    }
  }
  local_8 = 0;
  FUN_10083aa0(param_1 + 1);
  local_8 = 0xffffffff;
  FUN_10087498();
  return;
}


// ==== 10087466 Catch@10087466

undefined * Catch_10087466(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_10083aa0(iVar1 + 1);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return &DAT_1008748f;
}


// ==== 10087498 FUN_10087498

void FUN_10087498(void)

{
  void *_Src;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  iVar2 = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    if (*(uint *)(unaff_EDI + 0x18) < 8) {
      _Src = (void *)(unaff_EDI + 4);
    }
    else {
      _Src = *(void **)(unaff_EDI + 4);
    }
    _memcpy_s(unaff_EBX,unaff_ESI * 2 + 2,_Src,*(int *)(unaff_EBP + 0xc) * 2);
    iVar2 = *(int *)(unaff_EBP + 0xc);
  }
  if (7 < *(uint *)(unaff_EDI + 0x18)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(unaff_EDI + 4));
    iVar2 = *(int *)(unaff_EBP + 0xc);
  }
  puVar1 = (undefined4 *)(unaff_EDI + 4);
  *(undefined2 *)puVar1 = 0;
  *puVar1 = unaff_EBX;
  *(uint *)(unaff_EDI + 0x18) = unaff_ESI;
  *(int *)(unaff_EDI + 0x14) = iVar2;
  if (7 < unaff_ESI) {
    puVar1 = unaff_EBX;
  }
  *(undefined2 *)((int)puVar1 + iVar2 * 2) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// ==== 10087510 Catch@10087510

void Catch_10087510(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (7 < *(uint *)(iVar1 + 0x18)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 0x18) = 7;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined2 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10087550 FUN_10087550

void FUN_10087550(void)

{
  int in_ECX;
  
  if (7 < *(uint *)(in_ECX + 0x18)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x18) = 7;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  return;
}


// ==== 10087580 FUN_10087580

void FUN_10087580(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eadc8;
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
  FUN_10084950();
  ExceptionList = local_c;
  return;
}


// ==== 10087600 FUN_10087600

undefined4 FUN_10087600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eadfb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10004ed0(0x8c4);
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10085e70(in_ECX,*(undefined4 *)(in_ECX + 0x1c),param_3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100860a0(param_1,param_2);
  ExceptionList = local_10;
  return uVar2;
}


// ==== 1008768b Catch@1008768b

void Catch_1008768b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1008769f Catch@1008769f

void Catch_1008769f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::CreateTableFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100876c0 FUN_100876c0

/* WARNING: Type propagation algorithm not settling */

void FUN_100876c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  int in_ECX;
  short *psVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uStack_6c;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  int local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eae20;
  local_10 = ExceptionList;
  uStack_6c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  bVar2 = false;
  local_8 = 0;
  uVar11 = param_2;
  FUN_101a3cf0(local_2c);
  cVar4 = FUN_100822e0(uVar11);
  if (cVar4 == '\0') {
    FUN_10084ae0();
    *(int *)(in_ECX + 0x70) = param_3;
    puVar5 = (undefined4 *)FUN_10083930();
    piVar9 = (int *)*puVar5;
    iVar6 = *piVar9;
    *(int *)(in_ECX + 4) = iVar6;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    iVar3 = local_28[2];
    if (iVar6 == 0x2b) {
      FUN_10085c30(piVar9);
      iVar3 = local_28[2];
    }
    while ((local_28[2] = iVar3, *piVar9 != *(int *)(in_ECX + 4) || (piVar9[1] != 0))) {
      uVar11 = param_2;
      FUN_101a3cf0(local_3c);
      cVar4 = FUN_100822e0(uVar11);
      if (cVar4 != '\0') break;
      param_3 = 0;
      puVar5 = (undefined4 *)FUN_10083930();
      piVar9 = (int *)*puVar5;
      switch(*piVar9) {
      case 1:
        if (piVar9[7] != 0) break;
        puVar10 = local_44;
        goto LAB_10087a16;
      default:
        goto LAB_10087a11;
      case 6:
        *(undefined4 *)(in_ECX + 0x74) = 6;
        break;
      case 0xf:
        if (piVar9[1] == 0) {
LAB_10087a03:
          *(undefined4 *)(in_ECX + 0x74) = 0;
          DAT_1036edc8 = 0;
        }
        else {
          iVar6 = FUN_10080a90(4);
          if (iVar6 == 0) {
            iVar6 = FUN_10080a90(1);
            if (iVar6 == 0) {
              iVar6 = FUN_10080a90(2);
              if (iVar6 == 0) goto LAB_10087a03;
              *(undefined4 *)(in_ECX + 0x74) = 8;
              psVar7 = (short *)FUN_100809b0(2,0);
              psVar8 = &DAT_1036ebc8;
              do {
                sVar1 = *psVar7;
                *psVar8 = sVar1;
                psVar7 = psVar7 + 1;
                psVar8 = psVar8 + 1;
              } while (sVar1 != 0);
            }
            else {
              *(undefined4 *)(in_ECX + 0x74) = 2;
              psVar7 = (short *)FUN_100809b0(1,0);
              psVar8 = &DAT_1036edc8;
              do {
                sVar1 = *psVar7;
                *psVar8 = sVar1;
                psVar7 = psVar7 + 1;
                psVar8 = psVar8 + 1;
              } while (sVar1 != 0);
              iVar6 = FUN_10080a90(5);
              if (iVar6 == 0) {
                DAT_1036ebc8 = 0;
              }
              else {
                psVar7 = (short *)FUN_100809b0(5,0);
                psVar8 = &DAT_1036ebc8;
                do {
                  sVar1 = *psVar7;
                  *psVar8 = sVar1;
                  psVar7 = psVar7 + 1;
                  psVar8 = psVar8 + 1;
                } while (sVar1 != 0);
              }
            }
          }
          else {
            *(undefined4 *)(in_ECX + 0x74) = 1;
            psVar7 = (short *)FUN_100809b0(4,0);
            psVar8 = &DAT_1036edc8;
            do {
              sVar1 = *psVar7;
              *psVar8 = sVar1;
              psVar7 = psVar7 + 1;
              psVar8 = psVar8 + 1;
            } while (sVar1 != 0);
          }
        }
LAB_10087a11:
        puVar10 = local_5c;
        goto LAB_10087a16;
      case 0x10:
      case 0x35:
        break;
      case 0x13:
        if (piVar9[1] == 0) {
          if (0 < DAT_1036efcc) {
            FUN_10087270();
          }
          puVar10 = local_4c;
        }
        else {
          local_28[1] = 1;
          FUN_100d9a30(local_28 + 1);
          puVar10 = local_4c;
        }
        goto LAB_10087a16;
      case 0x14:
        local_28[0] = FUN_100809b0(1,0);
        if (piVar9[1] == 0) {
          if (0 < DAT_1036efe4) {
            FUN_10087270();
          }
        }
        else if (local_28[0] != 0) {
          FUN_100d9a30(local_28);
          puVar10 = local_54;
          goto LAB_10087a16;
        }
        puVar10 = local_54;
LAB_10087a16:
        FUN_10084730(puVar10,0);
        goto LAB_10087a1e;
      case 0x29:
        iVar6 = FUN_10087600(param_1,param_2,*(undefined4 *)(in_ECX + 0x4c));
        param_3 = iVar6;
        FUN_100d9a30(&param_3);
        if (*(int *)(in_ECX + 0x24) < *(int *)(iVar6 + 0x24)) {
          *(int *)(in_ECX + 0x24) = *(int *)(iVar6 + 0x24);
        }
        if (*(int *)(in_ECX + 0x2c) < *(int *)(iVar6 + 0x2c)) {
          *(int *)(in_ECX + 0x2c) = *(int *)(iVar6 + 0x2c);
        }
        goto LAB_10087a1e;
      case 0x31:
        *(undefined4 *)(in_ECX + 0x74) = 3;
        break;
      case 0x32:
        *(undefined4 *)(in_ECX + 0x74) = 4;
        break;
      case 0x33:
        *(undefined4 *)(in_ECX + 0x74) = 5;
        break;
      case 0x34:
        *(undefined4 *)(in_ECX + 0x74) = 7;
      }
      param_3 = FUN_10085b70(param_1,param_2,*(undefined4 *)(in_ECX + 0x4c));
      FUN_100d9a30(&param_3);
      if ((bVar2) && (*piVar9 == 1)) {
        if (*(int *)(in_ECX + 0x24) < *(int *)(param_3 + 0x24) + local_28[4]) {
          iVar6 = *(int *)(param_3 + 0x24) + local_28[4];
LAB_10087827:
          *(int *)(in_ECX + 0x24) = iVar6;
        }
      }
      else {
        iVar6 = *(int *)(param_3 + 0x24);
        if (*(int *)(in_ECX + 0x24) < iVar6) goto LAB_10087827;
      }
      if (*(int *)(in_ECX + 0x2c) < *(int *)(param_3 + 0x2c)) {
        *(int *)(in_ECX + 0x2c) = *(int *)(param_3 + 0x2c);
      }
LAB_10087a1e:
      iVar6 = *piVar9;
      iVar3 = local_28[2];
      if ((iVar6 != 1) && (iVar6 != 0x14)) {
        bVar2 = false;
        local_28[3] = 0;
        local_28[4] = 0;
        goto LAB_10087a35;
      }
      bVar2 = true;
      local_28[3] = 1;
      if (iVar6 != 1) goto LAB_10087a35;
      if (param_3 != 0) {
        local_28[4] = local_28[4] + *(int *)(param_3 + 0x24);
LAB_10087a35:
        if ((param_3 != 0) && (iVar3 = param_3, local_28[2] != 0)) {
          *(int *)(param_3 + 0x50) = local_28[2];
          *(int *)(local_28[2] + 0x54) = param_3;
        }
      }
    }
    if (*(int *)(in_ECX + 4) == 0x2b) {
      if (0 < *(int *)(in_ECX + 0x58)) {
        *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x58);
      }
      if (0 < DAT_1036efcc) {
        FUN_10087270();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10087aaf Catch@10087aaf

void Catch_10087aaf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10087ac3 Catch@10087ac3

void Catch_10087ac3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::LoadHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10087b50 FUN_10087b50

undefined4 FUN_10087b50(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eae40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < DAT_1036efcc; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)&DAT_1036efc8,4,0);
  for (iVar1 = 0; iVar1 < DAT_1036efd8; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)&DAT_1036efd4,4,0);
  for (iVar1 = 0; iVar1 < DAT_1036efe4; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)&DAT_1036efe0,4,0);
  if ((*(int *)(in_ECX + 0x238) != 0) && (*(int **)(in_ECX + 0x218) != (int *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0x218) + 0x14))();
    if (*(int *)(in_ECX + 0x218) != 0) {
      FUN_10086610(1);
    }
    *(undefined4 *)(in_ECX + 0x218) = 0;
  }
  FUN_1000be70();
  FUN_10043b60();
  ExceptionList = local_10;
  return 1;
}


// ==== 10087c59 Catch@10087c59

void Catch_10087c59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10087c6d Catch@10087c6d

void Catch_10087c6d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10087c90 FUN_10087c90

void FUN_10087c90(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  wchar_t *pwVar6;
  ushort *puVar7;
  int in_ECX;
  ushort *puVar8;
  uint uStack_48;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eae6b;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_28 = 0;
  local_24 = 0;
  local_18 = 0;
  puVar2 = (undefined4 *)FUN_101a3cc0(local_30);
  local_28 = *puVar2;
  local_24 = puVar2[1];
  local_18 = 0;
  while( true ) {
    uVar3 = FUN_101a3cf0(local_30);
    cVar1 = FUN_10082310(uVar3);
    if ((cVar1 == '\0') || (local_18 != 0)) break;
    piVar4 = (int *)FUN_10083930();
    piVar4 = (int *)*piVar4;
    if (*piVar4 == 4) {
      if (piVar4[1] != 0) {
        if ((uint)piVar4[8] < 8) {
          piVar4 = piVar4 + 3;
        }
        else {
          piVar4 = (int *)piVar4[3];
        }
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x24c) + 4) + 0x168))(piVar4);
      }
      local_18 = 1;
    }
    else if ((*piVar4 == 0x2c) && (piVar4[1] != 0)) {
      iVar5 = FUN_10080a90(2);
      if (iVar5 == 0) {
        pwVar6 = L"Transparent";
      }
      else {
        pwVar6 = (wchar_t *)FUN_100809b0(2,0);
      }
      FUN_10081000(pwVar6);
      iVar5 = FUN_10080a90(5);
      if (iVar5 != 0) {
        puVar8 = &DAT_102468e4;
        puVar7 = (ushort *)FUN_100809b0(5,0);
        iVar5 = appStrcmp(puVar7,puVar8);
        if (iVar5 == 0) {
          *(undefined1 *)(in_ECX + 0x254) = 1;
          UCanvas::SetTextAnim(DAT_103663c0,true,0.007);
        }
      }
    }
    FUN_10084730(local_38,0);
  }
  puVar2 = (undefined4 *)FUN_101a3cc0(local_38);
  local_28 = *puVar2;
  local_24 = puVar2[1];
  local_18 = 0;
  do {
    uVar3 = FUN_101a3cf0(local_38);
    cVar1 = FUN_10082310(uVar3);
    if (cVar1 == '\0') {
LAB_10087e75:
      if (*(undefined4 **)(in_ECX + 0x218) != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x218);
        uVar3 = FUN_101c19e0();
        uVar3 = FUN_101c19e0(uVar3);
        (*(code *)*puVar2)(uVar3);
        iVar5 = **(int **)(in_ECX + 0x218);
        uVar3 = FUN_101c19e0();
        uVar3 = FUN_101c19e0(uVar3);
        (**(code **)(iVar5 + 4))(uVar3);
      }
      FUN_10086640();
      ExceptionList = local_10;
      return;
    }
    puVar2 = (undefined4 *)FUN_10083930();
    if (*(int *)*puVar2 == 0x2c) {
      iVar5 = FUN_10004ed0(0x878);
      local_8._0_1_ = 1;
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_100859c0(0,in_ECX,*(undefined4 *)(in_ECX + 0x220));
      }
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(in_ECX + 0x218) = uVar3;
      FUN_100876c0(param_1,&local_28,0);
      local_18 = 1;
      goto LAB_10087e75;
    }
    FUN_10084730(local_30,0);
  } while( true );
}


// ==== 10087f07 Catch@10087f07

void Catch_10087f07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10087f1b Catch@10087f1b

void Catch_10087f1b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::AnalyzeHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10087f40 FUN_10087f40

void FUN_10087f40(int param_1)

{
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eae90;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = FUN_10081910();
  *(undefined4 *)(param_1 + 0x1cc) = local_18;
  FUN_10087320(&local_18,&param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10087fb3 Catch@10087fb3

void Catch_10087fb3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10087fc7 Catch@10087fc7

void Catch_10087fc7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterControl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10087ff0 FUN_10087ff0

undefined4 FUN_10087ff0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eaeb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10087b50();
  ExceptionList = local_10;
  return 1;
}


// ==== 1008803e Catch@1008803e

void Catch_1008803e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088052 Catch@10088052

void Catch_10088052(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTutorialHtmlViewer::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088070 FUN_10088070

undefined4 FUN_10088070(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eaed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10087b50();
  ExceptionList = local_10;
  return 1;
}


// ==== 100880be Catch@100880be

void Catch_100880be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100880d2 Catch@100880d2

void Catch_100880d2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100880f0 FUN_100880f0

undefined4 FUN_100880f0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar1 = *(uint *)(in_ECX + 0x18);
  if (uVar1 < 8) {
    puVar5 = (undefined4 *)(in_ECX + 4);
  }
  else {
    puVar5 = *(undefined4 **)(in_ECX + 4);
  }
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(in_ECX + 4);
    puVar2 = puVar3;
    if (7 < uVar1) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (puVar2 <= puVar5) {
      if (7 < uVar1) {
        puVar3 = (undefined4 *)*puVar3;
      }
      if (puVar5 <= (undefined4 *)((int)puVar3 + *(int *)(in_ECX + 0x14) * 2)) goto LAB_10088135;
    }
  }
  FUN_101c238d();
LAB_10088135:
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    if ((param_2 != -2) && ((param_2 == 0 || (param_2 != in_ECX)))) {
      FUN_101c238d();
    }
    iVar4 = param_3 - (int)puVar5 >> 1;
  }
  iVar6 = 0;
  if (param_5 != 0) {
    if ((param_4 != -2) && ((param_4 == 0 || (param_4 != param_2)))) {
      FUN_101c238d();
    }
    iVar6 = param_5 - param_3 >> 1;
  }
  FUN_10084810(iVar4,iVar6);
  if (*(uint *)(in_ECX + 0x18) < 8) {
    iVar6 = in_ECX + 4;
  }
  else {
    iVar6 = *(int *)(in_ECX + 4);
  }
  FUN_10083960(iVar6 + iVar4 * 2,in_ECX);
  return param_1;
}


// ==== 100881c0 FUN_100881c0

void FUN_100881c0(int param_1,uint param_2,uint param_3)

{
  undefined4 *_Dst;
  int in_ECX;
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_101c0f70();
  }
  uVar2 = *(int *)(param_1 + 0x14) - param_2;
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  if (in_ECX != param_1) {
    if (0x7ffffffe < uVar2) {
      FUN_101c0f31();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar2) {
      FUN_100873e0(uVar2,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar2 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (*(uint *)(in_ECX + 0x18) < 8) {
        *(undefined2 *)(in_ECX + 4) = 0;
        return;
      }
      **(undefined2 **)(in_ECX + 4) = 0;
      return;
    }
    if (uVar2 != 0) {
      if (*(uint *)(param_1 + 0x18) < 8) {
        param_1 = param_1 + 4;
      }
      else {
        param_1 = *(int *)(param_1 + 4);
      }
      puVar1 = (undefined4 *)(in_ECX + 4);
      _Dst = puVar1;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        _Dst = (undefined4 *)*puVar1;
      }
      _memcpy_s(_Dst,*(int *)(in_ECX + 0x18) * 2,(void *)(param_1 + param_2 * 2),uVar2 * 2);
      *(uint *)(in_ECX + 0x14) = uVar2;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar1 = (undefined4 *)*puVar1;
      }
      *(undefined2 *)(uVar2 * 2 + (int)puVar1) = 0;
    }
    return;
  }
  FUN_10084810(uVar2 + param_2,0xffffffff);
  FUN_10084810(0,param_2);
  return;
}


// ==== 100882b0 FUN_100882b0

void FUN_100882b0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eaef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_10087580(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10088300 FUN_10088300

void FUN_10088300(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  void *local_a0;
  undefined1 *puStack_9c;
  int local_98;
  undefined1 local_94 [140];
  uint local_8;
  
  puStack_9c = &LAB_101eaf28;
  local_a0 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_94;
  ExceptionList = &local_a0;
  local_98 = 0;
  FUN_1008d340();
  local_98._0_1_ = 1;
  iVar1 = FUN_1008d1c0(param_1);
  if (iVar1 == 0) {
    FUN_10002030();
    local_98 = (uint)local_98._1_3_ << 8;
    FUN_1008d540();
  }
  else {
    if (in_ECX[0x8e] != 0) {
      FUN_100867e0();
    }
    uVar2 = FUN_10090a50(iVar1);
    FUN_10087c90(uVar2);
    FUN_10090450(uVar2);
    FUN_1008d190();
    in_ECX[0x8e] = 1;
    (**(code **)(*in_ECX + 0x78))();
    local_98 = (uint)local_98._1_3_ << 8;
    FUN_1008d540();
  }
  ExceptionList = local_a0;
  __security_check_cookie(local_8 ^ (uint)local_94);
  return;
}


// ==== 10088404 Catch@10088404

void Catch_10088404(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088418 Catch@10088418

void Catch_10088418(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::LoadHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088440 FUN_10088440

void FUN_10088440(int param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  void *local_a0;
  undefined1 *puStack_9c;
  int local_98;
  undefined1 local_94 [140];
  uint local_8;
  
  puStack_9c = &LAB_101eaf58;
  local_a0 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_94;
  ExceptionList = &local_a0;
  local_98 = 0;
  FUN_1008d340();
  local_98._0_1_ = 1;
  if (param_1 == 0) {
    local_98 = (uint)local_98._1_3_ << 8;
    FUN_1008d540();
  }
  else {
    if (in_ECX[0x8e] != 0) {
      FUN_100867e0();
    }
    uVar1 = FUN_10090a50(param_1);
    FUN_10087c90(uVar1);
    FUN_10090450(uVar1);
    in_ECX[0x8e] = 1;
    (**(code **)(*in_ECX + 0x78))();
    local_98 = (uint)local_98._1_3_ << 8;
    FUN_1008d540();
  }
  ExceptionList = local_a0;
  __security_check_cookie(local_8 ^ (uint)local_94);
  return;
}


// ==== 1008851d Catch@1008851d

void Catch_1008851d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088531 Catch@10088531

void Catch_10088531(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::LoadHtmlFormString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088550 FUN_10088550

undefined4
FUN_10088550(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eaf80;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  FName::FName((FName *)&uStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100823c0(0x328,pUVar1);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_34 = 1;
    uStack_38 = param_12;
    piVar3 = (int *)FUN_10094b00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,param_10,param_11);
  }
  uStack_34 = 3;
  uStack_38 = 0;
  (**(code **)(*piVar3 + 0xc0))(param_1,param_4 + param_2,0,0,0);
  uVar4 = FUN_10060d40(piVar3,0x20a);
  FUN_1005c1e0(uVar4);
  FUN_10087f40(piVar3);
  ExceptionList = local_10;
  return 1;
}


// ==== 10088644 Catch@10088644

void Catch_10088644(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088658 Catch@10088658

void Catch_10088658(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterLinker");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088680 FUN_10088680

undefined4
FUN_10088680(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eafa0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  FName::FName((FName *)&uStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100823f0(0x328,pUVar1);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_34 = 0;
    uStack_38 = param_12;
    piVar3 = (int *)FUN_10094d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,param_10,param_11);
  }
  uStack_34 = 3;
  uStack_38 = 0;
  (**(code **)(*piVar3 + 0xc0))(param_1,param_4 + param_2,0,0,0);
  uVar4 = FUN_10060d40(piVar3,0x20a);
  FUN_1005c1e0(uVar4);
  FUN_10087f40(piVar3);
  ExceptionList = local_10;
  return 1;
}


// ==== 10088774 Catch@10088774

void Catch_10088774(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088788 Catch@10088788

void Catch_10088788(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100887b0 FUN_100887b0

void FUN_100887b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,ushort *param_8)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  FString local_48 [12];
  undefined1 *local_3c;
  undefined4 local_34;
  ushort local_2c [10];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eafc9;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_34 = param_7;
  local_8 = 0;
  uStack_60 = 0;
  local_3c = (undefined1 *)&uStack_64;
  local_18 = uStack_5c;
  FName::FName((FName *)&uStack_64,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_10082420(0x340,pUVar1);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_60 = 0;
    uStack_64 = local_34;
    piVar3 = (int *)FUN_10094ec0(param_5,param_6);
  }
  uStack_60 = 3;
  uStack_64 = 0;
  (**(code **)(*piVar3 + 0xc0))(param_1,param_2,param_3,param_4,0);
  uVar4 = FUN_10060d40(piVar3,0x202);
  FUN_1005c1e0(uVar4);
  if (param_8 != (ushort *)0x0) {
    iVar2 = appStrlen(param_8);
    appStrncpy(local_2c,param_8,3);
    iVar5 = appStrcmp(local_2c,(ushort *)PTR_DAT_1034ed44);
    if ((iVar5 == 0) && (param_8[iVar2 + -1] == 0x3b)) {
      iVar2 = appAtoi(param_8 + 2);
      FUN_10003cf0(iVar2);
    }
    else {
      FString::FString(local_48,param_8);
      local_8._0_1_ = 1;
      FUN_10003dc0(local_48);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_48);
    }
  }
  FUN_10087f40(piVar3);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1008890f Catch@1008890f

void Catch_1008890f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 10088923 Catch@10088923

void Catch_10088923(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088940 FUN_10088940

undefined4
FUN_10088940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eaff0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  FName::FName((FName *)&uStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_10082450(1000,pUVar1);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_34 = 0x100889a3;
    piVar3 = (int *)FUN_100951e0();
  }
  uStack_34 = 3;
  uStack_38 = 0;
  (**(code **)(*piVar3 + 0xc0))(param_1,param_2,param_3,param_4,0);
  uVar4 = FUN_10060d40(piVar3,0x202);
  FUN_1005c1e0(uVar4);
  FUN_1000ccc0(param_5);
  FUN_10087f40(piVar3);
  ExceptionList = local_10;
  return 1;
}


// ==== 10088a0c Catch@10088a0c

void Catch_10088a0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088a20 Catch@10088a20

void Catch_10088a20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterMultiEdit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088a40 FUN_10088a40

undefined4
FUN_10088a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FName::FName((FName *)&stack0xffffffc8,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_10082480(0x404,pUVar1);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_100952e0();
    if (piVar3 != (int *)0x0) goto LAB_10088acb;
  }
  appFailAssert("temp",".\\Src\\HtmlTranslator.cpp",0x8a8);
LAB_10088acb:
  (**(code **)(*piVar3 + 0xc0))(param_1,param_2,param_3,param_4,0);
  uVar4 = FUN_10060d40(piVar3,0x202);
  FUN_1005c1e0(uVar4);
  FUN_1000ccc0(param_5);
  piVar3[0x100] = param_7;
  FUN_100131e0(param_8);
  FUN_10087f40(piVar3);
  ExceptionList = local_10;
  return 1;
}


// ==== 10088b49 Catch@10088b49

void Catch_10088b49(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088b5d Catch@10088b5d

void Catch_10088b5d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterEdit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088b80 FUN_10088b80

undefined4 FUN_10088b80(short *param_1)

{
  short sVar1;
  short *psVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  psVar2 = &DAT_1036edc8;
  do {
    sVar1 = *param_1;
    *psVar2 = sVar1;
    param_1 = param_1 + 1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  if (DAT_1036edc8 != 0) {
    FUN_10088300(&DAT_1036edc8);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10088bfd Catch@10088bfd

void Catch_10088bfd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088c11 Catch@10088c11

void Catch_10088c11(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088c30 FUN_10088c30

void FUN_10088c30(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x25c) = 0;
  FUN_10088440(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10088c89 Catch@10088c89

void Catch_10088c89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088c9d Catch@10088c9d

void Catch_10088c9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::LoadHtmlFormString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088cc0 FUN_10088cc0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10088cc0(void)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  int in_ECX;
  short *psVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *local_c014;
  undefined1 *puStack_c010;
  undefined1 local_c00c [4];
  short local_c008 [24576];
  uint local_8;
  
  puStack_c010 = &LAB_101eb070;
  local_c014 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_c008;
  ExceptionList = &local_c014;
  local_c00c = (undefined1  [4])0x0;
  psVar5 = (short *)(in_ECX + 0x18274);
  psVar2 = local_c008;
  do {
    sVar1 = *psVar5;
    *psVar2 = sVar1;
    psVar5 = psVar5 + 1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  psVar5 = (short *)(in_ECX + 0x1c274);
  psVar2 = psVar5;
  if (*psVar5 != 0) {
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar3 = (int)psVar2 - (int)psVar5;
    puVar7 = (undefined4 *)(local_c00c + 2);
    do {
      psVar2 = (short *)((int)puVar7 + 2);
      puVar7 = (undefined4 *)((int)puVar7 + 2);
    } while (*psVar2 != 0);
    psVar2 = psVar5;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *(undefined4 *)psVar2;
      psVar2 = psVar2 + 2;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar7 = (char)*psVar2;
      psVar2 = (short *)((int)psVar2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  psVar2 = (short *)(in_ECX + 0x20274);
  psVar4 = psVar2;
  if (*psVar2 != 0) {
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    uVar3 = (int)psVar4 - (int)psVar2;
    puVar7 = (undefined4 *)(local_c00c + 2);
    do {
      psVar4 = (short *)((int)puVar7 + 2);
      puVar7 = (undefined4 *)((int)puVar7 + 2);
    } while (*psVar4 != 0);
    psVar4 = psVar2;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *(undefined4 *)psVar4;
      psVar4 = psVar4 + 2;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar7 = (char)*psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  FUN_10088c30(local_c008);
  *(undefined4 *)(in_ECX + 0x26c) = 0;
  *(undefined2 *)(in_ECX + 0x18274) = 0;
  *psVar5 = 0;
  *psVar2 = 0;
  local_c00c = (undefined1  [4])0xffffffff;
  ExceptionList = local_c014;
  __security_check_cookie(local_8 ^ (uint)local_c008);
  return;
}


// ==== 10088e0e Catch@10088e0e

void Catch_10088e0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10088e22 Catch@10088e22

void Catch_10088e22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::MergeListBuff");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088e40 FUN_10088e40

void FUN_10088e40(short *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb0a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_10088440(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10088ea6 Catch@10088ea6

void Catch_10088ea6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088eba Catch@10088eba

void Catch_10088eba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNPCHtmlViewer::LoadHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088ee0 FUN_10088ee0

void FUN_10088ee0(short *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb0c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_10088300(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10088f46 Catch@10088f46

void Catch_10088f46(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10088f5a Catch@10088f5a

void Catch_10088f5a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNPCHtmlViewer::LoadHtmlFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10088f80 FUN_10088f80

void FUN_10088f80(void)

{
  short *psVar1;
  int in_ECX;
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  ushort local_208 [256];
  uint local_8;
  
  puStack_210 = &LAB_101eb0e0;
  local_214 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_208;
  ExceptionList = &local_214;
  local_20c = 0;
  psVar1 = (short *)(**(code **)(**(int **)(in_ECX + 0x1d4) + 0x1f8))();
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    local_208[0] = 0;
    appSprintf(local_208,(ushort *)L"..\\test_html\\%s",psVar1);
    FUN_10088ee0(local_208);
  }
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 1008902d Catch@1008902d

void Catch_1008902d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10089041 Catch@10089041

void Catch_10089041(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTestHtmlViewer::OnTestBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10089060 FUN_10089060

void FUN_10089060(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 0x18);
  puVar6 = (undefined4 *)(in_ECX + 4);
  puVar4 = puVar6;
  if (7 < uVar1) {
    puVar4 = (undefined4 *)*puVar6;
  }
  iVar2 = *(int *)(in_ECX + 0x14) * 2;
  puVar4 = (undefined4 *)(iVar2 + (int)puVar4);
  if (puVar4 == (undefined4 *)0x0) {
LAB_100890a6:
    FUN_101c238d();
  }
  else {
    puVar5 = puVar6;
    if (7 < uVar1) {
      puVar5 = (undefined4 *)*puVar6;
    }
    if (puVar4 < puVar5) goto LAB_100890a6;
    puVar5 = puVar6;
    if (7 < uVar1) {
      puVar5 = (undefined4 *)*puVar6;
    }
    if ((undefined4 *)(iVar2 + (int)puVar5) < puVar4) goto LAB_100890a6;
  }
  uVar1 = *(uint *)(in_ECX + 0x18);
  puVar5 = puVar6;
  if (7 < uVar1) {
    puVar5 = (undefined4 *)*puVar6;
  }
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = puVar6;
    if (7 < uVar1) {
      puVar3 = (undefined4 *)*puVar6;
    }
    if (puVar3 <= puVar5) {
      if (7 < uVar1) {
        puVar6 = (undefined4 *)*puVar6;
      }
      if (puVar5 <= (undefined4 *)((int)puVar6 + *(int *)(in_ECX + 0x14) * 2)) goto LAB_100890e2;
    }
  }
  FUN_101c238d();
LAB_100890e2:
  FUN_100880f0(local_8,in_ECX,puVar5,in_ECX,puVar4);
  return;
}


// ==== 10089100 FUN_10089100

void FUN_10089100(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x18);
  puVar3 = (undefined4 *)(in_ECX + 4);
  puVar2 = puVar3;
  if (7 < uVar1) {
    puVar2 = (undefined4 *)*puVar3;
  }
  if (puVar2 <= param_1) {
    puVar2 = puVar3;
    if (7 < uVar1) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (param_1 < (undefined4 *)((int)puVar2 + *(int *)(in_ECX + 0x14) * 2)) {
      if (7 < uVar1) {
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_100881c0(in_ECX,(int)param_1 - (int)puVar3 >> 1,param_2);
      return;
    }
  }
  if (0x7ffffffe < param_2) {
    FUN_101c0f31();
  }
  if (*(uint *)(in_ECX + 0x18) < param_2) {
    FUN_100873e0(param_2,*(undefined4 *)(in_ECX + 0x14));
  }
  else if (param_2 == 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined2 *)puVar3 = 0;
    return;
  }
  if (param_2 != 0) {
    puVar2 = puVar3;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      puVar2 = (undefined4 *)*puVar3;
    }
    _memcpy_s(puVar2,*(uint *)(in_ECX + 0x18) * 2,param_1,param_2 * 2);
    *(uint *)(in_ECX + 0x14) = param_2;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined2 *)(param_2 * 2 + (int)puVar3) = 0;
  }
  return;
}


// ==== 100891e0 FUN_100891e0

void FUN_100891e0(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  
  uVar1 = (uint)param_1;
  if ((*(uint *)(in_ECX + 0x14) < param_1) || (*(uint *)((int)param_3 + 0x14) < param_4)) {
    FUN_101c0f70();
  }
  uVar2 = *(int *)(in_ECX + 0x14) - (int)param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  uVar3 = *(int *)((int)param_3 + 0x14) - (int)param_4;
  uVar2 = (uint)param_5;
  if (uVar3 < param_5) {
    uVar2 = uVar3;
  }
  if (-uVar2 - 1 <= *(int *)(in_ECX + 0x14) - param_2) {
    FUN_101c0f31();
  }
  uVar3 = *(uint *)(in_ECX + 0x14);
  uVar10 = (uVar3 - param_2) + uVar2;
  iVar6 = (uVar3 - (int)param_1) - param_2;
  if (uVar3 < uVar10) {
    if (0x7ffffffe < uVar10) {
      FUN_101c0f31();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar10) {
      FUN_100873e0(uVar10,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar10 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (*(uint *)(in_ECX + 0x18) < 8) {
        puVar4 = (undefined2 *)(in_ECX + 4);
      }
      else {
        puVar4 = *(undefined2 **)(in_ECX + 4);
      }
      *puVar4 = 0;
    }
  }
  puVar11 = (undefined4 *)(in_ECX + 4);
  param_5 = puVar11;
  if ((undefined4 *)in_ECX == param_3) {
    param_3 = puVar11;
    if (param_2 < uVar2) {
      if (param_1 < param_4) {
        uVar3 = (int)param_1 + param_2;
        uVar9 = *(uint *)(in_ECX + 0x18);
        if (param_4 < uVar3) {
          puVar8 = puVar11;
          if (7 < uVar9) {
            puVar8 = (undefined4 *)*puVar11;
            param_5 = (undefined4 *)*puVar11;
          }
          FUN_10083a50((int)param_5 + (int)param_1 * 2,uVar9 - (int)param_1,
                       (int)puVar8 + (int)param_4 * 2,param_2);
          puVar8 = puVar11;
          param_5 = puVar11;
          if (7 < *(uint *)(in_ECX + 0x18)) {
            puVar8 = (undefined4 *)*puVar11;
            param_5 = (undefined4 *)*puVar11;
          }
          FUN_10083a50((int)param_5 + ((int)param_1 + uVar2) * 2,
                       (*(uint *)(in_ECX + 0x18) - (int)param_1) - uVar2,(int)puVar8 + uVar3 * 2,
                       iVar6);
          puVar8 = puVar11;
          param_1 = puVar11;
          if (7 < *(uint *)(in_ECX + 0x18)) {
            puVar8 = (undefined4 *)*puVar11;
            param_1 = (undefined4 *)*puVar11;
          }
          uVar9 = uVar2 - param_2;
          iVar5 = (*(uint *)(in_ECX + 0x18) - uVar1) - param_2;
          iVar6 = (int)param_1 + ((int)param_4 + uVar2) * 2;
          iVar12 = (int)puVar8 + uVar3 * 2;
        }
        else {
          puVar8 = puVar11;
          if (7 < uVar9) {
            puVar8 = (undefined4 *)*puVar11;
            param_5 = (undefined4 *)*puVar11;
          }
          FUN_10083a50((int)param_5 + ((int)param_1 + uVar2) * 2,(uVar9 - (int)param_1) - uVar2,
                       (int)puVar8 + uVar3 * 2,iVar6);
          puVar8 = puVar11;
          if (7 < *(uint *)(in_ECX + 0x18)) {
            puVar8 = (undefined4 *)*puVar11;
            param_3 = (undefined4 *)*puVar11;
          }
          iVar6 = (int)param_3 + (((int)param_4 - param_2) + uVar2) * 2;
          iVar5 = *(uint *)(in_ECX + 0x18) - (int)param_1;
          iVar12 = (int)puVar8 + (int)param_1 * 2;
          uVar9 = uVar2;
        }
        FUN_10083a50(iVar12,iVar5,iVar6,uVar9);
      }
      else {
        puVar8 = puVar11;
        if (7 < *(uint *)(in_ECX + 0x18)) {
          puVar8 = (undefined4 *)*puVar11;
          param_3 = (undefined4 *)*puVar11;
        }
        _memmove_s((void *)((int)param_3 + ((int)param_1 + uVar2) * 2),
                   ((*(uint *)(in_ECX + 0x18) - (int)param_1) - uVar2) * 2,
                   (void *)((int)puVar8 + (param_2 + (int)param_1) * 2),iVar6 * 2);
        puVar7 = puVar11;
        puVar8 = puVar11;
        if (7 < *(uint *)(in_ECX + 0x18)) {
          puVar7 = (undefined4 *)*puVar11;
          puVar8 = (undefined4 *)*puVar11;
        }
        _memmove_s((void *)((int)puVar7 + (int)param_1 * 2),
                   (*(uint *)(in_ECX + 0x18) - (int)param_1) * 2,
                   (void *)((int)puVar8 + (int)param_4 * 2),uVar2 * 2);
      }
    }
    else {
      puVar8 = puVar11;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar8 = (undefined4 *)*puVar11;
        param_3 = (undefined4 *)*puVar11;
      }
      _memmove_s((void *)((int)param_3 + (int)param_1 * 2),
                 (*(uint *)(in_ECX + 0x18) - (int)param_1) * 2,
                 (void *)((int)puVar8 + (int)param_4 * 2),uVar2 * 2);
      puVar8 = puVar11;
      param_4 = puVar11;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar8 = (undefined4 *)*puVar11;
        param_4 = (undefined4 *)*puVar11;
      }
      _memmove_s((void *)((int)param_4 + ((int)param_1 + uVar2) * 2),
                 ((*(uint *)(in_ECX + 0x18) - (int)param_1) - uVar2) * 2,
                 (void *)((int)puVar8 + (param_2 + (int)param_1) * 2),iVar6 * 2);
    }
  }
  else {
    puVar8 = puVar11;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      puVar8 = (undefined4 *)*puVar11;
      param_5 = (undefined4 *)*puVar11;
    }
    _memmove_s((void *)((int)param_5 + ((int)param_1 + uVar2) * 2),
               ((*(uint *)(in_ECX + 0x18) - (int)param_1) - uVar2) * 2,
               (void *)((int)puVar8 + (param_2 + (int)param_1) * 2),iVar6 * 2);
    if (*(uint *)((int)param_3 + 0x18) < 8) {
      iVar6 = (int)param_3 + 4;
    }
    else {
      iVar6 = *(int *)((int)param_3 + 4);
    }
    puVar8 = puVar11;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      puVar8 = (undefined4 *)*puVar11;
    }
    _memcpy_s((void *)((int)puVar8 + (int)param_1 * 2),(*(uint *)(in_ECX + 0x18) - (int)param_1) * 2
              ,(void *)(iVar6 + (int)param_4 * 2),uVar2 * 2);
  }
  *(uint *)(in_ECX + 0x14) = uVar10;
  if (7 < *(uint *)(in_ECX + 0x18)) {
    puVar11 = (undefined4 *)*puVar11;
  }
  *(undefined2 *)((int)puVar11 + uVar10 * 2) = 0;
  return;
}


// ==== 100895d0 FUN_100895d0

void FUN_100895d0(uint param_1,uint param_2,void *param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar4 = *(uint *)(in_ECX + 0x18);
  if (uVar4 < 8) {
    pvVar2 = (void *)(in_ECX + 4);
  }
  else {
    pvVar2 = *(void **)(in_ECX + 4);
  }
  if (pvVar2 <= param_3) {
    puVar3 = (undefined4 *)(in_ECX + 4);
    puVar6 = puVar3;
    if (7 < uVar4) {
      puVar6 = (undefined4 *)*puVar3;
    }
    if (param_3 < (void *)((int)puVar6 + *(int *)(in_ECX + 0x14) * 2)) {
      if (7 < uVar4) {
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_100891e0(param_1,param_2,in_ECX,(int)param_3 - (int)puVar3 >> 1,param_4);
      return;
    }
  }
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_101c0f70();
  }
  uVar4 = *(int *)(in_ECX + 0x14) - param_1;
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  if (-param_4 - 1 <= *(int *)(in_ECX + 0x14) - param_2) {
    FUN_101c0f31();
  }
  iVar5 = (*(int *)(in_ECX + 0x14) - param_1) - param_2;
  if (param_4 < param_2) {
    puVar3 = (undefined4 *)(in_ECX + 4);
    puVar6 = puVar3;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      puVar6 = (undefined4 *)*puVar3;
      puVar3 = (undefined4 *)*puVar3;
    }
    _memmove_s((void *)((int)puVar3 + (param_1 + param_4) * 2),
               ((*(uint *)(in_ECX + 0x18) - param_1) - param_4) * 2,
               (void *)((int)puVar6 + (param_1 + param_2) * 2),iVar5 * 2);
  }
  if ((param_4 != 0) || (param_2 != 0)) {
    uVar4 = (param_4 - param_2) + *(int *)(in_ECX + 0x14);
    if (0x7ffffffe < uVar4) {
      FUN_101c0f31();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar4) {
      FUN_100873e0(uVar4,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar4 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (*(uint *)(in_ECX + 0x18) < 8) {
        *(undefined2 *)(in_ECX + 4) = 0;
        return;
      }
      **(undefined2 **)(in_ECX + 4) = 0;
      return;
    }
    if (uVar4 != 0) {
      if (param_2 < param_4) {
        if (*(uint *)(in_ECX + 0x18) < 8) {
          iVar1 = in_ECX + 4;
          iVar7 = in_ECX + 4;
        }
        else {
          iVar1 = *(int *)(in_ECX + 4);
          iVar7 = *(int *)(in_ECX + 4);
        }
        _memmove_s((void *)(iVar7 + (param_1 + param_4) * 2),
                   ((*(uint *)(in_ECX + 0x18) - param_1) - param_4) * 2,
                   (void *)(iVar1 + (param_1 + param_2) * 2),iVar5 * 2);
      }
      if (*(uint *)(in_ECX + 0x18) < 8) {
        iVar5 = in_ECX + 4;
      }
      else {
        iVar5 = *(int *)(in_ECX + 4);
      }
      _memcpy_s((void *)(iVar5 + param_1 * 2),(*(uint *)(in_ECX + 0x18) - param_1) * 2,param_3,
                param_4 * 2);
      *(uint *)(in_ECX + 0x14) = uVar4;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        *(undefined2 *)(*(int *)(in_ECX + 4) + uVar4 * 2) = 0;
        return;
      }
      *(undefined2 *)(in_ECX + 4 + uVar4 * 2) = 0;
    }
  }
  return;
}


// ==== 100897e0 FUN_100897e0

void FUN_100897e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000b680(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCHtmlComboBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10089840 FUN_10089840

void FUN_10089840(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eb148;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlComboBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1000b730(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100898a0 FUN_100898a0

void FUN_100898a0(byte param_1)

{
  void *in_ECX;
  
  FUN_10089840();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x338);
  }
  return;
}


// ==== 100898d0 FUN_100898d0

void FUN_100898d0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101eb18e;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlViewer::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_10087580(uVar1);
  local_4 = 0xffffffff;
  FUN_10031a70();
  ExceptionList = local_c;
  return;
}


// ==== 10089950 FUN_10089950

void FUN_10089950(byte param_1)

{
  void *in_ECX;
  
  FUN_100898d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x25c);
  }
  return;
}


// ==== 10089980 FUN_10089980

void FUN_10089980(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eb1b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCNPCHtmlViewer::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100899e0 FUN_100899e0

void FUN_100899e0(byte param_1)

{
  void *in_ECX;
  
  FUN_10089980();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d4);
  }
  return;
}


// ==== 10089a10 FUN_10089a10

void FUN_10089a10(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  uint uStack_38;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101eb1fe;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  FUN_10044de0();
  local_8 = 0;
  *in_ECX = NCHtmlViewer::vftable;
  in_ECX[0x87] = 0;
  local_1c = in_ECX + 0x89;
  FUN_100872b0();
  in_ECX[0x90] = 0;
  in_ECX[0x8f] = 0;
  in_ECX[0x91] = 0;
  in_ECX[0x92] = 0;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),3);
  if (DAT_1036efcc < 1) {
    local_18 = 0;
    FUN_100d9a30(&local_18);
  }
  if (DAT_1036efd8 < 1) {
    local_1c = (undefined4 *)0x0;
    FUN_100d9a30(&local_1c);
  }
  in_ECX[0x8e] = 0;
  in_ECX[0x90] = 0;
  in_ECX[0x8f] = 0;
  in_ECX[0x81] = 0x10;
  in_ECX[0x93] = 0;
  in_ECX[0x86] = 0;
  in_ECX[0x88] = 0;
  uVar1 = FUN_1003f630(L"L2UI_CH3.npcwnd.npc1_back_alpha01",1);
  in_ECX[0x94] = uVar1;
  *(undefined1 *)(in_ECX + 0x95) = 0;
  in_ECX[0x85] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10089b21 Catch@10089b21

void Catch_10089b21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10089b35 Catch@10089b35

void Catch_10089b35(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::NCHtmlViewer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10089b60 FUN_10089b60

void FUN_10089b60(undefined4 param_1)

{
  undefined4 *in_ECX;
  uint uStack_38;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101eb23e;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  FUN_10044de0();
  local_8 = 0;
  *in_ECX = NCHtmlViewer::vftable;
  local_1c = in_ECX + 0x89;
  FUN_100872b0();
  in_ECX[0x90] = 0;
  in_ECX[0x8f] = 0;
  in_ECX[0x91] = 0;
  in_ECX[0x92] = 0;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),3);
  if (DAT_1036efcc < 1) {
    local_18 = 0;
    FUN_100d9a30(&local_18);
  }
  if (DAT_1036efd8 < 1) {
    local_1c = (undefined4 *)0x0;
    FUN_100d9a30(&local_1c);
  }
  in_ECX[0x8e] = 0;
  in_ECX[0x90] = 0;
  in_ECX[0x8f] = 0;
  in_ECX[0x81] = 0x10;
  in_ECX[0x93] = 0;
  in_ECX[0x86] = 0;
  in_ECX[0x87] = 0;
  in_ECX[0x88] = param_1;
  in_ECX[0x85] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10089c5c Catch@10089c5c

void Catch_10089c5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10089c70 Catch@10089c70

void Catch_10089c70(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::NCHtmlViewer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10089c90 FUN_10089c90

undefined4
FUN_10089c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb260;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  FName::FName((FName *)&uStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100824b0(0x338,pUVar1);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_34 = 0x10089cf3;
    piVar3 = (int *)FUN_100897e0();
  }
  uStack_34 = 3;
  uStack_38 = 0;
  (**(code **)(*piVar3 + 0xc0))(param_1,param_2,param_3,param_4,0);
  uVar4 = FUN_10060d40(piVar3,0x12);
  FUN_1005c1e0(uVar4);
  FUN_1000ccc0(param_5);
  FUN_10090e00(param_6,param_7);
  FUN_10087f40(piVar3);
  ExceptionList = local_10;
  return 1;
}


// ==== 10089d68 Catch@10089d68

void Catch_10089d68(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10089d7c Catch@10089d7c

void Catch_10089d7c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterComboBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10089da0 FUN_10089da0

void FUN_10089da0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10089a10(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCTutorialHtmlViewer::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10089e00 FUN_10089e00

void FUN_10089e00(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eb2b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTutorialHtmlViewer::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100898d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10089e60 FUN_10089e60

void FUN_10089e60(byte param_1)

{
  void *in_ECX;
  
  FUN_10089e00();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x25c);
  }
  return;
}


// ==== 10089e90 FUN_10089e90

void FUN_10089e90(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101eb2e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10089a10();
  *in_ECX = NCBBSHtmlViewer::vftable;
  in_ECX[0x99] = 0;
  in_ECX[0x9a] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x97] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10089f07 Catch@10089f07

void Catch_10089f07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10089f1b Catch@10089f1b

void Catch_10089f1b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::NCBBSHtmlViewer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10089f40 FUN_10089f40

void FUN_10089f40(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eb318;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCBBSHtmlViewer::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100898d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10089fa0 FUN_10089fa0

void FUN_10089fa0(byte param_1)

{
  void *in_ECX;
  
  FUN_10089f40();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x24274);
  }
  return;
}


// ==== 10089fd0 FUN_10089fd0

void FUN_10089fd0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCNPCHtmlViewer::vftable;
  in_ECX[0x74] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1008a030 FUN_1008a030

undefined4 FUN_1008a030(void)

{
  int iVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  int *piVar4;
  int in_ECX;
  wchar_t *pwStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined8 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb370;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_4c = (undefined4 *)0x1008a068;
  FUN_10061b40();
  local_34 = 0;
  local_38 = 0;
  local_30 = 0.0;
  local_2c = 0;
  puStack_4c = &local_38;
  uStack_50 = 0x1008a081;
  FUN_1005d0a0();
  puStack_4c = (undefined4 *)0x0;
  local_20 = CONCAT44(&uStack_50,(undefined4)local_20);
  uStack_58 = 0x1008a08f;
  FName::FName((FName *)&uStack_50,0);
  UObject::GetTransientPackage();
  uStack_58 = 0x350;
  uStack_5c = 0x1008a0a2;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    puStack_4c = (undefined4 *)0x0;
    uStack_50 = 0;
    uStack_58 = 0x1008a0b4;
    iVar1 = FUN_1001c510();
  }
  *(int *)(in_ECX + 0xc0) = iVar1;
  *(undefined4 *)(in_ECX + 200) = 0xf0f01412;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf0f01412;
  puStack_4c = (undefined4 *)0x3;
  uStack_50 = 0;
  uStack_58 = 0x14;
  local_20 = (longlong)ROUND(local_30);
  uStack_5c = (undefined4)local_20;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0x1008a106;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_68 = 2;
  pwStack_6c = *(wchar_t **)(in_ECX + 0xc0);
  uStack_68 = FUN_10060d40();
  pwStack_6c = L"Ū䁨⓷謐\xe8ce唀\xfffb蚉ǐ";
  FUN_1005c1e0();
  uStack_68 = 1;
  pwStack_6c = L"L2UI.etcwnd.NPCHtml_BACK";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d0) = uVar2;
  uStack_68 = 0;
  local_20 = CONCAT44(&pwStack_6c,(undefined4)local_20);
  FName::FName((FName *)&pwStack_6c,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_100824e0(0x25c,pUVar3);
  if (iVar1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_68 = 0x1008a15f;
    piVar4 = (int *)FUN_10089a10();
  }
  *(int **)(in_ECX + 0x1cc) = piVar4;
  uStack_68 = 3;
  pwStack_6c = (wchar_t *)0x0;
  local_20._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) - 37.0);
  uVar2 = (undefined4)local_20;
  local_20 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 14.0);
  (**(code **)(*piVar4 + 0xc0))(7,0x1e,(undefined4)local_20,uVar2,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1cc),2);
  FUN_1005c1e0(uVar2);
  FUN_100810b0(*(undefined4 *)(in_ECX + 0xb8));
  ExceptionList = local_10;
  return 1;
}


// ==== 1008a213 Catch@1008a213

void Catch_1008a213(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1008a227 Catch@1008a227

void Catch_1008a227(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNPCHtmlViewer::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008a250 FUN_1008a250

void FUN_1008a250(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10089fd0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCTestHtmlViewer::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1008a2b0 FUN_1008a2b0

void FUN_1008a2b0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eb3c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTestHtmlViewer::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10089980(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1008a310 FUN_1008a310

void FUN_1008a310(byte param_1)

{
  void *in_ECX;
  
  FUN_1008a2b0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1dc);
  }
  return;
}


// ==== 1008a340 FUN_1008a340

undefined4 FUN_1008a340(void)

{
  int iVar1;
  int *piVar2;
  UPackage *pUVar3;
  undefined4 uVar4;
  int in_ECX;
  FString *extraout_ECX;
  uint uVar5;
  FString *pFStack_70;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  FString local_3c [20];
  FString local_28 [4];
  undefined8 local_24;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb424;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  uStack_50 = 0x1008a37b;
  FUN_1008a030();
  uStack_50 = 0;
  local_24 = CONCAT44(&uStack_54,(undefined4)local_24);
  FName::FName((FName *)&uStack_54,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_50 = 0;
    uStack_54 = 0;
    piVar2 = (int *)FUN_1001a820();
  }
  *(int **)(in_ECX + 0x1d4) = piVar2;
  uStack_50 = 3;
  uStack_54 = 0;
  local_24 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) - 20.0);
  (**(code **)(*piVar2 + 0xc0))();
  pFStack_70 = *(FString **)(in_ECX + 0x1d4);
  FUN_10060d40();
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x13c))();
  pFStack_70 = (FString *)0x1008a42d;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_70,(undefined4)local_24);
  pFStack_70 = extraout_ECX;
  FName::FName((FName *)&pFStack_70,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_1000a130(0x33c,pUVar3);
  if (iVar1 == 0) {
    uVar4 = 0;
    uVar5 = local_1c;
  }
  else {
    pFStack_70 = (FString *)0x1008a461;
    FString::FString(local_3c,(ushort *)L"Default.WhiteTexture");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    pFStack_70 = (FString *)0x1008a47a;
    FString::FString(local_28,(ushort *)L"Default.WhiteTexture");
    local_8 = 2;
    local_1c = 3;
    pFStack_70 = local_3c;
    uVar4 = FUN_10006980(local_28);
    uVar5 = 3;
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar4;
  local_8 = 1;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    local_1c = uVar5;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar5 & 1) != 0) {
    local_1c = uVar5 & 0xfffffffe;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xf0f01413;
  pFStack_70 = (FString *)0x0;
  local_24 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) - 20.0);
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))(0xc0,(undefined4)local_24,0x10,0x10,0);
  uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d8),2);
  FUN_1005c1e0(uVar4);
  ExceptionList = local_10;
  return 1;
}


// ==== 1008a568 Catch@1008a568

void Catch_1008a568(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1008a57c Catch@1008a57c

void Catch_1008a57c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTestHtmlViewer::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008a5a0 FUN_1008a5a0

void FUN_1008a5a0(short *param_1)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 7;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_10089100(param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return;
}


// ==== 1008a5e0 FUN_1008a5e0

void FUN_1008a5e0(undefined4 param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_3;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_100895d0(param_1,param_2,param_3,(int)psVar2 - (int)(param_3 + 1) >> 1);
  return;
}


// ==== 1008a670 FUN_1008a670

void FUN_1008a670(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  int in_ECX;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uStack_54;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb440;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10080b10(param_1);
  iVar1 = *(int *)(in_ECX + 0x58);
  if ((iVar1 == 1) || (iVar1 == 8)) {
    FUN_10082510(&local_24);
    local_44[0] = 0;
    uVar7 = 0;
    if (*(int *)(in_ECX + 0x18) != 0) {
      puVar2 = (undefined4 *)FUN_10082510(local_44);
      local_44[0] = *puVar2;
      uVar7 = puVar2[1];
      *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x48);
      local_3c = local_44[0];
      local_38 = uVar7;
    }
    uVar8 = local_44[0];
    puVar3 = FString::operator*((FString *)(in_ECX + 0x80));
    puVar4 = FString::operator*((FString *)(in_ECX + 0x5c));
    FUN_10088550(local_24,local_20,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),
                 *(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),
                 *(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x20),uVar8,uVar7,puVar4,
                 puVar3);
  }
  else if (iVar1 == 2) {
    FUN_10082510(&local_24);
    local_34 = 0;
    uVar7 = 0;
    if (*(int *)(in_ECX + 0x18) != 0) {
      puVar2 = (undefined4 *)FUN_10082510(local_44);
      local_34 = *puVar2;
      uVar7 = puVar2[1];
      *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x48);
      local_2c = local_34;
      local_28 = uVar7;
    }
    uVar8 = local_34;
    puVar3 = FString::operator*((FString *)(in_ECX + 0x80));
    puVar4 = FString::operator*((FString *)(in_ECX + 0x5c));
    FUN_10088680(local_24,local_20,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),
                 *(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),
                 *(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x20),uVar8,uVar7,puVar4,
                 puVar3);
  }
  else if (iVar1 == 3) {
    FUN_10082510(&local_24);
    puVar3 = FString::operator*((FString *)(in_ECX + 0x80));
    puVar4 = FString::operator*((FString *)(in_ECX + 0x5c));
    puVar5 = FString::operator*((FString *)(in_ECX + 0x74));
    puVar6 = FString::operator*((FString *)(in_ECX + 0x68));
    FUN_100887b0(local_24,local_20,*(undefined4 *)(in_ECX + 0x24),*(int *)(in_ECX + 0x28) + -6,
                 puVar6,puVar5,puVar4,puVar3);
  }
  else if (iVar1 == 4) {
    FUN_10082510(&local_24);
    puVar3 = FString::operator*((FString *)(in_ECX + 0x80));
    FUN_10088940(local_24,local_20,*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),
                 puVar3);
  }
  else if (iVar1 == 6) {
    puVar3 = FString::operator*((FString *)(in_ECX + 0x5c));
    uVar7 = FUN_10081140(puVar3);
    *(undefined4 *)(in_ECX + 0xa0) = uVar7;
  }
  else if (iVar1 == 5) {
    FUN_10082510(&local_24);
    uVar7 = *(undefined4 *)(in_ECX + 0x98);
    puVar3 = FString::operator*((FString *)(in_ECX + 0x5c));
    uVar8 = *(undefined4 *)(in_ECX + 0xa4);
    puVar4 = FString::operator*((FString *)(in_ECX + 0x80));
    FUN_10088a40(local_24,local_20,*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),
                 puVar4,uVar8,puVar3,uVar7);
  }
  else if (iVar1 == 7) {
    FUN_10082510(&local_24);
    puVar3 = FString::operator*((FString *)(in_ECX + 0x8c));
    puVar4 = FString::operator*((FString *)(in_ECX + 0x5c));
    puVar5 = FString::operator*((FString *)(in_ECX + 0x80));
    FUN_10089c90(local_24,local_20,*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),
                 puVar5,puVar4,puVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1008a93e Catch@1008a93e

void Catch_1008a93e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1008a952 Catch@1008a952

void Catch_1008a952(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::AlignPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008a970 FUN_1008a970

void FUN_1008a970(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  undefined4 ****ppppuVar5;
  short *psVar6;
  int in_ECX;
  int iVar7;
  uint uStack_58;
  int local_38 [2];
  undefined4 ***local_30 [5];
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101eb468;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38[0] = 0;
  local_18 = uStack_58;
  FUN_1008a5a0(in_ECX + 0x274);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = FUN_10064af0(in_ECX + 0x4274,local_38);
  for (iVar7 = 0; (local_38[0] != 0 && (iVar7 < 0x12)); iVar7 = iVar7 + 1) {
    ppppuVar5 = (undefined4 ****)local_30[0];
    if (local_1c < 8) {
      ppppuVar5 = local_30;
    }
    iVar3 = FUN_101c33ab(ppppuVar5,(&PTR_u_<___ROOT_BID__>_1034ed48)[iVar7]);
    ppppuVar5 = (undefined4 ****)local_30[0];
    if (local_1c < 8) {
      ppppuVar5 = local_30;
    }
    iVar3 = iVar3 - (int)ppppuVar5 >> 1;
    if (0 < iVar3) {
      psVar4 = (short *)(&PTR_u_<___ROOT_BID__>_1034ed48)[iVar7];
      psVar6 = psVar4 + 1;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      FUN_1008a5e0(iVar3,(int)psVar4 - (int)psVar6 >> 1,local_38[0]);
    }
    uVar2 = FUN_10064af0(uVar2,local_38);
  }
  ppppuVar5 = (undefined4 ****)local_30[0];
  if (local_1c < 8) {
    ppppuVar5 = local_30;
  }
  iVar7 = FUN_101c33ab(ppppuVar5,PTR_u_<___COMMENT__>_1034ed90);
  ppppuVar5 = (undefined4 ****)local_30[0];
  if (local_1c < 8) {
    ppppuVar5 = local_30;
  }
  iVar7 = iVar7 - (int)ppppuVar5 >> 1;
  if (0 < iVar7) {
    psVar6 = (short *)PTR_u_<___COMMENT__>_1034ed90;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    FUN_1008a5e0(iVar7,(int)psVar6 - (int)(PTR_u_<___COMMENT__>_1034ed90 + 2) >> 1,in_ECX + 0x8274);
  }
  ppppuVar5 = (undefined4 ****)local_30[0];
  if (local_1c < 8) {
    ppppuVar5 = local_30;
  }
  iVar7 = FUN_101c33ab(ppppuVar5,PTR_u_<___THREAD__>_1034ed94);
  ppppuVar5 = (undefined4 ****)local_30[0];
  if (local_1c < 8) {
    ppppuVar5 = local_30;
  }
  iVar7 = iVar7 - (int)ppppuVar5 >> 1;
  if (0 < iVar7) {
    psVar6 = (short *)PTR_u_<___THREAD__>_1034ed94;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    FUN_1008a5e0(iVar7,(int)psVar6 - (int)(PTR_u_<___THREAD__>_1034ed94 + 2) >> 1,in_ECX + 0xc274);
  }
  if (local_1c < 8) {
    local_30[0] = local_30;
  }
  FUN_10088c30(local_30[0]);
  FUN_10089060();
  *(undefined4 *)(in_ECX + 0x264) = 0;
  *(undefined2 *)(in_ECX + 0x274) = 0;
  *(undefined2 *)(in_ECX + 0x4274) = 0;
  *(undefined2 *)(in_ECX + 0x8274) = 0;
  *(undefined2 *)(in_ECX + 0xc274) = 0;
  local_8 = local_8 & 0xffffff00;
  FUN_10087550();
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1008ab81 Catch@1008ab81

void Catch_1008ab81(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_102a47f0);
}


// ==== 1008ab95 Catch@1008ab95

void Catch_1008ab95(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::MergeReadBuff");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008abc0 FUN_1008abc0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1008abc0(void)

{
  wchar_t wVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  wchar_t *pwVar6;
  int in_ECX;
  int iVar7;
  ushort *puVar8;
  wchar_t *pwVar9;
  undefined4 ***pppuVar10;
  wchar_t *pwVar11;
  bool bVar12;
  uint local_c07c;
  int local_c03c;
  ushort *local_c038;
  undefined1 *local_c034;
  void *local_c030;
  undefined1 *puStack_c02c;
  int local_c028;
  undefined1 local_c024 [4];
  undefined4 **local_c020 [5];
  uint local_c00c;
  ushort local_c008 [8192];
  ushort local_8008 [8192];
  ushort local_4008 [8192];
  uint local_8;
  
  puStack_c02c = &LAB_101eb4a8;
  local_c030 = ExceptionList;
  local_c07c = DAT_103554c4 ^ (uint)local_c024;
  local_c034 = (undefined1 *)&local_c07c;
  ExceptionList = &local_c030;
  local_c028 = 0;
  local_c038 = (ushort *)0x0;
  local_c03c = 0;
  local_8 = local_c07c;
  FUN_1008a5a0(in_ECX + 0x10274);
  local_c028 = CONCAT31(local_c028._1_3_,1);
  uVar3 = FUN_10064af0(in_ECX + 0x14274,&local_c038);
  for (; (local_c038 != (ushort *)0x0 && (local_c03c < 0x11)); local_c03c = local_c03c + 1) {
    pppuVar10 = (undefined4 ***)local_c020[0];
    if (local_c00c < 8) {
      pppuVar10 = local_c020;
    }
    iVar4 = FUN_101c33ab(pppuVar10,(&PTR_u_<___ROOT_BID__>_1034ed48)[local_c03c]);
    pwVar6 = (wchar_t *)(&PTR_u_<___ROOT_BID__>_1034ed48)[local_c03c];
    pwVar11 = L"<!--TITLE-->";
    pwVar9 = pwVar6;
    do {
      wVar1 = *pwVar9;
      bVar12 = (ushort)wVar1 < (ushort)*pwVar11;
      if (wVar1 != *pwVar11) {
LAB_1008ac9e:
        iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1008aca3;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar9[1];
      bVar12 = (ushort)wVar1 < (ushort)pwVar11[1];
      if (wVar1 != pwVar11[1]) goto LAB_1008ac9e;
      pwVar9 = pwVar9 + 2;
      pwVar11 = pwVar11 + 2;
    } while (wVar1 != L'\0');
    iVar7 = 0;
LAB_1008aca3:
    if (iVar7 == 0) {
      if (local_c038 != (ushort *)0x0) {
        puVar8 = &DAT_1023d5d0;
        puVar5 = local_c038;
        do {
          uVar2 = *puVar5;
          bVar12 = uVar2 < *puVar8;
          if (uVar2 != *puVar8) {
LAB_1008acdb:
            iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_1008ace0;
          }
          if (uVar2 == 0) break;
          uVar2 = puVar5[1];
          bVar12 = uVar2 < puVar8[1];
          if (uVar2 != puVar8[1]) goto LAB_1008acdb;
          puVar5 = puVar5 + 2;
          puVar8 = puVar8 + 2;
        } while (uVar2 != 0);
        iVar4 = 0;
LAB_1008ace0:
        if (iVar4 != 0) {
          puVar5 = local_c008;
          puVar8 = local_c038;
          do {
            uVar2 = *puVar8;
            *puVar5 = uVar2;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar2 != 0);
          goto LAB_1008ae8d;
        }
      }
      local_c008[0] = 0;
    }
    else {
      pwVar11 = L"<!--CONTENT-->";
      pwVar9 = pwVar6;
      do {
        wVar1 = *pwVar9;
        bVar12 = (ushort)wVar1 < (ushort)*pwVar11;
        if (wVar1 != *pwVar11) {
LAB_1008ad3c:
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_1008ad41;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar9[1];
        bVar12 = (ushort)wVar1 < (ushort)pwVar11[1];
        if (wVar1 != pwVar11[1]) goto LAB_1008ad3c;
        pwVar9 = pwVar9 + 2;
        pwVar11 = pwVar11 + 2;
      } while (wVar1 != L'\0');
      iVar7 = 0;
LAB_1008ad41:
      if (iVar7 == 0) {
        if (local_c038 != (ushort *)0x0) {
          puVar8 = &DAT_1023d5d0;
          puVar5 = local_c038;
          do {
            uVar2 = *puVar5;
            bVar12 = uVar2 < *puVar8;
            if (uVar2 != *puVar8) {
LAB_1008ad79:
              iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_1008ad7e;
            }
            if (uVar2 == 0) break;
            uVar2 = puVar5[1];
            bVar12 = uVar2 < puVar8[1];
            if (uVar2 != puVar8[1]) goto LAB_1008ad79;
            puVar5 = puVar5 + 2;
            puVar8 = puVar8 + 2;
          } while (uVar2 != 0);
          iVar4 = 0;
LAB_1008ad7e:
          if (iVar4 != 0) {
            puVar5 = local_4008;
            puVar8 = local_c038;
            do {
              uVar2 = *puVar8;
              *puVar5 = uVar2;
              puVar8 = puVar8 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar2 != 0);
            goto LAB_1008ae8d;
          }
        }
        local_4008[0] = 0;
      }
      else {
        pwVar11 = L"<!--WRITER-->";
        pwVar9 = pwVar6;
        do {
          wVar1 = *pwVar9;
          bVar12 = (ushort)wVar1 < (ushort)*pwVar11;
          if (wVar1 != *pwVar11) {
LAB_1008ade6:
            iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_1008adeb;
          }
          if (wVar1 == L'\0') break;
          wVar1 = pwVar9[1];
          bVar12 = (ushort)wVar1 < (ushort)pwVar11[1];
          if (wVar1 != pwVar11[1]) goto LAB_1008ade6;
          pwVar9 = pwVar9 + 2;
          pwVar11 = pwVar11 + 2;
        } while (wVar1 != L'\0');
        iVar7 = 0;
LAB_1008adeb:
        if (iVar7 == 0) {
          if (local_c038 != (ushort *)0x0) {
            puVar8 = &DAT_1023d5d0;
            puVar5 = local_c038;
            do {
              uVar2 = *puVar5;
              bVar12 = uVar2 < *puVar8;
              if (uVar2 != *puVar8) {
LAB_1008ae26:
                iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_1008ae2b;
              }
              if (uVar2 == 0) break;
              uVar2 = puVar5[1];
              bVar12 = uVar2 < puVar8[1];
              if (uVar2 != puVar8[1]) goto LAB_1008ae26;
              puVar5 = puVar5 + 2;
              puVar8 = puVar8 + 2;
            } while (uVar2 != 0);
            iVar4 = 0;
LAB_1008ae2b:
            if (iVar4 != 0) {
              puVar5 = local_8008;
              puVar8 = local_c038;
              do {
                uVar2 = *puVar8;
                *puVar5 = uVar2;
                puVar8 = puVar8 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar2 != 0);
              goto LAB_1008ae8d;
            }
          }
          local_8008[0] = 0;
        }
        else {
          pppuVar10 = (undefined4 ***)local_c020[0];
          if (local_c00c < 8) {
            pppuVar10 = local_c020;
          }
          iVar4 = iVar4 - (int)pppuVar10 >> 1;
          if (0 < iVar4) {
            pwVar9 = pwVar6 + 1;
            do {
              wVar1 = *pwVar6;
              pwVar6 = pwVar6 + 1;
            } while (wVar1 != L'\0');
            FUN_1008a5e0(iVar4,(int)pwVar6 - (int)pwVar9 >> 1,local_c038);
          }
        }
      }
    }
LAB_1008ae8d:
    uVar3 = FUN_10064af0(uVar3,&local_c038);
  }
  if (local_c00c < 8) {
    local_c020[0] = local_c020;
  }
  FUN_10088c30(local_c020[0]);
  iVar4 = 0;
  local_c028 = CONCAT31(local_c028._1_3_,2);
  if (local_8008[0] != 0) {
    for (; iVar4 < *(int *)(in_ECX + 0x228); iVar4 = iVar4 + 1) {
      iVar7 = *(int *)(*(int *)(in_ECX + 0x224) + 8 + iVar4 * 0xc);
      if (iVar7 == 0) {
        appFailAssert("pControl",".\\Src\\HtmlTranslator.cpp",0xbbd);
      }
      iVar7 = FUN_100839f0(iVar7);
      if (iVar7 != 0) {
        FString::operator+=((FString *)(iVar7 + 0x378),local_8008);
        iVar4 = iVar4 + 1;
        break;
      }
    }
  }
  if (local_c008[0] != 0) {
    for (; iVar4 < *(int *)(in_ECX + 0x228); iVar4 = iVar4 + 1) {
      iVar7 = *(int *)(*(int *)(in_ECX + 0x224) + 8 + iVar4 * 0xc);
      if (iVar7 == 0) {
        appFailAssert("pControl",".\\Src\\HtmlTranslator.cpp",0xbce);
      }
      iVar7 = FUN_100839f0(iVar7);
      if (iVar7 != 0) {
        FString::operator+=((FString *)(iVar7 + 0x378),local_c008);
      }
    }
  }
  if (local_4008[0] != 0) {
    local_c028._0_1_ = 3;
    for (iVar4 = 0; iVar4 < *(int *)(in_ECX + 0x228); iVar4 = iVar4 + 1) {
      iVar7 = *(int *)(*(int *)(in_ECX + 0x224) + 8 + iVar4 * 0xc);
      if (iVar7 == 0) {
        appFailAssert("pControl",".\\Src\\HtmlTranslator.cpp",0xbdb);
      }
      iVar7 = FUN_10083a20(iVar7);
      if (iVar7 != 0) {
        FUN_1003c4f0(local_4008);
      }
    }
    local_c028 = CONCAT31(local_c028._1_3_,2);
    FUN_100d10a0();
  }
  *(undefined4 *)(in_ECX + 0x268) = 0;
  *(undefined2 *)(in_ECX + 0x10274) = 0;
  *(undefined2 *)(in_ECX + 0x14274) = 0;
  local_c028._0_1_ = 1;
  FUN_100d10a0();
  local_c028 = (uint)local_c028._1_3_ << 8;
  FUN_10087550();
  local_c028 = 0xffffffff;
  ExceptionList = local_c030;
  __security_check_cookie(local_8 ^ (uint)local_c024);
  return;
}


// ==== 1008b076 Catch@1008b076

void Catch_1008b076(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1008b08a Catch@1008b08a

void Catch_1008b08a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::MergeWriteBuff");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008b0b0 FUN_1008b0b0

void FUN_1008b0b0(ushort *param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  int in_ECX;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  short *psVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eb4d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    if (*param_1 != 0x3c) {
      psVar3 = (short *)FUN_10064af0(param_1,&param_1);
      puVar6 = &DAT_102468e4;
      puVar5 = param_1;
      do {
        uVar1 = *puVar5;
        bVar8 = uVar1 < *puVar6;
        if (uVar1 != *puVar6) {
LAB_1008b156:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1008b15b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar8 = uVar1 < puVar6[1];
        if (uVar1 != puVar6[1]) goto LAB_1008b156;
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 2;
      } while (uVar1 != 0);
      iVar4 = 0;
LAB_1008b15b:
      if (iVar4 == 0) {
        psVar7 = (short *)(in_ECX + 0x274);
        do {
          sVar2 = *psVar3;
          *psVar7 = sVar2;
          psVar3 = psVar3 + 1;
          psVar7 = psVar7 + 1;
        } while (sVar2 != 0);
        *(int *)(in_ECX + 0x264) = *(int *)(in_ECX + 0x264) + 1;
      }
      else {
        puVar6 = &DAT_1024faec;
        puVar5 = param_1;
        do {
          uVar1 = *puVar5;
          bVar8 = uVar1 < *puVar6;
          if (uVar1 != *puVar6) {
LAB_1008b1b6:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_1008b1bb;
          }
          if (uVar1 == 0) break;
          uVar1 = puVar5[1];
          bVar8 = uVar1 < puVar6[1];
          if (uVar1 != puVar6[1]) goto LAB_1008b1b6;
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + 2;
        } while (uVar1 != 0);
        iVar4 = 0;
LAB_1008b1bb:
        if (iVar4 == 0) {
          psVar7 = (short *)(in_ECX + 0x4274);
          do {
            sVar2 = *psVar3;
            *psVar7 = sVar2;
            psVar3 = psVar3 + 1;
            psVar7 = psVar7 + 1;
          } while (sVar2 != 0);
          *(int *)(in_ECX + 0x264) = *(int *)(in_ECX + 0x264) + 1;
        }
        else {
          puVar6 = &DAT_1024fae8;
          puVar5 = param_1;
          do {
            uVar1 = *puVar5;
            bVar8 = uVar1 < *puVar6;
            if (uVar1 != *puVar6) {
LAB_1008b216:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_1008b21b;
            }
            if (uVar1 == 0) break;
            uVar1 = puVar5[1];
            bVar8 = uVar1 < puVar6[1];
            if (uVar1 != puVar6[1]) goto LAB_1008b216;
            puVar5 = puVar5 + 2;
            puVar6 = puVar6 + 2;
          } while (uVar1 != 0);
          iVar4 = 0;
LAB_1008b21b:
          if (iVar4 == 0) {
            psVar7 = (short *)(in_ECX + 0x8274);
            do {
              sVar2 = *psVar3;
              *psVar7 = sVar2;
              psVar3 = psVar3 + 1;
              psVar7 = psVar7 + 1;
            } while (sVar2 != 0);
            *(int *)(in_ECX + 0x264) = *(int *)(in_ECX + 0x264) + 1;
          }
          else {
            puVar6 = &DAT_1024fae4;
            puVar5 = param_1;
            do {
              uVar1 = *puVar5;
              bVar8 = uVar1 < *puVar6;
              if (uVar1 != *puVar6) {
LAB_1008b276:
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_1008b27b;
              }
              if (uVar1 == 0) break;
              uVar1 = puVar5[1];
              bVar8 = uVar1 < puVar6[1];
              if (uVar1 != puVar6[1]) goto LAB_1008b276;
              puVar5 = puVar5 + 2;
              puVar6 = puVar6 + 2;
            } while (uVar1 != 0);
            iVar4 = 0;
LAB_1008b27b:
            if (iVar4 == 0) {
              psVar7 = (short *)(in_ECX + 0xc274);
              do {
                sVar2 = *psVar3;
                *psVar7 = sVar2;
                psVar3 = psVar3 + 1;
                psVar7 = psVar7 + 1;
              } while (sVar2 != 0);
              *(int *)(in_ECX + 0x264) = *(int *)(in_ECX + 0x264) + 1;
            }
            else {
              puVar6 = &DAT_1024fad8;
              puVar5 = param_1;
              do {
                uVar1 = *puVar5;
                bVar8 = uVar1 < *puVar6;
                if (uVar1 != *puVar6) {
LAB_1008b2d6:
                  iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                  goto LAB_1008b2db;
                }
                if (uVar1 == 0) break;
                uVar1 = puVar5[1];
                bVar8 = uVar1 < puVar6[1];
                if (uVar1 != puVar6[1]) goto LAB_1008b2d6;
                puVar5 = puVar5 + 2;
                puVar6 = puVar6 + 2;
              } while (uVar1 != 0);
              iVar4 = 0;
LAB_1008b2db:
              if (iVar4 == 0) {
                psVar7 = (short *)(in_ECX + 0x10274);
                do {
                  sVar2 = *psVar3;
                  *psVar7 = sVar2;
                  psVar3 = psVar3 + 1;
                  psVar7 = psVar7 + 1;
                } while (sVar2 != 0);
                *(int *)(in_ECX + 0x268) = *(int *)(in_ECX + 0x268) + 1;
              }
              else {
                puVar6 = &DAT_1024facc;
                puVar5 = param_1;
                do {
                  uVar1 = *puVar5;
                  bVar8 = uVar1 < *puVar6;
                  if (uVar1 != *puVar6) {
LAB_1008b336:
                    iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                    goto LAB_1008b33b;
                  }
                  if (uVar1 == 0) break;
                  uVar1 = puVar5[1];
                  bVar8 = uVar1 < puVar6[1];
                  if (uVar1 != puVar6[1]) goto LAB_1008b336;
                  puVar5 = puVar5 + 2;
                  puVar6 = puVar6 + 2;
                } while (uVar1 != 0);
                iVar4 = 0;
LAB_1008b33b:
                if (iVar4 == 0) {
                  psVar7 = (short *)(in_ECX + 0x14274);
                  do {
                    sVar2 = *psVar3;
                    *psVar7 = sVar2;
                    psVar3 = psVar3 + 1;
                    psVar7 = psVar7 + 1;
                  } while (sVar2 != 0);
                  *(int *)(in_ECX + 0x268) = *(int *)(in_ECX + 0x268) + 1;
                }
                else {
                  puVar6 = &DAT_1024fac4;
                  puVar5 = param_1;
                  do {
                    uVar1 = *puVar5;
                    bVar8 = uVar1 < *puVar6;
                    if (uVar1 != *puVar6) {
LAB_1008b396:
                      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                      goto LAB_1008b39b;
                    }
                    if (uVar1 == 0) break;
                    uVar1 = puVar5[1];
                    bVar8 = uVar1 < puVar6[1];
                    if (uVar1 != puVar6[1]) goto LAB_1008b396;
                    puVar5 = puVar5 + 2;
                    puVar6 = puVar6 + 2;
                  } while (uVar1 != 0);
                  iVar4 = 0;
LAB_1008b39b:
                  if (iVar4 == 0) {
                    psVar7 = (short *)(in_ECX + 0x18274);
                    do {
                      sVar2 = *psVar3;
                      *psVar7 = sVar2;
                      psVar3 = psVar3 + 1;
                      psVar7 = psVar7 + 1;
                    } while (sVar2 != 0);
                  }
                  else {
                    puVar6 = &DAT_1024fabc;
                    puVar5 = param_1;
                    do {
                      uVar1 = *puVar5;
                      bVar8 = uVar1 < *puVar6;
                      if (uVar1 != *puVar6) {
LAB_1008b3ea:
                        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                        goto LAB_1008b3ef;
                      }
                      if (uVar1 == 0) break;
                      uVar1 = puVar5[1];
                      bVar8 = uVar1 < puVar6[1];
                      if (uVar1 != puVar6[1]) goto LAB_1008b3ea;
                      puVar5 = puVar5 + 2;
                      puVar6 = puVar6 + 2;
                    } while (uVar1 != 0);
                    iVar4 = 0;
LAB_1008b3ef:
                    if (iVar4 == 0) {
                      psVar7 = (short *)(in_ECX + 0x1c274);
                      do {
                        sVar2 = *psVar3;
                        *psVar7 = sVar2;
                        psVar3 = psVar3 + 1;
                        psVar7 = psVar7 + 1;
                      } while (sVar2 != 0);
                    }
                    else {
                      puVar6 = &DAT_1024fab4;
                      puVar5 = param_1;
                      do {
                        uVar1 = *puVar5;
                        bVar8 = uVar1 < *puVar6;
                        if (uVar1 != *puVar6) {
LAB_1008b446:
                          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                          goto LAB_1008b44b;
                        }
                        if (uVar1 == 0) break;
                        uVar1 = puVar5[1];
                        bVar8 = uVar1 < puVar6[1];
                        if (uVar1 != puVar6[1]) goto LAB_1008b446;
                        puVar5 = puVar5 + 2;
                        puVar6 = puVar6 + 2;
                      } while (uVar1 != 0);
                      iVar4 = 0;
LAB_1008b44b:
                      if (iVar4 != 0) goto LAB_1008b46f;
                      psVar7 = (short *)(in_ECX + 0x20274);
                      do {
                        sVar2 = *psVar3;
                        *psVar7 = sVar2;
                        psVar3 = psVar3 + 1;
                        psVar7 = psVar7 + 1;
                      } while (sVar2 != 0);
                    }
                  }
                  *(int *)(in_ECX + 0x26c) = *(int *)(in_ECX + 0x26c) + 1;
                }
              }
            }
          }
        }
      }
LAB_1008b46f:
      if (*(int *)(in_ECX + 0x26c) == 3) {
        FUN_10088cc0();
        *(undefined4 *)(in_ECX + 0x260) = 1;
      }
      if (*(int *)(in_ECX + 0x264) == 4) {
        FUN_1008a970();
        *(undefined4 *)(in_ECX + 0x260) = 2;
      }
      if (*(int *)(in_ECX + 0x268) == 2) {
        FUN_1008abc0();
        *(undefined4 *)(in_ECX + 0x260) = 3;
      }
      ExceptionList = local_10;
      return;
    }
    FUN_10088c30(param_1);
    *(undefined4 *)(in_ECX + 0x260) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1008b4d8 Catch@1008b4d8

void Catch_1008b4d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1008b4ec Catch@1008b4ec

void Catch_1008b4ec(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::SetHtmlBuffData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008b510 FUN_1008b510

undefined4 FUN_1008b510(void)

{
  int in_ECX;
  
  FUN_10061e90();
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  return 1;
}


// ==== 1008b540 FUN_1008b540

void FUN_1008b540(char *param_1,u_short param_2)

{
  SOCKET SVar1;
  ulong uVar2;
  hostent *phVar3;
  int iVar4;
  int in_ECX;
  sockaddr local_1a4;
  WSADATA local_194;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_1a4;
  WSAStartup(0x101,&local_194);
  SVar1 = socket(2,1,6);
  *(SOCKET *)(in_ECX + 0x1d8) = SVar1;
  if (SVar1 != 0xffffffff) {
    uVar2 = inet_addr(param_1);
    if (uVar2 == 0xffffffff) {
      phVar3 = gethostbyname(param_1);
      if (phVar3 == (hostent *)0x0) goto LAB_1008b5ee;
      _memcpy(local_1a4.sa_data + 2,*phVar3->h_addr_list,(int)phVar3->h_length);
      uVar2 = local_1a4.sa_data._2_4_;
    }
    local_1a4.sa_data._2_4_ = uVar2;
    local_1a4.sa_family = 2;
    local_1a4.sa_data._0_2_ = htons(param_2);
    iVar4 = connect(*(SOCKET *)(in_ECX + 0x1d8),&local_1a4,0x10);
    if (iVar4 != 0) {
      WSAGetLastError();
    }
  }
LAB_1008b5ee:
  __security_check_cookie(local_4 ^ (uint)&local_1a4);
  return;
}


// ==== 1008b610 FUN_1008b610

undefined4 FUN_1008b610(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if (((param_2 != (char *)0x0) && (param_3 != (int *)0x0)) && (*(SOCKET *)(in_ECX + 0x1d8) != 0)) {
    iVar1 = send(*(SOCKET *)(in_ECX + 0x1d8),param_2,param_1,0);
    if (0 < iVar1) {
      iVar1 = 0;
      iVar2 = 0;
      do {
        iVar1 = recv(*(SOCKET *)(in_ECX + 0x1d8),(char *)(iVar1 + (int)param_3),0x1000 - iVar1,0);
        iVar2 = iVar2 + iVar1;
        if (*param_3 * 2 + 4 == iVar2) {
          return 1;
        }
      } while (iVar2 < 0x1000);
      return 1;
    }
    FUN_10186b50(L"Disconnect!!!!");
  }
  return 0;
}


// ==== 1008b6b0 FUN_1008b6b0

int FUN_1008b6b0(ushort *param_1,ushort *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return (-(uint)(*param_1 < *param_2) & 0xfffffffe) + 1;
}


// ==== 1008b6f0 FUN_1008b6f0

void FUN_1008b6f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035ac50,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1008b720 FUN_1008b720

undefined4 FUN_1008b720(void)

{
  char cVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  wchar_t *pwVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  void *pvVar8;
  uint uStack_40;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101eb64d;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar6 = 0;
  FUN_10061b40();
  uStack_48 = 0x1008b75f;
  FName::FName((FName *)local_28,0);
  pUVar2 = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  uStack_48 = 0;
  uStack_50 = 0;
  pUVar3 = UObject::StaticAllocateObject(&DAT_1035ac50,pUVar2,local_28[0],0);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_1000b680();
  }
  pvVar8 = (void *)0x3;
  uStack_48 = 0;
  uStack_4c = 0;
  *(int *)(in_ECX + 0x1cc) = iVar4;
  uStack_50 = 0x11;
  *(undefined4 *)(iVar4 + 0x1cc) = 0xff330002;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))(0,0x18,0x7d);
  uVar5 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1cc),0x12);
  FUN_1005c1e0(uVar5);
  FUN_1000b3d0(L"Npc HTML");
  FUN_1000b3d0(L"Petition HTML");
  FUN_1000b3d0(L"Help HTML");
  FUN_1000b3d0(L"ServerInfo HTML");
  FUN_10009f70(0);
  FName::FName((FName *)&stack0xffffffbc,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,pvVar8,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    uVar5 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI.control.DefaultButton_click");
    uStack_20 = 0;
    uStack_48 = 1;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI.control.DefaultButton");
    uStack_20 = 1;
    uVar6 = 3;
    uStack_48 = 3;
    uVar5 = FUN_10006980(&uStack_40,&stack0xffffffcc,0);
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar5;
  uStack_20 = 0;
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    uStack_48 = uVar6;
    FString::~FString((FString *)&uStack_40);
  }
  uStack_20 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    uStack_48 = uVar6 & 0xfffffffe;
    FString::~FString((FString *)&stack0xffffffcc);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x1cc) = 0xff330001;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))(0,0,0x43,0x13,0,0,3);
  uVar5 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
  FUN_1005c1e0(uVar5);
  FString::FString((FString *)&uStack_50,(ushort *)L"Generate!");
  FUN_10003dc0(&uStack_50);
  FString::~FString((FString *)&uStack_50);
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  cVar1 = FUN_1008b540("localhost",0x1e62);
  if (cVar1 == '\0') {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
    pwVar7 = L"Connection Failed to WordWrap Server!!!!!";
  }
  else {
    pwVar7 = L"Connection O~~~K~~~~ to WordWrap Server!!!!!";
  }
  FUN_10186b50(pwVar7);
  ExceptionList = pvVar8;
  return 1;
}


// ==== 1008b9e0 FUN_1008b9e0

void FUN_1008b9e0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  return;
}


// ==== 1008b9f0 FUN_1008b9f0

uint FUN_1008b9f0(short *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  if ((param_3 != 0) || (*(uint *)(in_ECX + 0x14) < param_2)) {
    if ((param_2 < *(uint *)(in_ECX + 0x14)) &&
       (uVar4 = *(uint *)(in_ECX + 0x14) - param_2, param_3 <= uVar4)) {
      iVar7 = uVar4 + (1 - param_3);
      uVar4 = *(uint *)(in_ECX + 0x18);
      piVar2 = (int *)(in_ECX + 4);
      piVar3 = piVar2;
      if (7 < uVar4) {
        piVar3 = (int *)*piVar2;
      }
      psVar5 = (short *)((int)piVar3 + param_2 * 2);
      for (; iVar7 != 0; iVar7 = iVar7 + (-1 - (iVar1 >> 1))) {
        iVar1 = iVar7;
        psVar6 = psVar5;
        while (*psVar6 != *param_1) {
          psVar6 = psVar6 + 1;
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1008ba5d;
        }
        if (psVar6 == (short *)0x0) break;
        iVar1 = FUN_1008b6b0(psVar6,param_1,param_3);
        if (iVar1 == 0) {
          if (7 < uVar4) {
            return (int)psVar6 - *piVar2 >> 1;
          }
          return (int)psVar6 - (int)piVar2 >> 1;
        }
        iVar1 = (int)psVar6 - (int)psVar5;
        psVar5 = psVar6 + 1;
      }
    }
LAB_1008ba5d:
    param_2 = 0xffffffff;
  }
  return param_2;
}


// ==== 1008bac0 FUN_1008bac0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1008bac0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  ushort *puVar4;
  undefined4 uStack_5210;
  ushort local_5204 [250];
  ushort auStack_5010 [10240];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_5204;
  uStack_5210 = param_1;
  appSprintf(local_5204,(ushort *)L"..\\OUTPUT_THAI_HTML\\%s");
  uStack_5210 = *(undefined4 *)GNull_exref;
  piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))(local_5204,0xc);
  if (piVar2 != (int *)0x0) {
    if (*(uint *)(in_ECX + 500) < 8) {
      puVar4 = (ushort *)(in_ECX + 0x1e0);
    }
    else {
      puVar4 = *(ushort **)(in_ECX + 0x1e0);
    }
    appStrcpy(auStack_5010,puVar4);
    iVar1 = *piVar2;
    iVar3 = appStrlen(auStack_5010);
    (**(code **)(iVar1 + 4))(auStack_5010,iVar3 * 2);
    (**(code **)(*piVar2 + 0x54))();
    (**(code **)*piVar2)(1);
  }
  __security_check_cookie(uStack_10 ^ (uint)&uStack_5210);
  return;
}


// ==== 1008bba0 FUN_1008bba0

void FUN_1008bba0(uint param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  if ((*(uint *)(in_ECX + 0x14) < param_1) || (*(uint *)(param_2 + 0x14) < param_3)) {
    FUN_101c0f70();
  }
  uVar2 = *(int *)(param_2 + 0x14) - param_3;
  if (uVar2 < param_4) {
    param_4 = uVar2;
  }
  if (-*(int *)(in_ECX + 0x14) - 1U <= param_4) {
    FUN_101c0f31();
  }
  if (param_4 != 0) {
    uVar2 = *(int *)(in_ECX + 0x14) + param_4;
    if (0x7ffffffe < uVar2) {
      FUN_101c0f31();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar2) {
      FUN_100873e0(uVar2,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar2 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        **(undefined2 **)(in_ECX + 4) = 0;
        return;
      }
      *(undefined2 *)(in_ECX + 4) = 0;
      return;
    }
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)(in_ECX + 4);
      puVar1 = puVar3;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar1 = (undefined4 *)*puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      _memmove_s((void *)((int)puVar3 + (param_1 + param_4) * 2),
                 ((*(uint *)(in_ECX + 0x18) - param_1) - param_4) * 2,
                 (void *)((int)puVar1 + param_1 * 2),(*(int *)(in_ECX + 0x14) - param_1) * 2);
      if (in_ECX == param_2) {
        if (param_1 < param_3) {
          param_3 = param_3 + param_4;
        }
        puVar3 = (undefined4 *)(in_ECX + 4);
        puVar1 = puVar3;
        if (7 < *(uint *)(in_ECX + 0x18)) {
          puVar1 = (undefined4 *)*puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
        _memmove_s((void *)((int)puVar3 + param_1 * 2),(*(uint *)(in_ECX + 0x18) - param_1) * 2,
                   (void *)((int)puVar1 + param_3 * 2),param_4 * 2);
      }
      else {
        if (*(uint *)(param_2 + 0x18) < 8) {
          param_2 = param_2 + 4;
        }
        else {
          param_2 = *(int *)(param_2 + 4);
        }
        puVar3 = (undefined4 *)(in_ECX + 4);
        if (7 < *(uint *)(in_ECX + 0x18)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        _memcpy_s((void *)((int)puVar3 + param_1 * 2),(*(uint *)(in_ECX + 0x18) - param_1) * 2,
                  (void *)(param_2 + param_3 * 2),param_4 * 2);
      }
      puVar3 = (undefined4 *)(in_ECX + 4);
      *(uint *)(in_ECX + 0x14) = uVar2;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(undefined2 *)((int)puVar3 + uVar2 * 2) = 0;
    }
  }
  return;
}


// ==== 1008bd30 FUN_1008bd30

void FUN_1008bd30(uint param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(in_ECX + 0x18);
  if (uVar6 < 8) {
    pvVar1 = (void *)(in_ECX + 4);
  }
  else {
    pvVar1 = *(void **)(in_ECX + 4);
  }
  if (pvVar1 <= param_2) {
    puVar2 = (undefined4 *)(in_ECX + 4);
    puVar5 = puVar2;
    if (7 < uVar6) {
      puVar5 = (undefined4 *)*puVar2;
    }
    if (param_2 < (void *)((int)puVar5 + *(int *)(in_ECX + 0x14) * 2)) {
      if (7 < uVar6) {
        puVar2 = (undefined4 *)*puVar2;
      }
      FUN_1008bba0(param_1,in_ECX,(int)param_2 - (int)puVar2 >> 1,param_3);
      return;
    }
  }
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_101c0f70();
  }
  if (-*(int *)(in_ECX + 0x14) - 1U <= param_3) {
    FUN_101c0f31();
  }
  if (param_3 != 0) {
    uVar6 = *(int *)(in_ECX + 0x14) + param_3;
    if (0x7ffffffe < uVar6) {
      FUN_101c0f31();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar6) {
      FUN_100873e0(uVar6,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar6 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        **(undefined2 **)(in_ECX + 4) = 0;
        return;
      }
      *(undefined2 *)(in_ECX + 4) = 0;
      return;
    }
    if (uVar6 != 0) {
      if (*(uint *)(in_ECX + 0x18) < 8) {
        iVar4 = in_ECX + 4;
        iVar3 = in_ECX + 4;
      }
      else {
        iVar4 = *(int *)(in_ECX + 4);
        iVar3 = *(int *)(in_ECX + 4);
      }
      _memmove_s((void *)(iVar3 + (param_1 + param_3) * 2),
                 ((*(uint *)(in_ECX + 0x18) - param_1) - param_3) * 2,(void *)(iVar4 + param_1 * 2),
                 (*(int *)(in_ECX + 0x14) - param_1) * 2);
      if (*(uint *)(in_ECX + 0x18) < 8) {
        iVar4 = in_ECX + 4;
      }
      else {
        iVar4 = *(int *)(in_ECX + 4);
      }
      _memcpy_s((void *)(iVar4 + param_1 * 2),(*(uint *)(in_ECX + 0x18) - param_1) * 2,param_2,
                param_3 * 2);
      *(uint *)(in_ECX + 0x14) = uVar6;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        *(undefined2 *)(*(int *)(in_ECX + 4) + uVar6 * 2) = 0;
        return;
      }
      *(undefined2 *)(in_ECX + 4 + uVar6 * 2) = 0;
    }
  }
  return;
}


// ==== 1008beb0 FUN_1008beb0

void FUN_1008beb0(undefined4 param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_2;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_1008bd30(param_1,param_2,(int)psVar2 - (int)(param_2 + 1) >> 1);
  return;
}


// ==== 1008bee0 FUN_1008bee0

void FUN_1008bee0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb686;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = L2WordWrapperWnd::vftable;
  in_ECX[0x7d] = 7;
  in_ECX[0x7c] = 0;
  *(undefined2 *)(in_ECX + 0x78) = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x75] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1008bf70 FUN_1008bf70

void FUN_1008bf70(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101eb6c6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2WordWrapperWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  if (7 < *(uint *)(in_ECX + 500)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(in_ECX + 0x1e0),uVar1);
  }
  *(undefined4 *)(in_ECX + 500) = 7;
  *(undefined4 *)(in_ECX + 0x1f0) = 0;
  *(undefined2 *)(in_ECX + 0x1e0) = 0;
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 1008c010 FUN_1008c010

void FUN_1008c010(byte param_1)

{
  void *in_ECX;
  
  FUN_1008bf70();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1fc);
  }
  return;
}


// ==== 1008c040 FUN_1008c040

int FUN_1008c040(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb709;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 7;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_100881c0(in_ECX,param_2,param_3);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1008c0c0 FUN_1008c0c0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1008c0c0(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort *****pppppuVar6;
  ushort *puVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  undefined1 local_9464 [4];
  uint local_9460;
  undefined4 local_9450;
  uint local_944c;
  ushort ****local_9444 [4];
  undefined4 local_9434;
  uint local_9430;
  uint uStack_9428;
  uint local_9418;
  uint uStack_9414;
  ushort auStack_9410 [512];
  undefined4 local_9010;
  int local_900c;
  undefined1 local_9008 [4088];
  int local_8010;
  undefined1 local_800c [4092];
  undefined1 local_7010 [8192];
  ushort auStack_5010 [10240];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb751;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_9464;
  ExceptionList = &local_c;
  _memset(local_7010,0,0x1000);
  _memset(&local_9010,0,0x1000);
  _memset(&local_8010,0,0x1000);
  iVar3 = appStrlen(param_1);
  local_9010 = param_2;
  local_900c = iVar3;
  _memcpy(local_9008,param_1,iVar3 * 2);
  cVar2 = FUN_1008b610(iVar3 * 2 + 8,&local_9010,&local_8010);
  if ((cVar2 != '\0') && ((char)local_8010 != '\0')) {
    _memcpy(local_7010,local_800c,local_8010 * 2);
    FUN_1008a5a0(local_7010);
    local_4 = 0;
    uVar4 = FUN_1008b9f0(L"<br1>",0,5);
    while (uVar4 <= local_9418) {
      uVar5 = FUN_1008c040(local_9464,0,uVar4);
      local_4._0_1_ = 1;
      local_9430 = 7;
      local_9434 = 0;
      local_9444[0] = (ushort ****)((uint)local_9444[0] & 0xffff0000);
      FUN_100881c0(uVar5,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (7 < local_944c) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_9460);
      }
      local_944c = 7;
      local_9450 = 0;
      local_9460 = local_9460 & 0xffff0000;
      FUN_10084810(0,uVar4 + 5);
      pppppuVar6 = (ushort *****)local_9444[0];
      if (local_9430 < 8) {
        pppppuVar6 = local_9444;
      }
      appStrcpy(auStack_9410,(ushort *)pppppuVar6);
      if (*(uint *)(in_ECX + 500) < 8) {
        puVar7 = (ushort *)(in_ECX + 0x1e0);
      }
      else {
        puVar7 = *(ushort **)(in_ECX + 0x1e0);
      }
      appStrcpy(auStack_5010,puVar7);
      iVar3 = 0;
      if (*(uint *)(in_ECX + 0x1f8) < *(uint *)(in_ECX + 0x1f0)) {
        do {
          if (auStack_9410[0] == auStack_5010[*(int *)(in_ECX + 0x1f8)]) {
            iVar3 = iVar3 + 1;
            iVar9 = 1;
            iVar8 = appStrlen(auStack_9410);
            if (1 < iVar8) {
LAB_1008c313:
              iVar8 = *(int *)(in_ECX + 0x1f8) + iVar3;
              if ((auStack_5010[iVar8] == 0x3c) &&
                 (((((auStack_5010[iVar8 + 1] == 0x61 && (auStack_5010[iVar8 + 2] == 0x20)) ||
                    ((auStack_5010[iVar8 + 1] == 0x66 &&
                     (((auStack_5010[iVar8 + 2] == 0x6f && (auStack_5010[iVar8 + 3] == 0x6e)) &&
                      (auStack_5010[iVar8 + 4] == 0x74)))))) ||
                   ((auStack_5010[iVar8 + 1] == 0x2f && (auStack_5010[iVar8 + 2] == 0x61)))) ||
                  ((auStack_5010[iVar8 + 1] == 0x2f && (auStack_5010[iVar8 + 2] == 0x66)))))) {
                puVar7 = auStack_5010 + iVar8;
                uVar1 = auStack_5010[iVar8];
                while (uVar1 != 0x3e) {
                  puVar7 = puVar7 + 1;
                  iVar3 = iVar3 + 1;
                  uVar1 = *puVar7;
                }
                iVar3 = iVar3 + 1;
              }
              if (auStack_9410[iVar9] == auStack_5010[*(int *)(in_ECX + 0x1f8) + iVar3]) {
                iVar3 = iVar3 + 1;
                iVar8 = appStrlen(auStack_9410);
                if (iVar9 != iVar8 + -1) goto code_r0x1008c3fc;
                goto LAB_1008c414;
              }
            }
          }
          else {
            iVar3 = 0;
          }
          *(int *)(in_ECX + 0x1f8) = *(int *)(in_ECX + 0x1f8) + 1;
        } while (*(uint *)(in_ECX + 0x1f8) < *(uint *)(in_ECX + 0x1f0));
      }
LAB_1008c438:
      local_4 = local_4 & 0xffffff00;
      if (7 < local_9430) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_9444[0]);
      }
      local_9430 = 7;
      local_9434 = 0;
      local_9444[0] = (ushort ****)((uint)local_9444[0] & 0xffff0000);
      uVar4 = FUN_1008b9f0(L"<br1>",0,5);
    }
    local_4 = 0xffffffff;
    if (7 < uStack_9414) {
      (**(code **)(**(int **)GMalloc_exref + 8))(uStack_9428);
    }
    uStack_9414 = 7;
    local_9418 = 0;
    uStack_9428 = uStack_9428 & 0xffff0000;
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_9464);
  return;
code_r0x1008c3fc:
  iVar9 = iVar9 + 1;
  iVar8 = appStrlen(auStack_9410);
  if (iVar8 <= iVar9) {
LAB_1008c414:
    iVar3 = *(int *)(in_ECX + 0x1f8) + iVar3;
    *(int *)(in_ECX + 0x1f8) = iVar3 + 5;
    FUN_1008beb0(iVar3,L"<br1>");
    goto LAB_1008c438;
  }
  goto LAB_1008c313;
}


// ==== 1008c510 FUN_1008c510

void FUN_1008c510(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  int local_88;
  int local_84;
  undefined1 local_80 [4];
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [4];
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  uint local_34;
  uint local_30;
  undefined1 local_2c [4];
  uint local_28;
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101eb7b0;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_88;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff68;
  ExceptionList = &local_c;
  local_30 = 7;
  local_34 = 0;
  local_44 = local_44 & 0xffff0000;
  local_14 = 7;
  local_18 = 0;
  local_28 = local_28 & 0xffff0000;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_84 = in_ECX + 0x1dc;
  local_88 = 0x14;
  do {
    iVar6 = 0;
    local_68 = 7;
    local_6c = 0;
    local_7c = local_7c & 0xffff0000;
    FUN_100881c0(local_84,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_100881c0(local_80,0,0xffffffff);
    local_4._0_1_ = 1;
    if (7 < local_68) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_7c,uVar1);
    }
    local_68 = 7;
    local_6c = 0;
    local_7c = local_7c & 0xffff0000;
    while (uVar2 = FUN_1008b9f0(L"<font ",0,6), uVar2 <= local_34) {
      FUN_10084810(0,uVar2);
      iVar3 = FUN_1008b9f0(&DAT_1024ffd0,0,1);
      uVar4 = FUN_1008c040(local_64,0,iVar3 + 1);
      local_4._0_1_ = 3;
      FUN_100881c0(uVar4,0,0xffffffff);
      local_4._0_1_ = 1;
      if (7 < local_4c) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_60);
      }
      local_4c = 7;
      local_50 = 0;
      local_60 = local_60 & 0xffff0000;
      FUN_10084810(0,iVar3 + 1);
      iVar3 = iVar6 + uVar2 + 1 + iVar3;
      uVar2 = FUN_1008b9f0(L"</font>",0,7);
      uVar5 = FUN_1008b9f0(L"<br1>",0,5);
      if (local_34 < uVar5) {
        FUN_10084810(0,uVar2 + 7);
        break;
      }
      if (uVar5 < uVar2) {
        FUN_10084810(0,uVar5);
        iVar3 = iVar3 + uVar5;
        FUN_1008bd30(iVar3,L"</font>",7);
        FUN_1008bba0(iVar3 + 0xc,local_2c,0,0xffffffff);
        iVar6 = iVar3 + 7 + local_18;
      }
      else {
        FUN_10084810(0,uVar2 + 7);
        iVar6 = iVar3 + 7 + uVar2;
      }
    }
    local_88 = local_88 + -1;
  } while (local_88 != 0);
  local_88 = 0x14;
  do {
    local_68 = 7;
    local_6c = 0;
    local_7c = local_7c & 0xffff0000;
    FUN_100881c0(local_84,0,0xffffffff);
    local_4._0_1_ = 4;
    FUN_100881c0(local_80,0,0xffffffff);
    local_4._0_1_ = 1;
    if (7 < local_68) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_7c);
    }
    local_68 = 7;
    local_6c = 0;
    local_7c = local_7c & 0xffff0000;
    iVar6 = 0;
    while (uVar1 = FUN_1008b9f0(&DAT_1024ffb8,0,3), uVar1 <= local_34) {
      FUN_10084810(0,uVar1);
      iVar3 = FUN_1008b9f0(&DAT_1024ffd0,0,1);
      uVar4 = FUN_1008c040(local_64,0,iVar3 + 1);
      local_4._0_1_ = 5;
      FUN_100881c0(uVar4,0,0xffffffff);
      local_4._0_1_ = 1;
      if (7 < local_4c) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_60);
      }
      local_4c = 7;
      local_50 = 0;
      local_60 = local_60 & 0xffff0000;
      FUN_10084810(0,iVar3 + 1);
      iVar3 = iVar6 + uVar1 + 1 + iVar3;
      uVar1 = FUN_1008b9f0(L"</a>",0,4);
      uVar2 = FUN_1008b9f0(L"<br1>",0,5);
      if (local_34 < uVar2) {
        FUN_10084810(0,uVar1 + 4);
        break;
      }
      if (uVar2 < uVar1) {
        FUN_10084810(0,uVar2);
        iVar3 = iVar3 + uVar2;
        FUN_1008bd30(iVar3,L"</a>",4);
        FUN_1008bba0(iVar3 + 9,local_2c,0,0xffffffff);
        iVar6 = iVar3 + 4 + local_18;
      }
      else {
        FUN_10084810(0,uVar1 + 4);
        iVar6 = iVar3 + 4 + uVar1;
      }
    }
    local_88 = local_88 + -1;
    if (local_88 == 0) {
      local_4 = (uint)local_4._1_3_ << 8;
      if (7 < local_14) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_28);
      }
      local_14 = 7;
      local_18 = 0;
      local_28 = local_28 & 0xffff0000;
      local_4 = 0xffffffff;
      if (7 < local_30) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_44);
      }
      local_30 = 7;
      local_34 = 0;
      local_44 = local_44 & 0xffff0000;
      ExceptionList = local_c;
      __security_check_cookie(local_10 ^ (uint)&local_88);
      return;
    }
  } while( true );
}


// ==== 1008c9a0 FUN_1008c9a0

undefined4 FUN_1008c9a0(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_EDI;
  int iVar6;
  uint uStack_28;
  void *pvStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101eb7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = param_1;
  iVar1 = (**(code **)(**(int **)GFileManager_exref + 0x10))
                    (param_1,DAT_103554c4 ^ (uint)&stack0xffffffc4);
  piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))
                            (param_1,0,*(undefined4 *)GNull_exref);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    pvVar3 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(iVar1 + 2,L"ThaiHtmlConvertor");
    appMemset(pvVar3,0,iVar1 + 2);
    if (pvVar3 != (void *)0x0) {
      (**(code **)(*piVar2 + 4))(pvVar3,iVar1);
      uVar4 = FUN_1008a5a0(pvVar3);
      FUN_100881c0(uVar4,0,0xffffffff);
      pvStack_1c = (void *)0xffffffff;
      if (7 < uStack_28) {
        (**(code **)(**(int **)GMalloc_exref + 8))(unaff_EDI);
      }
      while (uVar5 = FUN_1008b9f0(&DAT_1024ffe4,0,2), uVar5 < *(uint *)(iVar6 + 0x1f0)) {
        FUN_100895d0(uVar5,2,&DAT_1023d5d0,1);
      }
    }
    (**(code **)*piVar2)(1);
    uVar4 = 1;
  }
  ExceptionList = pvStack_1c;
  return uVar4;
}


// ==== 1008caf0 FUN_1008caf0

void FUN_1008caf0(void)

{
  ushort *puVar1;
  BOOL BVar2;
  int in_ECX;
  int iVar3;
  wchar_t *pwVar4;
  WCHAR *pWVar5;
  undefined1 local_4d0 [12];
  HANDLE local_4c4;
  FString aFStack_4c0 [12];
  FString aFStack_4b4 [12];
  FString aFStack_4a8 [12];
  FString aFStack_49c [12];
  undefined1 local_490 [592];
  WCHAR local_240 [24];
  ushort local_210 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb84b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_4d0;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)&stack0xfffffb20);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  pwVar4 = L"..\\INPUT_THAI_HTML\\*.*";
  pWVar5 = local_240;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pWVar5 = *(undefined4 *)pwVar4;
    pwVar4 = pwVar4 + 2;
    pWVar5 = pWVar5 + 2;
  }
  *pWVar5 = *pwVar4;
  local_4c4 = FindFirstFileW(local_240,(LPWIN32_FIND_DATAW)local_490);
  if (local_4c4 != (HANDLE)0xffffffff) {
    do {
      appSprintf(local_210,(ushort *)L"..\\INPUT_THAI_HTML\\%s",local_490 + 0x2c);
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2((FOutputDevice *)(local_490 + 0x2c),*(ushort **)GLog_exref);
        (**(code **)(**(int **)GLog_exref + 4))();
      }
      iVar3 = FUN_1008c9a0(local_210);
      if (iVar3 != 0) {
        FUN_1000b3d0(L"Npc HTML");
        FUN_1000b3d0(L"Petition HTML");
        FUN_1000b3d0(L"Help HTML");
        FUN_1000b3d0(L"ServerInfo HTML");
        switch(*(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x324)) {
        case 0:
          if (*(uint *)(in_ECX + 500) < 8) {
            iVar3 = in_ECX + 0x1e0;
          }
          else {
            iVar3 = *(int *)(in_ECX + 0x1e0);
          }
          FUN_10088e40(iVar3);
          break;
        case 1:
          if (*(uint *)(in_ECX + 500) < 8) {
            puVar1 = (ushort *)(in_ECX + 0x1e0);
          }
          else {
            puVar1 = *(ushort **)(in_ECX + 0x1e0);
          }
          FString::FString(aFStack_4a8,puVar1);
          local_4._0_1_ = 1;
          FString::FString(aFStack_49c,(ushort *)L"HtmlString");
          local_4._0_1_ = 2;
          FUN_10040230(aFStack_49c,aFStack_4a8);
          local_4._0_1_ = 1;
          FString::~FString(aFStack_49c);
          local_4 = (uint)local_4._1_3_ << 8;
          FString::~FString(aFStack_4a8);
          if (DAT_1035786c == 0) {
            FUN_10005270();
          }
          FUN_100d1790(0x4c5,local_4d0);
        case 2:
          if (*(uint *)(in_ECX + 500) < 8) {
            puVar1 = (ushort *)(in_ECX + 0x1e0);
          }
          else {
            puVar1 = *(ushort **)(in_ECX + 0x1e0);
          }
          FString::FString(aFStack_4b4,puVar1);
          local_4._0_1_ = 3;
          FString::FString(aFStack_4c0,(ushort *)L"HtmlString");
          local_4._0_1_ = 4;
          FUN_10040230(aFStack_4c0,aFStack_4b4);
          local_4._0_1_ = 3;
          FString::~FString(aFStack_4c0);
          local_4 = (uint)local_4._1_3_ << 8;
          FString::~FString(aFStack_4b4);
          if (DAT_1035786c == 0) {
            FUN_10005270();
          }
          FUN_100d1790(0x4c4,local_4d0);
          break;
        case 3:
          if (*(uint *)(in_ECX + 500) < 8) {
            iVar3 = in_ECX + 0x1e0;
          }
          else {
            iVar3 = *(int *)(in_ECX + 0x1e0);
          }
          FUN_10088440(iVar3);
        }
        FUN_1008c510();
        FUN_1008bac0(local_490 + 0x2c);
        FUN_1008b9e0();
        *(int *)(in_ECX + 0x1d4) = *(int *)(in_ECX + 0x1d4) + 1;
      }
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2((FOutputDevice *)(local_490 + 0x2c),*(ushort **)GLog_exref);
        (**(code **)(**(int **)GLog_exref + 4))();
      }
      BVar2 = FindNextFileW(local_4c4,(LPWIN32_FIND_DATAW)local_490);
    } while (BVar2 != 0);
  }
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_4d0);
  return;
}


// ==== 1008ceb0 FUN_1008ceb0

bool FUN_1008ceb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == -0xccffff)) {
    iVar1 = FUN_1008caf0();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1008cf10 FUN_1008cf10

uint FUN_1008cf10(wint_t param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _iswctype(param_1,0x103);
  uVar2 = _iswctype(param_1,4);
  return uVar2 | uVar1;
}


// ==== 1008cf40 FUN_1008cf40

void FUN_1008cf40(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1008cf50 FUN_1008cf50

int FUN_1008cf50(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2;
}


// ==== 1008cf70 FUN_1008cf70

int FUN_1008cf70(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
}


// ==== 1008cfa0 FUN_1008cfa0

void FUN_1008cfa0(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 1008cfc0 FUN_1008cfc0

void FUN_1008cfc0(uint param_1)

{
  undefined1 local_c [12];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    FUN_10021410(0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_102add7c);
  }
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1 * 4,&DAT_1022f8a0);
  return;
}


// ==== 1008d020 FUN_1008d020

void FUN_1008d020(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = Parser::vftable;
  return;
}


// ==== 1008d030 FUN_1008d030

void FUN_1008d030(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = Parser::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1008d060 FUN_1008d060

void FUN_1008d060(short *param_1)

{
  short sVar1;
  
  for (; (((sVar1 = *param_1, sVar1 == 0x20 || (sVar1 == 9)) || (sVar1 == 0xd)) || (sVar1 == 10));
      param_1 = param_1 + 1) {
  }
  return;
}


// ==== 1008d090 FUN_1008d090

void FUN_1008d090(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  sVar2 = *param_1;
  while ((((sVar2 != 0 && (sVar2 != 0x20)) && (sVar2 != 9)) &&
         (((sVar2 != 0xd && (sVar2 != 10)) && ((sVar2 != 0x3e && (sVar2 != 0x3c))))))) {
    psVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    sVar2 = *psVar1;
  }
  return;
}


// ==== 1008d0e0 FUN_1008d0e0

void FUN_1008d0e0(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  sVar2 = *param_1;
  while (((((sVar2 != 0 && (sVar2 != 0x20)) && (sVar2 != 9)) && ((sVar2 != 0xd && (sVar2 != 10))))
         && ((sVar2 != 0x3d && ((sVar2 != 0x3e && (sVar2 != 0x3c))))))) {
    psVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    sVar2 = *psVar1;
  }
  return;
}


// ==== 1008d130 FUN_1008d130

void FUN_1008d130(uint param_1)

{
  undefined1 local_c [12];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x1c) {
    FUN_10021410(0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_102add7c);
  }
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1 * 0x1c,&DAT_1022f8a0);
  return;
}


// ==== 1008d190 FUN_1008d190

void FUN_1008d190(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x88) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x88));
    *(undefined4 *)(in_ECX + 0x88) = 0;
  }
  return;
}


// ==== 1008d1c0 FUN_1008d1c0

undefined4 FUN_1008d1c0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int in_ECX;
  
  FUN_1008d190();
  iVar1 = (**(code **)(**(int **)GFileManager_exref + 0x10))(param_1);
  piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))
                            (param_1,0,*(undefined4 *)GNull_exref);
  if (piVar2 != (int *)0x0) {
    pvVar3 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(iVar1 + 2,&DAT_1022f8a0);
    appMemset(pvVar3,0,iVar1 + 2);
    if (pvVar3 != (void *)0x0) {
      (**(code **)(*piVar2 + 4))(pvVar3,iVar1);
      *(void **)(in_ECX + 0x88) = pvVar3;
    }
    (**(code **)*piVar2)(1);
  }
  return *(undefined4 *)(in_ECX + 0x88);
}


// ==== 1008d260 FUN_1008d260

void FUN_1008d260(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


// ==== 1008d280 FUN_1008d280

void * FUN_1008d280(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _Dst = (void *)(param_3 + iVar1 * -2);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 2,param_1,iVar1 * 2);
  }
  return _Dst;
}


// ==== 1008d2b0 FUN_1008d2b0

void FUN_1008d2b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


// ==== 1008d2d0 FUN_1008d2d0

void * FUN_1008d2d0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}


// ==== 1008d300 FUN_1008d300

void FUN_1008d300(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1008d340 FUN_1008d340

void FUN_1008d340(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eb8bf;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *in_ECX = Parser::vftable;
  local_4 = 0;
  *in_ECX = ListParser::vftable;
  FUN_10080850(uVar1);
  in_ECX[10] = 7;
  in_ECX[9] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  in_ECX[0x11] = 7;
  in_ECX[0x10] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  in_ECX[0x18] = 7;
  in_ECX[0x17] = 0;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  in_ECX[0x1f] = 7;
  in_ECX[0x1e] = 0;
  *(undefined2 *)(in_ECX + 0x1a) = 0;
  in_ECX[0x22] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1008d3f0 FUN_1008d3f0

undefined4 FUN_1008d3f0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar1 = *(uint *)(in_ECX + 0x18);
  puVar3 = (undefined4 *)(in_ECX + 4);
  puVar4 = puVar3;
  if (7 < uVar1) {
    puVar4 = (undefined4 *)*puVar3;
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = puVar3;
    if (7 < uVar1) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (puVar2 <= puVar4) {
      puVar2 = puVar3;
      if (7 < uVar1) {
        puVar2 = (undefined4 *)*puVar3;
      }
      if (puVar4 <= (undefined4 *)((int)puVar2 + *(int *)(in_ECX + 0x14) * 2)) goto LAB_1008d434;
    }
  }
  FUN_101c238d();
LAB_1008d434:
  iVar5 = 0;
  if (param_3 != 0) {
    if ((param_2 != -2) && ((param_2 == 0 || (param_2 != in_ECX)))) {
      FUN_101c238d();
    }
    iVar5 = param_3 - (int)puVar4 >> 1;
  }
  FUN_10084810(iVar5,1);
  if (7 < *(uint *)(in_ECX + 0x18)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  FUN_10083960((int)puVar3 + iVar5 * 2,in_ECX);
  return param_1;
}


// ==== 1008d490 FUN_1008d490

void FUN_1008d490(void)

{
  void *_Src;
  void *_Dst;
  rsize_t _DstSize;
  int iVar1;
  int in_ECX;
  
  _Src = *(void **)(in_ECX + 8);
  if (_Src < *(void **)(in_ECX + 4)) {
    FUN_101c238d();
  }
  _Dst = *(void **)(in_ECX + 4);
  if (*(void **)(in_ECX + 8) < _Dst) {
    FUN_101c238d();
  }
  if (_Dst != _Src) {
    iVar1 = *(int *)(in_ECX + 8) - (int)_Src >> 1;
    _DstSize = iVar1 * 2;
    if (0 < iVar1) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(in_ECX + 8) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}


// ==== 1008d4e0 FUN_1008d4e0

void * FUN_1008d4e0(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _DstSize = iVar1 * 2;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}


// ==== 1008d510 FUN_1008d510

void * FUN_1008d510(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}


// ==== 1008d540 FUN_1008d540

void FUN_1008d540(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101eb91f;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *in_ECX = ListParser::vftable;
  local_4 = 5;
  FUN_10089060(uVar1);
  FUN_10089060();
  FUN_10089060();
  FUN_10089060();
  local_4._0_1_ = 4;
  if (7 < (uint)in_ECX[0x1f]) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[0x1a]);
  }
  in_ECX[0x1f] = 7;
  in_ECX[0x1e] = 0;
  *(undefined2 *)(in_ECX + 0x1a) = 0;
  local_4._0_1_ = 3;
  if (7 < (uint)in_ECX[0x18]) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[0x13]);
  }
  in_ECX[0x18] = 7;
  in_ECX[0x17] = 0;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  local_4._0_1_ = 2;
  if (7 < (uint)in_ECX[0x11]) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[0xc]);
  }
  in_ECX[0x11] = 7;
  in_ECX[0x10] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  local_4._0_1_ = 1;
  if (7 < (uint)in_ECX[10]) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[5]);
  }
  in_ECX[10] = 7;
  in_ECX[9] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10080860();
  *in_ECX = Parser::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1008d690 FUN_1008d690

void FUN_1008d690(int param_1)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  undefined1 local_8 [8];
  
  uVar2 = *(uint *)(param_1 + 0x18);
  psVar1 = (short *)(param_1 + 4);
  psVar5 = psVar1;
  if (7 < uVar2) {
    psVar5 = *(short **)psVar1;
  }
  if (psVar5 != (short *)0x0) {
    psVar3 = psVar1;
    if (7 < uVar2) {
      psVar3 = *(short **)psVar1;
    }
    if (psVar3 <= psVar5) {
      psVar3 = psVar1;
      if (7 < uVar2) {
        psVar3 = *(short **)psVar1;
      }
      if (psVar5 <= psVar3 + *(int *)(param_1 + 0x14)) goto LAB_1008d6e0;
    }
  }
  FUN_101c238d();
LAB_1008d6e0:
  do {
    uVar2 = *(uint *)(param_1 + 0x18);
    psVar3 = psVar1;
    if (7 < uVar2) {
      psVar3 = *(short **)psVar1;
    }
    psVar3 = psVar3 + *(int *)(param_1 + 0x14);
    if (psVar3 == (short *)0x0) {
LAB_1008d71a:
      FUN_101c238d();
    }
    else {
      psVar4 = psVar1;
      if (7 < uVar2) {
        psVar4 = *(short **)psVar1;
      }
      if (psVar3 < psVar4) goto LAB_1008d71a;
      psVar4 = psVar1;
      if (7 < uVar2) {
        psVar4 = *(short **)psVar1;
      }
      if (psVar4 + *(int *)(param_1 + 0x14) < psVar3) goto LAB_1008d71a;
    }
    if (psVar5 == psVar3) {
      return;
    }
    if (param_1 != -2) {
      psVar3 = psVar1;
      if (7 < *(uint *)(param_1 + 0x18)) {
        psVar3 = *(short **)psVar1;
      }
      if (psVar3 + *(int *)(param_1 + 0x14) <= psVar5) {
        FUN_101c238d();
      }
    }
    if ((*psVar5 == 0xd) || (*psVar5 == 10)) {
      FUN_1008d3f0(local_8,param_1,psVar5);
    }
    else {
      if (param_1 != -2) {
        psVar3 = psVar1;
        if (7 < *(uint *)(param_1 + 0x18)) {
          psVar3 = *(short **)psVar1;
        }
        if (psVar3 + *(int *)(param_1 + 0x14) <= psVar5) {
          FUN_101c238d();
        }
      }
      psVar5 = psVar5 + 1;
    }
  } while( true );
}


// ==== 1008d7a0 FUN_1008d7a0

void FUN_1008d7a0(int param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  undefined1 local_8 [8];
  
  uVar3 = *(uint *)(param_1 + 0x18);
  psVar1 = (short *)(param_1 + 4);
  psVar6 = psVar1;
  if (7 < uVar3) {
    psVar6 = *(short **)psVar1;
  }
  if (psVar6 != (short *)0x0) {
    psVar4 = psVar1;
    if (7 < uVar3) {
      psVar4 = *(short **)psVar1;
    }
    if (psVar4 <= psVar6) {
      psVar4 = psVar1;
      if (7 < uVar3) {
        psVar4 = *(short **)psVar1;
      }
      if (psVar6 <= psVar4 + *(int *)(param_1 + 0x14)) goto LAB_1008d7f0;
    }
  }
  FUN_101c238d();
LAB_1008d7f0:
  do {
    uVar3 = *(uint *)(param_1 + 0x18);
    psVar4 = psVar1;
    if (7 < uVar3) {
      psVar4 = *(short **)psVar1;
    }
    psVar4 = psVar4 + *(int *)(param_1 + 0x14);
    if (psVar4 == (short *)0x0) {
LAB_1008d82a:
      FUN_101c238d();
    }
    else {
      psVar5 = psVar1;
      if (7 < uVar3) {
        psVar5 = *(short **)psVar1;
      }
      if (psVar4 < psVar5) goto LAB_1008d82a;
      psVar5 = psVar1;
      if (7 < uVar3) {
        psVar5 = *(short **)psVar1;
      }
      if (psVar5 + *(int *)(param_1 + 0x14) < psVar4) goto LAB_1008d82a;
    }
    if (psVar6 == psVar4) {
      return;
    }
    if (param_1 != -2) {
      psVar4 = psVar1;
      if (7 < *(uint *)(param_1 + 0x18)) {
        psVar4 = *(short **)psVar1;
      }
      if (psVar4 + *(int *)(param_1 + 0x14) <= psVar6) {
        FUN_101c238d();
      }
    }
    sVar2 = *psVar6;
    if ((((sVar2 != 0x20) && (sVar2 != 9)) && (sVar2 != 0xd)) && (sVar2 != 10)) {
      return;
    }
    FUN_1008d3f0(local_8,param_1,psVar6);
  } while( true );
}


// ==== 1008d890 FUN_1008d890

void FUN_1008d890(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  undefined4 *puVar10;
  short *local_c;
  undefined1 local_8 [4];
  short *local_4;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  psVar5 = (short *)(param_1 + 4);
  psVar8 = psVar5;
  if (7 < uVar2) {
    psVar8 = *(short **)psVar5;
  }
  if (psVar8 == (short *)0x0) {
LAB_1008d8d7:
    FUN_101c238d();
  }
  else {
    psVar9 = psVar5;
    if (7 < uVar2) {
      psVar9 = *(short **)psVar5;
    }
    if (psVar8 < psVar9) goto LAB_1008d8d7;
    psVar9 = psVar5;
    if (7 < uVar2) {
      psVar9 = *(short **)psVar5;
    }
    if (psVar9 + *(int *)(param_1 + 0x14) < psVar8) goto LAB_1008d8d7;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  local_c = psVar5;
  if (7 < uVar2) {
    local_c = *(short **)psVar5;
  }
  local_c = local_c + *(int *)(param_1 + 0x14);
  local_4 = psVar8;
  if (local_c != (short *)0x0) {
    psVar8 = psVar5;
    if (7 < uVar2) {
      psVar8 = *(short **)psVar5;
    }
    if (psVar8 <= local_c) {
      psVar8 = psVar5;
      if (7 < uVar2) {
        psVar8 = *(short **)psVar5;
      }
      if (local_c <= psVar8 + *(int *)(param_1 + 0x14)) goto LAB_1008d930;
    }
  }
  FUN_101c238d();
LAB_1008d930:
  do {
    uVar2 = *(uint *)(param_1 + 0x18);
    psVar8 = psVar5;
    if (7 < uVar2) {
      psVar8 = *(short **)psVar5;
    }
    psVar8 = psVar8 + *(int *)(param_1 + 0x14);
    if (psVar8 == (short *)0x0) {
LAB_1008d96d:
      FUN_101c238d();
    }
    else {
      psVar9 = psVar5;
      if (7 < uVar2) {
        psVar9 = *(short **)psVar5;
      }
      if (psVar8 < psVar9) goto LAB_1008d96d;
      psVar9 = psVar5;
      if (7 < uVar2) {
        psVar9 = *(short **)psVar5;
      }
      if (psVar9 + *(int *)(param_1 + 0x14) < psVar8) goto LAB_1008d96d;
    }
    if ((param_1 != -2) && (param_1 == 0)) {
      FUN_101c238d();
    }
    psVar9 = local_4;
    if (local_4 == psVar8) break;
    if (param_1 != -2) {
      if (param_1 == 0) {
        FUN_101c238d();
      }
      if (*(uint *)(param_1 + 0x18) < 8) {
        iVar6 = param_1 + 4;
      }
      else {
        iVar6 = *(int *)(param_1 + 4);
      }
      if ((short *)(iVar6 + *(int *)(param_1 + 0x14) * 2) <= psVar9) {
        FUN_101c238d();
      }
    }
    sVar1 = *psVar9;
    if ((((sVar1 == 0x20) || (sVar1 == 9)) || (sVar1 == 0xd)) || (sVar1 == 10)) {
      uVar2 = *(uint *)(param_1 + 0x18);
      psVar8 = psVar5;
      if (7 < uVar2) {
        psVar8 = *(short **)psVar5;
      }
      psVar8 = psVar8 + *(int *)(param_1 + 0x14);
      if (psVar8 == (short *)0x0) {
LAB_1008da19:
        FUN_101c238d();
      }
      else {
        psVar7 = psVar5;
        if (7 < uVar2) {
          psVar7 = *(short **)psVar5;
        }
        if (psVar8 < psVar7) goto LAB_1008da19;
        psVar7 = psVar5;
        if (7 < uVar2) {
          psVar7 = *(short **)psVar5;
        }
        if (psVar7 + *(int *)(param_1 + 0x14) < psVar8) goto LAB_1008da19;
      }
      if ((param_1 != -2) && (param_1 == 0)) {
        FUN_101c238d();
      }
      if (local_c == psVar8) {
        local_c = psVar9;
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x18);
      local_c = psVar5;
      if (7 < uVar2) {
        local_c = *(short **)psVar5;
      }
      local_c = local_c + *(int *)(param_1 + 0x14);
      if (local_c != (short *)0x0) {
        psVar8 = psVar5;
        if (7 < uVar2) {
          psVar8 = *(short **)psVar5;
        }
        if (psVar8 <= local_c) {
          psVar8 = psVar5;
          if (7 < uVar2) {
            psVar8 = *(short **)psVar5;
          }
          psVar9 = local_4;
          if (psVar8 + *(int *)(param_1 + 0x14) < local_c) goto LAB_1008da83;
          goto LAB_1008da94;
        }
      }
LAB_1008da83:
      FUN_101c238d();
      psVar9 = local_4;
    }
LAB_1008da94:
    if (param_1 != -2) {
      if (param_1 == 0) {
        FUN_101c238d();
      }
      if (*(uint *)(param_1 + 0x18) < 8) {
        iVar6 = param_1 + 4;
      }
      else {
        iVar6 = *(int *)(param_1 + 4);
      }
      if ((short *)(iVar6 + *(int *)(param_1 + 0x14) * 2) <= psVar9) {
        FUN_101c238d();
      }
    }
    local_4 = psVar9 + 1;
  } while( true );
  uVar2 = *(uint *)(param_1 + 0x18);
  psVar8 = psVar5;
  if (7 < uVar2) {
    psVar8 = *(short **)psVar5;
  }
  psVar8 = psVar8 + *(int *)(param_1 + 0x14);
  if (psVar8 == (short *)0x0) {
LAB_1008db0a:
    FUN_101c238d();
  }
  else {
    psVar9 = psVar5;
    if (7 < uVar2) {
      psVar9 = *(short **)psVar5;
    }
    if (psVar8 < psVar9) goto LAB_1008db0a;
    psVar9 = psVar5;
    if (7 < uVar2) {
      psVar9 = *(short **)psVar5;
    }
    if (psVar9 + *(int *)(param_1 + 0x14) < psVar8) goto LAB_1008db0a;
  }
  if ((param_1 != -2) && (param_1 == 0)) {
    FUN_101c238d();
  }
  if (local_c == psVar8) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  psVar8 = psVar5;
  if (7 < uVar2) {
    psVar8 = *(short **)psVar5;
  }
  if (psVar8 != (short *)0x0) {
    psVar9 = psVar5;
    if (7 < uVar2) {
      psVar9 = *(short **)psVar5;
    }
    if (psVar9 <= psVar8) {
      if (7 < uVar2) {
        psVar5 = *(short **)psVar5;
      }
      if (psVar8 <= psVar5 + *(int *)(param_1 + 0x14)) goto LAB_1008db6d;
    }
  }
  FUN_101c238d();
LAB_1008db6d:
  bVar4 = false;
  do {
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 < 8) {
      iVar6 = param_1 + 4;
    }
    else {
      iVar6 = *(int *)(param_1 + 4);
    }
    iVar3 = *(int *)(param_1 + 0x14) * 2;
    psVar5 = (short *)(iVar3 + iVar6);
    if (psVar5 == (short *)0x0) {
LAB_1008dbb1:
      FUN_101c238d();
    }
    else {
      psVar9 = (short *)(param_1 + 4);
      if (7 < uVar2) {
        psVar9 = *(short **)psVar9;
      }
      if (psVar5 < psVar9) goto LAB_1008dbb1;
      puVar10 = (undefined4 *)(param_1 + 4);
      if (7 < uVar2) {
        puVar10 = (undefined4 *)*puVar10;
      }
      if ((short *)(iVar3 + (int)puVar10) < psVar5) goto LAB_1008dbb1;
    }
    if ((param_1 != -2) && (param_1 == 0)) {
      FUN_101c238d();
    }
    if (psVar8 == psVar5) {
      return;
    }
    if ((param_1 != -2) && (param_1 == 0)) {
      FUN_101c238d();
    }
    if ((psVar8 == local_c) || (bVar4)) {
      FUN_1008d3f0(local_8,param_1,psVar8);
      bVar4 = true;
    }
    else {
      if (param_1 != -2) {
        if (param_1 == 0) {
          FUN_101c238d();
        }
        if (*(uint *)(param_1 + 0x18) < 8) {
          iVar6 = param_1 + 4;
        }
        else {
          iVar6 = *(int *)(param_1 + 4);
        }
        if ((short *)(iVar6 + *(int *)(param_1 + 0x14) * 2) <= psVar8) {
          FUN_101c238d();
        }
      }
      psVar8 = psVar8 + 1;
    }
  } while( true );
}


// ==== 1008dc40 FUN_1008dc40

undefined2 * FUN_1008dc40(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}


// ==== 1008dc70 FUN_1008dc70

undefined4 * FUN_1008dc70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}


// ==== 1008dca0 FUN_1008dca0

void FUN_1008dca0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_101c0f70();
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  uVar1 = *(uint *)(in_ECX + 0x14);
  if ((-uVar1 - 1 <= param_3) || (uVar1 + param_3 < uVar1)) {
    FUN_101c0f31();
  }
  if (param_3 != 0) {
    uVar1 = *(int *)(in_ECX + 0x14) + param_3;
    if (0x7ffffffe < uVar1) {
      FUN_101c0f31();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar1) {
      FUN_100873e0(uVar1,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        **(undefined2 **)(in_ECX + 4) = 0;
        return;
      }
      *(undefined2 *)(in_ECX + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_1 + 0x18) < 8) {
        param_1 = param_1 + 4;
      }
      else {
        param_1 = *(int *)(param_1 + 4);
      }
      if (*(uint *)(in_ECX + 0x18) < 8) {
        iVar2 = in_ECX + 4;
      }
      else {
        iVar2 = *(int *)(in_ECX + 4);
      }
      _memcpy_s((void *)(iVar2 + *(int *)(in_ECX + 0x14) * 2),
                (*(uint *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14)) * 2,
                (void *)(param_1 + param_2 * 2),param_3 * 2);
      *(uint *)(in_ECX + 0x14) = uVar1;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        *(undefined2 *)(*(int *)(in_ECX + 4) + uVar1 * 2) = 0;
        return;
      }
      *(undefined2 *)(in_ECX + 4 + uVar1 * 2) = 0;
    }
  }
  return;
}


// ==== 1008ddb0 FUN_1008ddb0

void FUN_1008ddb0(undefined4 *param_1,uint param_2)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(in_ECX + 0x18);
  puVar2 = (undefined4 *)(in_ECX + 4);
  puVar1 = puVar2;
  if (7 < uVar3) {
    puVar1 = (undefined4 *)*puVar2;
  }
  if (puVar1 <= param_1) {
    puVar1 = puVar2;
    if (7 < uVar3) {
      puVar1 = (undefined4 *)*puVar2;
    }
    if (param_1 < (undefined4 *)((int)puVar1 + *(int *)(in_ECX + 0x14) * 2)) {
      if (7 < uVar3) {
        puVar2 = (undefined4 *)*puVar2;
      }
      FUN_1008dca0(in_ECX,(int)param_1 - (int)puVar2 >> 1,param_2);
      return;
    }
  }
  uVar3 = *(uint *)(in_ECX + 0x14);
  if ((-uVar3 - 1 <= param_2) || (uVar3 + param_2 < uVar3)) {
    FUN_101c0f31();
  }
  if (param_2 != 0) {
    uVar3 = *(int *)(in_ECX + 0x14) + param_2;
    if (0x7ffffffe < uVar3) {
      FUN_101c0f31();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar3) {
      FUN_100873e0(uVar3,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar3 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)puVar2 = 0;
      return;
    }
    if (uVar3 != 0) {
      puVar1 = puVar2;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar1 = (undefined4 *)*puVar2;
      }
      _memcpy_s((void *)((int)puVar1 + *(int *)(in_ECX + 0x14) * 2),
                (*(uint *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14)) * 2,param_1,param_2 * 2);
      *(uint *)(in_ECX + 0x14) = uVar3;
      if (7 < *(uint *)(in_ECX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)((int)puVar2 + uVar3 * 2) = 0;
    }
  }
  return;
}


// ==== 1008deb0 FUN_1008deb0

void FUN_1008deb0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eb951;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 7;
    *(undefined2 *)(param_1 + 4) = 0;
    FUN_100881c0(param_2,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1008df20 FUN_1008df20

void FUN_1008df20(byte param_1)

{
  FUN_1008d540();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1008df50 FUN_1008df50

void FUN_1008df50(int param_1)

{
  if (7 < *(uint *)(param_1 + 0x18)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 7;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}


// ==== 1008df90 FUN_1008df90

void FUN_1008df90(undefined4 param_1,undefined4 param_2)

{
  FUN_1008deb0(param_1,param_2);
  return;
}


// ==== 1008dfb0 FUN_1008dfb0

void FUN_1008dfb0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10022f70("vector<T> too long",0x12);
  local_4 = 0;
  FUN_10023220(local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_102ae3b8);
}


// ==== 1008e020 FUN_1008e020

void FUN_1008e020(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10022f70("vector<T> too long",0x12);
  local_4 = 0;
  FUN_10023220(local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_102ae3b8);
}


// ==== 1008e090 FUN_1008e090

void FUN_1008e090(undefined4 param_1,int param_2,uint param_3,ushort *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101eb9d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_4 = (ushort *)(uint)*param_4;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(in_ECX + 0xc) - iVar2 >> 1;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 1;
    }
    uVar5 = param_3;
    if (0x7fffffffU - iVar1 < param_3) {
      FUN_1008dfb0();
      iVar2 = extraout_ECX;
      uVar5 = extraout_EDX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 1;
    }
    if (uVar6 < iVar1 + uVar5) {
      if (0x7fffffff - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 1;
      }
      if (uVar6 < iVar1 + uVar5) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 1;
        }
        uVar6 = iVar2 + uVar5;
      }
      iVar1 = FUN_10083aa0(uVar6);
      local_8 = 0;
      uVar3 = FUN_1008d4e0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_1008dc40(uVar3,param_3,&param_4);
      FUN_1008d4e0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar2 >> 1;
      }
      if (iVar2 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
      }
      *(uint *)(in_ECX + 0xc) = iVar1 + uVar6 * 2;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar4) * 2;
      *(int *)(in_ECX + 4) = iVar1;
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(in_ECX + 8);
    if ((uint)(iVar2 - param_2 >> 1) < uVar5) {
      FUN_1008d4e0(param_2,iVar2,uVar5 * 2 + param_2);
      local_8 = 2;
      FUN_1008dc40(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 1),&param_4);
      local_8 = 0xffffffff;
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + uVar5 * 2;
      FUN_1008d260(param_2,*(int *)(in_ECX + 8) + uVar5 * -2,&param_4);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar2 + uVar5 * -2;
    uVar3 = FUN_1008d4e0(iVar1,iVar2,iVar2);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    FUN_1008d280(param_2,iVar1,iVar2);
    FUN_1008d260(param_2,uVar5 * 2 + param_2,&param_4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1008e1f9 Catch@1008e1f9

void Catch_1008e1f9(void)

{
  int unaff_EBP;
  
  FUN_1008cfa0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008e209 Catch@1008e209

void Catch_1008e209(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008e2e0 FUN_1008e2e0

void FUN_1008e2e0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eb9f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10022f70("vector<T> too long",0x12);
  local_4 = 0;
  FUN_10023220(local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_102ae3b8);
}


// ==== 1008e350 FUN_1008e350

void FUN_1008e350(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    if (7 < *(uint *)(param_1 + 0x18)) {
      (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 0x18) = 7;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}


// ==== 1008e3a0 FUN_1008e3a0

void FUN_1008e3a0(int param_1,int param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eba20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1008df90(param_1,param_3);
    param_1 = param_1 + 0x1c;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1008e417 Catch@1008e417

void Catch_1008e417(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_1008df50(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008e440 FUN_1008e440

int FUN_1008e440(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_100881c0(param_1,0,0xffffffff);
    param_1 = param_1 + 0x1c;
    param_3 = param_3 + 0x1c;
  } while (param_1 != param_2);
  return param_3;
}


// ==== 1008e480 FUN_1008e480

/* WARNING: Removing unreachable block (ram,0x1008e613) */

short * FUN_1008e480(short *param_1,int param_2,int *param_3)

{
  short sVar1;
  longlong lVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int unaff_EBP;
  int iVar9;
  int iVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101eba48;
  local_c = ExceptionList;
  uVar4 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ppvVar3 = &local_c;
  if (*param_1 == 0x21) {
    if (param_1[1] == 0x2d) {
      *param_3 = -1;
      if (param_1[2] != 0x2d) {
        return param_1 + 2;
      }
      return param_1 + 3;
    }
    ExceptionList = &local_c;
    param_1 = (short *)FUN_1008d060(param_1 + 1);
    ppvVar3 = ExceptionList;
  }
  ExceptionList = ppvVar3;
  if (*param_1 == 0x2f) {
    *(undefined4 *)(param_2 + 4) = 0;
    param_1 = (short *)FUN_1008d060(param_1 + 1);
  }
  else {
    *(undefined4 *)(param_2 + 4) = 1;
  }
  iVar5 = FUN_1008cf10(*param_1);
  if (iVar5 == 0) {
    *param_3 = -100;
    psVar6 = param_1;
  }
  else {
    psVar6 = (short *)FUN_1008d090(param_1);
    if (param_1 == psVar6) {
      *param_3 = -100;
      psVar6 = param_1;
    }
    else {
      iVar9 = (int)psVar6 - (int)param_1 >> 1;
      lVar2 = (ulonglong)(iVar9 + 1) * 2;
      psVar7 = (short *)(**(code **)**(undefined4 **)GMalloc_exref)
                                  ((uint)lVar2 | -(uint)((int)((ulonglong)lVar2 >> 0x20) != 0),
                                   &DAT_1022f8a0,uVar4);
      iVar5 = 0;
      if (0 < iVar9) {
        psVar8 = psVar7;
        iVar10 = iVar9;
        do {
          iVar5 = _toupper((uint)*(ushort *)(((int)param_1 - (int)psVar7) + (int)psVar8));
          *psVar8 = (short)iVar5;
          psVar8 = psVar8 + 1;
          iVar10 = iVar10 + -1;
          iVar5 = iVar9;
        } while (iVar10 != 0);
      }
      psVar7[iVar5] = 0;
      psVar8 = psVar7;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      FUN_10089100(psVar7,(int)psVar8 - (int)(psVar7 + 1) >> 1);
      local_c = (void *)0x0;
      FUN_100881c0(&stack0xffffffd0,0,0xffffffff);
      local_c = (void *)0xffffffff;
      (**(code **)(**(int **)GMalloc_exref + 8))(psVar7);
      if (*(uint *)(unaff_EBP + 0x28) < 8) {
        iVar5 = unaff_EBP + 0x14;
      }
      else {
        iVar5 = *(int *)(unaff_EBP + 0x14);
      }
      iVar5 = FUN_10080870(iVar5);
      *param_3 = iVar5;
      if (iVar5 == -1) {
        *param_3 = -10;
      }
    }
  }
  ExceptionList = local_c;
  return psVar6;
}


// ==== 1008e690 FUN_1008e690

short * FUN_1008e690(short *param_1)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eba78;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  psVar3 = param_1 + 1;
  sVar1 = param_1[1];
  while (((sVar1 != 0 && (sVar1 != 0x3c)) && (psVar3 = psVar3 + 1, sVar1 != 0x3e))) {
    sVar1 = *psVar3;
  }
  if (param_1 != psVar3) {
    local_10 = 7;
    local_14 = 0;
    local_24 = local_24 & 0xffff0000;
    FUN_10089100(param_1,(int)psVar3 - (int)param_1 >> 1);
    local_4 = 0;
    FUN_100881c0(local_28,0,0xffffffff);
    local_4 = 0xffffffff;
    if (7 < local_10) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_24,uVar2);
    }
  }
  ExceptionList = local_c;
  return psVar3;
}


// ==== 1008e770 FUN_1008e770

short * FUN_1008e770(short *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int in_ECX;
  short *psVar4;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ebaa8;
  local_c = ExceptionList;
  uVar3 = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  psVar4 = param_1;
  if (*param_1 == 0x3c) {
    psVar4 = param_1 + 1;
  }
  FUN_10089100(&DAT_1022f9f8,0);
  sVar2 = *psVar4;
  while ((sVar2 != 0 && (sVar2 != 0x3c))) {
    psVar1 = psVar4 + 1;
    psVar4 = psVar4 + 1;
    sVar2 = *psVar1;
  }
  local_10 = 7;
  local_14 = 0;
  local_24 = (uint)local_24._2_2_ << 0x10;
  FUN_10089100(param_1,(int)psVar4 - (int)param_1 >> 1);
  local_4 = 0;
  FUN_100881c0(local_28,0,0xffffffff);
  local_4 = 0xffffffff;
  if (7 < local_10) {
    (**(code **)(**(int **)GMalloc_exref + 8))(local_24,uVar3);
  }
  local_10 = 7;
  local_14 = 0;
  local_24 = local_24 & 0xffff0000;
  FUN_1008d690(param_2 + 8);
  if (*(int *)(in_ECX + 0x80) != 0x14) {
    FUN_1008d7a0(param_2 + 8);
  }
  ExceptionList = local_c;
  return psVar4;
}


// ==== 1008e880 FUN_1008e880

void FUN_1008e880(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  uint local_434;
  undefined1 local_430 [4];
  uint local_42c;
  undefined4 local_41c;
  uint local_418;
  int local_414;
  ushort local_410 [512];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ebb12;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_434;
  ExceptionList = &local_c;
  iVar12 = 0;
  do {
    local_414 = appStrlen(*(ushort **)((int)&PTR_DAT_1034efcc + iVar12));
    local_434 = *(uint *)(param_1 + 0x14);
    psVar11 = *(short **)((int)&PTR_DAT_1034efcc + iVar12);
    psVar5 = psVar11;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    while (uVar4 = FUN_1008b9f0(psVar11,0,(int)psVar5 - (int)(psVar11 + 1) >> 1), uVar4 < local_434)
    {
      FUN_10084810(uVar4,local_414);
      psVar11 = *(short **)((int)&PTR_DAT_1034efec + iVar12);
      psVar5 = psVar11;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      FUN_1008bd30(uVar4,psVar11,(int)psVar5 - (int)(psVar11 + 1) >> 1);
      psVar11 = *(short **)((int)&PTR_DAT_1034efcc + iVar12);
      psVar5 = psVar11;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
    }
    iVar12 = iVar12 + 4;
    puVar8 = (ushort *)PTR_DAT_1034f008;
  } while (iVar12 < 0x20);
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = (ushort *)PTR_DAT_1034f008;
  } while (uVar2 != 0);
LAB_1008e98b:
  uVar4 = FUN_1008b9f0(puVar9,0,(int)puVar8 - (int)(puVar9 + 1) >> 1);
  local_434 = FUN_1008b9f0(&DAT_10250124,uVar4,1);
  iVar12 = local_434 - uVar4;
  while ((uVar10 = *(uint *)(param_1 + 0x14), psVar11 = (short *)PTR_DAT_1034f00c, uVar4 < uVar10 &&
         (local_434 < uVar10))) {
    puVar8 = puVar9;
    if ((uVar10 <= uVar4) || (uVar10 <= local_434)) goto LAB_1008eae0;
    iVar6 = appStrlen(puVar9);
    iVar6 = iVar12 - iVar6;
    iVar7 = appStrlen((ushort *)PTR_DAT_1034f008);
    iVar6 = FUN_1008c040(local_430,iVar7 + uVar4,iVar6);
    local_4 = 0;
    if (*(uint *)(iVar6 + 0x18) < 8) {
      puVar8 = (ushort *)(iVar6 + 4);
    }
    else {
      puVar8 = *(ushort **)(iVar6 + 4);
    }
    appStrcpy(local_410,puVar8);
    local_4 = 0xffffffff;
    if (7 < local_418) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_42c);
    }
    local_418 = 7;
    local_41c = 0;
    local_42c = local_42c & 0xffff0000;
    iVar6 = appAtoi(local_410);
    if ((local_410[0] != 0) && (iVar6 != 0)) goto code_r0x1008ea81;
    FUN_10084810(uVar4,iVar12);
    uVar4 = 0xffffffff;
    puVar9 = (ushort *)PTR_DAT_1034f008;
  }
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
LAB_1008eb1e:
  uVar4 = FUN_1008b9f0(PTR_DAT_1034f00c,0,(int)psVar11 - (int)(PTR_DAT_1034f00c + 2) >> 1);
  uVar10 = FUN_1008b9f0(&DAT_10250124,uVar4,1);
  iVar12 = uVar10 - uVar4;
  while ((uVar3 = *(uint *)(param_1 + 0x14), uVar4 < uVar3 && (uVar10 < uVar3))) {
    psVar11 = (short *)PTR_DAT_1034f00c;
    if ((uVar3 <= uVar4) || (uVar3 <= uVar10)) goto LAB_1008ec77;
    iVar6 = appStrlen((ushort *)PTR_DAT_1034f00c);
    iVar6 = iVar12 - iVar6;
    iVar7 = appStrlen((ushort *)PTR_DAT_1034f00c);
    iVar6 = FUN_1008c040(local_430,iVar7 + uVar4,iVar6);
    local_4 = 1;
    if (*(uint *)(iVar6 + 0x18) < 8) {
      puVar8 = (ushort *)(iVar6 + 4);
    }
    else {
      puVar8 = *(ushort **)(iVar6 + 4);
    }
    appStrcpy(local_410,puVar8);
    local_4 = 0xffffffff;
    if (7 < local_418) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_42c);
    }
    local_418 = 7;
    local_41c = 0;
    local_42c = local_42c & 0xffff0000;
    local_434 = appAtoi(local_410);
    if ((local_410[0] != 0) && (local_434 != 0)) goto code_r0x1008ec25;
    FUN_10084810(uVar4,iVar12);
    uVar4 = 0xffffffff;
  }
  psVar11 = (short *)PTR_DAT_1034f010;
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  iVar12 = (int)psVar11 - (int)(PTR_DAT_1034f010 + 2);
LAB_1008ecc8:
  uVar4 = FUN_1008b9f0(PTR_DAT_1034f010,0,iVar12 >> 1);
  uVar10 = FUN_1008b9f0(&DAT_10250124,uVar4,1);
  iVar12 = uVar10 - uVar4;
  while ((uVar3 = *(uint *)(param_1 + 0x14), psVar11 = (short *)PTR_DAT_1034f014, uVar4 < uVar3 &&
         (uVar10 < uVar3))) {
    if ((uVar3 <= uVar4) || (uVar3 <= uVar10)) goto LAB_1008ee0e;
    iVar6 = appStrlen((ushort *)PTR_DAT_1034f010);
    iVar6 = iVar12 - iVar6;
    iVar7 = appStrlen((ushort *)PTR_DAT_1034f010);
    iVar6 = FUN_1008c040(local_430,iVar7 + uVar4,iVar6);
    local_4 = 2;
    if (*(uint *)(iVar6 + 0x18) < 8) {
      puVar8 = (ushort *)(iVar6 + 4);
    }
    else {
      puVar8 = *(ushort **)(iVar6 + 4);
    }
    appStrcpy(local_410,puVar8);
    local_4 = 0xffffffff;
    if (7 < local_418) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_42c);
    }
    local_41c = 0;
    local_42c = local_42c & 0xffff0000;
    local_418 = 7;
    local_434 = appAtoi(local_410);
    if ((local_410[0] != 0) && (local_434 != 0)) goto code_r0x1008edc4;
    FUN_10084810(uVar4,iVar12);
    uVar4 = 0xffffffff;
  }
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
LAB_1008ee61:
  uVar4 = FUN_1008b9f0(PTR_DAT_1034f014,0,(int)psVar11 - (int)(PTR_DAT_1034f014 + 2) >> 1);
  uVar10 = FUN_1008b9f0(&DAT_10250124,uVar4,1);
  iVar12 = uVar10 - uVar4;
  while ((uVar3 = *(uint *)(param_1 + 0x14), uVar4 < uVar3 && (uVar10 < uVar3))) {
    psVar11 = (short *)PTR_DAT_1034f014;
    if ((uVar3 <= uVar4) || (uVar3 <= uVar10)) goto LAB_1008efb7;
    iVar6 = appStrlen((ushort *)PTR_DAT_1034f014);
    iVar6 = iVar12 - iVar6;
    iVar7 = appStrlen((ushort *)PTR_DAT_1034f014);
    iVar6 = FUN_1008c040(local_430,iVar7 + uVar4,iVar6);
    local_4 = 3;
    if (*(uint *)(iVar6 + 0x18) < 8) {
      puVar8 = (ushort *)(iVar6 + 4);
    }
    else {
      puVar8 = *(ushort **)(iVar6 + 4);
    }
    appStrcpy(local_410,puVar8);
    local_4 = 0xffffffff;
    if (7 < local_418) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_42c);
    }
    local_418 = 7;
    local_41c = 0;
    local_42c = local_42c & 0xffff0000;
    local_434 = appAtoi(local_410);
    if ((local_410[0] != 0) && (local_434 != 0)) goto code_r0x1008ef65;
    FUN_10084810(uVar4,iVar12);
    uVar4 = 0xffffffff;
  }
  psVar11 = (short *)PTR_DAT_1034f018;
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  iVar12 = (int)psVar11 - (int)(PTR_DAT_1034f018 + 2);
LAB_1008f008:
  uVar4 = FUN_1008b9f0(PTR_DAT_1034f018,0,iVar12 >> 1);
  uVar10 = FUN_1008b9f0(&DAT_10250124,uVar4,1);
  iVar12 = uVar10 - uVar4;
  while ((uVar3 = *(uint *)(param_1 + 0x14), psVar11 = (short *)PTR_DAT_1034f01c, uVar4 < uVar3 &&
         (uVar10 < uVar3))) {
    if ((uVar3 <= uVar4) || (uVar3 <= uVar10)) goto LAB_1008f14e;
    iVar6 = appStrlen((ushort *)PTR_DAT_1034f018);
    iVar6 = iVar12 - iVar6;
    iVar7 = appStrlen((ushort *)PTR_DAT_1034f018);
    iVar6 = FUN_1008c040(local_430,iVar7 + uVar4,iVar6);
    local_4 = 4;
    if (*(uint *)(iVar6 + 0x18) < 8) {
      puVar8 = (ushort *)(iVar6 + 4);
    }
    else {
      puVar8 = *(ushort **)(iVar6 + 4);
    }
    appStrcpy(local_410,puVar8);
    local_4 = 0xffffffff;
    if (7 < local_418) {
      (**(code **)(**(int **)GMalloc_exref + 8))(local_42c);
    }
    local_41c = 0;
    local_42c = local_42c & 0xffff0000;
    local_418 = 7;
    local_434 = appAtoi(local_410);
    if ((local_410[0] != 0) && (local_434 != 0)) goto code_r0x1008f104;
    FUN_10084810(uVar4,iVar12);
    uVar4 = 0xffffffff;
  }
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  do {
    uVar4 = FUN_1008b9f0(PTR_DAT_1034f01c,0,(int)psVar11 - (int)(PTR_DAT_1034f01c + 2) >> 1);
    uVar10 = FUN_1008b9f0(&DAT_10250124,uVar4,1);
    iVar12 = uVar10 - uVar4;
    while( true ) {
      uVar3 = *(uint *)(param_1 + 0x14);
      if ((uVar3 <= uVar4) || (uVar3 <= uVar10)) {
        ExceptionList = local_c;
        __security_check_cookie(local_10 ^ (uint)&local_434);
        return;
      }
      psVar11 = (short *)PTR_DAT_1034f01c;
      if ((uVar3 <= uVar4) || (uVar3 <= uVar10)) goto LAB_1008f2f7;
      iVar6 = appStrlen((ushort *)PTR_DAT_1034f01c);
      iVar6 = iVar12 - iVar6;
      iVar7 = appStrlen((ushort *)PTR_DAT_1034f01c);
      iVar6 = FUN_1008c040(local_430,iVar7 + uVar4,iVar6);
      local_4 = 5;
      if (*(uint *)(iVar6 + 0x18) < 8) {
        puVar8 = (ushort *)(iVar6 + 4);
      }
      else {
        puVar8 = *(ushort **)(iVar6 + 4);
      }
      appStrcpy(local_410,puVar8);
      local_4 = 0xffffffff;
      if (7 < local_418) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_42c);
      }
      local_418 = 7;
      local_41c = 0;
      local_42c = local_42c & 0xffff0000;
      local_434 = appAtoi(local_410);
      if ((local_410[0] != 0) && (local_434 != 0)) break;
      FUN_10084810(uVar4,iVar12);
      uVar4 = 0xffffffff;
    }
    FUN_10084810(uVar4,iVar12 + 1);
    uVar10 = local_434;
    iVar12 = FUN_101647b0(local_434);
    if (iVar12 == 0) {
      iVar12 = 1;
      psVar11 = (short *)&DAT_1023afc8;
    }
    else {
      psVar11 = (short *)FUN_101647b0(uVar10);
      psVar5 = psVar11;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      iVar12 = (int)psVar5 - (int)(psVar11 + 1) >> 1;
    }
    FUN_1008bd30(uVar4,psVar11,iVar12);
    psVar11 = (short *)PTR_DAT_1034f01c;
LAB_1008f2f7:
    do {
      sVar1 = *psVar11;
      psVar11 = psVar11 + 1;
    } while (sVar1 != 0);
  } while( true );
code_r0x1008ea81:
  FUN_10084810(uVar4,iVar12 + 1);
  appAtoi(local_410);
  puVar9 = FString::operator*((FString *)(GL2GameData_exref + iVar6 * 0xc + 0x6a8dc));
  puVar8 = puVar9;
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
  } while (uVar2 != 0);
  FUN_1008bd30(uVar4,puVar9,(int)puVar8 - (int)(puVar9 + 1) >> 1);
  puVar8 = (ushort *)PTR_DAT_1034f008;
  puVar9 = (ushort *)PTR_DAT_1034f008;
LAB_1008eae0:
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
  } while (uVar2 != 0);
  goto LAB_1008e98b;
code_r0x1008ec25:
  FUN_10084810(uVar4,iVar12 + 1);
  uVar10 = local_434;
  iVar12 = FUN_10145f50(local_434);
  if (iVar12 == 0) {
    iVar12 = 1;
    psVar11 = (short *)&DAT_1023afc8;
  }
  else {
    psVar11 = (short *)FUN_10145f50(uVar10);
    psVar5 = psVar11;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    iVar12 = (int)psVar5 - (int)(psVar11 + 1) >> 1;
  }
  FUN_1008bd30(uVar4,psVar11,iVar12);
  psVar11 = (short *)PTR_DAT_1034f00c;
LAB_1008ec77:
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  goto LAB_1008eb1e;
code_r0x1008edc4:
  FUN_10084810(uVar4,iVar12 + 1);
  uVar10 = local_434;
  iVar12 = FUN_10145fa0(local_434);
  if (iVar12 == 0) {
    iVar12 = 1;
    psVar11 = (short *)&DAT_1023afc8;
  }
  else {
    psVar11 = (short *)FUN_10145fa0(uVar10);
    psVar5 = psVar11;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    iVar12 = (int)psVar5 - (int)(psVar11 + 1) >> 1;
  }
  FUN_1008bd30(uVar4,psVar11,iVar12);
LAB_1008ee0e:
  psVar11 = (short *)PTR_DAT_1034f010;
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  iVar12 = (int)psVar11 - (int)(PTR_DAT_1034f010 + 2);
  goto LAB_1008ecc8;
code_r0x1008ef65:
  FUN_10084810(uVar4,iVar12 + 1);
  uVar10 = local_434;
  iVar12 = FUN_10145ff0(local_434);
  if (iVar12 == 0) {
    iVar12 = 1;
    psVar11 = (short *)&DAT_1023afc8;
  }
  else {
    psVar11 = (short *)FUN_10145ff0(uVar10);
    psVar5 = psVar11;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    iVar12 = (int)psVar5 - (int)(psVar11 + 1) >> 1;
  }
  FUN_1008bd30(uVar4,psVar11,iVar12);
  psVar11 = (short *)PTR_DAT_1034f014;
LAB_1008efb7:
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  goto LAB_1008ee61;
code_r0x1008f104:
  FUN_10084810(uVar4,iVar12 + 1);
  uVar10 = local_434;
  puVar8 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,local_434);
  if (puVar8 == (ushort *)0x0) {
    iVar12 = 1;
    puVar8 = (ushort *)&DAT_1023afc8;
  }
  else {
    puVar8 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,uVar10);
    puVar9 = puVar8;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar2 != 0);
    iVar12 = (int)puVar9 - (int)(puVar8 + 1) >> 1;
  }
  FUN_1008bd30(uVar4,puVar8,iVar12);
LAB_1008f14e:
  psVar11 = (short *)PTR_DAT_1034f018;
  do {
    sVar1 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  iVar12 = (int)psVar11 - (int)(PTR_DAT_1034f018 + 2);
  goto LAB_1008f008;
}


// ==== 1008f350 FUN_1008f350

void FUN_1008f350(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(in_ECX + 8) - uVar1) >> 1 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_101c238d();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_101c238d();
    }
    iVar2 = (int)(param_3 - uVar1) >> 1;
  }
  FUN_1008e090(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_101c238d();
  }
  uVar1 = uVar1 + iVar2 * 2;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_101c238d();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}


// ==== 1008f3e0 FUN_1008f3e0

void FUN_1008f3e0(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ebb40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_4 = (undefined4 *)*param_4;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(in_ECX + 0xc) - iVar2 >> 2;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 2;
    }
    uVar5 = param_3;
    if (0x3fffffffU - iVar1 < param_3) {
      FUN_1008e2e0();
      iVar2 = extraout_ECX;
      uVar5 = extraout_EDX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 2;
    }
    if (uVar6 < iVar1 + uVar5) {
      if (0x3fffffff - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 2;
      }
      if (uVar6 < iVar1 + uVar5) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 2;
        }
        uVar6 = iVar2 + uVar5;
      }
      iVar1 = FUN_1008cfc0(uVar6,0);
      local_8 = 0;
      uVar3 = FUN_1008d510(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_1008dc70(uVar3,param_3,&param_4);
      FUN_1008d510(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar2 >> 2;
      }
      if (iVar2 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
      }
      *(uint *)(in_ECX + 0xc) = iVar1 + uVar6 * 4;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar4) * 4;
      *(int *)(in_ECX + 4) = iVar1;
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(in_ECX + 8);
    if ((uint)(iVar2 - param_2 >> 2) < uVar5) {
      FUN_1008d510(param_2,iVar2,uVar5 * 4 + param_2);
      local_8 = 2;
      FUN_1008dc70(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 2),&param_4);
      local_8 = 0xffffffff;
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + uVar5 * 4;
      FUN_1008d2b0(param_2,*(int *)(in_ECX + 8) + uVar5 * -4,&param_4);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar2 + uVar5 * -4;
    uVar3 = FUN_1008d510(iVar1,iVar2,iVar2);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    FUN_1008d2d0(param_2,iVar1,iVar2);
    FUN_1008d2b0(param_2,uVar5 * 4 + param_2,&param_4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1008f551 Catch@1008f551

void Catch_1008f551(void)

{
  int unaff_EBP;
  
  FUN_1008cfa0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008f561 Catch@1008f561

void Catch_1008f561(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008f640 FUN_1008f640

void FUN_1008f640(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_100881c0(param_3,0,0xffffffff);
  }
  return;
}


// ==== 1008f670 FUN_1008f670

int FUN_1008f670(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_1008e440(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x1c) * 0x1c;
}


// ==== 1008f6d0 FUN_1008f6d0

void FUN_1008f6d0(undefined4 param_1,undefined4 param_2)

{
  FUN_1008e350(param_1,param_2);
  return;
}


// ==== 1008f6f0 FUN_1008f6f0

void FUN_1008f6f0(undefined2 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 1) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 1))) {
    puVar2 = *(undefined2 **)(in_ECX + 8);
    *puVar2 = *param_1;
    *(undefined2 **)(in_ECX + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_101c238d();
  }
  FUN_1008f350(local_8,in_ECX,uVar3,param_1);
  return;
}


// ==== 1008f760 FUN_1008f760

int FUN_1008f760(int param_1,int param_2,undefined4 param_3)

{
  FUN_1008e3a0(param_1,param_2,param_3);
  return param_1 + param_2 * 0x1c;
}


// ==== 1008f7a0 FUN_1008f7a0

void FUN_1008f7a0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(in_ECX + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_101c238d();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_101c238d();
    }
    iVar2 = (int)(param_3 - uVar1) >> 2;
  }
  FUN_1008f3e0(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_101c238d();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_101c238d();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}


// ==== 1008f830 FUN_1008f830

void FUN_1008f830(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  uint uStack_68;
  undefined1 local_34 [4];
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebb79;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_1c = 7;
  local_20 = 0;
  local_30 = local_30 & 0xffff0000;
  local_8._1_3_ = 0;
  local_18 = uStack_68;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8._0_1_ = 2;
    if (param_3 != 0) {
      *(undefined4 *)(param_3 + 0x18) = 7;
      *(undefined4 *)(param_3 + 0x14) = 0;
      if (*(uint *)(param_3 + 0x18) < 8) {
        puVar5 = (undefined2 *)(param_3 + 4);
      }
      else {
        puVar5 = *(undefined2 **)(param_3 + 4);
      }
      *puVar5 = 0;
      FUN_100881c0(local_34,0,0xffffffff);
    }
    uVar1 = *(undefined4 *)(param_3 + 4);
    uVar2 = *(undefined4 *)(param_3 + 8);
    uVar3 = *(undefined4 *)(param_3 + 0xc);
    uVar4 = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    param_3 = param_3 + 0x1c;
  }
  local_8 = 0xffffffff;
  if (7 < local_1c) {
    (**(code **)(**(int **)GMalloc_exref + 8))(local_30);
  }
  local_1c = 7;
  local_20 = 0;
  local_30 = local_30 & 0xffff0000;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1008f972 Catch@1008f972

void Catch_1008f972(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  for (iVar2 = *(int *)(unaff_EBP + -0x48); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_1008df50(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1008f9a0 FUN_1008f9a0

void FUN_1008f9a0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_4;
  for (; param_1 != param_2; param_2 = param_2 + -0x1c) {
    uVar1 = *(undefined4 *)(param_3 + -0x18);
    uVar2 = *(undefined4 *)(param_3 + -0x14);
    uVar3 = *(undefined4 *)(param_3 + -0x10);
    uVar4 = *(undefined4 *)(param_3 + -0xc);
    *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_2 + -0x18) = uVar1;
    *(undefined4 *)(param_2 + -0x14) = uVar2;
    *(undefined4 *)(param_2 + -0x10) = uVar3;
    *(undefined4 *)(param_2 + -0xc) = uVar4;
    uVar1 = *(undefined4 *)(param_3 + -8);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_2 + -8) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + -4);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = uVar1;
    param_3 = param_3 + -0x1c;
  }
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}


// ==== 1008fa30 FUN_1008fa30

void FUN_1008fa30(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)(in_ECX + 8);
    *puVar2 = *param_1;
    *(undefined4 **)(in_ECX + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_101c238d();
  }
  FUN_1008f7a0(local_8,in_ECX,uVar3,param_1);
  return;
}


// ==== 1008faa0 FUN_1008faa0

void FUN_1008faa0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = param_2;
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_101c238d();
  }
  if (param_3 != param_5) {
    param_2 = param_2 & 0xffffff00;
    uVar2 = FUN_1008f670(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    FUN_1008e350(uVar2,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}


// ==== 1008fb10 FUN_1008fb10

int FUN_1008fb10(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_1008f9a0(param_1,param_2,param_3,param_3,param_5,0);
  return param_3 + ((param_2 - param_1) / 0x1c) * -0x1c;
}


// ==== 1008fb70 FUN_1008fb70

void FUN_1008fb70(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_1008e350(*(int *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1008fbc0 FUN_1008fbc0

void FUN_1008fbc0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101ebbcc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  if (7 < *(uint *)(in_ECX + 0x5c)) {
    (**(code **)(**(int **)GMalloc_exref + 8))
              (*(undefined4 *)(in_ECX + 0x48),DAT_103554c4 ^ (uint)&stack0xffffffe4);
  }
  *(undefined4 *)(in_ECX + 0x5c) = 7;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined2 *)(in_ECX + 0x48) = 0;
  local_4._0_1_ = 1;
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_1008e350(*(int *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x3c),in_ECX + 0x34,in_ECX);
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(in_ECX + 0x38));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(in_ECX + 0x28) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x28));
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  local_4 = 0xffffffff;
  if (7 < *(uint *)(in_ECX + 0x20)) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0x20) = 7;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1008fcc0 FUN_1008fcc0

void FUN_1008fcc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1008f830(param_1,param_2,param_3);
  return;
}


// ==== 1008fcf0 FUN_1008fcf0

void FUN_1008fcf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1008fb10(param_1,param_2,param_3,param_2,param_2,0);
  return;
}


// ==== 1008fd20 FUN_1008fd20

void FUN_1008fd20(void)

{
  undefined4 *in_ECX;
  
  in_ECX[8] = 7;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x17] = 7;
  in_ECX[0x16] = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1008fdb0 FUN_1008fdb0

void FUN_1008fdb0(byte param_1)

{
  FUN_1008fbc0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1008fde0 FUN_1008fde0

void FUN_1008fde0(void)

{
  int iVar1;
  int in_ECX;
  void *unaff_ESI;
  undefined4 uVar2;
  undefined *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ebc4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = &DAT_1022f8a0;
  uVar2 = 0x60;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    (0x60,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_c = (void *)0x0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_1008fd20(uVar2,puVar3,iVar1);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0xc) = 1;
  }
  ExceptionList = unaff_ESI;
  return;
}


// ==== 1008fe60 FUN_1008fe60

void FUN_1008fe60(short *param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  undefined4 local_94;
  int local_90;
  undefined1 local_8c [4];
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined1 local_70 [4];
  int local_6c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ebc83;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_94;
  ExceptionList = &local_c;
  local_94 = param_2;
  psVar3 = param_1 + 1;
  FUN_1008fd20(DAT_103554c4 ^ (uint)&stack0xffffff5c);
  local_4 = 0;
  sVar2 = *psVar3;
  do {
    if (sVar2 == 0) goto LAB_1008ff55;
    if (sVar2 == 0x3c) {
      do {
        do {
          psVar3 = psVar3 + 1;
          sVar2 = *psVar3;
        } while (sVar2 == 0x20);
      } while (((sVar2 == 9) || (sVar2 == 0xd)) || (sVar2 == 10));
      psVar3 = (short *)FUN_1008e480(psVar3,local_70,&local_90);
      if ((local_6c == 0) && (local_90 == param_3)) {
        sVar2 = *psVar3;
        while ((sVar2 != 0 && (sVar2 != 0x3e))) {
          psVar1 = psVar3 + 1;
          psVar3 = psVar3 + 1;
          sVar2 = *psVar1;
        }
        psVar3 = psVar3 + 1;
LAB_1008ff55:
        if (param_1 != psVar3) {
          local_74 = 7;
          local_78 = 0;
          local_88 = local_88 & 0xffff0000;
          FUN_10089100(param_1,(int)psVar3 - (int)param_1 >> 1);
          local_4._0_1_ = 1;
          FUN_100881c0(local_8c,0,0xffffffff);
          local_4 = (uint)local_4._1_3_ << 8;
          if (7 < local_74) {
            (**(code **)(**(int **)GMalloc_exref + 8))(local_88);
          }
          local_74 = 7;
          local_78 = 0;
          local_88 = local_88 & 0xffff0000;
        }
        local_4 = 0xffffffff;
        FUN_1008fbc0();
        ExceptionList = local_c;
        __security_check_cookie(local_10 ^ (uint)&local_94);
        return;
      }
    }
    sVar2 = psVar3[1];
    psVar3 = psVar3 + 1;
  } while( true );
}


// ==== 10090010 FUN_10090010

void FUN_10090010(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int extraout_ECX;
  uint uVar4;
  uint uStack_58;
  undefined1 local_34 [4];
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ebcc8;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_1c = 7;
  uVar4 = 0;
  local_20 = 0;
  local_30 = local_30 & 0xffff0000;
  local_18 = uStack_58;
  FUN_100881c0(param_4,0,0xffffffff);
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    uVar4 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
    }
    if (0x9249249U - iVar1 < param_3) {
      FUN_1008e020();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
    }
    if (uVar4 < iVar1 + param_3) {
      if (0x9249249 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
      }
      if (uVar4 < iVar2 + param_3) {
        iVar2 = FUN_1008cf70();
        uVar4 = iVar2 + param_3;
      }
      iVar1 = FUN_1008d130(uVar4,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_1008fcc0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_1008f760(uVar3,param_3,local_34);
      FUN_1008fcc0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      local_8 = 0;
      iVar2 = 0;
      if (*(int *)(in_ECX + 4) != 0) {
        iVar2 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
      }
      if (*(int *)(in_ECX + 4) != 0) {
        FUN_1008e350(*(int *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
        (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = iVar1 + uVar4 * 0x1c;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar2) * 0x1c;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x1c) < param_3) {
        FUN_1008fcc0(param_2,iVar2,param_3 * 0x1c + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_1008f760(*(undefined4 *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x1c,
                     local_34);
        local_8 = 0;
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x1c;
        FUN_1008f640(param_2,*(int *)(in_ECX + 8) + param_3 * -0x1c,local_34);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x1c;
        uVar3 = FUN_1008fcc0(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_1008fcf0(param_2,iVar1,iVar2);
        FUN_1008f640(param_2,param_3 * 0x1c + param_2,local_34);
      }
    }
  }
  local_8 = 0xffffffff;
  if (7 < local_1c) {
    (**(code **)(**(int **)GMalloc_exref + 8))(local_30);
  }
  local_1c = 7;
  local_20 = 0;
  local_30 = local_30 & 0xffff0000;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10090206 Catch@10090206

void Catch_10090206(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x34);
  FUN_1008f6d0(uVar1,*(undefined4 *)(unaff_EBP + -0x3c));
  FUN_1008cfa0(uVar1,*(undefined4 *)(unaff_EBP + -0x38));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100902c5 Catch@100902c5

void Catch_100902c5(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x10) * 0x1c;
  FUN_1008f6d0(iVar1 + *(int *)(unaff_EBP + 0xc),*(int *)(*(int *)(unaff_EBP + -0x40) + 8) + iVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10090380 FUN_10090380

/* WARNING: Removing unreachable block (ram,0x100903d1) */

void FUN_10090380(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8 [8];
  
  if (param_1 != 0) {
    FUN_1008d490();
    FUN_10089060();
    FUN_10089060();
    uVar2 = *(uint *)(param_1 + 0x38);
    if (*(uint *)(param_1 + 0x3c) < uVar2) {
      FUN_101c238d();
    }
    while( true ) {
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 < *(uint *)(param_1 + 0x38)) {
        FUN_101c238d();
      }
      if (uVar2 == uVar1) break;
      if (*(uint *)(param_1 + 0x3c) <= uVar2) {
        FUN_101c238d();
      }
      FUN_10089060();
      if (*(uint *)(param_1 + 0x3c) <= uVar2) {
        FUN_101c238d();
      }
      uVar2 = uVar2 + 0x1c;
    }
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 < *(uint *)(param_1 + 0x38)) {
      FUN_101c238d();
    }
    uVar1 = *(uint *)(param_1 + 0x38);
    if (*(uint *)(param_1 + 0x3c) < uVar1) {
      FUN_101c238d();
    }
    FUN_1008faa0(local_8,param_1 + 0x34,uVar1,param_1 + 0x34,uVar2);
    FUN_1008fbc0();
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  }
  return;
}


// ==== 10090450 FUN_10090450

void FUN_10090450(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) < puVar2) {
      FUN_101c238d();
    }
    while( true ) {
      puVar1 = *(undefined4 **)(param_1 + 8);
      if (puVar1 < *(undefined4 **)(param_1 + 4)) {
        FUN_101c238d();
      }
      if (puVar2 == puVar1) break;
      if (*(undefined4 **)(param_1 + 8) <= puVar2) {
        FUN_101c238d();
      }
      FUN_10090380(*puVar2);
      if (*(undefined4 **)(param_1 + 8) <= puVar2) {
        FUN_101c238d();
      }
      puVar2 = puVar2 + 1;
    }
    if (*(int *)(param_1 + 4) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  }
  return;
}


// ==== 100904e0 FUN_100904e0

void FUN_100904e0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_ECX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x1c + iVar3 != iVar3) {
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_101c238d();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_101c238d();
      }
      iVar3 = (int)(param_3 - uVar1) / 0x1c;
      goto LAB_10090547;
    }
  }
  iVar3 = 0;
LAB_10090547:
  FUN_10090010(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_101c238d();
  }
  uVar1 = uVar1 + iVar3 * 0x1c;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_101c238d();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}


// ==== 100905a0 FUN_100905a0

void FUN_100905a0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0x1c) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0x1c))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_1008e3a0(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x1c;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_101c238d();
  }
  FUN_100904e0(local_8,in_ECX,uVar3,param_1);
  return;
}


// ==== 10090650 FUN_10090650

short * FUN_10090650(short *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  short *in_ECX;
  short *psVar10;
  short *psVar11;
  short *local_50;
  short *local_4c;
  uint uStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 auStack_28 [4];
  uint uStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ebd00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  psVar6 = in_ECX + 0x24;
  FUN_10089100(&DAT_1022f9f8,0);
  sVar1 = *param_1;
  local_50 = psVar6;
  psVar7 = param_1;
  do {
    if (sVar1 == 0) {
LAB_10090a15:
      if (*(int *)(in_ECX + 0x2e) != 0) {
        FUN_100881c0(psVar6,0,0xffffffff);
      }
      ExceptionList = local_c;
      return psVar7;
    }
    for (; (((sVar1 = *psVar7, sVar1 == 0x20 || (sVar1 == 9)) || (sVar1 == 0xd)) || (sVar1 == 10));
        psVar7 = psVar7 + 1) {
    }
    if (*psVar7 == 0x3c) goto LAB_10090a15;
    if (*psVar7 == 0x3e) {
      psVar7 = psVar7 + 1;
      goto LAB_10090a15;
    }
    FUN_10084810(0,0xffffffff);
    FUN_10084810(0,0xffffffff);
    param_1 = (short *)0x0;
    psVar8 = psVar7;
    if (((*psVar7 != 0x3d) && (*psVar7 != 0x22)) &&
       (psVar3 = (short *)FUN_1008d0e0(psVar7), local_4c = psVar3, psVar7 != psVar3)) {
      psVar10 = (short *)((int)psVar3 - (int)psVar7 >> 1);
      lVar2 = (ulonglong)((int)psVar10 + 1) * 2;
      psVar4 = (short *)(**(code **)**(undefined4 **)GMalloc_exref)
                                  ((uint)lVar2 | -(uint)((int)((ulonglong)lVar2 >> 0x20) != 0),
                                   &DAT_1022f8a0);
      psVar6 = (short *)0x0;
      psVar8 = psVar3;
      if (0 < (int)psVar10) {
        psVar3 = psVar4;
        psVar11 = psVar10;
        do {
          iVar5 = _toupper((uint)*(ushort *)(((int)psVar7 - (int)psVar4) + (int)psVar3));
          *psVar3 = (short)iVar5;
          psVar3 = psVar3 + 1;
          psVar11 = (short *)((int)psVar11 + -1);
          psVar6 = psVar10;
          psVar8 = in_ECX;
          local_50 = psVar10;
        } while (psVar11 != (short *)0x0);
      }
      psVar4[(int)psVar6] = 0;
      uStack_34 = 7;
      uStack_38 = 0;
      uStack_48 = uStack_48 & 0xffff0000;
      psVar6 = psVar4;
      do {
        sVar1 = *psVar6;
        psVar6 = psVar6 + 1;
      } while (sVar1 != 0);
      FUN_10089100(psVar4,(int)psVar6 - (int)(psVar4 + 1) >> 1);
      local_c = (void *)0x0;
      FUN_100881c0(&local_4c,0,0xffffffff);
      local_c = (void *)0xffffffff;
      if (7 < uStack_34) {
        (**(code **)(**(int **)GMalloc_exref + 8))(uStack_48);
      }
      uStack_34 = 7;
      uStack_38 = 0;
      uStack_48 = uStack_48 & 0xffff0000;
      (**(code **)(**(int **)GMalloc_exref + 8))(psVar4);
      for (; ((sVar1 = *psVar8, sVar1 == 0x20 || (sVar1 == 9)) ||
             ((sVar1 == 0xd || (psVar6 = local_50, sVar1 == 10)))); psVar8 = psVar8 + 1) {
      }
    }
    if (*psVar8 == 0x3d) {
      psVar7 = (short *)FUN_1008d060(psVar8 + 1);
LAB_10090862:
      if (*psVar7 == 0x22) {
        sVar1 = psVar7[1];
        psVar7 = psVar7 + 1;
        param_1 = (short *)0x1;
        psVar8 = psVar7;
        while ((sVar1 != 0 && (sVar1 != 0x22))) {
          psVar6 = psVar8 + 1;
          psVar8 = psVar8 + 1;
          sVar1 = *psVar6;
        }
      }
      else {
        psVar8 = (short *)FUN_1008d090(psVar7);
      }
      if (psVar7 != psVar8) {
        uStack_10 = 7;
        uStack_14 = 0;
        uStack_24 = uStack_24 & 0xffff0000;
        FUN_10089100(psVar7,(int)psVar8 - (int)psVar7 >> 1);
        uStack_4 = 1;
        FUN_100881c0(auStack_28,0,0xffffffff);
        uStack_4 = 0xffffffff;
        if (7 < uStack_10) {
          (**(code **)(**(int **)GMalloc_exref + 8))(uStack_24);
        }
        uStack_10 = 7;
        uStack_14 = 0;
        uStack_24 = uStack_24 & 0xffff0000;
      }
      if (param_1 == (short *)0x0) goto LAB_10090920;
      do {
        psVar8 = psVar8 + 1;
LAB_10090920:
        sVar1 = *psVar8;
      } while ((((sVar1 == 0x20) || (sVar1 == 9)) || (sVar1 == 0xd)) ||
              (psVar6 = local_50, sVar1 == 10));
    }
    else {
      psVar7 = psVar8;
      if (*psVar8 == 0x22) goto LAB_10090862;
    }
    if (*(int *)(in_ECX + 0x12) == 0) {
LAB_1009096c:
      if (*(int *)(in_ECX + 0x2e) != 0) {
        FUN_10089100(&DAT_1023d5d0,1);
      }
      if (*(int *)(in_ECX + 0x12) != 0) {
        FUN_100881c0(in_ECX + 8,0,0xffffffff);
      }
      if (*(int *)(in_ECX + 0x20) != 0) {
        FUN_1008ddb0(&DAT_1023d5cc,1);
        psVar7 = param_1;
        if (param_1 != (short *)0x0) {
          FUN_1008ddb0(&DAT_1024a784,1);
        }
        FUN_1008dca0(in_ECX + 0x16,0,0xffffffff);
        if (psVar7 != (short *)0x0) {
          FUN_1008ddb0(&DAT_1024a784,1);
        }
      }
    }
    else {
      if (*(uint *)(in_ECX + 0x14) < 8) {
        psVar7 = in_ECX + 10;
      }
      else {
        psVar7 = *(short **)(in_ECX + 10);
      }
      uVar9 = FUN_100808e0(param_3,psVar7);
      if (uVar9 == 0xffffffff) goto LAB_1009096c;
      param_1 = (short *)(uVar9 & 0xffff);
      FUN_1008f6f0(&param_1);
      FUN_100905a0(in_ECX + 0x16);
    }
    sVar1 = *psVar8;
    psVar7 = psVar8;
  } while( true );
}


// ==== 10090a50 FUN_10090a50

int FUN_10090a50(short *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uStack_50;
  undefined1 local_40 [16];
  undefined1 local_30 [4];
  int local_2c;
  int *local_28;
  int *local_24;
  undefined1 local_20 [4];
  short *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101ebd2b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = FUN_10004ed0(0x10);
  if (local_2c == 0) {
    local_18 = 0;
  }
  else {
    *(undefined4 *)(local_2c + 4) = 0;
    *(undefined4 *)(local_2c + 8) = 0;
    *(undefined4 *)(local_2c + 0xc) = 0;
    local_18 = local_2c;
  }
  local_8 = local_8 & 0xffffff00;
  if (local_18 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  FUN_1008cf40();
  *(undefined4 *)(in_ECX + 0x80) = 0;
  do {
    if (*param_1 == 0) goto LAB_10090c44;
    piVar3 = (int *)FUN_1008fde0();
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    local_24 = piVar3;
    local_1c = param_1;
    if (*param_1 == 0x3c) {
      uVar4 = FUN_1008d060(param_1 + 1);
      uVar4 = FUN_1008e480(uVar4,piVar3,&local_2c);
      param_1 = local_1c;
      if (-100 < local_2c) {
        if (local_2c < 0) {
          *piVar3 = (local_2c == -1) + 2;
LAB_10090b55:
          param_1 = (short *)FUN_1008e690(local_1c,piVar3);
        }
        else {
          iVar1 = *(int *)(&DAT_1034ef00 + local_2c * 4);
          *piVar3 = iVar1;
          if (iVar1 < 6) {
            if (iVar1 != 5) goto LAB_10090b55;
            param_1 = (short *)FUN_1008fe60(local_1c,piVar3,local_2c);
          }
          else {
            param_1 = (short *)FUN_10090650(uVar4,piVar3,local_2c);
          }
        }
      }
    }
    if (*piVar3 == 4) {
      param_1 = (short *)FUN_1008e770(param_1,piVar3);
    }
    if (local_1c == param_1) {
      *piVar3 = 1;
      piVar3[1] = 1;
      param_1 = (short *)FUN_1008e770(param_1,piVar3);
    }
    if (((*piVar3 != 0x14) && (local_28 != (int *)0x0)) && (*local_28 == 1)) {
      FUN_1008d890(local_28 + 2);
    }
    if ((*piVar3 == 1) && (piVar3[7] == 0)) {
      FUN_1008fdb0(1);
      *(undefined4 *)(in_ECX + 0x80) = 0;
    }
    else {
      *(int *)(in_ECX + 0x80) = *piVar3;
      FUN_1008fa30(&local_24);
      local_28 = piVar3;
    }
    uVar5 = FUN_1008cf50();
    if (0x7ffffffe < uVar5) {
LAB_10090c44:
      if (local_18 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      FUN_101a3cc0(local_30);
      while( true ) {
        uVar4 = FUN_101a3cf0(local_20);
        cVar2 = FUN_10082310(uVar4);
        if (cVar2 == '\0') break;
        puVar6 = (undefined4 *)FUN_10083930();
        local_24 = (int *)*puVar6;
        if (*local_24 == 1) {
          FUN_1008e880(local_24 + 2);
        }
        FUN_10084730(local_40,0);
      }
      ExceptionList = local_10;
      return local_18;
    }
    if (param_1 == (short *)0x0) {
      FUN_10090450(local_18);
      ExceptionList = local_10;
      return 0;
    }
  } while( true );
}


// ==== 10090c99 Catch@10090c99

void Catch_10090c99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10090cad Catch@10090cad

void Catch_10090cad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ListParser::CreateElementList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10090cd0 FUN_10090cd0

bool FUN_10090cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10009a90(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 10090cf0 FUN_10090cf0

undefined4 FUN_10090cf0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebd50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x334) != 0) {
    uVar1 = FUN_10058020();
    FUN_10060e00(uVar1);
    if (*(int **)(in_ECX + 0x334) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x334) + 0xc))(1);
    }
    *(undefined4 *)(in_ECX + 0x334) = 0;
  }
  FUN_1000ae80();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10090d7d Catch@10090d7d

void Catch_10090d7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10090d91 Catch@10090d91

void Catch_10090d91(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlComboBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10090db0 FUN_10090db0

short * FUN_10090db0(short *param_1,undefined4 *param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  while (sVar1 == 0x3b) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  if ((*param_1 != 0) && (*param_2 = param_1, *param_1 != 0)) {
    do {
      if (*param_1 == 0x3b) break;
      param_1 = param_1 + 1;
    } while (*param_1 != 0);
    if (*param_1 != 0) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}


// ==== 10090e00 FUN_10090e00

undefined4 FUN_10090e00(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    iVar5 = 0;
    psVar3 = (short *)FUN_10090db0(param_1,&param_1);
    puVar2 = param_2;
    puVar1 = param_1;
    while ((param_1 = puVar1, puVar1 != (ushort *)0x0 && (*psVar3 != 0))) {
      FUN_1000b3d0(puVar1);
      if ((puVar2 != (ushort *)0x0) && (iVar4 = appStrcmp(puVar1,puVar2), iVar4 == 0)) {
        FUN_10009f70(iVar5);
      }
      iVar5 = iVar5 + 1;
      psVar3 = (short *)FUN_10090db0(psVar3,&param_1);
      puVar1 = param_1;
    }
    FUN_1000b3d0(puVar1);
    if (*puVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar4 = appStrcmp(puVar1,puVar2);
      if (iVar4 != 0) {
        return 1;
      }
    }
    FUN_10009f70(iVar5);
  }
  return 1;
}


// ==== 10090ed0 FUN_10090ed0

undefined4 FUN_10090ed0(void)

{
  int in_ECX;
  
  if (*(short *)(in_ECX + 0x2dc) != 0) {
    FUN_1013c430(in_ECX + 0x2dc);
    return 1;
  }
  FUN_1000cb20(*(undefined4 *)(in_ECX + 0x2d8));
  return 1;
}


// ==== 10090f20 FUN_10090f20

bool FUN_10090f20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == -0xffffff0) {
    iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10090f80 FUN_10090f80

undefined4 FUN_10090f80(void)

{
  int in_ECX;
  
  FUN_1000cb20(*(undefined4 *)(in_ECX + 0x2d8));
  return 1;
}


// ==== 10090fa0 FUN_10090fa0

bool FUN_10090fa0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == -0xff00fc)) {
    iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10091000 FUN_10091000

undefined4 FUN_10091000(undefined4 param_1)

{
  FUN_1000cb20(param_1);
  return 1;
}


// ==== 10091020 FUN_10091020

undefined4 FUN_10091020(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebd70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = 0;
LAB_10091052:
  do {
    if (*(int *)(in_ECX + 0x324) <= iVar1) {
      FUN_10061e90();
      ExceptionList = local_10;
      return 1;
    }
    if (*(int *)(in_ECX + 0x308) == 0) {
      if (*(int *)(in_ECX + 0x30c + iVar1 * 4) != 0) {
        *(undefined4 *)(in_ECX + 0x30c + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
        goto LAB_10091052;
      }
    }
    else if (*(int *)(in_ECX + 0x318 + iVar1 * 4) != 0) {
      *(undefined4 *)(in_ECX + 0x318 + iVar1 * 4) = 0;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


// ==== 100910ab Catch@100910ab

void Catch_100910ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100910bf Catch@100910bf

void Catch_100910bf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDynamicLinker::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100910e0 FUN_100910e0

undefined4 FUN_100910e0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x70))(param_2 & 0xffff,param_2 >> 0x10);
  if (iVar1 != 0) {
    FUN_1000cb20(in_ECX[0xcf]);
  }
  in_ECX[0xb6] = 0;
  return 1;
}


// ==== 10091120 FUN_10091120

bool FUN_10091120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10037b10(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 10091140 thunk_FUN_1003bd20 thunk -> 1003bd20

// ==== 10091150 FUN_10091150

undefined4 FUN_10091150(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebd90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x174))();
  if (in_ECX[0xd9] != 0) {
    FUN_1003f610(in_ECX[0xd9]);
    in_ECX[0xd9] = 0;
  }
  if (in_ECX[0xf7] != 0) {
    in_ECX[0xf7] = 0;
  }
  if (in_ECX[0xf8] != 0) {
    in_ECX[0xf8] = 0;
  }
  if (in_ECX[0xf9] != 0) {
    in_ECX[0xf9] = 0;
  }
  if (in_ECX[0xb6] != 0) {
    in_ECX[0xb6] = 0;
  }
  FUN_1003c550();
  ExceptionList = local_10;
  return 1;
}


// ==== 100911fa Catch@100911fa

void Catch_100911fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1009120e Catch@1009120e

void Catch_1009120e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlMultiEdit::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10091230 FUN_10091230

undefined4 FUN_10091230(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int in_ECX;
  int iVar5;
  
  sVar4 = (short)((uint)param_1 >> 0x10) / 0x78;
  iVar5 = (int)sVar4;
  if (sVar4 < 1) {
    iVar1 = *(int *)(in_ECX + 0x3d8);
    iVar2 = *(int *)(in_ECX + 0x378);
    iVar3 = *(int *)(in_ECX + 0x374);
    if (iVar1 < iVar3) {
      if ((iVar1 - iVar2) + iVar5 <= iVar3) {
        *(undefined4 *)(in_ECX + 0x378) = 0;
        goto LAB_100912bc;
      }
    }
    else if ((iVar1 - iVar2) + iVar5 <= iVar3) {
      *(int *)(in_ECX + 0x378) = iVar1 - iVar3;
      goto LAB_100912bc;
    }
    *(int *)(in_ECX + 0x378) = iVar2 - iVar5;
  }
  else if (iVar5 < *(int *)(in_ECX + 0x378)) {
    *(int *)(in_ECX + 0x378) = *(int *)(in_ECX + 0x378) - iVar5;
  }
  else {
    *(undefined4 *)(in_ECX + 0x378) = 0;
  }
LAB_100912bc:
  FUN_10049b50(*(undefined4 *)(in_ECX + 0x378));
  return 1;
}


// ==== 100912e0 FUN_100912e0

undefined4 FUN_100912e0(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x374) < *(int *)(in_ECX + 0x3d8)) {
    piVar1 = (int *)(in_ECX + 0x378);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(in_ECX + 0x378) = 0;
    }
    FUN_10049b50(*(undefined4 *)(in_ECX + 0x378));
  }
  return 1;
}


// ==== 10091320 FUN_10091320

undefined4 FUN_10091320(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x374) < *(int *)(in_ECX + 0x3d8)) {
    *(int *)(in_ECX + 0x378) = *(int *)(in_ECX + 0x378) + 1;
    iVar1 = *(int *)(in_ECX + 0x3d8) - *(int *)(in_ECX + 0x374);
    if (iVar1 < *(int *)(in_ECX + 0x378)) {
      *(int *)(in_ECX + 0x378) = iVar1;
    }
    FUN_10049b50(*(undefined4 *)(in_ECX + 0x378));
  }
  return 1;
}


// ==== 10091370 FUN_10091370

void FUN_10091370(void)

{
  int in_ECX;
  
  FUN_10049a00(*(undefined4 *)(in_ECX + 0x3d8),*(undefined4 *)(in_ECX + 0x374));
  FUN_10049b50(*(undefined4 *)(in_ECX + 0x378));
  return;
}


// ==== 100913a0 FUN_100913a0

bool FUN_100913a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012eb0(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 100913c0 FUN_100913c0

void FUN_100913c0(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x100913c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x1f8))();
  return;
}


// ==== 100913d0 FUN_100913d0

bool FUN_100913d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 100913f0 FUN_100913f0

void FUN_100913f0(void)

{
  int in_ECX;
  
  FUN_1000ac40(*(undefined4 *)(in_ECX + 0x324));
  return;
}


// ==== 10091400 FUN_10091400

undefined4 FUN_10091400(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  UObject *this;
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
  undefined4 uVar18;
  uint uStack_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebdb0;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  if (in_ECX[0xc4] == 0) {
    this = *(UObject **)(*(int *)(in_ECX[0x2e] + 0xc) + 4);
    local_34 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    while (this != (UObject *)0x0) {
      iVar3 = UObject::IsA(this,(UClass *)&DAT_1036eff0);
      if (iVar3 != 0) {
        FUN_10058770(&local_38);
        uVar1 = FUN_101c19e0();
        uVar2 = FUN_101c19e0(uVar1);
        iVar3 = local_38;
        iVar4 = local_34;
        goto LAB_10091480;
      }
      iVar3 = FUN_10058020();
      this = *(UObject **)(*(int *)(iVar3 + 0xc) + 4);
    }
  }
  else {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0(uVar1);
    iVar3 = in_ECX[0x20];
    iVar4 = in_ECX[0x21];
LAB_10091480:
    FUN_10021df0(iVar3,iVar4,uVar2,uVar1);
  }
  iVar4 = 9 - in_ECX[200] / 2;
  iVar3 = (**(code **)(*in_ECX + 0x6c))();
  if (iVar3 == 0) {
    FUN_10021a00(0,0,8,0x11,0,0,8,0x11,in_ECX[0xbe],0xff,1);
    uVar16 = 1;
    uVar13 = 0xff;
    iVar3 = in_ECX[0xbf];
    uVar10 = 0x11;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar2 = 0x11;
    uVar1 = FUN_101c19e0(0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(8,0,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13,uVar16);
    uVar17 = 1;
    uVar14 = 0xff;
    iVar3 = in_ECX[0xc0];
    uVar16 = 0x11;
    uVar13 = 8;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x11;
    uVar7 = 8;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,8,0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,uVar16,iVar3,uVar14,uVar17);
    if ((in_ECX[0xb9] <= in_ECX[0xc9]) || (in_ECX[0xc9] < 0)) goto LAB_100916e8;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xff7e7e7e;
    iVar5 = in_ECX[0xb7];
    iVar3 = in_ECX[0xb6];
  }
  else {
    FUN_10021a00(0,0,8,0x11,0,0,8,0x11,in_ECX[0xbb],0xff,1);
    uVar16 = 1;
    uVar13 = 0xff;
    iVar3 = in_ECX[0xbc];
    uVar10 = 0x11;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar2 = 0x11;
    uVar1 = FUN_101c19e0(0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(8,0,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13,uVar16);
    uVar17 = 1;
    uVar14 = 0xff;
    iVar3 = in_ECX[0xbd];
    uVar16 = 0x11;
    uVar13 = 8;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x11;
    uVar7 = 8;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,8,0x11,0,0,8,0x11,iVar3,0xff,1);
    FUN_10021a00(uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,uVar16,iVar3,uVar14,uVar17);
    if ((in_ECX[0xb9] <= in_ECX[0xc9]) || (in_ECX[0xc9] < 0)) goto LAB_100916e8;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xffdcdcdc;
    iVar5 = in_ECX[0xb7];
    iVar3 = in_ECX[0xb6];
  }
  FUN_100217a0(iVar3,iVar5 + iVar4,uVar2,uVar1,uVar7,uVar8,uVar9,uVar10,uVar13,uVar16,uVar14,uVar17,
               uVar11,uVar12,uVar15,uVar18);
LAB_100916e8:
  if (in_ECX[0xc4] != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x74))();
    if (iVar3 != 0) {
      for (local_1c = 0; local_1c < in_ECX[0xb9] + 1; local_1c = local_1c + 1) {
        iVar5 = local_1c * 0x11;
        FUN_10021a00(0,iVar5,8,0x11,0,0,8,0x11,in_ECX[0xbb],0xff,1);
        uVar16 = 1;
        uVar13 = 0xff;
        iVar3 = in_ECX[0xbc];
        uVar10 = 0x11;
        uVar9 = 8;
        uVar8 = 0;
        uVar7 = 0;
        uVar2 = 0x11;
        uVar1 = FUN_101c19e0(0x11,0,0,8,0x11,iVar3,0xff,1);
        FUN_10021a00(8,iVar5,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13,uVar16);
        uVar14 = 1;
        uVar16 = 0xff;
        iVar3 = in_ECX[0xbd];
        uVar13 = 0x11;
        uVar10 = 8;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0x11;
        uVar2 = 8;
        uVar1 = FUN_101c19e0(iVar5,8,0x11,0,0,8,0x11,iVar3,0xff,1);
        FUN_10021a00(uVar1,iVar5,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,iVar3,uVar16,uVar14);
      }
      local_18 = 0;
      while (local_18 < in_ECX[0xb9]) {
        if (in_ECX[0xca] == local_18) {
          iVar5 = local_18 * 0x11;
          local_20 = iVar5 + 0x11;
          uVar13 = 0xff;
          iVar3 = in_ECX[0xc1];
          uVar10 = 0xd;
          uVar9 = 0x10;
          uVar8 = 0;
          uVar7 = 0;
          uVar2 = 0x10;
          uVar1 = FUN_101c19e0(0x10,0,0,0x10,0xd,iVar3,0xff);
          FUN_10021970(1,local_20,uVar1,uVar2,uVar7,uVar8,uVar9,uVar10,iVar3,uVar13);
          uVar16 = 0xff;
          iVar3 = in_ECX[0xc2];
          uVar13 = 0xd;
          uVar10 = 0x20;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0x10;
          uVar2 = 0x20;
          iVar6 = local_20;
          uVar1 = FUN_101c19e0(local_20,0x20,0x10,0,0,0x20,0xd,iVar3,0xff);
          FUN_10021970(uVar1,iVar6,uVar2,uVar7,uVar8,uVar9,uVar10,uVar13,iVar3,uVar16);
          uVar15 = 0xffffffff;
          uVar12 = 0;
          uVar11 = 0;
          uVar17 = 0;
          uVar14 = 0;
          uVar16 = 0;
          uVar13 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(in_ECX[0xb6],iVar5 + 0x11 + iVar4,0xffdcdcdc,uVar1,uVar2,uVar7,uVar8,uVar9,
                       uVar10,uVar13,uVar16,uVar14,uVar17,uVar11,uVar12,uVar15);
          local_18 = local_18 + 1;
        }
        else {
          uVar15 = 0xffffffff;
          uVar12 = 0;
          uVar11 = 0;
          uVar17 = 0;
          uVar14 = 0;
          uVar16 = 0;
          uVar13 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(in_ECX[0xb6],(local_18 + 1) * 0x11 + iVar4,0xffdcdcdc,uVar1,uVar2,uVar7,uVar8
                       ,uVar9,uVar10,uVar13,uVar16,uVar14,uVar17,uVar11,uVar12,uVar15);
          local_18 = local_18 + 1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10091941 Catch@10091941

void Catch_10091941(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10091955 Catch@10091955

void Catch_10091955(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10091980 FUN_10091980

undefined4 FUN_10091980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  UObject *this;
  uint local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebdd0;
  local_10 = ExceptionList;
  local_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  this = *(UObject **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4);
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    if (this == (UObject *)0x0) {
LAB_10091a31:
      FUN_100034b0(param_1);
      FUN_100212e0();
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = UObject::IsA(this,(UClass *)&DAT_1036eff0);
    if (iVar1 != 0) {
      FUN_10058770(&local_2c);
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      FUN_10021df0(local_2c,local_28,uVar3,uVar2);
      goto LAB_10091a31;
    }
    iVar1 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar1 + 0xc) + 4);
  } while( true );
}


// ==== 10091a7b Catch@10091a7b

void Catch_10091a7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10091a8f Catch@10091a8f

void Catch_10091a8f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlButton::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10091ab0 FUN_10091ab0

undefined4 FUN_10091ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  UObject *this;
  uint local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ebdf0;
  local_10 = ExceptionList;
  local_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  this = *(UObject **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4);
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    if (this == (UObject *)0x0) {
LAB_10091b6e:
      FUN_100034b0(param_1);
      FUN_100212e0();
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar1 == 0) {
      FUN_10058770(&local_2c);
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      FUN_10021df0(local_2c,local_28,uVar3,uVar2);
      goto LAB_10091b6e;
    }
    iVar1 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar1 + 0xc) + 4);
  } while( true );
}


// ==== 10091ba6 Catch@10091ba6

void Catch_10091ba6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10091bba Catch@10091bba

void Catch_10091bba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlPushButton::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10091be0 FUN_10091be0

undefined4 FUN_10091be0(void)

{
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_c = 0;
  local_4 = 0;
  local_10 = 0;
  FUN_1005d0a0(&local_10);
  FUN_1000cb20(local_c << 0x10 | 100);
  return 1;
}


// ==== 10091c30 FUN_10091c30

undefined4 FUN_10091c30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  ushort *puVar6;
  FString *pFVar7;
  int *piVar8;
  int *in_ECX;
  UObject *this;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_184;
  int iStack_178;
  int iStack_174;
  uint uStack_160;
  FString local_150 [12];
  FString local_144 [12];
  FString local_138 [12];
  FString local_12c [12];
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [12];
  FString local_fc [12];
  FString local_f0 [12];
  FString local_e4 [12];
  FString local_d8 [12];
  FString local_cc [12];
  FString local_c0 [12];
  FString local_b4 [12];
  FString local_a8 [12];
  FString local_9c [12];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  undefined4 local_24;
  FString local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  puStack_7c = &LAB_101ebf87;
  local_80 = ExceptionList;
  uStack_160 = DAT_103554c4 ^ (uint)local_74;
  local_84 = (undefined1 *)&uStack_160;
  ExceptionList = &local_80;
  local_78 = 0;
  FUN_10002f40();
  this = *(UObject **)(*(int *)(in_ECX[0x2e] + 0xc) + 4);
  local_3c = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  while (this != (UObject *)0x0) {
    iVar2 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar2 == 0) {
      FUN_10058770();
      FUN_101c19e0();
      FUN_101c19e0();
      iStack_174 = 0x10091cf5;
      FUN_10021df0();
      break;
    }
    iVar2 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar2 + 0xc) + 4);
  }
  iVar2 = FUN_101c19e0();
  iVar3 = FUN_101c19e0();
  iVar4 = (**(code **)(*in_ECX + 0x74))();
  if (iVar4 == 0) {
    if (in_ECX[0xce] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (in_ECX[0xcf] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 0;
      FUN_100218f0();
    }
    if (in_ECX[0xd0] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(iVar2 + -4);
    }
    if (in_ECX[0xd1] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (in_ECX[0xd2] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (in_ECX[0xd3] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (in_ECX[0xd4] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (in_ECX[0xd5] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = iVar3 + -4;
      FUN_100218f0();
    }
    iVar3 = in_ECX[0xd6];
  }
  else {
    if (in_ECX[0xc5] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (in_ECX[0xc6] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 0;
      FUN_100218f0();
    }
    if (in_ECX[199] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(iVar2 + -4);
    }
    if (in_ECX[200] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (in_ECX[0xc9] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (in_ECX[0xca] != 0) {
      iStack_174 = 4;
      iStack_178 = 4;
      FUN_100218f0();
    }
    if (in_ECX[0xcb] != 0) {
      iStack_174 = 4;
      iStack_178 = 0;
      uStack_184 = 4;
      FUN_10021a00(0);
    }
    if (in_ECX[0xcc] != 0) {
      iStack_174 = iVar2 + -8;
      iStack_178 = iVar3 + -4;
      FUN_100218f0();
    }
    iVar3 = in_ECX[0xcd];
  }
  if (iVar3 != 0) {
    iStack_174 = 4;
    iStack_178 = 0;
    uStack_184 = 4;
    FUN_10021a00(iVar2 + -4);
  }
  iVar2 = in_ECX[0xd8];
  local_8 = 0;
  local_30 = iVar2;
  FString::FString(local_20);
  local_78._0_1_ = 1;
  local_24 = 0;
  param_1 = FUN_1003b100();
  local_c = FUN_1003b890();
  local_14 = in_ECX[0xde];
  do {
    if ((in_ECX[0xdd] + in_ECX[0xde] <= local_14) || (in_ECX[0xf6] <= local_14)) {
      FUN_100212e0();
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      local_78 = (uint)local_78._1_3_ << 8;
      FString::~FString(local_20);
      ExceptionList = local_80;
      return 1;
    }
    if (in_ECX[0xe2] == 0) {
      if (local_14 == in_ECX[0xe0]) {
        local_8 = 0;
        if ((in_ECX[0xe1] != 0) && (iVar3 = FUN_10039a70(), iVar3 != 0)) {
          pFVar5 = local_144;
          iStack_174 = 0x10092663;
          pFVar7 = (FString *)FUN_10039a70();
          pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_1);
          local_78._0_1_ = 0xe;
          FString::operator=(local_20,pFVar5);
          local_78._0_1_ = 1;
          FString::~FString(local_144);
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar6 = FString::operator*(local_20);
          local_8 = FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
        }
        iVar3 = FUN_10025df0();
        if (iVar3 == 0) {
          local_10 = FUN_1003b4a0();
          if (in_ECX[0xe2] == 0) {
            local_28 = 0;
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*((FString *)(in_ECX + 0xc1));
              local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11);
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::FString((FString *)&uStack_184,(FString *)(in_ECX + 0xc1));
              local_78._0_1_ = 1;
              FUN_10037e10();
            }
            else if (iVar3 == 3) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*((FString *)(in_ECX + 0xc1));
              local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11);
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::FString((FString *)&uStack_184,(FString *)(in_ECX + 0xc1));
              local_78._0_1_ = 1;
              FUN_10038320();
            }
            else if (iVar3 == 4) {
              iVar3 = FUN_10141550();
              if (iVar3 == 8) {
                iStack_174 = 0;
                iStack_178 = 0;
                uStack_184 = 0;
                uVar11 = 0;
                uVar10 = 0;
                puVar6 = FString::operator*((FString *)(in_ECX + 0xc1));
                local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11
                                       );
              }
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::FString((FString *)&uStack_184,(FString *)(in_ECX + 0xc1));
              local_78._0_1_ = 1;
              FUN_10038fd0();
            }
            else {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar11 = 0;
              uVar10 = 0;
              if (iVar3 == 0) {
                puVar6 = FString::operator*((FString *)(in_ECX + 0xc1));
                local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11
                                       );
                FString::FString((FString *)&iStack_178,(FString *)(in_ECX + 0xc1));
                local_78._0_1_ = 1;
                FUN_10038aa0();
              }
              else {
                puVar6 = FString::operator*((FString *)(in_ECX + 0xc1));
                local_28 = FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11
                                       );
              }
            }
            local_8 = local_8 + local_28;
            iVar3 = FUN_10039a70();
            if (iVar3 != 0) {
              if (local_10 < 1) {
                iVar3 = in_ECX[0xdb];
                pFVar5 = (FString *)FUN_10039a70();
                FString::Len(pFVar5);
                pFVar5 = local_cc;
                iStack_174 = 0x10092c03;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x1a;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_cc;
              }
              else {
                iVar3 = in_ECX[0xdb];
                pFVar5 = local_12c;
                iStack_174 = 0x10092ba5;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x19;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_12c;
              }
              local_78._0_1_ = 1;
              FString::~FString(pFVar5);
              iVar3 = FString::Len(local_20);
              if (iVar3 != 0) {
                iStack_174 = 0;
                iStack_178 = 0;
                uStack_184 = 0;
                uVar12 = 0;
                uVar11 = 0;
                uVar10 = 0;
                puVar6 = FString::operator*(local_20);
                FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              }
            }
          }
          else {
            iVar3 = *(int *)GLanguageType_exref;
            if (iVar3 == 2) {
              pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_50,0);
              local_78._0_1_ = 0xf;
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(pFVar5);
              FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              local_78._0_1_ = 1;
              FString::~FString(local_50);
              iStack_178 = local_8;
              iVar3 = local_10;
              iStack_174 = iVar2;
              FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe78,0);
              local_78._0_1_ = 1;
              FUN_10037e10(iVar3);
            }
            else if (iVar3 == 3) {
              pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_fc,0);
              local_78._0_1_ = 0x11;
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(pFVar5);
              FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              local_78._0_1_ = 1;
              FString::~FString(local_fc);
              iStack_178 = local_8;
              iVar3 = local_10;
              iStack_174 = iVar2;
              FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe78,0);
              local_78._0_1_ = 1;
              FUN_10038320(iVar3);
            }
            else if (iVar3 == 4) {
              iStack_174 = local_8;
              iStack_178 = 0;
              FString::Mid((FString *)(in_ECX + 0xc1),(int)&uStack_184,0);
              local_78._0_1_ = 1;
              FUN_10038fd0();
            }
            else {
              pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_b4,0);
              local_78._0_1_ = 0x14;
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(pFVar5);
              FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
              local_78._0_1_ = 1;
              FString::~FString(local_b4);
            }
          }
          iVar3 = (**(code **)(*in_ECX + 0x74))();
          if (((iVar3 != 0) && (in_ECX[0xdc] != 0)) && (*(int *)GLanguageType_exref == 2)) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = (ushort *)&DAT_10230ff8;
            iVar3 = in_ECX[0xe1] + in_ECX[0xd8];
LAB_100933ca:
            FUN_100217a0(iVar3,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          }
        }
        else {
          iVar3 = FUN_10141550();
          if (((((iVar3 == 10) || (iVar3 = FUN_10141550(), iVar3 == 9)) ||
               ((iVar3 = FUN_10141550(), iVar3 == 0xb ||
                ((iVar3 = FUN_10141550(), iVar3 == 8 || (iVar3 = FUN_10141550(), iVar3 == 0xc))))))
              && (in_ECX[0xb6] != 0)) && (iVar3 = FUN_10024670(), iVar3 != 0)) {
            piVar8 = (int *)FUN_10024670();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x200))();
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x13c))();
            }
          }
          iVar3 = (**(code **)(*in_ECX + 0x74))();
          if ((iVar3 != 0) && (in_ECX[0xdc] != 0)) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            FUN_100217a0(local_8 + -3 + in_ECX[0xd8],iVar2,0xffdcdcdc,&DAT_10230ff8,0,0);
          }
          local_10 = FUN_1003b4a0();
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_14 + 1 < in_ECX[0xf6]) {
              if (local_10 == 0) {
                iVar3 = in_ECX[0xdb];
                pFVar5 = (FString *)FUN_10039a70();
                FString::Len(pFVar5);
                pFVar5 = local_114;
                iStack_174 = 0x10092e26;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x1b;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_114;
              }
              else {
                iVar3 = in_ECX[0xdb];
                pFVar5 = local_5c;
                iStack_174 = 0x10092e6b;
                pFVar7 = (FString *)FUN_10039a70();
                pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
                local_78._0_1_ = 0x1c;
                FString::operator=(local_20,pFVar5);
                pFVar5 = local_5c;
              }
            }
            else {
              iVar3 = in_ECX[0xdb];
              pFVar5 = (FString *)FUN_10039a70();
              FString::Len(pFVar5);
              pFVar5 = local_68;
              iStack_174 = 0x10092ec6;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
              local_78._0_1_ = 0x1d;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_68;
            }
            local_78._0_1_ = 1;
            FString::~FString(pFVar5);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              iVar3 = in_ECX[0xd8] + local_8;
              goto LAB_100933ca;
            }
          }
        }
      }
      else if (local_14 + 1 < in_ECX[0xf6]) {
        local_10 = FUN_1003b4a0();
        if (in_ECX[0xe2] == 0) {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (local_10 == 0) {
              pFVar5 = (FString *)FUN_10039a70();
              FString::Len(pFVar5);
              pFVar5 = local_120;
              iStack_174 = 0x1009329e;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_1);
              local_78._0_1_ = 0x26;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_120;
            }
            else {
              pFVar5 = local_108;
              iStack_174 = 0x10093246;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_1);
              local_78._0_1_ = 0x25;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_108;
            }
            local_78._0_1_ = 1;
            FString::~FString(pFVar5);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              local_8 = FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            }
          }
        }
        else {
          iVar3 = FUN_10039a70();
          if (iVar3 != 0) {
            if (in_ECX[0xdb] < 1) {
              pFVar5 = (FString *)FUN_10039a70();
              FString::Len(pFVar5);
              pFVar5 = local_a8;
              iStack_174 = 0x10092fe0;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_1);
              local_78._0_1_ = 0x1f;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_a8;
            }
            else {
              pFVar5 = local_90;
              iStack_174 = 0x10092f8e;
              pFVar7 = (FString *)FUN_10039a70();
              pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_1);
              local_78._0_1_ = 0x1e;
              FString::operator=(local_20,pFVar5);
              pFVar5 = local_90;
            }
            local_78._0_1_ = 1;
            FString::~FString(pFVar5);
            iVar3 = FString::Len(local_20);
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              local_8 = FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            }
          }
          if (*(int *)GLanguageType_exref == 2) {
            pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_c0,0);
            local_78._0_1_ = 0x20;
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            local_78._0_1_ = 1;
            FString::~FString(local_c0);
            iStack_178 = local_8;
            iVar3 = local_10;
            iStack_174 = iVar2;
            FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe78,0);
            local_78._0_1_ = 1;
            FUN_10037e10(iVar3);
          }
          else if (*(int *)GLanguageType_exref == 3) {
            pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_d8,0);
            local_78._0_1_ = 0x22;
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            local_78._0_1_ = 1;
            FString::~FString(local_d8);
            iStack_178 = local_8;
            iVar3 = local_10;
            iStack_174 = iVar2;
            FString::Mid((FString *)(in_ECX + 0xc1),(int)&stack0xfffffe78,0);
            local_78._0_1_ = 1;
            FUN_10038320(iVar3);
          }
          else {
            pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_f0,0);
            local_78._0_1_ = 0x24;
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(in_ECX[0xd8] + local_8,iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            local_78._0_1_ = 1;
            FString::~FString(local_f0);
          }
        }
      }
      else {
        local_10 = FUN_1003b4a0();
        iVar3 = FUN_10039a70();
        if (iVar3 != 0) {
          pFVar5 = (FString *)FUN_10039a70();
          FString::Len(pFVar5);
          pFVar5 = local_138;
          iStack_174 = 0x10093368;
          pFVar7 = (FString *)FUN_10039a70();
          pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,param_1);
          local_78._0_1_ = 0x27;
          FString::operator=(local_20,pFVar5);
          local_78._0_1_ = 1;
          FString::~FString(local_138);
          iVar3 = FString::Len(local_20);
          if (iVar3 != 0) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(local_20);
            iVar3 = in_ECX[0xd8];
            goto LAB_100933ca;
          }
        }
      }
    }
    else {
      local_10 = FUN_1003b4a0();
      if (in_ECX[0xe2] == 0) {
        FString::Len((FString *)(in_ECX + 0xc1));
        pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_150,param_1);
        local_78._0_1_ = 7;
        FString::operator=(local_20,pFVar5);
        local_78._0_1_ = 1;
        FString::~FString(local_150);
        local_8 = 0;
        iVar3 = *(int *)GLanguageType_exref;
        if (iVar3 == 2) {
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar6 = FString::operator*(local_20);
          local_8 = FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          iStack_178 = 0;
          iStack_174 = iVar2;
          FString::FString((FString *)&stack0xfffffe78,local_20);
          local_78._0_1_ = 1;
          FUN_10037e10();
        }
        else if (iVar3 == 3) {
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          puVar6 = FString::operator*(local_20);
          local_8 = FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          iStack_178 = 0;
          iStack_174 = iVar2;
          FString::FString((FString *)&stack0xfffffe78,local_20);
          local_78._0_1_ = 1;
          FUN_10038320();
        }
        else if (iVar3 == 4) {
          iStack_178 = 0;
          iStack_174 = iVar2;
          FString::FString((FString *)&stack0xfffffe78,local_20);
          local_78._0_1_ = 1;
          FUN_10038fd0();
        }
        else {
          iStack_174 = 0;
          iStack_178 = 0;
          uStack_184 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          if (iVar3 == 0) {
            puVar6 = FString::operator*(local_20);
            local_8 = FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            uStack_184 = 0x10092476;
            FString::FString((FString *)&stack0xfffffe84,local_20);
            local_78._0_1_ = 1;
            FUN_10038aa0();
          }
          else {
            puVar6 = FString::operator*(local_20);
            local_8 = FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
          }
        }
        iVar3 = FUN_10039a70();
        if (iVar3 != 0) {
          if (local_10 < 1) {
            iVar3 = in_ECX[0xdb];
            pFVar5 = (FString *)FUN_10039a70();
            FString::Len(pFVar5);
            iStack_174 = local_c;
            iStack_178 = 0x1009253d;
            pFVar5 = local_74;
            pFVar7 = (FString *)FUN_10039a70();
            iStack_174 = 0x10092545;
            pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
            local_78._0_1_ = 0xd;
            FString::operator=(local_20,pFVar5);
            pFVar5 = local_74;
          }
          else {
            iVar3 = in_ECX[0xdb];
            pFVar5 = local_e4;
            iStack_174 = local_c;
            iStack_178 = 0x100924e2;
            pFVar7 = (FString *)FUN_10039a70();
            iStack_174 = 0x100924ea;
            pFVar5 = (FString *)FString::Mid(pFVar7,(int)pFVar5,iVar3);
            local_78._0_1_ = 0xc;
            FString::operator=(local_20,pFVar5);
            pFVar5 = local_e4;
          }
          local_78._0_1_ = 1;
          FString::~FString(pFVar5);
          iVar3 = FString::Len(local_20);
          if (iVar3 != 0) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = (ushort *)0x0;
            puVar9 = FString::operator*(local_20);
            iVar4 = -0x232324;
            iVar3 = iVar2;
LAB_1009259f:
            FUN_100217a0(iVar3,iVar4,puVar9,puVar6,uVar10,uVar11,uVar12);
          }
        }
      }
      else {
        pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xc1),(int)local_9c,param_1);
        local_78._0_1_ = 2;
        FString::operator=(local_20,pFVar5);
        local_78._0_1_ = 1;
        FString::~FString(local_9c);
        iVar3 = FString::Len(local_20);
        if (iVar3 != 0) {
          iVar3 = *(int *)GLanguageType_exref;
          if (iVar3 == 2) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(local_20);
            FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            iStack_178 = 0;
            iStack_174 = iVar2;
            FString::FString((FString *)&stack0xfffffe78,local_20);
            local_78._0_1_ = 1;
            FUN_10037e10();
          }
          else if (iVar3 == 3) {
            iStack_174 = 0;
            iStack_178 = 0;
            uStack_184 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            puVar6 = FString::operator*(local_20);
            FUN_100217a0(in_ECX[0xd8],iVar2,0xffdcdcdc,puVar6,uVar10,uVar11,uVar12);
            iStack_178 = 0;
            iStack_174 = iVar2;
            FString::FString((FString *)&stack0xfffffe78,local_20);
            local_78._0_1_ = 1;
            FUN_10038320();
          }
          else if (iVar3 == 4) {
            iStack_178 = 0;
            iStack_174 = iVar2;
            FString::FString((FString *)&stack0xfffffe78,local_20);
            local_78._0_1_ = 1;
            FUN_10038fd0();
          }
          else {
            if (iVar3 != 0) {
              iStack_174 = 0;
              iStack_178 = 0;
              uStack_184 = 0;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0;
              puVar6 = FString::operator*(local_20);
              puVar9 = (ushort *)0xffdcdcdc;
              iVar3 = in_ECX[0xd8];
              iVar4 = iVar2;
              goto LAB_1009259f;
            }
            uStack_184 = 0x1009224f;
            FString::FString((FString *)&stack0xfffffe84,local_20);
            local_78._0_1_ = 1;
            FUN_10038aa0();
          }
        }
      }
      if (((local_14 == in_ECX[0xe0]) && (in_ECX[0xdc] != 0)) && (*(int *)GLanguageType_exref == 2))
      {
        iStack_174 = 0;
        iStack_178 = 0;
        uStack_184 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        puVar6 = (ushort *)&DAT_10230ff8;
        iVar3 = in_ECX[0xe1] + -3 + in_ECX[0xd8];
        goto LAB_100933ca;
      }
    }
    iVar2 = iVar2 + in_ECX[0xd7] + in_ECX[0xd8];
    param_1 = local_10;
    if ((local_10 == 0) && ((in_ECX[0xe2] == 0 || (in_ECX[0xdb] == 0)))) {
      local_c = local_c + 1;
    }
    local_14 = local_14 + 1;
    local_30 = iVar2;
  } while( true );
}


// ==== 10093441 Catch@10093441

void Catch_10093441(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x48,&DAT_102a47f0);
}


// ==== 10093455 Catch@10093455

void Catch_10093455(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlMultiEdit::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10093480 FUN_10093480

void FUN_10093480(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  FString *pFVar6;
  int *in_ECX;
  UObject *this;
  ushort in_FPUControlWord;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uStack_3a8;
  FString local_394 [12];
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  int local_374;
  longlong local_370;
  int local_368;
  undefined4 local_364;
  int local_360;
  int local_35c;
  int local_358;
  undefined1 *local_354;
  float local_350;
  int local_34c;
  float local_348 [2];
  int local_340;
  undefined4 local_33c;
  undefined1 *local_338;
  void *local_334;
  undefined1 *puStack_330;
  uint local_32c;
  ushort local_328 [400];
  uint local_8;
  
  puStack_330 = &LAB_101ebfd4;
  local_334 = ExceptionList;
  uStack_3a8 = DAT_103554c4 ^ (uint)local_328;
  local_338 = (undefined1 *)&uStack_3a8;
  ExceptionList = &local_334;
  local_32c = 0;
  local_8 = uStack_3a8;
  FUN_10002f40();
  this = *(UObject **)(*(int *)(in_ECX[0x2e] + 0xc) + 4);
  local_384 = 0;
  local_388 = 0;
  local_380 = 0;
  local_37c = 0;
  while (this != (UObject *)0x0) {
    iVar2 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar2 == 0) {
      FUN_10058770();
      FUN_101c19e0();
      FUN_101c19e0();
      FUN_10021df0(in_ECX[0x20]);
      break;
    }
    iVar2 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar2 + 0xc) + 4);
  }
  iVar2 = (**(code **)(*in_ECX + 0x74))();
  if (iVar2 == 0) {
    if (in_ECX[0xc9] != 0) {
      uVar11 = 8;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar8,uVar11);
    }
    if (in_ECX[0xca] != 0) {
      uVar12 = 8;
      uVar11 = 0;
      uVar8 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar8,uVar11,uVar12);
    }
    iVar2 = in_ECX[0xcb];
  }
  else {
    if (in_ECX[0xc6] != 0) {
      uVar11 = 8;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar8,uVar11);
    }
    if (in_ECX[199] != 0) {
      uVar12 = 8;
      uVar11 = 0;
      uVar8 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar8,uVar11,uVar12);
    }
    iVar2 = in_ECX[200];
  }
  if (iVar2 != 0) {
    uVar13 = 8;
    uVar9 = 0;
    uVar12 = 0;
    uVar3 = FUN_101c19e0(0,0,8);
    uVar11 = 8;
    uVar8 = 0;
    uVar7 = FUN_101c19e0(0,8,uVar3);
    FUN_10021970(uVar7,uVar8,uVar11,uVar3,uVar12,uVar9,uVar13);
  }
  if ((in_ECX[0xd2] != 0) && (in_ECX[0xcc] != 0)) {
    uVar12 = 0xc1;
    uVar11 = 0;
    uVar8 = 0;
    uVar3 = FUN_101c19e0(0,0,0xc1);
    uVar7 = FUN_101c19e0(uVar3);
    FUN_10021970(0,0,uVar7,uVar3,uVar8,uVar11,uVar12);
  }
  local_33c = (float)in_ECX[0xda];
  if ((int)local_33c < 1) {
    iVar2 = FUN_101c19e0();
  }
  else {
    iVar2 = FUN_101c19e0();
  }
  in_ECX[0xdb] = iVar2;
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xde));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  fVar1 = local_348[0];
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  iVar2 = (int)fVar1 + (int)local_348[0];
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xe1));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  if (in_ECX[0xdd] == 0) {
    in_ECX[0xd0] = (uint)(iVar2 + (int)local_348[0] < in_ECX[0xdb] + -0xc);
  }
  local_350 = 0.0;
  local_364 = 0;
  local_340 = 2;
  iVar2 = 0;
  if (in_ECX[0xcd] == 2) {
    while( true ) {
      local_374 = iVar2;
      iVar5 = FString::Len((FString *)(in_ECX + 0xde));
      if (iVar5 <= iVar2) break;
      local_328[iVar2] = 0x2a;
      iVar2 = iVar2 + 1;
    }
    local_328[iVar2] = 0;
    iVar2 = FUN_100217a0(local_340,2,0xffdcdcdc,local_328,0,0,0,0,0,0,0,0,0);
  }
  else {
    local_368 = 0;
    local_358 = 0;
    local_33c = (float)in_ECX[0xd9];
    iVar5 = FString::Len((FString *)(in_ECX + 0xde));
    if ((int)local_33c < iVar5) {
      local_360 = (int)local_33c;
      while( true ) {
        iVar5 = FString::Len((FString *)(in_ECX + 0xde));
        if (iVar5 <= local_360) break;
        pFVar6 = (FString *)FString::Mid((FString *)(in_ECX + 0xde),(int)local_394,local_360);
        local_32c._0_1_ = 1;
        uVar11 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar3 = 0;
        puVar4 = FString::operator*(pFVar6);
        FUN_10020bb0(&local_370,puVar4,uVar3,uVar7,uVar8,uVar11);
        local_32c = (uint)local_32c._1_3_ << 8;
        FString::~FString(local_394);
        iVar2 = iVar2 + (int)local_370;
        local_368 = iVar2;
        iVar5 = FUN_101c19e0();
        if (iVar5 <= iVar2) goto LAB_10093984;
        local_360 = local_360 + 1;
      }
      if (local_358 == 0) goto LAB_100938c2;
    }
    else {
LAB_100938c2:
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
      FUN_10020bb0(&local_370,puVar4,uVar3,uVar7,uVar8);
      iVar2 = iVar2 + (int)local_370;
      local_368 = iVar2;
      iVar5 = FUN_101c19e0();
      if (iVar2 < iVar5) {
        local_35c = 0;
        while( true ) {
          iVar5 = FString::Len((FString *)(in_ECX + 0xe1));
          if (iVar5 <= local_35c) break;
          pFVar6 = (FString *)FString::Mid((FString *)(in_ECX + 0xe1),(int)local_394,local_35c);
          local_32c._0_1_ = 2;
          uVar11 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar3 = 0;
          puVar4 = FString::operator*(pFVar6);
          FUN_10020bb0(&local_370,puVar4,uVar3,uVar7,uVar8,uVar11);
          local_32c = (uint)local_32c._1_3_ << 8;
          FString::~FString(local_394);
          iVar2 = iVar2 + (int)local_370;
          local_368 = iVar2;
          iVar5 = FUN_101c19e0();
          if (iVar5 <= iVar2) goto LAB_10093984;
          local_35c = local_35c + 1;
        }
      }
      else {
LAB_10093984:
        local_358 = 1;
      }
    }
    local_340 = 2;
    iVar2 = FString::Len((FString *)(in_ECX + 0xde));
    if (in_ECX[0xd9] < iVar2) {
      uVar14 = 0;
      uVar10 = 0;
      uVar13 = 0;
      uVar9 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(in_ECX + 0xde));
      iVar2 = FUN_100217a0(2,2,0xffdcdcdc,puVar4 + in_ECX[0xd9],uVar3,uVar7,uVar8,uVar11,uVar12,
                           uVar9,uVar13,uVar10,uVar14);
      iVar5 = FString::Len((FString *)(in_ECX + 0xde));
      if (0 < iVar5) {
        puVar4 = FString::operator*((FString *)(in_ECX + 0xde));
        local_354 = &stack0xfffffc4c;
        FString::FString((FString *)&stack0xfffffc4c,puVar4 + in_ECX[0xd9]);
        local_32c = local_32c & 0xffffff00;
        iVar2 = FUN_10014420();
      }
    }
    else {
      iVar2 = 0;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  local_33c = local_348[0];
  uVar8 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xf0));
  FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
  local_350 = local_348[0];
  if (local_348[0] != 0.0) {
    iVar5 = FUN_10141550();
    if (iVar5 == 6) {
      local_350 = 1.68156e-44;
    }
  }
  if (in_ECX[0xcd] == 2) {
LAB_10093b35:
    local_34c = 0;
    while( true ) {
      iVar5 = FString::Len((FString *)(in_ECX + 0xe1));
      if (iVar5 <= local_34c) break;
      local_328[local_34c] = 0x2a;
      local_34c = local_34c + 1;
    }
    local_328[local_34c] = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
    FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
    uVar14 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = local_328;
  }
  else {
    iVar5 = *(int *)GLanguageType_exref;
    if (iVar5 == 2) {
      FUN_100139e0(local_340,2);
    }
    else if (iVar5 == 0) {
      FUN_10013c60(local_340,2);
    }
    else if (iVar5 == 3) {
      FUN_10013e70(local_340,2);
    }
    else if (iVar5 == 4) {
      FUN_100169b0(local_340);
    }
    if (in_ECX[0xcd] == 2) goto LAB_10093b35;
    iVar5 = FUN_10141550();
    if (iVar5 == 10) {
LAB_10093bfa:
      local_348[0] = 0.0;
    }
    else {
      iVar5 = FUN_10141550();
      if (iVar5 == 9) goto LAB_10093bfa;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
      FUN_10020bb0(local_348,puVar4,uVar3,uVar7,uVar8);
    }
    uVar14 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = FString::operator*((FString *)(in_ECX + 0xe1));
  }
  FUN_100217a0(local_340 + (int)local_350 + iVar2 + (int)local_348[0],2,0xffdcdcdc,puVar4,uVar3,
               uVar7,uVar8,uVar11,uVar12,uVar9,uVar13,uVar10,uVar14);
  iVar5 = FUN_10025df0();
  if (iVar5 == 0) {
    iVar5 = (**(code **)(*in_ECX + 0x74))();
    if ((iVar5 == 0) || (*(int *)GLanguageType_exref != 0)) {
      iVar5 = (**(code **)(*in_ECX + 0x74))();
      if ((iVar5 == 0) || (*(int *)GLanguageType_exref != 2)) {
        iVar5 = (**(code **)(*in_ECX + 0x74))();
        if ((iVar5 == 0) || (*(int *)GLanguageType_exref != 3)) {
          iVar5 = (**(code **)(*in_ECX + 0x74))();
          if ((iVar5 != 0) && (*(int *)GLanguageType_exref == 4)) {
            FUN_10016270(local_340,2);
          }
        }
        else {
          FUN_100134e0(local_340,2,iVar2,local_33c);
        }
      }
      else {
        FUN_10015f70(local_340,2);
      }
    }
    else {
      FUN_100133c0(local_340,2);
    }
    iVar5 = (**(code **)(*in_ECX + 0x74))();
    if ((((iVar5 != 0) && (local_33c == 0.0)) && (in_ECX[0xcf] != 0)) && (in_ECX[0xd1] != 0)) {
      FUN_100217a0(iVar2 + -1,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
    local_354 = (undefined1 *)((int)local_33c + iVar2);
    fVar1 = (float)(int)local_354;
    if ((int)local_354 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if ((float)in_ECX[0x22] < fVar1) {
      in_ECX[0xd9] = in_ECX[0xd9] + 1;
    }
    goto LAB_10093f02;
  }
  local_354 = (undefined1 *)((int)local_33c + iVar2);
  in_ECX[0xf7] = (int)local_354;
  local_33c = (float)(int)local_354;
  if ((int)local_354 < 0) {
    local_33c = local_33c + 4.2949673e+09;
  }
  if ((float)in_ECX[0x22] == local_33c) {
    iVar2 = (int)local_354 - 1;
LAB_10093e93:
    in_ECX[0xf7] = iVar2;
  }
  else if ((float)in_ECX[0x22] < local_33c) {
    if (*(int *)GLanguageType_exref == 5) {
      local_354 = &stack0xfffffc4c;
      iVar2 = in_ECX[0xd9];
      FString::Mid((FString *)(in_ECX + 0xde),(int)&stack0xfffffc4c,0);
      local_32c = local_32c & 0xffffff00;
      FUN_1002ac60(iVar2);
      iVar2 = FUN_10015ac0();
      in_ECX[0xd9] = in_ECX[0xd9] + iVar2;
    }
    else {
      in_ECX[0xd9] = in_ECX[0xd9] + 1;
    }
    in_ECX[0xdc] = in_ECX[0xd9];
    local_33c = (float)CONCAT22(in_FPUControlWord,(undefined2)local_33c);
    local_354 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_370 = (longlong)ROUND((float)in_ECX[0x22] - 1.0);
    iVar2 = (int)local_370;
    goto LAB_10093e93;
  }
  if (in_ECX[0xcf] != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x74))();
    if ((iVar2 != 0) && (in_ECX[0xd1] != 0)) {
      if (in_ECX[0xcd] == 2) {
        iVar2 = in_ECX[0xf7];
      }
      else {
        iVar2 = in_ECX[0xf7] + -1;
      }
      FUN_100217a0(iVar2,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
  }
LAB_10093f02:
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_334;
  __security_check_cookie(local_8 ^ (uint)local_328);
  return;
}


// ==== 10093f3e Catch@10093f3e

void Catch_10093f3e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_102a47f0);
}


// ==== 10093f52 Catch@10093f52

void Catch_10093f52(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlEdit::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10093f70 FUN_10093f70

undefined4 FUN_10093f70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  UObject *this;
  uint local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ec000;
  local_10 = ExceptionList;
  local_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  this = *(UObject **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4);
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    if (this == (UObject *)0x0) {
LAB_1009402e:
      if (0 < *(int *)(in_ECX + 0x2d8)) {
        if (*(int *)(in_ECX + 0x2f8) != 0) {
          FUN_10021a00(0,*(undefined4 *)(in_ECX + 0x2dc),0xf,8,0,0,0xf,8,*(int *)(in_ECX + 0x2f8),
                       0xff,1);
        }
        if (*(int *)(in_ECX + 0x300) != 0) {
          FUN_10021a00(0,*(int *)(in_ECX + 0x2dc) + -8 + *(int *)(in_ECX + 0x2d8),0xf,8,0,0,0xf,8,
                       *(int *)(in_ECX + 0x300),0xff,1);
        }
        if (*(int *)(in_ECX + 0x2fc) != 0) {
          FUN_10021970(0,*(int *)(in_ECX + 0x2dc) + 8,0xf,*(int *)(in_ECX + 0x2d8) + -0x10,0,0,0xf,8
                       ,*(int *)(in_ECX + 0x2fc),0xff);
        }
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      FUN_100212e0();
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = UObject::IsA(this,(UClass *)&DAT_1035b180);
    if (iVar1 == 0) {
      FUN_10058770(&local_2c);
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      FUN_10021df0(local_2c,local_28,uVar3,uVar2);
      goto LAB_1009402e;
    }
    iVar1 = FUN_10058020();
    this = *(UObject **)(*(int *)(iVar1 + 0xc) + 4);
  } while( true );
}


// ==== 10094108 Catch@10094108

void Catch_10094108(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1009411c Catch@1009411c

void Catch_1009411c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlSliderBar::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10094140 FUN_10094140

void FUN_10094140(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec028;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCDynamicLinker::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100941a0 FUN_100941a0

void FUN_100941a0(byte param_1)

{
  void *in_ECX;
  
  FUN_10094140();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x328);
  }
  return;
}


// ==== 100941d0 FUN_100941d0

void FUN_100941d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCFileLinker::vftable;
  in_ECX[0xb6] = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10094240 FUN_10094240

void FUN_10094240(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec088;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCFileLinker::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100942a0 FUN_100942a0

void FUN_100942a0(byte param_1)

{
  void *in_ECX;
  
  FUN_10094240();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x6dc);
  }
  return;
}


// ==== 100942d0 FUN_100942d0

void FUN_100942d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec0b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCActionLinker::vftable;
  in_ECX[0xb6] = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10094340 FUN_10094340

void FUN_10094340(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec0e8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCActionLinker::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100943a0 FUN_100943a0

void FUN_100943a0(byte param_1)

{
  void *in_ECX;
  
  FUN_10094340();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x6dc);
  }
  return;
}


// ==== 100943d0 FUN_100943d0

void FUN_100943d0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCDynamicLinker::vftable;
  in_ECX[0xb7] = 0;
  in_ECX[0xb6] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xbb] = 0;
  in_ECX[0xba] = 0;
  in_ECX[0xbc] = 0;
  in_ECX[0xbd] = 0;
  in_ECX[0xbe] = 0;
  in_ECX[0xbf] = 0;
  in_ECX[0xc0] = 0;
  in_ECX[0xc1] = 0;
  in_ECX[0xc3] = 0;
  in_ECX[0xc4] = 0;
  in_ECX[0xc5] = 0;
  in_ECX[0xc9] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10094490 FUN_10094490

void FUN_10094490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCDynamicLinker::vftable;
  in_ECX[0xb6] = param_1;
  in_ECX[0xb7] = param_2;
  in_ECX[0xb8] = param_3;
  in_ECX[0xb9] = param_4;
  in_ECX[0xba] = param_9;
  in_ECX[0xbb] = param_10;
  in_ECX[0xbc] = param_5;
  in_ECX[0xbd] = param_6;
  in_ECX[0xbe] = param_7;
  in_ECX[0xbf] = param_8;
  in_ECX[0xc3] = 0;
  in_ECX[0xc4] = 0;
  in_ECX[0xc5] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[0xc0] = param_11;
  in_ECX[0xc1] = param_12;
  in_ECX[0xc2] = param_13;
  ExceptionList = local_c;
  return;
}


// ==== 10094580 FUN_10094580

undefined4 FUN_10094580(void)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_c;
  undefined1 local_8 [4];
  int local_4;
  
  if (*(int *)(in_ECX + 0x300) != 0) {
    FUN_100216e0(local_8,0x41,0);
    if ((local_4 + 6) * 2 < *(int *)(in_ECX + 0x2f4)) {
      uVar6 = 3;
    }
    else {
      uVar6 = (local_4 + 6 < *(int *)(in_ECX + 0x2f4)) + 1;
    }
    iVar7 = 0;
    if (*(int *)(in_ECX + 0x308) == 0) {
      if (uVar6 != 0) {
        do {
          FName::FName((FName *)&local_c,0);
          pUVar1 = UObject::GetTransientPackage();
          pUVar2 = UObject::StaticAllocateObject
                             (&DAT_10371970,pUVar1,local_c,0,0,*(undefined4 *)GError_exref,0,0);
          if (pUVar2 == (UObject *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_100942d0(*(undefined4 *)(in_ECX + 0x300));
          }
          *(int *)(in_ECX + 0x30c + iVar7 * 4) = iVar3;
          *(undefined4 *)(iVar3 + 0x1cc) = 0xff00ff04;
          if (iVar7 == 0) {
            if (uVar6 == 1) {
              (**(code **)(**(int **)(in_ECX + 0x30c) + 0xc0))
                        (0,0,(*(int *)(in_ECX + 0x2f0) - *(int *)(in_ECX + 0x2d8)) +
                             *(int *)(in_ECX + 0x2e8) + *(int *)(in_ECX + 0x2e0),local_4,0,0,3);
            }
            else if (1 < uVar6) {
              piVar5 = *(int **)(in_ECX + 0x30c);
              iVar3 = (*(int *)(in_ECX + 0x2f8) - *(int *)(in_ECX + 0x2d8)) +
                      *(int *)(in_ECX + 0x2e8) + *(int *)(in_ECX + 0x2e0);
              iVar9 = 0;
              iVar8 = 0;
LAB_10094770:
              (**(code **)(*piVar5 + 0xc0))(iVar8,iVar9,iVar3,local_4,0,0,3);
            }
          }
          else if (iVar7 == 1) {
            if (uVar6 == 2) {
              iVar3 = *(int *)(in_ECX + 0x2fc);
              piVar5 = *(int **)(in_ECX + 0x310);
              iVar9 = local_4 + 6;
LAB_10094763:
              iVar8 = *(int *)(in_ECX + 0x2e8) - *(int *)(in_ECX + 0x2d8);
              goto LAB_10094770;
            }
            if (uVar6 == 3) {
              (**(code **)(**(int **)(in_ECX + 0x310) + 0xc0))
                        (*(int *)(in_ECX + 0x2e8) - *(int *)(in_ECX + 0x2d8),local_4 + 6,
                         *(undefined4 *)(in_ECX + 0x2f8),
                         *(int *)(in_ECX + 0x2f4) + (local_4 + 6) * -2,0,0,3);
            }
          }
          else if (iVar7 == 2) {
            iVar3 = *(int *)(in_ECX + 0x2fc);
            piVar5 = *(int **)(in_ECX + 0x314);
            iVar9 = *(int *)(in_ECX + 0x2f4) - local_4;
            goto LAB_10094763;
          }
          uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x30c + iVar7 * 4),0x12);
          FUN_1005c1e0(uVar4);
          if (*(ushort **)(in_ECX + 0x304) != (ushort *)0x0) {
            appStrcpy((ushort *)(*(int *)(in_ECX + 0x30c + iVar7 * 4) + 0x2dc),
                      *(ushort **)(in_ECX + 0x304));
          }
          *(int *)(in_ECX + 0x324) = *(int *)(in_ECX + 0x324) + 1;
          iVar7 = iVar7 + 1;
          if ((int)uVar6 <= iVar7) {
            return 1;
          }
        } while( true );
      }
    }
    else if (uVar6 != 0) {
      do {
        FName::FName((FName *)&local_c,0);
        pUVar1 = UObject::GetTransientPackage();
        pUVar2 = UObject::StaticAllocateObject
                           (&DAT_10371440,pUVar1,local_c,0,0,*(undefined4 *)GError_exref,0,0);
        if (pUVar2 == (UObject *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_100941d0(*(undefined4 *)(in_ECX + 0x300));
        }
        *(int *)(in_ECX + 0x318 + iVar7 * 4) = iVar3;
        *(undefined4 *)(iVar3 + 0x1cc) = 0xff00ff04;
        if (iVar7 == 0) {
          if (uVar6 != 1) {
            if (1 < uVar6) {
              (**(code **)(**(int **)(in_ECX + 0x318) + 0xc0))
                        (0,0,(*(int *)(in_ECX + 0x2f8) - *(int *)(in_ECX + 0x2d8)) +
                             *(int *)(in_ECX + 0x2e8) + *(int *)(in_ECX + 0x2e0),local_4,0,0,3);
            }
            goto LAB_1009496b;
          }
          piVar5 = *(int **)(in_ECX + 0x318);
          iVar3 = (*(int *)(in_ECX + 0x2f0) - *(int *)(in_ECX + 0x2d8)) + *(int *)(in_ECX + 0x2e8) +
                  *(int *)(in_ECX + 0x2e0);
          iVar8 = 0;
          iVar9 = 0;
LAB_10094961:
          (**(code **)(*piVar5 + 0xc0))(iVar8,iVar9,iVar3,local_4,0,0,3);
        }
        else if (iVar7 == 1) {
          if (uVar6 == 2) {
            iVar3 = *(int *)(in_ECX + 0x2fc);
            piVar5 = *(int **)(in_ECX + 0x31c);
            iVar9 = local_4 + 6;
LAB_10094954:
            iVar8 = *(int *)(in_ECX + 0x2e8) - *(int *)(in_ECX + 0x2d8);
            goto LAB_10094961;
          }
          if (uVar6 == 3) {
            (**(code **)(**(int **)(in_ECX + 0x31c) + 0xc0))
                      (*(int *)(in_ECX + 0x2e8) - *(int *)(in_ECX + 0x2d8),local_4 + 6,
                       *(undefined4 *)(in_ECX + 0x2f8),*(int *)(in_ECX + 0x2f4) + (local_4 + 6) * -2
                       ,0,0,3);
          }
        }
        else if (iVar7 == 2) {
          iVar3 = *(int *)(in_ECX + 0x2fc);
          piVar5 = *(int **)(in_ECX + 800);
          iVar9 = *(int *)(in_ECX + 0x2f4) - local_4;
          goto LAB_10094954;
        }
LAB_1009496b:
        uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x318 + iVar7 * 4),0x12);
        FUN_1005c1e0(uVar4);
        if (*(ushort **)(in_ECX + 0x304) != (ushort *)0x0) {
          appStrcpy((ushort *)(*(int *)(in_ECX + 0x318 + iVar7 * 4) + 0x2dc),
                    *(ushort **)(in_ECX + 0x304));
        }
        *(int *)(in_ECX + 0x324) = *(int *)(in_ECX + 0x324) + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar6);
    }
  }
  return 1;
}


// ==== 100949d0 FUN_100949d0

void FUN_100949d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ec178;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100943d0();
  *in_ECX = NCHtmlLinker::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10094a31 Catch@10094a31

void Catch_10094a31(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10094a45 Catch@10094a45

void Catch_10094a45(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlLinker::NCHtmlLinker");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10094a70 FUN_10094a70

void FUN_10094a70(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec1a8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlLinker::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10094140(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10094ad0 FUN_10094ad0

void FUN_10094ad0(byte param_1)

{
  void *in_ECX;
  
  FUN_10094a70();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x328);
  }
  return;
}


// ==== 10094b00 FUN_10094b00

void FUN_10094b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ec1d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10094490(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  *in_ECX = NCHtmlLinker::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10094b99 Catch@10094b99

void Catch_10094b99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10094bad Catch@10094bad

void Catch_10094bad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlLinker::NCHtmlLinker");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10094bd0 FUN_10094bd0

void FUN_10094bd0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ec208;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100943d0();
  *in_ECX = NCHtmlAction::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10094c31 Catch@10094c31

void Catch_10094c31(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10094c45 Catch@10094c45

void Catch_10094c45(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlAction::NCHtmlAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10094c70 FUN_10094c70

void FUN_10094c70(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec238;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlAction::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10094140(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10094cd0 FUN_10094cd0

void FUN_10094cd0(byte param_1)

{
  void *in_ECX;
  
  FUN_10094c70();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x328);
  }
  return;
}


// ==== 10094d00 FUN_10094d00

void FUN_10094d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ec268;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10094490(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  *in_ECX = NCHtmlAction::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10094d99 Catch@10094d99

void Catch_10094d99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10094dad Catch@10094dad

void Catch_10094dad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlAction::NCHtmlAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10094dd0 FUN_10094dd0

void FUN_10094dd0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10006830(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCHtmlButton::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10094e30 FUN_10094e30

void FUN_10094e30(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec2c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10006780(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10094e90 FUN_10094e90

void FUN_10094e90(byte param_1)

{
  void *in_ECX;
  
  FUN_10094e30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x340);
  }
  return;
}


// ==== 10094ec0 FUN_10094ec0

void FUN_10094ec0(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec30a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_18,param_2);
  local_4 = 0;
  FString::FString(local_24,param_1);
  local_4._0_1_ = 1;
  FUN_10006980(local_24,local_18,param_4);
  local_4._0_1_ = 3;
  FString::~FString(local_24);
  local_4 = CONCAT31(local_4._1_3_,4);
  FString::~FString(local_18);
  *in_ECX = NCHtmlButton::vftable;
  in_ECX[0xcf] = param_3;
  ExceptionList = local_c;
  return;
}


// ==== 10094f80 FUN_10094f80

void FUN_10094f80(ushort *param_1,ushort *param_2)

{
  undefined4 *in_ECX;
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec34a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_18,param_2);
  local_4 = 0;
  FString::FString(local_24,param_1);
  local_4._0_1_ = 1;
  FUN_10006980(local_24,local_18,0);
  local_4._0_1_ = 3;
  FString::~FString(local_24);
  local_4 = CONCAT31(local_4._1_3_,4);
  FString::~FString(local_18);
  *in_ECX = NCHtmlButton::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10095030 FUN_10095030

void FUN_10095030(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10007010(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCHtmlPushButton::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10095090 FUN_10095090

void FUN_10095090(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec3a8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlPushButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100070c0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100950f0 FUN_100950f0

void FUN_100950f0(byte param_1)

{
  void *in_ECX;
  
  FUN_10095090();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x348);
  }
  return;
}


// ==== 10095120 FUN_10095120

void FUN_10095120(ushort *param_1,ushort *param_2)

{
  undefined4 *in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec3ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10007010(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *in_ECX = NCHtmlPushButton::vftable;
  FString::FString(local_18,param_1);
  local_4._0_1_ = 1;
  FUN_10003e80(local_18);
  local_4._0_1_ = 0;
  FString::~FString(local_18);
  FString::FString(local_18,param_2);
  local_4._0_1_ = 2;
  FUN_10003f50(local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 100951e0 FUN_100951e0

void FUN_100951e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f170(1,1,0x10);
  *in_ECX = NCHtmlMultiEdit::vftable;
  in_ECX[0xf7] = 0;
  in_ECX[0xf8] = 0;
  in_ECX[0xf9] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10095250 FUN_10095250

void FUN_10095250(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec448;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlMultiEdit::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1003f300(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100952b0 FUN_100952b0

void FUN_100952b0(byte param_1)

{
  void *in_ECX;
  
  FUN_10095250();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,1000);
  }
  return;
}


// ==== 100952e0 FUN_100952e0

void FUN_100952e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001a820(0,0,1,0,0,0);
  local_4 = 0;
  *in_ECX = NCHtmlEdit::vftable;
  in_ECX[0x100] = 0;
  in_ECX[0xcd] = param_2;
  if (in_ECX[0xd4] == 0) {
    uVar1 = FUN_1003f630(L"L2UI.EtcWnd.Edit_Back",1);
    in_ECX[0xd4] = uVar1;
  }
  if (0 < param_1) {
    in_ECX[0xda] = param_1;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10095390 FUN_10095390

void FUN_10095390(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec4a8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlEdit::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1001aa50(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100953f0 FUN_100953f0

void FUN_100953f0(byte param_1)

{
  void *in_ECX;
  
  FUN_10095390();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x404);
  }
  return;
}


// ==== 10095420 FUN_10095420

void FUN_10095420(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec4d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1004a060(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCHtmlSliderBar::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10095480 FUN_10095480

void FUN_10095480(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec508;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHtmlSliderBar::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1004a0f0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100954e0 FUN_100954e0

void FUN_100954e0(byte param_1)

{
  void *in_ECX;
  
  FUN_10095480();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x304);
  }
  return;
}


// ==== 10095510 FUN_10095510

void FUN_10095510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1004a060(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCHtmlSliderBar::vftable;
  uVar1 = FUN_1003f630(param_1,1);
  in_ECX[0xbe] = uVar1;
  uVar1 = FUN_1003f630(param_2,1);
  in_ECX[0xbf] = uVar1;
  uVar1 = FUN_1003f630(param_3,1);
  in_ECX[0xc0] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 10095670 FUN_10095670

undefined4 FUN_10095670(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 local_1c;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_1000a270();
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.inputbox1",1);
  *(undefined4 *)(in_ECX + 0x2ec) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.inputbox2",1);
  *(undefined4 *)(in_ECX + 0x2f0) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.inputbox3",1);
  *(undefined4 *)(in_ECX + 0x2f4) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.inputbox1_disable",1);
  *(undefined4 *)(in_ECX + 0x2f8) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.inputbox2_disable",1);
  *(undefined4 *)(in_ECX + 0x2fc) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.inputbox3_disable",1);
  *(undefined4 *)(in_ECX + 0x300) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect",1);
  *(undefined4 *)(in_ECX + 0x304) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect2",1);
  *(undefined4 *)(in_ECX + 0x308) = uVar1;
  FUN_10020bb0(in_ECX + 0x31c,&DAT_10231ac0,0,0,0,0,0,0);
  local_8 = 0.0;
  local_4 = 0;
  local_c = 0;
  local_10 = 0;
  FUN_1005d0a0(&local_10);
  uVar1 = FUN_101c19e0();
  *(undefined4 *)(in_ECX + 0x314) = uVar1;
  uVar1 = FUN_101c19e0();
  *(undefined4 *)(in_ECX + 0x318) = uVar1;
  FName::FName((FName *)&local_1c,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10372e30,pUVar2,local_1c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_10094f80(L"L2UI_CH3.Button.downbutton",L"L2UI_CH3.Button.downbutton_down");
  }
  *(int *)(in_ECX + 0x334) = iVar4;
  local_1c = CONCAT22(local_1c._2_2_,in_FPUControlWord);
  *(undefined4 *)(iVar4 + 0x1cc) = 0x100b;
  local_18 = (longlong)ROUND((local_8 - 15.0) - 1.0);
  (**(code **)(**(int **)(in_ECX + 0x334) + 0xc0))((undefined4)local_18,1,0xf,0xf,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x334),2);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 10095860 FUN_10095860

void FUN_10095860(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort ****ppppuVar5;
  undefined1 local_32c [4];
  ushort ***local_328 [4];
  undefined4 local_318;
  undefined4 local_314;
  ushort local_310;
  undefined1 local_30e [254];
  ushort local_210;
  undefined1 local_20e [510];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec56b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_32c;
  ExceptionList = &local_c;
  iVar2 = appStrlen(param_1);
  iVar3 = appAtoi(param_1);
  if (0 < iVar3) {
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + iVar3 * 0x5c + 0x240ec));
    appStrcpy(&local_210,puVar4);
    if (0 < iVar2) {
      for (iVar3 = iVar2 + -2; -1 < iVar3; iVar3 = iVar3 + -1) {
        if (param_1[iVar3] == 0x3b) {
          appStrncpy(&local_310,param_1 + iVar3 + 1,iVar2 - iVar3);
          *(undefined2 *)((int)&local_314 + (iVar2 - iVar3) * 2 + 2) = 0;
          break;
        }
      }
      puVar4 = &local_210;
      local_314 = 7;
      local_318 = 0;
      local_328[0] = (ushort ***)((uint)local_328[0] & 0xffff0000);
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
      } while (uVar1 != 0);
      FUN_10089100(&local_210,(int)puVar4 - (int)local_20e >> 1);
      local_4 = 0;
      iVar2 = FUN_1008b9f0(&DAT_10251894,0,3);
      if ((iVar2 < 0) || (iVar3 = appStrlen(&local_210), iVar3 <= iVar2)) {
        appStrcpy(param_1,&local_210);
      }
      else {
        puVar4 = &local_310;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
        } while (uVar1 != 0);
        FUN_100895d0(iVar2,3,&local_310,(int)puVar4 - (int)local_30e >> 1);
        ppppuVar5 = (ushort ****)local_328[0];
        if (local_314 < 8) {
          ppppuVar5 = local_328;
        }
        iVar2 = appStrlen(&local_210);
        iVar3 = appStrlen(&local_310);
        appStrncpy(param_1,(ushort *)ppppuVar5,iVar3 + iVar2 + -2);
      }
      local_4 = 0xffffffff;
      if (7 < local_314) {
        (**(code **)(**(int **)GMalloc_exref + 8))(local_328[0]);
      }
      local_314 = 7;
      local_318 = 0;
      local_328[0] = (ushort ***)((uint)local_328[0] & 0xffff0000);
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_32c);
  return;
}


// ==== 10095a70 FUN_10095a70

undefined4 FUN_10095a70(void)

{
  int in_ECX;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec5ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(short *)(in_ECX + 0x2dc) == 0) {
    FUN_1000cb20(*(undefined4 *)(in_ECX + 0x2d8));
  }
  else {
    FUN_10095860(in_ECX + 0x2dc,DAT_103554c4 ^ (uint)&stack0xffffff38);
    FUN_1000ef40();
    local_4 = 0;
    local_c0[0] = 0x3c;
    local_b4 = 1;
    local_b0 = 0;
    local_b8 = FUN_10058020();
    FUN_1000de50(in_ECX + 0x2dc);
    FUN_1016e1b0(local_c0);
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 10095b50 FUN_10095b50

void FUN_10095b50(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  undefined4 *puVar5;
  float10 extraout_ST0;
  wchar_t *pwStack_288;
  wchar_t *pwStack_284;
  undefined4 uStack_268;
  int local_228 [5];
  int iStack_214;
  ushort local_204 [128];
  ushort local_104 [80];
  uint uStack_64;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_228;
  puVar5 = (undefined4 *)(in_ECX + 0x338);
  local_228[0] = 9;
  do {
    appSprintf(local_204,(ushort *)L"l2ui_ch3.multiedit.M_inputbox0%d");
    appSprintf(local_104,(ushort *)L"l2ui_ch3.multiedit.M_inputbox0%d_disable");
    uVar1 = FUN_1003f630();
    puVar5[-9] = uVar1;
    uVar1 = FUN_1003f630();
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
    local_228[0] = local_228[0] + -1;
  } while (local_228[0] != 0);
  FName::FName((FName *)local_228,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1002b600();
  }
  *(undefined4 *)(in_ECX + 0x2d8) = uVar1;
  FUN_10060d40();
  FUN_1005c1e0();
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
  uVar1 = FUN_1003f600();
  *(undefined4 *)(in_ECX + 0x364) = uVar1;
  _uStack_268 = CONCAT44(local_228 + 4,0x10095c86);
  FUN_10020bb0();
  *(int *)(in_ECX + 0x35c) = iStack_214;
  *(undefined4 *)(in_ECX + 0x360) = 2;
  *(int *)(in_ECX + 0x390) = local_228[4];
  *(int *)(in_ECX + 0x394) = iStack_214;
  iVar3 = FUN_101c19e0();
  local_228[2] = 0;
  local_228[3] = 0;
  *(undefined4 *)(in_ECX + 0x37c) = 1;
  local_228[1] = 0;
  local_228[0] = 0;
  *(int *)(in_ECX + 0x374) = iVar3 / (iStack_214 + 2);
  FUN_1005d0a0();
  FName::FName((FName *)&stack0xfffffdcc,0);
  UObject::GetTransientPackage();
  _uStack_268 = 0x1037336010095d1b;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10095120();
  }
  *(int *)(in_ECX + 0x3dc) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0f01409;
  _uStack_268 = CONCAT44(0x10095d8d,uStack_268);
  (**(code **)(**(int **)(in_ECX + 0x3dc) + 0xc0))();
  _uStack_268 = CONCAT44(2,*(undefined4 *)(in_ECX + 0x3dc));
  uVar1 = FUN_10060d40();
  _uStack_268 = CONCAT44(uVar1,0x10095da9);
  FUN_1005c1e0();
  _uStack_268 = 0x10095db4;
  FName::FName((FName *)&stack0xfffffdb4,0);
  _uStack_268 = CONCAT44(0x10095db6,uStack_268);
  UObject::GetTransientPackage();
  _uStack_268 = 0;
  pwStack_284 = L"쒃㬠瓅栓셀ဣ\xf868⏀謐\xe8c8\xf338\xffff˫쀳蚉Ϡ";
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    _uStack_268 = 0x1023c1401023c0f8;
    iVar3 = FUN_10095120();
  }
  *(int *)(in_ECX + 0x3e0) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0f01410;
  _uStack_268 = 0x300000000;
  (**(code **)(**(int **)(in_ECX + 0x3e0) + 0xc0))();
  pwStack_284 = *(wchar_t **)(in_ECX + 0x3e0);
  pwStack_288 = L"躋Ϡ";
  FUN_10060d40();
  pwStack_284 = (wchar_t *)0x10095e88;
  FUN_1005c1e0();
  pwStack_284 = (wchar_t *)0x10095e93;
  FName::FName((FName *)&uStack_268,0);
  pUVar4 = UObject::GetTransientPackage();
  pwStack_288 = *(wchar_t **)GError_exref;
  pwStack_284 = (wchar_t *)0x0;
  pUVar2 = UObject::StaticAllocateObject(&DAT_103742f0,pUVar4,uStack_268,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_284 = L"L2UI_CH3.ScrollBar.SliderBarCenter";
    pwStack_288 = L"L2UI_CH3.ScrollBar.SliderBarTop";
    iVar3 = FUN_10095510();
  }
  *(int *)(in_ECX + 0x3e4) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0f01411;
  iVar3 = FUN_101c19e0();
  pwStack_284 = (wchar_t *)0x0;
  pwStack_288 = (wchar_t *)0x0;
  if (iVar3 < 0x1e) {
    uVar1 = 0;
  }
  else {
    uStack_268 = (undefined4)(longlong)ROUND(extraout_ST0 - (float10)30.0);
    uVar1 = uStack_268;
  }
  _uStack_268 = 0xfffffffffffffff1;
  (**(code **)(**(int **)(in_ECX + 0x3e4) + 0xc0))(0xfffffff1,0xf,0xf,uVar1);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x3e4),2);
  FUN_1005c1e0(uVar1);
  FUN_10143b80(0);
  *(undefined4 *)(*(int *)(in_ECX + 0x3dc) + 0x340) = 200;
  *(undefined4 *)(*(int *)(in_ECX + 0x3e0) + 0x340) = 200;
  FUN_10049a00(*(undefined4 *)(in_ECX + 0x378),*(undefined4 *)(in_ECX + 0x374));
  FUN_10049b50(*(undefined4 *)(in_ECX + 0x378));
  __security_check_cookie(uStack_64 ^ (uint)&pwStack_288);
  return;
}


// ==== 10096020 FUN_10096020

bool FUN_10096020(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100321d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10096080 FUN_10096080

void FUN_10096080(undefined4 param_1,undefined4 param_2)

{
  FUN_1000cc70(0x203,param_1,param_2);
  return;
}


// ==== 100960a0 FUN_100960a0

void FUN_100960a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x100960ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x174))();
  return;
}


// ==== 100960b0 FUN_100960b0

bool FUN_100960b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_1001aba0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xf0f0) {
      iVar1 = (**(code **)(*in_ECX + 0x200))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf0f1) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10096130 FUN_10096130

undefined4 FUN_10096130(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x68))(0x501,0xf0f0,0);
    return 1;
  }
  return 0;
}


// ==== 10096170 FUN_10096170

void FUN_10096170(void)

{
  int in_ECX;
  
  FUN_1005fe50();
  (**(code **)(**(int **)(in_ECX + 0xae0) + 0x13c))();
  *(undefined4 *)(in_ECX + 0xa00) = 0;
  return;
}


// ==== 100961a0 FUN_100961a0

void FUN_100961a0(void)

{
  int in_ECX;
  
  FUN_1005ff00();
  *(undefined4 *)(in_ECX + 0xa00) = 1;
  return;
}


// ==== 100961c0 FUN_100961c0

undefined4 FUN_100961c0(void)

{
  int in_ECX;
  
  FUN_1005ff00();
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    FUN_100b99b0(in_ECX);
  }
  *(undefined4 *)(in_ECX + 0xa00) = 1;
  return 0;
}


// ==== 100961f0 FUN_100961f0

void FUN_100961f0(int param_1)

{
  if (param_1 != 0) {
    FUN_1001aea0();
    return;
  }
  return;
}


// ==== 10096210 FUN_10096210

FString * FUN_10096210(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  FString *pFVar3;
  FString aFStack_9c [4];
  undefined4 uStack_98;
  undefined4 uStack_90;
  FString aFStack_80 [4];
  undefined4 uStack_7c;
  FString aFStack_74 [4];
  undefined4 uStack_70;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ec63b;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x418c8));
  uStack_70 = 0x1009626f;
  FString::FString(local_34,puVar1);
  local_8._0_1_ = 2;
  uStack_70 = 0x10096282;
  FUN_100abd40();
  local_8._0_1_ = 3;
  uStack_70 = 0x10096295;
  FUN_100abd40();
  local_8._0_1_ = 4;
  local_20 = aFStack_74;
  uStack_7c = 0x100962ac;
  FString::FString(aFStack_74,local_4c);
  local_8._0_1_ = 5;
  local_24 = aFStack_80;
  FString::FString(aFStack_80,(ushort *)&DAT_10251894);
  local_8._0_1_ = 4;
  FString::Substitute(local_34);
  local_18 = 1;
  iVar2 = FString::operator==(param_1,local_34);
  if (iVar2 != 0) {
    uStack_90 = 0x100962fb;
    pFVar3 = (FString *)FString::operator+(local_40,local_58);
    local_8._0_1_ = 7;
    uStack_90 = 0x10096308;
    FString::operator=(param_1,pFVar3);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
  }
  local_24 = (undefined1 *)&uStack_90;
  uStack_98 = 0x10096326;
  FString::FString((FString *)&uStack_90,local_40);
  local_8._0_1_ = 8;
  local_20 = aFStack_9c;
  FString::FString(aFStack_9c,(ushort *)&DAT_10251ab8);
  local_8._0_1_ = 4;
  pFVar3 = (FString *)FString::Substitute(param_1,local_58);
  local_8._0_1_ = 10;
  FString::operator=(param_1,pFVar3);
  local_8._0_1_ = 4;
  FString::~FString(local_58);
  local_8._0_1_ = 3;
  FString::~FString(local_4c);
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_34);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100963a6 Catch@100963a6

void Catch_100963a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100963ba Catch@100963ba

void Catch_100963ba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ChatWnd::GetWarningMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100963e0 FUN_100963e0

undefined4 FUN_100963e0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f600(0xa15,1000,0);
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  return 1;
}


// ==== 10096410 FUN_10096410

undefined4 FUN_10096410(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0xa15) {
    *(uint *)(in_ECX + 0x1d8) = (uint)(*(int *)(in_ECX + 0x1d8) == 0);
  }
  return 1;
}


// ==== 10096440 FUN_10096440

undefined4 FUN_10096440(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x1dc));
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 10096470 FUN_10096470

bool FUN_10096470(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100321d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x201) {
    iVar1 = (**(code **)(*in_ECX + 0x1a8))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 100964d0 FUN_100964d0

void FUN_100964d0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec66c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  in_ECX[4] = param_1[4];
  ExceptionList = local_c;
  return;
}


// ==== 10096540 FUN_10096540

void FUN_10096540(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec699;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 4),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100965a0 FUN_100965a0

void FUN_100965a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec6c9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x3c),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10096600 FUN_10096600

void FUN_10096600(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec6f9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x48),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10096660 FUN_10096660

void FUN_10096660(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec75c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 8));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x14));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x20));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x2c));
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString((FString *)(in_ECX + 0x38));
  ExceptionList = local_c;
  return;
}


// ==== 100966f0 FUN_100966f0

void FUN_100966f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec793;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10096660(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[1] = param_2;
  *in_ECX = param_1;
  FUN_100abce0(&stack0x0000000c);
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 10096770 FUN_10096770

undefined4 FUN_10096770(undefined4 param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec7c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100abb60(in_ECX + 8);
  ExceptionList = local_c;
  return param_1;
}


// ==== 100967d0 FUN_100967d0

void FUN_100967d0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec7fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100abc50(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10096820 FUN_10096820

undefined4 FUN_10096820(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10033250();
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect",1);
  *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect2",1);
  *(undefined4 *)(in_ECX + 0x324) = uVar1;
  *(undefined4 *)(in_ECX + 0x314) = 4;
  *(undefined4 *)(in_ECX + 0x318) = 4;
  return 1;
}


// ==== 10096870 FUN_10096870

void FUN_10096870(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  undefined4 local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101ec820;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  iVar4 = 0;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  for (local_224 = *(int *)(in_ECX + 0x308);
      ((local_224 < *(int *)(in_ECX + 0x300) + *(int *)(in_ECX + 0x308) &&
       (local_224 <= *(int *)(in_ECX + 0x30c))) && (local_224 < *(int *)(in_ECX + 0x2ec)));
      local_224 = local_224 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x2e8) + local_224 * 4);
    if (local_224 == *(int *)(in_ECX + 0x310)) {
      FUN_10021970(*(undefined4 *)(in_ECX + 0x314),
                   (*(int *)(in_ECX + 0x31c) + 0xc) * iVar4 + *(int *)(in_ECX + 0x318),0xeb,0xf,0,0,
                   0x10,0xd,*(undefined4 *)(in_ECX + 0x2dc),0xff);
      FUN_10021970(*(int *)(in_ECX + 0x314) + 0xeb,
                   (*(int *)(in_ECX + 0x31c) + 0xc) * iVar4 + *(int *)(in_ECX + 0x318),0x20,0xf,0,0,
                   0x20,0xd,*(undefined4 *)(in_ECX + 0x324),0xff);
    }
    if (piVar1[2] != 0) {
      FUN_10021a00(*(undefined4 *)(in_ECX + 0x314),
                   (*(int *)(in_ECX + 0x31c) + 0xc) * iVar4 + *(int *)(in_ECX + 0x318),0xf,0xf,0,0,
                   0xf,0xf,piVar1[2],0xff,1);
    }
    uVar6 = 0xc;
    uVar3 = 0xfa;
    puVar5 = local_210;
    uVar2 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar2,puVar5,uVar3,uVar6);
    FUN_100217a0(*(int *)(in_ECX + 0x314) + 0x12,
                 (*(int *)(in_ECX + 0x31c) + 0xc) * iVar4 + *(int *)(in_ECX + 0x318),
                 *(undefined4 *)(*piVar1 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    iVar4 = iVar4 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 10096ac2 Catch@10096ac2

void Catch_10096ac2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10096ad6 Catch@10096ad6

void Catch_10096ad6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"InviteBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10096b00 FUN_10096b00

undefined4 FUN_10096b00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
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
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    FUN_10021a00(0,0x14,0x154,0xf0,0,0,0x154,0xf0,*(int *)(in_ECX + 0x1e0),0xff,1);
  }
  uVar13 = 0xffffffff;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42448));
  FUN_100217a0(0xb,0x1c,0xffdcdcdc,puVar3,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
               uVar11,uVar12,uVar13);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 10096bf0 FUN_10096bf0

undefined4 FUN_10096bf0(void)

{
  int iVar1;
  int *in_ECX;
  FString aFStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ec859;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  iStack_1c = *(int *)(in_ECX[0x75] + 0x310);
  if ((-1 < iStack_1c) && (iStack_1c < *(int *)(in_ECX[0x75] + 0x30c))) {
    uStack_20 = 0x10096c32;
    iVar1 = FUN_10032ee0();
    if ((iVar1 != 0) && (in_ECX[0x74] != 0)) {
      FString::FString(aFStack_24,(FString *)(iVar1 + 0x20));
      local_4 = 0xffffffff;
      FUN_100ae840();
    }
  }
  iStack_1c = 0x10096c79;
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_c;
  return 1;
}


// ==== 10096c90 FUN_10096c90

undefined4 FUN_10096c90(void)

{
  int in_ECX;
  
  FUN_10033250();
  *(undefined4 *)(in_ECX + 0x314) = 4;
  *(undefined4 *)(in_ECX + 0x318) = 2;
  return 1;
}


// ==== 10096cc0 FUN_10096cc0

void FUN_10096cc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  int local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101ec888;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  iVar6 = 0;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar5,uVar4);
  *(undefined4 *)(in_ECX + 0x314) = 4;
  *(undefined4 *)(in_ECX + 0x318) = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 2;
  for (local_224 = *(int *)(in_ECX + 0x308);
      ((local_224 < *(int *)(in_ECX + 0x300) + *(int *)(in_ECX + 0x308) &&
       (local_224 <= *(int *)(in_ECX + 0x30c))) && (local_224 < *(int *)(in_ECX + 0x2ec)));
      local_224 = local_224 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x2e8) + local_224 * 4);
    iVar2 = *piVar1;
    iVar3 = piVar1[2];
    local_214._0_1_ = 1;
    if (iVar3 != 0) {
      FUN_10021a00(*(undefined4 *)(in_ECX + 0x314),
                   (*(int *)(in_ECX + 0x31c) + 0xc) * iVar6 + *(int *)(in_ECX + 0x318),0xf,0xf,0,0,
                   0xf,0xf,iVar3,0xff,1);
    }
    uVar8 = 0xc;
    uVar5 = 0xc9;
    puVar7 = local_210;
    uVar4 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar4,puVar7,uVar5,uVar8);
    FUN_100217a0(*(int *)(in_ECX + 0x314) + 0x11,
                 (*(int *)(in_ECX + 0x31c) + 0xc) * iVar6 + 2 + *(int *)(in_ECX + 0x318),
                 *(undefined4 *)(iVar2 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_214 = (uint)local_214._1_3_ << 8;
    FUN_100325f0();
    iVar6 = iVar6 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 10096ec1 Catch@10096ec1

void Catch_10096ec1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10096ed5 Catch@10096ed5

void Catch_10096ed5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FriendBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10096f00 FUN_10096f00

undefined4 FUN_10096f00(void)

{
  int in_ECX;
  
  FUN_10033250();
  *(undefined4 *)(in_ECX + 0x314) = 4;
  *(undefined4 *)(in_ECX + 0x318) = 4;
  *(undefined4 *)(in_ECX + 0x31c) = 6;
  return 1;
}


// ==== 10096f30 FUN_10096f30

undefined4 FUN_10096f30(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_28;
  undefined4 local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101ec8b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar4,uVar3);
  for (local_18 = *(int *)(in_ECX + 0x308);
      ((local_18 < *(int *)(in_ECX + 0x300) + *(int *)(in_ECX + 0x308) &&
       (local_18 <= *(int *)(in_ECX + 0x30c))) && (local_18 < *(int *)(in_ECX + 0x2ec)));
      local_18 = local_18 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x2e8) + local_18 * 4);
    iVar6 = *piVar1;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (piVar1[2] == 0) {
      uVar18 = 0xffffffff;
      uVar3 = *(undefined4 *)(iVar6 + 0xc);
      uVar17 = 0;
      uVar16 = 0;
      fVar2 = (*(float *)(in_ECX + 0x88) - 16.0) - 6.0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar4 = 0;
      if (piVar1[1] == 0) {
        local_28 = (undefined4)(longlong)ROUND(fVar2);
        uVar5 = FUN_1004f5c0(0);
        iVar6 = (*(int *)(in_ECX + 0x31c) + 0xc) * iVar8 + *(int *)(in_ECX + 0x318);
        iVar7 = *(int *)(in_ECX + 0x314);
        local_20 = local_28;
      }
      else {
        local_28 = (undefined4)(longlong)ROUND(fVar2);
        uVar5 = FUN_1004f5c0(0);
        iVar6 = (*(int *)(in_ECX + 0x31c) + 0xc) * iVar8 + *(int *)(in_ECX + 0x318);
        iVar7 = *(int *)(in_ECX + 0x314) + 0xf;
        local_20 = local_28;
      }
    }
    else {
      FUN_10021a00(*(undefined4 *)(in_ECX + 0x314),
                   (*(int *)(in_ECX + 0x31c) + 0xc) * iVar8 + *(int *)(in_ECX + 0x318),0xf,0xf,0,0,
                   0xf,0xf,piVar1[2],0xff,1);
      uVar3 = *(undefined4 *)(iVar6 + 0xc);
      uVar18 = 0xffffffff;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar4 = 0;
      local_20 = (undefined4)(longlong)ROUND(((*(float *)(in_ECX + 0x88) - 16.0) - 6.0) - 13.0);
      uVar5 = FUN_1004f5c0(0);
      iVar6 = (*(int *)(in_ECX + 0x31c) + 0xc) * iVar8 + 2 + *(int *)(in_ECX + 0x318);
      iVar7 = *(int *)(in_ECX + 0x314) + 0x11;
    }
    FUN_100217a0(iVar7,iVar6,uVar3,uVar5,local_20,uVar4,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                 uVar15,uVar16,uVar17,uVar18);
    local_8 = local_8 & 0xffffff00;
    FUN_100325f0();
    iVar8 = iVar8 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100971ea Catch@100971ea

void Catch_100971ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100971fe Catch@100971fe

void Catch_100971fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ChatBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10097220 FUN_10097220

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10097220(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_2038;
  undefined1 auStack_2020 [4];
  int iStack_201c;
  undefined1 *puStack_2018;
  void *pvStack_2014;
  undefined *puStack_2010;
  undefined4 uStack_200c;
  ushort auStack_2008 [2048];
  undefined1 auStack_1008 [4096];
  uint uStack_8;
  
  puStack_2010 = &UNK_101ec8e0;
  pvStack_2014 = ExceptionList;
  uStack_2038 = DAT_103554c4 ^ (uint)auStack_2008;
  puStack_2018 = (undefined1 *)&uStack_2038;
  ExceptionList = &pvStack_2014;
  uStack_200c = 0;
  uStack_8 = uStack_2038;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x2ec) != 0) {
    FUN_10021a00(0,0,0x10,0x14,0,0,0x10,0x14,*(int *)(in_ECX + 0x2ec),0xff,1);
  }
  iVar11 = *(int *)(in_ECX + 0x2f4);
  if (iVar11 != 0) {
    uVar13 = 1;
    uVar12 = 0xff;
    uVar10 = 0x14;
    uVar9 = 0x10;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x14;
    uVar5 = 0x10;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,0x10,0x14,0,0,0x10,0x14,iVar11,0xff,1);
    FUN_10021a00(uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,iVar11,uVar12,uVar13);
  }
  iVar11 = *(int *)(in_ECX + 0x2f0);
  if (iVar11 != 0) {
    uVar9 = 0xff;
    uVar8 = 0x14;
    uVar7 = 0x20;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0x14;
    uVar1 = FUN_101c19e0(0x14,0,0,0x20,0x14,iVar11,0xff);
    FUN_10021970(0x10,0,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,iVar11,uVar9);
  }
  if ((*(int *)(in_ECX + 800) == 0) && (*(int *)(in_ECX + 0x324) == 0)) {
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar3 = FString::operator*((FString *)(in_ECX + 0x2d8));
    FUN_10020bb0(auStack_2020,puVar3,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8);
    *(undefined4 *)(in_ECX + 800) = 0x14;
    iStack_201c = iStack_201c / 2;
    uVar1 = FUN_101c19e0();
    *(undefined4 *)(in_ECX + 0x324) = uVar1;
  }
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6d7d4));
  puVar4 = FString::operator*((FString *)(in_ECX + 0x2d8));
  appSprintf(auStack_2008,(ushort *)L"%s - %s",puVar4,puVar3);
  FUN_10020bb0(auStack_2020,auStack_2008,0,0,0,0,0,0);
  uVar1 = FUN_101c19e0(0xc);
  FUN_100c72c0(auStack_2008,auStack_1008,uVar1);
  FUN_100217a0(*(undefined4 *)(in_ECX + 800),*(undefined4 *)(in_ECX + 0x324),0xffdcdcdc,auStack_1008
               ,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = pvStack_2014;
  __security_check_cookie(uStack_8 ^ (uint)auStack_2008);
  return;
}


// ==== 10097481 Catch@10097481

void Catch_10097481(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10097495 Catch@10097495

void Catch_10097495(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ChatFrameCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100974c0 FUN_100974c0

undefined4 FUN_100974c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10033250();
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.msnbutton",1);
  *(undefined4 *)(in_ECX + 0x324) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.msnbutton_down",1);
  *(undefined4 *)(in_ECX + 0x328) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.msnbutton_light",1);
  *(undefined4 *)(in_ECX + 0x32c) = uVar1;
  *(undefined4 *)(in_ECX + 0x314) = 4;
  *(undefined4 *)(in_ECX + 0x318) = 4;
  return 1;
}


// ==== 10097520 FUN_10097520

void FUN_10097520(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int local_228;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  uint local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101ec918;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar5,uVar4);
  local_228 = *(int *)(in_ECX + 0x308);
  local_224 = 0;
  for (; ((local_228 < *(int *)(in_ECX + 0x300) + *(int *)(in_ECX + 0x308) &&
          (local_228 <= *(int *)(in_ECX + 0x30c))) && (local_228 < *(int *)(in_ECX + 0x2ec)));
      local_228 = local_228 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x2e8) + local_228 * 4);
    iVar2 = *piVar1;
    iVar6 = piVar1[1];
    iVar3 = piVar1[2];
    local_214 = CONCAT31(local_214._1_3_,1);
    if (local_228 == *(int *)(in_ECX + 0x310)) {
      uVar4 = *(undefined4 *)(in_ECX + 0x328);
    }
    else if ((iVar6 == 0) || (*(int *)(iVar6 + 0x1d4) == 0)) {
      uVar4 = *(undefined4 *)(in_ECX + 0x324);
    }
    else if (*(int *)(iVar6 + 0x1d8) == 0) {
      uVar4 = *(undefined4 *)(in_ECX + 0x324);
    }
    else {
      uVar4 = *(undefined4 *)(in_ECX + 0x32c);
    }
    iVar6 = local_224 * 0x15;
    FUN_10021a00(0,iVar6,0x8c,0x15,0,0,0x8c,0x15,uVar4,0xff,1);
    if (iVar3 != 0) {
      FUN_10021a00(*(undefined4 *)(in_ECX + 0x314),*(int *)(in_ECX + 0x318) + iVar6,0xf,0xf,0,0,0xf,
                   0xf,iVar3,0xff,1);
    }
    uVar8 = 0xc;
    uVar5 = 0x74;
    puVar7 = local_210;
    uVar4 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar4,puVar7,uVar5,uVar8);
    FUN_100217a0(*(int *)(in_ECX + 0x314) + 0x12,*(int *)(in_ECX + 0x318) + iVar6,
                 *(undefined4 *)(iVar2 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_214 = local_214 & 0xffffff00;
    FUN_100325f0();
    local_224 = local_224 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 1009776c Catch@1009776c

void Catch_1009776c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10097780 Catch@10097780

void Catch_10097780(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TaskBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100977a0 FUN_100977a0

undefined4 FUN_100977a0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 0x1f8))(param_2 & 0xffff,param_2 >> 0x10);
  iVar1 = in_ECX[0xc4];
  if ((((iVar1 == iVar3) && (-1 < iVar1)) && (iVar1 < in_ECX[0xbb])) &&
     ((iVar1 = *(int *)(*(int *)(in_ECX[0xba] + iVar1 * 4) + 4), iVar1 != 0 &&
      (piVar2 = *(int **)(iVar1 + 0x1d0), piVar2 != (int *)0x0)))) {
    *(undefined4 *)(iVar1 + 0x1d4) = 0;
    (**(code **)(*piVar2 + 0x138))();
    (**(code **)(*piVar2 + 0x78))();
  }
  in_ECX[0xc4] = -1;
  return 1;
}


// ==== 10097830 FUN_10097830

void FUN_10097830(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ec940;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x2ec) <= iVar1) {
      return;
    }
    if (param_2 == *(int *)(*(int *)(*(int *)(in_ECX + 0x2e8) + iVar1 * 4) + 4)) break;
    iVar1 = iVar1 + 1;
  }
  ExceptionList = &local_10;
  FUN_1004f760();
  FUN_1004f610(param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 100978b4 Catch@100978b4

void Catch_100978b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100978c8 Catch@100978c8

void Catch_100978c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TaskBox::UpdateString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100978f0 FUN_100978f0

undefined4 FUN_100978f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_10021a00(0xc,0,0xb4,8,0,0,0xb4,8,*(int *)(in_ECX + 0x1e4),0xff,1);
  }
  if (*(int *)(in_ECX + 0x1e8) != 0) {
    FUN_10021970(0xc,8,0xb4,0x74,0,0,0xb4,8,*(int *)(in_ECX + 0x1e8),0xff);
  }
  if (*(int *)(in_ECX + 0x1ec) != 0) {
    FUN_10021a00(0xc,0x7c,0xb4,8,0,0,0xb4,8,*(int *)(in_ECX + 0x1ec),0xff,1);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 10097a00 FUN_10097a00

undefined4 FUN_10097a00(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  
  if ((UObject *)*param_1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UObject::GetIndex((UObject *)*param_1);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc);
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  return 0;
}


// ==== 10097a60 FUN_10097a60

void FUN_10097a60(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  
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
  iVar2 = 0;
  if (0 < in_ECX[1]) {
    iVar4 = 0;
    do {
      uVar3 = *(uint *)(*in_ECX + 4 + iVar4) & in_ECX[4] - 1U;
      *(undefined4 *)(*in_ECX + iVar4) = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x54;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10097b10 FUN_10097b10

void FUN_10097b10(void)

{
  UObject *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  
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
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(*in_ECX + iVar2);
      this = (UObject *)puVar5[1];
      if (this == (UObject *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = UObject::GetIndex(this);
      }
      iVar2 = iVar2 + 0xc;
      uVar3 = in_ECX[4] - 1U & uVar3;
      *puVar5 = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10097bd0 FUN_10097bd0

int FUN_10097bd0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 10097bf0 FUN_10097bf0

int FUN_10097bf0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x54);
  return iVar1 * 0x54 + *(int *)param_2;
}


// ==== 10097c10 FUN_10097c10

void FUN_10097c10(void)

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
      iVar2 = iVar2 + 0x1c;
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


// ==== 10097cd0 FUN_10097cd0

void FUN_10097cd0(int param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined2 in_FPUControlWord;
  int *local_22c;
  longlong local_228;
  int local_220 [2];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ec97c;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_22c;
  ExceptionList = &local_c;
  if (param_2 != (ushort *)0x0) {
    FUN_10020bb0(local_220,param_2,0,0,0,0,0,0,DAT_103554c4 ^ (uint)&stack0xfffffdc4);
    iVar1 = FUN_101c19e0();
    if (local_220[0] + 0xf < iVar1 + -0x16) {
      appStrcpy(local_218,param_2);
    }
    else {
      local_22c = (int *)CONCAT22(local_22c._2_2_,in_FPUControlWord);
      local_228 = (longlong)ROUND(((*(float *)(in_ECX + 0x88) - 16.0) - 15.0) - 30.0);
      FUN_100223d0(param_2,(undefined4)local_228,0);
      appSprintf(local_218,(ushort *)L"%s...",param_2);
    }
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
    local_c = (void *)0x0;
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_100322c0();
    }
    local_c = (void *)0xffffffff;
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
    local_228 = CONCAT44(local_228._4_4_,iVar1);
    uStack_4 = 1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_1004f780(local_218);
    }
    uStack_4 = 0xffffffff;
    piVar2[1] = param_3;
    *piVar2 = iVar1;
    piVar2[2] = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_4;
    if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
      iVar1 = *(int *)(in_ECX + 0x30c) + 1;
      *(int *)(in_ECX + 0x30c) = iVar1;
      if (*(int *)(in_ECX + 0x300) < iVar1) {
        *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
      }
    }
    else {
      piVar2 = (int *)**(undefined4 **)(in_ECX + 0x2e8);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_1004f7b0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
        *piVar2 = 0;
      }
      if (*(int *)(in_ECX + 0x2ec) < 0) {
        appFailAssert("Index<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204)
        ;
      }
      if (*(int *)(in_ECX + 0x2ec) < 1) {
        appFailAssert("Index+Count<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205)
        ;
      }
      FArray::Remove((FArray *)(in_ECX + 0x2e8),0,1,4);
      piVar2 = local_22c;
    }
    iVar1 = FArray::Add((FArray *)(in_ECX + 0x2e8),1,4);
    *(int **)(*(int *)(in_ECX + 0x2e8) + iVar1 * 4) = piVar2;
    FUN_100324e0();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_22c);
  return;
}


// ==== 10097f50 FUN_10097f50

bool FUN_10097f50(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa0f) {
      iVar1 = FUN_10096bf0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa10) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10097ff0 FUN_10097ff0

void FUN_10097ff0(void)

{
  FUN_10096bf0();
  return;
}


// ==== 10098000 FUN_10098000

void FUN_10098000(void)

{
  int iVar1;
  int *piVar2;
  FString *this;
  ushort *puVar3;
  int iVar4;
  int in_ECX;
  int *unaff_EDI;
  undefined4 in_stack_00000038;
  wchar_t *pwVar5;
  void *pvStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ec9e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    (0x10,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffcc);
  local_c._0_1_ = 1;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_100322c0();
  }
  local_c = (void *)((uint)local_c._1_3_ << 8);
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    this = (FString *)FUN_100abd40(&stack0xffffffd8);
    puVar3 = FString::operator*(this);
    iVar4 = FUN_1004f780(puVar3);
  }
  *piVar2 = iVar4;
  if (iVar1 != 0) {
    FString::~FString((FString *)&stack0xffffffd8);
  }
  iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d70);
  if (iVar1 == 0) {
    iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d3c);
    if (iVar1 == 0) {
      iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d34);
      if (iVar1 == 0) {
        iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d2c);
        if (iVar1 == 0) {
          iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d24);
          if (iVar1 == 0) {
            iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d1c);
            if (iVar1 == 0) {
              iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d14);
              if (iVar1 == 0) {
                iVar1 = FString::operator==((FString *)&stack0x00000008,(ushort *)&DAT_10251d0c);
                if (iVar1 == 0) goto LAB_100981b5;
                pwVar5 = L"L2UI_CH3.Msn.msnicon4";
                goto LAB_100981ab;
              }
            }
            pwVar5 = L"L2UI_CH3.Msn.msnicon3";
            goto LAB_100981ab;
          }
        }
      }
    }
    pwVar5 = L"L2UI_CH3.Msn.msnicon2";
  }
  else {
    pwVar5 = L"L2UI_CH3.Msn.msnicon1";
  }
LAB_100981ab:
  iVar1 = FUN_1003f630(pwVar5,1);
  piVar2[2] = iVar1;
LAB_100981b5:
  *(undefined4 *)(*piVar2 + 0xc) = in_stack_00000038;
  if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
    iVar1 = *(int *)(in_ECX + 0x30c) + 1;
    *(int *)(in_ECX + 0x30c) = iVar1;
    unaff_EDI = piVar2;
    if (*(int *)(in_ECX + 0x300) < iVar1) {
      *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
    }
  }
  else {
    piVar2 = (int *)**(undefined4 **)(in_ECX + 0x2e8);
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_1004f7b0();
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      *piVar2 = 0;
    }
    if (*(int *)(in_ECX + 0x2ec) < 0) {
      appFailAssert("Index<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
    }
    if (*(int *)(in_ECX + 0x2ec) < 1) {
      appFailAssert("Index+Count<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
    }
    FArray::Remove((FArray *)(in_ECX + 0x2e8),0,1,4);
  }
  iVar1 = FArray::Add((FArray *)(in_ECX + 0x2e8),1,4);
  *(int **)(*(int *)(in_ECX + 0x2e8) + iVar1 * 4) = unaff_EDI;
  FUN_100abc50();
  ExceptionList = pvStack_1c;
  return;
}


// ==== 100982b0 FUN_100982b0

void FUN_100982b0(int param_1,int *param_2,undefined4 param_3)

{
  FArray *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined2 in_FPUControlWord;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_101eca3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar4 = (int *)0x0;
  local_14 = (undefined4)(longlong)ROUND(((*(float *)(in_ECX + 0x88) - 16.0) - 6.0) - 13.0);
  iVar2 = FUN_100223d0(param_2,local_14,0,DAT_103554c4 ^ (uint)&stack0xffffffd8);
  if (iVar2 != 0) {
    iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
    local_c = (void *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_100322c0();
    }
    local_c = (void *)0xffffffff;
    iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
    iStack_4 = 1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_1004f780(iVar2);
    }
    iStack_4 = 0xffffffff;
    *piVar4 = iVar2;
    piVar4[2] = param_1;
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
      iVar2 = *(int *)(in_ECX + 0x30c) + 1;
      *(int *)(in_ECX + 0x30c) = iVar2;
      if (*(int *)(in_ECX + 0x300) < iVar2) {
        *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
      }
    }
    else {
      piVar1 = (int *)**(undefined4 **)(in_ECX + 0x2e8);
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_1004f7b0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
        *piVar1 = 0;
      }
      if (*(int *)(in_ECX + 0x2ec) < 0) {
        appFailAssert("Index<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204)
        ;
      }
      if (*(int *)(in_ECX + 0x2ec) < 1) {
        appFailAssert("Index+Count<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205)
        ;
      }
      FArray::Remove((FArray *)(in_ECX + 0x2e8),0,1,4);
    }
    this = (FArray *)(in_ECX + 0x2e8);
    iVar2 = FArray::Add(this,1,4);
    *(int **)(*(int *)this + iVar2 * 4) = piVar4;
    FUN_100324e0();
    param_2._2_2_ = (undefined2)((uint)iVar3 >> 0x10);
    param_2 = (int *)CONCAT22(param_2._2_2_,in_FPUControlWord);
    local_14 = (undefined4)(longlong)ROUND((*(float *)(in_ECX + 0x88) - 16.0) - 6.0);
    iVar2 = FUN_10022850(local_14,0);
    while (iVar2 != 0) {
      iStack_4 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
      local_c = (void *)0x2;
      if (iStack_4 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_100322c0();
      }
      local_c = (void *)0xffffffff;
      iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
      iStack_4 = 3;
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_1004f780(iVar2);
      }
      iStack_4 = 0xffffffff;
      *piVar4 = iVar2;
      piVar4[2] = 0;
      *(undefined4 *)(iVar2 + 0xc) = param_3;
      if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
        iVar2 = *(int *)(in_ECX + 0x30c) + 1;
        *(int *)(in_ECX + 0x30c) = iVar2;
        if (*(int *)(in_ECX + 0x300) < iVar2) {
          *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
        }
      }
      else {
        piVar4 = (int *)**(undefined4 **)this;
        iVar2 = *piVar4;
        if (iVar2 != 0) {
          FUN_1004f7b0();
          (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
          *piVar4 = 0;
        }
        if (*(int *)(in_ECX + 0x2ec) < 0) {
          appFailAssert("Index<=ArrayNum",
                        "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                        0x204);
        }
        if (*(int *)(in_ECX + 0x2ec) < 1) {
          appFailAssert("Index+Count<=ArrayNum",
                        "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                        0x205);
        }
        FArray::Remove(this,0,1,4);
        piVar4 = param_2;
      }
      iVar2 = FArray::Add(this,1,4);
      *(int **)(*(int *)this + iVar2 * 4) = piVar4;
      FUN_100324e0();
      param_2._2_2_ = (undefined2)((uint)param_2 >> 0x10);
      param_2 = (int *)CONCAT22(param_2._2_2_,in_FPUControlWord);
      local_14 = (undefined4)(longlong)ROUND((*(float *)(in_ECX + 0x88) - 16.0) - 6.0);
      iVar2 = FUN_10022850(local_14,0);
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 10098660 FUN_10098660

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_10098660(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  uint uStack_1040;
  int *local_1024;
  int local_1020;
  undefined1 *local_1018;
  void *local_1014;
  undefined1 *puStack_1010;
  int local_100c;
  ushort local_1008;
  undefined1 local_1006 [4094];
  uint local_8;
  
  puStack_1010 = &LAB_101eca76;
  local_1014 = ExceptionList;
  uStack_1040 = DAT_103554c4 ^ (uint)&local_1008;
  local_1018 = (undefined1 *)&uStack_1040;
  ExceptionList = &local_1014;
  local_100c = 0;
  local_8 = uStack_1040;
  appSprintf(&local_1008,(ushort *)&DAT_1022dde0,param_1);
  uVar1 = FUN_101c19e0();
  while (puVar2 = (ushort *)FUN_100223d0(&local_1008,uVar1,0), puVar2 != (ushort *)0x0) {
    local_1020 = FUN_10004ed0(0x10);
    local_100c._0_1_ = 1;
    if (local_1020 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_100322c0();
    }
    local_100c._0_1_ = 0;
    local_1024 = piVar3;
    local_1020 = FUN_10004ed0(0x14);
    local_100c._0_1_ = 2;
    if (local_1020 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1004f780(puVar2);
    }
    local_100c = (uint)local_100c._1_3_ << 8;
    *piVar3 = iVar4;
    *(undefined4 *)(iVar4 + 0xc) = param_2;
    piVar3[1] = (uint)(param_3 != 0);
    if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
      iVar4 = *(int *)(in_ECX + 0x30c) + 1;
      *(int *)(in_ECX + 0x30c) = iVar4;
      if (*(int *)(in_ECX + 0x300) < iVar4) {
        *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
      }
    }
    else {
      piVar3 = (int *)**(undefined4 **)(in_ECX + 0x2e8);
      if (*piVar3 != 0) {
        if (*piVar3 != 0) {
          FUN_1000a240(1);
        }
        *piVar3 = 0;
      }
      FUN_1013d680(0,1);
    }
    FUN_100d9a30(&local_1024);
    FUN_100324e0();
    iVar4 = appStrcmp(puVar2,(ushort *)&DAT_1022f9f8);
    if (iVar4 == 0) {
      appSprintf(&local_1008,(ushort *)&DAT_1022dde0,local_1006);
    }
    else {
      iVar4 = appStrlen(puVar2);
      appSprintf(&local_1008,(ushort *)&DAT_1022dde0,&local_1008 + iVar4);
    }
  }
  local_100c = 0xffffffff;
  ExceptionList = local_1014;
  __security_check_cookie(local_8 ^ (uint)&local_1008);
  return;
}


// ==== 1009885c Catch@1009885c

void Catch_1009885c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10098870 Catch@10098870

void Catch_10098870(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ChatBox::Add");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10098890 FUN_10098890

void FUN_10098890(void)

{
  ushort *puVar1;
  FString *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 *puStack_250;
  undefined1 auStack_24c [4];
  undefined4 uStack_248;
  uint uStack_240;
  FString local_238 [4];
  ushort auStack_234 [4];
  undefined1 *local_22c;
  undefined1 *local_228;
  undefined1 local_224 [504];
  uint uStack_2c;
  void *pvStack_28;
  int iStack_20;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecad8;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_238;
  uStack_240 = DAT_103554c4 ^ (uint)&stack0xfffffdc4;
  ExceptionList = &local_c;
  local_4 = 0;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x4255c));
  uStack_248 = 0x100988f2;
  FString::FString(local_238,puVar1);
  local_4._0_1_ = 1;
  local_22c = auStack_24c;
  puStack_250 = auStack_24c;
  uStack_254 = 0x10098910;
  FUN_100abd40();
  local_4._0_1_ = 2;
  local_228 = (undefined1 *)&uStack_258;
  FString::FString((FString *)&uStack_258,(ushort *)&DAT_10251894);
  local_4 = CONCAT31(local_4._1_3_,1);
  pFVar2 = (FString *)FString::Substitute(local_238,local_224);
  iStack_20._0_1_ = 4;
  FString::operator=((FString *)&uStack_254,pFVar2);
  iStack_20._0_1_ = 1;
  FString::~FString((FString *)&uStack_240);
  puVar1 = FString::operator*((FString *)&uStack_254);
  appSprintf(auStack_234,(ushort *)&DAT_1022dde0,puVar1);
  uVar4 = 0xff8cb48c;
  puVar1 = auStack_234;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon1",1);
  FUN_100982b0(uVar3,puVar1,uVar4);
  iStack_20 = (uint)iStack_20._1_3_ << 8;
  FString::~FString((FString *)&uStack_254);
  iStack_20 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = pvStack_28;
  uStack_258 = 0x100989f9;
  __security_check_cookie(uStack_2c ^ (uint)&uStack_254);
  return;
}


// ==== 10098a10 FUN_10098a10

void FUN_10098a10(void)

{
  ushort *puVar1;
  FString *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 *puStack_250;
  undefined1 auStack_24c [4];
  undefined4 uStack_248;
  uint uStack_240;
  FString local_238 [4];
  ushort auStack_234 [4];
  undefined1 *local_22c;
  undefined1 *local_228;
  undefined1 local_224 [504];
  uint uStack_2c;
  void *pvStack_28;
  int iStack_20;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecb48;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_238;
  uStack_240 = DAT_103554c4 ^ (uint)&stack0xfffffdc4;
  ExceptionList = &local_c;
  local_4 = 0;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x425b8));
  uStack_248 = 0x10098a72;
  FString::FString(local_238,puVar1);
  local_4._0_1_ = 1;
  local_22c = auStack_24c;
  puStack_250 = auStack_24c;
  uStack_254 = 0x10098a90;
  FUN_100abd40();
  local_4._0_1_ = 2;
  local_228 = (undefined1 *)&uStack_258;
  FString::FString((FString *)&uStack_258,(ushort *)&DAT_10251894);
  local_4 = CONCAT31(local_4._1_3_,1);
  pFVar2 = (FString *)FString::Substitute(local_238,local_224);
  iStack_20._0_1_ = 4;
  FString::operator=((FString *)&uStack_254,pFVar2);
  iStack_20._0_1_ = 1;
  FString::~FString((FString *)&uStack_240);
  puVar1 = FString::operator*((FString *)&uStack_254);
  appSprintf(auStack_234,(ushort *)&DAT_1022dde0,puVar1);
  uVar4 = 0xffe37171;
  puVar1 = auStack_234;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon7",1);
  FUN_100982b0(uVar3,puVar1,uVar4);
  iStack_20 = (uint)iStack_20._1_3_ << 8;
  FString::~FString((FString *)&uStack_254);
  iStack_20 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = pvStack_28;
  uStack_258 = 0x10098b79;
  __security_check_cookie(uStack_2c ^ (uint)&uStack_254);
  return;
}


// ==== 10098b90 FUN_10098b90

void FUN_10098b90(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ecb96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                      (0x10,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffdc);
    local_c = (void *)0x0;
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_100322c0();
    }
    local_c = (void *)0xffffffff;
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
    uStack_4 = 1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_1004f780(param_2);
    }
    uStack_4 = 0xffffffff;
    piVar2[1] = param_3;
    *piVar2 = iVar1;
    piVar2[2] = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_4;
    if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
      iVar1 = *(int *)(in_ECX + 0x30c) + 1;
      *(int *)(in_ECX + 0x30c) = iVar1;
      piStack_14 = piVar2;
      if (*(int *)(in_ECX + 0x300) < iVar1) {
        *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
      }
    }
    else {
      piVar2 = (int *)**(undefined4 **)(in_ECX + 0x2e8);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_1004f7b0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
        *piVar2 = 0;
      }
      if (*(int *)(in_ECX + 0x2ec) < 0) {
        appFailAssert("Index<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204)
        ;
      }
      if (*(int *)(in_ECX + 0x2ec) < 1) {
        appFailAssert("Index+Count<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205)
        ;
      }
      FArray::Remove((FArray *)(in_ECX + 0x2e8),0,1,4);
    }
    iVar1 = FArray::Add((FArray *)(in_ECX + 0x2e8),1,4);
    *(int **)(*(int *)(in_ECX + 0x2e8) + iVar1 * 4) = piStack_14;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10098d30 FUN_10098d30

void FUN_10098d30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10097a00(&stack0x00000008);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1cc) = param_1;
  }
  return;
}


// ==== 10098d60 FUN_10098d60

void FUN_10098d60(void)

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
    FUN_10097a60();
    return;
  }
  return;
}


// ==== 10098da0 FUN_10098da0

void FUN_10098da0(void)

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
    FUN_10097b10();
    return;
  }
  return;
}


// ==== 10098de0 FUN_10098de0

void FUN_10098de0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecbc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = FUN_10097bd0(0x14);
      if (iVar1 != 0) {
        FUN_100964d0(*param_1 + iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10098e80 FUN_10098e80

void FUN_10098e80(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecbfc;
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


// ==== 10098f00 FUN_10098f00

undefined4 * FUN_10098f00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_10083a80(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = *param_1;
    puVar1[2] = *param_2;
  }
  if ((UObject *)puVar1[1] == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UObject::GetIndex((UObject *)puVar1[1]);
  }
  uVar2 = *(int *)(in_ECX + 0x10) - 1U & uVar2;
  *puVar1 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_10097b10();
  }
  return puVar1 + 2;
}


// ==== 10098f80 FUN_10098f80

void FUN_10098f80(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  FUN_10098e80(param_1[1]);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = FUN_10097bd0(0x14);
      if (iVar1 != 0) {
        FUN_100964d0(*param_1 + iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < param_1[1]);
    return;
  }
  return;
}


// ==== 10098fe0 FUN_10098fe0

void FUN_10098fe0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecc29;
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


// ==== 10099080 FUN_10099080

void FUN_10099080(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecc59;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10099120 FUN_10099120

void FUN_10099120(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecc98;
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
    iVar3 = param_1 * 0x1c;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar3 = iVar3 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 10099220 FUN_10099220

void FUN_10099220(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecccc;
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


// ==== 10099300 FUN_10099300

void FUN_10099300(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  FString *pFVar3;
  FString aFStack_864 [4];
  undefined4 uStack_860;
  FString local_83c [12];
  FString local_830 [12];
  FString local_824 [12];
  undefined1 *local_818;
  undefined1 *local_814;
  ushort auStack_810 [1024];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecd2c;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_83c;
  ExceptionList = &local_c;
  if (param_2 == 0) {
    FUN_10098660();
  }
  else {
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x41d74));
    FString::FString(local_830,puVar1);
    local_4 = 0;
    FUN_100abd40();
    local_4._0_1_ = 1;
    local_814 = &stack0xfffff7a8;
    uStack_860 = 0x100993a2;
    FString::FString((FString *)&stack0xfffff7a8,local_824);
    local_4._0_1_ = 2;
    local_818 = aFStack_864;
    FString::FString(aFStack_864,(ushort *)&DAT_10251894);
    local_4._0_1_ = 1;
    FString::Substitute(local_830,local_83c);
    local_4 = CONCAT31(local_4._1_3_,4);
    iVar2 = FString::operator==(local_830,local_83c);
    if (iVar2 != 0) {
      pFVar3 = FString::operator+=(local_824,local_830);
      FString::operator=(local_83c,pFVar3);
    }
    FString::operator*(local_83c);
    appSprintf(auStack_810,(ushort *)&DAT_1022dde0);
    FUN_10098660();
    FUN_10098660();
    local_4._0_1_ = 1;
    FString::~FString(local_83c);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_824);
    local_4 = 0xffffffff;
    FString::~FString(local_830);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_83c);
  return;
}


// ==== 100994d0 FUN_100994d0

void FUN_100994d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  FString *pFVar5;
  int in_ECX;
  undefined1 *puVar6;
  uint uStack_4bc;
  undefined1 auStack_4ac [72];
  int iStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  int iStack_454;
  int iStack_450;
  int iStack_44c;
  undefined4 uStack_448;
  FString aFStack_440 [4];
  int aiStack_43c [2];
  FString aFStack_434 [12];
  undefined1 *puStack_428;
  void *pvStack_424;
  undefined *puStack_420;
  int iStack_41c;
  undefined1 auStack_418 [520];
  ushort auStack_210 [260];
  uint uStack_8;
  
  puStack_420 = &UNK_101ecdaa;
  pvStack_424 = ExceptionList;
  uStack_4bc = DAT_103554c4 ^ (uint)auStack_418;
  puStack_428 = (undefined1 *)&uStack_4bc;
  ExceptionList = &pvStack_424;
  iStack_41c = 0;
  uStack_8 = uStack_4bc;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  if (*(int *)(in_ECX + 0xaf4) != 0) {
    FUN_10021a00(0,0x14,0x100,0x17d,0,0,0x100,0x17d,*(int *)(in_ECX + 0xaf4),0xff,1);
  }
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d84c));
    appStrcpy(auStack_210,puVar4);
    FUN_100217a0(8,0x22,0xffdcdcdc,auStack_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(aiStack_43c,auStack_210,0,0,0,0,0,0);
    uVar2 = *(undefined4 *)(in_ECX + 0xa2c);
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d858));
    appSprintf(auStack_210,(ushort *)L"%d%s",uVar2,puVar4);
    FUN_100217a0(aiStack_43c[0] + 10,0x22,0xffdcdcdc,auStack_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  FString::FString(aFStack_434);
  iStack_41c._0_1_ = 1;
  if (*(int *)(in_ECX + 0xa18) < 2) {
    if (*(int *)(in_ECX + 0xa18) == 1) {
      iStack_464 = in_ECX + 0xa14;
      uStack_45c = 0;
      uStack_458 = 0;
      iStack_41c._0_1_ = 6;
      iStack_460 = iStack_464;
      FUN_10096770(auStack_4ac);
      iStack_41c._0_1_ = 7;
      pFVar5 = (FString *)FUN_100abd40(aFStack_440);
      iStack_41c._0_1_ = 8;
      FString::operator+=(aFStack_434,pFVar5);
      iStack_41c._0_1_ = 7;
      FString::~FString(aFStack_440);
      iStack_41c._0_1_ = 6;
      FUN_100abc50();
      FString::operator+=(aFStack_434,&DAT_1023d5d0);
      puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x424a4));
      FString::operator+=(aFStack_434,puVar4);
      iStack_41c._0_1_ = 1;
      FUN_10098d60();
    }
  }
  else {
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d8e8));
    FString::operator=(aFStack_434,puVar4);
    FString::operator+=(aFStack_434,(ushort *)&DAT_10251de4);
    iStack_454 = in_ECX + 0xa14;
    uStack_448 = 0;
    iStack_41c._0_1_ = 2;
    iStack_44c = 0;
    iStack_450 = iStack_454;
    while (iVar1 = iStack_44c, iStack_44c < *(int *)(in_ECX + 0xa18)) {
      FUN_10096770(auStack_4ac);
      iStack_41c._0_1_ = 3;
      pFVar5 = (FString *)FUN_100abd40(aFStack_440);
      iStack_41c._0_1_ = 4;
      FString::operator+=(aFStack_434,pFVar5);
      iStack_41c._0_1_ = 3;
      FString::~FString(aFStack_440);
      iStack_41c._0_1_ = 2;
      FUN_100abc50();
      FString::operator+=(aFStack_434,(ushort *)&DAT_10246d48);
      iStack_44c = iVar1 + 1;
    }
    iStack_41c._0_1_ = 1;
    FUN_10098d60();
    FString::Len(aFStack_434);
    pFVar5 = (FString *)FString::Left(aFStack_434,(int)aFStack_440);
    iStack_41c._0_1_ = 5;
    FString::operator=(aFStack_434,pFVar5);
    iStack_41c._0_1_ = 1;
    FString::~FString(aFStack_440);
  }
  uVar3 = 0xc;
  uVar2 = 0xee;
  puVar6 = auStack_418;
  puVar4 = FString::operator*(aFStack_434);
  FUN_100c72c0(puVar4,puVar6,uVar2,uVar3);
  FUN_100217a0(9,0x17d,0xffdcdcdc,auStack_418,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iStack_41c = (uint)iStack_41c._1_3_ << 8;
  FString::~FString(aFStack_434);
  ExceptionList = pvStack_424;
  __security_check_cookie(uStack_8 ^ (uint)auStack_418);
  return;
}


// ==== 1009989b Catch@1009989b

void Catch_1009989b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100998af Catch@100998af

void Catch_100998af(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ChatWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100998d0 FUN_100998d0

undefined4 FUN_100998d0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecdf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  local_4 = 1;
  if (0 < *(int *)(in_ECX + 0xa2c)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xa28) + 0x10 + iVar2 * 0x14);
      if (iVar1 != 0) {
        iVar1 = FString::operator==((FString *)(iVar1 + 0x20),(FString *)&stack0x00000004);
        if (iVar1 != 0) {
          local_4 = 0xffffffff;
          FString::~FString((FString *)&stack0x00000004);
          ExceptionList = local_c;
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0xa2c));
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 100999a0 FUN_100999a0

void FUN_100999a0(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint3 uVar4;
  FString *pFVar5;
  int *in_ECX;
  undefined1 auStack_94 [60];
  undefined4 uStack_58;
  undefined1 *puStack_38;
  FString aFStack_34 [8];
  FString aFStack_2c [4];
  FString aFStack_28 [12];
  int *piStack_1c;
  int *piStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ece3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)in_ECX[0x2b6] + 0x174))();
  FString::FString(aFStack_34);
  piVar1 = in_ECX + 0x28a;
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  iStack_4._1_3_ = 0;
  uVar4 = iStack_4._1_3_;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  piStack_1c = piVar1;
  piStack_18 = piVar1;
  if (0 < in_ECX[0x28b]) {
    do {
      pvVar3 = pvStack_14;
      iVar2 = *(int *)(*piVar1 + 0x10 + (int)pvStack_14 * 0x14);
      if (iVar2 != 0) {
        puStack_38 = auStack_94;
        FUN_100abb60(iVar2);
        iStack_4._0_1_ = 1;
        FUN_10098000();
        pFVar5 = (FString *)FUN_100abd40();
        iStack_4._0_1_ = 3;
        FString::operator+=(aFStack_34,pFVar5);
        iStack_4._0_1_ = 1;
        FString::~FString(aFStack_28);
        FString::operator+=(aFStack_34,(ushort *)&DAT_10246d48);
      }
      pvStack_14 = (void *)((int)pvVar3 + 1);
      uVar4 = iStack_4._1_3_;
    } while ((int)pvStack_14 < in_ECX[0x28b]);
  }
  iStack_4._1_3_ = uVar4;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::Len(aFStack_34);
  uStack_58 = 0x10099ab9;
  pFVar5 = (FString *)FString::Left(aFStack_34,(int)aFStack_28);
  puStack_8._0_1_ = 4;
  uStack_58 = 0x10099ac9;
  FString::operator=((FString *)&puStack_38,pFVar5);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FString::~FString(aFStack_2c);
  iVar2 = *in_ECX;
  FString::operator*((FString *)&puStack_38);
  uStack_58 = 0x10099af1;
  (**(code **)(iVar2 + 0x168))();
  local_c = (void *)0xffffffff;
  uStack_58 = 0x10099b03;
  FString::~FString((FString *)&stack0xffffffc4);
  in_ECX[0x27e] = (uint)(1 < in_ECX[0x28b]);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10099b30 FUN_10099b30

void FUN_10099b30(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ece70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    *(int *)(in_ECX + 0x1d4) = param_1;
    FUN_100adfb0();
    FUN_100abce0();
    local_24 = 0;
    if (0 < *(int *)(in_ECX + 0xa0c)) {
      do {
        iVar2 = *(int *)(*(int *)(in_ECX + 0xa08) + local_24 * 4);
        if (iVar2 != 0) {
          FUN_100a9630(iVar2);
          local_4 = 0xffffffff;
          FUN_100ae600();
          FUN_100a9760();
          (**(code **)(**(int **)GMalloc_exref + 8))();
          iVar2 = 0;
          local_4 = 1;
          if (0 < *(int *)(in_ECX + 0xa2c)) {
            do {
              iVar1 = *(int *)(*(int *)(in_ECX + 0xa28) + 0x10 + iVar2 * 0x14);
              if (iVar1 != 0) {
                (**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))();
                FString::operator*((FString *)(iVar1 + 0x20));
                FUN_10148660();
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(in_ECX + 0xa2c));
          }
          local_4 = 0xffffffff;
        }
        FUN_1013d680();
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)(in_ECX + 0xa0c));
    }
    *(int *)(*(int *)(in_ECX + 0xae0) + 0x1d0) = param_1;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10099cb0 FUN_10099cb0

void FUN_10099cb0(void)

{
  int iVar1;
  
  iVar1 = FUN_10097a00(&stack0x00000004);
  if (iVar1 != 0) {
    FUN_100a3510(iVar1);
    FUN_100a3580(&stack0x00000004);
  }
  return;
}


// ==== 10099cf0 FUN_10099cf0

int FUN_10099cf0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x1d0)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x1cc) + 8 + iVar2 * 0xc);
      if (*(int *)(iVar1 + 0x1cc) == param_1) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x1d0));
  }
  return 0;
}


// ==== 10099da0 FUN_10099da0

void FUN_10099da0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecec8;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x1d0)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x1cc) + 8 + iVar3 * 0xc);
      if (iVar1 != 0) {
        FUN_100a3510(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x1d0));
  }
  local_4 = 0xffffffff;
  FArray::Empty((FArray *)(in_ECX + 0x1cc),0xc,0);
  *(undefined4 *)(in_ECX + 0x1dc) = 8;
  FUN_10097b10(uVar2);
  ExceptionList = local_c;
  return;
}


// ==== 10099e50 FUN_10099e50

undefined4 * FUN_10099e50(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecf06;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  iVar6 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar6 != -1) {
    iVar1 = *in_ECX;
    do {
      piVar5 = (int *)(iVar6 * 0x54 + iVar1);
      if (piVar5[1] == *param_1) {
        iVar6 = iVar6 * 0x54;
        *(undefined4 *)(iVar1 + 8 + iVar6) = *param_2;
        *(undefined4 *)(iVar1 + 0xc + iVar6) = param_2[1];
        FUN_100abce0(param_2 + 2);
        ExceptionList = local_c;
        return (undefined4 *)(iVar6 + 8 + *in_ECX);
      }
      iVar6 = *piVar5;
    } while (iVar6 != -1);
  }
  puVar3 = (undefined4 *)FUN_10097bf0(0x54);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
    puVar3[3] = param_2[1];
    FUN_100abb60(param_2 + 2);
    local_4 = 0xffffffff;
  }
  uVar4 = in_ECX[4] - 1U & puVar3[1];
  *puVar3 = *(undefined4 *)(in_ECX[3] + uVar4 * 4);
  *(int *)(in_ECX[3] + uVar4 * 4) = in_ECX[1] + -1;
  if (in_ECX[4] * 2 + 8 < in_ECX[1]) {
    in_ECX[4] = in_ECX[4] * 2;
    FUN_10097a60(uVar2);
  }
  ExceptionList = local_c;
  return puVar3 + 2;
}


// ==== 10099f80 FUN_10099f80

void FUN_10099f80(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecf41;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_10097b10(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10099ff0 FUN_10099ff0

int FUN_10099ff0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  
  if ((UObject *)*param_1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UObject::GetIndex((UObject *)*param_1);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == *param_1) {
        *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc) = *param_2;
        return iVar3 * 0xc + 8 + *in_ECX;
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  iVar3 = FUN_10098f00(param_1,param_2);
  return iVar3;
}


// ==== 1009a070 FUN_1009a070

void FUN_1009a070(int param_1)

{
  uint uVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ecf76;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      FUN_100abc50(uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x54,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1009a100 FUN_1009a100

void FUN_1009a100(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecfa8;
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
  FUN_10099080();
  ExceptionList = local_c;
  return;
}


// ==== 1009a180 FUN_1009a180

void FUN_1009a180(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ecfd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10099120(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1009a1e0 FUN_1009a1e0

void FUN_1009a1e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed009;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10099220(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1009a240 FUN_1009a240

void FUN_1009a240(int param_1,int param_2)

{
  uint uVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed046;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
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
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FUN_100abc50(uVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x54);
  ExceptionList = local_c;
  return;
}


// ==== 1009a330 FUN_1009a330

void FUN_1009a330(int param_1)

{
  int in_ECX;
  
  FUN_10098f80(param_1);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_1006b150();
  return;
}


// ==== 1009a360 FUN_1009a360

void FUN_1009a360(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed081;
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


// ==== 1009a3d0 FUN_1009a3d0

void FUN_1009a3d0(int param_1)

{
  uint uVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed0a8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FUN_10098de0(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_1006b150(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009a440 FUN_1009a440

int FUN_1009a440(int *param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = in_ECX[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0x54;
    do {
      if (*(int *)(iVar1 + 4 + *in_ECX) == *param_1) {
        FUN_1009a240(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0x54;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          in_ECX[4] = in_ECX[4] / 2;
        } while (in_ECX[1] * 2 + 8 < in_ECX[4]);
      }
      FUN_10097a60();
    }
  }
  return iVar2;
}


// ==== 1009a4c0 FUN_1009a4c0

void FUN_1009a4c0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed0d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1009a100(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1009a510 FUN_1009a510

void FUN_1009a510(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed111;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_10097c10(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009a580 FUN_1009a580

void FUN_1009a580(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed138;
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
  FUN_1009a180();
  ExceptionList = local_c;
  return;
}


// ==== 1009a600 FUN_1009a600

void FUN_1009a600(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed168;
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
  FUN_1009a1e0();
  ExceptionList = local_c;
  return;
}


// ==== 1009a680 FUN_1009a680

void FUN_1009a680(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed199;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1009a240(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1009a6e0 FUN_1009a6e0

void FUN_1009a6e0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed1c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1009a3d0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1009a730 FUN_1009a730

undefined4 FUN_1009a730(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ed1f8;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0xa0c)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xa08) + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_100a9760(uVar2);
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0xa0c));
  }
  FArray::Empty((FArray *)(in_ECX + 0xa08),4,0);
  FUN_10098e80(0);
  *(undefined4 *)(in_ECX + 0xa38) = 8;
  FUN_1006b150();
  iVar3 = 0;
  uStack_4 = 0;
  if (0 < *(int *)(in_ECX + 0xa18)) {
    do {
      FUN_1003f610(*(undefined4 *)(iVar3 * 0x54 + 0xc + *(int *)(in_ECX + 0xa14)));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0xa18));
  }
  uStack_4 = 0xffffffff;
  FUN_1009a070(0);
  *(undefined4 *)(in_ECX + 0xa24) = 8;
  FUN_10097a60();
  if (*(int *)(in_ECX + 0xae8) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0xae8));
    *(undefined4 *)(in_ECX + 0xae8) = 0;
  }
  if (*(int *)(in_ECX + 0xaec) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0xaec));
    *(undefined4 *)(in_ECX + 0xaec) = 0;
  }
  *(undefined4 *)(in_ECX + 0xaf0) = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  *(undefined4 *)(in_ECX + 0xad0) = 0;
  *(undefined4 *)(in_ECX + 0xad4) = 0;
  *(undefined4 *)(in_ECX + 0xad8) = 0;
  *(undefined4 *)(in_ECX + 0xadc) = 0;
  *(undefined4 *)(in_ECX + 0xae0) = 0;
  *(undefined4 *)(in_ECX + 0xae4) = 0;
  FUN_10061e90();
  ExceptionList = local_c;
  return 1;
}


// ==== 1009a8b0 FUN_1009a8b0

void FUN_1009a8b0(void)

{
  int iVar1;
  int iVar2;
  FString *this;
  int *in_ECX;
  undefined1 auStack_88 [64];
  undefined4 uStack_48;
  int **ppiStack_44;
  uint uStack_40;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101ed239;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0x75] != 0) {
    ppiStack_44 = (int **)(in_ECX[0x75] + 0x80);
    uStack_48 = 0x1009a905;
    FUN_1009a330();
    ppiStack_44 = (int **)0x1009a915;
    (**(code **)(*(int *)in_ECX[0x2b6] + 0x174))();
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_2c = in_ECX + 0x28a;
    while (iVar2 = local_28, local_28 < in_ECX[0x28b]) {
      iVar1 = *(int *)(in_ECX[0x28a] + 0x10 + local_28 * 0x14);
      if (iVar1 != 0) {
        ppiStack_44 = (int **)0xffdcdcdc;
        local_1c = auStack_88;
        FUN_100abb60(iVar1);
        local_8._0_1_ = 1;
        FUN_10098000();
      }
      local_28 = iVar2 + 1;
    }
    local_8._0_1_ = 0;
    ppiStack_44 = (int **)0x1009a97c;
    FUN_100b73f0();
    ppiStack_44 = &local_2c;
    uStack_48 = 0x1009a98b;
    this = (FString *)FUN_100aeab0();
    local_8._0_1_ = 3;
    iVar2 = *in_ECX;
    ppiStack_44 = (int **)0x1009a99f;
    ppiStack_44 = (int **)FString::operator*(this);
    uStack_48 = 0x1009a9a6;
    (**(code **)(iVar2 + 0x168))();
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_48 = 0x1009a9b3;
    FString::~FString((FString *)&local_2c);
    in_ECX[0x27e] = (uint)(1 < in_ECX[0x28b]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1009a9e0 Catch@1009a9e0

void Catch_1009a9e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1009a9f4 Catch@1009a9f4

void Catch_1009a9f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ChatWnd::SetRoster");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1009aa20 FUN_1009aa20

void FUN_1009aa20(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ed268;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 0x9f8) = 0;
  *(undefined4 *)(in_ECX + 0x9fc) = 0;
  *(undefined4 *)(in_ECX + 0xa04) = 0;
  if (0 < *(int *)(in_ECX + 0xa0c)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xa08) + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_100a9760(uVar2);
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0xa0c));
  }
  FArray::Empty((FArray *)(in_ECX + 0xa08),4,0);
  FUN_10098e80(0);
  *(undefined4 *)(in_ECX + 0xa38) = 8;
  FUN_1006b150();
  iVar3 = 0;
  uStack_4 = 0;
  if (0 < *(int *)(in_ECX + 0xa18)) {
    do {
      FUN_1003f610(*(undefined4 *)(iVar3 * 0x54 + 0xc + *(int *)(in_ECX + 0xa14)));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0xa18));
  }
  uStack_4 = 0xffffffff;
  FUN_1009a070(0);
  *(undefined4 *)(in_ECX + 0xa24) = 8;
  FUN_10097a60();
  if (*(int *)(in_ECX + 0xae8) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0xae8));
    *(undefined4 *)(in_ECX + 0xae8) = 0;
  }
  if (*(int *)(in_ECX + 0xaec) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0xaec));
    *(undefined4 *)(in_ECX + 0xaec) = 0;
  }
  *(undefined4 *)(in_ECX + 0xaf0) = 0xa13;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  (**(code **)(**(int **)(in_ECX + 0xad4) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0xad8) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0xae0) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0xae4) + 0x174))();
  ExceptionList = local_c;
  return;
}


// ==== 1009abd0 FUN_1009abd0

void FUN_1009abd0(void)

{
  uint3 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_a4;
  void *pvStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101ed2cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_a4 = 0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (0 < *(int *)(in_ECX + 0xa18)) {
    do {
      iVar2 = FUN_10096770();
      local_4._0_1_ = 2;
      iVar2 = FString::operator==((FString *)(iVar2 + 0x20),(FString *)&stack0x00000024);
      local_4._0_1_ = 1;
      FUN_100abc50();
      if (iVar2 != 0) {
        FUN_1003f610();
        FUN_1009a440();
      }
      local_a4 = local_a4 + 1;
      uVar1 = local_4._1_3_;
    } while (local_a4 < *(int *)(in_ECX + 0xa18));
  }
  local_4._1_3_ = uVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  *(int *)(in_ECX + 0xaf0) = *(int *)(in_ECX + 0xaf0) + 1;
  uVar3 = FUN_1003f600();
  FUN_100abb60(&puStack_8);
  FUN_100966f0(*(undefined4 *)(in_ECX + 0xaf0),uVar3);
  FUN_10099e50();
  FUN_100abc50();
  FUN_100abc50();
  ExceptionList = pvStack_18;
  return;
}


// ==== 1009ad60 FUN_1009ad60

void FUN_1009ad60(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed301;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_10097a60(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009add0 FUN_1009add0

void FUN_1009add0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1009a580(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1009ae20 FUN_1009ae20

void FUN_1009ae20(void)

{
  uint uVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed39f;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x10));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x1c));
  local_4._0_1_ = 2;
  FUN_1009a510(uVar1);
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,5);
  FString::FString((FString *)(in_ECX + 0x48));
  ExceptionList = local_c;
  return;
}


// ==== 1009aec0 FUN_1009aec0

void FUN_1009aec0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1009a600(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1009af10 FUN_1009af10

void FUN_1009af10(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed3f8;
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
  FUN_1009a680();
  ExceptionList = local_c;
  return;
}


// ==== 1009af90 FUN_1009af90

void FUN_1009af90(void)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined4 uVar7;
  int iStack_4c;
  FString aFStack_44 [12];
  FString aFStack_38 [12];
  FString aFStack_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ed44b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x174))(DAT_103554c4 ^ (uint)&stack0xffffffa4);
  if ((*(int *)(in_ECX + 0x1cc) != 0) && (*(int *)(in_ECX + 0x1d0) != 0)) {
    FUN_100aa580();
    iVar1 = FUN_100abe10();
    FUN_1009a6e0(*(int *)(in_ECX + 0x1d0) + 0x80);
    iStack_4 = 0;
    iStack_4c = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        iVar6 = *(int *)(*(int *)(iVar1 + 4) + iStack_4c * 4);
        if (iVar6 != 0) {
          iVar2 = FUN_100d0a00(iVar6 + 0x20);
          if (iVar2 == 0) {
            pFVar3 = (FString *)(iVar6 + 0x14);
            iVar2 = FString::operator==(pFVar3,(ushort *)&DAT_10251d70);
            if (iVar2 == 0) {
              iVar2 = FString::operator==(pFVar3,(ushort *)&DAT_10251d3c);
              if (iVar2 == 0) {
                iVar2 = FString::operator==(pFVar3,(ushort *)&DAT_10251d34);
                if (iVar2 == 0) {
                  iVar2 = FString::operator==(pFVar3,(ushort *)&DAT_10251d2c);
                  if (iVar2 == 0) {
                    iVar2 = FString::operator==(pFVar3,(ushort *)&DAT_10251d24);
                    if (iVar2 == 0) {
                      iVar2 = FString::operator==(pFVar3,(ushort *)&DAT_10251d1c);
                      if (iVar2 == 0) {
                        iVar2 = FString::operator==(pFVar3,(ushort *)&DAT_10251d14);
                        if (iVar2 == 0) goto LAB_1009b19c;
                      }
                      pFVar3 = (FString *)FUN_100abd40(aFStack_38);
                      iStack_4._0_1_ = 3;
                      uVar7 = 0xffdcdcdc;
                      puVar4 = FString::operator*(pFVar3);
                      uVar5 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon3",1);
                      FUN_10097cd0(uVar5,puVar4,iVar6,uVar7);
                      iStack_4 = (uint)iStack_4._1_3_ << 8;
                      pFVar3 = aFStack_38;
                      goto LAB_1009b196;
                    }
                  }
                }
              }
              pFVar3 = (FString *)FUN_100abd40(aFStack_2c);
              iStack_4._0_1_ = 2;
              uVar7 = 0xffdcdcdc;
              puVar4 = FString::operator*(pFVar3);
              uVar5 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon2",1);
              FUN_10097cd0(uVar5,puVar4,iVar6,uVar7);
              iStack_4 = (uint)iStack_4._1_3_ << 8;
              pFVar3 = aFStack_2c;
            }
            else {
              pFVar3 = (FString *)FUN_100abd40(aFStack_44);
              iStack_4._0_1_ = 1;
              uVar7 = 0xffdcdcdc;
              puVar4 = FString::operator*(pFVar3);
              uVar5 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon1",1);
              FUN_10097cd0(uVar5,puVar4,iVar6,uVar7);
              iStack_4 = (uint)iStack_4._1_3_ << 8;
              pFVar3 = aFStack_44;
            }
LAB_1009b196:
            FString::~FString(pFVar3);
          }
        }
LAB_1009b19c:
        iStack_4c = iStack_4c + 1;
      } while (iStack_4c < *(int *)(iVar1 + 8));
    }
    iStack_4 = 0xffffffff;
    FUN_1009a600();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1009b1e0 FUN_1009b1e0

undefined4 FUN_1009b1e0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined1 auStack_64 [88];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed491;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_1 == 0xa12) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))(), iVar1 != 0)) {
    puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))();
    iVar1 = appStrcmp((ushort *)(in_ECX + 0x1d8),puVar2);
    if ((iVar1 != 0) && (*(int *)(in_ECX + 0x1d4) != 0)) {
      FUN_1009ae20();
      local_4 = 0;
      iVar1 = FUN_100aa590();
      FString::FString((FString *)&stack0xffffff68,(FString *)(iVar1 + 0x20));
      local_4 = local_4 & 0xffffff00;
      FUN_10096540();
      FUN_100a9630(auStack_64);
      local_4 = local_4 & 0xffffff00;
      FUN_100ae4e0();
      puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))();
      appStrcpy((ushort *)(in_ECX + 0x1d8),puVar2);
      local_4 = 0xffffffff;
      FUN_100a9760();
    }
  }
  iVar1 = 0;
  local_4 = 3;
  if (0 < *(int *)(in_ECX + 0xa18)) {
    do {
      if (param_1 == *(int *)(*(int *)(in_ECX + 0xa14) + 4 + iVar1 * 0x54)) {
        FUN_1003f610();
        FUN_1009a440();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xa18));
  }
  local_4 = 0xffffffff;
  if (((param_1 == 0xa14) && (*(int *)(in_ECX + 0x1d4) == 0)) && (0 < *(int *)(in_ECX + 0xa0c))) {
    if (**(int **)(in_ECX + 0xa08) != 0) {
      FUN_100a9760();
      (**(code **)(**(int **)GMalloc_exref + 8))();
    }
    if (*(int *)(in_ECX + 0xa0c) < 0) {
      appFailAssert("Index<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
    }
    if (*(int *)(in_ECX + 0xa0c) < 1) {
      appFailAssert("Index+Count<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
    }
    FArray::Remove((FArray *)(in_ECX + 0xa08),0,1,4);
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 1009b440 FUN_1009b440

undefined4 FUN_1009b440(void)

{
  ushort *puVar1;
  int in_ECX;
  
  if (DAT_1037c9d0 == 0) {
    FUN_1009af90();
    (**(code **)(**(int **)(in_ECX + 0xae0) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0xae0) + 0x78))();
  }
  else if (*(int *)(in_ECX + 0x1cc) != 0) {
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x41758));
    FUN_100b53a0(puVar1);
    return 1;
  }
  return 1;
}


// ==== 1009b4b0 FUN_1009b4b0

void FUN_1009b4b0(void)

{
  ushort *puVar1;
  int in_ECX;
  ushort *extraout_ECX;
  undefined1 auStack_4e0 [68];
  undefined4 uStack_49c;
  ushort *puStack_494;
  undefined1 *local_47c;
  undefined1 local_478 [84];
  undefined4 local_424;
  ushort local_420 [520];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101ed4fa;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_47c;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_1009ae20();
  local_4._0_1_ = 2;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x42500));
  puStack_494 = (ushort *)0x1009b526;
  appStrcpy(local_420,puVar1);
  local_47c = (undefined1 *)&puStack_494;
  uStack_49c = 0x1009b538;
  puStack_494 = extraout_ECX;
  FString::FString((FString *)&puStack_494,local_420);
  local_4._0_1_ = 2;
  FUN_10096540();
  local_47c = (undefined1 *)&puStack_494;
  uStack_49c = 0x1009b564;
  FString::FString((FString *)&puStack_494,(ushort *)L"Arial");
  local_4._0_1_ = 2;
  FUN_100965a0();
  local_47c = (undefined1 *)&puStack_494;
  local_424 = 8000;
  uStack_49c = 0x1009b598;
  FString::FString((FString *)&puStack_494,(ushort *)&DAT_10251e10);
  local_4._0_1_ = 2;
  FUN_10096600();
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    local_47c = auStack_4e0;
    FUN_100a9630(local_478);
    local_4._0_1_ = 2;
    FUN_100ae600();
    FUN_100aa590();
    puStack_494 = local_420;
    FUN_10099300();
  }
  local_4._0_1_ = 1;
  FUN_100a9760();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100abc50();
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_47c);
  return;
}


// ==== 1009b670 FUN_1009b670

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1009b670(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FString *this;
  int in_ECX;
  undefined1 auStack_10e8 [68];
  undefined4 uStack_10a4;
  undefined1 *local_107c;
  int *local_1078;
  int *local_1074;
  int local_1070;
  undefined4 local_106c;
  undefined1 local_1068 [84];
  undefined4 local_1014;
  ushort local_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed581;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_107c;
  ExceptionList = &local_c;
  FUN_1009ae20();
  local_4 = 0;
  _memset(local_1010,0,0x1000);
  this = (FString *)FUN_10096210();
  local_4._0_1_ = 1;
  FString::operator*(this);
  appSprintf(local_1010,(ushort *)&DAT_1022dde0);
  local_4._0_1_ = 0;
  FString::~FString((FString *)&local_1078);
  local_107c = &stack0xffffef64;
  uStack_10a4 = 0x1009b735;
  FString::FString((FString *)&stack0xffffef64,local_1010);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10096540();
  local_107c = &stack0xffffef64;
  uStack_10a4 = 0x1009b762;
  FString::FString((FString *)&stack0xffffef64,(ushort *)L"Arial");
  local_4 = local_4 & 0xffffff00;
  FUN_100965a0();
  local_107c = &stack0xffffef64;
  local_1014 = 8000;
  uStack_10a4 = 0x1009b79a;
  FString::FString((FString *)&stack0xffffef64,(ushort *)&DAT_10251e10);
  local_4 = local_4 & 0xffffff00;
  FUN_10096600();
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    local_107c = auStack_10e8;
    FUN_100a9630(local_1068);
    local_4 = local_4 & 0xffffff00;
    FUN_100ae600();
    FUN_100aa590();
    FUN_10099300();
    piVar1 = (int *)(in_ECX + 0xa28);
    local_1070 = 0;
    *(undefined4 *)(in_ECX + 0xa04) = 1;
    local_106c = 0;
    local_4 = CONCAT31(local_4._1_3_,6);
    local_1078 = piVar1;
    local_1074 = piVar1;
    if (0 < *(int *)(in_ECX + 0xa2c)) {
      do {
        iVar3 = local_1070;
        iVar2 = *(int *)(*piVar1 + 0x10 + local_1070 * 0x14);
        if (iVar2 != 0) {
          (**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))();
          FString::operator*((FString *)(iVar2 + 0x20));
          FUN_10148660();
        }
        local_1070 = iVar3 + 1;
      } while (local_1070 < *(int *)(in_ECX + 0xa2c));
    }
  }
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_107c);
  return;
}


// ==== 1009b8d0 FUN_1009b8d0

void FUN_1009b8d0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed5b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1009af10(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1009b920 FUN_1009b920

void FUN_1009b920(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed5e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = InviteBox::vftable;
  in_ECX[0xc1] = 0x100;
  in_ECX[0xc0] = 0x10;
  ExceptionList = local_c;
  return;
}


// ==== 1009b990 FUN_1009b990

void FUN_1009b990(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed618;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = InviteBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10033f00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009b9f0 FUN_1009b9f0

void FUN_1009b9f0(byte param_1)

{
  void *in_ECX;
  
  FUN_1009b990();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x328);
  }
  return;
}


// ==== 1009ba20 FUN_1009ba20

void FUN_1009ba20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = InviteBox::vftable;
  in_ECX[0xc1] = param_1;
  in_ECX[0xc0] = param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1009ba90 FUN_1009ba90

void FUN_1009ba90(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = InviteWnd::vftable;
  in_ECX[0x73] = param_1;
  in_ECX[0x74] = param_2;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1009bb20 FUN_1009bb20

void FUN_1009bb20(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed6a8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = InviteWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009bb80 FUN_1009bb80

void FUN_1009bb80(byte param_1)

{
  void *in_ECX;
  
  FUN_1009bb20();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e4);
  }
  return;
}


// ==== 1009bbb0 FUN_1009bbb0

undefined4 FUN_1009bbb0(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  int *piVar4;
  UPackage *pUVar5;
  int in_ECX;
  uint uVar6;
  void *pvVar7;
  UPackage *pUStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  undefined4 local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ed738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061b40();
  pwStack_48 = L"L2UI_CH3.Msn.msn_optionback";
  uStack_4c = 0x1009bbf4;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e0) = uVar1;
  pwStack_48 = (wchar_t *)0x1009bc06;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  uStack_64 = 0x1009bc32;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_48 = (wchar_t *)0x0;
    uStack_4c = 1;
    uStack_50 = 0x1009bc46;
    iVar3 = FUN_1001c510();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  *(int *)(in_ECX + 0xc0) = iVar3;
  *(undefined4 *)(in_ECX + 200) = 0xa16;
  uStack_50 = 0x14;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa16;
  uStack_54 = 0x154;
  uStack_58 = 0;
  pUStack_5c = (UPackage *)0x0;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_64 = *(undefined4 *)(in_ECX + 0xc0);
  uStack_68 = 0x1009bc92;
  FUN_10060d40();
  uStack_64 = 0x1009bc9e;
  FUN_1005c1e0();
  uStack_64 = 0x1009bcaa;
  FName::FName((FName *)&stack0xffffffbc,0);
  uStack_74 = uVar1;
  pUStack_78 = UObject::GetTransientPackage();
  uStack_68 = *(undefined4 *)GError_exref;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_64 = 300;
    uStack_68 = 0x1009bcdf;
    piVar4 = (int *)FUN_1009ba20();
  }
  uVar1 = 3;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0xb1;
  uStack_70 = 0x142;
  *(int **)(in_ECX + 0x1d4) = piVar4;
  uStack_74 = 0x2f;
  pUStack_78 = (UPackage *)0x9;
  (**(code **)(*piVar4 + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d4));
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x31c) = 5;
  FName::FName((FName *)&stack0xffffffa0,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.Btn1_NormalOn");
    uStack_64 = 1;
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.Btn1_Normal");
    uStack_64 = 3;
    uVar1 = FUN_10006980(&pUStack_5c,&uStack_50);
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  if ((uStack_64 & 2) != 0) {
    uStack_64 = uStack_64 & 0xfffffffd;
    FString::~FString((FString *)&pUStack_5c);
  }
  if ((uStack_64 & 1) != 0) {
    uStack_64 = uStack_64 & 0xfffffffe;
    FString::~FString((FString *)&uStack_50);
  }
  pvVar7 = (void *)0x3;
  uVar6 = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xa0f;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))(0x5d,0xe8,0x4c,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d8),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffff84,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,pvVar7,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_78,(ushort *)L"L2UI_CH3.Button.Btn1_NormalOn");
    uStack_58 = 2;
    uVar6 = uVar6 | 4;
    FString::FString((FString *)&uStack_6c,(ushort *)L"L2UI_CH3.Button.Btn1_Normal");
    uStack_58 = 3;
    uVar6 = uVar6 | 8;
    uVar1 = FUN_10006980(&uStack_6c,&pUStack_78,0);
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  uStack_58 = 2;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    FString::~FString((FString *)&uStack_6c);
  }
  uStack_58 = 0xffffffff;
  if ((uVar6 & 4) != 0) {
    FString::~FString((FString *)&pUStack_78);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0xa10;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))(0xad,0xe8,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar7;
  return 1;
}


// ==== 1009bfb0 FUN_1009bfb0

void FUN_1009bfb0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = FriendBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1009c010 FUN_1009c010

void FUN_1009c010(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed798;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FriendBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10033f00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009c070 FUN_1009c070

void FUN_1009c070(byte param_1)

{
  void *in_ECX;
  
  FUN_1009c010();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x324);
  }
  return;
}


// ==== 1009c0a0 FUN_1009c0a0

void FUN_1009c0a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed7c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10034070(param_1,param_2);
  *in_ECX = FriendBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1009c110 FUN_1009c110

void FUN_1009c110(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed7f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = ChatBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1009c170 FUN_1009c170

void FUN_1009c170(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed828;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ChatBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10033f00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009c1d0 FUN_1009c1d0

void FUN_1009c1d0(byte param_1)

{
  void *in_ECX;
  
  FUN_1009c170();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x324);
  }
  return;
}


// ==== 1009c200 FUN_1009c200

void FUN_1009c200(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10034070(param_1,param_2);
  *in_ECX = ChatBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1009c270 FUN_1009c270

void FUN_1009c270(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001c3a0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = ChatFrameCtrl::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1009c2d0 FUN_1009c2d0

void FUN_1009c2d0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ed8b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ChatFrameCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1001c300(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009c330 FUN_1009c330

void FUN_1009c330(byte param_1)

{
  void *in_ECX;
  
  FUN_1009c2d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x350);
  }
  return;
}


// ==== 1009c360 FUN_1009c360

void FUN_1009c360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001c510(param_1,param_2,param_3);
  *in_ECX = ChatFrameCtrl::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1009c3d0 FUN_1009c3d0

void FUN_1009c3d0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ed986;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = ChatWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x282));
  local_4._0_1_ = 2;
  FUN_1009ad60();
  local_4._0_1_ = 4;
  FUN_1009a360();
  local_4._0_1_ = 6;
  FString::FString((FString *)(in_ECX + 0x28f));
  local_4._0_1_ = 7;
  FUN_10096660();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_10096660();
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x27e] = 0;
  in_ECX[0x27f] = 1;
  in_ECX[0x280] = 1;
  in_ECX[0x281] = 0;
  in_ECX[0x2b4] = 0;
  in_ECX[0x2b5] = 0;
  in_ECX[0x2b6] = 0;
  in_ECX[0x2b7] = 0;
  in_ECX[0x2b8] = 0;
  in_ECX[0x2b9] = 0;
  in_ECX[0x2ba] = 0;
  in_ECX[699] = 0;
  in_ECX[700] = 0xa13;
  ExceptionList = local_c;
  return;
}


// ==== 1009c500 FUN_1009c500

void FUN_1009c500(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eda37;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4._0_1_ = (FString)0x2;
  *in_ECX = ChatWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x282));
  local_4._0_1_ = (FString)0x4;
  FUN_1009ad60();
  local_4._0_1_ = (FString)0x6;
  FUN_1009a360();
  local_4._0_1_ = (FString)0x8;
  FString::FString((FString *)(in_ECX + 0x28f));
  local_4._0_1_ = (FString)0x9;
  FUN_10096660();
  local_4._0_1_ = (FString)0xa;
  FUN_10096660();
  local_4 = CONCAT31(local_4._1_3_,0xb);
  in_ECX[0x74] = param_2;
  in_ECX[0x73] = param_1;
  FString::operator=((FString *)(in_ECX + 0x28f),(FString *)&stack0x0000000c);
  FUN_100abce0(&stack0x00000018);
  in_ECX[0x75] = 0;
  in_ECX[0x27e] = 0;
  in_ECX[0x27f] = 1;
  in_ECX[0x281] = 0;
  in_ECX[0x2b4] = 0;
  in_ECX[0x2b5] = 0;
  in_ECX[0x2b6] = 0;
  in_ECX[0x2b7] = 0;
  in_ECX[0x2b9] = 0;
  in_ECX[0x2ba] = 0;
  in_ECX[699] = 0;
  in_ECX[700] = 0xa13;
  iVar1 = (**(code **)**(undefined4 **)GConfig_exref)
                    (&DAT_10252b00,L"MSNHideWarnMsg",GMsnHideWarnMsg_exref,0);
  if (iVar1 == 0) {
    *(undefined4 *)GMsnHideWarnMsg_exref = 0;
  }
  FString::~FString((FString *)&local_4);
  FUN_100abc50();
  ExceptionList = unaff_ESI;
  return;
}


// ==== 1009c6a0 FUN_1009c6a0

void FUN_1009c6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *unaff_EBP;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101edade;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffdc);
  local_4._0_1_ = 1;
  *in_ECX = ChatWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x282));
  local_4._0_1_ = 3;
  FUN_1009ad60();
  local_4._0_1_ = 5;
  FUN_1009a360();
  local_4._0_1_ = 7;
  FString::FString((FString *)(in_ECX + 0x28f));
  local_4._0_1_ = 8;
  FUN_10096660();
  local_4._0_1_ = 9;
  FUN_10096660();
  local_4 = CONCAT31(local_4._1_3_,10);
  in_ECX[0x73] = param_1;
  in_ECX[0x74] = param_2;
  in_ECX[0x75] = param_3;
  in_ECX[0x27e] = 0;
  in_ECX[0x27f] = 1;
  in_ECX[0x281] = 0;
  FUN_100abce0(&stack0x00000010);
  uVar1 = FUN_100adfb0();
  FUN_100abce0(uVar1);
  in_ECX[0x2b4] = 0;
  in_ECX[0x2b5] = 0;
  in_ECX[0x2b6] = 0;
  in_ECX[0x2b7] = 0;
  in_ECX[0x2b9] = 0;
  in_ECX[0x2ba] = 0;
  in_ECX[699] = 0;
  in_ECX[700] = 0xa13;
  iVar2 = (**(code **)**(undefined4 **)GConfig_exref)
                    (&DAT_10252b00,L"MSNHideWarnMsg",GMsnHideWarnMsg_exref,0);
  if (iVar2 == 0) {
    *(undefined4 *)GMsnHideWarnMsg_exref = 0;
  }
  FUN_100abc50();
  ExceptionList = unaff_EBP;
  return;
}


// ==== 1009c830 FUN_1009c830

undefined4 FUN_1009c830(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  int *piVar4;
  UPackage *pUVar5;
  int in_ECX;
  void *pvVar6;
  undefined4 uStack_b8;
  UPackage *pUStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  FName local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101edb34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061b40();
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0xaf4) = uVar1;
  FName::FName(local_28,0);
  UObject::GetTransientPackage();
  uStack_64 = 0x1009c8b2;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1009c360();
  }
  uVar1 = 3;
  *(int *)(in_ECX + 0xad0) = iVar3;
  *(undefined4 *)(in_ECX + 200) = 0xa0d;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa0d;
  (**(code **)(**(int **)(in_ECX + 0xad0) + 0xc0))();
  uStack_64 = *(undefined4 *)(in_ECX + 0xad0);
  uStack_68 = 0x1009c912;
  FUN_10060d40();
  uStack_64 = 0x1009c91e;
  FUN_1005c1e0();
  uStack_64 = 0x1009c92a;
  FName::FName((FName *)&stack0xffffffbc,0);
  uStack_74 = uVar1;
  pUStack_78 = UObject::GetTransientPackage();
  uStack_68 = *(undefined4 *)GError_exref;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_64 = 300;
    uStack_68 = 0x1009c95f;
    piVar4 = (int *)FUN_1009c0a0();
  }
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0x1e;
  uStack_70 = 0xee;
  *(int **)(in_ECX + 0xad8) = piVar4;
  uStack_74 = 0x34;
  pUStack_78 = (UPackage *)0x9;
  (**(code **)(*piVar4 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffa0,0);
  UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1009c200();
  }
  *(int **)(in_ECX + 0xad4) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffff84,0);
  UObject::GetTransientPackage();
  uStack_b8 = 0x1009ca55;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_6c,(ushort *)L"L2UI_CH3.Button.SmallButton2_down");
    FString::FString((FString *)&pUStack_78,(ushort *)L"L2UI_CH3.Button.SmallButton2");
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0xadc) = uVar1;
  if (pUVar2 != (UObject *)0x0) {
    FString::~FString((FString *)&pUStack_78);
    FString::~FString((FString *)&uStack_6c);
  }
  uVar1 = 3;
  *(undefined4 *)(*(int *)(in_ECX + 0xadc) + 0x1cc) = 0xa0c;
  (**(code **)(**(int **)(in_ECX + 0xadc) + 0xc0))();
  uStack_b8 = *(undefined4 *)(in_ECX + 0xadc);
  FUN_10060d40();
  uStack_b8 = 0x1009cb46;
  FUN_1005c1e0();
  uStack_b8 = 0x1009cb56;
  FUN_10003cf0();
  uStack_b8 = 0x1009cb62;
  FName::FName((FName *)&stack0xffffff68,0);
  pUVar5 = UObject::GetTransientPackage();
  uStack_b8 = 0;
  pUVar2 = UObject::StaticAllocateObject(&DAT_10374d50,pUVar5,uVar1,0,0,*(undefined4 *)GError_exref)
  ;
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_b8 = *(undefined4 *)(in_ECX + 0x1d0);
    piVar4 = (int *)FUN_1009ba90();
  }
  uStack_b8 = 0;
  *(int **)(in_ECX + 0xae0) = piVar4;
  (**(code **)(*piVar4 + 0xc0))(0xffffffe5,0x32,0x154,0x105,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0xae0),0x4002);
  FUN_1005c1e0(uVar1);
  pvVar6 = (void *)0x3f6;
  (**(code **)(**(int **)(in_ECX + 0xae0) + 0x164))();
  FName::FName((FName *)&uStack_b8,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_1035d5e0,pUVar5,uStack_b8,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1001a820(0,0,1,0x12c0,0,0);
  }
  *(int *)(in_ECX + 0xae4) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa0e;
  (**(code **)(**(int **)(in_ECX + 0xae4) + 0xc0))(8,0x168,0xef,0x10,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0xae4),2);
  FUN_1005c1e0(uVar1);
  uVar1 = FUN_1003f600(0xa12,3000,0);
  *(undefined4 *)(in_ECX + 0xae8) = uVar1;
  uVar1 = FUN_1003f600(0xa14,8000,0);
  *(undefined4 *)(in_ECX + 0xaec) = uVar1;
  ExceptionList = pvVar6;
  return 1;
}


// ==== 1009ccf0 FUN_1009ccf0

void FUN_1009ccf0(void)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uStack_84;
  undefined1 local_74 [68];
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101edb70;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_18 = in_ECX;
  FUN_100aa630(1);
  piVar1 = (int *)(in_ECX + 0xa14);
  local_24 = 0;
  local_8._0_1_ = 3;
  iVar2 = in_ECX;
  local_30 = piVar1;
  local_2c = piVar1;
  for (local_28 = 0; local_28 < *(int *)(in_ECX + 0xa18); local_28 = local_28 + 1) {
    iVar5 = local_28 * 0x54;
    iVar2 = FUN_10096770(local_74);
    local_8._0_1_ = 4;
    iVar2 = FString::operator==((FString *)(iVar2 + 0x20),(FString *)&stack0x00000024);
    local_8._0_1_ = 3;
    FUN_100abc50();
    if (iVar2 != 0) {
      FUN_1003f610(*(undefined4 *)(*piVar1 + iVar5 + 0xc));
      FUN_1009a440(*piVar1 + 4 + iVar5);
    }
    iVar2 = local_18;
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10098d60();
  uVar7 = 0xffdcdcdc;
  puVar6 = &stack0x00000004;
  puVar3 = FString::operator*((FString *)&stack0x0000004c);
  FUN_10099300(puVar3,puVar6,uVar7);
  if ((*(int *)(iVar2 + 0xa04) == 0) && (*(int *)GMsnHideWarnMsg_exref == 0)) {
    FUN_1009b670();
  }
  uVar7 = 1;
  puVar3 = FString::operator*((FString *)&stack0x0000004c);
  puVar4 = FString::operator*((FString *)&stack0x00000024);
  FUN_10148660(puVar4,puVar3,uVar7);
  local_8 = 0;
  FUN_100abc50();
  local_8 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_10;
  return;
}


// ==== 1009ce53 Catch@1009ce53

void Catch_1009ce53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1009ce67 Catch@1009ce67

void Catch_1009ce67(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ChatWnd::ReceiveInstantMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1009ce90 FUN_1009ce90

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1009ce90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  int in_ECX;
  undefined1 auStack_10ec [68];
  undefined4 uStack_10a8;
  undefined1 *puStack_1080;
  undefined1 *puStack_107c;
  int *piStack_1078;
  int *piStack_1074;
  int iStack_1070;
  undefined4 uStack_106c;
  undefined1 auStack_1068 [84];
  undefined4 uStack_1014;
  ushort auStack_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101edc45;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&puStack_1080;
  ExceptionList = &local_c;
  if ((param_1 == 1) && (iVar3 = (**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))(), iVar3 != 0)) {
    pFVar4 = (FString *)FUN_100a98c0();
    uStack_4 = 0;
    iVar3 = FString::operator==(pFVar4,(ushort *)&DAT_10252c20);
    uStack_4 = 0xffffffff;
    FString::~FString((FString *)&piStack_1078);
    if (iVar3 == 0) {
      FUN_1009ae20();
      uStack_4 = 1;
      puVar5 = (ushort *)(**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))();
      puStack_1080 = &stack0xffffef60;
      uStack_10a8 = 0x1009cf6f;
      FString::FString((FString *)&stack0xffffef60,puVar5);
      uStack_4._1_3_ = (undefined3)((uint)uStack_4 >> 8);
      uStack_4._0_1_ = 1;
      FUN_10096540();
      puStack_1080 = &stack0xffffef60;
      uStack_10a8 = 0x1009cf9c;
      FString::FString((FString *)&stack0xffffef60,(ushort *)L"Arial");
      uStack_4._0_1_ = 1;
      FUN_100965a0();
      puStack_1080 = &stack0xffffef60;
      uStack_1014 = 0;
      uStack_10a8 = 0x1009cfd0;
      FString::FString((FString *)&stack0xffffef60,(ushort *)&DAT_10251e10);
      uStack_4._0_1_ = 1;
      FUN_10096600();
      if (*(int *)(in_ECX + 0x1d4) == 0) {
        piVar1 = *(int **)(in_ECX + 0xae4);
        FUN_100aa590();
        (**(code **)(*piVar1 + 0x1f8))();
        FUN_10099300();
        puStack_1080 = &stack0xffffef60;
        uStack_10a8 = 0x1009d12e;
        FString::FString((FString *)&stack0xffffef60,(FString *)(in_ECX + 0xaac));
        uStack_4._0_1_ = 1;
        iVar3 = FUN_100aa5a0();
        if ((iVar3 == 0) ||
           (iVar3 = FString::operator!=((FString *)(iVar3 + 0x14),(ushort *)&DAT_10251d0c),
           iVar3 == 0)) {
          FString::operator*((FString *)(GL2GameData_exref + 0x41dd0));
          uStack_10a8 = 0x1009d359;
          FUN_1003f630();
          FUN_100982b0();
          (**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))();
          appSprintf(auStack_1010,(ushort *)L"   %s");
          FUN_10099300();
        }
        else {
          if ((*(int *)(in_ECX + 0xa04) == 0) && (*(int *)GMsnHideWarnMsg_exref == 0)) {
            puStack_1080 = (undefined1 *)FUN_10004ed0();
            uStack_4._0_1_ = 8;
            if (puStack_1080 == (undefined1 *)0x0) {
              puVar6 = (undefined1 *)0x0;
            }
            else {
              puVar6 = (undefined1 *)FUN_1009ae20();
            }
            uStack_4._0_1_ = 1;
            puStack_1080 = puVar6;
            _memset(auStack_1010,0,0x1000);
            pFVar4 = (FString *)FUN_10096210();
            uStack_4._0_1_ = 9;
            FString::operator*(pFVar4);
            appSprintf(auStack_1010,(ushort *)&DAT_1022dde0);
            uStack_4._0_1_ = 1;
            FString::~FString((FString *)&piStack_1078);
            puStack_107c = &stack0xffffef60;
            uStack_10a8 = 0x1009d226;
            FString::FString((FString *)&stack0xffffef60,auStack_1010);
            uStack_4._0_1_ = 1;
            FUN_10096540();
            puStack_107c = &stack0xffffef60;
            uStack_10a8 = 0x1009d251;
            FString::FString((FString *)&stack0xffffef60,(ushort *)L"Arial");
            uStack_4._0_1_ = 1;
            FUN_100965a0();
            puStack_107c = &stack0xffffef60;
            *(undefined4 *)(puVar6 + 0x54) = 8000;
            uStack_10a8 = 0x1009d283;
            FString::FString((FString *)&stack0xffffef60,(ushort *)&DAT_10251e10);
            uStack_4._0_1_ = 1;
            FUN_10096600();
            FUN_100d9a30();
            *(undefined4 *)(in_ECX + 0xa04) = 1;
          }
          puStack_107c = (undefined1 *)FUN_10004ed0();
          uStack_4._0_1_ = 0xd;
          if (puStack_107c == (undefined1 *)0x0) {
            puStack_1080 = (undefined1 *)0x0;
          }
          else {
            puStack_1080 = (undefined1 *)FUN_100a9630();
          }
          uStack_4._0_1_ = 1;
          FUN_100d9a30();
          if (*(int *)(in_ECX + 0x1d0) != 0) {
            puStack_107c = &stack0xffffef60;
            uStack_10a8 = 0x1009d316;
            FString::FString((FString *)&stack0xffffef60,(FString *)(in_ECX + 0xaac));
            uStack_4._0_1_ = 1;
            FUN_100a9940();
          }
        }
      }
      else {
        if ((*(int *)(in_ECX + 0xa04) == 0) && (*(int *)GMsnHideWarnMsg_exref == 0)) {
          FUN_1009b670();
        }
        puStack_1080 = auStack_10ec;
        FUN_100a9630(auStack_1068);
        uStack_4._0_1_ = 1;
        FUN_100ae600();
        piVar1 = *(int **)(in_ECX + 0xae4);
        FUN_100aa590();
        (**(code **)(*piVar1 + 0x1f8))();
        FUN_10099300();
        piVar1 = (int *)(in_ECX + 0xa28);
        iStack_1070 = 0;
        uStack_106c = 0;
        uStack_4._0_1_ = 6;
        piStack_1078 = piVar1;
        piStack_1074 = piVar1;
        if (0 < *(int *)(in_ECX + 0xa2c)) {
          do {
            iVar2 = iStack_1070;
            iVar3 = *(int *)(*piVar1 + 0x10 + iStack_1070 * 0x14);
            if (iVar3 != 0) {
              (**(code **)(**(int **)(in_ECX + 0xae4) + 0x1f8))();
              FString::operator*((FString *)(iVar3 + 0x20));
              FUN_10148660();
            }
            iStack_1070 = iVar2 + 1;
          } while (iStack_1070 < *(int *)(in_ECX + 0xa2c));
        }
        uStack_4._0_1_ = 1;
        FUN_100b73f0();
      }
      (**(code **)(**(int **)(in_ECX + 0xae4) + 0x174))();
      uStack_4 = 0xffffffff;
      FUN_100a9760();
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&puStack_1080);
  return;
}


// ==== 1009d400 FUN_1009d400

void FUN_1009d400(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101edc88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = Task::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1009d480 FUN_1009d480

void FUN_1009d480(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101edcb8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = Task::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009d4e0 FUN_1009d4e0

void FUN_1009d4e0(byte param_1)

{
  void *in_ECX;
  
  FUN_1009d480();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e0);
  }
  return;
}


// ==== 1009d510 FUN_1009d510

void FUN_1009d510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101edce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  in_ECX[0x73] = param_1;
  *in_ECX = Task::vftable;
  in_ECX[0x74] = param_2;
  in_ECX[0x75] = param_3;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1009d590 FUN_1009d590

void FUN_1009d590(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101edd18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = TaskBox::vftable;
  in_ECX[0xc1] = 200;
  in_ECX[0xc0] = 0x10;
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1009d610 FUN_1009d610

void FUN_1009d610(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101edd48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = TaskBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10033f00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1009d670 FUN_1009d670

void FUN_1009d670(byte param_1)

{
  void *in_ECX;
  
  FUN_1009d610();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x330);
  }
  return;
}


// ==== 1009d6a0 FUN_1009d6a0

void FUN_1009d6a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101edd78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = TaskBox::vftable;
  in_ECX[0xc1] = param_1;
  in_ECX[0xc0] = param_2;
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1009d720 FUN_1009d720

void FUN_1009d720(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eddbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = TaskWnd::vftable;
  FUN_10099f80();
  in_ECX[0x78] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1009d7a0 FUN_1009d7a0

void FUN_1009d7a0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101eddfe;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = TaskWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_1009a100(uVar1);
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 1009d820 FUN_1009d820

void FUN_1009d820(byte param_1)

{
  void *in_ECX;
  
  FUN_1009d7a0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1f0);
  }
  return;
}


// ==== 1009d850 FUN_1009d850

undefined4 FUN_1009d850(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  wchar_t *pwStack_18;
  int local_4;
  
  local_4 = in_ECX;
  FUN_10061b40();
  pwStack_18 = L"L2UI_CH3.msn6_back1";
  uStack_1c = 0x1009d869;
  uVar1 = FUN_1003f630();
  pwStack_18 = L"L2UI_CH3.msn6_back2";
  *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  uStack_1c = 0x1009d87d;
  uVar1 = FUN_1003f630();
  pwStack_18 = L"L2UI_CH3.msn6_back3";
  *(undefined4 *)(in_ECX + 0x1e8) = uVar1;
  uStack_1c = 0x1009d891;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1ec) = uVar1;
  pwStack_18 = (wchar_t *)0x1009d8a3;
  FName::FName((FName *)&local_4,0);
  pUVar2 = UObject::GetTransientPackage();
  uStack_1c = *(undefined4 *)GError_exref;
  pwStack_18 = (wchar_t *)0x0;
  uStack_20 = 0;
  pUVar3 = UObject::StaticAllocateObject(&DAT_1035db10,pUVar2,local_4,0);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    pwStack_18 = (wchar_t *)0x1;
    uStack_1c = 1;
    uStack_20 = 0x1009d8e3;
    iVar4 = FUN_1001c510();
  }
  pwStack_18 = (wchar_t *)0x0;
  uStack_1c = 0;
  *(int *)(in_ECX + 0xc0) = iVar4;
  uStack_20 = 0x84;
  *(undefined4 *)(iVar4 + 0x1cc) = 0xa11;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))(0,0,0xc);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0xc0),2);
  FUN_1005c1e0(uVar1);
  FName::FName((FName *)&uStack_20,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10376c70,pUVar2,uStack_20,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_1009d6a0(300,6);
  }
  *(int **)(in_ECX + 0x1e0) = piVar5;
  (**(code **)(*piVar5 + 0xc0))(0xe,3,0x9b,0x7e,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e0),2);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 1009d9d0 FUN_1009d9d0

void FUN_1009d9d0(undefined4 param_1,int *param_2,int *param_3)

{
  void *pvVar1;
  int iVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  int *piVar5;
  undefined4 uVar6;
  FString *pFVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  ushort *puStack_30;
  FString local_18 [4];
  undefined1 auStack_14 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ede32;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)&stack0xffffffdc);
  ExceptionList = &local_c;
  puStack_30 = (ushort *)0x1009da02;
  iVar2 = FUN_10099cf0();
  if (iVar2 == 0) {
    puStack_30 = (ushort *)0x1009da17;
    FName::FName((FName *)&param_1,0);
    pUVar3 = UObject::GetTransientPackage();
    uStack_34 = *(undefined4 *)GError_exref;
    puStack_30 = (ushort *)iVar2;
    pUVar4 = UObject::StaticAllocateObject(&DAT_10376740,pUVar3,param_1,0,0);
    if (pUVar4 == (UObject *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      puStack_30 = (ushort *)param_2;
      uStack_34 = uVar6;
      piVar5 = (int *)FUN_1009d510();
    }
    puStack_30 = (ushort *)0x0;
    uStack_34 = 0;
    param_3 = piVar5;
    (**(code **)(*piVar5 + 0xc0))(0,0,0,0);
    uVar6 = FUN_10060d40(piVar5,1);
    FUN_1005c1e0(uVar6);
    FUN_10099ff0(auStack_14,&pvStack_10);
    pFVar7 = (FString *)FUN_100aeab0(&uStack_34);
    uVar10 = 0xffdcdcdc;
    puVar8 = FString::operator*(pFVar7);
    uVar6 = FUN_1003f630(L"L2UI_CH3.Msn.msnicon6",1);
    FUN_10098b90(uVar6,puVar8,piVar5,uVar10);
    FString::~FString((FString *)&uStack_34);
    ExceptionList = pvVar1;
    return;
  }
  puStack_30 = (ushort *)0x1009db0f;
  pFVar7 = (FString *)FUN_100aeab0();
  local_4 = 1;
  puStack_30 = (ushort *)0x1009db20;
  puStack_30 = FString::operator*(pFVar7);
  uStack_34 = 0x1009db2c;
  FUN_10097830();
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  puStack_30 = (ushort *)0x1009db4e;
  iVar9 = (**(code **)(*param_2 + 0xfc))();
  if (iVar9 == 0) {
    *(int **)(iVar2 + 0x1d4) = param_2;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1009dbe0 FUN_1009dbe0

void FUN_1009dbe0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101edebd;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ChatWnd::vftable;
  local_4 = 6;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 5;
  FUN_100abc50(uVar1);
  local_4._0_1_ = 4;
  FUN_100abc50();
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0xa3c));
  local_4._0_1_ = 2;
  FUN_1009a600();
  local_4._0_1_ = 1;
  FUN_1009af10();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10098fe0();
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 1009dcd0 FUN_1009dcd0

void FUN_1009dcd0(byte param_1)

{
  void *in_ECX;
  
  FUN_1009dbe0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xaf8);
  }
  return;
}


// ==== 1009dd30 FUN_1009dd30

bool FUN_1009dd30(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa0c) {
      iVar1 = FUN_1009b440();
      return iVar1 != 0;
    }
    if (param_2 == 0xf0f0) {
      iVar1 = FUN_100961a0();
      return iVar1 != 0;
    }
    if (param_2 == 0xf0f1) {
      iVar1 = FUN_100961c0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa0e) {
      iVar1 = FUN_1009ce90(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1009dde0 FUN_1009dde0

undefined4 FUN_1009dde0(void)

{
  int *in_ECX;
  
  FUN_100b9240();
  (**(code **)(*in_ECX + 0x13c))();
  return 1;
}


// ==== 1009de10 FUN_1009de10

undefined4 FUN_1009de10(void)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  FString aFStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101edee9;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  uStack_1c = 0x1009de44;
  iVar1 = (**(code **)(*(int *)in_ECX[0xb7] + 0x1f8))();
  if (iVar1 != 0) {
    uStack_1c = 1;
    uStack_20 = 0x1009de5a;
    puVar2 = (ushort *)(**(code **)(*(int *)in_ECX[0xb7] + 0x1f8))();
    FString::FString(aFStack_28,puVar2);
    uStack_4 = 0xffffffff;
    FUN_100a99c0();
  }
  uStack_1c = 0x1009de91;
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_c;
  return 1;
}


// ==== 1009deb0 FUN_1009deb0

undefined4 FUN_1009deb0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x13c))();
  return 1;
}


// ==== 1009dec0 FUN_1009dec0

undefined4 FUN_1009dec0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x324) != 0) {
    *(undefined4 *)(in_ECX + 0x324) = 0;
  }
  if (*(int *)(in_ECX + 0x328) != 0) {
    *(undefined4 *)(in_ECX + 0x328) = 0;
  }
  if (*(int *)(in_ECX + 0x32c) != 0) {
    *(undefined4 *)(in_ECX + 0x32c) = 0;
  }
  FUN_1000ebb0();
  return 1;
}


// ==== 1009df00 FUN_1009df00

undefined4 FUN_1009df00(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2e8) != 0) {
    *(undefined4 *)(in_ECX + 0x2e8) = 0;
  }
  if (*(int *)(in_ECX + 0x2ec) != 0) {
    *(undefined4 *)(in_ECX + 0x2ec) = 0;
  }
  if (*(int *)(in_ECX + 0x2f0) != 0) {
    *(undefined4 *)(in_ECX + 0x2f0) = 0;
  }
  if (*(int *)(in_ECX + 0x2f4) != 0) {
    *(undefined4 *)(in_ECX + 0x2f4) = 0;
  }
  if (*(int *)(in_ECX + 0x2f8) != 0) {
    *(undefined4 *)(in_ECX + 0x2f8) = 0;
  }
  FUN_1000ebb0();
  return 1;
}


// ==== 1009df60 FUN_1009df60

undefined4 FUN_1009df60(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 800) != 0) {
    *(undefined4 *)(in_ECX + 800) = 0;
  }
  if (*(int *)(in_ECX + 0x324) != 0) {
    *(undefined4 *)(in_ECX + 0x324) = 0;
  }
  if (*(int *)(in_ECX + 0x328) != 0) {
    *(undefined4 *)(in_ECX + 0x328) = 0;
  }
  FUN_1000ebb0();
  return 1;
}


// ==== 1009dfa0 FUN_1009dfa0

undefined4 FUN_1009dfa0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
  }
  if (*(int *)(in_ECX + 0x2e0) != 0) {
    *(undefined4 *)(in_ECX + 0x2e0) = 0;
  }
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    *(undefined4 *)(in_ECX + 0x2e4) = 0;
  }
  FUN_1000ebb0();
  return 1;
}


// ==== 1009dfe0 FUN_1009dfe0

void FUN_1009dfe0(void)

{
  int in_ECX;
  
  FUN_1005fe50();
                    /* WARNING: Could not recover jumptable at 0x1009dff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0x174))();
  return;
}


// ==== 1009e000 FUN_1009e000

undefined4 FUN_1009e000(void)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101edf19;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  uStack_1c = 0x1009e034;
  iVar1 = (**(code **)(*(int *)in_ECX[0xb7] + 0x1f8))();
  if (iVar1 != 0) {
    uStack_1c = 0x1009e048;
    puVar2 = (ushort *)(**(code **)(*(int *)in_ECX[0xb7] + 0x1f8))();
    FString::FString(aFStack_24,puVar2);
    uStack_4 = 0xffffffff;
    FUN_100a9c00();
  }
  uStack_1c = 0x1009e07f;
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_c;
  return 1;
}


// ==== 1009e0a0 FUN_1009e0a0

undefined4 FUN_1009e0a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
  }
  if (*(int *)(in_ECX + 0x2e0) != 0) {
    *(undefined4 *)(in_ECX + 0x2e0) = 0;
  }
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    *(undefined4 *)(in_ECX + 0x2e4) = 0;
  }
  if (*(int *)(in_ECX + 0x2e8) != 0) {
    *(undefined4 *)(in_ECX + 0x2e8) = 0;
  }
  FUN_1000ebb0();
  return 1;
}


// ==== 1009e0f0 FUN_1009e0f0

undefined4 FUN_1009e0f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2e0) != 0) {
    *(undefined4 *)(in_ECX + 0x2e0) = 0;
  }
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    *(undefined4 *)(in_ECX + 0x2e4) = 0;
  }
  if (*(int *)(in_ECX + 0x2e8) != 0) {
    *(undefined4 *)(in_ECX + 0x2e8) = 0;
  }
  FUN_1000ebb0();
  return 1;
}


// ==== 1009e130 FUN_1009e130

undefined4 FUN_1009e130(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    *(undefined4 *)(in_ECX + 0x2e4) = 0;
  }
  FUN_1000ebb0();
  return 1;
}


// ==== 1009e150 FUN_1009e150

void FUN_1009e150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035a1f0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1009e180 FUN_1009e180

bool FUN_1009e180(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa2d) {
      iVar1 = FUN_1009dde0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa2e) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1009e1f0 FUN_1009e1f0

undefined4 FUN_1009e1f0(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int in_ECX;
  bool bVar4;
  void *pvVar5;
  uint uStack_40;
  undefined4 local_28;
  FString local_24 [4];
  undefined4 uStack_20;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101edfa8;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  FUN_1000eba0();
  uVar1 = FUN_1003f630(L"L2UI_CH3.dialog.system_back");
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  FName::FName((FName *)&local_28,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,local_28,0,0,*(undefined4 *)GError_exref,0);
  bVar4 = pUVar3 == (UObject *)0x0;
  if (bVar4) {
    uVar1 = 0;
  }
  else {
    FString::FString(local_18,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    local_4 = 0;
    FString::FString(local_24,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    local_4 = 1;
    uVar1 = FUN_10006980(local_24,local_18);
  }
  *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
  local_4 = 0;
  if (!bVar4) {
    FString::~FString(local_24);
  }
  local_4 = 0xffffffff;
  if (!bVar4) {
    FString::~FString(local_18);
  }
  pvVar5 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x2dc) + 0x1cc) = 0xa2d;
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))(0x33,0x4b,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2dc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffffbc,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,pvVar5,0,0,*(undefined4 *)GError_exref,0,0);
  bVar4 = pUVar3 == (UObject *)0x0;
  if (bVar4) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_20 = 2;
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_20 = 3;
    uVar1 = FUN_10006980(&stack0xffffffcc,&uStack_40,0);
  }
  *(undefined4 *)(in_ECX + 0x2e0) = uVar1;
  uStack_20 = 2;
  if (!bVar4) {
    FString::~FString((FString *)&stack0xffffffcc);
  }
  uStack_20 = 0xffffffff;
  if (!bVar4) {
    FString::~FString((FString *)&uStack_40);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2e0) + 0x1cc) = 0xa2e;
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0xc0))(0x83,0x4b,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e0),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar5;
  return 1;
}


// ==== 1009e4b0 FUN_1009e4b0

void FUN_1009e4b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uStack_230;
  void *pvStack_21c;
  undefined *puStack_218;
  undefined4 uStack_214;
  ushort auStack_210 [260];
  uint uStack_8;
  
  puStack_218 = &UNK_101edfd0;
  pvStack_21c = ExceptionList;
  uStack_8 = DAT_103554c4 ^ (uint)auStack_210;
  ExceptionList = &pvStack_21c;
  uStack_214 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2e4),0xff,1);
  }
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42614));
  appStrcpy(auStack_210,puVar3);
  uStack_230 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_210,uStack_230,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = pvStack_21c;
  __security_check_cookie(uStack_8 ^ (uint)auStack_210);
  return;
}


// ==== 1009e621 Catch@1009e621

void Catch_1009e621(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1009e635 Catch@1009e635

void Catch_1009e635(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"OfflineConfirmDialog::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1009e660 FUN_1009e660

bool FUN_1009e660(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa21) {
      iVar1 = FUN_1009de10();
      return iVar1 != 0;
    }
    if (param_2 == 0xa22) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1009e6d0 FUN_1009e6d0

undefined4 FUN_1009e6d0(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  uint uVar5;
  void *pvVar6;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  uint uStack_40;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee068;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar5 = 0;
  FUN_1000eba0();
  pwStack_48 = L"L2UI_CH3.dialog.system_back";
  uStack_4c = 0x1009e712;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
  pwStack_48 = L"ⶋ쏔ဢ헿උ쏜ဢᆋ䲋ᠤ㶋쐬ဢ卓卒兓桐헠ဵ\xd7ff쒃蔠瓀匔桓\x96"
  ;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_48 = (wchar_t *)0x0;
    uStack_4c = 0x96;
    uStack_50 = 1;
    uStack_54 = 0;
    uStack_58 = 0;
    pUStack_5c = (UPackage *)0x1009e764;
    iVar3 = FUN_1001a820();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  *(int *)(in_ECX + 0x2dc) = iVar3;
  uStack_50 = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa20;
  uStack_54 = 0x9c;
  uStack_58 = 0x30;
  pUStack_5c = (UPackage *)0x32;
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x2dc));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffbc,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_20 = 0;
    pwStack_48 = (wchar_t *)0x1;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_20 = 1;
    uVar5 = 3;
    pwStack_48 = (wchar_t *)0x3;
    uVar1 = FUN_10006980(&uStack_40,&stack0xffffffcc);
  }
  *(undefined4 *)(in_ECX + 0x2e0) = uVar1;
  uStack_20 = 0;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    pwStack_48 = (wchar_t *)uVar5;
    FString::~FString((FString *)&uStack_40);
  }
  uStack_20 = 0xffffffff;
  if ((uVar5 & 1) != 0) {
    pwStack_48 = (wchar_t *)(uVar5 & 0xfffffffe);
    FString::~FString((FString *)&stack0xffffffcc);
  }
  pvVar6 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x2e0) + 0x1cc) = 0xa21;
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0xc0))(0x33,0x4b,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e0),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffffa0,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pvVar6,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uVar1 = FUN_10006980(&uStack_50,&pUStack_5c,0);
  }
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  if (pUVar2 != (UObject *)0x0) {
    FString::~FString((FString *)&uStack_50);
    FString::~FString((FString *)&pUStack_5c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2e4) + 0x1cc) = 0xa22;
  (**(code **)(**(int **)(in_ECX + 0x2e4) + 0xc0))(0x83,0x4b,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar6;
  return 1;
}


// ==== 1009ea20 FUN_1009ea20

void FUN_1009ea20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x2e8);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41924));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 1009eb70 FUN_1009eb70

undefined4 FUN_1009eb70(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  uint uVar5;
  void *pvVar6;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  uint uStack_40;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee0f8;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar5 = 0;
  FUN_1000eba0();
  pwStack_48 = L"L2UI_CH3.Msn.msn_optionback4";
  uStack_4c = 0x1009ebb2;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x330) = uVar1;
  pwStack_48 = 
  L"ⶋ쏔ဢ헿උ쏜ဢᆋ䲋ᠤ㶋쐬ဢ卓卒兓桐ꇰဵ\xd7ff쒃蔠瓀匑卓⑨\x05謀\xe8c8괯\xfff6˫쀳ͪjj蚉̤"
  ;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_48 = (wchar_t *)0x0;
    uStack_4c = 0;
    uStack_50 = 0x524;
    uStack_54 = 0x1009ec01;
    iVar3 = FUN_10009930();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  *(int *)(in_ECX + 0x324) = iVar3;
  uStack_50 = 0xc;
  *(undefined4 *)(iVar3 + 0x2f8) = 1;
  uStack_54 = 300;
  uStack_58 = 0x3f;
  pUStack_5c = (UPackage *)0xd;
  (**(code **)(**(int **)(in_ECX + 0x324) + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x324));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffbc,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_20 = 0;
    pwStack_48 = (wchar_t *)0x1;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_20 = 1;
    uVar5 = 3;
    pwStack_48 = (wchar_t *)0x3;
    uVar1 = FUN_10006980(&uStack_40,&stack0xffffffcc);
  }
  *(undefined4 *)(in_ECX + 0x328) = uVar1;
  uStack_20 = 0;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    pwStack_48 = (wchar_t *)uVar5;
    FString::~FString((FString *)&uStack_40);
  }
  uStack_20 = 0xffffffff;
  if ((uVar5 & 1) != 0) {
    pwStack_48 = (wchar_t *)(uVar5 & 0xfffffffe);
    FString::~FString((FString *)&stack0xffffffcc);
  }
  pvVar6 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x328) + 0x1cc) = 0xa33;
  (**(code **)(**(int **)(in_ECX + 0x328) + 0xc0))(0x33,0x70,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x328),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffffa0,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pvVar6,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uVar1 = FUN_10006980(&uStack_50,&pUStack_5c,0);
  }
  *(undefined4 *)(in_ECX + 0x32c) = uVar1;
  if (pUVar2 != (UObject *)0x0) {
    FString::~FString((FString *)&uStack_50);
    FString::~FString((FString *)&pUStack_5c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x32c) + 0x1cc) = 0xa34;
  (**(code **)(**(int **)(in_ECX + 0x32c) + 0xc0))(0x83,0x70,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x32c),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar6;
  return 1;
}


// ==== 1009eec0 FUN_1009eec0

void FUN_1009eec0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  undefined1 auStack_218 [4];
  longlong lStack_214;
  ushort auStack_20c [260];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_218;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x330);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41980));
  appStrcpy(auStack_20c,puVar4);
  lStack_214 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_20c,(undefined4)lStack_214,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41a38));
  appStrcpy(auStack_20c,puVar4);
  lStack_214 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x57,0xffdcdcdc,auStack_20c,(undefined4)lStack_214,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_218);
  return;
}


// ==== 1009f080 FUN_1009f080

void FUN_1009f080(void)

{
  int in_ECX;
  
  FUN_1005fe50();
  *(undefined4 *)(*(int *)(in_ECX + 0x324) + 0x2fc) = 0;
  return;
}


// ==== 1009f0a0 FUN_1009f0a0

undefined4 FUN_1009f0a0(void)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  FString aFStack_28 [8];
  undefined4 uStack_20;
  ushort *puStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee129;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  iVar1 = *(int *)(*(int *)(in_ECX[0xb6] + 0x260) + 0x238);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x2e8), iVar1 != 0)) {
    puVar2 = (ushort *)(iVar1 + 0x1810);
    if ((puVar2 == (ushort *)0x0) || (*puVar2 == 0)) {
      puStack_1c = (ushort *)0x1009f15d;
      puStack_1c = FString::operator*((FString *)(GL2GameData_exref + 0x42670));
      uStack_20 = 0x1009f169;
      FUN_100b53a0();
      ExceptionList = local_c;
      return 1;
    }
    puStack_1c = *(ushort **)(in_ECX[0xc9] + 0x2fc);
    FString::FString(aFStack_28,puVar2);
    local_4 = 0xffffffff;
    FUN_100a9ae0();
  }
  puStack_1c = (ushort *)0x1009f135;
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_c;
  return 1;
}


// ==== 1009f170 FUN_1009f170

undefined4 FUN_1009f170(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  uint uVar5;
  void *pvVar6;
  UPackage *pUStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *pwStack_88;
  wchar_t *pwStack_84;
  uint uStack_80;
  UPackage *pUStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  wchar_t *pwStack_6c;
  wchar_t *pwStack_68;
  undefined4 uStack_64;
  FName local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee1b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000eba0();
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2fc) = uVar1;
  FName::FName(local_28,0);
  UObject::GetTransientPackage();
  uStack_64 = 0x1009f1f2;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10009930();
  }
  uVar1 = 3;
  *(int *)(in_ECX + 0x2e8) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa30;
  (**(code **)(**(int **)(in_ECX + 0x2e8) + 0xc0))();
  uStack_64 = *(undefined4 *)(in_ECX + 0x2e8);
  pwStack_68 = L"躋˨";
  FUN_10060d40();
  uStack_64 = 0x1009f25c;
  FUN_1005c1e0();
  uStack_64 = 0;
  pwStack_68 = L"L2UI_CH3.RadioCtrl.radiobutton1";
  pwStack_6c = L"L2UI_CH3.RadioCtrl.radiobutton2";
  uStack_70 = 0x1009f275;
  FUN_10008e60();
  uStack_64 = 0x1009f281;
  FName::FName((FName *)&stack0xffffffbc,0);
  uStack_74 = uVar1;
  pUStack_78 = UObject::GetTransientPackage();
  pwStack_68 = *(wchar_t **)GError_exref;
  uStack_64 = 0;
  pwStack_6c = (wchar_t *)0x0;
  uStack_70 = 0;
  uStack_80 = 0x1009f2a1;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    uStack_64 = 0;
    pwStack_68 = (wchar_t *)0x0;
    pwStack_6c = (wchar_t *)0x403;
    uStack_70 = 0x1009f2ba;
    iVar3 = FUN_10009930();
  }
  uVar1 = 3;
  uStack_64 = 0;
  pwStack_68 = (wchar_t *)0x0;
  *(int *)(in_ECX + 0x2ec) = iVar3;
  pwStack_6c = (wchar_t *)0xc;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa31;
  uStack_70 = 300;
  uStack_74 = 0x45;
  pUStack_78 = (UPackage *)0x2c;
  (**(code **)(**(int **)(in_ECX + 0x2ec) + 0xc0))();
  uStack_80 = *(undefined4 *)(in_ECX + 0x2ec);
  pwStack_84 = L"躋ˬ";
  FUN_10060d40();
  uStack_80 = 0x1009f30b;
  FUN_1005c1e0();
  uStack_80 = 0;
  pwStack_84 = L"L2UI_CH3.RadioCtrl.radiobutton1";
  pwStack_88 = L"L2UI_CH3.RadioCtrl.radiobutton2";
  uStack_8c = 0x1009f324;
  FUN_10008e60();
  uStack_80 = 0x1009f330;
  FName::FName((FName *)&stack0xffffffa0,0);
  uStack_90 = uVar1;
  pUStack_94 = UObject::GetTransientPackage();
  pwStack_84 = *(wchar_t **)GError_exref;
  uStack_80 = 0;
  pwStack_88 = (wchar_t *)0x0;
  uStack_8c = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    uStack_80 = 0;
    pwStack_84 = (wchar_t *)0x0;
    pwStack_88 = (wchar_t *)0x404;
    uStack_8c = 0x1009f369;
    iVar3 = FUN_10009930();
  }
  uVar1 = 3;
  uStack_80 = 0;
  pwStack_84 = (wchar_t *)0x0;
  *(int *)(in_ECX + 0x2f0) = iVar3;
  pwStack_88 = (wchar_t *)0xc;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa32;
  uStack_8c = 200;
  uStack_90 = 0x70;
  pUStack_94 = (UPackage *)0xd;
  (**(code **)(**(int **)(in_ECX + 0x2f0) + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x2f0));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffff84,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pwStack_6c,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_80 = 1;
    FString::FString((FString *)&pUStack_78,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_80 = 3;
    uVar1 = FUN_10006980(&pUStack_78,&pwStack_6c);
  }
  *(undefined4 *)(in_ECX + 0x2f4) = uVar1;
  uVar5 = uStack_80;
  if ((uStack_80 & 2) != 0) {
    uVar5 = uStack_80 & 0xfffffffd;
    uStack_80 = uVar5;
    FString::~FString((FString *)&pUStack_78);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffe;
    uStack_80 = uVar5;
    FString::~FString((FString *)&pwStack_6c);
  }
  pvVar6 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x2f4) + 0x1cc) = 0xa1e;
  (**(code **)(**(int **)(in_ECX + 0x2f4) + 0xc0))(0x84,0x88,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2f4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffff68,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pvVar6,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_94,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_74 = 2;
    FString::FString((FString *)&pwStack_88,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_74 = 3;
    uVar5 = uVar5 | 0xc;
    uVar1 = FUN_10006980(&pwStack_88,&pUStack_94,0);
  }
  *(undefined4 *)(in_ECX + 0x2f8) = uVar1;
  uStack_74 = 2;
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    FString::~FString((FString *)&pwStack_88);
  }
  uStack_74 = 0xffffffff;
  if ((uVar5 & 4) != 0) {
    FString::~FString((FString *)&pUStack_94);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2f8) + 0x1cc) = 0xa1f;
  (**(code **)(**(int **)(in_ECX + 0x2f8) + 0xc0))(0xd4,0x88,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2f8),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar6;
  return 1;
}


// ==== 1009f630 FUN_1009f630

void FUN_1009f630(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *pFVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  ushort *puStack_284;
  undefined4 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 *puStack_260;
  undefined1 *local_23c;
  longlong local_238;
  FString local_230 [12];
  FString local_224 [12];
  ushort auStack_218 [252];
  undefined1 uStack_20;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee234;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_23c;
  ExceptionList = &local_c;
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_101c19e0();
  FUN_101c19e0();
  puStack_260 = *(undefined1 **)(in_ECX + 0x80);
  uStack_264 = 0x1009f6c1;
  FUN_10021df0();
  if (*(int *)(in_ECX + 0x2fc) != 0) {
    local_23c = (undefined1 *)FUN_101c19e0();
    uStack_274 = FUN_101c19e0();
    puStack_260 = local_23c;
    uStack_268 = 0;
    uStack_278 = 0;
    uStack_280 = 0x1009f700;
    uStack_264 = uStack_274;
    FUN_10021a00();
  }
  if (0 < *(int *)(in_ECX + 0x2e0)) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x426cc));
    FString::FString(local_230,puVar3);
    local_4 = 0;
    puStack_260 = &stack0xfffffda4;
    local_238 = CONCAT44(local_238._4_4_,&stack0xfffffda4);
    uStack_264 = 0x1009f747;
    FUN_100abd40();
    local_4._0_1_ = 1;
    local_23c = (undefined1 *)&uStack_268;
    FString::FString((FString *)&uStack_268,(ushort *)&DAT_10251894);
    local_4 = (uint)local_4._1_3_ << 8;
    pFVar4 = (FString *)FString::Substitute(local_230);
    uStack_20 = 3;
    uStack_274 = 0x1009f794;
    FString::operator=((FString *)&stack0xfffffdb4,pFVar4);
    uStack_20 = 0;
    FString::~FString((FString *)&stack0xfffffdc0);
    uStack_280 = 0x1009f7c0;
    FString::FString((FString *)&uStack_278,(FString *)(**(int **)(in_ECX + 0x2dc) + 0x20));
    uStack_20 = 4;
    FString::FString((FString *)&puStack_284,(ushort *)&DAT_10251ab8);
    uStack_20 = 0;
    pFVar4 = (FString *)FString::Substitute((FString *)&stack0xfffffdb4,&stack0xfffffdc0);
    local_4._0_1_ = 6;
    FString::operator=(local_230,pFVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_224);
    FString::operator*(local_230);
    puStack_260 = (undefined1 *)0x1009f839;
    appSprintf(auStack_218,(ushort *)&DAT_1022dde0);
    puStack_260 = (undefined1 *)0x0;
    uStack_264 = 0;
    uStack_268 = 0;
    uStack_274 = 0;
    uStack_278 = 0;
    puStack_284 = auStack_218;
    local_238 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 46.0);
    uStack_280 = (undefined4)local_238;
    FUN_100217a0(0x2e,0x10,0xffdcdcdc);
    puStack_260 = (undefined1 *)0x0;
    uStack_264 = 0;
    uStack_268 = 0;
    local_23c = (undefined1 *)CONCAT22(local_23c._2_2_,in_FPUControlWord);
    uStack_274 = 0;
    uStack_278 = 0;
    local_238 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
    uStack_280 = (undefined4)local_238;
    puStack_284 = (ushort *)0x1009f8d9;
    puStack_284 = FString::operator*((FString *)(GL2GameData_exref + 0x42728));
    FUN_100217a0(0xd,0x5a,0xffdcdcdc);
    local_4 = 0xffffffff;
    FString::~FString(local_230);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_23c);
  return;
}


// ==== 1009f940 FUN_1009f940

void FUN_1009f940(void)

{
  int in_ECX;
  
  FUN_1005fe50();
  *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x2fc) = 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x2ec) + 0x2fc) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x2f0) + 0x2fc) = 1;
  return;
}


// ==== 1009f980 FUN_1009f980

void FUN_1009f980(void)

{
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x2fc) = 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x2ec) + 0x2fc) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x2f0) + 0x2fc) = 1;
  return;
}


// ==== 1009f9b0 FUN_1009f9b0

undefined4 FUN_1009f9b0(void)

{
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x2fc) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x2ec) + 0x2fc) = 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x2f0) + 0x2fc) = 0;
  return 1;
}


// ==== 1009f9e0 FUN_1009f9e0

undefined4 FUN_1009f9e0(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int *piVar3;
  UPackage *pUVar4;
  int in_ECX;
  uint uVar5;
  void *pvVar6;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  uint uStack_40;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee2d8;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar5 = 0;
  FUN_1000eba0();
  pwStack_48 = L"L2UI_CH3.dialog.system_back";
  uStack_4c = 0x1009fa22;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x32c) = uVar1;
  pwStack_48 = 
  L"ⶋ쏔ဢ헿උ쏜ဢᆋ䲋ᠤ㶋쐬ဢ卓卒兓桐걐ဵ\xd7ff쒃蔠瓀謉\xe8c8밗\xfff6˫쀳ͪjjᅪ鱨"
  ;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_1000b680();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  uStack_50 = 0x11;
  uStack_54 = 0x9c;
  *(int **)(in_ECX + 800) = piVar3;
  uStack_58 = 0x30;
  pUStack_5c = (UPackage *)0x32;
  (**(code **)(*piVar3 + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 800));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffbc,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_20 = 0;
    pwStack_48 = (wchar_t *)0x1;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_20 = 1;
    uVar5 = 3;
    pwStack_48 = (wchar_t *)0x3;
    uVar1 = FUN_10006980(&uStack_40,&stack0xffffffcc);
  }
  *(undefined4 *)(in_ECX + 0x324) = uVar1;
  uStack_20 = 0;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    pwStack_48 = (wchar_t *)uVar5;
    FString::~FString((FString *)&uStack_40);
  }
  uStack_20 = 0xffffffff;
  if ((uVar5 & 1) != 0) {
    pwStack_48 = (wchar_t *)(uVar5 & 0xfffffffe);
    FString::~FString((FString *)&stack0xffffffcc);
  }
  pvVar6 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x324) + 0x1cc) = 0xa23;
  (**(code **)(**(int **)(in_ECX + 0x324) + 0xc0))(0x33,0x4b,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x324),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffffa0,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pvVar6,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uVar1 = FUN_10006980(&uStack_50,&pUStack_5c,0);
  }
  *(undefined4 *)(in_ECX + 0x328) = uVar1;
  if (pUVar2 != (UObject *)0x0) {
    FString::~FString((FString *)&uStack_50);
    FString::~FString((FString *)&pUStack_5c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x328) + 0x1cc) = 0xa24;
  (**(code **)(**(int **)(in_ECX + 0x328) + 0xc0))(0x83,0x4b,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x328),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar6;
  return 1;
}


// ==== 1009fd20 FUN_1009fd20

void FUN_1009fd20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  undefined1 auStack_218 [4];
  longlong lStack_214;
  ushort auStack_20c [260];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_218;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x32c);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41b4c));
  appStrcpy(auStack_20c,puVar4);
  lStack_214 = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_20c,(undefined4)lStack_214,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_218);
  return;
}


// ==== 1009fe70 FUN_1009fe70

undefined4 FUN_1009fe70(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (-1 < *(int *)(in_ECX[200] + 0x324)) {
    FUN_1000ac70();
    FUN_100abb60(in_ECX + 0xb7);
    local_4 = 0xffffffff;
    FUN_100a9b70();
  }
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_c;
  return 1;
}


// ==== 1009ff10 FUN_1009ff10

bool FUN_1009ff10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa26) {
      iVar1 = FUN_1009e000();
      return iVar1 != 0;
    }
    if (param_2 == 0xa27) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1009ff80 FUN_1009ff80

undefined4 FUN_1009ff80(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  uint uVar5;
  void *pvVar6;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  uint uStack_40;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee398;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar5 = 0;
  FUN_1000eba0();
  pwStack_48 = L"L2UI_CH3.dialog.system_back";
  uStack_4c = 0x1009ffc2;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
  pwStack_48 = L"ⶋ쏔ဢ헿උ쏜ဢᆋ䲋ᠤ㶋쐬ဢ卓卒兓桐헠ဵ\xd7ff쒃蔠瓀匔桓\x96"
  ;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_48 = (wchar_t *)0x0;
    uStack_4c = 0x96;
    uStack_50 = 1;
    uStack_54 = 0;
    uStack_58 = 0;
    pUStack_5c = (UPackage *)0x100a0014;
    iVar3 = FUN_1001a820();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  *(int *)(in_ECX + 0x2dc) = iVar3;
  uStack_50 = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa25;
  uStack_54 = 0x9c;
  uStack_58 = 0x30;
  pUStack_5c = (UPackage *)0x32;
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x2dc));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffbc,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_20 = 0;
    pwStack_48 = (wchar_t *)0x1;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_20 = 1;
    uVar5 = 3;
    pwStack_48 = (wchar_t *)0x3;
    uVar1 = FUN_10006980(&uStack_40,&stack0xffffffcc);
  }
  *(undefined4 *)(in_ECX + 0x2e0) = uVar1;
  uStack_20 = 0;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    pwStack_48 = (wchar_t *)uVar5;
    FString::~FString((FString *)&uStack_40);
  }
  uStack_20 = 0xffffffff;
  if ((uVar5 & 1) != 0) {
    pwStack_48 = (wchar_t *)(uVar5 & 0xfffffffe);
    FString::~FString((FString *)&stack0xffffffcc);
  }
  pvVar6 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x2e0) + 0x1cc) = 0xa26;
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0xc0))(0x33,0x4b,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e0),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffffa0,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pvVar6,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uVar1 = FUN_10006980(&uStack_50,&pUStack_5c,0);
  }
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  if (pUVar2 != (UObject *)0x0) {
    FString::~FString((FString *)&uStack_50);
    FString::~FString((FString *)&pUStack_5c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2e4) + 0x1cc) = 0xa27;
  (**(code **)(**(int **)(in_ECX + 0x2e4) + 0xc0))(0x83,0x4b,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar6;
  return 1;
}


// ==== 100a02d0 FUN_100a02d0

void FUN_100a02d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x2e8);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41ba8));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 100a0420 FUN_100a0420

undefined4 FUN_100a0420(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int *piVar3;
  int iVar4;
  UPackage *pUVar5;
  int in_ECX;
  uint uVar6;
  void *pvVar7;
  UPackage *pUStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  undefined4 local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000eba0();
  pwStack_48 = L"L2UI_CH3.dialog.system_back";
  uStack_4c = 0x100a0464;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2ec) = uVar1;
  pwStack_48 = 
  L"ⶋ쏔ဢ헿උ쏜ဢᆋ䲋ᠤᶋ쐬ဢjj橒樀儀桐걐ဵ폿쒃蔠瓀謉\xe8c8뇐\xfff6˫쀳ͪjjᅪ乪蚉˜"
  ;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  uStack_64 = 0x100a04a2;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_1000b680();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  uStack_50 = 0x11;
  uStack_54 = 0x4e;
  *(int **)(in_ECX + 0x2dc) = piVar3;
  uStack_58 = 0x30;
  pUStack_5c = (UPackage *)0x32;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_64 = *(undefined4 *)(in_ECX + 0x2dc);
  uStack_68 = 0x100a04e4;
  FUN_10060d40();
  uStack_64 = 0x100a04f0;
  FUN_1005c1e0();
  uStack_64 = 0x100a04fc;
  FName::FName((FName *)&stack0xffffffbc,0);
  uStack_74 = uVar1;
  pUStack_78 = UObject::GetTransientPackage();
  uStack_68 = *(undefined4 *)GError_exref;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    uStack_64 = 0;
    uStack_68 = 0x96;
    uStack_6c = 1;
    uStack_70 = 0;
    uStack_74 = 0;
    pUStack_78 = (UPackage *)0x100a0539;
    iVar4 = FUN_1001a820();
  }
  uVar1 = 3;
  uStack_64 = 0;
  uStack_68 = 0;
  *(int *)(in_ECX + 0x2e0) = iVar4;
  uStack_6c = 0x11;
  *(undefined4 *)(iVar4 + 0x1cc) = 0xa28;
  uStack_70 = 0x4e;
  uStack_74 = 0x30;
  pUStack_78 = (UPackage *)0x87;
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e0));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffa0,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_64 = 1;
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_64 = 3;
    uVar1 = FUN_10006980(&pUStack_5c,&uStack_50);
  }
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  if ((uStack_64 & 2) != 0) {
    uStack_64 = uStack_64 & 0xfffffffd;
    FString::~FString((FString *)&pUStack_5c);
  }
  if ((uStack_64 & 1) != 0) {
    uStack_64 = uStack_64 & 0xfffffffe;
    FString::~FString((FString *)&uStack_50);
  }
  pvVar7 = (void *)0x3;
  uVar6 = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x2e4) + 0x1cc) = 0xa29;
  (**(code **)(**(int **)(in_ECX + 0x2e4) + 0xc0))(0x33,0x4b,0x4c,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffff84,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,pvVar7,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_78,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_58 = 2;
    uVar6 = uVar6 | 4;
    FString::FString((FString *)&uStack_6c,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_58 = 3;
    uVar6 = uVar6 | 8;
    uVar1 = FUN_10006980(&uStack_6c,&pUStack_78,0);
  }
  *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
  uStack_58 = 2;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    FString::~FString((FString *)&uStack_6c);
  }
  uStack_58 = 0xffffffff;
  if ((uVar6 & 4) != 0) {
    FString::~FString((FString *)&pUStack_78);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x1cc) = 0xa2a;
  (**(code **)(**(int **)(in_ECX + 0x2e8) + 0xc0))(0x83,0x4b,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e8),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar7;
  return 1;
}


// ==== 100a07f0 FUN_100a07f0

void FUN_100a07f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x2ec);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41c04));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 12.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 100a0940 FUN_100a0940

undefined4 FUN_100a0940(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int *in_ECX;
  FString aFStack_28 [4];
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee459;
  local_c = ExceptionList;
  uStack_1c = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  iVar1 = *(int *)(in_ECX[0xb7] + 0x324);
  if (-1 < iVar1) {
    iStack_20 = 0x100a0985;
    iVar2 = (**(code **)(*(int *)in_ECX[0xb8] + 0x1f8))();
    if (iVar2 != 0) {
      uStack_24 = 0x100a0995;
      iStack_20 = iVar1;
      uVar3 = FUN_1000ac70();
      iStack_20 = 0x100a09a7;
      puVar4 = (ushort *)(**(code **)(*(int *)in_ECX[0xb8] + 0x1f8))();
      FString::FString(aFStack_28,puVar4);
      uStack_4 = 0xffffffff;
      FUN_100a9c90(uVar3);
    }
  }
  iStack_20 = 0x100a09df;
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_c;
  return 1;
}


// ==== 100a0a00 FUN_100a0a00

undefined4 FUN_100a0a00(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int *piVar3;
  UPackage *pUVar4;
  int in_ECX;
  uint uVar5;
  void *pvVar6;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  uint uStack_40;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee4e8;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar5 = 0;
  FUN_1000eba0();
  pwStack_48 = L"L2UI_CH3.dialog.system_back";
  uStack_4c = 0x100a0a42;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2ec) = uVar1;
  pwStack_48 = 
  L"ⶋ쏔ဢ헿උ쏜ဢᆋ䲋ᠤ㶋쐬ဢ卓卒兓桐걐ဵ\xd7ff쒃蔠瓀謉\xe8c8꯷\xfff6˫쀳ͪjjᅪ鱨"
  ;
  FName::FName((FName *)local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_4c = *(undefined4 *)GError_exref;
  pwStack_48 = (wchar_t *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28[0];
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_1000b680();
  }
  uVar1 = 3;
  pwStack_48 = (wchar_t *)0x0;
  uStack_4c = 0;
  uStack_50 = 0x11;
  uStack_54 = 0x9c;
  *(int **)(in_ECX + 0x2e0) = piVar3;
  uStack_58 = 0x30;
  pUStack_5c = (UPackage *)0x32;
  (**(code **)(*piVar3 + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e0));
  FUN_1005c1e0();
  FName::FName((FName *)&stack0xffffffbc,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,uVar1,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    uStack_20 = 0;
    pwStack_48 = (wchar_t *)0x1;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uStack_20 = 1;
    uVar5 = 3;
    pwStack_48 = (wchar_t *)0x3;
    uVar1 = FUN_10006980(&uStack_40,&stack0xffffffcc);
  }
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  uStack_20 = 0;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    pwStack_48 = (wchar_t *)uVar5;
    FString::~FString((FString *)&uStack_40);
  }
  uStack_20 = 0xffffffff;
  if ((uVar5 & 1) != 0) {
    pwStack_48 = (wchar_t *)(uVar5 & 0xfffffffe);
    FString::~FString((FString *)&stack0xffffffcc);
  }
  pvVar6 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x2e4) + 0x1cc) = 0xa2b;
  (**(code **)(**(int **)(in_ECX + 0x2e4) + 0xc0))(0x33,0x4b,0x4c,0x17,0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  FName::FName((FName *)&stack0xffffffa0,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,pvVar6,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    uVar1 = FUN_10006980(&uStack_50,&pUStack_5c,0);
  }
  *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
  if (pUVar2 != (UObject *)0x0) {
    FString::~FString((FString *)&uStack_50);
    FString::~FString((FString *)&pUStack_5c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x1cc) = 0xa2c;
  (**(code **)(**(int **)(in_ECX + 0x2e8) + 0xc0))(0x83,0x4b,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e8),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8d);
  ExceptionList = pvVar6;
  return 1;
}


// ==== 100a0d40 FUN_100a0d40

void FUN_100a0d40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  undefined1 auStack_810 [4];
  longlong lStack_80c;
  ushort auStack_804 [1024];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)auStack_810;
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x2ec);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x41c60));
  appStrcpy(auStack_804,puVar4);
  lStack_80c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
  FUN_100217a0(0xb,0x10,0xffdcdcdc,auStack_804,(undefined4)lStack_80c,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  __security_check_cookie(uStack_4 ^ (uint)auStack_810);
  return;
}


// ==== 100a0e90 FUN_100a0e90

undefined4 FUN_100a0e90(void)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  int *in_ECX;
  
  if (-1 < *(int *)(in_ECX[0xb8] + 0x324)) {
    uVar1 = FUN_1000ac70(*(int *)(in_ECX[0xb8] + 0x324));
    iVar2 = FUN_100c4fc0(uVar1);
    if (0 < *(int *)(iVar2 + 0x2864)) {
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x42bd4));
      FUN_100b53a0(puVar3);
      return 1;
    }
    FUN_100a9c80(uVar1);
  }
  (**(code **)(*in_ECX + 0x13c))();
  return 1;
}


// ==== 100a0f10 FUN_100a0f10

bool FUN_100a0f10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0xa2f)) {
    iVar1 = FUN_1009deb0();
    return iVar1 != 0;
  }
  return false;
}


// ==== 100a0f70 FUN_100a0f70

undefined4 FUN_100a0f70(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int in_ECX;
  bool bVar4;
  void *local_28;
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee544;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000eba0(DAT_103554c4 ^ (uint)&stack0xffffffc8);
  uVar1 = FUN_1003f630(L"L2UI_CH3.dialog.system_back",1);
  *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
  FName::FName((FName *)&local_28,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,local_28,0,0,*(undefined4 *)GError_exref,0,0);
  bVar4 = pUVar3 == (UObject *)0x0;
  if (bVar4) {
    uVar1 = 0;
  }
  else {
    FString::FString(local_18,(ushort *)L"L2UI_CH3.Button.btn1_normalon");
    local_4 = 0;
    FString::FString(local_24,(ushort *)L"L2UI_CH3.Button.btn1_normal");
    local_4 = 1;
    uVar1 = FUN_10006980(local_24,local_18,0);
  }
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  local_4 = 0;
  if (!bVar4) {
    FString::~FString(local_24);
  }
  local_4 = 0xffffffff;
  if (!bVar4) {
    FString::~FString(local_18);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2e4) + 0x1cc) = 0xa2f;
  (**(code **)(**(int **)(in_ECX + 0x2e4) + 0xc0))(0x5a,0x4b,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  ExceptionList = local_28;
  return 1;
}


// ==== 100a1100 FUN_100a1100

undefined4 FUN_100a1100(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  iVar3 = *(int *)(in_ECX + 0x2e8);
  if (iVar3 != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,iVar3,0xff,1);
  }
  iVar3 = FString::Len((FString *)(in_ECX + 0x2d8));
  if (0 < iVar3) {
    uVar13 = 0xffffffff;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = 0;
    local_8 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 22.0);
    puVar4 = FString::operator*((FString *)(in_ECX + 0x2d8));
    FUN_100217a0(0xb,0x10,0xffdcdcdc,puVar4,local_8,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10
                 ,uVar11,uVar12,uVar13);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 100a1220 FUN_100a1220

void FUN_100a1220(int *param_1)

{
  undefined4 *puVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee569;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar2 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (undefined4 *)FUN_100c56a0(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 100a12b0 FUN_100a12b0

bool FUN_100a12b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa33) {
      iVar1 = FUN_1009f0a0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa34) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100a1320 FUN_100a1320

void FUN_100a1320(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_1000ecf0();
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x2e0)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x2dc) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_100abc50();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x2e0));
  }
  FArray::Empty((FArray *)(in_ECX + 0x2dc),4,0);
  return;
}


// ==== 100a1380 FUN_100a1380

undefined4 FUN_100a1380(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 uStack_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee5a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0 < in_ECX[0xb8]) {
    iVar1 = *(int *)in_ECX[0xb7];
    if (iVar1 != 0) {
      if (*(int *)(in_ECX[0xba] + 0x2fc) == 0) {
        FString::FString((FString *)&uStack_30,(FString *)(iVar1 + 0x20));
      }
      else {
        FString::FString((FString *)&uStack_30,(FString *)(iVar1 + 0x20));
      }
      local_4 = 0xffffffff;
      FUN_100a99c0();
      FUN_100abc50();
      (**(code **)(**(int **)GMalloc_exref + 8))();
    }
    if (in_ECX[0xb8] < 0) {
      uStack_30 = 0x100a1458;
      appFailAssert("Index<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
    }
    if (in_ECX[0xb8] < 1) {
      uStack_30 = 0x100a1472;
      appFailAssert("Index+Count<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
    }
    uStack_30 = 0x100a1483;
    FArray::Remove((FArray *)(in_ECX + 0xb7),0,1,4);
  }
  if (in_ECX[0xb8] == 0) {
    (**(code **)(*in_ECX + 0x13c))();
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 100a14b0 FUN_100a14b0

undefined4 FUN_100a14b0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[0xb8];
  if (0 < iVar1) {
    iVar1 = *(int *)in_ECX[0xb7];
    if (iVar1 != 0) {
      FUN_100abc50();
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    }
    if (in_ECX[0xb8] < 0) {
      appFailAssert("Index<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
    }
    if (in_ECX[0xb8] < 1) {
      appFailAssert("Index+Count<=ArrayNum",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
    }
    FArray::Remove((FArray *)(in_ECX + 0xb7),0,1,4);
    iVar1 = in_ECX[0xb8];
  }
  if (iVar1 == 0) {
    (**(code **)(*in_ECX + 0x13c))();
  }
  return 1;
}


// ==== 100a1550 FUN_100a1550

void FUN_100a1550(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101ee5d3;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x2e0)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x2dc) + iVar4 * 4);
      if ((iVar2 != 0) &&
         (iVar2 = FString::operator==((FString *)(iVar2 + 0x20),(FString *)&stack0x00000024),
         iVar2 != 0)) goto LAB_100a160a;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x2e0));
  }
  iVar4 = (**(code **)**(undefined4 **)GMalloc_exref)(0x44,&DAT_1022f8a0,uVar1);
  local_4._0_1_ = 1;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100abb60(&stack0x00000004);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar4 = FArray::Add((FArray *)(in_ECX + 0x2dc),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x2dc) + iVar4 * 4) = uVar3;
LAB_100a160a:
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100a1630 FUN_100a1630

bool FUN_100a1630(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa23) {
      iVar1 = FUN_1009fe70();
      return iVar1 != 0;
    }
    if (param_2 == 0xa24) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100a16a0 FUN_100a16a0

bool FUN_100a16a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa29) {
      iVar1 = FUN_100a0940();
      return iVar1 != 0;
    }
    if (param_2 == 0xa2a) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100a1710 FUN_100a1710

bool FUN_100a1710(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa2b) {
      iVar1 = FUN_100a0e90();
      return iVar1 != 0;
    }
    if (param_2 == 0xa2c) {
      iVar1 = FUN_1009deb0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100a1780 FUN_100a1780

void FUN_100a1780(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ee5f9;
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


// ==== 100a1820 FUN_100a1820

void FUN_100a1820(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ee629;
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


// ==== 100a18c0 FUN_100a18c0

bool FUN_100a18c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa30) {
      iVar1 = FUN_1009f980();
      return iVar1 != 0;
    }
    if (param_2 == 0xa31) {
      iVar1 = FUN_1009f9b0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa32) {
      iVar1 = FUN_1009f980();
      return iVar1 != 0;
    }
    if (param_2 == 0xa1e) {
      iVar1 = FUN_100a1380();
      return iVar1 != 0;
    }
    if (param_2 == 0xa1f) {
      iVar1 = FUN_100a14b0();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100a1990 FUN_100a1990

void FUN_100a1990(void)

{
  undefined4 uVar1;
  FString *this;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1005fe50(DAT_103554c4 ^ (uint)&stack0xffffffdc);
  (**(code **)(**(int **)(in_ECX + 800) + 0x174))();
  FUN_100aa580();
  uVar1 = FUN_100abe40();
  FUN_100a1220(uVar1);
  uStack_4 = 0;
  iVar3 = 0;
  if (0 < iStack_14) {
    do {
      if (*(int *)(iStack_18 + iVar3 * 4) != 0) {
        uVar1 = FUN_100adbe0();
        this = (FString *)FUN_100adb70(uVar1);
        puVar2 = FString::operator*(this);
        FUN_1000b480(puVar2,uVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_14);
  }
  uStack_4 = 0xffffffff;
  FUN_100a1780();
  ExceptionList = local_c;
  return;
}


// ==== 100a1a60 FUN_100a1a60

void FUN_100a1a60(void)

{
  undefined4 uVar1;
  FString *this;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1005fe50(DAT_103554c4 ^ (uint)&stack0xffffffdc);
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0x174))();
  FUN_100aa580();
  uVar1 = FUN_100abe40();
  FUN_100a1220(uVar1);
  uStack_4 = 0;
  iVar3 = 0;
  if (0 < iStack_14) {
    do {
      if (*(int *)(iStack_18 + iVar3 * 4) != 0) {
        uVar1 = FUN_100adbe0();
        this = (FString *)FUN_100adb70(uVar1);
        puVar2 = FString::operator*(this);
        FUN_1000b480(puVar2,uVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_14);
  }
  uStack_4 = 0xffffffff;
  FUN_100a1780();
  ExceptionList = local_c;
  return;
}


// ==== 100a1b40 FUN_100a1b40

void FUN_100a1b40(void)

{
  undefined4 uVar1;
  FString *this;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ee6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1005fe50(DAT_103554c4 ^ (uint)&stack0xffffffdc);
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0x174))();
  FUN_100aa580();
  uVar1 = FUN_100abe40();
  FUN_100a1220(uVar1);
  uStack_4 = 0;
  iVar3 = 0;
  if (0 < iStack_14) {
    do {
      if (*(int *)(iStack_18 + iVar3 * 4) != 0) {
        uVar1 = FUN_100adbe0();
        this = (FString *)FUN_100adb70(uVar1);
        puVar2 = FString::operator*(this);
        FUN_1000b480(puVar2,uVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_14);
  }
  uStack_4 = 0xffffffff;
  FUN_100a1780();
  ExceptionList = local_c;
  return;
}


// ==== 100a1c10 FUN_100a1c10

void FUN_100a1c10(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee6e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = OfflineConfirmDialog::vftable;
  in_ECX[0xb6] = param_1;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a1c90 FUN_100a1c90

void FUN_100a1c90(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ee718;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = OfflineConfirmDialog::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a1cf0 FUN_100a1cf0

void FUN_100a1cf0(byte param_1)

{
  void *in_ECX;
  
  FUN_100a1c90();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2e8);
  }
  return;
}


// ==== 100a1d20 FUN_100a1d20

void FUN_100a1d20(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = AddFriendDialog::vftable;
  in_ECX[0xb6] = param_1;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a1da0 FUN_100a1da0

void FUN_100a1da0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ee778;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AddFriendDialog::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a1e00 FUN_100a1e00

void FUN_100a1e00(byte param_1)

{
  void *in_ECX;
  
  FUN_100a1da0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2ec);
  }
  return;
}


// ==== 100a1e30 FUN_100a1e30

void FUN_100a1e30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee7b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = RemoveFriendDialog::vftable;
  FUN_10096660();
  in_ECX[0xb6] = param_1;
  in_ECX[0xb7] = param_2;
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  in_ECX[0xcc] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a1ed0 FUN_100a1ed0

void FUN_100a1ed0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ee7f6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = RemoveFriendDialog::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_100abc50(uVar1);
  local_4 = 0xffffffff;
  FUN_100121d0();
  ExceptionList = local_c;
  return;
}


// ==== 100a1f40 FUN_100a1f40

void FUN_100a1f40(byte param_1)

{
  void *in_ECX;
  
  FUN_100a1ed0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x334);
  }
  return;
}


// ==== 100a1f70 FUN_100a1f70

void FUN_100a1f70(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee83f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = AddedConfirmDialog::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xb7));
  in_ECX[0xb6] = param_1;
  in_ECX[0xba] = 0;
  in_ECX[0xbb] = 0;
  in_ECX[0xbc] = 0;
  in_ECX[0xbd] = 0;
  in_ECX[0xbe] = 0;
  in_ECX[0xbf] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a2010 FUN_100a2010

void FUN_100a2010(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ee876;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AddedConfirmDialog::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_100a1820(uVar1);
  local_4 = 0xffffffff;
  FUN_100121d0();
  ExceptionList = local_c;
  return;
}


// ==== 100a2080 FUN_100a2080

void FUN_100a2080(byte param_1)

{
  void *in_ECX;
  
  FUN_100a2010();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x300);
  }
  return;
}


// ==== 100a20b0 FUN_100a20b0

void FUN_100a20b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee8b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = MoveGroupDialog::vftable;
  FUN_10096660();
  in_ECX[0xb6] = param_1;
  in_ECX[200] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a2140 FUN_100a2140

void FUN_100a2140(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ee8f6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = MoveGroupDialog::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_100abc50(uVar1);
  local_4 = 0xffffffff;
  FUN_100121d0();
  ExceptionList = local_c;
  return;
}


// ==== 100a21b0 FUN_100a21b0

void FUN_100a21b0(byte param_1)

{
  void *in_ECX;
  
  FUN_100a2140();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x330);
  }
  return;
}


// ==== 100a21e0 FUN_100a21e0

void FUN_100a21e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = AddGroupDialog::vftable;
  in_ECX[0xb6] = param_1;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a2260 FUN_100a2260

void FUN_100a2260(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ee958;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AddGroupDialog::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a22c0 FUN_100a22c0

void FUN_100a22c0(byte param_1)

{
  void *in_ECX;
  
  FUN_100a2260();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2ec);
  }
  return;
}


// ==== 100a22f0 FUN_100a22f0

void FUN_100a22f0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = RenameGroupDialog::vftable;
  in_ECX[0xb6] = param_1;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  in_ECX[0xbb] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a2370 FUN_100a2370

void FUN_100a2370(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ee9b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = RenameGroupDialog::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a23d0 FUN_100a23d0

void FUN_100a23d0(byte param_1)

{
  void *in_ECX;
  
  FUN_100a2370();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2f0);
  }
  return;
}


// ==== 100a2400 FUN_100a2400

void FUN_100a2400(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ee9e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = RemoveGroupDialog::vftable;
  in_ECX[0xb6] = param_1;
  in_ECX[0xb7] = param_2;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  in_ECX[0xbb] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a2490 FUN_100a2490

void FUN_100a2490(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eea18;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = RemoveGroupDialog::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a24f0 FUN_100a24f0

void FUN_100a24f0(byte param_1)

{
  void *in_ECX;
  
  FUN_100a2490();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2f0);
  }
  return;
}


// ==== 100a2520 FUN_100a2520

void FUN_100a2520(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eea57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = MessageDialog::vftable;
  FString::FString((FString *)(in_ECX + 0xb6));
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a25a0 FUN_100a25a0

void FUN_100a25a0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101eea97;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = MessageDialog::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x2d8));
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a2610 FUN_100a2610

void FUN_100a2610(byte param_1)

{
  void *in_ECX;
  
  FUN_100a25a0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2ec);
  }
  return;
}


// ==== 100a26f0 FUN_100a26f0

undefined4 FUN_100a26f0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x68))(0x501,0xf0f1,0);
    return 1;
  }
  return 0;
}


// ==== 100a2730 FUN_100a2730

undefined4 FUN_100a2730(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    *(undefined4 *)(in_ECX + 0x1e4) = 0;
  }
  if (*(int *)(in_ECX + 0x1e8) != 0) {
    *(undefined4 *)(in_ECX + 0x1e8) = 0;
  }
  if (*(int *)(in_ECX + 0x1ec) != 0) {
    *(undefined4 *)(in_ECX + 0x1ec) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100a2770 FUN_100a2770

void FUN_100a2770(void)

{
  int in_ECX;
  
  FUN_1005fe50();
  *(undefined4 *)(in_ECX + 0x1e0) = 0;
  return;
}


// ==== 100a2790 FUN_100a2790

void FUN_100a2790(void)

{
  int in_ECX;
  
  FUN_1005ff00();
  *(undefined4 *)(in_ECX + 0x1e0) = 1;
  return;
}


// ==== 100a27b0 FUN_100a27b0

undefined4 FUN_100a27b0(void)

{
  int in_ECX;
  
  FUN_1005ff00();
  FUN_100ba430(in_ECX);
  *(undefined4 *)(in_ECX + 0x1e0) = 1;
  return 0;
}


// ==== 100a27e0 FUN_100a27e0

void FUN_100a27e0(void)

{
  FUN_1001af50();
  return;
}


// ==== 100a27f0 FUN_100a27f0

void FUN_100a27f0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1dc) = 0;
  (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x174))();
                    /* WARNING: Could not recover jumptable at 0x100a281c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x174))();
  return;
}


// ==== 100a2820 FUN_100a2820

undefined4 FUN_100a2820(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f600(0xa73,1000,0);
  *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  return 1;
}


// ==== 100a2850 FUN_100a2850

undefined4 FUN_100a2850(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0xa73) {
    *(uint *)(in_ECX + 0x1e0) = (uint)(*(int *)(in_ECX + 0x1e0) == 0);
  }
  return 1;
}


// ==== 100a2880 FUN_100a2880

undefined4 FUN_100a2880(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x1e4));
    *(undefined4 *)(in_ECX + 0x1e4) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100a28b0 FUN_100a28b0

undefined4 FUN_100a28b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  param_1 = param_1 - *(int *)(in_ECX + 0x80);
  param_2 = param_2 - *(int *)(in_ECX + 0x84);
  if ((((param_1 < 0) || (iVar1 = FUN_101c19e0(), iVar1 < param_1)) || (param_2 < 0)) ||
     (iVar2 = FUN_101c19e0(), iVar2 < param_2)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(in_ECX + 0x308);
  if (iVar2 < *(int *)(in_ECX + 0x300) + iVar2) {
    iVar3 = 0;
    while (iVar2 < *(int *)(in_ECX + 0x30c)) {
      if (((param_1 < iVar1) && (iVar3 <= param_2)) && (param_2 < iVar3 + 0x15)) {
        *(int *)(in_ECX + 0x310) = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x15;
      if (*(int *)(in_ECX + 0x300) + *(int *)(in_ECX + 0x308) <= iVar2) {
        return *(undefined4 *)(in_ECX + 0x310);
      }
    }
  }
  return *(undefined4 *)(in_ECX + 0x310);
}


// ==== 100a2970 FUN_100a2970

undefined4 FUN_100a2970(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
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
  undefined4 local_24;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eeac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  iVar3 = *(int *)(in_ECX + 0x308);
  local_1c = 0;
  for (; ((iVar3 < *(int *)(in_ECX + 0x300) + *(int *)(in_ECX + 0x308) &&
          (iVar3 <= *(int *)(in_ECX + 0x30c))) && (iVar3 < *(int *)(in_ECX + 0x2ec)));
      iVar3 = iVar3 + 1) {
    uVar1 = *(undefined4 *)(**(int **)(*(int *)(in_ECX + 0x2e8) + iVar3 * 4) + 0xc);
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    local_24 = (undefined4)(longlong)ROUND((*(float *)(in_ECX + 0x88) - 16.0) - 6.0);
    uVar2 = FUN_1004f5c0(0);
    FUN_100217a0(*(undefined4 *)(in_ECX + 0x314),
                 (*(int *)(in_ECX + 0x31c) + 0xc) * local_1c + *(int *)(in_ECX + 0x318),uVar1,uVar2,
                 local_24,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
    local_1c = local_1c + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100a2ae5 Catch@100a2ae5

void Catch_100a2ae5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100a2af9 Catch@100a2af9

void Catch_100a2af9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2ChatBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a2b20 FUN_100a2b20

undefined4 FUN_100a2b20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
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
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1f0) != 0) {
    FUN_10021a00(0,0x14,0x100,0x17d,0,0,0x100,0x17d,*(int *)(in_ECX + 0x1f0),0xff,1);
  }
  iVar3 = FString::Len((FString *)(in_ECX + 0x1d0));
  if (0 < iVar3) {
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar4 = FString::operator*((FString *)(in_ECX + 0x1d0));
    FUN_100217a0(0xb,0x36,0xffdcdcdc,puVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                 uVar12,uVar13,uVar14);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 100a2c10 FUN_100a2c10

void FUN_100a2c10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 *puVar6;
  undefined4 uVar7;
  int local_228;
  int local_224;
  void *local_21c;
  undefined1 *puStack_218;
  int local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  puStack_218 = &LAB_101eeae8;
  local_21c = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_210;
  ExceptionList = &local_21c;
  local_214 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar4 = FUN_101c19e0();
  uVar5 = FUN_101c19e0(uVar4);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar5,uVar4);
  local_228 = *(int *)(in_ECX + 0x308);
  local_224 = 0;
  for (; ((local_228 < *(int *)(in_ECX + 0x300) + *(int *)(in_ECX + 0x308) &&
          (local_228 <= *(int *)(in_ECX + 0x30c))) && (local_228 < *(int *)(in_ECX + 0x2ec)));
      local_228 = local_228 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x2e8) + local_228 * 4);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    local_214._0_1_ = 1;
    if (local_228 == *(int *)(in_ECX + 0x310)) {
      uVar4 = *(undefined4 *)(in_ECX + 0x328);
    }
    else if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1dc) == 0)) {
      uVar4 = *(undefined4 *)(in_ECX + 0x324);
    }
    else if (*(int *)(iVar3 + 0x1e0) == 0) {
      uVar4 = *(undefined4 *)(in_ECX + 0x324);
    }
    else {
      uVar4 = *(undefined4 *)(in_ECX + 0x32c);
    }
    FUN_10021a00(0,local_224 * 0x15,0x8c,0x15,0,0,0x8c,0x15,uVar4,0xff,1);
    uVar7 = 0xc;
    uVar5 = 0x74;
    puVar6 = local_210;
    uVar4 = FUN_1004f5c0(0);
    FUN_100c72c0(uVar4,puVar6,uVar5,uVar7);
    FUN_100217a0(*(int *)(in_ECX + 0x314) + 3,*(int *)(in_ECX + 0x318) + local_224 * 0x15,
                 *(undefined4 *)(iVar2 + 0xc),local_210,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_214 = (uint)local_214._1_3_ << 8;
    FUN_100325f0();
    local_224 = local_224 + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}


// ==== 100a2e2a Catch@100a2e2a

void Catch_100a2e2a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100a2e3e Catch@100a2e3e

void Catch_100a2e3e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2TaskBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a2e60 FUN_100a2e60

undefined4 FUN_100a2e60(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 0x1f8))(param_2 & 0xffff,param_2 >> 0x10);
  iVar1 = in_ECX[0xc4];
  if ((((iVar1 == iVar3) && (-1 < iVar1)) && (iVar1 < in_ECX[0xbb])) &&
     ((iVar1 = *(int *)(*(int *)(in_ECX[0xba] + iVar1 * 4) + 4), iVar1 != 0 &&
      (piVar2 = *(int **)(iVar1 + 0x1d8), piVar2 != (int *)0x0)))) {
    *(undefined4 *)(iVar1 + 0x1dc) = 0;
    (**(code **)(*piVar2 + 0x138))();
    (**(code **)(*piVar2 + 0x78))();
  }
  in_ECX[0xc4] = -1;
  return 1;
}


// ==== 100a2ef0 FUN_100a2ef0

void FUN_100a2ef0(undefined4 param_1,undefined4 param_2,int param_3)

{
  FArray *this;
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  undefined2 in_FPUControlWord;
  int *local_228;
  longlong local_224;
  float local_21c;
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101eeb48;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_228;
  ExceptionList = &local_c;
  local_228 = (int *)CONCAT22(local_228._2_2_,in_FPUControlWord);
  local_21c = (float)(-(param_3 != 0) & 0xc);
  local_224 = (longlong)ROUND(((*(float *)(in_ECX + 0x88) - 16.0) - 6.0) - local_21c);
  puVar2 = (ushort *)
           FUN_100223d0(param_1,(undefined4)local_224,0,DAT_103554c4 ^ (uint)&stack0xfffffdc8);
  if (puVar2 != (ushort *)0x0) {
    if (param_3 == 0) {
      appStrcpy(local_218,puVar2);
    }
    else {
      appSprintf(local_218,(ushort *)L"   %s");
    }
    iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
    local_c = (void *)0x0;
    if (iVar3 != 0) {
      FUN_100322c0();
    }
    local_c = (void *)0xffffffff;
    iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
    local_224 = CONCAT44(local_224._4_4_,iVar3);
    uStack_4 = 1;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_1004f780(local_218);
    }
    uStack_4 = 0xffffffff;
    *local_228 = iVar3;
    *(undefined4 *)(iVar3 + 0xc) = param_2;
    if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
      iVar3 = *(int *)(in_ECX + 0x30c) + 1;
      *(int *)(in_ECX + 0x30c) = iVar3;
      if (*(int *)(in_ECX + 0x300) < iVar3) {
        *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
      }
    }
    else {
      piVar1 = (int *)**(undefined4 **)(in_ECX + 0x2e8);
      iVar3 = *piVar1;
      if (iVar3 != 0) {
        FUN_1004f7b0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar3);
        *piVar1 = 0;
      }
      if (*(int *)(in_ECX + 0x2ec) < 0) {
        appFailAssert("Index<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204)
        ;
      }
      if (*(int *)(in_ECX + 0x2ec) < 1) {
        appFailAssert("Index+Count<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205)
        ;
      }
      FArray::Remove((FArray *)(in_ECX + 0x2e8),0,1,4);
    }
    this = (FArray *)(in_ECX + 0x2e8);
    iVar3 = FArray::Add(this,1,4);
    *(int **)(*(int *)this + iVar3 * 4) = local_228;
    FUN_100324e0();
    local_228 = (int *)CONCAT22(local_228._2_2_,in_FPUControlWord);
    local_224 = (longlong)ROUND(((*(float *)(in_ECX + 0x88) - 16.0) - 6.0) - local_21c);
    puVar2 = (ushort *)FUN_10022850((undefined4)local_224,0);
    while (puVar2 != (ushort *)0x0) {
      if (param_3 == 0) {
        appStrcpy(local_218,puVar2);
      }
      else {
        appSprintf(local_218,(ushort *)L"   %s");
      }
      iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
      local_c = (void *)0x2;
      if (iVar3 != 0) {
        FUN_100322c0();
      }
      local_c = (void *)0xffffffff;
      iVar3 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
      local_224 = CONCAT44(local_224._4_4_,iVar3);
      uStack_4 = 3;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_1004f780(local_218);
      }
      uStack_4 = 0xffffffff;
      *local_228 = iVar3;
      *(undefined4 *)(iVar3 + 0xc) = param_2;
      if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
        iVar3 = *(int *)(in_ECX + 0x30c) + 1;
        *(int *)(in_ECX + 0x30c) = iVar3;
        if (*(int *)(in_ECX + 0x300) < iVar3) {
          *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
        }
      }
      else {
        piVar1 = (int *)**(undefined4 **)this;
        iVar3 = *piVar1;
        if (iVar3 != 0) {
          FUN_1004f7b0();
          (**(code **)(**(int **)GMalloc_exref + 8))(iVar3);
          *piVar1 = 0;
        }
        if (*(int *)(in_ECX + 0x2ec) < 0) {
          appFailAssert("Index<=ArrayNum",
                        "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                        0x204);
        }
        if (*(int *)(in_ECX + 0x2ec) < 1) {
          appFailAssert("Index+Count<=ArrayNum",
                        "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                        0x205);
        }
        FArray::Remove(this,0,1,4);
      }
      iVar3 = FArray::Add(this,1,4);
      *(int **)(*(int *)this + iVar3 * 4) = local_228;
      FUN_100324e0();
      local_228 = (int *)CONCAT22(local_228._2_2_,in_FPUControlWord);
      local_224 = (longlong)ROUND(((*(float *)(in_ECX + 0x88) - 16.0) - 6.0) - local_21c);
      puVar2 = (ushort *)FUN_10022850((undefined4)local_224,0);
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_228);
  return;
}


// ==== 100a3370 FUN_100a3370

void FUN_100a3370(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101eeb96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                      (0x10,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffdc);
    local_c = (void *)0x0;
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_100322c0();
    }
    local_c = (void *)0xffffffff;
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
    uStack_4 = 1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_1004f780(param_1);
    }
    uStack_4 = 0xffffffff;
    *piVar2 = iVar1;
    piVar2[1] = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    if (*(int *)(in_ECX + 0x30c) < *(int *)(in_ECX + 0x304)) {
      iVar1 = *(int *)(in_ECX + 0x30c) + 1;
      *(int *)(in_ECX + 0x30c) = iVar1;
      piStack_14 = piVar2;
      if (*(int *)(in_ECX + 0x300) < iVar1) {
        *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + 1;
      }
    }
    else {
      piVar2 = (int *)**(undefined4 **)(in_ECX + 0x2e8);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_1004f7b0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
        *piVar2 = 0;
      }
      if (*(int *)(in_ECX + 0x2ec) < 0) {
        appFailAssert("Index<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204)
        ;
      }
      if (*(int *)(in_ECX + 0x2ec) < 1) {
        appFailAssert("Index+Count<=ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205)
        ;
      }
      FArray::Remove((FArray *)(in_ECX + 0x2e8),0,1,4);
    }
    iVar1 = FArray::Add((FArray *)(in_ECX + 0x2e8),1,4);
    *(int **)(*(int *)(in_ECX + 0x2e8) + iVar1 * 4) = piStack_14;
  }
  ExceptionList = local_c;
  return;
}


// ==== 100a3510 FUN_100a3510

void FUN_100a3510(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x2ec)) {
    piVar2 = *(int **)(in_ECX + 0x2e8);
    while (param_1 != *(int *)(*piVar2 + 4)) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(in_ECX + 0x2ec) <= iVar1) {
        return;
      }
    }
    FUN_1013d680(iVar1,1);
    if (0 < *(int *)(in_ECX + 0x30c)) {
      *(int *)(in_ECX + 0x30c) = *(int *)(in_ECX + 0x30c) + -1;
    }
    if (0 < *(int *)(in_ECX + 0x308)) {
      *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x308) + -1;
    }
  }
  return;
}


// ==== 100a3580 FUN_100a3580

int FUN_100a3580(int *param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = in_ECX[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0xc;
    do {
      if (*(int *)(iVar1 + 4 + *in_ECX) == *param_1) {
        FUN_10042d90(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          in_ECX[4] = in_ECX[4] / 2;
        } while (in_ECX[1] * 2 + 8 < in_ECX[4]);
      }
      FUN_10097b10();
    }
  }
  return iVar2;
}


// ==== 100a3600 FUN_100a3600

void FUN_100a3600(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eebc9;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100a36a0 FUN_100a36a0

void FUN_100a36a0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  FString aFStack_858 [4];
  undefined4 uStack_854;
  FString local_830 [12];
  FString local_824 [12];
  undefined1 *local_818;
  undefined1 *local_814;
  ushort auStack_810 [1024];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eec20;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_830;
  ExceptionList = &local_c;
  if ((param_1 == (ushort *)0x0) || (*param_1 == 0)) {
    FUN_100a2ef0();
  }
  else {
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x41d74));
    FString::FString(local_824,puVar1);
    local_4 = 0;
    local_818 = &stack0xfffff7b4;
    uStack_854 = 0x100a3734;
    FString::FString((FString *)&stack0xfffff7b4,param_1);
    local_4._0_1_ = 1;
    local_814 = aFStack_858;
    FString::FString(aFStack_858,(ushort *)&DAT_10251894);
    local_4 = (uint)local_4._1_3_ << 8;
    FString::Substitute(local_824,local_830);
    local_4 = CONCAT31(local_4._1_3_,3);
    iVar2 = FString::operator==(local_824,local_830);
    if (iVar2 != 0) {
      FString::operator=(local_830,param_1);
    }
    FString::operator*(local_830);
    appSprintf(auStack_810,(ushort *)&DAT_1022dde0);
    FUN_100a2ef0();
    FUN_100a2ef0();
    local_4 = local_4 & 0xffffff00;
    FString::~FString(local_830);
    local_4 = 0xffffffff;
    FString::~FString(local_824);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_830);
  return;
}


// ==== 100a3840 FUN_100a3840

void FUN_100a3840(int param_1)

{
  ushort *puVar1;
  FString *this;
  ushort *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101eec62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if (param_1 < 0x94) {
    if (param_1 == 0x93) {
      this = (FString *)(GL2GameData_exref + 0x42784);
      goto LAB_100a38e4;
    }
    if (param_1 != 0) {
      if (param_1 != 0x91) goto LAB_100a38fd;
      this = (FString *)(GL2GameData_exref + 0x4283c);
      goto LAB_100a38e4;
    }
    uVar3 = 0xffdcdcdc;
    puVar1 = FString::operator*((FString *)&stack0x00000014);
    puVar2 = FString::operator*((FString *)&stack0x00000008);
  }
  else {
    if (param_1 == 0x26c) {
      this = (FString *)(GL2GameData_exref + 0x42898);
    }
    else {
      if (param_1 != 0x437) goto LAB_100a38fd;
      this = (FString *)(GL2GameData_exref + 0x427e0);
    }
LAB_100a38e4:
    uVar3 = 0xffe37171;
    puVar1 = FString::operator*(this);
    puVar2 = (ushort *)0x0;
  }
  FUN_100a36a0(puVar2,puVar1,uVar3);
LAB_100a38fd:
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)&stack0x00000008);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000014);
  ExceptionList = local_c;
  return;
}


// ==== 100a3940 FUN_100a3940

void FUN_100a3940(int param_1)

{
  int iVar1;
  ushort *puVar2;
  User *this;
  int in_ECX;
  FString aFStack_85c [4];
  undefined4 uStack_858;
  undefined1 *puStack_838;
  undefined1 *puStack_834;
  ushort auStack_830 [1040];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101eeca4;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&puStack_838;
  ExceptionList = &local_c;
  if (param_1 != 1) goto LAB_100a3aee;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
  if (iVar1 == 0) goto LAB_100a3aee;
  puStack_838 = &stack0xfffff7b0;
  uStack_858 = 0x100a39b7;
  FString::FString((FString *)&stack0xfffff7b0,(FString *)(in_ECX + 0x1d0));
  uStack_4 = 0xffffffff;
  iVar1 = FUN_100b1bf0();
  if (iVar1 == 0) {
LAB_100a3a7e:
    FString::operator*((FString *)(GL2GameData_exref + 0x41dd0));
    FUN_100a36a0();
    (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
    appSprintf(auStack_830,(ushort *)L"   %s");
LAB_100a3ad3:
    FUN_100a36a0();
  }
  else {
    iVar1 = FUN_100a4fa0();
    if (iVar1 == 0) goto LAB_100a3a7e;
    puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
    puStack_838 = &stack0xfffff7b0;
    uStack_858 = 0x100a3a0f;
    FString::FString((FString *)&stack0xfffff7b0,puVar2);
    uStack_4 = 1;
    puStack_834 = aFStack_85c;
    FString::FString(aFStack_85c,(FString *)(in_ECX + 0x1d0));
    uStack_4 = 0xffffffff;
    FUN_100b1b40();
    this = (User *)FUN_1014dd00();
    if (this != (User *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
      User::GetName(this);
      goto LAB_100a3ad3;
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x174))();
LAB_100a3aee:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&puStack_838);
  return;
}


// ==== 100a3b20 FUN_100a3b20

undefined4 FUN_100a3b20(void)

{
  int in_ECX;
  
  FArray::Empty((FArray *)(in_ECX + 0x1cc),0xc,0);
  *(undefined4 *)(in_ECX + 0x1dc) = 8;
  FUN_10097b10();
  return 1;
}


// ==== 100a3b50 FUN_100a3b50

int FUN_100a3b50(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eecf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = 0;
  local_4 = 1;
  if (0 < *(int *)(in_ECX + 0x1d0)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x1cc) + 8 + iVar5 * 0xc);
      puVar2 = FString::operator*((FString *)&stack0x00000004);
      puVar3 = FString::operator*((FString *)(iVar1 + 0x1cc));
      iVar4 = appStrcmp(puVar3,puVar2);
      if (iVar4 == 0) {
        local_4 = 0xffffffff;
        FString::~FString((FString *)&stack0x00000004);
        ExceptionList = local_c;
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x1d0));
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 100a3c20 FUN_100a3c20

void FUN_100a3c20(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eed18;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x1d0)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x1cc) + 8 + iVar3 * 0xc);
      if (iVar1 != 0) {
        FUN_100a3510(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x1d0));
  }
  local_4 = 0xffffffff;
  FArray::Empty((FArray *)(in_ECX + 0x1cc),0xc,0);
  *(undefined4 *)(in_ECX + 0x1dc) = 8;
  FUN_10097b10(uVar2);
  ExceptionList = local_c;
  return;
}


// ==== 100a3cd0 FUN_100a3cd0

void FUN_100a3cd0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eed51;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_10097b10(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a3d40 FUN_100a3d40

void FUN_100a3d40(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eed78;
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
  FUN_100a3600();
  ExceptionList = local_c;
  return;
}


// ==== 100a3dc0 FUN_100a3dc0

bool FUN_100a3dc0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xf0f0) {
      iVar1 = FUN_100a2790();
      return iVar1 != 0;
    }
    if (param_2 == 0xf0f1) {
      iVar1 = FUN_100a27b0();
      return iVar1 != 0;
    }
    if (param_2 == 0xa71) {
      iVar1 = FUN_100a3940(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 100a3e50 FUN_100a3e50

void FUN_100a3e50(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eeda8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100a3d40(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100a3ea0 FUN_100a3ea0

void FUN_100a3ea0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eedd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = L2ChatBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 100a3f00 FUN_100a3f00

void FUN_100a3f00(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eee08;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2ChatBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10033f00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a3f60 FUN_100a3f60

void FUN_100a3f60(byte param_1)

{
  void *in_ECX;
  
  FUN_100a3f00();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x324);
  }
  return;
}


// ==== 100a3f90 FUN_100a3f90

void FUN_100a3f90(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eee38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10034070(param_1,param_2);
  *in_ECX = L2ChatBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 100a4000 FUN_100a4000

void FUN_100a4000(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eee68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001c3a0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = L2ChatFrameCtrl::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 100a4060 FUN_100a4060

void FUN_100a4060(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eee98;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2ChatFrameCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1001c300(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a40c0 FUN_100a40c0

void FUN_100a40c0(byte param_1)

{
  void *in_ECX;
  
  FUN_100a4060();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x350);
  }
  return;
}


// ==== 100a40f0 FUN_100a40f0

void FUN_100a40f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eeec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001c510(param_1,param_2,param_3);
  *in_ECX = L2ChatFrameCtrl::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 100a4160 FUN_100a4160

void FUN_100a4160(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eef07;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = L2ChatWnd::vftable;
  FString::FString((FString *)(in_ECX + 0x74));
  in_ECX[0x73] = 0;
  in_ECX[0x77] = 1;
  in_ECX[0x78] = 1;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a41f0 FUN_100a41f0

void FUN_100a41f0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101eef47;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2ChatWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x1d0));
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a4260 FUN_100a4260

void FUN_100a4260(byte param_1)

{
  void *in_ECX;
  
  FUN_100a41f0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,500);
  }
  return;
}


// ==== 100a4290 FUN_100a4290

void FUN_100a4290(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101eef90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4._0_1_ = 1;
  *in_ECX = L2ChatWnd::vftable;
  FString::FString((FString *)(in_ECX + 0x74));
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0x73] = param_1;
  FString::operator=((FString *)(in_ECX + 0x74),(FString *)&stack0x00000008);
  in_ECX[0x77] = 1;
  in_ECX[0x78] = 1;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


// ==== 100a4350 FUN_100a4350

undefined4 FUN_100a4350(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int *piVar5;
  int in_ECX;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  wchar_t *pwStack_18;
  FName local_4 [4];
  
  FUN_10061b40();
  pwStack_18 = L"L2UI_CH3.msn_back3";
  uStack_1c = 0x100a4369;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1f0) = uVar1;
  pwStack_18 = 
  L"㶋쏔ဢ\xd7ffඋ쏜ဢᆋ䲋తᶋ쐬ဢjj橒樀儀桐့ꪰ폿쒃蔠瓀樏樀樀謁\xe8c8ﴵ\xffff˫쀳ͪjj蚉Ǥ"
  ;
  FName::FName(local_4,0);
  UObject::GetTransientPackage();
  uStack_1c = *(undefined4 *)GError_exref;
  pwStack_18 = (wchar_t *)0x0;
  uStack_20 = 0;
  uStack_34 = 0x100a43a7;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_18 = (wchar_t *)0x0;
    uStack_1c = 1;
    uStack_20 = 0x100a43bb;
    iVar3 = FUN_100a40f0();
  }
  pwStack_18 = (wchar_t *)0x0;
  uStack_1c = 0;
  *(int *)(in_ECX + 0x1e4) = iVar3;
  *(undefined4 *)(in_ECX + 200) = 0xa70;
  uStack_20 = 0x14;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa70;
  (**(code **)(**(int **)(in_ECX + 0x1e4) + 0xc0))();
  uStack_34 = *(undefined4 *)(in_ECX + 0x1e4);
  uStack_38 = 0x100a4407;
  FUN_10060d40();
  uStack_34 = 0x100a4413;
  FUN_1005c1e0();
  uStack_34 = 0x100a441f;
  FName::FName((FName *)&uStack_20,0);
  pUVar4 = UObject::GetTransientPackage();
  uStack_38 = *(undefined4 *)GError_exref;
  uStack_34 = 0;
  uStack_3c = 0;
  pUVar2 = UObject::StaticAllocateObject(&DAT_1037a580,pUVar4,uStack_20,0);
  if (pUVar2 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uStack_34 = 200;
    uStack_38 = 0x100a4454;
    piVar5 = (int *)FUN_100a3f90();
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0xfc;
  *(int **)(in_ECX + 0x1e8) = piVar5;
  (**(code **)(*piVar5 + 0xc0))(9,0x60,0xee);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e8),2);
  FUN_1005c1e0(uVar1);
  FName::FName((FName *)&uStack_3c,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_1035d5e0,pUVar4,uStack_3c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1001a820(0,0,1,0x12c0,0,0);
  }
  *(int *)(in_ECX + 0x1ec) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xa71;
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xc0))(8,0x168,0xef,0x10,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1ec),2);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 100a4550 FUN_100a4550

void FUN_100a4550(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101eefc7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = L2Task::vftable;
  FString::FString((FString *)(in_ECX + 0x73));
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a45d0 FUN_100a45d0

void FUN_100a45d0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ef007;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2Task::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x1cc));
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a4640 FUN_100a4640

void FUN_100a4640(byte param_1)

{
  void *in_ECX;
  
  FUN_100a45d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e8);
  }
  return;
}


// ==== 100a4670 FUN_100a4670

void FUN_100a4670(void)

{
  undefined4 *in_ECX;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ef050;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4._0_1_ = 1;
  *in_ECX = L2Task::vftable;
  FString::FString((FString *)(in_ECX + 0x73));
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::operator=((FString *)(in_ECX + 0x73),(FString *)&stack0x00000004);
  in_ECX[0x76] = in_stack_00000010;
  in_ECX[0x77] = in_stack_00000014;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a4730 FUN_100a4730

void FUN_100a4730(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = L2TaskBox::vftable;
  in_ECX[0xc1] = 200;
  in_ECX[0xc0] = 0x10;
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a47b0 FUN_100a47b0

void FUN_100a47b0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ef0a8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2TaskBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10033f00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a4810 FUN_100a4810

void FUN_100a4810(byte param_1)

{
  void *in_ECX;
  
  FUN_100a47b0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x330);
  }
  return;
}


// ==== 100a4840 FUN_100a4840

void FUN_100a4840(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef0d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = L2TaskBox::vftable;
  in_ECX[0xc1] = param_1;
  in_ECX[0xc0] = param_2;
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a48c0 FUN_100a48c0

void FUN_100a48c0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef11e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = L2TaskWnd::vftable;
  FUN_100a3cd0();
  in_ECX[0x78] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a4940 FUN_100a4940

void FUN_100a4940(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ef15e;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = L2TaskWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_100a3d40(uVar1);
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 100a49c0 FUN_100a49c0

void FUN_100a49c0(byte param_1)

{
  void *in_ECX;
  
  FUN_100a4940();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1f0);
  }
  return;
}


// ==== 100a49f0 FUN_100a49f0

undefined4 FUN_100a49f0(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  wchar_t *pwStack_18;
  int local_4;
  
  local_4 = in_ECX;
  FUN_10061b40();
  pwStack_18 = L"L2UI_CH3.msn6_back1";
  uStack_1c = 0x100a4a09;
  uVar1 = FUN_1003f630();
  pwStack_18 = L"L2UI_CH3.msn6_back2";
  *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  uStack_1c = 0x100a4a1d;
  uVar1 = FUN_1003f630();
  pwStack_18 = L"L2UI_CH3.msn6_back3";
  *(undefined4 *)(in_ECX + 0x1e8) = uVar1;
  uStack_1c = 0x100a4a31;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1ec) = uVar1;
  pwStack_18 = (wchar_t *)0x100a4a43;
  FName::FName((FName *)&local_4,0);
  pUVar2 = UObject::GetTransientPackage();
  uStack_1c = *(undefined4 *)GError_exref;
  pwStack_18 = (wchar_t *)0x0;
  uStack_20 = 0;
  pUVar3 = UObject::StaticAllocateObject(&DAT_1035db10,pUVar2,local_4,0);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    pwStack_18 = (wchar_t *)0x1;
    uStack_1c = 1;
    uStack_20 = 0x100a4a83;
    iVar4 = FUN_1001c510();
  }
  pwStack_18 = (wchar_t *)0x0;
  uStack_1c = 0;
  *(int *)(in_ECX + 0xc0) = iVar4;
  uStack_20 = 0x84;
  *(undefined4 *)(iVar4 + 0x1cc) = 0xa72;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))(0,0,0xc);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0xc0),2);
  FUN_1005c1e0(uVar1);
  FName::FName((FName *)&uStack_20,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_1037ba40,pUVar2,uStack_20,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_100a4840(300,6);
  }
  *(int **)(in_ECX + 0x1e0) = piVar5;
  (**(code **)(*piVar5 + 0xc0))(0xe,3,0x9b,0x7e,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e0),2);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 100a4b70 FUN_100a4b70

void FUN_100a4b70(int *param_1)

{
  int iVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  int in_ECX;
  undefined4 unaff_EBX;
  void **in_stack_00000014;
  void *pvStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  uint uStack_20;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ef19b;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  local_10 = (undefined1 *)&uStack_2c;
  pvStack_34 = (void *)0x100a4bb0;
  FString::FString((FString *)&uStack_2c,(FString *)&stack0x00000008);
  local_4 = local_4 & 0xffffff00;
  iVar1 = FUN_100a3b50();
  if (iVar1 == 0) {
    piStack_28 = (int *)0x100a4bd5;
    FName::FName((FName *)&local_10,0);
    pUVar2 = UObject::GetTransientPackage();
    uStack_2c = *(undefined4 *)GError_exref;
    piStack_28 = (int *)0x0;
    pvStack_34 = (void *)0x0;
    pUVar3 = UObject::StaticAllocateObject(&DAT_1037b510,pUVar2,local_10);
    if (pUVar3 == (UObject *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piStack_28 = param_1;
      in_stack_00000014 = &pvStack_34;
      FString::FString((FString *)&pvStack_34,(FString *)&stack0x00000008);
      local_4 = local_4 & 0xffffff00;
      piVar4 = (int *)FUN_100a4670();
    }
    piStack_28 = (int *)0x0;
    uStack_2c = 0;
    pvStack_34 = (void *)0x0;
    in_stack_00000014 = (void **)piVar4;
    (**(code **)(*piVar4 + 0xc0))(0,0);
    uVar5 = FUN_10060d40(piVar4,1);
    FUN_1005c1e0(uVar5);
    FUN_10099ff0(&stack0xffffffe8,&puStack_8);
    iVar1 = **(int **)(in_ECX + 0x1e0);
    uVar5 = 0xffdcdcdc;
    puVar6 = FString::operator*((FString *)&stack0xffffffec);
    (**(code **)(iVar1 + 0x1fc))(puVar6,piVar4,uVar5);
  }
  else {
    piStack_28 = (int *)0x100a4cac;
    iVar7 = (**(code **)(*param_1 + 0xfc))();
    if (iVar7 == 0) {
      *(undefined4 *)(iVar1 + 0x1dc) = unaff_EBX;
    }
  }
  uStack_2c = 0xffffffff;
  FString::~FString((FString *)&uStack_20);
  ExceptionList = pvStack_34;
  return;
}


// ==== 100a4d50 FUN_100a4d50

void FUN_100a4d50(FString *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ef1c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString(in_ECX);
  local_8 = 1;
  FString::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  ExceptionList = local_10;
  return;
}


// ==== 100a4dcc Catch@100a4dcc

void Catch_100a4dcc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a4de0 Catch@100a4de0

void Catch_100a4de0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::L2Friend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a4e00 FUN_100a4e00

void FUN_100a4e00(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}


// ==== 100a4e53 Catch@100a4e53

void Catch_100a4e53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a4e67 Catch@100a4e67

void Catch_100a4e67(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::SetDBId");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a4e90 FUN_100a4e90

undefined4 FUN_100a4e90(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 100a4ed7 Catch@100a4ed7

void Catch_100a4ed7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a4eeb Catch@100a4eeb

void Catch_100a4eeb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::GetDBId");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a4f10 FUN_100a4f10

void FUN_100a4f10(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}


// ==== 100a4f63 Catch@100a4f63

void Catch_100a4f63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a4f77 Catch@100a4f77

void Catch_100a4f77(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::SetStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a4fa0 FUN_100a4fa0

undefined4 FUN_100a4fa0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 100a4fe7 Catch@100a4fe7

void Catch_100a4fe7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a4ffb Catch@100a4ffb

void Catch_100a4ffb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::GetStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a5020 FUN_100a5020

void FUN_100a5020(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}


// ==== 100a5073 Catch@100a5073

void Catch_100a5073(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a5087 Catch@100a5087

void Catch_100a5087(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::SetServerId");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a50b0 FUN_100a50b0

undefined4 FUN_100a50b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 100a50f7 Catch@100a50f7

void Catch_100a50f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a510b Catch@100a510b

void Catch_100a510b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::GetServerId");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a5130 FUN_100a5130

void FUN_100a5130(ushort *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ef2b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=(in_ECX,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100a5187 Catch@100a5187

void Catch_100a5187(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a519b Catch@100a519b

void Catch_100a519b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::SetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a51c0 FUN_100a51c0

void FUN_100a51c0(void)

{
  return;
}


// ==== 100a5206 Catch@100a5206

void Catch_100a5206(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a521a Catch@100a521a

void Catch_100a521a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"L2Friend::GetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a5240 FUN_100a5240

void FUN_100a5240(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = "ect@@QBEPAVUClass@@XZ";
  return;
}


// ==== 100a5270 FUN_100a5270

void FUN_100a5270(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int in_ECX;
  undefined1 *puVar2;
  int in_EDX;
  int iVar3;
  
  if (in_EDX != 0) {
    puVar2 = (undefined1 *)(in_ECX + 1);
    puVar1 = (undefined1 *)(in_EAX + 2);
    iVar3 = (in_EDX - 1U >> 2) + 1;
    do {
      puVar2[-1] = puVar1[-2];
      *puVar2 = puVar1[-1];
      puVar2[1] = *puVar1;
      puVar2[2] = puVar1[1];
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


// ==== 100a52b0 FUN_100a52b0

void FUN_100a52b0(void)

{
  int in_EAX;
  undefined2 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *in_EDX;
  
  if (in_ECX != 0) {
    iVar2 = (in_ECX - 1U >> 2) + 1;
    puVar1 = (undefined2 *)(in_EAX + 2);
    do {
      iVar2 = iVar2 + -1;
      *in_EDX = CONCAT31(CONCAT21(*puVar1,*(undefined1 *)((int)puVar1 + -1)),
                         *(undefined1 *)(puVar1 + -1));
      puVar1 = puVar1 + 2;
      in_EDX = in_EDX + 1;
    } while (iVar2 != 0);
  }
  return;
}


// ==== 100a52f0 FUN_100a52f0

void FUN_100a52f0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_EDI;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar4 = unaff_EDI[2];
  uVar2 = unaff_EDI[3];
  uVar5 = unaff_EDI[1];
  FUN_100a52b0();
  uVar1 = (~uVar5 & uVar2 | uVar4 & uVar5) + *unaff_EDI + -0x28955b88 + local_40;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar5;
  uVar2 = (~uVar1 & uVar4 | uVar5 & uVar1) + local_3c + -0x173848aa + uVar2;
  uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1;
  uVar4 = (~uVar2 & uVar5 | uVar2 & uVar1) + local_38 + 0x242070db + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar2;
  uVar5 = (~uVar4 & uVar1 | uVar2 & uVar4) + local_34 + -0x3e423112 + uVar5;
  uVar5 = (uVar5 >> 10 | uVar5 * 0x400000) + uVar4;
  uVar1 = (~uVar5 & uVar2 | uVar4 & uVar5) + local_30 + -0xa83f051 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar5;
  uVar2 = (~uVar1 & uVar4 | uVar5 & uVar1) + local_2c + 0x4787c62a + uVar2;
  uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1;
  uVar4 = (~uVar2 & uVar5 | uVar2 & uVar1) + local_28 + -0x57cfb9ed + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar2;
  uVar5 = (~uVar4 & uVar1 | uVar2 & uVar4) + local_24 + -0x2b96aff + uVar5;
  uVar5 = (uVar5 >> 10 | uVar5 * 0x400000) + uVar4;
  uVar1 = (~uVar5 & uVar2 | uVar4 & uVar5) + local_20 + 0x698098d8 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar5;
  uVar2 = (~uVar1 & uVar4 | uVar5 & uVar1) + local_1c + -0x74bb0851 + uVar2;
  uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1;
  uVar4 = (~uVar2 & uVar5 | uVar2 & uVar1) + local_18 + -0xa44f + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar2;
  uVar5 = (~uVar4 & uVar1 | uVar2 & uVar4) + local_14 + -0x76a32842 + uVar5;
  uVar5 = (uVar5 >> 10 | uVar5 * 0x400000) + uVar4;
  uVar1 = (~uVar5 & uVar2 | uVar4 & uVar5) + local_10 + 0x6b901122 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar5;
  uVar2 = (~uVar1 & uVar4 | uVar5 & uVar1) + local_c + -0x2678e6d + uVar2;
  uVar2 = (uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1;
  uVar4 = (~uVar2 & uVar5 | uVar2 & uVar1) + local_8 + -0x5986bc72 + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar2;
  uVar5 = (~uVar4 & uVar1 | uVar2 & uVar4) + local_4 + 0x49b40821 + uVar5;
  uVar5 = (uVar5 >> 10 | uVar5 * 0x400000) + uVar4;
  uVar1 = (~uVar2 & uVar4 | uVar2 & uVar5) + local_3c + -0x9e1da9e + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar5;
  uVar2 = (~uVar4 & uVar5 | uVar4 & uVar1) + local_28 + -0x3fbf4cc0 + uVar2;
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar1;
  uVar4 = (~uVar5 & uVar1 | uVar2 & uVar5) + local_14 + 0x265e5a51 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar5 = (~uVar1 & uVar2 | uVar4 & uVar1) + local_40 + -0x16493856 + uVar5;
  uVar5 = (uVar5 >> 0xc | uVar5 * 0x100000) + uVar4;
  uVar1 = (~uVar2 & uVar4 | uVar2 & uVar5) + local_2c + -0x29d0efa3 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar5;
  uVar2 = (~uVar4 & uVar5 | uVar4 & uVar1) + local_18 + 0x2441453 + uVar2;
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar1;
  uVar4 = (~uVar5 & uVar1 | uVar2 & uVar5) + local_4 + -0x275e197f + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar5 = (~uVar1 & uVar2 | uVar4 & uVar1) + local_30 + -0x182c0438 + uVar5;
  uVar5 = (uVar5 >> 0xc | uVar5 * 0x100000) + uVar4;
  uVar1 = (~uVar2 & uVar4 | uVar2 & uVar5) + local_1c + 0x21e1cde6 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar5;
  uVar2 = (~uVar4 & uVar5 | uVar4 & uVar1) + local_8 + -0x3cc8f82a + uVar2;
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar1;
  uVar4 = (~uVar5 & uVar1 | uVar2 & uVar5) + local_34 + -0xb2af279 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar5 = (~uVar1 & uVar2 | uVar4 & uVar1) + local_20 + 0x455a14ed + uVar5;
  uVar5 = (uVar5 >> 0xc | uVar5 * 0x100000) + uVar4;
  uVar1 = (~uVar2 & uVar4 | uVar2 & uVar5) + local_c + -0x561c16fb + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar5;
  uVar2 = (~uVar4 & uVar5 | uVar4 & uVar1) + local_38 + -0x3105c08 + uVar2;
  uVar2 = (uVar2 * 0x200 | uVar2 >> 0x17) + uVar1;
  uVar4 = (~uVar5 & uVar1 | uVar2 & uVar5) + local_24 + 0x676f02d9 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar2;
  uVar5 = (~uVar1 & uVar2 | uVar4 & uVar1) + local_10 + -0x72d5b376 + uVar5;
  uVar5 = (uVar5 >> 0xc | uVar5 * 0x100000) + uVar4;
  uVar1 = (uVar2 ^ uVar4 ^ uVar5) + local_2c + -0x5c6be + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar5;
  uVar2 = (uVar4 ^ uVar5 ^ uVar1) + local_20 + -0x788e097f + uVar2;
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar1;
  uVar4 = (uVar2 ^ uVar5 ^ uVar1) + local_14 + 0x6d9d6122 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar5 = (uVar2 ^ uVar4 ^ uVar1) + local_8 + -0x21ac7f4 + uVar5;
  uVar3 = (uVar5 >> 9 | uVar5 * 0x800000) + uVar4;
  uVar1 = uVar1 + 0xa4beea44 + (uVar2 ^ uVar4 ^ uVar3) + local_3c;
  uVar5 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar3;
  uVar2 = (uVar4 ^ uVar3 ^ uVar5) + local_30 + 0x4bdecfa9 + uVar2;
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar5;
  uVar4 = (uVar2 ^ uVar3 ^ uVar5) + local_24 + -0x944b4a0 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar1 = uVar3 + 0xbebfbc70 + (uVar2 ^ uVar4 ^ uVar5) + local_18;
  uVar1 = (uVar1 >> 9 | uVar1 * 0x800000) + uVar4;
  uVar5 = (uVar2 ^ uVar4 ^ uVar1) + local_c + 0x289b7ec6 + uVar5;
  uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar1;
  uVar2 = (uVar4 ^ uVar1 ^ uVar5) + local_40 + -0x155ed806 + uVar2;
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar5;
  uVar4 = (uVar2 ^ uVar1 ^ uVar5) + local_34 + -0x2b10cf7b + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar1 = uVar1 + 0x4881d05 + (uVar2 ^ uVar4 ^ uVar5) + local_28;
  uVar1 = (uVar1 >> 9 | uVar1 * 0x800000) + uVar4;
  uVar5 = (uVar2 ^ uVar4 ^ uVar1) + local_1c + -0x262b2fc7 + uVar5;
  uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar1;
  uVar2 = (uVar4 ^ uVar1 ^ uVar5) + local_10 + -0x1924661b + uVar2;
  uVar2 = (uVar2 * 0x800 | uVar2 >> 0x15) + uVar5;
  uVar4 = (uVar2 ^ uVar1 ^ uVar5) + local_4 + 0x1fa27cf8 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar2;
  uVar1 = (uVar2 ^ uVar4 ^ uVar5) + local_38 + -0x3b53a99b + uVar1;
  uVar1 = (uVar1 >> 9 | uVar1 * 0x800000) + uVar4;
  uVar5 = ((~uVar2 | uVar1) ^ uVar4) + local_40 + -0xbd6ddbc + uVar5;
  uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar1;
  uVar2 = ((~uVar4 | uVar5) ^ uVar1) + local_24 + 0x432aff97 + uVar2;
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar5;
  uVar4 = ((~uVar1 | uVar2) ^ uVar5) + local_8 + -0x546bdc59 + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  uVar1 = ((~uVar5 | uVar4) ^ uVar2) + local_2c + -0x36c5fc7 + uVar1;
  uVar1 = (uVar1 >> 0xb | uVar1 * 0x200000) + uVar4;
  uVar5 = ((~uVar2 | uVar1) ^ uVar4) + local_10 + 0x655b59c3 + uVar5;
  uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar1;
  uVar2 = ((~uVar4 | uVar5) ^ uVar1) + local_34 + -0x70f3336e + uVar2;
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar5;
  uVar4 = ((~uVar1 | uVar2) ^ uVar5) + local_18 + -0x100b83 + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  uVar1 = ((~uVar5 | uVar4) ^ uVar2) + local_3c + -0x7a7ba22f + uVar1;
  uVar1 = (uVar1 >> 0xb | uVar1 * 0x200000) + uVar4;
  uVar5 = ((~uVar2 | uVar1) ^ uVar4) + local_20 + 0x6fa87e4f + uVar5;
  uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar1;
  uVar2 = ((~uVar4 | uVar5) ^ uVar1) + local_4 + -0x1d31920 + uVar2;
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar5;
  uVar4 = ((~uVar1 | uVar2) ^ uVar5) + local_28 + -0x5cfebcec + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  uVar1 = ((~uVar5 | uVar4) ^ uVar2) + local_c + 0x4e0811a1 + uVar1;
  uVar1 = (uVar1 >> 0xb | uVar1 * 0x200000) + uVar4;
  uVar5 = ((~uVar2 | uVar1) ^ uVar4) + local_30 + -0x8ac817e + uVar5;
  uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar1;
  uVar2 = ((~uVar4 | uVar5) ^ uVar1) + local_14 + -0x42c50dcb + uVar2;
  uVar2 = (uVar2 * 0x400 | uVar2 >> 0x16) + uVar5;
  uVar4 = ((~uVar1 | uVar2) ^ uVar5) + local_38 + 0x2ad7d2bb + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar2;
  *unaff_EDI = *unaff_EDI + uVar5;
  uVar1 = ((~uVar5 | uVar4) ^ uVar2) + local_1c + -0x14792c6f + uVar1;
  unaff_EDI[1] = (uVar1 >> 0xb | uVar1 * 0x200000) + unaff_EDI[1] + uVar4;
  unaff_EDI[2] = unaff_EDI[2] + uVar4;
  unaff_EDI[3] = unaff_EDI[3] + uVar2;
  return;
}


// ==== 100a59a0 FUN_100a59a0

void FUN_100a59a0(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10) + param_3 * 8;
  uVar1 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x10) = uVar2;
  if (uVar2 < param_3 * 8) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar2 = -uVar1 + 0x40;
  if (param_3 < uVar2) {
    uVar2 = 0;
  }
  else {
    _memcpy((void *)(uVar1 + 0x18 + param_1),param_2,uVar2);
    FUN_100a52f0();
    for (uVar1 = -uVar1 + 0x7f; uVar1 < param_3; uVar1 = uVar1 + 0x40) {
      FUN_100a52f0();
      uVar2 = uVar2 + 0x40;
    }
    uVar1 = 0;
  }
  _memcpy((void *)(uVar1 + 0x18 + param_1),(void *)(uVar2 + (int)param_2),param_3 - uVar2);
  return;
}


// ==== 100a5a40 FUN_100a5a40

void FUN_100a5a40(undefined4 param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_c [8];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_c;
  FUN_100a5270();
  uVar1 = *(uint *)((int)param_2 + 0x10) >> 3 & 0x3f;
  iVar2 = 0x38;
  if (0x37 < uVar1) {
    iVar2 = 0x78;
  }
  FUN_100a59a0(param_2,&DAT_1034f4a8,iVar2 - uVar1);
  FUN_100a59a0(param_2,local_c,8);
  FUN_100a5270();
  _memset(param_2,0,0x58);
  __security_check_cookie(local_4 ^ (uint)local_c);
  return;
}


// ==== 100a5ad0 FUN_100a5ad0

undefined4 FUN_100a5ad0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 100a5ae0 FUN_100a5ae0

void FUN_100a5ae0(FString *param_1)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 local_838;
  FString *local_834;
  ushort local_830 [1040];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef313;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_838;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffff7c0;
  ExceptionList = &local_c;
  local_834 = param_1;
  local_838 = 0;
  puVar2 = FString::operator*((FString *)(in_ECX + 4));
  uVar5 = *(undefined4 *)(in_ECX + 0x54);
  puVar3 = FString::operator*((FString *)(in_ECX + 0x48));
  puVar4 = FString::operator*((FString *)(in_ECX + 0x3c));
  appSprintf(local_830,
             (ushort *)
             L"MIME-Version: 1.0\r\nContent-Type: text/plain; charset=UTF-8\r\nX-MMS-IM-Format: FN=%s; EF=%s; CO=%d; CS=0; PF=22\r\n\r\n%s"
             ,puVar4,puVar3,uVar5,puVar2,uVar1);
  FString::FString(param_1,local_830);
  local_4 = 0;
  local_838 = 1;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_838);
  return;
}


// ==== 100a5bb0 FUN_100a5bb0

void FUN_100a5bb0(FString *param_1)

{
  uint uVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 local_838;
  FString *local_834;
  ushort local_830 [1040];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef373;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_838;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffff7c4;
  ExceptionList = &local_c;
  local_834 = param_1;
  local_838 = 0;
  puVar2 = FString::operator*((FString *)(in_ECX + 0x1c));
  appSprintf(local_830,
             (ushort *)
             L"MIME-Version: 1.0\r\nContent-Type: text/x-msmsgsinvite; charset=UTF-8\r\n\r\nInvitation-Command: CANCEL\r\nInvitation-Cookie: %s\r\nCancel-Code: REJECT\r\n\r\n"
             ,puVar2,uVar1);
  FString::FString(param_1,local_830);
  local_4 = 0;
  local_838 = 1;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_838);
  return;
}


// ==== 100a5c70 FUN_100a5c70

void FUN_100a5c70(FString *param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 local_838;
  FString *local_834;
  ushort local_830 [1040];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ef3dc;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_838;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffff7c4;
  ExceptionList = &local_c;
  local_834 = param_1;
  local_838 = 0;
  local_4 = 1;
  puVar2 = FString::operator*((FString *)&stack0x00000008);
  appSprintf(local_830,(ushort *)L"MIME-Version: 1.0\r\nContent-Type: %s\r\n",puVar2,uVar1);
  FString::FString(param_1,local_830);
  local_838 = 1;
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_838);
  return;
}


// ==== 100a5d40 FUN_100a5d40

void FUN_100a5d40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef419;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100a5d90 FUN_100a5d90

void FUN_100a5d90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


// ==== 100a5e10 FUN_100a5e10

void FUN_100a5e10(ushort *param_1,ushort *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x10),param_2);
  ExceptionList = local_c;
  return;
}


// ==== 100a5e80 FUN_100a5e80

void FUN_100a5e80(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef4c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::operator=(in_ECX,(ushort *)L"messenger.hotmail.com");
  *(undefined4 *)(in_ECX + 0xc) = 0x747;
  ExceptionList = local_c;
  return;
}


// ==== 100a5ef0 FUN_100a5ef0

void FUN_100a5ef0(void)

{
  FString *in_ECX;
  undefined4 in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ef502;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(in_ECX);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::operator=(in_ECX,(FString *)&stack0x00000004);
  *(undefined4 *)(in_ECX + 0xc) = in_stack_00000010;
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a5f70 FUN_100a5f70

void FUN_100a5f70(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ef529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100a5fc0 FUN_100a5fc0

void FUN_100a5fc0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef559;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 100a6020 FUN_100a6020

void FUN_100a6020(FString *param_1)

{
  uint uVar1;
  ushort *puVar2;
  FString *in_ECX;
  int iVar3;
  undefined4 local_64;
  FString *local_60;
  FString local_5c [12];
  ushort local_50 [32];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ef5a3;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_64;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff8c;
  ExceptionList = &local_c;
  local_4 = 0;
  local_60 = param_1;
  local_64 = 0;
  FString::FString(param_1);
  local_4 = 0;
  local_64 = 1;
  FString::operator+=(param_1,in_ECX);
  if (*(int *)(in_ECX + 0xc) != -1) {
    appSprintf(local_50,(ushort *)&DAT_102558ec,*(int *)(in_ECX + 0xc),uVar1);
    FString::operator+=(param_1,local_50);
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      do {
        FString::FString(local_5c," ");
        local_4 = 1;
        FString::operator+=(param_1,local_5c);
        local_4 = local_4 & 0xffffff00;
        FString::~FString(local_5c);
        puVar2 = FString::operator*(*(FString **)(*(int *)(in_ECX + 0x10) + iVar3 * 4));
        FString::operator+=(param_1,puVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x14));
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_64);
  return;
}


// ==== 100a6140 FUN_100a6140

FString * FUN_100a6140(FString *param_1,int param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef5ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 < *(int *)(in_ECX + 0x14)) {
    FString::FString(param_1,*(FString **)(*(int *)(in_ECX + 0x10) + param_2 * 4));
  }
  else {
    FString::FString(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 100a61c0 FUN_100a61c0

int FUN_100a61c0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef619;
  local_c = ExceptionList;
  if (param_1 < *(int *)(in_ECX + 0x14)) {
    ExceptionList = &local_c;
    FString::FString(local_18,*(FString **)(*(int *)(in_ECX + 0x10) + param_1 * 4));
    local_4 = 0;
    puVar1 = FString::operator*(local_18);
    iVar2 = appAtoi(puVar1);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
    ExceptionList = local_c;
    return iVar2;
  }
  return -1;
}


// ==== 100a6260 FUN_100a6260

int FUN_100a6260(void)

{
  int iVar1;
  int iVar2;
  FString *in_ECX;
  int iVar3;
  
  iVar1 = FString::Len(in_ECX);
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      iVar2 = FString::Len(*(FString **)(*(int *)(in_ECX + 0x10) + iVar3 * 4));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 1 + iVar2;
    } while (iVar3 < *(int *)(in_ECX + 0x14));
  }
  return iVar1;
}


// ==== 100a62a0 FUN_100a62a0

undefined4 FUN_100a62a0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ef649;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    do {
      iVar1 = FString::operator==((FString *)&stack0x00000004,
                                  *(FString **)(*(int *)(in_ECX + 0x1c) + iVar2 * 4));
      if (iVar1 != 0) {
        local_4 = 0xffffffff;
        FString::~FString((FString *)&stack0x00000004);
        ExceptionList = local_c;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x20));
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 100a6350 FUN_100a6350

undefined4 FUN_100a6350(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ef679;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x2c)) {
    do {
      iVar1 = FString::operator==((FString *)&stack0x00000004,
                                  *(FString **)(*(int *)(in_ECX + 0x28) + iVar2 * 4));
      if (iVar1 != 0) {
        local_4 = 0xffffffff;
        FString::~FString((FString *)&stack0x00000004);
        ExceptionList = local_c;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x2c));
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 100a6400 FUN_100a6400

undefined4 FUN_100a6400(undefined4 param_1,int param_2)

{
  FString *this;
  ushort *puVar1;
  int in_ECX;
  FString aFStack_5c [8];
  undefined4 uStack_54;
  undefined4 local_38;
  FString local_34 [4];
  FString local_30 [8];
  undefined1 local_28 [4];
  FString local_24 [4];
  undefined1 local_20 [12];
  void *local_14;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_101ef6ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0;
  if (param_2 < *(int *)(in_ECX + 0x14)) {
    FString::FString(local_34,*(FString **)(*(int *)(in_ECX + 0x10) + param_2 * 4));
    local_4 = 1;
    FString::InStr(local_34,(ushort *)&DAT_10251de4,0);
    FString::Left(local_34,(int)local_28);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,2);
    FString::Len((FString *)&local_38);
    uStack_54 = 0x100a649d;
    this = (FString *)FString::Right((FString *)&local_38,(int)local_20);
    local_c._0_1_ = 3;
    puVar1 = FString::operator*(this);
    uStack_54 = 0x100a64b1;
    appAtoi(puVar1);
    local_c._0_1_ = 2;
    FString::~FString(local_24);
    FString::FString(aFStack_5c,local_30);
    local_c._0_1_ = 2;
    FUN_100a5ef0();
    param_1 = local_4;
    local_c._0_1_ = 5;
    uStack_54 = 0x100a64fc;
    FUN_100a5fc0();
    local_c._0_1_ = 2;
    FString::~FString(local_24);
    local_c._0_1_ = 1;
    FString::~FString(local_30);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    FString::~FString((FString *)&stack0xffffffc4);
  }
  else {
    FUN_100a5e80();
  }
  ExceptionList = local_14;
  return param_1;
}


// ==== 100a6560 FUN_100a6560

FString * FUN_100a6560(FString *param_1)

{
  int in_ECX;
  FString aFStack_34 [4];
  undefined4 uStack_30;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef73c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(aFStack_34,(ushort *)L"text/x-msmsgscontrol");
  local_4 = 0;
  FUN_100a5c70(local_18);
  local_4 = 2;
  uStack_30 = 0x100a65d2;
  FString::operator+=(local_18,(ushort *)L"TypingUser: ");
  uStack_30 = 0x100a65e0;
  FString::operator+=(local_18,(FString *)(in_ECX + 4));
  uStack_30 = 0x100a65ef;
  FString::operator+=(local_18,(ushort *)L"\r\n\r\n");
  uStack_30 = 0x100a6600;
  FString::FString(param_1,local_18);
  local_4 = local_4 & 0xffffff00;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return param_1;
}


// ==== 100a6630 FUN_100a6630

undefined4 FUN_100a6630(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef77a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = *in_ECX;
  if (iVar1 == 1) {
    FUN_100a6560(param_1);
  }
  else if (iVar1 == 2) {
    FUN_100a5ae0(param_1);
  }
  else if (iVar1 == 3) {
    FUN_100a5bb0(param_1);
  }
  else {
    FUN_100a5ae0(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 100a66b0 FUN_100a66b0

FString * FUN_100a66b0(FString *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ef7ba;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puVar3 = FString::operator*(param_2);
  uVar2 = FUN_10048c20(puVar3,uVar2);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  while( true ) {
    if (iVar1 == -1) {
      FString::FString(param_1,0,1);
      ExceptionList = local_c;
      return param_1;
    }
    iVar4 = FString::operator==((FString *)(*in_ECX + iVar1 * 0x1c + 4),param_2);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0x1c + *in_ECX);
  }
  FString::FString(param_1,(FString *)(*in_ECX + iVar1 * 0x1c + 0x10));
  ExceptionList = local_c;
  return param_1;
}


// ==== 100a67a0 FUN_100a67a0

int FUN_100a67a0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 100a67d0 FUN_100a67d0

void FUN_100a67d0(void)

{
  FString *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  FArray *this;
  undefined *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ef84e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pFVar1 = (FString *)
           (**(code **)**(undefined4 **)GMalloc_exref)
                     (0xc,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_c = (void *)0x0;
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_1024d2e0);
  }
  local_c = (void *)0xffffffff;
  this = (FArray *)(in_ECX + 0x1c);
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10251d70);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10251d0c);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255978);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255970);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255968);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255960);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  puVar4 = &DAT_1022f8a0;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255958);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255950);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255948);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  ExceptionList = puVar4;
  return;
}


// ==== 100a6b10 FUN_100a6b10

void FUN_100a6b10(void)

{
  FString *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  FArray *this;
  undefined *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101efbe0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pFVar1 = (FString *)
           (**(code **)**(undefined4 **)GMalloc_exref)
                     (0xc,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_c = (void *)0x0;
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bf8);
  }
  local_c = (void *)0xffffffff;
  this = (FArray *)(in_ECX + 0x28);
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bf0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255be8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255be0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bd8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bd0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bc8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bc0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bb8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255bb0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ba8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ba0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b98);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b90);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b88);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b80);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b78);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b70);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b68);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b60);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b58);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b50);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b48);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b40);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b38);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b30);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b28);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b20);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b18);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b10);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b08);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255b00);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255af8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255af0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ae8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ae0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ad8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ad0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ac8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ac0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ab8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255ab0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255aa8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255aa0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a98);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a90);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a88);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a80);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a78);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a70);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a68);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a60);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a58);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a50);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a48);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a40);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a38);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a30);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a28);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a20);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a18);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a10);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a08);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255a00);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559f8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559f0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559e8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559e0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559d8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559d0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559c8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559c0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559b8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559b0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559a8);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_102559a0);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255998);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  puVar4 = &DAT_1022f8a0;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255990);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255988);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  pFVar1 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  if (pFVar1 == (FString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FString::FString(pFVar1,(ushort *)&DAT_10255980);
  }
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar3 * 4) = uVar2;
  ExceptionList = puVar4;
  return;
}


// ==== 100a8360 FUN_100a8360

void FUN_100a8360(void)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int unaff_EBX;
  int local_1c;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_8 = &LAB_101efc31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::InStr((FString *)&stack0x00000004,(ushort *)&DAT_1023d1c8,0);
  if (iVar1 != -1) {
    pFVar2 = (FString *)FString::Left((FString *)&stack0x00000004,(int)local_18);
    local_8._0_1_ = 1;
    FString::operator=((FString *)&stack0x00000000,pFVar2);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    FString::~FString((FString *)&local_1c);
  }
  FString::Len((FString *)&stack0x00000000);
  iVar3 = FString::InStr((FString *)&stack0x00000000,&DAT_1023d5d0,0);
  iVar1 = in_ECX;
  if (iVar3 != -1) {
    do {
      local_1c = (**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
      local_4._0_1_ = 2;
      if (local_1c == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FString::Left((FString *)&stack0x00000004,local_1c);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar1 = FArray::Add((FArray *)(in_ECX + 0x10),1,4);
      *(undefined4 *)(*(int *)(in_ECX + 0x10) + iVar1 * 4) = uVar4;
      pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)local_18,iVar3 + 1);
      local_8._0_1_ = 3;
      FString::operator=((FString *)&stack0x00000000,pFVar2);
      local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
      FString::~FString((FString *)&local_1c);
      FString::Len((FString *)&stack0x00000000);
      iVar3 = FString::InStr((FString *)&stack0x00000000,&DAT_1023d5d0,0);
      iVar1 = unaff_EBX;
    } while (iVar3 != -1);
  }
  iVar3 = FString::Len((FString *)&stack0x00000000);
  if (0 < iVar3) {
    pFVar2 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
    local_8._0_1_ = 4;
    if (pFVar2 == (FString *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FString::FString(pFVar2,(FString *)&stack0x00000000);
    }
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    iVar3 = FArray::Add((FArray *)(iVar1 + 0x10),1,4);
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar3 * 4) = uVar4;
  }
  local_8 = (undefined1 *)0xffffffff;
  FString::~FString((FString *)&stack0x00000000);
  ExceptionList = pvStack_10;
  return;
}


// ==== 100a8540 FUN_100a8540

void FUN_100a8540(void)

{
  FString *this;
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101efc64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  this = (FString *)
         (**(code **)**(undefined4 **)GMalloc_exref)
                   (0xc,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_c._0_1_ = 1;
  if (this == (FString *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FString::FString(this,(FString *)&local_4);
  }
  local_c = (void *)((uint)local_c._1_3_ << 8);
  iVar2 = FArray::Add((FArray *)(in_ECX + 0x10),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x10) + iVar2 * 4) = uVar1;
  local_c = (void *)0xffffffff;
  FString::~FString((FString *)&local_4);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 100a85e0 FUN_100a85e0

void FUN_100a85e0(undefined4 param_1)

{
  FString *this;
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 auStack_54 [4];
  ushort local_50 [28];
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101efc8b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)auStack_54;
  ExceptionList = &local_c;
  appSprintf(local_50,(ushort *)&DAT_10233718,param_1,DAT_103554c4 ^ (uint)&stack0xffffffa4);
  this = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
  uVar2 = 0;
  local_c = (void *)0x0;
  if (this != (FString *)0x0) {
    uVar2 = FString::FString(this,(ushort *)&stack0xffffffa8);
  }
  local_c = (void *)0xffffffff;
  iVar1 = FArray::Add((FArray *)(in_ECX + 0x10),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x10) + iVar1 * 4) = uVar2;
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xffffffa4);
  return;
}


// ==== 100a86a0 FUN_100a86a0

undefined4 FUN_100a86a0(undefined4 param_1)

{
  ushort *puVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101efcec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  puVar1 = FString::operator*((FString *)&stack0x00000008);
  FString::FString(local_18,puVar1);
  local_4._0_1_ = 2;
  FUN_100a66b0(param_1,local_18);
  local_4._0_1_ = 1;
  FString::~FString(local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  return param_1;
}


// ==== 100a8740 FUN_100a8740

undefined4 FUN_100a8740(void)

{
  int iVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101efd22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a66b0(local_18,&stack0x00000004);
  local_4._0_1_ = 1;
  iVar1 = FString::Len(local_18);
  if (0 < iVar1) {
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(local_18);
    local_4 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000004);
    ExceptionList = local_c;
    return 1;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 100a8800 FUN_100a8800

void FUN_100a8800(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101efd49;
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


// ==== 100a88a0 FUN_100a88a0

undefined4 * FUN_100a88a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int in_ECX;
  
  iVar1 = FUN_100a67a0(0x1c);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100a5e10(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = FUN_10048c20(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    FUN_10097c10();
  }
  return puVar2 + 4;
}


// ==== 100a8920 FUN_100a8920

void FUN_100a8920(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101efd88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x1c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100a89b0 FUN_100a89b0

void FUN_100a89b0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  FUN_100a8920(param_1[1]);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = FUN_100a67a0(0x1c);
      if (iVar1 != 0) {
        FUN_100a5d90(*param_1 + iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < param_1[1]);
    return;
  }
  return;
}


// ==== 100a8a10 FUN_100a8a10

void FUN_100a8a10(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101efdcd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FArray::FArray((FArray *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 100a8a80 FUN_100a8a80

void FUN_100a8a80(FString *param_1)

{
  FArray *this;
  FString *this_00;
  undefined4 uVar1;
  int iVar2;
  FString *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101efe18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  iVar3 = 0;
  local_4 = 0;
  this = (FArray *)(in_ECX + 0x10);
  FArray::FArray(this);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FString::operator=(in_ECX,param_1);
  FArray::Empty(this,4,0);
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      this_00 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,&DAT_1022f8a0);
      local_4._0_1_ = 3;
      if (this_00 == (FString *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FString::FString(this_00,*(FString **)(*(int *)(param_1 + 0x10) + iVar3 * 4));
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar2 = FArray::Add(this,1,4);
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)this + iVar2 * 4) = uVar1;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  ExceptionList = local_c;
  return;
}


// ==== 100a8b80 FUN_100a8b80

void FUN_100a8b80(void)

{
  FString *this;
  uint uVar1;
  FString *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101efe54;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 1;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      this = *(FString **)(*(int *)(in_ECX + 0x10) + iVar2 * 4);
      if (this != (FString *)0x0) {
        FString::~FString(this);
        (**(code **)(**(int **)GMalloc_exref + 8))(this,uVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x14));
  }
  FArray::Empty((FArray *)(in_ECX + 0x10),4,0);
  local_4 = local_4 & 0xffffff00;
  FUN_100a8800();
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100a8c30 FUN_100a8c30

void FUN_100a8c30(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101efea0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100a8a10(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  FArray::FArray((FArray *)(in_ECX + 0x1c));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x28));
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_100a67d0();
  FUN_100a6b10();
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 100a8cd0 FUN_100a8cd0

void FUN_100a8cd0(undefined4 param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101efef0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100a8a80(param_1);
  local_4 = 0;
  FArray::FArray((FArray *)(in_ECX + 0x1c));
  local_4 = CONCAT31(local_4._1_3_,2);
  FArray::FArray((FArray *)(in_ECX + 0x28));
  ExceptionList = local_c;
  return;
}


// ==== 100a8d50 FUN_100a8d50

void FUN_100a8d50(void)

{
  FString *pFVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101eff2e;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  local_4 = 2;
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      pFVar1 = *(FString **)(*(int *)(in_ECX + 0x10) + iVar3 * 4);
      if (pFVar1 != (FString *)0x0) {
        FString::~FString(pFVar1);
        (**(code **)(**(int **)GMalloc_exref + 8))(pFVar1,uVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x14));
  }
  FArray::Empty((FArray *)(in_ECX + 0x10),4,0);
  if (0 < *(int *)(in_ECX + 0x20)) {
    iVar3 = 0;
    do {
      pFVar1 = *(FString **)(*(int *)(in_ECX + 0x1c) + iVar3 * 4);
      if (pFVar1 != (FString *)0x0) {
        FString::~FString(pFVar1);
        (**(code **)(**(int **)GMalloc_exref + 8))(pFVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x20));
  }
  FArray::Empty((FArray *)(in_ECX + 0x1c),4,0);
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x2c)) {
    do {
      pFVar1 = *(FString **)(*(int *)(in_ECX + 0x28) + iVar3 * 4);
      if (pFVar1 != (FString *)0x0) {
        FString::~FString(pFVar1);
        (**(code **)(**(int **)GMalloc_exref + 8))(pFVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x2c));
  }
  FArray::Empty((FArray *)(in_ECX + 0x28),4,0);
  local_4._0_1_ = 1;
  FUN_100a8800();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100a8800();
  local_4 = 0xffffffff;
  FUN_100a8b80();
  ExceptionList = local_c;
  return;
}


// ==== 100a8e90 FUN_100a8e90

undefined4 FUN_100a8e90(void)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  int iVar4;
  FString *in_ECX;
  void *local_1c;
  undefined1 local_18 [4];
  uint local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_8 = &LAB_101eff98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::Len((FString *)&stack0x00000004);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x34) = 1;
    local_4 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000004);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FString::Len((FString *)&stack0x00000004);
  if (iVar1 < 4) {
    FString::operator=(in_ECX,(FString *)&stack0x00000004);
    *(undefined4 *)(in_ECX + 0x34) = 1;
  }
  else {
    pFVar2 = (FString *)FString::Left((FString *)&stack0x00000004,(int)local_18);
    local_8._0_1_ = (FString)0x1;
    FString::operator=(in_ECX,pFVar2);
    local_8._0_1_ = (FString)0x0;
    FString::~FString((FString *)&local_1c);
    FString::FString((FString *)&stack0xffffffc4,in_ECX);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    iVar1 = FUN_100a62a0();
    if (iVar1 == 0) {
      FString::FString((FString *)&stack0xffffffc4,in_ECX);
      local_8 = (undefined1 *)((uint)local_8 & 0xffffff00);
      iVar1 = FUN_100a6350();
      if (iVar1 == 0) {
        FString::Len((FString *)&stack0x00000000);
        pFVar2 = (FString *)FString::Right((FString *)&stack0x00000000,(int)&local_1c);
        local_c._0_1_ = (FString)0x5;
        FString::operator=((FString *)&local_4,pFVar2);
        local_c = (void *)((uint)local_c._1_3_ << 8);
        FString::~FString((FString *)&stack0xffffffe0);
        iVar1 = FString::InStr((FString *)&local_4,&DAT_1023d5d0,0);
        if (iVar1 == -1) {
          puVar3 = FString::operator*((FString *)&local_4);
          iVar1 = appAtoi(puVar3);
          *(int *)(in_ECX + 0xc) = iVar1;
        }
        else {
          pFVar2 = (FString *)FString::Left((FString *)&local_4,(int)&stack0xffffffe0);
          local_10 = 6;
          puVar3 = FString::operator*(pFVar2);
          iVar4 = appAtoi(puVar3);
          *(int *)(in_ECX + 0xc) = iVar4;
          local_10 = 0;
          FString::~FString((FString *)&stack0xffffffdc);
          iVar4 = FString::Len((FString *)&local_8);
          iVar1 = (iVar4 - iVar1) + -1;
          FString::Right((FString *)&local_8,(int)&stack0xffffffbc);
          local_14 = local_14 & 0xffffff00;
          FUN_100a8360(iVar1);
        }
        *(undefined4 *)(in_ECX + 0x34) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x38) = 1;
      }
    }
    else {
      FString::operator*((FString *)&stack0x00000000);
      FString::Len((FString *)&stack0x00000000);
      FString::Right((FString *)&stack0x00000000,(int)&stack0xffffffc4);
      local_c = (void *)((uint)local_c & 0xffffff00);
      FUN_100a8360();
      *(undefined4 *)(in_ECX + 0x34) = 1;
    }
  }
  local_14 = 0xffffffff;
  FString::~FString((FString *)&local_c);
  ExceptionList = local_1c;
  return 1;
}


// ==== 100a9100 FUN_100a9100

void FUN_100a9100(void)

{
  uint uVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101effc8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FArray::Empty((FArray *)(in_ECX + 0x10),4,0);
  local_4 = 0xffffffff;
  FUN_100a8b80(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100a9160 FUN_100a9160

int FUN_100a9160(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_100a88a0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x1c + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x1c + *in_ECX);
  }
  FString::operator=((FString *)(iVar3 * 0x1c + 0x10 + *in_ECX),param_2);
  return iVar3 * 0x1c + 0x10 + *in_ECX;
}


// ==== 100a9200 FUN_100a9200

undefined4 FUN_100a9200(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int in_ECX;
  wchar_t *pwVar4;
  FString local_20 [8];
  undefined1 local_18 [4];
  void *local_14;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_8 = &LAB_101f000b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::InStr((FString *)&stack0x00000004,(ushort *)&DAT_10255c24,0);
  if (iVar1 == -1) {
    local_4 = iVar1;
    FString::~FString((FString *)&stack0x00000004);
    ExceptionList = local_c;
    return 0;
  }
  FString::Left((FString *)&stack0x00000004,(int)local_18);
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
  FString::Len((FString *)&stack0x00000000);
  FString::Right((FString *)&stack0x00000000,(int)&stack0xffffffd8);
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  pwVar4 = L"Invitation-Cookie";
  puVar2 = FString::operator*(local_20);
  iVar1 = appStrcmp(puVar2,(ushort *)pwVar4);
  if (iVar1 == 0) {
    FString::operator=((FString *)(in_ECX + 0x1c),(FString *)&stack0xffffffd4);
  }
  puVar2 = FString::operator*((FString *)&stack0xffffffd4);
  puVar3 = FString::operator*(local_20);
  FUN_100a9160(puVar3,puVar2);
  local_c._0_1_ = 1;
  FString::~FString((FString *)&stack0xffffffd4);
  local_c = (void *)((uint)local_c._1_3_ << 8);
  FString::~FString(local_20);
  local_c = (void *)0xffffffff;
  FString::~FString((FString *)&local_4);
  ExceptionList = local_14;
  return 1;
}


// ==== 100a9340 FUN_100a9340

void FUN_100a9340(undefined4 *param_1,int param_2)

{
  FString *pFVar1;
  int iVar2;
  undefined4 *in_ECX;
  int unaff_retaddr;
  undefined4 uStack_48;
  FString local_28 [4];
  FString local_24 [8];
  FString local_1c [4];
  undefined1 local_18 [8];
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_8 = &LAB_101f0077;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (2 < param_2) {
    FString::FString(local_24,(FString *)*param_1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FString::InStr(local_24,(ushort *)&DAT_10251de4,0);
    FString::Len(local_24);
    pFVar1 = (FString *)FString::Right(local_24,(int)local_18);
    local_8._0_1_ = 2;
    FString::operator=((FString *)(in_ECX + 4),pFVar1);
    local_8._0_1_ = 1;
    FString::~FString(local_1c);
    FString::operator=(local_28,*(FString **)(unaff_retaddr + 4));
    uStack_48 = 0x100a940b;
    iVar2 = FString::InStr(local_28,(ushort *)L"text/x-msmsgscontrol",0);
    if (iVar2 == -1) {
      uStack_48 = 0x100a944f;
      iVar2 = FString::InStr(local_28,(ushort *)L"text/x-msmsgsprofile",0);
      if (iVar2 == -1) {
        uStack_48 = 0x100a94b5;
        iVar2 = FString::InStr(local_28,(ushort *)L"text/x-msmsgsemailnotification",0);
        if (iVar2 == -1) {
          uStack_48 = 0x100a9515;
          iVar2 = FString::InStr(local_28,(ushort *)L"text/x-msmsgsinvite",0);
          if (iVar2 == -1) {
            uStack_48 = 0x100a9575;
            iVar2 = FString::InStr(local_28,(ushort *)L"text/plain",0);
            if (iVar2 == -1) {
              *in_ECX = 10;
            }
            else {
              *in_ECX = 2;
              FString::FString((FString *)&uStack_48,*(FString **)(unaff_retaddr + 8));
              local_8._0_1_ = 1;
              FUN_100a9200();
              iVar2 = 4;
              if (4 < (int)param_1) {
                do {
                  FString::operator*(*(FString **)(unaff_retaddr + iVar2 * 4));
                  FString::operator+=((FString *)(in_ECX + 1),
                                      *(FString **)(unaff_retaddr + iVar2 * 4));
                  iVar2 = iVar2 + 1;
                } while (iVar2 < (int)param_1);
              }
            }
          }
          else {
            iVar2 = 2;
            *in_ECX = 3;
            if (2 < (int)param_1) {
              do {
                FString::FString((FString *)&uStack_48,*(FString **)(unaff_retaddr + iVar2 * 4));
                local_8._0_1_ = 1;
                FUN_100a9200();
                iVar2 = iVar2 + 1;
              } while (iVar2 < (int)param_1);
            }
          }
        }
        else {
          iVar2 = 2;
          *in_ECX = 4;
          if (2 < (int)param_1) {
            do {
              FString::FString((FString *)&uStack_48,*(FString **)(unaff_retaddr + iVar2 * 4));
              local_8._0_1_ = 1;
              FUN_100a9200();
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)param_1);
          }
        }
      }
      else {
        iVar2 = 2;
        *in_ECX = 0;
        if (2 < (int)param_1) {
          do {
            FString::FString((FString *)&uStack_48,*(FString **)(unaff_retaddr + iVar2 * 4));
            local_8._0_1_ = 1;
            FUN_100a9200();
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)param_1);
        }
      }
    }
    else {
      *in_ECX = 1;
      FString::FString((FString *)&uStack_48,*(FString **)(unaff_retaddr + 8));
      local_8._0_1_ = 1;
      FUN_100a9200();
    }
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    FString::~FString(local_28);
  }
  local_8 = (undefined1 *)0xffffffff;
  FUN_100a8800();
  ExceptionList = local_10;
  return;
}


// ==== 100a9630 FUN_100a9630

void FUN_100a9630(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f00ef;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 7));
  local_4._0_1_ = 2;
  FUN_1009a510(uVar1);
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0xf));
  local_4._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x12));
  local_4 = CONCAT31(local_4._1_3_,6);
  *in_ECX = *param_1;
  FString::operator=((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  FString::operator=((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  FString::operator=((FString *)(in_ECX + 7),(FString *)(param_1 + 7));
  FUN_100a8920(0);
  in_ECX[0xe] = 8;
  FUN_10097c10();
  FUN_100a89b0(param_1 + 10);
  in_ECX[0xe] = param_1[0xe];
  FUN_10097c10();
  FString::operator=((FString *)(in_ECX + 0xf),(FString *)(param_1 + 0xf));
  FString::operator=((FString *)(in_ECX + 0x12),(FString *)(param_1 + 0x12));
  in_ECX[0x15] = param_1[0x15];
  ExceptionList = local_c;
  return;
}


// ==== 100a9760 FUN_100a9760

void FUN_100a9760(void)

{
  uint uVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f015f;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 5;
  FUN_100a8920(0);
  *(undefined4 *)(in_ECX + 0x38) = 8;
  FUN_10097c10(uVar1);
  local_4._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0x48));
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x3c));
  local_4._0_1_ = 2;
  FUN_1009a580();
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x1c));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 100a9820 FUN_100a9820

void FUN_100a9820(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f0180;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_100bf490();
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100a9880 Catch@100a9880

void Catch_100a9880(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100a9894 Catch@100a9894

void Catch_100a9894(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Msn::Logout");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100a98c0 FUN_100a98c0

FString * FUN_100a98c0(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f01ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 0xc) == 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FUN_100be240(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 100a9930 FUN_100a9930

void FUN_100a9930(int param_1)

{
  if (param_1 != 0) {
    FUN_100ae320();
  }
  return;
}


// ==== 100a9940 FUN_100a9940

void FUN_100a9940(void)

{
  int in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f01f2;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c29f0();
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100a99aa;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a99c0 FUN_100a99c0

void FUN_100a99c0(void)

{
  int in_ECX;
  FString *in_stack_00000010;
  FString aFStack_24 [12];
  undefined1 *puStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0222;
  local_c = ExceptionList;
  uStack_14 = DAT_103554c4 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    puStack_18 = in_stack_00000010;
    in_stack_00000010 = aFStack_24;
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c1f50();
  }
  local_4 = 0xffffffff;
  puStack_18 = (undefined1 *)0x100a9a2e;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a9a50 FUN_100a9a50

void FUN_100a9a50(void)

{
  int in_ECX;
  FString *in_stack_00000010;
  FString aFStack_24 [12];
  undefined1 *puStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0252;
  local_c = ExceptionList;
  uStack_14 = DAT_103554c4 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    puStack_18 = in_stack_00000010;
    in_stack_00000010 = aFStack_24;
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c2190();
  }
  local_4 = 0xffffffff;
  puStack_18 = (undefined1 *)0x100a9abe;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a9ae0 FUN_100a9ae0

void FUN_100a9ae0(void)

{
  int in_ECX;
  FString *in_stack_00000010;
  FString aFStack_24 [12];
  undefined1 *puStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0282;
  local_c = ExceptionList;
  uStack_14 = DAT_103554c4 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    puStack_18 = in_stack_00000010;
    in_stack_00000010 = aFStack_24;
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c2cb0();
  }
  local_4 = 0xffffffff;
  puStack_18 = (undefined1 *)0x100a9b4e;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a9b70 FUN_100a9b70

void FUN_100a9b70(void)

{
  int in_ECX;
  undefined4 in_stack_00000048;
  undefined1 *in_stack_0000004c;
  undefined1 auStack_60 [68];
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f02b0;
  local_c = ExceptionList;
  uStack_14 = DAT_103554c4 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    puStack_18 = in_stack_0000004c;
    uStack_1c = in_stack_00000048;
    in_stack_0000004c = auStack_60;
    FUN_100abb60(&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c23f0();
  }
  local_4 = 0xffffffff;
  puStack_18 = (undefined1 *)0x100a9be4;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100a9c00 FUN_100a9c00

void FUN_100a9c00(void)

{
  int in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f02e2;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c2630();
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100a9c6a;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a9c80 FUN_100a9c80

void FUN_100a9c80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_100c27a0();
    return;
  }
  return;
}


// ==== 100a9c90 FUN_100a9c90

void FUN_100a9c90(undefined4 param_1)

{
  int in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0312;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FString::FString(aFStack_24,(FString *)&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100c2870(param_1);
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100a9cff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


// ==== 100a9d20 FUN_100a9d20

void FUN_100a9d20(void)

{
  int in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0342;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c1ad0();
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100a9d8a;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a9da0 FUN_100a9da0

void FUN_100a9da0(void)

{
  int in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0372;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100c1db0();
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100a9e0a;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a9e20 FUN_100a9e20

void FUN_100a9e20(void)

{
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f03a2;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_24,(FString *)&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b1680();
  local_4 = 0xffffffff;
  uStack_1c = 0x100a9e84;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100a9ea0 FUN_100a9ea0

void FUN_100a9ea0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f03d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100abe10();
  FUN_100ac430();
  FUN_100abb60(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b8370();
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100a9f30 FUN_100a9f30

void FUN_100a9f30(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0400;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100abe10();
  FUN_100ac430();
  FUN_100abb60(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b84f0();
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100a9fc0 FUN_100a9fc0

void FUN_100a9fc0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0430;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100abe10();
  FUN_100ac430();
  FUN_100abb60(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b5880();
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100aa050 FUN_100aa050

void FUN_100aa050(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0460;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100abb60(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_100b5900();
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100aa0d0 FUN_100aa0d0

void FUN_100aa0d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0489;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100aa120 FUN_100aa120

void FUN_100aa120(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100abe10();
    FUN_100ac430();
    FUN_100b1600();
    return;
  }
  return;
}


// ==== 100aa150 FUN_100aa150

void FUN_100aa150(void)

{
  int in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f04c2;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100b5990();
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100aa1ba;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100aa1d0 FUN_100aa1d0

void FUN_100aa1d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f04f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100abb60(&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100b1720();
  }
  local_8 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_10;
  return;
}


// ==== 100aa252 Catch@100aa252

void Catch_100aa252(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100aa266 Catch@100aa266

void Catch_100aa266(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Msn::NotifyAddFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100aa290 FUN_100aa290

void FUN_100aa290(void)

{
  int in_ECX;
  FString aFStack_3c [8];
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f0522;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FString::FString(aFStack_3c,(FString *)&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100b17e0();
  }
  local_8 = 0xffffffff;
  uStack_34 = 0x100aa300;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100aa314 Catch@100aa314

void Catch_100aa314(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100aa328 Catch@100aa328

void Catch_100aa328(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Msn::NotifyRemoveFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100aa350 FUN_100aa350

void FUN_100aa350(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f0550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100ad9c0(&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100b18a0();
  }
  local_8 = 0xffffffff;
  FUN_100ada50();
  ExceptionList = local_10;
  return;
}


// ==== 100aa3d2 Catch@100aa3d2

void Catch_100aa3d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100aa3e6 Catch@100aa3e6

void Catch_100aa3e6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Msn::NotifyAddGroup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100aa410 FUN_100aa410

void FUN_100aa410(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0580;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 1;
  FUN_100abce0();
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100abb60(&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100b1960();
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100aa4a0 FUN_100aa4a0

void FUN_100aa4a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f05b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100abce0();
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100abb60(&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100b1a60();
  }
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100aa530 FUN_100aa530

void FUN_100aa530(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f05d9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100aa580 FUN_100aa580

undefined4 FUN_100aa580(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x50);
}


// ==== 100aa590 FUN_100aa590

undefined4 FUN_100aa590(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x54);
}


// ==== 100aa5a0 FUN_100aa5a0

undefined4 FUN_100aa5a0(void)

{
  undefined4 uVar1;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0612;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_24,(FString *)&stack0x00000004);
  local_4._0_1_ = 1;
  FUN_100abe10();
  local_4 = (uint)local_4._1_3_ << 8;
  uVar1 = FUN_100ac3d0();
  local_4 = 0xffffffff;
  uStack_1c = 0x100aa60d;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return uVar1;
}


// ==== 100aa630 FUN_100aa630

void FUN_100aa630(int param_1)

{
  wchar_t *pwVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f0630;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GMsnSoundAlarm_exref != 0) {
    if (param_1 == 0) {
      pwVar1 = L"MessengerSound.online";
    }
    else if (param_1 == 1) {
      pwVar1 = L"MessengerSound.type";
    }
    else {
      if (param_1 != 2) {
        return;
      }
      pwVar1 = L"MessengerSound.newemail";
    }
    ExceptionList = &local_10;
    FUN_10147e60(pwVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100aa6b7 Catch@100aa6b7

void Catch_100aa6b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100aa6cb Catch@100aa6cb

void Catch_100aa6cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Msn::PlayAlarmSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100aa6f0 FUN_100aa6f0

void FUN_100aa6f0(byte param_1)

{
  FUN_100af440();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100aa720 FUN_100aa720

void FUN_100aa720(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  FString aFStack_34 [8];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  uint uStack_20;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f067d;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  puStack_24 = &DAT_1022f8a0;
  uStack_28 = 0x98;
  uStack_2c = 0x100aa766;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)();
  local_c._0_1_ = 1;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_2c = 1;
    FUN_100a5fc0(&local_4);
    local_c._0_1_ = 1;
    piVar2 = (int *)FUN_100c3090(in_ECX);
  }
  local_c._0_1_ = 0;
  *(int **)(in_ECX + 0xc) = piVar2;
  uStack_2c = 0x100aa7b1;
  iVar1 = (**(code **)(*piVar2 + 0x20))();
  if (iVar1 == 0) {
    FString::FString(aFStack_34,(ushort *)&DAT_10255e20);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    FUN_100b5990();
  }
  local_c = (void *)0xffffffff;
  uStack_2c = 0x100aa7ed;
  FString::~FString((FString *)&local_4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 100aa810 FUN_100aa810

undefined4 FUN_100aa810(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  FString aFStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  uint uStack_24;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f06d6;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  local_4 = 1;
  puStack_28 = &DAT_1022f8a0;
  uStack_2c = 0xa4;
  uStack_30 = 0x100aa856;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)();
  local_c._0_1_ = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FString::FString(aFStack_38,(FString *)&stack0x0000000c);
    local_c._0_1_ = 3;
    FUN_100a5fc0(&local_4);
    local_c._0_1_ = 2;
    uVar2 = FUN_100af340(in_ECX);
  }
  local_c = (void *)((uint)local_c._1_3_ << 8);
  uStack_30 = 0x100aa8b8;
  FString::~FString((FString *)&local_4);
  local_c = (void *)0xffffffff;
  uStack_30 = 0x100aa8ca;
  FString::~FString((FString *)&stack0x0000000c);
  ExceptionList = pvStack_14;
  return uVar2;
}


// ==== 100aa8e0 FUN_100aa8e0

void FUN_100aa8e0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 0) &&
     (*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x260) + 0x238) + 0x2d8) == 0)) {
    FUN_100abe10();
    FUN_100ac430();
    FUN_100b1600();
    return;
  }
  return;
}


// ==== 100aa920 FUN_100aa920

void FUN_100aa920(byte param_1)

{
  FUN_100c3040();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100aa950 FUN_100aa950

undefined4 FUN_100aa950(undefined4 param_1)

{
  FString aFStack_3c [8];
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  FString local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0733;
  local_c = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  uStack_30 = 0x747;
  FString::FString(aFStack_3c,(ushort *)L"messenger.hotmail.com");
  local_4 = 0;
  uStack_30 = FUN_100a5ef0();
  local_4 = 2;
  uStack_34 = 0x100aa9bf;
  FUN_100a5fc0();
  local_4 = 0;
  uStack_30 = 0x100aa9d9;
  FString::~FString(local_1c);
  ExceptionList = local_c;
  return param_1;
}


// ==== 100aa9f0 FUN_100aa9f0

void FUN_100aa9f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = param_1;
  piVar2 = *(int **)(in_ECX + 8);
  if ((piVar2 != (int *)0x0) && (piVar2[1] == param_1)) {
    (**(code **)(*piVar2 + 0x24))(param_1,param_2);
    return;
  }
  piVar2 = *(int **)(in_ECX + 0xc);
  if ((piVar2 != (int *)0x0) && (piVar2[1] == param_1)) {
    (**(code **)(*piVar2 + 0x24))(param_1,param_2);
    return;
  }
  if (0 < *(int *)(in_ECX + 0x14)) {
    piVar2 = (int *)FUN_10187a60(&param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(iVar1,param_2);
    }
  }
  return;
}


// ==== 100aaa70 FUN_100aaa70

void FUN_100aaa70(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = param_1;
  piVar2 = *(int **)(in_ECX + 8);
  if ((piVar2 != (int *)0x0) && (piVar2[1] == param_1)) {
    (**(code **)(*piVar2 + 0x28))(param_1,param_2);
    return;
  }
  piVar2 = *(int **)(in_ECX + 0xc);
  if ((piVar2 != (int *)0x0) && (piVar2[1] == param_1)) {
    (**(code **)(*piVar2 + 0x28))(param_1,param_2);
    return;
  }
  if (0 < *(int *)(in_ECX + 0x14)) {
    piVar2 = (int *)FUN_10187a60(&param_1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(iVar1,param_2);
    }
  }
  return;
}


// ==== 100aaaf0 FUN_100aaaf0

void FUN_100aaaf0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 uStack_3c;
  FString aFStack_34 [8];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  uint uStack_20;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f076c;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  puStack_24 = &DAT_1022f8a0;
  uStack_28 = 100;
  uStack_2c = 0x100aab2b;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)();
  local_c = (void *)0x0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_2c = 1;
    FUN_100aa950(&uStack_3c);
    local_c = (void *)((uint)local_c & 0xffffff00);
    piVar2 = (int *)FUN_100c2fb0(in_ECX);
  }
  local_c = (void *)0xffffffff;
  *(int **)(in_ECX + 8) = piVar2;
  uStack_2c = 0x100aab7a;
  iVar1 = (**(code **)(*piVar2 + 0x20))();
  if (iVar1 == 0) {
    uStack_3c = 0x100aab92;
    FString::FString(aFStack_34,(ushort *)&DAT_10255e20);
    local_c = (void *)0xffffffff;
    FUN_100b5990();
  }
  ExceptionList = pvStack_14;
  return;
}


// ==== 100aabc0 FUN_100aabc0

void FUN_100aabc0(void)

{
  uint uVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f07a2;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  local_4 = 1;
  FString::operator=((FString *)(in_ECX + 0x24),(FString *)&stack0x00000004);
  FString::operator=((FString *)(in_ECX + 0x30),(FString *)&stack0x00000010);
  FUN_100aaaf0(uVar1);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_c;
  return;
}


// ==== 100aac50 FUN_100aac50

void FUN_100aac50(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f07c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_100aa920(1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 100aacb2 Catch@100aacb2

void Catch_100aacb2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100aacc6 Catch@100aacc6

void Catch_100aacc6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Msn::NotifyDispatchProcessEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100aacf0 FUN_100aacf0

int FUN_100aacf0(int *param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = in_ECX[1] + -1;
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0xc;
    do {
      if (*(int *)(iVar1 + 4 + *in_ECX) == *param_1) {
        FUN_10042d90(iVar3,1);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar3);
    if (iVar2 != 0) {
      if (in_ECX[1] * 2 + 8 < in_ECX[4]) {
        do {
          in_ECX[4] = in_ECX[4] / 2;
        } while (in_ECX[1] * 2 + 8 < in_ECX[4]);
      }
      FUN_1000b930();
    }
  }
  return iVar2;
}


// ==== 100aad70 FUN_100aad70

void FUN_100aad70(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f07e9;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100aae10 FUN_100aae10

void FUN_100aae10(int *param_1)

{
  int *piVar1;
  int iStack_4;
  
  piVar1 = param_1;
  (**(code **)(*param_1 + 0x20))();
  iStack_4 = piVar1[1];
  FUN_10087320(&iStack_4,&param_1);
  return;
}


// ==== 100aae50 FUN_100aae50

void FUN_100aae50(void)

{
  undefined4 uVar1;
  uint3 uVar2;
  FString *this;
  int iVar3;
  int in_ECX;
  int iVar4;
  FString *pFVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0831;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = 0;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar4 * 0xc);
      pFVar5 = (FString *)&stack0x00000004;
      this = (FString *)FUN_100adf40();
      iVar3 = FString::operator==(this,pFVar5);
      if (iVar3 != 0) {
        FUN_100abb60(&stack0x00000010);
        local_4._0_1_ = 2;
        FUN_100b9800(uVar1);
      }
      iVar4 = iVar4 + 1;
      uVar2 = local_4._1_3_;
    } while (iVar4 < *(int *)(in_ECX + 0x14));
  }
  local_4._1_3_ = uVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100aaf30 FUN_100aaf30

void FUN_100aaf30(void)

{
  undefined4 uVar1;
  uint3 uVar2;
  FString *this;
  int iVar3;
  int in_ECX;
  int iVar4;
  FString *pFVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0871;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = 0;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar4 * 0xc);
      pFVar5 = (FString *)&stack0x00000004;
      this = (FString *)FUN_100adf40();
      iVar3 = FString::operator==(this,pFVar5);
      if (iVar3 != 0) {
        FUN_100abb60(&stack0x00000010);
        local_4._0_1_ = 2;
        FUN_100bae20(uVar1);
      }
      iVar4 = iVar4 + 1;
      uVar2 = local_4._1_3_;
    } while (iVar4 < *(int *)(in_ECX + 0x14));
  }
  local_4._1_3_ = uVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100ab010 FUN_100ab010

void FUN_100ab010(void)

{
  undefined4 uVar1;
  uint3 uVar2;
  FString *this;
  int iVar3;
  int in_ECX;
  int iVar4;
  FString *pFVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f08c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = 0;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar4 * 0xc);
      pFVar5 = (FString *)&stack0x00000004;
      this = (FString *)FUN_100adf40();
      iVar3 = FString::operator==(this,pFVar5);
      if (iVar3 != 0) {
        FUN_100a9630();
        local_4._0_1_ = 4;
        FUN_100abb60(&stack0x00000010);
        local_4._0_1_ = 3;
        FUN_100bd810(uVar1);
      }
      iVar4 = iVar4 + 1;
      uVar2 = local_4._1_3_;
    } while (iVar4 < *(int *)(in_ECX + 0x14));
  }
  local_4._1_3_ = uVar2;
  local_4._0_1_ = 1;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100abc50();
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100ab130 FUN_100ab130

void FUN_100ab130(void)

{
  undefined4 uVar1;
  uint3 uVar2;
  FString *this;
  int iVar3;
  int in_ECX;
  int iVar4;
  FString *pFVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0901;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = 0;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar4 * 0xc);
      pFVar5 = (FString *)&stack0x00000004;
      this = (FString *)FUN_100adf40();
      iVar3 = FString::operator==(this,pFVar5);
      if (iVar3 != 0) {
        FUN_100abb60(&stack0x00000010);
        local_4._0_1_ = 2;
        FUN_100b7120(uVar1);
      }
      iVar4 = iVar4 + 1;
      uVar2 = local_4._1_3_;
    } while (iVar4 < *(int *)(in_ECX + 0x14));
  }
  local_4._1_3_ = uVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_c;
  return;
}


// ==== 100ab210 FUN_100ab210

void FUN_100ab210(void)

{
  undefined4 uVar1;
  uint3 uVar2;
  FString *this;
  int iVar3;
  int in_ECX;
  int iVar4;
  FString *pFVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0951;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = 0;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar4 * 0xc);
      pFVar5 = (FString *)&stack0x00000004;
      this = (FString *)FUN_100adf40();
      iVar3 = FString::operator==(this,pFVar5);
      if (iVar3 != 0) {
        FUN_100a9630();
        local_4._0_1_ = 4;
        FUN_100abb60(&stack0x00000010);
        local_4._0_1_ = 3;
        FUN_100bd950(uVar1);
      }
      iVar4 = iVar4 + 1;
      uVar2 = local_4._1_3_;
    } while (iVar4 < *(int *)(in_ECX + 0x14));
  }
  local_4._1_3_ = uVar2;
  local_4._0_1_ = 1;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100abc50();
  local_4 = 0xffffffff;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100ab330 FUN_100ab330

void FUN_100ab330(void)

{
  undefined4 uVar1;
  uint uVar2;
  FString *this;
  int iVar3;
  int in_ECX;
  int iVar4;
  FString *pFVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0981;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  iVar4 = 0;
  local_4 = 1;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar4 * 0xc);
      pFVar5 = (FString *)&stack0x00000004;
      this = (FString *)FUN_100adf40(pFVar5,uVar2);
      iVar3 = FString::operator==(this,pFVar5);
      if (iVar3 != 0) {
        FUN_100b9390(uVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x14));
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ab3e0 FUN_100ab3e0

void FUN_100ab3e0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f09a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x14); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 8 + iVar2 * 0xc);
    if (iVar1 != 0) {
      if (*(int *)(in_ECX + 4) != 0) {
        FUN_100b9410(iVar1);
      }
      FUN_100aa6f0(1);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  FUN_1000be70();
  ExceptionList = local_10;
  return;
}


// ==== 100ab48b Catch@100ab48b

void Catch_100ab48b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ab49f Catch@100ab49f

void Catch_100ab49f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"Msn::NotifySwitchboardSessionEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ab4c0 FUN_100ab4c0

void FUN_100ab4c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = param_1;
  iVar2 = FUN_10187a60(&param_1);
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_100b9410(iVar2);
  }
  if (iVar2 != 0) {
    FUN_100af440();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
  }
  param_1 = uVar1;
  FUN_100aacf0(&param_1);
  return;
}


// ==== 100ab520 FUN_100ab520

void FUN_100ab520(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f09e1;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100ab590 FUN_100ab590

void FUN_100ab590(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0a08;
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
  FUN_100aad70();
  ExceptionList = local_c;
  return;
}


// ==== 100ab610 FUN_100ab610

void FUN_100ab610(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100ab590(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100ab660 FUN_100ab660

void FUN_100ab660(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0a9f;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *in_ECX = Msn::vftable;
  local_4 = 3;
  iVar1 = in_ECX[0x14];
  iVar3 = 0;
  if (iVar1 != 0) {
    FUN_100ad880(uVar2);
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
  }
  iVar1 = in_ECX[0x15];
  if (iVar1 != 0) {
    FUN_100abc50();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
  }
  local_4._0_1_ = 4;
  if (0 < (int)in_ECX[5]) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + 8 + iVar3 * 0xc);
      if (iVar1 != 0) {
        FUN_100af440();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)in_ECX[5]);
  }
  local_4._0_1_ = 3;
  FArray::Empty((FArray *)(in_ECX + 4),0xc,0);
  in_ECX[8] = 8;
  FUN_1000b930();
  if (in_ECX[1] != 0) {
    in_ECX[1] = 0;
  }
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0xf));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0xc));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 9));
  local_4 = 0xffffffff;
  FUN_100ab590();
  ExceptionList = local_c;
  return;
}


// ==== 100ab7b0 FUN_100ab7b0

void FUN_100ab7b0(void)

{
  int iVar1;
  int in_ECX;
  FString aFStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0ad2;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  iStack_24 = 0x100ab7e1;
  FUN_100ab3e0();
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 != 0) {
    iStack_24 = 0x100ab7ef;
    FUN_100c3170();
    uStack_28 = 0x100ab7fe;
    iStack_24 = iVar1;
    (**(code **)(**(int **)GMalloc_exref + 8))();
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    FString::FString(aFStack_2c,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100b71c0();
  }
  local_4 = 0xffffffff;
  iStack_24 = 0x100ab83b;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ab850 FUN_100ab850

void FUN_100ab850(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0b3d;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *in_ECX = Msn::vftable;
  FUN_100ab520(uVar1);
  local_4 = 1;
  FString::FString((FString *)(in_ECX + 9));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xc));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xf));
  local_4 = CONCAT31(local_4._1_3_,4);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  FArray::Empty((FArray *)(in_ECX + 4),0xc,0);
  in_ECX[8] = 8;
  FUN_1000b930();
  in_ECX[0x13] = 0;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(0x14,&DAT_1022f8a0);
  local_c._0_1_ = 5;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100ad6c0();
  }
  local_c = (void *)CONCAT31(local_c._1_3_,4);
  in_ECX[0x14] = uVar3;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(0x44,&DAT_1022f8a0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10096660();
  }
  in_ECX[0x15] = uVar3;
  FString::operator=((FString *)(in_ECX + 0xf),(ushort *)&DAT_10251d70);
  in_ECX[0x12] = 1;
  in_ECX[1] = local_c;
  ExceptionList = unaff_ESI;
  return;
}


// ==== 100ab9a0 FUN_100ab9a0

void FUN_100ab9a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0ba5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 8));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x14));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x20));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x2c));
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x38));
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined4 *)(in_ECX + 4) = 0;
  FString::operator=((FString *)(in_ECX + 0x20),(FString *)&stack0x00000004);
  FString::operator=((FString *)(in_ECX + 0x14),(ushort *)&DAT_10251d0c);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100aba70 FUN_100aba70

void FUN_100aba70(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0c0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FString::FString((FString *)(in_ECX + 8));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x14));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x20));
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x2c));
  local_4._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x38));
  local_4._0_1_ = 6;
  *(undefined4 *)(in_ECX + 4) = 0;
  FString::operator=((FString *)(in_ECX + 0x20),(FString *)&stack0x00000004);
  FString::operator=((FString *)(in_ECX + 0x2c),(FString *)&stack0x00000010);
  FString::operator=((FString *)(in_ECX + 0x14),(ushort *)&DAT_10251d0c);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_c;
  return;
}


// ==== 100abb60 FUN_100abb60

void FUN_100abb60(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0c6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 8));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x14));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x20));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x2c));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x38));
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  FString::operator=((FString *)(in_ECX + 0x14),(FString *)(param_1 + 0x14));
  FString::operator=((FString *)(in_ECX + 8),(FString *)(param_1 + 8));
  FString::operator=((FString *)(in_ECX + 0x20),(FString *)(param_1 + 0x20));
  FString::operator=((FString *)(in_ECX + 0x2c),(FString *)(param_1 + 0x2c));
  FString::operator=((FString *)(in_ECX + 0x38),(FString *)(param_1 + 0x38));
  ExceptionList = local_c;
  return;
}


// ==== 100abc50 FUN_100abc50

void FUN_100abc50(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f0ccc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 3;
  FString::~FString((FString *)(in_ECX + 0x38));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x2c));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x20));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x14));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 100abce0 FUN_100abce0

void FUN_100abce0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  FString::operator=((FString *)(in_ECX + 0x14),(FString *)(param_1 + 0x14));
  FString::operator=((FString *)(in_ECX + 8),(FString *)(param_1 + 8));
  FString::operator=((FString *)(in_ECX + 0x20),(FString *)(param_1 + 0x20));
  FString::operator=((FString *)(in_ECX + 0x2c),(FString *)(param_1 + 0x2c));
  FString::operator=((FString *)(in_ECX + 0x38),(FString *)(param_1 + 0x38));
  return;
}


// ==== 100abd40 FUN_100abd40

void FUN_100abd40(FString *param_1)

{
  uint uVar1;
  ushort *puVar2;
  int in_ECX;
  ushort *puVar3;
  undefined4 local_220;
  FString *local_21c;
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0d13;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_220;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffdd8;
  ExceptionList = &local_c;
  local_21c = param_1;
  local_220 = 0;
  appMemset(local_218,0,0x208);
  puVar3 = local_218;
  puVar2 = FString::operator*((FString *)(in_ECX + 0x2c));
  FUN_100c75a0(puVar2,puVar3,uVar1);
  FString::operator=((FString *)(in_ECX + 0x38),local_218);
  FString::FString(param_1,(FString *)(in_ECX + 0x38));
  local_4 = 0;
  local_220 = 1;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_220);
  return;
}


// ==== 100abe10 FUN_100abe10

undefined4 FUN_100abe10(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 100abe20 FUN_100abe20

undefined4 FUN_100abe20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 100abe30 FUN_100abe30

undefined4 FUN_100abe30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 100abe40 FUN_100abe40

undefined4 FUN_100abe40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 100abe50 FUN_100abe50

bool FUN_100abe50(byte param_1)

{
  return (param_1 & 1) == 1;
}


// ==== 100abe70 FUN_100abe70

bool FUN_100abe70(byte param_1)

{
  return (param_1 & 2) == 2;
}


// ==== 100abe90 FUN_100abe90

bool FUN_100abe90(byte param_1)

{
  return (param_1 & 4) == 4;
}


// ==== 100abeb0 FUN_100abeb0

bool FUN_100abeb0(byte param_1)

{
  return (param_1 & 8) == 8;
}


// ==== 100abed0 FUN_100abed0

undefined4 FUN_100abed0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0d59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255ed0);
  if (iVar1 == 0) {
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255ec8);
    if (iVar1 == 0) {
      iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255ec0);
      if (iVar1 == 0) {
        iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255eb8);
        if (iVar1 == 0) {
          local_4 = 0xffffffff;
          FString::~FString((FString *)&stack0x00000004);
          ExceptionList = local_c;
          return 0;
        }
        uVar2 = in_ECX[3];
      }
      else {
        uVar2 = in_ECX[2];
      }
    }
    else {
      uVar2 = in_ECX[1];
    }
  }
  else {
    uVar2 = *in_ECX;
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return uVar2;
}


// ==== 100abfb0 FUN_100abfb0

void FUN_100abfb0(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0d8c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 100ac020 FUN_100ac020

void FUN_100ac020(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0dbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 100ac090 FUN_100ac090

void FUN_100ac090(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0de9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100ac0e0 FUN_100ac0e0

void FUN_100ac0e0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0e19;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x2c),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ac140 FUN_100ac140

void FUN_100ac140(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0e49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::operator=((FString *)(in_ECX + 8),(FString *)(in_ECX + 0x14));
  FString::operator=((FString *)(in_ECX + 0x14),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ac1b0 FUN_100ac1b0

int FUN_100ac1b0(void)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  iVar1 = FUN_100a4fa0();
  if (iVar1 != 0) {
    iVar1 = FUN_100a4fa0();
    if (iVar1 == 0) {
      return -1;
    }
  }
  iVar1 = FUN_100a4fa0();
  if (iVar1 == 0) {
    iVar1 = FUN_100a4fa0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  pFVar2 = (FString *)FUN_100a51c0();
  puVar3 = FString::operator*(pFVar2);
  pFVar2 = (FString *)FUN_100a51c0();
  puVar4 = FString::operator*(pFVar2);
  iVar1 = appStrcmp(puVar4,puVar3);
  return iVar1;
}


// ==== 100ac220 FUN_100ac220

void FUN_100ac220(int *param_1,int *param_2)

{
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f0e82;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator!=((FString *)(*param_2 + 0x14),(ushort *)&DAT_10251d0c);
  uStack_4c = 0x100ac276;
  FUN_100abd40();
  local_8._0_1_ = 1;
  uStack_4c = 0x100ac28d;
  FString::operator!=((FString *)(*param_1 + 0x14),(ushort *)&DAT_10251d0c);
  FUN_100abd40(auStack_54);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100c7c60();
  ExceptionList = local_10;
  return;
}


// ==== 100ac2c0 Catch@100ac2c0

void Catch_100ac2c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ac2d4 Catch@100ac2d4

void Catch_100ac2d4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FriendList::CompareFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ac300 FUN_100ac300

void FUN_100ac300(void)

{
  undefined4 *in_ECX;
  
  appQsort((void *)*in_ECX,in_ECX[1],4,FUN_100ac1b0);
  return;
}


// ==== 100ac320 FUN_100ac320

int FUN_100ac320(int *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < (int)in_ECX[1]) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*piVar2 == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < (int)in_ECX[1]);
  }
  return -1;
}


// ==== 100ac350 FUN_100ac350

undefined4 * FUN_100ac350(undefined4 param_1,undefined4 param_2)

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
    puVar2 = (undefined4 *)FUN_100ac020(param_1,param_2);
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


// ==== 100ac3d0 FUN_100ac3d0

undefined4 FUN_100ac3d0(void)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0ea9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  uVar1 = FUN_100d0a00(&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return uVar1;
}


// ==== 100ac430 FUN_100ac430

void FUN_100ac430(void)

{
  int in_ECX;
  
  appQsort(*(void **)(in_ECX + 4),*(int *)(in_ECX + 8),4,FUN_100ac220);
  return;
}


// ==== 100ac450 FUN_100ac450

void FUN_100ac450(void)

{
  FUN_10187a60(&stack0x00000004);
  return;
}


// ==== 100ac460 FUN_100ac460

undefined4 FUN_100ac460(void)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0ed9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  uVar1 = FUN_100d0a00(&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return uVar1;
}


// ==== 100ac4c0 FUN_100ac4c0

void FUN_100ac4c0(void)

{
  FString *pFVar1;
  int iVar2;
  FString aFStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f0f1a;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack_1c = 0x100ac4f5;
  pFVar1 = (FString *)FUN_100a51c0();
  FString::FString(aFStack_24,pFVar1);
  local_4 = local_4 & 0xffffff00;
  iVar2 = FUN_100ac460();
  if (iVar2 != 0) {
    uStack_1c = 0x100ac525;
    uStack_1c = FUN_100a4fa0();
    uStack_20 = 0x100ac52d;
    FUN_100a4f10();
    uStack_1c = 0x100ac536;
    uStack_1c = FUN_100a4e90();
    uStack_20 = 0x100ac53e;
    FUN_100a4e00();
    uStack_1c = 0x100ac547;
    uStack_1c = FUN_100a50b0();
    uStack_20 = 0x100ac54f;
    FUN_100a5020();
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100ac561;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ac580 FUN_100ac580

void FUN_100ac580(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0f49;
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


// ==== 100ac620 FUN_100ac620

int FUN_100ac620(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_100ac350(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 100ac6a0 FUN_100ac6a0

undefined4 * FUN_100ac6a0(undefined4 param_1,undefined4 param_2)

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
    puVar2 = (undefined4 *)FUN_100abfb0(param_1,param_2);
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


// ==== 100ac720 FUN_100ac720

void FUN_100ac720(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f0f79;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100ac7c0 FUN_100ac7c0

void FUN_100ac7c0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0fac;
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


// ==== 100ac8a0 FUN_100ac8a0

void FUN_100ac8a0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f0fdc;
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


// ==== 100ac920 FUN_100ac920

void FUN_100ac920(void)

{
  int iVar1;
  FString *pFVar2;
  undefined4 uVar3;
  FArray *in_ECX;
  undefined4 uStack_30;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f101c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100adbe0();
  iVar1 = FUN_10187a60();
  if (iVar1 == 0) {
    uStack_30 = 0x100ac9b3;
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)();
    local_4._0_1_ = 2;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_100ad9c0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_100adbe0();
    uStack_30 = 0x100ac9f9;
    FUN_10087320();
    uStack_30 = 0x100aca05;
    iVar1 = FArray::Add(in_ECX,1,4);
    *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = uVar3;
  }
  else {
    pFVar2 = (FString *)FUN_100adb60();
    FString::FString((FString *)&uStack_30,pFVar2);
    local_4 = local_4 & 0xffffff00;
    FUN_100adab0();
  }
  local_4 = 0xffffffff;
  FUN_100ada50();
  ExceptionList = local_c;
  return;
}


// ==== 100aca30 FUN_100aca30

void FUN_100aca30(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  FUN_100aacf0(&param_1);
  iVar1 = param_1;
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    while ((*(int *)(*in_ECX + iVar3 * 4) == 0 || (iVar2 = FUN_100adbe0(), iVar2 != iVar1))) {
      iVar3 = iVar3 + 1;
      if (in_ECX[1] <= iVar3) {
        return;
      }
    }
    FUN_1013d680(iVar3,1);
  }
  return;
}


// ==== 100aca80 FUN_100aca80

void FUN_100aca80(void)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      iVar1 = *(int *)(*(int *)in_ECX + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_100ada50();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,4,0);
  FArray::Empty(in_ECX + 0xc,0xc,0);
  *(undefined4 *)(in_ECX + 0x1c) = 8;
  FUN_1000b930();
  return;
}


// ==== 100acaf0 FUN_100acaf0

void FUN_100acaf0(void)

{
  undefined4 uVar1;
  int iVar2;
  FArray *pFVar3;
  FString *this;
  ushort *puVar4;
  FArray *in_ECX;
  FArray **ppFVar5;
  FArray *pFStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f105c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pFStack_10 = in_ECX;
  uVar1 = FUN_100a51c0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  iVar2 = FUN_100d0a00(uVar1);
  if (iVar2 == 0) {
    pFStack_10 = (FArray *)(**(code **)**(undefined4 **)GMalloc_exref)(0x18,&DAT_1022f8a0);
    local_4._0_1_ = 1;
    if (pFStack_10 == (FArray *)0x0) {
      pFVar3 = (FArray *)0x0;
    }
    else {
      pFVar3 = (FArray *)FUN_100a4d50(&stack0x00000004);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    ppFVar5 = &pFStack_10;
    pFStack_10 = pFVar3;
    this = (FString *)FUN_100a51c0(ppFVar5);
    puVar4 = FString::operator*(this);
    FUN_100ac620(puVar4,ppFVar5);
    iVar2 = FArray::Add(in_ECX,1,4);
    *(FArray **)(*(int *)in_ECX + iVar2 * 4) = pFVar3;
  }
  else {
    uVar1 = FUN_100a4fa0();
    FUN_100a4f10(uVar1);
    uVar1 = FUN_100a4e90();
    FUN_100a4e00(uVar1);
    uVar1 = FUN_100a50b0();
    FUN_100a5020(uVar1);
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100acc00 FUN_100acc00

int FUN_100acc00(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = FUN_10048c20(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = FUN_100ac6a0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 100acc80 FUN_100acc80

int FUN_100acc80(ushort *param_1)

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
        FUN_10099220(iVar4,1);
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


// ==== 100acd00 FUN_100acd00

void FUN_100acd00(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f1091;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100acd70 FUN_100acd70

void FUN_100acd70(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f10b8;
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
  FUN_100ac720();
  ExceptionList = local_c;
  return;
}


// ==== 100acdf0 FUN_100acdf0

int FUN_100acdf0(ushort *param_1)

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
        FUN_100ac7c0(iVar4,1);
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


// ==== 100ace70 FUN_100ace70

void FUN_100ace70(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f10e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100ac7c0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100aced0 FUN_100aced0

int FUN_100aced0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f1135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = -1;
  iVar1 = FUN_100d0a00();
  if (iVar1 == 0) {
    iVar1 = FUN_10004ed0();
    local_8._0_1_ = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100abb60();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::operator*((FString *)&stack0x00000024);
    FUN_100acc00();
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 8); iVar1 = iVar1 + 1) {
      iVar3 = FUN_100ac220();
      if (-1 < iVar3) {
        FArray::Insert((FArray *)(in_ECX + 4),iVar1,1,4);
        *(undefined4 *)(*(int *)(in_ECX + 4) + iVar1 * 4) = uVar2;
        local_1c = iVar1;
        break;
      }
    }
    if (local_1c != -1) goto LAB_100ad037;
    local_1c = FUN_100d9a30();
  }
  else {
    FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000030);
    local_8._0_1_ = 1;
    FUN_100ac0e0();
    FString::FString((FString *)&stack0xffffffb8,(FString *)&stack0x00000018);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100ac140();
    local_1c = FUN_100ac320();
  }
  if (local_1c == -1) {
    appFailAssert("-1 != nIndex",".\\MSN\\MsnFriend.cpp",0x7a);
  }
LAB_100ad037:
  local_8 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_10;
  return local_1c;
}


// ==== 100ad05c Catch@100ad05c

void Catch_100ad05c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100ad070 Catch@100ad070

void Catch_100ad070(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FriendList::AddFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ad090 FUN_100ad090

void FUN_100ad090(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1159;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  iVar5 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + iVar5 * 4);
      if ((iVar1 != 0) &&
         (iVar3 = FString::operator==((FString *)(iVar1 + 0x20),(FString *)&stack0x00000004),
         iVar3 != 0)) {
        FUN_100abc50(uVar2);
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
        FUN_1013d680(iVar5,1);
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 8));
  }
  puVar4 = FString::operator*((FString *)&stack0x00000004);
  FUN_100acc80(puVar4);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ad150 FUN_100ad150

void FUN_100ad150(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_100abc50();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 8));
  }
  FArray::Empty((FArray *)(in_ECX + 4),4,0);
  FUN_10098e80(0);
  *(undefined4 *)(in_ECX + 0x20) = 8;
  FUN_1006b150();
  return;
}


// ==== 100ad1c0 FUN_100ad1c0

void FUN_100ad1c0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100acd70(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100ad210 FUN_100ad210

void FUN_100ad210(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f11cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_100aca80(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = local_4 & 0xffffff00;
  FUN_100acd70();
  local_4 = 0xffffffff;
  FUN_100a1780();
  ExceptionList = local_c;
  return;
}


// ==== 100ad280 FUN_100ad280

void FUN_100ad280(void)

{
  FUN_100ad150();
  FUN_100ad150();
  FUN_100ad150();
  FUN_100ad150();
  FUN_100aca80();
  return;
}


// ==== 100ad2b0 FUN_100ad2b0

void FUN_100ad2b0(void)

{
  uint uVar1;
  FString *pFVar2;
  FString *this;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  int *in_ECX;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f120a;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar6 = 0;
  if (0 < in_ECX[1]) {
    do {
      pFVar4 = *(FString **)(*in_ECX + iVar6 * 4);
      if (pFVar4 != (FString *)0x0) {
        pFVar2 = (FString *)FUN_100a51c0(uVar1);
        this = (FString *)FUN_100a51c0();
        iVar3 = FString::operator==(this,pFVar2);
        if (iVar3 != 0) {
          local_4 = local_4 & 0xffffff00;
          FString::~FString(pFVar4);
          (**(code **)(**(int **)GMalloc_exref + 8))(pFVar4);
          FUN_1013d680(iVar6,1);
          break;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_ECX[1]);
  }
  pFVar4 = (FString *)FUN_100a51c0(uVar1);
  puVar5 = FString::operator*(pFVar4);
  FUN_100acdf0(puVar5);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ad390 FUN_100ad390

void FUN_100ad390(void)

{
  FString *this;
  uint uVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f1239;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      this = *(FString **)(*(int *)in_ECX + iVar2 * 4);
      if (this != (FString *)0x0) {
        local_4 = 0xffffffff;
        FString::~FString(this);
        (**(code **)(**(int **)GMalloc_exref + 8))(this,uVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,4,0);
  FUN_100ac8a0(0);
  *(undefined4 *)(in_ECX + 0x1c) = 8;
  FUN_1006b150();
  ExceptionList = local_c;
  return;
}


// ==== 100ad430 FUN_100ad430

void FUN_100ad430(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f1271;
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


// ==== 100ad4a0 FUN_100ad4a0

void FUN_100ad4a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1298;
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
  FUN_100ace70();
  ExceptionList = local_c;
  return;
}


// ==== 100ad520 FUN_100ad520

void FUN_100ad520(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f12e4;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  FUN_100acd00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100ad580 FUN_100ad580

void FUN_100ad580(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100ad4a0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100ad5d0 FUN_100ad5d0

void FUN_100ad5d0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f1357;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 1));
  local_4 = 1;
  FUN_1009a360(uVar1);
  *in_ECX = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 100ad650 FUN_100ad650

void FUN_100ad650(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f139e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_100ad150(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = local_4 & 0xffffff00;
  FUN_1009a600();
  local_4 = 0xffffffff;
  FUN_100a1820();
  ExceptionList = local_c;
  return;
}


// ==== 100ad6c0 FUN_100ad6c0

void FUN_100ad6c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f13f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    (0x24,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_c = (void *)0x0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ad5d0(1);
  }
  local_c = (void *)0xffffffff;
  *in_ECX = uVar2;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x24,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ad5d0(2);
  }
  in_ECX[1] = uVar2;
  pvVar3 = (void *)0x24;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x24,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ad5d0(4);
  }
  in_ECX[2] = uVar2;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x24,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ad5d0(8);
  }
  in_ECX[3] = uVar2;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x20,&DAT_1022f8a0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ad520();
  }
  in_ECX[4] = uVar2;
  ExceptionList = pvVar3;
  return;
}


// ==== 100ad820 FUN_100ad820

void FUN_100ad820(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f1444;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  FUN_100ad430(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100ad880 FUN_100ad880

void FUN_100ad880(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    FUN_100ad650();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    *in_ECX = 0;
  }
  iVar1 = in_ECX[1];
  if (iVar1 != 0) {
    FUN_100ad650();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    in_ECX[1] = 0;
  }
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_100ad650();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    in_ECX[2] = 0;
  }
  iVar1 = in_ECX[3];
  if (iVar1 != 0) {
    FUN_100ad650();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    in_ECX[3] = 0;
  }
  iVar1 = in_ECX[4];
  if (iVar1 != 0) {
    FUN_100ad210();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    in_ECX[4] = 0;
  }
  return;
}


// ==== 100ad930 FUN_100ad930

void FUN_100ad930(void)

{
  FString *in_ECX;
  undefined4 in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f147e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(in_ECX);
  local_4._0_1_ = 1;
  FString::FString(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::operator=(in_ECX,(FString *)&stack0x00000004);
  *(undefined4 *)(in_ECX + 0x18) = in_stack_00000010;
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ad9c0 FUN_100ad9c0

void FUN_100ad9c0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f14b5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FString::operator=(in_ECX + 0xc,param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 100ada50 FUN_100ada50

void FUN_100ada50(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f14e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100adab0 FUN_100adab0

void FUN_100adab0(void)

{
  FString *in_ECX;
  FString aFStack_34 [4];
  undefined4 uStack_30;
  FString aFStack_28 [4];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f151b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack_24 = 0x100adae9;
  FString::operator=(in_ECX,(FString *)&stack0x00000004);
  uStack_30 = 0x100adafd;
  FString::FString(aFStack_28," ");
  local_4._0_1_ = 1;
  FString::FString(aFStack_34,"%20");
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100c7130(&stack0x00000004);
  uStack_24 = 0x100adb3b;
  FString::operator=(in_ECX + 0xc,(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100adb60 FUN_100adb60

void FUN_100adb60(void)

{
  return;
}


// ==== 100adb70 FUN_100adb70

void FUN_100adb70(void)

{
  ushort *puVar1;
  FString *in_ECX;
  ushort *puVar2;
  ushort local_20c [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_20c;
  appMemset(local_20c,0,0x208);
  puVar2 = local_20c;
  puVar1 = FString::operator*(in_ECX);
  FUN_100c75a0(puVar1,puVar2);
  FString::operator=(in_ECX + 0xc,local_20c);
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}


// ==== 100adbe0 FUN_100adbe0

undefined4 FUN_100adbe0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 100adbf0 FUN_100adbf0

void FUN_100adbf0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f1548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100a8a80(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 100adc40 FUN_100adc40

void FUN_100adc40(void)

{
  int in_ECX;
  
  FUN_100ab4c0(*(undefined4 *)(in_ECX + 4));
  return;
}


// ==== 100adc50 FUN_100adc50

bool FUN_100adc50(int param_1)

{
  return param_1 == 0x14;
}


// ==== 100adc60 FUN_100adc60

void FUN_100adc60(void)

{
  int in_ECX;
  FString aFStack_124 [4];
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined4 uStack_dc;
  undefined1 *puStack_d8;
  undefined4 uStack_9c;
  FString aFStack_94 [4];
  undefined4 uStack_90;
  undefined4 uStack_88;
  FString *pFStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  FString local_68 [12];
  FString local_5c [12];
  undefined1 local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f15c5;
  local_c = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_c;
  local_4 = 1;
  uStack_80 = 0;
  pFStack_84 = local_5c;
  uStack_88 = 0x100adca1;
  FUN_100a6140();
  local_4._0_1_ = 2;
  uStack_80 = 1;
  pFStack_84 = local_68;
  uStack_88 = 0x100adcb9;
  FUN_100a6140();
  local_4._0_1_ = 3;
  uStack_90 = 0x100adcd2;
  FString::FString((FString *)&uStack_88,local_68);
  local_4._0_1_ = 4;
  uStack_9c = 0x100adcee;
  FString::FString(aFStack_94,local_5c);
  local_4._0_1_ = 3;
  FUN_100aba70();
  local_4._0_1_ = 6;
  puStack_d8 = &stack0x00000040;
  uStack_dc = 0x100add22;
  FUN_100a9630();
  local_4._0_1_ = 7;
  puStack_11c = local_50;
  uStack_120 = 0x100add43;
  FUN_100abb60();
  local_4._0_1_ = 8;
  FString::FString(aFStack_124,(FString *)(in_ECX + 100));
  local_4._0_1_ = 6;
  FUN_100ab010();
  local_4._0_1_ = 3;
  uStack_80 = 0x100add87;
  FUN_100abc50();
  local_4._0_1_ = 2;
  uStack_80 = 0x100add96;
  FString::~FString(local_68);
  local_4._0_1_ = 1;
  uStack_80 = 0x100adda5;
  FString::~FString(local_5c);
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_80 = 0x100addb6;
  FUN_100a8d50();
  local_4 = 0xffffffff;
  uStack_80 = 0x100addca;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100adde0 FUN_100adde0

void FUN_100adde0(void)

{
  int in_ECX;
  FString aFStack_c8 [4];
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  undefined4 uStack_98;
  FString aFStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_84;
  FString *pFStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  FString local_68 [12];
  FString local_5c [12];
  undefined1 local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f162d;
  local_c = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xffffff8c;
  ExceptionList = &local_c;
  local_4 = 1;
  uStack_7c = 0;
  pFStack_80 = local_5c;
  uStack_84 = 0x100ade21;
  FUN_100a6140();
  local_4._0_1_ = 2;
  uStack_7c = 1;
  pFStack_80 = local_68;
  uStack_84 = 0x100ade39;
  FUN_100a6140();
  local_4._0_1_ = 3;
  uStack_8c = 0x100ade52;
  FString::FString((FString *)&uStack_84,local_68);
  local_4._0_1_ = 4;
  uStack_98 = 0x100ade6e;
  FString::FString(aFStack_90,local_5c);
  local_4._0_1_ = 3;
  FUN_100aba70();
  local_4._0_1_ = 6;
  puStack_c0 = local_50;
  uStack_c4 = 0x100ade9f;
  FUN_100abb60();
  local_4._0_1_ = 7;
  FString::FString(aFStack_c8,(FString *)(in_ECX + 100));
  local_4._0_1_ = 6;
  FUN_100ab130();
  local_4._0_1_ = 3;
  uStack_7c = 0x100adee0;
  FUN_100abc50();
  local_4._0_1_ = 2;
  uStack_7c = 0x100adeef;
  FString::~FString(local_68);
  local_4._0_1_ = 1;
  uStack_7c = 0x100adefe;
  FString::~FString(local_5c);
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_7c = 0x100adf0c;
  FUN_100a8d50();
  local_4 = 0xffffffff;
  uStack_7c = 0x100adf20;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100adf40 FUN_100adf40

int FUN_100adf40(void)

{
  int in_ECX;
  
  return in_ECX + 100;
}


// ==== 100adf50 FUN_100adf50

void FUN_100adf50(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1659;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x70),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100adfb0 FUN_100adfb0

undefined4 FUN_100adfb0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x7c);
}


// ==== 100adfc0 FUN_100adfc0

void FUN_100adfc0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1691;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100a8a10(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::operator=(in_ECX,(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ae030 FUN_100ae030

void FUN_100ae030(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f16b9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x1c),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ae090 FUN_100ae090

FString * FUN_100ae090(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f16fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x24));
  ExceptionList = local_c;
  return param_1;
}


// ==== 100ae0f0 FUN_100ae0f0

void FUN_100ae0f0(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f175c;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  FString::FString(aFStack_48,(ushort *)&DAT_10255f60);
  local_4 = 0xffffffff;
  FUN_100adfc0();
  local_4 = 1;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FUN_100ae090();
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_100a8540();
  FString::FString(aFStack_48,(FString *)(in_ECX + 0x70));
  local_4._0_1_ = 1;
  FUN_100a8540();
  FString::FString(aFStack_48,(FString *)(in_ECX + 100));
  local_4._0_1_ = 1;
  FUN_100a8540();
  uStack_40 = 0x14;
  uStack_44 = 0x100ae1cb;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100bdaa0();
  local_4 = 0xffffffff;
  uStack_40 = 0x100ae203;
  FUN_100a9100();
  ExceptionList = local_c;
  return;
}


// ==== 100ae220 FUN_100ae220

void FUN_100ae220(void)

{
  int in_ECX;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f17b3;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  FString::FString(aFStack_48,(ushort *)&DAT_10255f68);
  local_4 = 0xffffffff;
  FUN_100adfc0();
  local_4 = 1;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FUN_100ae090();
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_100a8540();
  FString::FString(aFStack_48,(FString *)(in_ECX + 0x70));
  local_4._0_1_ = 1;
  FUN_100a8540();
  uStack_40 = 0x12;
  uStack_44 = 0x100ae2d6;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100bdaa0();
  local_4 = 0xffffffff;
  uStack_40 = 0x100ae30e;
  FUN_100a9100();
  ExceptionList = local_c;
  return;
}


// ==== 100ae320 FUN_100ae320

void FUN_100ae320(void)

{
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  FString aFStack_58 [8];
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 local_3c [32];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101f17e9;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = aFStack_58;
  uStack_60 = 0x100ae365;
  FString::FString(aFStack_58,(ushort *)&DAT_10255970);
  local_8 = local_8 & 0xffffff00;
  FUN_100adfc0();
  local_8._0_1_ = 2;
  local_1c = auStack_68;
  FUN_100adbf0(local_3c);
  local_8._0_1_ = 2;
  FUN_100bdaa0();
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_50 = 0x100ae3a3;
  FUN_100a9100();
  ExceptionList = local_10;
  return;
}


// ==== 100ae3bc Catch@100ae3bc

void Catch_100ae3bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ae3d0 Catch@100ae3d0

void Catch_100ae3d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"SwitchboardSession::Close");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ae3f0 FUN_100ae3f0

void FUN_100ae3f0(void)

{
  int in_ECX;
  FString aFStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f1842;
  local_c = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_44,(ushort *)&DAT_10255fa4);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_44,(FString *)(in_ECX + 0x98));
  local_4._0_1_ = 2;
  FUN_100a8540();
  uStack_3c = 0x13;
  uStack_40 = 0x100ae483;
  FUN_100c0b00();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_3c = 0x100ae4b9;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_3c = 0x100ae4ca;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100ae4e0 FUN_100ae4e0

void FUN_100ae4e0(void)

{
  int in_ECX;
  undefined4 uStack00000004;
  FString aFStack_4c [8];
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f189a;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack00000004 = 1;
  FString::FString(aFStack_4c,(ushort *)&DAT_1024d2e0);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_4c,"U");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100a9630();
  local_4._0_1_ = 4;
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdd70();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_44 = 0x100ae5d3;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_44 = 0x100ae5e4;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100ae600 FUN_100ae600

void FUN_100ae600(void)

{
  int in_ECX;
  undefined4 uStack00000004;
  FString aFStack_4c [8];
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f18fa;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack00000004 = 2;
  FString::FString(aFStack_4c,(ushort *)&DAT_1024d2e0);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_4c,"N");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100a9630();
  local_4._0_1_ = 4;
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdd70();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_44 = 0x100ae6f2;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_44 = 0x100ae703;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100ae720 FUN_100ae720

void FUN_100ae720(void)

{
  int in_ECX;
  undefined4 uStack00000004;
  FString aFStack_48 [8];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f195a;
  local_c = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  uStack00000004 = 3;
  FString::FString(aFStack_48,(ushort *)&DAT_1024d2e0);
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_48,"N");
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100a9630();
  local_4._0_1_ = 4;
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdd70();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_40 = 0x100ae813;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_40 = 0x100ae824;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100ae840 FUN_100ae840

void FUN_100ae840(void)

{
  int in_ECX;
  FString aFStack_44 [8];
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 local_28 [12];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f19b3;
  local_c = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(aFStack_44,"CAL");
  local_4 = local_4 & 0xffffff00;
  FUN_100adfc0();
  local_4._0_1_ = 2;
  local_1c = *(undefined4 *)(in_ECX + 0x4c);
  FString::FString(aFStack_44,(FString *)&stack0x00000004);
  local_4._0_1_ = 2;
  FUN_100a8540();
  FUN_100a8a80(local_28);
  local_4._0_1_ = 2;
  FUN_100bdaa0();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_3c = 0x100ae8fe;
  FUN_100a9100();
  local_4 = 0xffffffff;
  uStack_3c = 0x100ae910;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100ae930 FUN_100ae930

void FUN_100ae930(int *param_1)

{
  undefined4 *puVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f19d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar2 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (undefined4 *)FUN_100c56a0(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 100ae9c0 FUN_100ae9c0

void FUN_100ae9c0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 >> 0x10 == 0) {
    iVar1 = WSAAsyncSelect(*(SOCKET *)(in_ECX + 4),DAT_103663b8,0x50c,0x25);
    if (iVar1 != 0) {
      WSAGetLastError();
      return;
    }
    if (*(int *)(in_ECX + 0x94) == 0) {
      FUN_100ae220();
      return;
    }
    FUN_100ae0f0();
  }
  return;
}


// ==== 100aea10 FUN_100aea10

void FUN_100aea10(void)

{
  ushort *puVar1;
  int iVar2;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f1a12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  FString::FString(local_18,puVar1);
  local_4._0_1_ = 1;
  iVar2 = FUN_100d0a00(local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (iVar2 != 0) {
    FUN_100abce0(iVar2);
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100aeab0 FUN_100aeab0

FString * FUN_100aeab0(FString *param_1)

{
  FString *pFVar1;
  int in_ECX;
  int iVar2;
  uint uStack_4c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f1a64;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  FString::FString(param_1);
  local_18 = 1;
  local_8._0_1_ = 2;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x84); iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x80) + 0x10 + iVar2 * 0x14) != 0) {
      pFVar1 = (FString *)FUN_100abd40(local_2c);
      local_8._0_1_ = 3;
      FString::operator+=(param_1,pFVar1);
      local_8._0_1_ = 2;
      FString::~FString(local_2c);
      FString::operator+=(param_1,(ushort *)&DAT_10246d48);
    }
  }
  local_8._0_1_ = 1;
  FUN_100b73f0();
  FString::Len(param_1);
  pFVar1 = (FString *)FString::Left(param_1,(int)local_2c);
  local_8._0_1_ = 4;
  FString::operator=(param_1,pFVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 100aebb3 Catch@100aebb3

void Catch_100aebb3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100aebc7 Catch@100aebc7

void Catch_100aebc7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"SwitchboardSession::GetSessionTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100aebf0 FUN_100aebf0

void FUN_100aebf0(void)

{
  undefined1 *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_40;
  ushort *puStack_3c;
  undefined1 **ppuStack_38;
  uint uStack_34;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f1aa5;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_18 = (undefined1 *)&uStack_40;
  FString::FString((FString *)&uStack_40,(FString *)&stack0x00000024);
  local_8._0_1_ = 1;
  puVar1 = (undefined1 *)FUN_100aa5a0();
  local_18 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    ppuStack_38 = (undefined1 **)0x44;
    puStack_3c = (ushort *)0x100aec60;
    iVar2 = FUN_10004ed0();
    local_8._0_1_ = 3;
    if (iVar2 == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      ppuStack_38 = (undefined1 **)&stack0x00000004;
      puStack_3c = (ushort *)0x100aec79;
      puVar1 = (undefined1 *)FUN_100abb60();
    }
    local_8._0_1_ = 1;
    local_18 = puVar1;
    FString::FString((FString *)&uStack_40,"NLN");
    local_8._0_1_ = 1;
    FUN_100ac140();
  }
  ppuStack_38 = &local_18;
  puStack_3c = (ushort *)0x100aecb3;
  puStack_3c = FString::operator*((FString *)&stack0x00000024);
  uStack_40 = 0x100aecbf;
  FUN_100acc00();
  *(undefined1 **)(in_ECX + 0x7c) = puVar1;
  local_8 = 0xffffffff;
  ppuStack_38 = (undefined1 **)0x100aecd1;
  FUN_100abc50();
  ExceptionList = local_10;
  return;
}


// ==== 100aece5 Catch@100aece5

void Catch_100aece5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100aecf9 Catch@100aecf9

void Catch_100aecf9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"SwitchboardSession::AddFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100aed20 FUN_100aed20

void FUN_100aed20(void)

{
  ushort *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1ac9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  FUN_100acc80(puVar1);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100aed90 FUN_100aed90

void FUN_100aed90(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uStack_34;
  FString *pFStack_30;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f1b1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pFStack_30 = local_18;
  uStack_34 = 0x100aedd3;
  FUN_100a6140();
  local_4._0_1_ = 1;
  pFStack_30 = (FString *)0x100aede5;
  FString::operator=((FString *)(in_ECX + 100),local_18);
  FString::FString((FString *)&uStack_34,(FString *)(in_ECX + 0x98));
  local_4._0_1_ = 1;
  uVar1 = FUN_100aa5a0();
  FUN_100abb60(uVar1);
  local_4._0_1_ = 1;
  FUN_100aebf0();
  FString::FString((FString *)&uStack_34,local_18);
  local_4._0_1_ = 1;
  FUN_100ab330();
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100aee90 FUN_100aee90

void FUN_100aee90(void)

{
  int in_ECX;
  FString aFStack_e0 [4];
  undefined4 uStack_dc;
  undefined1 *puStack_d8;
  undefined1 auStack_d4 [36];
  undefined4 uStack_b0;
  FString aFStack_a8 [4];
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  FString *pFStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined1 local_80 [68];
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f1b8d;
  local_10 = ExceptionList;
  uStack_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_90;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_94 = 0;
  pFStack_98 = local_3c;
  uStack_9c = 0x100aeed6;
  FUN_100a6140();
  local_8._0_1_ = 2;
  uStack_94 = 1;
  pFStack_98 = local_30;
  uStack_9c = 0x100aeee8;
  FUN_100a6140();
  local_8._0_1_ = 3;
  local_1c = (undefined1 *)&uStack_9c;
  uStack_a4 = 0x100aeefe;
  FString::FString((FString *)&uStack_9c,local_30);
  local_8._0_1_ = 4;
  local_20 = aFStack_a8;
  uStack_b0 = 0x100aef14;
  FString::FString(aFStack_a8,local_3c);
  local_8._0_1_ = 3;
  FUN_100aba70();
  local_8._0_1_ = 6;
  local_20 = auStack_d4;
  puStack_d8 = local_80;
  uStack_dc = 0x100aef3a;
  FUN_100abb60();
  local_8._0_1_ = 6;
  puStack_d8 = (undefined1 *)0x100aef48;
  FUN_100aebf0();
  local_20 = auStack_d4;
  puStack_d8 = local_80;
  uStack_dc = 0x100aef59;
  FUN_100abb60();
  local_8._0_1_ = 8;
  local_1c = aFStack_e0;
  FString::FString(aFStack_e0,(FString *)(in_ECX + 100));
  local_8._0_1_ = 6;
  FUN_100aae50();
  local_8._0_1_ = 3;
  uStack_94 = 0x100aef8a;
  FUN_100abc50();
  local_8._0_1_ = 2;
  uStack_94 = 0x100aef97;
  FString::~FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_94 = 0x100aefa4;
  FString::~FString(local_3c);
  local_8 = 0xffffffff;
  uStack_94 = 0x100aefb3;
  FUN_100a8d50();
  ExceptionList = local_10;
  return;
}


// ==== 100aefc7 Catch@100aefc7

void Catch_100aefc7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100aefdb Catch@100aefdb

void Catch_100aefdb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"SwitchboardSession::ProcessJOI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100af000 FUN_100af000

void FUN_100af000(void)

{
  int in_ECX;
  FString aFStack_d4 [4];
  undefined4 uStack_d0;
  undefined1 *puStack_cc;
  undefined1 auStack_c8 [44];
  undefined4 uStack_9c;
  undefined4 uStack_90;
  FString *pFStack_8c;
  undefined1 *puStack_88;
  uint uStack_84;
  undefined1 local_74 [68];
  FString local_30 [16];
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f1bec;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  puStack_88 = (undefined1 *)0x0;
  pFStack_8c = local_30;
  uStack_90 = 0x100af046;
  FUN_100a6140();
  local_8._0_1_ = 2;
  puStack_88 = (undefined1 *)0x100af052;
  FUN_10096660();
  local_8._0_1_ = 3;
  puStack_88 = local_74;
  local_1c = &stack0xffffff6c;
  uStack_9c = 0x100af06d;
  FString::FString((FString *)&stack0xffffff6c,local_30);
  local_8._0_1_ = 3;
  FUN_100aea10();
  local_1c = (undefined1 *)&uStack_90;
  FString::FString((FString *)&uStack_90,local_30);
  local_8._0_1_ = 3;
  FUN_100aed20();
  local_1c = auStack_c8;
  puStack_cc = local_74;
  uStack_d0 = 0x100af0ac;
  FUN_100abb60();
  local_8._0_1_ = 6;
  local_20 = aFStack_d4;
  FString::FString(aFStack_d4,(FString *)(in_ECX + 100));
  local_8._0_1_ = 3;
  FUN_100aaf30();
  local_8._0_1_ = 2;
  puStack_88 = (undefined1 *)0x100af0dd;
  FUN_100abc50();
  local_8 = CONCAT31(local_8._1_3_,1);
  puStack_88 = (undefined1 *)0x100af0ea;
  FString::~FString(local_30);
  local_8 = 0xffffffff;
  puStack_88 = (undefined1 *)0x100af0f9;
  FUN_100a8d50();
  ExceptionList = local_10;
  return;
}


// ==== 100af10d Catch@100af10d

void Catch_100af10d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100af121 Catch@100af121

void Catch_100af121(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"SwitchboardSession::ProcessBYE");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100af140 FUN_100af140

void FUN_100af140(void)

{
  int iVar1;
  int in_ECX;
  FString aFStack_94 [4];
  undefined4 uStack_90;
  undefined4 uStack_88;
  FString *pFStack_84;
  FString local_68 [12];
  FString local_5c [12];
  undefined1 local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f1c5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pFStack_84 = (FString *)0x100af181;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_102560c8);
  if (iVar1 == 0) {
    pFStack_84 = (FString *)0x100af25c;
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255f60);
    if (iVar1 == 0) goto LAB_100af2c5;
    pFStack_84 = local_5c;
    uStack_88 = 0x100af273;
    FUN_100a6140();
    local_4._0_1_ = 7;
    pFStack_84 = (FString *)0x100af288;
    iVar1 = FString::operator==(local_5c,(ushort *)&DAT_102560c0);
    if (iVar1 != 0) {
      uStack_90 = 0x100af29f;
      FString::FString((FString *)&uStack_88,(FString *)(in_ECX + 100));
      local_4._0_1_ = 7;
      FUN_100ab330();
    }
  }
  else {
    pFStack_84 = local_5c;
    uStack_88 = 0x100af1a0;
    FUN_100a6140();
    local_4._0_1_ = 1;
    pFStack_84 = local_68;
    uStack_88 = 0x100af1b8;
    FUN_100a6140();
    local_4._0_1_ = 2;
    uStack_90 = 0x100af1d0;
    FString::FString((FString *)&uStack_88,local_68);
    local_4._0_1_ = 3;
    FString::FString(aFStack_94,local_5c);
    local_4._0_1_ = 2;
    FUN_100aba70();
    local_4._0_1_ = 5;
    FUN_100abb60(local_50);
    local_4._0_1_ = 5;
    FUN_100aebf0();
    local_4._0_1_ = 2;
    FUN_100abc50();
    local_4._0_1_ = 1;
    FString::~FString(local_68);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_5c);
LAB_100af2c5:
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100af2f0 FUN_100af2f0

void FUN_100af2f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f1c88;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_100a8d50(DAT_103554c4 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}


// ==== 100af340 FUN_100af340

void FUN_100af340(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f1d17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_100a5fc0(&stack0x00000008);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_100c2e40(param_1);
  local_4._0_1_ = 3;
  *in_ECX = SwitchboardSession::vftable;
  FString::FString((FString *)(in_ECX + 0x19));
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x1c));
  local_4._0_1_ = 5;
  FUN_1009a360();
  local_4._0_1_ = 7;
  FString::FString((FString *)(in_ECX + 0x26));
  local_4._0_1_ = 8;
  FString::operator=((FString *)(in_ECX + 0x19),(FString *)&stack0x00000018);
  in_ECX[0x25] = 0;
  in_ECX[0x1f] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000008);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000018);
  ExceptionList = local_c;
  return;
}


// ==== 100af440 FUN_100af440

void FUN_100af440(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f1d85;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *in_ECX = SwitchboardSession::vftable;
  local_4 = 4;
  FUN_10098e80(0);
  in_ECX[0x24] = 8;
  FUN_1006b150(uVar1);
  in_ECX[0x1f] = 0;
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x26));
  local_4._0_1_ = 2;
  FUN_1009a600();
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x1c));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x19));
  local_4 = 0xffffffff;
  FUN_100c2ef0();
  ExceptionList = local_c;
  return;
}


// ==== 100af500 FUN_100af500

void FUN_100af500(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f1dc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 == 0x12) {
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100ae3f0();
  }
  else if (param_1 == 0x13) {
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100aed90();
  }
  else if (param_1 == 0x14) {
    FUN_100a8cd0(&stack0x00000008);
    local_4 = local_4 & 0xffffff00;
    FUN_100af140();
  }
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100af5d0 FUN_100af5d0

void FUN_100af5d0(void)

{
  int in_ECX;
  FString aFStack_180 [4];
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined4 uStack_f8;
  FString aFStack_f0 [4];
  undefined4 uStack_ec;
  undefined4 uStack_e4;
  FString *pFStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  FString local_c4 [12];
  FString local_b8 [12];
  undefined1 *local_ac;
  undefined1 local_a8 [88];
  undefined1 local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f1e6c;
  local_c = ExceptionList;
  uStack_d8 = DAT_103554c4 ^ (uint)&stack0xffffff2c;
  ExceptionList = &local_c;
  local_4 = 1;
  uStack_dc = 0x100af611;
  FUN_1009ae20();
  local_4._0_1_ = 2;
  uStack_ec = 0x100af631;
  FString::FString((FString *)&uStack_e4,(FString *)&stack0x0000005c);
  local_4._0_1_ = 2;
  FUN_100ae030();
  puStack_134 = local_a8;
  uStack_138 = 0x100af65f;
  FUN_100a9630();
  local_4._0_1_ = 2;
  puStack_134 = (undefined1 *)0x100af675;
  FUN_100ae720();
  uStack_dc = 0;
  pFStack_e0 = local_b8;
  uStack_e4 = 0x100af688;
  FUN_100a6140();
  local_4._0_1_ = 5;
  uStack_dc = 1;
  pFStack_e0 = local_c4;
  uStack_e4 = 0x100af6a3;
  FUN_100a6140();
  local_4._0_1_ = 6;
  uStack_ec = 0x100af6bf;
  FString::FString((FString *)&uStack_e4,local_c4);
  local_4._0_1_ = 7;
  uStack_f8 = 0x100af6db;
  FString::FString(aFStack_f0,local_b8);
  local_4._0_1_ = 6;
  FUN_100aba70();
  local_4._0_1_ = 9;
  puStack_134 = &stack0x00000040;
  uStack_138 = 0x100af715;
  FUN_100a9630();
  local_4._0_1_ = 10;
  puStack_178 = local_50;
  uStack_17c = 0x100af736;
  FUN_100abb60();
  local_4._0_1_ = 0xb;
  local_ac = aFStack_180;
  FString::FString(aFStack_180,(FString *)(in_ECX + 100));
  local_4._0_1_ = 9;
  FUN_100ab210();
  local_4._0_1_ = 6;
  uStack_dc = 0x100af780;
  FUN_100abc50();
  local_4._0_1_ = 5;
  uStack_dc = 0x100af792;
  FString::~FString(local_c4);
  local_4._0_1_ = 2;
  uStack_dc = 0x100af7a3;
  FString::~FString(local_b8);
  local_4._0_1_ = 1;
  uStack_dc = 0x100af7b4;
  FUN_100a9760();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_dc = 0x100af7c8;
  FUN_100a8d50();
  local_4 = 0xffffffff;
  uStack_dc = 0x100af7df;
  FUN_100a9760();
  ExceptionList = local_c;
  return;
}


// ==== 100af800 FUN_100af800

void FUN_100af800(void)

{
  FString *pFVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_94;
  int aiStack_90 [2];
  FString aFStack_88 [4];
  undefined1 auStack_84 [8];
  FString local_7c [12];
  FString aFStack_70 [4];
  undefined1 auStack_6c [8];
  int local_64;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f1f4c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1009ae20();
  local_4._0_1_ = 1;
  FUN_100a61c0();
  FArray::FArray((FArray *)&local_94);
  local_4._0_1_ = 3;
  FString::FString(local_7c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_100c4060();
  pFVar1 = (FString *)(in_ECX + 0x20);
  iVar2 = FString::InStr(pFVar1,(ushort *)&DAT_1023d1c8,0);
  while (iVar2 != -1) {
    pFVar3 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)();
    if (iVar2 == 0) {
      if (pFVar3 == (FString *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FString::FString(pFVar3,(ushort *)&DAT_1023d1c8);
      }
      iVar2 = FArray::Add((FArray *)aiStack_90,1,4);
      *(undefined4 *)(aiStack_90[0] + iVar2 * 4) = uVar4;
      FString::Len(pFVar1);
      pFVar3 = (FString *)FString::Right(pFVar1,(int)auStack_84);
      local_4._0_1_ = 6;
      FString::operator=(pFVar1,pFVar3);
      local_4 = CONCAT31(local_4._1_3_,4);
      FString::~FString(aFStack_88);
    }
    else {
      if (pFVar3 == (FString *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FString::Left(pFVar1,(int)pFVar3);
      }
      iVar2 = FArray::Add((FArray *)aiStack_90,1,4);
      *(undefined4 *)(aiStack_90[0] + iVar2 * 4) = uVar4;
      FString::Len(pFVar1);
      pFVar3 = (FString *)FString::Right(pFVar1,(int)auStack_6c);
      local_4._0_1_ = 8;
      FString::operator=(pFVar1,pFVar3);
      local_4 = CONCAT31(local_4._1_3_,4);
      FString::~FString(aFStack_70);
    }
    iVar2 = FString::InStr(pFVar1,(ushort *)&DAT_1023d1c8,0);
  }
  iVar2 = FString::Len(pFVar1);
  if (0 < iVar2) {
    pFVar3 = (FString *)(**(code **)**(undefined4 **)GMalloc_exref)();
    local_4._0_1_ = 9;
    if (pFVar3 == (FString *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FString::FString(pFVar3,pFVar1);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    iVar2 = FArray::Add((FArray *)&local_94,1,4);
    *(undefined4 *)(local_94 + iVar2 * 4) = uVar4;
  }
  FUN_100ae930();
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),4);
  FUN_100a9340();
  iVar2 = 0;
  if (0 < aiStack_90[0]) {
    do {
      pFVar1 = *(FString **)(local_94 + iVar2 * 4);
      if (pFVar1 != (FString *)0x0) {
        FString::~FString(pFVar1);
        (**(code **)(**(int **)GMalloc_exref + 8))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < aiStack_90[0]);
  }
  FArray::Empty((FArray *)&local_94,4,0);
  if (local_64 == 1) {
    FUN_100a9630();
    local_4._0_1_ = 0xb;
    FUN_100a8cd0(&stack0x00000004);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_100adde0();
  }
  else if (local_64 == 2) {
    FUN_100a9630();
    local_4._0_1_ = 0xd;
    FUN_100a8cd0(&stack0x00000004);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_100adc60();
  }
  else if (local_64 == 3) {
    FUN_100a9630();
    local_4._0_1_ = 0xf;
    FUN_100a8cd0(&stack0x00000004);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_100af5d0();
  }
  local_4._0_1_ = 3;
  FString::~FString(local_7c);
  local_4._0_1_ = 1;
  FUN_100a8800();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100a9760();
  local_4 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_c;
  return;
}


// ==== 100afc20 FUN_100afc20

void FUN_100afc20(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f1f90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_1024d2e0);
  if (iVar1 == 0) {
    iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255948);
    if (iVar1 == 0) {
      iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_10255978);
      if (iVar1 != 0) {
        FUN_100a8cd0(&stack0x00000004);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_100af000();
      }
    }
    else {
      FUN_100a8cd0(&stack0x00000004);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_100aee90();
    }
  }
  else {
    FUN_100a8cd0(&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100af800();
  }
  local_8 = 0xffffffff;
  FUN_100a8d50();
  ExceptionList = local_10;
  return;
}


// ==== 100afd13 Catch@100afd13

void Catch_100afd13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100afd27 Catch@100afd27

void Catch_100afd27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"SwitchboardSession::ProcessNotifyMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100afd50 FUN_100afd50

bool FUN_100afd50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 100afdb0 FUN_100afdb0

void FUN_100afdb0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_1000cc70(0x203,(short)param_2 - *(short *)(in_ECX + 0x80),
               (short)((uint)param_2 >> 0x10) - *(short *)(in_ECX + 0x84));
  return;
}


// ==== 100afdf0 FUN_100afdf0

undefined4 FUN_100afdf0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  FString aFStack_54 [12];
  undefined1 auStack_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_101f1fc1;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffff9c;
  ExceptionList = &local_c;
  iVar4 = in_ECX[0x20];
  iVar5 = in_ECX[0x21];
  *(int *)(param_1 + 0x38) = iVar4;
  *(int *)(param_1 + 0x3c) = iVar5;
  *(int *)(param_1 + 0x6c) = iVar4;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(in_ECX[0x20],in_ECX[0x21],uVar3,uVar2);
  iVar4 = (**(code **)(*in_ECX + 0x74))();
  if (((iVar4 != 0) && (iVar4 = in_ECX[0xbb], iVar4 != 0)) && (iVar4 != -0x1810)) {
    FUN_10054da0();
    iStack_4 = 0;
    FString::FString(aFStack_54,(ushort *)(in_ECX[0xbb] + 0x1810));
    iStack_4._0_1_ = 1;
    FUN_101b8ab0(aFStack_54,auStack_48,0);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FString::~FString(aFStack_54);
    iVar5 = FUN_101c19e0();
    if (in_ECX[0x35] != 0) {
      FUN_100549b0(param_1,auStack_48,iVar5 + 3 + *(int *)(iVar4 + 0x2810),
                   *(undefined4 *)(iVar4 + 0x2814),in_ECX[0x20],in_ECX[0x21],in_ECX[0x22],
                   in_ECX[0x23]);
    }
    iStack_4 = 0xffffffff;
    FUN_10054e80();
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_c;
  return 1;
}


// ==== 100aff90 FUN_100aff90

void FUN_100aff90(int *param_1)

{
  undefined4 *puVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f1fe9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar2 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (undefined4 *)FUN_100c56a0(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 100b0020 FUN_100b0020

void FUN_100b0020(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 **ppuStack_474;
  undefined4 *local_454;
  undefined4 *local_450;
  undefined4 *local_44c;
  int *local_448;
  int local_444;
  undefined4 *local_440;
  int local_43c;
  FString local_438 [12];
  FString local_42c [12];
  ushort local_420 [260];
  ushort local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2034;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_454;
  ExceptionList = &local_c;
  local_444 = param_1;
  if (param_2 == 0) goto LAB_100b0899;
  local_448 = in_ECX;
  if (*(int *)(param_2 + 0x2870) == 0) {
LAB_100b00d5:
    if (*(int *)(param_2 + 0x2858) != 0) {
      local_454 = (undefined4 *)FUN_101c19e0();
      uVar1 = FUN_101c19e0();
      ppuStack_474 = *(undefined4 ***)(param_2 + 0x2858);
      iVar4 = *(int *)(param_2 + 0x2844) + param_4;
LAB_100b011b:
      FUN_10021a00(param_3,iVar4,uVar1,local_454,0,0,uVar1,local_454);
      *(int *)(param_2 + 0x2830) = param_3;
      *(int *)(param_2 + 0x2834) = param_4;
      *(undefined4 *)(param_2 + 0x2838) = *(undefined4 *)(param_2 + 0x2838);
      *(undefined4 *)(param_2 + 0x283c) = *(undefined4 *)(param_2 + 0x283c);
    }
  }
  else {
    if (*(int *)(param_2 + 0x2854) != 0) {
      local_454 = (undefined4 *)FUN_101c19e0();
      uVar1 = FUN_101c19e0();
      ppuStack_474 = *(undefined4 ***)(param_2 + 0x2854);
      iVar4 = param_4;
      goto LAB_100b011b;
    }
    if (*(int *)(param_2 + 0x2870) == 0) goto LAB_100b00d5;
  }
  if (*(int *)(param_2 + 0x287c) != 0) {
    ppuStack_474 = (undefined4 **)0xd;
    uVar15 = 0x10;
    uVar12 = 0;
    uVar10 = 0;
    uVar1 = FUN_101c19e0(0,0,0x10);
    iVar2 = FUN_101c19e0(uVar1);
    iVar2 = iVar2 + -0x31;
    iVar4 = param_4;
    iVar3 = FUN_101c19e0(param_4,iVar2);
    FUN_10021970(iVar3 + *(int *)(param_2 + 0x2840) + param_3,iVar4,iVar2,uVar1,uVar10,uVar12,uVar15
                );
    ppuStack_474 = (undefined4 **)0xd;
    uVar16 = 0x20;
    uVar15 = 0;
    uVar12 = 0;
    uVar1 = FUN_101c19e0(0,0,0x20);
    uVar10 = 0x20;
    iVar4 = param_4;
    iVar2 = FUN_101c19e0(param_4,0x20,uVar1);
    iVar3 = FUN_101c19e0();
    param_1 = local_444;
    FUN_10021970(iVar3 + iVar2 + *(int *)(param_2 + 0x2840) + -0x31 + param_3,iVar4,uVar10,uVar1,
                 uVar12,uVar15,uVar16);
  }
  FString::FString(local_42c,(ushort *)(param_2 + 0x1810));
  local_4 = 0;
  local_44c = &ppuStack_474;
  FString::FString((FString *)&ppuStack_474,local_42c);
  local_4 = local_4 & 0xffffff00;
  local_454 = (undefined4 *)FUN_100ac3d0();
  FString::FString(local_438,(ushort *)(param_2 + 0x2010));
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_454 == (undefined4 *)0x0) {
    iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d70);
    if (iVar4 != 0) {
      local_44c = (undefined4 *)FUN_101c19e0();
      local_440 = (undefined4 *)FUN_101c19e0();
      local_450 = (undefined4 *)FUN_101c19e0();
      local_454 = *(undefined4 **)(param_2 + 0x2840);
      ppuStack_474 = (undefined4 **)0x1;
      ppuStack_474 = (undefined4 **)FUN_1003f630(L"L2UI_CH3.Msn.msnicon1");
      puVar5 = local_454;
      puVar6 = local_450;
      puVar13 = local_440;
      puVar17 = local_44c;
      goto LAB_100b051c;
    }
    iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d3c);
    if ((((iVar4 != 0) ||
         (iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d34), iVar4 != 0)) ||
        (iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d2c), iVar4 != 0)) ||
       (iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d24), iVar4 != 0)) {
      local_44c = (undefined4 *)FUN_101c19e0();
      local_440 = (undefined4 *)FUN_101c19e0();
      local_450 = (undefined4 *)FUN_101c19e0();
      local_454 = *(undefined4 **)(param_2 + 0x2840);
      ppuStack_474 = (undefined4 **)0x1;
      ppuStack_474 = (undefined4 **)FUN_1003f630(L"L2UI_CH3.Msn.msnicon2");
      puVar5 = local_454;
      puVar6 = local_450;
      puVar13 = local_440;
      puVar17 = local_44c;
      goto LAB_100b051c;
    }
    iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d1c);
    if ((iVar4 != 0) || (iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d14), iVar4 != 0)
       ) {
      local_44c = (undefined4 *)FUN_101c19e0();
      local_440 = (undefined4 *)FUN_101c19e0();
      local_450 = (undefined4 *)FUN_101c19e0();
      local_454 = *(undefined4 **)(param_2 + 0x2840);
      ppuStack_474 = (undefined4 **)0x1;
      ppuStack_474 = (undefined4 **)FUN_1003f630(L"L2UI_CH3.Msn.msnicon3");
      puVar5 = local_454;
      puVar6 = local_450;
      puVar13 = local_440;
      puVar17 = local_44c;
      goto LAB_100b051c;
    }
    iVar4 = FString::operator==(local_438,(ushort *)&DAT_10251d0c);
    if ((iVar4 != 0) || (iVar4 = FString::operator==(local_438,(ushort *)&DAT_10252c20), iVar4 != 0)
       ) {
      local_44c = (undefined4 *)FUN_101c19e0();
      local_440 = (undefined4 *)FUN_101c19e0();
      local_450 = (undefined4 *)FUN_101c19e0();
      local_454 = *(undefined4 **)(param_2 + 0x2840);
      ppuStack_474 = (undefined4 **)0x1;
      ppuStack_474 = (undefined4 **)FUN_1003f630(L"L2UI_CH3.Msn.msnicon4");
      puVar5 = local_454;
      puVar6 = local_450;
      puVar13 = local_440;
      puVar17 = local_44c;
      goto LAB_100b051c;
    }
  }
  else {
    local_454 = (undefined4 *)FUN_101c19e0();
    local_450 = (undefined4 *)FUN_101c19e0();
    local_44c = (undefined4 *)FUN_101c19e0();
    local_440 = *(undefined4 **)(param_2 + 0x2840);
    ppuStack_474 = (undefined4 **)0x1;
    ppuStack_474 = (undefined4 **)FUN_1003f630(L"L2UI_CH3.Msn.msnicon5");
    puVar5 = local_440;
    puVar6 = local_44c;
    puVar13 = local_450;
    puVar17 = local_454;
LAB_100b051c:
    FUN_10021a00((int)puVar5 + (int)puVar6 + param_3,param_4,puVar13,puVar17,0,0,puVar13,puVar17);
  }
  iVar4 = FUN_101c19e0();
  *(int *)(param_2 + 0x2820) = iVar4 + *(int *)(param_2 + 0x2840) + param_3;
  *(int *)(param_2 + 0x2824) = param_4;
  *(undefined4 *)(param_2 + 0x2828) = *(undefined4 *)(param_2 + 0x2828);
  *(undefined4 *)(param_2 + 0x282c) = *(undefined4 *)(param_2 + 0x282c);
  iVar4 = FUN_101c19e0();
  *(int *)(param_2 + 0x2810) = iVar4 + *(int *)(param_2 + 0x2840) + param_3;
  *(int *)(param_2 + 0x2814) = param_4;
  *(undefined4 *)(param_2 + 0x2818) = *(undefined4 *)(param_2 + 0x2818);
  *(undefined4 *)(param_2 + 0x281c) = *(undefined4 *)(param_2 + 0x281c);
  if (param_2 != -0x10) {
    ppuStack_474 = &local_440;
    FUN_100216e0();
    if (*(int *)(param_2 + 0x284c) == 0) {
      local_44c = *(undefined4 **)(param_2 + 0x2864);
      local_454 = (undefined4 *)0x0;
      local_450 = (undefined4 *)0x0;
      if (0 < (int)local_44c) {
        do {
          iVar4 = (int)local_450 * 4;
          ppuStack_474 = (undefined4 **)0x100b069e;
          iVar2 = appStrcmp((ushort *)(*(int *)(*(int *)(param_2 + 0x2860) + iVar4) + 0x2010),
                            (ushort *)&DAT_10251d0c);
          if (iVar2 != 0) {
            ppuStack_474 = (undefined4 **)0x100b06c0;
            iVar4 = appStrcmp((ushort *)(*(int *)(*(int *)(param_2 + 0x2860) + iVar4) + 0x2010),
                              (ushort *)&DAT_10252c20);
            if (iVar4 != 0) {
              local_454 = (undefined4 *)((int)local_454 + 1);
            }
          }
          local_450 = (undefined4 *)((int)local_450 + 1);
        } while ((int)local_450 < *(int *)(param_2 + 0x2864));
      }
      ppuStack_474 = (undefined4 **)(param_2 + 0x10);
      appSprintf(local_420,(ushort *)L"%s (%d/%d)");
      FUN_101c19e0();
      FUN_101c19e0();
      ppuStack_474 = (undefined4 **)local_218;
      FUN_100c72c0(local_420);
      ppuStack_474 = (undefined4 **)0x0;
      uVar18 = 0;
      uVar14 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar12 = 0;
      uVar10 = 0;
      puVar7 = local_218;
      uVar1 = 0xffdcdcdc;
      iVar4 = FUN_101c19e0(0xffdcdcdc,puVar7,0,0,0,0,0,0,0,0,0);
      param_4 = (iVar4 - local_43c) / 2 + 1 + param_4;
      iVar4 = FUN_101c19e0(param_4);
      iVar2 = FUN_101c19e0();
      iVar2 = iVar2 + iVar4 + *(int *)(param_2 + 0x2840);
    }
    else {
      FUN_101c19e0();
      FUN_101c19e0();
      ppuStack_474 = (undefined4 **)local_420;
      FUN_100c72c0(param_2 + 0x10);
      ppuStack_474 = (undefined4 **)0x0;
      uVar18 = 0;
      uVar14 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar12 = 0;
      uVar10 = 0;
      puVar7 = local_420;
      uVar1 = 0xffdcdcdc;
      iVar4 = FUN_101c19e0(0xffdcdcdc,puVar7,0,0,0,0,0,0,0,0,0);
      param_4 = (iVar4 - local_43c) / 2 + 1 + param_4;
      iVar4 = FUN_101c19e0(param_4);
      iVar2 = FUN_101c19e0();
      iVar2 = iVar2 + iVar4 + *(int *)(param_2 + 0x2840);
    }
    param_1 = local_444;
    FUN_100217a0(iVar2 + 3 + param_3,param_4,uVar1,puVar7,uVar10,uVar12,uVar15,uVar16,uVar8,uVar9,
                 uVar11,uVar14,uVar18);
  }
  iVar4 = FUN_101c19e0();
  local_450 = (undefined4 *)(iVar4 + 4);
  if (*(int *)(param_2 + 0x2870) == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_2 + 0x2864)) {
      do {
        iVar2 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x2860) + iVar2) + 0x2878) = 0;
      } while (iVar4 < *(int *)(param_2 + 0x2864));
    }
  }
  else {
    local_444 = 0;
    if (0 < *(int *)(param_2 + 0x2864)) {
      do {
        FUN_101c19e0();
        local_44c = (undefined4 *)(*(int *)(param_2 + 0x2860) + local_444 * 4);
        ppuStack_474 = (undefined4 **)*local_44c;
        iVar4 = (**(code **)(*local_448 + 0x200))(param_1);
        local_450 = (undefined4 *)((int)local_450 + iVar4);
        local_444 = local_444 + 1;
      } while (local_444 < *(int *)(param_2 + 0x2864));
    }
  }
  local_4 = local_4 & 0xffffff00;
  FString::~FString(local_438);
  local_4 = 0xffffffff;
  FString::~FString(local_42c);
LAB_100b0899:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_454);
  return;
}


// ==== 100b08d0 FUN_100b08d0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100b08d0(int param_1)

{
  void *_Src;
  int iVar1;
  int iVar2;
  FString aFStack_28c0 [4];
  undefined4 uStack_28bc;
  int local_288c;
  int local_2888;
  void *local_2870;
  undefined1 *puStack_286c;
  int local_2868;
  undefined1 local_2864 [16];
  ushort local_2854 [5158];
  uint local_8;
  
  puStack_286c = &LAB_101f208a;
  local_2870 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_2864;
  ExceptionList = &local_2870;
  iVar2 = 0;
  local_2868 = 0;
  FUN_100aff90();
  local_2868._0_1_ = 1;
  do {
    if (local_2888 <= iVar2) {
      local_2868 = (uint)local_2868._1_3_ << 8;
      FUN_10056220();
LAB_100b09c0:
      ExceptionList = local_2870;
      __security_check_cookie(local_8 ^ (uint)local_2864);
      return;
    }
    _Src = *(void **)(local_288c + iVar2 * 4);
    if (_Src == (void *)0x0) {
      appFailAssert("pGroupItem",".\\MSN\\MsnTree.cpp",0xa0);
    }
    _memcpy(local_2864,_Src,0x285c);
    uStack_28bc = 0x100b0989;
    FString::FString((FString *)&stack0xffffd74c,(ushort *)(param_1 + 0x10));
    local_2868._0_1_ = 2;
    FString::FString(aFStack_28c0,local_2854);
    local_2868._0_1_ = 1;
    iVar1 = FUN_100c76b0();
    if (-1 < iVar1) {
      local_2868 = (uint)local_2868._1_3_ << 8;
      FUN_10056220();
      goto LAB_100b09c0;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


// ==== 100b09ff Catch@100b09ff

void Catch_100b09ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100b0a13 Catch@100b0a13

void Catch_100b0a13(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnTree::GetGroupInsertIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b0a30 FUN_100b0a30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100b0a30(int param_1)

{
  void *_Src;
  int iVar1;
  int iVar2;
  FString aFStack_28dc [8];
  undefined4 uStack_28d4;
  undefined4 uStack_28cc;
  uint uStack_28bc;
  FString local_28a0 [12];
  FString local_2894 [12];
  int local_2888;
  int local_2884;
  int local_2878;
  undefined1 *local_2874;
  void *local_2870;
  undefined1 *puStack_286c;
  int local_2868;
  undefined1 local_2864 [16];
  ushort local_2854 [4096];
  ushort local_854 [1062];
  uint local_8;
  
  puStack_286c = &LAB_101f20ec;
  local_2870 = ExceptionList;
  uStack_28bc = DAT_103554c4 ^ (uint)local_2864;
  local_2874 = (undefined1 *)&uStack_28bc;
  ExceptionList = &local_2870;
  iVar2 = 0;
  local_2868 = 0;
  local_8 = uStack_28bc;
  FUN_100aff90();
  local_2868._0_1_ = 1;
  do {
    local_2878 = iVar2;
    if (local_2884 <= iVar2) {
      local_2868 = (uint)local_2868._1_3_ << 8;
      FUN_10056220();
LAB_100b0b7d:
      ExceptionList = local_2870;
      __security_check_cookie(local_8 ^ (uint)local_2864);
      return;
    }
    _Src = *(void **)(local_2888 + iVar2 * 4);
    if (_Src == (void *)0x0) {
      uStack_28cc = 0x100b0abe;
      appFailAssert("pFriendItem",".\\MSN\\MsnTree.cpp",0xb5);
    }
    uStack_28cc = 0x100b0ad0;
    _memcpy(local_2864,_Src,0x285c);
    FString::FString(local_28a0,local_854);
    local_2868._0_1_ = 2;
    FString::FString(local_2894,(ushort *)(param_1 + 0x2010));
    local_2868._0_1_ = 3;
    FString::operator!=(local_2894,(ushort *)&DAT_10251d0c);
    uStack_28d4 = 0x100b0b1c;
    FString::FString((FString *)&uStack_28cc,(ushort *)(param_1 + 0x10));
    local_2868._0_1_ = 4;
    uStack_28d4 = 0x100b0b2e;
    FString::operator!=(local_28a0,(ushort *)&DAT_10251d0c);
    FString::FString(aFStack_28dc,local_2854);
    local_2868._0_1_ = 3;
    iVar1 = FUN_100c7c60();
    if (-1 < iVar1) {
      local_2868._0_1_ = 2;
      FString::~FString(local_2894);
      local_2868._0_1_ = 1;
      FString::~FString(local_28a0);
      local_2868 = (uint)local_2868._1_3_ << 8;
      FUN_10056220();
      goto LAB_100b0b7d;
    }
    local_2868._0_1_ = 2;
    FString::~FString(local_2894);
    local_2868._0_1_ = 1;
    FString::~FString(local_28a0);
    iVar2 = iVar2 + 1;
  } while( true );
}


// ==== 100b0bd7 Catch@100b0bd7

void Catch_100b0bd7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100b0beb Catch@100b0beb

void Catch_100b0beb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnTree::GetFriendInsertIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b0c10 FUN_100b0c10

void FUN_100b0c10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f212b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x2d8);
  if (iVar1 != 0) {
    iVar2 = FUN_10004ed0(0x2880);
    local_8._0_1_ = 1;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_10056300(0xffffffff);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100552e0(param_1);
    *(int *)(iVar2 + 0x285c) = iVar1;
    uVar3 = FUN_100b08d0(param_1,iVar1);
    FUN_10055dc0(iVar2,uVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100b0cb9 Catch@100b0cb9

void Catch_100b0cb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100b0ccd Catch@100b0ccd

void Catch_100b0ccd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnTree::InsertGroupItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b0cf0 FUN_100b0cf0

void FUN_100b0cf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f215b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10004ed0(0x2880);
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10056300(0xffffffff);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100552e0(param_1);
  *(undefined4 *)(iVar1 + 0x285c) = param_2;
  uVar2 = FUN_100b0a30(param_1,param_2);
  FUN_10055dc0(iVar1,uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100b0d92 Catch@100b0d92

void Catch_100b0d92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100b0da6 Catch@100b0da6

void Catch_100b0da6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnTree::InsertFriendItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b0dd0 FUN_100b0dd0

void FUN_100b0dd0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101f2188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10056780(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = MsnTree::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 100b0e30 FUN_100b0e30

void FUN_100b0e30(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f21b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = MsnTree::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10056830(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100b0e90 FUN_100b0e90

void FUN_100b0e90(byte param_1)

{
  void *in_ECX;
  
  FUN_100b0e30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x314);
  }
  return;
}


// ==== 100b0ed0 FUN_100b0ed0

undefined4 FUN_100b0ed0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    *(undefined4 *)(in_ECX + 0x1cc) = 0;
  }
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  if (*(int *)(in_ECX + 0x1d8) != 0) {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b0f30 FUN_100b0f30

undefined4 FUN_100b0f30(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  return 1;
}


// ==== 100b0f60 FUN_100b0f60

undefined4 FUN_100b0f60(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b0f80 FUN_100b0f80

undefined4 FUN_100b0f80(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.messenger_back1",1);
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  return 1;
}


// ==== 100b0fb0 FUN_100b0fb0

void FUN_100b0fb0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1d0) = param_1;
  FUN_1005fe50();
  return;
}


// ==== 100b0fd0 FUN_100b0fd0

undefined4 FUN_100b0fd0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.Msn.msn_alarm",1);
  *(undefined4 *)(in_ECX + 0x290) = uVar1;
  return 1;
}


// ==== 100b1000 FUN_100b1000

undefined4 FUN_100b1000(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x284) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x284));
    *(undefined4 *)(in_ECX + 0x284) = 0;
  }
  if (*(int *)(in_ECX + 0x288) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x288));
    *(undefined4 *)(in_ECX + 0x288) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b1050 FUN_100b1050

undefined4 FUN_100b1050(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 == 0xa50) {
    iVar1 = FUN_101c19e0();
    if (in_ECX[0xa3] < iVar1 + 0x2c) {
      (**(code **)(*in_ECX + 0x148))(0,0xfffffffd,0);
      in_ECX[0xa3] = in_ECX[0xa3] + 3;
      return 1;
    }
    if (in_ECX[0xa1] != 0) {
      FUN_1003f610(in_ECX[0xa1]);
      in_ECX[0xa1] = 0;
    }
    if (in_ECX[0xa2] == 0) {
      iVar1 = FUN_1003f600(0xa51,8000,0);
      in_ECX[0xa2] = iVar1;
      return 1;
    }
  }
  else if (param_1 == 0xa51) {
    if (in_ECX[0xa2] != 0) {
      FUN_1003f610(in_ECX[0xa2]);
      in_ECX[0xa2] = 0;
    }
    (**(code **)(*in_ECX + 0x13c))();
  }
  return 1;
}


// ==== 100b1120 FUN_100b1120

void FUN_100b1120(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_1005fe50();
  *(undefined4 *)(in_ECX + 0x28c) = 0;
  uVar1 = FUN_1003f600(0xa50,1,0);
  *(undefined4 *)(in_ECX + 0x284) = uVar1;
  if (*(int *)(in_ECX + 0x1d4) == 0) {
    FUN_100aa630(0);
  }
  else if (*(int *)(in_ECX + 0x1d4) == 2) {
    FUN_100aa630(2);
    return;
  }
  return;
}


// ==== 100b1180 FUN_100b1180

void FUN_100b1180(void)

{
  int *in_ECX;
  
  FUN_1005ff00();
  if (in_ECX[0xa1] != 0) {
    FUN_1003f610(in_ECX[0xa1]);
    in_ECX[0xa1] = 0;
  }
  if (in_ECX[0xa2] != 0) {
    FUN_1003f610(in_ECX[0xa2]);
    in_ECX[0xa2] = 0;
  }
  (**(code **)(*in_ECX + 0x148))(0,in_ECX[0xa3],0);
  in_ECX[0xa3] = 0;
  return;
}


// ==== 100b11f0 FUN_100b11f0

void FUN_100b11f0(void)

{
  int iVar1;
  int *in_ECX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f21e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0,DAT_103554c4 ^ (uint)&stack0xfffffff0);
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x13c))();
  }
  in_ECX[0x75] = 0;
  FUN_100abce0(&stack0x00000000);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_100abc50();
  ExceptionList = unaff_ESI;
  return;
}


// ==== 100b1280 FUN_100b1280

void FUN_100b1280(void)

{
  int iVar1;
  int *in_ECX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101f2219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0,DAT_103554c4 ^ (uint)&stack0xfffffff0);
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x13c))();
  }
  in_ECX[0x75] = 2;
  FString::operator=((FString *)(in_ECX + 0x87),(FString *)&stack0x00000000);
  puStack_8 = (undefined1 *)0xffffffff;
  FString::~FString((FString *)&stack0x00000000);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 100b1310 FUN_100b1310

undefined4 FUN_100b1310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = (uint)(ushort)((short)((uint)param_2 >> 0x10) - *(short *)(in_ECX + 0x84));
  if (((float)(ushort)((short)param_2 - *(short *)(in_ECX + 0x80)) < *(float *)(in_ECX + 0x88)) &&
     ((float)uVar2 < *(float *)(in_ECX + 0x8c))) {
    iVar1 = (int)(uVar2 - 2) / 0x11;
    *(int *)(in_ECX + 0x1e0) = iVar1;
    if (*(int *)(in_ECX + 0x1d8) <= iVar1) {
      *(int *)(in_ECX + 0x1e0) = *(int *)(in_ECX + 0x1d8) + -1;
      return 1;
    }
  }
  return 1;
}


// ==== 100b13a0 FUN_100b13a0

void FUN_100b13a0(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0xfc);
  in_ECX[0x78] = -1;
  iVar2 = (*pcVar1)(0);
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x13c))();
  }
  FUN_10058c60();
  return;
}


// ==== 100b13e0 FUN_100b13e0

undefined4 FUN_100b13e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  if (*(int *)(in_ECX + 0x1d8) != 0) {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
  }
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
  }
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    *(undefined4 *)(in_ECX + 0x1e4) = 0;
  }
  if (*(int *)(in_ECX + 0x1e8) != 0) {
    *(undefined4 *)(in_ECX + 0x1e8) = 0;
  }
  if (*(int *)(in_ECX + 0x1ec) != 0) {
    *(undefined4 *)(in_ECX + 0x1ec) = 0;
  }
  if (*(int *)(in_ECX + 0x1f0) != 0) {
    *(undefined4 *)(in_ECX + 0x1f0) = 0;
  }
  if (*(int *)(in_ECX + 500) != 0) {
    *(undefined4 *)(in_ECX + 500) = 0;
  }
  if (*(int *)(in_ECX + 0x1f8) != 0) {
    *(undefined4 *)(in_ECX + 0x1f8) = 0;
  }
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    *(undefined4 *)(in_ECX + 0x1fc) = 0;
  }
  if (*(int *)(in_ECX + 0x200) != 0) {
    *(undefined4 *)(in_ECX + 0x200) = 0;
  }
  FUN_10061e90();
  return 1;
}


// ==== 100b14a0 FUN_100b14a0

void FUN_100b14a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x100b14ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x254) + 0x138))();
  return;
}


// ==== 100b14b0 FUN_100b14b0

void FUN_100b14b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x100b14be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 600) + 0x138))();
  return;
}


// ==== 100b14c0 FUN_100b14c0

void FUN_100b14c0(void)

{
  int in_ECX;
  FString aFStack_34 [4];
  undefined4 uStack_30;
  FString aFStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101f2264;
  local_c = ExceptionList;
  uStack_1c = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_4 = 1;
  uStack_20 = 1;
  uStack_24 = 0x100b14fb;
  FUN_100b0fb0();
  uStack_20 = 0x100b150b;
  (**(code **)(**(int **)(in_ECX + 0x254) + 0x13c))();
  uStack_20 = 0x100b151b;
  (**(code **)(**(int **)(in_ECX + 0x294) + 0x13c))();
  uStack_30 = 0x100b152f;
  FString::FString(aFStack_28,(FString *)&stack0x00000010);
  local_4._0_1_ = 2;
  FString::FString(aFStack_34,(FString *)&stack0x00000004);
  local_4._0_1_ = 1;
  FUN_100aabc0();
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_20 = 0x100b156c;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  uStack_20 = 0x100b157e;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_c;
  return;
}


// ==== 100b15a0 FUN_100b15a0

void FUN_100b15a0(void)

{
  FUN_100a9820();
  return;
}


// ==== 100b15b0 FUN_100b15b0

undefined4 FUN_100b15b0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x270) + 0xfc))(0);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x270) + 0x13c))();
    return 1;
  }
  (**(code **)(**(int **)(in_ECX + 0x270) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x270) + 0x78))();
  return 1;
}


// ==== 100b1600 FUN_100b1600

void FUN_100b1600(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_100aa590();
  *(undefined4 *)(*(int *)(in_ECX + 0x260) + 0x228) = uVar1;
  FUN_100aa580();
  uVar1 = FUN_100abe40();
  *(undefined4 *)(*(int *)(in_ECX + 0x260) + 0x22c) = uVar1;
  FUN_100aa580();
  uVar1 = FUN_100abe10();
  *(undefined4 *)(*(int *)(in_ECX + 0x260) + 0x230) = uVar1;
  FUN_100aa580();
  uVar1 = FUN_1004f5b0();
  *(undefined4 *)(*(int *)(in_ECX + 0x260) + 0x234) = uVar1;
  FUN_100c6310();
  return;
}


// ==== 100b1680 FUN_100b1680

void FUN_100b1680(void)

{
  int in_ECX;
  FString aFStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101f2292;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)GMsnNewEMailAlarm_exref != 0) {
    FString::FString(aFStack_24,(FString *)&stack0x00000004);
    local_4 = local_4 & 0xffffff00;
    FUN_100b1280();
    uStack_1c = 0x100b16ef;
    (**(code **)(**(int **)(in_ECX + 0x26c) + 0x138))();
  }
  local_4 = 0xffffffff;
  uStack_1c = 0x100b1701;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 100b1720 FUN_100b1720

void FUN_100b1720(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f22c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(int *)(in_ECX + 0x260) != 0) {
    FUN_100abb60(&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100c5860();
  }
  local_8 = 0xffffffff;
  FUN_100abc50();
  ExceptionList = local_10;
  return;
}


// ==== 100b17a8 Catch@100b17a8

void Catch_100b17a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100b17bc Catch@100b17bc

void Catch_100b17bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnWnd::NotifyAddFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b17e0 FUN_100b17e0

void FUN_100b17e0(void)

{
  int in_ECX;
  FString aFStack_3c [8];
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f22f2;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(int *)(in_ECX + 0x260) != 0) {
    FString::FString(aFStack_3c,(FString *)&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100c6480();
  }
  local_8 = 0xffffffff;
  uStack_34 = 0x100b1856;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100b186a Catch@100b186a

void Catch_100b186a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100b187e Catch@100b187e

void Catch_100b187e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"MsnWnd::NotifyRemoveFriend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100b18a0 FUN_100b18a0

void FUN_100b18a0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101f2320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(int *)(in_ECX + 0x260) != 0) {
    FUN_100ad9c0(&stack0x00000004);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_100c56c0();
  }
  local_8 = 0xffffffff;
  FUN_100ada50();
  ExceptionList = local_10;
  return;
}


// ==== 100b1928 Catch@100b1928

void Catch_100b1928(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


