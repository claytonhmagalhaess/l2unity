// ==== 100ce7f0 FUN_100ce7f0 depth=0 from=raiz callees=FUN_100cb550@100cb550 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_100cd330@100cd330 CORE.DLL::FString::FString@EXTERNAL:000001b0 OLEAUT32.DLL::VariantClear@EXTERNAL:000002d7 FUN_100cccb0@100cccb0 FUN_100cccd0@100cccd0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 1025b1e4=Bottom | 1025af44=Left | 1025af28=Right | 

undefined4 FUN_100ce7f0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f79e1;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)&DAT_1025b1f4);
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"Bottom");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_30,(ushort *)L"Left");
        if (iVar2 == 0) {
          iVar2 = FString::operator==(local_30,(ushort *)L"Right");
          if (iVar2 != 0) {
            uVar3 = 2;
            local_18 = uVar3;
          }
        }
        else {
          uVar3 = 1;
          local_18 = uVar3;
        }
      }
      else {
        uVar3 = 4;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 3;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100cec80 FUN_100cec80 depth=0 from=raiz callees=FUN_100cb550@100cb550 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_100cd330@100cd330 CORE.DLL::FString::FString@EXTERNAL:000001b0 OLEAUT32.DLL::VariantClear@EXTERNAL:000002d7 FUN_100cccb0@100cccb0 FUN_100cccd0@100cccd0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 1025b310=Small | 

undefined4 FUN_100cec80(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7ab1;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0xffffffff;
  local_18 = 0xffffffff;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 5;
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"Small");
    if (iVar2 != 0) {
      uVar3 = 1;
      local_18 = 1;
    }
    iVar2 = FString::operator==(local_30,(ushort *)&DAT_1025b050);
    if (iVar2 != 0) {
      uVar3 = 0;
      local_18 = 0;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100f2cb0 FUN_100f2cb0 depth=0 from=raiz callees=FUN_100ceb40@100ceb40 FUN_100cdbd0@100cdbd0 FUN_100ce7f0@100ce7f0 CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 102692ac=type | 1026af00=seconds | 1026aee0=direction | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100f2cb0(int param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float10 fVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101feb9b;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (float *)0x0)) {
    uVar1 = 0;
  }
  else {
    FString::FString(local_28,(ushort *)L"type");
    local_8._0_1_ = 1;
    uVar1 = FUN_100ceb40(local_28);
    *param_2 = uVar1;
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_28,(ushort *)L"seconds");
    local_8._0_1_ = 2;
    fVar3 = (float10)FUN_100cdbd0(local_28);
    *param_3 = (float)fVar3;
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    if (*param_3 == (float)_DAT_1026aef8) {
      *param_3 = 0.0;
    }
    FString::FString(local_28,(ushort *)L"direction");
    local_8._0_1_ = 3;
    fVar2 = (float)FUN_100ce7f0(local_28);
    param_3[1] = fVar2;
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    uVar1 = 1;
  }
  ExceptionList = local_10;
  return uVar1;
}


// ==== 100cda90 FUN_100cda90 depth=0 from=raiz callees=FUN_100cb550@100cb550 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_100cd330@100cd330 CORE.DLL::FString::FString@EXTERNAL:000001b0 OLEAUT32.DLL::VariantClear@EXTERNAL:000002d7 FUN_100cccb0@100cccb0 FUN_100cccd0@100cccd0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 1025ace4=true | 1025acd8=false | 

undefined4 FUN_100cda90(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7791;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0xffffffff;
  local_18 = 0xffffffff;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8 = CONCAT31(local_8._1_3_,5);
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"true");
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_30,(ushort *)L"false");
      if (iVar2 != 0) {
        uVar3 = 0;
        local_18 = uVar3;
      }
    }
    else {
      uVar3 = 1;
      local_18 = uVar3;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100cb550 FUN_100cb550 depth=1 from=FUN_100ce7f0 callees=OLEAUT32.DLL::SysAllocString@EXTERNAL:000002da _com_issue_error@101c0fd0
// strings: 

undefined4 * __fastcall FUN_100cb550(undefined4 *param_1)

{
  OLECHAR *pOVar1;
  undefined4 *puVar2;
  BSTR pOVar3;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  OLECHAR *pOStack_4;
  
  pOStack_4 = (OLECHAR *)0xffffffff;
  puStack_8 = &LAB_101f6e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)
           (**(code **)**(undefined4 **)GMalloc_exref)
                     (0xc,&DAT_1022f8a0,DAT_103554c4 ^ (uint)&stack0xffffffe4);
  pOVar1 = pOStack_4;
  local_c = (void *)0x0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 1;
    pOVar3 = SysAllocString(pOStack_4);
    *puVar2 = pOVar3;
    if ((pOVar3 == (BSTR)0x0) && (pOVar1 != (OLECHAR *)0x0)) {
      _com_issue_error(-0x7ff8fff2);
    }
  }
  local_c = (void *)0xffffffff;
  *param_1 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    _com_issue_error(-0x7ff8fff2);
  }
  ExceptionList = unaff_EBX;
  return param_1;
}


