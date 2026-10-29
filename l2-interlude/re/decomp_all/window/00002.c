// ==== 1101aa13 Catch@1101aa13

void Catch_1101aa13(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__SnoopChar_1106dc60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101aa70 FUN_1101aa70

void __thiscall FUN_1101aa70(void *this,int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060fb2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  if (param_2 != 0) {
    ExceptionList = &local_10;
    *(int *)((int)this + 0xf4) =
         *(int *)((int)this + 0xf4) + (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54));
    FName::FName((FName *)&param_2,0);
    iVar1 = FName::operator!=((FName *)((int)this + 8),(FName *)&param_2);
    if (iVar1 != 0) {
      puVar2 = FName::operator*((FName *)((int)this + 8));
      pFVar3 = (FString *)FString::FString(local_34,puVar2);
      local_8._0_1_ = 1;
      pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)local_28);
      local_8._0_1_ = 2;
      iVar1 = **(int **)GConfig_exref;
      uVar5 = 0;
      uVar4 = *(undefined4 *)((int)this + 0xf4);
      puVar2 = FString::operator*(pFVar3);
      (**(code **)(iVar1 + 0x28))(u_WindowPositions_1106dcec,puVar2,uVar4,uVar5);
      local_8._0_1_ = 1;
      FString::~FString(local_28);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
    }
    InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,1);
    InvalidateRect(*(HWND *)((int)this + 0x48),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 0xf0) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1101ab7f Catch@1101ab7f

void Catch_1101ab7f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101ab93 Catch@1101ab93

void Catch_1101ab93(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__OnFinishSplitterDra_1106dc98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101ac00 FUN_1101ac00

void __fastcall FUN_1101ac00(WWindow *param_1)

{
  WListBox *this;
  int iVar1;
  int iVar2;
  DWORD dwStyle;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  tagRECT local_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060fd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::GetClientRect(param_1);
  local_30.left = 0;
  local_30.top = 0;
  local_30.right = 0;
  local_30.bottom = 4;
  this = (WListBox *)(param_1 + 0x44);
  iVar1 = WListBox::GetCount(this);
  while( true ) {
    iVar1 = iVar1 + -1;
    local_18 = iVar1;
    if (iVar1 < 0) break;
    iVar2 = WListBox::GetItemHeight(this,iVar1);
    local_30.bottom = local_30.bottom + iVar2;
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    dwStyle = GetWindowLongA(*(HWND *)(param_1 + 0x48),-0x10);
  }
  else {
    dwStyle = GetWindowLongW(*(HWND *)(param_1 + 0x48),-0x10);
  }
  AdjustWindowRect(&local_30,dwStyle,0);
  iVar1 = local_34 - local_3c;
  if (local_30.bottom - local_30.top < local_34 - local_3c) {
    iVar1 = local_30.bottom - local_30.top;
  }
  WWindow::MoveWindow((WWindow *)this,0,0,local_38 - local_40,iVar1,1);
  ExceptionList = local_10;
  return;
}


// ==== 1101aced Catch@1101aced

void Catch_1101aced(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101ad01 Catch@1101ad01

void Catch_1101ad01(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__ResizeList_1106dd24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101ad70 FUN_1101ad70

void __thiscall FUN_1101ad70(void *this,FArchive *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060fe0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FTreeItem::Serialize(this,param_1);
  thunk_FUN_110132b0((int *)param_1,(int)this + 0x4c);
  ExceptionList = local_10;
  return;
}


// ==== 1101adca Catch@1101adca

void Catch_1101adca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101adde Catch@1101adde

void Catch_1101adde(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItemBase__Serialize_1106dd60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101ae20 FUN_1101ae20

undefined4 __thiscall FUN_1101ae20(void *this,int *param_1,int param_2)

{
  UObject *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060ff0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(int *)((int)this + 0x5c) != 0) && ((param_2 == 0 || (*(int *)((int)this + 0x5c) < 2)))) {
    ExceptionList = &local_10;
    pUVar1 = UObject::GetOuter((UObject *)param_1[0xf]);
    pUVar1 = thunk_FUN_11015ea0(pUVar1);
    if (pUVar1 != (UObject *)0x0) {
      iVar2 = (**(code **)(*(int *)param_1[3] + 0x60))(**(undefined4 **)((int)this + 0x58));
      iVar2 = *(int *)(iVar2 + 4);
      for (iVar6 = 1; iVar6 < *(int *)((int)this + 0x5c); iVar6 = iVar6 + 1) {
        iVar3 = (**(code **)(*(int *)param_1[3] + 0x60))
                          (*(undefined4 *)(*(int *)((int)this + 0x58) + iVar6 * 4));
        if (iVar2 != *(int *)(iVar3 + 4)) {
          ExceptionList = local_10;
          return 0;
        }
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x60))(**(undefined4 **)((int)this + 0x58));
    pUVar1 = thunk_FUN_11015ea0((UObject *)param_1[0xf]);
    if (pUVar1 == (UObject *)0x0) {
      for (local_18 = 1; local_18 < *(int *)((int)this + 0x5c); local_18 = local_18 + 1) {
        iVar2 = *(int *)param_1[0xf];
        uVar5 = (**(code **)(*param_1 + 0x60))
                          (*(undefined4 *)(*(int *)((int)this + 0x58) + local_18 * 4));
        iVar2 = (**(code **)(iVar2 + 0x84))(uVar4,uVar5);
        if (iVar2 == 0) {
          ExceptionList = local_10;
          return 0;
        }
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x60))(**(undefined4 **)((int)this + 0x58));
      iVar2 = *(int *)(iVar2 + 4);
      for (iVar6 = 1; iVar6 < *(int *)((int)this + 0x5c); iVar6 = iVar6 + 1) {
        iVar3 = (**(code **)(*param_1 + 0x60))
                          (*(undefined4 *)(*(int *)((int)this + 0x58) + iVar6 * 4));
        if (iVar2 != *(int *)(iVar3 + 4)) {
          ExceptionList = local_10;
          return 0;
        }
      }
    }
    ExceptionList = local_10;
    return uVar4;
  }
  return 0;
}


// ==== 1101af95 Catch@1101af95

void Catch_1101af95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1101afa9 Catch@1101afa9

void Catch_1101afa9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__GetReadAddress_1106dda8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101b030 FUN_1101b030

void __fastcall FUN_1101b030(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061000;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x5c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x58) + iVar1 * 4) + 0x44))();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101b09e Catch@1101b09e

void Catch_1101b09e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101b0b2 Catch@1101b0b2

void Catch_1101b0b2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__NotifyChange_1106ddf0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101b100 FUN_1101b100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1101b100(void *this,FString *param_1,float *param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_00;
  FString *pFVar3;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  FOutputDevice *this_01;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  FOutputDevice *pFVar8;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [20];
  undefined1 *local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar3 = param_1;
  puStack_c = &LAB_110610cd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  local_1c = 0.0;
  local_18 = 0.0;
  pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
  local_8._0_1_ = 2;
  FString::operator=(local_34,pFVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  iVar2 = FString::operator>=(local_34,(ushort *)&DAT_1106c3c0);
  if (((iVar2 != 0) && (iVar2 = FString::operator<=(local_34,(ushort *)&DAT_1106c3bc), iVar2 != 0))
     || (iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce34), iVar2 != 0)) {
    local_18 = 0.0;
    while ((iVar2 = FString::operator>=(local_34,(ushort *)&DAT_1106c3c0), iVar2 != 0 &&
           (iVar2 = FString::operator<=(local_34,(ushort *)&DAT_1106c3bc), iVar2 != 0))) {
      FString::FString((FString *)&stack0xffffff74,local_34);
      local_8._0_1_ = 1;
      fVar6 = FObjectsItem::Val(this);
      local_18 = local_18 * (float)_DAT_1106c3b0 + fVar6;
      pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
      local_8._0_1_ = 4;
      FString::operator=(local_34,pFVar1);
      local_8._0_1_ = 1;
      FString::~FString(local_40);
    }
    iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce34);
    if (iVar2 == 0) goto LAB_1101b470;
    param_1 = _DAT_1106ce30;
    pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
    local_8._0_1_ = 5;
    do {
      FString::operator=(local_34,pFVar1);
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      iVar2 = FString::operator>=(local_34,(ushort *)&DAT_1106c3c0);
      if (iVar2 == 0) goto LAB_1101b470;
      iVar2 = FString::operator<=(local_34,(ushort *)&DAT_1106c3bc);
      if (iVar2 == 0) goto LAB_1101b470;
      local_20 = &stack0xffffff74;
      FString::FString((FString *)&stack0xffffff74,local_34);
      local_8._0_1_ = 1;
      local_20 = (undefined1 *)FObjectsItem::Val(this);
      local_18 = local_18 + (float)param_1 * (float)local_20;
      param_1 = (FString *)((float)param_1 / (float)_DAT_1106c3b0);
      pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
      local_8._0_1_ = 7;
    } while( true );
  }
  iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cc74);
  if (iVar2 == 0) {
    iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce2c);
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce28);
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce24);
        if (iVar2 == 0) {
          if (*(int *)GLog_exref == 0) goto LAB_1101b40d;
          this_00 = *(FOutputDevice **)GLog_exref;
          pFVar8 = this_00;
        }
        else {
          iVar2 = FObjectsItem::SubEval(this,param_1,&local_18,1000);
          if (iVar2 == 0) goto LAB_1101b40d;
          if (0.0 <= local_18) {
            dVar7 = appSqrt((double)local_18);
            local_18 = (float)dVar7;
            pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
            local_8._0_1_ = 0xb;
            goto LAB_1101b452;
          }
          this_00 = extraout_ECX;
          if (*(int *)GLog_exref == 0) goto LAB_1101b40d;
LAB_1101b401:
          pFVar8 = *(FOutputDevice **)GLog_exref;
        }
LAB_1101b404:
        FOutputDevice::Logf2(this_00,(ushort *)pFVar8);
      }
      else {
        iVar2 = FObjectsItem::SubEval(this,param_1,&local_18,1000);
        if (iVar2 != 0) {
          pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
          local_8._0_1_ = 10;
          goto LAB_1101b452;
        }
      }
    }
    else {
      iVar2 = FObjectsItem::SubEval(this,param_1,&local_18,1000);
      if (iVar2 != 0) {
        local_18 = -local_18;
        pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
        local_8._0_1_ = 9;
        goto LAB_1101b452;
      }
    }
  }
  else {
    iVar2 = FObjectsItem::SubEval(this,param_1,&local_18,0);
    if (iVar2 != 0) {
      pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
      local_8._0_1_ = 8;
LAB_1101b452:
      do {
        FString::operator=(local_34,pFVar1);
        pFVar1 = local_40;
        while( true ) {
          local_8._0_1_ = 1;
          FString::~FString(pFVar1);
LAB_1101b470:
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_11068ff8);
          if (iVar2 != 0) {
            *param_2 = local_18;
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_34);
            ExceptionList = local_10;
            return 1;
          }
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cc70);
          if (iVar2 != 0) {
            iVar2 = FString::operator_int(pFVar3);
            FString::operator=(pFVar3,(ushort *)(&DAT_1106cc70 + iVar2 * 2));
            goto LAB_1101b4d7;
          }
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce28);
          if (iVar2 != 0) break;
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce2c);
          if (iVar2 == 0) {
            iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cdbc);
            if (iVar2 == 0) {
              iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cd6c);
              if (iVar2 == 0) {
                iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cd28);
                if (iVar2 == 0) {
                  if (*(int *)GLog_exref != 0) {
                    FOutputDevice::Logf2(this_01,*(ushort **)GLog_exref);
                  }
                  goto LAB_1101b4d7;
                }
                if (3 < param_3) {
                  *param_2 = local_18;
                  pFVar1 = (FString *)FString::operator+(local_34,local_64);
                  local_8._0_1_ = 0x14;
                  FString::operator=(pFVar3,pFVar1);
                  pFVar3 = local_64;
                  goto LAB_1101b546;
                }
                iVar2 = FObjectsItem::SubEval(this,pFVar3,&local_1c,4);
                if (iVar2 == 0) goto LAB_1101b4d7;
                local_18 = local_1c * local_18;
                pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_70);
                local_8._0_1_ = 0x15;
                FString::operator=(local_34,pFVar1);
                pFVar1 = local_70;
              }
              else {
                if (2 < param_3) {
                  *param_2 = local_18;
                  pFVar1 = (FString *)FString::operator+(local_34,local_58);
                  local_8._0_1_ = 0x12;
                  FString::operator=(pFVar3,pFVar1);
                  pFVar3 = local_58;
                  goto LAB_1101b546;
                }
                iVar2 = FObjectsItem::SubEval(this,pFVar3,&local_1c,3);
                if (iVar2 == 0) goto LAB_1101b4d7;
                if (local_1c == 0.0) {
                  this_00 = extraout_ECX_01;
                  if (*(int *)GLog_exref != 0) goto LAB_1101b401;
                  goto LAB_1101b40d;
                }
                uVar4 = FUN_1103b180(extraout_ECX_01,extraout_EDX);
                uVar5 = FUN_1103b180(extraout_ECX_02,(int)(uVar4 >> 0x20));
                local_18 = (float)(int)((longlong)
                                        ((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 |
                                        uVar5 & 0xffffffff) % (longlong)(int)uVar4);
                pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_64);
                local_8._0_1_ = 0x13;
                FString::operator=(local_34,pFVar1);
                pFVar1 = local_64;
              }
            }
            else {
              if (2 < param_3) {
                *param_2 = local_18;
                pFVar1 = (FString *)FString::operator+(local_34,local_4c);
                local_8._0_1_ = 0x10;
                FString::operator=(pFVar3,pFVar1);
                pFVar3 = local_4c;
                goto LAB_1101b546;
              }
              iVar2 = FObjectsItem::SubEval(this,pFVar3,&local_1c,3);
              if (iVar2 == 0) goto LAB_1101b4d7;
              if (local_1c == 0.0) {
                if (*(int *)GLog_exref == 0) goto LAB_1101b40d;
                this_00 = extraout_ECX_00;
                pFVar8 = *(FOutputDevice **)GLog_exref;
                goto LAB_1101b404;
              }
              local_18 = local_18 / local_1c;
              pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_58);
              local_8._0_1_ = 0x11;
              FString::operator=(local_34,pFVar1);
              pFVar1 = local_58;
            }
          }
          else {
            if (1 < param_3) {
              *param_2 = local_18;
              pFVar1 = (FString *)FString::operator+(local_34,local_40);
              local_8._0_1_ = 0xe;
              goto LAB_1101b537;
            }
            iVar2 = FObjectsItem::SubEval(this,pFVar3,&local_1c,2);
            if (iVar2 == 0) goto LAB_1101b4d7;
            local_18 = local_18 - local_1c;
            pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_4c);
            local_8._0_1_ = 0xf;
            FString::operator=(local_34,pFVar1);
            pFVar1 = local_4c;
          }
        }
        if (1 < param_3) {
          *param_2 = local_18;
          pFVar1 = (FString *)FString::operator+(local_34,local_40);
          local_8._0_1_ = 0xc;
LAB_1101b537:
          FString::operator=(pFVar3,pFVar1);
          pFVar3 = local_40;
LAB_1101b546:
          local_8._0_1_ = 1;
          FString::~FString(pFVar3);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_34);
          ExceptionList = local_10;
          return 1;
        }
        iVar2 = FObjectsItem::SubEval(this,pFVar3,&local_1c,2);
        if (iVar2 == 0) {
LAB_1101b4d7:
          *param_2 = local_18;
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_34);
          ExceptionList = local_10;
          return 1;
        }
        local_18 = local_1c + local_18;
        pFVar1 = (FString *)FObjectsItem::GrabChar(this,local_40);
        local_8._0_1_ = 0xd;
      } while( true );
    }
  }
LAB_1101b40d:
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return 0;
}


// ==== 1101b86d Catch@1101b86d

void Catch_1101b86d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1101b881 Catch@1101b881

void Catch_1101b881(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__SubEval_1106de30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101ba90 FUN_1101ba90

undefined4 __fastcall FUN_1101ba90(int param_1)

{
  return **(undefined4 **)(param_1 + 0x58);
}


// ==== 1101bace Catch@1101bace

void Catch_1101bace(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101bae2 Catch@1101bae2

void Catch_1101bae2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__GetParentObject_1106e0ac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101bb20 FUN_1101bb20

void __fastcall FUN_1101bb20(FObjectConfigItem *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061120;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FObjectConfigItem::LazyLoadClass(param_1);
  if (*(UClass **)(param_1 + 0x60) != (UClass *)0x0) {
    UObject::ResetConfig(*(UClass **)(param_1 + 0x60));
    InvalidateRect(*(HWND *)(*(int *)(param_1 + 8) + 0x48),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(*(int *)(param_1 + 8) + 0x48));
  }
  (**(code **)(*(int *)param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 1101bb9f Catch@1101bb9f

void Catch_1101bb9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101bbb3 Catch@1101bbb3

void Catch_1101bbb3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectConfigItem__OnResetToDefa_1106e0f8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101bc00 FUN_1101bc00

void __fastcall FUN_1101bc00(FHeaderItem *param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  
  FHeaderItem::OnItemSetFocus(param_1);
  ppuVar3 = FDelegate::vftable;
  pcVar4 = FObjectConfigItem::OnResetToDefaultsButton;
  iVar1 = *(int *)param_1;
  puVar2 = LocalizeGeneral(s_DefaultsButton_1106e160,(ushort *)u_Window_1106949c,(ushort *)0x0);
  (**(code **)(iVar1 + 0x34))(puVar2,ppuVar3,param_1,pcVar4);
  return;
}


// ==== 1101bc50 FUN_1101bc50

void __thiscall FUN_1101bc50(void *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061130;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FPropertyItemBase::Serialize(this,param_1);
  iVar2 = (int)this + 0x5c;
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x1c))(iVar2,(int)this + 0x60);
  thunk_FUN_110132b0(piVar1,iVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1101bcb7 Catch@1101bcb7

void Catch_1101bcb7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101bccb Catch@1101bccb

void Catch_1101bccb(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectConfigItem__Serialize_1106e174);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101bd10 FUN_1101bd10

FArchive * __cdecl FUN_1101bd10(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061140;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      (**(code **)(*(int *)param_1 + 0x18))(*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      iVar2 = thunk_FUN_11016150(4,param_2);
      (**(code **)(*(int *)param_1 + 0x18))(iVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1101bdd4 Catch@1101bdd4

void Catch_1101bdd4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1101bde8 Catch@1101bde8

void Catch_1101bde8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_TArray<<_1106e1bc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101be50 FUN_1101be50

int __thiscall FUN_1101be50(void *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar1 = FName::operator==((FName *)(*(int *)this + iVar2 * 4),param_1);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return -1;
}


// ==== 1101bea0 FUN_1101bea0

void __thiscall FUN_1101bea0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1101bed0 FUN_1101bed0

void __thiscall FUN_1101bed0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1101bf00 FUN_1101bf00

void __thiscall FUN_1101bf00(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1101bf30 FUN_1101bf30

void __thiscall FUN_1101bf30(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FArray::Add(this,1,8);
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + iVar2 * 8) = *param_1;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = param_1[1];
  return;
}


// ==== 1101bf60 FUN_1101bf60

int * __thiscall FUN_1101bf60(void *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x48);
    thunk_FUN_11013e90(this);
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  thunk_FUN_11013e90(this);
  return this;
}


// ==== 1101bfc0 FUN_1101bfc0

void __thiscall FUN_1101bfc0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x2c;
    iVar2 = iVar2 - param_1;
    do {
      FPreferencesInfo::~FPreferencesInfo((FPreferencesInfo *)(*(int *)this + iVar1));
      iVar1 = iVar1 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x2c);
  return;
}


// ==== 1101c080 FUN_1101c080

void __thiscall FUN_1101c080(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  iVar2 = param_1 + param_2;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x3c;
    iVar2 = iVar2 - param_1;
    do {
      FRegistryObjectInfo::~FRegistryObjectInfo((FRegistryObjectInfo *)(*(int *)this + iVar1));
      iVar1 = iVar1 + 0x3c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x3c);
  return;
}


// ==== 1101c150 FUN_1101c150

void __thiscall FUN_1101c150(void *this,int param_1,int param_2)

{
  if (param_1 < 0) {
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)((int)this + 4) < param_1 + param_2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(this,param_1,param_2,4);
  return;
}


// ==== 1101c1f0 FUN_1101c1f0

void __cdecl FUN_1101c1f0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  
  puStack_c = &LAB_11061150;
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
      puVar7 = (undefined4 *)*local_18;
LAB_1101c272:
      iVar4 = ((int)local_1c - (int)puVar7 >> 2) + 1;
      if (8 < iVar4) {
        uVar2 = puVar7[iVar4 / 2];
        puVar7[iVar4 / 2] = *puVar7;
        *puVar7 = uVar2;
        puVar5 = local_1c + 1;
        puVar6 = puVar7;
        local_30 = puVar5;
LAB_1101c2e0:
        puVar6 = puVar6 + 1;
        local_34 = puVar6;
        if (puVar6 <= local_1c) goto code_r0x1101c2eb;
        goto LAB_1101c2f8;
      }
      for (; puVar7 < local_1c; local_1c = local_1c + -1) {
        local_2c = puVar7;
        puVar5 = puVar7;
        puVar6 = puVar7;
        while( true ) {
          puVar6 = puVar6 + 1;
          local_28 = puVar6;
          piVar1 = (int *)*puVar5;
          if (local_1c < puVar6) break;
          iVar4 = FUN_110111f0(piVar1,(int *)*puVar6);
          if (0 < iVar4) {
            local_2c = puVar6;
            puVar5 = puVar6;
          }
        }
        *puVar5 = *local_1c;
        *local_1c = piVar1;
      }
LAB_1101c37d:
    }
  }
  ExceptionList = local_10;
  return;
code_r0x1101c2eb:
  iVar4 = FUN_110111f0((int *)*puVar7,(int *)*puVar6);
  if (iVar4 < 1) goto LAB_1101c2e0;
LAB_1101c2f8:
  do {
    puVar8 = puVar5;
    puVar5 = puVar8 + -1;
    local_30 = puVar5;
    if (puVar5 <= puVar7) break;
    iVar4 = FUN_110111f0((int *)*puVar7,(int *)*puVar5);
  } while (-1 < iVar4);
  puVar3 = local_1c;
  if (puVar6 <= puVar5) {
    uVar2 = *puVar6;
    *puVar6 = *puVar5;
    *puVar5 = uVar2;
    goto LAB_1101c2e0;
  }
  uVar2 = *puVar7;
  *puVar7 = *puVar5;
  *puVar5 = uVar2;
  if ((int)((int)puVar5 + (-4 - (int)puVar7) & 0xfffffffcU) <
      (int)((int)local_1c - (int)puVar6 & 0xfffffffcU)) {
    if (puVar6 < local_1c) {
      *local_18 = (int)puVar6;
      local_18[1] = (int)local_1c;
      local_18 = local_18 + 2;
    }
    if (puVar5 <= puVar7 + 1) goto LAB_1101c37d;
    local_1c = puVar8 + -2;
  }
  else {
    if (puVar7 + 1 < puVar5) {
      *local_18 = (int)puVar7;
      local_18[1] = (int)(puVar8 + -2);
      local_18 = local_18 + 2;
    }
    if (puVar3 <= puVar6) goto LAB_1101c37d;
    local_20 = puVar6;
    puVar7 = puVar6;
  }
  goto LAB_1101c272;
}


// ==== 1101c3ab Catch@1101c3ab

void Catch_1101c3ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1101c3bf Catch@1101c3bf

void Catch_1101c3bf(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_Sort_1106e1d4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101c460 FUN_1101c460

void __thiscall FUN_1101c460(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 8);
  iVar3 = iVar1 - param_2;
  iVar4 = *(int *)this;
  if (*(int *)this < iVar3) {
    iVar4 = iVar3;
  }
  iVar3 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 4);
  *param_1 = iVar4;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  param_1[3] = iVar3;
  return;
}


// ==== 1101c4a0 FUN_1101c4a0

void __fastcall FUN_1101c4a0(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061169;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101c560 FUN_1101c560

void __thiscall FUN_1101c560(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1101c590 FUN_1101c590

void __fastcall FUN_1101c590(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061189;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101c650 FUN_1101c650

int * __thiscall FUN_1101c650(void *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x48);
    thunk_FUN_11015cb0(this);
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  thunk_FUN_11015cb0(this);
  return this;
}


// ==== 1101c8a0 FUN_1101c8a0

void __fastcall FUN_1101c8a0(int param_1)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110611a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x34); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x30) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x34); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 0x30),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 1101c920 Catch@1101c920

void Catch_1101c920(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1101c934 Catch@1101c934

void Catch_1101c934(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__EmptyChildren_1106e1e0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101c980 FUN_1101c980

void __thiscall FUN_1101c980(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110611b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar3 = 0; iVar3 < *(int *)((int)this + 0x28); iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)((int)this + 0x24) + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  for (iVar3 = 0; iVar3 < *(int *)((int)this + 0x28); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)((int)this + 0x24),4,0);
  *(undefined4 *)((int)this + 0x20) = 0;
  (**(code **)(*(int *)this + 0x28))();
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = *(int **)((int)this + 0xc);
    piVar2 = (int *)(**(code **)(**(int **)((int)this + 8) + 0xe8))();
    if (piVar1 != piVar2) {
      (**(code **)(*piVar1 + 0x30))(param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101ca39 Catch@1101ca39

void Catch_1101ca39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1101ca4d Catch@1101ca4d

void Catch_1101ca4d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__OnItemKillFocus_1106e21c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101cab0 FUN_1101cab0

void __fastcall FUN_1101cab0(void *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110611c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)param_1 + 0x18) != 0) {
    ExceptionList = &local_10;
    thunk_FUN_1101c1f0(*(int *)((int)param_1 + 0x30),*(int *)((int)param_1 + 0x34));
  }
  pvVar1 = (void *)(**(code **)(**(int **)((int)param_1 + 8) + 0xe8))();
  if (param_1 == pvVar1) {
    for (iVar2 = 0; iVar2 < *(int *)((int)param_1 + 0x34); iVar2 = iVar2 + 1) {
      WListBox::AddItem((WListBox *)(*(int *)((int)param_1 + 8) + 0x44),
                        *(void **)(*(int *)((int)param_1 + 0x30) + iVar2 * 4));
    }
  }
  else {
    iVar2 = *(int *)((int)param_1 + 0x34);
    while( true ) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) break;
      WListBox::InsertItemAfter
                ((WListBox *)(*(int *)((int)param_1 + 8) + 0x44),param_1,
                 *(void **)(*(int *)((int)param_1 + 0x30) + iVar2 * 4));
    }
  }
  (**(code **)(**(int **)((int)param_1 + 8) + 0xf4))(0);
  (**(code **)(**(int **)((int)param_1 + 8) + 0xf0))();
  *(undefined4 *)((int)param_1 + 0x14) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1101cb82 Catch@1101cb82

void Catch_1101cb82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1101cb96 Catch@1101cb96

void Catch_1101cb96(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__Expand_1106e25c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101cc00 FUN_1101cc00

void __thiscall FUN_1101cc00(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110611d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)this + 0x9c))();
  }
  if (*(int **)((int)this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x48) + 4))(1);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  if (*(int **)((int)this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x4c) + 4))(1);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x50) + 4))(1);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  if (*(int **)((int)this + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x54) + 4))(1);
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  FTreeItem::OnItemKillFocus(this,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1101cca7 Catch@1101cca7

void Catch_1101cca7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101ccbb Catch@1101ccbb

void Catch_1101ccbb(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnKillFocus_1106e288);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101cd10 FUN_1101cd10

void __fastcall FUN_1101cd10(FTreeItem *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110611e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FTreeItem::Collapse(param_1);
  FTreeItem::EmptyChildren(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1101cd5e Catch@1101cd5e

void Catch_1101cd5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101cd72 Catch@1101cd72

void Catch_1101cd72(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertyItem__Collapse_1106e2c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101cdb0 FUN_1101cdb0

void __fastcall FUN_1101cdb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110611f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < param_1[10]; iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(param_1[9] + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  for (iVar2 = 0; iVar2 < param_1[10]; iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 9),4,0);
  param_1[8] = 0;
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 1101ce42 Catch@1101ce42

void Catch_1101ce42(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1101ce56 Catch@1101ce56

void Catch_1101ce56(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FHeaderItem__OnItemKillFocus_1106e304);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101ceb0 FUN_1101ceb0

void __fastcall FUN_1101ceb0(FTreeItem *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061200;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FTreeItem::Collapse(param_1);
  FTreeItem::EmptyChildren(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1101cefe Catch@1101cefe

void Catch_1101cefe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101cf12 Catch@1101cf12

void Catch_1101cf12(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FCategoryItem__Collapse_1106e34c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101cf50 FUN_1101cf50

void __thiscall FUN_1101cf50(void *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  FString *pFVar4;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11061219;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffcc;
  if (param_1 == 0) {
    iVar1 = **(int **)((int)this + 0x40);
    ExceptionList = &local_10;
    uVar3 = (**(code **)(iVar1 + 0xfc))();
    pFVar4 = (FString *)(**(code **)(iVar1 + 0xec))(local_28,uVar3);
    local_8._0_1_ = 1;
    FString::operator=((FString *)((int)this + 0x48),pFVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 4))(1);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  if (*(int **)((int)this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))(1);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  FHeaderItem::OnItemKillFocus(this,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1101cfff Catch@1101cfff

void Catch_1101cfff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101d013 Catch@1101d013

void Catch_1101d013(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__OnKillFocus_1106e388);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d070 FUN_1101d070

void __fastcall FUN_1101d070(WWindow *param_1)

{
  WWindow *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061230;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnDestroy(param_1);
  local_18 = param_1;
  thunk_FUN_1101bea0(&WWindow::_DeleteWindows,&local_18);
  ExceptionList = local_10;
  return;
}


// ==== 1101d0c8 Catch@1101d0c8

void Catch_1101d0c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101d0dc Catch@1101d0dc

void Catch_1101d0dc(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__OnDestroy_1106e3cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d170 FUN_1101d170

void __fastcall FUN_1101d170(WPropertiesBase *param_1)

{
  WListBox *this;
  int iVar1;
  FTreeItem *pFVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061240;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  iVar4 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0xf8) != 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)param_1 + 0xf4))(0);
    this = (WListBox *)(param_1 + 0x44);
    iVar1 = WListBox::GetCount(this);
    if (iVar1 != 0) {
      FArray::Empty((FArray *)(param_1 + 0xd4),8,0);
      iVar1 = WListBox::GetTop(this);
      pFVar2 = WPropertiesBase::GetListItem(param_1,iVar1);
      uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
      *(undefined8 *)(param_1 + 0xe0) = uVar5;
      iVar1 = WListBox::GetCurrent(this);
      iVar1 = WListBox::GetSelected(this,iVar1);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        iVar1 = WListBox::GetCurrent(this);
        pFVar2 = WPropertiesBase::GetListItem(param_1,iVar1);
        uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
      }
      *(undefined8 *)(param_1 + 0xe8) = uVar5;
      while( true ) {
        local_24 = iVar4;
        iVar1 = WListBox::GetCount(this);
        if (iVar1 <= iVar4) break;
        pFVar2 = WPropertiesBase::GetListItem(param_1,iVar4);
        if (*(int *)(pFVar2 + 0x14) != 0) {
          uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
          local_38 = uVar5;
          thunk_FUN_1101bf30(param_1 + 0xd4,(undefined4 *)&local_38);
        }
        iVar4 = iVar4 + 1;
      }
    }
    WListBox::Empty(this);
    pFVar2 = (FTreeItem *)(**(code **)(*(int *)param_1 + 0xe8))();
    FTreeItem::EmptyChildren(pFVar2);
    iVar4 = (**(code **)(*(int *)param_1 + 0xe8))();
    *(undefined4 *)(iVar4 + 0x14) = 0;
    piVar3 = (int *)(**(code **)(*(int *)param_1 + 0xe8))();
    (**(code **)(*piVar3 + 0x54))();
    local_20 = -1;
    local_1c = -1;
    local_18 = 0;
    while( true ) {
      iVar4 = local_18;
      iVar1 = WListBox::GetCount((WListBox *)(param_1 + 0x44));
      if (iVar1 <= iVar4) break;
      pFVar2 = WPropertiesBase::GetListItem(param_1,iVar4);
      uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
      iVar4 = (int)((ulonglong)uVar5 >> 0x20);
      local_38._0_4_ = (int)uVar5;
      if ((*(int *)(pFVar2 + 0x10) != 0) && (*(int *)(pFVar2 + 0x14) == 0)) {
        for (local_28 = 0; local_28 < *(int *)(param_1 + 0xd8); local_28 = local_28 + 1) {
          if ((*(int *)(*(int *)(param_1 + 0xd4) + local_28 * 8) == (int)local_38) &&
             (*(int *)(*(int *)(param_1 + 0xd4) + 4 + local_28 * 8) == iVar4)) {
            (**(code **)(*(int *)pFVar2 + 0x54))();
            break;
          }
        }
      }
      if (((int)local_38 == *(int *)(param_1 + 0xe0)) && (iVar4 == *(int *)(param_1 + 0xe4))) {
        local_1c = local_18;
      }
      if (((int)local_38 == *(int *)(param_1 + 0xe8)) && (iVar4 == *(int *)(param_1 + 0xec))) {
        local_20 = local_18;
      }
      local_18 = local_18 + 1;
    }
    (**(code **)(*(int *)param_1 + 0xf0))();
    if (-1 < local_1c) {
      WListBox::SetTop((WListBox *)(param_1 + 0x44),local_1c);
    }
    if (-1 < local_20) {
      WListBox::SetCurrent((WListBox *)(param_1 + 0x44),local_20,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101d3a4 Catch@1101d3a4

void Catch_1101d3a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_1107a670);
}


// ==== 1101d3b8 Catch@1101d3b8

void Catch_1101d3b8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__ForceRefresh_1106e458);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d470 FUN_1101d470

void __fastcall FUN_1101d470(FTreeItem *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061250;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FTreeItem::Collapse(param_1);
  FTreeItem::EmptyChildren(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1101d4be Catch@1101d4be

void Catch_1101d4be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101d4d2 Catch@1101d4d2

void Catch_1101d4d2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItemBase__Collapse_1106e498);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d510 FUN_1101d510

void __thiscall FUN_1101d510(void *this,FArchive *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061260;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FPropertyItemBase::Serialize(this,param_1);
  thunk_FUN_1101bd10(param_1,(FArray *)((int)this + 0x58));
  ExceptionList = local_10;
  return;
}


// ==== 1101d56a Catch@1101d56a

void Catch_1101d56a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101d57e Catch@1101d57e

void Catch_1101d57e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__Serialize_1106e4dc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d5c0 FUN_1101d5c0

undefined4 FUN_1101d5c0(void)

{
  int iVar1;
  FString *pFVar2;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  int iVar3;
  undefined4 *in_stack_00000010;
  wchar_t *pwVar4;
  FString local_40 [12];
  FString local_34 [20];
  int local_20;
  FObjectsItem *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1106128b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar3 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  while( true ) {
    local_20 = iVar3;
    iVar1 = FString::Len((FString *)&stack0x00000004);
    if (iVar1 <= iVar3) break;
    pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)local_34,iVar3);
    local_8._0_1_ = 2;
    iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc74);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    if (iVar1 != 0) {
      local_18 = local_18 + 1;
    }
    pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)local_40,iVar3);
    local_8._0_1_ = 3;
    iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc70);
    local_8._0_1_ = 1;
    FString::~FString(local_40);
    if (iVar1 != 0) {
      local_18 = local_18 + -1;
    }
    iVar3 = iVar3 + 1;
  }
  if (local_18 == 0) {
    iVar3 = FObjectsItem::SubEval(local_1c,(FString *)&stack0x00000004,(float *)&local_1c,0);
    if (iVar3 != 0) goto LAB_1101d6c0;
    if (*(int *)GLog_exref != 0) {
      pwVar4 = u_Expression_Error___Error_in_expr_1106e548;
      this = extraout_ECX_00;
      goto LAB_1101d6af;
    }
  }
  else if (*(int *)GLog_exref != 0) {
    pwVar4 = u_Expression_Error___Mismatched_br_1106e5a8;
    this = extraout_ECX;
LAB_1101d6af:
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref,pwVar4);
  }
  local_1c = (FObjectsItem *)0x0;
LAB_1101d6c0:
  *in_stack_00000010 = local_1c;
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 1;
}


// ==== 1101d6ee Catch@1101d6ee

void Catch_1101d6ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1101d702 Catch@1101d702

void Catch_1101d702(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__Eval_1106e518);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d780 FUN_1101d780

void __thiscall FUN_1101d780(void *this,int param_1,int param_2)

{
  int *piVar1;
  UClass *pUVar2;
  int iVar3;
  FString *this_00;
  ushort *puVar4;
  void *pvVar5;
  int iVar6;
  UStruct *pUVar7;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110612a9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)((int)this + 8) + 0xf4))(0);
  FArray::Empty((FArray *)((int)this + 0x58),4,0);
  *(undefined4 *)((int)this + 0x4c) = 0;
  for (iVar6 = 0; local_18 = iVar6, iVar6 < param_2; iVar6 = iVar6 + 1) {
    piVar1 = (int *)(param_1 + iVar6 * 4);
    if (*piVar1 != 0) {
      pUVar2 = UObject::GetClass((UObject *)*piVar1);
      if (pUVar2 == (UClass *)0x0) {
        appFailAssert(s_InObjects_i__>GetClass___1106e644,s___Properties_cpp_1106b558,0x94e);
      }
      if (*(int *)((int)this + 0x4c) != 0) goto LAB_1101d810;
      pUVar2 = UObject::GetClass((UObject *)*piVar1);
      while( true ) {
        *(UClass **)((int)this + 0x4c) = pUVar2;
LAB_1101d810:
        pUVar7 = *(UStruct **)((int)this + 0x4c);
        pUVar2 = UObject::GetClass((UObject *)*piVar1);
        iVar3 = UStruct::IsChildOf((UStruct *)pUVar2,pUVar7);
        if (iVar3 != 0) break;
        pUVar2 = UClass::GetSuperClass(*(UClass **)((int)this + 0x4c));
      }
      thunk_FUN_1101c560((void *)((int)this + 0x58),piVar1);
    }
  }
  this_00 = (FString *)(**(code **)(*(int *)this + 0x80))(local_2c);
  local_8._0_1_ = 1;
  iVar6 = **(int **)((int)this + 8);
  puVar4 = FString::operator*(this_00);
  (**(code **)(iVar6 + 0x2c))(puVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  if ((*(int *)((int)this + 0x14) == 0) &&
     (pvVar5 = (void *)(**(code **)(**(int **)((int)this + 8) + 0xe8))(), this != pvVar5)) {
    ExceptionList = local_10;
    return;
  }
  (**(code **)(**(int **)((int)this + 8) + 0xf8))();
  ExceptionList = local_10;
  return;
}


// ==== 1101d8b8 Catch@1101d8b8

void Catch_1101d8b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101d8cc Catch@1101d8cc

void Catch_1101d8cc(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__SetObjects_1106e608);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d950 FUN_1101d950

void __fastcall FUN_1101d950(FTreeItem *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110612c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FTreeItem::Collapse(param_1);
  FTreeItem::EmptyChildren(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1101d99e Catch@1101d99e

void Catch_1101d99e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101d9b2 Catch@1101d9b2

void Catch_1101d9b2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FConfigItem__Collapse_1106e664);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101d9f0 FUN_1101d9f0

void __fastcall FUN_1101d9f0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110612d9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1101bfc0(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101da60 FUN_1101da60

void __fastcall FUN_1101da60(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110612f9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1101c080(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101dad0 FUN_1101dad0

int __thiscall FUN_1101dad0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)this + iVar2 * 4) == *param_1) {
        thunk_FUN_1101c150(this,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return iVar1 - *(int *)((int)this + 4);
}


// ==== 1101db20 FUN_1101db20

int __thiscall FUN_1101db20(void *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar1 = FName::operator==((FName *)(*(int *)this + iVar2 * 4),param_1);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  iVar2 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar2 * 4) = *(undefined4 *)param_1;
  return iVar2;
}


// ==== 1101db80 FUN_1101db80

void __fastcall FUN_1101db80(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061319;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101dc40 FUN_1101dc40

void __fastcall FUN_1101dc40(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061339;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101dd00 FUN_1101dd00

undefined4 * __fastcall FUN_1101dd00(undefined4 *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = UClass::StaticClass();
  *param_1 = pUVar1;
  param_1[1] = 0xffffffff;
  if (pUVar1 == (UClass *)0x0) {
    appFailAssert(s_Class_1106e404,s_d__work_interlude_2007_05_23_war_1106e40c,0x505);
  }
  thunk_FUN_1101a3f0(param_1);
  return param_1;
}


// ==== 1101dd50 FUN_1101dd50

void __fastcall FUN_1101dd50(WWindow *param_1)

{
  WWindow *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061350;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  thunk_FUN_1101dad0(&WProperties::PropertiesWindows,(int *)&local_18);
  WWindow::DoDestroy(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1101ddaa Catch@1101ddaa

void Catch_1101ddaa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101ddbe Catch@1101ddbe

void Catch_1101ddbe(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__DoDestroy_1106e698);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101de00 FUN_1101de00

void __thiscall FUN_1101de00(void *this,void *param_1)

{
  UObject *pUVar1;
  FName *pFVar2;
  int local_24;
  UObject *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061360;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    ExceptionList = &local_10;
    thunk_FUN_1101bf60(&local_24,*(int *)((int)this + 0x4c));
    while (pUVar1 = local_20, local_20 != (UObject *)0x0) {
      if (((byte)local_20[0x9c] & 1) != 0) {
        pFVar2 = (FName *)UObject::GetFName(local_20);
        thunk_FUN_1101db20(param_1,pFVar2);
      }
      local_20 = *(UObject **)(pUVar1 + 0x38);
      thunk_FUN_11013e90(&local_24);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101de8d Catch@1101de8d

void Catch_1101de8d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101dea1 Catch@1101dea1

void Catch_1101dea1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItemBase__GetStates_1106e6d0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101def0 FUN_1101def0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_1101def0(void *this,FPropertyItem *param_1,ushort *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort *puStack_205c;
  ushort local_2040;
  undefined1 local_203e [8190];
  FString local_40 [16];
  FString local_30 [16];
  FString *local_20;
  FObjectsItem *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1106138b;
  local_10 = ExceptionList;
  local_18 = 0x1101df13;
  local_14 = &stack0xffffdfb4;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = this;
  puVar2 = &stack0xffffdfb4;
  if (*(int *)(*(int *)((int)this + 8) + 0x18) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)((int)this + 8) + 0x18) + 4))();
    puVar2 = local_14;
  }
  local_14 = puVar2;
  for (local_18 = 0; iVar1 = local_18, local_18 < *(int *)((int)this + 0x5c);
      local_18 = local_18 + 1) {
    pUVar3 = thunk_FUN_11013fd0(*(UObject **)(param_1 + 0x3c));
    if (((pUVar3 == (UObject *)0x0) &&
        (pUVar3 = thunk_FUN_11014000(*(UObject **)(param_1 + 0x3c)), pUVar3 == (UObject *)0x0)) &&
       ((pUVar3 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), pUVar3 == (UObject *)0x0 ||
        (pUVar3 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), *(int *)(pUVar3 + 0x78) != 0)))
       ) {
      iVar4 = **(int **)(param_1 + 0x3c);
      (**(code **)(*(int *)param_1 + 0x60))();
      puStack_205c = param_2;
      (**(code **)(iVar4 + 0x9c))();
    }
    else {
      FString::FString(local_30,param_2);
      local_8._0_1_ = 1;
      local_20 = (FString *)&puStack_205c;
      FString::FString((FString *)&puStack_205c,local_30);
      local_8._0_1_ = 1;
      iVar4 = FObjectsItem::Eval(this);
      if (iVar4 == 0) {
        FString::operator=((FString *)(param_1 + 0x74),param_2);
        iVar4 = **(int **)(param_1 + 0x3c);
        uVar5 = (**(code **)(*(int *)param_1 + 0x60))
                          (*(undefined4 *)(*(int *)((int)this + 0x58) + iVar1 * 4));
        (**(code **)(iVar4 + 0x9c))(param_2,uVar5);
      }
      else {
        local_20 = (FString *)
                   FString::Printf((ushort *)local_40,&DAT_1106e758,(double)(float)param_1);
        local_8._0_1_ = 3;
        iVar4 = **(int **)(param_1 + 0x3c);
        uVar5 = (**(code **)(*(int *)param_1 + 0x60))
                          (*(undefined4 *)(*(int *)((int)this + 0x58) + iVar1 * 4));
        puVar6 = FString::operator*(local_20);
        (**(code **)(iVar4 + 0x9c))(puVar6,uVar5);
        local_8._0_1_ = 1;
        FString::~FString(local_40);
      }
      puVar6 = param_2;
      if (*(int *)(local_1c + 0x5c) < 2) {
        local_2040 = 0;
        puStack_205c = (ushort *)0x1101e0c2;
        _memset(local_203e,0,0x1ffe);
        FPropertyItem::GetPropertyText(param_1,&local_2040);
        puVar6 = &local_2040;
      }
      FString::operator=((FString *)(param_1 + 0x74),puVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_30);
    }
    if (*(int *)GL2NeedEditChange_exref != 0) {
      (**(code **)(**(int **)(iVar1 * 4 + *(int *)(local_1c + 0x58)) + 0x44))();
    }
    this = local_1c;
  }
  if (*(int *)(*(int *)((int)this + 8) + 0x18) != 0) {
    (**(code **)(**(int **)(*(int *)((int)this + 8) + 0x18) + 8))();
  }
  if (*(int *)((int)this + 0x54) != 0) {
    (**(code **)(**(int **)((int)this + 0xc) + 0x6c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101e15d Catch@1101e15d

void Catch_1101e15d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1101e171 Catch@1101e171

void Catch_1101e171(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__SetProperty_1106e718);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101e240 FUN_1101e240

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_1101e240(void *this,int param_1,ushort *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  ushort *puVar4;
  int iVar5;
  UClass *pUVar6;
  ushort *puVar7;
  int iVar8;
  UObject *pUVar9;
  ushort *puVar10;
  UClass *pUVar11;
  ulong uVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  ushort local_2034 [4100];
  void *local_2c;
  int local_28;
  int local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_110613a8;
  local_10 = ExceptionList;
  local_18 = 0x1101e263;
  local_14 = &stack0xffffdfc0;
  iVar8 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_2c = this;
  puVar2 = &stack0xffffdfc0;
  if (*(int *)((int)this + 0x60) == 0) {
    ExceptionList = &local_10;
    appFailAssert(s_Class_1106e404,s___Properties_cpp_1106b558,0x9c0);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  iVar5 = *(int *)((int)this + 8);
  if (*(int *)(iVar5 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar5 + 0x18) + 4))(iVar5);
  }
  pUVar3 = thunk_FUN_11013fa0(*(UObject **)(param_1 + 0x3c));
  if (pUVar3 != (UObject *)0x0) {
    pwVar13 = u_Drivers_1106d3a0;
    puVar4 = FName::operator*((FName *)(*(int *)(param_1 + 0x3c) + 0x4c));
    iVar5 = appStricmp(puVar4,(ushort *)pwVar13);
    if (iVar5 == 0) {
      pUVar3 = thunk_FUN_11014060(*(UObject **)(param_1 + 0x3c));
      thunk_FUN_11013cf0((FArray *)&local_28);
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar5 = 0;
      pUVar11 = *(UClass **)(pUVar3 + 0x7c);
      pUVar6 = UClass::StaticClass();
      UObject::GetRegistryObjects((TArray<FRegistryObjectInfo> *)&local_28,pUVar6,pUVar11,iVar5);
      for (; local_18 = iVar8, iVar8 < local_24; iVar8 = iVar8 + 1) {
        puVar4 = FString::operator*((FString *)(iVar8 * 0x3c + local_28));
        appStrcpy(local_2034,puVar4);
        puVar4 = appStrstr(local_2034,(ushort *)&DAT_1106ce34);
        if (puVar4 == (ushort *)0x0) {
          puVar4 = Localize(s_Language_1106d368,s_Language_1106d368,(ushort *)u_Core_1106d374,
                            local_2034,0);
        }
        else {
          *puVar4 = 0;
          puVar4 = Localize(puVar4 + 1,(ushort *)u_ClassCaption_1106d380,local_2034,(ushort *)0x0,0)
          ;
        }
        iVar5 = appStricmp(puVar4,param_2);
        if (iVar5 == 0) {
          iVar5 = **(int **)GConfig_exref;
          piVar1 = *(int **)(param_1 + 0x3c);
          uVar14 = 0;
          puVar4 = FString::operator*((FString *)(iVar8 * 0x3c + local_28));
          puVar7 = UObject::GetName(*(UObject **)(param_1 + 0x3c));
          puVar10 = (ushort *)0x0;
          pUVar9 = (UObject *)0x0;
          pUVar3 = (UObject *)(**(code **)(*piVar1 + 0x74))(0,0,puVar7,puVar4,uVar14);
          puVar4 = UObject::GetPathName(pUVar3,pUVar9,puVar10);
          (**(code **)(iVar5 + 0x30))(puVar4);
          iVar8 = local_18;
        }
      }
      local_8 = local_8 & 0xffffff00;
      thunk_FUN_1101da60((FArray *)&local_28);
      this = local_2c;
      goto LAB_1101e483;
    }
  }
  pUVar3 = UObject::GetOuter(*(UObject **)(param_1 + 0x3c));
  pUVar3 = thunk_FUN_11015ea0(pUVar3);
  if (pUVar3 == (UObject *)0x0) {
    UObject::GlobalSetProperty
              (param_2,*(UClass **)((int)this + 0x60),*(UProperty **)(param_1 + 0x3c),
               *(int *)(*(UProperty **)(param_1 + 0x3c) + 0x54),*(int *)((int)this + 0x68));
  }
  else {
    iVar8 = **(int **)(param_1 + 0x3c);
    uVar14 = (**(code **)(*(int *)this + 0x68))(param_1,0,1);
    (**(code **)(iVar8 + 0x9c))(param_2,uVar14);
    puVar4 = (ushort *)0x0;
    uVar12 = 0x4000;
    pUVar3 = UClass::GetDefaultObject(*(UClass **)((int)this + 0x60));
    UObject::SaveConfig(pUVar3,uVar12,puVar4);
  }
LAB_1101e483:
  iVar8 = *(int *)((int)this + 8);
  if (*(int *)(iVar8 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar8 + 0x18) + 8))(iVar8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101e4b3 Catch@1101e4b3

void Catch_1101e4b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101e4c7 Catch@1101e4c7

void Catch_1101e4c7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__SetProperty_1106e760);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101e590 FUN_1101e590

WControl * __thiscall
FUN_1101e590(void *this,WWindow *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,_func_long_HWND___ptr_uint_uint_long *param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110613c8;
  local_c = ExceptionList;
  if (param_6 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_6 = WButton::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_6);
  *(undefined ***)this = WButton::vftable;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x48) = param_5;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined ***)((int)this + 100) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined ***)((int)this + 0x70) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined ***)((int)this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1101e680 FUN_1101e680

WButton * __thiscall
FUN_1101e680(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined4 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110613e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton(this,param_1,param_2);
  *(undefined ***)this = WCoolButton::vftable;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = unaff_retaddr;
  ExceptionList = param_4;
  return this;
}


// ==== 1101e730 FUN_1101e730

WControl * __thiscall
FUN_1101e730(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061408;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WComboBox::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WComboBox::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined ***)((int)this + 100) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined ***)((int)this + 0x70) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined ***)((int)this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined ***)((int)this + 0x88) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined ***)((int)this + 0x94) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined ***)((int)this + 0xa0) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined ***)((int)this + 0xac) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1101e860 FUN_1101e860

WControl * __thiscall
FUN_1101e860(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061428;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WEdit::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WEdit::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1101e900 FUN_1101e900

WControl * __thiscall
FUN_1101e900(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061448;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WTrackBar::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WTrackBar::vftable;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined ***)((int)this + 0x44) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined ***)((int)this + 0x50) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1101e9a0 FUN_1101e9a0

WWindow * __thiscall
FUN_1101e9a0(void *this,void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  void *unaff_ESI;
  undefined4 unaff_retaddr;
  void *pvStack_1c;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061468;
  pvStack_c = ExceptionList;
  pvStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_1c = this;
  FName::FName((FName *)&pvStack_1c,0);
  WWindow::WWindow(this);
  *(undefined4 *)((int)this + 0x44) = unaff_retaddr;
  *(void ***)((int)this + 0x48) = &pvStack_1c;
  *(undefined ***)this = WDragInterceptor::vftable;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined4 *)((int)this + 0x5c) = param_6;
  *(undefined4 *)((int)this + 0x60) = param_7;
  *(undefined4 *)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x6c) = param_4;
  *(undefined4 *)((int)this + 0x70) = param_5;
  *(undefined4 *)((int)this + 0x74) = 1;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 1101ea80 FUN_1101ea80

undefined4 * __thiscall
FUN_1101ea80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110614a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 4) = FControlSnoop::vftable;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined ***)this = FTreeItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FTreeItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  FArray::FArray((FArray *)((int)this + 0x24));
  local_4 = 1;
  FArray::FArray((FArray *)((int)this + 0x30));
  ExceptionList = local_c;
  return this;
}


// ==== 1101eb40 FUN_1101eb40

undefined1 FUN_1101eb40(void)

{
  return 0;
}


// ==== 1101eb50 FUN_1101eb50

void __fastcall FUN_1101eb50(FTreeItem *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110614d6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = FTreeItem::vftable_for_FCommandTarget_;
  *(undefined ***)(param_1 + 4) = FTreeItem::vftable_for_FControlSnoop_;
  local_8 = 2;
  FTreeItem::EmptyChildren(param_1);
  local_8 = 0;
  thunk_FUN_1101dc40((FArray *)(param_1 + 0x30));
  local_8 = 0xffffffff;
  thunk_FUN_1101db80((FArray *)(param_1 + 0x24));
  ExceptionList = local_10;
  return;
}


// ==== 1101ebc2 Catch@1101ebc2

void Catch_1101ebc2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101ebd6 Catch@1101ebd6

void Catch_1101ebd6(void)

{
  appUnwindf((ushort *)&DAT_11068a50,
             `public:_virtual___thiscall_FTreeItem::~FTreeItem(void)'::__l3::__FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101ec20 FUN_1101ec20

FTreeItem * __thiscall FUN_1101ec20(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x3c,*(int *)((int)this + -4),FTreeItem::~FTreeItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FTreeItem *)((int)this + -4));
    }
    return (FTreeItem *)((int)this + -4);
  }
  FTreeItem::~FTreeItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1101eca0 FUN_1101eca0

FTreeItem * __thiscall
FUN_1101eca0(void *this,WPropertiesBase *param_1,FTreeItem *param_2,UObject *param_3,
            undefined4 param_4,undefined4 param_5,int param_6)

{
  UObject *pUVar1;
  uchar *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_11061504;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FTreeItem::FTreeItem(this,param_1,param_2,0);
  local_8 = 0;
  *(undefined ***)this = FPropertyItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FPropertyItem::vftable_for_FControlSnoop_;
  *(UObject **)((int)this + 0x3c) = param_3;
  *(undefined4 *)((int)this + 0x40) = param_5;
  *(int *)((int)this + 0x44) = param_6;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x70) = param_4;
  FString::FString((FString *)((int)this + 0x74));
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  if ((((*(uint *)(param_3 + 0x48) & 0x8000000) == 0) ||
      (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) ||
     (puVar2 = FTreeItem::GetReadAddress(this,this,0), puVar2 == (uchar *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)((int)this + 0x68) = uVar3;
  if ((((*(uint *)(param_3 + 0x48) & 0x4000000) == 0) ||
      (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) ||
     (puVar2 = FTreeItem::GetReadAddress(this,this,0), puVar2 == (uchar *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  if ((((*(uint *)(param_3 + 0x48) & 0x10000000) == 0) ||
      (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) ||
     (puVar2 = FTreeItem::GetReadAddress(this,this,0), puVar2 == (uchar *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)((int)this + 0x60) = uVar3;
  if (((*(uint *)(param_3 + 0x48) & 0x40000000) == 0) ||
     (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)((int)this + 100) = uVar3;
  puVar2 = FTreeItem::GetReadAddress(this,this,1);
  *(uint *)((int)this + 0x6c) = (uint)(puVar2 != (uchar *)0x0);
  pUVar1 = thunk_FUN_11015e70(param_3);
  if ((pUVar1 == (UObject *)0x0) &&
     (((pUVar1 = thunk_FUN_11015ea0(param_3), pUVar1 == (UObject *)0x0 ||
       (puVar2 = FTreeItem::GetReadAddress(this,this,0), puVar2 == (uchar *)0x0)) &&
      (*(int *)((int)this + 0x5c) == 0)))) {
    if (*(int *)(param_3 + 0x40) < 2) {
      ExceptionList = local_10;
      return this;
    }
    if (param_6 != -1) {
      ExceptionList = local_10;
      return this;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 1;
  ExceptionList = local_10;
  return this;
}


// ==== 1101ee3b Catch@1101ee3b

void Catch_1101ee3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101ee4f Catch@1101ee4f

void Catch_1101ee4f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,
             `public:___thiscall_FPropertyItem::FPropertyItem(WPropertiesBase*,FTreeItem*,UProperty*,FName,int,int,int)'
             ::__l3::__FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101eee0 FUN_1101eee0

undefined1 FUN_1101eee0(void)

{
  return 1;
}


// ==== 1101eef0 FUN_1101eef0

void __fastcall FUN_1101eef0(FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061534;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 0x74));
  local_4 = 0xffffffff;
  FTreeItem::~FTreeItem(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101ef50 FUN_1101ef50

FPropertyItem * __thiscall FUN_1101ef50(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x80,*(int *)((int)this + -4),FPropertyItem::~FPropertyItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FPropertyItem *)((int)this + -4));
    }
    return (FPropertyItem *)((int)this + -4);
  }
  FPropertyItem::~FPropertyItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1101efd0 FUN_1101efd0

FTreeItem * __thiscall
FUN_1101efd0(void *this,WPropertiesBase *param_1,FTreeItem *param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FTreeItem::FTreeItem(this,param_1,param_2,param_3);
  *(undefined ***)this = FHeaderItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FHeaderItem::vftable_for_FControlSnoop_;
  ExceptionList = local_c;
  return this;
}


// ==== 1101f050 FUN_1101f050

void __fastcall FUN_1101f050(FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061578;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FTreeItem::~FTreeItem(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101f0a0 FUN_1101f0a0

FTreeItem * __thiscall FUN_1101f0a0(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061598;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(this,0x3c,*(int *)((int)this + -4),FHeaderItem::~FHeaderItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FTreeItem *)((int)this + -4));
    }
    ExceptionList = local_c;
    return (FTreeItem *)((int)this + -4);
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FTreeItem::~FTreeItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1101f170 FUN_1101f170

FHeaderItem * __thiscall
FUN_1101f170(void *this,WPropertiesBase *param_1,FTreeItem *param_2,int param_3,undefined4 param_4,
            int param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110615b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_1,param_2,param_5);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x3c) = param_4;
  *(undefined ***)this = FCategoryItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FCategoryItem::vftable_for_FControlSnoop_;
  *(int *)((int)this + 0x40) = param_3;
  if (param_3 == 0) {
    appFailAssert(s_BaseClass_1106eaac,s____Inc_Window_h_1106aefc,0x985);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1101f230 FUN_1101f230

void __fastcall FUN_1101f230(FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110615e0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FTreeItem::~FTreeItem(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101f280 FUN_1101f280

FTreeItem * __thiscall FUN_1101f280(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061600;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (this,0x44,*(int *)((int)this + -4),FCategoryItem::~FCategoryItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FTreeItem *)((int)this + -4));
    }
    ExceptionList = local_c;
    return (FTreeItem *)((int)this + -4);
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FTreeItem::~FTreeItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1101f350 FUN_1101f350

FHeaderItem * __thiscall
FUN_1101f350(void *this,WPropertiesBase *param_1,FTreeItem *param_2,undefined4 param_3)

{
  FString *this_00;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ushort *puVar7;
  int iVar8;
  UClass *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061635;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_1,param_2,0);
  local_4 = 0;
  this_00 = (FString *)((int)this + 0x48);
  *(undefined ***)this = FNewObjectItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FNewObjectItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x3c) = param_3;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  FString::FString(this_00);
  local_4._0_1_ = 1;
  uVar1 = *(uint *)(*(int *)(*(int *)((int)this + 0x3c) + 0x78) + 0x4a4);
  bVar3 = false;
  bVar2 = false;
  if (((uVar1 & 1) != 0) || ((uVar1 & 0x1000) == 0)) {
    FArray::FArray((FArray *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,3);
    local_20 = UClass::StaticClass();
    local_1c = -1;
    if (local_20 == (UClass *)0x0) {
      appFailAssert(s_Class_1106e404,s_d__work_interlude_2007_05_23_war_1106e40c,0x505);
    }
    thunk_FUN_1101a3f0(&local_20);
    iVar8 = local_1c;
    if (local_1c < *(int *)(GObjObjects_exref + 4)) {
      do {
        iVar4 = UStruct::IsChildOf(*(UStruct **)(*(int *)GObjObjects_exref + iVar8 * 4),
                                   *(UStruct **)(*(int *)((int)this + 0x3c) + 0x78));
        pcVar6 = GObjObjects_exref;
        if (((iVar4 != 0) &&
            (iVar4 = *(int *)(*(int *)GObjObjects_exref + iVar8 * 4),
            (*(uint *)(iVar4 + 0x4a4) & 0x1000) != 0)) && ((*(byte *)(iVar4 + 0x4a4) & 1) == 0)) {
          iVar5 = FArray::Add((FArray *)&local_18,1,4);
          *(int *)(local_18 + iVar5 * 4) = iVar4;
          pcVar6 = GObjObjects_exref;
        }
        do {
          iVar8 = iVar8 + 1;
          if (*(int *)(pcVar6 + 4) <= iVar8) goto LAB_1101f4ba;
        } while ((*(int *)(*(int *)pcVar6 + iVar8 * 4) == 0) ||
                (iVar4 = UObject::IsA(*(UObject **)(*(int *)pcVar6 + iVar8 * 4),local_20),
                pcVar6 = GObjObjects_exref, iVar4 == 0));
      } while (iVar8 < *(int *)(GObjObjects_exref + 4));
    }
LAB_1101f4ba:
    thunk_FUN_11015ed0(local_18,local_14);
    iVar8 = 0;
    if (0 < local_14) {
      do {
        if (!bVar2) {
          puVar7 = UObject::GetName(*(UObject **)(local_18 + iVar8 * 4));
          FString::operator=(this_00,puVar7);
          bVar2 = true;
        }
        puVar7 = UObject::GetName(*(UObject **)(local_18 + iVar8 * 4));
        iVar4 = FString::operator==((FString *)&DAT_1109c32c,puVar7);
        if (iVar4 != 0) {
          bVar3 = true;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_14);
    }
    local_4._0_1_ = 1;
    thunk_FUN_1101c4a0((FArray *)&local_18);
    if (bVar3) {
      FString::operator=(this_00,(FString *)&DAT_1109c32c);
      ExceptionList = local_c;
      return this;
    }
    if (bVar2) {
      ExceptionList = local_c;
      return this;
    }
  }
  puVar7 = UObject::GetName(*(UObject **)(*(int *)((int)this + 0x3c) + 0x78));
  FString::operator=(this_00,puVar7);
  ExceptionList = local_c;
  return this;
}


// ==== 1101f620 FUN_1101f620

void __fastcall FUN_1101f620(FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1106166c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 0x48));
  local_4 = 0xffffffff;
  FTreeItem::~FTreeItem(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101f680 FUN_1101f680

FNewObjectItem * __thiscall FUN_1101f680(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x54,*(int *)((int)this + -4),FNewObjectItem::~FNewObjectItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FNewObjectItem *)((int)this + -4));
    }
    return (FNewObjectItem *)((int)this + -4);
  }
  FNewObjectItem::~FNewObjectItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1101f700 FUN_1101f700

FHeaderItem * __thiscall
FUN_1101f700(void *this,WPropertiesBase *param_1,FTreeItem *param_2,undefined4 param_3,
            ushort *param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061694;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_1,param_2,1);
  local_4 = 0;
  *(undefined ***)this = FPropertyItemBase::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FPropertyItemBase::vftable_for_FControlSnoop_;
  FString::FString((FString *)((int)this + 0x3c),param_4);
  *(undefined4 *)((int)this + 0x48) = param_3;
  *(undefined4 *)((int)this + 0x4c) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1101f7b0 FUN_1101f7b0

void __fastcall FUN_1101f7b0(FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110616cc;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  FTreeItem::~FTreeItem(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101f810 FUN_1101f810

FPropertyItemBase * __thiscall FUN_1101f810(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x50,*(int *)((int)this + -4),FPropertyItemBase::~FPropertyItemBase);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FPropertyItemBase *)((int)this + -4));
    }
    return (FPropertyItemBase *)((int)this + -4);
  }
  FPropertyItemBase::~FPropertyItemBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1101f890 FUN_1101f890

FPropertyItemBase * __thiscall
FUN_1101f890(void *this,WPropertiesBase *param_1,FTreeItem *param_2,ulong param_3,ushort *param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110616fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(this,param_1,param_2,param_3,param_4);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x50) = param_5;
  *(undefined ***)this = FObjectsItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FObjectsItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x54) = param_6;
  FArray::FArray((FArray *)((int)this + 0x58));
  ExceptionList = local_c;
  return this;
}


// ==== 1101f940 FUN_1101f940

void __fastcall FUN_1101f940(FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061723;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1101c4a0((FArray *)(param_1 + 0x58));
  local_4 = 0xffffffff;
  FPropertyItemBase::~FPropertyItemBase(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101f9a0 FUN_1101f9a0

FObjectsItem * __thiscall FUN_1101f9a0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,100,*(int *)((int)this + -4),FObjectsItem::~FObjectsItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FObjectsItem *)((int)this + -4));
    }
    return (FObjectsItem *)((int)this + -4);
  }
  FObjectsItem::~FObjectsItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1101fa20 FUN_1101fa20

FPropertyItemBase * __thiscall
FUN_1101fa20(void *this,WPropertiesBase *param_1,FTreeItem *param_2,ushort *param_3,ushort *param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061754;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(this,param_1,param_2,0x4000,param_3);
  local_4 = 0;
  *(undefined ***)this = FObjectConfigItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FObjectConfigItem::vftable_for_FControlSnoop_;
  FString::FString((FString *)((int)this + 0x50),param_4);
  *(undefined4 *)((int)this + 0x5c) = param_6;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = param_5;
  ExceptionList = local_c;
  return this;
}


// ==== 1101fae0 FUN_1101fae0

void __fastcall FUN_1101fae0(FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061784;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 0x50));
  local_4 = 0xffffffff;
  FPropertyItemBase::~FPropertyItemBase(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101fb40 FUN_1101fb40

FObjectConfigItem * __thiscall FUN_1101fb40(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x6c,*(int *)((int)this + -4),FObjectConfigItem::~FObjectConfigItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FObjectConfigItem *)((int)this + -4));
    }
    return (FObjectConfigItem *)((int)this + -4);
  }
  FObjectConfigItem::~FObjectConfigItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1101fbc0 FUN_1101fbc0

FHeaderItem * __thiscall
FUN_1101fbc0(void *this,FPreferencesInfo *param_1,WPropertiesBase *param_2,FTreeItem *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110617b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_2,param_3,1);
  local_4 = 0;
  *(undefined ***)this = FConfigItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FConfigItem::vftable_for_FControlSnoop_;
  FPreferencesInfo::FPreferencesInfo((FPreferencesInfo *)((int)this + 0x3c),param_1);
  ExceptionList = local_c;
  return this;
}


// ==== 1101fc50 FUN_1101fc50

void __fastcall FUN_1101fc50(FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110617ec;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FPreferencesInfo::~FPreferencesInfo((FPreferencesInfo *)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  FTreeItem::~FTreeItem(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1101fcb0 FUN_1101fcb0

FConfigItem * __thiscall FUN_1101fcb0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x68,*(int *)((int)this + -4),FConfigItem::~FConfigItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FConfigItem *)((int)this + -4));
    }
    return (FConfigItem *)((int)this + -4);
  }
  FConfigItem::~FConfigItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1101fd30 FUN_1101fd30

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
FUN_1101fd30(void *this,LPCWSTR param_1,undefined4 param_2,undefined4 param_3,WCoolButton *param_4)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  char *lpString;
  WCoolButton *this_00;
  tagSIZE *ptVar3;
  undefined1 *puStack_4c;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  tagSIZE local_2c;
  undefined1 *local_20;
  WCoolButton *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1106180b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  puStack_4c = local_3c;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x24))();
  local_34 = local_34 - *(int *)((int)this + 0x20);
  hdc = GetDC(*(HWND *)(*(int *)((int)this + 8) + 4));
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = winGetSizeANSI((ushort *)param_1);
    if (iVar1 == 0) {
      local_18 = (WCoolButton *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)param_1);
      local_14 = (undefined1 *)&puStack_4c;
      local_18 = (WCoolButton *)&puStack_4c;
    }
    ptVar3 = &local_2c;
    iVar1 = appStrlen((ushort *)param_1);
    iVar2 = winGetSizeANSI((ushort *)param_1);
    lpString = winToANSI((char *)local_18,(ushort *)param_1,iVar2);
    GetTextExtentPoint32A(hdc,lpString,iVar1,ptVar3);
  }
  else {
    ptVar3 = &local_2c;
    iVar1 = appStrlen((ushort *)param_1);
    GetTextExtentPoint32W(hdc,param_1,iVar1,ptVar3);
  }
  ReleaseDC(*(HWND *)(*(int *)((int)this + 8) + 4),hdc);
  iVar1 = local_2c.cx + 2;
  local_18 = (WCoolButton *)thunk_FUN_11004ba0(0x9c);
  local_8._0_1_ = 1;
  if (local_18 == (WCoolButton *)0x0) {
    this_00 = (WCoolButton *)0x0;
  }
  else {
    local_20 = &stack0xffffffa4;
    this_00 = (WCoolButton *)WCoolButton::WCoolButton(local_18,*(int *)((int)this + 8) + 0x44,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_4 = this_00;
  thunk_FUN_1101bed0((void *)((int)this + 0x24),&param_4);
  WCoolButton::OpenWindow
            (this_00,1,local_34 - iVar1,local_38,iVar1,local_30 - local_38,(ushort *)param_1);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + iVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1101fead Catch@1101fead

void Catch_1101fead(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101fec1 Catch@1101fec1

void Catch_1101fec1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__AddButton_1106efc4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101ff50 FUN_1101ff50

void __fastcall FUN_1101ff50(FTreeItem *param_1)

{
  WLabel *pWVar1;
  undefined1 *puVar2;
  char cVar3;
  UClass *pUVar4;
  int iVar5;
  UObject *pUVar6;
  FName *pFVar7;
  void *pvVar8;
  undefined4 *puVar9;
  FName *pFVar10;
  UClass *pUVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined **ppuStack_10c;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  ushort *puVar18;
  int iVar19;
  wchar_t *pwVar20;
  int local_d0 [8];
  undefined **local_b0 [3];
  int local_a4 [4];
  undefined **local_94 [3];
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined1 local_7c;
  undefined3 uStack_7b;
  undefined **local_78 [3];
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  ushort local_58 [2];
  int local_54 [5];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  WLabel *local_c;
  WTrackBar *local_8;
  
  puStack_80 = &LAB_11061880;
  local_84 = ExceptionList;
  local_88 = &stack0xffffff20;
  local_7c = 0;
  uStack_7b = 0;
  ExceptionList = &local_84;
  puVar2 = &stack0xffffff20;
  if (*(int *)(param_1 + 0x48) != 0) {
    ExceptionList = &local_84;
    appFailAssert(s__EditControl_1106f0d8,s___Properties_cpp_1106b558,0x25c);
    puVar2 = local_88;
  }
  local_88 = puVar2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    appFailAssert(s__TrackControl_1106f0c8,s___Properties_cpp_1106b558,0x25d);
  }
  FTreeItem::OnItemSetFocus(param_1);
  if ((*(int *)(*(int *)(param_1 + 0x3c) + 0x40) != 1) && (*(int *)(param_1 + 0x44) == -1)) {
    ExceptionList = local_84;
    return;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x3c) + 0x48) & 0x20000) != 0) {
    ExceptionList = local_84;
    return;
  }
  pUVar4 = UByteProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if ((iVar5 != 0) &&
     (pUVar6 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), *(int *)(pUVar6 + 0x78) == 0)) {
    (**(code **)(*(int *)param_1 + 0x24))();
    local_18 = (**(code **)(**(int **)(param_1 + 8) + 0xec))();
    local_18 = local_18 + 0x1c;
    local_14 = local_14 + -1;
    local_8 = (WTrackBar *)thunk_FUN_11004ba0(0x5c);
    local_7c = 1;
    if (local_8 == (WTrackBar *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = WTrackBar::WTrackBar
                        (local_8,(WWindow *)(*(int *)(param_1 + 8) + 0x44),0,
                         (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    local_7c = 0;
    *(int *)(param_1 + 0x4c) = iVar5;
    local_b0[0] = FDelegate::vftable;
    *(FTreeItem **)(iVar5 + 0x48) = param_1;
    *(code **)(iVar5 + 0x4c) = FPropertyItem::OnTrackBarThumbTrack;
    local_78[0] = FDelegate::vftable;
    iVar5 = *(int *)(param_1 + 0x4c);
    *(FTreeItem **)(iVar5 + 0x54) = param_1;
    *(code **)(iVar5 + 0x58) = FPropertyItem::OnTrackBarThumbPosition;
    WTrackBar::OpenWindow(*(WTrackBar **)(param_1 + 0x4c),0,1);
    WTrackBar::SetTicFreq(*(WTrackBar **)(param_1 + 0x4c),0x20);
    WTrackBar::SetRange(*(WTrackBar **)(param_1 + 0x4c),0,0xff);
    WWindow::MoveWindow(*(WWindow **)(param_1 + 0x4c));
  }
  pUVar4 = UBoolProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (iVar5 == 0) {
    pUVar4 = UByteProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
    if ((iVar5 != 0) &&
       (pUVar6 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), *(int *)(pUVar6 + 0x78) != 0))
    goto LAB_110201e5;
    pUVar4 = UNameProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
    if (iVar5 != 0) {
      FName::FName((FName *)&local_8,0x338);
      iVar5 = FName::operator==((FName *)(param_1 + 0x70),(FName *)&local_8);
      if (iVar5 != 0) goto LAB_110201e5;
    }
    pUVar6 = thunk_FUN_11013fa0(*(UObject **)(param_1 + 0x3c));
    if (pUVar6 != (UObject *)0x0) goto LAB_110201e5;
    pUVar4 = UIntProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
    if (((iVar5 != 0) && (*(int **)(param_1 + 0xc) != (int *)0x0)) &&
       (cVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x94))(), cVar3 != '\0')) {
      pUVar4 = UStructProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(*(int *)(param_1 + 0xc) + 0x3c),pUVar4);
      if (iVar5 != 0) {
        FName::FName((FName *)&local_8,0x58);
        pFVar10 = (FName *)&local_8;
        pUVar6 = thunk_FUN_11015e70(*(UObject **)(*(int *)(param_1 + 0xc) + 0x3c));
        pFVar7 = (FName *)UObject::GetFName(*(UObject **)(pUVar6 + 0x78));
        iVar5 = FName::operator==(pFVar7,pFVar10);
        if (iVar5 != 0) goto LAB_110201e5;
      }
    }
  }
  else {
LAB_110201e5:
    local_d0[4] = 0;
    local_d0[5] = 0;
    local_d0[6] = 0xffffffff;
    local_d0[7] = 0xffffffff;
    piVar17 = local_54 + 4;
    piVar16 = local_54;
    pvVar8 = (void *)(**(code **)(*(int *)param_1 + 0x24))();
    thunk_FUN_110143f0(pvVar8,piVar16,piVar17);
    local_54[4] = (**(code **)(**(int **)(param_1 + 8) + 0xec))();
    local_c = (WLabel *)thunk_FUN_11004ba0(0x40);
    local_7c = 2;
    if (local_c == (WLabel *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = WLabel::WLabel(local_c,(WWindow *)(*(int *)(param_1 + 8) + 0x44),0,
                             (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    local_7c = 0;
    *(int *)(param_1 + 0x54) = iVar5;
    *(FTreeItem **)(iVar5 + 0x1c) = param_1 + 4;
    WLabel::OpenWindow(*(WLabel **)(param_1 + 0x54),0,1,0);
    local_d0[0] = 0;
    local_d0[1] = 0;
    local_d0[2] = 0;
    local_d0[3] = 1;
    piVar17 = local_d0;
    piVar16 = &local_28;
    pvVar8 = (void *)thunk_FUN_1101c460(local_54 + 4,local_54,0x14);
    thunk_FUN_110143f0(pvVar8,piVar16,piVar17);
    WWindow::MoveWindow(*(WWindow **)(param_1 + 0x54));
    local_a4[0] = -2;
    local_a4[1] = 0xfffffffb;
    local_a4[2] = 0xfffffffe;
    local_a4[3] = 0;
    puVar9 = (undefined4 *)thunk_FUN_110143f0(local_54 + 4,local_54,local_a4);
    local_54[4] = *puVar9;
    local_40 = puVar9[1];
    local_3c = puVar9[2];
    local_38 = puVar9[3];
    local_c = (WLabel *)thunk_FUN_11004ba0(0xb8);
    local_7c = 3;
    if (local_c == (WLabel *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = WComboBox::WComboBox
                        ((WComboBox *)local_c,*(WWindow **)(param_1 + 0x54),0,
                         (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    local_7c = 0;
    *(int *)(param_1 + 0x50) = iVar5;
    *(FTreeItem **)(iVar5 + 0x1c) = param_1 + 4;
    local_94[0] = FDelegate::vftable;
    iVar5 = *(int *)(param_1 + 0x50);
    *(FTreeItem **)(iVar5 + 0xa4) = param_1;
    *(code **)(iVar5 + 0xa8) = FPropertyItem::ComboSelectionEndOk;
    local_34 = FDelegate::vftable;
    iVar5 = *(int *)(param_1 + 0x50);
    *(FTreeItem **)(iVar5 + 0xb0) = param_1;
    *(code **)(iVar5 + 0xb4) = FPropertyItem::ComboSelectionEndCancel;
    uVar15 = 3;
    pUVar6 = thunk_FUN_11013fa0(*(UObject **)(param_1 + 0x3c));
    WComboBox::OpenWindow(*(WComboBox **)(param_1 + 0x50),0,(uint)(pUVar6 != (UObject *)0x0),uVar15)
    ;
    puVar9 = (undefined4 *)thunk_FUN_110143a0(local_54 + 4,local_54,&local_28);
    ppuStack_10c = (undefined **)*puVar9;
    WWindow::MoveWindow(*(WWindow **)(param_1 + 0x50));
    pUVar4 = UBoolProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
    if (iVar5 == 0) {
      pUVar4 = UByteProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
      if (iVar5 == 0) {
        pUVar4 = UNameProperty::StaticClass();
        iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
        if (iVar5 != 0) {
          FName::FName((FName *)&local_8,0x338);
          iVar5 = FName::operator==((FName *)(param_1 + 0x70),(FName *)&local_8);
          if (iVar5 != 0) {
            thunk_FUN_11015a00((FArray *)&local_34);
            _local_7c = CONCAT31(uStack_7b,4);
            (**(code **)(*(int *)param_1 + 0x74))();
            iVar5 = **(int **)(param_1 + 0x50);
            pFVar10 = (FName *)FName::FName((FName *)&local_c,0);
            FName::operator*(pFVar10);
            (**(code **)(iVar5 + 0xe8))();
            for (iVar5 = 0; local_5c = iVar5, iVar5 < local_30; iVar5 = iVar5 + 1) {
              iVar12 = **(int **)(param_1 + 0x50);
              FName::operator*((FName *)(local_34 + iVar5));
              (**(code **)(iVar12 + 0xe8))();
            }
            local_7c = 0;
            thunk_FUN_1101c590((FArray *)&local_34);
            goto LAB_11020756;
          }
        }
        pUVar6 = thunk_FUN_11013fa0(*(UObject **)(param_1 + 0x3c));
        if (pUVar6 != (UObject *)0x0) {
          pUVar6 = thunk_FUN_11014060(*(UObject **)(param_1 + 0x3c));
          pwVar20 = u_Drivers_1106d3a0;
          puVar14 = FName::operator*((FName *)(*(int *)(param_1 + 0x3c) + 0x4c));
          iVar5 = appStricmp(puVar14,(ushort *)pwVar20);
          if (iVar5 == 0) {
            thunk_FUN_11013cf0((FArray *)&local_34);
            _local_7c = CONCAT31(uStack_7b,5);
            iVar5 = 0;
            pUVar4 = *(UClass **)(pUVar6 + 0x7c);
            pUVar11 = UClass::StaticClass();
            UObject::GetRegistryObjects
                      ((TArray<FRegistryObjectInfo> *)&local_34,pUVar11,pUVar4,iVar5);
            for (iVar5 = 0; local_64 = iVar5, iVar5 < local_30; iVar5 = iVar5 + 1) {
              FString::FString((FString *)local_78,(FString *)(local_34 + iVar5 * 0xf));
              local_7c = 6;
              FString::FString((FString *)local_94);
              local_7c = 7;
              FString::FString((FString *)&local_14);
              local_7c = 8;
              FString::FString((FString *)local_b0,(ushort *)&DAT_1106ce34);
              local_7c = 9;
              iVar12 = FString::Split((FString *)local_78,(FString *)local_b0,(FString *)local_94,
                                      (FString *)&local_14,0);
              _local_7c = CONCAT31(uStack_7b,8);
              FString::~FString((FString *)local_b0);
              iVar19 = 0;
              if (iVar12 == 0) {
                iVar12 = **(int **)(param_1 + 0x50);
                puVar14 = FString::operator*((FString *)local_78);
                Localize(s_Language_1106d368,s_Language_1106d368,(ushort *)u_Core_1106d374,puVar14,
                         iVar19);
              }
              else {
                iVar12 = **(int **)(param_1 + 0x50);
                puVar18 = (ushort *)0x0;
                puVar14 = FString::operator*((FString *)local_94);
                pwVar20 = u_ClassCaption_1106d380;
                puVar13 = FString::operator*((FString *)&local_14);
                Localize(puVar13,(ushort *)pwVar20,puVar14,puVar18,iVar19);
              }
              (**(code **)(iVar12 + 0xe8))();
              local_7c = 7;
              FString::~FString((FString *)&local_14);
              local_7c = 6;
              FString::~FString((FString *)local_94);
              _local_7c = CONCAT31(uStack_7b,5);
              FString::~FString((FString *)local_78);
            }
            local_7c = 0;
            thunk_FUN_1101da60((FArray *)&local_34);
          }
          else {
            (**(code **)(**(int **)(param_1 + 0x50) + 0xe8))();
            thunk_FUN_1101dd00(&local_10);
            while (pWVar1 = local_c, (int)local_c < *(int *)(GObjObjects_exref + 4)) {
              iVar5 = UStruct::IsChildOf(*(UStruct **)(*(int *)GObjObjects_exref + (int)local_c * 4)
                                         ,*(UStruct **)(pUVar6 + 0x7c));
              if (iVar5 != 0) {
                iVar5 = **(int **)(param_1 + 0x50);
                UObject::GetName(*(UObject **)(*(int *)GObjObjects_exref + (int)pWVar1 * 4));
                (**(code **)(iVar5 + 0xe8))();
              }
              thunk_FUN_1101a3f0(&local_10);
            }
          }
          goto LAB_11020d1d;
        }
        pUVar4 = UIntProperty::StaticClass();
        iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
        if (iVar5 != 0) {
          local_60 = 0;
          while (iVar5 = local_60, local_60 < 0x10) {
            appSprintf(local_58,(ushort *)&DAT_1106d8c8);
            (**(code **)(**(int **)(param_1 + 0x50) + 0xe8))();
            local_60 = iVar5 + 1;
          }
        }
      }
      else {
        for (iVar5 = 0; local_6c = iVar5, pUVar6 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c))
            , iVar5 < *(int *)(*(int *)(pUVar6 + 0x78) + 0x44); iVar5 = iVar5 + 1) {
          pUVar6 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c));
          iVar12 = **(int **)(param_1 + 0x50);
          FName::operator*((FName *)(*(int *)(*(int *)(pUVar6 + 0x78) + 0x40) + iVar5 * 4));
          (**(code **)(iVar12 + 0xe8))();
        }
      }
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x50) + 0xe8))();
      (**(code **)(**(int **)(param_1 + 0x50) + 0xe8))();
    }
  }
LAB_11020756:
  pUVar4 = UArrayProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (((iVar5 != 0) && (*(int *)(param_1 + 0x6c) != 0)) &&
     ((*(byte *)(*(int *)(param_1 + 0x3c) + 0x48) & 0x40) == 0)) {
    local_c = (WLabel *)&stack0xffffff14;
    iVar5 = *(int *)param_1;
    LocalizeGeneral(s_AddButton_1106f0bc,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar5 + 0x34))();
    local_c = (WLabel *)&stack0xffffff04;
    iVar5 = *(int *)param_1;
    ppuStack_10c = (undefined **)0x110207e2;
    LocalizeGeneral(s_EmptyButton_1106f0ac,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar5 + 0x34))();
  }
  pUVar6 = UObject::GetOuter(*(UObject **)(param_1 + 0x3c));
  pUVar6 = thunk_FUN_11015ea0(pUVar6);
  if ((pUVar6 != (UObject *)0x0) && (*(int *)(param_1 + 0x6c) != 0)) {
    pUVar6 = UObject::GetOuter(*(UObject **)(param_1 + 0x3c));
    pUVar6 = thunk_FUN_11015ea0(pUVar6);
    if (((byte)pUVar6[0x48] & 0x40) == 0) {
      local_c = (WLabel *)&stack0xffffff14;
      iVar5 = *(int *)param_1;
      LocalizeGeneral(s_InsertButton_1106f09c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      local_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)param_1;
      ppuStack_10c = (undefined **)0x11020890;
      LocalizeGeneral(s_DeleteButton_1106f08c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
    }
  }
  pUVar4 = UStructProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (iVar5 != 0) {
    pwVar20 = u_Color_1106f07c;
    pUVar6 = thunk_FUN_11015e70(*(UObject **)(param_1 + 0x3c));
    puVar14 = UObject::GetName(*(UObject **)(pUVar6 + 0x78));
    iVar5 = appStricmp(puVar14,(ushort *)pwVar20);
    if (iVar5 == 0) {
      local_c = (WLabel *)&stack0xffffff14;
      iVar5 = *(int *)param_1;
      LocalizeGeneral(s_BrowseButton_1106f06c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      local_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)param_1;
      ppuStack_10c = (undefined **)0x1102093a;
      LocalizeGeneral(s_PickButton_1106d9bc,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
    }
  }
  pUVar4 = UObjectProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (iVar5 != 0) {
    local_c = (WLabel *)&stack0xffffff14;
    if (*(int *)(param_1 + 0x68) == 0) {
      iVar5 = *(int *)param_1;
      LocalizeGeneral(s_BrowseButton_1106f06c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(param_1 + 0x60) != 0)) {
        local_c = (WLabel *)&stack0xffffff04;
        iVar5 = *(int *)param_1;
        ppuStack_10c = (undefined **)0x11020a5e;
        LocalizeGeneral(s_UseButton_1106f040,(ushort *)u_Window_1106949c,(ushort *)0x0);
        (**(code **)(iVar5 + 0x34))();
      }
      local_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)param_1;
      ppuStack_10c = (undefined **)0x11020a93;
      LocalizeGeneral(s_ClearButton_1106f05c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
    }
    else {
      iVar5 = *(int *)param_1;
      local_c = (WLabel *)&stack0xffffff14;
      LocalizeGeneral(s_ClearButton_1106f05c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      local_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)param_1;
      ppuStack_10c = (undefined **)0x110209c6;
      LocalizeGeneral(s_FindButton_1106f04c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      local_c = (WLabel *)&ppuStack_10c;
      ppuStack_10c = FDelegate::vftable;
      iVar5 = *(int *)param_1;
      puVar14 = LocalizeGeneral(s_UseButton_1106f040,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))(puVar14);
    }
  }
  pUVar4 = UFloatProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (iVar5 == 0) {
    pUVar4 = UIntProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
    if (iVar5 == 0) {
      pUVar4 = UNameProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
      if (iVar5 != 0) {
        FName::FName((FName *)&local_8,0x338);
        iVar5 = FName::operator!=((FName *)(param_1 + 0x70),(FName *)&local_8);
        if (iVar5 != 0) goto LAB_11020b56;
      }
      pUVar4 = UStrProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
      if (iVar5 == 0) {
        pUVar4 = UObjectProperty::StaticClass();
        iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
        if (iVar5 == 0) {
          pUVar4 = UByteProperty::StaticClass();
          iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
          if ((iVar5 == 0) ||
             (pUVar6 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)),
             *(int *)(pUVar6 + 0x78) != 0)) goto LAB_11020d1d;
        }
      }
    }
  }
LAB_11020b56:
  (**(code **)(*(int *)param_1 + 0x24))();
  local_28 = (**(code **)(**(int **)(param_1 + 8) + 0xec))();
  local_28 = local_28 + 1;
  local_24 = local_24 + -1;
  pUVar4 = UByteProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (iVar5 != 0) {
    local_20 = local_28 + 0x1c;
  }
  pUVar4 = UIntProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (((iVar5 == 0) || (*(int **)(param_1 + 0xc) == (int *)0x0)) ||
     (cVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x94))(), cVar3 == '\0')) {
LAB_11020c17:
    local_20 = local_20 - *(int *)(param_1 + 0x20);
  }
  else {
    pUVar4 = UStructProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(*(int *)(param_1 + 0xc) + 0x3c),pUVar4);
    if (iVar5 == 0) goto LAB_11020c17;
    FName::FName((FName *)&local_8,0x58);
    pFVar10 = (FName *)&local_8;
    pUVar6 = thunk_FUN_11015e70(*(UObject **)(*(int *)(param_1 + 0xc) + 0x3c));
    pFVar7 = (FName *)UObject::GetFName(*(UObject **)(pUVar6 + 0x78));
    iVar5 = FName::operator==(pFVar7,pFVar10);
    if (iVar5 == 0) goto LAB_11020c17;
    local_20 = local_20 + -0x15;
  }
  local_c = (WLabel *)thunk_FUN_11004ba0(0x58);
  local_7c = 10;
  if (local_c == (WLabel *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = WEdit::WEdit((WEdit *)local_c,(WWindow *)(*(int *)(param_1 + 8) + 0x44),0,
                         (_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  local_7c = 0;
  *(int *)(param_1 + 0x48) = iVar5;
  *(FTreeItem **)(iVar5 + 0x1c) = param_1 + 4;
  pUVar4 = UIntProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar4);
  if (((iVar5 == 0) || (*(int **)(param_1 + 0xc) == (int *)0x0)) ||
     (cVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x94))(), cVar3 == '\0')) {
LAB_11020ccf:
    iVar5 = 0;
  }
  else {
    pUVar4 = UStructProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(*(int *)(param_1 + 0xc) + 0x3c),pUVar4);
    if (iVar5 == 0) goto LAB_11020ccf;
    FName::FName((FName *)&local_8,0x58);
    pFVar10 = (FName *)&local_8;
    pUVar6 = thunk_FUN_11015e70(*(UObject **)(*(int *)(param_1 + 0xc) + 0x3c));
    pFVar7 = (FName *)UObject::GetFName(*(UObject **)(pUVar6 + 0x78));
    iVar5 = FName::operator==(pFVar7,pFVar10);
    if (iVar5 == 0) goto LAB_11020ccf;
    iVar5 = 1;
  }
  WEdit::OpenWindow(*(WEdit **)(param_1 + 0x48),0,0,0,0,0,iVar5);
  local_54[0] = 0;
  local_54[1] = 1;
  local_54[2] = 0;
  local_54[3] = 1;
  thunk_FUN_110143f0(&local_28,local_a4,local_54);
  WWindow::MoveWindow(*(WWindow **)(param_1 + 0x48));
LAB_11020d1d:
  (**(code **)(*(int *)param_1 + 0xa0))();
  (**(code **)(*(int *)param_1 + 0x28))();
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 8))();
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
  }
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 8))();
  }
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 8))();
  }
  (**(code **)(*(int *)param_1 + 0x88))();
  ExceptionList = local_84;
  return;
}


// ==== 11020d98 Catch@11020d98

void Catch_11020d98(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_1107a670);
}


// ==== 11020dac Catch@11020dac

void Catch_11020dac(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnItemSetFocus_1106eff8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11021170 FUN_11021170

void __fastcall FUN_11021170(FTreeItem *param_1)

{
  UObject *this;
  int iVar1;
  FPropertyItem *pFVar2;
  undefined4 *puVar3;
  int local_2c;
  UObject *local_28;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110618b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1101c650(&local_2c,*(int *)(param_1 + 0x40));
  while (this = local_28, local_28 != (UObject *)0x0) {
    iVar1 = FName::operator==((FName *)(local_28 + 0x4c),(FName *)(param_1 + 0x3c));
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)(this + 0x48));
      if (iVar1 != 0) {
        pFVar2 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
        if (pFVar2 == (FPropertyItem *)0x0) {
          local_18 = 0;
        }
        else {
          puVar3 = (undefined4 *)UObject::GetFName(this);
          local_18 = FPropertyItem::FPropertyItem
                               (pFVar2,*(undefined4 *)(param_1 + 8),param_1,this,*puVar3,
                                *(undefined4 *)(this + 0x54),0xffffffff,0x29a);
        }
        thunk_FUN_1101bf00(param_1 + 0x30,&local_18);
      }
    }
    local_28 = *(UObject **)(this + 0x38);
    thunk_FUN_11015cb0(&local_2c);
  }
  FTreeItem::Expand(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 11021261 Catch@11021261

void Catch_11021261(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11021275 Catch@11021275

void Catch_11021275(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FCategoryItem__Expand_1106f0e8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110212e0 FUN_110212e0

void __fastcall FUN_110212e0(FHeaderItem *param_1)

{
  UObject *this;
  WLabel *pWVar1;
  ushort *puVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined **local_8c;
  FHeaderItem *local_88;
  code *local_84;
  int local_74 [11];
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined **local_34;
  undefined **local_24;
  undefined4 local_20;
  WLabel *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110618d6;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  local_84 = (code *)0x1102130d;
  ExceptionList = &local_10;
  FHeaderItem::OnItemSetFocus(param_1);
  local_1c = (WLabel *)&local_8c;
  local_8c = FDelegate::vftable;
  local_84 = FNewObjectItem::OnNew;
  iVar4 = *(int *)param_1;
  local_88 = param_1;
  puVar2 = LocalizeGeneral(&DAT_1106dac4,(ushort *)u_Window_1106949c,(ushort *)0x0);
  (**(code **)(iVar4 + 0x34))(puVar2);
  local_74[10] = -1 - *(int *)(param_1 + 0x20);
  local_74[8] = 0;
  local_74[9] = 0;
  local_48 = 0xffffffff;
  piVar5 = &local_44;
  piVar8 = local_74;
  pvVar3 = (void *)(**(code **)(*(int *)param_1 + 0x24))(piVar8,piVar5,local_74 + 8);
  thunk_FUN_110143f0(pvVar3,piVar8,piVar5);
  local_44 = (**(code **)(**(int **)(param_1 + 8) + 0xec))();
  local_1c = (WLabel *)thunk_FUN_11004ba0(0x40);
  local_8._0_1_ = 1;
  if (local_1c == (WLabel *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = WLabel::WLabel(local_1c,(WWindow *)(*(int *)(param_1 + 8) + 0x44),0,
                           (_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  local_8._0_1_ = 0;
  *(int *)(param_1 + 0x44) = iVar4;
  *(FHeaderItem **)(iVar4 + 0x1c) = param_1 + 4;
  WLabel::OpenWindow(*(WLabel **)(param_1 + 0x44),0,1,0);
  local_74[4] = 0;
  local_74[5] = 0;
  local_74[6] = 0;
  local_74[7] = 1;
  piVar5 = local_74 + 4;
  piVar8 = local_74 + 8;
  pvVar3 = (void *)thunk_FUN_1101c460(&local_44,local_74,0x14);
  thunk_FUN_110143f0(pvVar3,piVar8,piVar5);
  WWindow::MoveWindow(*(WWindow **)(param_1 + 0x44),local_74[8],local_74[9],local_74[10],local_48,0)
  ;
  local_74[0] = -2;
  local_74[1] = 0xfffffffa;
  local_74[2] = 0xfffffffe;
  local_74[3] = 0;
  piVar5 = (int *)thunk_FUN_110143f0(&local_44,local_74 + 4,local_74);
  local_44 = *piVar5;
  local_40 = piVar5[1];
  local_3c = piVar5[2];
  local_38 = piVar5[3];
  local_1c = (WLabel *)thunk_FUN_11004ba0(0xb8);
  local_8._0_1_ = 2;
  if (local_1c == (WLabel *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = WComboBox::WComboBox
                      ((WComboBox *)local_1c,*(WWindow **)(param_1 + 0x44),0,
                       (_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(int *)(param_1 + 0x40) = iVar4;
  *(FHeaderItem **)(iVar4 + 0x1c) = param_1 + 4;
  local_24 = FDelegate::vftable;
  iVar4 = *(int *)(param_1 + 0x40);
  *(FHeaderItem **)(iVar4 + 0xa4) = param_1;
  *(code **)(iVar4 + 0xa8) = FNewObjectItem::ComboSelectionEndOk;
  local_34 = FDelegate::vftable;
  iVar4 = *(int *)(param_1 + 0x40);
  *(FHeaderItem **)(iVar4 + 0xb0) = param_1;
  *(code **)(iVar4 + 0xb4) = FNewObjectItem::ComboSelectionEndCancel;
  WComboBox::OpenWindow(*(WComboBox **)(param_1 + 0x40),0,1,3);
  puVar6 = (undefined4 *)thunk_FUN_110143a0(&local_44,local_74,local_74 + 8);
  WWindow::MoveWindow(*(WWindow **)(param_1 + 0x40),*puVar6,puVar6[1],puVar6[2],puVar6[3],1);
  thunk_FUN_1101dd00(&local_20);
  while( true ) {
    pWVar1 = local_1c;
    if (*(int *)(GObjObjects_exref + 4) <= (int)local_1c) break;
    iVar4 = UStruct::IsChildOf(*(UStruct **)(*(int *)GObjObjects_exref + (int)local_1c * 4),
                               *(UStruct **)(*(int *)(param_1 + 0x3c) + 0x78));
    if (((iVar4 != 0) &&
        (this = *(UObject **)(*(int *)GObjObjects_exref + (int)pWVar1 * 4),
        (*(uint *)(this + 0x4a4) & 0x1000) != 0)) && (((byte)this[0x4a4] & 1) == 0)) {
      iVar4 = **(int **)(param_1 + 0x40);
      puVar2 = UObject::GetName(this);
      (**(code **)(iVar4 + 0xe8))(puVar2);
    }
    thunk_FUN_1101a3f0(&local_20);
  }
  iVar4 = **(int **)(param_1 + 0x40);
  puVar2 = FString::operator*((FString *)(param_1 + 0x48));
  uVar7 = (**(code **)(iVar4 + 0x100))(puVar2);
  (**(code **)(**(int **)(param_1 + 0x40) + 0xf8))(((int)uVar7 < 0) - 1 & uVar7);
  (**(code **)(**(int **)(param_1 + 0x40) + 8))(1);
  (**(code **)(**(int **)(param_1 + 0x44) + 8))(1);
  SetFocus(*(HWND *)(*(int *)(param_1 + 0x40) + 4));
  ExceptionList = local_10;
  return;
}


// ==== 110215de Catch@110215de

void Catch_110215de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110215f2 Catch@110215f2

void Catch_110215f2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__OnItemSetFocus_1106f140);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110216e0 FUN_110216e0

void __fastcall FUN_110216e0(WWindow *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_4c [8];
  undefined4 local_44;
  int local_3c [2];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_1c;
  WDragInterceptor *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110618fb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)param_1 + 0xf4))(0);
  local_18 = (WDragInterceptor *)thunk_FUN_11004ba0(0x78);
  local_8._0_1_ = 1;
  if (local_18 == (WDragInterceptor *)0x0) {
    uVar2 = 0;
  }
  else {
    local_34[0] = 3;
    local_2c = 0;
    puVar5 = local_4c;
    puVar1 = (undefined4 *)WWindow::GetClientRect(param_1);
    uVar2 = WDragInterceptor::WDragInterceptor
                      (local_18,param_1,local_2c,0xffffffff,*puVar1,puVar1[1],puVar1[2],puVar1[3],3,
                       3,puVar5);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  puVar1 = local_34;
  iVar3 = WWindow::GetCursorPos(param_1);
  uVar2 = *(undefined4 *)(iVar3 + 4);
  local_1c = (**(code **)(*(int *)param_1 + 0xec))(puVar1);
  iVar3 = *(int *)(param_1 + 0xf0);
  *(undefined4 *)(iVar3 + 0x4c) = local_1c;
  *(undefined4 *)(iVar3 + 0x50) = uVar2;
  local_44 = 0x40;
  uVar2 = 0;
  iVar3 = 0x40;
  puVar5 = local_4c;
  piVar4 = local_3c;
  this = (void *)WWindow::GetClientRect(param_1);
  puVar1 = (undefined4 *)thunk_FUN_11014430(this,piVar4,(int)puVar5,iVar3);
  iVar3 = *(int *)(param_1 + 0xf0);
  *(undefined4 *)(iVar3 + 100) = *puVar1;
  *(undefined4 *)(iVar3 + 0x68) = puVar1[1];
  *(undefined4 *)(iVar3 + 0x6c) = puVar1[2];
  *(undefined4 *)(iVar3 + 0x70) = puVar1[3];
  (**(code **)(**(int **)(param_1 + 0xf0) + 0xe8))(uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 11021817 Catch@11021817

void Catch_11021817(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1102182b Catch@1102182b

void Catch_1102182b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__BeginDrag_1106f18c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110218b0 FUN_110218b0

void __fastcall FUN_110218b0(FTreeItem *param_1)

{
  FName *pFVar1;
  UObject *pUVar2;
  int iVar3;
  FPropertyItem *pFVar4;
  undefined4 *puVar5;
  FCategoryItem *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  int iVar9;
  int local_58;
  int local_54;
  UObject *local_50;
  int local_4c;
  int local_48;
  int local_44;
  UObject *local_40;
  int local_3c;
  int local_38;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_11061920;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  local_2c = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x50) == 0) {
    ExceptionList = &local_10;
    thunk_FUN_1101c650(&local_54,*(int *)(param_1 + 0x4c));
    while (pUVar2 = local_50, local_50 != (UObject *)0x0) {
      iVar9 = (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)(local_50 + 0x48));
      if (iVar9 != 0) {
        iVar9 = thunk_FUN_1101be50((void *)(*(int *)(param_1 + 0x4c) + 0x500),
                                   (FName *)(pUVar2 + 0x4c));
        if (iVar9 == -1) {
          pUVar7 = (UClass *)(**(code **)(*(int *)pUVar2 + 0x74))();
          pUVar8 = UObject::StaticClass();
          if (pUVar7 != pUVar8) {
            pFVar4 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
            if (pFVar4 == (FPropertyItem *)0x0) {
              local_28 = 0;
            }
            else {
              puVar5 = (undefined4 *)UObject::GetFName(pUVar2);
              local_28 = FPropertyItem::FPropertyItem
                                   (pFVar4,*(undefined4 *)(param_1 + 8),param_1,pUVar2,*puVar5,
                                    *(undefined4 *)(pUVar2 + 0x54),0xffffffff,0x29a);
            }
            thunk_FUN_1101bf00(param_1 + 0x30,&local_28);
          }
        }
      }
      local_50 = *(UObject **)(pUVar2 + 0x38);
      thunk_FUN_11015cb0(&local_54);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x4c) == 0) ||
       ((*(uint *)(*(int *)(param_1 + 0x4c) + 0x4a4) & 0x2000) == 0)) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff9c;
      thunk_FUN_11015a00((FArray *)&local_58);
      local_8 = CONCAT31(local_8._1_3_,2);
      thunk_FUN_1101c650(&local_4c,*(int *)(param_1 + 0x4c));
      while (iVar9 = local_48, local_48 != 0) {
        iVar3 = (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)(local_48 + 0x48));
        if (iVar3 != 0) {
          pFVar1 = (FName *)(iVar9 + 0x4c);
          iVar3 = thunk_FUN_1101be50((void *)(*(int *)(param_1 + 0x4c) + 0x500),pFVar1);
          if (iVar3 == -1) {
            thunk_FUN_1101db20(&local_58,pFVar1);
          }
        }
        local_48 = *(int *)(iVar9 + 0x38);
        thunk_FUN_11015cb0(&local_4c);
      }
      for (iVar9 = 0; local_24 = iVar9, iVar9 < local_54; iVar9 = iVar9 + 1) {
        pFVar6 = (FCategoryItem *)thunk_FUN_110115b0(0x44,u_FCategoryItem_1106f1f8);
        if (pFVar6 == (FCategoryItem *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = FCategoryItem::FCategoryItem
                               (pFVar6,*(undefined4 *)(param_1 + 8),param_1,
                                *(undefined4 *)(param_1 + 0x4c),
                                *(undefined4 *)(local_58 + iVar9 * 4),1);
        }
        thunk_FUN_1101bf00(param_1 + 0x30,&local_20);
      }
    }
    else {
      ExceptionList = &local_10;
      *(undefined4 *)(param_1 + 0x18) = 0;
      local_14 = &stack0xffffff9c;
      thunk_FUN_11015a00((FArray *)&local_58);
      local_8 = CONCAT31(local_8._1_3_,1);
      thunk_FUN_1101c650(&local_3c,*(int *)(param_1 + 0x4c));
      while (iVar9 = local_38, local_38 != 0) {
        pFVar1 = (FName *)(local_38 + 0x4c);
        iVar3 = thunk_FUN_1101be50((void *)(*(int *)(param_1 + 0x4c) + 0x500),pFVar1);
        if (iVar3 == -1) {
          thunk_FUN_1101db20(&local_58,pFVar1);
        }
        local_38 = *(int *)(iVar9 + 0x38);
        thunk_FUN_11015cb0(&local_3c);
      }
      for (iVar9 = 0; local_18 = iVar9, iVar9 < local_54; iVar9 = iVar9 + 1) {
        thunk_FUN_1101c650(&local_44,*(int *)(param_1 + 0x4c));
        while (pUVar2 = local_40, local_40 != (UObject *)0x0) {
          iVar3 = FName::operator==((FName *)(local_40 + 0x4c),(FName *)(local_58 + iVar9 * 4));
          if (iVar3 != 0) {
            iVar3 = (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)(pUVar2 + 0x48));
            if (iVar3 != 0) {
              pFVar4 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
              if (pFVar4 == (FPropertyItem *)0x0) {
                local_1c = 0;
              }
              else {
                puVar5 = (undefined4 *)UObject::GetFName(pUVar2);
                local_1c = FPropertyItem::FPropertyItem
                                     (pFVar4,*(undefined4 *)(param_1 + 8),param_1,pUVar2,*puVar5,
                                      *(undefined4 *)(pUVar2 + 0x54),0xffffffff,0x29a);
              }
              thunk_FUN_1101bf00(param_1 + 0x30,&local_1c);
              iVar9 = local_18;
            }
          }
          local_40 = *(UObject **)(pUVar2 + 0x38);
          thunk_FUN_11015cb0(&local_44);
        }
      }
    }
    local_8 = local_8 & 0xffffff00;
    thunk_FUN_1101c590((FArray *)&local_58);
  }
  FTreeItem::Expand(param_1);
  *(undefined4 *)(param_1 + 0x18) = local_2c;
  ExceptionList = local_10;
  return;
}


// ==== 11021bac Catch@11021bac

void Catch_11021bac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_1107a670);
}


// ==== 11021bc0 Catch@11021bc0

void Catch_11021bc0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__Expand_1106f1c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11021cb0 FUN_11021cb0

void __fastcall FUN_11021cb0(FTreeItem *param_1)

{
  int iVar1;
  FCategoryItem *pFVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_11061938;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_11015a00((FArray *)&local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  thunk_FUN_1101c650(&local_2c,*(int *)(param_1 + 0x4c));
  while (iVar3 = local_28, local_28 != 0) {
    iVar1 = (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)(local_28 + 0x48));
    if (iVar1 != 0) {
      thunk_FUN_1101db20(&local_38,(FName *)(iVar3 + 0x4c));
    }
    local_28 = *(int *)(iVar3 + 0x38);
    thunk_FUN_11015cb0(&local_2c);
  }
  for (iVar3 = 0; local_1c = iVar3, iVar3 < local_34; iVar3 = iVar3 + 1) {
    pFVar2 = (FCategoryItem *)thunk_FUN_110115b0(0x44,u_FCategoryItem_1106f1f8);
    if (pFVar2 == (FCategoryItem *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = FCategoryItem::FCategoryItem
                           (pFVar2,*(undefined4 *)(param_1 + 8),param_1,
                            *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(local_38 + iVar3 * 4),1)
      ;
    }
    thunk_FUN_1101bf00(param_1 + 0x30,&local_18);
  }
  FTreeItem::Expand(param_1);
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_1101c590((FArray *)&local_38);
  ExceptionList = local_10;
  return;
}


// ==== 11021d9f Catch@11021d9f

void Catch_11021d9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 11021db3 Catch@11021db3

void Catch_11021db3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__Expand_1106f21c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11021e20 FUN_11021e20

void __fastcall FUN_11021e20(FObjectConfigItem *param_1)

{
  UObject *pUVar1;
  FPropertyItem *pFVar2;
  undefined4 *puVar3;
  int iVar4;
  UClass *pUVar5;
  ushort *puVar6;
  int local_30;
  UObject *local_2c;
  undefined4 local_1c;
  FName local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061950;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  FObjectConfigItem::LazyLoadClass(param_1);
  if (*(UClass **)(param_1 + 0x60) == (UClass *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*(int *)param_1 + 0x28))();
  }
  else {
    if (*(int *)(param_1 + 0x34) == 0) {
      puVar6 = (ushort *)0x0;
      pUVar5 = (UClass *)0x0;
      iVar4 = 1;
      pUVar1 = UClass::GetDefaultObject(*(UClass **)(param_1 + 0x60));
      UObject::LoadConfig(pUVar1,iVar4,pUVar5,puVar6);
      thunk_FUN_1101c650(&local_30,*(int *)(param_1 + 0x60));
      while (pUVar1 = local_2c, local_2c != (UObject *)0x0) {
        iVar4 = (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)(local_2c + 0x48));
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*(int *)pUVar1 + 0x74))();
          if ((*(int *)(param_1 + 0x60) == iVar4) || ((*(uint *)(pUVar1 + 0x48) & 0x40000) == 0)) {
            FName::FName(local_18,0);
            iVar4 = FName::operator==((FName *)(param_1 + 0x5c),local_18);
            if (iVar4 == 0) {
              iVar4 = FName::operator==((FName *)(pUVar1 + 0x4c),(FName *)(param_1 + 0x5c));
              if (iVar4 == 0) goto LAB_11021f35;
            }
            pFVar2 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
            if (pFVar2 == (FPropertyItem *)0x0) {
              local_1c = 0;
            }
            else {
              puVar3 = (undefined4 *)UObject::GetFName(pUVar1);
              local_1c = FPropertyItem::FPropertyItem
                                   (pFVar2,*(undefined4 *)(param_1 + 8),param_1,pUVar1,*puVar3,
                                    *(undefined4 *)(pUVar1 + 0x54),0xffffffff,0x29a);
            }
            thunk_FUN_1101bf00(param_1 + 0x30,&local_1c);
          }
        }
LAB_11021f35:
        local_2c = *(UObject **)(pUVar1 + 0x38);
        thunk_FUN_11015cb0(&local_30);
      }
    }
    FTreeItem::Expand((FTreeItem *)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11021f75 Catch@11021f75

void Catch_11021f75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 11021f89 Catch@11021f89

void Catch_11021f89(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__Expand_1106f250);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11022010 FUN_11022010

void __fastcall FUN_11022010(FTreeItem *param_1)

{
  ushort *puVar1;
  FString *pFVar2;
  ushort *puVar3;
  FObjectConfigItem *pFVar4;
  FConfigItem *this;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  FString local_44 [12];
  int local_38;
  int local_34;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_11061971;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_11013c90((FArray *)&local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar8 = 0;
  puVar1 = FString::operator*((FString *)(param_1 + 0x3c));
  UObject::GetPreferences((TArray<FPreferencesInfo> *)&local_38,puVar1,iVar8);
  local_18 = 0;
LAB_11022060:
  do {
    if (local_34 <= local_18) {
      FTreeItem::Expand(param_1);
      local_8 = local_8 & 0xffffff00;
      thunk_FUN_1101d9f0((FArray *)&local_38);
      ExceptionList = local_10;
      return;
    }
    for (local_1c = 0; bVar6 = local_1c == *(int *)(param_1 + 0x34),
        local_1c < *(int *)(param_1 + 0x34); local_1c = local_1c + 1) {
      pFVar2 = (FString *)
               (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + local_1c * 4) + 0x80))(local_44);
      local_8._0_1_ = 2;
      puVar1 = FString::operator*((FString *)(local_18 * 0x2c + local_38));
      puVar3 = FString::operator*(pFVar2);
      iVar8 = appStricmp(puVar3,puVar1);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_44);
      if (iVar8 == 0) {
        bVar6 = local_1c == *(int *)(param_1 + 0x34);
        break;
      }
    }
    if (bVar6) {
      iVar5 = local_18 * 0x2c;
      iVar8 = FString::operator!=((FString *)(iVar5 + 0x18 + local_38),(ushort *)&DAT_11068ff8);
      if (iVar8 != 0) {
        pFVar4 = (FObjectConfigItem *)thunk_FUN_110115b0(0x6c,u_FObjectConfigItem_1106f2d0);
        if (pFVar4 == (FObjectConfigItem *)0x0) {
          local_20 = 0;
          thunk_FUN_1101bf00(param_1 + 0x30,&local_20);
          local_18 = local_18 + 1;
        }
        else {
          pFVar2 = (FString *)(iVar5 + local_38);
          uVar9 = *(undefined4 *)(pFVar2 + 0x24);
          uVar7 = *(undefined4 *)(pFVar2 + 0x28);
          puVar1 = FString::operator*(pFVar2 + 0x18);
          puVar3 = FString::operator*(pFVar2);
          local_20 = FObjectConfigItem::FObjectConfigItem
                               (pFVar4,*(undefined4 *)(param_1 + 8),param_1,puVar3,puVar1,uVar7,
                                uVar9);
          thunk_FUN_1101bf00(param_1 + 0x30,&local_20);
          local_18 = local_18 + 1;
        }
        goto LAB_11022060;
      }
      this = (FConfigItem *)thunk_FUN_110115b0(0x68,u_FConfigItem_1106f2b4);
      if (this == (FConfigItem *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FConfigItem::FConfigItem
                             (this,(FPreferencesInfo *)(iVar5 + local_38),
                              *(WPropertiesBase **)(param_1 + 8),param_1);
      }
      thunk_FUN_1101bf00(param_1 + 0x30,&local_24);
    }
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 110221d8 Catch@110221d8

void Catch_110221d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_1107a670);
}


// ==== 110221ec Catch@110221ec

void Catch_110221ec(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FConfigItem__Expand_1106f284);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11022290 FUN_11022290

void __fastcall FUN_11022290(FTreeItem *param_1)

{
  FPropertyItem *pFVar1;
  UObject *pUVar2;
  undefined4 *puVar3;
  int *piVar4;
  FObjectsItem *this;
  ushort *puVar5;
  FNewObjectItem *this_00;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  int local_44;
  UObject *local_40;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  UObject *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061990;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  if ((*(int *)(*(UObject **)(param_1 + 0x3c) + 0x40) < 2) || (*(int *)(param_1 + 0x44) != -1)) {
    ExceptionList = &local_10;
    pUVar2 = thunk_FUN_11015ea0(*(UObject **)(param_1 + 0x3c));
    if (pUVar2 == (UObject *)0x0) {
      pUVar2 = thunk_FUN_11015e70(*(UObject **)(param_1 + 0x3c));
      if (pUVar2 == (UObject *)0x0) {
        pUVar2 = thunk_FUN_11015e40(*(UObject **)(param_1 + 0x3c));
        if (pUVar2 != (UObject *)0x0) {
          piVar4 = (int *)(**(code **)(*(int *)param_1 + 0x68))(param_1,0);
          local_18 = (UObject *)*piVar4;
          if (local_18 == (UObject *)0x0) {
            this_00 = (FNewObjectItem *)thunk_FUN_110115b0(0x54,u_FNewObjectItem_1106f330);
            if (this_00 == (FNewObjectItem *)0x0) {
              local_34 = (int *)0x0;
            }
            else {
              local_34 = (int *)FNewObjectItem::FNewObjectItem
                                          (this_00,*(WPropertiesBase **)(param_1 + 8),param_1,
                                           (UObjectProperty *)pUVar2);
            }
            ppiVar8 = &local_34;
          }
          else {
            this = (FObjectsItem *)thunk_FUN_110115b0(100,u_FObjectsItem_1106f354);
            if (this == (FObjectsItem *)0x0) {
              local_30 = (int *)0x0;
            }
            else {
              iVar6 = *(int *)(param_1 + 100);
              iVar7 = 1;
              puVar5 = UObject::GetFullName(local_18,(ushort *)0x0);
              local_30 = (int *)FObjectsItem::FObjectsItem
                                          (this,*(WPropertiesBase **)(param_1 + 8),param_1,1,puVar5,
                                           iVar7,iVar6);
            }
            (**(code **)(*local_30 + 0x98))(&local_18,1);
            ppiVar8 = &local_30;
          }
          thunk_FUN_1101bf00(param_1 + 0x30,ppiVar8);
        }
      }
      else {
        thunk_FUN_1101c650(&local_44,*(int *)(pUVar2 + 0x78));
        while (pUVar2 = local_40, local_40 != (UObject *)0x0) {
          iVar6 = (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)(local_40 + 0x48));
          if (iVar6 != 0) {
            pFVar1 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
            if (pFVar1 == (FPropertyItem *)0x0) {
              local_2c = 0;
            }
            else {
              puVar3 = (undefined4 *)UObject::GetFName(pUVar2);
              local_2c = FPropertyItem::FPropertyItem
                                   (pFVar1,*(undefined4 *)(param_1 + 8),param_1,pUVar2,*puVar3,
                                    *(undefined4 *)(pUVar2 + 0x54),0xffffffff,0x29a);
            }
            thunk_FUN_1101bf00(param_1 + 0x30,&local_2c);
          }
          local_40 = *(UObject **)(pUVar2 + 0x38);
          thunk_FUN_11015cb0(&local_44);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
      local_1c = (**(code **)(*(int *)param_1 + 0x68))(param_1,0);
      if (local_1c != 0) {
        local_28 = 0;
        while (iVar6 = local_28, local_28 < *(int *)(local_1c + 4)) {
          pFVar1 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
          if (pFVar1 == (FPropertyItem *)0x0) {
            local_24 = 0;
          }
          else {
            local_24 = FPropertyItem::FPropertyItem
                                 (pFVar1,*(undefined4 *)(param_1 + 8),param_1,
                                  *(int *)(pUVar2 + 0x78),*(undefined4 *)(param_1 + 0x70),
                                  *(int *)(*(int *)(pUVar2 + 0x78) + 0x44) * iVar6,iVar6,0x29a);
          }
          thunk_FUN_1101bf00(param_1 + 0x30,&local_24);
          local_28 = iVar6 + 1;
        }
      }
    }
  }
  else {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x18) = 0;
    local_14 = &stack0xffffffb0;
    for (iVar6 = 0; local_20 = iVar6, iVar6 < *(int *)(*(int *)(param_1 + 0x3c) + 0x40);
        iVar6 = iVar6 + 1) {
      pFVar1 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
      if (pFVar1 == (FPropertyItem *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = FPropertyItem::FPropertyItem
                             (pFVar1,*(undefined4 *)(param_1 + 8),param_1,*(int *)(param_1 + 0x3c),
                              *(undefined4 *)(param_1 + 0x70),
                              *(int *)(*(int *)(param_1 + 0x3c) + 0x44) * iVar6,iVar6,0x29a);
      }
      thunk_FUN_1101bf00(param_1 + 0x30,&local_1c);
    }
  }
  FTreeItem::Expand(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 11022526 Catch@11022526

void Catch_11022526(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_1107a670);
}


// ==== 1102253a Catch@1102253a

void Catch_1102253a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__Expand_1106f2fc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11022610 FUN_11022610

bool __thiscall FUN_11022610(void *this,ushort *param_1)

{
  HBITMAP__ *pHVar1;
  
  if (*(HGDIOBJ *)((int)this + 0xc) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)this + 0xc));
  }
  pHVar1 = LoadFileToBitmap(param_1,this,(int *)((int)this + 4));
  *(HBITMAP__ **)((int)this + 0xc) = pHVar1;
  return pHVar1 != (HBITMAP__ *)0x0;
}


// ==== 11022650 FUN_11022650

undefined4 __fastcall FUN_11022650(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 11022700 FUN_11022700

undefined4 * __fastcall FUN_11022700(undefined4 *param_1)

{
  HDWP pvVar1;
  
  pvVar1 = BeginDeferWindowPos(1);
  *param_1 = pvVar1;
  return param_1;
}


// ==== 11022730 FUN_11022730

undefined4 * __thiscall FUN_11022730(void *this,byte param_1)

{
  EndDeferWindowPos(*(HDWP *)this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11022790 FUN_11022790

void __fastcall FUN_11022790(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    ((uint)((ulonglong)(uint)param_1[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)param_1[4] * 4 >> 0x20) != 0),
                     u_HashMapHash_1106f374);
  iVar2 = 0;
  if (0 < param_1[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[4]);
  }
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      uVar3 = *(uint *)(*param_1 + 4 + iVar4) & param_1[4] - 1U;
      *(undefined4 *)(*param_1 + iVar4) = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < param_1[1]);
  }
  if (param_1[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1[3]);
  }
  param_1[3] = iVar1;
  return;
}


// ==== 110228a0 FUN_110228a0

void __fastcall FUN_110228a0(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    piVar1 = (int *)*param_1;
    if (piVar1[1] * 2 + 8 < piVar1[4]) {
      do {
        piVar1[4] = piVar1[4] / 2;
      } while (piVar1[1] * 2 + 8 < piVar1[4]);
    }
    thunk_FUN_11022790(piVar1);
    return;
  }
  return;
}


// ==== 110228e0 FUN_110228e0

void __fastcall FUN_110228e0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *this;
  int iVar3;
  int *local_58;
  int *local_54;
  int local_50;
  undefined4 local_4c;
  tagRECT local_48;
  undefined1 local_38 [12];
  int local_2c;
  undefined4 *local_24;
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110619be;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  iVar3 = 0;
  local_8 = 0;
  if (*param_1 != 0) {
    ExceptionList = &local_10;
    local_24 = (undefined4 *)thunk_FUN_11004ba0(4);
    local_8._0_1_ = 1;
    if (local_24 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_18 = thunk_FUN_11022700(local_24);
    }
    local_1c = 0;
    local_58 = (int *)*param_1;
    local_4c = 0;
    local_8._0_1_ = 2;
    local_54 = local_58;
    for (local_50 = 0; this = local_18, local_50 < local_54[1]; local_50 = local_50 + 1) {
      piVar1 = (int *)(*local_54 + 8 + local_50 * 0x28);
      if (iVar3 != *piVar1) {
        if (iVar3 != 0) {
          if (local_18 != (undefined4 *)0x0) {
            thunk_FUN_11022730(local_18,1);
          }
          local_24 = (undefined4 *)thunk_FUN_11004ba0(4);
          local_8._0_1_ = 3;
          if (local_24 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            local_18 = thunk_FUN_11022700(local_24);
          }
          local_8._0_1_ = 2;
        }
        iVar3 = *piVar1;
        local_1c = iVar3;
      }
      GetClientRect((HWND)*piVar1,&local_48);
      GetWindowRect((HWND)piVar1[1],(LPRECT)local_38);
      ScreenToClient((HWND)*piVar1,(LPPOINT)local_38);
      ScreenToClient((HWND)*piVar1,(LPPOINT)(local_38 + 8));
      if ((piVar1[2] & 2U) == 0) {
        if ((piVar1[2] & 8U) != 0) {
          local_38._0_4_ = piVar1[3] + local_48.right;
        }
      }
      else {
        local_38._0_4_ = piVar1[3] + local_48.left;
      }
      if ((piVar1[2] & 1U) == 0) {
        if ((piVar1[2] & 4U) != 0) {
          local_38._4_4_ = piVar1[4] + local_48.bottom;
        }
      }
      else {
        local_38._4_4_ = piVar1[4] + local_48.top;
      }
      uVar2 = piVar1[5];
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 2) == 0) {
          if ((uVar2 & 8) != 0) {
            local_38._8_4_ = piVar1[6] + local_48.right;
          }
        }
        else {
          local_38._8_4_ = piVar1[6] + local_48.left;
        }
      }
      else {
        local_38._8_4_ = piVar1[6] + local_38._0_4_;
      }
      uVar2 = piVar1[5];
      if ((uVar2 & 0x20) == 0) {
        if ((uVar2 & 1) == 0) {
          if ((uVar2 & 4) != 0) {
            local_2c = piVar1[7] + local_48.bottom;
          }
        }
        else {
          local_2c = piVar1[7] + local_48.top;
        }
      }
      else {
        local_2c = piVar1[7] + local_38._4_4_;
      }
      MoveWindow((HWND)piVar1[1],local_38._0_4_,local_38._4_4_,local_38._8_4_ - local_38._0_4_,
                 local_2c - local_38._4_4_,1);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_110228a0(&local_58);
    if (this != (undefined4 *)0x0) {
      thunk_FUN_11022730(this,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11022ad9 Catch@11022ad9

void Catch_11022ad9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 11022aed Catch@11022aed

void Catch_11022aed(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FContainer__RefreshControls_1106f390);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11022ba0 FUN_11022ba0

void __thiscall FUN_11022ba0(void *this,int param_1)

{
  if (param_1 == 0) {
    appFailAssert(s_InAnchors_1106f3d4,s___Utils_cpp_1106f3e0,0x29);
  }
  *(int *)this = param_1;
  FContainer::RefreshControls(this);
  return;
}


// ==== 11022be0 FUN_11022be0

undefined4 FUN_11022be0(undefined4 param_1)

{
  DAT_1109c35c = param_1;
  return 1;
}


// ==== 11022c10 FUN_11022c10

void __cdecl
FUN_11022c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1109c510,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 11022c60 FUN_11022c60

HBITMAP __cdecl FUN_11022c60(ushort *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  HDC hdc;
  uchar *puVar3;
  HBITMAP pHVar4;
  TArray<unsigned_char> local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110619e9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  TArray<unsigned_char>::TArray<unsigned_char>(local_28);
  local_8._0_1_ = 1;
  iVar2 = appLoadFileToArray(local_28,param_1,*(FFileManager **)GFileManager_exref);
  if (iVar2 != 0) {
    hdc = GetDC((HWND)0x0);
    puVar3 = TArray<unsigned_char>::operator()(local_28,0);
    bVar1 = puVar3[0x1c];
    *param_2 = *(undefined4 *)(puVar3 + 0x12);
    *param_3 = *(undefined4 *)(puVar3 + 0x16);
    pHVar4 = CreateDIBitmap(hdc,(BITMAPINFOHEADER *)(puVar3 + 0xe),4,
                            puVar3 + (1 << (bVar1 & 0x1f)) * 4 + 0x36,(BITMAPINFO *)(puVar3 + 0xe),0
                           );
    ReleaseDC((HWND)0x0,hdc);
    local_8 = (uint)local_8._1_3_ << 8;
    TArray<unsigned_char>::~TArray<unsigned_char>(local_28);
    ExceptionList = local_10;
    return pHVar4;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  TArray<unsigned_char>::~TArray<unsigned_char>(local_28);
  ExceptionList = local_10;
  return (HBITMAP)0x0;
}


// ==== 11022d39 Catch@11022d39

void Catch_11022d39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11022d4d Catch@11022d4d

void Catch_11022d4d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_LoadFileToBitmap_1106f408);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11022db0 FUN_11022db0

void __cdecl FUN_11022db0(HWND param_1)

{
  DWORD DVar1;
  DWORD local_4;
  
  if (*(int *)__Client_exref != 0) {
    if (param_1 == (HWND)0x0) {
      param_1 = GetForegroundWindow();
    }
    GetWindowThreadProcessId(param_1,&local_4);
    DVar1 = GetCurrentProcessId();
    if (local_4 != DVar1) {
      (**(code **)(**(int **)__Client_exref + 0x74))();
    }
  }
  return;
}


// ==== 11022e00 FUN_11022e00

void __cdecl FUN_11022e00(HWND param_1)

{
  DWORD DVar1;
  DWORD local_4;
  
  if (*(int *)__Client_exref != 0) {
    GetWindowThreadProcessId(param_1,&local_4);
    DVar1 = GetCurrentProcessId();
    if (local_4 != DVar1) {
      (**(code **)(**(int **)__Client_exref + 0x70))();
    }
  }
  return;
}


// ==== 11022e50 FUN_11022e50

void __thiscall
FUN_11022e50(void *this,int param_1,int param_2,int param_3,int param_4,BOOL param_5)

{
  MoveWindow(*(HWND *)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 11022e90 FUN_11022e90

void __thiscall FUN_11022e90(void *this,int param_1)

{
  BOOL BVar1;
  int nCmdShow;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)((int)this + 0x2c) = param_1;
  if (param_1 == 0) {
    nCmdShow = 0;
  }
  else {
    BVar1 = IsIconic(*(HWND *)((int)this + 4));
    nCmdShow = (-(uint)(BVar1 != 0) & 4) + 5;
  }
  ShowWindow(*(HWND *)((int)this + 4),nCmdShow);
  ExceptionList = local_10;
  return;
}


// ==== 11022f01 Catch@11022f01

void Catch_11022f01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11022f15 Catch@11022f15

void Catch_11022f15(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__Show_1106f430);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11022f60 FUN_11022f60

void __thiscall FUN_11022f60(void *this,int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x1c))((int)this + 8);
  ExceptionList = local_10;
  return;
}


// ==== 11022fb2 Catch@11022fb2

void Catch_11022fb2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11022fc6 Catch@11022fc6

void Catch_11022fc6(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__Serialize_1106f454);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023010 FUN_11023010

wchar_t * FUN_11023010(void)

{
  return u_Window_1106949c;
}


// ==== 11023020 FUN_11023020

void __thiscall FUN_11023020(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  if ((*(byte *)((int)this + 0x10) & 2) == 0) {
    if (*(int *)GUnicodeOS_exref != 0) {
      DefWindowProcW(*(HWND *)((int)this + 4),param_1,param_2,param_3);
      return;
    }
    DefWindowProcA(*(HWND *)((int)this + 4),param_1,param_2,param_3);
    return;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    DefMDIChildProcW(*(HWND *)((int)this + 4),param_1,param_2,param_3);
    return;
  }
  DefMDIChildProcA(*(HWND *)((int)this + 4),param_1,param_2,param_3);
  return;
}


// ==== 110230c0 FUN_110230c0

undefined4 FUN_110230c0(void)

{
  return 0;
}


// ==== 110230d0 FUN_110230d0

void __thiscall FUN_110230d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}


// ==== 11023118 Catch@11023118

void Catch_11023118(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102312c Catch@1102312c

void Catch_1102312c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__SetNotifyHook_1106f484);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023170 FUN_11023170

void FUN_11023170(void)

{
  return;
}


// ==== 11023180 FUN_11023180

void FUN_11023180(void)

{
  return;
}


// ==== 11023190 FUN_11023190

void FUN_11023190(void)

{
  return;
}


// ==== 110231a0 FUN_110231a0

void FUN_110231a0(void)

{
  return;
}


// ==== 110231b0 FUN_110231b0

void FUN_110231b0(void)

{
  return;
}


// ==== 110231c0 FUN_110231c0

void FUN_110231c0(void)

{
  return;
}


// ==== 110231d0 FUN_110231d0

void FUN_110231d0(void)

{
  return;
}


// ==== 110231e0 FUN_110231e0

undefined4 FUN_110231e0(void)

{
  return 0;
}


// ==== 110231f0 FUN_110231f0

void FUN_110231f0(void)

{
  return;
}


// ==== 11023200 FUN_11023200

void FUN_11023200(void)

{
  return;
}


// ==== 11023210 FUN_11023210

void FUN_11023210(void)

{
  return;
}


// ==== 11023220 FUN_11023220

void FUN_11023220(void)

{
  return;
}


// ==== 11023230 FUN_11023230

void FUN_11023230(void)

{
  return;
}


// ==== 11023240 FUN_11023240

void FUN_11023240(void)

{
  return;
}


// ==== 11023250 FUN_11023250

void FUN_11023250(void)

{
  return;
}


// ==== 11023260 FUN_11023260

undefined4 FUN_11023260(void)

{
  return 0;
}


// ==== 11023270 FUN_11023270

void FUN_11023270(void)

{
  return;
}


// ==== 11023280 FUN_11023280

void FUN_11023280(void)

{
  return;
}


// ==== 11023290 FUN_11023290

void FUN_11023290(void)

{
  return;
}


// ==== 110232a0 FUN_110232a0

void FUN_110232a0(void)

{
  return;
}


// ==== 110232b0 FUN_110232b0

void FUN_110232b0(void)

{
  return;
}


// ==== 110232c0 FUN_110232c0

void FUN_110232c0(void)

{
  return;
}


// ==== 110232d0 FUN_110232d0

void FUN_110232d0(void)

{
  return;
}


// ==== 110232e0 FUN_110232e0

void FUN_110232e0(void)

{
  return;
}


// ==== 110232f0 FUN_110232f0

void FUN_110232f0(void)

{
  return;
}


// ==== 11023300 FUN_11023300

void FUN_11023300(void)

{
  return;
}


// ==== 11023310 FUN_11023310

void FUN_11023310(void)

{
  return;
}


// ==== 11023320 FUN_11023320

void FUN_11023320(void)

{
  return;
}


// ==== 11023330 FUN_11023330

void FUN_11023330(void)

{
  return;
}


// ==== 11023340 FUN_11023340

void FUN_11023340(void)

{
  return;
}


// ==== 11023350 FUN_11023350

void FUN_11023350(void)

{
  return;
}


// ==== 11023360 FUN_11023360

void FUN_11023360(void)

{
  return;
}


// ==== 11023370 FUN_11023370

void FUN_11023370(void)

{
  return;
}


// ==== 11023380 FUN_11023380

void FUN_11023380(void)

{
  return;
}


// ==== 11023390 FUN_11023390

void FUN_11023390(void)

{
  return;
}


// ==== 110233a0 FUN_110233a0

void FUN_110233a0(void)

{
  return;
}


// ==== 110233b0 FUN_110233b0

void FUN_110233b0(void)

{
  return;
}


// ==== 110233c0 FUN_110233c0

void FUN_110233c0(void)

{
  return;
}


// ==== 110233d0 FUN_110233d0

void FUN_110233d0(void)

{
  return;
}


// ==== 110233e0 FUN_110233e0

void FUN_110233e0(void)

{
  return;
}


// ==== 110233f0 FUN_110233f0

undefined4 FUN_110233f0(void)

{
  return 0;
}


// ==== 11023400 FUN_11023400

undefined4 __fastcall FUN_11023400(int param_1)

{
  HWND hWnd;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a30;
  local_10 = ExceptionList;
  local_8 = 0;
  hWnd = *(HWND *)(param_1 + 4);
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    if (hWnd != (HWND)0x0) {
      ExceptionList = &local_10;
      DestroyWindow(hWnd);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(*(int *)(param_1 + 0x14) + 4),0x221,(WPARAM)hWnd,0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 11023472 Catch@11023472

void Catch_11023472(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11023486 Catch@11023486

void Catch_11023486(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__OnClose_1106f4bc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110234d0 FUN_110234d0

void FUN_110234d0(void)

{
  return;
}


// ==== 11023510 Catch@11023510

void Catch_11023510(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11023524 Catch@11023524

void Catch_11023524(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__SaveWindowPos_1106f4e4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023560 FUN_11023560

void __fastcall FUN_11023560(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a50;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_1[4] & 1U) == 0) {
    ExceptionList = &local_10;
    param_1[4] = param_1[4] | 1;
    (**(code **)(*param_1 + 0x14))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 110235b4 Catch@110235b4

void Catch_110235b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110235c8 Catch@110235c8

void Catch_110235c8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__MaybeDestroy_1106f51c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023610 FUN_11023610

void __fastcall FUN_11023610(int param_1)

{
  int iVar1;
  int iVar2;
  tagRECT local_10;
  
  GetWindowRect(*(HWND *)(param_1 + 4),&local_10);
  iVar1 = GetSystemMetrics(0x4e);
  iVar2 = GetSystemMetrics(0x4f);
  if ((iVar1 + 4 <= local_10.left) || (local_10.left < -4)) {
    local_10.left = 0;
  }
  if ((iVar2 + 4 <= local_10.top) || (local_10.top < -4)) {
    local_10.top = 0;
  }
  SetWindowPos(*(HWND *)(param_1 + 4),(HWND)0x0,local_10.left,local_10.top,local_10.right,
               local_10.bottom,0x405);
  return;
}


// ==== 110236b0 FUN_110236b0

void __thiscall FUN_110236b0(void *this,undefined4 param_1,int *param_2,int param_3)

{
  int x;
  int y;
  HPEN ho;
  HPEN ho_00;
  HDC hdc;
  HGDIOBJ pvVar1;
  HPEN pHVar2;
  int y_00;
  int x_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ho = CreatePen(0,1,0x9f9f9f);
  ho_00 = CreatePen(0,1,0x6a6a6a);
  hdc = GetDC(*(HWND *)((int)this + 4));
  x = *param_2;
  y = param_2[1];
  x_00 = param_2[2] + -1;
  y_00 = param_2[3] + -1;
  pHVar2 = ho;
  if (param_3 == 0) {
    pHVar2 = ho_00;
  }
  pvVar1 = SelectObject(hdc,pHVar2);
  MoveToEx(hdc,x,y,(LPPOINT)0x0);
  LineTo(hdc,x_00,y);
  MoveToEx(hdc,x,y,(LPPOINT)0x0);
  LineTo(hdc,x,y_00);
  SelectObject(hdc,pvVar1);
  pHVar2 = ho_00;
  if (param_3 == 0) {
    pHVar2 = ho;
  }
  pvVar1 = SelectObject(hdc,pHVar2);
  MoveToEx(hdc,x_00,y_00,(LPPOINT)0x0);
  LineTo(hdc,x_00,y);
  MoveToEx(hdc,x_00,y_00,(LPPOINT)0x0);
  LineTo(hdc,x,y_00);
  SelectObject(hdc,pvVar1);
  DeleteObject(ho);
  DeleteObject(ho_00);
  ReleaseDC(*(HWND *)((int)this + 4),hdc);
  ExceptionList = local_10;
  return;
}


// ==== 11023811 Catch@11023811

void Catch_11023811(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 11023825 Catch@11023825

void Catch_11023825(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__MyDrawEdge_1106f550);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110238b0 FUN_110238b0

LRESULT __thiscall FUN_110238b0(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  BOOL BVar1;
  LRESULT LVar2;
  
  BVar1 = IsWindow(*(HWND *)((int)this + 4));
  if (BVar1 == 0) {
    return 1;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    LVar2 = CallWindowProcW(*(WNDPROC *)((int)this + 0x3c),*(HWND *)((int)this + 4),param_1,param_2,
                            param_3);
    return LVar2;
  }
  LVar2 = CallWindowProcA(*(WNDPROC *)((int)this + 0x3c),*(HWND *)((int)this + 4),param_1,param_2,
                          param_3);
  return LVar2;
}


// ==== 11023930 FUN_11023930

void __fastcall FUN_11023930(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x11023938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  return;
}


// ==== 11023940 FUN_11023940

void __fastcall FUN_11023940(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(HBRUSH__ **)(param_1 + 0x58) = hBrushCyanLow;
  ReleaseCapture();
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1102399e Catch@1102399e

void Catch_1102399e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110239b2 Catch@110239b2

void Catch_110239b2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__OnLeftButtonUp_1106f580);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023a00 FUN_11023a00

undefined4 FUN_11023a00(void)

{
  HCURSOR hCursor;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a80;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    hCursor = LoadCursorA(hInstanceWindow,(LPCSTR)0x5a4);
  }
  else {
    ExceptionList = &local_10;
    hCursor = LoadCursorW(hInstanceWindow,(LPCWSTR)0x5a4);
  }
  SetCursor(hCursor);
  ExceptionList = local_10;
  return 1;
}


// ==== 11023a70 Catch@11023a70

void Catch_11023a70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11023a84 Catch@11023a84

void Catch_11023a84(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__OnSetCursor_1106f5cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023ad0 FUN_11023ad0

ulonglong __fastcall FUN_11023ad0(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1103b180(param_1,param_2);
  return uVar1;
}


// ==== 11023af0 FUN_11023af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11023af0(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 0x54) == 0) {
    appFailAssert(s_MaxVal_1106f61c,s___Window_cpp_1106f624,0x4d4);
  }
  *(float *)((int)this + 0x48) =
       ((float)param_1 / (float)*(int *)((int)this + 0x54)) * (float)_DAT_1106f610;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11023b50 FUN_11023b50

void __thiscall FUN_11023b50(void *this,int param_1)

{
  if (param_1 < 1) {
    appFailAssert(s_InMaxVal_>_0_1106f634,s___Window_cpp_1106f624,0x4de);
  }
  *(int *)((int)this + 0x54) = param_1;
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11023ba0 FUN_11023ba0

void __fastcall FUN_11023ba0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x11023ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  return;
}


// ==== 11023bb0 FUN_11023bb0

void __fastcall FUN_11023bb0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061a90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ReleaseCapture();
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  ExceptionList = local_10;
  return;
}


// ==== 11023c06 Catch@11023c06

void Catch_11023c06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11023c1a Catch@11023c1a

void Catch_11023c1a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__OnLeftButtonUp_1106f644);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023c60 FUN_11023c60

undefined4 FUN_11023c60(void)

{
  HCURSOR hCursor;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061aa0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  else {
    ExceptionList = &local_10;
    hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  }
  SetCursor(hCursor);
  ExceptionList = local_10;
  return 1;
}


// ==== 11023cc4 Catch@11023cc4

void Catch_11023cc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11023cd8 Catch@11023cd8

void Catch_11023cd8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__OnSetCursor_1106f690);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11023d20 FUN_11023d20

ulonglong __fastcall FUN_11023d20(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1103b180(param_1,param_2);
  return uVar1;
}


// ==== 11023d40 FUN_11023d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_11023d40(int param_1)

{
  return (float10)(*(float *)(param_1 + 0x48) / (float)_DAT_1106f610);
}


// ==== 11023d60 FUN_11023d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11023d60(void *this,int param_1)

{
  if (*(int *)((int)this + 0x50) == 0) {
    appFailAssert(s_MaxVal_1106f61c,s___Window_cpp_1106f624,0x5ad);
  }
  *(float *)((int)this + 0x48) =
       ((float)param_1 / (float)*(int *)((int)this + 0x50)) * (float)_DAT_1106f610;
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11023dc0 FUN_11023dc0

void __thiscall FUN_11023dc0(void *this,int param_1)

{
  if (param_1 < 1) {
    appFailAssert(s_InMaxVal_>_0_1106f634,s___Window_cpp_1106f624,0x5be);
  }
  *(int *)((int)this + 0x50) = param_1;
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11023e10 FUN_11023e10

void __fastcall FUN_11023e10(int *param_1)

{
  HCURSOR hCursor;
  
  (**(code **)(*param_1 + 8))(1);
  SetCapture((HWND)param_1[1]);
  hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f8b);
  SetCursor(hCursor);
  SetFocus((HWND)param_1[1]);
  return;
}


// ==== 11023e60 FUN_11023e60

void __fastcall FUN_11023e60(int *param_1)

{
  ReleaseCapture();
  (**(code **)(*param_1 + 8))(0);
  return;
}


// ==== 11023e80 FUN_11023e80

void __thiscall FUN_11023e80(void *this,short param_1)

{
  if (param_1 == 0x1b) {
    ReleaseCapture();
    (**(code **)(*(int *)this + 8))(0);
  }
  return;
}


// ==== 11023eb0 FUN_11023eb0

void FUN_11023eb0(void)

{
  POINT Point;
  HWND hWnd;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  Point.y = local_8.y;
  Point.x = local_8.x;
  hWnd = WindowFromPoint(Point);
  if (*(int *)GUnicodeOS_exref != 0) {
    SendMessageW(hWnd,0x8034,0,0);
    return;
  }
  SendMessageA(hWnd,0x8034,0,0);
  return;
}


// ==== 11023f10 FUN_11023f10

void __thiscall FUN_11023f10(void *this,undefined4 param_1)

{
  if ((short)param_1 != 3) {
    (**(code **)(**(int **)((int)this + 0x58) + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0x00000000,&DAT_1107a670);
  }
  return;
}


// ==== 11023f50 FUN_11023f50

void FUN_11023f50(void)

{
  wchar_t *local_4;
  
  local_4 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_4,&DAT_1107a670);
}


// ==== 11023f70 FUN_11023f70

void __fastcall FUN_11023f70(wchar_t *param_1)

{
  wchar_t *pwStack_4;
  
  pwStack_4 = param_1;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0xec))();
  pwStack_4 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&pwStack_4,&DAT_1107a670);
}


// ==== 11023fa0 FUN_11023fa0

void FUN_11023fa0(void)

{
  wchar_t *local_4;
  
  local_4 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_4,&DAT_1107a670);
}


// ==== 11023fc0 FUN_11023fc0

void __thiscall FUN_11023fc0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2a8) = param_1;
  return;
}


// ==== 1102400b Catch@1102400b

void Catch_1102400b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102401f Catch@1102401f

void Catch_1102401f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__OnShowWindow_1106f6d4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024060 FUN_11024060

void __fastcall FUN_11024060(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061ac0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WEdit::SetSelectedText((WEdit *)(param_1 + 0x40),(ushort *)(param_1 + 0xa8));
  ExceptionList = local_10;
  return;
}


// ==== 110240af Catch@110240af

void Catch_110240af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110240c3 Catch@110240c3

void Catch_110240c3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__UpdateTyping_1106f710);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024100 FUN_11024100

void __thiscall FUN_11024100(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x9c) = param_1;
  return;
}


// ==== 11024150 FUN_11024150

void __thiscall FUN_11024150(void *this,int param_1)

{
  WEdit *this_00;
  undefined4 *puVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  TArray<unsigned_short> local_38 [4];
  uint local_34;
  void *local_24;
  ushort local_20 [2];
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar4 = param_1;
  puStack_c = &LAB_11061ad9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_24 = this;
  WTerminal::OnShowWindow(this,param_1);
  if (iVar4 != 0) {
    if (**(int **)((int)this + 0x2b0) != 0) {
      puVar1 = (undefined4 *)**(int **)((int)this + 0x2b0);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar4 = **(int **)GFileManager_exref;
      uVar6 = *(undefined4 *)GNull_exref;
      uVar8 = 0;
      puVar2 = FString::operator*((FString *)((int)this + 0x2b4));
      piVar3 = (int *)(**(code **)(iVar4 + 8))(puVar2,uVar8,uVar6);
      if (piVar3 != (int *)0x0) {
        local_18 = 0;
        iVar4 = (**(code **)(*piVar3 + 0x2c))();
        TArray<unsigned_short>::TArray<unsigned_short>(local_38,iVar4);
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar4 = *piVar3;
        iVar5 = (local_34 >> 1) + *(int *)GUnicode_exref * -2;
        puVar2 = TArray<unsigned_short>::operator()(local_38,0);
        (**(code **)(iVar4 + 4))(puVar2,iVar5);
        (**(code **)*piVar3)(1);
        local_1c = 0;
        uVar7 = local_34;
        while( true ) {
          iVar4 = local_1c;
          uVar7 = uVar7 - 1;
          local_18 = uVar7;
          if (((int)uVar7 < 1) || (*(int *)((int)this + 0xa0) <= local_1c)) break;
          puVar2 = TArray<unsigned_short>::operator()(local_38,uVar7);
          local_1c = iVar4 + (uint)(*puVar2 == 10);
        }
        while (uVar7 = local_18, (int)local_18 < (int)local_34) {
          puVar2 = TArray<unsigned_short>::operator()(local_38,local_18);
          if (*puVar2 != 10) break;
          local_18 = uVar7 + 1;
        }
        param_1 = 0x3e;
        TArray<unsigned_short>::AddItem(local_38,(ushort *)&param_1);
        local_20[0] = 0;
        local_20[1] = 0;
        TArray<unsigned_short>::AddItem(local_38,local_20);
        iVar4 = *(int *)((int)this + 0x40);
        puVar2 = TArray<unsigned_short>::operator()(local_38,uVar7);
        (**(code **)(iVar4 + 0x2c))(puVar2);
        local_8 = local_8 & 0xffffff00;
        TArray<unsigned_short>::~TArray<unsigned_short>(local_38);
        this = local_24;
      }
      iVar4 = **(int **)GFileManager_exref;
      uVar6 = *(undefined4 *)GNull_exref;
      uVar8 = 0x18;
      puVar2 = FString::operator*((FString *)((int)this + 0x2b4));
      uVar6 = (**(code **)(iVar4 + 0xc))(puVar2,uVar8,uVar6);
      **(undefined4 **)((int)this + 0x2b0) = uVar6;
    }
    this_00 = (WEdit *)((int)this + 0x40);
    iVar4 = (**(code **)(*(int *)this_00 + 0x30))();
    WEdit::SetSelection(this_00,iVar4,iVar4);
    WEdit::ScrollCaret(this_00);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11024341 Catch@11024341

void Catch_11024341(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_1107a670);
}


// ==== 11024355 Catch@11024355

void Catch_11024355(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__OnShowWindow_1106f74c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024400 FUN_11024400

void __thiscall FUN_11024400(void *this,undefined4 param_1,FOutputDevice *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  WLog *pWVar3;
  int iVar4;
  FString *pFVar5;
  ushort *puVar6;
  WLog *pWVar7;
  ushort local_844 [1024];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [16];
  ushort *local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11061b0b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff7b0;
  pWVar7 = (WLog *)0x0;
  local_8 = 0;
  if (*(int *)((int)this + 0x9c) != 0) {
    ExceptionList = &local_10;
    puVar2 = &stack0xfffff7b0;
    if (*(int *)GLog_exref != 0) {
      ExceptionList = &local_10;
      FOutputDevice::Logf2
                (param_2,*(ushort **)GLog_exref,u_WM_COPYDATA___s_1106f7c0,
                 *(undefined4 *)(param_2 + 8));
      puVar2 = local_14;
    }
    local_14 = puVar2;
    if (GLogWindow == (WLog *)0x0) {
      pWVar3 = (WLog *)0x0;
    }
    else {
      pWVar3 = GLogWindow + 0x3c;
    }
    (**(code **)**(undefined4 **)((int)this + 0x9c))(u_TakeFocus_1106f7a8,pWVar3);
    local_1c[0] = *(ushort **)(param_2 + 8);
    iVar4 = ParseToken(local_1c,local_844,0x400,0);
    if ((iVar4 != 0) && (local_844[0] != 0x2d)) {
      if (GLogWindow != (WLog *)0x0) {
        pWVar7 = GLogWindow + 0x3c;
      }
      pFVar5 = (FString *)FString::FString(local_38,(ushort *)&DAT_11068ff8);
      local_8._0_1_ = 1;
      pFVar5 = (FString *)FString::operator+(pFVar5,(ushort *)local_44);
      local_8._0_1_ = 2;
      pFVar5 = (FString *)FString::operator+(pFVar5,(ushort *)local_2c);
      local_8._0_1_ = 3;
      puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x9c);
      puVar6 = FString::operator*(pFVar5);
      (*(code *)*puVar1)(puVar6,pWVar7);
      local_8._0_1_ = 2;
      FString::~FString(local_2c);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_38);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102455a Catch@1102455a

void Catch_1102455a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102456e Catch@1102456e

void Catch_1102456e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_OnCopyData_1106f77c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110245f0 FUN_110245f0

void __fastcall FUN_110245f0(int *param_1)

{
  wchar_t *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061b20;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*param_1 + 8))(0);
  local_18 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_18,&DAT_1107a670);
}


// ==== 11024636 Catch@11024636

void Catch_11024636(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102464a Catch@1102464a

void Catch_1102464a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__OnClose_1106f7e8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024690 FUN_11024690

void __thiscall FUN_11024690(void *this,int param_1)

{
  WLog *pWVar1;
  wchar_t *pwVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061b30;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_1 == 0x9c44) || (param_1 == 0x9c45)) {
    ExceptionList = &local_10;
    if (*(int *)GLog_exref != 0) {
      pwVar2 = u_ID_LogFileExit_1106f888;
      if (param_1 != 0x9c44) {
        pwVar2 = u_ID_NotifyExit_1106f864;
      }
      ExceptionList = &local_10;
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                 u_WLog__OnCommand__s_1106f834,pwVar2);
    }
    appRequestExit(0);
  }
  else if ((param_1 == 0x9c46) || (param_1 == 0x9c47)) {
    if (*(int *)((int)this + 0x9c) != 0) {
      if (GLogWindow == (WLog *)0x0) {
        pWVar1 = (WLog *)0x0;
      }
      else {
        pWVar1 = GLogWindow + 0x3c;
      }
      ExceptionList = &local_10;
      (**(code **)**(undefined4 **)((int)this + 0x9c))(u_PREFERENCES_1106f8ac,pWVar1);
    }
  }
  else if (param_1 == 0x9c42) {
    ExceptionList = &local_10;
    ShowWindow(*(HWND *)((int)this + 4),1);
    SetForegroundWindow(*(HWND *)((int)this + 4));
  }
  ExceptionList = local_10;
  return;
}


// ==== 11024778 Catch@11024778

void Catch_11024778(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102478c Catch@1102478c

void Catch_1102478c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__OnCommand_1106f80c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110247f0 FUN_110247f0

undefined4 FUN_110247f0(void)

{
  return 0;
}


// ==== 11024800 FUN_11024800

void __thiscall FUN_11024800(void *this,INT_PTR param_1)

{
  EndDialog(*(HWND *)((int)this + 4),param_1);
  return;
}


// ==== 11024820 FUN_11024820

void __fastcall FUN_11024820(int param_1)

{
  EndDialog(*(HWND *)(param_1 + 4),1);
  return;
}


// ==== 11024830 FUN_11024830

void __fastcall FUN_11024830(int param_1)

{
  EndDialog(*(HWND *)(param_1 + 4),0);
  return;
}


// ==== 11024840 FUN_11024840

void __thiscall FUN_11024840(void *this,int param_1)

{
  WWindow::Show(this,param_1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1102485b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    BringWindowToTop(*(HWND *)((int)this + 4));
    return;
  }
  return;
}


// ==== 11024870 FUN_11024870

void __thiscall FUN_11024870(void *this,short param_1)

{
  if (param_1 == 0x1b) {
    *(undefined4 *)((int)this + 0x74) = 0;
    ReleaseCapture();
  }
  return;
}


// ==== 11024890 FUN_11024890

void FUN_11024890(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061b40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ReleaseCapture();
  ExceptionList = local_10;
  return;
}


// ==== 110248d6 Catch@110248d6

void Catch_110248d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110248ea Catch@110248ea

void Catch_110248ea(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDragInterceptor__OnLeftButtonUp_1106f8c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024930 FUN_11024930

undefined4 __fastcall FUN_11024930(int param_1)

{
  HCURSOR hCursor;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061b50;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    hCursor = LoadCursorA(hInstanceWindow,(LPCSTR)((*(int *)(param_1 + 0x3c) != 0) + 0x44e));
  }
  else {
    ExceptionList = &local_10;
    hCursor = LoadCursorW(hInstanceWindow,(LPCWSTR)((*(int *)(param_1 + 0x3c) != 0) + 0x44e));
  }
  SetCursor(hCursor);
  ExceptionList = local_10;
  return 1;
}


// ==== 110249af Catch@110249af

void Catch_110249af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110249c3 Catch@110249c3

void Catch_110249c3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitter__OnSetCursor_1106f918);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024a10 FUN_11024a10

void __fastcall FUN_11024a10(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061b60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ReleaseCapture();
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  ExceptionList = local_10;
  return;
}


// ==== 11024a66 Catch@11024a66

void Catch_11024a66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11024a7a Catch@11024a7a

void Catch_11024a7a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitter__OnLeftButtonUp_1106f950);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024ac0 FUN_11024ac0

FArray * __fastcall FUN_11024ac0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061b79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11024b10 FUN_11024b10

FArray * __fastcall FUN_11024b10(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061b99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11024b60 FUN_11024b60

FArray * __fastcall FUN_11024b60(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061bb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11024c60 FUN_11024c60

undefined4 __thiscall FUN_11024c60(void *this,int param_1,int param_2)

{
  if ((((*(int *)this <= param_1) && (param_1 < *(int *)((int)this + 8))) &&
      (*(int *)((int)this + 4) <= param_2)) && (param_2 < *(int *)((int)this + 0xc))) {
    return 1;
  }
  return 0;
}


// ==== 11024ca0 FUN_11024ca0

void __fastcall FUN_11024ca0(undefined4 *param_1)

{
  *param_1 = FControlSnoop::vftable;
  return;
}


// ==== 11024cb0 FUN_11024cb0

undefined4 __fastcall FUN_11024cb0(undefined4 param_1)

{
  return param_1;
}


// ==== 11024cc0 FUN_11024cc0

void __fastcall FUN_11024cc0(undefined4 *param_1)

{
  *param_1 = FCommandTarget::vftable;
  return;
}


// ==== 11024cd0 FUN_11024cd0

undefined4 __fastcall FUN_11024cd0(undefined4 param_1)

{
  return param_1;
}


// ==== 11024ce0 FUN_11024ce0

void __fastcall FUN_11024ce0(undefined4 *param_1)

{
  *param_1 = FDelegate::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 11024d00 FUN_11024d00

void __thiscall FUN_11024d00(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)this = FDelegateInt::vftable;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return;
}


// ==== 11024d20 FUN_11024d20

void __fastcall FUN_11024d20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11024d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}


// ==== 11024d40 FUN_11024d40

void __thiscall FUN_11024d40(void *this,int param_1)

{
  *(undefined ***)this = FDelegateInt::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 11024d70 FUN_11024d70

void __thiscall FUN_11024d70(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 11024d90 FUN_11024d90

void __fastcall FUN_11024d90(undefined4 *param_1)

{
  *param_1 = FDelegateInt::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 11024db0 FUN_11024db0

undefined2 * __cdecl FUN_11024db0(short *param_1)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  short *psVar4;
  
  psVar4 = &DAT_1109cbb0;
  do {
    if (*param_1 == 0) {
      *psVar4 = 0;
      return &DAT_1109cbb0;
    }
    psVar2 = param_1 + 1;
    if (*param_1 == 0x5c) {
      sVar1 = *psVar2;
      psVar2 = param_1 + 2;
      sVar3 = 10;
      if (sVar1 != 0x6e) goto LAB_11024e0b;
    }
    else {
LAB_11024e0b:
      sVar3 = psVar2[-1];
    }
    *psVar4 = sVar3;
    psVar4 = psVar4 + 1;
    param_1 = psVar2;
  } while( true );
}


// ==== 11024e3b Catch@11024e3b

void Catch_11024e3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11024e4f Catch@11024e4f

void Catch_11024e4f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_LineFormat_1106f99c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11024ea0 FUN_11024ea0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl FUN_11024ea0(HMENU param_1,ushort *param_2,ushort *param_3)

{
  LPSTR pCVar1;
  UINT item;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  tagMENUITEMINFOA *ptVar5;
  tagMENUITEMINFOW *ptVar6;
  ushort *puVar7;
  int iVar8;
  WCHAR local_884 [512];
  char local_484 [1024];
  tagMENUITEMINFOA local_84;
  tagMENUITEMINFOW local_54;
  UINT local_1c;
  tagMENUITEMINFOW *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061be0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff770;
  local_8 = 0;
  ExceptionList = &local_10;
  item = GetMenuItemCount(param_1);
  while (item = item - 1, -1 < (int)item) {
    local_1c = item;
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      local_18 = &local_54;
      ptVar6 = local_18;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        ptVar6->cbSize = 0;
        ptVar6 = (tagMENUITEMINFOW *)&ptVar6->fMask;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)&ptVar6->cbSize = 0;
        ptVar6 = (tagMENUITEMINFOW *)((int)&ptVar6->cbSize + 1);
      }
      local_54.cbSize = 0x30;
      local_54.fMask = 0x14;
      local_54.cch = 0x400;
      local_54.dwTypeData = local_884;
      GetMenuItemInfoW(param_1,item,1,&local_54);
      if ((((local_54.dwTypeData != (WCHAR *)0x0) && (*local_54.dwTypeData == L'I')) &&
          (local_54.dwTypeData[1] == L'D')) && (local_54.dwTypeData[2] == L'_')) {
        local_54.dwTypeData =
             (LPWSTR)Localize(param_2,(ushort *)local_54.dwTypeData,param_3,(ushort *)0x0,0);
        SetMenuItemInfoW(param_1,item,1,&local_54);
      }
      if (local_54.hSubMenu != (HMENU)0x0) {
        thunk_FUN_11024ea0(local_54.hSubMenu,param_2,param_3);
      }
    }
    else {
      local_18 = (tagMENUITEMINFOW *)&local_84;
      ptVar5 = (tagMENUITEMINFOA *)local_18;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        ptVar5->cbSize = 0;
        ptVar5 = (tagMENUITEMINFOA *)&ptVar5->fMask;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)&ptVar5->cbSize = 0;
        ptVar5 = (tagMENUITEMINFOA *)((int)&ptVar5->cbSize + 1);
      }
      local_84.cbSize = 0x30;
      local_84.fMask = 0x14;
      local_84.cch = 0x400;
      local_84.dwTypeData = local_484;
      GetMenuItemInfoA(param_1,item,1,&local_84);
      pCVar1 = local_84.dwTypeData;
      if (((local_84.dwTypeData != (char *)0x0) && (*local_84.dwTypeData == 'I')) &&
         ((local_84.dwTypeData[1] == 'D' && (local_84.dwTypeData[2] == '_')))) {
        iVar4 = 0;
        puVar7 = (ushort *)0x0;
        puVar3 = param_3;
        puVar2 = appFromAnsi(local_84.dwTypeData,(ushort *)0x0);
        puVar3 = Localize(param_2,puVar2,puVar3,puVar7,iVar4);
        iVar4 = winGetSizeANSI(puVar3);
        if (iVar4 == 0) {
          local_18 = (tagMENUITEMINFOW *)0x0;
        }
        else {
          iVar4 = 0;
          puVar7 = (ushort *)0x0;
          puVar3 = param_3;
          puVar2 = appFromAnsi(pCVar1,(ushort *)0x0);
          puVar3 = Localize(param_2,puVar2,puVar3,puVar7,iVar4);
          winGetSizeANSI(puVar3);
          local_14 = &stack0xfffff770;
          local_18 = (tagMENUITEMINFOW *)&stack0xfffff770;
        }
        iVar4 = 0;
        puVar7 = (ushort *)0x0;
        puVar3 = param_3;
        puVar2 = appFromAnsi(pCVar1,(ushort *)0x0);
        puVar3 = Localize(param_2,puVar2,puVar3,puVar7,iVar4);
        iVar4 = winGetSizeANSI(puVar3);
        iVar8 = 0;
        puVar7 = (ushort *)0x0;
        puVar3 = param_3;
        puVar2 = appFromAnsi(pCVar1,(ushort *)0x0);
        puVar3 = Localize(param_2,puVar2,puVar3,puVar7,iVar8);
        local_84.dwTypeData = winToANSI((char *)local_18,puVar3,iVar4);
        SetMenuItemInfoA(param_1,item,1,&local_84);
      }
      if (local_84.hSubMenu != (HMENU)0x0) {
        thunk_FUN_11024ea0(local_84.hSubMenu,param_2,param_3);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102513a Catch@1102513a

void Catch_1102513a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1102514e Catch@1102514e

void Catch_1102514e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_LocalizeSubMenu_1106f9b8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11025220 FUN_11025220

HMENU __cdecl FUN_11025220(HINSTANCE param_1,ushort param_2,ushort *param_3,ushort *param_4)

{
  HMENU pHVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061bf0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    pHVar1 = LoadMenuA(param_1,(LPCSTR)(uint)param_2);
  }
  else {
    ExceptionList = &local_10;
    pHVar1 = LoadMenuW(param_1,(LPCWSTR)(uint)param_2);
  }
  if (pHVar1 == (HMENU)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref,
                        u_Failed_loading_menu___s__s_1106fa0c,param_4,param_3);
  }
  thunk_FUN_11024ea0(pHVar1,param_3,param_4);
  ExceptionList = local_10;
  return pHVar1;
}


// ==== 110252bb Catch@110252bb

void Catch_110252bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110252cf Catch@110252cf

void Catch_110252cf(void)

{
  appUnwindf((ushort *)&DAT_11068a50,
             `struct_HMENU__*___cdecl_LoadLocalizedMenu(HINSTANCE__*,int,unsigned_short_const*,unsigned_short_const*)'
             ::__l3::__FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11025320 FUN_11025320

void __thiscall FUN_11025320(void *this,undefined4 param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


// ==== 11025340 FUN_11025340

void __fastcall FUN_11025340(int param_1)

{
  if ((*(HGDIOBJ *)(param_1 + 0xc) != (HGDIOBJ)0x0) && (*(int *)(param_1 + 8) == 0)) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
  }
  return;
}


// ==== 11025360 FUN_11025360

void FUN_11025360(void)

{
  return;
}


// ==== 11025370 FUN_11025370

void __fastcall FUN_11025370(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ==== 11025390 FUN_11025390

void FUN_11025390(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WGroupBox_1106fa4c);
  return;
}


// ==== 110253b0 FUN_110253b0

wchar_t * FUN_110253b0(void)

{
  return u_Window_1106949c;
}


// ==== 110253c0 FUN_110253c0

void FUN_110253c0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WPropertyPage_1106fa64);
  return;
}


// ==== 110253e0 FUN_110253e0

wchar_t * FUN_110253e0(void)

{
  return u_Window_1106949c;
}


// ==== 110253f0 FUN_110253f0

void FUN_110253f0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WPropertySheet_1106fa88);
  return;
}


// ==== 11025410 FUN_11025410

wchar_t * FUN_11025410(void)

{
  return u_Window_1106949c;
}


// ==== 11025420 FUN_11025420

void FUN_11025420(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WCustomLabel_1106faac);
  return;
}


// ==== 11025440 FUN_11025440

wchar_t * FUN_11025440(void)

{
  return u_Window_1106949c;
}


// ==== 11025450 FUN_11025450

void FUN_11025450(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WBitmapButton_1106facc);
  return;
}


// ==== 11025470 FUN_11025470

wchar_t * FUN_11025470(void)

{
  return u_Window_1106949c;
}


// ==== 11025480 FUN_11025480

void FUN_11025480(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WColorButton_1106faf0);
  return;
}


// ==== 110254a0 FUN_110254a0

wchar_t * FUN_110254a0(void)

{
  return u_Window_1106949c;
}


// ==== 110254b0 FUN_110254b0

void FUN_110254b0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WThinScrollBar_1106fb10);
  return;
}


// ==== 110254d0 FUN_110254d0

wchar_t * FUN_110254d0(void)

{
  return u_Window_1106949c;
}


// ==== 110254e0 FUN_110254e0

void FUN_110254e0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WTimeScrollBar_1106fb34);
  return;
}


// ==== 11025500 FUN_11025500

wchar_t * FUN_11025500(void)

{
  return u_Window_1106949c;
}


// ==== 11025510 FUN_11025510

void FUN_11025510(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WPictureButton_1106fb58);
  return;
}


// ==== 11025530 FUN_11025530

wchar_t * FUN_11025530(void)

{
  return u_Window_1106949c;
}


// ==== 11025540 FUN_11025540

void FUN_11025540(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WUDNWindow_1106fb7c);
  return;
}


// ==== 11025560 FUN_11025560

wchar_t * FUN_11025560(void)

{
  return u_Window_1106949c;
}


// ==== 11025570 FUN_11025570

void FUN_11025570(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WCheckBox_1106fb98);
  return;
}


// ==== 11025590 FUN_11025590

wchar_t * FUN_11025590(void)

{
  return u_Window_1106949c;
}


// ==== 110255a0 FUN_110255a0

void FUN_110255a0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WScrollBar_1106fbb0);
  return;
}


// ==== 110255c0 FUN_110255c0

wchar_t * FUN_110255c0(void)

{
  return u_Window_1106949c;
}


// ==== 110255d0 FUN_110255d0

void FUN_110255d0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WTreeView_1106fbcc);
  return;
}


// ==== 110255f0 FUN_110255f0

wchar_t * FUN_110255f0(void)

{
  return u_Window_1106949c;
}


// ==== 11025600 FUN_11025600

void FUN_11025600(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WUrlButton_1106fbe4);
  return;
}


// ==== 11025620 FUN_11025620

wchar_t * FUN_11025620(void)

{
  return u_Window_1106949c;
}


// ==== 11025630 FUN_11025630

void FUN_11025630(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WRichEdit_1106fc00);
  return;
}


// ==== 11025650 FUN_11025650

wchar_t * FUN_11025650(void)

{
  return u_Window_1106949c;
}


// ==== 11025660 FUN_11025660

void FUN_11025660(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WTerminalBase_1106fc18);
  return;
}


// ==== 11025680 FUN_11025680

wchar_t * FUN_11025680(void)

{
  return u_Window_1106949c;
}


// ==== 11025690 FUN_11025690

void FUN_11025690(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WEditTerminal_1106fc3c);
  return;
}


// ==== 110256b0 FUN_110256b0

wchar_t * FUN_110256b0(void)

{
  return u_Window_1106949c;
}


// ==== 110256c0 FUN_110256c0

void FUN_110256c0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WTerminal_1106fc60);
  return;
}


// ==== 110256e0 FUN_110256e0

wchar_t * FUN_110256e0(void)

{
  return u_Window_1106949c;
}


// ==== 110256f0 FUN_110256f0

void FUN_110256f0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WLog_1106fc78);
  return;
}


// ==== 11025710 FUN_11025710

wchar_t * FUN_11025710(void)

{
  return u_Window_1106949c;
}


// ==== 11025720 FUN_11025720

void FUN_11025720(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WCrashBoxDialog_1106fc84);
  return;
}


// ==== 11025740 FUN_11025740

wchar_t * FUN_11025740(void)

{
  return u_Window_1106949c;
}


// ==== 11025750 FUN_11025750

void FUN_11025750(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WProgressBar_1106fcac);
  return;
}


// ==== 11025770 FUN_11025770

wchar_t * FUN_11025770(void)

{
  return u_Window_1106949c;
}


// ==== 11025780 FUN_11025780

void FUN_11025780(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WListBox_1106fccc);
  return;
}


// ==== 110257a0 FUN_110257a0

wchar_t * FUN_110257a0(void)

{
  return u_Window_1106949c;
}


// ==== 110257b0 FUN_110257b0

void FUN_110257b0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WCheckListBox_1106fce4);
  return;
}


// ==== 110257d0 FUN_110257d0

wchar_t * FUN_110257d0(void)

{
  return u_Window_1106949c;
}


// ==== 110257e0 FUN_110257e0

void __fastcall FUN_110257e0(undefined4 *param_1)

{
  param_1[1] = FControlSnoop::vftable;
  *param_1 = FTreeItemBase::vftable_for_FCommandTarget_;
  param_1[1] = FTreeItemBase::vftable_for_FControlSnoop_;
  return;
}


// ==== 11025800 FUN_11025800

undefined4 __fastcall FUN_11025800(undefined4 param_1)

{
  return param_1;
}


// ==== 11025810 FUN_11025810

void FUN_11025810(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WItemBox_1106fd08);
  return;
}


// ==== 11025830 FUN_11025830

wchar_t * FUN_11025830(void)

{
  return u_Window_1106949c;
}


// ==== 11025840 FUN_11025840

void FUN_11025840(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WListView_1106fd20);
  return;
}


// ==== 11025860 FUN_11025860

wchar_t * FUN_11025860(void)

{
  return u_Window_1106949c;
}


// ==== 110258a0 FUN_110258a0

void FUN_110258a0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WProperties_1106fd38);
  return;
}


// ==== 110258c0 FUN_110258c0

wchar_t * FUN_110258c0(void)

{
  return u_Window_1106949c;
}


// ==== 110258d0 FUN_110258d0

void FUN_110258d0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WObjectProperties_1106fd54);
  return;
}


// ==== 110258f0 FUN_110258f0

wchar_t * FUN_110258f0(void)

{
  return u_Window_1106949c;
}


// ==== 11025900 FUN_11025900

void FUN_11025900(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WClassProperties_1106fd80);
  return;
}


// ==== 11025920 FUN_11025920

wchar_t * FUN_11025920(void)

{
  return u_Window_1106949c;
}


// ==== 11025930 FUN_11025930

void FUN_11025930(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WConfigProperties_1106fda8);
  return;
}


// ==== 11025950 FUN_11025950

wchar_t * FUN_11025950(void)

{
  return u_Window_1106949c;
}


// ==== 11025960 FUN_11025960

void FUN_11025960(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WWizardPage_1106fdd4);
  return;
}


// ==== 11025980 FUN_11025980

wchar_t * FUN_11025980(void)

{
  return u_Window_1106949c;
}


// ==== 11025990 FUN_11025990

void FUN_11025990(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WWizardDialog_1106fdf0);
  return;
}


// ==== 110259b0 FUN_110259b0

wchar_t * FUN_110259b0(void)

{
  return u_Window_1106949c;
}


// ==== 110259c0 FUN_110259c0

undefined4 __fastcall FUN_110259c0(undefined4 param_1)

{
  return param_1;
}


// ==== 110259d0 FUN_110259d0

void __thiscall
FUN_110259d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  return;
}


// ==== 11025a20 FUN_11025a20

void FUN_11025a20(void)

{
  return;
}


// ==== 11025a30 FUN_11025a30

void __thiscall FUN_11025a30(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)this = *param_2;
  *(undefined4 *)((int)this + 4) = param_2[1];
  *(undefined4 *)((int)this + 8) = param_2[2];
  *(undefined4 *)((int)this + 0xc) = param_2[3];
  *(undefined4 *)((int)this + 0x10) = param_2[4];
  *(undefined4 *)((int)this + 0x14) = param_2[5];
  *(undefined4 *)((int)this + 0x18) = param_2[6];
  *(undefined4 *)((int)this + 0x1c) = param_2[7];
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)this;
    this = (undefined4 *)((int)this + 4);
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 11025a90 FUN_11025a90

void __fastcall FUN_11025a90(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// ==== 11025aa0 FUN_11025aa0

void __thiscall FUN_11025aa0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return;
}


// ==== 11025ab0 FUN_11025ab0

void FUN_11025ab0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WSplitterPane_1106fe14);
  return;
}


// ==== 11025ad0 FUN_11025ad0

wchar_t * FUN_11025ad0(void)

{
  return u_Window_1106949c;
}


// ==== 11025ae0 FUN_11025ae0

void FUN_11025ae0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WSplitter_1106fe38);
  return;
}


// ==== 11025b00 FUN_11025b00

wchar_t * FUN_11025b00(void)

{
  return u_Window_1106949c;
}


// ==== 11025b10 FUN_11025b10

void FUN_11025b10(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WSplitterContainer_1106fe50);
  return;
}


// ==== 11025b30 FUN_11025b30

wchar_t * FUN_11025b30(void)

{
  return u_Window_1106949c;
}


// ==== 11025b40 FUN_11025b40

FString * __fastcall FUN_11025b40(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061c15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1);
  local_4 = 0;
  FString::FString(param_1 + 0xc);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025bb0 FUN_11025bb0

FString * __fastcall FUN_11025bb0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_11061c57;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)&stack0x00000004);
  local_4._0_1_ = 2;
  FString::FString(param_1 + 0xc,(FString *)&stack0x00000010);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025c50 FUN_11025c50

void __fastcall FUN_11025c50(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11061c85;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(param_1 + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11025cc0 FUN_11025cc0

FString * __thiscall FUN_11025cc0(void *this,FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061cb5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(this,param_1);
  local_4 = 0;
  FString::FString((FString *)((int)this + 0xc),param_1 + 0xc);
  ExceptionList = local_c;
  return this;
}


// ==== 11025d40 FUN_11025d40

FString * __thiscall FUN_11025d40(void *this,FString *param_1)

{
  FString::operator=(this,param_1);
  FString::operator=((FString *)((int)this + 0xc),param_1 + 0xc);
  return this;
}


// ==== 11025d70 FUN_11025d70

void __fastcall FUN_11025d70(undefined4 *param_1)

{
  SetCursor((HCURSOR)*param_1);
  return;
}


// ==== 11025d80 FUN_11025d80

void FUN_11025d80(void)

{
  HCURSOR pHVar1;
  
  if (*(int *)GUnicodeOS_exref != 0) {
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
    SetCursor(pHVar1);
    return;
  }
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  SetCursor(pHVar1);
  return;
}


// ==== 11025dc0 FUN_11025dc0

void __thiscall FUN_11025dc0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return;
}


// ==== 11025dd0 FUN_11025dd0

FArray * __fastcall FUN_11025dd0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061cd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025e20 FUN_11025e20

FArray * __fastcall FUN_11025e20(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061cf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025e70 FUN_11025e70

FArray * __fastcall FUN_11025e70(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061d19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025ec0 FUN_11025ec0

FArray * __fastcall FUN_11025ec0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061d39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025f10 FUN_11025f10

FArray * __fastcall FUN_11025f10(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061d59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025f60 FUN_11025f60

FArray * __fastcall FUN_11025f60(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061d79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11025fb0 FUN_11025fb0

undefined4 * __thiscall FUN_11025fb0(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11061d9c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  FString::FString((FString *)((int)this + 0x14),(FString *)(param_1 + 5));
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  ExceptionList = local_c;
  return this;
}


// ==== 11026050 FUN_11026050

undefined4 * __thiscall FUN_11026050(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  FString::operator=((FString *)((int)this + 0x14),(FString *)(param_1 + 5));
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return this;
}


// ==== 11026210 FUN_11026210

FString * __thiscall FUN_11026210(void *this,byte param_1)

{
  FString::~FString(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11026270 FUN_11026270

int __cdecl FUN_11026270(int param_1,int param_2,int param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 < param_3)) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== 11026290 FUN_11026290

float10 __cdecl FUN_11026290(float param_1,float param_2)

{
  if (param_2 < param_1 != (param_2 == param_1)) {
    return (float10)param_1;
  }
  return (float10)param_2;
}


// ==== 110262c0 FUN_110262c0

float10 __cdecl FUN_110262c0(float param_1,float param_2)

{
  if (param_1 <= param_2) {
    return (float10)param_1;
  }
  return (float10)param_2;
}


// ==== 11026420 FUN_11026420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_11026420(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061db0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = 0;
  while ((iVar1 < DAT_1109c4fc && (*(int *)(*(int *)(__Windows + iVar1 * 4) + 4) != param_1))) {
    iVar1 = iVar1 + 1;
  }
  ExceptionList = &local_10;
  if (iVar1 == DAT_1109c4fc) {
    ExceptionList = &local_10;
    if (param_2 == 0x110) {
      ExceptionList = &local_10;
      if (param_4 == 0) {
        ExceptionList = &local_10;
        appFailAssert(s_WindowCreate_1106fef0,s___Window_cpp_1106f624,0x179);
      }
      if (*(int *)(param_4 + 4) != 0) {
        appFailAssert(s__WindowCreate_>hWnd_1106fed8,s___Window_cpp_1106f624,0x17a);
      }
      *(int *)(param_4 + 4) = param_1;
      for (iVar1 = 0; iVar1 < DAT_1109c4fc; iVar1 = iVar1 + 1) {
        if (*(int *)(__Windows + iVar1 * 4) == param_4) {
          if (iVar1 < DAT_1109c4fc) goto LAB_1102651c;
          break;
        }
      }
      appFailAssert(s_i<_Windows_Num()_1106fec4,s___Window_cpp_1106f624,0x17f);
    }
    if (iVar1 == DAT_1109c4fc) goto LAB_1102653a;
  }
LAB_1102651c:
  if (*(int *)GIsCriticalError_exref == 0) {
    (**(code **)(**(int **)(__Windows + iVar1 * 4) + 0x1c))(param_2,param_3,param_4);
  }
LAB_1102653a:
  Sleep(0);
  ExceptionList = local_10;
  return 0;
}


// ==== 11026557 Catch@11026557

void Catch_11026557(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102656b Catch@1102656b

void Catch_1102656b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__StaticDlgProc_1106fe8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110265f0 FUN_110265f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_110265f0(HWND param_1,UINT param_2,WPARAM param_3,int *param_4)

{
  uint uVar1;
  LRESULT LVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11061dce;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_8 = 0;
  while ((iVar3 < DAT_1109c4fc && (*(HWND *)(*(int *)(__Windows + iVar3 * 4) + 4) != param_1))) {
    iVar3 = iVar3 + 1;
  }
  ExceptionList = &local_10;
  if ((DAT_1109f1dc & 1) == 0) {
    DAT_1109f1dc = DAT_1109f1dc | 1;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    ExceptionList = &local_10;
    DAT_1109f1d8 = RegisterWindowMessageW(u_QueryCancelAutoPlay_1106ff30);
    local_8 = (uint)local_8._1_3_ << 8;
  }
  if (param_2 == DAT_1109f1d8) {
    SetWindowLongW(param_1,0,1);
    ExceptionList = local_10;
    return 1;
  }
  if (iVar3 == DAT_1109c4fc) {
    if (param_2 == 0x81) {
      if (*(int *)GUnicodeOS_exref == 0) {
        uVar1 = GetWindowLongA(param_1,-0x14);
      }
      else {
        uVar1 = GetWindowLongW(param_1,-0x14);
      }
      if ((uVar1 & 0x40) == 0) {
        piVar4 = (int *)*param_4;
      }
      else {
        piVar4 = *(int **)(*param_4 + 0x20);
      }
LAB_110266ea:
      if (piVar4 == (int *)0x0) {
        appFailAssert(s_WindowCreate_1106fef0,s___Window_cpp_1106f624,0x1a6);
      }
      if (piVar4[1] != 0) {
        appFailAssert(s__WindowCreate_>hWnd_1106fed8,s___Window_cpp_1106f624,0x1a7);
      }
      piVar4[1] = (int)param_1;
      for (iVar3 = 0; iVar3 < DAT_1109c4fc; iVar3 = iVar3 + 1) {
        if (*(int **)(__Windows + iVar3 * 4) == piVar4) {
          if (iVar3 < DAT_1109c4fc) goto LAB_11026782;
          break;
        }
      }
      appFailAssert(s_i<_Windows_Num()_1106fec4,s___Window_cpp_1106f624,0x1ac);
    }
    else {
      piVar4 = param_4;
      if (param_2 == 0x110) goto LAB_110266ea;
    }
LAB_11026782:
    if (iVar3 == DAT_1109c4fc) goto LAB_11026786;
  }
  if (*(int *)GIsCriticalError_exref == 0) {
    LVar2 = (**(code **)(**(int **)(__Windows + iVar3 * 4) + 0x1c))(param_2,param_3,param_4);
    ExceptionList = local_10;
    return LVar2;
  }
LAB_11026786:
  if (*(int *)GUnicodeOS_exref == 0) {
    LVar2 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
    ExceptionList = local_10;
    return LVar2;
  }
  LVar2 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
  ExceptionList = local_10;
  return LVar2;
}


// ==== 11026800 Catch@11026800

void Catch_11026800(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11026814 Catch@11026814

void Catch_11026814(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__StaticProc_1106ff00);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110268d0 FUN_110268d0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 __cdecl FUN_110268d0(LPCWSTR param_1,UINT param_2)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSEXW *pWVar3;
  char *pcVar4;
  WNDCLASSEXW local_80;
  WNDCLASSEXW local_50;
  WNDCLASSEXW *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061de0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    local_18 = &local_80;
    pWVar3 = local_18;
    ExceptionList = &local_10;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)&pWVar3->style;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)&pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)((int)&pWVar3->cbSize + 1);
    }
    local_80.cbSize = 0x30;
    local_80.style = param_2;
    local_80.lpfnWndProc = WWindow::StaticWndProc;
    local_80.hInstance = hInstanceWindow;
    if (*(int *)GUnicodeOS_exref == 0) {
      local_80.hIcon =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      local_14 = &stack0xffffff74;
      local_80.hIcon =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    iVar2 = winGetSizeANSI((ushort *)param_1);
    if (iVar2 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)param_1);
      local_14 = &stack0xffffff74;
      pcVar4 = &stack0xffffff74;
    }
    iVar2 = winGetSizeANSI((ushort *)param_1);
    local_80.lpszClassName = (LPCWSTR)winToANSI(pcVar4,(ushort *)param_1,iVar2);
    if (*(int *)GUnicodeOS_exref == 0) {
      local_80.hIconSm =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      local_80.hIconSm =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    AVar1 = RegisterClassExA((WNDCLASSEXA *)&local_80);
    if (AVar1 != 0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar2 = 0x1d7;
    pcVar4 = s_RegisterClassExA___Cls___1106ffa8;
  }
  else {
    local_18 = &local_50;
    pWVar3 = local_18;
    ExceptionList = &local_10;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)&pWVar3->style;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)&pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)((int)&pWVar3->cbSize + 1);
    }
    local_50.cbSize = 0x30;
    local_50.style = param_2;
    local_50.lpfnWndProc = WWindow::StaticWndProc;
    local_50.hInstance = hInstanceWindow;
    if (*(int *)GUnicodeOS_exref == 0) {
      local_14 = &stack0xffffff74;
      local_50.hIcon =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      local_14 = &stack0xffffff74;
      local_50.hIcon =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    local_50.lpszClassName = param_1;
    if (*(int *)GUnicodeOS_exref == 0) {
      local_50.hIconSm =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      local_50.hIconSm =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    AVar1 = RegisterClassExW(&local_50);
    if (AVar1 != 0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar2 = 0x1c9;
    pcVar4 = s_RegisterClassExW___Cls___1106ffc8;
  }
  appFailAssert(pcVar4,s___Window_cpp_1106f624,iVar2);
  ExceptionList = local_10;
  return 0;
}


// ==== 11026b4f Catch@11026b4f

void Catch_11026b4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11026b63 Catch@11026b63

void Catch_11026b63(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__RegisterWindowClass_1106ff60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11026c30 FUN_11026c30

void __thiscall FUN_11026c30(void *this,LONG *param_1)

{
  tagRECT local_10;
  
  GetClientRect(*(HWND *)((int)this + 4),&local_10);
  *param_1 = local_10.left;
  param_1[1] = local_10.top;
  param_1[2] = local_10.right;
  param_1[3] = local_10.bottom;
  return;
}


// ==== 11026c80 FUN_11026c80

void __thiscall
FUN_11026c80(void *this,int param_1,int param_2,int param_3,int param_4,BOOL param_5)

{
  MoveWindow(*(HWND *)((int)this + 4),param_1,param_2,param_3 - param_1,param_4 - param_2,param_5);
  return;
}


// ==== 11026cc0 FUN_11026cc0

void __thiscall FUN_11026cc0(void *this,LONG *param_1,LONG *param_2)

{
  tagPOINT local_8;
  
  local_8.x = *param_2;
  local_8.y = param_2[1];
  ClientToScreen(*(HWND *)((int)this + 4),&local_8);
  *param_1 = local_8.x;
  param_1[1] = local_8.y;
  return;
}


// ==== 11026d10 FUN_11026d10

void __thiscall FUN_11026d10(void *this,LONG *param_1,LONG *param_2)

{
  tagPOINT local_8;
  
  local_8.x = *param_2;
  local_8.y = param_2[1];
  ScreenToClient(*(HWND *)((int)this + 4),&local_8);
  *param_1 = local_8.x;
  param_1[1] = local_8.y;
  return;
}


// ==== 11026d60 FUN_11026d60

void __thiscall FUN_11026d60(void *this,LONG *param_1,LONG *param_2)

{
  LONG LVar1;
  tagPOINT local_18;
  tagPOINT local_10;
  LONG local_4;
  
  local_18.x = param_2[2];
  local_18.y = param_2[3];
  ClientToScreen(*(HWND *)((int)this + 4),&local_18);
  LVar1 = local_18.x;
  local_10.x = *param_2;
  local_10.y = param_2[1];
  local_4 = local_18.y;
  ClientToScreen(*(HWND *)((int)this + 4),&local_10);
  *param_1 = local_10.x;
  param_1[2] = LVar1;
  param_1[1] = local_10.y;
  param_1[3] = local_4;
  return;
}


// ==== 11026e00 FUN_11026e00

void __thiscall FUN_11026e00(void *this,LONG *param_1,LONG *param_2)

{
  LONG LVar1;
  tagPOINT local_18;
  tagPOINT local_10;
  LONG local_4;
  
  local_18.x = param_2[2];
  local_18.y = param_2[3];
  ScreenToClient(*(HWND *)((int)this + 4),&local_18);
  LVar1 = local_18.x;
  local_10.x = *param_2;
  local_10.y = param_2[1];
  local_4 = local_18.y;
  ScreenToClient(*(HWND *)((int)this + 4),&local_10);
  *param_1 = local_10.x;
  param_1[2] = LVar1;
  param_1[1] = local_10.y;
  param_1[3] = local_4;
  return;
}


// ==== 11026ea0 FUN_11026ea0

void __thiscall FUN_11026ea0(void *this,LONG *param_1)

{
  tagPOINT local_10;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  local_10.x = local_8.x;
  local_10.y = local_8.y;
  ScreenToClient(*(HWND *)((int)this + 4),&local_10);
  *param_1 = local_10.x;
  param_1[1] = local_10.y;
  return;
}


// ==== 11026f00 FUN_11026f00

int __thiscall FUN_11026f00(void *this,int param_1,HWND__ *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061df0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(HWND__ **)((int)this + 0x30) = param_2;
  *(uint *)((int)this + 0x34) = param_3;
  piVar1 = *(int **)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    if (param_1 == 0x102) {
      (**(code **)*piVar1)(this,param_2);
    }
    else if (param_1 == 0x100) {
      (**(code **)(*piVar1 + 4))(this,param_2);
    }
    else {
      if (param_1 == 0x201) {
        pcVar4 = *(code **)(*piVar1 + 8);
      }
      else {
        if (param_1 != 0x204) goto LAB_11026faa;
        pcVar4 = *(code **)(*piVar1 + 0xc);
      }
      (*pcVar4)(this,param_3 & 0xffff,param_3 >> 0x10);
    }
  }
LAB_11026faa:
  if (((*(byte *)((int)this + 0x10) & 2) == 0) && (WWindow::ModalCount == 0)) {
    if (param_1 == 0x1c) {
      DAT_1109f1e0 = param_2;
      if (*(int *)GUnicodeOS_exref == 0) {
        SendMessageA(*(HWND *)((int)this + 4),0x86,(WPARAM)param_2,0);
        iVar2 = (**(code **)(*(int *)this + 0x20))(0x1c,param_2,param_3);
        ExceptionList = local_10;
        return iVar2;
      }
      SendMessageW(*(HWND *)((int)this + 4),0x86,(WPARAM)param_2,0);
      iVar2 = (**(code **)(*(int *)this + 0x20))(0x1c,param_2,param_3);
      ExceptionList = local_10;
      return iVar2;
    }
    if (param_1 == 0x86) {
      if ((DAT_1109f1e0 != (HWND__ *)0x0) && (param_2 == (HWND__ *)0x0)) {
        ExceptionList = local_10;
        return 1;
      }
      goto LAB_110278fb;
    }
  }
  if (param_1 == 2) {
    (**(code **)(*(int *)this + 0xe0))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(2,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x2b) {
    iVar2 = 0;
    while( true ) {
      if (*(int *)((int)this + 0x24) <= iVar2) {
        ExceptionList = local_10;
        return 1;
      }
      piVar1 = *(int **)(*(int *)((int)this + 0x20) + iVar2 * 4);
      if (piVar1[1] == *(int *)(param_3 + 0x14)) break;
      iVar2 = iVar2 + 1;
    }
    pcVar4 = *(code **)(*piVar1 + 0x8c);
LAB_110270b3:
    (*pcVar4)(param_3);
    ExceptionList = local_10;
    return 1;
  }
  if (param_1 == 0x2c) {
    iVar2 = 0;
    while( true ) {
      if (*(int *)((int)this + 0x24) <= iVar2) {
        ExceptionList = local_10;
        return 1;
      }
      piVar1 = *(int **)(*(int *)((int)this + 0x20) + iVar2 * 4);
      if ((uint)*(ushort *)(piVar1 + 3) == *(uint *)(param_3 + 4)) break;
      iVar2 = iVar2 + 1;
    }
    pcVar4 = *(code **)(*piVar1 + 0x90);
    goto LAB_110270b3;
  }
  if (param_1 == 0x10) {
    iVar2 = (**(code **)(*(int *)this + 0xdc))();
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    goto LAB_110278fb;
  }
  if (param_1 == 0x102) {
    (**(code **)(*(int *)this + 0x58))(param_2);
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x102,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x100) {
    (**(code **)(*(int *)this + 0x5c))(param_2);
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x100,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0xf) {
    (**(code **)(*(int *)this + 0x84))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0xf,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 1) {
    (**(code **)(*(int *)this + 0x88))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(1,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x113) {
    (**(code **)(*(int *)this + 0xa8))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x113,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x110) {
    (**(code **)(*(int *)this + 0x94))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x110,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x121) {
    (**(code **)(*(int *)this + 0x98))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x121,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 7) {
    GOnSetFocus(param_2);
    (**(code **)(*(int *)this + 0x38))(param_2);
    iVar2 = (**(code **)(*(int *)this + 0x20))(7,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 6) {
    (**(code **)(*(int *)this + 0x54))((short)param_2 != 0);
    iVar2 = (**(code **)(*(int *)this + 0x20))(6,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 8) {
    GOnKillFocus(param_2);
    (**(code **)(*(int *)this + 0x3c))(param_2);
    iVar2 = (**(code **)(*(int *)this + 0x20))(8,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 5) {
    (**(code **)(*(int *)this + 0x40))(param_2,param_3 & 0xffff,param_3 >> 0x10);
    iVar2 = (**(code **)(*(int *)this + 0x20))(5,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x46) {
    (**(code **)(*(int *)this + 0x44))(param_3 + 8,param_3 + 0xc,param_3 + 0x10,param_3 + 0x14);
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x46,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 3) {
    (**(code **)(*(int *)this + 0x48))(param_3 & 0xffff,param_3 >> 0x10);
    iVar2 = (**(code **)(*(int *)this + 0x20))(3,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x302) {
    (**(code **)(*(int *)this + 0x68))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x302,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x18) {
    (**(code **)(*(int *)this + 0x6c))(param_2);
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x18,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x4a) {
    (**(code **)(*(int *)this + 0x34))(param_2,param_3);
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x4a,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x215) {
    (**(code **)(*(int *)this + 0xac))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x215,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x222) {
    (**(code **)(*(int *)this + 0xb0))(param_3 == *(uint *)((int)this + 4));
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x222,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x200) {
    (**(code **)(*(int *)this + 0xb4))(param_2,(int)(short)param_3,(int)(short)(param_3 >> 0x10));
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x200,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x201) {
    (**(code **)(*(int *)this + 0xb8))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x201,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x203) {
    (**(code **)(*(int *)this + 0xbc))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x203,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x209) {
    (**(code **)(*(int *)this + 0xc0))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x209,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x206) {
    (**(code **)(*(int *)this + 0xc4))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x206,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x204) {
    (**(code **)(*(int *)this + 200))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x204,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x202) {
    (**(code **)(*(int *)this + 0xcc))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x202,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x205) {
    (**(code **)(*(int *)this + 0xd0))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x205,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x300) {
    (**(code **)(*(int *)this + 0x60))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x300,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x301) {
    (**(code **)(*(int *)this + 100))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x301,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x304) {
    (**(code **)(*(int *)this + 0x70))();
    iVar2 = (**(code **)(*(int *)this + 0x20))(0x304,param_2,param_3);
    ExceptionList = local_10;
    return iVar2;
  }
  if (param_1 == 0x14) {
    iVar2 = (**(code **)(*(int *)this + 0x74))();
  }
  else {
    if (param_1 != 0x20) {
      if (param_1 == 0x4e) {
        for (iVar2 = 0; iVar2 < *(int *)((int)this + 0x24); iVar2 = iVar2 + 1) {
          piVar1 = *(int **)(*(int *)((int)this + 0x20) + iVar2 * 4);
          if ((param_2 == (HWND__ *)(uint)*(ushort *)(piVar1 + 3)) &&
             (iVar3 = (**(code **)(*piVar1 + 0x24))(0x4e,param_2,param_3), iVar3 != 0)) {
            ExceptionList = local_10;
            return 1;
          }
        }
      }
      else {
        if (param_1 == 0x115) {
          (**(code **)(*(int *)this + 0x78))(param_2,param_3);
          iVar2 = (**(code **)(*(int *)this + 0x20))(0x115,param_2,param_3);
          ExceptionList = local_10;
          return iVar2;
        }
        if (param_1 == 0x101) {
          (**(code **)(*(int *)this + 0x80))(param_2,param_3);
          iVar2 = (**(code **)(*(int *)this + 0x20))(0x101,param_2,param_3);
          ExceptionList = local_10;
          return iVar2;
        }
        if (param_1 != 0x111) {
          if (param_1 != 0x114) {
            if (param_1 != 0x112) {
              if (param_1 == 0x8034) {
                ExceptionList = local_10;
                return *(int *)((int)this + 0x38);
              }
              goto LAB_110278fb;
            }
            iVar2 = (**(code **)(*(int *)this + 0x50))(param_2);
            goto joined_r0x110277a5;
          }
          (**(code **)(*(int *)this + 0x7c))(param_2,param_3);
        }
        for (iVar2 = 0; iVar2 < *(int *)((int)this + 0x24); iVar2 = iVar2 + 1) {
          piVar1 = *(int **)(*(int *)((int)this + 0x20) + iVar2 * 4);
          if ((param_3 == piVar1[1]) &&
             (iVar3 = (**(code **)(*piVar1 + 0x24))(param_1,param_2,param_3), iVar3 != 0)) {
            ExceptionList = local_10;
            return 1;
          }
        }
      }
      (**(code **)(*(int *)this + 0x4c))(param_2);
      goto LAB_110278fb;
    }
    iVar2 = (**(code **)(*(int *)this + 0xd8))();
  }
joined_r0x110277a5:
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
LAB_110278fb:
  iVar2 = (**(code **)(*(int *)this + 0x20))(param_1,param_2,param_3);
  ExceptionList = local_10;
  return iVar2;
}


// ==== 1102791d Catch@1102791d

undefined4 Catch_1102791d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x1102711e;
}


// ==== 1102792b Catch@1102792b

void Catch_1102792b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_1107a670);
}


// ==== 1102793f Catch@1102793f

void Catch_1102793f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__WndProc_1106ffe8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11027c00 FUN_11027c00

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

FString * __thiscall FUN_11027c00(void *this,FString *param_1)

{
  uint uVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e1a;
  local_10 = ExceptionList;
  puVar2 = (ushort *)0x0;
  local_8 = 1;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x2f8);
  }
  uVar1 = (**(code **)(*(int *)this + 0x30))();
  if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
    if ((uVar1 & 0x7fffffff) != 0x7fffffff) {
      puVar2 = (ushort *)&stack0xffffffd0;
    }
    SendMessageW(*(HWND *)((int)this + 4),0xd,uVar1 + 1,(LPARAM)puVar2);
    FString::FString(param_1,puVar2);
  }
  else {
    if (uVar1 + 1 != 0) {
      puVar2 = (ushort *)&stack0xffffffd0;
    }
    SendMessageA(*(HWND *)((int)this + 4),0xd,uVar1 + 1,(LPARAM)puVar2);
    puVar2 = appFromAnsi((char *)puVar2,(ushort *)0x0);
    FString::FString(param_1,puVar2);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 11027d04 Catch@11027d04

void Catch_11027d04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 11027d18 Catch@11027d18

void Catch_11027d18(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__GetText_11070010);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11027d90 FUN_11027d90

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_11027d90(void *this,ushort *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  BVar1 = IsWindow(*(HWND *)((int)this + 4));
  if (BVar1 != 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      iVar2 = winGetSizeANSI(param_1);
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      else {
        winGetSizeANSI(param_1);
        pcVar3 = &stack0xffffffd8;
      }
      hWnd = *(HWND *)((int)this + 4);
      iVar2 = winGetSizeANSI(param_1);
      pcVar3 = winToANSI(pcVar3,param_1,iVar2);
      SendMessageA(hWnd,0xc,0,(LPARAM)pcVar3);
    }
    else {
      SendMessageW(*(HWND *)((int)this + 4),0xc,0,(LPARAM)param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11027e53 Catch@11027e53

void Catch_11027e53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11027e67 Catch@11027e67

void Catch_11027e67(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__SetText_11070038);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11027ed0 FUN_11027ed0

void __fastcall FUN_11027ed0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x316);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    SendMessageW(*(HWND *)(param_1 + 4),0xe,0,0);
    ExceptionList = local_10;
    return;
  }
  SendMessageA(*(HWND *)(param_1 + 4),0xe,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 11027f5a Catch@11027f5a

void Catch_11027f5a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11027f6e Catch@11027f6e

void Catch_11027f6e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__GetLength_11070060);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11027fc0 FUN_11027fc0

void __fastcall FUN_11027fc0(WWindow *param_1)

{
  WWindow::VerifyPosition(param_1);
  return;
}


// ==== 11027fd0 FUN_11027fd0

void __fastcall FUN_11027fd0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x37e);
  }
  DestroyWindow(*(HWND *)(param_1 + 4));
  ExceptionList = local_10;
  return;
}


// ==== 1102803a Catch@1102803a

void Catch_1102803a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102804e Catch@1102804e

void Catch_1102804e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow___CloseWindow_11070090);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110280a0 FUN_110280a0

void __thiscall FUN_110280a0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e60;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x30,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x30,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102810d Catch@1102810d

void Catch_1102810d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11028121 Catch@11028121

void Catch_11028121(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__SetFont_110700c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028170 FUN_11028170

void __thiscall FUN_11028170(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0xb,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0xb,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110281dd Catch@110281dd

void Catch_110281dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110281f1 Catch@110281f1

void Catch_110281f1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__SetRedraw_110700ec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028240 FUN_11028240

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

WNDPROC __cdecl FUN_11028240(LPCWSTR param_1,LPCWSTR param_2)

{
  ATOM AVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  tagWNDCLASSEXW *ptVar5;
  tagWNDCLASSEXA *ptVar6;
  tagWNDCLASSEXA local_84;
  tagWNDCLASSEXW local_54;
  tagWNDCLASSEXW *local_1c;
  WNDPROC local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff70;
  local_8 = 0;
  local_18 = (WNDPROC)0x0;
  if (*(int *)GUnicodeOS_exref == 0) {
    local_1c = (tagWNDCLASSEXW *)&local_84;
    ptVar6 = (tagWNDCLASSEXA *)local_1c;
    ExceptionList = &local_10;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar6->cbSize = 0;
      ptVar6 = (tagWNDCLASSEXA *)&ptVar6->style;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)&ptVar6->cbSize = 0;
      ptVar6 = (tagWNDCLASSEXA *)((int)&ptVar6->cbSize + 1);
    }
    local_84.cbSize = 0x30;
    iVar3 = winGetSizeANSI((ushort *)param_2);
    if (iVar3 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)param_2);
      local_14 = &stack0xffffff70;
      pcVar4 = &stack0xffffff70;
    }
    ptVar6 = &local_84;
    iVar3 = winGetSizeANSI((ushort *)param_2);
    pcVar4 = winToANSI(pcVar4,(ushort *)param_2,iVar3);
    BVar2 = GetClassInfoExA((HINSTANCE)0x0,pcVar4,ptVar6);
    if (BVar2 == 0) {
      appFailAssert(s_GetClassInfoExA__NULL__TCHAR_TO__11070164,s___Window_cpp_1106f624,0x427);
    }
    local_18 = local_84.lpfnWndProc;
    local_84.lpfnWndProc = WWindow::StaticWndProc;
    iVar3 = winGetSizeANSI((ushort *)param_1);
    if (iVar3 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)param_1);
      local_14 = &stack0xffffff70;
      pcVar4 = &stack0xffffff70;
    }
    iVar3 = winGetSizeANSI((ushort *)param_1);
    local_84.lpszClassName = winToANSI(pcVar4,(ushort *)param_1,iVar3);
    local_84.hInstance = hInstanceWindow;
    if (local_84.lpszMenuName != (LPCSTR)0x0) {
      appFailAssert(s_Cls_lpszMenuName__NULL_110701ac,s___Window_cpp_1106f624,0x42c);
    }
    AVar1 = RegisterClassExA(&local_84);
    if (AVar1 == 0) {
      appFailAssert(s_RegisterClassExA___Cls___1106ffa8,s___Window_cpp_1106f624,0x42d);
    }
  }
  else {
    local_1c = &local_54;
    ptVar5 = local_1c;
    ExceptionList = &local_10;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar5->cbSize = 0;
      ptVar5 = (tagWNDCLASSEXW *)&ptVar5->style;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)&ptVar5->cbSize = 0;
      ptVar5 = (tagWNDCLASSEXW *)((int)&ptVar5->cbSize + 1);
    }
    local_54.cbSize = 0x30;
    local_14 = &stack0xffffff70;
    BVar2 = GetClassInfoExW((HINSTANCE)0x0,param_2,&local_54);
    if (BVar2 == 0) {
      appFailAssert(s_GetClassInfoExW__NULL__WinBaseCl_110701c8,s___Window_cpp_1106f624,0x419);
    }
    local_18 = local_54.lpfnWndProc;
    local_54.lpfnWndProc = WWindow::StaticWndProc;
    local_54.lpszClassName = param_1;
    local_54.hInstance = hInstanceWindow;
    if (local_54.lpszMenuName != (LPCWSTR)0x0) {
      appFailAssert(s_Cls_lpszMenuName__NULL_110701ac,s___Window_cpp_1106f624,0x41e);
    }
    AVar1 = RegisterClassExW(&local_54);
    if (AVar1 == 0) {
      appFailAssert(s_RegisterClassExW___Cls___1106ffc8,s___Window_cpp_1106f624,0x41f);
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1102845d Catch@1102845d

void Catch_1102845d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 11028471 Catch@11028471

void Catch_11028471(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WControl__RegisterWindowClass_1107011c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028530 FUN_11028530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11028530(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  undefined1 local_30 [12];
  int local_24;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061e90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  pHVar2 = GetCapture();
  if (pHVar2 == *(HWND *)((int)this + 4)) {
    puVar3 = local_30;
    WWindow::GetClientRect(this);
    local_18 = (float)(param_3 - *(int *)((int)this + 0x60));
    if (local_18 != 0.0) {
      fVar1 = (float)_DAT_1106f610;
      local_18 = *(float *)((int)this + 0x48) + ((float)(int)local_18 / (float)local_24) * fVar1;
      *(float *)((int)this + 0x48) = local_18;
      if (local_18 < 0.0) {
        *(undefined4 *)((int)this + 0x48) = 0;
      }
      if (fVar1 < *(float *)((int)this + 0x48) + *(float *)((int)this + 0x4c)) {
        *(float *)((int)this + 0x48) = fVar1 - *(float *)((int)this + 0x4c);
      }
      (*(code *)**(undefined4 **)((int)this + 0x3c))(puVar3);
    }
    *(undefined4 *)((int)this + 0x5c) = param_2;
    *(int *)((int)this + 0x60) = param_3;
  }
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1102860a Catch@1102860a

void Catch_1102860a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102861e Catch@1102861e

void Catch_1102861e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__OnMouseMove_110701fc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028680 FUN_11028680

CRect * __thiscall FUN_11028680(void *this,CRect *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  ulonglong uVar2;
  tagRECT local_30;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061ea0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  GetClientRect(*(HWND *)((int)this + 4),&local_30);
  local_18 = (float)local_30.bottom;
  uVar1 = FUN_1103b180(extraout_ECX,extraout_EDX);
  local_30.top = (int)uVar1;
  uVar2 = FUN_1103b180(extraout_ECX_00,(int)(uVar1 >> 0x20));
  local_30.bottom = (LONG)uVar2;
  CRect::CRect(param_1,local_30.left,(int)uVar1,local_30.right,local_30.bottom);
  ExceptionList = local_10;
  return param_1;
}


// ==== 11028725 Catch@11028725

void Catch_11028725(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11028739 Catch@11028739

void Catch_11028739(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__GetThumbRect_11070240);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028790 FUN_11028790

void __fastcall FUN_11028790(WThinScrollBar *param_1)

{
  HDC hDC;
  BOOL BVar1;
  HBRUSH__ *hbr;
  tagPAINTSTRUCT local_7c;
  RECT local_3c;
  tagRECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061eb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &local_10;
  hDC = BeginPaint(*(HWND *)(param_1 + 4),&local_7c);
  GetClientRect(*(HWND *)(param_1 + 4),&local_2c);
  BVar1 = IsWindowEnabled(*(HWND *)(param_1 + 4));
  hbr = hBrushBlack;
  if (BVar1 == 0) {
    hbr = hBrushGrey;
  }
  FillRect(hDC,&local_2c,hbr);
  (**(code **)(*(int *)param_1 + 0xe4))(hDC,&local_2c,1);
  BVar1 = IsWindowEnabled(*(HWND *)(param_1 + 4));
  if (BVar1 != 0) {
    WThinScrollBar::GetThumbRect(param_1);
    FillRect(hDC,&local_3c,*(HBRUSH *)(param_1 + 0x58));
  }
  EndPaint(*(HWND *)(param_1 + 4),&local_7c);
  ExceptionList = local_10;
  return;
}


// ==== 1102885b Catch@1102885b

void Catch_1102885b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102886f Catch@1102886f

void Catch_1102886f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__OnPaint_11070288);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110288d0 FUN_110288d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_110288d0(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  undefined1 local_30 [8];
  int local_28;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061ec0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  pHVar2 = GetCapture();
  if (pHVar2 == *(HWND *)((int)this + 4)) {
    puVar3 = local_30;
    WWindow::GetClientRect(this);
    local_18 = (float)(param_2 - *(int *)((int)this + 100));
    if (local_18 != 0.0) {
      fVar1 = (float)_DAT_1106f610;
      local_18 = *(float *)((int)this + 0x48) +
                 ((float)(int)local_18 / (float)((local_28 - *(int *)((int)this + 0x70)) + -4)) *
                 fVar1;
      *(float *)((int)this + 0x48) = local_18;
      if (local_18 < 0.0) {
        *(undefined4 *)((int)this + 0x48) = 0;
      }
      if (fVar1 < *(float *)((int)this + 0x48)) {
        *(undefined4 *)((int)this + 0x48) = _DAT_11070308;
      }
      (*(code *)**(undefined4 **)((int)this + 0x3c))(puVar3);
    }
    *(int *)((int)this + 100) = param_2;
    *(undefined4 *)((int)this + 0x68) = param_3;
  }
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  ExceptionList = local_10;
  return;
}


// ==== 110289b6 Catch@110289b6

void Catch_110289b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 110289ca Catch@110289ca

void Catch_110289ca(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__OnMouseMove_110702c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028a30 FUN_11028a30

CRect * __thiscall FUN_11028a30(void *this,CRect *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  ulonglong uVar3;
  tagRECT local_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061ed0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  GetClientRect(*(HWND *)((int)this + 4),&local_30);
  iVar2 = local_30.top + 2;
  local_30.bottom = local_30.bottom + -2;
  iVar1 = *(int *)((int)this + 0x70);
  local_18 = (local_30.right - iVar1) + -4;
  local_30.top = iVar2;
  uVar3 = FUN_1103b180(extraout_ECX,local_18);
  local_30.left = (LONG)uVar3;
  local_30.right = iVar1 + local_30.left;
  CRect::CRect(param_1,local_30.left,iVar2,local_30.right,local_30.bottom);
  ExceptionList = local_10;
  return param_1;
}


// ==== 11028ad8 Catch@11028ad8

void Catch_11028ad8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11028aec Catch@11028aec

void Catch_11028aec(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__GetThumbRect_1107030c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028b40 FUN_11028b40

void __fastcall FUN_11028b40(WTimeScrollBar *param_1)

{
  HDC pHVar1;
  HDC hdc;
  tagPAINTSTRUCT local_88;
  int local_48;
  tagRECT local_38;
  HGDIOBJ local_20;
  HDC local_1c;
  HBITMAP local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061ee0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff6c;
  local_8 = 0;
  ExceptionList = &local_10;
  pHVar1 = BeginPaint(*(HWND *)(param_1 + 4),&local_88);
  local_1c = pHVar1;
  GetClientRect(*(HWND *)(param_1 + 4),&local_38);
  hdc = CreateCompatibleDC(pHVar1);
  local_18 = CreateCompatibleBitmap(pHVar1,local_38.right,local_38.bottom);
  pHVar1 = CreateCompatibleDC(pHVar1);
  SelectObject(pHVar1,local_18);
  local_20 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x5c));
  StretchBlt(pHVar1,0,0,local_38.right,local_38.bottom,hdc,0,0,*(int *)(param_1 + 0xa0),
             *(int *)(param_1 + 0xa4),0xcc0020);
  SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x58));
  BitBlt(pHVar1,0,0,*(int *)(param_1 + 0x88),*(int *)(param_1 + 0x8c),hdc,0,0,0xcc0020);
  SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x60));
  BitBlt(pHVar1,local_38.right + -1,0,*(int *)(param_1 + 0xb8),*(int *)(param_1 + 0xbc),hdc,0,0,
         0xcc0020);
  SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x54));
  WTimeScrollBar::GetThumbRect(param_1);
  BitBlt(pHVar1,local_48,2,*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x74),hdc,0,0,0xcc0020);
  BitBlt(local_1c,0,0,local_38.right,local_38.bottom,pHVar1,0,0,0xcc0020);
  SelectObject(hdc,local_20);
  DeleteObject(local_18);
  DeleteDC(hdc);
  DeleteDC(pHVar1);
  EndPaint(*(HWND *)(param_1 + 4),&local_88);
  ExceptionList = local_10;
  return;
}


// ==== 11028cf6 Catch@11028cf6

void Catch_11028cf6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 11028d0a Catch@11028d0a

void Catch_11028d0a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__OnPaint_11070354);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028da0 FUN_11028da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11028da0(void *this,float param_1)

{
  float fVar1;
  
  if (NAN(param_1) || 0.0 < param_1 == (param_1 == 0.0)) {
    param_1 = 0.0;
  }
  fVar1 = (float)_DAT_1106f610;
  if ((NAN(param_1) || NAN(fVar1)) || param_1 < fVar1 == (param_1 == fVar1)) {
    param_1 = _DAT_11070308;
  }
  *(float *)((int)this + 0x48) = param_1;
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11028e00 FUN_11028e00

void __fastcall FUN_11028e00(WWindow *param_1)

{
  int iVar1;
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061ef0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::GetCursorPos(param_1);
  WTimeScrollBar::GetThumbRect((WTimeScrollBar *)param_1);
  iVar1 = thunk_FUN_11024c60(local_34,local_24,local_20);
  if (iVar1 != 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)(*(int *)(param_1 + 0x14) + 4),0x111,0x802d,
                   (uint)*(ushort *)(param_1 + 0xc));
    }
    else {
      SendMessageW(*(HWND *)(*(int *)(param_1 + 0x14) + 4),0x111,0x802d,
                   (uint)*(ushort *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11028e99 Catch@11028e99

void Catch_11028e99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11028ead Catch@11028ead

void Catch_11028ead(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckBox__OnRightButtonDown_11070390);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11028f00 FUN_11028f00

void FUN_11028f00(void)

{
  POINT Point;
  HWND hWnd;
  int iVar1;
  HCURSOR pHVar2;
  LPCWSTR lpCursorName;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  Point.y = local_8.y;
  Point.x = local_8.x;
  hWnd = WindowFromPoint(Point);
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = SendMessageA(hWnd,0x8034,0,0);
  }
  else {
    iVar1 = SendMessageW(hWnd,0x8034,0,0);
  }
  if (iVar1 == 0) {
    lpCursorName = (LPCWSTR)0x5a5;
  }
  else {
    lpCursorName = (LPCWSTR)0x5a6;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    pHVar2 = LoadCursorW(DAT_1109c35c,lpCursorName);
    SetCursor(pHVar2);
    return;
  }
  pHVar2 = LoadCursorA(DAT_1109c35c,(LPCSTR)lpCursorName);
  SetCursor(pHVar2);
  return;
}


// ==== 11028fb0 FUN_11028fb0

FUDNHelpTopic * __thiscall FUN_11028fb0(void *this,byte param_1)

{
  FUDNHelpTopic::~FUDNHelpTopic(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11028fe0 FUN_11028fe0

void __fastcall FUN_11028fe0(int param_1)

{
  WEdit *this;
  HFONT__ *pHVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061f00;
  local_10 = ExceptionList;
  local_8 = 0;
  this = (WEdit *)(param_1 + 0x40);
  ExceptionList = &local_10;
  WEdit::OpenWindow(this,1,1,1,0,0,0);
  pHVar1 = GetStockObject(0x11);
  WWindow::SetFont((WWindow *)this,pHVar1);
  (**(code **)(*(int *)this + 0x2c))(param_1 + 0xa8);
  ExceptionList = local_10;
  return;
}


// ==== 11029058 Catch@11029058

void Catch_11029058(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102906c Catch@1102906c

void Catch_1102906c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__OnCreate_110703d8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110290c0 FUN_110290c0

void __fastcall FUN_110290c0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061f10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  SetFocus(*(HWND *)(param_1 + 0x44));
  ExceptionList = local_10;
  return;
}


// ==== 1102910c Catch@1102910c

void Catch_1102910c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11029120 Catch@11029120

void Catch_11029120(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__OnSetFocus_11070408);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029160 FUN_11029160

void __thiscall FUN_11029160(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061f20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::MoveWindow((WWindow *)((int)this + 0x40),0,0,param_2,param_3,1);
  WEdit::ScrollCaret((WEdit *)((int)this + 0x40));
  ExceptionList = local_10;
  return;
}


// ==== 110291dd Catch@110291dd

void Catch_110291dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110291f1 Catch@110291f1

void Catch_110291f1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__OnSize_1107043c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029240 FUN_11029240

void __fastcall FUN_11029240(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061f30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x40) + 0x30))();
  iVar2 = appStrlen((ushort *)(param_1 + 0xa8));
  WEdit::SetSelection((WEdit *)(param_1 + 0x40),(iVar1 - iVar2 < 0) - 1 & iVar1 - iVar2,iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 110292ba Catch@110292ba

void Catch_110292ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110292ce Catch@110292ce

void Catch_110292ce(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__SelectTyping_11070468);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029320 FUN_11029320

void __fastcall FUN_11029320(int param_1)

{
  WEdit *this;
  HFONT__ *pHVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061f40;
  local_10 = ExceptionList;
  local_8 = 0;
  this = (WEdit *)(param_1 + 0x40);
  ExceptionList = &local_10;
  WEdit::OpenWindow(this,1,1,1,0,0,0);
  pHVar1 = GetStockObject(0xb);
  WWindow::SetFont((WWindow *)this,pHVar1);
  (**(code **)(*(int *)this + 0x2c))(param_1 + 0xa8);
  ExceptionList = local_10;
  return;
}


// ==== 11029398 Catch@11029398

void Catch_11029398(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110293ac Catch@110293ac

void Catch_110293ac(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__OnCreate_110704a4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029400 FUN_11029400

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_11029400(void *this,ushort *param_1)

{
  int iVar1;
  char *pcVar2;
  size_t _Size;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061f50;
  local_10 = ExceptionList;
  pcVar2 = (char *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::SetText(this,param_1);
  if (GNotify != 0) {
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      appStrncpy((ushort *)&DAT_1109c378,param_1,0x40);
      (*Shell_NotifyIconWX)(1,&NID);
    }
    else {
      iVar1 = winGetSizeANSI(param_1);
      if (iVar1 != 0) {
        winGetSizeANSI(param_1);
        pcVar2 = &stack0xffffffd8;
      }
      iVar1 = appStrlen(param_1);
      _Size = 0x40;
      if ((int)(iVar1 + 1U) < 0x40) {
        _Size = iVar1 + 1U;
      }
      iVar1 = winGetSizeANSI(param_1);
      pcVar2 = winToANSI(pcVar2,param_1,iVar1);
      _memcpy(NIDA.szTip,pcVar2,_Size);
      NIDA.szTip[0x3f] = '\0';
      Shell_NotifyIconA(1,&NIDA);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 110294fd Catch@110294fd

void Catch_110294fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11029511 Catch@11029511

void Catch_11029511(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__SetText_110704c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029580 FUN_11029580

long __thiscall FUN_11029580(void *this,uint param_1,uint param_2,int param_3)

{
  HMENU__ *hMenu;
  HMENU hMenu_00;
  long lVar1;
  uint uFlags;
  int nReserved;
  HWND hWnd;
  RECT *prcRect;
  tagPOINT local_24 [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061f60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  if (param_1 == *(uint *)((int)this + 0x2ac)) {
    if ((param_3 == 0x204) || (param_3 == 0x201)) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd0;
      GetCursorPos(local_24);
      hMenu = LoadLocalizedMenu(hInstanceWindow,0x75,(ushort *)u_IDMENU_NotifyIcon_11070510,
                                (ushort *)u_Window_1106949c);
      SetForegroundWindow(*(HWND *)((int)this + 4));
      prcRect = (RECT *)0x0;
      hWnd = *(HWND *)((int)this + 4);
      nReserved = 0;
      uFlags = -(uint)(param_3 != 0x201) & 2;
      hMenu_00 = GetSubMenu(hMenu,0);
      TrackPopupMenu(hMenu_00,uFlags,local_24[0].x,local_24[0].y,nReserved,hWnd,prcRect);
      DestroyMenu(hMenu);
      if (*(int *)GUnicodeOS_exref == 0) {
        PostMessageA(*(HWND *)((int)this + 4),0,0,0);
      }
      else {
        PostMessageW(*(HWND *)((int)this + 4),0,0,0);
      }
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = &local_10;
  lVar1 = WWindow::WndProc(this,param_1,param_2,param_3);
  ExceptionList = local_10;
  return lVar1;
}


// ==== 11029697 Catch@11029697

void Catch_11029697(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110296ab Catch@110296ab

void Catch_110296ab(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__WndProc_110704ec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029720 FUN_11029720

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_11029720(HWND param_1,undefined4 *param_2)

{
  HWND hWnd;
  ushort *puVar1;
  FString *pFVar2;
  int iVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  char *lParam;
  HGDIOBJ pvVar7;
  int iVar8;
  LPARAM lParam_00;
  ushort local_c40;
  undefined1 local_c3e [2046];
  char local_440;
  undefined1 local_43f [1023];
  FString local_40 [12];
  FString local_34 [20];
  FString local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  hWnd = param_1;
  puStack_c = &LAB_11061f8b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff3b4;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_20);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int *)GUnicodeOS_exref == 0) {
    local_440 = '\0';
    _memset(local_43f,0,0x3ff);
    SendMessageA(param_1,0xd,0x400,(LPARAM)&local_440);
    puVar1 = appFromAnsi(&local_440,(ushort *)0x0);
  }
  else {
    local_c40 = 0;
    _memset(local_c3e,0,0x7fe);
    SendMessageW(param_1,0xd,0x400,(LPARAM)&local_c40);
    puVar1 = &local_c40;
  }
  FString::operator=(local_20,puVar1);
  pFVar2 = (FString *)FString::FString(local_40,local_20);
  local_8._0_1_ = 2;
  pFVar2 = (FString *)FString::Left(pFVar2,(int)local_34);
  local_8._0_1_ = 3;
  iVar3 = FString::operator==(pFVar2,(ushort *)u_IDC__110705b4);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_40);
  if (iVar3 == 0) {
    iVar3 = FString::operator==(local_20,(ushort *)u_IDOK_110705a8);
    if (iVar3 == 0) {
      iVar3 = FString::operator==(local_20,(ushort *)u_IDCANCEL_11070584);
      if (iVar3 == 0) goto LAB_11029af9;
      if (*(int *)GUnicodeOS_exref != 0) {
        puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar5 = thunk_FUN_11024db0((short *)puVar1);
        SendMessageW(param_1,0xc,0,(LPARAM)puVar5);
        goto LAB_11029af9;
      }
      puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      if (iVar3 == 0) {
        param_1 = (HWND)0x0;
      }
      else {
        puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar1 = thunk_FUN_11024db0((short *)puVar1);
        winGetSizeANSI(puVar1);
        local_14 = &stack0xfffff3b4;
        param_1 = (HWND)&stack0xfffff3b4;
      }
      puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
    }
    else {
      if (*(int *)GUnicodeOS_exref != 0) {
        puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar5 = thunk_FUN_11024db0((short *)puVar1);
        SendMessageW(param_1,0xc,0,(LPARAM)puVar5);
        goto LAB_11029af9;
      }
      puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      if (iVar3 == 0) {
        param_1 = (HWND)0x0;
      }
      else {
        puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar1 = thunk_FUN_11024db0((short *)puVar1);
        winGetSizeANSI(puVar1);
        local_14 = &stack0xfffff3b4;
        param_1 = (HWND)&stack0xfffff3b4;
      }
      puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
    }
  }
  else {
    iVar3 = 0;
    puVar1 = (ushort *)0x0;
    if (*(int *)GUnicodeOS_exref != 0) {
      puVar6 = (ushort *)param_2[1];
      puVar4 = FString::operator*(local_20);
      puVar1 = Localize((ushort *)*param_2,puVar4,puVar6,puVar1,iVar3);
      puVar5 = thunk_FUN_11024db0((short *)puVar1);
      SendMessageW(param_1,0xc,0,(LPARAM)puVar5);
      goto LAB_11029af9;
    }
    puVar6 = (ushort *)param_2[1];
    puVar4 = FString::operator*(local_20);
    puVar1 = Localize((ushort *)*param_2,puVar4,puVar6,puVar1,iVar3);
    puVar1 = thunk_FUN_11024db0((short *)puVar1);
    iVar3 = winGetSizeANSI(puVar1);
    if (iVar3 == 0) {
      param_1 = (HWND)0x0;
    }
    else {
      iVar3 = 0;
      puVar4 = (ushort *)0x0;
      puVar1 = (ushort *)param_2[1];
      puVar6 = FString::operator*(local_20);
      puVar1 = Localize((ushort *)*param_2,puVar6,puVar1,puVar4,iVar3);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      winGetSizeANSI(puVar1);
      local_14 = &stack0xfffff3b4;
      param_1 = (HWND)&stack0xfffff3b4;
    }
    iVar3 = 0;
    puVar4 = (ushort *)0x0;
    puVar1 = (ushort *)param_2[1];
    puVar6 = FString::operator*(local_20);
    puVar1 = Localize((ushort *)*param_2,puVar6,puVar1,puVar4,iVar3);
    puVar1 = thunk_FUN_11024db0((short *)puVar1);
    iVar3 = winGetSizeANSI(puVar1);
    iVar8 = 0;
    puVar4 = (ushort *)0x0;
    puVar1 = (ushort *)param_2[1];
    puVar6 = FString::operator*(local_20);
    puVar1 = Localize((ushort *)*param_2,puVar6,puVar1,puVar4,iVar8);
    puVar1 = thunk_FUN_11024db0((short *)puVar1);
  }
  lParam = winToANSI((char *)param_1,puVar1,iVar3);
  SendMessageA(hWnd,0xc,0,(LPARAM)lParam);
LAB_11029af9:
  lParam_00 = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar7 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar7,lParam_00);
  }
  else {
    pvVar7 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar7,lParam_00);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_20);
  ExceptionList = local_10;
  return 1;
}


// ==== 11029b55 Catch@11029b55

void Catch_11029b55(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 11029b69 Catch@11029b69

void Catch_11029b69(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDialog__LocalizeTextEnumProc_1107053c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029ca0 FUN_11029ca0

void __thiscall FUN_11029ca0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061fa0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  local_28 = param_1;
  local_24 = param_2;
  ExceptionList = &local_10;
  local_20 = this;
  EnumChildWindows(*(HWND *)((int)this + 4),WDialog::LocalizeTextEnumProc,(LPARAM)&local_28);
  WDialog::LocalizeTextEnumProc(*(HWND__ **)((int)this + 4),(long)&local_28);
  ExceptionList = local_10;
  return;
}


// ==== 11029d13 Catch@11029d13

void Catch_11029d13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11029d27 Catch@11029d27

void Catch_11029d27(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDialog__LocalizeText_110705c0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029d70 FUN_11029d70

void __thiscall FUN_11029d70(void *this,HDC param_1)

{
  HDC hdc;
  HGDIOBJ h;
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061fb0;
  local_10 = ExceptionList;
  local_8 = 0;
  hdc = param_1;
  ExceptionList = &local_10;
  if (param_1 == (HDC)0x0) {
    ExceptionList = &local_10;
    hdc = GetDC(*(HWND *)(*(int *)((int)this + 0x14) + 4));
  }
  h = SelectObject(hdc,hBrushWhite);
  if (*(int *)((int)this + 0x44) != -1) {
    iVar1 = WWindow::GetClientRect(*(WWindow **)((int)this + 0x14));
    PatBlt(hdc,*(int *)((int)this + 0x4c),0,*(int *)((int)this + 0x5c),
           *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 4),0x5a0049);
  }
  if (*(int *)((int)this + 0x48) != -1) {
    piVar2 = (int *)WWindow::GetClientRect(*(WWindow **)((int)this + 0x14));
    PatBlt(hdc,0,*(int *)((int)this + 0x50),piVar2[2] - *piVar2,*(int *)((int)this + 0x60),0x5a0049)
    ;
  }
  if (param_1 == (HDC)0x0) {
    ReleaseDC(*(HWND *)((int)this + 4),hdc);
  }
  SelectObject(hdc,h);
  ExceptionList = local_10;
  return;
}


// ==== 11029e52 Catch@11029e52

void Catch_11029e52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11029e66 Catch@11029e66

void Catch_11029e66(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDragInterceptor__ToggleDraw_110705f4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029ed0 FUN_11029ed0

void __thiscall FUN_11029ed0(void *this,undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061fc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0xec))(0);
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (*(int *)((int)this + iVar2 * 4 + 0x44) != -1) {
      iVar1 = thunk_FUN_11026270(((&param_2)[iVar2] - *(int *)((int)this + iVar2 * 4 + 0x3c)) +
                                 *(int *)((int)this + iVar2 * 4 + 0x4c),
                                 *(int *)((int)this + iVar2 * 4 + 100),
                                 *(int *)((int)this + iVar2 * 4 + 0x6c));
      *(int *)((int)this + iVar2 * 4 + 0x4c) = iVar1;
    }
  }
  (**(code **)(*(int *)this + 0xec))(0);
  *(int *)((int)this + 0x3c) = param_2;
  *(int *)((int)this + 0x40) = param_3;
  ExceptionList = local_10;
  return;
}


// ==== 11029f6c Catch@11029f6c

void Catch_11029f6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11029f80 Catch@11029f80

void Catch_11029f80(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDragInterceptor__OnMouseMove_1107063c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11029fd0 FUN_11029fd0

void __fastcall FUN_11029fd0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061fd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ClipCursor((RECT *)0x0);
  (**(code **)(*param_1 + 0xec))(0);
  (**(code **)(*(int *)param_1[5] + 0xd4))(param_1,param_1[0x1d]);
  DestroyWindow((HWND)param_1[1]);
  ExceptionList = local_10;
  return;
}


// ==== 1102a044 Catch@1102a044

void Catch_1102a044(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102a058 Catch@1102a058

void Catch_1102a058(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDragInterceptor__OnReleaseCaptu_11070688);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102a0a0 FUN_1102a0a0

void __fastcall FUN_1102a0a0(WWindow *param_1)

{
  HDC hDC;
  HBRUSH hbr;
  tagPAINTSTRUCT local_6c;
  RECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061fe0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  ExceptionList = &local_10;
  hDC = BeginPaint(*(HWND *)(param_1 + 4),&local_6c);
  WWindow::GetClientRect(param_1);
  hbr = GetSysColorBrush(0xf);
  FillRect(hDC,&local_2c,hbr);
  EndPaint(*(HWND *)(param_1 + 4),&local_6c);
  ExceptionList = local_10;
  return;
}


// ==== 1102a11f Catch@1102a11f

void Catch_1102a11f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102a133 Catch@1102a133

void Catch_1102a133(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitterPane__OnPaint_110706dc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102a180 FUN_1102a180

void __fastcall FUN_1102a180(WWindow *param_1)

{
  HDC hDC;
  HWND pHVar1;
  UINT grfFlags;
  tagPAINTSTRUCT local_6c;
  RECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11061ff0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  ExceptionList = &local_10;
  hDC = BeginPaint(*(HWND *)(param_1 + 4),&local_6c);
  WWindow::GetClientRect(param_1);
  FillRect(hDC,&local_2c,hBrushGreyWindow);
  grfFlags = 0xf;
  pHVar1 = GetCapture();
  DrawEdge(hDC,&local_2c,(-(uint)(pHVar1 != *(HWND *)(param_1 + 4)) & 0xfffffffb) + 10,grfFlags);
  EndPaint(*(HWND *)(param_1 + 4),&local_6c);
  ExceptionList = local_10;
  return;
}


// ==== 1102a21d Catch@1102a21d

void Catch_1102a21d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102a231 Catch@1102a231

void Catch_1102a231(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitter__OnPaint_11070714);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102a290 FUN_1102a290

void __fastcall FUN_1102a290(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062000;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::GetCursorPos(param_1);
  SetCapture(*(HWND *)(param_1 + 4));
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,1);
  ExceptionList = local_10;
  return;
}


// ==== 1102a2f3 Catch@1102a2f3

void Catch_1102a2f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102a307 Catch@1102a307

void Catch_1102a307(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitter__OnLeftButtonDown_11070744);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102a350 FUN_1102a350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1102a350(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LONG nHeight;
  BOOL bRepaint;
  undefined4 uVar7;
  tagRECT local_20;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    GetClientRect(*(HWND *)(param_1 + 4),&local_20);
    bRepaint = 1;
    if (*(int *)(*(int *)(param_1 + 0x3c) + 0x3c) == 0) {
      uVar3 = FUN_1103b180(local_20.bottom + -6,extraout_EDX);
      pcVar2 = MoveWindow_exref;
      MoveWindow(*(HWND *)(*(int *)(param_1 + 0x40) + 4),0,0,local_20.right,(int)uVar3,bRepaint);
      GetClientRect(*(HWND *)(*(int *)(param_1 + 0x40) + 4),&local_10);
      uVar7 = 1;
      uVar3 = FUN_1103b180(extraout_ECX_02,extraout_EDX_01);
      iVar1 = (int)uVar3;
      uVar3 = FUN_1103b180(extraout_ECX_03,(int)(uVar3 >> 0x20));
      uVar6 = (undefined4)uVar3;
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 4);
      uVar5 = 0;
    }
    else {
      nHeight = local_20.bottom;
      uVar3 = FUN_1103b180(extraout_ECX,local_20.right + -6);
      pcVar2 = MoveWindow_exref;
      MoveWindow(*(HWND *)(*(int *)(param_1 + 0x40) + 4),0,0,(int)uVar3,nHeight,bRepaint);
      GetClientRect(*(HWND *)(*(int *)(param_1 + 0x40) + 4),&local_10);
      uVar7 = 1;
      uVar3 = FUN_1103b180(extraout_ECX_00,extraout_EDX_00);
      iVar1 = (int)uVar3;
      uVar6 = 0;
      uVar3 = FUN_1103b180(extraout_ECX_01,(int)(uVar3 >> 0x20));
      uVar5 = (undefined4)uVar3;
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 4);
      local_20.right = iVar1;
      iVar1 = local_20.bottom;
    }
    (*pcVar2)(uVar4,uVar5,uVar6,local_20.right,iVar1,uVar7);
    if (*(FContainer **)(param_1 + 0x48) != (FContainer *)0x0) {
      FContainer::RefreshControls(*(FContainer **)(param_1 + 0x48));
      return;
    }
  }
  return;
}


// ==== 1102a4e0 FUN_1102a4e0

void __fastcall FUN_1102a4e0(WWindow *param_1)

{
  HDC hDC;
  tagPAINTSTRUCT local_6c;
  RECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062010;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  ExceptionList = &local_10;
  hDC = BeginPaint(*(HWND *)(param_1 + 4),&local_6c);
  WWindow::GetClientRect(param_1);
  FillRect(hDC,&local_2c,hBrushBlack);
  EndPaint(*(HWND *)(param_1 + 4),&local_6c);
  ExceptionList = local_10;
  return;
}


// ==== 1102a55c Catch@1102a55c

void Catch_1102a55c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102a570 Catch@1102a570

void Catch_1102a570(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitterContainer__OnPaint_11070788);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102a610 FUN_1102a610

void __thiscall FUN_1102a610(void *this,int param_1,int param_2)

{
  if (param_1 < 0) {
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)((int)this + 4) < param_1 + param_2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(this,param_1,param_2,4);
  return;
}


// ==== 1102a750 FUN_1102a750

undefined4 * __fastcall FUN_1102a750(undefined4 *param_1)

{
  HCURSOR pHVar1;
  
  pHVar1 = GetCursor();
  *param_1 = pHVar1;
  if (*(int *)GUnicodeOS_exref != 0) {
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
    SetCursor(pHVar1);
    return param_1;
  }
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  SetCursor(pHVar1);
  return param_1;
}


// ==== 1102a7a0 FUN_1102a7a0

FArray * __thiscall FUN_1102a7a0(void *this,int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062029;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 4) = *(undefined4 *)(*param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102a830 FUN_1102a830

FArray * __thiscall FUN_1102a830(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,4);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102a8a0 FUN_1102a8a0

FArray * __thiscall FUN_1102a8a0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062049;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(this,1,4);
      puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102a950 FUN_1102a950

FArray * __thiscall FUN_1102a950(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062069;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],0x28);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(this,1,0x28);
      this_00 = (void *)(*(int *)this + iVar1 * 0x28);
      if (this_00 != (void *)0x0) {
        thunk_FUN_11025fb0(this_00,(undefined4 *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102aa10 FUN_1102aa10

FArray * __thiscall FUN_1102aa10(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062089;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(this,1,4);
      puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102aac0 FUN_1102aac0

FArray * __thiscall FUN_1102aac0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110620a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(this,1,4);
      puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102ab70 FUN_1102ab70

FArray * __thiscall FUN_1102ab70(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110620c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(this,1,4);
      puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102ac20 FUN_1102ac20

FArray * __thiscall FUN_1102ac20(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110620e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(this,1,4);
      puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102acd0 FUN_1102acd0

FArray * __thiscall FUN_1102acd0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062109;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],8);
  iVar3 = 0;
  if (*(int *)((int)this + 4) < 1) {
    ExceptionList = local_c;
    return this;
  }
  do {
    iVar1 = *param_1;
    iVar2 = *(int *)this;
    *(undefined4 *)(iVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(int *)((int)this + 4));
  ExceptionList = local_c;
  return this;
}


// ==== 1102ad90 FUN_1102ad90

void __fastcall FUN_1102ad90(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062129;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102ae50 FUN_1102ae50

FArray * __thiscall FUN_1102ae50(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,8);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102aec0 FUN_1102aec0

void __thiscall FUN_1102aec0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1102aef0 FUN_1102aef0

FArray * __thiscall FUN_1102aef0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062149;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(this,1,4);
      puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1102afa0 FUN_1102afa0

void __thiscall FUN_1102afa0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  iVar2 = param_1 + param_2;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0xc;
    iVar2 = iVar2 - param_1;
    do {
      FString::~FString((FString *)(*(int *)this + iVar1));
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0xc);
  return;
}


// ==== 1102b200 FUN_1102b200

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

USubsystem * __fastcall FUN_1102b200(USubsystem *param_1)

{
  HMODULE hModule;
  DWORD color;
  HDC hDC;
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  ushort local_224 [16];
  ushort local_204 [244];
  USubsystem *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_11062169;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd0;
  ExceptionList = &local_10;
  local_1c = param_1;
  USubsystem::USubsystem(param_1);
  *(undefined ***)param_1 = UWindowManager::vftable;
  *(undefined ***)(param_1 + 0x34) = UWindowManager::vftable;
  local_8 = 1;
  InitCommonControls();
  hModule = GetModuleHandleW(u_SHELL32_DLL_11070a18);
  Shell_NotifyIconWX =
       (_func_int_ulong__NOTIFYICONDATAW_ptr *)GetProcAddress(hModule,s_Shell_NotifyIconW_11070a00);
  SHGetSpecialFolderPathWX =
       (_func_int_HWND___ptr_ushort_ptr_int_int *)
       GetProcAddress(hModule,s_SHGetSpecialFolderPathW_110709e4);
  pcVar3 = winGetSizeANSI_exref;
  hInstanceWindow = DAT_1109c35c;
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = winGetSizeANSI((ushort *)u_RICHED32_DLL_110709c4);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)u_RICHED32_DLL_110709c4);
      local_14 = &stack0xfffffdd0;
      pcVar2 = &stack0xfffffdd0;
    }
    iVar1 = winGetSizeANSI((ushort *)u_RICHED32_DLL_110709c4);
    pcVar2 = winToANSI(pcVar2,(ushort *)u_RICHED32_DLL_110709c4,iVar1);
    LoadLibraryA(pcVar2);
  }
  else {
    LoadLibraryW(u_RICHED32_DLL_110709c4);
    pcVar3 = winGetSizeANSI_exref;
  }
  thunk_FUN_11006cf0(local_224,u_WListBox_1106fccc);
  WListBox::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_LISTBOX_110709b0);
  thunk_FUN_11006cf0(local_224,u_WItemBox_1106fd08);
  WListBox::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_LISTBOX_110709b0);
  thunk_FUN_11006cf0(local_224,u_WCheckListBox_1106fce4);
  WCheckListBox::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_LISTBOX_110709b0);
  thunk_FUN_11006cf0(local_224,u_WBitmapButton_1106facc);
  WBitmapButton::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_BUTTON_11069e2c);
  thunk_FUN_11006cf0(local_224,u_WColorButton_1106faf0);
  WColorButton::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_BUTTON_11069e2c);
  thunk_FUN_11006cf0(local_224,u_WTabControl_11069480);
  WTabControl::SuperProc =
       WControl::RegisterWindowClass(local_224,(ushort *)u_SysTabControl32_11070988);
  thunk_FUN_11006cf0(local_224,u_WLabel_110695cc);
  WLabel::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_STATIC_11070978);
  thunk_FUN_11006cf0(local_224,u_WGroupBox_1106fa4c);
  WGroupBox::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_BUTTON_11069e2c);
  thunk_FUN_11006cf0(local_224,u_WCustomLabel_1106faac);
  WCustomLabel::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_STATIC_11070978);
  thunk_FUN_11006cf0(local_224,u_WListView_1106fd20);
  WListView::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_SysListView32_11070954)
  ;
  thunk_FUN_11006cf0(local_224,u_WEdit_1106cbdc);
  WEdit::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_EDIT_11070948);
  thunk_FUN_11006cf0(local_224,u_WRichEdit_1106fc00);
  WRichEdit::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_RICHEDIT_11070930);
  thunk_FUN_11006cf0(local_224,u_WComboBox_1106ca9c);
  WComboBox::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_COMBOBOX_11070918);
  thunk_FUN_11006cf0(local_224,u_WEditTerminal_1106fc3c);
  WEdit::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_EDIT_11070948);
  thunk_FUN_11006cf0(local_224,u_WButton_1106c800);
  WButton::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_BUTTON_11069e2c);
  thunk_FUN_11006cf0(local_224,u_WPropertySheet_1106fa88);
  WPropertySheet::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_STATIC_11070978);
  thunk_FUN_11006cf0(local_224,u_WToolTip_110696fc);
  WToolTip::SuperProc =
       WControl::RegisterWindowClass(local_224,(ushort *)u_tooltips_class32_110708f0);
  thunk_FUN_11006cf0(local_224,u_WCoolButton_1106c938);
  WCoolButton::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_BUTTON_11069e2c);
  thunk_FUN_11006cf0(local_224,u_WUrlButton_1106fbe4);
  WUrlButton::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_BUTTON_11069e2c);
  thunk_FUN_11006cf0(local_224,u_WCheckBox_1106fb98);
  WCheckBox::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_BUTTON_11069e2c);
  thunk_FUN_11006cf0(local_224,u_WScrollBar_1106fbb0);
  WScrollBar::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_SCROLLBAR_110708d8);
  thunk_FUN_11006cf0(local_224,u_WTreeView_1106fbcc);
  WTreeView::SuperProc = WControl::RegisterWindowClass(local_224,(ushort *)u_SysTreeView32_110708b4)
  ;
  thunk_FUN_11006cf0(local_224,u_WTrackBar_1106cf54);
  WTrackBar::SuperProc =
       WControl::RegisterWindowClass(local_224,(ushort *)u_msctls_trackbar32_11070888);
  thunk_FUN_11006cf0(local_224,u_WProgressBar_1106fcac);
  WProgressBar::SuperProc =
       WControl::RegisterWindowClass(local_224,(ushort *)u_msctls_progress32_1107085c);
  thunk_FUN_11006cf0(local_204,u_WTerminal_1106fc60);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WLog_1106fc78);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WCrashBoxDialog_1106fc84);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WProperties_1106fd38);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WObjectProperties_1106fd54);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WConfigProperties_1106fda8);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WClassProperties_1106fd80);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WWizardDialog_1106fdf0);
  WWindow::RegisterWindowClass(local_204,0);
  thunk_FUN_11006cf0(local_204,u_WWizardPage_1106fdd4);
  WWindow::RegisterWindowClass(local_204,0);
  thunk_FUN_11006cf0(local_204,u_WDragInterceptor_1106d0c4);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WPictureButton_1106fb58);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WUDNWindow_1106fb7c);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WThinScrollBar_1106fb10);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WTimeScrollBar_1106fb34);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WPropertyPage_1106fa64);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WSplitter_1106fe38);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WSplitterPane_1106fe14);
  WWindow::RegisterWindowClass(local_204,8);
  thunk_FUN_11006cf0(local_204,u_WSplitterContainer_1106fe50);
  WWindow::RegisterWindowClass(local_204,8);
  hBrushBlack = CreateSolidBrush(0);
  hBrushWhite = CreateSolidBrush(0xffffff);
  hBrushOffWhite = CreateSolidBrush(0xe0e0e0);
  hBrushHeadline = CreateSolidBrush(0xc8c8c8);
  hBrushCurrent = CreateSolidBrush(0xa0a0a0);
  hBrushDark = CreateSolidBrush(0x404040);
  hBrushGrey = CreateSolidBrush(0x808080);
  color = GetSysColor(0xf);
  hBrushGreyWindow = CreateSolidBrush(color);
  hBrushGrey160 = CreateSolidBrush(0xa0a0a0);
  hBrushGrey180 = CreateSolidBrush(0xb4b4b4);
  hBrushGrey197 = CreateSolidBrush(0xc5c5c5);
  hBrushCyanHighlight = CreateSolidBrush(0xc8c800);
  hBrushCyanLow = CreateSolidBrush(0x8c8c00);
  hDC = GetDC((HWND)0x0);
  hFontText = GetStockObject(0x11);
  hFontUrl = GetStockObject(0x11);
  hFontHeadline = GetStockObject(0x11);
  ReleaseDC((HWND)0x0,hDC);
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = (*pcVar3)();
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      (*pcVar3)(u_UnrealOpen_11070840);
      local_14 = &stack0xfffffdd0;
      pcVar2 = &stack0xfffffdd0;
    }
    iVar1 = (*pcVar3)(u_UnrealOpen_11070840);
    pcVar2 = winToANSI(pcVar2,(ushort *)u_UnrealOpen_11070840,iVar1);
    WindowMessageOpen = RegisterWindowMessageA(pcVar2);
  }
  else {
    WindowMessageOpen = RegisterWindowMessageW(u_UnrealOpen_11070840);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = (*pcVar3)();
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      (*pcVar3)(u_MSWHEEL_ROLLMSG_11070818);
      local_14 = &stack0xfffffdd0;
      pcVar2 = &stack0xfffffdd0;
    }
    iVar1 = (*pcVar3)(u_MSWHEEL_ROLLMSG_11070818);
    pcVar2 = winToANSI(pcVar2,(ushort *)u_MSWHEEL_ROLLMSG_11070818,iVar1);
    WindowMessageMouseWheel = RegisterWindowMessageA(pcVar2);
  }
  else {
    WindowMessageMouseWheel = RegisterWindowMessageW(u_MSWHEEL_ROLLMSG_11070818);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ==== 1102ba9f Catch@1102ba9f

void Catch_1102ba9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102bab3 Catch@1102bab3

void Catch_1102bab3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_UWindowManager__UWindowManager_110707cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102bd10 FUN_1102bd10

void __fastcall FUN_1102bd10(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062189;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = UWindowManager::vftable;
  *(undefined ***)(param_1 + 0x34) = UWindowManager::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102bd80 FUN_1102bd80

undefined4 FUN_1102bd80(void)

{
  return 0;
}


// ==== 1102bdbd Catch@1102bdbd

void Catch_1102bdbd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102bdd1 Catch@1102bdd1

void Catch_1102bdd1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_UWindowManager__Exec_11070ac8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102be10 FUN_1102be10

UObject * __thiscall FUN_1102be10(void *this,byte param_1)

{
  thunk_FUN_1102bd10(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x38);
  }
  return this;
}


// ==== 1102be50 FUN_1102be50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1102be50(void *this,FArchive *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110621b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(this,param_1);
  for (iVar1 = 0; iVar1 < DAT_1109c4fc; iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(__Windows + iVar1 * 4) + 0xc))(param_1);
  }
  for (iVar1 = 0; iVar1 < DAT_1109c508; iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(__DeleteWindows + iVar1 * 4) + 0xc))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102bee1 Catch@1102bee1

void Catch_1102bee1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1102bef5 Catch@1102bef5

void Catch_1102bef5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_UWindowManager__Serialize_11070afc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102bf50 FUN_1102bf50

int __thiscall FUN_1102bf50(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = *(int **)this;
    do {
      if (*piVar2 == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return -1;
}


// ==== 1102bfc0 FUN_1102bfc0

void __fastcall FUN_1102bfc0(UObject *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110621c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Destroy(param_1);
  DeleteObject(hBrushBlack);
  DeleteObject(hBrushWhite);
  DeleteObject(hBrushOffWhite);
  DeleteObject(hBrushHeadline);
  DeleteObject(hBrushCurrent);
  DeleteObject(hBrushDark);
  DeleteObject(hBrushGrey);
  DeleteObject(hBrushGreyWindow);
  DeleteObject(hBrushGrey160);
  DeleteObject(hBrushGrey180);
  DeleteObject(hBrushGrey197);
  DeleteObject(hBrushCyanHighlight);
  DeleteObject(hBrushCyanLow);
  if (*(UObject **)GWindowManager_exref != param_1) {
    appFailAssert(s_GWindowManager__this_11070b78,s___Window_cpp_1106f624,0x116);
  }
  *(undefined4 *)GWindowManager_exref = 0;
  if (*(int *)GIsCriticalError_exref == 0) {
    (**(code **)(*(int *)param_1 + 0x68))(0);
  }
  for (iVar1 = 0; iVar1 < DAT_1109c4fc; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)&WWindow::_Windows,4,0);
  for (iVar1 = 0; iVar1 < DAT_1109c508; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)&WWindow::_DeleteWindows,4,0);
  for (iVar1 = 0; iVar1 < DAT_1109ca40; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)&WProperties::PropertiesWindows,4,0);
  ExceptionList = local_10;
  return;
}


// ==== 1102c144 Catch@1102c144

void Catch_1102c144(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1102c158 Catch@1102c158

void Catch_1102c158(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_UWindowManager__Destroy_11070b3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102c1f0 FUN_1102c1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1102c1f0(void)

{
  int iVar1;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110621d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  while (DAT_1109c508 != 0) {
    local_18 = (int *)*__DeleteWindows;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 4))(1);
    }
    iVar1 = thunk_FUN_1102bf50(&WWindow::_DeleteWindows,(int *)&local_18);
    if (iVar1 != -1) {
      appFailAssert(s_WWindow___DeleteWindows_FindItem_11070bc8,s___Window_cpp_1106f624,0x128);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102c283 Catch@1102c283

void Catch_1102c283(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102c297 Catch@1102c297

void Catch_1102c297(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_UWindowManager__Tick_11070b94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102c2f0 FUN_1102c2f0

void FUN_1102c2f0(void)

{
  UPackage *pUVar1;
  USubsystem *pUVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110621e0;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar4 = 0;
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffcc,0);
  uVar3 = extraout_var;
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = (USubsystem *)thunk_FUN_11022c10(0x38,pUVar1,uVar3,uVar4);
  if (pUVar2 == (USubsystem *)0x0) {
    pUVar2 = (USubsystem *)0x0;
  }
  else {
    pUVar2 = thunk_FUN_1102b200(pUVar2);
  }
  *(USubsystem **)GWindowManager_exref = pUVar2;
  UObject::AddToRoot(*(UObject **)GWindowManager_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1102c376 Catch@1102c376

void Catch_1102c376(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102c38a Catch@1102c38a

void Catch_1102c38a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_InitWindowing_11070c08);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102c3e0 FUN_1102c3e0

LONG * __thiscall FUN_1102c3e0(void *this,LONG *param_1,int param_2)

{
  LONG *pLVar1;
  tagRECT local_30;
  LONG local_20;
  LONG local_1c;
  LONG local_18;
  LONG local_14;
  FRect local_10 [16];
  
  GetWindowRect(*(HWND *)((int)this + 4),&local_30);
  if (param_2 != 0) {
    if (*(WWindow **)((int)this + 0x14) == (WWindow *)0x0) {
      local_20 = local_30.left;
      local_18 = local_30.right;
      local_1c = local_30.top;
      local_14 = local_30.bottom;
      pLVar1 = &local_20;
    }
    else {
      local_20 = local_30.left;
      local_1c = local_30.top;
      local_18 = local_30.right;
      local_14 = local_30.bottom;
      pLVar1 = (LONG *)WWindow::ScreenToClient(*(WWindow **)((int)this + 0x14),local_10);
    }
    *param_1 = *pLVar1;
    param_1[1] = pLVar1[1];
    param_1[2] = pLVar1[2];
    param_1[3] = pLVar1[3];
    return param_1;
  }
  *param_1 = local_30.left;
  param_1[1] = local_30.top;
  param_1[2] = local_30.right;
  param_1[3] = local_30.bottom;
  return param_1;
}


// ==== 1102c4e0 FUN_1102c4e0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1102c4e0(void *this,DWORD param_1,LPCWSTR param_2,uint param_3,int param_4,int param_5,
            int param_6,int param_7,HWND param_8,HMENU param_9)

{
  FName *this_00;
  LPCWSTR pWVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  HWND pHVar6;
  int iVar7;
  char *lpWindowName;
  ushort *puVar8;
  char *pcVar9;
  int iVar10;
  int nHeight;
  HMENU hMenu;
  HINSTANCE__ *hInstance;
  undefined4 uVar11;
  WWindow *lpParam;
  ushort local_430 [256];
  WCHAR local_230 [262];
  int local_24;
  int local_20;
  WWindow *local_1c;
  WWindow *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pWVar1 = param_2;
  puStack_c = &LAB_110621f0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbc4;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  puVar2 = &stack0xfffffbc4;
  if (*(int *)((int)this + 4) != 0) {
    ExceptionList = &local_10;
    appFailAssert(s_hWnd__NULL_11070cf0,s___Window_cpp_1106f624,0x38c);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  FName::FName((FName *)&local_1c,0);
  this_00 = (FName *)((int)this + 8);
  iVar3 = FName::operator!=(this_00,(FName *)&local_1c);
  if (iVar3 != 0) {
    iVar3 = **(int **)GConfig_exref;
    uVar11 = 0x100;
    puVar8 = local_430;
    puVar4 = FName::operator*(this_00);
    iVar3 = (**(code **)(iVar3 + 0x10))(u_WindowPositions_1106dcec,puVar4,puVar8,uVar11);
    if (iVar3 != 0) {
      Parse(local_430,(ushort *)&DAT_11070ce8,&param_4);
      Parse(local_430,(ushort *)&DAT_11070ce0,&param_5);
      if ((param_3 & 0x40000) != 0) {
        Parse(local_430,(ushort *)&DAT_11070cd4,&param_6);
        Parse(local_430,(ushort *)&DAT_11070cc8,&param_7);
      }
      iVar3 = 0;
      iVar10 = 0;
      while( true ) {
        local_24 = iVar3;
        local_20 = iVar10;
        if (DAT_1109c4fc <= iVar10) break;
        iVar5 = FName::operator==((FName *)(*(int *)(__Windows + iVar10 * 4) + 8),this_00);
        iVar3 = iVar3 + iVar5;
        iVar10 = iVar10 + 1;
      }
      if (iVar3 != 0) {
        param_4 = param_4 + iVar3 * 0x10;
        param_5 = param_5 + iVar3 * 0x10;
      }
      WWindow::VerifyPosition(local_18);
      this = local_18;
    }
  }
  local_1c = this;
  thunk_FUN_1101bea0(&WWindow::_Windows,&local_1c);
  (**(code **)(*(int *)this + 0x18))();
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar3 = winGetSizeANSI((ushort *)param_2);
    if (iVar3 == 0) {
      param_2 = (LPCWSTR)0x0;
    }
    else {
      winGetSizeANSI((ushort *)param_2);
      local_14 = &stack0xfffffbc0;
      param_2 = (LPCWSTR)&stack0xfffffbc0;
    }
    iVar3 = winGetSizeANSI((ushort *)local_230);
    if (iVar3 == 0) {
      pcVar9 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)local_230);
      local_14 = &stack0xfffffbc0;
      pcVar9 = &stack0xfffffbc0;
    }
    iVar3 = param_4;
    iVar10 = param_5;
    iVar5 = param_6;
    nHeight = param_7;
    pHVar6 = param_8;
    hMenu = param_9;
    hInstance = hInstanceWindow;
    lpParam = local_18;
    iVar7 = winGetSizeANSI((ushort *)pWVar1);
    lpWindowName = winToANSI((char *)param_2,(ushort *)pWVar1,iVar7);
    iVar7 = winGetSizeANSI((ushort *)local_230);
    pcVar9 = winToANSI(pcVar9,(ushort *)local_230,iVar7);
    pHVar6 = CreateWindowExA(param_1,pcVar9,lpWindowName,param_3,iVar3,iVar10,iVar5,nHeight,pHVar6,
                             hMenu,hInstance,lpParam);
    this = local_18;
  }
  else {
    pHVar6 = CreateWindowExW(param_1,local_230,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_9,hInstanceWindow,this);
  }
  if (pHVar6 == (HWND)0x0) {
    puVar8 = appGetSystemErrorMessage(0);
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                        u_CreateWindowEx_failed___s_11070c88,puVar8);
    appFailAssert(s_hWndCreated_11070c78,s___Window_cpp_1106f624,0x3b5);
  }
  if (pHVar6 != *(HWND *)((int)this + 4)) {
    appFailAssert(s_hWndCreated__hWnd_11070c60,s___Window_cpp_1106f624,0x3b6);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102c7cc Catch@1102c7cc

void Catch_1102c7cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_1107a670);
}


// ==== 1102c7e0 Catch@1102c7e0

void Catch_1102c7e0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_PerformCreateWindowEx_11070c2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102c8d0 FUN_1102c8d0

void __thiscall FUN_1102c8d0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  HWND__ *pHVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062200;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)((int)this + 0x14) + 4);
  }
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,0x56000000,param_1,param_2,param_3,param_4,pHVar1,(HMENU__ *)0x0,
             DAT_1109c35c);
  ExceptionList = local_10;
  return;
}


// ==== 1102c948 Catch@1102c948

void Catch_1102c948(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102c95c Catch@1102c95c

void Catch_1102c95c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__OpenWindow_11070d00);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102c9b0 FUN_1102c9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1102c9b0(WWindow *param_1)

{
  float fVar1;
  BOOL BVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062210;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  BVar2 = IsWindowEnabled(*(HWND *)(param_1 + 4));
  if (BVar2 == 0) {
    ExceptionList = local_10;
    return;
  }
  piVar5 = &local_24;
  WWindow::GetCursorPos(param_1);
  *(int *)(param_1 + 0x5c) = local_24;
  *(int *)(param_1 + 0x60) = local_20;
  puVar4 = local_2c;
  WThinScrollBar::GetThumbRect((WThinScrollBar *)param_1);
  iVar3 = thunk_FUN_11024c60(local_2c,local_24,local_20);
  if (iVar3 == 0) {
    *(HBRUSH__ **)(param_1 + 0x58) = hBrushCyanLow;
    if (local_20 < local_28) {
      fVar1 = *(float *)(param_1 + 0x48) - (float)_DAT_1106c3b0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x48) + (float)_DAT_1106c3b0;
    }
    *(float *)(param_1 + 0x48) = fVar1;
    if (*(float *)(param_1 + 0x48) < 0.0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if ((float)_DAT_1106f610 < *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x48)) {
      *(float *)(param_1 + 0x48) = (float)_DAT_1106f610 - *(float *)(param_1 + 0x4c);
    }
    (*(code *)**(undefined4 **)(param_1 + 0x3c))(puVar4,piVar5);
    ExceptionList = local_10;
    return;
  }
  *(HBRUSH__ **)(param_1 + 0x58) = hBrushCyanHighlight;
  SetCapture(*(HWND *)(param_1 + 4));
  ExceptionList = local_10;
  return;
}


// ==== 1102cace Catch@1102cace

void Catch_1102cace(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102cae2 Catch@1102cae2

void Catch_1102cae2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__OnLeftButtonDown_11070d40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102cb60 FUN_1102cb60

void __thiscall FUN_1102cb60(void *this,int param_1,int param_2,int param_3)

{
  HWND__ *pHVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062220;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)((int)this + 0x14) + 4);
  }
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,0x56000000,param_1,param_2,param_3,0x11,pHVar1,(HMENU__ *)0x0,
             DAT_1109c35c);
  ExceptionList = local_10;
  return;
}


// ==== 1102cbd6 Catch@1102cbd6

void Catch_1102cbd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102cbea Catch@1102cbea

void Catch_1102cbea(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__OpenWindow_11070d90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102cc30 FUN_1102cc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1102cc30(WWindow *param_1)

{
  float fVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_2c [2];
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062230;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  BVar2 = IsWindowEnabled(*(HWND *)(param_1 + 4));
  if (BVar2 == 0) {
    ExceptionList = local_10;
    return;
  }
  piVar5 = &local_24;
  WWindow::GetCursorPos(param_1);
  *(int *)(param_1 + 100) = local_24;
  *(int *)(param_1 + 0x68) = local_20;
  piVar4 = local_2c;
  WTimeScrollBar::GetThumbRect((WTimeScrollBar *)param_1);
  iVar3 = thunk_FUN_11024c60(local_2c,local_24,local_20);
  if (iVar3 == 0) {
    if (local_24 < local_2c[0]) {
      fVar1 = *(float *)(param_1 + 0x48) - (float)_DAT_1106c3b0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x48) + (float)_DAT_1106c3b0;
    }
    *(float *)(param_1 + 0x48) = fVar1;
    if (*(float *)(param_1 + 0x48) < 0.0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if ((float)_DAT_1106f610 < *(float *)(param_1 + 0x48)) {
      *(undefined4 *)(param_1 + 0x48) = _DAT_11070308;
    }
    (*(code *)**(undefined4 **)(param_1 + 0x3c))(piVar4,piVar5);
    ExceptionList = local_10;
    return;
  }
  SetCapture(*(HWND *)(param_1 + 4));
  ExceptionList = local_10;
  return;
}


// ==== 1102cd35 Catch@1102cd35

void Catch_1102cd35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102cd49 Catch@1102cd49

void Catch_1102cd49(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__OnLeftButtonDown_11070dd0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102cdc0 FUN_1102cdc0

void __fastcall FUN_1102cdc0(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062240;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  WWindow::PerformCreateWindowEx
            (param_1,0,(ushort *)0x0,0x56000000,0,0,1,1,*(HWND__ **)(*(int *)(param_1 + 0x14) + 4),
             (HMENU__ *)0x0,DAT_1109c35c);
  (**(code **)(*(int *)param_1 + 8))(0);
  ExceptionList = local_10;
  return;
}


// ==== 1102ce38 Catch@1102ce38

void Catch_1102ce38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102ce4c Catch@1102ce4c

void Catch_1102ce4c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WUDNWindow__OpenWindow_11070e20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102cea0 FUN_1102cea0

void __thiscall FUN_1102cea0(void *this,ushort *param_1,EName param_2)

{
  WWindow *this_00;
  int iVar1;
  FName *this_01;
  ushort *puVar2;
  uint uVar3;
  ushort local_820;
  undefined1 local_81e [2044];
  undefined2 local_22;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062250;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff7d4;
  local_8 = 0;
  if (param_2 == 0x314) {
    ExceptionList = &local_10;
    local_14 = &stack0xfffff7d4;
    (**(code **)(*(int *)((int)this + -0x3c) + 0x2c))(param_1);
    ExceptionList = local_10;
    return;
  }
  if (*(int *)((int)this + 0x26c) != 0) {
    this_00 = (WWindow *)((int)this + 4);
    ExceptionList = &local_10;
    WWindow::SetRedraw(this_00,0);
    iVar1 = WEdit::GetLineCount((WEdit *)this_00);
    if (*(int *)((int)this + 100) < iVar1) {
      uVar3 = iVar1 - *(int *)((int)this + 0x68);
      iVar1 = WEdit::GetLineIndex((WEdit *)this_00,iVar1 - (uVar3 & ((int)uVar3 < 0) - 1));
      WEdit::SetSelection((WEdit *)this_00,0,iVar1);
      WEdit::SetSelectedText((WEdit *)this_00,(ushort *)&DAT_11068ff8);
      iVar1 = (**(code **)(*(int *)this_00 + 0x30))();
      WEdit::SetSelection((WEdit *)this_00,iVar1,iVar1);
      WEdit::ScrollCaret((WEdit *)this_00);
    }
    local_820 = 0;
    _memset(local_81e,0,0x7fe);
    iVar1 = 0x400;
    this_01 = (FName *)FName::FName((FName *)&param_2,param_2);
    puVar2 = FName::operator*(this_01);
    appStrncat(&local_820,puVar2,iVar1);
    appStrncat(&local_820,(ushort *)&DAT_11070e8c,0x400);
    appStrncat(&local_820,param_1,0x400);
    appStrncat(&local_820,(ushort *)&DAT_1106b23c,0x400);
    appStrncat(&local_820,(ushort *)((int)this + 0x6c),0x400);
    local_22 = 0;
    WTerminal::SelectTyping((WTerminal *)((int)this + -0x3c));
    WWindow::SetRedraw(this_00,1);
    WEdit::SetSelectedText((WEdit *)this_00,&local_820);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102d031 Catch@1102d031

void Catch_1102d031(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102d045 Catch@1102d045

void Catch_1102d045(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__Serialize_11070e58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102d0e0 FUN_1102d0e0

void __thiscall FUN_1102d0e0(void *this,HWND__ *param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  FString *this_00;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  HMENU__ *pHVar9;
  HINSTANCE__ *pHVar10;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11062269;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)((int)this + 0x10) =
       *(uint *)((int)this + 0x10) ^ ((int)param_1 * 2 ^ *(uint *)((int)this + 0x10)) & 2;
  if (*(int *)((int)this + 0x14) == 0) {
    param_1 = (HWND__ *)0x0;
  }
  else {
    param_1 = *(HWND__ **)(*(int *)((int)this + 0x14) + 4);
  }
  if ((*(uint *)((int)this + 0x10) & 2) == 0) {
    uVar4 = -(uint)(param_2 != 0) & 0x40000;
  }
  else {
    uVar4 = 0x40;
  }
  puVar1 = LocalizeGeneral(s_Product_11070ed4,(ushort *)u_Core_1106d374,(ushort *)0x0);
  puVar2 = LocalizeGeneral(s_LogWindow_11070ec8,(ushort *)u_Window_1106949c,(ushort *)0x0);
  this_00 = (FString *)FString::Printf((ushort *)local_28,puVar2,puVar1);
  local_8._0_1_ = 1;
  pHVar9 = (HMENU__ *)0x0;
  iVar8 = 0x100;
  iVar7 = 0x200;
  iVar6 = -0x80000000;
  iVar5 = -0x80000000;
  uVar3 = (-(uint)((*(uint *)((int)this + 0x10) & 2) != 0) & 0x46030000) + 0xcc0000;
  pHVar10 = DAT_1109c35c;
  puVar1 = FString::operator*(this_00);
  WWindow::PerformCreateWindowEx
            (this,uVar4,puVar1,uVar3,iVar5,iVar6,iVar7,iVar8,param_1,pHVar9,pHVar10);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1102d1ef Catch@1102d1ef

void Catch_1102d1ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102d203 Catch@1102d203

void Catch_1102d203(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__OpenWindow_11070e94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102d270 FUN_1102d270

void __fastcall FUN_1102d270(WTerminal *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11062289;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  WTerminal::SelectTyping(param_1);
  appClipboardPaste();
  local_8._0_1_ = 1;
  iVar3 = 0x100;
  puVar2 = FString::operator*(local_2c);
  appStrncat((ushort *)(param_1 + 0xa8),puVar2,iVar3);
  *(undefined2 *)(param_1 + 0x2a6) = 0;
  local_18 = 0;
  while( true ) {
    uVar1 = *(ushort *)(param_1 + local_18 * 2 + 0xa8);
    if (uVar1 == 0) break;
    if ((uVar1 < 0x20) || (0x7e < uVar1)) {
      *(undefined2 *)(param_1 + local_18 * 2 + 0xa8) = 0;
    }
    local_18 = local_18 + 1;
  }
  WTerminal::UpdateTyping(param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1102d32a Catch@1102d32a

void Catch_1102d32a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102d33e Catch@1102d33e

void Catch_1102d33e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__Paste_11070ee0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102d3a0 FUN_1102d3a0

void __thiscall FUN_1102d3a0(void *this,ushort param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110622a0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  ExceptionList = &local_10;
  WTerminal::SelectTyping(this);
  puVar3 = (ushort *)((int)this + 0xa8);
  uVar1 = appStrlen(puVar3);
  if (param_1 < 0x20) {
    if (param_1 == 0xd) {
      if (1 < (int)uVar1) {
        WTerminal::UpdateTyping(this);
        WEdit::SetSelectedText((WEdit *)((int)this + 0x40),(ushort *)&DAT_11070f44);
        appStrcpy(local_220,(ushort *)((int)this + 0xaa));
        appStrcpy(puVar3,(ushort *)&DAT_11070f40);
        if (*(int *)((int)this + 0x9c) != 0) {
          iVar2 = (**(code **)**(undefined4 **)((int)this + 0x9c))
                            (local_220,*(undefined4 *)GLog_exref);
          if (iVar2 == 0) {
            puVar3 = LocalizeError(&DAT_11070f38,(ushort *)u_Core_1106d374,(ushort *)0x0);
            FOutputDevice::Log((FOutputDevice *)((int)this + 0x3c),puVar3);
          }
        }
        WTerminal::SelectTyping(this);
      }
    }
    else if (((param_1 == 8) || (param_1 == 0x7f)) && (1 < (int)uVar1)) {
      *(undefined2 *)((int)this + uVar1 * 2 + 0xa6) = 0;
    }
    else if (param_1 == 0x1b) {
      appStrcpy(puVar3,(ushort *)&DAT_11070f40);
    }
  }
  else if (uVar1 < 0xff) {
    *(ushort *)((int)this + uVar1 * 2 + 0xa8) = param_1;
    *(undefined2 *)((int)this + uVar1 * 2 + 0xaa) = 0;
  }
  WTerminal::UpdateTyping(this);
  if (param_1 == 0x16) {
    (**(code **)(*(int *)this + 0xec))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102d50e Catch@1102d50e

void Catch_1102d50e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102d522 Catch@1102d522

void Catch_1102d522(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTerminal__TypeChar_11070f08);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102d5b0 FUN_1102d5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1102d5b0(void *this,undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110622b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WTerminal::OpenWindow(this,param_2,0);
  (**(code **)(*(int *)this + 8))(param_1);
  UpdateWindow(*(HWND *)((int)this + 4));
  *(int *)GLogHook_exref = (int)this + 0x3c;
  if ((*(int *)GIsClient_exref == 0) && (*(int *)GIsEditor_exref == 0)) {
    _NID = 0x98;
    _DAT_1109c364 = *(undefined4 *)((int)this + 4);
    _DAT_1109c368 = 0;
    _DAT_1109c36c = 7;
    _DAT_1109c370 = *(undefined4 *)((int)this + 0x2ac);
    if (*(int *)GUnicodeOS_exref == 0) {
      _DAT_1109c374 =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      _DAT_1109c374 =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    _DAT_1109c378 = 0;
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      (*Shell_NotifyIconWX)(0,&NID);
    }
    else {
      NIDA.cbSize = 0x58;
      NIDA.hWnd = *(HWND *)((int)this + 4);
      NIDA.uID = 0;
      NIDA.uFlags = 7;
      NIDA.uCallbackMessage = *(UINT *)((int)this + 0x2ac);
      if (*(int *)GUnicodeOS_exref == 0) {
        NIDA.hIcon = LoadIconA(hInstanceWindow,
                               (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
      }
      else {
        NIDA.hIcon = LoadIconW(hInstanceWindow,
                               (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
      }
      NIDA.szTip[0] = '\0';
      Shell_NotifyIconA(0,&NIDA);
    }
    GNotify = 1;
    _atexit((_func_4879 *)&LAB_11024110);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102d784 Catch@1102d784

void Catch_1102d784(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102d798 Catch@1102d798

void Catch_1102d798(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__OpenWindow_11070f50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102d840 FUN_1102d840

void __thiscall FUN_1102d840(void *this,HINSTANCE param_1)

{
  int iVar1;
  undefined1 *puVar2;
  HWND pHVar3;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110622c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffd4;
  if (*(int *)((int)this + 4) != 0) {
    ExceptionList = &local_10;
    appFailAssert(s_hWnd__NULL_11070cf0,s___Window_cpp_1106f624,0x821);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_18 = this;
  thunk_FUN_1101bea0(&WWindow::_Windows,&local_18);
  WWindow::ModalCount = WWindow::ModalCount + 1;
  iVar1 = *(int *)((int)this + 0x14);
  if (*(int *)GUnicodeOS_exref == 0) {
    if (iVar1 == 0) {
      pHVar3 = (HWND)0x0;
    }
    else {
      pHVar3 = *(HWND *)(iVar1 + 4);
    }
    DialogBoxParamA(param_1,(LPCSTR)(uint)*(ushort *)((int)this + 0xc),pHVar3,WWindow::StaticWndProc
                    ,(LPARAM)this);
  }
  else {
    if (iVar1 == 0) {
      pHVar3 = (HWND)0x0;
    }
    else {
      pHVar3 = *(HWND *)(iVar1 + 4);
    }
    DialogBoxParamW(param_1,(LPCWSTR)(uint)*(ushort *)((int)this + 0xc),pHVar3,
                    WWindow::StaticWndProc,(LPARAM)this);
  }
  WWindow::ModalCount = WWindow::ModalCount + -1;
  ExceptionList = local_10;
  return;
}


// ==== 1102d90f Catch@1102d90f

void Catch_1102d90f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102d923 Catch@1102d923

void Catch_1102d923(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDialog__DoModal_11070f78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102d980 FUN_1102d980

void __thiscall FUN_1102d980(void *this,int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  HWND pHVar2;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110622d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd4;
  if (*(int *)((int)this + 4) != 0) {
    ExceptionList = &local_10;
    appFailAssert(s__hWnd_11070fdc,s___Window_cpp_1106f624,0x82d);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_18 = this;
  thunk_FUN_1101bea0(&WWindow::_Windows,&local_18);
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x14) == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = *(HWND *)(*(int *)((int)this + 0x14) + 4);
    }
  }
  else {
    pHVar2 = GetDlgItem(*(HWND *)(*(int *)((int)this + 0x14) + 4),param_1);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    pHVar2 = CreateDialogParamA(hInstanceWindow,(LPCSTR)(uint)*(ushort *)((int)this + 0xc),pHVar2,
                                WWindow::StaticWndProc,(LPARAM)this);
  }
  else {
    pHVar2 = CreateDialogParamW(hInstanceWindow,(LPCWSTR)(uint)*(ushort *)((int)this + 0xc),pHVar2,
                                WWindow::StaticWndProc,(LPARAM)this);
  }
  if (pHVar2 == (HWND)0x0) {
    appFailAssert(s_hWndCreated_11070c78,s___Window_cpp_1106f624,0x831);
  }
  if (pHVar2 != *(HWND *)((int)this + 4)) {
    appFailAssert(s_hWndCreated__hWnd_11070c60,s___Window_cpp_1106f624,0x832);
  }
  (**(code **)(*(int *)this + 8))(param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1102da91 Catch@1102da91

void Catch_1102da91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102daa5 Catch@1102daa5

void Catch_1102daa5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDialog__OpenChildWindow_11070fa0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102db20 FUN_1102db20

void __fastcall FUN_1102db20(int *param_1)

{
  int iVar1;
  HGDIOBJ pvVar2;
  HWND pHVar3;
  LONG LVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  LPARAM lParam;
  ushort local_22c [260];
  int local_24;
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110622e0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdc8;
  iVar7 = 0;
  local_8 = 0;
  lParam = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    pvVar2 = GetStockObject(0x11);
    SendMessageA((HWND)param_1[1],0x30,(WPARAM)pvVar2,lParam);
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xfffffdc8;
    pvVar2 = GetStockObject(0x11);
    SendMessageW((HWND)param_1[1],0x30,(WPARAM)pvVar2,lParam);
  }
  while (local_20 = iVar7, iVar7 < param_1[9]) {
    iVar1 = *(int *)(param_1[8] + iVar7 * 4);
    if (*(int *)(iVar1 + 4) != 0) {
      appFailAssert(s__Control_>hWnd_11071044,s___Window_cpp_1106f624,0x86a);
    }
    pHVar3 = GetDlgItem((HWND)param_1[1],(uint)*(ushort *)(iVar1 + 0xc));
    *(HWND *)(iVar1 + 4) = pHVar3;
    if (pHVar3 == (HWND)0x0) {
      appFailAssert(s_Control_>hWnd_11071034,s___Window_cpp_1106f624,0x86c);
    }
    local_24 = iVar1;
    thunk_FUN_1101bea0(&WWindow::_Windows,&local_24);
    if (*(int *)GUnicodeOS_exref == 0) {
      LVar4 = GetWindowLongA(*(HWND *)(iVar1 + 4),-4);
    }
    else {
      LVar4 = GetWindowLongW(*(HWND *)(iVar1 + 4),-4);
    }
    *(LONG *)(iVar1 + 0x3c) = LVar4;
    if (*(int *)GUnicodeOS_exref == 0) {
      SetWindowLongA(*(HWND *)(iVar1 + 4),-4,0x110011a9);
      iVar7 = iVar7 + 1;
    }
    else {
      SetWindowLongW(*(HWND *)(iVar1 + 4),-4,0x110011a9);
      iVar7 = iVar7 + 1;
    }
  }
  for (iVar7 = 0; local_18 = iVar7, iVar7 < param_1[9]; iVar7 = iVar7 + 1) {
    (**(code **)(**(int **)(param_1[8] + iVar7 * 4) + 0x88))();
  }
  puVar5 = FName::operator*((FName *)(param_1 + 2));
  appSprintf(local_22c,(ushort *)u_IDDIALOG__s_11071018,puVar5);
  iVar7 = *param_1;
  uVar6 = (**(code **)(iVar7 + 0x10))();
  (**(code **)(iVar7 + 0xec))(local_22c,uVar6);
  ExceptionList = local_10;
  return;
}


// ==== 1102dcba Catch@1102dcba

void Catch_1102dcba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102dcce Catch@1102dcce

void Catch_1102dcce(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDialog__OnInitDialog_11070fe4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102dd60 FUN_1102dd60

void __fastcall FUN_1102dd60(int param_1)

{
  int unaff_ESI;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    GetWindowRect(*(HWND *)(param_1 + 4),&local_20);
    WWindow::GetWindowRect(*(WWindow **)(param_1 + 0x14),(int)&local_10);
    SetWindowPos(*(HWND *)(param_1 + 4),(HWND)0x0,
                 (((unaff_ESI - local_20.top) - local_20.bottom) + local_c) / 2,
                 (((local_20.left - local_20.right) - local_10) + local_8) / 2,0,0,1);
  }
  return;
}


// ==== 1102ddf0 FUN_1102ddf0

void __fastcall FUN_1102ddf0(WWindow *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this;
  undefined4 uVar3;
  RECT *lpRect;
  int *piVar4;
  FRect local_54 [16];
  int local_44 [4];
  int local_34 [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110622f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (param_1,0,(ushort *)0x0,0x50000000,0,0,0,0,*(HWND__ **)(*(int *)(param_1 + 0x14) + 4),
             (HMENU__ *)0x0,DAT_1109c35c);
  puVar1 = (undefined4 *)WWindow::GetCursorPos(*(WWindow **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  *(undefined4 *)(param_1 + 0x40) = puVar1[1];
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
  SetCapture(*(HWND *)(param_1 + 4));
  SetFocus(*(HWND *)(param_1 + 4));
  piVar2 = (int *)WWindow::GetCursorPos(*(WWindow **)(param_1 + 0x14));
  piVar4 = local_34;
  this = (void *)thunk_FUN_110143a0(param_1 + 100,local_44,(int *)(param_1 + 0x4c));
  uVar3 = thunk_FUN_11014350(this,piVar4,piVar2);
  lpRect = (RECT *)WWindow::ClientToScreen(param_1,local_54);
  ClipCursor(lpRect);
  (**(code **)(*(int *)param_1 + 0xec))(0,uVar3);
  ExceptionList = local_10;
  return;
}


// ==== 1102ded9 Catch@1102ded9

void Catch_1102ded9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102deed Catch@1102deed

void Catch_1102deed(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WDragInterceptor__OpenWindow_11071058);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102df50 FUN_1102df50

void __fastcall FUN_1102df50(WWindow *param_1)

{
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062300;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (param_1,0,(ushort *)0x0,0x50000000,0,0,0,0,*(HWND__ **)(*(int *)(param_1 + 0x14) + 4),
             (HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(param_1 + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(param_1 + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102dfef Catch@1102dfef

void Catch_1102dfef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102e003 Catch@1102e003

void Catch_1102e003(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitterPane__OpenWindow_110710a0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102e060 FUN_1102e060

void __thiscall FUN_1102e060(void *this,undefined4 param_1)

{
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062310;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,0x50000000,0,0,0,0,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(*(HWND *)((int)this + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(*(HWND *)((int)this + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  *(undefined4 *)((int)this + 0x3c) = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 1102e107 Catch@1102e107

void Catch_1102e107(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102e11b Catch@1102e11b

void Catch_1102e11b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitter__OpenWindow_110710e0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102e170 FUN_1102e170

void __fastcall FUN_1102e170(int param_1)

{
  HWND hWnd;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  int X;
  int Y;
  int iVar2;
  BOOL bRepaint;
  tagRECT local_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062320;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  GetClientRect(*(HWND *)(*(int *)(param_1 + 0x14) + 4),&local_30);
  bRepaint = 1;
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar2 = 6;
    local_18 = local_30.bottom + -6;
    uVar1 = FUN_1103b180(local_18,extraout_EDX);
    Y = (int)uVar1;
    X = 0;
  }
  else {
    iVar2 = 6;
    Y = 0;
    local_18 = local_30.right + -6;
    uVar1 = FUN_1103b180(local_18,extraout_EDX);
    X = (int)uVar1;
    local_30.right = iVar2;
    iVar2 = local_30.bottom;
  }
  MoveWindow(*(HWND *)(param_1 + 4),X,Y,local_30.right,iVar2,bRepaint);
  WSplitterContainer::PositionPanes(*(WSplitterContainer **)(param_1 + 0x14));
  hWnd = *(HWND *)(*(int *)(*(int *)(param_1 + 0x14) + 0x14) + 4);
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(hWnd,0x111,0x8035,0);
  }
  else {
    SendMessageW(hWnd,0x111,0x8035,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102e24c Catch@1102e24c

void Catch_1102e24c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102e260 Catch@1102e260

void Catch_1102e260(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitter__PositionSplitter_11071114);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102e2c0 FUN_1102e2c0

void __thiscall FUN_1102e2c0(void *this,undefined4 param_1)

{
  *(undefined4 *)(*(int *)((int)this + 0x3c) + 0x40) = param_1;
  WSplitter::PositionSplitter(*(WSplitter **)((int)this + 0x3c));
  return;
}


// ==== 1102e2e0 FUN_1102e2e0

void __fastcall FUN_1102e2e0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062330;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(WSplitter **)(param_1 + 0x3c) != (WSplitter *)0x0) {
    ExceptionList = &local_10;
    WSplitter::PositionSplitter(*(WSplitter **)(param_1 + 0x3c));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102e32e Catch@1102e32e

void Catch_1102e32e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102e342 Catch@1102e342

void Catch_1102e342(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitterContainer__OnSize_11071158);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102e380 FUN_1102e380

int __thiscall FUN_1102e380(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)this + iVar2 * 4) == *param_1) {
        thunk_FUN_1100df00(this,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return iVar1 - *(int *)((int)this + 4);
}


// ==== 1102e3d0 FUN_1102e3d0

void __fastcall FUN_1102e3d0(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062349;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102e490 FUN_1102e490

int __thiscall FUN_1102e490(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)this + iVar2 * 4) == *param_1) {
        thunk_FUN_1102a610(this,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return iVar1 - *(int *)((int)this + 4);
}


// ==== 1102e4e0 FUN_1102e4e0

void __fastcall FUN_1102e4e0(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062369;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102e5a0 FUN_1102e5a0

void __fastcall FUN_1102e5a0(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062389;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102e660 FUN_1102e660

void __fastcall FUN_1102e660(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110623a9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1102afa0(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102e6d0 FUN_1102e6d0

FArray * __thiscall FUN_1102e6d0(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,4);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102e740 FUN_1102e740

void __fastcall FUN_1102e740(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110623c9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102e800 FUN_1102e800

FArray * __thiscall FUN_1102e800(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,4);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102e870 FUN_1102e870

void __fastcall FUN_1102e870(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110623e9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102e930 FUN_1102e930

FArray * __thiscall FUN_1102e930(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,4);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102e9a0 FUN_1102e9a0

FArray * __thiscall FUN_1102e9a0(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,4);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102ea10 FUN_1102ea10

FArray * __thiscall FUN_1102ea10(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,4);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102ea80 FUN_1102ea80

void __fastcall FUN_1102ea80(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062409;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102eb40 FUN_1102eb40

FArray * __thiscall FUN_1102eb40(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(this,1,4);
        puVar1 = (undefined4 *)(*(int *)this + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 1102ebb0 FUN_1102ebb0

void __thiscall FUN_1102ebb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1106242c;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)this + iVar1 + 0x14));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  FArray::Empty(this,0x28,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102ec60 FUN_1102ec60

void __fastcall FUN_1102ec60(WWindow *param_1)

{
  WWindow *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1106244b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = WWindow::vftable;
  local_8 = 1;
  WWindow::MaybeDestroy(param_1);
  local_18 = param_1;
  thunk_FUN_1102e490(&WWindow::_DeleteWindows,(int *)&local_18);
  local_8 = 0xffffffff;
  thunk_FUN_1100e550((FArray *)(param_1 + 0x20));
  ExceptionList = local_10;
  return;
}


// ==== 1102eccd Catch@1102eccd

void Catch_1102eccd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102ece1 Catch@1102ece1

void Catch_1102ece1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow___WWindow_11071198);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102ed30 FUN_1102ed30

void __thiscall FUN_1102ed30(void *this,int param_1,BOOL param_2)

{
  int unaff_ESI;
  int unaff_retaddr;
  int local_10 [4];
  
  WWindow::GetWindowRect(this,(int)local_10);
  MoveWindow(*(HWND *)((int)this + 4),unaff_ESI,local_10[0],unaff_retaddr,param_1,param_2);
  return;
}


// ==== 1102ed80 FUN_1102ed80

void __fastcall FUN_1102ed80(int param_1)

{
  undefined1 *puVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062460;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd4;
  if (*(int *)(param_1 + 0x18) != 0) {
    ExceptionList = &local_10;
    (**(code **)**(undefined4 **)(param_1 + 0x18))(param_1);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (*(HWND *)(param_1 + 4) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 4));
  }
  local_18 = param_1;
  thunk_FUN_1102e490(&WWindow::_Windows,&local_18);
  ExceptionList = local_10;
  return;
}


// ==== 1102edf1 Catch@1102edf1

void Catch_1102edf1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102ee05 Catch@1102ee05

void Catch_1102ee05(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__DoDestroy_110711c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102ee50 FUN_1102ee50

void __fastcall FUN_1102ee50(WWindow *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  FString *this;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  WWindow *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11062479;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffc4;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x35e);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  FName::FName((FName *)&local_18,0);
  iVar2 = FName::operator!=((FName *)(param_1 + 8),(FName *)&local_18);
  if (iVar2 != 0) {
    uVar6 = 1;
    WWindow::GetWindowRect(param_1,(int)&local_30);
    BVar3 = IsZoomed(*(HWND *)(param_1 + 4));
    if (BVar3 == 0) {
      this = (FString *)
             FString::Printf((ushort *)&local_2c,u__X__i_Y__i_XL__i_YL__i__11071224,local_30,
                             local_2c,local_28 - local_30,local_24 - local_2c,uVar6);
      local_8._0_1_ = 1;
      iVar2 = **(int **)GConfig_exref;
      uVar6 = 0;
      puVar4 = FString::operator*(this);
      puVar5 = FName::operator*((FName *)(param_1 + 8));
      (**(code **)(iVar2 + 0x30))(u_WindowPositions_1106dcec,puVar5,puVar4,uVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString((FString *)&local_2c);
    }
  }
  local_18 = param_1;
  thunk_FUN_1102e490(&WWindow::_Windows,(int *)&local_18);
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1102ef6b Catch@1102ef6b

void Catch_1102ef6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1102ef7f Catch@1102ef7f

void Catch_1102ef7f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWindow__OnDestroy_110711f4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102eff0 FUN_1102eff0

void __fastcall FUN_1102eff0(WWindow *param_1)

{
  WWindow *local_14;
  WWindow *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WControl::vftable;
  local_4 = 0;
  local_10 = param_1;
  if (*(int *)(param_1 + 0x14) != 0) {
    local_14 = param_1;
    thunk_FUN_1102e380((void *)(*(int *)(param_1 + 0x14) + 0x20),(int *)&local_14);
  }
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102f070 FUN_1102f070

void __fastcall FUN_1102f070(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110624b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnDestroy(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1102f0b5 Catch@1102f0b5

void Catch_1102f0b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102f0c9 Catch@1102f0c9

void Catch_1102f0c9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WThinScrollBar__OnDestroy_11071260);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102f110 FUN_1102f110

void __fastcall FUN_1102f110(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110624c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnDestroy(param_1);
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x54));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x58));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x5c));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x60));
  ExceptionList = local_10;
  return;
}


// ==== 1102f175 Catch@1102f175

void Catch_1102f175(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102f189 Catch@1102f189

void Catch_1102f189(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTimeScrollBar__OnDestroy_110712a0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102f1d0 FUN_1102f1d0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall FUN_1102f1d0(int *param_1)

{
  undefined4 *puVar1;
  FString *this;
  POINT Point;
  HWND hWnd;
  int iVar2;
  FUDNHelpTopic *pFVar3;
  undefined4 uVar4;
  ushort *puVar5;
  BOOL BVar6;
  LPCWSTR lpFile;
  int iVar7;
  LPCWSTR lpParameters;
  LPCWSTR lpDirectory;
  INT nShowCmd;
  MENUITEMINFOA local_88;
  FString local_58 [12];
  FString local_4c [12];
  FString *local_40;
  int local_3c;
  int local_34;
  int local_30;
  tagPOINT local_28;
  undefined1 *local_20;
  int *local_1c;
  FUDNHelpTopic *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_11062548;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = param_1;
  GetCursorPos(&local_28);
  Point.y = local_28.y;
  Point.x = local_28.x;
  hWnd = WindowFromPoint(Point);
  if (*(int *)GUnicodeOS_exref == 0) {
    local_14 = (char *)SendMessageA(hWnd,0x8034,0,0);
  }
  else {
    local_14 = (char *)SendMessageW(hWnd,0x8034,0,0);
  }
  if (local_14 == (char *)0x0) {
    appMsgf(0,(ushort *)u_Sorry__there_s_no_help_topic_for_110712e0);
    goto LAB_1102f5a7;
  }
  FArray::FArray((FArray *)&local_34);
  local_8 = 1;
  iVar7 = 0;
  do {
    FString::Printf((ushort *)local_58);
    local_8._0_1_ = 2;
    FString::FString(local_4c);
    local_8._0_1_ = 3;
    iVar2 = **(int **)GConfig_exref;
    FString::operator*(local_58);
    iVar2 = (**(code **)(iVar2 + 0xc))();
    if (iVar2 == 0) {
      local_8._0_1_ = 2;
      FString::~FString(local_4c);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_58);
      break;
    }
    FArray::FArray((FArray *)&local_40);
    local_8._0_1_ = 5;
    iVar2 = FString::ParseIntoArray(local_4c,(ushort *)&DAT_110713e0,(TArray<FString> *)&local_40);
    if (iVar2 == 2) {
      pFVar3 = (FUDNHelpTopic *)(**(code **)**(undefined4 **)GMalloc_exref)();
      local_8._0_1_ = 6;
      local_18 = pFVar3;
      if (pFVar3 == (FUDNHelpTopic *)0x0) {
        uVar4 = 0;
      }
      else {
        local_20 = &stack0xffffff60;
        FString::FString((FString *)&stack0xffffff60,local_40 + 0xc);
        local_8._0_1_ = 7;
        local_28.y = (LONG)&stack0xffffff54;
        FString::FString((FString *)&stack0xffffff54,local_40);
        local_8._0_1_ = 6;
        uVar4 = FUDNHelpTopic::FUDNHelpTopic(pFVar3);
      }
      local_8._0_1_ = 5;
      iVar2 = FArray::Add((FArray *)&local_34,1,4);
      *(undefined4 *)(local_34 + iVar2 * 4) = uVar4;
    }
    local_8._0_1_ = 9;
    thunk_FUN_1102afa0(&local_40,0,local_3c);
    local_8._0_1_ = 3;
    FArray::~FArray((FArray *)&local_40);
    local_8._0_1_ = 2;
    FString::~FString(local_4c);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_58);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x32);
  if (local_30 == 0) {
    appMsgf(0,(ushort *)u_Help_topic_not_found___d___1107135c);
  }
  else {
    iVar7 = 0;
    if (local_30 < 2) {
LAB_1102f4ca:
      FString::operator*((FString *)(*(int *)(local_34 + iVar7 * 4) + 0xc));
      FString::Printf((ushort *)local_58);
      local_8._0_1_ = 10;
      nShowCmd = 1;
      lpDirectory = (LPCWSTR)0x0;
      lpParameters = (LPCWSTR)0x0;
      lpFile = (LPCWSTR)FString::operator*(local_58);
      ShellExecuteW((HWND)0x0,u_open_11068fec,lpFile,lpParameters,lpDirectory,nShowCmd);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_58);
    }
    else {
      local_18 = (FUDNHelpTopic *)CreatePopupMenu();
      iVar7 = 0;
      local_88.cbSize = 0x30;
      local_88.fMask = 0x12;
      local_88.fType = 0;
      if (0 < local_30) {
        do {
          puVar5 = FString::operator*(*(FString **)(local_34 + iVar7 * 4));
          iVar2 = winGetSizeANSI(puVar5);
          if (iVar2 == 0) {
            local_14 = (char *)0x0;
          }
          else {
            puVar5 = FString::operator*(*(FString **)(local_34 + iVar7 * 4));
            winGetSizeANSI(puVar5);
            local_14 = &stack0xffffff6c;
          }
          puVar1 = (undefined4 *)(local_34 + iVar7 * 4);
          puVar5 = FString::operator*(*(FString **)(local_34 + iVar7 * 4));
          iVar2 = winGetSizeANSI(puVar5);
          puVar5 = FString::operator*((FString *)*puVar1);
          local_88.dwTypeData = winToANSI(local_14,puVar5,iVar2);
          local_88.wID = iVar7 + 0x4c2c;
          InsertMenuItemA((HMENU)local_18,99999,0,&local_88);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_30);
      }
      pFVar3 = local_18;
      GetCursorPos(&local_28);
      BVar6 = TrackPopupMenu((HMENU)pFVar3,0x182,local_28.x,local_28.y,0,(HWND)local_1c[1],
                             (RECT *)0x0);
      DestroyMenu((HMENU)pFVar3);
      iVar7 = BVar6 + -0x4c2c;
      if (-1 < iVar7) goto LAB_1102f4ca;
    }
    iVar7 = 0;
    if (0 < local_30) {
      do {
        this = *(FString **)(local_34 + iVar7 * 4);
        local_28.y = (LONG)this;
        if (this != (FString *)0x0) {
          local_8._0_1_ = 0xb;
          FString::~FString(this + 0xc);
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(this);
          (**(code **)(**(int **)GMalloc_exref + 8))();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_30);
    }
    FArray::Empty((FArray *)&local_34,4,0);
  }
  local_8 = 0xffffffff;
  thunk_FUN_1102e5a0((FArray *)&local_34);
  param_1 = local_1c;
LAB_1102f5a7:
  ReleaseCapture();
  (**(code **)(*param_1 + 8))();
  ExceptionList = local_10;
  return;
}


// ==== 1102f6d0 FUN_1102f6d0

void __fastcall FUN_1102f6d0(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062580;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GLogHook_exref = 0;
  WWindow::OnDestroy(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1102f720 Catch@1102f720

void Catch_1102f720(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102f734 Catch@1102f734

void Catch_1102f734(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__OnDestroy_11071430);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102f780 FUN_1102f780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1102f780(WSplitter *param_1)

{
  float fVar1;
  HWND pHVar2;
  int *piVar3;
  float10 fVar4;
  int local_34;
  int local_30;
  tagPOINT local_2c [2];
  FPoint local_1c [4];
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11062590;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  pHVar2 = GetCapture();
  if (pHVar2 == *(HWND *)(param_1 + 4)) {
    WWindow::GetClientRect(*(WWindow **)(param_1 + 0x14));
    GetCursorPos(local_2c);
    piVar3 = (int *)WWindow::ScreenToClient(*(WWindow **)(param_1 + 0x14),local_1c);
    local_2c[0].x = *piVar3;
    local_2c[0].y = piVar3[1];
    if (*(int *)(param_1 + 0x3c) == 0) {
      local_18 = (float)(local_30 + -6);
      fVar1 = (float)local_2c[0].y / (float)(int)local_18;
    }
    else {
      local_18 = (float)(local_34 + -6);
      fVar1 = (float)local_2c[0].x / (float)(int)local_18;
    }
    *(float *)(param_1 + 0x40) = fVar1 * (float)_DAT_1106f610;
    fVar4 = thunk_FUN_11026290(*(float *)(param_1 + 0x40),0.0);
    local_18 = (float)fVar4;
    *(float *)(param_1 + 0x40) = local_18;
    fVar4 = thunk_FUN_110262c0(local_18,_DAT_11070308);
    *(float *)(param_1 + 0x40) = (float)fVar4;
    WSplitter::PositionSplitter(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102f871 Catch@1102f871

void Catch_1102f871(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1102f885 Catch@1102f885

void Catch_1102f885(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitter__OnMouseMove_11071458);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102f8f0 FUN_1102f8f0

void __fastcall FUN_1102f8f0(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110625a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnDestroy(param_1);
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 4))(1);
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))(1);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1102f967 Catch@1102f967

void Catch_1102f967(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1102f97b Catch@1102f97b

void Catch_1102f97b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitterContainer__OnDestroy_11071490);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1102f9d0 FUN_1102f9d0

undefined4 * __thiscall FUN_1102f9d0(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110625bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = WWindow::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)((int)this + 0xe) = *(undefined2 *)(param_1 + 0xe);
  *(uint *)((int)this + 0x10) =
       *(uint *)((int)this + 0x10) ^ (*(uint *)((int)this + 0x10) ^ *(uint *)(param_1 + 0x10)) & 1;
  *(uint *)((int)this + 0x10) =
       (*(uint *)(param_1 + 0x10) ^ *(uint *)((int)this + 0x10)) & 2 ^ *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_1102a8a0((void *)((int)this + 0x20),(int *)(param_1 + 0x20));
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  ExceptionList = local_c;
  return this;
}


// ==== 1102fac0 FUN_1102fac0

int __thiscall FUN_1102fac0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)((int)this + 0xe) = *(undefined2 *)(param_1 + 0xe);
  *(uint *)((int)this + 0x10) =
       *(uint *)((int)this + 0x10) ^ (*(uint *)((int)this + 0x10) ^ *(uint *)(param_1 + 0x10)) & 1;
  *(uint *)((int)this + 0x10) =
       (*(uint *)(param_1 + 0x10) ^ *(uint *)((int)this + 0x10)) & 2 ^ *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_1102e6d0((void *)((int)this + 0x20),(FArray *)(param_1 + 0x20));
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return (int)this;
}


// ==== 1102fb60 FUN_1102fb60

void __fastcall FUN_1102fb60(WWindow *param_1)

{
  WWindow *pWStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  pWStack_c = param_1;
  FName::FName((FName *)&pWStack_c,0);
  WWindow::WWindow(param_1);
  return;
}


// ==== 1102fb80 FUN_1102fb80

WWindow * __thiscall FUN_1102fb80(void *this,byte param_1)

{
  WWindow::~WWindow(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1102fbb0 FUN_1102fbb0

WWindow * __fastcall FUN_1102fbb0(WWindow *param_1)

{
  WWindow *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110625d8;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = param_1;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow(param_1);
  *(undefined ***)param_1 = WControl::vftable;
  ExceptionList = param_1;
  return param_1;
}


// ==== 1102fc30 FUN_1102fc30

WWindow * __thiscall FUN_1102fc30(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110625f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WControl::vftable;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return this;
}


// ==== 1102fca0 FUN_1102fca0

WWindow * __thiscall FUN_1102fca0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 1102fcd0 FUN_1102fcd0

WControl * __thiscall FUN_1102fcd0(void *this,byte param_1)

{
  WControl::~WControl(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1102fd00 FUN_1102fd00

WControl * __fastcall FUN_1102fd00(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WTabControl::vftable;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 1102fd70 FUN_1102fd70

WControl * __thiscall FUN_1102fd70(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WTabControl::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return this;
}


// ==== 1102fdf0 FUN_1102fdf0

WWindow * __thiscall FUN_1102fdf0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 1102fe20 FUN_1102fe20

WTabControl * __thiscall FUN_1102fe20(void *this,byte param_1)

{
  WTabControl::~WTabControl(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1102fe50 FUN_1102fe50

WControl * __fastcall FUN_1102fe50(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WLabel::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 1102feb0 FUN_1102feb0

WControl * __thiscall FUN_1102feb0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WLabel::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1102ff20 FUN_1102ff20

WWindow * __thiscall FUN_1102ff20(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 1102ff50 FUN_1102ff50

WLabel * __thiscall FUN_1102ff50(void *this,byte param_1)

{
  WLabel::~WLabel(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1102ff80 FUN_1102ff80

void __fastcall FUN_1102ff80(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WGroupBox::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1102fff0 FUN_1102fff0

WControl * __fastcall FUN_1102fff0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110626b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WGroupBox::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11030050 FUN_11030050

WControl * __thiscall
FUN_11030050(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110626d8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WGroupBox::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WGroupBox::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 110300d0 FUN_110300d0

WControl * __thiscall FUN_110300d0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110626f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WGroupBox::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11030140 FUN_11030140

WWindow * __thiscall FUN_11030140(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11030170 FUN_11030170

WGroupBox * __thiscall FUN_11030170(void *this,byte param_1)

{
  WGroupBox::~WGroupBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110301a0 FUN_110301a0

WGroupBox * __thiscall FUN_110301a0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x40,*(int *)((int)this + -4),WGroupBox::~WGroupBox);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WGroupBox *)((int)this + -4));
    }
    return (WGroupBox *)((int)this + -4);
  }
  WGroupBox::~WGroupBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11030220 FUN_11030220

void __fastcall FUN_11030220(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11062723;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WPropertySheet::vftable;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_1102e870((FArray *)(param_1 + 0x44));
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110302a0 FUN_110302a0

WControl * __fastcall FUN_110302a0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1106275c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = WPropertySheet::vftable;
  FArray::FArray((FArray *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11030330 FUN_11030330

WControl * __thiscall
FUN_11030330(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1106278c;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WPropertySheet::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = WPropertySheet::vftable;
  FArray::FArray((FArray *)((int)this + 0x44));
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 110303e0 FUN_110303e0

WControl * __thiscall FUN_110303e0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110627b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WPropertySheet::vftable;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_1102aac0((void *)((int)this + 0x44),(int *)(param_1 + 0x44));
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  ExceptionList = local_c;
  return this;
}


// ==== 11030480 FUN_11030480

WWindow * __thiscall FUN_11030480(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_1102e930((void *)((int)this + 0x44),(FArray *)(param_1 + 0x44));
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}


// ==== 110304d0 FUN_110304d0

WPropertySheet * __thiscall FUN_110304d0(void *this,byte param_1)

{
  WPropertySheet::~WPropertySheet(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11030500 FUN_11030500

WPropertySheet * __thiscall FUN_11030500(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x5c,*(int *)((int)this + -4),WPropertySheet::~WPropertySheet);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WPropertySheet *)((int)this + -4));
    }
    return (WPropertySheet *)((int)this + -4);
  }
  WPropertySheet::~WPropertySheet(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11030580 FUN_11030580

void __fastcall FUN_11030580(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110627d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WCustomLabel::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WLabel::~WLabel((WLabel *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110305f0 FUN_110305f0

WControl * __fastcall FUN_110305f0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062800;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WLabel::vftable;
  *(undefined ***)param_1 = WCustomLabel::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11030660 FUN_11030660

WLabel * __thiscall
FUN_11030660(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062818;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WCustomLabel::SuperProc;
  }
  ExceptionList = &local_c;
  WLabel::WLabel(this,param_1,param_2,param_3);
  *(undefined ***)this = WCustomLabel::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 110306e0 FUN_110306e0

WLabel * __thiscall FUN_110306e0(void *this,WLabel *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WLabel::WLabel(this,param_1);
  *(undefined ***)this = WCustomLabel::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11030750 FUN_11030750

WWindow * __thiscall FUN_11030750(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11030780 FUN_11030780

WCustomLabel * __thiscall FUN_11030780(void *this,byte param_1)

{
  WCustomLabel::~WCustomLabel(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110307b0 FUN_110307b0

WCustomLabel * __thiscall FUN_110307b0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x40,*(int *)((int)this + -4),WCustomLabel::~WCustomLabel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WCustomLabel *)((int)this + -4));
    }
    return (WCustomLabel *)((int)this + -4);
  }
  WCustomLabel::~WCustomLabel(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11030830 FUN_11030830

WControl * __fastcall FUN_11030830(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WButton::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined ***)(param_1 + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined ***)(param_1 + 0x58) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined ***)(param_1 + 100) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined ***)(param_1 + 0x70) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined ***)(param_1 + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110308e0 FUN_110308e0

WControl * __thiscall FUN_110308e0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WButton::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined ***)((int)this + 100) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined ***)((int)this + 0x70) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined ***)((int)this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  ExceptionList = local_c;
  return this;
}


// ==== 11030a00 FUN_11030a00

WWindow * __thiscall FUN_11030a00(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  return this;
}


// ==== 11030ac0 FUN_11030ac0

WButton * __thiscall FUN_11030ac0(void *this,byte param_1)

{
  WButton::~WButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11030af0 FUN_11030af0

void __fastcall FUN_11030af0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WBitmapButton::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WButton::~WButton((WButton *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11030b60 FUN_11030b60

WButton * __fastcall FUN_11030b60(WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110628b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(param_1);
  *(undefined ***)param_1 = WBitmapButton::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11030bc0 FUN_11030bc0

WButton * __thiscall FUN_11030bc0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined ***pppuStack00000018;
  undefined **local_24 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110628d8;
  pvStack_c = ExceptionList;
  pppuStack00000018 = local_24;
  local_24[0] = FDelegate::vftable;
  ExceptionList = &pvStack_c;
  WButton::WButton(this,param_1,param_2);
  *(undefined ***)this = WBitmapButton::vftable;
  *(undefined4 *)((int)this + 200) = 0;
  ExceptionList = local_24[0];
  return this;
}


// ==== 11030c60 FUN_11030c60

WButton * __thiscall FUN_11030c60(void *this,WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110628f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(this,param_1);
  *(undefined ***)this = WBitmapButton::vftable;
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  ExceptionList = local_c;
  return this;
}


// ==== 11030da0 FUN_11030da0

WButton * __thiscall FUN_11030da0(void *this,WButton *param_1)

{
  WButton::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  return this;
}


// ==== 11030e90 FUN_11030e90

WBitmapButton * __thiscall FUN_11030e90(void *this,byte param_1)

{
  WBitmapButton::~WBitmapButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11030ec0 FUN_11030ec0

WBitmapButton * __thiscall FUN_11030ec0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0xcc,*(int *)((int)this + -4),WBitmapButton::~WBitmapButton);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WBitmapButton *)((int)this + -4));
    }
    return (WBitmapButton *)((int)this + -4);
  }
  WBitmapButton::~WBitmapButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11030f40 FUN_11030f40

void __fastcall FUN_11030f40(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WColorButton::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WButton::~WButton((WButton *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11030fb0 FUN_11030fb0

WButton * __fastcall FUN_11030fb0(WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(param_1);
  *(undefined ***)param_1 = WColorButton::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11031010 FUN_11031010

WButton * __thiscall FUN_11031010(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined ***pppuStack00000018;
  undefined **local_24 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062958;
  pvStack_c = ExceptionList;
  pppuStack00000018 = local_24;
  local_24[0] = FDelegate::vftable;
  ExceptionList = &pvStack_c;
  WButton::WButton(this,param_1,param_2);
  *(undefined ***)this = WColorButton::vftable;
  *(undefined4 *)((int)this + 0x9c) = 0xff;
  *(undefined4 *)((int)this + 0x98) = 0xff;
  *(undefined4 *)((int)this + 0x94) = 0xff;
  ExceptionList = local_24[0];
  return this;
}


// ==== 110310d0 FUN_110310d0

WButton * __thiscall FUN_110310d0(void *this,WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(this,param_1);
  *(undefined ***)this = WColorButton::vftable;
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  ExceptionList = local_c;
  return this;
}


// ==== 11031170 FUN_11031170

WButton * __thiscall FUN_11031170(void *this,WButton *param_1)

{
  WButton::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  return this;
}


// ==== 110311c0 FUN_110311c0

WColorButton * __thiscall FUN_110311c0(void *this,byte param_1)

{
  WColorButton::~WColorButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110311f0 FUN_110311f0

WColorButton * __thiscall FUN_110311f0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xa0,*(int *)((int)this + -4),WColorButton::~WColorButton);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WColorButton *)((int)this + -4));
    }
    return (WColorButton *)((int)this + -4);
  }
  WColorButton::~WColorButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11031270 FUN_11031270

WControl * __fastcall FUN_11031270(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WToolTip::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110312d0 FUN_110312d0

WControl * __thiscall FUN_110312d0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110629b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WToolTip::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11031340 FUN_11031340

WWindow * __thiscall FUN_11031340(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11031370 FUN_11031370

WToolTip * __thiscall FUN_11031370(void *this,byte param_1)

{
  WToolTip::~WToolTip(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110313a0 FUN_110313a0

void __fastcall FUN_110313a0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110629d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WThinScrollBar::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11031410 FUN_11031410

WWindow * __thiscall FUN_11031410(void *this,undefined4 param_1)

{
  HBRUSH__ *pHVar1;
  void *unaff_ESI;
  undefined4 unaff_retaddr;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110629f8;
  pvStack_c = ExceptionList;
  uStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_1c = this;
  FName::FName((FName *)&pvStack_1c,(ushort *)u_ThinScrollBar_11071b94,1);
  WWindow::WWindow(this);
  *(undefined ***)this = WThinScrollBar::vftable;
  *(undefined ***)((int)this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x50) = unaff_retaddr;
  pHVar1 = hBrushCyanLow;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(HBRUSH__ **)((int)this + 0x58) = pHVar1;
  *(undefined4 *)((int)this + 0x54) = 0;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 110314c0 FUN_110314c0

WWindow * __thiscall FUN_110314c0(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WThinScrollBar::vftable;
  *(undefined ***)((int)this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = local_c;
  return this;
}


// ==== 11031580 FUN_11031580

WWindow * __thiscall FUN_11031580(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return this;
}


// ==== 110315e0 FUN_110315e0

WThinScrollBar * __thiscall FUN_110315e0(void *this,byte param_1)

{
  WThinScrollBar::~WThinScrollBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11031610 FUN_11031610

WThinScrollBar * __thiscall FUN_11031610(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,100,*(int *)((int)this + -4),WThinScrollBar::~WThinScrollBar);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WThinScrollBar *)((int)this + -4));
    }
    return (WThinScrollBar *)((int)this + -4);
  }
  WThinScrollBar::~WThinScrollBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11031690 FUN_11031690

void __fastcall FUN_11031690(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WTimeScrollBar::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11031700 FUN_11031700

WWindow * __thiscall FUN_11031700(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  void *unaff_EBX;
  undefined4 unaff_retaddr;
  void *pvStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062a58;
  pvStack_c = ExceptionList;
  uStack_24 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_28 = this;
  FName::FName((FName *)&pvStack_28,(ushort *)u_TimeScrollBar_11071d04,1);
  WWindow::WWindow(this);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = WTimeScrollBar::vftable;
  *(undefined ***)((int)this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = unaff_retaddr;
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697a,0,0,0,0);
  *(HANDLE *)((int)this + 0x54) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmThumb_11071cf8,s____Inc_Window_h_1106aefc,0x487);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697b,0,0,0,0);
  *(HANDLE *)((int)this + 0x58) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmLeft_11071cec,s____Inc_Window_h_1106aefc,0x488);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697c,0,0,0,0);
  *(HANDLE *)((int)this + 0x5c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmBody_11071ce0,s____Inc_Window_h_1106aefc,0x489);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697d,0,0,0,0);
  *(HANDLE *)((int)this + 0x60) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmRight_11071cd4,s____Inc_Window_h_1106aefc,0x48a);
  }
  GetObjectA(*(HANDLE *)((int)this + 0x54),0x18,(LPVOID)((int)this + 0x6c));
  GetObjectA(*(HANDLE *)((int)this + 0x58),0x18,(LPVOID)((int)this + 0x84));
  GetObjectA(*(HANDLE *)((int)this + 0x5c),0x18,(LPVOID)((int)this + 0x9c));
  GetObjectA(*(HANDLE *)((int)this + 0x60),0x18,(LPVOID)((int)this + 0xb4));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  ExceptionList = unaff_EBX;
  return this;
}


// ==== 110318f0 FUN_110318f0

WWindow * __thiscall FUN_110318f0(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WTimeScrollBar::vftable;
  *(undefined ***)((int)this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  ExceptionList = local_c;
  return this;
}


// ==== 11031af0 FUN_11031af0

WWindow * __thiscall FUN_11031af0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  return this;
}


// ==== 11031ca0 FUN_11031ca0

WTimeScrollBar * __thiscall FUN_11031ca0(void *this,byte param_1)

{
  WTimeScrollBar::~WTimeScrollBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11031cd0 FUN_11031cd0

WTimeScrollBar * __thiscall FUN_11031cd0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0xcc,*(int *)((int)this + -4),WTimeScrollBar::~WTimeScrollBar);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WTimeScrollBar *)((int)this + -4));
    }
    return (WTimeScrollBar *)((int)this + -4);
  }
  WTimeScrollBar::~WTimeScrollBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11031d50 FUN_11031d50

void __fastcall FUN_11031d50(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11062aa4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WPictureButton::vftable;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(param_1 + 0x74));
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11031dd0 FUN_11031dd0

WWindow * __thiscall FUN_11031dd0(void *this,void *param_1)

{
  void *unaff_ESI;
  void *pvStack_20;
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062ad4;
  pvStack_c = ExceptionList;
  pvStack_1c = param_1;
  ExceptionList = &pvStack_c;
  pvStack_20 = this;
  FName::FName((FName *)&pvStack_20,(ushort *)u_PictureButton_11071e44,1);
  WWindow::WWindow(this);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = WPictureButton::vftable;
  FString::FString((FString *)((int)this + 0x74));
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11031e80 FUN_11031e80

WWindow * __thiscall FUN_11031e80(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062b04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WPictureButton::vftable;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::FString((FString *)((int)this + 0x74),(FString *)(param_1 + 0x74));
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  ExceptionList = local_c;
  return this;
}


// ==== 11031fb0 FUN_11031fb0

WWindow * __thiscall FUN_11031fb0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::operator=((FString *)((int)this + 0x74),(FString *)(param_1 + 0x74));
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  return this;
}


// ==== 11032080 FUN_11032080

WPictureButton * __thiscall FUN_11032080(void *this,byte param_1)

{
  WPictureButton::~WPictureButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110320b0 FUN_110320b0

WPictureButton * __thiscall FUN_110320b0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x90,*(int *)((int)this + -4),WPictureButton::~WPictureButton);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WPictureButton *)((int)this + -4));
    }
    return (WPictureButton *)((int)this + -4);
  }
  WPictureButton::~WPictureButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11032130 FUN_11032130

void __fastcall FUN_11032130(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WUDNWindow::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110321a0 FUN_110321a0

WWindow * __thiscall FUN_110321a0(void *this,undefined4 param_1)

{
  void *unaff_ESI;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062b48;
  pvStack_c = ExceptionList;
  uStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_1c = this;
  FName::FName((FName *)&pvStack_1c,(ushort *)&DAT_11071f84,1);
  WWindow::WWindow(this);
  *(undefined ***)this = WUDNWindow::vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11032220 FUN_11032220

WWindow * __thiscall FUN_11032220(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WUDNWindow::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11032290 FUN_11032290

WWindow * __thiscall FUN_11032290(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  return this;
}


// ==== 110322b0 FUN_110322b0

WUDNWindow * __thiscall FUN_110322b0(void *this,byte param_1)

{
  WUDNWindow::~WUDNWindow(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110322e0 FUN_110322e0

WUDNWindow * __thiscall FUN_110322e0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x3c,*(int *)((int)this + -4),WUDNWindow::~WUDNWindow);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WUDNWindow *)((int)this + -4));
    }
    return (WUDNWindow *)((int)this + -4);
  }
  WUDNWindow::~WUDNWindow(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11032360 FUN_11032360

void __fastcall FUN_11032360(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WCheckBox::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WButton::~WButton((WButton *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110323d0 FUN_110323d0

WButton * __fastcall FUN_110323d0(WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(param_1);
  *(undefined ***)param_1 = WCheckBox::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11032430 FUN_11032430

WButton * __thiscall
FUN_11032430(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062bc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton(this,param_1,param_2);
  *(undefined ***)this = WCheckBox::vftable;
  ExceptionList = param_4;
  return this;
}


// ==== 110324d0 FUN_110324d0

WButton * __thiscall FUN_110324d0(void *this,WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(this,param_1);
  *(undefined ***)this = WCheckBox::vftable;
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  ExceptionList = local_c;
  return this;
}


// ==== 11032550 FUN_11032550

WButton * __thiscall FUN_11032550(void *this,WButton *param_1)

{
  WButton::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return this;
}


// ==== 11032580 FUN_11032580

WCheckBox * __thiscall FUN_11032580(void *this,byte param_1)

{
  WCheckBox::~WCheckBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110325b0 FUN_110325b0

WCheckBox * __thiscall FUN_110325b0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x98,*(int *)((int)this + -4),WCheckBox::~WCheckBox);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WCheckBox *)((int)this + -4));
    }
    return (WCheckBox *)((int)this + -4);
  }
  WCheckBox::~WCheckBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11032630 FUN_11032630

void __fastcall FUN_11032630(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WScrollBar::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110326a0 FUN_110326a0

WControl * __fastcall FUN_110326a0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WScrollBar::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11032700 FUN_11032700

WControl * __thiscall
FUN_11032700(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062c48;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WScrollBar::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WScrollBar::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11032780 FUN_11032780

WControl * __thiscall FUN_11032780(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WScrollBar::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 110327f0 FUN_110327f0

WWindow * __thiscall FUN_110327f0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11032820 FUN_11032820

WScrollBar * __thiscall FUN_11032820(void *this,byte param_1)

{
  WScrollBar::~WScrollBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11032850 FUN_11032850

WScrollBar * __thiscall FUN_11032850(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x40,*(int *)((int)this + -4),WScrollBar::~WScrollBar);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WScrollBar *)((int)this + -4));
    }
    return (WScrollBar *)((int)this + -4);
  }
  WScrollBar::~WScrollBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110328d0 FUN_110328d0

void __fastcall FUN_110328d0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WTreeView::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11032940 FUN_11032940

WControl * __fastcall FUN_11032940(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062ca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WTreeView::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined ***)(param_1 + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined ***)(param_1 + 0x58) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110329d0 FUN_110329d0

WControl * __thiscall
FUN_110329d0(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062cc8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WTreeView::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WTreeView::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 11032a80 FUN_11032a80

WControl * __thiscall FUN_11032a80(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WTreeView::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = local_c;
  return this;
}


// ==== 11032b30 FUN_11032b30

WWindow * __thiscall FUN_11032b30(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return this;
}


// ==== 11032b80 FUN_11032b80

WTreeView * __thiscall FUN_11032b80(void *this,byte param_1)

{
  WTreeView::~WTreeView(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11032bb0 FUN_11032bb0

WTreeView * __thiscall FUN_11032bb0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,100,*(int *)((int)this + -4),WTreeView::~WTreeView);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WTreeView *)((int)this + -4));
    }
    return (WTreeView *)((int)this + -4);
  }
  WTreeView::~WTreeView(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11032c30 FUN_11032c30

WButton * __fastcall FUN_11032c30(WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(param_1);
  *(undefined ***)param_1 = WCoolButton::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11032c90 FUN_11032c90

WButton * __thiscall FUN_11032c90(void *this,WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(this,param_1);
  *(undefined ***)this = WCoolButton::vftable;
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  ExceptionList = local_c;
  return this;
}


// ==== 11032d20 FUN_11032d20

WButton * __thiscall FUN_11032d20(void *this,WButton *param_1)

{
  WButton::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  return this;
}


// ==== 11032d60 FUN_11032d60

WCoolButton * __thiscall FUN_11032d60(void *this,byte param_1)

{
  WCoolButton::~WCoolButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11032d90 FUN_11032d90

void __fastcall FUN_11032d90(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11062d57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WUrlButton::vftable;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(param_1 + 0x9c));
  local_4 = 0xffffffff;
  WCoolButton::~WCoolButton((WCoolButton *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11032e10 FUN_11032e10

WButton * __fastcall FUN_11032e10(WButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062d8f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WButton::WButton(param_1);
  *(undefined ***)param_1 = WCoolButton::vftable;
  local_4 = 1;
  *(undefined ***)param_1 = WUrlButton::vftable;
  FString::FString((FString *)(param_1 + 0x9c));
  ExceptionList = local_c;
  return param_1;
}


// ==== 11032e90 FUN_11032e90

WCoolButton * __thiscall
FUN_11032e90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **local_28;
  void *local_24;
  code *local_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062dc7;
  pvStack_c = ExceptionList;
  uStack_1c = 5;
  local_28 = FDelegate::vftable;
  local_20 = WUrlButton::OnClick;
  ExceptionList = &pvStack_c;
  local_24 = this;
  WCoolButton::WCoolButton(this,param_1,param_3);
  uStack_1c = 0;
  *(undefined ***)this = WUrlButton::vftable;
  FString::FString((FString *)((int)this + 0x9c),(ushort *)&local_28);
  *(undefined4 *)((int)this + 0x98) = 0x19;
  ExceptionList = local_24;
  return this;
}


// ==== 11032f50 FUN_11032f50

WCoolButton * __thiscall FUN_11032f50(void *this,WCoolButton *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062df7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WCoolButton::WCoolButton(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WUrlButton::vftable;
  FString::FString((FString *)((int)this + 0x9c),(FString *)(param_1 + 0x9c));
  ExceptionList = local_c;
  return this;
}


// ==== 11032fd0 FUN_11032fd0

WButton * __thiscall FUN_11032fd0(void *this,WButton *param_1)

{
  WButton::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  FString::operator=((FString *)((int)this + 0x9c),(FString *)(param_1 + 0x9c));
  return this;
}


// ==== 11033020 FUN_11033020

WUrlButton * __thiscall FUN_11033020(void *this,byte param_1)

{
  WUrlButton::~WUrlButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11033050 FUN_11033050

WUrlButton * __thiscall FUN_11033050(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xa8,*(int *)((int)this + -4),WUrlButton::~WUrlButton);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WUrlButton *)((int)this + -4));
    }
    return (WUrlButton *)((int)this + -4);
  }
  WUrlButton::~WUrlButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110330d0 FUN_110330d0

WControl * __fastcall FUN_110330d0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WComboBox::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined ***)(param_1 + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined ***)(param_1 + 0x58) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined ***)(param_1 + 100) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined ***)(param_1 + 0x70) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined ***)(param_1 + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined ***)(param_1 + 0x88) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined ***)(param_1 + 0x94) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined ***)(param_1 + 0xa0) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined ***)(param_1 + 0xac) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110331e0 FUN_110331e0

WControl * __thiscall FUN_110331e0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WComboBox::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined ***)((int)this + 100) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined ***)((int)this + 0x70) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined ***)((int)this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined ***)((int)this + 0x88) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined ***)((int)this + 0x94) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined ***)((int)this + 0xa0) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined ***)((int)this + 0xac) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  ExceptionList = local_c;
  return this;
}


// ==== 11033370 FUN_11033370

WWindow * __thiscall FUN_11033370(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  return this;
}


// ==== 11033480 FUN_11033480

WComboBox * __thiscall FUN_11033480(void *this,byte param_1)

{
  WComboBox::~WComboBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110334b0 FUN_110334b0

WControl * __fastcall FUN_110334b0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WEdit::vftable;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined ***)(param_1 + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11033530 FUN_11033530

WControl * __thiscall FUN_11033530(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WEdit::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  ExceptionList = local_c;
  return this;
}


// ==== 110335d0 FUN_110335d0

WWindow * __thiscall FUN_110335d0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return this;
}


// ==== 11033610 FUN_11033610

WEdit * __thiscall FUN_11033610(void *this,byte param_1)

{
  WEdit::~WEdit(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11033640 FUN_11033640

void __fastcall FUN_11033640(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WRichEdit::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110336b0 FUN_110336b0

WControl * __fastcall FUN_110336b0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WRichEdit::vftable;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11033720 FUN_11033720

WControl * __thiscall
FUN_11033720(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062ed8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WRichEdit::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WRichEdit::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 110337c0 FUN_110337c0

WControl * __thiscall FUN_110337c0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WRichEdit::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return this;
}


// ==== 11033840 FUN_11033840

WWindow * __thiscall FUN_11033840(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 11033870 FUN_11033870

WRichEdit * __thiscall FUN_11033870(void *this,byte param_1)

{
  WRichEdit::~WRichEdit(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110338a0 FUN_110338a0

WRichEdit * __thiscall FUN_110338a0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x4c,*(int *)((int)this + -4),WRichEdit::~WRichEdit);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WRichEdit *)((int)this + -4));
    }
    return (WRichEdit *)((int)this + -4);
  }
  WRichEdit::~WRichEdit(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11033920 FUN_11033920

void __fastcall FUN_11033920(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WTerminalBase::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11033990 FUN_11033990

WWindow * __fastcall FUN_11033990(WWindow *param_1)

{
  WWindow *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062f38;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = param_1;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow(param_1);
  *(undefined ***)param_1 = WTerminalBase::vftable;
  ExceptionList = param_1;
  return param_1;
}


// ==== 11033a10 FUN_11033a10

WWindow * __thiscall FUN_11033a10(void *this,undefined4 param_1,undefined4 param_2)

{
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow(this,param_1,param_2);
  *(undefined ***)this = WTerminalBase::vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11033a80 FUN_11033a80

WWindow * __thiscall FUN_11033a80(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WTerminalBase::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11033af0 FUN_11033af0

WWindow * __thiscall FUN_11033af0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  return this;
}


// ==== 11033b10 FUN_11033b10

WTerminalBase * __thiscall FUN_11033b10(void *this,byte param_1)

{
  WTerminalBase::~WTerminalBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11033b40 FUN_11033b40

WTerminalBase * __thiscall FUN_11033b40(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x3c,*(int *)((int)this + -4),WTerminalBase::~WTerminalBase);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WTerminalBase *)((int)this + -4));
    }
    return (WTerminalBase *)((int)this + -4);
  }
  WTerminalBase::~WTerminalBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11033bc0 FUN_11033bc0

void __fastcall FUN_11033bc0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11062f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WEditTerminal::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WEdit::~WEdit((WEdit *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11033c30 FUN_11033c30

WControl * __thiscall FUN_11033c30(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062fc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,0,WEdit::SuperProc);
  *(undefined ***)this = WEdit::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined ***)this = WEditTerminal::vftable;
  *(WWindow **)((int)this + 0x58) = param_1;
  ExceptionList = local_c;
  return this;
}


// ==== 11033ce0 FUN_11033ce0

WEdit * __thiscall FUN_11033ce0(void *this,WEdit *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11062fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WEdit::WEdit(this,param_1);
  *(undefined ***)this = WEditTerminal::vftable;
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  ExceptionList = local_c;
  return this;
}


// ==== 11033d50 FUN_11033d50

WWindow * __thiscall FUN_11033d50(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}


// ==== 11033da0 FUN_11033da0

void __fastcall FUN_11033da0(WEditTerminal *param_1)

{
  WEditTerminal::WEditTerminal(param_1,(WTerminalBase *)0x0);
  return;
}


// ==== 11033db0 FUN_11033db0

WEditTerminal * __thiscall FUN_11033db0(void *this,byte param_1)

{
  WEditTerminal::~WEditTerminal(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11033de0 FUN_11033de0

WEditTerminal * __thiscall FUN_11033de0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x5c,*(int *)((int)this + -4),WEditTerminal::~WEditTerminal);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WEditTerminal *)((int)this + -4));
    }
    return (WEditTerminal *)((int)this + -4);
  }
  WEditTerminal::~WEditTerminal(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11033e60 FUN_11033e60

void __fastcall FUN_11033e60(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11063003;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WTerminal::vftable_for_WTerminalBase_;
  *(undefined ***)(param_1 + 0x3c) = WTerminal::vftable_for_FOutputDevice_;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  WEditTerminal::~WEditTerminal((WEditTerminal *)(param_1 + 0x40));
  local_4 = 0xffffffff;
  WTerminalBase::~WTerminalBase((WTerminalBase *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11033ee0 FUN_11033ee0

WTerminalBase * __fastcall FUN_11033ee0(WTerminalBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063033;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WTerminalBase::WTerminalBase(param_1);
  local_4 = 0;
  FOutputDevice::FOutputDevice((FOutputDevice *)(param_1 + 0x3c));
  *(undefined ***)param_1 = WTerminal::vftable_for_WTerminalBase_;
  *(undefined ***)(param_1 + 0x3c) = WTerminal::vftable_for_FOutputDevice_;
  WEditTerminal::WEditTerminal((WEditTerminal *)(param_1 + 0x40),(WTerminalBase *)0x0);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11033f60 FUN_11033f60

WTerminalBase * __thiscall FUN_11033f60(void *this,undefined4 param_1,undefined4 param_2)

{
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063063;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WTerminalBase::WTerminalBase(this,param_1,param_2);
  pvStack_c = (void *)0x0;
  FOutputDevice::FOutputDevice((FOutputDevice *)((int)this + 0x3c));
  *(undefined ***)this = WTerminal::vftable_for_WTerminalBase_;
  *(undefined ***)((int)this + 0x3c) = WTerminal::vftable_for_FOutputDevice_;
  WEditTerminal::WEditTerminal((WEditTerminal *)((int)this + 0x40),this);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0x100;
  *(undefined4 *)((int)this + 0xa4) = 0x40;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  appStrcpy((ushort *)((int)this + 0xa8),(ushort *)&DAT_11070f40);
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11034050 FUN_11034050

WTerminalBase * __thiscall FUN_11034050(void *this,WTerminalBase *param_1)

{
  FOutputDevice *pFVar1;
  int iVar2;
  WTerminalBase *pWVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063093;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WTerminalBase::WTerminalBase(this,param_1);
  pFVar1 = (FOutputDevice *)0x0;
  local_4 = 0;
  if (param_1 != (WTerminalBase *)0x0) {
    pFVar1 = (FOutputDevice *)(param_1 + 0x3c);
  }
  FOutputDevice::FOutputDevice((FOutputDevice *)((int)this + 0x3c),pFVar1);
  *(undefined ***)this = WTerminal::vftable_for_WTerminalBase_;
  *(undefined ***)((int)this + 0x3c) = WTerminal::vftable_for_FOutputDevice_;
  WEditTerminal::WEditTerminal
            ((WEditTerminal *)((int)this + 0x40),(WEditTerminal *)(param_1 + 0x40));
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pWVar3 = param_1 + 0xa8;
  puVar4 = (undefined4 *)((int)this + 0xa8);
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pWVar3;
    pWVar3 = pWVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  ExceptionList = local_c;
  return this;
}


// ==== 11034150 FUN_11034150

WWindow * __thiscall FUN_11034150(void *this,WWindow *param_1)

{
  FOutputDevice *pFVar1;
  undefined2 *puVar2;
  int iVar3;
  
  WWindow::operator=(this,param_1);
  if (param_1 == (WWindow *)0x0) {
    pFVar1 = (FOutputDevice *)0x0;
  }
  else {
    pFVar1 = (FOutputDevice *)(param_1 + 0x3c);
  }
  FOutputDevice::operator=((FOutputDevice *)((int)this + 0x3c),pFVar1);
  WWindow::operator=((WWindow *)((int)this + 0x40),param_1 + 0x40);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  puVar2 = (undefined2 *)((int)this + 0xa8);
  iVar3 = 0x100;
  do {
    *puVar2 = *(undefined2 *)(((int)param_1 - (int)this) + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  return this;
}


// ==== 11034230 FUN_11034230

WTerminal * __thiscall FUN_11034230(void *this,byte param_1)

{
  WTerminal::~WTerminal(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11034260 FUN_11034260

WTerminal * __thiscall FUN_11034260(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x2ac,*(int *)((int)this + -4),WTerminal::~WTerminal);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WTerminal *)((int)this + -4));
    }
    return (WTerminal *)((int)this + -4);
  }
  WTerminal::~WTerminal(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110342e0 FUN_110342e0

void __fastcall FUN_110342e0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_110630c7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WLog::vftable_for_WTerminalBase_;
  *(undefined ***)(param_1 + 0x3c) = WLog::vftable_for_FOutputDevice_;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(param_1 + 0x2b4));
  local_4 = 0xffffffff;
  WTerminal::~WTerminal((WTerminal *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11034360 FUN_11034360

WTerminal * __fastcall FUN_11034360(WTerminal *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110630f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WTerminal::WTerminal(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = WLog::vftable_for_WTerminalBase_;
  *(undefined ***)(param_1 + 0x3c) = WLog::vftable_for_FOutputDevice_;
  FString::FString((FString *)(param_1 + 0x2b4));
  ExceptionList = local_c;
  return param_1;
}


// ==== 110343e0 FUN_110343e0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

WTerminal * __thiscall
FUN_110343e0(void *this,ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UINT UVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_11063127;
  local_10 = ExceptionList;
  uStack_24 = param_4;
  uStack_28 = param_3;
  ExceptionList = &local_10;
  WTerminal::WTerminal(this);
  pcVar3 = (char *)0x0;
  local_8 = 0;
  *(undefined ***)this = WLog::vftable_for_WTerminalBase_;
  *(undefined ***)((int)this + 0x3c) = WLog::vftable_for_FOutputDevice_;
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar2 = winGetSizeANSI((ushort *)u_UnrealNidMessage_110729ec);
    if (iVar2 != 0) {
      winGetSizeANSI((ushort *)u_UnrealNidMessage_110729ec);
      pcVar3 = (char *)&uStack_28;
    }
    iVar2 = winGetSizeANSI((ushort *)u_UnrealNidMessage_110729ec);
    pcVar3 = winToANSI(pcVar3,(ushort *)u_UnrealNidMessage_110729ec,iVar2);
    UVar1 = RegisterWindowMessageA(pcVar3);
  }
  else {
    UVar1 = RegisterWindowMessageW(u_UnrealNidMessage_110729ec);
  }
  *(UINT *)((int)this + 0x2ac) = UVar1;
  *(undefined4 *)((int)this + 0x2b0) = param_2;
  FString::FString((FString *)((int)this + 0x2b4),param_1);
  ExceptionList = local_10;
  return this;
}


// ==== 11034500 FUN_11034500

WTerminal * __thiscall FUN_11034500(void *this,WTerminal *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063157;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WTerminal::WTerminal(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WLog::vftable_for_WTerminalBase_;
  *(undefined ***)((int)this + 0x3c) = WLog::vftable_for_FOutputDevice_;
  *(undefined4 *)((int)this + 0x2ac) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined4 *)((int)this + 0x2b0) = *(undefined4 *)(param_1 + 0x2b0);
  FString::FString((FString *)((int)this + 0x2b4),(FString *)(param_1 + 0x2b4));
  ExceptionList = local_c;
  return this;
}


// ==== 110345b0 FUN_110345b0

WLog * __thiscall FUN_110345b0(void *this,byte param_1)

{
  WLog::~WLog(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110345e0 FUN_110345e0

WLog * __thiscall FUN_110345e0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x2c0,*(int *)((int)this + -4),WLog::~WLog);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WLog *)((int)this + -4));
    }
    return (WLog *)((int)this + -4);
  }
  WLog::~WLog(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11034660 FUN_11034660

WWindow * __fastcall FUN_11034660(WWindow *param_1)

{
  WWindow *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063178;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = param_1;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow(param_1);
  *(undefined ***)param_1 = WDialog::vftable;
  ExceptionList = param_1;
  return param_1;
}


// ==== 110346e0 FUN_110346e0

WWindow * __thiscall
FUN_110346e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *unaff_ESI;
  undefined2 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063198;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow(this,param_1,param_3);
  *(undefined ***)this = WDialog::vftable;
  *(undefined2 *)((int)this + 0xc) = unaff_retaddr;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11034760 FUN_11034760

void __fastcall FUN_11034760(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110631b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110347b0 FUN_110347b0

WWindow * __thiscall FUN_110347b0(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110631d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WDialog::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11034820 FUN_11034820

WWindow * __thiscall FUN_11034820(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  return this;
}


// ==== 11034840 FUN_11034840

WWindow * __thiscall FUN_11034840(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110631f8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  WWindow::~WWindow(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 110348b0 FUN_110348b0

WWindow * __thiscall FUN_110348b0(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063218;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(this,0x3c,*(int *)((int)this + -4),WDialog::~WDialog);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WWindow *)((int)this + -4));
    }
    ExceptionList = local_c;
    return (WWindow *)((int)this + -4);
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  WWindow::~WWindow(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 11034980 FUN_11034980

void __fastcall FUN_11034980(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_11063293;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WCrashBoxDialog::vftable;
  local_4 = 6;
  WWindow::MaybeDestroy(param_1);
  local_4._0_1_ = 5;
  FString::~FString((FString *)(param_1 + 0x274));
  local_4._0_1_ = 4;
  FString::~FString((FString *)(param_1 + 0x268));
  local_4._0_1_ = 3;
  WCoolButton::~WCoolButton((WCoolButton *)(param_1 + 0x1cc));
  local_4._0_1_ = 2;
  WCoolButton::~WCoolButton((WCoolButton *)(param_1 + 0x130));
  local_4._0_1_ = 1;
  WCoolButton::~WCoolButton((WCoolButton *)(param_1 + 0x94));
  local_4 = (uint)local_4._1_3_ << 8;
  WEdit::~WEdit((WEdit *)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11034a60 FUN_11034a60

WDialog * __fastcall FUN_11034a60(WDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063333;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WDialog::WDialog(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = WCrashBoxDialog::vftable;
  WEdit::WEdit((WEdit *)(param_1 + 0x3c));
  local_4._0_1_ = 1;
  WButton::WButton((WButton *)(param_1 + 0x94));
  *(undefined ***)(param_1 + 0x94) = WCoolButton::vftable;
  local_4._0_1_ = 3;
  WButton::WButton((WButton *)(param_1 + 0x130));
  *(undefined ***)(param_1 + 0x130) = WCoolButton::vftable;
  local_4._0_1_ = 5;
  WButton::WButton((WButton *)(param_1 + 0x1cc));
  *(undefined ***)(param_1 + 0x1cc) = WCoolButton::vftable;
  local_4._0_1_ = 7;
  FString::FString((FString *)(param_1 + 0x268));
  local_4 = CONCAT31(local_4._1_3_,8);
  FString::FString((FString *)(param_1 + 0x274));
  ExceptionList = local_c;
  return param_1;
}


// ==== 11034b80 FUN_11034b80

WDialog * __fastcall FUN_11034b80(WDialog *param_1)

{
  undefined **ppuStack_6c;
  WDialog *pWStack_68;
  code *pcStack_64;
  void *pvStack_60;
  WDialog *pWStack_5c;
  undefined4 uStack_58;
  undefined **ppuStack_54;
  WDialog *pWStack_50;
  ushort *puStack_4c;
  undefined4 uStack_48;
  WDialog *pWStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  WDialog *pWStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110633c3;
  pvStack_c = ExceptionList;
  uStack_24 = 0;
  uStack_28 = 0x97;
  ExceptionList = &pvStack_c;
  pWStack_2c = param_1;
  FName::FName((FName *)&pWStack_2c,(ushort *)u_CrashBox_11072c64,1);
  WDialog::WDialog(param_1);
  *(undefined ***)param_1 = WCrashBoxDialog::vftable;
  ppuStack_3c = (undefined **)0x11034be8;
  WControl::WControl((WControl *)(param_1 + 0x3c),(WWindow *)param_1,1000,WEdit::SuperProc);
  *(undefined ***)(param_1 + 0x3c) = WEdit::vftable;
  *(undefined ***)(param_1 + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined ***)(param_1 + 0x88) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  uStack_40 = 1;
  ppuStack_3c = FDelegate::vftable;
  uStack_48 = 0x11034c3b;
  pWStack_44 = param_1;
  WCoolButton::WCoolButton((WCoolButton *)(param_1 + 0x94));
  uStack_28 = CONCAT31(uStack_28._1_3_,3);
  uStack_48 = 5;
  uStack_58 = 2;
  ppuStack_54 = FDelegate::vftable;
  puStack_4c = (ushort *)&LAB_11002225;
  pvStack_60 = (void *)0x11034c69;
  pWStack_5c = param_1;
  pWStack_50 = param_1;
  WCoolButton::WCoolButton((WCoolButton *)(param_1 + 0x130));
  uStack_40 = CONCAT31(uStack_40._1_3_,4);
  pvStack_60 = (void *)0x5;
  puStack_4c = (ushort *)&ppuStack_6c;
  ppuStack_6c = FDelegate::vftable;
  pcStack_64 = WCrashBoxDialog::OnBugReport;
  pWStack_68 = param_1;
  WCoolButton::WCoolButton((WCoolButton *)(param_1 + 0x1cc),param_1,3);
  uStack_58._0_1_ = 5;
  FString::FString((FString *)(param_1 + 0x268),(ushort *)pWStack_50);
  uStack_58 = CONCAT31(uStack_58._1_3_,6);
  FString::FString((FString *)(param_1 + 0x274),puStack_4c);
  ExceptionList = pvStack_60;
  return param_1;
}


// ==== 11034d40 FUN_11034d40

WDialog * __thiscall FUN_11034d40(void *this,WDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1106344b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WDialog::WDialog(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WCrashBoxDialog::vftable;
  WEdit::WEdit((WEdit *)((int)this + 0x3c),(WEdit *)(param_1 + 0x3c));
  local_4._0_1_ = 1;
  WCoolButton::WCoolButton((WCoolButton *)((int)this + 0x94),(WCoolButton *)(param_1 + 0x94));
  local_4._0_1_ = 2;
  WCoolButton::WCoolButton((WCoolButton *)((int)this + 0x130),(WCoolButton *)(param_1 + 0x130));
  local_4._0_1_ = 3;
  WCoolButton::WCoolButton((WCoolButton *)((int)this + 0x1cc),(WCoolButton *)(param_1 + 0x1cc));
  local_4._0_1_ = 4;
  FString::FString((FString *)((int)this + 0x268),(FString *)(param_1 + 0x268));
  local_4 = CONCAT31(local_4._1_3_,5);
  FString::FString((FString *)((int)this + 0x274),(FString *)(param_1 + 0x274));
  ExceptionList = local_c;
  return this;
}


// ==== 11034e50 FUN_11034e50

WWindow * __thiscall FUN_11034e50(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  WWindow::operator=((WWindow *)((int)this + 0x3c),param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  WButton::operator=((WButton *)((int)this + 0x94),(WButton *)(param_1 + 0x94));
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 300);
  WButton::operator=((WButton *)((int)this + 0x130),(WButton *)(param_1 + 0x130));
  *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  WButton::operator=((WButton *)((int)this + 0x1cc),(WButton *)(param_1 + 0x1cc));
  *(undefined4 *)((int)this + 0x260) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)((int)this + 0x264) = *(undefined4 *)(param_1 + 0x264);
  FString::operator=((FString *)((int)this + 0x268),(FString *)(param_1 + 0x268));
  FString::operator=((FString *)((int)this + 0x274),(FString *)(param_1 + 0x274));
  return this;
}


// ==== 11034f80 FUN_11034f80

WCrashBoxDialog * __thiscall FUN_11034f80(void *this,byte param_1)

{
  WCrashBoxDialog::~WCrashBoxDialog(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11034fb0 FUN_11034fb0

WCrashBoxDialog * __thiscall FUN_11034fb0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x280,*(int *)((int)this + -4),WCrashBoxDialog::~WCrashBoxDialog);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WCrashBoxDialog *)((int)this + -4));
    }
    return (WCrashBoxDialog *)((int)this + -4);
  }
  WCrashBoxDialog::~WCrashBoxDialog(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035030 FUN_11035030

WControl * __fastcall FUN_11035030(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WTrackBar::vftable;
  *(undefined ***)(param_1 + 0x44) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined ***)(param_1 + 0x50) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110350b0 FUN_110350b0

WControl * __thiscall FUN_110350b0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WTrackBar::vftable;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined ***)((int)this + 0x44) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined ***)((int)this + 0x50) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  ExceptionList = local_c;
  return this;
}


// ==== 11035150 FUN_11035150

WWindow * __thiscall FUN_11035150(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}


// ==== 110351a0 FUN_110351a0

WTrackBar * __thiscall FUN_110351a0(void *this,byte param_1)

{
  WTrackBar::~WTrackBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110351d0 FUN_110351d0

void __fastcall FUN_110351d0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110634b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WProgressBar::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11035240 FUN_11035240

WControl * __fastcall FUN_11035240(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110634d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WProgressBar::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110352a0 FUN_110352a0

WControl * __thiscall
FUN_110352a0(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110634f8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WProgressBar::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WProgressBar::vftable;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 11035330 FUN_11035330

WControl * __thiscall FUN_11035330(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WProgressBar::vftable;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return this;
}


// ==== 110353a0 FUN_110353a0

WWindow * __thiscall FUN_110353a0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 110353d0 FUN_110353d0

WProgressBar * __thiscall FUN_110353d0(void *this,byte param_1)

{
  WProgressBar::~WProgressBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035400 FUN_11035400

WProgressBar * __thiscall FUN_11035400(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x44,*(int *)((int)this + -4),WProgressBar::~WProgressBar);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WProgressBar *)((int)this + -4));
    }
    return (WProgressBar *)((int)this + -4);
  }
  WProgressBar::~WProgressBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035480 FUN_11035480

void __fastcall FUN_11035480(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WListBox::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110354f0 FUN_110354f0

WControl * __fastcall FUN_110354f0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WListBox::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined ***)(param_1 + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined ***)(param_1 + 0x58) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined ***)(param_1 + 100) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined ***)(param_1 + 0x70) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined ***)(param_1 + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110355a0 FUN_110355a0

WControl * __thiscall
FUN_110355a0(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063578;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WListBox::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = WListBox::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined ***)((int)this + 100) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined ***)((int)this + 0x70) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined ***)((int)this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  if (*(int *)((int)this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x7eb);
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 110356a0 FUN_110356a0

WControl * __thiscall FUN_110356a0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WListBox::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)((int)this + 0x58) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined ***)((int)this + 100) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined ***)((int)this + 0x70) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined ***)((int)this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  ExceptionList = local_c;
  return this;
}


// ==== 110357a0 FUN_110357a0

WWindow * __thiscall FUN_110357a0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  return this;
}


// ==== 11035840 FUN_11035840

WListBox * __thiscall FUN_11035840(void *this,byte param_1)

{
  WListBox::~WListBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035870 FUN_11035870

WListBox * __thiscall FUN_11035870(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x8c,*(int *)((int)this + -4),WListBox::~WListBox);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WListBox *)((int)this + -4));
    }
    return (WListBox *)((int)this + -4);
  }
  WListBox::~WListBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110358f0 FUN_110358f0

void __fastcall FUN_110358f0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110635b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WCheckListBox::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WListBox::~WListBox((WListBox *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11035960 FUN_11035960

WListBox * __fastcall FUN_11035960(WListBox *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110635d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WListBox::WListBox(param_1);
  *(undefined ***)param_1 = WCheckListBox::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110359c0 FUN_110359c0

WListBox * __thiscall FUN_110359c0(void *this,WWindow *param_1,int param_2)

{
  HANDLE pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110635f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WListBox::WListBox(this,param_1,param_2,(_func_long_HWND___ptr_uint_uint_long *)0x0);
  local_4 = 0;
  *(undefined ***)this = WCheckListBox::vftable;
  if (*(int *)((int)this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x824);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x6978,0,0,0,0x1000);
  *(HANDLE *)((int)this + 0x8c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmOff_11072fe4,s____Inc_Window_h_1106aefc,0x825);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x6979,0,0,0,0x1000);
  *(HANDLE *)((int)this + 0x90) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmOn_11072fdc,s____Inc_Window_h_1106aefc,0x826);
  }
  *(undefined4 *)((int)this + 0x94) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 11035b00 FUN_11035b00

WListBox * __thiscall FUN_11035b00(void *this,WListBox *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WListBox::WListBox(this,param_1);
  *(undefined ***)this = WCheckListBox::vftable;
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  ExceptionList = local_c;
  return this;
}


// ==== 11035ba0 FUN_11035ba0

WListBox * __thiscall FUN_11035ba0(void *this,WListBox *param_1)

{
  WListBox::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return this;
}


// ==== 11035bf0 FUN_11035bf0

WCheckListBox * __thiscall FUN_11035bf0(void *this,byte param_1)

{
  WCheckListBox::~WCheckListBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035c20 FUN_11035c20

WCheckListBox * __thiscall FUN_11035c20(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x98,*(int *)((int)this + -4),WCheckListBox::~WCheckListBox);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WCheckListBox *)((int)this + -4));
    }
    return (WCheckListBox *)((int)this + -4);
  }
  WCheckListBox::~WCheckListBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035ca0 FUN_11035ca0

void __fastcall FUN_11035ca0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WItemBox::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WListBox::~WListBox((WListBox *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11035d10 FUN_11035d10

WListBox * __fastcall FUN_11035d10(WListBox *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WListBox::WListBox(param_1);
  *(undefined ***)param_1 = WItemBox::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11035d70 FUN_11035d70

WListBox * __thiscall FUN_11035d70(void *this,WWindow *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WListBox::WListBox(this,param_1,param_2,(_func_long_HWND___ptr_uint_uint_long *)0x0);
  local_4 = 0;
  *(undefined ***)this = WItemBox::vftable;
  if (*(int *)((int)this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x84c);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 11035e10 FUN_11035e10

WListBox * __thiscall FUN_11035e10(void *this,WListBox *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WListBox::WListBox(this,param_1);
  *(undefined ***)this = WItemBox::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11035e80 FUN_11035e80

WListBox * __thiscall FUN_11035e80(void *this,WListBox *param_1)

{
  WListBox::operator=(this,param_1);
  return this;
}


// ==== 11035ea0 FUN_11035ea0

WItemBox * __thiscall FUN_11035ea0(void *this,byte param_1)

{
  WItemBox::~WItemBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035ed0 FUN_11035ed0

WItemBox * __thiscall FUN_11035ed0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x8c,*(int *)((int)this + -4),WItemBox::~WItemBox);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WItemBox *)((int)this + -4));
    }
    return (WItemBox *)((int)this + -4);
  }
  WItemBox::~WItemBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11035f50 FUN_11035f50

void __fastcall FUN_11035f50(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110636b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WListView::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11035fc0 FUN_11035fc0

WControl * __fastcall FUN_11035fc0(WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110636d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(param_1);
  *(undefined ***)param_1 = WListView::vftable;
  *(undefined ***)(param_1 + 0x40) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined ***)(param_1 + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11036040 FUN_11036040

WControl * __thiscall
FUN_11036040(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110636f8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WListView::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WListView::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 110360e0 FUN_110360e0

WControl * __thiscall FUN_110360e0(void *this,WControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WControl::WControl(this,param_1);
  *(undefined ***)this = WListView::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)((int)this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  ExceptionList = local_c;
  return this;
}


// ==== 11036180 FUN_11036180

WWindow * __thiscall FUN_11036180(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return this;
}


// ==== 110361c0 FUN_110361c0

WListView * __thiscall FUN_110361c0(void *this,byte param_1)

{
  WListView::~WListView(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110361f0 FUN_110361f0

WListView * __thiscall FUN_110361f0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x58,*(int *)((int)this + -4),WListView::~WListView);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WListView *)((int)this + -4));
    }
    return (WListView *)((int)this + -4);
  }
  WListView::~WListView(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11036270 FUN_11036270

WWindow * __fastcall FUN_11036270(WWindow *param_1)

{
  WWindow *pWStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106374b;
  pvStack_c = ExceptionList;
  uStack_20 = 0;
  ExceptionList = &pvStack_c;
  pWStack_24 = param_1;
  FName::FName((FName *)&pWStack_24,0);
  WWindow::WWindow(param_1);
  pvStack_c = (void *)0x0;
  *(undefined ***)(param_1 + 0x3c) = FControlSnoop::vftable;
  *(undefined ***)param_1 = WPropertiesBase::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WPropertiesBase::vftable_for_FControlSnoop_;
  WListBox::WListBox((WListBox *)(param_1 + 0x44));
  *(undefined ***)(param_1 + 0x44) = WItemBox::vftable;
  ExceptionList = param_1;
  return param_1;
}


// ==== 11036320 FUN_11036320

WWindow * __thiscall FUN_11036320(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063773;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow(this,param_1,param_2);
  pvStack_c = (void *)0x0;
  puVar1 = (undefined4 *)((int)this + 0x3c);
  *puVar1 = FControlSnoop::vftable;
  *(undefined ***)this = WPropertiesBase::vftable_for_WWindow_;
  *puVar1 = WPropertiesBase::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x40) = 1;
  WItemBox::WItemBox((WItemBox *)((int)this + 0x44),this,0);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 **)((int)this + 0x60) = puVar1;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 110363d0 FUN_110363d0

void __fastcall FUN_110363d0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110637a3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  WItemBox::~WItemBox((WItemBox *)(param_1 + 0x44));
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11036430 FUN_11036430

WWindow * __thiscall FUN_11036430(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110637d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  local_4 = 0;
  *(undefined ***)((int)this + 0x3c) = FControlSnoop::vftable;
  *(undefined ***)this = WPropertiesBase::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WPropertiesBase::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  WItemBox::WItemBox((WItemBox *)((int)this + 0x44),(WItemBox *)(param_1 + 0x44));
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  ExceptionList = local_c;
  return this;
}


// ==== 110364e0 FUN_110364e0

WWindow * __thiscall FUN_110364e0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  WListBox::operator=((WListBox *)((int)this + 0x44),(WListBox *)(param_1 + 0x44));
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  return this;
}


// ==== 11036520 FUN_11036520

WWindow * __thiscall FUN_11036520(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063803;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  WItemBox::~WItemBox((WItemBox *)((int)this + 0x44));
  local_4 = 0xffffffff;
  WWindow::~WWindow(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 110365a0 FUN_110365a0

WPropertiesBase * __thiscall FUN_110365a0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0xd4,*(int *)((int)this + -4),WPropertiesBase::~WPropertiesBase);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WPropertiesBase *)((int)this + -4));
    }
    return (WPropertiesBase *)((int)this + -4);
  }
  WPropertiesBase::~WPropertiesBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11036620 FUN_11036620

WWindow * __fastcall FUN_11036620(WWindow *param_1)

{
  WWindow *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063828;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = param_1;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow(param_1);
  *(undefined ***)param_1 = WDragInterceptor::vftable;
  ExceptionList = param_1;
  return param_1;
}


// ==== 110366a0 FUN_110366a0

WWindow * __thiscall FUN_110366a0(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WDragInterceptor::vftable;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  ExceptionList = local_c;
  return this;
}


// ==== 11036780 FUN_11036780

WWindow * __thiscall FUN_11036780(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  return this;
}


// ==== 11036810 FUN_11036810

WDragInterceptor * __thiscall FUN_11036810(void *this,byte param_1)

{
  WDragInterceptor::~WDragInterceptor(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11036840 FUN_11036840

undefined4 * __fastcall FUN_11036840(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = FControlSnoop::vftable;
  *param_1 = FTreeItem::vftable_for_FCommandTarget_;
  param_1[1] = FTreeItem::vftable_for_FControlSnoop_;
  FArray::FArray((FArray *)(param_1 + 9));
  local_4 = 1;
  FArray::FArray((FArray *)(param_1 + 0xc));
  ExceptionList = local_c;
  return param_1;
}


// ==== 110368d0 FUN_110368d0

undefined4 * __thiscall FUN_110368d0(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110638b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 4) = FControlSnoop::vftable;
  *(undefined ***)this = FTreeItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FTreeItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  thunk_FUN_1102ab70((void *)((int)this + 0x24),(int *)(param_1 + 0x24));
  local_4 = 0;
  thunk_FUN_1102ac20((void *)((int)this + 0x30),(int *)(param_1 + 0x30));
  ExceptionList = local_c;
  return this;
}


// ==== 110369a0 FUN_110369a0

int __thiscall FUN_110369a0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  thunk_FUN_1102e9a0((void *)((int)this + 0x24),(FArray *)(param_1 + 0x24));
  thunk_FUN_1102ea10((void *)((int)this + 0x30),(FArray *)(param_1 + 0x30));
  return (int)this;
}


// ==== 11036a10 FUN_11036a10

FTreeItem * __thiscall FUN_11036a10(void *this,byte param_1)

{
  FTreeItem::~FTreeItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11036a40 FUN_11036a40

FTreeItem * __thiscall FUN_11036a40(void *this,FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110638e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FTreeItem::FTreeItem(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FPropertyItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FPropertyItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::FString((FString *)((int)this + 0x74),(FString *)(param_1 + 0x74));
  ExceptionList = local_c;
  return this;
}


// ==== 11036b30 FUN_11036b30

FTreeItem * __thiscall FUN_11036b30(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::operator=((FString *)((int)this + 0x74),(FString *)(param_1 + 0x74));
  return this;
}


// ==== 11036bd0 FUN_11036bd0

FPropertyItem * __thiscall FUN_11036bd0(void *this,byte param_1)

{
  FPropertyItem::~FPropertyItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11036c00 FUN_11036c00

FTreeItem * __fastcall FUN_11036c00(FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FTreeItem::FTreeItem(param_1);
  *(undefined ***)param_1 = FHeaderItem::vftable_for_FCommandTarget_;
  *(undefined ***)(param_1 + 4) = FHeaderItem::vftable_for_FControlSnoop_;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11036c70 FUN_11036c70

FTreeItem * __thiscall FUN_11036c70(void *this,FTreeItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FTreeItem::FTreeItem(this,param_1);
  *(undefined ***)this = FHeaderItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FHeaderItem::vftable_for_FControlSnoop_;
  ExceptionList = local_c;
  return this;
}


// ==== 11036ce0 FUN_11036ce0

FTreeItem * __thiscall FUN_11036ce0(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  return this;
}


// ==== 11036d00 FUN_11036d00

FTreeItem * __thiscall FUN_11036d00(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063948;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FTreeItem::~FTreeItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 11036d70 FUN_11036d70

FHeaderItem * __thiscall FUN_11036d70(void *this,FHeaderItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_1);
  *(undefined ***)this = FCategoryItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FCategoryItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return this;
}


// ==== 11036df0 FUN_11036df0

FTreeItem * __thiscall FUN_11036df0(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 11036e20 FUN_11036e20

FTreeItem * __thiscall FUN_11036e20(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063990;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FTreeItem::~FTreeItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 11036e90 FUN_11036e90

FHeaderItem * __fastcall FUN_11036e90(FHeaderItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110639b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = FNewObjectItem::vftable_for_FCommandTarget_;
  *(undefined ***)(param_1 + 4) = FNewObjectItem::vftable_for_FControlSnoop_;
  FString::FString((FString *)(param_1 + 0x48));
  ExceptionList = local_c;
  return param_1;
}


// ==== 11036f00 FUN_11036f00

FHeaderItem * __thiscall FUN_11036f00(void *this,FHeaderItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110639e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FNewObjectItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FNewObjectItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  FString::FString((FString *)((int)this + 0x48),(FString *)(param_1 + 0x48));
  ExceptionList = local_c;
  return this;
}


// ==== 11036fa0 FUN_11036fa0

FTreeItem * __thiscall FUN_11036fa0(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  FString::operator=((FString *)((int)this + 0x48),(FString *)(param_1 + 0x48));
  return this;
}


// ==== 11036ff0 FUN_11036ff0

FNewObjectItem * __thiscall FUN_11036ff0(void *this,byte param_1)

{
  FNewObjectItem::~FNewObjectItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11037020 FUN_11037020

void __fastcall FUN_11037020(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11063a29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WProperties::vftable_for_FControlSnoop_;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_1102ad90((FArray *)(param_1 + 0xd4));
  local_4 = 2;
  WItemBox::~WItemBox((WItemBox *)(param_1 + 0x44));
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110370c0 FUN_110370c0

WPropertiesBase * __fastcall FUN_110370c0(WPropertiesBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063a5f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WPropertiesBase::WPropertiesBase(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = WProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WProperties::vftable_for_FControlSnoop_;
  FArray::FArray((FArray *)(param_1 + 0xd4));
  ExceptionList = local_c;
  return param_1;
}


// ==== 11037140 FUN_11037140

WPropertiesBase * __thiscall FUN_11037140(void *this,undefined4 param_1,FArray *param_2)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  FString local_38 [12];
  FString local_2c [16];
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_11063ab1;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  local_1c = this;
  WPropertiesBase::WPropertiesBase(this,param_1,param_2);
  local_8 = 0;
  *(undefined ***)this = WProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WProperties::vftable_for_FControlSnoop_;
  param_2 = (FArray *)((int)this + 0xd4);
  FArray::FArray(param_2);
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  *(undefined4 *)((int)this + 0xf0) = 0;
  puVar4 = (undefined4 *)((int)this + 0xf4);
  *puVar4 = 0x80;
  local_8._0_1_ = 3;
  FName::FName((FName *)&param_2,0);
  iVar1 = FName::operator!=((FName *)((int)this + 8),(FName *)&param_2);
  if (iVar1 != 0) {
    puVar2 = FName::operator*((FName *)((int)this + 8));
    pFVar3 = (FString *)FString::FString(local_38,puVar2);
    local_8._0_1_ = 4;
    pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)local_2c);
    local_8._0_1_ = 5;
    iVar1 = **(int **)GConfig_exref;
    uVar5 = 0;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 4))(u_WindowPositions_1106dcec,puVar2,puVar4,uVar5);
    local_8._0_1_ = 4;
    FString::~FString(local_2c);
    local_8._0_1_ = 3;
    FString::~FString(local_38);
  }
  param_2 = this;
  thunk_FUN_1102aec0(&WProperties::PropertiesWindows,&param_2);
  *(void **)((int)this + 0x88) = this;
  *(code **)((int)this + 0x8c) = WProperties::OnListDoubleClick;
  *(void **)((int)this + 0x94) = this;
  *(code **)((int)this + 0x98) = WProperties::OnListSelectionChange;
  *(undefined4 *)((int)this + 0xf8) = 1;
  ExceptionList = local_10;
  return this;
}


// ==== 1103729c Catch@1103729c

void Catch_1103729c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110372b0 Catch@110372b0

void Catch_110372b0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,
             `public:___thiscall_WProperties::WProperties(FName,WWindow*)'::__l3::__FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11037330 FUN_11037330

WPropertiesBase * __thiscall FUN_11037330(void *this,WPropertiesBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063ae6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WPropertiesBase::WPropertiesBase(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WProperties::vftable_for_FControlSnoop_;
  thunk_FUN_1102acd0((void *)((int)this + 0xd4),(int *)(param_1 + 0xd4));
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  ExceptionList = local_c;
  return this;
}


// ==== 11037430 FUN_11037430

WWindow * __thiscall FUN_11037430(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  WListBox::operator=((WListBox *)((int)this + 0x44),(WListBox *)(param_1 + 0x44));
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  thunk_FUN_1102ae50((void *)((int)this + 0xd4),(FArray *)(param_1 + 0xd4));
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return this;
}


// ==== 110374f0 FUN_110374f0

WProperties * __thiscall FUN_110374f0(void *this,byte param_1)

{
  WProperties::~WProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11037520 FUN_11037520

WProperties * __thiscall FUN_11037520(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xfc,*(int *)((int)this + -4),WProperties::~WProperties);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WProperties *)((int)this + -4));
    }
    return (WProperties *)((int)this + -4);
  }
  WProperties::~WProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110375a0 FUN_110375a0

FHeaderItem * __fastcall FUN_110375a0(FHeaderItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063b14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = FPropertyItemBase::vftable_for_FCommandTarget_;
  *(undefined ***)(param_1 + 4) = FPropertyItemBase::vftable_for_FControlSnoop_;
  FString::FString((FString *)(param_1 + 0x3c));
  ExceptionList = local_c;
  return param_1;
}


// ==== 11037610 FUN_11037610

FHeaderItem * __thiscall FUN_11037610(void *this,FHeaderItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063b44;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FPropertyItemBase::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FPropertyItemBase::vftable_for_FControlSnoop_;
  FString::FString((FString *)((int)this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  ExceptionList = local_c;
  return this;
}


// ==== 110376b0 FUN_110376b0

FTreeItem * __thiscall FUN_110376b0(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  FString::operator=((FString *)((int)this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  return this;
}


// ==== 110376f0 FUN_110376f0

FPropertyItemBase * __thiscall FUN_110376f0(void *this,byte param_1)

{
  FPropertyItemBase::~FPropertyItemBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11037720 FUN_11037720

FPropertyItemBase * __fastcall FUN_11037720(FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063b7c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = FObjectsItem::vftable_for_FCommandTarget_;
  *(undefined ***)(param_1 + 4) = FObjectsItem::vftable_for_FControlSnoop_;
  FArray::FArray((FArray *)(param_1 + 0x58));
  ExceptionList = local_c;
  return param_1;
}


// ==== 110377a0 FUN_110377a0

FPropertyItemBase * __thiscall FUN_110377a0(void *this,FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FObjectsItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FObjectsItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  thunk_FUN_1102a7a0((void *)((int)this + 0x58),(int *)(param_1 + 0x58));
  ExceptionList = local_c;
  return this;
}


// ==== 11037830 FUN_11037830

FTreeItem * __thiscall FUN_11037830(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  FString::operator=((FString *)((int)this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  thunk_FUN_1102a830((void *)((int)this + 0x58),(FArray *)(param_1 + 0x58));
  return this;
}


// ==== 11037890 FUN_11037890

FPropertyItemBase * __thiscall FUN_11037890(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063bd3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1101c4a0((FArray *)((int)this + 0x58));
  local_4 = 0xffffffff;
  FPropertyItemBase::~FPropertyItemBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 11037910 FUN_11037910

void __fastcall FUN_11037910(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_11063c19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WObjectProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WObjectProperties::vftable_for_FControlSnoop_;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  thunk_FUN_1101c4a0((FArray *)(param_1 + 0x154));
  local_4 = (uint)local_4._1_3_ << 8;
  FPropertyItemBase::~FPropertyItemBase((FPropertyItemBase *)(param_1 + 0xfc));
  local_4 = 0xffffffff;
  WProperties::~WProperties((WProperties *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110379c0 FUN_110379c0

WProperties * __fastcall FUN_110379c0(WProperties *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063c46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WProperties::WProperties(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = WObjectProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WObjectProperties::vftable_for_FControlSnoop_;
  FObjectsItem::FObjectsItem((FObjectsItem *)(param_1 + 0xfc));
  ExceptionList = local_c;
  return param_1;
}


// ==== 11037a40 FUN_11037a40

WProperties * __thiscall
FUN_11037a40(void *this,ushort *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  void *unaff_ESI;
  ulong unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063c76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties(this,param_1,param_4);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = WObjectProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WObjectProperties::vftable_for_FControlSnoop_;
  FObjectsItem::FObjectsItem
            ((FObjectsItem *)((int)this + 0xfc),this,(FTreeItem *)0x0,unaff_retaddr,param_1,param_3,
             0);
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11037ae0 FUN_11037ae0

WProperties * __thiscall FUN_11037ae0(void *this,WProperties *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063ca6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WProperties::WProperties(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WObjectProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WObjectProperties::vftable_for_FControlSnoop_;
  FObjectsItem::FObjectsItem((FObjectsItem *)((int)this + 0xfc),(FObjectsItem *)(param_1 + 0xfc));
  ExceptionList = local_c;
  return this;
}


// ==== 11037b70 FUN_11037b70

WProperties * __thiscall FUN_11037b70(void *this,WProperties *param_1)

{
  WProperties::operator=(this,param_1);
  FTreeItem::operator=((FTreeItem *)((int)this + 0xfc),(FTreeItem *)(param_1 + 0xfc));
  FString::operator=((FString *)((int)this + 0x138),(FString *)(param_1 + 0x138));
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)((int)this + 0x150) = *(undefined4 *)(param_1 + 0x150);
  thunk_FUN_1102a830((void *)((int)this + 0x154),(FArray *)(param_1 + 0x154));
  return this;
}


// ==== 11037bf0 FUN_11037bf0

WObjectProperties * __thiscall FUN_11037bf0(void *this,byte param_1)

{
  WObjectProperties::~WObjectProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11037c20 FUN_11037c20

WObjectProperties * __thiscall FUN_11037c20(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x160,*(int *)((int)this + -4),WObjectProperties::~WObjectProperties);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WObjectProperties *)((int)this + -4));
    }
    return (WObjectProperties *)((int)this + -4);
  }
  WObjectProperties::~WObjectProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11037ca0 FUN_11037ca0

FPropertyItemBase * __fastcall FUN_11037ca0(FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(param_1);
  *(undefined ***)param_1 = FClassItem::vftable_for_FCommandTarget_;
  *(undefined ***)(param_1 + 4) = FClassItem::vftable_for_FControlSnoop_;
  ExceptionList = local_c;
  return param_1;
}


// ==== 11037d10 FUN_11037d10

FPropertyItemBase * __thiscall
FUN_11037d10(void *this,WPropertiesBase *param_1,FTreeItem *param_2,ulong param_3,ushort *param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = FClassItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FClassItem::vftable_for_FControlSnoop_;
  *(undefined4 *)((int)this + 0x4c) = param_5;
  ExceptionList = local_c;
  return this;
}


// ==== 11037da0 FUN_11037da0

void __fastcall FUN_11037da0(FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063d08;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FPropertyItemBase::~FPropertyItemBase(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11037df0 FUN_11037df0

FPropertyItemBase * __thiscall FUN_11037df0(void *this,FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(this,param_1);
  *(undefined ***)this = FClassItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FClassItem::vftable_for_FControlSnoop_;
  ExceptionList = local_c;
  return this;
}


// ==== 11037e60 FUN_11037e60

FTreeItem * __thiscall FUN_11037e60(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  FString::operator=((FString *)((int)this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  return this;
}


// ==== 11037ea0 FUN_11037ea0

FPropertyItemBase * __thiscall FUN_11037ea0(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063d48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FPropertyItemBase::~FPropertyItemBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 11037f10 FUN_11037f10

FPropertyItemBase * __thiscall FUN_11037f10(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063d68;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(this,0x50,*(int *)((int)this + -4),FClassItem::~FClassItem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FPropertyItemBase *)((int)this + -4));
    }
    ExceptionList = local_c;
    return (FPropertyItemBase *)((int)this + -4);
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FPropertyItemBase::~FPropertyItemBase(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 11037fe0 FUN_11037fe0

void __fastcall FUN_11037fe0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11063d9e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WClassProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WClassProperties::vftable_for_FControlSnoop_;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  FPropertyItemBase::~FPropertyItemBase((FPropertyItemBase *)(param_1 + 0xfc));
  local_4 = 0xffffffff;
  WProperties::~WProperties((WProperties *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11038070 FUN_11038070

WProperties * __fastcall FUN_11038070(WProperties *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063dd6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WProperties::WProperties(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = WClassProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WClassProperties::vftable_for_FControlSnoop_;
  FClassItem::FClassItem((FClassItem *)(param_1 + 0xfc));
  ExceptionList = local_c;
  return param_1;
}


// ==== 110380f0 FUN_110380f0

WProperties * __thiscall FUN_110380f0(void *this,ushort *param_1,UClass *param_2)

{
  void *unaff_ESI;
  ulong unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063e06;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties(this,param_1,0);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = WClassProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WClassProperties::vftable_for_FControlSnoop_;
  FClassItem::FClassItem
            ((FClassItem *)((int)this + 0xfc),this,(FTreeItem *)0x0,unaff_retaddr,param_1,param_2);
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11038190 FUN_11038190

WProperties * __thiscall FUN_11038190(void *this,WProperties *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063e36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WProperties::WProperties(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WClassProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WClassProperties::vftable_for_FControlSnoop_;
  FClassItem::FClassItem((FClassItem *)((int)this + 0xfc),(FClassItem *)(param_1 + 0xfc));
  ExceptionList = local_c;
  return this;
}


// ==== 11038220 FUN_11038220

WProperties * __thiscall FUN_11038220(void *this,WProperties *param_1)

{
  WProperties::operator=(this,param_1);
  FTreeItem::operator=((FTreeItem *)((int)this + 0xfc),(FTreeItem *)(param_1 + 0xfc));
  FString::operator=((FString *)((int)this + 0x138),(FString *)(param_1 + 0x138));
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  return this;
}


// ==== 11038280 FUN_11038280

WClassProperties * __thiscall FUN_11038280(void *this,byte param_1)

{
  WClassProperties::~WClassProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110382b0 FUN_110382b0

WClassProperties * __thiscall FUN_110382b0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x14c,*(int *)((int)this + -4),WClassProperties::~WClassProperties);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WClassProperties *)((int)this + -4));
    }
    return (WClassProperties *)((int)this + -4);
  }
  WClassProperties::~WClassProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11038330 FUN_11038330

FPropertyItemBase * __thiscall FUN_11038330(void *this,FPropertyItemBase *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063e64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FPropertyItemBase::FPropertyItemBase(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FObjectConfigItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FObjectConfigItem::vftable_for_FControlSnoop_;
  FString::FString((FString *)((int)this + 0x50),(FString *)(param_1 + 0x50));
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  ExceptionList = local_c;
  return this;
}


// ==== 110383e0 FUN_110383e0

FTreeItem * __thiscall FUN_110383e0(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  FString::operator=((FString *)((int)this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  FString::operator=((FString *)((int)this + 0x50),(FString *)(param_1 + 0x50));
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  return this;
}


// ==== 11038450 FUN_11038450

FObjectConfigItem * __thiscall FUN_11038450(void *this,byte param_1)

{
  FObjectConfigItem::~FObjectConfigItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11038480 FUN_11038480

FHeaderItem * __fastcall FUN_11038480(FHeaderItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063e94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = FConfigItem::vftable_for_FCommandTarget_;
  *(undefined ***)(param_1 + 4) = FConfigItem::vftable_for_FControlSnoop_;
  FPreferencesInfo::FPreferencesInfo((FPreferencesInfo *)(param_1 + 0x3c));
  ExceptionList = local_c;
  return param_1;
}


// ==== 110384f0 FUN_110384f0

FHeaderItem * __thiscall FUN_110384f0(void *this,FHeaderItem *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063ec4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FHeaderItem::FHeaderItem(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FConfigItem::vftable_for_FCommandTarget_;
  *(undefined ***)((int)this + 4) = FConfigItem::vftable_for_FControlSnoop_;
  FPreferencesInfo::FPreferencesInfo
            ((FPreferencesInfo *)((int)this + 0x3c),(FPreferencesInfo *)(param_1 + 0x3c));
  ExceptionList = local_c;
  return this;
}


// ==== 11038570 FUN_11038570

FTreeItem * __thiscall FUN_11038570(void *this,FTreeItem *param_1)

{
  FTreeItem::operator=(this,param_1);
  FPreferencesInfo::operator=
            ((FPreferencesInfo *)((int)this + 0x3c),(FPreferencesInfo *)(param_1 + 0x3c));
  return this;
}


// ==== 110385a0 FUN_110385a0

FConfigItem * __thiscall FUN_110385a0(void *this,byte param_1)

{
  FConfigItem::~FConfigItem(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110385d0 FUN_110385d0

void __fastcall FUN_110385d0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11063ef6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WConfigProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WConfigProperties::vftable_for_FControlSnoop_;
  local_4 = 1;
  WWindow::MaybeDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  FConfigItem::~FConfigItem((FConfigItem *)(param_1 + 0xfc));
  local_4 = 0xffffffff;
  WProperties::~WProperties((WProperties *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11038650 FUN_11038650

WProperties * __fastcall FUN_11038650(WProperties *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063f26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WProperties::WProperties(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = WConfigProperties::vftable_for_WWindow_;
  *(undefined ***)(param_1 + 0x3c) = WConfigProperties::vftable_for_FControlSnoop_;
  FConfigItem::FConfigItem((FConfigItem *)(param_1 + 0xfc));
  ExceptionList = local_c;
  return param_1;
}


// ==== 110386d0 FUN_110386d0

WProperties * __thiscall FUN_110386d0(void *this,undefined4 param_1)

{
  FPreferencesInfo *pFVar1;
  ushort *unaff_retaddr;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063f5f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties(this,param_1,0);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = WConfigProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WConfigProperties::vftable_for_FControlSnoop_;
  pFVar1 = (FPreferencesInfo *)
           FPreferencesInfo::FPreferencesInfo((FPreferencesInfo *)&stack0xffffffc0);
  pvStack_c._0_1_ = 1;
  FConfigItem::FConfigItem((FConfigItem *)((int)this + 0xfc),pFVar1,this,(FTreeItem *)0x0);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  FPreferencesInfo::~FPreferencesInfo((FPreferencesInfo *)&stack0xffffffc0);
  FString::operator=((FString *)((int)this + 0x138),unaff_retaddr);
  ExceptionList = pvStack_14;
  return this;
}


// ==== 11038790 FUN_11038790

WProperties * __thiscall FUN_11038790(void *this,WProperties *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063f96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WProperties::WProperties(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WConfigProperties::vftable_for_WWindow_;
  *(undefined ***)((int)this + 0x3c) = WConfigProperties::vftable_for_FControlSnoop_;
  FConfigItem::FConfigItem((FConfigItem *)((int)this + 0xfc),(FConfigItem *)(param_1 + 0xfc));
  ExceptionList = local_c;
  return this;
}


// ==== 11038820 FUN_11038820

WProperties * __thiscall FUN_11038820(void *this,WProperties *param_1)

{
  WProperties::operator=(this,param_1);
  FTreeItem::operator=((FTreeItem *)((int)this + 0xfc),(FTreeItem *)(param_1 + 0xfc));
  FPreferencesInfo::operator=
            ((FPreferencesInfo *)((int)this + 0x138),(FPreferencesInfo *)(param_1 + 0x138));
  return this;
}


// ==== 11038870 FUN_11038870

WConfigProperties * __thiscall FUN_11038870(void *this,byte param_1)

{
  WConfigProperties::~WConfigProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110388a0 FUN_110388a0

WConfigProperties * __thiscall FUN_110388a0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x164,*(int *)((int)this + -4),WConfigProperties::~WConfigProperties);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WConfigProperties *)((int)this + -4));
    }
    return (WConfigProperties *)((int)this + -4);
  }
  WConfigProperties::~WConfigProperties(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11038920 FUN_11038920

void __fastcall FUN_11038920(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11063fc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WWizardPage::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


