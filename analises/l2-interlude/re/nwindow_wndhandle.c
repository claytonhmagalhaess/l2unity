// ==== 10133150 UWindowHandle::execSetWindowSize depth=0 from=raiz callees=FUN_10010290@10010290
// strings: 

/* public: void __thiscall UWindowHandle::execSetWindowSize(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetWindowSize(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x133150  1843  ?execSetWindowSize@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208280;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x128))((float)local_18,(float)(int)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133740 UWindowHandle::execGetRect depth=0 from=raiz callees=FUN_10010290@10010290 FUN_10058770@10058770 FUN_101c19e0@101c19e0
// strings: 

/* public: void __thiscall UWindowHandle::execGetRect(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execGetRect(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_50;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  UWindowHandle *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133740  1352  ?execGetRect@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208320;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  local_18 = this;
  puVar1 = &uStack_50;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  uVar5 = 0;
  uVar3 = 0;
  local_34 = 0;
  iVar2 = FUN_10010290(*(undefined4 *)(local_18 + 0x34));
  if (iVar2 != 0) {
    local_2c = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_10058770(&local_30);
    uVar5 = local_2c;
    uVar4 = local_30;
    uVar3 = FUN_101c19e0();
    local_34 = FUN_101c19e0();
  }
  *(undefined4 *)param_2 = uVar4;
  *(undefined4 *)((int)param_2 + 4) = uVar5;
  *(undefined4 *)((int)param_2 + 8) = uVar3;
  *(undefined4 *)((int)param_2 + 0xc) = local_34;
  ExceptionList = local_10;
  return;
}


// ==== 101345f0 UWindowHandle::execMoveTo depth=0 from=raiz callees=FUN_10010290@10010290
// strings: 

/* public: void __thiscall UWindowHandle::execMoveTo(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execMoveTo(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1345f0  1535  ?execMoveTo@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208530;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x144))(local_18,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10134c20 UWindowHandle::execSetAnchor depth=0 from=raiz callees=FUN_10010290@10010290 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator==@EXTERNAL:0000014a CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_10005c30@10005c30 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100d0cb0@100d0cb0
// strings: 1025ae30=TopLeft | 1025ae1c=TopCenter | 1025ae08=TopRight | 1025adf0=CenterLeft | 1025add4=CenterCenter | 1025adbc=CenterRight | 1025ada4=BottomLeft | 1025ad88=BottomCenter | 1025ad70=BottomRight | 1025ae30=TopLeft | 1025ae1c=TopCenter | 1025ae08=TopRight | 1025adf0=CenterLeft | 1025add4=CenterCenter | 1025adbc=CenterRight | 1025ada4=BottomLeft | 1025ad88=BottomCenter | 1025ad70=BottomRight | 

/* public: void __thiscall UWindowHandle::execSetAnchor(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execSetAnchor(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uStack_74;
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [20];
  int *local_2c;
  FString local_28 [4];
  undefined4 local_24;
  UWindowHandle *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x134c20  1715  ?execSetAnchor@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102086bd;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  FString::FString(local_58);
  local_8._0_1_ = 1;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,local_58);
  FString::FString(local_4c);
  local_8._0_1_ = 2;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,local_4c);
  FString::FString(local_40);
  local_8._0_1_ = 3;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,local_40);
  local_18 = 0;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,&local_18);
  local_1c = 0;
  bVar4 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar4 * 4))(param_1,&local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(local_20 + 0x34));
  local_2c = piVar1;
  iVar2 = FString::Len(local_58);
  if (iVar2 == 0) {
    param_1 = *(FFrame **)(DAT_103663bc + 0x50ac);
  }
  else {
    uVar6 = 0;
    pFVar3 = local_58;
    FUN_10005c30(pFVar3,0);
    param_1 = (FFrame *)FUN_100d0cb0(pFVar3,uVar6);
  }
  if ((piVar1 != (int *)0x0) && (param_1 != (FFrame *)0x0)) {
    pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopLeft");
    local_8._0_1_ = 4;
    iVar2 = FString::operator==(local_4c,pFVar3);
    local_8._0_1_ = 3;
    FString::~FString(local_28);
    if (iVar2 == 0) {
      pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopCenter");
      local_8._0_1_ = 5;
      iVar2 = FString::operator==(local_4c,pFVar3);
      local_8._0_1_ = 3;
      FString::~FString(local_28);
      if (iVar2 == 0) {
        pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopRight");
        local_8._0_1_ = 6;
        iVar2 = FString::operator==(local_4c,pFVar3);
        local_8._0_1_ = 3;
        FString::~FString(local_28);
        if (iVar2 == 0) {
          pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterLeft");
          local_8._0_1_ = 7;
          iVar2 = FString::operator==(local_4c,pFVar3);
          local_8._0_1_ = 3;
          FString::~FString(local_28);
          if (iVar2 == 0) {
            pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterCenter");
            local_8._0_1_ = 8;
            iVar2 = FString::operator==(local_4c,pFVar3);
            local_8._0_1_ = 3;
            FString::~FString(local_28);
            if (iVar2 == 0) {
              pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterRight");
              local_8._0_1_ = 9;
              iVar2 = FString::operator==(local_4c,pFVar3);
              local_8._0_1_ = 3;
              FString::~FString(local_28);
              if (iVar2 == 0) {
                pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomLeft");
                local_8._0_1_ = 10;
                iVar2 = FString::operator==(local_4c,pFVar3);
                local_8._0_1_ = 3;
                FString::~FString(local_28);
                if (iVar2 == 0) {
                  pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomCenter");
                  local_8._0_1_ = 0xb;
                  iVar2 = FString::operator==(local_4c,pFVar3);
                  local_8._0_1_ = 3;
                  FString::~FString(local_28);
                  if (iVar2 == 0) {
                    pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomRight");
                    local_8._0_1_ = 0xc;
                    iVar2 = FString::operator==(local_4c,pFVar3);
                    local_8._0_1_ = 3;
                    FString::~FString(local_28);
                    bVar4 = -(iVar2 != 0) & 9;
                  }
                  else {
                    bVar4 = 8;
                  }
                }
                else {
                  bVar4 = 7;
                }
              }
              else {
                bVar4 = 6;
              }
            }
            else {
              bVar4 = 5;
            }
          }
          else {
            bVar4 = 4;
          }
        }
        else {
          bVar4 = 3;
        }
      }
      else {
        bVar4 = 2;
      }
    }
    else {
      bVar4 = 1;
    }
    pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"TopLeft");
    local_8._0_1_ = 0xd;
    local_20 = (UWindowHandle *)FString::operator==(local_40,pFVar3);
    local_8._0_1_ = 3;
    FString::~FString(local_64);
    if (local_20 == (UWindowHandle *)0x0) {
      pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"TopCenter");
      local_8._0_1_ = 0xe;
      local_20 = (UWindowHandle *)FString::operator==(local_40,pFVar3);
      local_8._0_1_ = 3;
      FString::~FString(local_64);
      if (local_20 == (UWindowHandle *)0x0) {
        pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"TopRight");
        local_8._0_1_ = 0xf;
        local_20 = (UWindowHandle *)FString::operator==(local_40,pFVar3);
        local_8._0_1_ = 3;
        FString::~FString(local_64);
        if (local_20 == (UWindowHandle *)0x0) {
          pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"CenterLeft");
          local_8._0_1_ = 0x10;
          iVar2 = FString::operator==(local_40,pFVar3);
          local_8._0_1_ = 3;
          FString::~FString(local_64);
          if (iVar2 == 0) {
            pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"CenterCenter");
            local_8._0_1_ = 0x11;
            iVar2 = FString::operator==(local_40,pFVar3);
            local_8._0_1_ = 3;
            FString::~FString(local_64);
            if (iVar2 == 0) {
              pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"CenterRight");
              local_8._0_1_ = 0x12;
              iVar2 = FString::operator==(local_40,pFVar3);
              local_8._0_1_ = 3;
              FString::~FString(local_64);
              if (iVar2 == 0) {
                pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"BottomLeft");
                local_8._0_1_ = 0x13;
                iVar2 = FString::operator==(local_40,pFVar3);
                local_8._0_1_ = 3;
                FString::~FString(local_64);
                if (iVar2 == 0) {
                  pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"BottomCenter");
                  local_8._0_1_ = 0x14;
                  iVar2 = FString::operator==(local_40,pFVar3);
                  local_8._0_1_ = 3;
                  FString::~FString(local_64);
                  if (iVar2 == 0) {
                    pFVar3 = (FString *)FString::FString(local_64,(ushort *)L"BottomRight");
                    local_8._0_1_ = 0x15;
                    iVar2 = FString::operator==(local_40,pFVar3);
                    local_8._0_1_ = 3;
                    FString::~FString(local_64);
                    bVar5 = -(iVar2 != 0) & 9;
                  }
                  else {
                    bVar5 = 8;
                  }
                }
                else {
                  bVar5 = 7;
                }
              }
              else {
                bVar5 = 6;
              }
            }
            else {
              bVar5 = 5;
            }
          }
          else {
            bVar5 = 4;
          }
        }
        else {
          bVar5 = 3;
        }
      }
      else {
        bVar5 = 2;
      }
    }
    else {
      bVar5 = 1;
    }
    local_24 = local_18;
    (**(code **)(*local_2c + 0xd4))(bVar5,bVar4,param_1,local_18,local_1c,0);
  }
  local_8._0_1_ = 2;
  FString::~FString(local_40);
  local_8._0_1_ = 1;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_58);
  ExceptionList = local_10;
  return;
}


// ==== 10135390 UWindowHandle::execMove depth=0 from=raiz callees=FUN_10010290@10010290 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1005a330@1005a330 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10057590@10057590 FUN_10005c30@10005c30 FUN_100d01f0@100d01f0
// strings: 10272fe0=Cannot move anchored window(%s) | 

/* public: void __thiscall UWindowHandle::execMove(struct FFrame &,void * const) */