// ==== 100cd330 FUN_100cd330 depth=1 from=FUN_100ce7f0 callees=FUN_100cb740@100cb740 _com_issue_errorex@101c0fe0
// strings: 

undefined4 * __thiscall FUN_100cd330(IUnknown *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  ULONG UVar2;
  void *unaff_EBX;
  undefined4 unaff_EDI;
  void *local_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (undefined4 *)&LAB_101f75e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  UVar2 = (*param_1->lpVtbl[2].AddRef)(param_1);
  if ((int)UVar2 < 0) {
    _com_issue_errorex(UVar2,param_1,(_GUID *)&DAT_1025aa04);
  }
  puVar1 = puStack_8;
  *puStack_8 = unaff_EDI;
  if (param_3 != 0) {
    FUN_100cb740();
  }
  ExceptionList = unaff_EBX;
  return puVar1;
}


// ==== 100cccb0 FUN_100cccb0 depth=1 from=FUN_100ce7f0 callees=_com_issue_error@101c0fd0
// strings: 

int __fastcall FUN_100cccb0(int *param_1)

{
  if (*param_1 == 0) {
    _com_issue_error(-0x7fffbffd);
  }
  return *param_1;
}


// ==== 100cccd0 FUN_100cccd0 depth=1 from=FUN_100ce7f0 callees=OLEAUT32.DLL::VariantInit@EXTERNAL:000002d6 _com_issue_errorex@101c0fe0 _memcpy_s@101c1fab
// strings: 

void * __fastcall FUN_100cccd0(IUnknown *param_1)

{
  void *pvVar1;
  ULONG UVar2;
  VARIANTARG local_1c;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_101f7409;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VariantInit(&local_1c);
  UVar2 = (*param_1->lpVtbl[2].Release)(param_1);
  if ((int)UVar2 < 0) {
    _com_issue_errorex(UVar2,param_1,(_GUID *)&DAT_1025a440);
  }
  pvVar1 = pvStack_4;
  _memcpy_s(pvStack_4,0x10,&stack0xffffffdc,0x10);
  ExceptionList = (void *)local_1c.n1._8_4_;
  return pvVar1;
}


// ==== 100ceb40 FUN_100ceb40 depth=1 from=FUN_100f2cb0 callees=FUN_100cb550@100cb550 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_100cd330@100cd330 CORE.DLL::FString::FString@EXTERNAL:000001b0 OLEAUT32.DLL::VariantClear@EXTERNAL:000002d7 FUN_100cccb0@100cccb0 FUN_100cccd0@100cccd0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 1025b2c4=AlphaTransition | 1025b29c=PositionTransition | 

undefined4 FUN_100ceb40(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uStack_50;
  VARIANTARG local_40;
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f7a71;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  local_18 = 0;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffac;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar4 = &param_1;
  FUN_100cccb0(puVar4);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar4);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    FString::FString(local_30,*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 5;
    VariantClear(&local_40);
    iVar2 = FString::operator==(local_30,(ushort *)L"AlphaTransition");
    if (iVar2 != 0) {
      uVar3 = 3;
      local_18 = 3;
    }
    iVar2 = FString::operator==(local_30,(ushort *)L"PositionTransition");
    if (iVar2 != 0) {
      uVar3 = 4;
      local_18 = 4;
    }
    local_8._0_1_ = 2;
    FString::~FString(local_30);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return uVar3;
}


// ==== 100cdbd0 FUN_100cdbd0 depth=1 from=FUN_100f2cb0 callees=FUN_100cb550@100cb550 FUN_100cd330@100cd330 CORE.DLL::appAtof@EXTERNAL:000001e2 OLEAUT32.DLL::VariantClear@EXTERNAL:000002d7 FUN_100cccb0@100cccb0 FUN_100cccd0@100cccd0 CORE.DLL::FString::operator*@EXTERNAL:0000019f
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100cdbd0(FString *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_44;
  VARIANTARG local_34;
  undefined1 *local_20;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f77c8;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = _DAT_1025ad28;
  puVar1 = FString::operator*(param_1);
  local_20 = &stack0xffffffb8;
  FUN_100cb550(puVar1);
  local_8._0_1_ = 1;
  puVar3 = &param_1;
  FUN_100cccb0(puVar3);
  local_8._0_1_ = 0;
  FUN_100cd330(puVar3);
  local_8._0_1_ = 2;
  if (param_1 != (FString *)0x0) {
    FUN_100cccb0();
    iVar2 = FUN_100cccd0();
    local_8._0_1_ = 3;
    local_18 = appAtof(*(ushort **)(iVar2 + 8));
    local_8._0_1_ = 2;
    VariantClear(&local_34);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 != (FString *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = local_10;
  return (float10)local_18;
}