void __thiscall UWindowHandle::execMove(UWindowHandle *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int *piVar3;
  int iVar4;
  FString *this_00;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x135390  1529  ?execMove@UWindowHandle@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10208719;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  piVar3 = (int *)FUN_10010290(*(undefined4 *)(this + 0x34));
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_1005a330();
    if (iVar4 != 0) {
      this_00 = (FString *)FUN_10057590(local_30);
      local_8._0_1_ = 1;
      puVar5 = FString::operator*(this_00);
      uVar6 = FUN_10005c30(L"Cannot move anchored window(%s)",puVar5);
      FUN_100d01f0(uVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_30);
    }
    (**(code **)(*piVar3 + 0x148))(local_1c,local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10010290 FUN_10010290 depth=1 from=UWindowHandle::execSetWindowSize callees=CORE.DLL::UObject::IsA@EXTERNAL:00000198
// strings: 

UObject * FUN_10010290(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036cbb0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10058770 FUN_10058770 depth=1 from=UWindowHandle::execGetRect callees=
// strings: 

void __thiscall FUN_10058770(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x80);
  param_2[1] = *(undefined4 *)(param_1 + 0x84);
  param_2[3] = *(undefined4 *)(param_1 + 0x8c);
  param_2[2] = *(undefined4 *)(param_1 + 0x88);
  return;
}


// ==== 101c19e0 FUN_101c19e0 depth=1 from=UWindowHandle::execGetRect callees=
// strings: 

ulonglong __fastcall FUN_101c19e0(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
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
  return CONCAT44(param_2,(int)in_ST0);
}


// ==== 10005c30 FUN_10005c30 depth=1 from=UWindowHandle::execSetAnchor callees=FUN_10005270@10005270
// strings: 

int FUN_10005c30(void)

{
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  return DAT_1035786c;
}


// ==== 100d0cb0 FUN_100d0cb0 depth=1 from=UWindowHandle::execSetAnchor callees=FUN_100d0c20@100d0c20 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FString::InStr@EXTERNAL:000001e3 CORE.DLL::FString::Mid@EXTERNAL:000001b2 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100d01f0@100d01f0 FUN_100d0cb0@100d0cb0
// strings: 10259a60=mismatched window name : %s | 

int FUN_100d0cb0(FString *param_1,int *param_2)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uStack_64;
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [20];
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101f8170;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 != 0) {
    iVar1 = FString::InStr(param_1,(ushort *)&DAT_10234780,0);
    pFVar2 = param_1;
    if (0 < iVar1) {
      pFVar2 = (FString *)FString::Mid(param_1,(int)local_48,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = 1;
    }
    FString::FString(local_30,pFVar2);
    local_8 = 3;
    if (iVar1 < 1) {
      pFVar2 = (FString *)FString::FString(local_48,(ushort *)&DAT_1022f9f8);
      local_8 = 5;
      uVar5 = 4;
    }
    else {
      local_18 = 0;
      FString::~FString(local_48);
      FString::Len(param_1);
      pFVar2 = (FString *)FString::Mid(param_1,(int)local_54,iVar1 + 1);
      local_8 = CONCAT31(local_8._1_3_,4);
      uVar5 = 2;
    }
    local_18 = uVar5;
    FString::FString(local_3c,pFVar2);
    local_8 = 7;
    if ((uVar5 & 4) != 0) {
      uVar5 = uVar5 & 0xfffffffb;
      local_18 = uVar5;
      FString::~FString(local_48);
    }
    local_8 = CONCAT31(local_8._1_3_,8);
    if ((uVar5 & 2) != 0) {
      local_18 = uVar5 & 0xfffffffd;
      FString::~FString(local_54);
    }
    if ((((param_2 != (int *)0x0) &&
         (iVar1 = (**(code **)(*param_2 + 0xf4))(local_30,1), iVar1 != 0)) ||
        (iVar1 = FUN_100d0c20(local_30), iVar1 != 0)) ||
       (iVar1 = (**(code **)(**(int **)(DAT_103663bc + 0x50ac) + 0xf4))(local_30,1), iVar1 != 0)) {
      iVar4 = FString::operator_int(local_3c);
      if ((iVar4 != 0) || (iVar1 == 0)) {
        iVar1 = FUN_100d0cb0(local_3c,iVar1);
      }
      local_8._0_1_ = 3;
      FString::~FString(local_3c);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_30);
      ExceptionList = local_10;
      return iVar1;
    }
    puVar3 = FString::operator*(param_1);
    FUN_100d01f0(local_1c,L"mismatched window name : %s",puVar3);
    local_8._0_1_ = 3;
    FString::~FString(local_3c);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_30);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1005a330 FUN_1005a330 depth=1 from=UWindowHandle::execMove callees=
// strings: 

undefined4 __fastcall FUN_1005a330(int param_1)

{
  if (*(int *)(param_1 + 0x13c) == 0) {
    return 0;
  }
  return 1;
}


// ==== 10057590 FUN_10057590 depth=1 from=UWindowHandle::execMove callees=CORE.DLL::FString::FString@EXTERNAL:0000019e
// strings: 

FString * __thiscall FUN_10057590(int param_1,FString *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e1b0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_2,(FString *)(param_1 + 0x180));
  ExceptionList = local_10;
  return param_2;
}


// ==== 100d01f0 FUN_100d01f0 depth=1 from=UWindowHandle::execMove callees=CORE.DLL::appGetVarArgs@EXTERNAL:0000010d CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::~FString@EXTERNAL:00000197 __security_check_cookie@101c16c2 CORE.DLL::FString::Printf@EXTERNAL:000001a7 FUN_10069280@10069280 __alloca_probe@101c2730 CORE.DLL::FOutputDevice::Logf@EXTERNAL:000001ac
// strings: 1025ba50=XMLUI ERROR - %s | 1025ba38=ERROR - %s | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100d01f0(void)

{
  FString *this;
  uint uStack_2040;
  undefined4 local_2030 [3];
  undefined1 *local_2024;
  undefined1 *local_2018;
  void *local_2014;
  undefined1 *puStack_2010;
  int local_200c;
  ushort local_2008 [4096];
  uint local_8;
  
  puStack_2010 = &LAB_101f7f42;
  local_2014 = ExceptionList;
  uStack_2040 = DAT_103554c4 ^ (uint)local_2008;
  local_2018 = (undefined1 *)&uStack_2040;
  ExceptionList = &local_2014;
  local_200c = 0;
  local_8 = uStack_2040;
  appGetVarArgs(local_2008,0x1000,(ushort **)&stack0x00000008);
  this = (FString *)FString::Printf((ushort *)local_2030,L"XMLUI ERROR - %s",local_2008);
  local_200c._0_1_ = 1;
  FString::operator*(this);
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  local_200c._0_1_ = 0;
  uStack_2040 = 0x100d028e;
  FString::~FString((FString *)local_2030);
  if ((((*(int *)GIsOnlyXMLUI_exref == 0) && (DAT_103663bc != 0)) &&
      (*(int *)(DAT_103663bc + 0x50ac) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x21c) != 0)) {
    local_2024 = &stack0xffffdfb8;
    FString::Printf((ushort *)&stack0xffffdfb8,L"ERROR - %s",local_2008);
    local_200c = (uint)local_200c._1_3_ << 8;
    FUN_10069280();
  }
  local_200c = 0xffffffff;
  ExceptionList = local_2014;
  local_2030[0] = 0x100d030d;
  __security_check_cookie(local_8 ^ (uint)local_2008);
  return;
}


