// ==== 10175650 FUN_10175650

undefined4 FUN_10175650(void)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102129a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061b40();
  FName::FName((FName *)&stack0xffffffc4,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_1000ef10(0x400,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1001a820(0,0,1,0);
  }
  in_ECX[0x73] = iVar2;
  if (iVar2 == 0) {
    appFailAssert("m_pConsoleEditBox",".\\Src\\NDebugConsole.cpp",0x23);
  }
  *(undefined4 *)(in_ECX[0x73] + 0x1cc) = 0xaaddcc01;
  (**(code **)(*(int *)in_ECX[0x73] + 0xd0))(1);
  (**(code **)(*(int *)in_ECX[0x73] + 0x130))(0x3f800000,0x3f800000,0,0);
  uVar3 = FUN_10060d40(in_ECX[0x73],2);
  FUN_1005c1e0(uVar3);
  (**(code **)(*in_ECX + 0x1f8))();
  ExceptionList = local_10;
  return 1;
}


// ==== 10175773 Catch@10175773

void Catch_10175773(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10175787 Catch@10175787

void Catch_10175787(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDebugConsole::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101757b0 FUN_101757b0

void FUN_101757b0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102129c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  *in_ECX = NCDebugConsole::vftable;
  in_ECX[0x73] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1017581b Catch@1017581b

void Catch_1017581b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017582f Catch@1017582f

void Catch_1017582f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDebugConsole::NCDebugConsole");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10175850 FUN_10175850

void FUN_10175850(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102129f8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCDebugConsole::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101758b0 FUN_101758b0

void FUN_101758b0(byte param_1)

{
  void *in_ECX;
  
  FUN_10175850();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d0);
  }
  return;
}


// ==== 101758f0 FUN_101758f0

bool FUN_101758f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100321d0(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 10175910 FUN_10175910

void FUN_10175910(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10034070(0x32,10);
  *in_ECX = NCDebugWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10175970 FUN_10175970

void FUN_10175970(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10212a58;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCDebugWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10033f00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101759d0 FUN_101759d0

void FUN_101759d0(byte param_1)

{
  void *in_ECX;
  
  FUN_10175970();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x324);
  }
  return;
}


// ==== 10175a10 FUN_10175a10

undefined4 FUN_10175a10(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI.tooltip.mini-tool01",1);
  *(undefined4 *)(in_ECX + 0x234) = uVar1;
  uVar1 = FUN_1003f630(L"l2ui.NWindow.item_click",1);
  *(undefined4 *)(in_ECX + 0x228) = uVar1;
  uVar1 = FUN_1003f630(L"l2ui_ch3.InventoryWnd.Inventory_OutLine_down",1);
  *(undefined4 *)(in_ECX + 0x22c) = uVar1;
  uVar1 = FUN_1003f630(L"l2ui_ch3.InventoryWnd.Inventory_OutLine",1);
  *(undefined4 *)(in_ECX + 0x230) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.InventoryWnd.Icon_dualcap",1);
  *(undefined4 *)(in_ECX + 0x238) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.InventoryWnd.Inventory_Mark",1);
  *(undefined4 *)(in_ECX + 0x23c) = uVar1;
  return 1;
}


// ==== 10175aa0 thunk_FUN_1005ff00 thunk -> 1005ff00

// ==== 10175ab0 FUN_10175ab0

void FUN_10175ab0(void)

{
  FUN_1014e550();
  return;
}


// ==== 10175ac0 FUN_10175ac0

void FUN_10175ac0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1002ddc0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCHennaItem::vftable;
  in_ECX[0x7d9] = 0;
  in_ECX[0x7da] = 0;
  in_ECX[0x7d8] = 0;
  in_ECX[0x7d7] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10175b30 FUN_10175b30

void FUN_10175b30(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10212ab8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCHennaItem::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1002de40(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10175b90 FUN_10175b90

void FUN_10175b90(byte param_1)

{
  void *in_ECX;
  
  FUN_10175b30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1f6c);
  }
  return;
}


// ==== 10175bc0 FUN_10175bc0

undefined4 FUN_10175bc0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_10212ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = FUN_101c19e0();
  uVar6 = FUN_101c19e0(uVar5);
  FUN_10021df0(in_ECX[0x20] + -1,in_ECX[0x21] + -1,uVar6,uVar5);
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  local_20 = 0;
  local_1c = 0;
  iVar7 = 0;
LAB_10175c50:
  do {
    while( true ) {
      if (in_ECX[0x76] <= iVar7) {
        if (in_ECX[0x8f] != 0) {
          iVar7 = FUN_1014e4a0();
          for (local_30 = 0; local_30 < iVar7; local_30 = local_30 + 1) {
            FUN_10021a00(0xd7,local_30 * 0x1b + 8,0x1a,0x1a,0,0,0x1a,0x1a,in_ECX[0x8f],0xff,1);
            if ((local_30 < in_ECX[0x79]) && (iVar9 = FUN_1002c970(), iVar9 != 0)) {
              iVar9 = local_30 * 0x1b + 9;
              uVar12 = 0xff;
              uVar6 = 1;
              uVar5 = FUN_1002c970(1,0xff);
              FUN_100218f0(0xd8,iVar9,0x18,0x18,uVar5,uVar6,uVar12);
              if (*(int *)(*(int *)(local_30 * 4 + in_ECX[0x78]) + 0x1e7c) == 0) {
                uVar12 = 1;
                uVar6 = 0xff;
                uVar5 = FUN_1003f630(L"Default.ChatBack",1);
                FUN_10021a00(0xd9,iVar9,0x18,0x18,0,0,0x18,0x18,uVar5,uVar6,uVar12);
              }
            }
          }
        }
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        FUN_100212e0();
        ExceptionList = local_10;
        return 1;
      }
      iVar9 = *(int *)(in_ECX[0x75] + iVar7 * 4);
      if (iVar9 != 0) break;
switchD_10175c9b_default:
      iVar7 = iVar7 + 1;
    }
    iVar8 = (**(code **)(*in_ECX + 500))
                      (*(undefined4 *)(iVar9 + 0x1e6c),*(undefined4 *)(iVar9 + 0x1e58));
    bVar1 = false;
    switch(iVar8) {
    case 0:
      local_20 = 7;
      local_1c = 7;
      break;
    case 1:
      local_20 = 0x2e;
      local_1c = 7;
      break;
    case 2:
      local_20 = 0x55;
      local_1c = 7;
      break;
    case 3:
      local_20 = 0x82;
      local_1c = 7;
      break;
    case 4:
      local_20 = 0xa9;
      local_1c = 7;
      break;
    case 5:
      local_20 = 7;
      local_1c = 0x2d;
      break;
    case 6:
      local_20 = 0x2e;
      local_1c = 0x2d;
      break;
    case 7:
      local_20 = 0x55;
      local_1c = 0x2d;
      break;
    case 8:
      local_20 = 0x82;
      local_1c = 0x2d;
      break;
    case 9:
      local_20 = 0xa9;
      local_1c = 0x2d;
      break;
    case 10:
      local_20 = 7;
      local_1c = 0x53;
      break;
    case 0xb:
      local_20 = 0x2e;
      local_1c = 0x53;
      break;
    case 0xc:
      local_20 = 0x55;
      local_1c = 0x53;
      break;
    case 0xd:
      local_20 = 0x82;
      local_1c = 0x53;
      break;
    case 0xe:
      local_20 = 0xa9;
      local_1c = 0x53;
      break;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      bVar1 = true;
      break;
    default:
      goto switchD_10175c9b_default;
    }
    if (((*(int *)(iVar9 + 0x1e78) == 6) || (*(int *)(iVar9 + 0x1e78) == 10)) && (in_ECX[0x91] != 0)
       ) {
      local_20 = 7;
      local_1c = 0x2d;
LAB_10175dde:
      iVar9 = in_ECX[0x97];
      uVar12 = 1;
      uVar6 = 0xff;
      uVar5 = FUN_1002c970(0xff,1);
      FUN_10021a00(local_20,local_1c,iVar9,iVar9,0,0,iVar9,iVar9,uVar5,uVar6,uVar12);
      iVar9 = FUN_1002cc60();
      if (iVar9 == 0) {
        FUN_10021a00(local_20 + -1,local_1c + -1,0x22,0x22,0,0,0x22,0x22,in_ECX[0x8b],0xff,1);
        FUN_10021a00(local_20 + -1,local_1c + -1,0x23,0x23,0,0,0x23,0x23,in_ECX[0x8c],0xff,1);
        iVar7 = iVar7 + 1;
      }
      else {
        FUN_10021a00(local_20 + -1,local_1c + -1,0x22,0x22,0,0,0x22,0x22,in_ECX[0x8a],0xff,1);
        iVar7 = iVar7 + 1;
      }
      goto LAB_10175c50;
    }
    if (!bVar1) goto LAB_10175dde;
    local_28 = 0;
    local_24 = 0;
    local_2c = 0;
    param_1 = 0;
    if (*(short *)(iVar9 + 0x54c) != 0) {
      local_28 = FUN_10178820();
    }
    if (*(short *)(iVar9 + 0x64c) != 0) {
      local_24 = FUN_1002c980();
    }
    if (*(short *)(iVar9 + 0x74c) != 0) {
      local_2c = FUN_1002c990();
    }
    if (*(short *)(iVar9 + 0x84c) != 0) {
      param_1 = FUN_1002c9a0();
    }
    if (local_28 == 0) {
      local_28 = FUN_1002c970();
      iVar9 = local_28;
      iVar3 = local_28;
      iVar4 = local_28;
    }
    else {
      iVar9 = local_28;
      iVar3 = local_28;
      iVar4 = local_28;
      if (local_24 != 0) {
        iVar4 = local_24;
        if (local_2c == 0) {
          local_2c = local_24;
        }
        else {
          iVar9 = param_1;
          iVar3 = local_2c;
          if (param_1 != 0) goto LAB_10175f72;
        }
        iVar9 = local_2c;
        iVar3 = local_2c;
      }
    }
LAB_10175f72:
    local_24 = iVar4;
    local_2c = iVar3;
    param_1 = iVar9;
    if (iVar8 == 0x10) {
      iVar9 = in_ECX[0x97];
      FUN_10021a00(7,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x55,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x55,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,in_ECX[0x8e],0xff,1);
      iVar9 = FUN_1002cc60();
      if (iVar9 == 0) {
        FUN_10021a00(6,0x2c,0x22,0x22,0,0,0x22,0x22,in_ECX[0x8b],0xff,1);
        iVar9 = in_ECX[0x8c];
        uVar11 = 0x23;
        uVar10 = 0x23;
        uVar12 = 0x23;
        uVar6 = 0x23;
        uVar5 = 0x2c;
      }
      else {
        iVar9 = in_ECX[0x8a];
        uVar11 = 0x22;
        uVar10 = 0x22;
        uVar12 = 0x22;
        uVar6 = 0x22;
        uVar5 = 0x2c;
      }
LAB_10176337:
      FUN_10021a00(6,uVar5,uVar6,uVar12,0,0,uVar10,uVar11,iVar9,0xff,1);
      goto switchD_10175c9b_default;
    }
    if (iVar8 == 0xf) {
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x2e,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x2e,0x53,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
      iVar9 = in_ECX[0x97];
      iVar8 = in_ECX[0x8e];
      uVar5 = 0x2e;
    }
    else {
      if (iVar8 != 0x11) {
        if (iVar8 != 0x12) goto switchD_10175c9b_default;
        iVar9 = in_ECX[0x97];
        FUN_10021a00(7,7,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
        iVar9 = in_ECX[0x97];
        FUN_10021a00(0x55,7,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
        iVar9 = in_ECX[0x97];
        FUN_10021a00(0x55,7,iVar9,iVar9,0,0,iVar9,iVar9,in_ECX[0x8e],0xff,1);
        iVar9 = FUN_1002cc60();
        if (iVar9 == 0) {
          FUN_10021a00(6,6,0x22,0x22,0,0,0x22,0x22,in_ECX[0x8b],0xff,1);
          iVar9 = in_ECX[0x8c];
          uVar11 = 0x23;
          uVar10 = 0x23;
          uVar12 = 0x23;
          uVar6 = 0x23;
        }
        else {
          iVar9 = in_ECX[0x8a];
          uVar11 = 0x22;
          uVar10 = 0x22;
          uVar12 = 0x22;
          uVar6 = 0x22;
        }
        uVar5 = 6;
        goto LAB_10176337;
      }
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x2e,0x2d,iVar9,iVar9,0,0,iVar9,iVar9,local_28,0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x2e,0x53,iVar9,iVar9,0,0,iVar9,iVar9,local_24,0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x2e,0x53,iVar9,iVar9,0,0,iVar9,iVar9,in_ECX[0x8e],0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(7,0x53,iVar9,iVar9,0,0,iVar9,iVar9,local_2c,0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(7,0x53,iVar9,iVar9,0,0,iVar9,iVar9,in_ECX[0x8e],0xff,1);
      iVar9 = in_ECX[0x97];
      FUN_10021a00(0x55,0x53,iVar9,iVar9,0,0,iVar9,iVar9,param_1,0xff,1);
      iVar9 = in_ECX[0x97];
      iVar8 = in_ECX[0x8e];
      uVar5 = 0x55;
    }
    FUN_10021a00(uVar5,0x53,iVar9,iVar9,0,0,iVar9,iVar9,iVar8,0xff,1);
    iVar9 = FUN_1002cc60();
    if (iVar9 == 0) {
      FUN_10021a00(0x2d,0x2c,0x22,0x22,0,0,0x22,0x22,in_ECX[0x8b],0xff,1);
      FUN_10021a00(0x2d,0x2c,0x23,0x23,0,0,0x23,0x23,in_ECX[0x8c],0xff,1);
      iVar7 = iVar7 + 1;
    }
    else {
      FUN_10021a00(0x2d,0x2c,0x22,0x22,0,0,0x22,0x22,in_ECX[0x8a],0xff,1);
      iVar7 = iVar7 + 1;
    }
  } while( true );
}


// ==== 10176485 Catch@10176485

void Catch_10176485(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 10176499 Catch@10176499

void Catch_10176499(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEquipItemWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10176510 FUN_10176510

undefined4 FUN_10176510(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  bool bVar9;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10212b12;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  iVar7 = in_ECX[0x20];
  iVar8 = in_ECX[0x21];
  *(int *)(param_1 + 0x38) = iVar7;
  *(int *)(param_1 + 0x3c) = iVar8;
  *(int *)(param_1 + 0x6c) = iVar7;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar3 = FUN_101c19e0(uVar2);
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(in_ECX[0x20],in_ECX[0x21],uVar4,uVar3);
  iVar7 = in_ECX[0x97];
  iVar8 = (iVar7 + 6) * (in_ECX[0x99] / 5) + 0xb;
  if (in_ECX[0x99] % 5 == 3) {
    param_1 = iVar7 * 3 + 0x22;
  }
  else if (in_ECX[0x99] % 5 == 4) {
    param_1 = iVar7 * 4 + 0x29;
  }
  else {
    param_1 = (iVar7 + 7) * (in_ECX[0x99] % 5) + 7;
  }
  iVar7 = 0;
  if (0 < in_ECX[0x76]) {
    do {
      iVar5 = (**(code **)(*in_ECX + 500))
                        (*(undefined4 *)(*(int *)(in_ECX[0x75] + iVar7 * 4) + 0x1e6c),
                         *(undefined4 *)(*(int *)(in_ECX[0x75] + iVar7 * 4) + 0x1e58));
      iVar6 = in_ECX[0x99];
      if (iVar6 == iVar5) {
LAB_10176669:
        FString::FString(local_18,(ushort *)L"Inventory");
        uStack_4 = 0;
        iVar7 = iVar7 * 4;
        FUN_101b8f10(*(undefined4 *)(in_ECX[0x75] + iVar7),local_18,0);
        uStack_4 = 0xffffffff;
        FString::~FString(local_18);
        iVar6 = FUN_1002cc60();
        if ((iVar6 == 0) || (in_ECX[0x35] == 0)) {
          if (in_ECX[0x35] != 0) {
            FUN_100549b0(iVar1,*(int *)(in_ECX[0x75] + iVar7) + 0x1f1c,param_1,iVar8,in_ECX[0x20],
                         in_ECX[0x21],in_ECX[0x22],in_ECX[0x23]);
          }
        }
        else {
          FUN_10054680(iVar1,*(int *)(in_ECX[0x75] + iVar7) + 0x1f1c,param_1,iVar8,in_ECX[0x20],
                       in_ECX[0x21],in_ECX[0x22],in_ECX[0x23]);
        }
        break;
      }
      if (iVar5 == 0x10) {
        bVar9 = iVar6 == 5;
LAB_10176657:
        if (bVar9) goto LAB_10176669;
      }
      else {
        if (iVar5 == 0xf) {
          bVar9 = iVar6 == 6;
          goto LAB_10176657;
        }
        if (iVar5 == 0x11) {
          bVar9 = iVar6 == 6;
          goto LAB_10176657;
        }
        if (iVar5 == 0x12) {
          bVar9 = iVar6 == 0;
          goto LAB_10176657;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < in_ECX[0x76]);
  }
  iVar7 = in_ECX[0xe1];
  if (((-1 < iVar7) && (iVar7 < in_ECX[0x79])) &&
     (iVar8 = *(int *)(in_ECX[0x78] + iVar7 * 4), iVar8 != 0)) {
    FString::FString(local_18,(ushort *)L"Inventory");
    uStack_4 = 1;
    FUN_101b8f10(iVar8,local_18,0);
    uStack_4 = 0xffffffff;
    FString::~FString(local_18);
    if (in_ECX[0x35] != 0) {
      FUN_10054680(iVar1,iVar8 + 0x1f1c,0xd8,iVar7 * 0x1a + 8,in_ECX[0x20],in_ECX[0x21],in_ECX[0x22]
                   ,in_ECX[0x23]);
    }
  }
  FUN_100212e0();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  ExceptionList = local_c;
  return 1;
}


// ==== 10176850 FUN_10176850

void FUN_10176850(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x1d8)) {
    do {
      FUN_1002cc70();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x1d8));
  }
  return;
}


// ==== 10176880 FUN_10176880

int FUN_10176880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar3 = in_ECX[0x20];
    iVar1 = in_ECX[0x21];
    iVar2 = iVar3 + 7;
    iVar4 = iVar1 + 7;
    switch(iVar5) {
    case 0:
      break;
    case 1:
      iVar2 = iVar3 + 0x2e;
      break;
    case 2:
      iVar2 = iVar3 + 0x55;
      break;
    case 3:
      iVar2 = iVar3 + 0x82;
      break;
    case 4:
      iVar2 = iVar3 + 0xa9;
      break;
    case 5:
      goto switchD_101768b0_caseD_5;
    case 6:
      iVar2 = iVar3 + 0x2e;
switchD_101768b0_caseD_5:
      iVar4 = iVar1 + 0x2d;
      break;
    case 7:
      iVar2 = iVar3 + 0x55;
      iVar4 = iVar1 + 0x2d;
      break;
    case 8:
      iVar2 = iVar3 + 0x82;
      iVar4 = iVar1 + 0x2d;
      break;
    case 9:
      iVar2 = iVar3 + 0xa9;
      iVar4 = iVar1 + 0x2d;
      break;
    case 10:
      goto switchD_101768b0_caseD_a;
    case 0xb:
      iVar2 = iVar3 + 0x2e;
      goto switchD_101768b0_caseD_a;
    case 0xc:
      iVar2 = iVar3 + 0x55;
      goto switchD_101768b0_caseD_a;
    case 0xd:
      iVar2 = iVar3 + 0x82;
      goto switchD_101768b0_caseD_a;
    case 0xe:
      iVar2 = iVar3 + 0xa9;
switchD_101768b0_caseD_a:
      iVar4 = iVar1 + 0x53;
      break;
    default:
      goto switchD_101768b0_default;
    }
    iVar3 = (**(code **)(*in_ECX + 0x104))(param_1,param_2,iVar2,iVar4,0x42000000,0x42000000);
    if (iVar3 != 0) {
      return iVar5;
    }
switchD_101768b0_default:
    iVar5 = iVar5 + 1;
    if (0x13 < iVar5) {
      return -1;
    }
  } while( true );
}


// ==== 101769b0 FUN_101769b0

int FUN_101769b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  iVar1 = in_ECX[0x21];
  iVar2 = in_ECX[0x20];
  iVar4 = 0;
  if (0 < in_ECX[0x79]) {
    do {
      iVar3 = *(int *)(in_ECX[0x78] + iVar4 * 4);
      iVar3 = (**(code **)(*in_ECX + 0x104))
                        (param_1 - iVar2,param_2 - iVar1,*(undefined4 *)(iVar3 + 0x1f5c),
                         *(undefined4 *)(iVar3 + 0x1f60),*(undefined4 *)(iVar3 + 0x1f64),
                         *(undefined4 *)(iVar3 + 0x1f68));
      if (iVar3 != 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[0x79]);
  }
  return -1;
}


// ==== 10176a50 FUN_10176a50

UObject * FUN_10176a50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10368830);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&DAT_10368830);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 10176ac0 FUN_10176ac0

void FUN_10176ac0(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  FUN_1005d6f0(param_1,param_2);
  iVar2 = FUN_10176880(param_2 & 0xffff,param_2 >> 0x10);
  in_ECX[0x99] = iVar2;
  in_ECX[0x98] = iVar2;
  do {
    if (in_ECX[0x76] <= iVar3) {
      in_ECX[0x73] = -1;
LAB_10176c20:
      if (in_ECX[0x74] == 0) {
        in_ECX[0x90] = 1;
        FUN_1014ed50(3);
      }
      else {
        in_ECX[0x74] = 0;
      }
      FUN_1005d6f0(param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    piVar1 = (int *)(in_ECX[0x75] + iVar3 * 4);
    iVar2 = (**(code **)(*in_ECX + 500))
                      (*(undefined4 *)(*piVar1 + 0x1e6c),*(undefined4 *)(*piVar1 + 0x1e58));
    if (iVar2 == 0x10) {
      FUN_10176850();
      if (in_ECX[0x98] == 5) {
        FUN_1002cc50();
        in_ECX[0x73] = iVar3;
        goto LAB_10176c20;
      }
    }
    else if ((iVar2 == 0xf) || (iVar2 == 0x11)) {
      FUN_10176850();
      if (in_ECX[0x98] == 6) {
        FUN_1002cc50();
        in_ECX[0x73] = iVar3;
        goto LAB_10176c20;
      }
    }
    else if (iVar2 == 0x12) {
      FUN_10176850();
      if (in_ECX[0x98] == 0) {
        FUN_1002cc50();
        in_ECX[0x73] = iVar3;
        goto LAB_10176c20;
      }
    }
    else if (in_ECX[0x98] == iVar2) {
      FUN_10176850();
      FUN_1002cc50();
      in_ECX[0x73] = iVar3;
      goto LAB_10176c20;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 10176c6c Catch@10176c6c

void Catch_10176c6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10176c80 Catch@10176c80

void Catch_10176c80(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEquipItemWnd::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10176ca0 FUN_10176ca0

undefined4 FUN_10176ca0(undefined4 param_1,uint param_2)

{
  int *piVar1;
  UObject *this;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  FString *this_00;
  ushort *puVar6;
  int *in_ECX;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uStack_64;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  FString local_34 [20];
  int local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10212ba1;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar7 = param_2 & 0xffff;
  uVar2 = param_2 >> 0x10;
  local_1c = uVar7;
  local_18 = uVar2;
  iVar3 = FUN_10176880(uVar7,uVar2);
  in_ECX[0x99] = iVar3;
  iVar3 = FUN_101769b0(uVar7,uVar2);
  in_ECX[0xe1] = iVar3;
  iVar3 = (**(code **)(*in_ECX + 0x74))();
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  else {
    if ((((in_ECX[0x90] != 0) && (-1 < in_ECX[0x98])) && (in_ECX[0x98] < 0x14)) &&
       ((in_ECX[0x73] < in_ECX[0x76] && (-1 < in_ECX[0x73])))) {
      uVar9 = 0;
      uVar4 = FUN_1002c970(0);
      FUN_1003f8b0(4,uVar4,uVar9);
      FUN_1003f950();
    }
    this = *(UObject **)(*(int *)(in_ECX[0x2e] + 0xc) + 4);
    iVar3 = UObject::IsA(this,(UClass *)&DAT_103a1410);
    if (iVar3 != 0) {
      local_50 = 0;
      local_54 = 0;
      local_4c = 0;
      local_48 = 0;
      FUN_10058770(&local_54);
      local_44 = *(int *)(this + 0x204) + local_54;
      local_40 = *(int *)(this + 0x208) + local_50;
      local_3c = *(undefined4 *)(this + 0x20c);
      local_38 = *(undefined4 *)(this + 0x210);
      iVar3 = (**(code **)(*in_ECX + 0x104))(local_1c,local_18,local_44,local_40,local_3c,local_38);
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x200) = 0;
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
        local_8._0_1_ = 3;
        FUN_10003e80(local_34);
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
        local_8._0_1_ = 4;
      }
      else {
        *(undefined4 *)(this + 0x200) = 1;
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash_drag");
        local_8._0_1_ = 1;
        FUN_10003e80(local_34);
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash_drag");
        local_8._0_1_ = 2;
      }
      FUN_10003f50(local_34);
      local_8._0_1_ = 0;
      FString::~FString(local_34);
      local_44 = *(int *)(this + 0x214) + local_54;
      local_40 = *(int *)(this + 0x218) + local_50;
      local_3c = *(undefined4 *)(this + 0x21c);
      local_38 = *(undefined4 *)(this + 0x220);
      iVar3 = (**(code **)(*in_ECX + 0x104))(local_1c,local_18,local_44,local_40,local_3c,local_38);
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x1fc) = 0;
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
        local_8._0_1_ = 7;
        FUN_10003e80(local_34);
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
        local_8._0_1_ = 8;
      }
      else {
        *(undefined4 *)(this + 0x1fc) = 1;
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe_drag");
        local_8._0_1_ = 5;
        FUN_10003e80(local_34);
        local_8._0_1_ = 0;
        FString::~FString(local_34);
        FString::FString(local_34,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe_drag");
        local_8._0_1_ = 6;
      }
      FUN_10003f50(local_34);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
    }
    if (in_ECX[0x2c] != 0) {
      iVar3 = FUN_10147a60(0,0);
      if (iVar3 == 0) {
        for (iVar3 = 0; local_20 = iVar3, iVar3 < in_ECX[0x76]; iVar3 = iVar3 + 1) {
          piVar1 = (int *)(in_ECX[0x75] + iVar3 * 4);
          iVar5 = (**(code **)(*in_ECX + 500))
                            (*(undefined4 *)(*piVar1 + 0x1e6c),*(undefined4 *)(*piVar1 + 0x1e58));
          if (iVar5 == 0x10) {
            bVar8 = in_ECX[0x98] == 5;
LAB_101770e4:
            if (bVar8) {
LAB_10177069:
              if ((iVar3 < in_ECX[0x76]) && (iVar3 = *(int *)(in_ECX[0x75] + iVar3 * 4), iVar3 != 0)
                 ) {
                this_00 = (FString *)FUN_10057590(local_34);
                local_8._0_1_ = 9;
                puVar6 = FString::operator*(this_00);
                appStrcpy((ushort *)(iVar3 + 0x1c4c),puVar6);
                local_8 = (uint)local_8._1_3_ << 8;
                FString::~FString(local_34);
                uVar4 = FUN_1002c970();
                FUN_10147950(1,iVar3,uVar4,in_ECX);
              }
              break;
            }
          }
          else {
            if ((iVar5 == 0xf) || (iVar5 == 0x11)) {
              bVar8 = in_ECX[0x98] == 6;
              goto LAB_101770e4;
            }
            if (iVar5 == 0x12) {
              bVar8 = in_ECX[0x98] == 0;
              goto LAB_101770e4;
            }
            if (in_ECX[0x98] == iVar5) goto LAB_10177069;
          }
        }
      }
    }
    uVar4 = FUN_1005d5d0(param_1,param_2);
  }
  ExceptionList = local_10;
  return uVar4;
}


// ==== 101770ee Catch@101770ee

void Catch_101770ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10177102 Catch@10177102

void Catch_10177102(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEquipItemWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10177120 FUN_10177120

void FUN_10177120(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  FString *this;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  bool bVar7;
  UClass *pUVar8;
  uint uStack_510;
  undefined4 local_500 [2];
  int local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_44c [2];
  int local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_434;
  undefined4 local_398;
  undefined4 local_394;
  int local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_380;
  undefined4 local_30c;
  undefined4 local_2e4 [2];
  int local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_230;
  undefined4 local_22c;
  int local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_1a4;
  undefined4 local_17c;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_c4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  L2ParamStack local_b0 [4];
  FString local_ac [12];
  UObject *local_a0;
  char local_99;
  undefined1 *local_98;
  void *local_94;
  undefined1 *puStack_90;
  uint local_8c;
  ushort local_88 [64];
  uint local_8;
  
  puStack_90 = &LAB_10212c5b;
  local_94 = ExceptionList;
  uStack_510 = DAT_103554c4 ^ (uint)local_88;
  local_98 = (undefined1 *)&uStack_510;
  ExceptionList = &local_94;
  local_b8 = 0;
  local_8c = 0;
  local_8 = uStack_510;
  FUN_1005d800(param_1,param_2);
  if (in_ECX[0xe2] == 0) {
    local_a0 = (UObject *)(param_2 & 0xffff);
    local_b4 = param_2 >> 0x10;
    if ((-1 < in_ECX[0x98]) && (in_ECX[0x98] < 0x14)) {
      for (iVar6 = 0; iVar2 = in_ECX[0x76], local_c4 = iVar6, iVar6 < iVar2; iVar6 = iVar6 + 1) {
        piVar1 = (int *)(in_ECX[0x75] + iVar6 * 4);
        iVar2 = (**(code **)(*in_ECX + 500))
                          (*(undefined4 *)(*piVar1 + 0x1e6c),*(undefined4 *)(*piVar1 + 0x1e58));
        if (iVar2 == 0x10) {
          bVar7 = in_ECX[0x98] == 5;
LAB_1017726d:
          if (bVar7) {
LAB_10177232:
            iVar2 = in_ECX[0x76];
            break;
          }
        }
        else {
          if ((iVar2 == 0xf) || (iVar2 == 0x11)) {
            bVar7 = in_ECX[0x98] == 6;
            goto LAB_1017726d;
          }
          if (iVar2 == 0x12) {
            bVar7 = in_ECX[0x98] == 0;
            goto LAB_1017726d;
          }
          if (in_ECX[0x98] == iVar2) goto LAB_10177232;
        }
      }
      if (iVar6 != iVar2) {
        if (in_ECX[0x90] == 0) goto LAB_10177bc1;
        iVar2 = *(int *)(in_ECX[0x75] + iVar6 * 4);
        if (iVar2 == 0) {
LAB_10177257:
          in_ECX[0x90] = 0;
          goto LAB_1017718f;
        }
        local_bc = local_b4 & 0xffff;
        local_b4 = (uint)local_a0 & 0xffff;
        iVar3 = FUN_10059330(local_b4,local_bc);
        if (iVar3 == 0) {
          iVar6 = FUN_10145930(1);
          if (iVar6 != 0) goto LAB_10177bc1;
          uVar5 = FUN_1002c9c0();
          appSprintf(local_88,(ushort *)&DAT_1022dde0,uVar5);
          iVar6 = *(int *)(DAT_103663bc + 0x50);
          in_ECX[0x9a] = *(int *)(iVar6 + 0x228);
          in_ECX[0x9b] = *(int *)(iVar6 + 0x22c);
          in_ECX[0x9c] = *(int *)(iVar6 + 0x230);
          iVar6 = FUN_1002cc80();
          if ((iVar6 == 0) || (*(int *)(iVar2 + 0x1e64) < 2)) {
            FUN_1000ef40();
            local_8c._0_1_ = 0xe;
            local_2e4[0] = 4;
            local_2d8 = 1;
            local_2d4 = 0;
            local_2dc = in_ECX[0x2e];
            FUN_1000dd30(400);
            FUN_1000dcb0(local_88,0,0);
            FUN_1000df10(*(undefined4 *)(iVar2 + 0x1e58),0xffffffff,0xffffffff);
            iVar6 = *(int *)(DAT_103663bc + 0x50);
            local_254 = *(undefined4 *)(iVar6 + 0x228);
            local_250 = *(undefined4 *)(iVar6 + 0x22c);
            local_24c = *(undefined4 *)(iVar6 + 0x230);
            FUN_1016e1b0(local_2e4);
            local_8c = (uint)local_8c._1_3_ << 8;
          }
          else {
            FUN_1000ef40();
            local_8c._0_1_ = 0xd;
            local_17c = 4;
            local_170 = 1;
            local_16c = 1;
            local_178 = 3;
            local_174 = in_ECX[0x2e];
            FUN_1000dd30(0x47);
            FUN_1000dcb0(local_88,0,0);
            local_164 = *(undefined4 *)(iVar2 + 0x1e5c);
            local_f0 = *(undefined4 *)(iVar2 + 0x1e64);
            FUN_1000df10(*(undefined4 *)(iVar2 + 0x1e58),0xffffffff,0xffffffff);
            iVar6 = *(int *)(DAT_103663bc + 0x50);
            local_ec = *(undefined4 *)(iVar6 + 0x228);
            local_e8 = *(undefined4 *)(iVar6 + 0x22c);
            local_e4 = *(undefined4 *)(iVar6 + 0x230);
            FUN_1016e1b0(&local_17c);
            local_8c = (uint)local_8c._1_3_ << 8;
          }
          goto LAB_10177bbc;
        }
        local_a0 = *(UObject **)(iVar3 + 4);
        if (local_a0 == (UObject *)0x0) goto LAB_101774ac;
        iVar3 = UObject::IsA(local_a0,(UClass *)&DAT_103a09b0);
        if (iVar3 == 0) {
          iVar3 = UObject::IsA(local_a0,(UClass *)&DAT_10368830);
          if (iVar3 != 0) {
            local_b4 = FUN_10176a50(local_a0);
            L2ParamStack::L2ParamStack(local_b0,10);
            local_8c = CONCAT31(local_8c._1_3_,2);
            L2ParamStack::PushBack(local_b0,(void *)0x1);
            pvVar4 = (void *)FUN_100473a0();
            L2ParamStack::PushBack(local_b0,pvVar4);
            L2ParamStack::PushBack(local_b0,*(void **)(*(int *)(in_ECX[0x75] + iVar6 * 4) + 0x1e58))
            ;
            L2ParamStack::PushBack(local_b0,(void *)0x1);
            FUN_1015a3b0(local_b0);
            goto LAB_1017744e;
          }
          iVar3 = UObject::IsA(local_a0,(UClass *)&DAT_10364488);
          if (iVar3 == 0) {
LAB_101774ac:
            local_99 = '\0';
          }
          else {
            this = (FString *)FUN_10057590(local_ac);
            local_8c = CONCAT31(local_8c._1_3_,3);
            local_b8 = local_b8 | 1;
            iVar3 = FString::operator==(this,(ushort *)L"PetInvenWnd");
            local_99 = '\x01';
            if (iVar3 == 0) goto LAB_101774ac;
          }
          local_8c = 0;
          if ((local_b8 & 1) != 0) {
            local_b8 = local_b8 & 0xfffffffe;
            FString::~FString(local_ac);
          }
          if (local_99 == '\0') {
            if ((local_a0 != (UObject *)0x0) &&
               (iVar6 = UObject::IsA(local_a0,(UClass *)&DAT_10357870), iVar6 != 0)) {
              pUVar8 = (UClass *)&DAT_103a1410;
              iVar6 = FUN_10058020();
              iVar6 = UObject::IsA(*(UObject **)(*(int *)(iVar6 + 0xc) + 4),pUVar8);
              if (iVar6 != 0) {
                iVar6 = FUN_10058020();
                iVar6 = *(int *)(*(int *)(iVar6 + 0xc) + 4);
                *(undefined4 *)(iVar6 + 0x200) = 0;
                *(undefined4 *)(iVar6 + 0x1fc) = 0;
                FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
                local_8c._0_1_ = 6;
                FUN_10003e80(local_ac);
                local_8c._0_1_ = 0;
                FString::~FString(local_ac);
                FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
                local_8c._0_1_ = 7;
                FUN_10003f50(local_ac);
                local_8c._0_1_ = 0;
                FString::~FString(local_ac);
                FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
                local_8c._0_1_ = 8;
                FUN_10003e80(local_ac);
                local_8c._0_1_ = 0;
                FString::~FString(local_ac);
                FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
                local_8c._0_1_ = 9;
                FUN_10003f50(local_ac);
                local_8c = (uint)local_8c._1_3_ << 8;
                FString::~FString(local_ac);
                iVar6 = FUN_10179700(local_b4,local_bc);
                if (iVar6 == 0) {
                  iVar6 = FUN_10179770(local_b4,local_bc);
                  if (iVar6 != 0) {
                    iVar6 = FUN_10187a60(iVar2 + 0x1e5c);
                    iVar3 = FUN_1014dd00();
                    if (((*(int *)(iVar3 + 0x2a8) != 0) && (iVar6 != 0)) &&
                       (*(int *)(iVar6 + 0xcc) != 0)) {
                      uVar5 = FUN_1002cb70();
                      appSprintf(local_88,(ushort *)&DAT_1022dde0,uVar5);
                      FUN_1000ef40();
                      local_8c._0_1_ = 0xc;
                      local_500[0] = 6;
                      local_4f4 = 1;
                      local_4f0 = 0;
                      local_4f8 = in_ECX[0x2e];
                      FUN_1000dd30(0x150);
                      FUN_1000dcb0(local_88,0,0);
                      FUN_1000df10(*(undefined4 *)(iVar2 + 0x1e58),0xffffffff,0xffffffff);
                      FUN_1016e1b0(local_500);
                      local_8c = (uint)local_8c._1_3_ << 8;
                      goto LAB_10177bbc;
                    }
                  }
                }
                else {
                  iVar6 = FUN_1002cc80();
                  if ((iVar6 == 0) || (*(int *)(iVar2 + 0x1e64) < 2)) {
                    uVar5 = FUN_1002cb70();
                    appSprintf(local_88,(ushort *)&DAT_1022dde0,uVar5);
                    FUN_1000ef40();
                    local_8c._0_1_ = 0xb;
                    local_44c[0] = 5;
                    local_440 = 1;
                    local_43c = 0;
                    local_444 = in_ECX[0x2e];
                    FUN_1000dd30(0x4a);
                    FUN_1000dcb0(local_88,0,0);
                    local_434 = *(undefined4 *)(iVar2 + 0x1e5c);
                    FUN_1000df10(*(undefined4 *)(iVar2 + 0x1e58),0xffffffff,0xffffffff);
                    FUN_1016e1b0(local_44c);
                    local_8c = (uint)local_8c._1_3_ << 8;
                  }
                  else {
                    uVar5 = FUN_1002cb70();
                    appSprintf(local_88,(ushort *)&DAT_1022dde0,uVar5);
                    FUN_1000ef40();
                    local_8c._0_1_ = 10;
                    local_230 = 5;
                    local_224 = 1;
                    local_220 = 1;
                    local_22c = 3;
                    local_228 = in_ECX[0x2e];
                    FUN_1000dd30(0x49);
                    FUN_1000dcb0(local_88,0,0);
                    local_218 = *(undefined4 *)(iVar2 + 0x1e5c);
                    local_1a4 = *(undefined4 *)(iVar2 + 0x1e64);
                    FUN_1000df10(*(undefined4 *)(iVar2 + 0x1e58),0xffffffff,0xffffffff);
                    FUN_1016e1b0(&local_230);
                    local_8c = (uint)local_8c._1_3_ << 8;
                  }
LAB_10177bbc:
                  FUN_1000e440();
                }
              }
            }
          }
          else {
            iVar3 = FUN_1002cc80();
            if ((iVar3 != 0) && (1 < *(int *)(iVar2 + 0x1e64))) {
              uVar5 = FUN_1002c9c0();
              appSprintf(local_88,(ushort *)&DAT_1022dde0,uVar5);
              FUN_1000ef40();
              local_8c._0_1_ = 4;
              local_398 = 0x36;
              local_38c = 1;
              local_388 = 1;
              local_394 = 3;
              local_390 = in_ECX[0x2e];
              FUN_1000dd30(0x23f);
              FUN_1000dcb0(local_88,0,0);
              local_380 = *(undefined4 *)(iVar2 + 0x1e5c);
              local_30c = *(undefined4 *)(iVar2 + 0x1e64);
              FUN_1000df10(*(undefined4 *)(iVar2 + 0x1e58),0xffffffff,0xffffffff);
              FUN_1016e1b0(&local_398);
              local_8c = (uint)local_8c._1_3_ << 8;
              goto LAB_10177bbc;
            }
            L2ParamStack::L2ParamStack(local_b0,10);
            local_8c._0_1_ = 5;
            L2ParamStack::PushBack(local_b0,*(void **)(*(int *)(in_ECX[0x75] + iVar6 * 4) + 0x1e58))
            ;
            L2ParamStack::PushBack(local_b0,(void *)0x1);
            FUN_10144cc0(local_b0);
            local_8c = (uint)local_8c._1_3_ << 8;
            L2ParamStack::~L2ParamStack(local_b0);
          }
        }
        else {
          if (*(int *)(iVar2 + 0x1edc) != 0) goto LAB_10177257;
          L2ParamStack::L2ParamStack(local_b0,10);
          local_8c = CONCAT31(local_8c._1_3_,1);
          pvVar4 = *(void **)(*(int *)(in_ECX[0x75] + iVar6 * 4) + 0x1e6c);
          if (((uint)pvVar4 & 6) == 0) {
            if (((uint)pvVar4 & 0x30) == 0) {
              L2ParamStack::PushBack(local_b0,pvVar4);
              FUN_10142f70(local_b0);
            }
            else {
              iVar2 = FUN_1014dd00();
              iVar6 = *(int *)(*(int *)(in_ECX[0x75] + iVar6 * 4) + 0x1e58);
              if (*(int *)(iVar2 + 0xa8) == iVar6) {
                L2ParamStack::PushBack(local_b0,(void *)0x10);
                FUN_10142f70(local_b0);
              }
              else {
                if (*(int *)(iVar2 + 0xac) == iVar6) {
                  L2ParamStack::PushBack(local_b0,(void *)0x20);
                }
                FUN_10142f70(local_b0);
              }
            }
          }
          else {
            iVar2 = FUN_1014dd00();
            if (*(int *)(iVar2 + 0x9c) == *(int *)(*(int *)(in_ECX[0x75] + iVar6 * 4) + 0x1e58)) {
              L2ParamStack::PushBack(local_b0,(void *)0x2);
            }
            if (*(int *)(iVar2 + 0xa0) == *(int *)(*(int *)(in_ECX[0x75] + iVar6 * 4) + 0x1e58)) {
              L2ParamStack::PushBack(local_b0,(void *)0x4);
            }
            FUN_10142f70(local_b0);
          }
LAB_1017744e:
          FUN_10176850();
          in_ECX[0x98] = -1;
          local_8c = local_8c & 0xffffff00;
          L2ParamStack::~L2ParamStack(local_b0);
        }
LAB_10177bc1:
        in_ECX[0x90] = 0;
        FUN_1005d800(param_1,param_2);
        goto LAB_1017718f;
      }
    }
  }
  in_ECX[0x90] = 0;
LAB_1017718f:
  ExceptionList = local_94;
  __security_check_cookie(local_8 ^ (uint)local_88);
  return;
}


// ==== 10177be5 Catch@10177be5

void Catch_10177be5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 10177bf9 Catch@10177bf9

void Catch_10177bf9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEquipItemWnd::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10177c20 FUN_10177c20

undefined4 FUN_10177c20(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  L2ParamStack aLStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10212cb4;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  iVar4 = 0;
  if (in_ECX[0xe2] == 0) {
    iVar2 = FUN_10176880(param_2 & 0xffff,param_2 >> 0x10);
    in_ECX[0x98] = iVar2;
    if (((-1 < iVar2) && (iVar2 < 0x14)) && (0 < in_ECX[0x76])) {
      do {
        iVar2 = *(int *)(in_ECX[0x75] + iVar4 * 4);
        iVar3 = (**(code **)(*in_ECX + 500))
                          (*(undefined4 *)(iVar2 + 0x1e6c),*(undefined4 *)(iVar2 + 0x1e58),uVar1);
        if (iVar3 == 0x10) {
          if (in_ECX[0x98] == 5) {
            L2ParamStack::L2ParamStack(aLStack_1c,10);
            uStack_4 = 0;
            L2ParamStack::PushBack(aLStack_1c,*(void **)(iVar2 + 0x1e6c));
LAB_10177e5c:
            FUN_10142f70(aLStack_1c);
            if (DAT_103663bc != 0) {
              FUN_101add10();
            }
            uStack_4 = 0xffffffff;
            L2ParamStack::~L2ParamStack(aLStack_1c);
            break;
          }
        }
        else if ((iVar3 == 0xf) || (iVar3 == 0x11)) {
          if (in_ECX[0x98] == 6) {
            L2ParamStack::L2ParamStack(aLStack_1c,10);
            uStack_4 = 1;
LAB_10177e46:
            L2ParamStack::PushBack(aLStack_1c,*(void **)(iVar2 + 0x1e6c));
            goto LAB_10177e5c;
          }
        }
        else if (iVar3 == 0x12) {
          if (in_ECX[0x98] == 0) {
            L2ParamStack::L2ParamStack(aLStack_1c,10);
            uStack_4 = 2;
            goto LAB_10177e46;
          }
        }
        else if (in_ECX[0x98] == iVar3) {
          L2ParamStack::L2ParamStack(aLStack_1c,10);
          uStack_4 = 3;
          if (((uint)*(void **)(iVar2 + 0x1e6c) & 6) == 0) {
            if ((*(byte *)(*(int *)(in_ECX[0x75] + iVar4 * 4) + 0x1e6c) & 0x30) == 0) {
              L2ParamStack::PushBack(aLStack_1c,*(void **)(iVar2 + 0x1e6c));
            }
            else {
              iVar4 = FUN_1014dd00();
              if (*(int *)(iVar4 + 0xa8) == *(int *)(iVar2 + 0x1e58)) {
                L2ParamStack::PushBack(aLStack_1c,(void *)0x10);
              }
              if (*(int *)(iVar4 + 0xac) == *(int *)(iVar2 + 0x1e58)) {
                L2ParamStack::PushBack(aLStack_1c,(void *)0x20);
              }
            }
          }
          else {
            iVar4 = FUN_1014dd00();
            if (*(int *)(iVar4 + 0x9c) == *(int *)(iVar2 + 0x1e58)) {
              L2ParamStack::PushBack(aLStack_1c,(void *)0x2);
            }
            if (*(int *)(iVar4 + 0xa0) == *(int *)(iVar2 + 0x1e58)) {
              L2ParamStack::PushBack(aLStack_1c,(void *)0x4);
            }
          }
          goto LAB_10177e5c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < in_ECX[0x76]);
    }
    in_ECX[0x90] = 0;
  }
  else {
    in_ECX[0x90] = 0;
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 10177ec0 FUN_10177ec0

undefined4 FUN_10177ec0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  void *pvVar4;
  uint uStack_40;
  L2ParamStack local_30 [24];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10212cf4;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  if (in_ECX[0xe2] == 0) {
    in_ECX[0x74] = 1;
    iVar1 = FUN_10176880(param_2 & 0xffff,param_2 >> 0x10);
    in_ECX[0x98] = iVar1;
    if ((-1 < iVar1) && (iVar1 < 0x14)) {
      for (; local_18 = iVar3, iVar3 < in_ECX[0x76]; iVar3 = iVar3 + 1) {
        iVar1 = *(int *)(in_ECX[0x75] + iVar3 * 4);
        iVar2 = (**(code **)(*in_ECX + 500))
                          (*(undefined4 *)(iVar1 + 0x1e6c),*(undefined4 *)(iVar1 + 0x1e58));
        if (iVar2 == 0x10) {
          if (in_ECX[0x98] == 5) {
            L2ParamStack::L2ParamStack(local_30,10);
            local_8 = CONCAT31(local_8._1_3_,1);
LAB_10177f82:
            pvVar4 = *(void **)(iVar1 + 0x1e6c);
            goto LAB_10177f89;
          }
        }
        else if ((iVar2 == 0xf) || (iVar2 == 0x11)) {
          if (in_ECX[0x98] == 6) {
            L2ParamStack::L2ParamStack(local_30,10);
            local_8 = CONCAT31(local_8._1_3_,2);
            L2ParamStack::PushBack(local_30,*(void **)(iVar1 + 0x1e6c));
            goto LAB_10177f96;
          }
        }
        else if (iVar2 == 0x12) {
          if (in_ECX[0x98] == 0) {
            L2ParamStack::L2ParamStack(local_30,10);
            local_8 = CONCAT31(local_8._1_3_,3);
            L2ParamStack::PushBack(local_30,*(void **)(iVar1 + 0x1e6c));
LAB_10177f96:
            FUN_10142f70(local_30);
            local_8 = local_8 & 0xffffff00;
            L2ParamStack::~L2ParamStack(local_30);
            break;
          }
        }
        else if (in_ECX[0x98] == iVar2) {
          L2ParamStack::L2ParamStack(local_30,10);
          local_8 = CONCAT31(local_8._1_3_,4);
          if ((*(byte *)(iVar1 + 0x1e6c) & 6) == 0) {
            if ((*(byte *)(*(int *)(in_ECX[0x75] + iVar3 * 4) + 0x1e6c) & 0x30) == 0)
            goto LAB_10177f82;
            iVar3 = FUN_1014dd00();
            if (*(int *)(iVar3 + 0xa8) == *(int *)(iVar1 + 0x1e58)) {
              L2ParamStack::PushBack(local_30,(void *)0x10);
            }
            if (*(int *)(iVar3 + 0xac) == *(int *)(iVar1 + 0x1e58)) {
              pvVar4 = (void *)0x20;
              goto LAB_10177f89;
            }
          }
          else {
            iVar3 = FUN_1014dd00();
            if (*(int *)(iVar3 + 0x9c) == *(int *)(iVar1 + 0x1e58)) {
              L2ParamStack::PushBack(local_30,(void *)0x2);
            }
            if (*(int *)(iVar3 + 0xa0) == *(int *)(iVar1 + 0x1e58)) {
              pvVar4 = (void *)0x4;
LAB_10177f89:
              L2ParamStack::PushBack(local_30,pvVar4);
            }
          }
          goto LAB_10177f96;
        }
      }
    }
    FUN_10176850();
    in_ECX[0x98] = -1;
    in_ECX[0x90] = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1017811f Catch@1017811f

void Catch_1017811f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10178133 Catch@10178133

void Catch_10178133(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEquipItemWnd::OnLButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10178150 FUN_10178150

undefined4 FUN_10178150(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212d10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1d8); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1d4) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1d8); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1d4),4,0);
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101781e9 Catch@101781e9

void Catch_101781e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101781fd Catch@101781fd

void Catch_101781fd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEquipItemWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10178220 FUN_10178220

void FUN_10178220(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 0x1d8)) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1d4) + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x1d8));
  }
  FArray::Empty((FArray *)(in_ECX + 0x1d4),4,0);
  *(undefined4 *)(in_ECX + 0x244) = 0;
  return;
}


// ==== 10178270 FUN_10178270

void FUN_10178270(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10212d39;
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


// ==== 10178310 FUN_10178310

void FUN_10178310(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10212d96;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  local_8 = 0;
  *in_ECX = NCEquipItemWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x75));
  local_8 = CONCAT31(local_8._1_3_,2);
  FArray::FArray((FArray *)(in_ECX + 0x78));
  in_ECX[0x8a] = 0;
  in_ECX[0x8d] = 0;
  in_ECX[0x92] = 5;
  in_ECX[0x93] = 3;
  in_ECX[0x96] = 0xf;
  in_ECX[0x97] = param_1;
  in_ECX[0x98] = 0xffffffff;
  in_ECX[0x99] = 0xffffffff;
  in_ECX[0xe1] = 0xffffffff;
  in_ECX[0x90] = 0;
  in_ECX[0x73] = 0xffffffff;
  in_ECX[0x74] = 0;
  in_ECX[0x91] = 0;
  in_ECX[0xe2] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101783f9 Catch@101783f9

void Catch_101783f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017840d Catch@1017840d

void Catch_1017840d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEquipItemWnd::NCEquipItemWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10178430 FUN_10178430

void FUN_10178430(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10212de4;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCEquipItemWnd::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  FUN_10178270(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10030c80();
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 101784b0 FUN_101784b0

void FUN_101784b0(byte param_1)

{
  void *in_ECX;
  
  FUN_10178430();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38c);
  }
  return;
}


// ==== 101784f0 FUN_101784f0

int FUN_101784f0(ushort param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = (uint)param_1;
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 <= (int)uVar2) && ((int)uVar2 < *(int *)(in_ECX + 8) + iVar1)) {
    return (uVar2 - iVar1) * 0x10 + *(int *)(in_ECX + 0xc);
  }
  return 0;
}


// ==== 10178520 FUN_10178520

int FUN_10178520(ushort param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = (uint)param_1;
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 <= (int)uVar2) && ((int)uVar2 < *(int *)(in_ECX + 8) + iVar1)) {
    return *(int *)(in_ECX + 0x10) + (uVar2 - iVar1) * 0x14;
  }
  return 0;
}


// ==== 10178550 FUN_10178550

undefined4 FUN_10178550(ushort param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  
  uVar2 = (uint)param_1;
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 <= (int)uVar2) && ((int)uVar2 < *(int *)(in_ECX + 8) + iVar1)) {
    iVar3 = 0;
    do {
      if ((int)param_2 >> ((byte)iVar3 & 0x1f) == 1) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    if ((*(uint *)(*(int *)(in_ECX + 0x10) + 0x10 + (uVar2 - iVar1) * 0x14) & param_2) != 0) {
      return *(undefined4 *)(in_ECX + 0x14 + iVar3 * 4);
    }
  }
  return 0xffffffff;
}


// ==== 101785b0 FUN_101785b0

void FUN_101785b0(void)

{
  UL2Font *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212e09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2Font::UL2Font(in_ECX);
  *(undefined ***)in_ECX = NL2Font::vftable;
  *(undefined ***)(in_ECX + 0x34) = NL2Font::vftable;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10178630 FUN_10178630

int FUN_10178630(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x3c) == 0) {
    if (*(int *)(in_ECX + 0x4c) != 0) {
      iVar1 = *(int *)(in_ECX + 0x48);
      iVar3 = 0;
      if (0 < iVar1) {
        while (((iVar2 = FUN_101784f0(param_1), iVar2 == 0 || (*(int *)(iVar2 + 4) < 1)) ||
               (*(int *)(iVar2 + 0xc) < 1))) {
          iVar3 = iVar3 + 1;
          if (iVar1 <= iVar3) {
            return 0;
          }
        }
        return iVar2;
      }
    }
  }
  else if ((*(int *)(in_ECX + 0x3c) == 1) && (*(int *)(in_ECX + 0x50) != 0)) {
    iVar1 = *(int *)(in_ECX + 0x48);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = FUN_10178520(param_1);
        if (((iVar2 != 0) && (0 < *(int *)(iVar2 + 4))) && (0 < *(int *)(iVar2 + 0xc))) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return 0;
}


// ==== 101786d0 FUN_101786d0

undefined4 FUN_101786d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x50) == 0) {
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0x48);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_10178520(param_1);
      if (((iVar2 != 0) && (0 < *(int *)(iVar2 + 4))) && (0 < *(int *)(iVar2 + 0xc))) {
        return *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


// ==== 10178730 FUN_10178730

int FUN_10178730(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x50) == 0) {
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0x48);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_10178550(param_1,param_2);
      if (-1 < iVar2) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


// ==== 101787a0 FUN_101787a0

void FUN_101787a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10212e39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NL2Font::vftable;
  *(undefined ***)(in_ECX + 0x34) = NL2Font::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UL2Font::~UL2Font((UL2Font *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10178820 FUN_10178820

undefined4 FUN_10178820(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 10178830 FUN_10178830

bool FUN_10178830(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x38) != 0;
}


// ==== 10178840 FUN_10178840

void FUN_10178840(byte param_1)

{
  void *in_ECX;
  
  FUN_101787a0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x54);
  }
  return;
}


// ==== 10178870 FUN_10178870

void FUN_10178870(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  UClass *pUVar1;
  int iVar2;
  
  pUVar1 = UFinalBlend::StaticClass();
  iVar2 = UStruct::IsChildOf(param_1,(UStruct *)pUVar1);
  if (iVar2 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 101788e0 FUN_101788e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101788e0(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(uint *)(in_ECX + 8) = param_2;
  uVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    (-(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) |
                     (uint)((ulonglong)param_2 * 0x10),&DAT_1022f8a0);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  if (0 < *(int *)(in_ECX + 8)) {
    iVar3 = 0;
    do {
      iVar2 = FUN_101c4015(*(int *)(in_ECX + 0xc) + iVar3,1,0x10,param_3);
      _DAT_103a0470 = _DAT_103a0470 + iVar2;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 < *(int *)(in_ECX + 8));
  }
  return 1;
}


// ==== 10178970 FUN_10178970

void FUN_10178970(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  return;
}


// ==== 101789a0 FUN_101789a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101789a0(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(uint *)(in_ECX + 8) = param_2;
  uVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    (-(uint)((int)((ulonglong)param_2 * 0x14 >> 0x20) != 0) |
                     (uint)((ulonglong)param_2 * 0x14),&DAT_1022f8a0);
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  iVar2 = 0;
  puVar4 = (undefined4 *)(in_ECX + 0x14);
  do {
    *puVar4 = *(undefined4 *)(param_4 + iVar2 * 4);
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 < 0x20);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    iVar5 = 0;
    do {
      iVar3 = FUN_101c4015(*(int *)(in_ECX + 0x10) + iVar5,1,0x14,param_1);
      _DAT_103a0470 = _DAT_103a0470 + iVar3;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 8));
  }
  return 1;
}


// ==== 10178a60 FUN_10178a60

void FUN_10178a60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = NCharSet::vftable;
  FUN_10178970();
  return;
}


// ==== 10178a70 FUN_10178a70

void FUN_10178a70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = NCharSet::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = NCharSetEX::vftable;
  return;
}


// ==== 10178ad0 FUN_10178ad0

void FUN_10178ad0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10212e98;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = NCharSetEX::vftable;
  local_4 = 0;
  FUN_10178970(uVar1);
  local_4 = 0xffffffff;
  FUN_10178a60();
  ExceptionList = local_c;
  return;
}


// ==== 10178b30 FUN_10178b30

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10178b30(ushort *param_1,wchar_t *param_2)

{
  byte bVar1;
  uint uVar2;
  FILE *_File;
  char *_Filename;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  int in_ECX;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  bool bVar10;
  ushort *puVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  ushort *puVar14;
  ulong uVar15;
  char *_Mode;
  UObject *pUVar16;
  uint local_c0;
  undefined1 local_b0 [128];
  uint *local_30;
  ushort *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint *local_20;
  byte local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10212ed6;
  local_10 = ExceptionList;
  local_c0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = param_1;
  local_14 = local_c0;
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar4 = winGetSizeANSI((ushort *)param_2);
    if (iVar4 == 0) {
      puVar8 = (uint *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)param_2);
      puVar8 = &local_c0;
    }
    _Mode = "rb";
    iVar4 = winGetSizeANSI((ushort *)param_2);
    _Filename = winToANSI((char *)puVar8,(ushort *)param_2,iVar4);
    _File = _fopen(_Filename,_Mode);
  }
  else {
    _File = __wfopen(param_2,L"rb");
  }
  if (_File != (FILE *)0x0) {
    FUN_101c4015(local_1c,1,4,_File);
    local_1c[4] = 0;
    pbVar3 = local_1c;
    pbVar9 = PTR_DAT_1035215c;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_10178c15:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_10178c1a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_10178c15;
      pbVar3 = pbVar3 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10178c1a:
    if (iVar4 == 0) {
      _DAT_103a0470 = _DAT_103a0470 + 4;
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    }
    else {
      pbVar3 = local_1c;
      pbVar9 = PTR_DAT_10352160;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_10178c55:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_10178c5a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_10178c55;
        pbVar3 = pbVar3 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10178c5a:
      if (iVar4 == 0) {
        _DAT_103a0470 = _DAT_103a0470 + 4;
        *(undefined4 *)(in_ECX + 0x3c) = 1;
      }
      else {
        *(undefined4 *)(in_ECX + 0x3c) = 0;
        _fseek(_File,0,0);
      }
    }
    iVar4 = FUN_101c4015(in_ECX + 0x40,1,4,_File);
    _DAT_103a0470 = _DAT_103a0470 + iVar4;
    iVar4 = FUN_101c4015(in_ECX + 0x44,1,4,_File);
    _DAT_103a0470 = _DAT_103a0470 + iVar4;
    iVar4 = FUN_101c4015((uint *)(in_ECX + 0x48),1,4,_File);
    uVar2 = *(uint *)(in_ECX + 0x48);
    _DAT_103a0470 = _DAT_103a0470 + iVar4;
    if (uVar2 != 0) {
      if (*(int *)(in_ECX + 0x3c) == 0) {
        uVar7 = -(uint)((int)((ulonglong)uVar2 * 0x10 >> 0x20) != 0) |
                (uint)((ulonglong)uVar2 * 0x10);
        local_30 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)
                                     (-(uint)(0xfffffffb < uVar7) | uVar7 + 4,&DAT_1022f8a0);
        local_8 = 0;
        if (local_30 == (uint *)0x0) {
          local_20 = (uint *)0x0;
        }
        else {
          *local_30 = uVar2;
          local_20 = local_30 + 1;
          _eh_vector_constructor_iterator_
                    (local_20,0x10,uVar2,(_func_void_void_ptr *)&LAB_10178780,FUN_10178a60);
        }
        local_8 = 0xffffffff;
        *(uint **)(in_ECX + 0x4c) = local_20;
        local_20 = (uint *)0x0;
        if (0 < *(int *)(in_ECX + 0x48)) {
          iVar4 = 0;
          do {
            iVar5 = FUN_101c4015(&local_24,1,4,_File);
            _DAT_103a0470 = _DAT_103a0470 + iVar5;
            iVar5 = FUN_101c4015(&local_28,1,4,_File);
            _DAT_103a0470 = _DAT_103a0470 + iVar5;
            iVar5 = (*(code *)**(undefined4 **)(iVar4 + *(int *)(in_ECX + 0x4c)))
                              (local_24,local_28,_File);
            if (iVar5 == 0) goto LAB_10178f08;
            local_20 = (uint *)((int)local_20 + 1);
            iVar4 = iVar4 + 0x10;
          } while ((int)local_20 < *(int *)(in_ECX + 0x48));
        }
      }
      else if (*(int *)(in_ECX + 0x3c) == 1) {
        uVar7 = -(uint)((int)((ulonglong)uVar2 * 0x94 >> 0x20) != 0) |
                (uint)((ulonglong)uVar2 * 0x94);
        local_30 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)
                                     (-(uint)(0xfffffffb < uVar7) | uVar7 + 4,&DAT_1022f8a0);
        local_8 = 1;
        if (local_30 == (uint *)0x0) {
          local_20 = (uint *)0x0;
        }
        else {
          *local_30 = uVar2;
          local_20 = local_30 + 1;
          _eh_vector_constructor_iterator_(local_20,0x94,uVar2,FUN_10178a70,FUN_10178ad0);
        }
        local_8 = 0xffffffff;
        *(uint **)(in_ECX + 0x50) = local_20;
        local_20 = (uint *)0x0;
        if (0 < *(int *)(in_ECX + 0x48)) {
          do {
            iVar4 = FUN_101c4015(&local_24,1,4,_File);
            _DAT_103a0470 = _DAT_103a0470 + iVar4;
            iVar4 = FUN_101c4015(&local_28,1,4,_File);
            _DAT_103a0470 = _DAT_103a0470 + iVar4;
            iVar4 = FUN_101c4015(local_b0,1,0x80,_File);
            _DAT_103a0470 = _DAT_103a0470 + iVar4;
            iVar4 = FUN_101789a0(local_24,local_28,_File,local_b0);
            if (iVar4 == 0) goto LAB_10178f08;
            local_20 = (uint *)((int)local_20 + 1);
          } while ((int)local_20 < *(int *)(in_ECX + 0x48));
        }
      }
    }
    _fclose(_File);
    puVar11 = local_2c;
    iVar4 = 0;
    pUVar12 = (UObject *)0xffffffff;
    puVar14 = local_2c;
    pUVar6 = UTexture::StaticClass();
    pUVar12 = UObject::StaticFindObject(pUVar6,pUVar12,puVar14,iVar4);
    *(UObject **)(in_ECX + 0x38) = pUVar12;
    if (pUVar12 == (UObject *)0x0) {
      uVar15 = 1;
      pUVar13 = pUVar12;
      pUVar16 = pUVar12;
      pUVar6 = UTexture::StaticClass();
      pUVar12 = UObject::StaticLoadObject
                          (pUVar6,pUVar12,puVar11,(ushort *)pUVar13,uVar15,(UPackageMap *)pUVar16);
      *(UObject **)(in_ECX + 0x38) = pUVar12;
    }
    if (*(UObject **)(in_ECX + 0x38) != (UObject *)0x0) {
      UObject::SetFlags(*(UObject **)(in_ECX + 0x38),0x4000000);
    }
  }
LAB_10178f08:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10178f30 FUN_10178f30

void FUN_10178f30(void)

{
  void *pvVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x48)) {
    do {
      if (*(int *)(in_ECX + 0x4c) != 0) {
        FUN_10178970();
      }
      if (*(int *)(in_ECX + 0x50) != 0) {
        FUN_10178970();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x48));
  }
  pvVar1 = *(void **)(in_ECX + 0x4c);
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_10178a60);
    (**(code **)(**(int **)GMalloc_exref + 8))((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x4c) = 0;
  }
  pvVar1 = *(void **)(in_ECX + 0x50);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x94,*(int *)((int)pvVar1 + -4),FUN_10178ad0);
    (**(code **)(**(int **)GMalloc_exref + 8))((int)pvVar1 + -4);
    *(undefined4 *)(in_ECX + 0x50) = 0;
  }
  if (*(UObject **)(in_ECX + 0x38) != (UObject *)0x0) {
    UObject::ClearFlags(*(UObject **)(in_ECX + 0x38),0x4000000);
    *(undefined4 *)(in_ECX + 0x38) = 0;
  }
  return;
}


// ==== 10179000 FUN_10179000

void FUN_10179000(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100d9a30(&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10179059 Catch@10179059

void Catch_10179059(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017906d Catch@1017906d

void Catch_1017906d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UGlobalTempObjects::AddGlobalObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10179090 FUN_10179090

int FUN_10179090(int param_1)

{
  int iVar1;
  UClass *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uStack_c;
  int *piStack_8;
  
  piStack_8 = (int *)0x1017909a;
  iVar1 = (**(code **)(*in_ECX + 0x70))();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 1) {
    if (DAT_103a09a8 == 0) {
      piStack_8 = (int *)0x0;
      FName::FName((FName *)&uStack_c,0);
      uVar3 = 0xffffffff;
      pUVar2 = UFinalBlend::StaticClass();
      DAT_103a09a8 = FUN_10178870(pUVar2,uVar3);
      piStack_8 = &DAT_103a09a8;
      uStack_c = 0x101790ea;
      FUN_10179000();
    }
    piStack_8 = (int *)0x101790f3;
    uVar3 = (**(code **)(*in_ECX + 0x70))();
    *(undefined4 *)(DAT_103a09a8 + 0x578) = uVar3;
    *(uint *)(DAT_103a09a8 + 0x580) = *(uint *)(DAT_103a09a8 + 0x580) | 8;
    *(undefined1 *)(DAT_103a09a8 + 0x57c) = 2;
    *(uint *)(DAT_103a09a8 + 0x580) = *(uint *)(DAT_103a09a8 + 0x580) | 1;
    *(uint *)(DAT_103a09a8 + 0x580) = *(uint *)(DAT_103a09a8 + 0x580) | 2;
    *(uint *)(DAT_103a09a8 + 0x580) = *(uint *)(DAT_103a09a8 + 0x580) | 4;
    *(undefined1 *)(DAT_103a09a8 + 0x584) = 0;
    return DAT_103a09a8;
  }
  if (DAT_103a09a4 == 0) {
    piStack_8 = (int *)0x0;
    FName::FName((FName *)&uStack_c,0);
    uVar3 = 0xffffffff;
    pUVar2 = UFinalBlend::StaticClass();
    DAT_103a09a4 = FUN_10178870(pUVar2,uVar3);
    piStack_8 = &DAT_103a09a4;
    uStack_c = 0x10179192;
    FUN_10179000();
  }
  piStack_8 = (int *)0x1017919b;
  uVar3 = (**(code **)(*in_ECX + 0x70))();
  *(undefined4 *)(DAT_103a09a4 + 0x578) = uVar3;
  *(uint *)(DAT_103a09a4 + 0x580) = *(uint *)(DAT_103a09a4 + 0x580) | 8;
  *(undefined1 *)(DAT_103a09a4 + 0x57c) = 2;
  *(uint *)(DAT_103a09a4 + 0x580) = *(uint *)(DAT_103a09a4 + 0x580) | 1;
  *(uint *)(DAT_103a09a4 + 0x580) = *(uint *)(DAT_103a09a4 + 0x580) | 2;
  *(uint *)(DAT_103a09a4 + 0x580) = *(uint *)(DAT_103a09a4 + 0x580) | 4;
  *(undefined1 *)(DAT_103a09a4 + 0x584) = 0;
  return DAT_103a09a4;
}


// ==== 10179200 FUN_10179200

void FUN_10179200(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10212f92;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  FString::FString((FString *)(in_ECX + 9),(FString *)(param_1 + 9));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0xc),(FString *)(param_1 + 0xc));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xf),(FString *)(param_1 + 0xf));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x12),(FString *)(param_1 + 0x12));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x15),(FString *)(param_1 + 0x15));
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x18),(FString *)(param_1 + 0x18));
  local_4._0_1_ = 5;
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  FString::FString((FString *)(in_ECX + 0x1e),(FString *)(param_1 + 0x1e));
  local_4._0_1_ = 6;
  in_ECX[0x21] = param_1[0x21];
  in_ECX[0x22] = param_1[0x22];
  in_ECX[0x23] = param_1[0x23];
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  FString::FString((FString *)(in_ECX + 0x27),(FString *)(param_1 + 0x27));
  local_4 = CONCAT31(local_4._1_3_,7);
  FString::FString((FString *)(in_ECX + 0x2a),(FString *)(param_1 + 0x2a));
  ExceptionList = local_c;
  return;
}


// ==== 10179390 FUN_10179390

undefined4 FUN_10179390(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212fb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061b40();
  (**(code **)(*in_ECX + 0x120))(0x20);
  iVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.PS_weightbar1",1);
  in_ECX[0x73] = iVar1;
  iVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.PS_weightbar2",1);
  in_ECX[0x74] = iVar1;
  iVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.PS_weightbar3",1);
  in_ECX[0x75] = iVar1;
  iVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.PS_weightbar4",1);
  in_ECX[0x76] = iVar1;
  iVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.PS_weightbar5",1);
  in_ECX[0x77] = iVar1;
  iVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.PS_mpbar",1);
  in_ECX[0x78] = iVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 10179466 Catch@10179466

void Catch_10179466(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017947a Catch@1017947a

void Catch_1017947a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenWeightWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101794a0 FUN_101794a0

undefined4 FUN_101794a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10212fd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101794ee Catch@101794ee

void Catch_101794ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10179502 Catch@10179502

void Catch_10179502(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenWeightWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10179520 FUN_10179520

void FUN_10179520(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1e4) = 0;
  return;
}


// ==== 10179530 FUN_10179530

void FUN_10179530(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x1e4) = *(int *)(in_ECX + 0x1e4) + param_1;
  return;
}


// ==== 10179586 Catch@10179586

void Catch_10179586(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017959a Catch@1017959a

void Catch_1017959a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenWeightWnd::AddWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101795c0 FUN_101795c0

void FUN_101795c0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x1e4) = *(int *)(in_ECX + 0x1e4) - param_1;
  return;
}


// ==== 10179616 Catch@10179616

void Catch_10179616(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017962a Catch@1017962a

void Catch_1017962a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenWeidhtWnd::ReduceWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10179650 FUN_10179650

void FUN_10179650(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1f0) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x174))();
                    /* WARNING: Could not recover jumptable at 0x10179682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x174))();
  return;
}


// ==== 10179690 FUN_10179690

void FUN_10179690(void)

{
  int *in_ECX;
  
  if (in_ECX[0x14] != 0) {
    FUN_10023870(L"L2UI_CH3.MenuIcon.Menuicon2",0xc3,0);
  }
  if ((in_ECX[0x20] < 0) && (in_ECX[0x14] != 0)) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x14c))(-in_ECX[0x20],0);
  }
  (**(code **)(*in_ECX + 0x13c))();
  if (in_ECX[0x14] != 0) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x101796f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)in_ECX[0x14] + 0x78))();
    return;
  }
  return;
}


// ==== 10179700 FUN_10179700

undefined4 FUN_10179700(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  param_1 = param_1 - (*(int *)(in_ECX + 0x204) + *(int *)(in_ECX + 0x80));
  param_2 = param_2 - (*(int *)(in_ECX + 0x208) + *(int *)(in_ECX + 0x84));
  if (-1 < param_1) {
    iVar1 = FUN_101c19e0();
    if ((param_1 <= iVar1) && (-1 < param_2)) {
      iVar1 = FUN_101c19e0();
      if (param_2 <= iVar1) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 10179770 FUN_10179770

undefined4 FUN_10179770(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  param_1 = param_1 - (*(int *)(in_ECX + 0x214) + *(int *)(in_ECX + 0x80));
  param_2 = param_2 - (*(int *)(in_ECX + 0x218) + *(int *)(in_ECX + 0x84));
  if (-1 < param_1) {
    iVar1 = FUN_101c19e0();
    if ((param_1 <= iVar1) && (-1 < param_2)) {
      iVar1 = FUN_101c19e0();
      if (param_2 <= iVar1) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 101797e0 FUN_101797e0

void FUN_101797e0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_144 [2];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  ushort local_90 [64];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213046;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_144;
  ExceptionList = &local_c;
  iVar1 = FUN_1014ddb0(DAT_103554c4 ^ (uint)&stack0xfffffeb0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x62c) == 6)) {
    *(undefined4 *)(iVar1 + 0x62c) = 0;
    goto LAB_101799b2;
  }
  iVar1 = FUN_1002cfe0(param_2 & 0xffff,param_2 >> 0x10,1,1);
  *(int *)(in_ECX + 0x27c) = iVar1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(in_ECX + 0x244))) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x240) + iVar1 * 4);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1ee0) == 0)) {
      iVar3 = FUN_1002cca0();
      if (0 < iVar3) {
        FUN_1000ef40();
        local_4 = 1;
        local_13c = *(undefined4 *)(in_ECX + 0xb8);
        local_144[0] = 0x45;
        local_138 = 1;
        local_134 = 0;
        uVar2 = FUN_1002cca0();
        FUN_1000dd30(uVar2);
        goto LAB_1017994c;
      }
      FUN_10142ea0(*(undefined4 *)(iVar1 + 0x1e58));
    }
    else {
      uVar2 = FUN_1002c9c0();
      appSprintf(local_90,(ushort *)&DAT_1022dde0,uVar2);
      FUN_1000ef40();
      local_4 = 0;
      local_13c = *(undefined4 *)(in_ECX + 0xb8);
      local_144[0] = 0x21;
      local_138 = 1;
      local_134 = 0;
      FUN_1000dd30(0x31e);
      FUN_1000dcb0(local_90,0,0);
LAB_1017994c:
      FUN_1000df10(*(undefined4 *)(iVar1 + 0x1e58),0xffffffff,0xffffffff);
      FUN_1016e1b0(local_144);
      local_4 = 0xffffffff;
      FUN_1000e440();
    }
    if (DAT_103663bc != 0) {
      FUN_101add10();
    }
  }
  *(undefined4 *)(in_ECX + 0x24c) = 0;
LAB_101799b2:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_144);
  return;
}


// ==== 101799e0 FUN_101799e0

void FUN_101799e0(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 local_144 [2];
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  ushort local_90 [64];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213096;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_144;
  ExceptionList = &local_c;
  iVar2 = FUN_1014ddb0(DAT_103554c4 ^ (uint)&stack0xfffffeac);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x62c) == 6)) {
    *(undefined4 *)(iVar2 + 0x62c) = 0;
    goto LAB_10179bb9;
  }
  in_ECX[0x94] = 1;
  in_ECX[0x93] = 0;
  iVar2 = FUN_1002cfe0(param_2 & 0xffff,param_2 >> 0x10,1,1);
  in_ECX[0x9f] = iVar2;
  if ((-1 < iVar2) && (iVar2 < in_ECX[0x91])) {
    iVar2 = *(int *)(in_ECX[0x90] + iVar2 * 4);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1ee0) == 0)) {
      iVar4 = FUN_1002cca0();
      if (iVar4 < 1) {
        FUN_10142ea0(*(undefined4 *)(iVar2 + 0x1e58));
        goto LAB_10179b9f;
      }
      FUN_1000ef40();
      local_4 = 1;
      local_13c = in_ECX[0x2e];
      local_144[0] = 0x45;
      local_138 = 1;
      local_134 = 0;
      uVar3 = FUN_1002cca0();
      FUN_1000dd30(uVar3);
    }
    else {
      uVar3 = FUN_1002c9c0();
      appSprintf(local_90,(ushort *)&DAT_1022dde0,uVar3);
      FUN_1000ef40();
      local_4 = 0;
      local_13c = in_ECX[0x2e];
      local_144[0] = 0x21;
      local_138 = 1;
      local_134 = 0;
      FUN_1000dd30(0x31e);
      FUN_1000dcb0(local_90,0,0);
    }
    FUN_1000df10(*(undefined4 *)(iVar2 + 0x1e58),0xffffffff,0xffffffff);
    FUN_1016e1b0(local_144);
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
LAB_10179b9f:
  pcVar1 = *(code **)(*in_ECX + 0x234);
  in_ECX[0xb9] = 1;
  (*pcVar1)();
  in_ECX[0x93] = 0;
LAB_10179bb9:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_144);
  return;
}


// ==== 10179c30 FUN_10179c30

undefined4 FUN_10179c30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102130d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(int *)(in_ECX + 0x80) + -1,*(int *)(in_ECX + 0x84) + -1,uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  local_20 = 1;
  local_18 = 1;
  iVar3 = *(int *)(in_ECX + 0x260) * *(int *)(in_ECX + 600);
LAB_10179cdb:
  do {
    if (*(int *)(in_ECX + 0x244) <= iVar3) {
LAB_10179d45:
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      FUN_100212e0();
      ExceptionList = local_10;
      return 1;
    }
    if (*(int *)(*(int *)(in_ECX + 0x240) + iVar3 * 4) != 0) {
      if (iVar3 % *(int *)(in_ECX + 600) == 0) {
        local_20 = 1;
        if (iVar3 != *(int *)(in_ECX + 0x260) * *(int *)(in_ECX + 600)) {
          local_18 = local_18 + 3 + *(int *)(in_ECX + 0x270);
        }
        if ((*(int *)(in_ECX + 0x270) + 3) * *(int *)(in_ECX + 0x25c) + 1 <= local_18)
        goto LAB_10179d45;
      }
      else {
        local_20 = local_20 + 5 + *(int *)(in_ECX + 0x26c);
      }
      iVar4 = FUN_1002c970();
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)(in_ECX + 0x270);
        uVar2 = *(undefined4 *)(in_ECX + 0x26c);
        uVar7 = 1;
        uVar6 = 0xff;
        uVar5 = FUN_1002c970(0xff,1);
        FUN_10021a00(local_20,local_18,uVar2,uVar1,0,0,uVar2,uVar1,uVar5,uVar6,uVar7);
      }
      iVar4 = FUN_1002cc60();
      if (iVar4 != 0) {
        FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,
                     *(undefined4 *)(in_ECX + 0x214),0xff,1);
        iVar3 = iVar3 + 1;
        goto LAB_10179cdb;
      }
      FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,
                   *(undefined4 *)(in_ECX + 0x2f4),0xff,1);
      FUN_10021a00(local_20 + -1,local_18 + -1,0x23,0x23,0,0,0x23,0x23,
                   *(undefined4 *)(in_ECX + 0x2f8),0xff,1);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 10179e6f Catch@10179e6f

void Catch_10179e6f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10179e83 Catch@10179e83

void Catch_10179e83(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCItemWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10179ea0 FUN_10179ea0

undefined4 FUN_10179ea0(undefined4 param_1,uint param_2)

{
  UObject *this;
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  uint uStack_5c;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  FString local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10213138;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = param_2 & 0xffff;
  param_2 = param_2 >> 0x10;
  iVar1 = FUN_1002cfe0(local_18,param_2,1,1);
  in_ECX[0xa0] = iVar1;
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  if (iVar1 != 0) {
    if (((in_ECX[0x93] != 0) && (-1 < in_ECX[0x9f])) && (in_ECX[0x9f] < in_ECX[0x91])) {
      uVar3 = 0;
      uVar2 = FUN_1002c970(0);
      FUN_1003f8b0(4,uVar2,uVar3);
      FUN_1003f950();
    }
    this = *(UObject **)(*(int *)(in_ECX[0x2e] + 0xc) + 4);
    iVar1 = UObject::IsA(this,(UClass *)&DAT_103a1410);
    if (iVar1 != 0) {
      local_48 = 0;
      local_4c = 0;
      local_44 = 0;
      local_40 = 0;
      FUN_10058770(&local_4c);
      local_3c = *(int *)(this + 0x204) + local_4c;
      local_38 = *(int *)(this + 0x208) + local_48;
      local_34 = *(undefined4 *)(this + 0x20c);
      local_30 = *(undefined4 *)(this + 0x210);
      iVar1 = (**(code **)(*in_ECX + 0x104))(local_18,param_2,local_3c,local_38,local_34,local_30);
      if (iVar1 == 0) {
        *(undefined4 *)(this + 0x200) = 0;
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
        local_8._0_1_ = 3;
        FUN_10003e80(local_2c);
        local_8._0_1_ = 0;
        FString::~FString(local_2c);
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
        local_8._0_1_ = 4;
      }
      else {
        *(undefined4 *)(this + 0x200) = 1;
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash_drag");
        local_8._0_1_ = 1;
        FUN_10003e80(local_2c);
        local_8._0_1_ = 0;
        FString::~FString(local_2c);
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash_drag");
        local_8._0_1_ = 2;
      }
      FUN_10003f50(local_2c);
      local_8._0_1_ = 0;
      FString::~FString(local_2c);
      local_3c = *(int *)(this + 0x214) + local_4c;
      local_38 = *(int *)(this + 0x218) + local_48;
      local_34 = *(undefined4 *)(this + 0x21c);
      local_30 = *(undefined4 *)(this + 0x220);
      iVar1 = (**(code **)(*in_ECX + 0x104))(local_18,param_2,local_3c,local_38,local_34,local_30);
      if (iVar1 == 0) {
        *(undefined4 *)(this + 0x1fc) = 0;
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
        local_8._0_1_ = 7;
        FUN_10003e80(local_2c);
        local_8._0_1_ = 0;
        FString::~FString(local_2c);
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
        local_8._0_1_ = 8;
      }
      else {
        *(undefined4 *)(this + 0x1fc) = 1;
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe_drag");
        local_8._0_1_ = 5;
        FUN_10003e80(local_2c);
        local_8._0_1_ = 0;
        FString::~FString(local_2c);
        FString::FString(local_2c,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe_drag");
        local_8._0_1_ = 6;
      }
      FUN_10003f50(local_2c);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_2c);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1017a1af Catch@1017a1af

void Catch_1017a1af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1017a1c3 Catch@1017a1c3

void Catch_1017a1c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenItemWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017a1e0 FUN_1017a1e0

void FUN_1017a1e0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  float10 extraout_ST0;
  float10 fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uStack_150;
  int aiStack_13c [3];
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 *puStack_118;
  void *pvStack_114;
  undefined *puStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [256];
  uint uStack_8;
  
  puStack_110 = &UNK_10213160;
  pvStack_114 = ExceptionList;
  uStack_150 = DAT_103554c4 ^ (uint)auStack_108;
  puStack_118 = (undefined1 *)&uStack_150;
  ExceptionList = &pvStack_114;
  uStack_10c = 0;
  uStack_8 = uStack_150;
  FUN_10002f40();
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iStack_12c = FUN_1014dd00();
  if (iStack_12c == 0) goto LAB_1017a4f8;
  fStack_120 = (float)*(int *)(iStack_12c + 0x214) / (float)*(int *)(iStack_12c + 0x8c);
  fStack_11c = fStack_120 * 100.0;
  if ((*(int *)(iStack_12c + 0x8c) == 0) || (iVar4 = FUN_101c19e0(), iStack_128 = iVar4, iVar4 < 1))
  {
    fVar6 = (float10)fStack_11c;
  }
  else {
    fVar6 = (float10)fStack_11c;
    if ((float10)50.0 < fVar6) {
      if (((float10)50.0 < fVar6) && (fVar6 <= (float10)66.6)) {
        uVar2 = *(undefined4 *)(in_ECX + 0x1d0);
LAB_1017a383:
        uVar7 = CONCAT44(0xff,uVar2);
        goto LAB_1017a38b;
      }
      if (((float10)66.6 < fVar6) && (fVar6 <= (float10)80.0)) {
        uVar7 = CONCAT44(0xff,*(undefined4 *)(in_ECX + 0x1d4));
        goto LAB_1017a38b;
      }
      if (((float10)80.0 < fVar6) &&
         ((!NAN(fVar6) && !NAN(extraout_ST0)) && fVar6 < extraout_ST0 != (fVar6 == extraout_ST0))) {
        uVar7 = CONCAT44(0xff,*(undefined4 *)(in_ECX + 0x1d8));
        goto LAB_1017a38b;
      }
      if (extraout_ST0 < fVar6) {
        uVar2 = *(undefined4 *)(in_ECX + 0x1dc);
        goto LAB_1017a383;
      }
    }
    else {
      uVar7 = CONCAT44(0xff,*(undefined4 *)(in_ECX + 0x1cc));
LAB_1017a38b:
      FUN_10021a00(0,0,iVar4,0xc,0,0,iVar4,0xc,uVar7,1);
      fVar6 = (float10)fStack_11c;
    }
    iStack_130 = *(int *)(in_ECX + 0x1e4);
    fVar1 = (float)iStack_130;
    fStack_120 = fVar1;
    if ((0.0 < fVar1) && (fVar6 < (float10)100.0)) {
      fStack_120 = *(float *)(iStack_12c + 0x8c);
      fStack_124 = fVar1 / (float)(int)fStack_120;
      iVar5 = FUN_101c19e0();
      fStack_124 = (float)(iVar5 + iVar4);
      if (*(float *)(in_ECX + 0x88) < (float)(int)fStack_124) {
        iVar5 = FUN_101c19e0();
      }
      if (*(int *)(iStack_12c + 0x214) + iStack_130 < (int)fStack_120) {
        FUN_10021a00(iVar4,0,iVar5,0xc,0,0,iVar5,0xc,*(undefined4 *)(in_ECX + 0x1e0),0xff,1);
        fVar6 = (float10)fStack_11c;
      }
      else {
        FUN_10021a00(iVar4,0,iVar5,0xc,0,0,iVar5,0xc,*(undefined4 *)(in_ECX + 0x1dc),0xff,1);
        fVar6 = (float10)fStack_11c;
      }
    }
  }
  FUN_100133a0(auStack_108,L"%.2f%s",(double)fVar6,&DAT_1024129c);
  FUN_10020bb0(aiStack_13c,auStack_108,0,0,0,0,0,0);
  uVar8 = 0xff;
  uVar7 = CONCAT44(auStack_108,0xffdcdcdc);
  uVar3 = 2;
  iStack_128 = aiStack_13c[0] / 2;
  uVar2 = FUN_101c19e0(2,0xffdcdcdc,auStack_108,0xff);
  FUN_100212f0(1,uVar2,uVar3,uVar7,uVar8);
LAB_1017a4f8:
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = pvStack_114;
  __security_check_cookie(uStack_8 ^ (uint)auStack_108);
  return;
}


// ==== 1017a532 Catch@1017a532

void Catch_1017a532(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 1017a546 Catch@1017a546

void Catch_1017a546(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenWeightWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017a570 FUN_1017a570

undefined4 FUN_1017a570(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10213199;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  iVar3 = FUN_1014dd00();
  if (iVar3 != 0) {
    FUN_10054cc0();
    uVar1 = FString::Printf((ushort *)local_28,L"[%d]/[%d]",*(undefined4 *)(iVar3 + 0x214),
                            *(undefined4 *)(iVar3 + 0x8c));
    local_8._0_1_ = 1;
    FUN_101b8ab0(uVar1,*(int *)(in_ECX + 0xd4) + 0x24,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    if (*(int *)(in_ECX + 0xd4) != 0) {
      FUN_100549b0(param_1,*(int *)(in_ECX + 0xd4) + 0x24,3,3,*(undefined4 *)(in_ECX + 0x80),
                   *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                   *(undefined4 *)(in_ECX + 0x8c));
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1017a6ca Catch@1017a6ca

void Catch_1017a6ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017a6de Catch@1017a6de

void Catch_1017a6de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenWeightWnd::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017a700 FUN_1017a700

void FUN_1017a700(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
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
  undefined4 uVar14;
  uint uStack_2c8;
  undefined1 auStack_2b4 [8];
  FString aFStack_2ac [16];
  undefined1 *puStack_29c;
  undefined1 *puStack_298;
  void *pvStack_294;
  undefined *puStack_290;
  uint uStack_28c;
  ushort auStack_288 [256];
  ushort auStack_88 [64];
  uint uStack_8;
  
  puStack_290 = &UNK_102131d2;
  pvStack_294 = ExceptionList;
  uStack_2c8 = DAT_103554c4 ^ (uint)auStack_288;
  puStack_298 = (undefined1 *)&uStack_2c8;
  ExceptionList = &pvStack_294;
  uStack_28c = 0;
  uStack_8 = uStack_2c8;
  FUN_10002f40();
  FUN_101c19e0();
  FUN_101c19e0();
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80));
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    FUN_10021a00(0,0x14,0x100,0x17d,0,0,0x100,0x17d);
  }
  FString::FString(aFStack_2ac);
  uStack_28c._0_1_ = 1;
  iVar1 = func_0x10179bf0();
  puVar2 = appItoa(iVar1);
  FString::operator=(aFStack_2ac,puVar2);
  FString::operator*(aFStack_2ac);
  FUN_10062ee0();
  FString::operator*(aFStack_2ac);
  FUN_100676e0();
  puStack_29c = &stack0xfffffd2c;
  FString::FString((FString *)&stack0xfffffd2c,auStack_288);
  uStack_28c = CONCAT31(uStack_28c._1_3_,1);
  FUN_10052970();
  FUN_100519c0();
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    FUN_10021a00(0x62,0x163,0x10,0xc,0,0,0x10,0xc);
  }
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_10021a00(0x62,0x174,0x10,0xc,0,0,0x10,0xc);
  }
  iVar1 = FUN_1014dd00();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x2a8) != 0) {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x224) + 0xfc))();
      if (iVar1 == 0) {
        (**(code **)(**(int **)(in_ECX + 0x224) + 0x138))();
      }
    }
    puStack_29c = *(undefined1 **)(*(int *)(in_ECX + 0x1f0) + 0x1d8);
    FUN_1002d0b0();
    FUN_1002d0b0();
    appSprintf(auStack_88,(ushort *)&UNK_1028a218);
  }
  FUN_10020bb0(auStack_2b4,auStack_88,0,0,0);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  puVar2 = auStack_88;
  uVar5 = 0xffb09b79;
  uVar4 = 0xa2;
  uVar3 = FUN_101c19e0(0xa2,0xffb09b79,puVar2,0,0,0,0,0,0,0,0,0);
  FUN_100217a0(uVar3,uVar4,uVar5,puVar2,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  uStack_28c = uStack_28c & 0xffffff00;
  FString::~FString(aFStack_2ac);
  uStack_28c = 0xffffffff;
  ExceptionList = pvStack_294;
  __security_check_cookie(uStack_8 ^ (uint)auStack_288);
  return;
}


// ==== 1017a9d9 Catch@1017a9d9

void Catch_1017a9d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1017a9ed Catch@1017a9ed

void Catch_1017a9ed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017aa10 FUN_1017aa10

void FUN_1017aa10(undefined4 param_1,uint param_2)

{
  FArray *this;
  undefined1 *puVar1;
  uint uVar2;
  UObject *this_00;
  int iVar3;
  void *pvVar4;
  FString *this_01;
  int iVar5;
  int *in_ECX;
  undefined1 auStack_678 [160];
  undefined4 uStack_5d8;
  uint uStack_5d4;
  UClass *pUVar6;
  uint uStack_5c4;
  undefined4 local_2e4 [2];
  int local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_230;
  int local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_17c;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  L2ParamStack local_b0 [4];
  FString local_ac [12];
  uint local_a0;
  char local_99;
  undefined1 *local_98;
  void *local_94;
  undefined1 *puStack_90;
  undefined1 local_8c;
  undefined3 uStack_8b;
  ushort local_88 [64];
  uint local_8;
  
  puStack_90 = &LAB_102132a5;
  local_94 = ExceptionList;
  uStack_5c4 = DAT_103554c4 ^ (uint)local_88;
  local_98 = (undefined1 *)&uStack_5c4;
  ExceptionList = &local_94;
  local_b8 = 0;
  local_8c = 0;
  uStack_8b = 0;
  local_8 = uStack_5c4;
  FUN_1005d800();
  iVar3 = in_ECX[0x9f];
  if ((iVar3 < 0) || (in_ECX[0x91] <= iVar3)) {
    in_ECX[0x93] = 0;
    goto LAB_1017aabe;
  }
  if ((in_ECX[0x93] == 0) || (in_ECX[0xb9] != 0)) goto LAB_1017b598;
  this = (FArray *)(in_ECX + 0x90);
  puVar1 = *(undefined1 **)(*(int *)this + iVar3 * 4);
  local_c0 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    in_ECX[0x93] = 0;
    goto LAB_1017aabe;
  }
  local_b4 = param_2 >> 0x10;
  local_a0 = param_2 & 0xffff;
  iVar3 = (**(code **)(*in_ECX + 0x70))();
  if (iVar3 != 0) {
    uStack_5d4 = local_a0;
    uStack_5d8 = 0x1017ab1c;
    local_a0 = FUN_1002cfe0();
    uVar2 = in_ECX[0x9f];
    if ((((local_a0 != uVar2) && (-1 < (int)local_a0)) && (-1 < (int)uVar2)) &&
       ((int)uVar2 < in_ECX[0x91])) {
      if ((int)local_a0 < in_ECX[0x91]) {
        FUN_1013d680();
        uStack_5d4 = 0x1017ab9d;
        FArray::Insert(this,local_a0,1,4);
        *(undefined1 **)(*(int *)this + local_a0 * 4) = puVar1;
        in_ECX[0xb9] = 0;
        in_ECX[0x93] = 0;
      }
      else {
        FUN_1013d680();
        FUN_100d9a30();
        in_ECX[0x9f] = in_ECX[0x91] + -1;
        in_ECX[0xb9] = 0;
        in_ECX[0x93] = 0;
      }
      goto LAB_1017aabe;
    }
    goto LAB_1017b598;
  }
  iVar3 = FUN_10059330();
  if (iVar3 == 0) {
    iVar3 = FUN_10145930();
    if (iVar3 != 0) goto LAB_1017b598;
    FUN_1002c9c0();
    uStack_5d4 = 0x1017b2bc;
    appSprintf(local_88,(ushort *)&DAT_1022dde0);
    iVar3 = *(int *)(DAT_103663bc + 0x50);
    in_ECX[0xba] = *(int *)(iVar3 + 0x228);
    in_ECX[0xbb] = *(int *)(iVar3 + 0x22c);
    in_ECX[0xbc] = *(int *)(iVar3 + 0x230);
    local_bc = 0;
    iVar3 = FUN_10187a60();
    if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 2)) && (*(int *)(iVar3 + 0x100) == 8)) {
      local_bc = 1;
    }
    iVar3 = FUN_1002cc80();
    if ((iVar3 == 0) || (*(int *)(puVar1 + 0x1e64) < 2)) {
      if (local_bc != 0) goto LAB_1017b410;
      FUN_1000ef40();
      local_8c = 0xe;
      local_2e4[0] = 4;
      local_2d8 = 1;
      local_2d4 = 0;
      local_2dc = in_ECX[0x2e];
      FUN_1000dd30();
      uStack_5d4 = 0x1017b522;
      FUN_1000dcb0();
      uStack_5d4 = 0x1017b538;
      FUN_1000df10();
      iVar3 = *(int *)(DAT_103663bc + 0x50);
      local_254 = *(undefined4 *)(iVar3 + 0x228);
      local_250 = *(undefined4 *)(iVar3 + 0x22c);
      local_24c = *(undefined4 *)(iVar3 + 0x230);
      local_c0 = auStack_678;
      FUN_10179200(local_2e4);
      local_8c = 0xe;
      (**(code **)(*in_ECX + 0x22c))();
    }
    else if (local_bc == 0) {
      FUN_1000ef40();
      local_8c = 0xc;
      local_17c = 4;
      local_170 = 1;
      local_16c = 1;
      local_178 = 3;
      local_174 = in_ECX[0x2e];
      FUN_1000dd30();
      uStack_5d4 = 0x1017b3a5;
      FUN_1000dcb0();
      local_164 = *(undefined4 *)(puVar1 + 0x1e5c);
      local_f0 = *(undefined4 *)(puVar1 + 0x1e64);
      uStack_5d4 = 0x1017b3cc;
      FUN_1000df10();
      iVar3 = *(int *)(DAT_103663bc + 0x50);
      local_ec = *(undefined4 *)(iVar3 + 0x228);
      local_e8 = *(undefined4 *)(iVar3 + 0x22c);
      local_e4 = *(undefined4 *)(iVar3 + 0x230);
      FUN_1016e1b0();
    }
    else {
LAB_1017b410:
      FUN_1000ef40();
      local_8c = 0xd;
      local_230 = 4;
      local_224 = 1;
      local_220 = 0;
      local_228 = in_ECX[0x2e];
      FUN_1000dd30();
      uStack_5d4 = 0x1017b46c;
      FUN_1000dcb0();
      uStack_5d4 = 0x1017b482;
      FUN_1000df10();
      iVar3 = *(int *)(DAT_103663bc + 0x50);
      local_1a0 = *(undefined4 *)(iVar3 + 0x228);
      local_19c = *(undefined4 *)(iVar3 + 0x22c);
      local_198 = *(undefined4 *)(iVar3 + 0x230);
      FUN_1016e1b0();
    }
    goto LAB_1017b593;
  }
  this_00 = *(UObject **)(iVar3 + 4);
  if (this_00 == (UObject *)0x0) goto LAB_1017ad37;
  iVar3 = UObject::IsA(this_00,(UClass *)&DAT_1039ff40);
  if (iVar3 != 0) {
    FUN_10176880();
    iVar3 = *(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1e50) != 5)) {
      FUN_10142ea0();
    }
    (**(code **)(*in_ECX + 0x234))();
    in_ECX[0x9f] = -1;
    in_ECX[0xb9] = 0;
    in_ECX[0x93] = 0;
    goto LAB_1017aabe;
  }
  iVar3 = UObject::IsA(this_00,(UClass *)&DAT_10368830);
  if (iVar3 != 0) {
    FUN_10176a50();
    L2ParamStack::L2ParamStack(local_b0,10);
    local_8c = 1;
    L2ParamStack::PushBack(local_b0,(void *)0x1);
    pvVar4 = (void *)FUN_100473a0();
    L2ParamStack::PushBack(local_b0,pvVar4);
    L2ParamStack::PushBack(local_b0,*(void **)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e58));
    L2ParamStack::PushBack(local_b0,(void *)0x1);
    FUN_1015a3b0();
    (**(code **)(*in_ECX + 0x234))();
    in_ECX[0x9f] = -1;
    local_8c = 0;
    L2ParamStack::~L2ParamStack(local_b0);
    in_ECX[0xb9] = 0;
    in_ECX[0x93] = 0;
    goto LAB_1017aabe;
  }
  iVar3 = UObject::IsA(this_00,(UClass *)&DAT_10364488);
  if (iVar3 == 0) {
LAB_1017ad37:
    local_99 = '\0';
  }
  else {
    this_01 = (FString *)FUN_10057590();
    _local_8c = CONCAT31(uStack_8b,2);
    local_b8 = 1;
    iVar3 = FString::operator==(this_01,(ushort *)L"PetInvenWnd");
    local_99 = '\x01';
    if (iVar3 == 0) goto LAB_1017ad37;
  }
  local_8c = 0;
  uStack_8b = 0;
  if ((local_b8 & 1) != 0) {
    local_b8 = local_b8 & 0xfffffffe;
    FString::~FString(local_ac);
  }
  if (local_99 != '\0') {
    iVar3 = FUN_1002cc80();
    if ((iVar3 == 0) || (*(int *)(puVar1 + 0x1e64) < 2)) {
      L2ParamStack::L2ParamStack(local_b0,10);
      local_8c = 4;
      L2ParamStack::PushBack
                (local_b0,*(void **)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e58));
      L2ParamStack::PushBack(local_b0,(void *)0x1);
      FUN_10144cc0();
      local_8c = 0;
      L2ParamStack::~L2ParamStack(local_b0);
      in_ECX[0xb9] = 0;
      in_ECX[0x93] = 0;
      goto LAB_1017aabe;
    }
    FUN_1002c9c0();
    uStack_5d4 = 0x1017ad96;
    appSprintf(local_88,(ushort *)&DAT_1022dde0);
    FUN_1000ef40();
    local_8c = 3;
    FUN_1000dd30();
    uStack_5d4 = 0x1017adf4;
    FUN_1000dcb0();
    uStack_5d4 = 0x1017ae22;
    FUN_1000df10();
    FUN_1016e1b0();
    goto LAB_1017b593;
  }
  if (this_00 == (UObject *)0x0) goto LAB_1017b598;
  iVar3 = UObject::IsA(this_00,(UClass *)&DAT_10357870);
  if (iVar3 != 0) {
    pUVar6 = (UClass *)&DAT_103a1410;
    iVar3 = FUN_10058020();
    iVar3 = UObject::IsA(*(UObject **)(*(int *)(iVar3 + 0xc) + 4),pUVar6);
    if (iVar3 != 0) {
      iVar3 = FUN_10058020();
      iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 4);
      *(undefined4 *)(iVar3 + 0x200) = 0;
      *(undefined4 *)(iVar3 + 0x1fc) = 0;
      FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
      local_8c = 5;
      FUN_10003e80();
      local_8c = 0;
      FString::~FString(local_ac);
      FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
      local_8c = 6;
      FUN_10003f50();
      local_8c = 0;
      FString::~FString(local_ac);
      FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
      local_8c = 7;
      FUN_10003e80();
      local_8c = 0;
      FString::~FString(local_ac);
      FString::FString(local_ac,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
      local_8c = 8;
      FUN_10003f50();
      local_8c = 0;
      FString::~FString(local_ac);
      iVar3 = FUN_10179700();
      if (iVar3 == 0) {
        iVar3 = FUN_10179770();
        if (iVar3 != 0) {
          iVar3 = FUN_10187a60();
          iVar5 = FUN_1014dd00();
          if (((*(int *)(iVar5 + 0x2a8) != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0xcc) != 0)) {
            FUN_1002cb70();
            uStack_5d4 = 0x1017b1da;
            appSprintf(local_88,(ushort *)&DAT_1022dde0);
            FUN_1000ef40();
            local_8c = 0xb;
            FUN_1000dd30();
            uStack_5d4 = 0x1017b239;
            FUN_1000dcb0();
            uStack_5d4 = 0x1017b24f;
            FUN_1000df10();
            FUN_1016e1b0();
            goto LAB_1017b593;
          }
        }
      }
      else {
        iVar3 = FUN_1002cc80();
        if ((iVar3 == 0) || (*(int *)(puVar1 + 0x1e64) < 2)) {
          FUN_1002cb70();
          uStack_5d4 = 0x1017b0ca;
          appSprintf(local_88,(ushort *)&DAT_1022dde0);
          FUN_1000ef40();
          local_8c = 10;
          FUN_1000dd30();
          uStack_5d4 = 0x1017b122;
          FUN_1000dcb0();
          uStack_5d4 = 0x1017b144;
          FUN_1000df10();
          FUN_1016e1b0();
        }
        else {
          FUN_1002cb70();
          uStack_5d4 = 0x1017b006;
          appSprintf(local_88,(ushort *)&DAT_1022dde0);
          FUN_1000ef40();
          local_8c = 9;
          FUN_1000dd30();
          uStack_5d4 = 0x1017b064;
          FUN_1000dcb0();
          uStack_5d4 = 0x1017b092;
          FUN_1000df10();
          FUN_1016e1b0();
        }
LAB_1017b593:
        local_8c = 0;
        FUN_1000e440();
      }
LAB_1017b598:
      in_ECX[0xb9] = 0;
      in_ECX[0x93] = 0;
      goto LAB_1017aabe;
    }
  }
  UObject::IsA(this_00,(UClass *)&DAT_103a1410);
  in_ECX[0xb9] = 0;
  in_ECX[0x93] = 0;
LAB_1017aabe:
  ExceptionList = local_94;
  __security_check_cookie(local_8 ^ (uint)local_88);
  return;
}


// ==== 1017b5b6 Catch@1017b5b6

void Catch_1017b5b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 1017b5ca Catch@1017b5ca

void Catch_1017b5ca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenItemWnd::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017b5f0 FUN_1017b5f0

undefined4 FUN_1017b5f0(int param_1)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int in_ECX;
  
  iVar4 = param_1;
  if (*(int *)(in_ECX + 0x268) <= *(int *)(in_ECX + 0x244)) {
    return 0;
  }
  if (param_1 + 0x400 != 0) {
    uVar1 = FUN_1003f630(param_1 + 0x400,1);
    *(undefined4 *)(iVar4 + 0x1c04) = uVar1;
  }
  if (*(int *)(iVar4 + 0x1c04) == 0) {
    uVar1 = FUN_1003f630(L"Default.BlackTexture",1);
    *(undefined4 *)(iVar4 + 0x1c04) = uVar1;
  }
  FName::FName((FName *)&param_1,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10363f50,pUVar2,param_1,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1002f5d0(iVar4);
  }
  iVar4 = FArray::Add((FArray *)(in_ECX + 0x240),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x240) + iVar4 * 4) = uVar1;
  FUN_1002d710();
  return 1;
}


// ==== 1017b6c0 FUN_1017b6c0

undefined4 FUN_1017b6c0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x244)) {
    piVar2 = *(int **)(in_ECX + 0x240);
    do {
      if (*(int *)(*piVar2 + 0x1e58) == param_1) {
        piVar2 = (int *)(*(int **)(in_ECX + 0x240))[iVar1];
        FUN_1013d680(iVar1,1);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))(1);
        }
        FUN_1002d710();
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x244));
  }
  return 0;
}


// ==== 1017b740 FUN_1017b740

void FUN_1017b740(void)

{
  FArray *this;
  int iVar1;
  int iVar2;
  int iVar3;
  FArchive *this_00;
  int in_ECX;
  int iVar4;
  
  this = (FArray *)(in_ECX + 0x330);
  FArray::Empty(this,4,0);
  iVar1 = FUN_1002d0b0();
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      if ((*(int *)(in_ECX + 0x1e8) != 0) &&
         (iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x214))(iVar4), iVar2 != 0)) {
        iVar3 = FArray::Add(this,1,4);
        *(undefined4 *)(*(int *)this + iVar3 * 4) = *(undefined4 *)(iVar2 + 0x1e5c);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  iVar1 = (**(code **)(**(int **)GFileManager_exref + 0x28))(L"..\\iwo");
  if ((iVar1 != 0) &&
     (this_00 = (FArchive *)
                (**(code **)(**(int **)GFileManager_exref + 0xc))
                          (in_ECX + 0x230,4,*(undefined4 *)GNull_exref), this_00 != (FArchive *)0x0)
     ) {
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        FArchive::ByteOrderSerialize(this_00,(void *)(*(int *)this + iVar1 * 4),4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    (**(code **)(*(int *)this_00 + 0x58))();
    (*(code *)**(undefined4 **)this_00)(1);
  }
  return;
}


// ==== 1017b830 FUN_1017b830

void FUN_1017b830(void)

{
  byte bVar1;
  FArray *this;
  User *this_00;
  LPCWSTR lpWideCharStr;
  byte *pbVar2;
  FString *pFVar3;
  int *piVar4;
  void *_Dst;
  FArchive *this_01;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  undefined4 uVar8;
  LPBOOL lpUsedDefaultChar;
  undefined2 local_24c;
  undefined2 local_24a;
  FArray *local_244;
  FString local_240 [12];
  FString local_234 [4];
  void *pvStack_230;
  char local_228 [3];
  undefined1 local_225;
  byte local_220 [516];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_102132e8;
  local_14 = ExceptionList;
  local_1c = DAT_103554c4 ^ (uint)&local_24c;
  this = (FArray *)(DAT_103554c4 ^ (uint)&stack0xfffffda8);
  ExceptionList = &local_14;
  this_00 = (User *)FUN_1014dd00();
  if (this_00 != (User *)0x0) {
    local_244 = (FArray *)(in_ECX + 0x330);
    FArray::Empty(local_244,4,0);
    FString::FString(local_240);
    local_c = 0;
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    cbMultiByte = 0x200;
    pbVar2 = local_220;
    iVar7 = -1;
    lpWideCharStr = (LPCWSTR)User::GetName(this_00);
    WideCharToMultiByte(0,0,lpWideCharStr,iVar7,(LPSTR)pbVar2,cbMultiByte,lpDefaultChar,
                        lpUsedDefaultChar);
    pbVar2 = local_220;
    local_24c = 0xf5;
    local_24a = 0xa1;
    uVar6 = 0;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    if (pbVar2 != local_220 + 1 && -1 < (int)pbVar2 - (int)(local_220 + 1)) {
      do {
        uVar5 = uVar6 & 0x80000001;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
        }
        local_220[uVar6] = local_220[uVar6] ^ *(byte *)(&local_24c + uVar5);
        __snprintf(local_228,3,"%d");
        local_225 = 0;
        pFVar3 = (FString *)FString::FString(local_234,local_228);
        local_c._0_1_ = 1;
        FString::operator+=(local_240,pFVar3);
        local_c = (uint)local_c._1_3_ << 8;
        FString::~FString(local_234);
        pbVar2 = local_220;
        uVar6 = uVar6 + 1;
        do {
          bVar1 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (bVar1 != 0);
      } while ((int)uVar6 < (int)pbVar2 - (int)(local_220 + 1));
    }
    FString::operator*(local_240);
    appSprintf((ushort *)(in_ECX + 0x230),(ushort *)L"..\\iwo\\%s_%d.dat");
    piVar4 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))((ushort *)(in_ECX + 0x230));
    if (piVar4 != (int *)0x0) {
      uVar6 = (**(code **)(*piVar4 + 0x2c))();
      _Dst = (void *)(**(code **)**(undefined4 **)GMalloc_exref)();
      pvStack_230 = _Dst;
      _memset(_Dst,0,uVar6 + 2);
      (**(code **)(*piVar4 + 4))(_Dst,uVar6);
      this_01 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(_Dst,uVar6);
      if (this_01 != (FArchive *)0x0) {
        for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          uVar8 = 0;
          FArchive::ByteOrderSerialize(this_01,&stack0xfffffd9c,4);
          iVar7 = FArray::Add(this,1,4);
          *(undefined4 *)(*(int *)this + iVar7 * 4) = uVar8;
        }
        (**(code **)(*(int *)this_01 + 0x58))();
      }
      (**(code **)(*piVar4 + 0x58))();
      (**(code **)*piVar4)(1);
      (**(code **)(**(int **)GMalloc_exref + 8))(local_244);
      if (this_01 != (FArchive *)0x0) {
        (*(code *)**(undefined4 **)this_01)();
      }
    }
    local_c = 0xffffffff;
    FString::~FString(local_240);
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_24c);
  return;
}


// ==== 1017baf0 FUN_1017baf0

void FUN_1017baf0(void)

{
  int iVar1;
  
  FUN_1005ff00();
  iVar1 = FUN_1002d0b0();
  if (0 < iVar1) {
    FUN_1017b740();
    return;
  }
  return;
}


// ==== 1017bb20 FUN_1017bb20

undefined4 FUN_1017bb20(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1017b740();
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
  if (*(int *)(in_ECX + 0x224) != 0) {
    *(undefined4 *)(in_ECX + 0x224) = 0;
  }
  if (*(int *)(in_ECX + 0x228) != 0) {
    *(undefined4 *)(in_ECX + 0x228) = 0;
  }
  if (*(int *)(in_ECX + 0x22c) != 0) {
    *(undefined4 *)(in_ECX + 0x22c) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017bbe5 Catch@1017bbe5

void Catch_1017bbe5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017bbf9 Catch@1017bbf9

void Catch_1017bbf9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInventoryWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017bc20 FUN_1017bc20

void FUN_1017bc20(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_1005fe50();
  (**(code **)(*(int *)in_ECX[0x7d] + 0x1f8))();
  if (in_ECX[0x14] != 0) {
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    FUN_10058770(&uStack_10);
    uStack_18 = (undefined4)(longlong)ROUND((float)in_ECX[0x23]);
    uVar1 = uStack_18;
    uStack_18 = (undefined4)(longlong)ROUND((float)in_ECX[0x22]);
    (**(code **)(*in_ECX + 0xc0))(uStack_10,uStack_c,uStack_18,uVar1,0,0,3);
    (**(code **)(*(int *)in_ECX[0x14] + 0xc0))(0,0,0,0,0,0,3);
    (**(code **)(*(int *)in_ECX[0x14] + 0x13c))();
  }
  iVar2 = FUN_1014dd00();
  if (iVar2 != 0) {
    iVar2 = FUN_1014dd00();
    if (*(int *)(iVar2 + 0x2a8) != 0) {
      (**(code **)(*(int *)in_ECX[0x8a] + 0x138))();
      FUN_1017b830();
      return;
    }
  }
  (**(code **)(*(int *)in_ECX[0x8a] + 0x13c))();
  FUN_1017b830();
  return;
}


// ==== 1017bd60 FUN_1017bd60

void FUN_1017bd60(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10031b00(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCInvenItemWnd::vftable;
  in_ECX[0xb9] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1017bdc0 FUN_1017bdc0

void FUN_1017bdc0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213378;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCInvenItemWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10031cf0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017be20 FUN_1017be20

void FUN_1017be20(byte param_1)

{
  void *in_ECX;
  
  FUN_1017bdc0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2fc);
  }
  return;
}


// ==== 1017be50 FUN_1017be50

void FUN_1017be50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102133a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10031db0(param_1,param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  *in_ECX = NCInvenItemWnd::vftable;
  in_ECX[0xb9] = 0;
  uVar1 = FUN_1003f630(L"l2ui_ch3.InventoryWnd.Inventory_OutLine_down",1);
  in_ECX[0xbd] = uVar1;
  uVar1 = FUN_1003f630(L"l2ui_ch3.InventoryWnd.Inventory_OutLine",1);
  in_ECX[0xbe] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 1017bf00 FUN_1017bf00

void FUN_1017bf00(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102133d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  *in_ECX = NCInvenWeightWnd::vftable;
  in_ECX[0x79] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1017bf6b Catch@1017bf6b

void Catch_1017bf6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017bf7f Catch@1017bf7f

void Catch_1017bf7f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCInvenWeightWnd::NCInvenWeightWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017bfa0 FUN_1017bfa0

void FUN_1017bfa0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213408;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCInvenWeightWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017c000 FUN_1017c000

void FUN_1017c000(byte param_1)

{
  void *in_ECX;
  
  FUN_1017bfa0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e8);
  }
  return;
}


// ==== 1017c030 FUN_1017c030

void FUN_1017c030(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021344f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCInventoryWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x84] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x81] = 0;
  in_ECX[0x87] = 0;
  in_ECX[0x88] = 0;
  in_ECX[0x86] = 0;
  in_ECX[0x85] = 0;
  FArray::FArray((FArray *)(in_ECX + 0xcc));
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0x83] = 0x42080000;
  in_ECX[0x84] = 0x42080000;
  in_ECX[0x87] = 0x42080000;
  in_ECX[0x88] = 0x42080000;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x81] = 0xd0;
  in_ECX[0x82] = 0x15f;
  in_ECX[0x85] = 0xe;
  in_ECX[0x86] = 0x15f;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x89] = 0;
  in_ECX[0x8a] = 0;
  FString::operator=((FString *)(in_ECX + 0x60),(ushort *)L"InventoryWnd");
  ExceptionList = local_c;
  return;
}


// ==== 1017c160 FUN_1017c160

void FUN_1017c160(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10213486;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCInventoryWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_10039be0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 1017c1d0 FUN_1017c1d0

void FUN_1017c1d0(byte param_1)

{
  void *in_ECX;
  
  FUN_1017c160();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x33c);
  }
  return;
}


// ==== 1017c200 FUN_1017c200

undefined4 FUN_1017c200(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  int *piVar4;
  UPackage *pUVar5;
  int in_ECX;
  undefined2 in_FPUControlWord;
  UPackage *pUStack_110;
  wchar_t *pwStack_10c;
  wchar_t *pwStack_108;
  undefined4 uStack_104;
  undefined8 *puStack_100;
  wchar_t *pwStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uVar6;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_a8;
  undefined4 uStack_8c;
  undefined4 uStack_70;
  wchar_t *pwStack_54;
  FName local_38 [4];
  undefined4 local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10213518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = 0;
  FUN_10061b40();
  pwStack_54 = L"L2UI_CH3.InventoryWnd.Inventory_Back";
  uVar1 = FUN_1003f630();
  pwStack_54 = L"L2UI.WindowIcon.WindowIconAdena";
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  uVar1 = FUN_1003f630();
  pwStack_54 = L"L2UI.WindowIcon.Weight";
  *(undefined4 *)(in_ECX + 0x1e0) = uVar1;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  pwStack_54 = (wchar_t *)0x1017c27e;
  FName::FName(local_38,0);
  UObject::GetTransientPackage();
  pwStack_54 = (wchar_t *)0x0;
  uStack_70 = 0x1017c2aa;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_54 = (wchar_t *)0x0;
    iVar3 = FUN_1001c510();
  }
  pwStack_54 = (wchar_t *)0x0;
  *(int *)(in_ECX + 0xc0) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf2;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_70 = *(undefined4 *)(in_ECX + 0xc0);
  FUN_10060d40();
  uStack_70 = 0x1017c30f;
  FUN_1005c1e0();
  uStack_70 = 0x1017c31b;
  FName::FName((FName *)&pwStack_54,0);
  UObject::GetTransientPackage();
  uStack_70 = 0;
  uStack_8c = 0x1017c33b;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_70 = 0x1017c34b;
    piVar4 = (int *)FUN_10178310();
  }
  uStack_70 = 0;
  *(int **)(in_ECX + 0x1f0) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  uStack_8c = *(undefined4 *)(in_ECX + 0x1f0);
  FUN_10060d40();
  uStack_8c = 0x1017c38e;
  FUN_1005c1e0();
  uStack_8c = 0x1017c39a;
  FName::FName((FName *)&uStack_70,0);
  UObject::GetTransientPackage();
  uStack_8c = 0;
  uStack_a8 = 0x1017c3ba;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_8c = 5;
    piVar4 = (int *)FUN_1017be50();
  }
  uStack_8c = 0;
  *(int **)(in_ECX + 0x1e8) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  uStack_a8 = *(undefined4 *)(in_ECX + 0x1e8);
  FUN_10060d40();
  uStack_a8 = 0x1017c420;
  FUN_1005c1e0();
  uStack_a8 = 0x1017c42c;
  FName::FName((FName *)&uStack_8c,0);
  UObject::GetTransientPackage();
  uStack_a8 = 0;
  uStack_c4 = 0x1017c44c;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_a8 = 5;
    piVar4 = (int *)FUN_1017be50();
  }
  uStack_a8 = 0;
  *(int **)(in_ECX + 0x1ec) = piVar4;
  (**(code **)(*piVar4 + 0xc0))();
  uStack_c4 = *(undefined4 *)(in_ECX + 0x1ec);
  uStack_c8 = 0x1017c4a6;
  FUN_10060d40();
  uStack_c4 = 0x1017c4b2;
  FUN_1005c1e0();
  uStack_c4 = 0x1017c4be;
  FName::FName((FName *)&uStack_a8,0);
  pUVar5 = UObject::GetTransientPackage();
  uStack_c8 = *(undefined4 *)GError_exref;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_d8 = CONCAT44(uStack_a8,pUVar5);
  uStack_e0 = 0x1017c4de;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_100514d0();
  }
  uStack_c4 = 0;
  uStack_c8 = 0;
  *(int *)(in_ECX + 500) = iVar3;
  uStack_cc = 0x17;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xfe001a;
  uStack_d0 = 0xbd;
  uStack_d8 = 0x9f0000000c;
  (**(code **)(**(int **)(in_ECX + 500) + 0xc0))();
  uStack_e0 = *(undefined4 *)(in_ECX + 500);
  uStack_e4 = 0x1017c534;
  FUN_10060d40();
  uStack_e0 = 0x1017c540;
  FUN_1005c1e0();
  uStack_e0 = 0x1017c54c;
  FName::FName((FName *)&uStack_c4,0);
  pUVar5 = UObject::GetTransientPackage();
  uStack_e4 = *(undefined4 *)GError_exref;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f4 = CONCAT44(uStack_c4,pUVar5);
  pwStack_fc = L"쒃蔠瓀謉\xe8c8閭\xffff˫쀳ͪjj౪啪蚉Ǹ";
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1017bf00();
  }
  uVar6 = 3;
  uStack_e0 = 0;
  uStack_e4 = 0;
  uStack_e8 = 0xc;
  uStack_ec = 0x55;
  *(int **)(in_ECX + 0x1f8) = piVar4;
  uStack_f4 = 0x17400000075;
  (**(code **)(*piVar4 + 0xc0))();
  pwStack_fc = *(wchar_t **)(in_ECX + 0x1f8);
  puStack_100 = (undefined8 *)0x1017c5b1;
  FUN_10060d40();
  pwStack_fc = L"隋Ǩ";
  FUN_1005c1e0();
  pwStack_fc = (wchar_t *)0x0;
  puStack_100 = (undefined8 *)0xffffffff;
  uStack_104 = 1;
  pwStack_108 = L"L2UI_CH3.InventoryWnd.Inventory_tab1";
  pwStack_10c = L"L2UI_CH3.InventoryWnd.Inventory_tab2";
  pUStack_110 = (UPackage *)0x17;
  FUN_1004ff30(2,*(undefined4 *)(in_ECX + 0x1e8),0x5e);
  pwStack_fc = (wchar_t *)0x0;
  puStack_100 = (undefined8 *)0xffffffff;
  uStack_104 = 1;
  pwStack_108 = L"L2UI_CH3.InventoryWnd.Inventory_tab1";
  pwStack_10c = L"L2UI_CH3.InventoryWnd.Inventory_tab2";
  pUStack_110 = (UPackage *)0x17;
  FUN_1004ff30(0x76,*(undefined4 *)(in_ECX + 0x1ec),0x5e);
  pwStack_fc = L"L2UI_CH3.InventoryWnd.Inventory_recipe";
  puStack_100 = (undefined8 *)0x1017c61f;
  uVar1 = FUN_1003f630();
  pwStack_fc = L"L2UI_CH3.InventoryWnd.Inventory_recipe_drag";
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  puStack_100 = (undefined8 *)0x1017c633;
  uVar1 = FUN_1003f630();
  pwStack_fc = L"L2UI_CH3.InventoryWnd.Inventory_trash";
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  puStack_100 = (undefined8 *)0x1017c647;
  uVar1 = FUN_1003f630();
  pwStack_fc = L"L2UI_CH3.InventoryWnd.Inventory_trash_drag";
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  puStack_100 = (undefined8 *)0x1017c65b;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  pwStack_fc = (wchar_t *)0x1017c66d;
  FName::FName((FName *)&uStack_e0,0);
  pUStack_110 = UObject::GetTransientPackage();
  puStack_100 = *(undefined8 **)GError_exref;
  pwStack_fc = (wchar_t *)0x0;
  uStack_104 = 0;
  pwStack_108 = (wchar_t *)0x0;
  pwStack_10c = (wchar_t *)uStack_e0;
  pUVar2 = UObject::StaticAllocateObject(&DAT_10357870);
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    pwStack_fc = L"䓇䠤";
    FString::FString((FString *)&uStack_cc,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
    pwStack_fc = L"䓇䠤\x01";
    FString::FString((FString *)&uStack_d8,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_recipe");
    pwStack_fc = (wchar_t *)&uStack_cc;
    puStack_100 = &uStack_d8;
    uVar6 = 3;
    uStack_104 = 0x1017c6e7;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x228) = uVar1;
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    FString::~FString((FString *)&uStack_d8);
  }
  if ((uVar6 & 1) != 0) {
    FString::~FString((FString *)&uStack_cc);
  }
  uVar6 = 0;
  pwStack_fc = (wchar_t *)0x0;
  puStack_100 = (undefined8 *)0x0;
  uStack_d8._0_4_ = (void *)(longlong)ROUND(*(float *)(in_ECX + 0x220));
  uStack_104 = (void *)uStack_d8;
  uStack_e0 = CONCAT22(uStack_e0._2_2_,in_FPUControlWord);
  uStack_d8 = (longlong)ROUND(*(float *)(in_ECX + 0x21c));
  pwStack_108 = (void *)uStack_d8;
  pwStack_10c = *(wchar_t **)(in_ECX + 0x218);
  pUStack_110 = *(UPackage **)(in_ECX + 0x214);
  (**(code **)(**(int **)(in_ECX + 0x228) + 0xc0))();
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x228),0x22);
  FUN_1005c1e0(uVar1);
  FUN_100040d0(0x37b,1);
  FName::FName((FName *)&uStack_f4,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,(undefined4)uStack_f4,0,0,*(undefined4 *)GError_exref,0,0
                     );
  if (pUVar2 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffff24,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash")
    ;
    uStack_c8 = 2;
    uVar6 = uVar6 | 4;
    FString::FString((FString *)&uStack_e8,(ushort *)L"L2UI_CH3.InventoryWnd.Inventory_trash");
    uStack_c8 = 3;
    uVar6 = uVar6 | 8;
    uVar1 = FUN_10006980(&uStack_e8,&stack0xffffff24,0);
  }
  *(undefined4 *)(in_ECX + 0x224) = uVar1;
  uStack_c8 = 2;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    FString::~FString((FString *)&uStack_e8);
  }
  uStack_c8 = 0xffffffff;
  if ((uVar6 & 4) != 0) {
    FString::~FString((FString *)&stack0xffffff24);
  }
  uStack_f4._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x210));
  uVar1 = (undefined4)uStack_f4;
  pwStack_fc = (wchar_t *)CONCAT22(pwStack_fc._2_2_,in_FPUControlWord);
  uStack_f4 = (longlong)ROUND(*(float *)(in_ECX + 0x20c));
  (**(code **)(**(int **)(in_ECX + 0x224) + 0xc0))
            (*(undefined4 *)(in_ECX + 0x204),*(undefined4 *)(in_ECX + 0x208),(undefined4)uStack_f4,
             uVar1,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x224),0x22);
  FUN_1005c1e0(uVar1);
  (**(code **)(**(int **)(in_ECX + 0x224) + 0x13c))();
  FUN_100040d0(0x37a,1);
  FName::FName((FName *)&pUStack_110,0);
  pUVar5 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_1036b1b0,pUVar5,pUStack_110,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10052a20();
  }
  *(int **)(in_ECX + 0x22c) = piVar4;
  (**(code **)(*piVar4 + 0xc0))(0x73,0x164,0x54,0x11,0,0,3);
  *(undefined4 *)(*(int *)(in_ECX + 0x22c) + 0x2ec) = 3;
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x22c),0x22);
  FUN_1005c1e0(uVar1);
  ExceptionList = pwStack_108;
  return 1;
}


// ==== 1017ca30 FUN_1017ca30

bool FUN_1017ca30(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x100a) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0x100b) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0x100c) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1017cad0 FUN_1017cad0

undefined4 FUN_1017cad0(void)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  uint uVar4;
  FString *pFStack_90;
  FString *pFStack_70;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102135dc;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_10061b40();
  pFStack_54 = (FString *)0x1028aba0;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x1017cb54;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x1017cb6d;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x1cc) = 0x100b;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  pFStack_70 = *(FString **)(in_ECX + 0x1d0);
  FUN_10060d40();
  pFStack_70 = (FString *)0x1017cc17;
  FUN_1005c1e0();
  pFStack_70 = (FString *)0x1017cc27;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_70;
  pFStack_70 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_70,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_70 = (FString *)0x1017cc5f;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = uVar4 | 4;
    pFStack_70 = (FString *)0x1017cc77;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 4;
    uVar4 = uVar4 | 0xc;
    pFStack_70 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  local_8 = 3;
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) = 0x100c;
  pFStack_70 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  pFStack_90 = (FString *)0x1017cd13;
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x118))();
  local_20 = (undefined1 *)&pFStack_90;
  pFStack_90 = extraout_ECX_01;
  FName::FName((FName *)&pFStack_90,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar2 = FUN_1000a130(0x33c,pUVar3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_90 = (FString *)0x1017cd79;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_18 = uVar4 | 0x10;
    pFStack_90 = (FString *)0x1017cd91;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 6;
    uVar4 = uVar4 | 0x30;
    pFStack_90 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980(local_3c);
  }
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  local_8 = 5;
  if ((uVar4 & 0x20) != 0) {
    uVar4 = uVar4 & 0xffffffdf;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x10) != 0) {
    local_18 = uVar4 & 0xffffffef;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x1cc) = 0x100a;
  pFStack_90 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))(0xd,0x5f,0x60,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1cc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x374);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017ce60 Catch@1017ce60

void Catch_1017ce60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1017ce74 Catch@1017ce74

void Catch_1017ce74(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyFunctionWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017cea0 FUN_1017cea0

undefined4 FUN_1017cea0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(in_ECX + 0x1d8);
  uVar7 = 0x8a;
  uVar6 = 0x78;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x78,0x8a,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017cf75 Catch@1017cf75

void Catch_1017cf75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017cf89 Catch@1017cf89

void Catch_1017cf89(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyFunctionWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017cfb0 FUN_1017cfb0

UObject * FUN_1017cfb0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103a28d0);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&DAT_103a28d0);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 1017d010 FUN_1017d010

void FUN_1017d010(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213620;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x200))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d075 Catch@1017d075

void Catch_1017d075(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017d089 Catch@1017d089

void Catch_1017d089(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyFunctionWnd::OnGameCancelBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d0b0 FUN_1017d0b0

void FUN_1017d0b0(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x204))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d115 Catch@1017d115

void Catch_1017d115(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017d129 Catch@1017d129

void Catch_1017d129(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyFunctionWnd::OnNewCharacterBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d150 FUN_1017d150

void FUN_1017d150(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x208))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d1b5 Catch@1017d1b5

void Catch_1017d1b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017d1c9 Catch@1017d1c9

void Catch_1017d1c9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyFunctionWnd::OnDelCharacterBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d1f0 FUN_1017d1f0

void FUN_1017d1f0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCLobbyFunctionWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1017d250 FUN_1017d250

void FUN_1017d250(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102136b8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCLobbyFunctionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017d2b0 FUN_1017d2b0

void FUN_1017d2b0(byte param_1)

{
  void *in_ECX;
  
  FUN_1017d250();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1dc);
  }
  return;
}


// ==== 1017d2f0 FUN_1017d2f0

bool FUN_1017d2f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0x1009)) {
    iVar1 = (**(code **)(*in_ECX + 500))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1017d350 FUN_1017d350

undefined4 FUN_1017d350(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102136e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    *(undefined4 *)(in_ECX + 0x1cc) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d3b1 Catch@1017d3b1

void Catch_1017d3b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017d3c5 Catch@1017d3c5

void Catch_1017d3c5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyStartWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d3f0 FUN_1017d3f0

undefined4 FUN_1017d3f0(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  int iVar3;
  int in_ECX;
  FString *extraout_ECX;
  uint uVar4;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213734;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  pFStack_54 = (FString *)0x1028b038;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  pUVar2 = UObject::GetTransientPackage();
  iVar3 = FUN_1000a130(0x33c,pUVar2);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x1017d46d;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton2_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x1017d486;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton2");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980(local_30);
  }
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    local_18 = uVar4 & 0xfffffffe;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x1cc) = 0x1009;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))(0xd,10,0x74,0x1f,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1cc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0xa0);
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x118))(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d569 Catch@1017d569

void Catch_1017d569(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1017d57d Catch@1017d57d

void Catch_1017d57d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyStartWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d5a0 FUN_1017d5a0

undefined4 FUN_1017d5a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(in_ECX + 0x1d0);
  uVar7 = 0x31;
  uVar6 = 0x8c;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x8c,0x31,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d675 Catch@1017d675

void Catch_1017d675(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017d689 Catch@1017d689

void Catch_1017d689(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyStartWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d6b0 FUN_1017d6b0

void FUN_1017d6b0(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213770;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_1017cfb0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x1fc))();
  ExceptionList = local_10;
  return;
}


// ==== 1017d715 Catch@1017d715

void Catch_1017d715(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017d729 Catch@1017d729

void Catch_1017d729(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyStartWnd::OnGameStartBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d750 FUN_1017d750

void FUN_1017d750(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCLobbyStartWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1017d7b0 FUN_1017d7b0

void FUN_1017d7b0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102137c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCLobbyStartWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017d810 FUN_1017d810

void FUN_1017d810(byte param_1)

{
  void *in_ECX;
  
  FUN_1017d7b0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d4);
  }
  return;
}


// ==== 1017d850 FUN_1017d850

bool FUN_1017d850(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x1f04) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
  }
  else if (param_1 == -0xffffffd) {
    iVar1 = (**(code **)(*in_ECX + 0x1fc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 1017d8d0 FUN_1017d8d0

undefined4 FUN_1017d8d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102137f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017d931 Catch@1017d931

void Catch_1017d931(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017d945 Catch@1017d945

void Catch_1017d945(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnSelectWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017d970 FUN_1017d970

void FUN_1017d970(User *param_1)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = User::GetClassNamePointer(param_1);
  iVar2 = FUN_1003f7d0(puVar1);
  *(int *)(param_1 + 0x204) = iVar2;
  *(undefined4 *)(iVar2 + 0x1cc) = 0x7fff;
  User::SetPawnResource(param_1);
  return;
}


// ==== 1017d9b0 FUN_1017d9b0

void FUN_1017d9b0(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x1f8))(param_1);
  if (in_ECX[0x78] != 0) {
    FUN_10009f70(param_1);
  }
  return;
}


// ==== 1017d9e0 FUN_1017d9e0

undefined4 FUN_1017d9e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1774);
}


// ==== 1017d9f0 FUN_1017d9f0

void FUN_1017d9f0(int param_1)

{
  int in_ECX;
  
  User::GetName((User *)(param_1 * 0x314 + 0x1e4 + in_ECX));
  return;
}


// ==== 1017da10 FUN_1017da10

void FUN_1017da10(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 6000)) {
    puVar2 = (undefined4 *)(in_ECX + 1000);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0xc5;
    } while (iVar1 < *(int *)(in_ECX + 6000));
  }
  return;
}


// ==== 1017da40 FUN_1017da40

void FUN_1017da40(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 6000)) {
    piVar2 = (int *)(in_ECX + 1000);
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x28))();
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xc5;
    } while (iVar1 < *(int *)(in_ECX + 6000));
  }
  *(undefined4 *)(in_ECX + 6000) = 0;
  *(undefined4 *)(in_ECX + 0x1774) = 0xffffffff;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x174))();
  (**(code **)(*DAT_103663bc + 0x5e8))(0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x1017dac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_103663bc + 0x5e0))();
  return;
}


// ==== 1017dad0 FUN_1017dad0

undefined4 FUN_1017dad0(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && (-1 < *(int *)(in_ECX + 0x1774))) {
    FUN_10141eb0(*(int *)(in_ECX + 0x1774));
  }
  (**(code **)(*DAT_103663bc + 0x5e8))(0xffffffff);
  FUN_10009f70(0xffffffff);
  *(undefined4 *)(in_ECX + 0x1774) = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d8) + 0x1d0) + 0x118)
  )(1);
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d8) + 0x1d4) + 0x118)
  )(1);
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d4) + 0x1cc) + 0x118)
  )(1);
  return 1;
}


// ==== 1017dba0 FUN_1017dba0

bool FUN_1017dba0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x10001) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
  }
  else if (param_1 == -0xffffffd) {
    iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 1017dc20 FUN_1017dc20

void FUN_1017dc20(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
  *(undefined4 *)(in_ECX + 0x1e0) = 0;
  return;
}


// ==== 1017dc40 FUN_1017dc40

undefined4 FUN_1017dc40(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213810;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
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
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017dcc4 Catch@1017dcc4

void Catch_1017dcc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017dcd8 Catch@1017dcd8

void Catch_1017dcd8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017dd00 FUN_1017dd00

void FUN_1017dd00(void)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  int extraout_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213830;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1017d9e0();
  if (((iVar1 < 0) || (iVar5 = iVar1 * 0x314, 0 < *(int *)(iVar5 + 0x3f4 + extraout_ECX))) ||
     (*(char *)(iVar5 + 0x3f0 + extraout_ECX) != '\0')) {
    ExceptionList = local_10;
    return;
  }
  if ((0 < *(int *)(in_ECX + 0x1e0)) && (iVar1 < *(int *)(in_ECX + 0x1e0))) {
    psVar2 = (short *)FUN_1000ac40(iVar1);
    if ((psVar2 != (short *)0x0) && ((*psVar2 != 0 && (iVar3 = FUN_10145750(psVar2), iVar3 != 0))))
    {
      iVar1 = *DAT_103663bc;
      puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x28a98));
      (**(code **)(iVar1 + 0x658))(puVar4);
      ExceptionList = local_10;
      return;
    }
    FUN_1014fd10(iVar5 + 0x1e4 + *(int *)(in_ECX + 0x1cc));
    FUN_10141c30(iVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1017de19 Catch@1017de19

void Catch_1017de19(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017de2d Catch@1017de2d

void Catch_1017de2d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyWnd::GameStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017de50 FUN_1017de50

void FUN_1017de50(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213850;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((DAT_103663bc != (int *)0x0) && (DAT_103663bc[0x14] != 0)) &&
     (*(int *)(DAT_103663bc[0x14] + 0x58) != 0)) {
    (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0xe0))(0x3fc00000,0);
  }
  (**(code **)(*DAT_103663bc + 0x604))();
  FUN_1017dc20();
  ExceptionList = local_10;
  return;
}


// ==== 1017deea Catch@1017deea

void Catch_1017deea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017defe Catch@1017defe

void Catch_1017defe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyWnd::ReceiveCharacterSelectedPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017df20 FUN_1017df20

undefined4 FUN_1017df20(void)

{
  FUN_1017dd00();
  return 1;
}


// ==== 1017df30 FUN_1017df30

undefined4 FUN_1017df30(void)

{
  if (((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0)) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(0x3fc00000,0);
  }
  FUN_1014cd40();
  FUN_1017dc20();
  return 1;
}


// ==== 1017df80 FUN_1017df80

undefined4 FUN_1017df80(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1e0) == 7) {
    iVar1 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25c98));
    (**(code **)(iVar1 + 0x658))(puVar2);
    return 1;
  }
  if (*(int *)(in_ECX + 0x1e0) < 7) {
    FUN_10141f70();
  }
  return 1;
}


// ==== 1017dfd0 FUN_1017dfd0

undefined4 FUN_1017dfd0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    (**(code **)(*DAT_103663bc + 0x5e8))(0xffffffff);
    FUN_10009f70(0xffffffff);
    *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x1774) = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x1d8) + 0x1d0) + 0x118))(1);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x1d8) + 0x1d4) + 0x118))(1);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x1d4) + 0x1cc) + 0x118))(1);
  }
  else {
    iVar1 = FUN_1017d9e0();
    if (-1 < iVar1) {
      FUN_10141df0(iVar1);
      return 1;
    }
  }
  return 1;
}


// ==== 1017e090 FUN_1017e090

void FUN_1017e090(void)

{
  int in_ECX;
  
  FUN_1005fe50();
  (**(code **)(*DAT_103663bc + 0x5e8))(0xffffffff);
  FUN_10009f70(0xffffffff);
  *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x1774) = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x1d8) + 0x1d0) + 0x118))(1);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x1d8) + 0x1d4) + 0x118))(1);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x1d4) + 0x1cc) + 0x118))(1);
                    /* WARNING: Could not recover jumptable at 0x1017e124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x13c))();
  return;
}


// ==== 1017e130 FUN_1017e130

undefined4 FUN_1017e130(int param_1,undefined4 param_2)

{
  int *in_ECX;
  
  if (param_1 == 0xd) {
    (**(code **)(*in_ECX + 0x1fc))();
  }
  FUN_1005f3a0(param_1,param_2);
  return 1;
}


// ==== 1017e160 FUN_1017e160

undefined4 FUN_1017e160(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int in_ECX;
  int local_4;
  
  local_4 = in_ECX;
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.LobbyWnd.select1_back",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_ch3.playerstatuswnd.ps_hpbar",1);
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_ch3.PlayerStatusWnd.ps_mpbar",1);
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_ch3.PlayerStatusWnd.ps_expbar",1);
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  *(undefined4 *)(in_ECX + 1000) = 0;
  *(undefined4 *)(in_ECX + 0x6fc) = 0;
  *(undefined4 *)(in_ECX + 0xa10) = 0;
  *(undefined4 *)(in_ECX + 0xd24) = 0;
  *(undefined4 *)(in_ECX + 0x1038) = 0;
  *(undefined4 *)(in_ECX + 0x134c) = 0;
  *(undefined4 *)(in_ECX + 0x1660) = 0;
  FName::FName((FName *)&local_4,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_1035ac50,pUVar2,local_4,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_1000b680();
  }
  *(int *)(in_ECX + 0x1e0) = iVar4;
  *(undefined4 *)(iVar4 + 0x1cc) = 0x1f04;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))(0x2e,0xd,0x8a,0x11,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e0),2);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 1017e280 FUN_1017e280

void FUN_1017e280(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uStack_c8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  void *pvStack_94;
  undefined *puStack_90;
  undefined4 uStack_8c;
  ushort auStack_88 [64];
  uint uStack_8;
  
  puStack_90 = &UNK_10213870;
  pvStack_94 = ExceptionList;
  uStack_c8 = DAT_103554c4 ^ (uint)auStack_88;
  puStack_98 = (undefined1 *)&uStack_c8;
  ExceptionList = &pvStack_94;
  uStack_8c = 0;
  uStack_8 = uStack_c8;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40();
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x1cc),0xff,1);
  }
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab34));
  FUN_100217a0(0xf,0x10,0xffa3a3a3,puVar4,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
               uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6acfc));
  FUN_100217a0(0xf,0x27,0xffa3a3a3,puVar4,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
               uVar13,uVar14);
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad98));
  FUN_100217a0(0x83,0x45,0xffdcdcdc,puVar4,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
               uVar13,uVar14);
  if ((*(int *)(in_ECX + 0x1774) < 0) || (*(int *)(in_ECX + 6000) < 1)) goto LAB_1017ea39;
  iStack_ac = 0;
  iStack_b0 = 0;
  iStack_a4 = 0;
  iStack_9c = *(int *)(in_ECX + 0x1774) * 0x314 + in_ECX;
  if (*(int *)(iStack_9c + 0x260) != 0) {
    iVar5 = *(int *)(in_ECX + 0x1774) * 0x314 + in_ECX;
    iStack_ac = (*(int *)(iVar5 + 0x264) * 0x55) / *(int *)(iVar5 + 0x260);
  }
  if (*(int *)(iStack_9c + 0x268) != 0) {
    iVar5 = *(int *)(in_ECX + 0x1774) * 0x314 + in_ECX;
    iStack_b0 = (*(int *)(iVar5 + 0x26c) * 0x55) / *(int *)(iVar5 + 0x268);
  }
  if (*(int *)(&UNK_1028b328 + *(int *)(iStack_9c + 0x23c) * 8) != 0 ||
      *(int *)(&UNK_1028b32c + *(int *)(iStack_9c + 0x23c) * 8) != 0) {
    iVar5 = *(int *)(*(int *)(in_ECX + 0x1774) * 0x314 + in_ECX + 0x23c);
    iStack_a0 = *(uint *)(&UNK_1028b328 + iVar5 * 8) -
                *(uint *)(L"NCLobbyStartWnd" + iVar5 * 4 + 0xe);
    iStack_9c = (*(int *)(&UNK_1028b32c + iVar5 * 8) - *(int *)(&UNK_1028b324 + iVar5 * 8)) -
                (uint)(*(uint *)(&UNK_1028b328 + iVar5 * 8) <
                      *(uint *)(L"NCLobbyStartWnd" + iVar5 * 4 + 0xe));
    iStack_a4 = FUN_101c19e0();
  }
  if (iStack_ac - 1U < 0x55) {
    uVar2 = *(undefined4 *)(in_ECX + 0x1d0);
    uVar3 = 0xc;
LAB_1017e533:
    FUN_10021a00(0x23,0x37,iStack_ac,uVar3,0,0,8,0xc,CONCAT44(0xff,uVar2),1);
  }
  else if (0x54 < iStack_ac) {
    uVar2 = *(undefined4 *)(in_ECX + 0x1d0);
    uVar3 = 10;
    iStack_ac = 0x55;
    goto LAB_1017e533;
  }
  if (iStack_b0 - 1U < 0x55) {
    uVar2 = *(undefined4 *)(in_ECX + 0x1d4);
    uVar3 = 0xc;
LAB_1017e583:
    FUN_10021a00(0x23,0x45,iStack_b0,uVar3,0,0,8,0xc,CONCAT44(0xff,uVar2),1);
  }
  else if (0x54 < iStack_b0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x1d4);
    uVar3 = 10;
    iStack_b0 = 0x55;
    goto LAB_1017e583;
  }
  if (iStack_a4 < 1) {
    if (0xce < iStack_a4) goto LAB_1017e5be;
  }
  else {
    if (iStack_a4 < 0xcf) {
      uVar2 = *(undefined4 *)(in_ECX + 0x1d8);
      uVar3 = 0xc;
    }
    else {
LAB_1017e5be:
      uVar2 = *(undefined4 *)(in_ECX + 0x1d8);
      uVar3 = 10;
      iStack_a4 = 0xce;
    }
    FUN_10021a00(0x23,0x53,iStack_a4,uVar3,0,0,8,0xc,CONCAT44(0xff,uVar2),1);
  }
  iVar5 = *(int *)(in_ECX + 0x1774) * 0x314 + in_ECX;
  iVar1 = *(int *)(iVar5 + 0x23c);
  FUN_100133a0(auStack_88,L"%.2f%s",
               ((double)CONCAT44((*(int *)(iVar5 + 0x244) - *(int *)(&UNK_1028b324 + iVar1 * 8)) -
                                 (uint)(*(uint *)(iVar5 + 0x240) <
                                       *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)),
                                 *(uint *)(iVar5 + 0x240) -
                                 *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)) * 100.0) /
               (double)CONCAT44((*(int *)(&UNK_1028b32c + iVar1 * 8) -
                                *(int *)(&UNK_1028b324 + iVar1 * 8)) -
                                (uint)(*(uint *)(&UNK_1028b328 + iVar1 * 8) <
                                      *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)),
                                *(uint *)(&UNK_1028b328 + iVar1 * 8) -
                                *(uint *)(L"NCLobbyStartWnd" + iVar1 * 4 + 0xe)),&DAT_1024129c);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x8a - iStack_a0 / 2,0x55,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_1022dde0,&DAT_1023d810);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x4d - iStack_a0 / 2,0x39,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(in_ECX + 0x1774) * 0x314 + 0x264 + in_ECX));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x43 - iStack_a0,0x39,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(in_ECX + 0x1774) * 0x314 + 0x260 + in_ECX));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x53,0x39,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_1022dde0,&DAT_1023d810);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x4d - iStack_a0 / 2,0x47,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(in_ECX + 0x1774) * 0x314 + 0x26c + in_ECX));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x43 - iStack_a0,0x47,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(in_ECX + 0x1774) * 0x314 + 0x268 + in_ECX));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100212f0(1,0x53,0x47,0xffdcdcdc,auStack_88,0xff);
  appSprintf(auStack_88,(ushort *)&DAT_10233718,
             *(undefined4 *)(*(int *)(in_ECX + 0x1774) * 0x314 + 0x3fc + in_ECX));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0(0xec - iStack_a0,0x38,0xffb09b79,auStack_88,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_101460d0(*(undefined4 *)(*(int *)(in_ECX + 0x1774) * 0x314 + 0x4a4 + in_ECX));
  appSprintf(auStack_88,(ushort *)L"%d %s");
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0(0x20,0x27,0xffb09b79,auStack_88,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  iVar5 = *(int *)(*(int *)(in_ECX + 0x1774) * 0x314 + 0x37c + in_ECX);
  if (iVar5 < 999999) {
    puVar4 = (ushort *)&DAT_10233718;
  }
  else {
    puVar4 = (ushort *)&UNK_1028b878;
  }
  appSprintf(auStack_88,puVar4,iVar5);
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0(0xec - iStack_a0,0x46,0xffb09b79,auStack_88,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
LAB_1017ea39:
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  uStack_8c = 0xffffffff;
  ExceptionList = pvStack_94;
  __security_check_cookie(uStack_8 ^ (uint)auStack_88);
  return;
}


// ==== 1017ea7a Catch@1017ea7a

void Catch_1017ea7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 1017ea8e Catch@1017ea8e

void Catch_1017ea8e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnSelectWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017eab0 FUN_1017eab0

undefined4 FUN_1017eab0(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int in_stack_000002d0;
  int aiStack_340 [195];
  undefined4 uStack_34;
  ushort *puStack_30;
  uint uStack_2c;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102138a0;
  local_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (6 < in_ECX[0x5dc]) {
    *unaff_FS_OFFSET = local_10;
    return 0;
  }
  piVar5 = in_ECX + in_ECX[0x5dc] * 0xc5 + 0x79;
  piVar4 = (int *)register0x00000010;
  for (iVar2 = 0xc5; piVar4 = piVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar4;
    piVar5 = piVar5 + 1;
  }
  puStack_30 = (ushort *)0x1017eb25;
  puStack_30 = User::GetName((User *)&stack0x00000004);
  uStack_34 = 0x1017eb31;
  FUN_1000b3d0();
  puStack_30 = (ushort *)0x1017eb3a;
  iVar2 = User::GetCriminalRate((User *)&stack0x00000004);
  in_ECX[in_ECX[0x5dc] * 0xc5 + 0xdf] = iVar2;
  puStack_30 = (ushort *)(in_ECX + in_ECX[0x5dc] * 0xc5 + 0x79);
  uStack_34 = 0x1017eb68;
  FUN_1017d970();
  iVar2 = in_ECX[0x5dc];
  iVar1 = *DAT_103663bc;
  piVar4 = in_ECX + iVar2 * 0xc5 + 0x79;
  piVar5 = aiStack_340;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  (**(code **)(iVar1 + 0x5dc))(iVar2);
  if (in_stack_000002d0 != 0) {
    iVar2 = in_ECX[0x5dc];
    if ((0 < in_ECX[iVar2 * 0xc5 + 0xfd]) && ((char)in_ECX[iVar2 * 0xc5 + 0xfc] == '\0')) {
      in_ECX[0x5dc] = iVar2 + 1;
      *unaff_FS_OFFSET = local_10;
      return 1;
    }
    (**(code **)(*in_ECX + 500))(iVar2);
  }
  in_ECX[0x5dc] = in_ECX[0x5dc] + 1;
  *unaff_FS_OFFSET = local_10;
  return 1;
}


// ==== 1017ec26 Catch@1017ec26

void Catch_1017ec26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017ec3a Catch@1017ec3a

void Catch_1017ec3a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnSelectWnd::AddPawn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017ec60 FUN_1017ec60

undefined4 FUN_1017ec60(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar2 = ExceptionList;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_102138cb;
  local_c = ExceptionList;
  uVar3 = DAT_103554c4 ^ (uint)&stack0xffffff3c;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 6000) < param_1) {
    *(undefined4 *)(in_ECX + 0x1774) = 0xffffffff;
  }
  else {
    *(int *)(in_ECX + 0x1774) = param_1;
  }
  iVar4 = *(int *)(in_ECX + 0x1774) * 0x314;
  iVar1 = *(int *)(iVar4 + 0x3f4 + in_ECX);
  iVar4 = iVar4 + in_ECX;
  if ((0 < iVar1) && (*(char *)(iVar4 + 0x3f0) == '\0')) {
    (**(code **)(*DAT_103663bc + 0x5e8))(0xffffffff);
    FUN_1000ef40();
    puStack_8 = (undefined1 *)0x0;
    FUN_1000dd30(0x613);
    FUN_1000fc80(&stack0xffffff3c);
    (**(code **)(**(int **)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d0) + 0x138))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d8) + 0x1d4) +
                0x118))(0);
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d4) + 0x1cc) +
                0x118))(0);
    uStack_4 = 0xffffffff;
    FUN_1000e440();
    ExceptionList = local_c;
    return 1;
  }
  if (iVar1 == 0) {
    if (*(char *)(iVar4 + 0x3f0) == '\0') {
      (**(code **)(*DAT_103663bc + 0x5e8))(*(int *)(in_ECX + 0x1774));
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d8) + 0x1d4) +
                  0x118))(1);
      uVar5 = 1;
      goto LAB_1017ee67;
    }
  }
  else if (*(char *)(iVar4 + 0x3f0) == '\0') {
    ExceptionList = pvVar2;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x1774) = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d8) + 0x1d4) + 0x118)
  )(0,uVar3);
  uVar5 = 0;
LAB_1017ee67:
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc[0x142b] + 0x1f8) + 0x1d4) + 0x1cc) + 0x118)
  )(uVar5);
  ExceptionList = local_c;
  return 1;
}


// ==== 1017eeb0 FUN_1017eeb0

undefined4 FUN_1017eeb0(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_320 [197];
  
  if (*(int *)(in_ECX + 0x1e0) < 7) {
    puVar2 = auStack_320;
    for (iVar1 = 0xc5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    FUN_1017eab0();
    *(int *)(in_ECX + 0x1e0) = *(int *)(in_ECX + 0x1e0) + 1;
    return 1;
  }
  return 0;
}


// ==== 1017ef00 FUN_1017ef00

void FUN_1017ef00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  FString *this;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  User *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_760;
  FString local_750 [20];
  int local_73c;
  undefined4 local_734;
  float local_730;
  undefined1 *local_72c;
  void *local_728;
  undefined1 *puStack_724;
  int local_720;
  User local_71c [408];
  int local_584;
  int local_518;
  char local_510;
  int local_50c;
  ushort local_408 [512];
  uint local_8;
  
  puStack_724 = &LAB_102138f9;
  local_728 = ExceptionList;
  uStack_760 = DAT_103554c4 ^ (uint)local_71c;
  local_72c = (undefined1 *)&uStack_760;
  ExceptionList = &local_728;
  local_720 = 0;
  local_8 = uStack_760;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  for (local_73c = 0; local_73c < 8; local_73c = local_73c + 1) {
    puVar6 = (undefined4 *)(local_73c * 0x314 + 0x37bc + DAT_103663bc);
    pUVar7 = local_71c;
    for (iVar5 = 0xc5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pUVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pUVar7 = pUVar7 + 4;
    }
    if (local_518 != 0) {
      uVar1 = *(undefined4 *)(local_518 + 0x1bc);
      local_734 = *(undefined4 *)(local_518 + 0x1c0);
      local_730 = *(float *)(local_518 + 0x2f4) * 0.5 + 7.0 + *(float *)(local_518 + 0x1c4);
      iVar5 = User::GetMeshType(local_71c);
      if (iVar5 == 0) {
        local_730 = local_730 + 4.0;
      }
      iVar5 = 0;
      if (0xff < local_584) {
        iVar5 = 0xff;
      }
      if (0 < local_584) {
        iVar5 = FUN_100536d0(local_584,((int)(local_584 + (local_584 >> 0x1f & 0xfU)) >> 4) + 100,
                             0xff);
      }
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 2;
      uVar8 = 0;
      puVar3 = User::GetName(local_71c);
      uVar2 = local_734;
      FUN_10021000(uVar1,local_734,local_730,iVar5 * -0x100 - 0x100U | 0xffU - iVar5 | 0xffff0000,
                   puVar3,uVar8,uVar9,uVar10,uVar11);
      if ((0 < local_50c) && (local_510 == '\0')) {
        local_730 = local_730 + 9.0;
        this = (FString *)FUN_10062790(local_750,local_50c);
        local_720._0_1_ = 1;
        puVar3 = FString::operator*(this);
        puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6dccc));
        appSprintf(local_408,(ushort *)L"%s : %s",puVar4,puVar3);
        local_720 = (uint)local_720._1_3_ << 8;
        FString::~FString(local_750);
        FUN_100210c0(uVar1,uVar2,local_730,0xffdcdcdc,local_408,2,0,0,0,1,0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  local_720 = 0xffffffff;
  ExceptionList = local_728;
  __security_check_cookie(local_8 ^ (uint)local_71c);
  return;
}


// ==== 1017f181 Catch@1017f181

void Catch_1017f181(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1017f195 Catch@1017f195

void Catch_1017f195(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017f1c0 FUN_1017f1c0

void FUN_1017f1c0(int param_1,FString *param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  uint uStack_8e8;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8cc;
  undefined4 local_8c8;
  FString local_878 [12];
  undefined4 local_86c;
  undefined4 local_868;
  int local_864;
  FString *local_81c;
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  uint local_80c;
  undefined1 local_808 [2048];
  uint local_8;
  
  puStack_810 = &LAB_1021393b;
  local_814 = ExceptionList;
  uStack_8e8 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_8e8;
  ExceptionList = &local_814;
  local_81c = param_2;
  local_80c = 0;
  local_8 = uStack_8e8;
  uVar1 = FUN_1017d9e0();
  FUN_1000ef40();
  local_80c = CONCAT31(local_80c._1_3_,1);
  local_8d8 = 0x5b;
  local_8cc = 0;
  local_8c8 = 1;
  local_8d4 = 0;
  local_86c = 0;
  local_864 = param_1;
  local_868 = uVar1;
  FString::operator=(local_878,local_81c);
  if (param_1 == 0) {
    uVar4 = 0;
    uVar1 = 0;
    puVar2 = FString::operator*(local_81c);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x536d8));
    FUN_10164570(local_808,puVar3,puVar2,uVar1,uVar4);
    FUN_1000de50(local_808);
  }
  else {
    FUN_1000dd30(0x83e);
  }
  FUN_1000fc80(&local_8d8);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x78))();
  local_80c = local_80c & 0xffffff00;
  FUN_1000e440();
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 1017f325 Catch@1017f325

void Catch_1017f325(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1017f339 Catch@1017f339

void Catch_1017f339(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLobbyWnd::NeedToChangeName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017f360 FUN_1017f360

void FUN_1017f360(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  int extraout_ECX;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 local_1f4 [2];
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  ushort local_140 [24];
  undefined1 local_110 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021397b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_1f4;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffe04;
  ExceptionList = &local_c;
  iVar2 = FUN_1017d9e0(uVar1);
  if (((-1 < iVar2) && (iVar2 = iVar2 * 0x314 + extraout_ECX, *(int *)(iVar2 + 0x3f4) < 1)) &&
     (*(char *)(iVar2 + 0x3f0) == '\0')) {
    uVar3 = FUN_1017d9e0(uVar1);
    uVar3 = FUN_1017d9f0(uVar3);
    appSprintf(local_140,(ushort *)&DAT_1022dde0,uVar3);
    uVar6 = 0;
    uVar3 = 0;
    puVar5 = local_140;
    puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x25cf4));
    FUN_10164570(local_110,puVar4,puVar5,uVar3,uVar6);
    FUN_1000ef40();
    local_4 = 0;
    local_1ec = *(undefined4 *)(in_ECX + 0xb8);
    local_1f4[0] = 0;
    local_1e8 = 0;
    local_1e4 = 0;
    FUN_1000de50(local_110);
    FUN_1000fc80(local_1f4);
    (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x138))();
    local_4 = 0xffffffff;
    FUN_1000e440();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_1f4);
  return;
}


// ==== 1017f4c0 FUN_1017f4c0

void FUN_1017f4c0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  User *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102139b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *in_ECX = NCPawnSelectWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  this = (User *)(in_ECX + 0x79);
  iVar1 = 6;
  do {
    User::User(this);
    this = this + 0x314;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  in_ECX[0x5dc] = 0;
  in_ECX[0x5dd] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 1017f560 FUN_1017f560

void FUN_1017f560(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102139e8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnSelectWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017f5c0 FUN_1017f5c0

void FUN_1017f5c0(byte param_1)

{
  void *in_ECX;
  
  FUN_1017f560();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1778);
  }
  return;
}


// ==== 1017f5f0 FUN_1017f5f0

void FUN_1017f5f0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCLobbyWnd::vftable;
  in_ECX[0x78] = 0;
  uVar1 = FUN_1003f630(L"Default.Chat",1);
  in_ECX[0x77] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 1017f660 FUN_1017f660

void FUN_1017f660(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213a48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCLobbyWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1017f6c0 FUN_1017f6c0

void FUN_1017f6c0(byte param_1)

{
  void *in_ECX;
  
  FUN_1017f660();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e4);
  }
  return;
}


// ==== 1017f6f0 FUN_1017f6f0

undefined4 FUN_1017f6f0(void)

{
  UObject *pUVar1;
  int *piVar2;
  undefined4 uVar3;
  UPackage *pUVar4;
  int in_ECX;
  int iStack_64;
  undefined *puStack_60;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  UPackage *pUStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_4;
  
  local_4 = in_ECX;
  FUN_10061b40();
  uStack_1c = 0x1017f708;
  FName::FName((FName *)&local_4,0);
  pUStack_30 = UObject::GetTransientPackage();
  uStack_20 = *(undefined4 *)GError_exref;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  iStack_2c = local_4;
  puStack_34 = &DAT_103a23a0;
  uStack_38 = 0x1017f734;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1017f4c0();
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0x6c;
  uStack_28 = 0x100;
  *(int **)(in_ECX + 0x1cc) = piVar2;
  iStack_2c = 0x1b;
  pUStack_30 = (UPackage *)0x18;
  puStack_34 = (undefined *)0x1017f769;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_38 = *(undefined4 *)(in_ECX + 0x1cc);
  puStack_34 = (undefined *)0x4002;
  uStack_3c = 0x1017f77c;
  puStack_34 = (undefined *)FUN_10060d40();
  uStack_38 = 0x1017f788;
  FUN_1005c1e0();
  puStack_34 = (undefined *)0x9d;
  uStack_38 = 0x1017f79d;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x164))();
  uStack_38 = 0x1b;
  uStack_3c = 0x18;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xd0))();
  FName::FName((FName *)&pUStack_30,0);
  pUStack_5c = UObject::GetTransientPackage();
  uStack_54 = 0;
  uStack_58 = pUStack_30;
  puStack_60 = &DAT_1035c110;
  iStack_64 = 0x1017f7e7;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10012260();
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar3;
  FUN_10060d40();
  FUN_1005c1e0();
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xd0))();
  uStack_54 = 0xb8;
  uStack_58 = 0x1017f842;
  FUN_1000eae0();
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x13c))();
  uStack_54 = 0x1017f85e;
  FName::FName((FName *)&uStack_3c,0);
  pUVar4 = UObject::GetTransientPackage();
  uStack_58 = *(undefined4 *)GError_exref;
  uStack_54 = 0;
  pUStack_5c = (UPackage *)0x0;
  puStack_60 = (undefined *)0x0;
  iStack_64 = uStack_3c;
  pUVar1 = UObject::StaticAllocateObject(&DAT_103a1e70,pUVar4);
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1017d750();
  }
  uStack_54 = 0;
  *(int **)(in_ECX + 0x1d4) = piVar2;
  uStack_58 = 0;
  iStack_64 = *(int *)GSEKScreenY_exref + -0x6f;
  pUStack_5c = (UPackage *)0x31;
  puStack_60 = (undefined *)0x8c;
  (**(code **)(*piVar2 + 0xc0))(*(int *)GSEKScreenX_exref / 2 + -0x47);
  uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d4),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xd0))(8,0,0xfffffff6);
  FName::FName((FName *)&iStack_64,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_103a1940,pUVar4,iStack_64,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_1017d1f0();
  }
  *(int **)(in_ECX + 0x1d8) = piVar2;
  (**(code **)(*piVar2 + 0xc0))
            (*(int *)GSEKScreenX_exref + -0x9a,*(int *)GSEKScreenY_exref + -200,0x78,0x8a,0,0,3);
  uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d8),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xd0))(9,0xffffffde,0xfffffff6);
  return 1;
}


// ==== 1017f9f0 FUN_1017f9f0

bool FUN_1017f9f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == -0x500edfee) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == -0x500edfeb) {
      iVar1 = (**(code **)(*in_ECX + 0x200))();
      return iVar1 != 0;
    }
    if (param_2 == -0x500edfef) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == -0x500edfec) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == -0x500edfea) {
      iVar1 = (**(code **)(*in_ECX + 0x204))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1017fad0 FUN_1017fad0

undefined4 FUN_1017fad0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213a70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
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
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fb62 Catch@1017fb62

void Catch_1017fb62(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017fb76 Catch@1017fb76

void Catch_1017fb76(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017fba0 FUN_1017fba0

undefined4 FUN_1017fba0(void)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213a90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *DAT_103663bc;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3eb24));
  (**(code **)(iVar1 + 0x658))(puVar2);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fc11 Catch@1017fc11

void Catch_1017fc11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017fc25 Catch@1017fc25

void Catch_1017fc25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnNewAccountBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017fc50 FUN_1017fc50

undefined4 FUN_1017fc50(void)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *DAT_103663bc;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3eb80));
  (**(code **)(iVar1 + 0x658))(puVar2);
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fcc1 Catch@1017fcc1

void Catch_1017fcc1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017fcd5 Catch@1017fcd5

void Catch_1017fcd5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnNewAccountBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017fd00 FUN_1017fd00

undefined4 FUN_1017fd00(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213ad0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10164450();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fd54 Catch@1017fd54

void Catch_1017fd54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017fd68 Catch@1017fd68

void Catch_1017fd68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnNewAccountBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017fd90 FUN_1017fd90

undefined4 FUN_1017fd90(void)

{
  FString aFStack_3c [8];
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10213af9;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((DAT_103663bc != (int *)0x0) && (DAT_103663bc[0x142b] != 0)) &&
     (*(int *)(DAT_103663bc[0x142b] + 500) != 0)) {
    FString::FString(aFStack_3c,(ushort *)L"CreditState");
    local_8 = local_8 & 0xffffff00;
    FUN_10070110();
    uStack_34 = 0x1017fe23;
    (**(code **)(*DAT_103663bc + 0x604))();
    uStack_34 = 0x1017fe3a;
    FUN_10174cb0();
    uStack_34 = 0x1017fe52;
    (**(code **)(**(int **)(DAT_103663bc[0x142b] + 500) + 0x78))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fe69 Catch@1017fe69

void Catch_1017fe69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017fe7d Catch@1017fe7d

void Catch_1017fe7d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnNewAccountBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017fea0 FUN_1017fea0

undefined4 FUN_1017fea0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10149f50();
  ExceptionList = local_10;
  return 1;
}


// ==== 1017fef4 Catch@1017fef4

void Catch_1017fef4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1017ff08 Catch@1017ff08

void Catch_1017ff08(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnReplayBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1017ff30 FUN_1017ff30

undefined4 FUN_1017ff30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar7 = *(int *)(in_ECX + 0x1cc);
  if (iVar7 != 0) {
    uVar9 = 1;
    uVar8 = 0xff;
    uVar6 = 0x8a;
    uVar5 = 0x78;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = FUN_101c19e0(0,0,0x78,0x8a,iVar7,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(0,0,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6,iVar7,uVar8,uVar9);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018000b Catch@1018000b

void Catch_1018000b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018001f Catch@1018001f

void Catch_1018001f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10180040 FUN_10180040

undefined4 FUN_10180040(void)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *extraout_ECX_02;
  FString *extraout_ECX_03;
  uint uVar4;
  FString *pFStack_c4;
  FString *pFStack_a8;
  FString *pFStack_8c;
  FString *pFStack_70;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213c73;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_10061b40();
  pFStack_54 = (FString *)0x1028aba0;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x101800c4;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x101800dd;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x1cc) = 0xaff12012;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  pFStack_70 = *(FString **)(in_ECX + 0x1d0);
  FUN_10060d40();
  pFStack_70 = (FString *)0x10180187;
  FUN_1005c1e0();
  pFStack_70 = (FString *)0x10180197;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_70;
  pFStack_70 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_70,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_70 = (FString *)0x101801cf;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = uVar4 | 4;
    pFStack_70 = (FString *)0x101801e7;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 4;
    uVar4 = uVar4 | 0xc;
    pFStack_70 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  local_8 = 3;
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) = 0xaff12015;
  pFStack_70 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  pFStack_8c = *(FString **)(in_ECX + 0x1d4);
  FUN_10060d40();
  pFStack_8c = (FString *)0x1018028f;
  FUN_1005c1e0();
  pFStack_8c = (FString *)0x1018029f;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_8c;
  pFStack_8c = extraout_ECX_01;
  FName::FName((FName *)&pFStack_8c,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_8c = (FString *)0x101802d7;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_18 = uVar4 | 0x10;
    pFStack_8c = (FString *)0x101802ef;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 6;
    uVar4 = uVar4 | 0x30;
    pFStack_8c = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  local_8 = 5;
  if ((uVar4 & 0x20) != 0) {
    uVar4 = uVar4 & 0xffffffdf;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x10) != 0) {
    uVar4 = uVar4 & 0xffffffef;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xaff12011;
  pFStack_8c = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  pFStack_a8 = *(FString **)(in_ECX + 0x1d8);
  FUN_10060d40();
  pFStack_a8 = (FString *)0x10180397;
  FUN_1005c1e0();
  pFStack_a8 = (FString *)0x101803a7;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_a8;
  pFStack_a8 = extraout_ECX_02;
  FName::FName((FName *)&pFStack_a8,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_a8 = (FString *)0x101803df;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,7);
    local_18 = uVar4 | 0x40;
    pFStack_a8 = (FString *)0x101803f7;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 8;
    uVar4 = uVar4 | 0xc0;
    pFStack_a8 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  local_8 = 7;
  if ((char)uVar4 < '\0') {
    uVar4 = uVar4 & 0xffffff7f;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x40) != 0) {
    uVar4 = uVar4 & 0xffffffbf;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0xaff12014;
  pFStack_a8 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))();
  pFStack_c4 = *(FString **)(in_ECX + 0x1dc);
  FUN_10060d40();
  pFStack_c4 = (FString *)0x101804a4;
  FUN_1005c1e0();
  pFStack_c4 = (FString *)0x101804b4;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_c4;
  pFStack_c4 = extraout_ECX_03;
  FName::FName((FName *)&pFStack_c4,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar2 = FUN_1000a130(0x33c,pUVar3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_c4 = (FString *)0x101804ec;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,9);
    local_18 = uVar4 | 0x100;
    pFStack_c4 = (FString *)0x10180507;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 10;
    uVar4 = uVar4 | 0x300;
    pFStack_c4 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980(local_3c);
  }
  *(undefined4 *)(in_ECX + 0x1e0) = uVar1;
  local_8 = 9;
  if ((uVar4 & 0x200) != 0) {
    uVar4 = uVar4 & 0xfffffdff;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 0x100) != 0) {
    local_18 = uVar4 & 0xfffffeff;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1e0) + 0x1cc) = 0xaff12016;
  pFStack_c4 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))(0xd,0x6b,0x60,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e0),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x4e3);
  ExceptionList = local_10;
  return 1;
}


// ==== 101805e5 Catch@101805e5

void Catch_101805e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101805f9 Catch@101805f9

void Catch_101805f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginFunctionWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10180630 FUN_10180630

undefined4 FUN_10180630(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213c90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    *(undefined4 *)(in_ECX + 0x1cc) = 0;
  }
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10180698 Catch@10180698

void Catch_10180698(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101806ac Catch@101806ac

void Catch_101806ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginServerWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101806d0 FUN_101806d0

void FUN_101806d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213cb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 1018072b Catch@1018072b

void Catch_1018072b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018073f Catch@1018073f

void Catch_1018073f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginServerWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10180760 FUN_10180760

void FUN_10180760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103af850,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10180790 FUN_10180790

void FUN_10180790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103afd80,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101807c0 FUN_101807c0

void FUN_101807c0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCServerInfoWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10180820 FUN_10180820

void FUN_10180820(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213d08;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCServerInfoWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10180880 FUN_10180880

void FUN_10180880(byte param_1)

{
  void *in_ECX;
  
  FUN_10180820();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d4);
  }
  return;
}


// ==== 101808b0 FUN_101808b0

undefined4 FUN_101808b0(void)

{
  int iVar1;
  int *piVar2;
  UPackage *pUVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213d30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  uStack_40 = 0x101808f4;
  FName::FName((FName *)&uStack_38,0);
  UObject::GetTransientPackage();
  uStack_40 = 0x210;
  uStack_44 = 0x10180907;
  iVar1 = FUN_10180760();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_34 = 0x10180915;
    piVar2 = (int *)FUN_101aa0d0();
  }
  *(int **)(in_ECX + 0x1cc) = piVar2;
  uStack_34 = 3;
  uStack_38 = 0;
  uStack_40 = 0x14a;
  uStack_44 = 0x13c;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0x1018093f;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_50 = 2;
  uStack_54 = *(undefined4 *)(in_ECX + 0x1cc);
  uStack_58 = 0x1018094f;
  uStack_50 = FUN_10060d40();
  uStack_54 = 0x1018095b;
  FUN_1005c1e0();
  uStack_50 = 0x1c1;
  uStack_54 = 0x10180970;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x164))();
  uStack_54 = 0;
  FName::FName((FName *)&uStack_58,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_10180790(0x1d4,pUVar3);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_54 = 0x1018099b;
    piVar2 = (int *)FUN_101807c0();
  }
  *(int **)(in_ECX + 0x1d0) = piVar2;
  uStack_54 = 3;
  uStack_58 = 0;
  (**(code **)(*piVar2 + 0xc0))(0,0x151,0x13c,0xcd,0);
  uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
  FUN_1005c1e0(uVar4);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x164))(0x359);
  ExceptionList = local_10;
  return 1;
}


// ==== 10180a10 Catch@10180a10

void Catch_10180a10(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10180a24 Catch@10180a24

void Catch_10180a24(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCLoginServerWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10180a60 FUN_10180a60

undefined4 FUN_10180a60(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213d50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
  }
  FUN_1000ebb0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10180ac1 Catch@10180ac1

void Catch_10180ac1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10180ad5 Catch@10180ad5

void Catch_10180ad5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCKeyCryptWarningDialogBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10180b00 FUN_10180b00

undefined4 FUN_10180b00(void)

{
  FUN_1000ec30();
  return 1;
}


// ==== 10180b10 FUN_10180b10

bool FUN_10180b10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x112211f0) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0x1006) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0x1007) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == 0x1503) {
      iVar1 = (**(code **)(*in_ECX + 0x200))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x112211f1) {
      iVar1 = (**(code **)(*in_ECX + 0x204))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10180c00 FUN_10180c00

undefined4 FUN_10180c00(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213d70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
  }
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    *(undefined4 *)(in_ECX + 0x1e4) = 0;
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
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10180c92 Catch@10180c92

void Catch_10180c92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10180ca6 Catch@10180ca6

void Catch_10180ca6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10180cd0 FUN_10180cd0

void FUN_10180cd0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213d90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 10180d3d Catch@10180d3d

void Catch_10180d3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10180d51 Catch@10180d51

void Catch_10180d51(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10180d70 FUN_10180d70

undefined4 FUN_10180d70(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int in_ECX;
  FString *this;
  int iVar6;
  undefined4 *puVar7;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213db0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1cc) == 0) {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x1f8))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x1f8))();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)(*DAT_103663bc + 0x658);
          this = (FString *)(GL2GameData_exref + 0x26030);
          goto LAB_10180ee6;
        }
      }
      if (*(int *)(in_ECX + 0x200) != 0) goto LAB_10180fb2;
      puVar5 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e8) + 0x1f8))();
      if (puVar5 != (ushort *)0x0) {
        iVar6 = appAtoi(puVar5);
      }
      piVar1 = *(int **)(in_ECX + 0x1e0);
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))(iVar6);
      uVar4 = (**(code **)(*piVar1 + 0x1f8))(uVar3);
      iVar6 = FUN_10141a90(uVar4,uVar3,iVar6);
      if (iVar6 == 0) {
        iVar6 = *DAT_103663bc;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x26144));
        (**(code **)(iVar6 + 0x658))(puVar5);
      }
LAB_10180fa8:
      *(undefined4 *)(in_ECX + 0x200) = 1;
      goto LAB_10180fb2;
    }
    puVar7 = (undefined4 *)(*DAT_103663bc + 0x658);
    this = (FString *)(GL2GameData_exref + 0x25fd4);
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
    if (iVar2 != 0) {
      if (*(int *)(in_ECX + 0x200) != 0) goto LAB_10180fb2;
      puVar5 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
      local_18 = appAtoi(puVar5);
      while( true ) {
        iVar2 = appStrlen(puVar5);
        if (iVar2 <= iVar6) break;
        if ((puVar5[iVar6] < 0x30) || (0x39 < puVar5[iVar6])) {
          local_18 = -1;
        }
        iVar6 = iVar6 + 1;
      }
      if (iVar6 != 4) {
        local_18 = -1;
      }
      iVar6 = FUN_10141b50(*(undefined4 *)(in_ECX + 0x1d4),local_18);
      if (iVar6 == 0) {
        iVar6 = *DAT_103663bc;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x26144));
        (**(code **)(iVar6 + 0x658))(puVar5);
      }
      goto LAB_10180fa8;
    }
    puVar7 = (undefined4 *)(*DAT_103663bc + 0x658);
    this = (FString *)(GL2GameData_exref + 0x3fd1c);
  }
LAB_10180ee6:
  puVar5 = FString::operator*(this);
  (*(code *)*puVar7)(puVar5);
LAB_10180fb2:
  FUN_1014ed50(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 10180fd6 Catch@10180fd6

void Catch_10180fd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10180fea Catch@10180fea

void Catch_10180fea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::OnLoginBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10181010 FUN_10181010

undefined4 FUN_10181010(void)

{
  appRequestExit(0);
  return 1;
}


// ==== 10181030 FUN_10181030

void FUN_10181030(void)

{
  int iVar1;
  int in_ECX;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  iVar1 = **(int **)(in_ECX + 0x1e0);
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    (**(code **)(iVar1 + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x174))();
    iVar1 = **(int **)(in_ECX + 0x1e4);
  }
  (**(code **)(iVar1 + 0x78))();
  iVar1 = FUN_10141090();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x13c))();
  }
  if ((*(int *)GL2UseKeyCrypt_exref == 0) || (*(int *)GIsL2NetLogin_exref == 0)) {
LAB_10181132:
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x1f8) + 0x13c);
  }
  else {
    if (*(int *)(DAT_103663bc + 0x5120) != 0) {
      iVar1 = FUN_10136320();
      if (iVar1 != 0) {
        iVar1 = FUN_10135ea0();
        if (iVar1 != 0) goto LAB_10181132;
      }
    }
    (**(code **)(**(int **)(in_ECX + 0x1f8) + 0x1f8))();
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x1f8) + 0x78);
  }
  (*pcVar2)();
  ExceptionList = local_10;
  return;
}


// ==== 1018115b Catch@1018115b

void Catch_1018115b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018116f Catch@1018116f

void Catch_1018116f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10181190 FUN_10181190

void FUN_10181190(void)

{
  FUN_1005ff00();
  if ((*(int *)GL2UseKeyCrypt_exref != 0) && (*(int *)(DAT_103663bc + 0x5120) != 0)) {
    FUN_10135df0();
    return;
  }
  return;
}


// ==== 101811c0 FUN_101811c0

undefined4 FUN_101811c0(int param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213df0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x1f8))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1018121b Catch@1018121b

void Catch_1018121b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018122f Catch@1018122f

void Catch_1018122f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::OnPasswordDone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10181250 FUN_10181250

undefined4 FUN_10181250(int param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213e10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x1f8))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101812ab Catch@101812ab

void Catch_101812ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101812bf Catch@101812bf

void Catch_101812bf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::OnOneTimePasswordDone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101812e0 FUN_101812e0

undefined4 FUN_101812e0(int param_1)

{
  int in_ECX;
  
  if (param_1 == -0x500edfed) {
    *(undefined4 *)(in_ECX + 0x200) = 0;
  }
  return 1;
}


// ==== 10181300 FUN_10181300

void FUN_10181300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a3860,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10181330 FUN_10181330

undefined4 FUN_10181330(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int in_ECX;
  uint uVar4;
  undefined2 in_FPUControlWord;
  undefined4 local_3c;
  uint local_38;
  longlong local_34;
  void *local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213e64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = 0;
  local_38 = 0;
  FUN_1000eba0(DAT_103554c4 ^ (uint)&stack0xffffffb4);
  uVar1 = FUN_1003f630(L"L2UI_ch3.dialog.system_back",1);
  *(undefined4 *)(in_ECX + 0x2d8) = uVar1;
  local_14 = 0.0;
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  FUN_1005d0a0(&local_1c);
  FName::FName((FName *)&local_3c,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,local_3c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)local_28,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    local_4 = 0;
    local_38 = 1;
    FString::FString((FString *)&local_34,(ushort *)L"L2UI_ch3.button.btn1_normal");
    local_4 = 1;
    uVar4 = 3;
    local_38 = 3;
    uVar1 = FUN_10006980(&local_34,local_28,0);
  }
  *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
  local_4 = 0;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_38 = uVar4;
    FString::~FString((FString *)&local_34);
  }
  local_4 = 0xffffffff;
  if ((uVar4 & 1) != 0) {
    local_38 = uVar4 & 0xfffffffe;
    FString::~FString((FString *)local_28);
  }
  local_3c = CONCAT22(local_3c._2_2_,in_FPUControlWord);
  *(undefined4 *)(*(int *)(in_ECX + 0x2dc) + 0x1cc) = 0x1004;
  local_34 = (longlong)ROUND(local_14 * 0.5 - 37.0);
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))((undefined4)local_34,0x3c,0x4a,0x15,0,0,3);
  FUN_10003cf0(0x8c);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2dc),2);
  FUN_1005c1e0(uVar1);
  ExceptionList = local_28[0];
  return 1;
}


// ==== 10181500 FUN_10181500

undefined4 FUN_10181500(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10213e80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar8 = *(int *)(in_ECX + 0x2d8);
  if (iVar8 != 0) {
    uVar12 = 1;
    uVar10 = 0xff;
    uVar7 = 0x57;
    uVar6 = 0xcd;
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = FUN_101c19e0(0,0,0xcd,0x57,iVar8,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(0,0,uVar2,uVar1,uVar4,uVar5,uVar6,uVar7,iVar8,uVar10,uVar12);
  }
  uVar13 = 0xffffffff;
  uVar11 = 0;
  uVar9 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  uVar1 = 0;
  local_1c = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 20.0);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x3fe30));
  FUN_100217a0(10,10,0xffdcdcdc,puVar3,local_1c,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar10,uVar12,
               uVar9,uVar11,uVar13);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10181639 Catch@10181639

void Catch_10181639(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1018164d Catch@1018164d

void Catch_1018164d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCKeyCryptWarningDialogBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10181670 FUN_10181670

void FUN_10181670(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
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
  undefined4 uVar15;
  uint uStack_438;
  int aiStack_420 [2];
  undefined1 *puStack_418;
  void *pvStack_414;
  undefined *puStack_410;
  undefined4 uStack_40c;
  ushort auStack_408 [512];
  uint uStack_8;
  
  puStack_410 = &UNK_10213ea0;
  pvStack_414 = ExceptionList;
  uStack_438 = DAT_103554c4 ^ (uint)auStack_408;
  puStack_418 = (undefined1 *)&uStack_438;
  ExceptionList = &pvStack_414;
  uStack_40c = 0;
  uStack_8 = uStack_438;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x1dc),0xff,1);
  }
  if (*(int *)(in_ECX + 0x1cc) == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
    if (puVar3 != (ushort *)0x0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
      FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
      uVar14 = 0xffffffff;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6afe4));
      FUN_100217a0(0x4e - aiStack_420[0],0x17,0xffdcdcdc,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,
                   uVar13,uVar5,uVar6,uVar8,uVar10,uVar12,uVar14);
    }
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
    if (puVar3 != (ushort *)0x0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
      FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
      uVar14 = 0xffffffff;
      uVar12 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar2 = 0;
      uVar1 = 0;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6aff0));
      FUN_100217a0(0x4e - aiStack_420[0],0x2d,0xffdcdcdc,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,
                   uVar13,uVar5,uVar6,uVar8,uVar10,uVar12,uVar14);
    }
    iVar4 = FUN_10141090();
    if (iVar4 == 0) goto LAB_101818f6;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    if (puVar3 == (ushort *)0x0) goto LAB_101818f6;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    FUN_10020bb0(aiStack_420,puVar3,uVar1,uVar2,uVar7,uVar9,uVar11,uVar13);
    uVar15 = 0xffffffff;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ede8));
    uVar1 = 0x43;
    aiStack_420[0] = 0x4e - aiStack_420[0];
  }
  else {
    if (*(int *)(in_ECX + 0x1cc) != 1) goto LAB_101818f6;
    FUN_10164030(0x4d5,*(undefined4 *)(in_ECX + 0x1d0),auStack_408);
    uVar15 = 0xffffffff;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar1 = 0x17;
    aiStack_420[0] = 0x1e;
    puVar3 = auStack_408;
  }
  FUN_100217a0(aiStack_420[0],uVar1,0xffdcdcdc,puVar3,uVar2,uVar7,uVar9,uVar11,uVar13,uVar5,uVar6,
               uVar8,uVar10,uVar12,uVar14,uVar15);
LAB_101818f6:
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  uStack_40c = 0xffffffff;
  ExceptionList = pvStack_414;
  __security_check_cookie(uStack_8 ^ (uint)auStack_408);
  return;
}


// ==== 10181937 Catch@10181937

void Catch_10181937(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1018194b Catch@1018194b

void Catch_1018194b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10181970 FUN_10181970

undefined4 FUN_10181970(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10213eea;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_40,(ushort *)L"..\\L2text\\help_OTP.html");
  local_8._0_1_ = 2;
  FString::FString(local_34,(ushort *)L"FilePath");
  local_8._0_1_ = 3;
  FUN_10040230(local_34,local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  puVar2 = local_28;
  uVar1 = 0x4ba;
  FUN_10005c30(0x4ba,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10181a34 Catch@10181a34

void Catch_10181a34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10181a48 Catch@10181a48

void Catch_10181a48(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::OnOneTimePasswordHelpBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10181a70 FUN_10181a70

void FUN_10181a70(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCKeyCryptWarningDialogBox::vftable;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10181ad0 FUN_10181ad0

void FUN_10181ad0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213f48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCKeyCryptWarningDialogBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10181b30 FUN_10181b30

void FUN_10181b30(byte param_1)

{
  void *in_ECX;
  
  FUN_10181ad0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2e0);
  }
  return;
}


// ==== 10181b60 FUN_10181b60

void FUN_10181b60(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10213f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCAuthWnd::vftable;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10181bf0 FUN_10181bf0

void FUN_10181bf0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10213fa8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCAuthWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10181c50 FUN_10181c50

void FUN_10181c50(byte param_1)

{
  void *in_ECX;
  
  FUN_10181bf0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x204);
  }
  return;
}


// ==== 10181c80 FUN_10181c80

undefined4 FUN_10181c80(void)

{
  int iVar1;
  ushort *puVar2;
  UPackage *pUVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *pFVar6;
  FString *extraout_ECX_02;
  uint uVar7;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  FString *pFStack_ec;
  FString *pFStack_d0;
  FString *pFStack_b0;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  FString local_38 [16];
  FString local_28 [4];
  undefined4 local_24;
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1021407e;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  uVar7 = 0;
  local_18 = 0;
  local_8 = 0;
  uStack_4c = 0x10181cbb;
  FUN_10061b40();
  uStack_4c = 0x10181cc6;
  iVar1 = FUN_10141090();
  uStack_4c = 1;
  if (iVar1 == 0) {
    pwStack_50 = L"L2UI_CH3.LoginWnd.logon_back";
  }
  else {
    pwStack_50 = L"L2UI_CH3.LoginWnd.otplogon_back";
  }
  uStack_54 = 0x10181cdf;
  iVar1 = FUN_1003f630();
  in_ECX[0x77] = iVar1;
  uStack_4c = 0;
  pwStack_50 = (wchar_t *)0x1388;
  uStack_54 = 0xaff12013;
  uStack_58 = 0x10181cf7;
  iVar1 = FUN_1003f600();
  in_ECX[0x7f] = iVar1;
  uStack_58 = 0;
  local_20 = (undefined1 *)&uStack_5c;
  uStack_64 = 0x10181d0b;
  FName::FName((FName *)&uStack_5c,0);
  UObject::GetTransientPackage();
  uStack_64 = 0x400;
  uStack_68 = 0x10181d1e;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_58 = 0;
    uStack_5c = 1;
    uStack_64 = 1;
    uStack_68 = 0;
    uStack_6c = 6;
    uStack_70 = 0x10181d3b;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x78] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1502;
  uStack_58 = 3;
  uStack_5c = 0;
  uStack_64 = 0x11;
  uStack_68 = 0x80;
  uStack_6c = 0x14;
  uStack_70 = 0x54;
  uStack_74 = 0x10181d70;
  (**(code **)(*(int *)in_ECX[0x78] + 0xc0))();
  uStack_74 = 2;
  iStack_78 = in_ECX[0x78];
  uStack_74 = FUN_10060d40();
  iStack_78 = 0x10181d8c;
  FUN_1005c1e0();
  uStack_74 = 0;
  local_20 = (undefined1 *)&iStack_78;
  uStack_80 = 0x10181d9c;
  FName::FName((FName *)&iStack_78,0);
  UObject::GetTransientPackage();
  uStack_80 = 0x400;
  uStack_84 = 0x10181da9;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_74 = 0;
    iStack_78 = 1;
    uStack_80 = 1;
    uStack_84 = 0;
    uStack_88 = 2;
    uStack_8c = 0x10181dc6;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x79] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1503;
  uStack_74 = 3;
  iStack_78 = 0;
  uStack_80 = 0x11;
  uStack_84 = 0x80;
  uStack_88 = 0x2a;
  uStack_8c = 0x54;
  uStack_90 = 0x10181dfb;
  (**(code **)(*(int *)in_ECX[0x79] + 0xc0))();
  uStack_90 = 2;
  iStack_94 = in_ECX[0x79];
  uStack_90 = FUN_10060d40();
  iStack_94 = 0x10181e17;
  FUN_1005c1e0();
  uStack_90 = 0;
  local_20 = (undefined1 *)&iStack_94;
  FName::FName((FName *)&iStack_94,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_90 = 0;
    iStack_94 = 1;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x7a] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x112211f1;
  uStack_90 = 3;
  iStack_94 = 0;
  (**(code **)(*(int *)in_ECX[0x7a] + 0xc0))();
  pFStack_b0 = (FString *)in_ECX[0x7a];
  FUN_10060d40();
  pFStack_b0 = (FString *)0x10181ea2;
  FUN_1005c1e0();
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x4f00c));
  local_20 = &stack0xffffff4c;
  FString::FString((FString *)&stack0xffffff4c,puVar2);
  local_8 = local_8 & 0xffffff00;
  FUN_10013300();
  local_20 = (undefined1 *)&pFStack_b0;
  pFStack_b0 = extraout_ECX;
  FName::FName((FName *)&pFStack_b0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_b0 = (FString *)0x10181f0a;
    FString::FString(local_38,(ushort *)L"L2UI_CH3.LoginWnd.aboutotpicon_down");
    local_8 = CONCAT31(local_8._1_3_,2);
    local_18 = 1;
    pFStack_b0 = (FString *)0x10181f23;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.LoginWnd.aboutotpicon");
    uVar7 = 3;
    local_8 = 3;
    local_18 = 3;
    pFStack_b0 = local_38;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x7b] = iVar1;
  local_8 = 2;
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    local_18 = uVar7;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    local_18 = uVar7;
    FString::~FString(local_38);
  }
  *(undefined4 *)(in_ECX[0x7b] + 0x1cc) = 0x112211f0;
  pFStack_b0 = (FString *)in_ECX[0x7b];
  FUN_10060d40();
  pFStack_b0 = (FString *)0x41800000;
  (**(code **)(*(int *)in_ECX[0x7b] + 0x128))();
  local_24 = 5;
  local_20 = (undefined1 *)0x1;
  (**(code **)(*(int *)in_ECX[0x7b] + 0xd4))();
  pFStack_d0 = (FString *)0x10182001;
  FUN_1005c1e0();
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x4ecd0));
  pFStack_d0 = (FString *)0x1018201d;
  FString::FString(local_38,puVar2);
  local_8._0_1_ = 4;
  pFStack_d0 = (FString *)0x1;
  FUN_10004190();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  iVar1 = FUN_10141090();
  pFVar6 = extraout_ECX_00;
  if (iVar1 == 0) {
    (**(code **)(*(int *)in_ECX[0x7a] + 0x13c))();
    (**(code **)(*(int *)in_ECX[0x7b] + 0x13c))();
    pFVar6 = extraout_ECX_01;
  }
  local_20 = (undefined1 *)&pFStack_d0;
  pFStack_d0 = pFVar6;
  FName::FName((FName *)&pFStack_d0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_d0 = (FString *)0x101820a8;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.BUTTON.bigbutton_down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_18 = uVar7 | 4;
    pFStack_d0 = (FString *)0x101820c0;
    FString::FString(local_38,(ushort *)L"L2UI_CH3.BUTTON.bigbutton");
    local_8 = 6;
    uVar7 = uVar7 | 0xc;
    pFStack_d0 = local_28;
    local_18 = uVar7;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x7c] = iVar1;
  local_8 = 5;
  if ((uVar7 & 8) != 0) {
    uVar7 = uVar7 & 0xfffffff7;
    local_18 = uVar7;
    FString::~FString(local_38);
  }
  local_8 = 0;
  if ((uVar7 & 4) != 0) {
    uVar7 = uVar7 & 0xfffffffb;
    local_18 = uVar7;
    FString::~FString(local_28);
  }
  *(undefined4 *)(in_ECX[0x7c] + 0x1cc) = 0x1006;
  FUN_10141090();
  pFStack_d0 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x7c] + 0xc0))();
  pFStack_ec = (FString *)in_ECX[0x7c];
  FUN_10060d40();
  pFStack_ec = (FString *)0x1018217b;
  FUN_1005c1e0();
  pFStack_ec = (FString *)0x1018218b;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_ec;
  uStack_f4 = 0x1018219b;
  pFStack_ec = extraout_ECX_02;
  FName::FName((FName *)&pFStack_ec,0);
  UObject::GetTransientPackage();
  uStack_f4 = 0x33c;
  uStack_f8 = 0x101821ac;
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_ec = (FString *)0x101821c3;
    FString::FString(local_28,(ushort *)L"L2UI_CH3.BUTTON.bigbutton_down");
    local_8 = CONCAT31(local_8._1_3_,7);
    local_18 = uVar7 | 0x10;
    pFStack_ec = (FString *)0x101821db;
    FString::FString(local_38,(ushort *)L"L2UI_CH3.BUTTON.bigbutton");
    local_8 = 8;
    uVar7 = uVar7 | 0x30;
    pFStack_ec = local_28;
    uStack_f4 = 0x101821f9;
    local_18 = uVar7;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x7d] = iVar1;
  local_8 = 7;
  if ((uVar7 & 0x20) != 0) {
    uVar7 = uVar7 & 0xffffffdf;
    local_18 = uVar7;
    FString::~FString(local_38);
  }
  local_8 = 0;
  if ((uVar7 & 0x10) != 0) {
    local_18 = uVar7 & 0xffffffef;
    FString::~FString(local_28);
  }
  *(undefined4 *)(in_ECX[0x7d] + 0x1cc) = 0x1007;
  iVar1 = FUN_10141090();
  pFStack_ec = (FString *)0x0;
  uStack_f4 = 0x17;
  uStack_f8 = 0x60;
  if (iVar1 == 0) {
    uStack_fc = 0x48;
  }
  else {
    uStack_fc = 0x5c;
  }
  uStack_100 = 0x83;
  uStack_104 = 0x1018227d;
  (**(code **)(*(int *)in_ECX[0x7d] + 0xc0))();
  uStack_104 = 2;
  iStack_108 = in_ECX[0x7d];
  uStack_10c = 0x1018228d;
  uStack_104 = FUN_10060d40();
  iStack_108 = 0x10182299;
  FUN_1005c1e0();
  uStack_104 = 0x99;
  iStack_108 = 0x101822a9;
  FUN_10003cf0();
  iVar1 = *in_ECX;
  uStack_104 = 0x101822b6;
  uStack_104 = FUN_10058020();
  iStack_108 = 0x101822c2;
  iStack_108 = FUN_10058020();
  uStack_10c = 0x101822cd;
  (**(code **)(iVar1 + 0x10c))();
  uStack_10c = 0x101822d8;
  iVar1 = FUN_10141090();
  if (iVar1 == 0) {
    iVar1 = *(int *)in_ECX[0x78];
    uStack_10c = 0x1018239a;
    uStack_10c = FUN_10058020();
    uStack_110 = 0x101823a6;
    uStack_110 = FUN_10058020();
    uStack_114 = 0x101823b5;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)in_ECX[0x79];
    uStack_124 = 0x101823c8;
    uStack_124 = FUN_10058020();
    uStack_128 = 0x101823d4;
    uStack_128 = FUN_10058020();
  }
  else {
    iVar1 = *in_ECX;
    uStack_10c = 0x101822ed;
    uStack_10c = FUN_10058020();
    uStack_110 = 0x101822f9;
    uStack_110 = FUN_10058020();
    uStack_114 = 0x10182304;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)in_ECX[0x78];
    uStack_114 = 0x10182317;
    uStack_114 = FUN_10058020();
    uStack_118 = 0x10182323;
    uStack_118 = FUN_10058020();
    uStack_11c = 0x10182332;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)in_ECX[0x79];
    uStack_11c = 0x10182345;
    uStack_11c = FUN_10058020();
    uStack_120 = 0x10182351;
    uStack_120 = FUN_10058020();
    uStack_124 = 0x10182360;
    (**(code **)(iVar1 + 0x10c))();
    iVar1 = *(int *)in_ECX[0x7a];
    uStack_124 = 0x10182373;
    uStack_124 = FUN_10058020();
    uStack_128 = 0x1018237f;
    uStack_128 = FUN_10058020();
  }
  uStack_12c = 0x101823e3;
  (**(code **)(iVar1 + 0x10c))();
  uStack_12c = 0;
  local_20 = (undefined1 *)&uStack_130;
  FName::FName((FName *)&uStack_130,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_10181300(0x2e0,pUVar3);
  if (iVar1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_12c = 0x10182412;
    piVar4 = (int *)FUN_10181a70();
  }
  in_ECX[0x7e] = (int)piVar4;
  uStack_12c = 3;
  uStack_130 = 0;
  (**(code **)(*piVar4 + 0xc0))
            (*(int *)GSEKScreenX_exref / 2 + -0x65,*(int *)GSEKScreenY_exref / 2 + -0x2b,0xcd,0x57,0
            );
  uVar5 = FUN_10060d40(in_ECX[0x7e],2);
  FUN_1005c1e0(uVar5);
  (**(code **)(*(int *)in_ECX[0x7e] + 0x13c))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018249c Catch@1018249c

void Catch_1018249c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101824b0 Catch@101824b0

void Catch_101824b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAuthWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101824f0 FUN_101824f0

bool FUN_101824f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10043910(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 10182510 FUN_10182510

undefined4 FUN_10182510(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_100440c0();
  uVar1 = FUN_1003f630(L"L2ui_ch3.etc.iconbox",1);
  *(undefined4 *)(in_ECX + 0x224) = uVar1;
  puVar3 = (undefined4 *)(in_ECX + 0x228);
  for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return 1;
}


// ==== 10182550 FUN_10182550

void FUN_10182550(undefined4 param_1,int param_2)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(in_ECX + 0x228);
  iVar2 = 0x32;
  do {
    if (*piVar1 != 0) {
      (**(code **)(*(int *)*piVar1 + 0x148))(param_1,-param_2,0);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 101825a0 FUN_101825a0

undefined4 FUN_101825a0(void)

{
  int in_ECX;
  
  FUN_10044970();
  FUN_10182550(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 101825c0 FUN_101825c0

undefined4 FUN_101825c0(void)

{
  int in_ECX;
  
  FUN_10044a70();
  FUN_10182550(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 101825e0 FUN_101825e0

undefined4 FUN_101825e0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_10044b80(param_1);
  FUN_10182550(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 10182610 FUN_10182610

undefined4 FUN_10182610(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_10044c80(param_1,param_2);
  FUN_10182550(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 10182640 FUN_10182640

undefined4 FUN_10182640(void)

{
  int *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102140a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x174))();
  for (iVar1 = 0; iVar1 < 0x32; iVar1 = iVar1 + 1) {
    if (in_ECX[iVar1 + 0x85] != 0) {
      if ((int *)in_ECX[iVar1 + 0x85] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[iVar1 + 0x85] + 0xc))(1);
      }
      in_ECX[iVar1 + 0x85] = 0;
    }
  }
  FUN_10043b60();
  ExceptionList = local_10;
  return 1;
}


// ==== 101826cd Catch@101826cd

void Catch_101826cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101826e1 Catch@101826e1

void Catch_101826e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVIPShopItemInfoWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10182700 FUN_10182700

void FUN_10182700(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  thunk_FUN_10049b50(0);
  FUN_100444d0();
  return;
}


// ==== 10182730 FUN_10182730

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10182730(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int in_ECX;
  FString *pFVar5;
  int local_1040;
  int local_103c;
  int local_1038;
  undefined1 local_1034 [4];
  int local_1030;
  int local_102c;
  FString local_1028 [12];
  FString local_101c [12];
  ushort local_1010 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102140d8;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_1040;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffefb0;
  ExceptionList = &local_c;
  if (param_2 == 0) goto LAB_10183ded;
  FUN_10021a00(param_3 + -1,param_4 + -1,0x22,0x22,0,0,0x22,0x22,*(undefined4 *)(in_ECX + 0x2e4),
               0xff,1);
  FUN_10021a00(param_3,param_4,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(param_2 + 0x34),0xff,1);
  FUN_100216e0(local_1034,0x41,0,uVar1);
  FString::FString(local_101c);
  local_4 = 0;
  pFVar5 = local_101c;
  uVar2 = FUN_1002cc30(pFVar5);
  FUN_10146040(uVar2,pFVar5);
  FString::FString(local_1028);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10145ba0(*(undefined4 *)(param_2 + 0x1e50),*(undefined4 *)(param_2 + 0x1e6c),local_1028,
               *(undefined4 *)(param_2 + 0x1eb8));
  iVar4 = *(int *)(param_2 + 0x1e50);
  local_1040 = param_4 + 8 + local_1030;
  local_102c = 0x2e;
  if (iVar4 == 0) {
    puVar3 = FString::operator*(local_1028);
    uVar2 = FUN_10145ab0(*(undefined4 *)(param_2 + 0x1e78));
    appSprintf(local_1010,(ushort *)L"%s / %s",uVar2,puVar3);
    FUN_100217a0(0x2e,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_1040 = local_1040 + 0x14;
    local_102c = param_3;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad44));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad44));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_1014e1f0(*(undefined4 *)(param_2 + 0x1e78),*(undefined4 *)(param_2 + 0x1e6c),
                         *(undefined4 *)(param_2 + 0x1ea0),*(undefined4 *)(param_2 + 0x1e80),
                         *(undefined4 *)(param_2 + 0x1ec4));
    appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
    FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad74));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad74));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_1014e290(*(undefined4 *)(param_2 + 0x1e78),*(undefined4 *)(param_2 + 0x1e6c),
                         *(undefined4 *)(param_2 + 0x1ea0),*(undefined4 *)(param_2 + 0x1e80),
                         *(undefined4 *)(param_2 + 0x1ec8));
    appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
    FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ae10));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ae10));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_10145ed0(*(undefined4 *)(param_2 + 0x1eb0));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,uVar2);
    FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bbcc));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bbcc));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)L"X %d",*(undefined4 *)(param_2 + 0x1ee8));
    FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6c01c));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6c01c));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)L"X %d",*(undefined4 *)(param_2 + 0x1eec));
LAB_10183966:
    FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
  }
  else if (iVar4 == 1) {
    puVar3 = FString::operator*(local_1028);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(0x2e,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_1040 = local_1040 + 0x14;
    local_102c = param_3;
    if (((*(uint *)(param_2 + 0x1e6c) & 0x100) == 0) && (-1 < (char)*(uint *)(param_2 + 0x1e6c))) {
      iVar4 = FUN_10164d80(*(undefined4 *)(param_2 + 0x1e5c));
      if (iVar4 == 0) {
        puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
        appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
        FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
        FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
        appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
        FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                     0xffffffff);
        puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
        appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
        FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
        uVar2 = FUN_1014e330(*(undefined4 *)(param_2 + 0x1ea0),*(undefined4 *)(param_2 + 0x1e80),
                             *(undefined4 *)(param_2 + 0x1ecc));
        appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
        goto LAB_10183966;
      }
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bb0c));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bb0c));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_2 + 0x1ee4));
      FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      uVar2 = FUN_1014e330(*(undefined4 *)(param_2 + 0x1ea0),*(undefined4 *)(param_2 + 0x1e80),
                           *(undefined4 *)(param_2 + 0x1ecc));
      appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
      FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
    }
    else {
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad50));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      uVar2 = FUN_1014e330(*(undefined4 *)(param_2 + 0x1ea0),*(undefined4 *)(param_2 + 0x1e80),
                           *(undefined4 *)(param_2 + 0x1ed4));
      appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
      FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b7b8));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b7b8));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_2 + 0x1ed8));
      FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad68));
      appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
      FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
      FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad68));
      appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
      FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
      appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_2 + 0x1ebc));
      FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
      local_1040 = local_1040 + 4 + local_1030;
    }
  }
  else if (iVar4 == 2) {
    puVar3 = FString::operator*(local_1028);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(0x2e,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    local_1040 = local_1040 + 0x14;
    local_102c = param_3;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad80));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(param_3,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad80));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    uVar2 = FUN_1014e330(*(undefined4 *)(param_2 + 0x1ea0),*(undefined4 *)(param_2 + 0x1e80),
                         *(undefined4 *)(param_2 + 0x1ed0));
    appSprintf(local_1010,(ushort *)&DAT_10233718,uVar2);
    FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    local_1040 = local_1040 + 4 + local_1030;
  }
  switch(*(undefined4 *)(param_2 + 0x1e50)) {
  case 0:
  case 1:
  case 2:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    param_3 = local_102c;
    FUN_100217a0(local_102c,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + param_3,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_2 + 0x1e70));
    iVar4 = local_1040;
    FUN_100217a0(local_103c + param_3,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*(local_101c);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    if (local_1010[0] != 0) {
      iVar4 = iVar4 + 4 + local_1030;
      goto LAB_10183d67;
    }
    break;
  case 3:
    puVar3 = FString::operator*(local_1028);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(local_102c,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    puVar3 = FString::operator*(local_101c);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    if (local_1010[0] == 0) break;
    iVar4 = local_1040 + 4 + local_1030;
    FUN_100217a0(param_3,iVar4,0xffb2becf,local_1010,200,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    goto LAB_10183dae;
  case 5:
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    FUN_100217a0(local_102c,local_1040,0xffa3a3a3,local_1010,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_1028cbe0);
    FUN_100217a0(local_103c + local_102c,local_1040,0xffdcdcdc,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab4c));
    appSprintf(local_1010,(ushort *)L"%s : ",puVar3);
    FUN_10020bb0(&local_103c,local_1010,0,0,0,0,0,0);
    appSprintf(local_1010,(ushort *)&DAT_10233718,*(undefined4 *)(param_2 + 0x1e70));
    FUN_100217a0(local_103c + local_102c,local_1040,0xffb09b79,local_1010,0,0,0,0,0,0,0,0,0,0,0,
                 0xffffffff);
  default:
    puVar3 = FString::operator*(local_101c);
    appSprintf(local_1010,(ushort *)&DAT_1022dde0,puVar3);
    if (local_1010[0] != 0) {
      iVar4 = local_1040 + 4 + local_1030;
LAB_10183d67:
      FUN_100217a0(param_3,iVar4,0xffb2becf,local_1010,200,0,0,0,0,0,0,0,0,0,0,0xffffffff);
LAB_10183dae:
      FUN_10020bb0(&local_103c,local_1010,200,0,0,0,0,0);
      local_1040 = iVar4 + local_1038;
    }
  }
  local_4 = local_4 & 0xffffff00;
  FString::~FString(local_1028);
  local_4 = 0xffffffff;
  FString::~FString(local_101c);
LAB_10183ded:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_1040);
  return;
}


// ==== 10183e30 FUN_10183e30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10183e30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  void *local_1014;
  undefined1 *puStack_1010;
  undefined4 local_100c;
  ushort local_1008 [2048];
  uint local_8;
  
  puStack_1010 = &LAB_10214110;
  local_1014 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1008;
  ExceptionList = &local_1014;
  iVar4 = 0;
  local_100c = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  if (0 < *(int *)(in_ECX + 0x218)) {
    FUN_10023790(*(undefined4 *)(in_ECX + 0x1cc),*(undefined4 *)(in_ECX + 0x1d0));
    for (; iVar4 < *(int *)(in_ECX + 0x218); iVar4 = iVar4 + 1) {
      iVar1 = iVar4 * 0x24;
      FUN_10021a00(10,iVar1 + 5,0x22,0x22,0,0,0x22,0x22,*(undefined4 *)(in_ECX + 0x224),0xff,1);
      FUN_10021a00(0xb,iVar1 + 6,0x20,0x20,0,0,0x20,0x20,
                   *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x214) + iVar4 * 4) + 0x208),0xff,1);
      appSprintf(local_1008,(ushort *)L"x %d",
                 *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x214) + iVar4 * 4) + 0x204));
      FUN_100217a0(0x2e,iVar1 + 0x19,0xffdcdcdc,local_1008,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
    FUN_10043d00(iVar4 * 0x24 + 5);
    FUN_10023160();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_1014;
  __security_check_cookie(local_8 ^ (uint)local_1008);
  return;
}


// ==== 10184007 Catch@10184007

void Catch_10184007(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1018401b Catch@1018401b

void Catch_1018401b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVIPShopneededItemWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10184040 FUN_10184040

int FUN_10184040(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_4;
  
  local_4 = in_ECX;
  FUN_100440c0();
  uVar1 = FUN_1003f630(L"L2ui_ch3.etc.iconbox",1);
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  puVar7 = (undefined4 *)(in_ECX + 0x2e8);
  for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  piVar6 = (int *)(in_ECX + 0x214);
  iVar4 = 0x32;
  do {
    iVar5 = iVar4;
    FName::FName((FName *)&local_4,0);
    pUVar2 = UObject::GetTransientPackage();
    pUVar3 = UObject::StaticAllocateObject
                       (&DAT_10363f50,pUVar2,local_4,0,0,*(undefined4 *)GError_exref,0,0);
    if (pUVar3 == (UObject *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1002ddc0();
    }
    *piVar6 = iVar4;
    if (iVar4 == 0) {
      appFailAssert("m_Item[ i ]",".\\Src\\NLuxuryShopWnd.cpp",0x19a);
    }
    piVar6 = piVar6 + 1;
    iVar4 = iVar5 + -1;
  } while (iVar4 != 0);
  return iVar5;
}


// ==== 10184100 FUN_10184100

undefined4 FUN_10184100(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10023790(*(undefined4 *)(in_ECX + 0x1cc),*(undefined4 *)(in_ECX + 0x1d0));
  if (*(int *)(in_ECX + 0x2dc) == 1) {
    uVar1 = FUN_10182730(param_1,*(undefined4 *)(in_ECX + 0x214),10,4);
    FUN_10043d00(uVar1);
  }
  else if (1 < *(int *)(in_ECX + 0x2dc)) {
    FUN_10023790(*(undefined4 *)(in_ECX + 0x1cc),*(undefined4 *)(in_ECX + 0x1d0));
    for (; iVar3 < *(int *)(in_ECX + 0x2dc); iVar3 = iVar3 + 1) {
      FUN_10021a00(10,iVar3 * 0x24 + 5,0x22,0x22,0,0,0x22,0x22,*(undefined4 *)(in_ECX + 0x2e4),0xff,
                   1);
      FUN_10021a00(0xb,iVar3 * 0x24 + 6,0x20,0x20,0,0,0x20,0x20,
                   *(undefined4 *)(*(int *)(in_ECX + 0x214 + iVar3 * 4) + 0x34),0xff,1);
    }
    FUN_10043d00(iVar3 * 0x24 + 5);
    FUN_10023160();
  }
  FUN_10023160();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018428d Catch@1018428d

void Catch_1018428d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101842a1 Catch@101842a1

void Catch_101842a1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVIPShopItemInfoWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101842c0 FUN_101842c0

void FUN_101842c0(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int in_ECX;
  int *piVar3;
  int local_14;
  
  piVar3 = (int *)(in_ECX + 0x2e8);
  local_14 = 0x32;
  do {
    if (*piVar3 != 0) {
      (**(code **)(*(int *)*piVar3 + 0x148))(param_1,-param_2,0);
      local_14 = 0;
      FUN_1005d0a0(&stack0xffffffe4);
      iVar1 = FUN_101c19e0();
      if (iVar1 < 0) {
LAB_1018434c:
        pcVar2 = *(code **)(*(int *)*piVar3 + 0x13c);
      }
      else {
        iVar1 = FUN_101c19e0();
        if (iVar1 < 0) goto LAB_1018434c;
        pcVar2 = *(code **)(*(int *)*piVar3 + 0x138);
      }
      (*pcVar2)();
    }
    piVar3 = piVar3 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      return;
    }
  } while( true );
}


// ==== 10184370 FUN_10184370

undefined4 FUN_10184370(void)

{
  int in_ECX;
  
  FUN_10044970();
  FUN_101842c0(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 10184390 FUN_10184390

undefined4 FUN_10184390(void)

{
  int in_ECX;
  
  FUN_10044a70();
  FUN_101842c0(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 101843b0 FUN_101843b0

undefined4 FUN_101843b0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_10044b80(param_1);
  FUN_101842c0(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 101843e0 FUN_101843e0

undefined4 FUN_101843e0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_10044c80(param_1,param_2);
  FUN_101842c0(0,*(undefined4 *)(in_ECX + 0x1d8));
  return 1;
}


// ==== 10184410 FUN_10184410

void FUN_10184410(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0x32;
  do {
    FUN_1002cd30();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)(in_ECX + 0x2e8);
  iVar2 = 0x32;
  do {
    if (*piVar3 != 0) {
      uVar1 = FUN_10058020();
      FUN_10060e00(uVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x2dc) = 0;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    thunk_FUN_10049b50(0);
  }
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  return;
}


// ==== 10184490 FUN_10184490

undefined4 FUN_10184490(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < in_ECX[0x86]; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(in_ECX[0x85] + iVar2 * 4);
    if (iVar1 != 0) {
      FUN_10024ca0(iVar1);
    }
  }
  for (iVar2 = 0; iVar2 < in_ECX[0x86]; iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x85),4,0);
  (**(code **)(*in_ECX + 0x174))();
  FUN_10043b60();
  ExceptionList = local_10;
  return 1;
}


// ==== 10184535 Catch@10184535

void Catch_10184535(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10184549 Catch@10184549

void Catch_10184549(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVIPShopNeededItemWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10184570 FUN_10184570

void FUN_10184570(void)

{
  FArray *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  UPackage *pUVar4;
  UObject *pUVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_10214194;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)();
  puVar1 = puStack_4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)(puVar2 + 0x83) = 0;
    puVar2[0x81] = 0;
    puVar2[0x82] = 0;
    *puVar2 = 0;
    puVar2[0xc3] = 0;
    puVar2[0xc4] = 0;
  }
  local_c = (void *)0xffffffff;
  *puVar2 = *puStack_4;
  appStrcpy((ushort *)(puVar2 + 1),(ushort *)(puStack_4 + 1));
  puVar2[0x82] = puVar1[0x82];
  puVar2[0x81] = puVar1[0x81];
  puVar2[0xc3] = puVar1[0xc3];
  puVar2[0xc4] = puVar1[0xc4];
  this = (FArray *)(in_ECX + 0x214);
  puVar2[0xc5] = puVar1[0xc5];
  iVar3 = FArray::Add(this,1,4);
  *(undefined4 **)(*(int *)this + iVar3 * 4) = puVar2;
  iVar3 = *(int *)(in_ECX + 0x218);
  FName::FName((FName *)&puStack_4,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar5 = UObject::StaticAllocateObject
                     (&DAT_103697c0,pUVar4,puStack_4,0,0,*(undefined4 *)GError_exref,0);
  if (pUVar5 == (UObject *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_1004c370();
  }
  *(int **)(in_ECX + 0x224 + iVar3 * 4) = piVar6;
  (**(code **)(*piVar6 + 0xc0))(0x2e,(iVar3 * 9 + -9) * 4 + 10,0xaa,0xe,0,0);
  uVar7 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x224 + iVar3 * 4),0x22);
  FUN_1005c1e0(uVar7);
  FUN_1004a700(0);
  L2ParamStack::L2ParamStack((L2ParamStack *)&stack0xffffffc0,10);
  L2ParamStack::PushBack
            ((L2ParamStack *)&stack0xffffffc0,(void *)(*(int *)(*(int *)this + -4 + iVar3 * 4) + 4))
  ;
  L2ParamStack::PushBack
            ((L2ParamStack *)&stack0xffffffc0,
             (void *)**(undefined4 **)(*(int *)this + -4 + iVar3 * 4));
  L2ParamStack::PushBack
            ((L2ParamStack *)&stack0xffffffc0,
             *(void **)(*(int *)(*(int *)this + -4 + iVar3 * 4) + 0x314));
  L2ParamStack::PushBack
            ((L2ParamStack *)&stack0xffffffc0,
             *(void **)(*(int *)(*(int *)this + -4 + iVar3 * 4) + 0x30c));
  L2ParamStack::PushBack
            ((L2ParamStack *)&stack0xffffffc0,
             *(void **)(*(int *)(*(int *)this + -4 + iVar3 * 4) + 0x310));
  L2ParamStack::PushBack
            ((L2ParamStack *)&stack0xffffffc0,
             *(void **)(*(int *)(*(int *)this + -4 + iVar3 * 4) + 0x204));
  FUN_1004b310(&stack0xffffffc0,1,1);
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffc0);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 101847c0 FUN_101847c0

void FUN_101847c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x218)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x214) + iVar3 * 4);
      if (iVar1 != 0) {
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x218));
  }
  FArray::Empty((FArray *)(in_ECX + 0x214),4,0);
  piVar4 = (int *)(in_ECX + 0x228);
  iVar3 = 0x32;
  do {
    if (*piVar4 != 0) {
      uVar2 = FUN_10058020();
      FUN_10060e00(uVar2);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x2f0) = 0;
  *(undefined4 *)(in_ECX + 0x2f4) = 0;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    thunk_FUN_10049b50(0);
  }
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  return;
}


// ==== 10184860 FUN_10184860

void FUN_10184860(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  UPackage *pUVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102141b9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 < 0x32) {
    *(int *)(in_ECX + 0x2dc) = *(int *)(in_ECX + 0x2dc) + 1;
    FUN_10031550();
    iVar4 = *(int *)(in_ECX + 0x214 + param_1 * 4);
    iVar2 = FUN_10187a60();
    iVar4 = *(int *)(iVar4 + 0x1e5c);
    if ((-1 < iVar4) && (iVar2 != 0)) {
      iVar1 = *(int *)(iVar2 + 4);
      puVar3 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,iVar4);
      appStrcpy((ushort *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x4c),puVar3);
      iVar4 = FUN_10147e30();
      if (iVar4 != 0) {
        puVar3 = (ushort *)FUN_10147e30();
        appStrcpy((ushort *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x24c),puVar3);
      }
      puVar3 = L2FName::operator*((L2FName *)(iVar2 + 0x3c));
      appStrcpy((ushort *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x44c),puVar3);
      puVar3 = FL2GameData::GetItemDescription
                         ((FL2GameData *)GL2GameData_exref,
                          *(int *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e5c));
      appStrcpy((ushort *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0xa4c),puVar3);
      *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e50) =
           *(undefined4 *)(param_2 + 0x1e50);
      *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e6c) =
           *(undefined4 *)(param_2 + 0x1e6c);
      *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e80) =
           *(undefined4 *)(param_2 + 0x1e80);
      *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1efc) =
           *(undefined4 *)(param_2 + 0x1efc);
      *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1f00) =
           *(undefined4 *)(param_2 + 0x1f00);
      if (iVar1 == 0) {
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e70) =
             *(undefined4 *)(iVar2 + 0xc4);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e74) =
             *(undefined4 *)(iVar2 + 200);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e78) =
             *(undefined4 *)(iVar2 + 0x130);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ec4) =
             *(undefined4 *)(iVar2 + 0x128);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ec8) =
             *(undefined4 *)(iVar2 + 300);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ed4) =
             *(undefined4 *)(iVar2 + 0x144);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ed8) =
             *(undefined4 *)(iVar2 + 0x148);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e9c) =
             *(undefined4 *)(iVar2 + 0xc0);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ea0) =
             *(undefined4 *)(iVar2 + 0x134);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ea4) =
             *(undefined4 *)(iVar2 + 0x124);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ea8) =
             *(undefined4 *)(iVar2 + 0x138);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1eac) =
             *(undefined4 *)(iVar2 + 0x13c);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1eb0) =
             *(undefined4 *)(iVar2 + 0x14c);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1eb4) =
             *(undefined4 *)(iVar2 + 0x150);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ebc) =
             *(undefined4 *)(iVar2 + 0x140);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ee8) =
             *(undefined4 *)(iVar2 + 0x154);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1eec) =
             *(undefined4 *)(iVar2 + 0x158);
      }
      else if (iVar1 == 1) {
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e70) =
             *(undefined4 *)(iVar2 + 0xc4);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e74) =
             *(undefined4 *)(iVar2 + 200);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e9c) =
             *(undefined4 *)(iVar2 + 0xc0);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ea0) =
             *(undefined4 *)(iVar2 + 0x5e8);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1eb8) =
             *(undefined4 *)(iVar2 + 0x5e4);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ebc) =
             *(undefined4 *)(iVar2 + 0x5ec);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ecc) =
             *(undefined4 *)(iVar2 + 0x5f0);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ed0) =
             *(undefined4 *)(iVar2 + 0x5f4);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ee4) =
             *(undefined4 *)(iVar2 + 0x5f8);
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e70) =
             *(undefined4 *)(iVar2 + 0xc4);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e74) =
             *(undefined4 *)(iVar2 + 200);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e9c) =
             *(undefined4 *)(iVar2 + 0xc0);
        *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e88) =
             *(undefined4 *)(iVar2 + 0xfc);
        if (*(int *)(iVar2 + 0x100) == 2) {
          *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1edc) = 1;
        }
        else if (*(int *)(iVar2 + 0x100) == 0x10) {
          *(undefined4 *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1edc) = 1;
        }
      }
      FName::FName((FName *)&stack0xffffffbc,0);
      pUVar5 = UObject::GetTransientPackage();
      iVar4 = FUN_100e2330(0x348,pUVar5);
      if (iVar4 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_1004c370();
      }
      *(int **)(in_ECX + 0x2e8 + param_1 * 4) = piVar6;
      (**(code **)(*piVar6 + 0xc0))(0x2e,param_1 * 0x24 + 10,0xb4,0xe,0);
      uVar7 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e8 + param_1 * 4),0x22);
      FUN_1005c1e0(uVar7);
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8._0_1_ = 1;
      L2ParamStack::PushBack(local_2c,(void *)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x4c));
      L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e5c));
      L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e50));
      L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e80));
      L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1ea0));
      L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX + 0x214 + param_1 * 4) + 0x1e64));
      FUN_1004b310(local_2c,1,1);
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_2c);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10184de2 Catch@10184de2

void Catch_10184de2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10184df6 Catch@10184df6

void Catch_10184df6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVIPShopItemInfoWnd::SetItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10184e20 FUN_10184e20

void FUN_10184e20(undefined4 param_1,int param_2)

{
  UPackage *pUVar1;
  int iVar2;
  int *piVar3;
  ushort *puStack_38;
  int *piStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102141e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar3 = (int *)0x0;
  local_8 = 0;
  piStack_34 = (int *)0x0;
  FName::FName((FName *)&puStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_1002dd90(0x1f5c,pUVar1);
  if (iVar2 != 0) {
    piStack_34 = (int *)param_2;
    puStack_38 = (ushort *)0x10184e83;
    piVar3 = (int *)FUN_1002dee0();
  }
  piStack_34 = (int *)0x10184e93;
  iVar2 = FString::Len((FString *)(param_2 + 0x18));
  if (0 < iVar2) {
    piStack_34 = (int *)0x1;
    puStack_38 = (ushort *)0x10184ea1;
    puStack_38 = FString::operator*((FString *)(param_2 + 0x18));
    iVar2 = FUN_1003f630();
    piVar3[0xd] = iVar2;
  }
  piStack_34 = (int *)0x10184eba;
  iVar2 = FString::Len((FString *)(param_2 + 0x24));
  if (0 < iVar2) {
    piStack_34 = (int *)0x1;
    puStack_38 = (ushort *)0x10184ec8;
    puStack_38 = FString::operator*((FString *)(param_2 + 0x24));
    iVar2 = FUN_1003f630();
    piVar3[0xe] = iVar2;
  }
  piStack_34 = (int *)0x10184ee1;
  iVar2 = FString::Len((FString *)(param_2 + 0x30));
  if (0 < iVar2) {
    piStack_34 = (int *)0x1;
    puStack_38 = (ushort *)0x10184eef;
    puStack_38 = FString::operator*((FString *)(param_2 + 0x30));
    iVar2 = FUN_1003f630();
    piVar3[0xf] = iVar2;
  }
  piStack_34 = (int *)0x10184f08;
  iVar2 = FString::Len((FString *)(param_2 + 0x3c));
  if (0 < iVar2) {
    piStack_34 = (int *)0x1;
    puStack_38 = (ushort *)0x10184f16;
    puStack_38 = FString::operator*((FString *)(param_2 + 0x3c));
    iVar2 = FUN_1003f630();
    piVar3[0x10] = iVar2;
  }
  piStack_34 = (int *)0x10184f2f;
  iVar2 = FString::Len((FString *)(param_2 + 0x48));
  if (0 < iVar2) {
    piStack_34 = (int *)0x1;
    puStack_38 = (ushort *)0x10184f3d;
    puStack_38 = FString::operator*((FString *)(param_2 + 0x48));
    iVar2 = FUN_1003f630();
    piVar3[0x11] = iVar2;
  }
  puStack_38 = (ushort *)param_1;
  piStack_34 = piVar3;
  FUN_10184860();
  if (piVar3 != (int *)0x0) {
    piStack_34 = (int *)0x1;
    puStack_38 = (ushort *)0x10184f63;
    (**(code **)(*piVar3 + 0xc))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10184f7e Catch@10184f7e

void Catch_10184f7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10184f92 Catch@10184f92

void Catch_10184f92(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVIPShopItemInfoWnd::SetItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10184fb0 FUN_10184fb0

void FUN_10184fb0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214209;
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


// ==== 10185050 FUN_10185050

void FUN_10185050(int param_1,FString *param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  puVar1 = FString::operator*(param_2);
  iVar2 = FUN_1003f630(puVar1,uVar3);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x208) = iVar2;
  }
  FUN_10184570(param_1);
  return;
}


// ==== 10185090 FUN_10185090

void FUN_10185090(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021424f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10044de0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCVIPShopNeededItemWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x85));
  ExceptionList = local_c;
  return;
}


// ==== 10185100 FUN_10185100

void FUN_10185100(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10214286;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCVIPShopNeededItemWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_10184fb0(uVar1);
  local_4 = 0xffffffff;
  FUN_10031a70();
  ExceptionList = local_c;
  return;
}


// ==== 10185170 FUN_10185170

void FUN_10185170(byte param_1)

{
  void *in_ECX;
  
  FUN_10185100();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2f8);
  }
  return;
}


// ==== 101851a0 FUN_101851a0

void FUN_101851a0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102142b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10044de0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCVIPShopItemInfoWnd::vftable;
  in_ECX[0xb7] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10185200 FUN_10185200

void FUN_10185200(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102142e8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCVIPShopItemInfoWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10031a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10185260 FUN_10185260

void FUN_10185260(byte param_1)

{
  void *in_ECX;
  
  FUN_10185200();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3b0);
  }
  return;
}


// ==== 101852b0 FUN_101852b0

bool FUN_101852b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_101824f0(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 101852d0 FUN_101852d0

void FUN_101852d0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_100301a0(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x2f4) = 1;
  return;
}


// ==== 10185300 FUN_10185300

int FUN_10185300(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  param_1 = param_1 - *(int *)(in_ECX + 0x80);
  param_2 = param_2 - *(int *)(in_ECX + 0x84);
  if (-1 < param_1) {
    iVar2 = *(int *)(in_ECX + 600);
    iVar1 = *(int *)(in_ECX + 0x26c) + 5;
    if ((param_1 <= iVar1 * iVar2) && (-1 < param_2)) {
      iVar3 = *(int *)(in_ECX + 0x270) + 3;
      if (param_2 <= iVar3 * *(int *)(in_ECX + 0x25c)) {
        param_1 = param_1 / iVar1;
        if (iVar2 <= param_1) {
          param_1 = param_1 + -1;
        }
        param_2 = param_2 / iVar3;
        if (*(int *)(in_ECX + 0x25c) <= param_2) {
          param_2 = param_2 + -1;
        }
        return (*(int *)(in_ECX + 0x260) + param_2) * iVar2 + param_1;
      }
    }
  }
  return -1;
}


// ==== 10185390 FUN_10185390

undefined4 FUN_10185390(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214310;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x2d8) != 0) {
    *(undefined4 *)(in_ECX + 0x2d8) = 0;
  }
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
  }
  if (*(int *)(in_ECX + 0x2e0) != 0) {
    *(undefined4 *)(in_ECX + 0x2e0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10185406 Catch@10185406

void Catch_10185406(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018541a Catch@1018541a

void Catch_1018541a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSkillWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10185440 FUN_10185440

void FUN_10185440(void)

{
  int in_ECX;
  
  FUN_1005fe50();
                    /* WARNING: Could not recover jumptable at 0x10185457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0x1f8))();
  return;
}


// ==== 10185460 FUN_10185460

void FUN_10185460(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x2d8) + 0x174))();
                    /* WARNING: Could not recover jumptable at 0x10185482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0x174))();
  return;
}


// ==== 10185490 FUN_10185490

undefined4 FUN_10185490(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214330;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 101854f1 Catch@101854f1

void Catch_101854f1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10185505 Catch@10185505

void Catch_10185505(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMagicSkillWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10185530 FUN_10185530

void FUN_10185530(void)

{
  int iVar1;
  int *in_ECX;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10214359;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0,DAT_103554c4 ^ (uint)&stack0xffffffe0);
  if (iVar1 == 0) {
    (**(code **)(*in_ECX + 0x174))();
    if (*(int *)GIsOnlyL2Console_exref == 0) {
      L2ParamStack::L2ParamStack((L2ParamStack *)&stack0xffffffe0,10);
      puStack_8 = (undefined1 *)0x0;
      FUN_10143b60(&stack0xffffffe0);
      puStack_8 = (undefined1 *)0xffffffff;
      L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
    }
    FUN_1005fe50();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101855d0 FUN_101855d0

void FUN_101855d0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x174))();
  FUN_1005ff00();
  return;
}


// ==== 101855f0 FUN_101855f0

void FUN_101855f0(byte param_1)

{
  FUN_100bda90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10185620 FUN_10185620

undefined4 FUN_10185620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  
  uVar5 = *(undefined4 *)(in_ECX + 0x80);
  uVar6 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar5 = FUN_101c19e0();
  uVar6 = FUN_101c19e0(uVar5);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar6,uVar5);
  iVar1 = *(int *)(in_ECX + 0x280);
  if ((-1 < iVar1) && (iVar1 < *(int *)(in_ECX + 0x244))) {
    iVar2 = *(int *)(in_ECX + 600);
    iVar7 = iVar1 - *(int *)(in_ECX + 0x260) * iVar2;
    iVar3 = *(int *)(in_ECX + 0x270);
    iVar4 = *(int *)(in_ECX + 0x26c);
    FUN_101b8f10(*(undefined4 *)(*(int *)(in_ECX + 0x240) + iVar1 * 4),in_ECX + 0x164,0);
    if (*(int *)(in_ECX + 0xd4) != 0) {
      FUN_10054680(param_1,*(int *)(*(int *)(in_ECX + 0x240) + *(int *)(in_ECX + 0x280) * 4) +
                           0x1f1c,(iVar4 + 5) * (iVar7 % iVar2),(iVar3 + 3) * (iVar7 / iVar2),
                   *(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),
                   *(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c));
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 10185750 FUN_10185750

undefined4 FUN_10185750(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10185300(param_2 & 0xffff,param_2 >> 0x10);
  in_ECX[0xa0] = iVar1;
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  if ((((iVar1 != 0) && (in_ECX[0x93] != 0)) && (-1 < in_ECX[0x9f])) &&
     (in_ECX[0x9f] < in_ECX[0x91])) {
    uVar3 = 0;
    uVar2 = FUN_1002c970(0);
    FUN_1003f8b0(4,uVar2,uVar3);
    FUN_1003f950();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1018580b Catch@1018580b

void Catch_1018580b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018581f Catch@1018581f

void Catch_1018581f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSKillItemWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10185840 FUN_10185840

undefined4 FUN_10185840(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  uVar2 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 101858b0 FUN_101858b0

undefined4 FUN_101858b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  iVar1 = *(int *)(in_ECX + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  return 1;
}


// ==== 10185970 FUN_10185970

undefined4 FUN_10185970(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102143a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2fc); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x2f8) + iVar1 * 4) != 0) {
      FUN_101855f0(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2fc); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2f8),4,0);
  FUN_1002cf50();
  ExceptionList = local_10;
  return 1;
}


// ==== 10185a07 Catch@10185a07

void Catch_10185a07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10185a1b Catch@10185a1b

void Catch_10185a1b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSkillItemWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10185a40 FUN_10185a40

void FUN_10185a40(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x244)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x240) + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x244));
  }
  FArray::Empty((FArray *)(in_ECX + 0x240),4,0);
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x2fc)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x2f8) + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_100bda90();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x2fc));
  }
  FArray::Empty((FArray *)(in_ECX + 0x2f8),4,0);
  FUN_10030750();
  return;
}


// ==== 10185ae0 FUN_10185ae0

undefined4 FUN_10185ae0(undefined4 param_1,uint param_2)

{
  UObject *this;
  byte bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pvVar3 = ExceptionList;
  puStack_c = &LAB_102143d2;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0xbd] = 0;
  iVar4 = in_ECX[0x9f];
  if ((iVar4 < 0) || (in_ECX[0x91] <= iVar4)) {
    in_ECX[0x93] = 0;
    ExceptionList = pvVar3;
    return 1;
  }
  iVar2 = FUN_10185300(param_2 & 0xffff,param_2 >> 0x10);
  if (iVar2 == iVar4) {
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e5c));
    pvVar3 = (void *)(**(code **)(*DAT_103663bc + 0x590))();
    L2ParamStack::PushBack(local_2c,pvVar3);
    bVar1 = UInput::KeyDown(*(UInput **)
                             (**(int **)(*(int *)(DAT_103663bc[0x14] + 0x54) + 0x38) + 0x78),0x10);
    L2ParamStack::PushBack(local_2c,(void *)(uint)bVar1);
    FUN_10143b50(local_2c);
  }
  else {
    if ((((in_ECX[0x93] == 0) ||
         (iVar4 = FUN_10059330(param_2 & 0xffff,param_2 >> 0x10), iVar4 == 0)) ||
        (this = *(UObject **)(iVar4 + 4), this == (UObject *)0x0)) ||
       (iVar4 = UObject::IsA(this,(UClass *)&DAT_10368830), iVar4 == 0)) goto LAB_10185c7f;
    FUN_10176a50(this);
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,2);
    L2ParamStack::PushBack(local_2c,(void *)0x2);
    pvVar3 = (void *)FUN_100473a0();
    L2ParamStack::PushBack(local_2c,pvVar3);
    L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e5c));
    L2ParamStack::PushBack(local_2c,(void *)0x1);
    FUN_1015a3b0(local_2c);
  }
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_2c);
LAB_10185c7f:
  (**(code **)(*in_ECX + 0x234))();
  in_ECX[0x9f] = -1;
  in_ECX[0x93] = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10185cc2 Catch@10185cc2

void Catch_10185cc2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10185cd6 Catch@10185cd6

void Catch_10185cd6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSkillItemWnd::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10185d00 FUN_10185d00

undefined4 FUN_10185d00(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  int iVar5;
  int in_ECX;
  undefined4 uVar6;
  void *unaff_EBP;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar5 = param_1;
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_102143fb;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  uVar6 = 0;
  if (param_1 + 0x400 != 0) {
    uVar2 = FUN_1003f630(param_1 + 0x400,1);
    *(undefined4 *)(iVar5 + 0x1c04) = uVar2;
  }
  if (*(int *)(iVar5 + 0x1c04) == 0) {
    uVar2 = FUN_1003f630(L"Default.BlackTexture",1);
    *(undefined4 *)(iVar5 + 0x1c04) = uVar2;
  }
  FName::FName((FName *)&param_1,0);
  pUVar3 = UObject::GetTransientPackage();
  pUVar4 = UObject::StaticAllocateObject
                     (&DAT_10363f50,pUVar3,param_1,0,0,*(undefined4 *)GError_exref,0,0,uVar1);
  if (pUVar4 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1002f5d0(iVar5);
  }
  iStack_4 = (**(code **)**(undefined4 **)GMalloc_exref)(100,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (iStack_4 != 0) {
    uVar6 = FUN_10030930();
  }
  local_c = (void *)0xffffffff;
  iVar5 = FArray::Add((FArray *)(in_ECX + 0x2f8),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x2f8) + iVar5 * 4) = uVar6;
  iVar5 = FArray::Add((FArray *)(in_ECX + 0x240),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x240) + iVar5 * 4) = uVar2;
  FUN_1002d710();
  ExceptionList = unaff_EBP;
  return 1;
}


// ==== 10185e30 FUN_10185e30

void FUN_10185e30(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214429;
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


// ==== 10185ed0 FUN_10185ed0

undefined4 FUN_10185ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  local_20 = 1;
  local_18 = 1;
  for (iVar4 = *(int *)(in_ECX + 0x260) * *(int *)(in_ECX + 600); iVar4 < *(int *)(in_ECX + 0x244);
      iVar4 = iVar4 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x240) + iVar4 * 4);
    if (iVar1 != 0) {
      if (iVar4 % *(int *)(in_ECX + 600) == 0) {
        local_20 = 1;
        if (iVar4 != *(int *)(in_ECX + 0x260) * *(int *)(in_ECX + 600)) {
          local_18 = local_18 + *(int *)(in_ECX + 0x270) + 3;
        }
        iVar6 = (*(int *)(in_ECX + 0x270) + 1) * *(int *)(in_ECX + 0x25c);
        if (iVar6 - local_18 == 0 || iVar6 < local_18) break;
      }
      else {
        local_20 = local_20 + *(int *)(in_ECX + 0x26c) + 5;
      }
      iVar6 = FUN_1002cc60();
      if (iVar6 != 0) {
        FUN_10021a00(local_20,local_18,*(undefined4 *)(in_ECX + 0x26c),
                     *(undefined4 *)(in_ECX + 0x270),0,0,*(undefined4 *)(in_ECX + 0x26c),
                     *(undefined4 *)(in_ECX + 0x270),*(undefined4 *)(in_ECX + 0x214),0xff,1);
      }
      iVar6 = FUN_1002c970();
      if (iVar6 != 0) {
        uVar2 = *(undefined4 *)(in_ECX + 0x270);
        uVar3 = *(undefined4 *)(in_ECX + 0x26c);
        uVar8 = 1;
        uVar7 = 0xff;
        uVar5 = FUN_1002c970(0xff,1);
        FUN_10021a00(local_20,local_18,uVar3,uVar2,0,0,uVar3,uVar2,uVar5,uVar7,uVar8);
      }
      if (*(int *)(iVar1 + 0x1e50) == 0) {
        if (*(int *)(in_ECX + 0x2e4) != 0) {
          FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,*(int *)(in_ECX + 0x2e4),
                       0xff,1);
        }
        if (((*(int *)(in_ECX + 0x2e8) != 0) && (*(int *)(in_ECX + 0x27c) == iVar4)) &&
           (*(int *)(in_ECX + 0x2f4) != 0)) {
          FUN_10021a00(local_20 + -1,local_18 + -1,0x22,0x22,0,0,0x22,0x22,*(int *)(in_ECX + 0x2e8),
                       0xff,1);
        }
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x1e60);
      uVar3 = *(undefined4 *)(iVar1 + 0x1e5c);
      FUN_1002f160(uVar3,uVar2);
      iVar6 = FUN_101b57d0(uVar3,uVar2);
      if ((iVar6 != 0) && (iVar6 = FUN_10146830(*(undefined4 *)(iVar1 + 0x1e5c)), iVar6 != 0)) {
        FUN_10021a00(local_20,local_18,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(in_ECX + 0x2ec),0xff,
                     1);
      }
      if (*(int *)(*(int *)(iVar4 * 4 + *(int *)(in_ECX + 0x2f8)) + 0x38) != 0) {
        uVar2 = *(undefined4 *)(in_ECX + 0x270);
        uVar3 = *(undefined4 *)(in_ECX + 0x26c);
        uVar7 = 0xff008080;
        uVar5 = FUN_1002f110(0xff008080);
        FUN_10020dc0(local_20,local_18,uVar3,uVar2,0,0,uVar3,uVar2,uVar5,uVar7);
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x2f8) + iVar4 * 4) + 0x3c) != 0) {
          FUN_1014ed50(9);
          *(undefined4 *)(*(int *)(iVar4 * 4 + *(int *)(in_ECX + 0x2f8)) + 0x3c) = 0;
        }
      }
      if (((*(int *)(*(int *)(iVar4 * 4 + *(int *)(in_ECX + 0x2f8)) + 0x34) != 0) &&
          (iVar6 = FUN_1002da20(), iVar6 == 0)) && (iVar6 = FUN_10030af0(), iVar6 != 0)) {
        uVar2 = *(undefined4 *)(in_ECX + 0x270);
        uVar3 = *(undefined4 *)(in_ECX + 0x26c);
        uVar8 = 1;
        uVar7 = 0xff;
        uVar5 = FUN_10030af0(0xff,1);
        FUN_10021a00(local_20,local_18,uVar3,uVar2,0,0,uVar3,uVar2,uVar5,uVar7,uVar8);
      }
      if (*(int *)(iVar1 + 0x1f08) != 0) {
        FUN_10021a00(local_20,local_18,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(in_ECX + 0x2f0),0xff,
                     1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101862ba Catch@101862ba

void Catch_101862ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 101862ce Catch@101862ce

void Catch_101862ce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCItemWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101862f0 FUN_101862f0

void FUN_101862f0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021448f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10031b00(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCSkillItemWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xbe));
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0xbd] = 0;
  uVar1 = FUN_1003f630(L"l2ui_ch3.InventoryWnd.inventory_outline",1);
  in_ECX[0xb9] = uVar1;
  uVar1 = FUN_1003f630(L"l2ui_ch3.InventoryWnd.inventory_outline_down",1);
  in_ECX[0xba] = uVar1;
  uVar1 = FUN_1003f630(L"L2_SkillTime.ToggleEffect.ToggleEffect001",1);
  in_ECX[0xbb] = uVar1;
  uVar1 = FUN_1003f630(L"Default.ChatBack",1);
  in_ECX[0xbc] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 101863c0 FUN_101863c0

void FUN_101863c0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_102144c6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCSkillItemWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_10185e30(uVar1);
  local_4 = 0xffffffff;
  FUN_10031cf0();
  ExceptionList = local_c;
  return;
}


// ==== 10186430 FUN_10186430

void FUN_10186430(byte param_1)

{
  void *in_ECX;
  
  FUN_101863c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x304);
  }
  return;
}


// ==== 10186460 FUN_10186460

void FUN_10186460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021450f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10031db0(param_1,param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  *in_ECX = NCSkillItemWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xbe));
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0xbd] = 0;
  uVar1 = FUN_1003f630(L"l2ui.nwindow.icon_back",1);
  in_ECX[0xb9] = uVar1;
  uVar1 = FUN_1003f630(L"l2ui.nwindow.icon_click",1);
  in_ECX[0xba] = uVar1;
  uVar1 = FUN_1003f630(L"L2_SkillTime.ToggleEffect.ToggleEffect001",1);
  in_ECX[0xbb] = uVar1;
  uVar1 = FUN_1003f630(L"Default.ChatBack",1);
  in_ECX[0xbc] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 10186550 FUN_10186550

void FUN_10186550(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCSkillWnd::vftable;
  in_ECX[0xb8] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101865b0 FUN_101865b0

void FUN_101865b0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214568;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCSkillWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10186610 FUN_10186610

void FUN_10186610(byte param_1)

{
  void *in_ECX;
  
  FUN_101865b0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2e4);
  }
  return;
}


// ==== 10186640 FUN_10186640

undefined4 FUN_10186640(void)

{
  UObject *pUVar1;
  int *piVar2;
  UPackage *pUVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  FName local_4 [4];
  
  FUN_10061b40();
  uStack_18 = 0x10186657;
  FName::FName(local_4,0);
  UObject::GetTransientPackage();
  uStack_1c = *(undefined4 *)GError_exref;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_34 = 0x10186683;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_18 = 5;
    uStack_1c = 0x20;
    uStack_20 = 0x50;
    piVar2 = (int *)FUN_10186460();
  }
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0x118;
  *(int **)(in_ECX + 0x2d8) = piVar2;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_34 = *(undefined4 *)(in_ECX + 0x2d8);
  uStack_38 = 0x101866d7;
  FUN_10060d40();
  uStack_34 = 0x101866e3;
  FUN_1005c1e0();
  uStack_34 = 0x101866ef;
  FName::FName((FName *)&uStack_20,0);
  pUVar3 = UObject::GetTransientPackage();
  uStack_38 = *(undefined4 *)GError_exref;
  uStack_34 = 0;
  uStack_3c = 0;
  pUVar1 = UObject::StaticAllocateObject(&DAT_103a4d20,pUVar3,uStack_20,0);
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_34 = 5;
    uStack_38 = 0x20;
    uStack_3c = 0x50;
    piVar2 = (int *)FUN_10186460(6,8);
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0x118;
  *(int **)(in_ECX + 0x2dc) = piVar2;
  (**(code **)(*piVar2 + 0xc0))(9,0x28,0xef);
  uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2dc),0x22);
  FUN_1005c1e0(uVar4);
  FName::FName((FName *)&uStack_3c,0);
  pUVar3 = UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_1036ac80,pUVar3,uStack_3c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar1 == (UObject *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_100514d0();
  }
  *(int *)(in_ECX + 0x2e0) = iVar5;
  *(undefined4 *)(iVar5 + 0x1cc) = 0xaf11000;
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0xc0))(0xc,8,0xbd,0x17,0,0,3);
  uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e0),2);
  FUN_1005c1e0(uVar4);
  FUN_1004ff30(0x78,*(undefined4 *)(in_ECX + 0x2d8),0x5e,0x17,L"L2UI_CH3.skillwnd.skill_tab2",
               L"L2UI_CH3.skillwnd.skill_tab1",1,0xffffffff,0,0);
  FUN_1004ff30(0x79,*(undefined4 *)(in_ECX + 0x2dc),0x5e,0x17,L"L2UI_CH3.skillwnd.skill_tab2",
               L"L2UI_CH3.skillwnd.skill_tab1",0,0xffffffff,0,0);
  return 1;
}


// ==== 10186860 FUN_10186860

void FUN_10186860(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCMagicSkillWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101868c0 FUN_101868c0

void FUN_101868c0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102145c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCMagicSkillWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10186920 FUN_10186920

void FUN_10186920(byte param_1)

{
  void *in_ECX;
  
  FUN_101868c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d4);
  }
  return;
}


// ==== 10186950 FUN_10186950

undefined4 FUN_10186950(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 local_c;
  longlong local_8;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.SkillWnd.skill_back",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  FName::FName((FName *)&local_c,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_103a5250,pUVar2,local_c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_10186550();
  }
  *(int *)(in_ECX + 0x1d0) = iVar4;
  *(undefined4 *)(iVar4 + 0x1cc) = 0x1f01;
  local_8._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uVar1 = (undefined4)local_8;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_8 = (longlong)ROUND(*(float *)(in_ECX + 0x88));
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))(0,0,(undefined4)local_8,uVar1,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),0x22);
  FUN_1005c1e0(uVar1);
  return 1;
}


// ==== 10186a90 FUN_10186a90

undefined4 FUN_10186a90(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"sek.cbui141",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  *(undefined4 *)(in_ECX + 0x1dc) = 0xffffffff;
  return 1;
}


// ==== 10186ac0 FUN_10186ac0

undefined4 FUN_10186ac0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102145f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10186b0e Catch@10186b0e

void Catch_10186b0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10186b22 Catch@10186b22

void Catch_10186b22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMessageWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10186b40 FUN_10186b40

void FUN_10186b40(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10186b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::Empty((FString *)(in_ECX + 0x1d0));
  return;
}


// ==== 10186b50 FUN_10186b50

void FUN_10186b50(ushort *param_1)

{
  int in_ECX;
  
  if (param_1 != (ushort *)0x0) {
    FString::operator=((FString *)(in_ECX + 0x1d0),param_1);
  }
  *(undefined4 *)(in_ECX + 0x1dc) = 0xffffffff;
  return;
}


// ==== 10186b80 FUN_10186b80

void FUN_10186b80(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x1dc) = param_1;
  FString::operator=((FString *)(in_ECX + 0x1d0),(ushort *)&DAT_1022f9f8);
  ExceptionList = local_10;
  return;
}


// ==== 10186be7 Catch@10186be7

void Catch_10186be7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10186bfb Catch@10186bfb

void Catch_10186bfb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMessageWnd::SetMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10186c20 FUN_10186c20

undefined4 FUN_10186c20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int in_ECX;
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
  undefined4 uVar16;
  undefined4 uVar17;
  int local_20 [2];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214639;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  uVar2 = FUN_101c19e0(uVar1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  iVar4 = *(int *)(in_ECX + 0x1cc);
  if (iVar4 != 0) {
    uVar2 = FUN_101c19e0(uVar1);
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar4,0xff,1);
  }
  FString::FString(local_18,(FString *)(in_ECX + 0x1d0));
  local_4 = 0;
  iVar4 = FString::operator_int(local_18);
  if ((iVar4 == 0) && (*(int *)(in_ECX + 0x1dc) != -1)) {
    puVar5 = FString::operator*((FString *)
                                (GL2GameData_exref + *(int *)(in_ECX + 0x1dc) * 0x5c + 0x240ec));
    FString::operator=(local_18,puVar5);
  }
  uVar16 = 0;
  uVar14 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar5 = FString::operator*(local_18);
  FUN_10020bb0(local_20,puVar5,uVar2,uVar3,uVar10,uVar12,uVar14,uVar16);
  iVar4 = FString::operator_int(local_18);
  if (iVar4 == 0) {
LAB_10186dca:
    iVar4 = FString::operator_int(local_18);
    if (iVar4 == 0) goto LAB_10186e0a;
    uVar17 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar16 = 0;
    uVar14 = 0;
    iVar4 = *(int *)GSEKScreenX_exref + -100;
    uVar12 = 0;
    puVar5 = FString::operator*(local_18);
    uVar10 = 0xffdcdcdc;
    uVar2 = 8;
    uVar3 = 0x32;
  }
  else {
    iVar4 = FUN_101c19e0();
    if (iVar4 <= local_20[0]) goto LAB_10186dca;
    uVar17 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    iVar4 = 0;
    puVar5 = FString::operator*(local_18);
    uVar10 = 0xffdcdcdc;
    uVar2 = FUN_101c19e0(0xffdcdcdc,puVar5,iVar4,uVar12,uVar14,uVar16,uVar6,uVar7,uVar8,uVar9,uVar11
                         ,uVar13,uVar15,uVar17);
    uVar3 = FUN_101c19e0(uVar2);
  }
  FUN_100217a0(uVar3,uVar2,uVar10,puVar5,iVar4,uVar12,uVar14,uVar16,uVar6,uVar7,uVar8,uVar9,uVar11,
               uVar13,uVar15,uVar17);
LAB_10186e0a:
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return 1;
}


// ==== 10186e50 FUN_10186e50

void FUN_10186e50(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214677;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCMessageWnd::vftable;
  in_ECX[0x73] = 0;
  FString::FString((FString *)(in_ECX + 0x74));
  in_ECX[0x77] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 10186ec0 FUN_10186ec0

void FUN_10186ec0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_102146b7;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCMessageWnd::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x1d0));
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10186f30 FUN_10186f30

void FUN_10186f30(byte param_1)

{
  void *in_ECX;
  
  FUN_10186ec0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e0);
  }
  return;
}


// ==== 10186f70 FUN_10186f70

bool FUN_10186f70(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 - 0xb01000U < 0x21)) {
    iVar1 = (**(code **)(*in_ECX + 500))(param_2);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10186fd0 FUN_10186fd0

void FUN_10186fd0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x240) = param_1;
  return;
}


// ==== 10187026 Catch@10187026

void Catch_10187026(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018703a Catch@1018703a

void Catch_1018703a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::SetSSQStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187060 FUN_10187060

void FUN_10187060(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021470c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 0x1c));
  ExceptionList = local_c;
  return;
}


// ==== 101870b0 FUN_101870b0

void FUN_101870b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021473c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  FString::FString((FString *)(in_ECX + 7),(FString *)(param_1 + 7));
  ExceptionList = local_c;
  return;
}


// ==== 10187130 FUN_10187130

void FUN_10187130(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack_258;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined4 local_220;
  int local_21c;
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  ushort local_208 [256];
  uint local_8;
  
  puStack_210 = &LAB_10214760;
  local_214 = ExceptionList;
  uStack_258 = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_258;
  ExceptionList = &local_214;
  local_220 = param_1;
  local_20c = 0;
  local_22c = 0x3d;
  local_230 = 0x3d;
  iVar3 = 0x3d - *(int *)(in_ECX + 0x25c) % 0x3d;
  iVar4 = 0x3d - *(int *)(in_ECX + 0x260) % 0x3d;
  local_224 = *(int *)(in_ECX + 0x25c) / 0x3d + 0x14;
  local_228 = *(int *)(in_ECX + 0x260) / 0x3d + 0x14;
  local_21c = 0;
  local_8 = uStack_258;
  while( true ) {
    iVar1 = FUN_101c19e0();
    if (iVar1 < local_21c) break;
    if (-1 < local_224) {
      appSprintf(local_208,(ushort *)&DAT_10233718,local_224);
      FUN_10020bb0(&local_238,local_208,0,0,0,0,0,0);
      if (0xf < iVar3) {
        FUN_100217a0(iVar3 - local_238 / 2,2,0xffdcdcdc,local_208,0,0,0,1,0,0,0,0,0,0,0,0xffffffff);
      }
    }
    uVar6 = 1;
    uVar5 = 0x40000000;
    uVar2 = FUN_101c19e0(0x40000000,1);
    FUN_10020e80(iVar3,local_234,iVar3,uVar2,uVar5,uVar6);
    iVar3 = iVar3 + local_22c;
    local_224 = local_224 + 1;
    local_21c = local_21c + 1;
  }
  local_21c = 0;
  while( true ) {
    iVar1 = FUN_101c19e0();
    iVar3 = local_228;
    if (iVar1 < local_21c) break;
    if (-1 < local_228) {
      appSprintf(local_208,(ushort *)&DAT_10233718,local_228 + 1);
      FUN_10020bb0(&local_238,local_208,0,0,0,0,0,0);
      if (0x14 < iVar4) {
        FUN_100217a0(0,iVar4 - local_234 / 2,0xffdcdcdc,local_208,0,0,0,1,0,0,0,0,0,0,0,0xffffffff);
      }
    }
    uVar6 = 1;
    uVar5 = 0x40000000;
    iVar1 = iVar4;
    uVar2 = FUN_101c19e0(iVar4,0x40000000,1);
    FUN_10020e80(local_238,iVar4,uVar2,iVar1,uVar5,uVar6);
    iVar4 = iVar4 + local_230;
    local_228 = iVar3 + 1;
    local_21c = local_21c + 1;
  }
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 1018737f Catch@1018737f

void Catch_1018737f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 10187393 Catch@10187393

void Catch_10187393(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawGrid");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101873b0 FUN_101873b0

undefined4 FUN_101873b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d6f0(param_1,param_2);
  iVar2 = (int)(short)param_2 - *(int *)(in_ECX + 0x80);
  iVar3 = (int)(short)((uint)param_2 >> 0x10) - *(int *)(in_ECX + 0x84);
  if (0 < iVar2) {
    iVar1 = FUN_101c19e0();
    if ((iVar2 <= iVar1) && (0 < iVar3)) {
      iVar1 = FUN_101c19e0();
      if (iVar3 <= iVar1) {
        *(int *)(in_ECX + 0x26c) = iVar2;
        *(int *)(in_ECX + 0x270) = iVar3;
        FUN_1003f8b0(3,0,0);
        FUN_10145680();
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1018746d Catch@1018746d

void Catch_1018746d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187481 Catch@10187481

void Catch_10187481(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101874a0 FUN_101874a0

undefined4 FUN_101874a0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102147b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d800(param_1,param_2);
  FUN_10145690();
  ExceptionList = local_10;
  return 1;
}


// ==== 10187503 Catch@10187503

void Catch_10187503(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187517 Catch@10187517

void Catch_10187517(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187540 FUN_10187540

void FUN_10187540(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102147dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x1c));
  ExceptionList = local_c;
  return;
}


// ==== 10187590 FUN_10187590

int FUN_10187590(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x2b4) <= iVar5) {
      return 8;
    }
    piVar4 = (int *)(iVar5 * 0x20 + *(int *)(in_ECX + 0x2b0));
    if ((param_1 < piVar4[3]) || (*piVar4 < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((param_2 < piVar4[4]) || (piVar4[1] < param_2)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((param_4 == 0) || ((piVar4[5] <= param_3 && (param_3 <= piVar4[2])))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((bVar1) && (bVar2)) && (bVar3)) break;
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


// ==== 10187667 Catch@10187667

void Catch_10187667(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1018767b Catch@1018767b

void Catch_1018767b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetExceptLocID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101876a0 FUN_101876a0

void FUN_101876a0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x244) = param_1;
  if (param_1 == 0) {
    iVar1 = *(int *)(DAT_103663bc + 0x5110);
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
  }
  return;
}


// ==== 10187724 Catch@10187724

void Catch_10187724(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187738 Catch@10187738

void Catch_10187738(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::SetQuestOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187760 FUN_10187760

void FUN_10187760(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9,int *param_10)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  iVar1 = param_1 * 0x400;
  if ((param_3 < iVar1) || (iVar1 + 0x400 <= param_3)) {
    if ((iVar1 + -0x400 <= param_3) && (param_3 < iVar1)) {
      iVar1 = FUN_101c19e0();
      *param_7 = iVar1;
      uVar2 = FUN_101c19e0();
      *param_5 = uVar2;
    }
  }
  else {
    param_3 = param_3 + param_1 * -0x400;
    *param_9 = param_3;
    param_3 = 0x400 - param_3;
    iVar1 = FUN_101c19e0();
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    *param_7 = iVar1;
  }
  iVar1 = param_2 * 0x400;
  if ((param_4 < iVar1) || (iVar1 + 0x400 <= param_4)) {
    if (param_4 < iVar1 + -0x400) {
      ExceptionList = local_10;
      return;
    }
    if (iVar1 <= param_4) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_101c19e0();
    *param_8 = iVar1;
    iVar1 = FUN_101c19e0();
  }
  else {
    param_4 = param_4 + param_2 * -0x400;
    *param_10 = param_4;
    param_4 = 0x400 - param_4;
    iVar1 = FUN_101c19e0();
    param_6 = param_8;
    if (param_4 < iVar1) {
      iVar1 = param_4;
    }
  }
  *param_6 = iVar1;
  ExceptionList = local_10;
  return;
}


// ==== 101878d3 Catch@101878d3

void Catch_101878d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101878e7 Catch@101878e7

void Catch_101878e7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetWorldmapCoords");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187910 FUN_10187910

void FUN_10187910(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  uint uStack_4c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214860;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      FUN_10187760(iVar1,iVar2,*(undefined4 *)(in_ECX + 0x25c),*(undefined4 *)(in_ECX + 0x260),
                   &local_2c,&local_28,&local_18,&local_1c,&local_24,&local_20);
      if ((0 < local_18) && (0 < local_1c)) {
        FUN_10021a00(local_2c,local_28,local_18,local_1c,local_24,local_20,local_18,local_1c,
                     *(undefined4 *)(in_ECX + 0x1cc + (iVar1 + iVar2 * 2) * 4),0xff,1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101879eb Catch@101879eb

void Catch_101879eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 101879ff Catch@101879ff

void Catch_101879ff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawWorldMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187a20 FUN_10187a20

void FUN_10187a20(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      FUN_10054e80();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x3c,param_1);
  return;
}


// ==== 10187a60 FUN_10187a60

undefined4 FUN_10187a60(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return *(undefined4 *)(iVar1 + 8 + iVar2 * 0xc);
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 10187ab0 FUN_10187ab0

void FUN_10187ab0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar1 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar1 = iVar1 - param_1;
    do {
      FUN_10054e80();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x3c);
  return;
}


// ==== 10187b50 FUN_10187b50

void FUN_10187b50(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214889;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x758;
  FUN_10005c30(0x758,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10187bd4 Catch@10187bd4

void Catch_10187bd4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187be8 Catch@10187be8

void Catch_10187be8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187c10 FUN_10187c10

void FUN_10187c10(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102148b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_3 == 0) {
    uVar1 = FUN_101c19e0();
    *param_1 = uVar1;
    uVar1 = FUN_101c19e0();
    *param_2 = uVar1;
    ExceptionList = local_10;
    return;
  }
  iVar2 = FUN_10187a60(&param_3);
  if (iVar2 == 0) {
    *param_1 = 0xffffffff;
    *param_2 = 0xffffffff;
    ExceptionList = local_10;
    return;
  }
  uVar1 = FUN_101c19e0();
  *param_1 = uVar1;
  uVar1 = FUN_101c19e0();
  *param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10187d2b Catch@10187d2b

void Catch_10187d2b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187d3f Catch@10187d3f

void Catch_10187d3f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetMinimapPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187d60 FUN_10187d60

void FUN_10187d60(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_38;
  undefined4 local_34;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102148d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (local_20 = 0; local_20 < *(int *)(in_ECX + 0x220); local_20 = local_20 + 1) {
    FUN_101870b0(*(int *)(in_ECX + 0x21c) + local_20 * 0x28);
    local_8._0_1_ = 1;
    iVar2 = local_48 - *(int *)(in_ECX + 0x25c);
    iVar3 = local_44 - *(int *)(in_ECX + 0x260);
    if (-0x3e < iVar2) {
      iVar1 = FUN_101c19e0();
      if ((iVar2 < iVar1 + 0x3d) && (-0x3e < iVar3)) {
        iVar1 = FUN_101c19e0();
        if (iVar3 < iVar1 + 0x3d) {
          FUN_10021a00(iVar2,iVar3,local_38,local_34,0,0,local_38,local_34,local_4c,0xff,1);
        }
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10187540();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10187e58 Catch@10187e58

void Catch_10187e58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187e6c Catch@10187e6c

void Catch_10187e6c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawCursedWeaponIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187e90 FUN_10187e90

undefined4 FUN_10187e90(void)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10187a60(&stack0x00000004);
  if (iVar1 != 0) {
    iVar2 = FString::operator==((FString *)(iVar1 + 0x40),(ushort *)&DAT_1022f9f8);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return *(undefined4 *)(iVar1 + 0x34);
    }
  }
  ExceptionList = local_10;
  return 0x70c;
}


// ==== 10187f1f Catch@10187f1f

void Catch_10187f1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187f33 Catch@10187f33

void Catch_10187f33(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetMapWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10187f50 FUN_10187f50

undefined4 FUN_10187f50(void)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10187a60(&stack0x00000004);
  if (iVar1 != 0) {
    iVar2 = FString::operator==((FString *)(iVar1 + 0x40),(ushort *)&DAT_1022f9f8);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return *(undefined4 *)(iVar1 + 0x38);
    }
  }
  ExceptionList = local_10;
  return 0xa40;
}


// ==== 10187fdf Catch@10187fdf

void Catch_10187fdf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10187ff3 Catch@10187ff3

void Catch_10187ff3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetMapHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188010 FUN_10188010

void FUN_10188010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10187590(*param_1,*param_2,*param_3,param_4);
  if ((*(int *)(in_ECX + 0x250) == 0) && (iVar1 != 8)) {
    if ((-1 < iVar1) && (iVar1 < 8)) {
      *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x2b0) + 0x18 + iVar1 * 0x20);
      *param_2 = *(undefined4 *)(*(int *)(in_ECX + 0x2b0) + 0x1c + iVar1 * 0x20);
    }
  }
  else {
    FUN_10187c10(param_1,param_2,param_5);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101880bd Catch@101880bd

void Catch_101880bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101880d1 Catch@101880d1

void Catch_101880d1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetMinimapLocationWithException");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101880f0 FUN_101880f0

void FUN_101880f0(void)

{
  int in_ECX;
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214972;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x250) == 0) {
    local_14 = (undefined1 *)&uStack_38;
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    uVar1 = 0x758;
  }
  else {
    FString::FString(local_28,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 2;
    uVar1 = 0x74e;
  }
  pFVar2 = local_28;
  FUN_10005c30(uVar1,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10188189 Catch@10188189

void Catch_10188189(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018819d Catch@1018819d

void Catch_1018819d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::AdjustReduceBtn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101881c0 FUN_101881c0

int FUN_101881c0(float param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uStack_48;
  FVector local_38 [12];
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214990;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x229) == '\0') {
    iVar1 = 0;
  }
  else {
    FUN_1014b730(local_38);
    local_2c = (float)(int)param_1;
    param_2 = (float)(int)param_2;
    param_1 = (float)param_3;
    local_28 = param_2;
    local_24 = param_1;
    local_18 = local_2c;
    iVar1 = FVector::operator==(local_38,(FVector *)&local_2c);
    if (iVar1 == 0) {
      iVar1 = FUN_10143970(local_18,param_2,param_1);
    }
    else {
      iVar1 = FUN_101438e0();
    }
    if ((iVar1 == -1) ||
       ((param_1 = (float)iVar1, iVar2 = FUN_10187a60(&param_1), iVar2 != 0 &&
        (iVar2 = FString::operator==((FString *)(iVar2 + 0x40),(ushort *)&DAT_1022f9f8), iVar2 != 0)
        ))) {
      iVar1 = 0;
    }
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 101882c0 Catch@101882c0

void Catch_101882c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101882d4 Catch@101882d4

void Catch_101882d4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::FindMapIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188300 FUN_10188300

void FUN_10188300(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uStack_44;
  undefined1 local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102149b0;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014b730(local_34);
  local_18 = FUN_101c19e0();
  FUN_1014b730(local_34);
  local_1c = FUN_101c19e0();
  FUN_1014b730(local_34);
  local_20 = FUN_101c19e0();
  FUN_10188010(&local_18,&local_1c,&local_20,1,param_3);
  *param_1 = local_18;
  *param_2 = local_1c;
  ExceptionList = local_10;
  return;
}


// ==== 101883c7 Catch@101883c7

void Catch_101883c7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101883db Catch@101883db

void Catch_101883db(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetPlayerMinimapPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188400 FUN_10188400

void FUN_10188400(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102149d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  FUN_10188010(&param_1,&param_2,&local_18,0,param_5);
  *param_3 = param_1;
  *param_4 = param_2;
  ExceptionList = local_10;
  return;
}


// ==== 10188487 Catch@10188487

void Catch_10188487(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1018849b Catch@1018849b

void Catch_1018849b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetTargetMinimapPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101884c0 FUN_101884c0

void FUN_101884c0(int param_1,int param_2,int param_3)

{
  uint uStack_38;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102149f0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_28 = param_1;
    local_24 = param_2;
    local_20 = param_3;
    FUN_10042d60(&local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018853a Catch@1018853a

void Catch_1018853a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018854e Catch@1018854e

void Catch_1018854e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::AddTargetLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188570 FUN_10188570

void FUN_10188570(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214a10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x200); iVar2 = iVar2 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x1fc) + iVar2 * 0xc);
    if (((*piVar1 == param_1) && (piVar1[1] == param_2)) && (piVar1[2] == param_3)) {
      FUN_10042d90(iVar2,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101885fe Catch@101885fe

void Catch_101885fe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10188612 Catch@10188612

void Catch_10188612(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DeleteTargetLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188630 FUN_10188630

void FUN_10188630(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10187a20(0);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x200); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1fc),0xc,0);
  ExceptionList = local_10;
  return;
}


// ==== 101886a9 Catch@101886a9

void Catch_101886a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101886bd Catch@101886bd

void Catch_101886bd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101886e0 FUN_101886e0

void FUN_101886e0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214a5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 0x1c));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x28,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10188760 FUN_10188760

void FUN_10188760(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  
  iVar2 = FArray::Add(in_ECX,1,0x20);
  puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  puVar3[4] = param_1[4];
  puVar3[5] = param_1[5];
  uVar1 = param_1[7];
  puVar3[6] = param_1[6];
  puVar3[7] = uVar1;
  return;
}


// ==== 101887b0 FUN_101887b0

void FUN_101887b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214a89;
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


// ==== 10188850 FUN_10188850

void FUN_10188850(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214ab9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10187ab0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101888b0 FUN_101888b0

void FUN_101888b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214ae9;
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
  FArray::Remove(in_ECX,0,iVar1,0x20);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10188950 FUN_10188950

void FUN_10188950(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214b19;
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


// ==== 101889f0 FUN_101889f0

void FUN_101889f0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214b4c;
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
    iVar1 = param_1 * 0x28;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 0x1c));
      iVar1 = iVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x28);
  ExceptionList = local_c;
  return;
}


// ==== 10188ad0 FUN_10188ad0

void FUN_10188ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214b70;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_3c = param_1;
  local_38 = param_3;
  local_34 = param_5;
  local_30 = param_2;
  local_2c = param_4;
  local_28 = param_6;
  local_24 = param_7;
  local_20 = param_8;
  FUN_10188760(&local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 10188b60 Catch@10188b60

void Catch_10188b60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10188b74 Catch@10188b74

void Catch_10188b74(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::AddExceptLocationList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188ba0 FUN_10188ba0

void FUN_10188ba0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214b98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  iVar3 = 0;
  if (param_1 == 0) {
    for (; iVar3 < *(int *)(in_ECX + 0x1e8); iVar3 = iVar3 + 1) {
      iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1e4) + iVar3 * 4) + 0xfc))(0);
      if (iVar1 == 0) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x1e4) + iVar3 * 4) + 0x138))();
      }
    }
    local_18 = 0;
    local_8._0_1_ = 1;
    for (; iVar2 < *(int *)(in_ECX + 0x20c); iVar2 = iVar2 + 1) {
      iVar3 = *(int *)(in_ECX + 0x208) + iVar2 * 0xc;
      param_1 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar3 + 8) != 0) {
        iVar3 = FUN_10187a60(&param_1);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != -1)) {
          iVar1 = *(int *)(iVar3 + 0x24) - *(int *)(in_ECX + 0x25c);
          iVar3 = *(int *)(iVar3 + 0x28) - *(int *)(in_ECX + 0x260);
          if ((iVar1 < 0) ||
             (((iVar3 < 0 || (*(float *)(in_ECX + 0x88) < (float)iVar1)) ||
              (*(float *)(in_ECX + 0x8c) < (float)iVar3)))) {
            iVar1 = 9999;
            iVar3 = 9999;
          }
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x1e4) + local_18 * 4) + 0xc0))
                    (iVar1,iVar3,0x1a,0x1a,0,0,3);
        }
      }
      local_18 = local_18 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d10a0();
  }
  else {
    for (; iVar3 < *(int *)(in_ECX + 0x1e8); iVar3 = iVar3 + 1) {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1e4) + iVar3 * 4) + 0xfc))(0);
      if (iVar2 != 0) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x1e4) + iVar3 * 4) + 0x13c))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10188d56 Catch@10188d56

void Catch_10188d56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 10188d6a Catch@10188d6a

void Catch_10188d6a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::RearrangeOpenTownMapButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188d90 FUN_10188d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10188d90(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int in_ECX;
  FString *pFVar6;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uStack_90;
  int local_74;
  int local_70;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  FString local_3c [12];
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10214bf4;
  local_10 = ExceptionList;
  uStack_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_90;
  ExceptionList = &local_10;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  puVar1 = &uStack_90;
  if (in_stack_00000028 != 0) {
    FUN_101886e0(0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_10187060();
  local_8 = CONCAT31(local_8._1_3_,4);
  uVar9 = 0;
  piVar8 = &local_50;
  piVar7 = &local_54;
  uVar2 = FUN_101c19e0(piVar7,piVar8,0);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10188400(uVar3,uVar2,piVar7,piVar8,uVar9);
  iVar4 = FUN_101c19e0();
  local_4c = iVar4;
  local_48 = FUN_101c19e0();
  local_54 = iVar4 * 0x3d + in_stack_0000002c;
  local_50 = local_48 * 0x3d + in_stack_00000030;
  local_44 = in_stack_0000002c * -2 + 0x3d;
  local_40 = in_stack_00000030 * -2 + 0x3d;
  local_18 = 0;
  for (iVar4 = 0; local_1c = iVar4, iVar4 < *(int *)(in_ECX + 0x220); iVar4 = iVar4 + 1) {
    FUN_101870b0(*(int *)(in_ECX + 0x21c) + iVar4 * 0x28);
    local_8._0_1_ = 5;
    if ((local_74 == local_4c) && (local_70 == local_48)) {
      local_18 = 1;
      FUN_101889f0(iVar4,1);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_10187540();
  }
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,6);
  pFVar6 = local_30;
  puVar5 = FString::operator*((FString *)&stack0x00000034);
  FUN_10146040(puVar5,pFVar6);
  uVar2 = 1;
  if (local_18 == 0) {
    _DAT_10352420 = 0xfffffc19;
    pFVar6 = (FString *)&stack0x00000004;
  }
  else {
    pFVar6 = (FString *)&stack0x00000010;
  }
  puVar5 = FString::operator*(pFVar6);
  local_58 = FUN_1003f630(puVar5,uVar2);
  FString::operator=(local_3c,local_30);
  if (local_58 != 0) {
    iVar4 = FUN_10048c00(0x28,in_ECX + 0x21c);
    if (iVar4 != 0) {
      FUN_101870b0(&local_58);
    }
  }
  local_8._0_1_ = 4;
  FString::~FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_10187540();
  local_8 = 1;
  FString::~FString((FString *)&stack0x00000004);
  local_8 = local_8 & 0xffffff00;
  FString::~FString((FString *)&stack0x00000010);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000034);
  ExceptionList = local_10;
  return;
}


// ==== 10188f9c Catch@10188f9c

void Catch_10188f9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10188fb0 Catch@10188fb0

void Catch_10188fb0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawGridIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10188fd0 FUN_10188fd0

void FUN_10188fd0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101886e0(0);
  ExceptionList = local_10;
  return;
}


// ==== 10189028 Catch@10189028

void Catch_10189028(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018903c Catch@1018903c

void Catch_1018903c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DeleteAllCursedWeaponIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10189060 FUN_10189060

void FUN_10189060(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uStack_34;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c30;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  local_1c = 0;
  FUN_10188400(param_1,param_2,&local_18,&local_1c,0);
  *param_3 = local_18 / 0x3d;
  *param_4 = local_1c / 0x3d;
  ExceptionList = local_10;
  return;
}


// ==== 101890f9 Catch@101890f9

void Catch_101890f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1018910d Catch@1018910d

void Catch_1018910d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::GetGridNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10189130 FUN_10189130

void FUN_10189130(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x250);
  iVar2 = FUN_10187a60(puVar1);
  if (iVar2 == 0) {
    appFailAssert("pZoneName",".\\Src\\NMinimapWnd.cpp",0x280);
  }
  FUN_10187e90(*puVar1);
  FUN_10187f50(*puVar1);
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0();
  FUN_10021a00(0,0,uVar3,uVar4,*(undefined4 *)(in_ECX + 0x25c),*(undefined4 *)(in_ECX + 0x260),uVar3
               ,uVar4,*param_2,0xff,1);
  ExceptionList = local_10;
  return;
}


// ==== 1018920b Catch@1018920b

void Catch_1018920b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018921f Catch@1018921f

void Catch_1018921f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawTownMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10189240 FUN_10189240

void FUN_10189240(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)(in_ECX + 600);
  piVar2 = (int *)(in_ECX + 0x254);
  FUN_10188300(piVar2,piVar1,*(undefined4 *)(in_ECX + 0x250));
  *piVar2 = *piVar2 - *(int *)(in_ECX + 0x25c);
  iVar3 = *piVar2;
  *piVar1 = *piVar1 - *(int *)(in_ECX + 0x260);
  iVar4 = *piVar1;
  iVar5 = *(int *)(in_ECX + 0x234);
  if ((iVar5 != 0) && (0xb < iVar3)) {
    iVar6 = FUN_101c19e0();
    if ((iVar3 <= iVar6 + -0xc) && (0xb < iVar4)) {
      iVar6 = FUN_101c19e0();
      if (iVar4 < iVar6 + -0xc) {
        FUN_10021b30(iVar3,iVar4,iVar5,0xff);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018930d Catch@1018930d

void Catch_1018930d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10189321 Catch@10189321

void Catch_10189321(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawMyLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10189340 FUN_10189340

void FUN_10189340(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uStack_44;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214c90;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  for (local_18 = 0; local_18 < *(int *)(in_ECX + 0x200); local_18 = local_18 + 1) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x1fc) + local_18 * 0xc);
    FUN_10188400(*puVar1,puVar1[1],&local_1c,&local_20,*(undefined4 *)(in_ECX + 0x250));
    iVar4 = local_1c - *(int *)(in_ECX + 0x25c);
    iVar3 = local_20 - *(int *)(in_ECX + 0x260);
    local_20 = iVar3;
    local_1c = iVar4;
    if ((*(int *)(in_ECX + 0x238) != 0) && (0xb < iVar4)) {
      iVar2 = FUN_101c19e0();
      if ((iVar4 <= iVar2 + -0xc) && (0xb < iVar3)) {
        iVar2 = FUN_101c19e0();
        if (iVar3 < iVar2 + -0xc) {
          FUN_10021a00(iVar4 + -0x10,iVar3 + -0x1f,0x20,0x20,0,0,0x20,0x20,
                       *(undefined4 *)(in_ECX + 0x238),0xff,1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018945c Catch@1018945c

void Catch_1018945c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10189470 Catch@10189470

void Catch_10189470(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawMinimapTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10189490 FUN_10189490

void FUN_10189490(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uStack_58;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214cb0;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101c19e0();
  iVar2 = FUN_101c19e0();
  iVar3 = FUN_101c19e0();
  if (((iVar1 != 0) || (iVar2 != 0)) || (iVar3 != 0)) {
    FUN_10188400(iVar1,iVar2,&local_18,&local_1c,*(undefined4 *)(in_ECX + 0x250));
    local_18 = local_18 - *(int *)(in_ECX + 0x25c);
    local_1c = local_1c - *(int *)(in_ECX + 0x260);
    FUN_10021a00(local_18,local_1c + -0x14,0x20,0x20,0,0,0x20,0x20,*(undefined4 *)(in_ECX + 0x23c),
                 0xff,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018958f Catch@1018958f

void Catch_1018958f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101895a3 Catch@101895a3

void Catch_101895a3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::DrawQuestTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101895c0 FUN_101895c0

undefined4 FUN_101895c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ushort *puVar8;
  int in_ECX;
  int iVar9;
  uint uStack_88;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  int *local_64;
  int local_60;
  undefined4 local_5c;
  FString local_58 [12];
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214d04;
  local_10 = ExceptionList;
  uStack_88 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_88;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar4,uVar3);
  piVar1 = (int *)(in_ECX + 0x250);
  iVar5 = FUN_10187a60(piVar1);
  if (iVar5 == 0) {
    FUN_10187910(param_1);
  }
  else {
    FUN_10189130(param_1,iVar5);
  }
  if (((*piVar1 == 0) && (FUN_10187d60(param_1), *piVar1 == 0)) &&
     (*(char *)(in_ECX + 0x22a) != '\0')) {
    FUN_10187130(param_1);
  }
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0xd4))(&local_28);
  iVar5 = 0;
  local_30 = 0;
  local_24 = 0;
  local_68 = local_28;
  local_64 = local_28;
  local_5c = 0;
  local_8._0_1_ = 1;
  for (local_60 = 0; local_60 < local_64[1]; local_60 = local_60 + 1) {
    puVar2 = *(undefined4 **)(*local_64 + 8 + local_60 * 0xc);
    if (((puVar2[1] != -1) || (puVar2[2] != -1)) &&
       ((*(int *)(DAT_103663bc + 0x5110) != 0 && (local_2c = FUN_101ae990(*puVar2), local_2c != 0)))
       ) {
      FUN_10188400(puVar2[1],puVar2[2],&local_18,&local_20,*(undefined4 *)(in_ECX + 0x250));
      local_18 = local_18 - *(int *)(in_ECX + 0x25c);
      iVar9 = local_20 - *(int *)(in_ECX + 0x260);
      local_20 = iVar9;
      if (((iVar5 < 9) && (0xb < local_18)) &&
         ((iVar6 = FUN_101c19e0(), local_18 <= iVar6 + -0xc &&
          ((0xb < iVar9 && (iVar6 = FUN_101c19e0(), iVar9 < iVar6 + -0xc)))))) {
        local_74 = 0;
        local_78 = 0;
        local_70 = 0;
        local_6c = 0;
        FUN_10058770(&local_78);
        (**(code **)(**(int **)(in_ECX + 0x274 + iVar5 * 4) + 0x148))
                  ((*(int *)(in_ECX + 0x80) - local_78) + local_18,
                   (*(int *)(in_ECX + 0x84) - local_74) + iVar9,0);
        (**(code **)(**(int **)(in_ECX + 0x274 + iVar5 * 4) + 0x138))();
        pFVar7 = (FString *)FUN_101b5c90(local_58);
        local_8._0_1_ = 2;
        puVar8 = FString::operator*(pFVar7);
        FString::FString(local_4c,puVar8);
        local_8._0_1_ = 3;
        FUN_10004190(local_4c,1,0);
        local_8._0_1_ = 2;
        FString::~FString(local_4c);
        local_8._0_1_ = 1;
        FString::~FString(local_58);
        iVar5 = iVar5 + 1;
        local_30 = iVar5;
      }
    }
    local_24 = local_24 + 1;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  for (; local_34 = iVar5, iVar5 < 8; iVar5 = iVar5 + 1) {
    (**(code **)(**(int **)(in_ECX + 0x274 + iVar5 * 4) + 0x13c))();
  }
  if (*(char *)(in_ECX + 0x22b) != '\0') {
    FUN_10189240(param_1);
  }
  FUN_10189340(param_1);
  if (*(int *)(in_ECX + 0x244) != 0) {
    FUN_10189490(param_1);
  }
  local_1c = FUN_101c19e0();
  iVar5 = FUN_101c19e0();
  if (0x3b < iVar5) {
    iVar5 = iVar5 + -0x3c;
    local_1c = local_1c + 1;
  }
  local_38 = iVar5;
  if (*(int *)(in_ECX + 0x294) != iVar5) {
    FUN_1003f970();
    local_8._0_1_ = 4;
    FString::FString(local_58,(ushort *)L"GameHour");
    local_8._0_1_ = 5;
    FUN_10040090(local_58,local_1c);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
    FString::FString(local_58,(ushort *)L"GameMinute");
    local_8._0_1_ = 6;
    FUN_10040090(local_58,iVar5);
    local_8._0_1_ = 4;
    FString::~FString(local_58);
    pFVar7 = local_4c;
    uVar3 = 0x762;
    FUN_10005c30(0x762,pFVar7);
    FUN_100d1790(uVar3,pFVar7);
    *(int *)(in_ECX + 0x294) = iVar5;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 101899b4 Catch@101899b4

void Catch_101899b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 101899c8 Catch@101899c8

void Catch_101899c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101899f0 FUN_101899f0

undefined4 FUN_101899f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  User *pUVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  int in_ECX;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10214d32;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar3 = *(undefined4 *)(in_ECX + 0x80);
  uVar4 = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar3 = FUN_101c19e0(uVar2);
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar4,uVar3);
  if (*(int *)(in_ECX + 0x248) != 0) {
    pUVar5 = (User *)FUN_1014dd00(0,0,0,0,0,0);
    puVar6 = User::GetName(pUVar5);
    FUN_10020bb0(&local_20,puVar6);
    iVar8 = *(int *)(in_ECX + 0x254);
    iVar10 = *(int *)(in_ECX + 600) + 10;
    iVar7 = FUN_101c19e0();
    if (iVar7 + -5 < local_20 + 0x10 + iVar8) {
      iVar8 = FUN_101c19e0();
    }
    iVar7 = FUN_101c19e0();
    if (iVar7 + -5 < local_1c + 0x10 + iVar10) {
      iVar10 = FUN_101c19e0();
    }
    piVar20 = *(int **)(in_ECX + 0xd4);
    if (piVar20 != (int *)0x0) {
      if (*piVar20 != 0) {
        FUN_10021a00(iVar8,iVar10,8,8,0,0,8,8,*piVar20,0xff,1);
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 4) != 0) {
        FUN_100218f0(iVar8 + 8,iVar10,local_20,8,*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 4),1,0xff
                    );
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 8) != 0) {
        FUN_10021a00(local_20 + 8 + iVar8,iVar10,8,8,0,0,8,8,
                     *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 8),0xff,1);
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 0xc) != 0) {
        FUN_100218f0(iVar8,iVar10 + 8,8,local_1c,*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0xc),1,
                     0xff);
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x10) != 0) {
        FUN_100218f0(iVar8 + 8,iVar10 + 8,local_20,local_1c,
                     *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x10),1,0xff);
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x14) != 0) {
        FUN_100218f0(local_20 + 8 + iVar8,iVar10 + 8,8,local_1c,
                     *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x14),1,0xff);
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x18) != 0) {
        FUN_10021a00(iVar8,local_1c + 8 + iVar10,8,8,0,0,8,8,
                     *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x18),0xff,1);
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x1c) != 0) {
        FUN_100218f0(iVar8 + 8,local_1c + 8 + iVar10,local_20,8,
                     *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x1c),1,0xff);
      }
      if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x20) != 0) {
        FUN_10021a00(local_20 + 8 + iVar8,local_1c + 8 + iVar10,8,8,0,0,8,8,
                     *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x20),0xff,1);
      }
    }
    uVar21 = 0xffffffff;
    uVar19 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar4 = 0;
    uVar3 = 0;
    pUVar5 = (User *)FUN_1014dd00(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    puVar6 = User::GetName(pUVar5);
    FUN_100217a0(iVar8 + 8,iVar10 + 8,0xffdcdcdc,puVar6,uVar3,uVar4,uVar11,uVar12,uVar13,uVar14,
                 uVar15,uVar16,uVar17,uVar18,uVar19,uVar21);
  }
  if (*(int *)(in_ECX + 0x24c) != 0) {
    iVar8 = DAT_103663bc[0x1444];
    local_18 = *(undefined4 *)(iVar8 + 100);
    local_14 = *(undefined4 *)(iVar8 + 0x68);
    local_10 = *(undefined4 *)(iVar8 + 0x6c);
    iVar8 = FUN_101c19e0(uVar2);
    iVar7 = FUN_101c19e0();
    iVar10 = FUN_101c19e0();
    if (((iVar8 != 0) || (iVar7 != 0)) || (iVar10 != 0)) {
      FUN_10188400(iVar8,iVar7,&param_1,&local_2c,*(undefined4 *)(in_ECX + 0x250));
      iVar7 = param_1 - *(int *)(in_ECX + 0x25c);
      iVar10 = local_2c - *(int *)(in_ECX + 0x260);
      puVar22 = &local_18;
      pFVar9 = (FString *)(**(code **)(*DAT_103663bc + 0x688))(puVar22);
      puStack_8 = (undefined1 *)0x0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar4 = 0;
      uVar3 = 0;
      puVar6 = FString::operator*(pFVar9);
      FUN_10020bb0(&iStack_24,puVar6,uVar3,uVar4,uVar11,uVar12,uVar13,uVar14);
      puStack_8 = (undefined1 *)0xffffffff;
      FString::~FString((FString *)&local_1c);
      iVar8 = (**(code **)(*DAT_103663bc + 0x698))();
      if (0 < iVar8) {
        uVar3 = (**(code **)(*DAT_103663bc + 0x698))(0,0,0,0,0,0);
        uVar3 = FUN_1016afa0(uVar3);
        FUN_10020bb0(&local_2c,uVar3);
      }
      if (local_2c < iStack_24) {
        local_2c = iStack_24;
      }
      iVar7 = iVar7 + -5;
      iStack_28 = iStack_28 + 2 + local_20;
      if (iVar7 < 5) {
        iVar7 = 5;
      }
      if (iVar10 + -5 < 5) {
        iVar10 = 5;
      }
      else {
        iVar10 = iVar10 + 5;
      }
      iVar8 = FUN_101c19e0();
      if (iVar8 + -5 < local_2c + 0x10 + iVar7) {
        iVar7 = (iVar8 - local_2c) + -0x15;
      }
      iVar8 = FUN_101c19e0();
      if (iVar8 + -5 < iStack_28 + 0x10 + iVar10) {
        iVar10 = (iVar8 - iStack_28) + -0x15;
      }
      piVar20 = *(int **)(in_ECX + 0xd4);
      if (piVar20 != (int *)0x0) {
        if (*piVar20 != 0) {
          FUN_10021a00(iVar7,iVar10,8,8,0,0,8,8,*piVar20,0xff,1);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 4) != 0) {
          FUN_100218f0(iVar7 + 8,iVar10,local_2c,8,*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 4),1,
                       0xff);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 8) != 0) {
          FUN_10021a00(local_2c + 8 + iVar7,iVar10,8,8,0,0,8,8,
                       *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 8),0xff,1);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 0xc) != 0) {
          FUN_100218f0(iVar7,iVar10 + 8,8,iStack_28,*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0xc),1
                       ,0xff);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x10) != 0) {
          FUN_100218f0(iVar7 + 8,iVar10 + 8,local_2c,iStack_28,
                       *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x10),1,0xff);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x14) != 0) {
          FUN_100218f0(local_2c + 8 + iVar7,iVar10 + 8,8,iStack_28,
                       *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x14),1,0xff);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x18) != 0) {
          FUN_10021a00(iVar7,iStack_28 + 8 + iVar10,8,8,0,0,8,8,
                       *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x18),0xff,1);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x1c) != 0) {
          FUN_100218f0(iVar7 + 8,iStack_28 + 8 + iVar10,local_2c,8,
                       *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x1c),1,0xff);
        }
        if (*(int *)(*(int *)(in_ECX + 0xd4) + 0x20) != 0) {
          FUN_10021a00(local_2c + 8 + iVar7,iStack_28 + 8 + iVar10,8,8,0,0,8,8,
                       *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x20),0xff,1);
        }
      }
      piVar20 = &local_1c;
      pFVar9 = (FString *)(**(code **)(*DAT_103663bc + 0x688))(piVar20);
      local_c = (void *)0x1;
      uVar21 = 0xffffffff;
      uVar19 = 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar4 = 0;
      uVar3 = 0;
      puVar6 = FString::operator*(pFVar9);
      FUN_100217a0(iVar7 + 8,iVar10 + 8,0xffdcdcdc,puVar6,uVar3,uVar4,uVar11,uVar12,uVar13,uVar14,
                   uVar15,uVar16,uVar17,uVar18,uVar19,uVar21);
      local_c = (void *)0xffffffff;
      FString::~FString((FString *)&local_20);
      uVar19 = 0xffffffff;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar4 = 0;
      uVar3 = (**(code **)(*DAT_103663bc + 0x698))(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      uVar3 = FUN_1016afa0(uVar3);
      FUN_100217a0(iVar7 + 8,iVar10 + 10 + local_1c,0xffdcdcdc,uVar3,uVar4,uVar11,uVar12,uVar13,
                   uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,piVar20,puVar22);
    }
  }
  if (*(int *)(in_ECX + 0x2ac) != 0) {
    FUN_10054680(iVar1,*(int *)(in_ECX + 0x2a8) + 0x24,*(undefined4 *)(in_ECX + 0x298),
                 *(undefined4 *)(in_ECX + 0x29c),*(undefined4 *)(in_ECX + 0x80),
                 *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                 *(undefined4 *)(in_ECX + 0x8c));
  }
  FUN_100212e0();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  ExceptionList = local_c;
  return 1;
}


// ==== 1018a1b0 FUN_1018a1b0

undefined4 FUN_1018a1b0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214d58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1e8); iVar2 = iVar2 + 1) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x1e4) + iVar2 * 4);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    if (*(int *)(in_ECX + 0x274 + iVar2 * 4) != 0) {
      *(undefined4 *)(in_ECX + 0x274 + iVar2 * 4) = 0;
    }
  }
  FUN_10054cc0();
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x1e8); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1e4),4,0);
  FUN_10187a20(0);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x200); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1fc),0xc,0);
  if (*(int *)(in_ECX + 0x2a8) != 0) {
    FUN_10059940(1);
  }
  local_8._0_1_ = 1;
  for (; iVar3 < *(int *)(in_ECX + 0x20c); iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x208) + 8 + iVar3 * 0xc);
    if (iVar2 != 0) {
      FUN_10024ca0(iVar2);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018a2f5 Catch@1018a2f5

void Catch_1018a2f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1018a309 Catch@1018a309

void Catch_1018a309(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018a330 FUN_1018a330

void FUN_1018a330(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uStack_44;
  int local_2c;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214d88;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x250) == 0) {
    local_18 = 0;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    for (local_2c = 0; local_2c < *(int *)(in_ECX + 0x20c); local_2c = local_2c + 1) {
      iVar2 = *(int *)(in_ECX + 0x208) + local_2c * 0xc;
      local_1c = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(iVar2 + 8) != 0) {
        iVar2 = FUN_10187a60(&local_1c);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != -1)) {
          piVar1 = *(int **)(*(int *)(in_ECX + 0x1e4) + local_18 * 4);
          (**(code **)(*piVar1 + 0x138))();
          (**(code **)(*piVar1 + 0xc0))
                    (*(int *)(iVar2 + 0x24) - *(int *)(in_ECX + 0x25c),
                     *(int *)(iVar2 + 0x28) - *(int *)(in_ECX + 0x260),0x1a,0x1a,0,0,3);
        }
      }
      local_18 = local_18 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d10a0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018a440 Catch@1018a440

void Catch_1018a440(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1018a454 Catch@1018a454

void Catch_1018a454(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::RefreshButtonLoc");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018a480 FUN_1018a480

void FUN_1018a480(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int in_ECX;
  float10 fVar5;
  float10 extraout_ST0;
  uint uStack_48;
  undefined1 local_38 [20];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214db0;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014b730(local_38);
  uVar1 = FUN_101c19e0();
  FUN_1014b730(local_38);
  uVar2 = FUN_101c19e0();
  FUN_1014b730(local_38);
  uVar3 = FUN_101c19e0();
  uVar1 = FUN_101881c0(uVar1,uVar2,uVar3);
  *(undefined4 *)(in_ECX + 0x250) = uVar1;
  fVar4 = (float)FUN_10187e90(uVar1);
  local_1c = fVar4;
  local_24 = (float)FUN_10187f50(*(undefined4 *)(in_ECX + 0x250));
  if ((0 < (int)fVar4) && (0 < (int)local_24)) {
    FUN_101880f0();
    FUN_10188300(&local_18,&local_20,*(undefined4 *)(in_ECX + 0x250));
    fVar5 = (float10)0.5;
    if ((float10)*(float *)(in_ECX + 0x88) * fVar5 <= (float10)(int)local_18) {
      local_1c = (float)(int)local_1c;
      local_18 = (float)(int)local_18;
      uVar1 = FUN_101c19e0();
      *(undefined4 *)(in_ECX + 0x25c) = uVar1;
      fVar5 = extraout_ST0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x25c) = 0;
      local_18 = (float)(int)local_18;
    }
    if (fVar5 * (float10)*(float *)(in_ECX + 0x8c) <= (float10)(int)local_20) {
      local_24 = (float)(int)local_24;
      local_20 = (float)(int)local_20;
      uVar1 = FUN_101c19e0();
      *(undefined4 *)(in_ECX + 0x260) = uVar1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x260) = 0;
      local_20 = (float)(int)local_20;
    }
    FUN_10188ba0(*(undefined4 *)(in_ECX + 0x250));
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018a64b Catch@1018a64b

void Catch_1018a64b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1018a65f Catch@1018a65f

void Catch_1018a65f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::InitPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018a680 FUN_1018a680

void FUN_1018a680(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  float10 extraout_ST0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 != 0.0) || (param_2 != 0.0)) || (param_3 != 0)) {
    iVar1 = FUN_101881c0(param_1,param_2,param_3);
    if (param_4 == 0) {
      if (*(int *)(in_ECX + 0x250) == 0) {
        *(undefined4 *)(in_ECX + 0x264) = *(undefined4 *)(in_ECX + 0x25c);
        *(undefined4 *)(in_ECX + 0x268) = *(undefined4 *)(in_ECX + 0x260);
      }
      *(int *)(in_ECX + 0x250) = iVar1;
    }
    else if (*(int *)(in_ECX + 0x250) != iVar1) {
      *(undefined4 *)(in_ECX + 0x250) = 0;
    }
    iVar1 = FUN_10187e90(*(undefined4 *)(in_ECX + 0x250));
    param_4 = iVar1;
    iVar2 = FUN_10187f50(*(undefined4 *)(in_ECX + 0x250));
    if ((0 < iVar1) && (0 < iVar2)) {
      FUN_101880f0();
      FUN_10188010(&param_1,&param_2,&param_3,1,*(undefined4 *)(in_ECX + 0x250));
      if (param_5 != 0) {
        param_1 = (float)(((int)param_1 / 0x3d) * 0x3d + 0x1e);
        param_2 = (float)(((int)param_2 / 0x3d) * 0x3d + 0x1e);
      }
      fVar4 = (float10)0.5;
      if ((float10)*(float *)(in_ECX + 0x88) * fVar4 <= (float10)(int)param_1) {
        param_1 = (float)param_4;
        uVar3 = FUN_101c19e0();
        *(undefined4 *)(in_ECX + 0x25c) = uVar3;
        fVar4 = extraout_ST0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x25c) = 0;
        param_1 = (float)(int)param_1;
      }
      if (fVar4 * (float10)*(float *)(in_ECX + 0x8c) <= (float10)(int)param_2) {
        param_2 = (float)iVar2;
        uVar3 = FUN_101c19e0();
        *(undefined4 *)(in_ECX + 0x260) = uVar3;
      }
      else {
        *(undefined4 *)(in_ECX + 0x260) = 0;
        param_2 = (float)(int)param_2;
      }
      FUN_10188ba0(*(undefined4 *)(in_ECX + 0x250));
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018a89a Catch@1018a89a

void Catch_1018a89a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1018a8ae Catch@1018a8ae

void Catch_1018a8ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::AdjustMapView");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018a8d0 FUN_1018a8d0

undefined4 FUN_1018a8d0(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214df0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = &uStack_38;
  if (in_ECX[0x94] != 0) {
    in_ECX[0x94] = 0;
    in_ECX[0x97] = in_ECX[0x99];
    in_ECX[0x98] = in_ECX[0x9a];
    FUN_1014b730(local_28);
    uVar2 = FUN_101c19e0();
    FUN_1014b730(local_28);
    uVar3 = FUN_101c19e0();
    FUN_1014b730(local_28);
    uVar4 = FUN_101c19e0();
    FUN_1018a680(uVar2,uVar3,uVar4,1,0);
    FUN_10188ba0(in_ECX[0x94]);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  (**(code **)(*in_ECX + 0x78))();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018a9b2 Catch@1018a9b2

void Catch_1018a9b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018a9c6 Catch@1018a9c6

void Catch_1018a9c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::ReduceBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018a9f0 FUN_1018a9f0

undefined4 FUN_1018a9f0(float param_1)

{
  int *piVar1;
  uint *puVar2;
  uint3 uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  undefined4 uVar7;
  FString *pFVar8;
  uint uStack_5c;
  FString local_3c [20];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214e21;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  iVar4 = 0;
  if (0x1f < (int)param_1 - 0xb01000U) {
    return 0;
  }
  local_8._1_3_ = 0;
  uVar3 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  for (local_1c = 0; local_1c < (int)((int)param_1 - 0xb01000U); local_1c = local_1c + 1) {
    iVar4 = iVar4 + 1;
  }
  ExceptionList = &local_10;
  puVar2 = &uStack_5c;
  if (in_ECX[0x83] <= iVar4) goto LAB_1018ac7e;
  piVar1 = (int *)(in_ECX[0x82] + 4 + iVar4 * 0xc);
  iVar4 = FUN_10187a60(piVar1);
  puVar2 = (uint *)local_14;
  uVar3 = local_8._1_3_;
  if (iVar4 == 0) goto LAB_1018ac7e;
  in_ECX[0x94] = *piVar1;
  in_ECX[0x99] = in_ECX[0x97];
  in_ECX[0x9a] = in_ECX[0x98];
  for (iVar5 = 0; local_20 = iVar5, iVar5 < in_ECX[0x7a]; iVar5 = iVar5 + 1) {
    (**(code **)(**(int **)(in_ECX[0x79] + iVar5 * 4) + 0x13c))();
  }
  FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 2;
  pFVar8 = local_3c;
  uVar7 = 0x74e;
  FUN_10005c30(0x74e,pFVar8);
  FUN_100d1790(uVar7,pFVar8);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  FUN_1014b730(local_3c);
  param_1 = (float)FUN_101c19e0();
  FUN_1014b730(local_3c);
  local_18 = FUN_101c19e0();
  iVar5 = FUN_10187e90(in_ECX[0x94]);
  local_24 = iVar5;
  local_28 = FUN_10187f50(in_ECX[0x94]);
  if ((iVar5 < 1) || (local_28 < 1)) {
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100d10a0();
    ExceptionList = local_10;
    return 0;
  }
  FUN_10187c10(&param_1,&local_18,in_ECX[0x94]);
  if (((((int)param_1 < 0) || (*(int *)(iVar4 + 0x34) < (int)param_1)) || (local_18 < 0)) ||
     (*(int *)(iVar4 + 0x38) < local_18)) {
    in_ECX[0x97] = 0;
LAB_1018ac6f:
    in_ECX[0x98] = 0;
  }
  else {
    fVar6 = (float10)0.5;
    if ((float10)(float)in_ECX[0x22] * fVar6 <= (float10)(int)param_1) {
      param_1 = (float)local_24;
      iVar4 = FUN_101c19e0();
      in_ECX[0x97] = iVar4;
      fVar6 = extraout_ST0;
    }
    else {
      in_ECX[0x97] = 0;
    }
    param_1 = (float)local_18;
    if ((float10)local_18 < fVar6 * (float10)(float)in_ECX[0x23]) goto LAB_1018ac6f;
    param_1 = (float)local_28;
    if ((float10)local_18 <= (float10)local_28 - fVar6 * (float10)(float)in_ECX[0x23]) {
      iVar4 = FUN_101c19e0();
      in_ECX[0x98] = iVar4;
    }
    else {
      iVar4 = FUN_101c19e0();
      in_ECX[0x98] = iVar4;
    }
  }
  (**(code **)(*in_ECX + 0x78))();
  puVar2 = (uint *)local_14;
  uVar3 = local_8._1_3_;
LAB_1018ac7e:
  local_8._1_3_ = uVar3;
  local_14 = (undefined1 *)puVar2;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100d10a0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018acb4 Catch@1018acb4

void Catch_1018acb4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1018acc8 Catch@1018acc8

void Catch_1018acc8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::OnBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018acf0 FUN_1018acf0

void FUN_1018acf0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10214e51;
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


// ==== 1018ad60 FUN_1018ad60

void FUN_1018ad60(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214e78;
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
  FUN_10188950();
  ExceptionList = local_c;
  return;
}


// ==== 1018ade0 FUN_1018ade0

void FUN_1018ade0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214ea9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_101889f0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1018ae40 FUN_1018ae40

void FUN_1018ae40(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214ed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2b4); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2b0),0x20,0);
  FUN_10188ad0(0xc3fc,0x9e0b,0x3d4e7,0x3afad,0xffffecf6,0xffffe526,100,0x9ae);
  FUN_10188ad0(0xffff63c0,0xffff1d70,0xfffc6620,0xfffc1800,0xfffff13c,0xffffdcd8,0x36b,0x7f2);
  FUN_10188ad0(0xffffe638,0xffff9688,0xfffc5e50,0xfffc1fd0,0xfffff13c,0xffffdcd8,0x412,0x6a8);
  FUN_10188ad0(24000,8000,0xfffc4ac8,0xfffc2f70,0xfffff13c,0xffffd8f0,0x4cd,0x6c3);
  FUN_10188ad0(0xffffdf6c,0xffffa014,0xffff77ff,0xffff203a,0xffffdc2a,0xffffd576,0x34a,0x41d);
  FUN_10188ad0(0xffff0000,0xfffe8000,0xfffcffff,0xfffc7fff,0,0xffffec78,0x228,0x4b3);
  FUN_10188ad0(0xffff0000,0xfffe8000,0xfffc7fff,0xfffbffff,0,0xffffec78,0x228,0x4b3);
  FUN_10188ad0(0xfffe8000,0xfffe0000,0xfffcffff,0xfffc7fff,0,0xffffec78,0x228,0x4b3);
  ExceptionList = local_10;
  return;
}


// ==== 1018b018 Catch@1018b018

void Catch_1018b018(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1018b02c Catch@1018b02c

void Catch_1018b02c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::InitExceptForLocationList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018b050 FUN_1018b050

void FUN_1018b050(void)

{
  int iVar1;
  int iVar2;
  UPackage *pUVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  FString *pFVar7;
  undefined4 uVar8;
  int in_ECX;
  uint uStack_29c;
  FString local_28c [16];
  FString local_27c [12];
  undefined1 *local_270;
  FString local_26c [12];
  FString local_260 [16];
  int *local_250;
  int *local_24c;
  int local_248;
  undefined4 local_244;
  int *local_240;
  int local_23c;
  int *local_238;
  int *local_234;
  int local_230;
  undefined4 local_22c;
  undefined4 *local_228;
  int local_224;
  undefined4 *local_220;
  uint local_21c;
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  int local_20c;
  ushort local_208 [256];
  uint local_8;
  
  puStack_210 = &LAB_10214f5b;
  local_214 = ExceptionList;
  uStack_29c = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_29c;
  ExceptionList = &local_214;
  local_21c = 0;
  local_238 = *(int **)(GL2GameData_exref + 0x7f9cc);
  local_22c = 0;
  local_20c._0_1_ = 1;
  local_20c._1_3_ = 0;
  local_230 = 0;
  local_234 = local_238;
  local_8 = uStack_29c;
  while (iVar2 = local_230, local_230 < local_234[1]) {
    local_220 = *(undefined4 **)(local_230 * 0xc + 8 + *local_234);
    if (local_220 == (undefined4 *)0x0) {
      appFailAssert("pZoneNameInfo",".\\Src\\NMinimapWnd.cpp",0x10a);
    }
    iVar1 = FString::operator!=((FString *)(local_220 + 0x10),(ushort *)&DAT_1022f9f8);
    if (iVar1 != 0) {
      local_228 = (undefined4 *)FUN_10004ed0();
      local_220 = local_228;
      if (local_228 == (undefined4 *)0x0) {
        appFailAssert("pTownMapInfo",".\\Src\\NMinimapWnd.cpp",0x10f);
      }
      *local_220 = 0;
      FUN_10087320();
    }
    local_230 = iVar2 + 1;
  }
  local_20c._0_1_ = 0;
  FUN_100d10a0();
  FString::FString(local_260);
  local_20c._0_1_ = 2;
  FString::FString(local_26c);
  local_20c = CONCAT31(local_20c._1_3_,3);
  appSprintf(local_208,(ushort *)L"%s_TownMap");
  iVar2 = (**(code **)(**(int **)GConfig_exref + 0xc))();
  if (iVar2 == 0) {
    FString::operator=(local_26c,(ushort *)L"L2Font.TownMap");
  }
  local_224 = 0;
  local_250 = (int *)(in_ECX + 0x208);
  local_244 = 0;
  local_20c._0_1_ = 4;
  local_248 = 0;
  local_24c = local_250;
  while (iVar2 = local_248, local_248 < local_24c[1]) {
    iVar1 = *local_24c + local_248 * 0xc;
    local_220 = *(undefined4 **)(iVar1 + 4);
    local_228 = *(undefined4 **)(iVar1 + 8);
    if ((local_228 != (undefined4 *)0x0) && (iVar1 = FUN_10187a60(), iVar1 != 0)) {
      if (*(int *)(iVar1 + 0x24) != -1) {
        local_270 = &stack0xfffffd4c;
        FName::FName((FName *)&stack0xfffffd4c,0);
        pUVar3 = UObject::GetTransientPackage();
        iVar2 = FUN_1000a130(0x33c,pUVar3);
        if (iVar2 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          FString::FString(local_28c,(ushort *)L"L2UI_CH3.Minimap.MapButton_ZoomIn2");
          local_20c = CONCAT31(local_20c._1_3_,5);
          local_21c = local_21c | 1;
          FString::FString(local_27c,(ushort *)L"L2UI_CH3.Minimap.MapButton_ZoomIn1");
          local_20c = 6;
          local_21c = local_21c | 2;
          piVar4 = (int *)FUN_10006980(local_27c);
        }
        local_20c = 5;
        local_240 = piVar4;
        if ((local_21c & 2) != 0) {
          local_21c = local_21c & 0xfffffffd;
          FString::~FString(local_27c);
        }
        local_20c._0_1_ = 4;
        local_20c._1_3_ = 0;
        if ((local_21c & 1) != 0) {
          local_21c = local_21c & 0xfffffffe;
          FString::~FString(local_28c);
        }
        piVar4[0x73] = local_224 + 0xb01000;
        FUN_10060d40();
        FUN_1005c1e0();
        (**(code **)(*piVar4 + 0xc0))
                  (*(int *)(iVar1 + 0x24) - *(int *)(in_ECX + 0x25c),
                   *(int *)(iVar1 + 0x28) - *(int *)(in_ECX + 0x260),0x1a,0x1a,0);
        FUN_100d9a30();
      }
      iVar5 = FString::operator!=((FString *)(iVar1 + 0x40),(ushort *)&DAT_1022f9f8);
      iVar2 = local_248;
      if (iVar5 != 0) {
        uVar8 = *(undefined4 *)(iVar1 + 0x40);
        puVar6 = FString::operator*(local_26c);
        pFVar7 = (FString *)FString::Printf((ushort *)&local_234,L"%s.%s",puVar6,uVar8);
        local_20c._0_1_ = 7;
        FString::operator*(pFVar7);
        uVar8 = FUN_1003f630();
        *local_228 = uVar8;
        local_20c._0_1_ = 4;
        FString::~FString((FString *)&local_234);
        iVar2 = local_248;
      }
    }
    local_224 = local_224 + 1;
    local_248 = iVar2 + 1;
  }
  local_20c = CONCAT31(local_20c._1_3_,3);
  FUN_100d10a0();
  appSprintf(local_208,(ushort *)L"%s_minimap");
  iVar2 = (**(code **)(**(int **)GConfig_exref + 0xc))(GCountryName_exref,local_208);
  if (iVar2 == 0) {
    FString::operator=(local_260,(ushort *)L"L2Font.Minimap.ch4_worldmap");
  }
  iVar2 = 0;
  while (local_23c = iVar2, iVar2 < 6) {
    iVar1 = iVar2 + 1;
    puVar6 = FString::operator*(local_260);
    pFVar7 = (FString *)FString::Printf((ushort *)&local_234,L"%s%d",puVar6,iVar1);
    local_20c._0_1_ = 8;
    uVar8 = 1;
    puVar6 = FString::operator*(pFVar7);
    uVar8 = FUN_1003f630(puVar6,uVar8);
    *(undefined4 *)(in_ECX + 0x1cc + iVar2 * 4) = uVar8;
    local_20c = CONCAT31(local_20c._1_3_,3);
    FString::~FString((FString *)&local_234);
    iVar2 = iVar2 + 1;
  }
  local_20c._0_1_ = 2;
  FString::~FString(local_26c);
  local_20c = (uint)local_20c._1_3_ << 8;
  FString::~FString(local_260);
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 1018b4b7 Catch@1018b4b7

void Catch_1018b4b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_102a47f0);
}


// ==== 1018b4cb Catch@1018b4cb

void Catch_1018b4cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::InitializeMapDisplay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018b4f0 FUN_1018b4f0

undefined4 FUN_1018b4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uStack_3c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10214f90;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = 0;
  FUN_10189060(param_1,param_2,&local_18,&local_20);
  FUN_10189060(param_3,param_4,&local_1c,&local_24);
  if ((local_18 == local_1c) && (local_20 == local_24)) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1018b59b Catch@1018b59b

void Catch_1018b59b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1018b5af Catch@1018b5af

void Catch_1018b5af(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::IsOverlapped");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018b5d0 FUN_1018b5d0

undefined4 FUN_1018b5d0(int *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_7c;
  int local_68;
  int local_64;
  FString local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10214fc1;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar7 = (int)(short)param_2 - *(int *)(in_ECX + 0x80);
  iVar9 = (int)(short)((uint)param_2 >> 0x10) - *(int *)(in_ECX + 0x84);
  param_1 = (int *)((uint)param_1 & 1);
  param_2 = iVar9;
  local_18 = iVar7;
  puVar2 = &uStack_7c;
  if ((((param_1 != (int *)0x0) && (puVar2 = &uStack_7c, 0 < iVar7)) &&
      (iVar3 = FUN_101c19e0(), puVar2 = (uint *)local_14, iVar7 <= iVar3)) &&
     ((0 < iVar9 && (iVar3 = FUN_101c19e0(), puVar2 = (uint *)local_14, iVar9 <= iVar3)))) {
    uVar10 = *(int *)(in_ECX + 0x26c) - iVar7;
    uVar8 = *(int *)(in_ECX + 0x270) - param_2;
    param_1 = (int *)FUN_10187e90(*(undefined4 *)(in_ECX + 0x250));
    local_20 = FUN_10187f50(*(undefined4 *)(in_ECX + 0x250));
    if ((int)uVar10 < 1) {
      piVar1 = (int *)(in_ECX + 0x25c);
      *piVar1 = *piVar1 - ((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f));
      if (*piVar1 < 0) {
        *(undefined4 *)(in_ECX + 0x25c) = 0;
      }
    }
    else {
      *(int *)(in_ECX + 0x25c) = *(int *)(in_ECX + 0x25c) + uVar10;
      local_1c = *(int *)(in_ECX + 0x25c);
      if ((float)(int)param_1 - *(float *)(in_ECX + 0x88) < (float)local_1c) {
        uVar4 = FUN_101c19e0();
        *(undefined4 *)(in_ECX + 0x25c) = uVar4;
      }
    }
    if ((int)uVar8 < 1) {
      piVar1 = (int *)(in_ECX + 0x260);
      *piVar1 = *piVar1 - ((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f));
      if (*piVar1 < 0) {
        *(undefined4 *)(in_ECX + 0x260) = 0;
      }
    }
    else {
      *(int *)(in_ECX + 0x260) = *(int *)(in_ECX + 0x260) + uVar8;
      param_1 = *(int **)(in_ECX + 0x260);
      if ((float)local_20 - *(float *)(in_ECX + 0x8c) < (float)(int)param_1) {
        uVar4 = FUN_101c19e0();
        *(undefined4 *)(in_ECX + 0x260) = uVar4;
      }
    }
    FUN_1018a330();
    iVar7 = local_18;
    iVar9 = param_2;
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  if (((0xb < *(int *)(in_ECX + 0x254)) &&
      (iVar3 = FUN_101c19e0(), *(int *)(in_ECX + 0x254) <= iVar3 + -0xc)) &&
     (0xb < *(int *)(in_ECX + 600))) {
    iVar5 = FUN_101c19e0();
    iVar3 = *(int *)(in_ECX + 600);
    if ((((iVar3 < iVar5 + -0xc) && (*(int *)(in_ECX + 0x254) + -10 <= iVar7)) &&
        (iVar7 <= *(int *)(in_ECX + 0x254) + 10)) &&
       ((iVar3 + -10 <= iVar9 && (iVar9 <= iVar3 + 10)))) {
      *(undefined4 *)(in_ECX + 0x248) = 1;
      goto LAB_1018b7c6;
    }
  }
  *(undefined4 *)(in_ECX + 0x248) = 0;
LAB_1018b7c6:
  if (*(int *)(in_ECX + 0x250) == 0) {
    param_1 = (int *)0xfffffc19;
    local_24 = (int *)(in_ECX + 0x21c);
    for (iVar3 = 0; iVar9 = param_2, iVar3 < local_24[1]; iVar3 = iVar3 + 1) {
      FUN_101870b0(*local_24 + iVar3 * 0x28);
      local_8._0_1_ = 1;
      iVar9 = local_68 - *(int *)(in_ECX + 0x25c);
      iVar5 = local_64 - *(int *)(in_ECX + 0x260);
      if (((iVar9 <= iVar7) && (iVar7 < iVar9 + 0x3d)) &&
         ((iVar5 <= param_2 && (iVar7 = local_18, param_2 < iVar5 + 0x3d)))) {
        *(int *)(in_ECX + 0x298) = iVar9;
        *(int *)(in_ECX + 0x29c) = iVar5;
        *(undefined4 *)(in_ECX + 0x2a0) = 0x42740000;
        *(undefined4 *)(in_ECX + 0x2a4) = 0x42740000;
        FUN_10054cc0();
        puVar6 = FString::operator*(local_50);
        FString::FString((FString *)&local_38,puVar6);
        local_8._0_1_ = 2;
        FUN_101b8ab0(&local_38,*(int *)(in_ECX + 0x2a8) + 0x24,0);
        local_8._0_1_ = 1;
        FString::~FString((FString *)&local_38);
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar4 = 0;
        puVar6 = FString::operator*(local_50);
        FUN_10020bb0(&local_24,puVar6,uVar4,uVar11,uVar12,uVar13,uVar14,uVar15);
        if ((int)param_1 < (int)local_24) {
          param_1 = local_24;
        }
        *(float *)(*(int *)(in_ECX + 0x2a8) + 0x30) = (float)(int)param_1;
        *(undefined4 *)(in_ECX + 0x2ac) = 1;
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10187540();
        iVar7 = local_18;
        iVar9 = param_2;
        break;
      }
      *(undefined4 *)(in_ECX + 0x2ac) = 0;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10187540();
    }
  }
  if (*(int *)(in_ECX + 0x244) != 0) {
    iVar7 = *(int *)(DAT_103663bc + 0x5110);
    local_38 = *(undefined4 *)(iVar7 + 100);
    local_34 = *(undefined4 *)(iVar7 + 0x68);
    local_30 = *(undefined4 *)(iVar7 + 0x6c);
    uVar4 = FUN_101c19e0();
    local_44 = uVar4;
    uVar11 = FUN_101c19e0();
    local_40 = uVar11;
    local_3c = FUN_101c19e0();
    FUN_10188400(uVar4,uVar11,&param_1,&local_1c,*(undefined4 *)(in_ECX + 0x250));
    iVar9 = (int)param_1 - *(int *)(in_ECX + 0x25c);
    iVar7 = local_1c - *(int *)(in_ECX + 0x260);
    if ((((iVar9 < 5) ||
         (param_1 = (int *)iVar9, local_1c = iVar7, iVar3 = FUN_101c19e0(), iVar3 + -5 < iVar9)) ||
        (iVar7 < 5)) ||
       (((iVar3 = FUN_101c19e0(), iVar3 + -5 <= iVar7 || (local_18 < iVar9)) ||
        ((iVar9 + 0x14 < local_18 || ((param_2 < iVar7 + -0x14 || (iVar7 < param_2)))))))) {
      *(undefined4 *)(in_ECX + 0x24c) = 0;
      iVar7 = local_18;
      iVar9 = param_2;
    }
    else {
      *(undefined4 *)(in_ECX + 0x24c) = 1;
      iVar7 = local_18;
      iVar9 = param_2;
    }
  }
  *(int *)(in_ECX + 0x26c) = iVar7;
  *(int *)(in_ECX + 0x270) = iVar9;
  ExceptionList = local_10;
  return 1;
}


// ==== 1018ba34 Catch@1018ba34

void Catch_1018ba34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1018ba48 Catch@1018ba48

void Catch_1018ba48(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMinimapWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018ba70 FUN_1018ba70

void FUN_1018ba70(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10214fe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1018ad60(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1018bac0 FUN_1018bac0

undefined4 FUN_1018bac0(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  UPackage *pUVar4;
  UObject *pUVar5;
  int in_ECX;
  undefined4 *puVar6;
  int iVar7;
  int local_30;
  FString aFStack_2c [12];
  FString aFStack_20 [12];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1021504f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar2 = false;
  bVar1 = false;
  local_30 = 0;
  FUN_10061b40(DAT_103554c4 ^ (uint)&stack0xffffffc0);
  uVar3 = FUN_1003f630(L"L2UI.MinimapWnd.MinimapPos",1);
  *(undefined4 *)(in_ECX + 0x234) = uVar3;
  uVar3 = FUN_1003f630(L"L2UI.MinimapWnd.TargetPos",1);
  *(undefined4 *)(in_ECX + 0x238) = uVar3;
  uVar3 = FUN_1003f630(L"L2UI_CH3.Minimap.MapIcon_Mark",1);
  *(undefined4 *)(in_ECX + 0x23c) = uVar3;
  *(undefined4 *)(in_ECX + 0x2ac) = 0;
  local_30 = (**(code **)**(undefined4 **)GMalloc_exref)(0x60,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (local_30 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10055020();
  }
  local_c = (void *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x2a8) = uVar3;
  puVar6 = (undefined4 *)(in_ECX + 0x274);
  iVar7 = 8;
  do {
    FName::FName((FName *)&local_30,0);
    pUVar4 = UObject::GetTransientPackage();
    pUVar5 = UObject::StaticAllocateObject
                       (&DAT_10357870,pUVar4,local_30,0,0,*(undefined4 *)GError_exref,0,0);
    if (pUVar5 == (UObject *)0x0) {
      uVar3 = 0;
    }
    else {
      FString::FString(aFStack_20,(ushort *)L"L2UI_CH3.Minimap.minimap_party");
      local_c = (void *)0x1;
      FString::FString(aFStack_2c,(ushort *)L"L2UI_CH3.Minimap.minimap_party");
      local_c = (void *)0x2;
      bVar2 = true;
      bVar1 = true;
      uVar3 = FUN_10006980(aFStack_2c,aFStack_20,2);
    }
    *puVar6 = uVar3;
    local_c = (void *)0x1;
    if (bVar1) {
      bVar1 = false;
      FString::~FString(aFStack_2c);
    }
    local_c = (void *)0xffffffff;
    if (bVar2) {
      bVar2 = false;
      FString::~FString(aFStack_20);
    }
    (**(code **)(*(int *)*puVar6 + 0xc0))(0,0,0x10,0x10,0,0,3);
    uVar3 = FUN_10060d40(*puVar6,0x22);
    FUN_1005c1e0(uVar3);
    (**(code **)(*(int *)*puVar6 + 0x13c))();
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_1018ae40();
  FUN_1018b050();
  ExceptionList = pvStack_14;
  return 1;
}


// ==== 1018bcc0 FUN_1018bcc0

void FUN_1018bcc0(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215101;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCMinimapWnd::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x79));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x7c));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x7f));
  local_4._0_1_ = 6;
  FUN_1018acf0();
  local_4._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x87));
  local_4 = CONCAT31(local_4._1_3_,10);
  in_ECX[0x8d] = 0;
  in_ECX[0xa8] = 0;
  in_ECX[0xa9] = 0;
  in_ECX[0xa7] = 0;
  in_ECX[0xa6] = 0;
  FArray::FArray((FArray *)(in_ECX + 0xac));
  *(undefined1 *)(in_ECX + 0x8a) = param_1;
  *(undefined1 *)((int)in_ECX + 0x229) = param_2;
  *(undefined1 *)((int)in_ECX + 0x22a) = param_3;
  in_ECX[0x95] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x97] = 0;
  in_ECX[0x98] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0x9a] = 0;
  in_ECX[0x94] = 0;
  in_ECX[0x91] = 0;
  in_ECX[0x92] = 0;
  in_ECX[0x93] = 0;
  *(undefined1 *)((int)in_ECX + 0x22b) = param_4;
  *(undefined1 *)(in_ECX + 0x8b) = param_5;
  *(undefined1 *)((int)in_ECX + 0x22d) = param_6;
  in_ECX[0xa5] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1018be40 FUN_1018be40

void FUN_1018be40(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10215184;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCMinimapWnd::vftable;
  local_4 = 6;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 5;
  FUN_101888b0(uVar1);
  local_4._0_1_ = 4;
  FUN_1018ade0();
  local_4._0_1_ = 3;
  FUN_1018ad60();
  local_4._0_1_ = 2;
  FUN_100430c0();
  local_4._0_1_ = 1;
  FUN_10188850();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_101887b0();
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 1018bf10 FUN_1018bf10

void FUN_1018bf10(byte param_1)

{
  void *in_ECX;
  
  FUN_1018be40();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,700);
  }
  return;
}


// ==== 1018bf60 FUN_1018bf60

bool FUN_1018bf60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_101852b0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 1018bfc0 FUN_1018bfc0

undefined4 FUN_1018bfc0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102151a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_10185300(param_2 & 0xffff,param_2 >> 0x10);
  *(undefined4 *)(in_ECX + 0x280) = uVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 1018c032 Catch@1018c032

void Catch_1018c032(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018c046 Catch@1018c046

void Catch_1018c046(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSView_InvenItemWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018c070 FUN_1018c070

undefined4 FUN_1018c070(undefined4 param_1,uint param_2)

{
  int iVar1;
  UObject *pUVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102151c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0x93] = 0;
  iVar1 = FUN_10185300(param_2 & 0xffff,param_2 >> 0x10);
  in_ECX[0x9f] = iVar1;
  if ((-1 < iVar1) && (iVar1 < in_ECX[0x91])) {
    (**(code **)(*in_ECX + 0x1ac))(param_1,param_2);
  }
  pUVar2 = UObject::LoadPackage((UObject *)0x0,(ushort *)L"LineageEffect",2,0);
  if (pUVar2 == (UObject *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  }
  in_ECX[0x93] = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1018c137 Catch@1018c137

void Catch_1018c137(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018c14b Catch@1018c14b

void Catch_1018c14b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSView_InvenItemWnd::OnLButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018c170 FUN_1018c170

bool FUN_1018c170(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xf5) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf6) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf4) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf3) {
      iVar1 = (**(code **)(*in_ECX + 0x200))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1018c240 FUN_1018c240

void FUN_1018c240(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  void *local_dc;
  undefined1 *puStack_d8;
  undefined4 local_d4;
  ushort local_d0 [100];
  uint local_8;
  
  puStack_d8 = &LAB_102151e0;
  local_dc = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_d0;
  ExceptionList = &local_dc;
  local_d4 = 0;
  for (iVar5 = 0; iVar5 < 0x14; iVar5 = iVar5 + 1) {
    iVar1 = iVar5 * 0x314 + in_ECX;
    _memset((void *)(iVar1 + 0x208),0,0x314);
    *(undefined4 *)(iVar1 + 0x254) = (&DAT_10352448)[iVar5 * 3];
    *(undefined4 *)(iVar1 + 600) = (&DAT_1035244c)[iVar5 * 3];
    *(undefined4 *)(iVar1 + 0x25c) = (&DAT_10352450)[iVar5 * 3];
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b104));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b104));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b3d0(local_d0);
  local_d4 = 0xffffffff;
  ExceptionList = local_dc;
  __security_check_cookie(local_8 ^ (uint)local_d0);
  return;
}


// ==== 1018c986 Catch@1018c986

void Catch_1018c986(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018c99a Catch@1018c99a

void Catch_1018c99a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::AddAllCharacter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018c9c0 FUN_1018c9c0

undefined4 FUN_1018c9c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x20) == 0) || (uVar1 = 2, *(int *)(param_1 + 0x20) == 1)) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== 1018c9f0 FUN_1018c9f0

undefined4 FUN_1018c9f0(int param_1)

{
  int *in_ECX;
  
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x1f8))();
  }
  return 1;
}


// ==== 1018ca10 FUN_1018ca10

void FUN_1018ca10(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 1018ca9d Catch@1018ca9d

void Catch_1018ca9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018cab1 Catch@1018cab1

void Catch_1018cab1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018cad0 FUN_1018cad0

void FUN_1018cad0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215230;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x13c))();
  }
  FUN_1005ff00();
  ExceptionList = local_10;
  return;
}


// ==== 1018cb3d Catch@1018cb3d

void Catch_1018cb3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018cb51 Catch@1018cb51

void Catch_1018cb51(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018cb70 FUN_1018cb70

void FUN_1018cb70(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x138))();
  }
  FUN_1005fe50();
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x1f8))();
  ExceptionList = local_10;
  return;
}


// ==== 1018cbed Catch@1018cbed

void Catch_1018cbed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018cc01 Catch@1018cc01

void Catch_1018cc01(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018cc20 FUN_1018cc20

bool FUN_1018cc20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x1f04) {
      iVar1 = (**(code **)(*in_ECX + 500))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x1f05) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1018cca0 FUN_1018cca0

UObject * FUN_1018cca0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = USkillVisualEffect::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1018ccd0 FUN_1018ccd0

UObject * FUN_1018ccd0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = USkeletalMeshInstance::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1018cd00 FUN_1018cd00

void FUN_1018cd00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a7170,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1018cd30 FUN_1018cd30

void FUN_1018cd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a6710,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1018cd60 FUN_1018cd60

void FUN_1018cd60(FString *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  ushort local_84;
  undefined1 local_82 [126];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_84;
  *(undefined4 *)(param_2 + 0xe14) = *(undefined4 *)(param_1 + 0x18);
  puVar1 = FString::operator*(param_1);
  appStrcpy(param_2,puVar1);
  dVar5 = (double)*(float *)(param_1 + 0x34);
  puVar1 = L2FName::operator*((L2FName *)(param_1 + 0x40));
  appSprintf(param_2 + 0x100,(ushort *)L"Lv.%d %s %1.1f",*(undefined4 *)(param_1 + 0x1c),puVar1,
             dVar5);
  puVar1 = param_2 + 0x200;
  puVar2 = L2FName::operator*((L2FName *)(param_1 + 0x48));
  appStrcpy(puVar1,puVar2);
  iVar3 = FUN_1003f630(puVar1,0);
  *(int *)(param_2 + 0xe02) = iVar3;
  if (iVar3 == 0) {
    appStrcpy(puVar1,(ushort *)L"Icon.NoImage");
    uVar4 = FUN_1003f630(L"Icon.NoImage",1);
    *(undefined4 *)(param_2 + 0xe02) = uVar4;
  }
  *(undefined4 *)(param_2 + 0xe3c) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = FUN_1018c9c0();
  *(int *)(param_2 + 0xe1c) = iVar3;
  local_84 = 0;
  _memset(local_82,0,0x7e);
  if (iVar3 == 0) {
    puVar1 = (ushort *)&DAT_1028ee68;
  }
  else if (iVar3 == 1) {
    puVar1 = (ushort *)&DAT_10231ac0;
  }
  else {
    if (iVar3 != 2) goto LAB_1018ce8b;
    puVar1 = (ushort *)&DAT_1024ce88;
  }
  appStrcpy(&local_84,puVar1);
LAB_1018ce8b:
  puVar1 = FString::operator*(param_1 + 0xc);
  appSprintf(param_2 + 0x500,(ushort *)L"[%s] ID=%d\\n%s",&local_84,*(undefined4 *)(param_1 + 0x18),
             puVar1);
  __security_check_cookie(local_4 ^ (uint)&local_84);
  return;
}


// ==== 1018ced0 FUN_1018ced0

undefined4 FUN_1018ced0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215270;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_10021a00(0,100,0xf0,300,0,0,0xf0,300,*(int *)(in_ECX + 0x1e4),0xff,1);
  }
  if (*(int *)(in_ECX + 0x1e8) != 0) {
    FUN_10021970(0,0,0xf0,100,0,0,300,0x3c,*(int *)(in_ECX + 0x1e8),0xff);
  }
  FUN_10020bb0(&local_24,&DAT_1028eee4,0,0,0,0,0,0);
  FUN_100217a0((0x37 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1e,0xffdcdcdc,&DAT_1028eee4,0,0,0
               ,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,&DAT_1028eed8,0,0,0,0,0,0);
  FUN_100217a0((0x37 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x37,0xffdcdcdc,&DAT_1028eed8,0,0,0
               ,0,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018d085 Catch@1018d085

void Catch_1018d085(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018d099 Catch@1018d099

void Catch_1018d099(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018d0c0 FUN_1018d0c0

undefined4 FUN_1018d0c0(uint param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 < 4) && (*(int *)(in_ECX + 0x1cc + param_1 * 4) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x1cc + param_1 * 4) + 0x204))(param_2);
    iVar1 = *(int *)(in_ECX + 0x1cc + param_1 * 4);
    *(int *)(iVar1 + 0x268) = *(int *)(iVar1 + 0x268) + 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1018d14a Catch@1018d14a

void Catch_1018d14a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018d15e Catch@1018d15e

void Catch_1018d15e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::AddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018d180 FUN_1018d180

undefined4 FUN_1018d180(void)

{
  int iVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  int in_ECX;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  wchar_t *pwStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102152b0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_3c = 0x1018d1ba;
  FUN_10061b40();
  uStack_3c = 0;
  uStack_48 = 0x1018d1ca;
  FName::FName((FName *)&uStack_40,0);
  UObject::GetTransientPackage();
  uStack_48 = 0x350;
  uStack_4c = 0x1018d1dd;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_48 = 0x1018d1f1;
    iVar1 = FUN_1001c510();
  }
  *(int *)(in_ECX + 0xc0) = iVar1;
  *(undefined4 *)(in_ECX + 200) = 0xaff12011;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xaff12011;
  uStack_3c = 3;
  uStack_40 = 0;
  uStack_48 = 0x14;
  local_20 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 6.0);
  uStack_4c = local_20;
  uStack_50 = 3;
  uStack_54 = 2;
  uStack_58 = 0x1018d250;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_58 = 2;
  pwStack_5c = *(wchar_t **)(in_ECX + 0xc0);
  uStack_58 = FUN_10060d40();
  pwStack_5c = L"Ū챨⣯謐\xe8ce⎶￫蚉ǔ";
  FUN_1005c1e0();
  uStack_58 = 1;
  pwStack_5c = L"sek.cbui168";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d4) = uVar2;
  uStack_58 = 1;
  pwStack_5c = L"sek.cbui144";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d8) = uVar2;
  uStack_58 = 1;
  pwStack_5c = L"sek.cbui67";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1dc) = uVar2;
  uStack_58 = 1;
  pwStack_5c = L"sek.cbui68";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e0) = uVar2;
  uStack_58 = 1;
  pwStack_5c = L"sek.cbui69";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e4) = uVar2;
  uStack_58 = 0;
  uStack_64 = 0x1018d2e0;
  FName::FName((FName *)&pwStack_5c,0);
  UObject::GetTransientPackage();
  uStack_64 = 0x330;
  uStack_68 = 0x1018d2ed;
  iVar1 = FUN_1008b6f0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_58 = 0x1018d2fb;
    iVar1 = FUN_1000b680();
  }
  *(int *)(in_ECX + 0x1cc) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1f04;
  uStack_58 = 3;
  pwStack_5c = (wchar_t *)0x0;
  uStack_64 = 0x12;
  uStack_68 = 0x81;
  uStack_6c = 0x1c;
  uStack_70 = 0x29;
  uStack_74 = 0x1018d330;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))();
  uStack_74 = 2;
  uStack_78 = *(undefined4 *)(in_ECX + 0x1cc);
  uStack_74 = FUN_10060d40();
  uStack_78 = 0x1018d34c;
  FUN_1005c1e0();
  uStack_74 = 0;
  FName::FName((FName *)&uStack_78,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_1008b6f0(0x330,pUVar3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_74 = 0x1018d377;
    iVar1 = FUN_1000b680();
  }
  *(int *)(in_ECX + 0x1d0) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1f05;
  uStack_74 = 3;
  uStack_78 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))(0x29,0x34,0x81,0x12,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
  FUN_1005c1e0(uVar2);
  ExceptionList = local_10;
  return 1;
}


// ==== 1018d3e7 Catch@1018d3e7

void Catch_1018d3e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1018d3fb Catch@1018d3fb

void Catch_1018d3fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSView_CharacterSelectWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018d420 FUN_1018d420

undefined4 FUN_1018d420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102152d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  if (*(int *)(in_ECX + 0x1d8) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x1d8),0xff,1);
  }
  iVar1 = *(int *)(in_ECX + 0x1d4);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    FUN_10021a00(2,3,uVar2,0x14,0,0,uVar2,0x14,iVar1,0xff,1);
  }
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b038));
  FUN_100217a0(0x17,8,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab34));
  FUN_100217a0(8,0x20,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6acfc));
  FUN_100217a0(8,0x48,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad14));
  FUN_100217a0(8,100,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad20));
  FUN_100217a0(0x6b,100,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad2c));
  FUN_100217a0(8,0x72,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6ad98));
  FUN_100217a0(6,0x80,0xffa3a3a3,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018d6a0 Catch@1018d6a0

void Catch_1018d6a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018d6b4 Catch@1018d6b4

void Catch_1018d6b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSView_CharacterSelectWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018d6e0 FUN_1018d6e0

void FUN_1018d6e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  ushort *puVar5;
  UClass *pUVar6;
  undefined4 *puVar7;
  int iVar8;
  APawn *this;
  float *pfVar9;
  int in_ECX;
  int iVar10;
  User *pUVar11;
  float fStack_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  float local_3a0;
  int *local_39c;
  undefined4 local_398;
  UObject *pUVar12;
  ushort *puVar13;
  ulong uVar14;
  UPackageMap *pUVar15;
  uint uStack_37c;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  float local_33c;
  undefined1 *local_338;
  int local_334;
  undefined1 *local_330;
  undefined1 *local_32c;
  void *local_328;
  undefined1 *puStack_324;
  undefined4 local_320;
  User local_31c [788];
  uint local_8;
  
  puStack_324 = &LAB_102152f0;
  local_328 = ExceptionList;
  uStack_37c = DAT_103554c4 ^ (uint)local_31c;
  local_32c = (undefined1 *)&uStack_37c;
  ExceptionList = &local_328;
  local_320 = 0;
  local_334 = in_ECX;
  puVar4 = &uStack_37c;
  local_8 = uStack_37c;
  if (0x14 < param_1) goto LAB_1018d738;
  puVar4 = &uStack_37c;
  if (param_1 != *(int *)(in_ECX + 0x1ec)) {
    FName::FName((FName *)&local_338,0);
    piVar1 = *(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
    uVar2 = *(undefined4 *)
             (**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
    FName::FName((FName *)&local_330,(ushort *)L"Engine.PlayerController",1);
    local_338 = local_330;
    pUVar15 = (UPackageMap *)0x0;
    uVar14 = 1;
    puVar13 = (ushort *)0x0;
    puVar5 = FName::operator*((FName *)&local_338);
    pUVar12 = (UObject *)0x0;
    pUVar6 = AController::StaticClass();
    local_398 = 0x1018d7c7;
    pUVar6 = UObject::StaticLoadClass(pUVar6,pUVar12,puVar5,puVar13,uVar14,pUVar15);
    iVar8 = *piVar1;
    puVar7 = (undefined4 *)FRotator::FRotator((FRotator *)&local_350,0,0,0);
    local_39c = (int *)*puVar7;
    local_398 = puVar7[1];
    local_3a8 = 0;
    local_3a4 = 0;
    local_3a0 = 0.0;
    local_330 = (undefined1 *)&fStack_3ac;
    fStack_3ac = 0.0;
    FName::FName((FName *)&fStack_3ac,0);
    local_330 = (undefined1 *)(**(code **)(iVar8 + 0xc0))(pUVar6);
    if (local_330 == (undefined1 *)0x0) {
      appFailAssert("pController",".\\Src\\NMSViewerWnd.cpp",0x3af);
    }
    iVar8 = FUN_1014a870();
    puVar7 = (undefined4 *)(iVar8 + 0x208 + param_1 * 0x314);
    pUVar11 = local_31c;
    for (iVar10 = 0xc5; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)pUVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      pUVar11 = pUVar11 + 4;
    }
    pUVar15 = (UPackageMap *)0x0;
    uVar14 = 0;
    puVar13 = (ushort *)0x0;
    puVar5 = User::GetClassNamePointer(local_31c);
    pUVar12 = (UObject *)0x0;
    pUVar6 = APawn::StaticClass();
    local_398 = 0x1018d89e;
    pUVar6 = UObject::StaticLoadClass(pUVar6,pUVar12,puVar5,puVar13,uVar14,pUVar15);
    puVar3 = local_330;
    *(UClass **)(local_330 + 0x4f8) = pUVar6;
    puVar4 = (uint *)local_32c;
    if (pUVar6 == (UClass *)0x0) goto LAB_1018d738;
    iVar8 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                             0x3c) + 0x3bc);
    local_344 = *(undefined4 *)(iVar8 + 0x1bc);
    local_340 = *(undefined4 *)(iVar8 + 0x1c0);
    local_33c = *(float *)(iVar8 + 0x1c4) + 30.0;
    iVar8 = *piVar1;
    puVar7 = (undefined4 *)FRotator::FRotator((FRotator *)&local_350,0,0,0);
    local_39c = (int *)*puVar7;
    local_398 = puVar7[1];
    local_3a8 = local_344;
    local_3a4 = local_340;
    local_3a0 = local_33c;
    local_330 = (undefined1 *)&fStack_3ac;
    fStack_3ac = local_33c;
    FName::FName((FName *)&fStack_3ac,0);
    this = (APawn *)(**(code **)(iVar8 + 0xc0))(*(undefined4 *)(puVar3 + 0x4f8));
    puVar4 = (uint *)local_32c;
    if (this == (APawn *)0x0) goto LAB_1018d738;
    (**(code **)(*piVar1 + 0xac))();
    *(APawn **)
     (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) + 0x3bc) =
         this;
    *(undefined4 *)(this + 0x14d8) = uVar2;
    this[0xc2] = (APawn)0x4;
    local_350 = 0;
    local_34c = 0;
    local_348 = 0x3f800000;
    local_398 = 1;
    local_39c = (int *)0x1018d9e2;
    (**(code **)(*(int *)this + 0x1c8))();
    iVar10 = local_334;
    *(int *)(local_334 + 0x1ec) = param_1;
    local_39c = (int *)0x1018d9fc;
    iVar8 = FUN_1014a870();
    *(APawn **)(iVar8 + 0x40c + *(int *)(iVar10 + 0x1ec) * 0x314) = this;
    local_39c = (int *)0x1018da1a;
    iVar8 = FUN_1014a870();
    local_39c = (int *)0x1018da33;
    User::SetPawnResource((User *)(iVar8 + 0x208 + *(int *)(iVar10 + 0x1ec) * 0x314));
    iVar8 = *(int *)this;
    local_39c = &local_334;
    local_3a0 = 3.014487e-29;
    pfVar9 = (float *)APawn::GetWaitAnimName(this);
    local_39c = (int *)0x0;
    local_3a0 = 1.4013e-45;
    local_3a4 = 0;
    local_3a8 = 0x3f800000;
    fStack_3ac = *pfVar9;
    (**(code **)(iVar8 + 0x328))(0);
    iVar8 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                             0x3c) + 0x3bc);
    puVar4 = (uint *)local_32c;
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x104) != 0)) {
      piVar1 = *(int **)(iVar8 + 0x104);
      (**(code **)(*piVar1 + 0x98))();
      FUN_1018ccd0();
      iVar8 = piVar1[0x92];
      FName::FName((FName *)&local_330,0);
      local_334 = *(int *)(iVar8 + 0x70);
      (**(code **)(**(int **)(iVar10 + 0x1d0) + 0x174))();
      for (iVar10 = 0; puVar4 = (uint *)local_32c, iVar10 < local_334; iVar10 = iVar10 + 1) {
        local_330 = *(undefined1 **)(iVar10 * 0x74 + *(int *)(iVar8 + 0x6c));
        FName::operator*((FName *)&local_330);
        FUN_1000b3d0();
      }
    }
  }
  local_32c = (undefined1 *)puVar4;
  local_320 = 0xffffffff;
  puVar4 = (uint *)local_32c;
LAB_1018d738:
  local_32c = (undefined1 *)puVar4;
  ExceptionList = local_328;
  __security_check_cookie(local_8 ^ (uint)local_31c);
  return;
}


// ==== 1018db11 Catch@1018db11

void Catch_1018db11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 1018db25 Catch@1018db25

void Catch_1018db25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSView_CharacterSelectWnd::OnNameComboBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018db50 FUN_1018db50

undefined4 FUN_1018db50(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  FName aFStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215320;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2e4) < param_1) {
    return 1;
  }
  uStack_30 = 0x1018dbc0;
  ExceptionList = &local_10;
  puVar3 = (ushort *)FUN_10009b10();
  piVar1 = *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                             0x3c) + 0x3bc);
  piVar1[0x5cd] = piVar1[0x5cd] & 0xfffffffe;
  piVar1[0x19e] = piVar1[0x19e] | 0x10;
  iVar2 = *piVar1;
  uStack_30 = 0;
  uStack_34 = 1;
  local_38 = 0;
  local_3c = 0x3f800000;
  FName::FName(aFStack_40,puVar3,1);
  (**(code **)(iVar2 + 0x328))(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 1018dc38 Catch@1018dc38

void Catch_1018dc38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018dc4c Catch@1018dc4c

void Catch_1018dc4c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSView_CharacterSelectWnd::OnAniNameComboBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018dc70 FUN_1018dc70

undefined4 FUN_1018dc70(undefined4 param_1,uint param_2)

{
  int *piVar1;
  APawn *this;
  int iVar2;
  FL2MagicSkillData *pFVar3;
  AActor *pAVar4;
  ushort *puVar5;
  UClass *pUVar6;
  USkillVisualEffect *this_00;
  APawn *pAVar7;
  int in_ECX;
  FName *this_01;
  UObject *pUVar8;
  ulong uVar9;
  USkillVisualEffect *pUVar10;
  int iVar11;
  uint uStack_30;
  AActor *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215340;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_10185300(param_2 & 0xffff,param_2 >> 0x10);
  *(int *)(in_ECX + 0x27c) = iVar2;
  if (iVar2 < 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(int *)(in_ECX + 0x244) <= iVar2) {
    ExceptionList = local_10;
    return 1;
  }
  iVar2 = FUN_1014a870();
  if (0x14 < *(uint *)(*(int *)(iVar2 + 0x1dc) + 0x1ec)) {
    ExceptionList = local_10;
    return 1;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x240) + *(int *)(in_ECX + 0x27c) * 4);
  iVar11 = *(int *)(iVar2 + 0x1e5c);
  pFVar3 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,*(int *)(iVar2 + 0x1e5c),1);
  piVar1 = *(int **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
  this = (APawn *)piVar1[0xef];
  pAVar4 = (AActor *)(**(code **)(*piVar1 + 0x35c))();
  if (pFVar3 == (FL2MagicSkillData *)0x0) {
    ExceptionList = local_10;
    return 1;
  }
  if (pAVar4 == (AActor *)0x0) {
    pAVar4 = (AActor *)this;
  }
  if (((byte)pAVar4[0x14ec] & 0x40) != 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_18 = pAVar4;
  if (*(int *)(pFVar3 + 0x30) != 0) {
    (**(code **)(**(int **)(this + 0x14d8) + 800))();
    APawn::NActionStop(this);
    APawn::SetMagicInfo(this,iVar11,1,*(float *)(pFVar3 + 0x34),*(float *)(pFVar3 + 0x34),pAVar4,1.0
                        ,pFVar3);
    FUN_100d9a30(&local_18);
    *(undefined4 *)(this + 0x530) = 1;
    iVar2 = APawn::InitSkillProcess(this);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    *(undefined4 *)(this + 0x62c) = 5;
    *(AActor **)(this + 0x63c) = pAVar4;
    ExceptionList = local_10;
    return 1;
  }
  FName::FName((FName *)&local_18,(ushort *)L"none",1);
  this_01 = (FName *)(pFVar3 + 0x44);
  iVar2 = FName::operator!=(this_01,(FName *)&local_18);
  if (iVar2 == 0) {
LAB_1018de33:
    pAVar7 = (APawn *)FUN_1014acb0(pAVar4);
    APawn::SpawnNTransientEffect(this,pAVar7,iVar11);
  }
  else {
    iVar2 = 0;
    puVar5 = L2FName::operator*((L2FName *)this_01);
    pUVar8 = (UObject *)0xffffffff;
    pUVar6 = USkillVisualEffect::StaticClass();
    pUVar8 = UObject::StaticFindObject(pUVar6,pUVar8,puVar5,iVar2);
    this_00 = (USkillVisualEffect *)FUN_1018cca0(pUVar8);
    if (this_00 == (USkillVisualEffect *)0x0) {
      uVar9 = 0x2000;
      pUVar10 = this_00;
      puVar5 = L2FName::operator*((L2FName *)this_01);
      pUVar8 = (UObject *)0x0;
      pUVar6 = USkillVisualEffect::StaticClass();
      pUVar8 = UObject::StaticLoadObject
                         (pUVar6,pUVar8,puVar5,(ushort *)this_00,uVar9,(UPackageMap *)pUVar10);
      this_00 = (USkillVisualEffect *)FUN_1018cca0(pUVar8);
      if (this_00 == (USkillVisualEffect *)0x0) goto LAB_1018de33;
    }
    USkillVisualEffect::TriggerTransientEffect(this_00,this,pAVar4,iVar11);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1018ded1 Catch@1018ded1

void Catch_1018ded1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1018dee5 Catch@1018dee5

void Catch_1018dee5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSView_InvenItemWnd::OnRButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018df10 FUN_1018df10

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1018df10(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  int local_1cf0;
  undefined1 local_1cec [7396];
  uint local_8;
  
  puStack_1cf4 = &LAB_10215368;
  local_1cf8 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1cec;
  ExceptionList = &local_1cf8;
  iVar4 = 0;
  local_1cf0 = 0;
  if (*(int *)(in_ECX + 0x3f9c) == 0) {
    piVar1 = *(int **)(GL2GameData_exref + 0x3d08);
    local_1cf0._0_1_ = 1;
    local_1cf0._1_3_ = 0;
    for (; iVar4 < piVar1[1]; iVar4 = iVar4 + 1) {
      iVar2 = *(int *)(*piVar1 + 8 + iVar4 * 0xc);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 1)) {
        FUN_1002be90();
        FUN_1018cd60(iVar2,local_1cec);
        uVar3 = FUN_1018c9c0(iVar2);
        FUN_1018d0c0(uVar3,local_1cec);
      }
    }
    local_1cf0 = (uint)local_1cf0._1_3_ << 8;
    FUN_100d10a0();
    *(undefined4 *)(in_ECX + 0x3f9c) = 1;
    local_1cf0 = 0xffffffff;
  }
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 1018e00e Catch@1018e00e

void Catch_1018e00e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1018e022 Catch@1018e022

void Catch_1018e022(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::AddAllItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018e040 FUN_1018e040

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1018e040(void)

{
  int *piVar1;
  FString *this;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int in_ECX;
  ushort *puStack_1d08;
  int *piStack_1d04;
  int *piStack_1d00;
  int iStack_1cfc;
  undefined4 uStack_1cf8;
  undefined1 auStack_1cf4 [7396];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1021539b;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&puStack_1d08;
  ExceptionList = &local_c;
  puStack_1d08 = (ushort *)
                 (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))
                           (DAT_103554c4 ^ (uint)&stack0xffffe2e8);
  if ((puStack_1d08 != (ushort *)0x0) && (iVar2 = appStrlen(puStack_1d08), 0 < iVar2)) {
    (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x174))();
    piVar1 = *(int **)(GL2GameData_exref + 0x3d08);
    iStack_1cfc = 0;
    uStack_1cf8 = 0;
    uStack_4 = 0;
    piStack_1d04 = piVar1;
    piStack_1d00 = piVar1;
    if (0 < piVar1[1]) {
      do {
        iVar2 = iStack_1cfc;
        this = *(FString **)(*piVar1 + 8 + iStack_1cfc * 0xc);
        if ((this != (FString *)0x0) && (iVar3 = FString::operator_int(this), iVar3 != 0)) {
          puVar5 = puStack_1d08;
          puVar4 = FString::operator*(this);
          puVar5 = appStrstr(puVar4,puVar5);
          if (puVar5 != (ushort *)0x0) {
            FUN_1002be90();
            FUN_1018cd60(this,auStack_1cf4);
            FUN_1018d0c0(3,auStack_1cf4);
          }
        }
        iStack_1cfc = iVar2 + 1;
      } while (iStack_1cfc < piVar1[1]);
    }
    uStack_4 = 0xffffffff;
    FUN_10050ec0(3,1);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&puStack_1d08);
  return;
}


// ==== 1018e1a0 FUN_1018e1a0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1018e1a0(void)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int in_ECX;
  int iStack_1d08;
  int *piStack_1d04;
  int *piStack_1d00;
  int iStack_1cfc;
  undefined4 uStack_1cf8;
  undefined1 auStack_1cf4 [7396];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_102153db;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&iStack_1d08;
  ExceptionList = &local_c;
  puVar3 = (ushort *)
           (**(code **)(**(int **)(in_ECX + 0x1f0) + 0x1f8))(DAT_103554c4 ^ (uint)&stack0xffffe2e8);
  if (puVar3 != (ushort *)0x0) {
    iVar4 = appStrlen(puVar3);
    if (0 < iVar4) {
      iStack_1d08 = appAtoi(puVar3);
      (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x174))();
      piVar1 = *(int **)(GL2GameData_exref + 0x3d08);
      iStack_1cfc = 0;
      uStack_1cf8 = 0;
      uStack_4 = 0;
      piStack_1d04 = piVar1;
      piStack_1d00 = piVar1;
      if (0 < piVar1[1]) {
        do {
          iVar2 = iStack_1cfc;
          iVar4 = *(int *)(*piVar1 + 8 + iStack_1cfc * 0xc);
          if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) == iStack_1d08)) &&
             (*(int *)(iVar4 + 0x1c) == 1)) {
            FUN_1002be90();
            FUN_1018cd60(iVar4,auStack_1cf4);
            FUN_1018d0c0(3,auStack_1cf4);
          }
          iStack_1cfc = iVar2 + 1;
        } while (iStack_1cfc < piVar1[1]);
      }
      uStack_4 = 0xffffffff;
      FUN_10050ec0(3,1);
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&iStack_1d08);
  return;
}


// ==== 1018e2f0 FUN_1018e2f0

void FUN_1018e2f0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_101862f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCMSView_InvenItemWnd::vftable;
  FString::operator=((FString *)(in_ECX + 0x59),(ushort *)L"Skill");
  ExceptionList = local_c;
  return;
}


// ==== 1018e360 FUN_1018e360

void FUN_1018e360(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215448;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCMSView_InvenItemWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_101863c0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1018e3c0 FUN_1018e3c0

void FUN_1018e3c0(byte param_1)

{
  void *in_ECX;
  
  FUN_1018e360();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x304);
  }
  return;
}


// ==== 1018e3f0 FUN_1018e3f0

void FUN_1018e3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10186460(param_1,param_2,param_3,param_4,1,1);
  local_4 = 0;
  *in_ECX = NCMSView_InvenItemWnd::vftable;
  FString::operator=((FString *)(in_ECX + 0x59),(ushort *)L"Skill");
  ExceptionList = local_c;
  return;
}


// ==== 1018e480 FUN_1018e480

void FUN_1018e480(void)

{
  undefined4 *in_ECX;
  User *this;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102154a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  local_8 = 0;
  *in_ECX = NCMSViewerWnd::vftable;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  this = (User *)(in_ECX + 0x82);
  local_18 = 0x13;
  do {
    User::User(this);
    this = this + 0x314;
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0xfe6] = 0;
  in_ECX[0xfe7] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1018e537 Catch@1018e537

void Catch_1018e537(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1018e54b Catch@1018e54b

void Catch_1018e54b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::NCMSViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018e570 FUN_1018e570

void FUN_1018e570(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102154d8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCMSViewerWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1018e5d0 FUN_1018e5d0

void FUN_1018e5d0(byte param_1)

{
  void *in_ECX;
  
  FUN_1018e570();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3fa0);
  }
  return;
}


// ==== 1018e600 FUN_1018e600

void FUN_1018e600(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  *in_ECX = NCMSView_CharacterSelectWnd::vftable;
  in_ECX[0x7b] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 1018e680 FUN_1018e680

void FUN_1018e680(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215538;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCMSView_CharacterSelectWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1018e6e0 FUN_1018e6e0

void FUN_1018e6e0(byte param_1)

{
  void *in_ECX;
  
  FUN_1018e680();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1f0);
  }
  return;
}


// ==== 1018e740 FUN_1018e740

undefined4 FUN_1018e740(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  UPackage *pUVar4;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar5;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  FString *pFStack_11c;
  FString *pFStack_100;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t *pwStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  FString local_40 [20];
  int local_2c;
  FString local_28 [4];
  undefined8 local_24;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102155c8;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  uStack_54 = 0;
  local_24 = CONCAT44(&uStack_58,(undefined4)local_24);
  uStack_60 = 0x1018e784;
  FName::FName((FName *)&uStack_58,0);
  UObject::GetTransientPackage();
  uStack_60 = 0x350;
  uStack_64 = 0x1018e797;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_60 = 0x1018e7a9;
    iVar1 = FUN_1001c510();
  }
  *(int *)(in_ECX + 0xc0) = iVar1;
  *(undefined4 *)(in_ECX + 200) = 0xf2;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf2;
  uStack_54 = 3;
  uStack_58 = 0;
  uStack_60 = 0x19;
  local_24 = (longlong)ROUND(*(float *)(in_ECX + 0x88));
  uStack_64 = (undefined4)local_24;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0x1018e7fe;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_70 = 2;
  pwStack_74 = *(wchar_t **)(in_ECX + 0xc0);
  uStack_70 = FUN_10060d40();
  pwStack_74 = L"Ū䁨⓷謐\xe8ceจ￫蚉Ǩ";
  FUN_1005c1e0();
  uStack_70 = 1;
  pwStack_74 = L"L2UI.etcwnd.NPCHtml_BACK";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e8) = uVar2;
  uStack_70 = 1;
  pwStack_74 = L"L2UI.SkillWnd.SkillBack";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e4) = uVar2;
  uStack_70 = 0;
  local_24 = CONCAT44(&pwStack_74,(undefined4)local_24);
  uStack_7c = 0x1018e850;
  FName::FName((FName *)&pwStack_74,0);
  UObject::GetTransientPackage();
  uStack_7c = 0x400;
  uStack_80 = 0x1018e85d;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_70 = 0;
    pwStack_74 = (wchar_t *)0x0;
    uStack_7c = 1;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0x1018e873;
    iVar1 = FUN_1001a820();
  }
  *(int *)(in_ECX + 0x1ec) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf3;
  uStack_70 = 3;
  pwStack_74 = (wchar_t *)0x0;
  uStack_7c = 0x10;
  uStack_80 = 0x41;
  uStack_84 = 0x1e;
  uStack_88 = 0x37;
  uStack_8c = 0x1018e8a3;
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xc0))();
  uStack_8c = 2;
  uStack_90 = *(undefined4 *)(in_ECX + 0x1ec);
  uStack_8c = FUN_10060d40();
  uStack_90 = 0x1018e8bf;
  FUN_1005c1e0();
  uStack_8c = 0;
  local_24 = CONCAT44(&uStack_90,(undefined4)local_24);
  uStack_98 = 0x1018e8cd;
  FName::FName((FName *)&uStack_90,0);
  UObject::GetTransientPackage();
  uStack_98 = 0x400;
  uStack_9c = 0x1018e8da;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_98 = 1;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0x1018e8f0;
    iVar1 = FUN_1001a820();
  }
  *(int *)(in_ECX + 0x1f0) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf4;
  uStack_8c = 3;
  uStack_90 = 0;
  uStack_98 = 0x10;
  uStack_9c = 0x41;
  uStack_a0 = 0x37;
  uStack_a4 = 0x37;
  uStack_a8 = 0x1018e920;
  (**(code **)(**(int **)(in_ECX + 0x1f0) + 0xc0))();
  uStack_a8 = 2;
  uStack_ac = *(undefined4 *)(in_ECX + 0x1f0);
  uStack_a8 = FUN_10060d40();
  uStack_ac = 0x1018e93c;
  FUN_1005c1e0();
  uStack_a8 = 0;
  local_24 = CONCAT44(&uStack_ac,(undefined4)local_24);
  uStack_b4 = 0x1018e94a;
  FName::FName((FName *)&uStack_ac,0);
  UObject::GetTransientPackage();
  uStack_b4 = 0x314;
  uStack_b8 = 0x1018e957;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_b4 = 0x7a;
    uStack_b8 = 0x1018e96a;
    piVar3 = (int *)FUN_10009930();
  }
  *(int **)(in_ECX + 500) = piVar3;
  uStack_a8 = 3;
  uStack_ac = 0;
  uStack_b4 = 0x10;
  uStack_b8 = 0x41;
  uStack_bc = 0x50;
  uStack_c0 = 0xf;
  uStack_c4 = 0x1018e98c;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_c4 = 2;
  uStack_c8 = *(undefined4 *)(in_ECX + 500);
  uStack_c4 = FUN_10060d40();
  uStack_c8 = 0x1018e9a8;
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 500) + 0x2fc) = 1;
  uStack_c4 = 0;
  local_24 = CONCAT44(&uStack_c8,(undefined4)local_24);
  uStack_d0 = 0x1018e9c6;
  FName::FName((FName *)&uStack_c8,0);
  UObject::GetTransientPackage();
  uStack_d0 = 0x314;
  uStack_d4 = 0x1018e9d3;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0x78;
    uStack_d4 = 0x1018e9e6;
    piVar3 = (int *)FUN_10009930();
  }
  *(int **)(in_ECX + 0x1f8) = piVar3;
  uStack_c4 = 3;
  uStack_c8 = 0;
  uStack_d0 = 0x10;
  uStack_d4 = 0x41;
  uStack_d8 = 0x50;
  uStack_dc = 0x50;
  uStack_e0 = 0x1018ea08;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_e0 = 2;
  uStack_e4 = *(undefined4 *)(in_ECX + 0x1f8);
  uStack_e0 = FUN_10060d40();
  uStack_e4 = 0x1018ea24;
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x1f8) + 0x2fc) = 1;
  uStack_e0 = 0;
  local_24 = CONCAT44(&uStack_e4,(undefined4)local_24);
  FName::FName((FName *)&uStack_e4,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_e0 = 0;
    uStack_e4 = 0;
    piVar3 = (int *)FUN_10009930();
  }
  *(int **)(in_ECX + 0x1fc) = piVar3;
  uStack_e0 = 3;
  uStack_e4 = 0;
  (**(code **)(*piVar3 + 0xc0))();
  pFStack_100 = *(FString **)(in_ECX + 0x1fc);
  FUN_10060d40();
  pFStack_100 = (FString *)0x1018eaa3;
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x1fc) + 0x2fc) = 0;
  local_24 = CONCAT44(&pFStack_100,(undefined4)local_24);
  pFStack_100 = extraout_ECX;
  FName::FName((FName *)&pFStack_100,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pFStack_100 = (FString *)0x1018eae1;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    pFStack_100 = (FString *)0x1018eafa;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 2;
    local_1c = 3;
    pFStack_100 = local_40;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x200) = uVar2;
  local_8 = 1;
  uVar5 = local_1c;
  if ((local_1c & 2) != 0) {
    uVar5 = local_1c & 0xfffffffd;
    local_1c = uVar5;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar5 & 1) != 0) {
    local_1c = uVar5 & 0xfffffffe;
    FString::~FString(local_40);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x200) + 0x1cc) = 0xf5;
  pFStack_100 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x200) + 0xc0))();
  pFStack_11c = *(FString **)(in_ECX + 0x200);
  FUN_10060d40();
  pFStack_11c = (FString *)0x1018eba9;
  FUN_1005c1e0();
  pFStack_11c = (FString *)0x1018ebb9;
  FUN_10003cf0();
  local_24 = CONCAT44(&pFStack_11c,(undefined4)local_24);
  uStack_124 = 0x1018ebc9;
  pFStack_11c = extraout_ECX_00;
  FName::FName((FName *)&pFStack_11c,0);
  UObject::GetTransientPackage();
  uStack_124 = 0x33c;
  uStack_128 = 0x1018ebd6;
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pFStack_11c = (FString *)0x1018ebed;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1c = local_1c | 4;
    pFStack_11c = (FString *)0x1018ec03;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 4;
    local_1c = local_1c | 8;
    pFStack_11c = local_28;
    uStack_124 = 0x1018ec1f;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x204) = uVar2;
  local_8 = 3;
  uVar5 = local_1c;
  if ((local_1c & 8) != 0) {
    uVar5 = local_1c & 0xfffffff7;
    local_1c = uVar5;
    FString::~FString(local_40);
  }
  local_8 = 0;
  if ((uVar5 & 4) != 0) {
    local_1c = uVar5 & 0xfffffffb;
    FString::~FString(local_28);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x204) + 0x1cc) = 0xf6;
  pFStack_11c = (FString *)0x0;
  uStack_124 = 0x10;
  uStack_128 = 0x20;
  uStack_12c = 0x37;
  uStack_130 = 0x8c;
  uStack_134 = 0x1018ec93;
  (**(code **)(**(int **)(in_ECX + 0x204) + 0xc0))();
  uStack_134 = 2;
  uStack_138 = *(undefined4 *)(in_ECX + 0x204);
  uStack_134 = FUN_10060d40();
  uStack_138 = 0x1018ecaf;
  FUN_1005c1e0();
  uStack_134 = 0x1a4;
  uStack_138 = 0x1018ecbf;
  FUN_10003cf0();
  uStack_134 = 0;
  local_24 = CONCAT44(&uStack_138,(undefined4)local_24);
  uStack_140 = 0x1018eccf;
  FName::FName((FName *)&uStack_138,0);
  UObject::GetTransientPackage();
  uStack_140 = 0x304;
  uStack_144 = 0x1018ecdc;
  iVar1 = FUN_1018cd30();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_134 = 0x20;
    uStack_138 = 0x50;
    uStack_140 = 6;
    uStack_144 = 0x1018ecf2;
    piVar3 = (int *)FUN_1018e3f0();
  }
  *(int **)(in_ECX + 0x1cc) = piVar3;
  uStack_134 = 3;
  uStack_138 = 0;
  uStack_140 = 0xff;
  uStack_144 = 0xea;
  uStack_148 = 0x85;
  uStack_14c = 3;
  uStack_150 = 0x1018ed1d;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_150 = 0x22;
  uStack_154 = *(undefined4 *)(in_ECX + 0x1cc);
  uStack_150 = FUN_10060d40();
  uStack_154 = 0x1018ed39;
  FUN_1005c1e0();
  uStack_150 = 0;
  local_24 = CONCAT44(&uStack_154,(undefined4)local_24);
  uStack_15c = 0x1018ed47;
  FName::FName((FName *)&uStack_154,0);
  UObject::GetTransientPackage();
  uStack_15c = 0x304;
  uStack_160 = 0x1018ed54;
  iVar1 = FUN_1018cd30();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_150 = 0x20;
    uStack_154 = 0x50;
    uStack_15c = 6;
    uStack_160 = 0x1018ed6a;
    piVar3 = (int *)FUN_1018e3f0();
  }
  *(int **)(in_ECX + 0x1d0) = piVar3;
  uStack_150 = 3;
  uStack_154 = 0;
  uStack_15c = 0xff;
  uStack_160 = 0xea;
  uStack_164 = 0x85;
  uStack_168 = 3;
  uStack_16c = 0x1018ed95;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_16c = 0x22;
  uStack_170 = *(undefined4 *)(in_ECX + 0x1d0);
  uStack_16c = FUN_10060d40();
  uStack_170 = 0x1018edb1;
  FUN_1005c1e0();
  uStack_16c = 0;
  local_24 = CONCAT44(&uStack_170,(undefined4)local_24);
  uStack_178 = 0x1018edbf;
  FName::FName((FName *)&uStack_170,0);
  UObject::GetTransientPackage();
  uStack_178 = 0x304;
  uStack_17c = 0x1018edcc;
  iVar1 = FUN_1018cd30();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_16c = 0x20;
    uStack_170 = 0x50;
    uStack_178 = 6;
    uStack_17c = 0x1018ede2;
    piVar3 = (int *)FUN_1018e3f0();
  }
  *(int **)(in_ECX + 0x1d4) = piVar3;
  uStack_16c = 3;
  uStack_170 = 0;
  uStack_178 = 0xff;
  uStack_17c = 0xea;
  uStack_180 = 0x85;
  uStack_184 = 3;
  uStack_188 = 0x1018ee0d;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_188 = 0x22;
  uStack_18c = *(undefined4 *)(in_ECX + 0x1d4);
  uStack_188 = FUN_10060d40();
  uStack_18c = 0x1018ee29;
  FUN_1005c1e0();
  uStack_188 = 0;
  local_24 = CONCAT44(&uStack_18c,(undefined4)local_24);
  uStack_194 = 0x1018ee37;
  FName::FName((FName *)&uStack_18c,0);
  UObject::GetTransientPackage();
  uStack_194 = 0x304;
  uStack_198 = 0x1018ee44;
  iVar1 = FUN_1018cd30();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_188 = 0x20;
    uStack_18c = 0x50;
    uStack_194 = 6;
    uStack_198 = 0x1018ee5a;
    piVar3 = (int *)FUN_1018e3f0();
  }
  *(int **)(in_ECX + 0x1d8) = piVar3;
  uStack_188 = 3;
  uStack_18c = 0;
  uStack_194 = 0xff;
  uStack_198 = 0xea;
  uStack_19c = 0x85;
  uStack_1a0 = 3;
  uStack_1a4 = 0x1018ee85;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_1a4 = 0x22;
  uStack_1a8 = *(undefined4 *)(in_ECX + 0x1d8);
  uStack_1a4 = FUN_10060d40();
  uStack_1a8 = 0x1018eea1;
  FUN_1005c1e0();
  uStack_1a4 = 0;
  local_24 = CONCAT44(&uStack_1a8,(undefined4)local_24);
  uStack_1b0 = 0x1018eeaf;
  FName::FName((FName *)&uStack_1a8,0);
  UObject::GetTransientPackage();
  uStack_1b0 = 0x310;
  uStack_1b4 = 0x1018eebc;
  iVar1 = FUN_100b1e60();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1a4 = 0x1018eeca;
    iVar1 = FUN_100514d0();
  }
  *(int *)(in_ECX + 0x1e0) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf7;
  uStack_1a4 = 3;
  uStack_1a8 = 0;
  uStack_1b0 = 0x10;
  uStack_1b4 = 0x8a;
  uStack_1b8 = 0x66;
  uStack_1bc = 0xf;
  uStack_1c0 = 0x1018eefd;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))();
  uStack_1c0 = 2;
  iStack_1c4 = *(int *)(in_ECX + 0x1e0);
  uStack_1c0 = FUN_10060d40();
  iStack_1c4 = 0x1018ef19;
  FUN_1005c1e0();
  uStack_1c0 = 0;
  iStack_1c4 = 0;
  FUN_1004ff30(0x7a,*(undefined4 *)(in_ECX + 0x1cc),0x28,0x10,L"l2ui_ch3.tabbutton.normal_tab_on",
               L"l2ui_ch3.tabbutton.normal_tab",0,0xffffffff);
  uStack_1c0 = 0;
  iStack_1c4 = 0;
  FUN_1004ff30(0x78,*(undefined4 *)(in_ECX + 0x1d0),0x28,0x10,L"l2ui_ch3.tabbutton.normal_tab_on",
               L"l2ui_ch3.tabbutton.normal_tab",0,0xffffffff);
  uStack_1c0 = 0;
  iStack_1c4 = 0;
  FUN_1004ff30(0x79,*(undefined4 *)(in_ECX + 0x1d4),0x28,0x10,L"l2ui_ch3.tabbutton.normal_tab_on",
               L"l2ui_ch3.tabbutton.normal_tab",0,0xffffffff);
  uStack_1c0 = 0;
  iStack_1c4 = 0;
  FUN_1004ff30(0x1a4,*(undefined4 *)(in_ECX + 0x1d8),0x28,0x10,L"l2ui_ch3.tabbutton.normal_tab_on",
               L"l2ui_ch3.tabbutton.normal_tab",0,0xffffffff);
  iStack_1c4 = extraout_ECX_01;
  for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1) {
    iStack_1c4 = local_2c * 0x314;
    *(undefined4 *)(iStack_1c4 + 0x40c + in_ECX) = 0;
  }
  uStack_1c0 = 0;
  local_24 = CONCAT44(&iStack_1c4,(undefined4)local_24);
  FName::FName((FName *)&iStack_1c4,0);
  pUVar4 = UObject::GetTransientPackage();
  iVar1 = FUN_1018cd00(0x1f0,pUVar4);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_1c0 = 0x1018efff;
    piVar3 = (int *)FUN_1018e600();
  }
  *(int **)(in_ECX + 0x1dc) = piVar3;
  uStack_1c0 = 3;
  iStack_1c4 = 0;
  (**(code **)(*piVar3 + 0xc0))(0x22,0x22,0xd0,0xa1,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc),0x4000008);
  FUN_1005c1e0(uVar2);
  FUN_1018c240();
  *(undefined4 *)(in_ECX + 0x3f98) = *(undefined4 *)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
  ExceptionList = local_10;
  return 1;
}


// ==== 1018f08a Catch@1018f08a

void Catch_1018f08a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 1018f09e Catch@1018f09e

void Catch_1018f09e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCMSViewerWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f0c0 FUN_1018f0c0

undefined4 FUN_1018f0c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_100440c0();
  uVar1 = FUN_1003f630(L"l2ui_ch3.etc.textbackline",1);
  *(undefined4 *)(in_ECX + 0x214) = uVar1;
  return 1;
}


// ==== 1018f0f0 FUN_1018f0f0

undefined4 FUN_1018f0f0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102155f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10043b60();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018f13e Catch@1018f13e

void Catch_1018f13e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f152 Catch@1018f152

void Catch_1018f152(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNoticeInfoWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f170 FUN_1018f170

void FUN_1018f170(short *param_1)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x174))();
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    iVar2 = 0x218 - (int)param_1;
    do {
      sVar1 = *param_1;
      *(short *)((int)in_ECX + iVar2 + (int)param_1) = sVar1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
  }
  return;
}


// ==== 1018f1b0 FUN_1018f1b0

void FUN_1018f1b0(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x218) = 0;
  return;
}


// ==== 1018f1c0 FUN_1018f1c0

bool FUN_1018f1c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0xf8)) {
    iVar1 = (**(code **)(*in_ECX + 500))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1018f220 FUN_1018f220

undefined4 FUN_1018f220(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d8) != 0) {
    *(undefined4 *)(in_ECX + 0x1d8) = 0;
  }
  if (*(int *)(in_ECX + 0x1dc) != 0) {
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018f288 Catch@1018f288

void Catch_1018f288(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f29c Catch@1018f29c

void Catch_1018f29c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWarningWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f2c0 FUN_1018f2c0

void FUN_1018f2c0(short *param_1)

{
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_1018f170();
    return;
  }
  return;
}


// ==== 1018f2e0 FUN_1018f2e0

void FUN_1018f2e0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1018f2ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x174))();
  return;
}


// ==== 1018f2f0 FUN_1018f2f0

undefined4 FUN_1018f2f0(void)

{
  (**(code **)(*DAT_103663bc + 0x7bc))();
  return 1;
}


// ==== 1018f310 FUN_1018f310

undefined4 FUN_1018f310(int param_1,undefined4 param_2)

{
  if (param_1 == 0xd) {
    (**(code **)(*DAT_103663bc + 0x7bc))();
    FUN_1014ed50(0);
  }
  FUN_1005f3a0(param_1,param_2);
  return 1;
}


// ==== 1018f360 FUN_1018f360

undefined4 FUN_1018f360(void)

{
  return 1;
}


// ==== 1018f370 FUN_1018f370

void FUN_1018f370(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_1005fe50();
  uVar1 = FUN_1003f600(0xf030d1,60000,0);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  return;
}


// ==== 1018f3a0 FUN_1018f3a0

void FUN_1018f3a0(void)

{
  int in_ECX;
  
  FUN_1005ff00();
  FUN_1003f610(0xf030d1);
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  return;
}


// ==== 1018f3c0 FUN_1018f3c0

bool FUN_1018f3c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xa000fa) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0xa000fb) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1018f440 FUN_1018f440

void FUN_1018f440(short *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_1018f170(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018f4a6 Catch@1018f4a6

void Catch_1018f4a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f4ba Catch@1018f4ba

void Catch_1018f4ba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::AddEula");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f4e0 FUN_1018f4e0

void FUN_1018f4e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  *(undefined4 *)(in_ECX + 0x1e8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1018f547 Catch@1018f547

void Catch_1018f547(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f55b Catch@1018f55b

void Catch_1018f55b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f580 FUN_1018f580

void FUN_1018f580(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_1003f610(0xafd32013);
    *(undefined4 *)(in_ECX + 0x1e4) = 0;
  }
  uVar1 = FUN_1003f600(0xafd32013,1000,0);
  *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1018f60a Catch@1018f60a

void Catch_1018f60a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f61e Catch@1018f61e

void Catch_1018f61e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f640 FUN_1018f640

void FUN_1018f640(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ff00();
  FUN_1003f610(0xafd32013);
  in_ECX[0x79] = 0;
  in_ECX[0x78] = 0;
  (**(code **)(*in_ECX + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 1018f6b4 Catch@1018f6b4

void Catch_1018f6b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f6c8 Catch@1018f6c8

void Catch_1018f6c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f6f0 FUN_1018f6f0

void FUN_1018f6f0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102156b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1e0) == 0) {
    (**(code **)(*DAT_103663bc + 0x7bc))();
    *(undefined4 *)(in_ECX + 0x1e0) = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1018f760 Catch@1018f760

void Catch_1018f760(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f774 Catch@1018f774

void Catch_1018f774(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::RequestServerList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f7a0 FUN_1018f7a0

undefined4 FUN_1018f7a0(void)

{
  FString aFStack_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102156d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x308))();
  FString::FString(aFStack_3c,(ushort *)L"LoginState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  uStack_38 = 0x1018f821;
  UL2ConsoleWnd::SetState((UL2ConsoleWnd *)DAT_103663bc,2);
  if (*(int *)GIsUseXMLUI_exref == 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x1dc) + 0x1e0) + 0x78))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1018f862 Catch@1018f862

void Catch_1018f862(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f876 Catch@1018f876

void Catch_1018f876(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::OnCancelBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f8a0 FUN_1018f8a0

undefined4 FUN_1018f8a0(int param_1)

{
  int in_ECX;
  
  if (param_1 == -0x502cdfed) {
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
  }
  return 1;
}


// ==== 1018f8fe Catch@1018f8fe

void Catch_1018f8fe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018f912 Catch@1018f912

void Catch_1018f912(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018f930 FUN_1018f930

bool FUN_1018f930(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0xa000fc)) {
    iVar1 = (**(code **)(*in_ECX + 500))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1018f990 FUN_1018f990

undefined4 FUN_1018f990(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d0) != 0) {
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018f9f1 Catch@1018f9f1

void Catch_1018f9f1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018fa05 Catch@1018fa05

void Catch_1018fa05(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnnounceWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018fa30 FUN_1018fa30

void FUN_1018fa30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a76a0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1018fa60 FUN_1018fa60

undefined4 FUN_1018fa60(int param_1)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uStack_40;
  undefined1 local_30 [4];
  undefined4 local_2c;
  longlong local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215740;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar4,uVar3);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  local_18 = 0;
  while( true ) {
    uVar2 = local_18;
    iVar5 = FUN_101c19e0();
    if (iVar5 <= (int)uVar2) break;
    uVar6 = uVar2 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if (uVar6 == 1) {
      uVar12 = 0xff;
      uVar3 = *(undefined4 *)(in_ECX + 0x214);
      uVar11 = 0xf;
      uVar10 = 8;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0xf;
      uVar4 = FUN_101c19e0(0xf,0,0,8,0xf,uVar3,0xff,1);
      FUN_10021a00(0,uVar2 * 0x12,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar3,uVar12,uVar6);
    }
    local_18 = uVar2 + 1;
  }
  psVar1 = (short *)(in_ECX + 0x218);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    FUN_10023790(*(undefined4 *)(in_ECX + 0x1cc),*(undefined4 *)(in_ECX + 0x1d0));
    local_20 = (longlong)ROUND((*(float *)(in_ECX + 0x88) - 16.0) - 4.0);
    FUN_100217a0(1,2,0xffdcdcdc,psVar1,(undefined4)local_20,0,1,0,0,0,0,0,0,0,0,0xffffffff);
    local_20 = (longlong)ROUND((*(float *)(in_ECX + 0x88) - 16.0) - 4.0);
    FUN_10020bb0(local_30,psVar1,(undefined4)local_20,0,1,0,0,0);
    FUN_10043d00(local_2c);
    FUN_10023160();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018fc51 Catch@1018fc51

void Catch_1018fc51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1018fc65 Catch@1018fc65

void Catch_1018fc65(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNoticeInfoWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018fc90 FUN_1018fc90

undefined4 FUN_1018fc90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215760;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar1 = *(int *)(in_ECX + 0x1d4);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018fd7b Catch@1018fd7b

void Catch_1018fd7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018fd8f Catch@1018fd8f

void Catch_1018fd8f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNoticeWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018fdb0 FUN_1018fdb0

undefined4 FUN_1018fdb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar1 = *(int *)(in_ECX + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1018fe94 Catch@1018fe94

void Catch_1018fe94(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018fea8 Catch@1018fea8

void Catch_1018fea8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1018fed0 FUN_1018fed0

undefined4 FUN_1018fed0(void)

{
  int in_ECX;
  FString aFStack_3c [4];
  undefined4 uStack_38;
  ushort *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_102157a9;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)GLanguageType_exref == 4) {
    if (*(int *)(in_ECX + 0x1e8) == 0) {
      puStack_34 = (ushort *)0x1018ff2a;
      puStack_34 = FString::operator*((FString *)(GL2GameData_exref + 0x7cbac));
      uStack_38 = 0x1018ff32;
      FUN_1018f440();
      *(undefined4 *)(in_ECX + 0x1e8) = 1;
    }
    else {
      FString::FString(aFStack_3c,(ushort *)L"ChinaWarnMsgState");
      local_8 = local_8 & 0xffffff00;
      FUN_10070110();
      *(undefined4 *)(*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x1ec) + 0x1d4) =
           *(undefined4 *)(in_ECX + 0x1dc);
      *(undefined4 *)(in_ECX + 0x1e8) = 0;
    }
  }
  else if ((*(uint *)(in_ECX + 0x1dc) == 0) || ((*(uint *)(in_ECX + 0x1dc) & 1) == 0)) {
    puStack_34 = (ushort *)0x1018ffb5;
    FUN_1018f6f0();
  }
  else {
    puStack_34 = (ushort *)0x1018ffc6;
    FUN_10142110();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1018ffcb Catch@1018ffcb

void Catch_1018ffcb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1018ffdf Catch@1018ffdf

void Catch_1018ffdf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::OnOkBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10190000 FUN_10190000

undefined4 FUN_10190000(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int in_ECX;
  void *pvVar4;
  undefined2 in_FPUControlWord;
  undefined4 local_2c;
  void *local_28;
  longlong local_24;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215804;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = (void *)0x0;
  local_28 = (void *)0x0;
  FUN_10061b40(DAT_103554c4 ^ (uint)&stack0xffffffc8);
  uVar1 = FUN_1003f630(L"L2UI_ch3.LobbyWnd.Announce_cn",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  FName::FName((FName *)&local_2c,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,local_2c,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString(local_18,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    local_4 = 0;
    local_28 = (void *)0x1;
    FString::FString((FString *)&local_24,(ushort *)L"L2UI_ch3.button.btn1_normal");
    local_4 = 1;
    pvVar4 = (void *)0x3;
    local_28 = (void *)0x3;
    uVar1 = FUN_10006980(&local_24,local_18,0);
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  local_4 = 0;
  if (((uint)pvVar4 & 2) != 0) {
    pvVar4 = (void *)((uint)pvVar4 & 0xfffffffd);
    local_28 = pvVar4;
    FString::~FString((FString *)&local_24);
  }
  local_4 = 0xffffffff;
  if (((uint)pvVar4 & 1) != 0) {
    local_28 = (void *)((uint)pvVar4 & 0xfffffffe);
    FString::~FString(local_18);
  }
  local_2c = CONCAT22(local_2c._2_2_,in_FPUControlWord);
  *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x1cc) = 0xa000fc;
  local_24 = (longlong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 38.0);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))((undefined4)local_24,0x18c,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d0),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  ExceptionList = local_28;
  return 1;
}


// ==== 101901c0 FUN_101901c0

undefined4 FUN_101901c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar1 = *(int *)(in_ECX + 0x1cc);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101902ab Catch@101902ab

void Catch_101902ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101902bf Catch@101902bf

void Catch_101902bf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnnounceWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101902e0 FUN_101902e0

undefined4 FUN_101902e0(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x1d4) != 0) && ((*(uint *)(in_ECX + 0x1d4) & 1) != 0)) {
    FUN_10142110();
    return 1;
  }
  (**(code **)(*DAT_103663bc + 0x7bc))();
  return 1;
}


// ==== 10190320 FUN_10190320

undefined4 FUN_10190320(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (param_1 == 0xd) {
    if (*(uint *)(in_ECX + 0x1d4) == 0) {
      (**(code **)(*DAT_103663bc + 0x7bc))();
      return 1;
    }
    if ((*(uint *)(in_ECX + 0x1d4) & 1) == 0) {
      (**(code **)(*DAT_103663bc + 0x7bc))();
      return 1;
    }
    FUN_10142110();
    FUN_1014ed50(0);
  }
  FUN_1005f3a0(param_1,param_2);
  return 1;
}


// ==== 101903a0 FUN_101903a0

void FUN_101903a0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10044de0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCNoticeInfoWnd::vftable;
  *(undefined2 *)(in_ECX + 0x86) = 0;
  in_ECX[0x81] = 0x10;
  ExceptionList = local_c;
  return;
}


// ==== 10190410 FUN_10190410

void FUN_10190410(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215878;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCNoticeInfoWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10031a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10190470 FUN_10190470

void FUN_10190470(byte param_1)

{
  void *in_ECX;
  
  FUN_10190410();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x20218);
  }
  return;
}


// ==== 101904a0 FUN_101904a0

void FUN_101904a0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102158a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCWarningWnd::vftable;
  in_ECX[0x75] = 0;
  in_ECX[0x74] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10190500 FUN_10190500

void FUN_10190500(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102158d8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCWarningWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10190560 FUN_10190560

void FUN_10190560(byte param_1)

{
  void *in_ECX;
  
  FUN_10190500();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e0);
  }
  return;
}


// ==== 10190590 FUN_10190590

undefined4 FUN_10190590(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  int in_ECX;
  void *pvVar5;
  undefined4 unaff_EDI;
  undefined2 in_FPUControlWord;
  wchar_t *pwStack_48;
  void *pvVar6;
  uint uStack_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10215934;
  local_c = ExceptionList;
  _uStack_40 = CONCAT44(unaff_EDI,DAT_103554c4 ^ (uint)&stack0xffffffc4);
  ExceptionList = &local_c;
  pvVar5 = (void *)0x0;
  local_28 = 0;
  FUN_10061b40();
  pwStack_48 = L"L2UI_ch3.LobbyWnd.lobby3_back";
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  pwStack_48 = 
  L"㶋쏔ဢ\xd7ffඋ쏜ဢᆋ䲋ᐤⶋ쐬ဢ卓卒兓桐皠်헿쒃蔠瓀謉\xe8c8ﶇ\xffff˫쀳ͪjj睨\x01栀Ș"
  ;
  FName::FName((FName *)&local_2c,0);
  pUVar2 = UObject::GetTransientPackage();
  pwStack_48 = (wchar_t *)0x0;
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_103a76a0,pUVar2,local_2c,0,0,*(undefined4 *)GError_exref);
  if (pUVar3 == (UObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_101903a0();
  }
  pvVar6 = (void *)0x3;
  pwStack_48 = (wchar_t *)0x0;
  *(int **)(in_ECX + 0x1d8) = piVar4;
  (**(code **)(*piVar4 + 0xc0))(6,6,0x218,0x177,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d8),2);
  FUN_1005c1e0(uVar1);
  FName::FName((FName *)&pwStack_48,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar2,pwStack_48,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    uStack_20 = 0;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_ch3.button.btn1_normal");
    uStack_20 = 1;
    pvVar5 = (void *)0x3;
    pvVar6 = (void *)0x3;
    uVar1 = FUN_10006980(&uStack_40,&stack0xffffffcc,0);
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  uStack_20 = 0;
  if (((uint)pvVar5 & 2) != 0) {
    pvVar5 = (void *)((uint)pvVar5 & 0xfffffffd);
    pvVar6 = pvVar5;
    FString::~FString((FString *)&uStack_40);
  }
  uStack_20 = 0xffffffff;
  if (((uint)pvVar5 & 1) != 0) {
    pvVar6 = (void *)((uint)pvVar5 & 0xfffffffe);
    FString::~FString((FString *)&stack0xffffffcc);
  }
  pwStack_48 = (wchar_t *)CONCAT22(pwStack_48._2_2_,in_FPUControlWord);
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0xf8;
  _uStack_40 = (longlong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 38.0);
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))(uStack_40,0x18c,0x4c,0x17,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0x8c);
  ExceptionList = pvVar6;
  return 1;
}


// ==== 101907d0 FUN_101907d0

void FUN_101907d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10215958;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  *in_ECX = NCEulaWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x78] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10190841 Catch@10190841

void Catch_10190841(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10190855 Catch@10190855

void Catch_10190855(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::NCEulaWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10190880 FUN_10190880

void FUN_10190880(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215988;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCEulaWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101908e0 FUN_101908e0

void FUN_101908e0(byte param_1)

{
  void *in_ECX;
  
  FUN_10190880();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1ec);
  }
  return;
}


// ==== 10190910 FUN_10190910

undefined4 FUN_10190910(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  UPackage *pUVar4;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  uint uVar5;
  FString *pFStack_8c;
  FString *pFStack_70;
  wchar_t *pwStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215a18;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar5 = 0;
  local_18 = 0;
  local_8 = 0;
  uStack_50 = 0x1019094a;
  FUN_10061b40();
  uStack_50 = 1;
  pwStack_54 = L"L2UI_ch3.LobbyWnd.lobby3_back";
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  uStack_50 = 0;
  local_20 = (undefined1 *)&pwStack_54;
  FName::FName((FName *)&pwStack_54,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1018fa30();
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_50 = 0x1019098d;
    piVar3 = (int *)FUN_101903a0();
  }
  *(int **)(in_ECX + 0x1d0) = piVar3;
  uStack_50 = 3;
  pwStack_54 = (wchar_t *)0x0;
  (**(code **)(*piVar3 + 0xc0))();
  pFStack_70 = *(FString **)(in_ECX + 0x1d0);
  FUN_10060d40();
  pFStack_70 = (FString *)0x101909d3;
  FUN_1005c1e0();
  local_20 = (undefined1 *)&pFStack_70;
  pFStack_70 = extraout_ECX;
  FName::FName((FName *)&pFStack_70,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_70 = (FString *)0x10190a07;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_70 = (FString *)0x10190a20;
    FString::FString(local_30,(ushort *)L"L2UI_ch3.button.btn1_normal");
    local_8 = 2;
    uVar5 = 3;
    local_18 = 3;
    pFStack_70 = local_3c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  local_8 = 1;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    local_18 = uVar5;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffe;
    local_18 = uVar5;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) = 0xa000fa;
  pFStack_70 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  pFStack_8c = *(FString **)(in_ECX + 0x1d4);
  FUN_10060d40();
  pFStack_8c = (FString *)0x10190ad0;
  FUN_1005c1e0();
  pFStack_8c = (FString *)0x10190ae0;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_8c;
  pFStack_8c = extraout_ECX_00;
  FName::FName((FName *)&pFStack_8c,0);
  pUVar4 = UObject::GetTransientPackage();
  iVar2 = FUN_1000a130(0x33c,pUVar4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_8c = (FString *)0x10190b18;
    FString::FString(local_30,(ushort *)L"L2UI_ch3.button.btn1_normalon");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = uVar5 | 4;
    pFStack_8c = (FString *)0x10190b30;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.btn1_normal");
    local_8 = 4;
    uVar5 = uVar5 | 0xc;
    pFStack_8c = local_30;
    local_18 = uVar5;
    uVar1 = FUN_10006980(local_3c);
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  local_8 = 3;
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    local_18 = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 4) != 0) {
    local_18 = uVar5 & 0xfffffffb;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xa000fb;
  pFStack_8c = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))(0x114,0x18c,0x4c,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d8),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(600);
  *(undefined4 *)(in_ECX + 0x1e4) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10190c0f Catch@10190c0f

void Catch_10190c0f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10190c23 Catch@10190c23

void Catch_10190c23(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEulaWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10190c40 FUN_10190c40

void FUN_10190c40(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCAnnounceWnd::vftable;
  in_ECX[0x73] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10190ca0 FUN_10190ca0

void FUN_10190ca0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215a78;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCAnnounceWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10190d00 FUN_10190d00

void FUN_10190d00(byte param_1)

{
  void *in_ECX;
  
  FUN_10190ca0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d8);
  }
  return;
}


// ==== 10190d70 FUN_10190d70

bool FUN_10190d70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100c4910(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10190dd0 FUN_10190dd0

undefined4 FUN_10190dd0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_1002cfe0(param_2 & 0xffff,param_2 >> 0x10,0,0);
  *(undefined4 *)(in_ECX + 0x280) = uVar1;
  return 1;
}


// ==== 10190e00 FUN_10190e00

undefined4 FUN_10190e00(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215aa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x1ac))(param_1,param_2);
  ExceptionList = local_10;
  return 1;
}


// ==== 10190e64 Catch@10190e64

void Catch_10190e64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10190e78 Catch@10190e78

void Catch_10190e78(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_InvenItemWnd::OnLButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10190ea0 FUN_10190ea0

bool FUN_10190ea0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xfc) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfd) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10190f20 FUN_10190f20

void FUN_10190f20(int param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FName local_8 [8];
  
  iVar1 = *(int *)(param_1 + 4);
  FName::FName(local_8,0);
  iVar2 = FName::operator==((FName *)(param_1 + 0x50),local_8);
  if (iVar2 == 0) {
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x50));
    appStrcpy(param_2,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x54));
    appStrcpy(param_2 + 0x100,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x3c));
    appStrcpy(param_2 + 0x200,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x40));
    appStrcpy(param_2 + 0x280,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x44));
    appStrcpy(param_2 + 0x300,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x48));
    appStrcpy(param_2 + 0x380,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x4c));
    appStrcpy(param_2 + 0x400,puVar3);
    puVar3 = FString::operator*((FString *)(param_1 + 0x58));
    appStrcpy(param_2 + 0x500,puVar3);
    *(int *)(param_2 + 0xe0e) = iVar1;
    uVar4 = 1;
    *(undefined4 *)(param_2 + 0xe14) = *(undefined4 *)(param_1 + 0xc);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x3c));
    iVar2 = FUN_1003f630(puVar3,uVar4);
    *(int *)(param_2 + 0xe02) = iVar2;
    if (iVar2 == 0) {
      appStrcpy(param_2 + 0x200,(ushort *)L"Icon.NoImage");
      uVar4 = FUN_1003f630(L"Icon.NoImage",1);
      *(undefined4 *)(param_2 + 0xe02) = uVar4;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_2 + 0xe22) = *(undefined4 *)(param_1 + 0x130);
      *(undefined4 *)(param_2 + 0xe24) = *(undefined4 *)(param_1 + 0x128);
      *(undefined4 *)(param_2 + 0xe26) = *(undefined4 *)(param_1 + 300);
      *(undefined4 *)(param_2 + 0xe2c) = *(undefined4 *)(param_1 + 0x144);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(param_1 + 0x134);
      *(undefined4 *)(param_2 + 0xe48) = *(undefined4 *)(param_1 + 0x154);
      *(undefined4 *)(param_2 + 0xe4a) = *(undefined4 *)(param_1 + 0x158);
      *(undefined4 *)(param_2 + 0xe1c) = *(undefined4 *)(param_1 + 0xd4);
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_2 + 0xe58) = *(undefined4 *)(param_1 + 0xfc);
      *(undefined4 *)(param_2 + 0xe10) = *(undefined4 *)(param_1 + 0x100);
      if ((*(int *)(param_1 + 0x100) == 2) || (*(int *)(param_1 + 0x100) == 0x10)) {
        param_2[0xe60] = 1;
        param_2[0xe61] = 0;
        return;
      }
      if (*(int *)(param_1 + 0x100) == 5) {
        param_2[0xe62] = 1;
        param_2[0xe63] = 0;
      }
    }
  }
  return;
}


// ==== 10191160 FUN_10191160

void FUN_10191160(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x13c))();
  }
  FUN_1005ff00();
  ExceptionList = local_10;
  return;
}


// ==== 101911cd Catch@101911cd

void Catch_101911cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101911e1 Catch@101911e1

void Catch_101911e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10191200 FUN_10191200

void FUN_10191200(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1d4) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x138))();
  }
  FUN_1005fe50();
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x1f8))();
  ExceptionList = local_10;
  return;
}


// ==== 1019127d Catch@1019127d

void Catch_1019127d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10191291 Catch@10191291

void Catch_10191291(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101912b0 FUN_101912b0

undefined4 FUN_101912b0(uint param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 < 8) && (*(int *)(in_ECX + 0x1cc + param_1 * 4) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x1cc + param_1 * 4) + 0x204))(param_2);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10191322 Catch@10191322

void Catch_10191322(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10191336 Catch@10191336

void Catch_10191336(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::AddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10191360 FUN_10191360

undefined4 FUN_10191360(int param_1)

{
  int *in_ECX;
  
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 500))();
  }
  return 1;
}


// ==== 10191380 FUN_10191380

bool FUN_10191380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_101758f0(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 101913a0 FUN_101913a0

undefined4 FUN_101913a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10033250();
  ExceptionList = local_10;
  return 1;
}


// ==== 101913f5 Catch@101913f5

void Catch_101913f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10191409 Catch@10191409

void Catch_10191409(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_CharacterSelect_List::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10191430 FUN_10191430

undefined4 FUN_10191430(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100326c0(param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 1019148b Catch@1019148b

void Catch_1019148b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019149f Catch@1019149f

void Catch_1019149f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_CharacterSelect_List::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101914c0 FUN_101914c0

undefined4 FUN_101914c0(void)

{
  FUN_10032d00();
  return 1;
}


// ==== 101914d0 FUN_101914d0

undefined4 FUN_101914d0(undefined4 param_1)

{
  FUN_10032390(param_1);
  return 1;
}


// ==== 101914f0 FUN_101914f0

undefined4 FUN_101914f0(undefined4 param_1,undefined4 param_2)

{
  FUN_10032c50(param_1,param_2);
  return 1;
}


// ==== 10191510 FUN_10191510

void FUN_10191510(void)

{
  thunk_FUN_10049a00();
  return;
}


// ==== 10191520 FUN_10191520

undefined4 FUN_10191520(int param_1)

{
  int *in_ECX;
  
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x200))();
  }
  return 1;
}


// ==== 10191540 FUN_10191540

void FUN_10191540(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_2;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[10] = 0xffffffff;
  in_ECX[9] = param_1;
  in_ECX[0xb] = 0;
  return;
}


// ==== 10191580 FUN_10191580

void FUN_10191580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a8b60,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101915b0 FUN_101915b0

void FUN_101915b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a95c0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 101915e0 FUN_101915e0

void FUN_101915e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a9af0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10191610 FUN_10191610

undefined4 FUN_10191610(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014a7d0();
  if ((*(int *)(iVar1 + 0x3f0) != 0) &&
     (iVar1 = FUN_1014a7d0(), *(int *)(*(int *)(iVar1 + 0x3f0) + 0x69c) != 0)) {
    iVar1 = FUN_1002cfe0(param_2 & 0xffff,param_2 >> 0x10,0,0);
    in_ECX[0x9f] = iVar1;
    if ((-1 < iVar1) && (iVar1 < in_ECX[0x91])) {
      (**(code **)(*in_ECX + 0x234))();
      FUN_1002cc50();
      iVar2 = FUN_1014a7d0();
      iVar1 = *(int *)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e6c);
      if (iVar1 == 0xe) {
        *(undefined4 *)(iVar2 + 0x2a0) = 0;
        *(undefined4 *)(iVar2 + 0x2a4) = 0;
      }
      else if ((iVar1 == 7) || (iVar1 == 8)) {
        *(undefined4 *)(iVar2 + 700) = 0;
      }
      iVar1 = *(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4);
      if (*(int *)(iVar2 + 0x284 + *(int *)(iVar1 + 0x1e6c) * 4) == *(int *)(iVar1 + 0x1e5c)) {
        *(undefined4 *)(iVar2 + 0x284 + *(int *)(iVar1 + 0x1e6c) * 4) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x284 + *(int *)(iVar1 + 0x1e6c) * 4) =
             *(undefined4 *)(iVar1 + 0x1e5c);
      }
      User::SetPawnResource((User *)(iVar2 + 0x1ec));
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10191786 Catch@10191786

void Catch_10191786(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019179a Catch@1019179a

void Catch_1019179a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_InvenItemWnd::OnRButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101917c0 FUN_101917c0

undefined4 FUN_101917c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x1e4) != 0) {
    FUN_10021a00(0,0x14,0xf0,0xb9,0,0,0xf0,0xb9,*(int *)(in_ECX + 0x1e4),0xff,1);
  }
  if (*(int *)(in_ECX + 0x1e8) != 0) {
    FUN_10021a00(0,0xcd,0xf0,0x46,0,0x112,0xf0,0x46,*(int *)(in_ECX + 0x1e8),0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 101918d1 Catch@101918d1

void Catch_101918d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101918e5 Catch@101918e5

void Catch_101918e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10191910 FUN_10191910

void FUN_10191910(void)

{
  int *piVar1;
  ushort *puVar2;
  UClass *pUVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *in_ECX;
  undefined4 *puStack_1f0;
  UObject *pUVar9;
  ushort *puVar10;
  ulong uVar11;
  UPackageMap *pUVar12;
  uint uStack_1c0;
  undefined1 local_1b0 [8];
  undefined4 local_1a8;
  undefined4 *local_1a4;
  float local_1a0;
  float local_18c;
  undefined4 local_17c;
  undefined4 local_178;
  float local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  float local_140;
  int *local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 *local_12c;
  undefined1 *local_128;
  int *local_124;
  float local_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  undefined4 local_10c;
  ushort local_108 [128];
  uint local_8;
  
  puStack_110 = &LAB_10215ba0;
  local_114 = ExceptionList;
  uStack_1c0 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_1c0;
  ExceptionList = &local_114;
  local_10c = 0;
  local_124 = in_ECX;
  local_8 = uStack_1c0;
  FName::FName((FName *)&local_128,0);
  if (-1 < in_ECX[0xc4]) {
    piVar1 = *(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
    local_120 = *(float *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c)
    ;
    FName::FName((FName *)&local_11c,(ushort *)L"Engine.PlayerController",1);
    local_128 = local_11c;
    pUVar12 = (UPackageMap *)0x0;
    uVar11 = 1;
    puVar10 = (ushort *)0x0;
    puVar2 = FName::operator*((FName *)&local_128);
    pUVar9 = (UObject *)0x0;
    pUVar3 = AController::StaticClass();
    pUVar3 = UObject::StaticLoadClass(pUVar3,pUVar9,puVar2,puVar10,uVar11,pUVar12);
    local_170 = 0;
    local_16c = 0;
    local_168 = (undefined4 *)0x0;
    iVar4 = *piVar1;
    FRotator::FRotator((FRotator *)&local_140,0,0,0);
    local_11c = (undefined1 *)&puStack_1f0;
    puStack_1f0 = local_168;
    FName::FName((FName *)&puStack_1f0,0);
    iVar4 = (**(code **)(iVar4 + 0xc0))(pUVar3);
    if (iVar4 == 0) {
      appFailAssert("pController",".\\Src\\NNpcViewerWnd.cpp",0x1ff);
    }
    piVar5 = (int *)FUN_10032ee0();
    local_124 = piVar5;
    iVar6 = FUN_1014a7d0();
    *(int *)(iVar6 + 0x200) = *piVar5;
    FUN_1014a7d0();
    pUVar12 = (UPackageMap *)0x0;
    uVar11 = 0;
    puVar10 = (ushort *)0x0;
    puVar2 = L2FName::operator*((L2FName *)(piVar5 + 8));
    pUVar9 = (UObject *)0x0;
    pUVar3 = APawn::StaticClass();
    pUVar3 = UObject::StaticLoadClass(pUVar3,pUVar9,puVar2,puVar10,uVar11,pUVar12);
    *(UClass **)(iVar4 + 0x4f8) = pUVar3;
    if (*(int *)GLog_exref != 0) {
      L2FName::operator*((L2FName *)(piVar5 + 8));
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
    if (*(int *)(iVar4 + 0x4f8) != 0) {
      iVar6 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c) + 0x3bc);
      local_134 = *(undefined4 *)(iVar6 + 0x1bc);
      local_130 = *(undefined4 *)(iVar6 + 0x1c0);
      local_12c = (undefined4 *)(*(float *)(iVar6 + 0x1c4) + 60.0);
      iVar6 = *piVar1;
      FRotator::FRotator((FRotator *)&local_140,0,0,0);
      local_11c = (undefined1 *)&puStack_1f0;
      puStack_1f0 = local_12c;
      FName::FName((FName *)&puStack_1f0,0);
      piVar5 = (int *)(**(code **)(iVar6 + 0xc0))(*(undefined4 *)(iVar4 + 0x4f8));
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xac))();
        *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c)
                 + 0x3bc) = piVar5;
        piVar5[0x536] = (int)local_120;
        *(undefined1 *)((int)piVar5 + 0xc2) = 4;
        local_15c = 0;
        local_158 = 0;
        local_154 = 0x3f800000;
        (**(code **)(*piVar5 + 0x1c8))();
        piVar5[0x1a7] = *local_124;
        iVar4 = FUN_1014a7d0();
        *(int **)(iVar4 + 0x3f0) = piVar5;
        iVar4 = FUN_1014a7d0();
        User::SetPawnResource((User *)(iVar4 + 0x1ec));
        iVar4 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                 + 0x3c) + 0x3bc);
        local_17c = *(undefined4 *)(iVar4 + 0x1bc);
        local_178 = *(undefined4 *)(iVar4 + 0x1c0);
        local_174 = *(float *)(iVar4 + 0x1c4);
        local_144 = local_174 + 50.0;
        local_14c = local_17c;
        local_148 = local_178;
        for (iVar4 = 0; local_164 = iVar4, iVar4 < 0x1e; iVar4 = iVar4 + 1) {
          FUN_10191540();
          local_144 = local_144 + 30.0;
          local_174 = local_174 - 30.0;
          local_140 = (float)piVar5[0xbc];
          local_13c = (int *)piVar5[0xbc];
          local_138 = (undefined1 *)piVar5[0xbd];
          puStack_1f0 = &local_14c;
          local_124 = local_13c;
          local_120 = local_140;
          local_11c = local_138;
          (**(code **)(*piVar1 + 0xe4))(local_1b0,piVar5,&local_17c);
          if (local_1a0 != 0.0) {
            local_120 = local_18c * 12.0;
            if (local_120 < 1.9) {
              local_1a0 = (2.15 - local_120) + local_1a0;
            }
            puStack_1f0 = local_1a4;
            (**(code **)(*piVar1 + 0xa8))(piVar5,local_1a8);
            break;
          }
        }
        uVar7 = FUN_101c19e0();
        iVar4 = FUN_1014a7d0();
        *(undefined4 *)(*(int *)(iVar4 + 0x1d4) + 0x234) = uVar7;
        FUN_101c19e0();
        appSprintf(local_108,(ushort *)&DAT_10233718);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x200) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        iVar4 = FUN_1014a7d0();
        *(undefined4 *)(*(int *)(iVar4 + 0x1d4) + 0x230) = 0x3f800000;
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x1fc) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        puStack_1f0 = (undefined4 *)0x10191ecc;
        appSprintf(local_108,(ushort *)&DAT_1023d700);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x204) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        puStack_1f0 = (undefined4 *)0x10191f29;
        appSprintf(local_108,(ushort *)&DAT_1023d700);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x208) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        puStack_1f0 = (undefined4 *)0x10191f86;
        appSprintf(local_108,(ushort *)&DAT_1023d700);
        iVar4 = FUN_1014a7d0();
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x1d4) + 0x20c) + 0x174))();
        FUN_1014a7d0();
        FUN_10016ea0();
        iVar4 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                 + 0x3c) + 0x3bc);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x104) != 0)) {
          piVar1 = *(int **)(iVar4 + 0x104);
          (**(code **)(*piVar1 + 0x98))();
          FUN_1018ccd0();
          iVar4 = piVar1[0x92];
          if (iVar4 != 0) {
            FName::FName((FName *)&local_11c,0);
            iVar6 = *(int *)(iVar4 + 0x70);
            iVar8 = FUN_1014a7d0();
            (**(code **)(**(int **)(*(int *)(iVar8 + 0x1d4) + 0x1d0) + 0x174))();
            for (iVar8 = 0; local_160 = iVar8, iVar8 < iVar6; iVar8 = iVar8 + 1) {
              local_11c = *(undefined1 **)(iVar8 * 0x74 + *(int *)(iVar4 + 0x6c));
              FName::operator*((FName *)&local_11c);
              FUN_1014a7d0();
              FUN_1000b3d0();
            }
          }
        }
        local_10c = 0xffffffff;
      }
    }
  }
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 101920ad Catch@101920ad

void Catch_101920ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_102a47f0);
}


// ==== 101920c1 Catch@101920c1

void Catch_101920c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_CharacterSelect_List::OnLButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101920e0 FUN_101920e0

undefined4 FUN_101920e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  ushort *puVar3;
  
  FUN_10032350(param_1,param_2);
  if (*(int *)(in_ECX + 0x310) < 0) {
    return 0;
  }
  piVar1 = (int *)FUN_10032ee0(*(int *)(in_ECX + 0x310));
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x238),puVar3);
  iVar2 = FUN_1014a7d0();
  if (*(int *)(*(int *)(*(int *)(iVar2 + 0x1d4) + 0x214) + 0x2fc) == 0) {
    puVar3 = L2FName::operator*((L2FName *)(piVar1 + 9));
    iVar2 = FUN_1014a7d0();
    iVar2 = *(int *)(iVar2 + 0x1d4);
  }
  else {
    puVar3 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,*piVar1);
    iVar2 = FUN_1014a7d0();
    iVar2 = *(int *)(iVar2 + 0x1d4);
  }
  appStrcpy((ushort *)(iVar2 + 0x238),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x438),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x638),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x838),puVar3);
  puVar3 = (ushort *)&DAT_1022f9f8;
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0xa38),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xb));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x438),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xc));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x638),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xd));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0x838),puVar3);
  puVar3 = L2FName::operator*((L2FName *)(piVar1 + 0xe));
  iVar2 = FUN_1014a7d0();
  appStrcpy((ushort *)(*(int *)(iVar2 + 0x1d4) + 0xa38),puVar3);
  return 1;
}


// ==== 101922e0 FUN_101922e0

void FUN_101922e0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215bd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  while (iVar3 < *(int *)(in_ECX + 0x2ec)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x2e8) + iVar3 * 4);
    FUN_1004f760();
    iVar1 = *(int *)(iVar1 + 4);
    if (param_1 == 0) {
      puVar2 = FString::operator*((FString *)(iVar1 + 4));
      FUN_1004f610(puVar2,0);
      iVar3 = iVar3 + 1;
    }
    else {
      puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x24));
      FUN_1004f610(puVar2,0);
      iVar3 = iVar3 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10192381 Catch@10192381

void Catch_10192381(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10192395 Catch@10192395

void Catch_10192395(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_CharacterSelect_List::ToggleNames");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101923c0 FUN_101923c0

undefined4 FUN_101923c0(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  FName aFStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215bf0;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x1d0) + 0x2e4) < param_1) {
    return 1;
  }
  uStack_30 = 0x10192432;
  ExceptionList = &local_10;
  puVar3 = (ushort *)FUN_10009b10();
  piVar1 = *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                             0x3c) + 0x3bc);
  piVar1[0x5cd] = piVar1[0x5cd] & 0xfffffffe;
  piVar1[0x19e] = piVar1[0x19e] | 0x10;
  iVar2 = *piVar1;
  uStack_30 = 0;
  uStack_34 = 1;
  local_38 = 0;
  local_3c = *(undefined4 *)(in_ECX + 0x230);
  FName::FName(aFStack_40,puVar3,1);
  (**(code **)(iVar2 + 0x328))(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 101924ae Catch@101924ae

void Catch_101924ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101924c2 Catch@101924c2

void Catch_101924c2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_CharacterSelectWnd::OnAniNameCombo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101924e0 FUN_101924e0

undefined4 FUN_101924e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10215c10;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar8 = *(int *)(in_ECX + 0x228);
  if (iVar8 != 0) {
    uVar9 = 0xff;
    uVar7 = 0x14;
    uVar6 = 0xf0;
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = 0x14;
    uVar1 = FUN_101c19e0(0x14,0,0,0xf0,0x14,iVar8,0xff);
    FUN_10021970(0,0,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,iVar8,uVar9);
  }
  iVar8 = *(int *)(in_ECX + 0x22c);
  if (iVar8 != 0) {
    uVar9 = 0xff;
    uVar7 = 0x9b;
    uVar6 = 0xf2;
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = FUN_101c19e0(0,0,0xf2,0x9b,iVar8,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021970(0,0x14,uVar2,uVar1,uVar4,uVar5,uVar6,uVar7,iVar8,uVar9);
  }
  FUN_100217a0(10,0x12d,0xffffff00,in_ECX + 0x238,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x13d,0xffffff00,in_ECX + 0x438,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x14d,0xffffff00,in_ECX + 0x638,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x15d,0xffffff00,in_ECX + 0x838,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x16d,0xffffff00,in_ECX + 0xa38,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Mesh",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1a2,0xffdcdcdc,L"Mesh",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex1",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1b6,0xffdcdcdc,L"Tex1",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex2",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1ca,0xffdcdcdc,L"Tex2",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex3",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1de,0xffdcdcdc,L"Tex3",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"Tex4",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x1f2,0xffdcdcdc,L"Tex4",0,0,0,0,0,
               0,0,0,0,0,0,0xffffffff);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bd1c));
  FUN_10020bb0(&local_24,puVar3,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7);
  FUN_10020bb0(&local_24,L"CollisionH",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 5,(0x10 - local_20) / 2 + 0x206,0xffdcdcdc,L"ColliH",0,0,0,0,
               0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_24,L"CollisionR",0,0,0,0,0,0);
  FUN_100217a0((0x40 - local_24) / 2 + 100,(0x10 - local_20) / 2 + 0x206,0xffdcdcdc,L"ColliR",0,0,0,
               0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x226,0xffdcdcdc,L"Speed",0,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  FUN_100217a0(0x96,(0x10 - local_20) / 2 + 0x226,0xffdcdcdc,L"AnimRate",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x23a,0xffdcdcdc,L"ColliH",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x96,(0x10 - local_20) / 2 + 0x23a,0xffdcdcdc,L"ColliR",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - local_20) / 2 + 0x24e,0xffdcdcdc,L"Scale",0,0,0,0,0,0,0,0,0,0,0,0xffffffff
              );
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10192a53 Catch@10192a53

void Catch_10192a53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10192a67 Catch@10192a67

void Catch_10192a67(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_CharacterSelectWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10192a90 FUN_10192a90

undefined4 FUN_10192a90(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  ushort *puVar5;
  int in_ECX;
  float10 extraout_ST0;
  double dVar6;
  float fVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar1 = false;
  iVar2 = FUN_1014a7d0();
  iVar2 = *(int *)(iVar2 + 0x3f0);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x1fc) + 0x1f8))();
  if (iVar3 != 0) {
    pwVar4 = (wchar_t *)(**(code **)(**(int **)(in_ECX + 0x1fc) + 0x1f8))();
    dVar6 = __wtof(pwVar4);
    fVar7 = (float)dVar6;
    if (0.0 < fVar7) {
      *(float *)(in_ECX + 0x230) = fVar7;
      *(float *)(iVar2 + 0x6b4) = fVar7;
      if (*(int *)(iVar2 + 0x134) != 0) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x134) + 0x184);
        *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0x20) * *(float *)(in_ECX + 0x230);
      }
    }
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x200) + 0x1f8))();
  if (iVar3 != 0) {
    pwVar4 = (wchar_t *)(**(code **)(**(int **)(in_ECX + 0x200) + 0x1f8))();
    dVar6 = __wtof(pwVar4);
    if (0.0 < (float)dVar6) {
      iVar3 = FUN_101c19e0();
      *(int *)(in_ECX + 0x234) = iVar3;
      if ((float10)*(float *)(in_ECX + 0x230) <= extraout_ST0) {
        *(float *)(iVar2 + 0x6ec) = (float)iVar3;
      }
      else {
        *(float *)(iVar2 + 0x6ec) = (float)iVar3 / *(float *)(in_ECX + 0x230);
      }
    }
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x204) + 0x1f8))();
  if (iVar3 != 0) {
    puVar5 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x204) + 0x1f8))();
    fVar7 = appAtof(puVar5);
    if ((0.0 < fVar7) &&
       (iVar3 = FUN_1014a7d0(), fVar7 != *(float *)(*(int *)(iVar3 + 0x3f0) + 0x2f0))) {
      *(float *)(iVar2 + 0x2f0) = fVar7;
      bVar1 = true;
    }
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x208) + 0x1f8))();
  if (iVar3 != 0) {
    puVar5 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x208) + 0x1f8))();
    fVar7 = appAtof(puVar5);
    if ((0.0 < fVar7) && (fVar7 != *(float *)(iVar2 + 0x2f4))) {
      *(float *)(iVar2 + 0x2f4) = fVar7;
      bVar1 = true;
    }
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20c) + 0x1f8))();
  if (iVar3 != 0) {
    puVar5 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x20c) + 0x1f8))();
    fVar7 = appAtof(puVar5);
    if ((0.0 < fVar7) && (fVar7 != *(float *)(iVar2 + 0x27c))) {
      *(float *)(iVar2 + 0x27c) = fVar7;
      goto LAB_10192cdb;
    }
  }
  if (!bVar1) {
    return 1;
  }
LAB_10192cdb:
  uStack_48 = *(undefined4 *)(iVar2 + 0x1bc);
  uStack_44 = *(undefined4 *)(iVar2 + 0x1c0);
  fStack_40 = *(float *)(iVar2 + 0x1c4);
  iVar3 = 0;
  uStack_3c = uStack_48;
  uStack_38 = uStack_44;
  fStack_34 = fStack_40;
  do {
    uStack_28 = 0;
    uStack_24 = 0;
    fStack_20 = 0.0;
    uStack_1c = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_2c = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    uStack_c = 0x3f800000;
    uStack_8 = 0xffffffff;
    fStack_40 = *(float *)(iVar2 + 0x2f4) + fStack_40;
    fStack_34 = fStack_34 - *(float *)(iVar2 + 0x2f4);
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c) + 0xe4))
              (&uStack_30,iVar2,&uStack_3c,&uStack_48,0x86,*(undefined4 *)(iVar2 + 0x2f0),
               *(undefined4 *)(iVar2 + 0x2f0),*(undefined4 *)(iVar2 + 0x2f4));
    if (fStack_20 != 0.0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c) + 0xa8))
                (iVar2,uStack_28,uStack_24,fStack_20,1,0,0);
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  return 1;
}


// ==== 10192e30 FUN_10192e30

undefined4 FUN_10192e30(void)

{
  int in_ECX;
  
  FUN_101922e0(*(undefined4 *)(*(int *)(in_ECX + 0x214) + 0x2fc));
  return 1;
}


// ==== 10192e50 FUN_10192e50

void FUN_10192e50(void)

{
  int iVar1;
  ULevel *pUVar2;
  UClass *pUVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  float fStack_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  float local_3c0;
  undefined4 *local_3bc;
  int local_3b8;
  UObject *pUVar8;
  wchar_t *pwVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  UPackageMap *pUVar13;
  UClass *local_38c;
  undefined4 local_388;
  undefined4 local_384;
  float local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  float fStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  float fStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  float fStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  FRotator local_324 [12];
  User aUStack_318 [8];
  undefined4 uStack_310;
  undefined4 uStack_304;
  undefined4 uStack_300;
  APawn *pAStack_114;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_38c;
  piVar4 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
  iVar5 = *(int *)(*piVar4 + 0x3c);
  if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x3bc) != 0)) &&
      (pUVar2 = AActor::GetLevel(*(AActor **)(*piVar4 + 0x3c)), pUVar2 != (ULevel *)0x0)) &&
     (local_38c = *(UClass **)(*(int *)(in_ECX + 0x1cc) + 0x310), -1 < (int)local_38c)) {
    piVar4 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
    iVar5 = *(int *)(*(int *)(*piVar4 + 0x3c) + 0x3bc);
    local_388 = *(undefined4 *)(iVar5 + 0x1bc);
    local_384 = *(undefined4 *)(iVar5 + 0x1c0);
    local_380 = *(float *)(iVar5 + 0x1c4);
    pUVar2 = AActor::GetLevel(*(AActor **)(*piVar4 + 0x3c));
    pUVar13 = (UPackageMap *)0x0;
    uVar12 = 1;
    puVar10 = (ushort *)0x0;
    pwVar9 = L"Engine.PlayerController";
    pUVar8 = (UObject *)0x0;
    pUVar3 = AController::StaticClass();
    local_3b8 = 0x10192f1b;
    pUVar3 = UObject::StaticLoadClass(pUVar3,pUVar8,(ushort *)pwVar9,puVar10,uVar12,pUVar13);
    iVar5 = *(int *)pUVar2;
    piVar4 = (int *)FRotator::FRotator(local_324,0,0,0);
    local_3bc = (undefined4 *)*piVar4;
    local_3b8 = piVar4[1];
    local_3c8 = local_388;
    fStack_3cc = local_380;
    local_3c4 = local_384;
    local_3c0 = local_380;
    FName::FName((FName *)&fStack_3cc,0);
    iVar5 = (**(code **)(iVar5 + 0xc0))(pUVar3);
    FName::FName((FName *)&uStack_370,0);
    puVar6 = (undefined4 *)FUN_10032ee0();
    if (puVar6 != (undefined4 *)0x0) {
      uStack_370 = puVar6[8];
    }
    pUVar13 = (UPackageMap *)0x0;
    uVar12 = 0;
    puVar11 = (ushort *)0x0;
    puVar10 = FName::operator*((FName *)&uStack_370);
    pUVar8 = (UObject *)0x0;
    pUVar3 = APawn::StaticClass();
    local_3b8 = 0x10192fd0;
    local_38c = UObject::StaticLoadClass(pUVar3,pUVar8,puVar10,puVar11,uVar12,pUVar13);
    if (local_38c != (UClass *)0x0) {
      iVar7 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c) + 0x3bc);
      local_3bc = *(undefined4 **)(iVar7 + 0x1c8);
      iVar1 = *(int *)pUVar2;
      local_3b8 = *(undefined4 *)(iVar7 + 0x1cc);
      local_3c8 = local_388;
      fStack_3cc = local_380;
      local_3c4 = local_384;
      local_3c0 = local_380;
      FName::FName((FName *)&fStack_3cc,0);
      iVar7 = (**(code **)(iVar1 + 0xc0))(local_38c);
      *(int *)(iVar5 + 0x3bc) = iVar7;
      *(int *)(iVar7 + 0x14d8) = iVar5;
      *(undefined1 *)(iVar5 + 0xc2) = 4;
      *(undefined1 *)(*(int *)(iVar5 + 0x3bc) + 0xc2) = 4;
      (**(code **)(**(int **)(iVar5 + 0x3bc) + 0x1c8))(1,0,0,0,0x3f800000);
      *(undefined4 *)(*(int *)(iVar5 + 0x3bc) + 0x69c) = *puVar6;
      User::User(aUStack_318);
      uStack_310 = 1;
      uStack_304 = *puVar6;
      uStack_300 = *puVar6;
      pAStack_114 = *(APawn **)(iVar5 + 0x3bc);
      User::SetPawnResource(aUStack_318);
      fStack_364 = local_380 + 50.0;
      uStack_36c = local_388;
      uStack_368 = local_384;
      uStack_360 = local_388;
      uStack_35c = local_384;
      fStack_358 = local_380;
      iVar7 = 0;
      do {
        uStack_34c = 0;
        uStack_354 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        fStack_344 = 0.0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_33c = 0;
        uStack_338 = 0;
        uStack_32c = 0xffffffff;
        fStack_330 = 1.0;
        fStack_364 = fStack_364 + 30.0;
        fStack_358 = fStack_358 - 30.0;
        local_3b8 = *(int *)(iVar5 + 0x3bc);
        uStack_37c = *(undefined4 *)(local_3b8 + 0x2f0);
        uStack_378 = *(undefined4 *)(local_3b8 + 0x2f0);
        uStack_374 = *(undefined4 *)(local_3b8 + 0x2f4);
        local_3bc = &uStack_354;
        local_3c0 = 3.0212418e-29;
        (**(code **)(*(int *)pUVar2 + 0xe4))();
        if (fStack_344 != 0.0) {
          local_38c = (UClass *)(fStack_330 * 12.0);
          if ((float)local_38c < 1.9) {
            fStack_344 = (2.15 - (float)local_38c) + fStack_344;
          }
          local_3b8 = *(int *)(iVar5 + 0x3bc);
          local_3bc = (undefined4 *)0x10193280;
          (**(code **)(*(int *)pUVar2 + 0xa8))();
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      APawn::SpawnEnterEvent(pAStack_114);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_38c);
  return;
}


// ==== 101932b0 FUN_101932b0

void FUN_101932b0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  UClass *pUVar5;
  ULevel *pUVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int in_ECX;
  int unaff_EBP;
  float fVar12;
  EFindName EVar13;
  int *piStack_1ac;
  UObject *pUVar14;
  wchar_t *pwVar15;
  undefined4 uVar16;
  ushort *puVar17;
  ulong uVar18;
  float fVar19;
  UPackageMap *pUVar20;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 *puStack_170;
  float fStack_16c;
  int *piStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_144;
  ushort auStack_12c [14];
  FRotator aFStack_110 [268];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&fStack_178;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x1f8))();
  if (iVar3 != 0) {
    pUVar20 = (UPackageMap *)0x0;
    uVar18 = 0;
    puVar17 = (ushort *)0x0;
    puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1d4) + 0x1f8))();
    pUVar14 = (UObject *)0x0;
    pUVar5 = UMesh::StaticClass();
    pUVar14 = UObject::StaticLoadObject(pUVar5,pUVar14,puVar4,puVar17,uVar18,pUVar20);
    if (pUVar14 != (UObject *)0x0) {
      piVar1 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
      iVar3 = *(int *)(*piVar1 + 0x3c);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x3bc) != 0)) &&
         (pUVar6 = AActor::GetLevel(*(AActor **)(*piVar1 + 0x3c)), pUVar6 != (ULevel *)0x0)) {
        piVar1 = *(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
        fStack_178 = *(float *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c);
        pUVar20 = (UPackageMap *)0x0;
        uVar18 = 1;
        puVar4 = (ushort *)0x0;
        pwVar15 = L"Engine.PlayerController";
        pUVar14 = (UObject *)0x0;
        pUVar5 = AController::StaticClass();
        pUVar5 = UObject::StaticLoadClass(pUVar5,pUVar14,(ushort *)pwVar15,puVar4,uVar18,pUVar20);
        iVar3 = *piVar1;
        puStack_170 = (undefined4 *)0x0;
        fStack_16c = 0.0;
        piStack_168 = (int *)0x0;
        FRotator::FRotator((FRotator *)&uStack_164,0,0,0);
        piStack_1ac = piStack_168;
        FName::FName((FName *)&stack0xfffffe48,0);
        iVar3 = (**(code **)(iVar3 + 0xc0))(pUVar5);
        if (iVar3 == 0) {
          appFailAssert("pController",".\\Src\\NNpcViewerWnd.cpp",0x4bc);
        }
        iVar7 = FUN_1014a7d0();
        *(undefined4 *)(iVar7 + 0x200) = 0;
        FUN_1014a7d0();
        pUVar20 = (UPackageMap *)0x0;
        uVar18 = 0;
        puVar4 = (ushort *)0x0;
        pwVar15 = L"LineageWarrior.LineagePawn";
        pUVar14 = (UObject *)0x0;
        pUVar5 = APawn::StaticClass();
        pUVar5 = UObject::StaticLoadClass(pUVar5,pUVar14,(ushort *)pwVar15,puVar4,uVar18,pUVar20);
        *(UClass **)(iVar3 + 0x4f8) = pUVar5;
        if (pUVar5 != (UClass *)0x0) {
          iVar7 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38
                                              ) + 0x3c) + 0x3bc);
          puStack_170 = *(undefined4 **)(iVar7 + 0x1bc);
          fStack_16c = *(float *)(iVar7 + 0x1c0);
          iVar11 = *piVar1;
          piStack_168 = *(int **)(iVar7 + 0x1c4);
          FRotator::FRotator(aFStack_110,0,0,0);
          piStack_1ac = piStack_168;
          FName::FName((FName *)&stack0xfffffe48,0);
          piVar8 = (int *)(**(code **)(iVar11 + 0xc0))(*(undefined4 *)(iVar3 + 0x4f8));
          if (piVar8 != (int *)0x0) {
            fVar19 = *(float *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) +
                                                   0x38) + 0x3c) + 0x3bc);
            (**(code **)(*piVar1 + 0xac))();
            fStack_16c = 0.0;
            piStack_168 = (int *)0x0;
            uStack_164 = 0x3f800000;
            *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                              0x3c) + 0x3bc) = piVar8;
            pcVar2 = *(code **)(*piVar8 + 0x1c8);
            piVar8[0x536] = unaff_EBP;
            uVar16 = 0;
            *(undefined1 *)((int)piVar8 + 0xc2) = 4;
            (*pcVar2)();
            piVar8[0x1a7] = 0;
            iVar3 = FUN_1014a7d0();
            *(int **)(iVar3 + 0x3f0) = piVar8;
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x1f8))();
            if (iVar3 == 0) {
              fVar12 = 25.0;
            }
            else {
              puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e8) + 0x1f8))();
              piStack_1ac = (int *)0x101935e3;
              fVar12 = appAtof(puVar4);
            }
            piVar8[0xbd] = (int)fVar12;
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
            if (iVar3 == 0) {
              fVar12 = 30.0;
            }
            else {
              puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
              piStack_1ac = (int *)0x1019361f;
              fVar12 = appAtof(puVar4);
            }
            piVar8[0xbc] = (int)fVar12;
            piStack_1ac = *(int **)(in_ECX + 0x1d4);
            puVar9 = (undefined4 *)(*piVar8 + 0xd0);
            EVar13 = 1;
            puVar4 = (ushort *)(**(code **)(*piStack_1ac + 0x1f8))();
            FName::FName((FName *)&piStack_1ac,puVar4,EVar13);
            (*(code *)*puVar9)();
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1d8) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1dc) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e0) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
            if (iVar3 != 0) {
              puVar10 = (undefined4 *)(*piVar8 + 0xd4);
              EVar13 = 1;
              puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
              FName::FName((FName *)&stack0xfffffe48,puVar4,EVar13);
              (*(code *)*puVar10)(9);
            }
            fStack_178 = fVar19 + 50.0;
            iVar3 = 0;
            uStack_174 = uVar16;
            puStack_170 = puVar9;
            fStack_16c = fVar19;
            do {
              FUN_10191540();
              fStack_178 = fStack_178 + 30.0;
              fStack_16c = fStack_16c - 30.0;
              (**(code **)(*piVar1 + 0xe4))
                        (&piStack_168,piVar8,&uStack_174,&stack0xfffffe80,0x86,piVar8[0xbc]);
              if (fStack_158 != 0.0) {
                if (fStack_144 * 12.0 < 1.9) {
                  fStack_158 = (2.15 - fStack_144 * 12.0) + fStack_158;
                }
                (**(code **)(*piVar1 + 0xa8))(piVar8,uStack_160,uStack_15c,fStack_158,0);
                break;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < 0x1e);
            uVar16 = FUN_101c19e0();
            iVar3 = FUN_1014a7d0();
            *(undefined4 *)(*(int *)(iVar3 + 0x1d4) + 0x234) = uVar16;
            FUN_101c19e0();
            appSprintf(auStack_12c,(ushort *)&DAT_10233718);
            iVar3 = FUN_1014a7d0();
            (**(code **)(**(int **)(*(int *)(iVar3 + 0x1d4) + 0x200) + 0x174))();
            FUN_1014a7d0();
            FUN_10016ea0();
            iVar3 = FUN_1014a7d0();
            *(undefined4 *)(*(int *)(iVar3 + 0x1d4) + 0x230) = 0x3f800000;
            iVar3 = FUN_1014a7d0();
            (**(code **)(**(int **)(*(int *)(iVar3 + 0x1d4) + 0x1fc) + 0x174))();
            FUN_1014a7d0();
            FUN_10016ea0();
            iVar3 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) +
                                                0x38) + 0x3c) + 0x3bc);
            if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
              piVar1 = *(int **)(iVar3 + 0x104);
              (**(code **)(*piVar1 + 0x98))();
              FUN_1018ccd0();
              iVar3 = piVar1[0x92];
              if (iVar3 != 0) {
                FName::FName((FName *)&fStack_178,0);
                iVar7 = *(int *)(iVar3 + 0x70);
                iVar11 = FUN_1014a7d0();
                (**(code **)(**(int **)(*(int *)(iVar11 + 0x1d4) + 0x1d0) + 0x174))();
                if (0 < iVar7) {
                  iVar11 = 0;
                  do {
                    fStack_178 = *(float *)(iVar11 + *(int *)(iVar3 + 0x6c));
                    FName::operator*((FName *)&fStack_178);
                    FUN_1014a7d0();
                    FUN_1000b3d0();
                    iVar11 = iVar11 + 0x74;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&fStack_178);
  return;
}


// ==== 10193ac0 FUN_10193ac0

bool FUN_10193ac0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x1f05) {
      iVar1 = FUN_101923c0(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf5) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf6) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf9) {
      iVar1 = (**(code **)(*in_ECX + 0x200))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfb) {
      iVar1 = (**(code **)(*in_ECX + 0x204))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfa) {
      iVar1 = (**(code **)(*in_ECX + 0x208))();
      return iVar1 != 0;
    }
    if (param_2 == 0x1100) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf4) {
      iVar1 = (**(code **)(*in_ECX + 0x20c))(param_3);
      return iVar1 != 0;
    }
    if ((((param_2 == 0xf8) || (param_2 == 0xf7)) || (param_2 == 0xfe)) ||
       ((param_2 == 0xff || (param_2 == 0x1101)))) {
      iVar1 = (**(code **)(*in_ECX + 0x210))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10193c50 FUN_10193c50

void FUN_10193c50(void)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uStack_48;
  int local_30;
  FName local_20 [4];
  L2FName *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10215c38;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_18 = 0;
  piVar1 = *(int **)(GL2GameData_exref + 0x1838);
  local_30 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  do {
    if (piVar1[1] <= local_30) {
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_100d10a0();
      FUN_10191510(local_18,0x14);
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) + 0x308) = 0;
      ExceptionList = local_10;
      return;
    }
    iVar6 = *(int *)(*piVar1 + 8 + local_30 * 0xc);
    if (iVar6 != 0) {
      iVar2 = FString::operator_int((FString *)(iVar6 + 4));
      if (iVar2 != 0) {
        FName::FName(local_20,0);
        local_1c = (L2FName *)(iVar6 + 0x24);
        iVar2 = FName::operator==((FName *)local_1c,local_20);
        if (iVar2 == 0) {
          if (*(int *)(*(int *)(*(int *)(in_ECX + 0x1d4) + 0x220) + 0x2fc) != 0) {
            pwVar5 = L"lineagenpcs";
            puVar3 = L2FName::operator*(local_1c);
            puVar3 = appStristr(puVar3,(ushort *)pwVar5);
            if (puVar3 != (ushort *)0x0) goto LAB_10193d8d;
          }
          if (*(int *)(*(int *)(*(int *)(in_ECX + 0x1d4) + 0x220) + 0x2fc) != 0) {
            pwVar5 = L"lineagedecos";
            puVar3 = L2FName::operator*(local_1c);
            puVar3 = appStristr(puVar3,(ushort *)pwVar5);
            if (puVar3 != (ushort *)0x0) goto LAB_10193d8d;
          }
          if (*(int *)(*(int *)(*(int *)(in_ECX + 0x1d4) + 0x224) + 0x2fc) != 0) {
            pwVar5 = L"lineagemonsters";
            puVar3 = L2FName::operator*(local_1c);
            puVar3 = appStristr(puVar3,(ushort *)pwVar5);
            if (puVar3 != (ushort *)0x0) goto LAB_10193d8d;
          }
        }
        else {
LAB_10193d8d:
          local_18 = local_18 + 1;
          uVar4 = 0xffdcdcdc;
          if (*(int *)(*(int *)(*(int *)(in_ECX + 0x1d4) + 0x214) + 0x2fc) == 0) {
            iVar2 = **(int **)(*(int *)(in_ECX + 0x1d4) + 0x1cc);
            puVar3 = FL2GameData::GetNpcName
                               ((FL2GameData *)GL2GameData_exref,
                                *(int *)(*piVar1 + 4 + local_30 * 0xc));
          }
          else {
            iVar2 = **(int **)(*(int *)(in_ECX + 0x1d4) + 0x1cc);
            puVar3 = L2FName::operator*(local_1c);
          }
          (**(code **)(iVar2 + 0x1fc))(puVar3,uVar4,iVar6);
        }
      }
    }
    local_30 = local_30 + 1;
  } while( true );
}


// ==== 10193e74 Catch@10193e74

void Catch_10193e74(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10193e88 Catch@10193e88

void Catch_10193e88(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::AddAllCharacter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10193eb0 FUN_10193eb0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10193eb0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  int local_1cf0;
  undefined1 local_1cec [7396];
  uint local_8;
  
  puStack_1cf4 = &LAB_10215c68;
  local_1cf8 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1cec;
  ExceptionList = &local_1cf8;
  iVar3 = 0;
  local_1cf0 = 0;
  if (*(int *)(in_ECX + 0x3f80) == 0) {
    piVar1 = *(int **)(GL2GameData_exref + 0x1834);
    local_1cf0._0_1_ = 1;
    local_1cf0._1_3_ = 0;
    for (; iVar3 < piVar1[1]; iVar3 = iVar3 + 1) {
      iVar2 = *(int *)(*piVar1 + 8 + iVar3 * 0xc);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) {
        FUN_1002be90();
        FUN_10190f20(iVar2,local_1cec);
        FUN_101912b0(0,local_1cec);
        *(int *)(*(int *)(in_ECX + 0x1cc) + 0x268) = *(int *)(*(int *)(in_ECX + 0x1cc) + 0x268) + 1;
      }
    }
    local_1cf0 = (uint)local_1cf0._1_3_ << 8;
    FUN_100d10a0();
    *(undefined4 *)(in_ECX + 0x3f80) = 1;
    local_1cf0 = 0xffffffff;
  }
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 10193fbb Catch@10193fbb

void Catch_10193fbb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10193fcf Catch@10193fcf

void Catch_10193fcf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::AddAllItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10193ff0 FUN_10193ff0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10193ff0(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int in_ECX;
  uint uStack_1d2c;
  FName local_1d18 [4];
  ushort *local_1d14;
  int *local_1d0c;
  int *local_1d08;
  int local_1d04;
  undefined4 local_1d00;
  undefined1 *local_1cfc;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  int local_1cf0;
  undefined1 local_1cec [7396];
  uint local_8;
  
  local_1cf0 = 0xffffffff;
  puStack_1cf4 = &LAB_10215c98;
  local_1cf8 = ExceptionList;
  uStack_1d2c = DAT_103554c4 ^ (uint)local_1cec;
  local_1cfc = (undefined1 *)&uStack_1d2c;
  ExceptionList = &local_1cf8;
  local_8 = uStack_1d2c;
  local_1d14 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1dc) + 0x1f8))();
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  local_1d0c = *(int **)(GL2GameData_exref + 0x1834);
  local_1d00 = 0;
  local_1cf0._0_1_ = 1;
  local_1cf0._1_3_ = 0;
  local_1d08 = local_1d0c;
  for (local_1d04 = 0; local_1d04 < local_1d08[1]; local_1d04 = local_1d04 + 1) {
    iVar1 = *(int *)(*local_1d08 + 8 + local_1d04 * 0xc);
    if (iVar1 != 0) {
      FName::FName(local_1d18,0);
      iVar2 = FName::operator==((FName *)(iVar1 + 0x50),local_1d18);
      if (iVar2 == 0) {
        puVar4 = local_1d14;
        puVar3 = L2FName::operator*((L2FName *)(iVar1 + 0x50));
        puVar4 = appStrstr(puVar3,puVar4);
        if ((puVar4 != (ushort *)0x0) && ((*(int *)(iVar1 + 4) == 0 || (*(int *)(iVar1 + 4) == 2))))
        {
          FUN_1002be90();
          FUN_10190f20(iVar1,local_1cec);
          FUN_101912b0(1,local_1cec);
          *(int *)(*(int *)(in_ECX + 0x1d0) + 0x268) =
               *(int *)(*(int *)(in_ECX + 0x1d0) + 0x268) + 1;
        }
      }
    }
  }
  local_1cf0 = (uint)local_1cf0._1_3_ << 8;
  FUN_100d10a0();
  FUN_10050ec0(1,1);
  local_1cf0 = 0xffffffff;
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 1019416d Catch@1019416d

void Catch_1019416d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10194181 Catch@10194181

void Catch_10194181(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::OnSearchBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101941a0 FUN_101941a0

undefined4 FUN_101941a0(void)

{
  FName *this;
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int in_ECX;
  undefined4 uVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int iStack_30;
  FName aFStack_24 [4];
  FName aFStack_20 [4];
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10215cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (ushort *)
           (**(code **)(**(int **)(in_ECX + 0x1f0) + 0x1f8))(DAT_103554c4 ^ (uint)&stack0xffffffc0);
  iStack_30 = 0;
  if (puVar3 != (ushort *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
    piVar1 = *(int **)(GL2GameData_exref + 0x1838);
    iStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    piStack_1c = piVar1;
    piStack_18 = piVar1;
    if (0 < piVar1[1]) {
      do {
        iVar2 = iStack_14 * 0xc;
        piVar9 = *(int **)(iVar2 + 8 + *piVar1);
        if ((piVar9 != (int *)0x0) &&
           (iVar4 = FString::operator_int((FString *)(piVar9 + 1)), iVar4 != 0)) {
          FName::FName(aFStack_24,0);
          this = (FName *)(piVar9 + 9);
          iVar4 = FName::operator==(this,aFStack_24);
          if (iVar4 == 0) {
            if (*(int *)(*(int *)(in_ECX + 0x220) + 0x2fc) != 0) {
              pwVar8 = L"lineagenpcs";
              puVar5 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar5,(ushort *)pwVar8);
              if (puVar5 != (ushort *)0x0) goto LAB_101942fe;
            }
            if (*(int *)(*(int *)(in_ECX + 0x220) + 0x2fc) != 0) {
              pwVar8 = L"lineagedecos";
              puVar5 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar5,(ushort *)pwVar8);
              if (puVar5 != (ushort *)0x0) goto LAB_101942fe;
            }
            if (*(int *)(*(int *)(in_ECX + 0x224) + 0x2fc) != 0) {
              pwVar8 = L"lineagemonsters";
              puVar5 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar5,(ushort *)pwVar8);
              if (puVar5 != (ushort *)0x0) goto LAB_101942fe;
            }
          }
          else {
LAB_101942fe:
            iVar4 = appAtoi(puVar3);
            if (iVar4 == *piVar9) {
              iVar2 = **(int **)(in_ECX + 0x1cc);
              iStack_30 = iStack_30 + 1;
              uVar7 = 0xffdcdcdc;
              puVar3 = FL2GameData::GetNpcName
                                 ((FL2GameData *)GL2GameData_exref,
                                  *(int *)(*piVar1 + 4 + iStack_14 * 0xc));
              (**(code **)(iVar2 + 0x1fc))(puVar3,uVar7,piVar9);
              break;
            }
            if (*(int *)(*(int *)(in_ECX + 0x214) + 0x2fc) == 0) {
LAB_10194384:
              if (*(int *)(*(int *)(in_ECX + 0x214) + 0x2fc) == 0) {
                puVar5 = puVar3;
                puVar6 = FL2GameData::GetNpcName
                                   ((FL2GameData *)GL2GameData_exref,*(int *)(iVar2 + 4 + *piVar1));
                puVar5 = appStristr(puVar6,puVar5);
                if (puVar5 != (ushort *)0x0) {
                  iVar4 = **(int **)(in_ECX + 0x1cc);
                  uVar7 = 0xffdcdcdc;
                  puVar5 = FL2GameData::GetNpcName
                                     ((FL2GameData *)GL2GameData_exref,*(int *)(iVar2 + 4 + *piVar1)
                                     );
                  goto LAB_101943eb;
                }
              }
            }
            else {
              FName::FName(aFStack_20,0);
              iVar4 = FName::operator!=(this,aFStack_20);
              if (iVar4 == 0) goto LAB_10194384;
              puVar5 = puVar3;
              puVar6 = L2FName::operator*((L2FName *)this);
              puVar5 = appStristr(puVar6,puVar5);
              if (puVar5 == (ushort *)0x0) goto LAB_10194384;
              iVar4 = **(int **)(in_ECX + 0x1cc);
              uVar7 = 0xffdcdcdc;
              puVar5 = L2FName::operator*((L2FName *)this);
LAB_101943eb:
              iStack_30 = iStack_30 + 1;
              (**(code **)(iVar4 + 0x1fc))(puVar5,uVar7,piVar9);
            }
          }
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < piVar1[1]);
    }
    uStack_4 = 0xffffffff;
    FUN_10191510(iStack_30,0x14);
    *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x308) = 0;
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 10194490 FUN_10194490

undefined4 FUN_10194490(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
  FUN_1014a7d0();
  FUN_10193c50();
  return 1;
}


// ==== 101944c0 FUN_101944c0

void FUN_101944c0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1017bd60(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCNpcView_InvenItemWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10194520 FUN_10194520

void FUN_10194520(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215d28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCNpcView_InvenItemWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1017bdc0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10194580 FUN_10194580

void FUN_10194580(byte param_1)

{
  void *in_ECX;
  
  FUN_10194520();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2fc);
  }
  return;
}


// ==== 101945b0 FUN_101945b0

void FUN_101945b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1017be50(param_1,param_2,param_3,param_4,1,1);
  local_4 = 0;
  *in_ECX = NCNpcView_InvenItemWnd::vftable;
  in_ECX[0x9d] = 5;
  in_ECX[0x9e] = 3;
  FString::operator=((FString *)(in_ECX + 0x59),(ushort *)L"Inventory");
  ExceptionList = local_c;
  return;
}


// ==== 10194650 FUN_10194650

void FUN_10194650(void)

{
  undefined4 *in_ECX;
  int iVar1;
  User *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10215d88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  local_8 = 0;
  *in_ECX = NCNpcViewerWnd::vftable;
  in_ECX[0x76] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  this = (User *)(in_ECX + 0x7b);
  iVar1 = 0x13;
  do {
    User::User(this);
    this = this + 0x314;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0xfdf] = 0;
  in_ECX[0xfe0] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 101946fc Catch@101946fc

void Catch_101946fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10194710 Catch@10194710

void Catch_10194710(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::NCNpcViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10194730 FUN_10194730

void FUN_10194730(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215db8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCNpcViewerWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10194790 FUN_10194790

void FUN_10194790(byte param_1)

{
  void *in_ECX;
  
  FUN_10194730();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3f84);
  }
  return;
}


// ==== 101947c0 FUN_101947c0

void FUN_101947c0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10175910(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCNpcView_CharacterSelect_List::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10194820 FUN_10194820

void FUN_10194820(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215e18;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCNpcView_CharacterSelect_List::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10175970(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10194880 FUN_10194880

void FUN_10194880(byte param_1)

{
  void *in_ECX;
  
  FUN_10194820();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x324);
  }
  return;
}


// ==== 101948b0 FUN_101948b0

void FUN_101948b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10175910(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCNpcView_CharacterSelect_List::vftable;
  in_ECX[0xc1] = param_1;
  in_ECX[0xc0] = param_2;
  ExceptionList = local_c;
  return;
}


// ==== 10194920 FUN_10194920

void FUN_10194920(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10215e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  in_ECX[0x8c] = 0x3f800000;
  *in_ECX = NCNpcView_CharacterSelectWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10194980 FUN_10194980

void FUN_10194980(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10215ea8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCNpcView_CharacterSelectWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101949e0 FUN_101949e0

void FUN_101949e0(byte param_1)

{
  void *in_ECX;
  
  FUN_10194980();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc38);
  }
  return;
}


// ==== 10194a10 FUN_10194a10

undefined4 FUN_10194a10(void)

{
  int iVar1;
  int *piVar2;
  UPackage *pUVar3;
  undefined4 uVar4;
  int *in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  FString *extraout_ECX_01;
  FString *extraout_ECX_02;
  FString *extraout_ECX_03;
  uint uVar5;
  FString *pFStack_2d8;
  int iStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  int iStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  int iStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int iStack_24c;
  FString *pFStack_230;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined *puStack_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  wchar_t *pwStack_13c;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined *puStack_120;
  int iStack_118;
  FString *pFStack_fc;
  FString *pFStack_e0;
  FString *pFStack_c4;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  int local_8;
  
  puStack_c = &LAB_10215ff5;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  uStack_50 = 0x10194a4b;
  FUN_10061b40();
  uStack_50 = 0;
  local_24 = CONCAT44(&uStack_54,(undefined4)local_24);
  uStack_5c = 0x10194a59;
  FName::FName((FName *)&uStack_54,0);
  UObject::GetTransientPackage();
  uStack_5c = 0x350;
  uStack_60 = 0x10194a6c;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_5c = 0x10194a7d;
    iVar1 = FUN_1001c510();
  }
  in_ECX[0x30] = iVar1;
  in_ECX[0x32] = 0xf3;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf3;
  uStack_50 = 3;
  uStack_54 = 0;
  uStack_5c = 0x19;
  local_24 = (longlong)ROUND((float)in_ECX[0x22]);
  uStack_60 = (undefined4)local_24;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0x10194ad2;
  (**(code **)(*(int *)in_ECX[0x30] + 0xc0))();
  uStack_6c = 2;
  iStack_70 = in_ECX[0x30];
  uStack_6c = FUN_10060d40();
  iStack_70 = 0x10194aee;
  FUN_1005c1e0();
  uStack_6c = 0;
  local_24 = CONCAT44(&iStack_70,(undefined4)local_24);
  uStack_78 = 0x10194afc;
  FName::FName((FName *)&iStack_70,0);
  UObject::GetTransientPackage();
  uStack_78 = 0x330;
  uStack_7c = 0x10194b09;
  iVar1 = FUN_1008b6f0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_6c = 0x10194b17;
    iVar1 = FUN_1000b680();
  }
  in_ECX[0x74] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1f05;
  uStack_6c = 3;
  iStack_70 = 0;
  uStack_78 = 0x12;
  uStack_7c = 0x7d;
  uStack_80 = 0x1e;
  uStack_84 = 0x19;
  uStack_88 = 0x10194b47;
  (**(code **)(*(int *)in_ECX[0x74] + 0xc0))();
  uStack_88 = 2;
  iStack_8c = in_ECX[0x74];
  uStack_88 = FUN_10060d40();
  iStack_8c = 0x10194b63;
  FUN_1005c1e0();
  uStack_88 = 0;
  local_24 = CONCAT44(&iStack_8c,(undefined4)local_24);
  uStack_94 = 0x10194b71;
  FName::FName((FName *)&iStack_8c,0);
  UObject::GetTransientPackage();
  uStack_94 = 0x324;
  uStack_98 = 0x10194b7e;
  iVar1 = FUN_101915b0();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_88 = 0x14;
    iStack_8c = 0xbc2;
    piVar2 = (int *)FUN_101948b0();
  }
  in_ECX[0x73] = (int)piVar2;
  uStack_88 = 3;
  iStack_8c = 0;
  uStack_94 = 0xfa;
  uStack_98 = 0x11d;
  uStack_9c = 0x32;
  uStack_a0 = 10;
  uStack_a4 = 0x10194bbb;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_a4 = 2;
  iStack_a8 = in_ECX[0x73];
  uStack_a4 = FUN_10060d40();
  iStack_a8 = 0x10194bd7;
  FUN_1005c1e0();
  uStack_a4 = 0;
  local_24 = CONCAT44(&iStack_a8,(undefined4)local_24);
  FName::FName((FName *)&iStack_a8,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_a4 = 0;
    iStack_a8 = 0;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x7c] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf4;
  uStack_a4 = 3;
  iStack_a8 = 0;
  (**(code **)(*(int *)in_ECX[0x7c] + 0xc0))();
  pFStack_c4 = (FString *)in_ECX[0x7c];
  FUN_10060d40();
  pFStack_c4 = (FString *)0x10194c59;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_c4,(undefined4)local_24);
  pFStack_c4 = extraout_ECX;
  FName::FName((FName *)&pFStack_c4,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_c4 = (FString *)0x10194c8d;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    pFStack_c4 = (FString *)0x10194ca6;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 2;
    local_1c = 3;
    pFStack_c4 = local_3c;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x7d] = iVar1;
  local_8 = 1;
  uVar5 = local_1c;
  if ((local_1c & 2) != 0) {
    uVar5 = local_1c & 0xfffffffd;
    local_1c = uVar5;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((uVar5 & 1) != 0) {
    local_1c = uVar5 & 0xfffffffe;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(in_ECX[0x7d] + 0x1cc) = 0xf5;
  pFStack_c4 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x7d] + 0xc0))();
  pFStack_e0 = (FString *)in_ECX[0x7d];
  FUN_10060d40();
  pFStack_e0 = (FString *)0x10194d55;
  FUN_1005c1e0();
  pFStack_e0 = (FString *)0x10194d65;
  FUN_10003cf0();
  local_24 = CONCAT44(&pFStack_e0,(undefined4)local_24);
  pFStack_e0 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_e0,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_e0 = (FString *)0x10194d99;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1c = local_1c | 4;
    pFStack_e0 = (FString *)0x10194daf;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 4;
    local_1c = local_1c | 8;
    pFStack_e0 = local_28;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x7e] = iVar1;
  local_8 = 3;
  uVar5 = local_1c;
  if ((local_1c & 8) != 0) {
    uVar5 = local_1c & 0xfffffff7;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 4) != 0) {
    local_1c = uVar5 & 0xfffffffb;
    FString::~FString(local_28);
  }
  *(undefined4 *)(in_ECX[0x7e] + 0x1cc) = 0xf6;
  pFStack_e0 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x7e] + 0xc0))();
  pFStack_fc = (FString *)in_ECX[0x7e];
  FUN_10060d40();
  pFStack_fc = (FString *)0x10194e5e;
  FUN_1005c1e0();
  pFStack_fc = (FString *)0x10194e6e;
  FUN_10003cf0();
  local_24 = CONCAT44(&pFStack_fc,(undefined4)local_24);
  pFStack_fc = extraout_ECX_01;
  FName::FName((FName *)&pFStack_fc,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_fc = (FString *)0x10194ea2;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_1c = local_1c | 0x10;
    pFStack_fc = (FString *)0x10194eb8;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 6;
    local_1c = local_1c | 0x20;
    pFStack_fc = local_28;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x86] = iVar1;
  local_8 = 5;
  uVar5 = local_1c;
  if ((local_1c & 0x20) != 0) {
    uVar5 = local_1c & 0xffffffdf;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 0x10) != 0) {
    local_1c = uVar5 & 0xffffffef;
    FString::~FString(local_28);
  }
  *(undefined4 *)(in_ECX[0x86] + 0x1cc) = 0xfa;
  pFStack_fc = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x86] + 0xc0))();
  iStack_118 = in_ECX[0x86];
  FUN_10060d40();
  iStack_118 = 0x10194f67;
  FUN_1005c1e0();
  iStack_118 = 0x10194f75;
  FString::FString(local_3c,(ushort *)&DAT_10291594);
  local_8._0_1_ = 7;
  iStack_118 = 0x10194f88;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  local_24 = CONCAT44(&iStack_118,(undefined4)local_24);
  puStack_120 = (undefined *)0x10194fa5;
  FName::FName((FName *)&iStack_118,0);
  UObject::GetTransientPackage();
  puStack_120 = (undefined *)0x314;
  uStack_124 = 0x10194fb2;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_118 = 0;
    puStack_120 = &DAT_10291584;
    uStack_124 = 0x10194fcb;
    iVar1 = FUN_100097b0();
  }
  in_ECX[0x85] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfb;
  iStack_118 = 0;
  puStack_120 = (undefined *)0x10;
  uStack_124 = 100;
  uStack_128 = 0x20;
  uStack_12c = 0xb4;
  uStack_130 = 0x10195000;
  (**(code **)(*(int *)in_ECX[0x85] + 0xc0))();
  uStack_130 = 2;
  iStack_134 = in_ECX[0x85];
  uStack_130 = FUN_10060d40();
  iStack_134 = 0x1019501c;
  FUN_1005c1e0();
  *(undefined4 *)(in_ECX[0x85] + 0x2fc) = 0;
  uStack_130 = 0;
  local_24 = CONCAT44(&iStack_134,(undefined4)local_24);
  pwStack_13c = L"\xd7ff桐̔";
  FName::FName((FName *)&iStack_134,0);
  UObject::GetTransientPackage();
  pwStack_13c = (wchar_t *)0x314;
  uStack_140 = 0x10195049;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_130 = 0;
    iStack_134 = 0;
    pwStack_13c = L"Monster";
    uStack_140 = 0x10195062;
    piVar2 = (int *)FUN_100097b0();
  }
  in_ECX[0x89] = (int)piVar2;
  uStack_130 = 3;
  iStack_134 = 0;
  pwStack_13c = (wchar_t *)0x10;
  uStack_140 = 100;
  uStack_144 = 400;
  uStack_148 = 10;
  uStack_14c = 0x10195089;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_14c = 2;
  iStack_150 = in_ECX[0x89];
  uStack_14c = FUN_10060d40();
  iStack_150 = 0x101950a5;
  FUN_1005c1e0();
  *(undefined4 *)(in_ECX[0x89] + 0x2fc) = 1;
  uStack_14c = 0;
  local_24 = CONCAT44(&iStack_150,(undefined4)local_24);
  puStack_158 = (undefined *)0x101950c6;
  FName::FName((FName *)&iStack_150,0);
  UObject::GetTransientPackage();
  puStack_158 = (undefined *)0x314;
  uStack_15c = 0x101950d3;
  iVar1 = FUN_1009e150();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_14c = 0;
    iStack_150 = 0;
    puStack_158 = &DAT_1029156c;
    uStack_15c = 0x101950ec;
    piVar2 = (int *)FUN_100097b0();
  }
  in_ECX[0x88] = (int)piVar2;
  uStack_14c = 3;
  iStack_150 = 0;
  puStack_158 = (undefined *)0x10;
  uStack_15c = 100;
  uStack_160 = 400;
  uStack_164 = 0x6e;
  uStack_168 = 0x10195113;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_168 = 2;
  iStack_16c = in_ECX[0x88];
  uStack_168 = FUN_10060d40();
  iStack_16c = 0x1019512f;
  FUN_1005c1e0();
  *(undefined4 *)(in_ECX[0x88] + 0x2fc) = 1;
  uStack_168 = 0;
  local_24 = CONCAT44(&iStack_16c,(undefined4)local_24);
  uStack_174 = 0x1019514b;
  FName::FName((FName *)&iStack_16c,0);
  UObject::GetTransientPackage();
  uStack_174 = 0x400;
  uStack_178 = 0x10195158;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_168 = 0;
    iStack_16c = 0;
    uStack_174 = 1;
    uStack_178 = 0;
    uStack_17c = 0;
    uStack_180 = 0x10195171;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x75] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe;
  uStack_168 = 3;
  iStack_16c = 0;
  uStack_174 = 0x10;
  uStack_178 = 0xe6;
  uStack_17c = 0x1a2;
  uStack_180 = 0x3c;
  uStack_184 = 0x101951a9;
  (**(code **)(*(int *)in_ECX[0x75] + 0xc0))();
  uStack_184 = 2;
  iStack_188 = in_ECX[0x75];
  uStack_184 = FUN_10060d40();
  iStack_188 = 0x101951c5;
  FUN_1005c1e0();
  uStack_184 = 0;
  local_24 = CONCAT44(&iStack_188,(undefined4)local_24);
  uStack_190 = 0x101951d5;
  FName::FName((FName *)&iStack_188,0);
  UObject::GetTransientPackage();
  uStack_190 = 0x400;
  uStack_194 = 0x101951e2;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_184 = 0;
    iStack_188 = 0;
    uStack_190 = 1;
    uStack_194 = 0;
    uStack_198 = 0;
    uStack_19c = 0x101951fb;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x76] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xff;
  uStack_184 = 3;
  iStack_188 = 0;
  uStack_190 = 0x10;
  uStack_194 = 0xe6;
  uStack_198 = 0x1b6;
  uStack_19c = 0x3c;
  uStack_1a0 = 0x10195233;
  (**(code **)(*(int *)in_ECX[0x76] + 0xc0))();
  uStack_1a0 = 2;
  iStack_1a4 = in_ECX[0x76];
  uStack_1a0 = FUN_10060d40();
  iStack_1a4 = 0x1019524f;
  FUN_1005c1e0();
  uStack_1a0 = 0;
  local_24 = CONCAT44(&iStack_1a4,(undefined4)local_24);
  uStack_1ac = 0x1019525f;
  FName::FName((FName *)&iStack_1a4,0);
  UObject::GetTransientPackage();
  uStack_1ac = 0x400;
  uStack_1b0 = 0x1019526c;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1a0 = 0;
    iStack_1a4 = 0;
    uStack_1ac = 1;
    uStack_1b0 = 0;
    uStack_1b4 = 0;
    uStack_1b8 = 0x10195285;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x77] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x100;
  uStack_1a0 = 3;
  iStack_1a4 = 0;
  uStack_1ac = 0x10;
  uStack_1b0 = 0xe6;
  uStack_1b4 = 0x1ca;
  uStack_1b8 = 0x3c;
  uStack_1bc = 0x101952bd;
  (**(code **)(*(int *)in_ECX[0x77] + 0xc0))();
  uStack_1bc = 2;
  iStack_1c0 = in_ECX[0x77];
  uStack_1bc = FUN_10060d40();
  iStack_1c0 = 0x101952d9;
  FUN_1005c1e0();
  uStack_1bc = 0;
  local_24 = CONCAT44(&iStack_1c0,(undefined4)local_24);
  uStack_1c8 = 0x101952e9;
  FName::FName((FName *)&iStack_1c0,0);
  UObject::GetTransientPackage();
  uStack_1c8 = 0x400;
  uStack_1cc = 0x101952f6;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1bc = 0;
    iStack_1c0 = 0;
    uStack_1c8 = 1;
    uStack_1cc = 0;
    uStack_1d0 = 0;
    uStack_1d4 = 0x1019530f;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x78] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x101;
  uStack_1bc = 3;
  iStack_1c0 = 0;
  uStack_1c8 = 0x10;
  uStack_1cc = 0xe6;
  uStack_1d0 = 0x1de;
  uStack_1d4 = 0x3c;
  uStack_1d8 = 0x10195347;
  (**(code **)(*(int *)in_ECX[0x78] + 0xc0))();
  uStack_1d8 = 2;
  iStack_1dc = in_ECX[0x78];
  uStack_1d8 = FUN_10060d40();
  iStack_1dc = 0x10195363;
  FUN_1005c1e0();
  uStack_1d8 = 0;
  local_24 = CONCAT44(&iStack_1dc,(undefined4)local_24);
  uStack_1e4 = 0x10195373;
  FName::FName((FName *)&iStack_1dc,0);
  UObject::GetTransientPackage();
  uStack_1e4 = 0x400;
  uStack_1e8 = 0x10195380;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1d8 = 0;
    iStack_1dc = 0;
    uStack_1e4 = 1;
    uStack_1e8 = 0;
    uStack_1ec = 0;
    uStack_1f0 = 0x10195399;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x79] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x102;
  uStack_1d8 = 3;
  iStack_1dc = 0;
  uStack_1e4 = 0x10;
  uStack_1e8 = 0xe6;
  uStack_1ec = 0x1f2;
  uStack_1f0 = 0x3c;
  uStack_1f4 = 0x101953d1;
  (**(code **)(*(int *)in_ECX[0x79] + 0xc0))();
  uStack_1f4 = 2;
  iStack_1f8 = in_ECX[0x79];
  uStack_1f4 = FUN_10060d40();
  iStack_1f8 = 0x101953ed;
  FUN_1005c1e0();
  uStack_1f4 = 0;
  local_24 = CONCAT44(&iStack_1f8,(undefined4)local_24);
  uStack_200 = 0x101953fd;
  FName::FName((FName *)&iStack_1f8,0);
  UObject::GetTransientPackage();
  uStack_200 = 0x400;
  uStack_204 = 0x1019540a;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1f4 = 0;
    iStack_1f8 = 0;
    uStack_200 = 1;
    uStack_204 = 0;
    uStack_208 = 0;
    uStack_20c = 0x10195423;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x7a] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x103;
  uStack_1f4 = 3;
  iStack_1f8 = 0;
  uStack_200 = 0x10;
  uStack_204 = 0x20;
  uStack_208 = 0x206;
  uStack_20c = 0x3c;
  uStack_210 = 0x10195458;
  (**(code **)(*(int *)in_ECX[0x7a] + 0xc0))();
  uStack_210 = 2;
  iStack_214 = in_ECX[0x7a];
  uStack_210 = FUN_10060d40();
  iStack_214 = 0x10195474;
  FUN_1005c1e0();
  uStack_210 = 0;
  local_24 = CONCAT44(&iStack_214,(undefined4)local_24);
  FName::FName((FName *)&iStack_214,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_210 = 0;
    iStack_214 = 0;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x7b] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x104;
  uStack_210 = 3;
  iStack_214 = 0;
  (**(code **)(*(int *)in_ECX[0x7b] + 0xc0))();
  pFStack_230 = (FString *)in_ECX[0x7b];
  FUN_10060d40();
  pFStack_230 = (FString *)0x101954fe;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_230,(undefined4)local_24);
  pFStack_230 = extraout_ECX_02;
  FName::FName((FName *)&pFStack_230,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_230 = (FString *)0x10195532;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,8);
    local_1c = local_1c | 0x40;
    pFStack_230 = (FString *)0x10195548;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 9;
    local_1c = local_1c | 0x80;
    pFStack_230 = local_28;
    iVar1 = FUN_10006980();
  }
  in_ECX[0x87] = iVar1;
  local_8 = 8;
  uVar5 = local_1c;
  if ((char)local_1c < '\0') {
    uVar5 = local_1c & 0xffffff7f;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 0x40) != 0) {
    uVar5 = uVar5 & 0xffffffbf;
    local_1c = uVar5;
    FString::~FString(local_28);
  }
  *(undefined4 *)(in_ECX[0x87] + 0x1cc) = 0x1100;
  pFStack_230 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x87] + 0xc0))();
  iStack_24c = in_ECX[0x87];
  FUN_10060d40();
  iStack_24c = 0x101955fc;
  FUN_1005c1e0();
  iStack_24c = 0x1019560a;
  FString::FString(local_3c,(ushort *)&DAT_10291594);
  local_8._0_1_ = 10;
  iStack_24c = 0x1019561d;
  FUN_10003dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  local_24 = CONCAT44(&iStack_24c,(undefined4)local_24);
  uStack_254 = 0x1019563a;
  FName::FName((FName *)&iStack_24c,0);
  UObject::GetTransientPackage();
  uStack_254 = 0x400;
  uStack_258 = 0x10195647;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iStack_24c = 0;
    uStack_254 = 1;
    uStack_258 = 0;
    uStack_25c = 0;
    uStack_260 = 0x10195661;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x80] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf8;
  iStack_24c = 0;
  uStack_254 = 0x10;
  uStack_258 = 0x50;
  uStack_25c = 0x226;
  uStack_260 = 0x3c;
  uStack_264 = 0x10195696;
  (**(code **)(*(int *)in_ECX[0x80] + 0xc0))();
  uStack_264 = 2;
  iStack_268 = in_ECX[0x80];
  uStack_264 = FUN_10060d40();
  iStack_268 = 0x101956b2;
  FUN_1005c1e0();
  uStack_264 = 0;
  local_24 = CONCAT44(&iStack_268,(undefined4)local_24);
  uStack_270 = 0x101956c2;
  FName::FName((FName *)&iStack_268,0);
  UObject::GetTransientPackage();
  uStack_270 = 0x400;
  uStack_274 = 0x101956cf;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_264 = 0;
    iStack_268 = 0;
    uStack_270 = 1;
    uStack_274 = 0;
    uStack_278 = 0;
    uStack_27c = 0x101956e9;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x7f] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf7;
  uStack_264 = 3;
  iStack_268 = 0;
  uStack_270 = 0x10;
  uStack_274 = 0x50;
  uStack_278 = 0x226;
  uStack_27c = 0xd2;
  uStack_280 = 0x10195721;
  (**(code **)(*(int *)in_ECX[0x7f] + 0xc0))();
  uStack_280 = 2;
  iStack_284 = in_ECX[0x7f];
  uStack_280 = FUN_10060d40();
  iStack_284 = 0x1019573d;
  FUN_1005c1e0();
  uStack_280 = 0;
  local_24 = CONCAT44(&iStack_284,(undefined4)local_24);
  uStack_28c = 0x1019574d;
  FName::FName((FName *)&iStack_284,0);
  UObject::GetTransientPackage();
  uStack_28c = 0x400;
  uStack_290 = 0x1019575a;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_280 = 0;
    iStack_284 = 0;
    uStack_28c = 1;
    uStack_290 = 0;
    uStack_294 = 0;
    uStack_298 = 0x10195774;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x82] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe;
  uStack_280 = 3;
  iStack_284 = 0;
  uStack_28c = 0x10;
  uStack_290 = 0x50;
  uStack_294 = 0x23a;
  uStack_298 = 0x3c;
  uStack_29c = 0x101957a9;
  (**(code **)(*(int *)in_ECX[0x82] + 0xc0))();
  uStack_29c = 2;
  iStack_2a0 = in_ECX[0x82];
  uStack_29c = FUN_10060d40();
  iStack_2a0 = 0x101957c5;
  FUN_1005c1e0();
  uStack_29c = 0;
  local_24 = CONCAT44(&iStack_2a0,(undefined4)local_24);
  uStack_2a8 = 0x101957d5;
  FName::FName((FName *)&iStack_2a0,0);
  UObject::GetTransientPackage();
  uStack_2a8 = 0x400;
  uStack_2ac = 0x101957e2;
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_29c = 0;
    iStack_2a0 = 0;
    uStack_2a8 = 1;
    uStack_2ac = 0;
    uStack_2b0 = 0;
    uStack_2b4 = 0x101957fc;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x81] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xff;
  uStack_29c = 3;
  iStack_2a0 = 0;
  uStack_2a8 = 0x10;
  uStack_2ac = 0x50;
  uStack_2b0 = 0x23a;
  uStack_2b4 = 0xd2;
  uStack_2b8 = 0x10195834;
  (**(code **)(*(int *)in_ECX[0x81] + 0xc0))();
  uStack_2b8 = 2;
  iStack_2bc = in_ECX[0x81];
  uStack_2b8 = FUN_10060d40();
  iStack_2bc = 0x10195850;
  FUN_1005c1e0();
  uStack_2b8 = 0;
  local_24 = CONCAT44(&iStack_2bc,(undefined4)local_24);
  FName::FName((FName *)&iStack_2bc,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_2b8 = 0;
    iStack_2bc = 0;
    iVar1 = FUN_1001a820();
  }
  in_ECX[0x83] = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0x1101;
  uStack_2b8 = 3;
  iStack_2bc = 0;
  (**(code **)(*(int *)in_ECX[0x83] + 0xc0))();
  pFStack_2d8 = (FString *)in_ECX[0x83];
  FUN_10060d40();
  pFStack_2d8 = (FString *)0x101958d8;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_2d8,(undefined4)local_24);
  pFStack_2d8 = extraout_ECX_03;
  FName::FName((FName *)&pFStack_2d8,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar1 = FUN_1000a130(0x33c,pUVar3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pFStack_2d8 = (FString *)0x1019590c;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,0xb);
    local_1c = uVar5 | 0x100;
    pFStack_2d8 = (FString *)0x10195927;
    FString::FString(local_3c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 0xc;
    uVar5 = uVar5 | 0x300;
    pFStack_2d8 = local_28;
    local_1c = uVar5;
    iVar1 = FUN_10006980(local_3c);
  }
  in_ECX[0x84] = iVar1;
  local_8 = 0xb;
  if ((uVar5 & 0x200) != 0) {
    uVar5 = uVar5 & 0xfffffdff;
    local_1c = uVar5;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar5 & 0x100) != 0) {
    local_1c = uVar5 & 0xfffffeff;
    FString::~FString(local_28);
  }
  *(undefined4 *)(in_ECX[0x84] + 0x1cc) = 0xf9;
  pFStack_2d8 = (FString *)0x0;
  (**(code **)(*(int *)in_ECX[0x84] + 0xc0))(0xd2,0x24e,0x20,0x10,0);
  uVar4 = FUN_10060d40(in_ECX[0x84],2);
  FUN_1005c1e0(uVar4);
  FUN_10003cf0(0xda);
  (**(code **)(*in_ECX + 0x168))(L"NpcViewer");
  iVar1 = FUN_1003f630(L"sek.cbui168",1);
  in_ECX[0x8a] = iVar1;
  iVar1 = FUN_1003f630(L"sek.cbui144",1);
  in_ECX[0x8b] = iVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 10195a4c Catch@10195a4c

void Catch_10195a4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 10195a60 Catch@10195a60

void Catch_10195a60(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcView_CharacterSelectWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10195ac0 FUN_10195ac0

undefined4 FUN_10195ac0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  UPackage *pUVar4;
  int in_ECX;
  FString *extraout_ECX;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FString *pFStack_e4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t *pwStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  FString local_40 [20];
  int local_2c;
  FString local_28 [4];
  undefined8 local_24;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216044;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  uStack_54 = 0;
  local_24 = CONCAT44(&uStack_58,(undefined4)local_24);
  uStack_60 = 0x10195b04;
  FName::FName((FName *)&uStack_58,0);
  UObject::GetTransientPackage();
  uStack_60 = 0x350;
  uStack_64 = 0x10195b17;
  iVar1 = FUN_1005b950();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_60 = 0x10195b29;
    iVar1 = FUN_1001c510();
  }
  *(int *)(in_ECX + 0xc0) = iVar1;
  *(undefined4 *)(in_ECX + 200) = 0xf2;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xf2;
  uStack_54 = 3;
  uStack_58 = 0;
  uStack_60 = 0x19;
  local_24 = (longlong)ROUND(*(float *)(in_ECX + 0x88));
  uStack_64 = (undefined4)local_24;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0x10195b7e;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))();
  uStack_70 = 2;
  pwStack_74 = *(wchar_t **)(in_ECX + 0xc0);
  uStack_70 = FUN_10060d40();
  pwStack_74 = L"Ūh⤖謐\xe8ce骈￪蚉Ǥ";
  FUN_1005c1e0();
  uStack_70 = 1;
  pwStack_74 = L"L2UI.QuestWnd.questBack3";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e4) = uVar2;
  uStack_70 = 1;
  pwStack_74 = L"L2UI.etcWnd.OptionBack";
  uVar2 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e8) = uVar2;
  uStack_70 = 0;
  local_24 = CONCAT44(&pwStack_74,(undefined4)local_24);
  uStack_7c = 0x10195bd0;
  FName::FName((FName *)&pwStack_74,0);
  UObject::GetTransientPackage();
  uStack_7c = 0x2fc;
  uStack_80 = 0x10195bdd;
  iVar1 = FUN_10191580();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_70 = 0x20;
    pwStack_74 = (wchar_t *)0x50;
    uStack_7c = 6;
    uStack_80 = 0x10195bf3;
    piVar3 = (int *)FUN_101945b0();
  }
  *(int **)(in_ECX + 0x1cc) = piVar3;
  uStack_70 = 3;
  pwStack_74 = (wchar_t *)0x0;
  uStack_7c = 0x8c;
  uStack_80 = 0xeb;
  uStack_84 = 0x31;
  uStack_88 = 3;
  uStack_8c = 0x10195c1b;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_8c = 0x22;
  uStack_90 = *(undefined4 *)(in_ECX + 0x1cc);
  uStack_8c = FUN_10060d40();
  uStack_90 = 0x10195c37;
  FUN_1005c1e0();
  uStack_8c = 0;
  local_24 = CONCAT44(&uStack_90,(undefined4)local_24);
  uStack_98 = 0x10195c45;
  FName::FName((FName *)&uStack_90,0);
  UObject::GetTransientPackage();
  uStack_98 = 0x2fc;
  uStack_9c = 0x10195c52;
  iVar1 = FUN_10191580();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_8c = 0x20;
    uStack_90 = 0x50;
    uStack_98 = 6;
    uStack_9c = 0x10195c68;
    piVar3 = (int *)FUN_101945b0();
  }
  *(int **)(in_ECX + 0x1d0) = piVar3;
  uStack_8c = 3;
  uStack_90 = 0;
  uStack_98 = 0x8c;
  uStack_9c = 0xeb;
  uStack_a0 = 0x31;
  uStack_a4 = 3;
  uStack_a8 = 0x10195c90;
  (**(code **)(*piVar3 + 0xc0))();
  uStack_a8 = 0x22;
  uStack_ac = *(undefined4 *)(in_ECX + 0x1d0);
  uStack_a8 = FUN_10060d40();
  uStack_ac = 0x10195cac;
  FUN_1005c1e0();
  uStack_a8 = 0;
  local_24 = CONCAT44(&uStack_ac,(undefined4)local_24);
  uStack_b4 = 0x10195cba;
  FName::FName((FName *)&uStack_ac,0);
  UObject::GetTransientPackage();
  uStack_b4 = 0x310;
  uStack_b8 = 0x10195cc7;
  iVar1 = FUN_100b1e60();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_a8 = 0x10195cd5;
    iVar1 = FUN_100514d0();
  }
  *(int *)(in_ECX + 0x1d8) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfe001a;
  uStack_a8 = 3;
  uStack_ac = 0;
  uStack_b4 = 0x10;
  uStack_b8 = 0x8c;
  uStack_bc = 0x16;
  uStack_c0 = 0xf;
  uStack_c4 = 0x10195d08;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  uStack_c4 = 2;
  uStack_c8 = *(undefined4 *)(in_ECX + 0x1d8);
  uStack_c4 = FUN_10060d40();
  uStack_c8 = 0x10195d24;
  FUN_1005c1e0();
  uStack_c4 = 0;
  uStack_c8 = 0;
  pFStack_e4 = *(FString **)(in_ECX + 0x1cc);
  uStack_ec = 0x10195d4b;
  FUN_1004ff30();
  uStack_c4 = 0;
  uStack_c8 = 0;
  pFStack_e4 = *(FString **)(in_ECX + 0x1d0);
  uStack_ec = 0x10195d75;
  FUN_1004ff30();
  uStack_c4 = 0;
  local_24 = CONCAT44(&uStack_c8,(undefined4)local_24);
  FName::FName((FName *)&uStack_c8,0);
  UObject::GetTransientPackage();
  iVar1 = FUN_1000ef10();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_c4 = 0;
    uStack_c8 = 0;
    iVar1 = FUN_1001a820();
  }
  *(int *)(in_ECX + 0x1dc) = iVar1;
  *(undefined4 *)(iVar1 + 0x1cc) = 0xfd;
  uStack_c4 = 3;
  uStack_c8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))();
  pFStack_e4 = *(FString **)(in_ECX + 0x1dc);
  FUN_10060d40();
  pFStack_e4 = (FString *)0x10195df5;
  FUN_1005c1e0();
  local_24 = CONCAT44(&pFStack_e4,(undefined4)local_24);
  uStack_ec = 0x10195e03;
  pFStack_e4 = extraout_ECX;
  FName::FName((FName *)&pFStack_e4,0);
  UObject::GetTransientPackage();
  uStack_ec = 0x33c;
  uStack_f0 = 0x10195e10;
  iVar1 = FUN_1000a130();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pFStack_e4 = (FString *)0x10195e27;
    FString::FString(local_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    pFStack_e4 = (FString *)0x10195e40;
    FString::FString(local_28,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_8 = 2;
    local_1c = 3;
    pFStack_e4 = local_40;
    uStack_ec = 0x10195e5f;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1e0) = uVar2;
  local_8 = 1;
  if ((local_1c & 2) != 0) {
    local_1c = local_1c & 0xfffffffd;
    FString::~FString(local_28);
  }
  local_8 = 0;
  if ((local_1c & 1) != 0) {
    local_1c = local_1c & 0xfffffffe;
    FString::~FString(local_40);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1e0) + 0x1cc) = 0xfc;
  pFStack_e4 = (FString *)0x0;
  uStack_ec = 0x10;
  uStack_f0 = 0x20;
  uStack_f4 = 0xf0;
  uStack_f8 = 0x8c;
  uStack_fc = 0x10195ed1;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))();
  uStack_fc = 2;
  uStack_100 = *(undefined4 *)(in_ECX + 0x1e0);
  uStack_fc = FUN_10060d40();
  uStack_100 = 0x10195eed;
  FUN_1005c1e0();
  uStack_fc = 0x1a4;
  uStack_100 = 0x10195efd;
  FUN_10003cf0();
  for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1) {
    *(undefined4 *)(local_2c * 0x314 + 0x3f0 + in_ECX) = 0;
  }
  uStack_fc = 0;
  local_24 = CONCAT44(&uStack_100,(undefined4)local_24);
  FName::FName((FName *)&uStack_100,0);
  pUVar4 = UObject::GetTransientPackage();
  iVar1 = FUN_101915e0(0xc38,pUVar4);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_fc = 0x10195f46;
    piVar3 = (int *)FUN_10194920();
  }
  *(int **)(in_ECX + 0x1d4) = piVar3;
  uStack_fc = 3;
  uStack_100 = 0;
  (**(code **)(*piVar3 + 0xc0))(10,0x28,0x15e,0x276,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d4),0x4000000);
  FUN_1005c1e0(uVar2);
  _memset((void *)(in_ECX + 0x1ec),0,0x314);
  *(undefined4 *)(in_ECX + 500) = 1;
  *(undefined4 *)(in_ECX + 0x200) = 1;
  FUN_10193c50();
  *(undefined4 *)(in_ECX + 0x3f7c) = *(undefined4 *)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
  ExceptionList = local_10;
  return 1;
}


// ==== 10195ff5 Catch@10195ff5

void Catch_10195ff5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10196009 Catch@10196009

void Catch_10196009(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNpcViewerWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196030 FUN_10196030

bool FUN_10196030(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x100a) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0x1009) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 101960b0 FUN_101960b0

undefined4 FUN_101960b0(void)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  uint uVar4;
  FString *pFStack_70;
  FString *pFStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102160c8;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_10061b40();
  pFStack_54 = (FString *)0x1028aba0;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  local_20 = (undefined1 *)&pFStack_54;
  pFStack_54 = extraout_ECX;
  FName::FName((FName *)&pFStack_54,0);
  UObject::GetTransientPackage();
  iVar2 = FUN_1000a130();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_54 = (FString *)0x10196134;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    pFStack_54 = (FString *)0x1019614d;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 2;
    uVar4 = 3;
    local_18 = 3;
    pFStack_54 = local_3c;
    uVar1 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  local_8 = 1;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_18 = uVar4;
    FString::~FString(local_30);
  }
  local_8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x1cc) = 0x1009;
  pFStack_54 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  pFStack_70 = *(FString **)(in_ECX + 0x1d0);
  FUN_10060d40();
  pFStack_70 = (FString *)0x101961f7;
  FUN_1005c1e0();
  pFStack_70 = (FString *)0x10196207;
  FUN_10003cf0();
  local_20 = (undefined1 *)&pFStack_70;
  pFStack_70 = extraout_ECX_00;
  FName::FName((FName *)&pFStack_70,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar2 = FUN_1000a130(0x33c,pUVar3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pFStack_70 = (FString *)0x1019623f;
    FString::FString(local_30,(ushort *)L"L2UI_CH3.Button.BigButton_down");
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = uVar4 | 4;
    pFStack_70 = (FString *)0x10196257;
    FString::FString(local_3c,(ushort *)L"L2UI_CH3.Button.BigButton");
    local_8 = 4;
    uVar4 = uVar4 | 0xc;
    pFStack_70 = local_30;
    local_18 = uVar4;
    uVar1 = FUN_10006980(local_3c);
  }
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  local_8 = 3;
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    local_18 = uVar4;
    FString::~FString(local_3c);
  }
  local_8 = 0;
  if ((uVar4 & 4) != 0) {
    local_18 = uVar4 & 0xfffffffb;
    FString::~FString(local_30);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) = 0x100a;
  pFStack_70 = (FString *)0x0;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))(0xd,0x2d,0x60,0x17,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d4),2);
  FUN_1005c1e0(uVar1);
  FUN_10003cf0(0xa1);
  ExceptionList = local_10;
  return 1;
}


// ==== 10196326 Catch@10196326

void Catch_10196326(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1019633a Catch@1019633a

void Catch_1019633a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnCreateFunctionWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196360 FUN_10196360

undefined4 FUN_10196360(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102160f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar9 = 1;
  uVar8 = 0xff;
  uVar1 = *(undefined4 *)(in_ECX + 0x1cc);
  uVar7 = 0x8a;
  uVar6 = 0x78;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_101c19e0(0,0,0x78,0x8a,uVar1,0xff,1);
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021a00(0,0,uVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar8,uVar9);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10196435 Catch@10196435

void Catch_10196435(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10196449 Catch@10196449

void Catch_10196449(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnCreateFunctionWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196470 FUN_10196470

UObject * FUN_10196470(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103ab4e0);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&DAT_103ab4e0);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 101964d0 FUN_101964d0

void FUN_101964d0(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_10196470(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x200))();
  ExceptionList = local_10;
  return;
}


// ==== 10196535 Catch@10196535

void Catch_10196535(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10196549 Catch@10196549

void Catch_10196549(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnCreateFunctionWnd::OnGameCancelClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196570 FUN_10196570

void FUN_10196570(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_10196470(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x204))();
  ExceptionList = local_10;
  return;
}


// ==== 101965d5 Catch@101965d5

void Catch_101965d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101965e9 Catch@101965e9

void Catch_101965e9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnCreateFunctionWnd::OnAccountClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196610 FUN_10196610

void FUN_10196610(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnCreateFunctionWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10196670 FUN_10196670

void FUN_10196670(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216188;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnCreateFunctionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 101966d0 FUN_101966d0

void FUN_101966d0(byte param_1)

{
  void *in_ECX;
  
  FUN_10196670();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d8);
  }
  return;
}


// ==== 10196710 FUN_10196710

bool FUN_10196710(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xf0ef01) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf0ef02) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10196790 FUN_10196790

undefined4 FUN_10196790(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102161b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0xb6] != 0) {
    in_ECX[0xb6] = 0;
  }
  if (in_ECX[0xb7] != 0) {
    in_ECX[0xb7] = 0;
  }
  (**(code **)(*in_ECX + 0x174))();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10196808 Catch@10196808

void Catch_10196808(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019681c Catch@1019681c

void Catch_1019681c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSelectCtrl::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196840 FUN_10196840

undefined4 FUN_10196840(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((0 < in_ECX[0xbd]) && (iVar1 = (**(code **)(*in_ECX + 0x6c))(), iVar1 != 0)) {
    iVar1 = in_ECX[0xbb];
    if (iVar1 < 1) {
      iVar1 = in_ECX[0xbd];
    }
    in_ECX[0xbb] = iVar1 + -1;
    FUN_1000cb20(iVar1 + -1);
    return 1;
  }
  return 0;
}


// ==== 10196890 FUN_10196890

undefined4 FUN_10196890(void)

{
  int iVar1;
  int *in_ECX;
  
  if (0 < in_ECX[0xbd]) {
    iVar1 = (**(code **)(*in_ECX + 0x6c))();
    if (iVar1 != 0) {
      if (in_ECX[0xbb] < in_ECX[0xbd] + -1) {
        in_ECX[0xbb] = in_ECX[0xbb] + 1;
      }
      else {
        in_ECX[0xbb] = 0;
      }
      FUN_1000cb20(in_ECX[0xbb]);
      return 1;
    }
  }
  return 0;
}


// ==== 101968f0 FUN_101968f0

undefined4 FUN_101968f0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102161d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1019693e Catch@1019693e

void Catch_1019693e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10196952 Catch@10196952

void Catch_10196952(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnInfoWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196970 FUN_10196970

void FUN_10196970(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x1d4) = 0;
  return;
}


// ==== 10196980 FUN_10196980

void FUN_10196980(ushort *param_1)

{
  int in_ECX;
  
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    appStrcpy((ushort *)(in_ECX + 0x1d4),param_1);
  }
  return;
}


// ==== 101969b0 FUN_101969b0

bool FUN_101969b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xf0a3b2) {
      iVar1 = (**(code **)(*in_ECX + 500))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf0a4b3) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf0a5b4) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf0a7b6) {
      iVar1 = (**(code **)(*in_ECX + 0x200))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf0a6b5) {
      iVar1 = (**(code **)(*in_ECX + 0x204))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf0a8b7) {
      iVar1 = (**(code **)(*in_ECX + 0x208))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10196ac0 FUN_10196ac0

undefined4 FUN_10196ac0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102161f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x118))(1);
  if (*(int *)(in_ECX + 0x1ec) != 0) {
    *(undefined4 *)(in_ECX + 0x1ec) = 0;
  }
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
  if (*(int *)(in_ECX + 0x1e0) != 0) {
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10196bde Catch@10196bde

void Catch_10196bde(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10196bf2 Catch@10196bf2

void Catch_10196bf2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnSetupWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10196c10 FUN_10196c10

void FUN_10196c10(void)

{
  int in_ECX;
  
  FUN_1005fe50();
                    /* WARNING: Could not recover jumptable at 0x10196c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x78))();
  return;
}


// ==== 10196c30 FUN_10196c30

int FUN_10196c30(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x1f8) + (*(int *)(in_ECX + 500) + *(int *)(in_ECX + 0x1f0) * 2) * 2;
}


// ==== 10196c50 FUN_10196c50

void FUN_10196c50(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  User *pUVar4;
  int local_32c;
  User local_328 [516];
  int local_124;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_c;
  
  local_c = DAT_103554c4 ^ (uint)&local_32c;
  local_32c = 0;
  iVar2 = 0;
  do {
    puVar3 = (undefined4 *)(iVar2 + 0x54 + (int)DAT_103663bc);
    pUVar4 = local_328;
    for (iVar1 = 0xc5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pUVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pUVar4 = pUVar4 + 4;
    }
    if (local_124 != 0) {
      local_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      User::SetPawnResource(local_328);
      (**(code **)(*DAT_103663bc + 0x5f4))(local_32c);
    }
    local_32c = local_32c + 1;
    iVar2 = iVar2 + 0x314;
  } while (iVar2 < 0x3768);
  __security_check_cookie(local_c ^ (uint)&local_32c);
  return;
}


// ==== 10196d00 FUN_10196d00

undefined4 FUN_10196d00(void)

{
  int in_ECX;
  
  switch(*(undefined4 *)(in_ECX + 0x1f0)) {
  case 0:
    if (*(int *)(in_ECX + 500) == 0) {
      return 0;
    }
    if (*(int *)(in_ECX + 500) == 1) {
      return 10;
    }
    break;
  case 1:
    if (*(int *)(in_ECX + 500) == 0) {
      return 0x12;
    }
    if (*(int *)(in_ECX + 500) == 1) {
      return 0x19;
    }
    break;
  case 2:
    if (*(int *)(in_ECX + 500) == 0) {
      return 0x1f;
    }
    if (*(int *)(in_ECX + 500) == 1) {
      return 0x26;
    }
  case 3:
    if (*(int *)(in_ECX + 500) == 0) {
      return 0x2c;
    }
    if (*(int *)(in_ECX + 500) == 1) {
      return 0x31;
    }
  case 4:
    return 0x35;
  }
  return 0xffffffff;
}


// ==== 10196da0 FUN_10196da0

void FUN_10196da0(void)

{
                    /* WARNING: Could not recover jumptable at 0x10196dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_103663bc + 0x78))();
  return;
}


// ==== 10196db0 FUN_10196db0

bool FUN_10196db0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x100d) {
      iVar1 = (**(code **)(*in_ECX + 500))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x100e) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x1010) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 10196e50 FUN_10196e50

void FUN_10196e50(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x174))();
                    /* WARNING: Could not recover jumptable at 0x10196e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  return;
}


// ==== 10196e80 FUN_10196e80

void FUN_10196e80(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x1d4);
  for (iVar1 = 0x14; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)register0x00000010;
    puVar2 = puVar2 + 1;
  }
  return;
}


// ==== 10196ea0 FUN_10196ea0

undefined4 FUN_10196ea0(void)

{
  if (((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50) != 0)) &&
     (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0)) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(0x3fc00000,0);
  }
  FUN_101454e0();
  return 1;
}


// ==== 10196ef0 FUN_10196ef0

void FUN_10196ef0(void)

{
  FUN_1005ff00();
  FUN_10196c50();
  return;
}


// ==== 10196f10 FUN_10196f10

void FUN_10196f10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  code *pcVar3;
  
  if (param_1 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x224) + 0x138))();
    (**(code **)(**(int **)(in_ECX + 0x228) + 0x138))();
    if (*(int *)(in_ECX + 0x238) == 0) {
      (**(code **)(**(int **)(in_ECX + 0x230) + 0x13c))();
      pcVar3 = *(code **)(**(int **)(in_ECX + 0x22c) + 0x138);
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0x230) + 0x138))();
      pcVar3 = *(code **)(**(int **)(in_ECX + 0x22c) + 0x13c);
    }
    (*pcVar3)();
    iVar1 = *DAT_103663bc;
    uVar2 = FUN_10196c30();
    (**(code **)(iVar1 + 0x5a0))(uVar2);
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x224) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x13c))();
  *(undefined4 *)(in_ECX + 0x238) = 0;
  return;
}


// ==== 10196ff0 FUN_10196ff0

void FUN_10196ff0(void)

{
  FUN_1005fe50();
  FUN_10196f10(0);
  return;
}


// ==== 10197010 FUN_10197010

undefined4 FUN_10197010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10196c30();
  if (param_1 != 0) {
    (**(code **)(*DAT_103663bc + 0x5ec))(uVar1,0x40000000);
    return 1;
  }
  (**(code **)(*DAT_103663bc + 0x5f0))(uVar1);
  return 1;
}


// ==== 10197060 FUN_10197060

undefined4 FUN_10197060(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10196c30();
  if (param_1 != 0) {
    (**(code **)(*DAT_103663bc + 0x5ec))(uVar1,0xc0000000);
    return 1;
  }
  (**(code **)(*DAT_103663bc + 0x5f0))(uVar1);
  return 1;
}


// ==== 101970b0 FUN_101970b0

undefined4 FUN_101970b0(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int in_ECX;
  uint uVar4;
  void *unaff_ESI;
  undefined4 unaff_EDI;
  bool bVar5;
  undefined2 in_FPUControlWord;
  uint uStack_4c;
  undefined4 local_38;
  uint local_34;
  longlong local_30;
  FString local_24 [4];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216278;
  local_c = ExceptionList;
  _uStack_4c = CONCAT44(unaff_EDI,DAT_103554c4 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_c;
  uVar4 = 0;
  local_34 = 0;
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2ui_ch3.etc.textbox1",1);
  *(undefined4 *)(in_ECX + 0x2e0) = uVar1;
  uVar1 = FUN_1003f630(L"L2ui_ch3.etc.textbox2",1);
  *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  uVar1 = FUN_1003f630(L"L2ui_ch3.etc.textbox3",1);
  *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
  FName::FName((FName *)&local_38,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10358800,pUVar2,local_38,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar3 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    FString::FString(local_24,(ushort *)L"L2ui_ch3.Button.PREV1_down");
    local_4 = 0;
    local_34 = 1;
    FString::FString((FString *)&local_30,(ushort *)L"L2ui_ch3.Button.PREV1");
    local_4 = 1;
    uVar4 = 3;
    local_34 = 3;
    uVar1 = FUN_10007150(&local_30,local_24);
  }
  *(undefined4 *)(in_ECX + 0x2d8) = uVar1;
  local_4 = 0;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    local_34 = uVar4;
    FString::~FString((FString *)&local_30);
  }
  local_4 = 0xffffffff;
  if ((uVar4 & 1) != 0) {
    local_34 = uVar4 & 0xfffffffe;
    FString::~FString(local_24);
  }
  local_38 = CONCAT22(local_38._2_2_,in_FPUControlWord);
  *(undefined4 *)(*(int *)(in_ECX + 0x2d8) + 0x1cc) = 0xf0ef01;
  local_30 = (longlong)ROUND(((*(float *)(in_ECX + 0x88) - 15.0) - 15.0) - 3.0);
  (**(code **)(**(int **)(in_ECX + 0x2d8) + 0xc0))((undefined4)local_30,1,0xf,0xf,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2d8),2);
  FUN_1005c1e0(uVar1);
  FName::FName((FName *)&uStack_4c,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticAllocateObject
                     (&DAT_10358800,pUVar2,uStack_4c,0,0,*(undefined4 *)GError_exref,0,0);
  bVar5 = pUVar3 == (UObject *)0x0;
  if (bVar5) {
    uVar1 = 0;
  }
  else {
    FString::FString((FString *)&local_34,(ushort *)L"L2ui_ch3.Button.NEXT1_down");
    uStack_20 = 2;
    FString::FString((FString *)&stack0xffffffc0,(ushort *)L"L2ui_ch3.Button.NEXT1");
    uStack_20 = 3;
    uVar1 = FUN_10007150(&stack0xffffffc0,&local_34);
  }
  *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
  uStack_20 = 2;
  if (!bVar5) {
    FString::~FString((FString *)&stack0xffffffc0);
  }
  uStack_20 = 0xffffffff;
  if (!bVar5) {
    FString::~FString((FString *)&local_34);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x2dc) + 0x1cc) = 0xf0ef02;
  _uStack_4c = (longlong)ROUND(*(float *)(in_ECX + 0x88) - 15.0);
  (**(code **)(**(int **)(in_ECX + 0x2dc) + 0xc0))(uStack_4c,1,0xf,0xf,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2dc),2);
  FUN_1005c1e0(uVar1);
  ExceptionList = unaff_ESI;
  return 1;
}


// ==== 101973d0 FUN_101973d0

undefined4 FUN_101973d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102162a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  FUN_10021a00(0,0,8,0x11,0,0,8,0x11,*(undefined4 *)(in_ECX + 0x2e0),0xff,1);
  uVar12 = 1;
  uVar10 = 0xff;
  uVar2 = *(undefined4 *)(in_ECX + 0x2e4);
  uVar9 = 0x11;
  uVar8 = 8;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0x11;
  uVar3 = FUN_101c19e0(0x11,0,0,8,0x11,uVar2,0xff,1);
  FUN_10021a00(8,0,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar2,uVar10,uVar12);
  uVar13 = 1;
  uVar11 = 0xff;
  uVar2 = *(undefined4 *)(in_ECX + 0x2e8);
  uVar12 = 0x11;
  uVar10 = 8;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11;
  uVar6 = 8;
  uVar5 = 0;
  uVar3 = FUN_101c19e0(0,8,0x11,0,0,8,0x11,uVar2,0xff,1);
  FUN_10021a00(uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,uVar2,uVar11,uVar13);
  iVar1 = *(int *)(in_ECX + 0x2ec);
  if ((-1 < iVar1) && (iVar1 < *(int *)(in_ECX + 0x2f4))) {
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 0;
    uVar2 = 0;
    puVar4 = FString::operator*((FString *)
                                (GL2GameData_exref +
                                *(int *)(*(int *)(in_ECX + 0x2f0) + iVar1 * 4) * 0xc + 0x6a8dc));
    FUN_100217a0(3,3,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,
                 uVar11,uVar13,uVar14);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10197554 Catch@10197554

void Catch_10197554(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10197568 Catch@10197568

void Catch_10197568(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCSelectCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10197590 FUN_10197590

undefined4 FUN_10197590(void)

{
  undefined4 uVar1;
  ushort *puVar2;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI_CH3.LobbyWnd.select2_back",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.Etc.textbackline",1);
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x7c21c));
  FUN_10196980(puVar2);
  return 1;
}


// ==== 101975f0 FUN_101975f0

undefined4 FUN_101975f0(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102162c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,*(undefined4 *)(in_ECX + 0x1cc),0xff,1);
  }
  for (uVar5 = 0; (int)uVar5 < 0xd; uVar5 = uVar5 + 1) {
    uVar4 = uVar5 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    if (uVar4 == 1) {
      uVar11 = 0xff;
      uVar2 = *(undefined4 *)(in_ECX + 0x1d0);
      uVar10 = 0xf;
      uVar9 = 8;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0xf;
      uVar3 = FUN_101c19e0(0xf,0,0,8,0xf,uVar2,0xff,1);
      FUN_10021a00(5,uVar5 * 0xf + 5,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar2,uVar11,uVar4);
    }
  }
  psVar1 = (short *)(in_ECX + 0x1d4);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    local_20 = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x88) - 14.0);
    FUN_100217a0(7,7,0xffdcdcdc,psVar1,local_20,0,1,0,0,0,0,0,0,0,0,0xffffffff);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10197791 Catch@10197791

void Catch_10197791(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101977a5 Catch@101977a5

void Catch_101977a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnInfoWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101977d0 FUN_101977d0

undefined4 FUN_101977d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102162e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar1 = *(int *)(in_ECX + 0x1e8);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6d1bc));
  FUN_100217a0(0x21,0x14,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b08c));
  FUN_100217a0(0x21,0x37,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b098));
  FUN_100217a0(0x21,0x4f,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0a4));
  FUN_100217a0(0x21,0x67,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0b0));
  FUN_100217a0(0x21,0x7f,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0bc));
  FUN_100217a0(0x21,0x97,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
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
  uVar3 = 0;
  uVar2 = 0;
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0c8));
  FUN_100217a0(0x21,0xaf,0xffdcdcdc,puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
               uVar12,uVar13,uVar14);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10197a11 Catch@10197a11

void Catch_10197a11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10197a25 Catch@10197a25

void Catch_10197a25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnSetupWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10197a50 FUN_10197a50

void FUN_10197a50(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x208) = 0;
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x174))();
  iVar1 = *(int *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1f0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 500) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1f8) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1fc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x200) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x204) = 0xffffffff;
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1d0);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1d4);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1d8);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1dc);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1e0);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  FUN_10196f10(0);
  return;
}


// ==== 10197b50 FUN_10197b50

void FUN_10197b50(undefined4 param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  User *pUVar5;
  undefined1 auStack_32c [4];
  User local_328 [516];
  int local_124;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_c;
  
  local_c = DAT_103554c4 ^ (uint)auStack_32c;
  FUN_10196c50();
  iVar3 = *(int *)(in_ECX + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1fc) = param_1;
  iVar1 = *(int *)(in_ECX + 0x200);
  if (iVar1 < *(int *)(iVar3 + 0x2f4)) {
    *(int *)(iVar3 + 0x2ec) = iVar1;
  }
  if (iVar1 < 0) {
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
  }
  iVar3 = *(int *)(in_ECX + 0x204);
  iVar1 = *(int *)(in_ECX + 0x1e0);
  if (iVar3 < *(int *)(iVar1 + 0x2f4)) {
    *(int *)(iVar1 + 0x2ec) = iVar3;
  }
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  if (*(int *)(in_ECX + 0x1f0) < 0) {
    iVar3 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25e08));
    (**(code **)(iVar3 + 0x658))(puVar2);
    iVar3 = *(int *)(in_ECX + 0x1d0);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1d4);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else if (*(int *)(in_ECX + 500) < 0) {
    iVar3 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25e64));
    (**(code **)(iVar3 + 0x658))(puVar2);
    iVar3 = *(int *)(in_ECX + 0x1d4);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else if (*(int *)(in_ECX + 0x1f8) < 0) {
    iVar3 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25ec0));
    (**(code **)(iVar3 + 0x658))(puVar2);
    iVar3 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    iVar3 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar3 + 0x2f4)) {
      *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else {
    piVar4 = DAT_103663bc +
             (*(int *)(in_ECX + 0x1f8) + (*(int *)(in_ECX + 500) + *(int *)(in_ECX + 0x1f0) * 2) * 2
             ) * 0xc5 + 0x15;
    pUVar5 = local_328;
    for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pUVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      pUVar5 = pUVar5 + 4;
    }
    if (local_124 != 0) {
      local_e0 = *(undefined4 *)(in_ECX + 0x204);
      local_e8 = *(undefined4 *)(in_ECX + 0x1fc);
      local_e4 = *(undefined4 *)(in_ECX + 0x200);
      User::SetPawnResource(local_328);
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_32c);
  return;
}


// ==== 10197e70 FUN_10197e70

void FUN_10197e70(undefined4 param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  User *pUVar5;
  undefined1 auStack_32c [4];
  User local_328 [516];
  int local_124;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_c;
  
  local_c = DAT_103554c4 ^ (uint)auStack_32c;
  FUN_10196c50();
  iVar1 = *(int *)(in_ECX + 0x1e0);
  *(undefined4 *)(in_ECX + 0x200) = param_1;
  iVar3 = *(int *)(in_ECX + 0x204);
  if (iVar3 < *(int *)(iVar1 + 0x2f4)) {
    *(int *)(iVar1 + 0x2ec) = iVar3;
  }
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  if (*(int *)(in_ECX + 0x1f0) < 0) {
    iVar1 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25e08));
    (**(code **)(iVar1 + 0x658))(puVar2);
    iVar1 = *(int *)(in_ECX + 0x1d0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1d4);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else if (*(int *)(in_ECX + 500) < 0) {
    iVar1 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25e64));
    (**(code **)(iVar1 + 0x658))(puVar2);
    iVar1 = *(int *)(in_ECX + 0x1d4);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else if (*(int *)(in_ECX + 0x1f8) < 0) {
    iVar1 = *DAT_103663bc;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25ec0));
    (**(code **)(iVar1 + 0x658))(puVar2);
    iVar1 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x1fc);
    if (iVar1 < 0) {
      iVar1 = *DAT_103663bc;
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x261a0));
      (**(code **)(iVar1 + 0x658))(puVar2);
    }
    else {
      piVar4 = DAT_103663bc +
               (*(int *)(in_ECX + 0x1f8) +
               (*(int *)(in_ECX + 500) + *(int *)(in_ECX + 0x1f0) * 2) * 2) * 0xc5 + 0x15;
      pUVar5 = local_328;
      for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(int *)pUVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        pUVar5 = pUVar5 + 4;
      }
      if (local_124 != 0) {
        local_e0 = *(undefined4 *)(in_ECX + 0x204);
        local_e4 = *(undefined4 *)(in_ECX + 0x200);
        local_e8 = iVar1;
        User::SetPawnResource(local_328);
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_32c);
  return;
}


// ==== 10198190 FUN_10198190

void FUN_10198190(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  User *pUVar6;
  undefined1 auStack_32c [4];
  User local_328 [516];
  int local_124;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  uint local_c;
  
  local_c = DAT_103554c4 ^ (uint)auStack_32c;
  FUN_10196c50();
  *(undefined4 *)(in_ECX + 0x204) = param_1;
  if (*(int *)(in_ECX + 0x1f0) < 0) {
    iVar1 = *DAT_103663bc;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x25e08));
    (**(code **)(iVar1 + 0x658))(puVar3);
    iVar1 = *(int *)(in_ECX + 0x1d0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1d4);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else if (*(int *)(in_ECX + 500) < 0) {
    iVar1 = *DAT_103663bc;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x25e64));
    (**(code **)(iVar1 + 0x658))(puVar3);
    iVar1 = *(int *)(in_ECX + 0x1d4);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else if (*(int *)(in_ECX + 0x1f8) < 0) {
    iVar1 = *DAT_103663bc;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x25ec0));
    (**(code **)(iVar1 + 0x658))(puVar3);
    iVar1 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x1fc);
    if (iVar1 < 0) {
      iVar1 = *DAT_103663bc;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x261a0));
      (**(code **)(iVar1 + 0x658))(puVar3);
      iVar1 = *(int *)(in_ECX + 0x1dc);
      if (-1 < *(int *)(iVar1 + 0x2f4)) {
        *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
      }
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
      iVar1 = *(int *)(in_ECX + 0x1e0);
      if (-1 < *(int *)(iVar1 + 0x2f4)) {
        *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
      }
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x200);
      if (iVar2 < 0) {
        iVar1 = *DAT_103663bc;
        puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x2c474));
        (**(code **)(iVar1 + 0x658))(puVar3);
      }
      else {
        piVar5 = DAT_103663bc +
                 (*(int *)(in_ECX + 0x1f8) +
                 (*(int *)(in_ECX + 500) + *(int *)(in_ECX + 0x1f0) * 2) * 2) * 0xc5 + 0x15;
        pUVar6 = local_328;
        for (iVar4 = 0xc5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(int *)pUVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          pUVar6 = pUVar6 + 4;
        }
        if (local_124 != 0) {
          local_e0 = param_1;
          local_e8 = iVar1;
          local_e4 = iVar2;
          User::SetPawnResource(local_328);
        }
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_32c);
  return;
}


// ==== 10198500 FUN_10198500

/* WARNING: Type propagation algorithm not settling */

void FUN_10198500(short *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  LPCWSTR lpWideCharStr;
  char *pcVar5;
  short *psVar6;
  int in_ECX;
  FString *this;
  short *psVar7;
  undefined4 *puVar8;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  CHAR aCStack_324 [800];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)aCStack_324;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
  if (iVar3 == 0) {
    puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
    this = (FString *)(GL2GameData_exref + 0x25dac);
  }
  else {
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    cbMultiByte = 800;
    lpMultiByteStr = aCStack_324;
    iVar3 = -1;
    lpWideCharStr = (LPCWSTR)(**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
    WideCharToMultiByte(0,0,lpWideCharStr,iVar3,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                        lpUsedDefaultChar);
    pcVar5 = aCStack_324;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((pcVar5 == aCStack_324 + 1) ||
       ((int)((uint)(*(int *)GLanguageType_exref != 5) * 4 + 0xc) <
        (int)pcVar5 - (int)(aCStack_324 + 1))) {
      iVar3 = *DAT_103663bc;
      puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x25dac));
      (**(code **)(iVar3 + 0x658))(puVar4);
      (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x78))();
      goto LAB_101986e9;
    }
    psVar6 = (short *)(**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
    psVar7 = param_1;
    do {
      sVar2 = *psVar6;
      *psVar7 = sVar2;
      psVar6 = psVar6 + 1;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    iVar3 = *(int *)(*(int *)(in_ECX + 0x1cc) + 0x2ec);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 < 0) {
      puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
      this = (FString *)(GL2GameData_exref + 0x25e08);
    }
    else {
      iVar3 = FUN_10196d00();
      *(int *)(param_1 + 0x1a) = iVar3;
      if (iVar3 < 0) {
        puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
        this = (FString *)(GL2GameData_exref + 0x25e64);
      }
      else {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x1d4) + 0x2ec);
        *(int *)(param_1 + 0x1c) = iVar3;
        if (iVar3 < 0) {
          puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
          this = (FString *)(GL2GameData_exref + 0x25ec0);
        }
        else {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x1d8) + 0x2ec);
          *(int *)(param_1 + 0x2a) = iVar3;
          if (-1 < iVar3) goto LAB_101986e9;
          puVar8 = (undefined4 *)(*DAT_103663bc + 0x658);
          this = (FString *)(GL2GameData_exref + 0x261a0);
        }
      }
    }
  }
  puVar4 = FString::operator*(this);
  (*(code *)*puVar8)(puVar4);
LAB_101986e9:
  __security_check_cookie(local_4 ^ (uint)aCStack_324);
  return;
}


// ==== 10198710 FUN_10198710

void FUN_10198710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216318;
  local_c = ExceptionList;
  uVar4 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  iVar1 = *(int *)(in_ECX + 0x208);
  if (param_1 <= iVar1) {
    if (param_1 != iVar1) {
      if (iVar1 <= param_1) {
        return;
      }
      iVar1 = *(int *)(*(int *)(in_ECX + 0x1cc) + 0x2ec);
      iVar2 = *(int *)(*(int *)(in_ECX + 0x1d4) + 0x2ec);
      iVar3 = *(int *)(*(int *)(in_ECX + 0x1d0) + 0x2ec);
      ExceptionList = &local_c;
      FUN_1004f590(uVar4);
      local_4 = 2;
      if (param_1 == 1) {
        FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar1]);
        FUN_10196da0(iVar1);
        iVar1 = *DAT_103663bc;
        uVar6 = 0;
        uVar5 = FUN_1004f5c0(0);
        (**(code **)(iVar1 + 0x59c))(uVar5,uVar6);
        *(undefined4 *)(in_ECX + 0x208) = 1;
        goto LAB_10198ae6;
      }
      if ((param_1 != 2) || (iVar1 == 4)) goto LAB_10198ae6;
      FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar1]);
      FUN_1004f740(&DAT_10291d98);
      FUN_1004f740((&PTR_u_KNIGHT_10352714)[iVar3]);
      if (iVar3 == 1) {
        puVar7 = &DAT_10291d90;
LAB_10198a92:
        FUN_1004f740(puVar7);
      }
      else if (iVar3 == 0) {
        puVar7 = &DAT_10291d88;
        goto LAB_10198a92;
      }
      FUN_1004f740((&PTR_DAT_1035271c)[iVar2]);
      FUN_10196da0(iVar1);
      iVar1 = *DAT_103663bc;
      uVar6 = 1;
      uVar5 = FUN_1004f5c0(0);
      (**(code **)(iVar1 + 0x59c))(uVar5,uVar6);
      *(undefined4 *)(in_ECX + 0x208) = 2;
      goto LAB_10198ae6;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x1cc) + 0x2ec);
    iVar2 = *(int *)(*(int *)(in_ECX + 0x1d0) + 0x2ec);
    iVar3 = *(int *)(*(int *)(in_ECX + 0x1d4) + 0x2ec);
    ExceptionList = &local_c;
    FUN_1004f590(uVar4);
    local_4 = 1;
    if (param_1 == 1) {
      puVar7 = (&PTR_u_HUMAN_10352700)[iVar1];
    }
    else if (param_1 == 2) {
      if (iVar1 == 4) goto LAB_10198ae6;
      FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar1]);
      FUN_1004f740(&DAT_10291d98);
      puVar7 = PTR_u_WIZARD_10352718;
      if ((iVar2 == 0) || (puVar7 = PTR_u_KNIGHT_10352714, iVar2 == 1)) {
        FUN_1004f740(puVar7);
      }
      FUN_1004f740(&DAT_10291d98);
      puVar7 = (&PTR_u_KNIGHT_10352714)[iVar2];
    }
    else {
      if (param_1 != 3) goto LAB_10198ae6;
      FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar1]);
      if (iVar2 == 0) {
        puVar7 = &DAT_10291d90;
LAB_10198920:
        FUN_1004f740(puVar7);
      }
      else if (iVar2 == 1) {
        puVar7 = &DAT_10291d88;
        goto LAB_10198920;
      }
      puVar7 = PTR_u_WOMAN_10352720;
      if ((iVar3 == 0) || (puVar7 = PTR_DAT_1035271c, iVar3 == 1)) {
        FUN_1004f740(puVar7);
      }
      if (iVar2 == 0) {
        puVar7 = &DAT_10291d90;
LAB_10198963:
        FUN_1004f740(puVar7);
      }
      else if (iVar2 == 1) {
        puVar7 = &DAT_10291d88;
        goto LAB_10198963;
      }
      puVar7 = (&PTR_DAT_1035271c)[iVar3];
    }
    FUN_1004f740(puVar7);
    FUN_10196da0(iVar1);
    iVar1 = *DAT_103663bc;
    uVar6 = 0;
    uVar5 = FUN_1004f5c0(0);
    (**(code **)(iVar1 + 0x59c))(uVar5,uVar6);
    goto LAB_10198ae6;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x1d0) + 0x2ec);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x1cc) + 0x2ec);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x1d4) + 0x2ec);
  ExceptionList = &local_c;
  FUN_1004f590(uVar4);
  local_4 = 0;
  if (-1 < iVar2) {
    FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar2]);
    *(undefined4 *)(in_ECX + 0x208) = 1;
  }
  if (-1 < iVar1) {
    FUN_1004f740(&DAT_10291d98);
    FUN_1004f740((&PTR_u_KNIGHT_10352714)[iVar1]);
    *(undefined4 *)(in_ECX + 0x208) = 2;
  }
  if (-1 < iVar3) {
    if (iVar1 == 0) {
      puVar7 = &DAT_10291d90;
LAB_101987e5:
      FUN_1004f740(puVar7);
    }
    else if (iVar1 == 1) {
      puVar7 = &DAT_10291d88;
      goto LAB_101987e5;
    }
    FUN_1004f740((&PTR_DAT_1035271c)[iVar3]);
    *(undefined4 *)(in_ECX + 0x208) = 3;
  }
  FUN_10196da0(iVar2);
  iVar1 = *DAT_103663bc;
  uVar6 = 0;
  uVar5 = FUN_1004f5c0(0);
  (**(code **)(iVar1 + 0x59c))(uVar5,uVar6);
LAB_10198ae6:
  local_4 = 0xffffffff;
  FUN_1004f7b0();
  ExceptionList = local_c;
  return;
}


// ==== 10198b10 FUN_10198b10

void FUN_10198b10(void)

{
  int iVar1;
  int in_ECX;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_cc [22];
  undefined4 uStack_74;
  ushort *puStack_70;
  ushort local_64 [30];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_64;
  puStack_70 = local_64;
  uStack_74 = 0x10198b32;
  iVar1 = FUN_10198500();
  if (iVar1 == 0) goto LAB_10198c3b;
  if (local_64[0] == 0) {
LAB_10198bbd:
    local_20 = *(undefined4 *)(in_ECX + 0x1f8);
    local_24 = *(undefined4 *)(in_ECX + 0x1ec);
    local_1c = *(undefined4 *)(in_ECX + 0x204);
    iVar1 = *(int *)(in_ECX + 0x1cc);
    local_14 = *(undefined4 *)(in_ECX + 0x21c);
    local_28 = *(undefined4 *)(in_ECX + 0x1e0);
    local_18 = *(undefined4 *)(in_ECX + 0x210);
    local_c = *(undefined4 *)(iVar1 + 0x200);
    local_10 = *(undefined4 *)(iVar1 + 0x1fc);
    local_8 = *(undefined4 *)(iVar1 + 0x204);
    puVar2 = local_64;
    puVar3 = auStack_cc;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)puVar2;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 1;
    }
    FUN_10142000();
  }
  else {
    puStack_70 = local_64;
    uStack_74 = 0x10198b52;
    iVar1 = FUN_10145750();
    if (iVar1 == 0) {
      puStack_70 = local_64;
      uStack_74 = 0x10198b66;
      iVar1 = FUN_1016e320();
      if (iVar1 != 0) goto LAB_10198bbd;
    }
    iVar1 = *DAT_103663bc;
    puStack_70 = (ushort *)0x10198b83;
    puStack_70 = FString::operator*((FString *)(GL2GameData_exref + 0x28a3c));
    uStack_74 = 0x10198b92;
    (**(code **)(iVar1 + 0x658))();
    uStack_74 = 0x10198ba8;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x1cc) + 0x1ec) + 0x174))();
    uStack_74 = 0x10198bbb;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x1cc) + 0x1ec) + 0x78))();
  }
LAB_10198c3b:
  __security_check_cookie(local_4 ^ (uint)local_64);
  return;
}


// ==== 10198c60 FUN_10198c60

undefined4 FUN_10198c60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined *puVar6;
  undefined4 uVar7;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216348;
  local_c = ExceptionList;
  uVar4 = DAT_103554c4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(uint *)(in_ECX + 0x238) = (uint)(*(int *)(in_ECX + 0x238) == 0);
  iVar1 = *(int *)(in_ECX + 0x1cc);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1cc) + 0x2ec);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x1d0) + 0x2ec);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1d4) + 0x2ec);
  FUN_1004f590(uVar4);
  local_4 = 0;
  if (*(int *)(in_ECX + 0x238) == 0) {
    (**(code **)(**(int **)(in_ECX + 0x230) + 0x13c))();
    (**(code **)(**(int **)(in_ECX + 0x22c) + 0x138))();
    if (-1 < iVar2) {
      FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar2]);
    }
    if (-1 < iVar1) {
      if (iVar3 == 0) {
        puVar6 = &DAT_10291d90;
LAB_10198dc8:
        FUN_1004f740(puVar6);
      }
      else if (iVar3 == 1) {
        puVar6 = &DAT_10291d88;
        goto LAB_10198dc8;
      }
      FUN_1004f740((&PTR_DAT_1035271c)[iVar1]);
      FUN_1004f740(L"_CHEST");
    }
    iVar1 = *DAT_103663bc;
    uVar7 = 1;
    uVar5 = FUN_1004f5c0(0);
    (**(code **)(iVar1 + 0x59c))(uVar5,uVar7);
    goto LAB_10198e14;
  }
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x138))();
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x13c))();
  if (-1 < iVar2) {
    FUN_1004f740((&PTR_u_HUMAN_10352700)[iVar2]);
  }
  if (-1 < iVar1) {
    if (iVar3 == 0) {
      puVar6 = &DAT_10291d90;
LAB_10198d30:
      FUN_1004f740(puVar6);
    }
    else if (iVar3 == 1) {
      puVar6 = &DAT_10291d88;
      goto LAB_10198d30;
    }
    FUN_1004f740((&PTR_DAT_1035271c)[iVar1]);
    FUN_1004f740(L"_CHEST");
  }
  iVar1 = *DAT_103663bc;
  uVar7 = 0;
  uVar5 = FUN_1004f5c0(0);
  (**(code **)(iVar1 + 0x59c))(uVar5,uVar7);
LAB_10198e14:
  local_c = (void *)0xffffffff;
  FUN_1004f7b0();
  ExceptionList = pvStack_14;
  return 1;
}


// ==== 10198e40 FUN_10198e40

void FUN_10198e40(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (-1 < param_1) {
    iVar1 = FArray::Add((FArray *)(in_ECX + 0x2f0),1,4);
    *(int *)(*(int *)(in_ECX + 0x2f0) + iVar1 * 4) = param_1;
  }
  return;
}


// ==== 10198e70 FUN_10198e70

void FUN_10198e70(void)

{
  int in_ECX;
  
  FUN_10198e40(0xaa);
  FUN_10198e40(0xab);
  FUN_10198e40(0xac);
  FUN_10198e40(0xad);
  FUN_10198e40(0xae);
  FUN_10198e40(0xaf);
  FUN_10198e40(0xb0);
  FUN_10198e40(0xb1);
  FUN_10198e40(0xb2);
  FUN_10198e40(0xb3);
  FUN_10198e40(0xb4);
  FUN_10198e40(0xb5);
  FUN_10198e40(0xb6);
  FUN_10198e40(0xba);
  FUN_10198e40(0xbb);
  FUN_10198e40(0x323);
  FUN_10198e40(0xb3);
  FUN_10198e40(0xb4);
  FUN_10198e40(0xb5);
  FUN_10198e40(0xb6);
  FUN_10198e40(0xb3);
  FUN_10198e40(0xb4);
  FUN_10198e40(0xb5);
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x118))(0);
  *(undefined4 *)(in_ECX + 0x208) = 0;
  return;
}


// ==== 10199060 FUN_10199060

undefined4 FUN_10199060(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  FUN_10196c50();
  *(int *)(in_ECX + 0x1f0) = param_1;
  *(undefined4 *)(in_ECX + 500) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1f8) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1fc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x200) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x204) = 0xffffffff;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x174))();
  FUN_10198e40(0xaf);
  if ((param_1 == 3) || (param_1 != 4)) {
    FUN_10198e40(0xb0);
  }
  iVar2 = *(int *)(in_ECX + 500);
  iVar1 = *(int *)(in_ECX + 0x1d0);
  if (iVar2 < *(int *)(iVar1 + 0x2f4)) {
    *(int *)(iVar1 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  iVar2 = *(int *)(in_ECX + 0x1f8);
  iVar1 = *(int *)(in_ECX + 0x1d4);
  if (iVar2 < *(int *)(iVar1 + 0x2f4)) {
    *(int *)(iVar1 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  iVar2 = *(int *)(in_ECX + 0x1fc);
  iVar1 = *(int *)(in_ECX + 0x1d8);
  if (iVar2 < *(int *)(iVar1 + 0x2f4)) {
    *(int *)(iVar1 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  iVar2 = *(int *)(in_ECX + 0x200);
  iVar1 = *(int *)(in_ECX + 0x1dc);
  if (iVar2 < *(int *)(iVar1 + 0x2f4)) {
    *(int *)(iVar1 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  iVar2 = *(int *)(in_ECX + 0x204);
  iVar1 = *(int *)(in_ECX + 0x1e0);
  if (iVar2 < *(int *)(iVar1 + 0x2f4)) {
    *(int *)(iVar1 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x118))(0);
  FUN_10196f10(0);
  (**(code **)(**(int **)(*(int *)(DAT_103663bc[0x142b] + 0x1fc) + 0x1d0) + 0x174))();
  FUN_10198710(1);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + 0x294 + (int)DAT_103663bc) = *(undefined4 *)(in_ECX + 0x1fc);
    *(undefined4 *)(iVar2 + 0x298 + (int)DAT_103663bc) = *(undefined4 *)(in_ECX + 0x200);
    *(undefined4 *)(iVar2 + 0x29c + (int)DAT_103663bc) = *(undefined4 *)(in_ECX + 0x204);
    iVar2 = iVar2 + 0x314;
  } while (iVar2 < 0x3768);
  if (param_1 == 0) {
    (**(code **)(*DAT_103663bc + 0x5d0))(0);
    (**(code **)(*DAT_103663bc + 0x5d0))(1);
    (**(code **)(*DAT_103663bc + 0x5d0))(2);
    uVar3 = 3;
  }
  else if (param_1 == 1) {
    (**(code **)(*DAT_103663bc + 0x5d0))(4);
    (**(code **)(*DAT_103663bc + 0x5d0))(5);
    (**(code **)(*DAT_103663bc + 0x5d0))(6);
    uVar3 = 7;
  }
  else if (param_1 == 2) {
    (**(code **)(*DAT_103663bc + 0x5d0))(8);
    (**(code **)(*DAT_103663bc + 0x5d0))(9);
    (**(code **)(*DAT_103663bc + 0x5d0))(10);
    uVar3 = 0xb;
  }
  else if (param_1 == 3) {
    (**(code **)(*DAT_103663bc + 0x5d0))(0xc);
    (**(code **)(*DAT_103663bc + 0x5d0))(0xd);
    (**(code **)(*DAT_103663bc + 0x5d0))(0xe);
    uVar3 = 0xf;
  }
  else {
    if (param_1 != 4) goto LAB_1019939e;
    (**(code **)(*DAT_103663bc + 0x5d0))(0x10);
    uVar3 = 0x11;
  }
  (**(code **)(*DAT_103663bc + 0x5d0))(uVar3);
LAB_1019939e:
  (**(code **)(*DAT_103663bc + 0x5a4))();
  return 1;
}


// ==== 101993c0 FUN_101993c0

undefined4 FUN_101993c0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  FUN_10196c50();
  FUN_10198710(2);
  *(int *)(in_ECX + 500) = param_1;
  iVar2 = *(int *)(in_ECX + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1f8) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1fc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x200) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x204) = 0xffffffff;
  if (-1 < *(int *)(iVar2 + 0x2f4)) {
    *(undefined4 *)(iVar2 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar2 + 0x2ec) = 0xffffffff;
  iVar2 = *(int *)(in_ECX + 0x1fc);
  iVar3 = *(int *)(in_ECX + 0x1d8);
  if (iVar2 < *(int *)(iVar3 + 0x2f4)) {
    *(int *)(iVar3 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
  }
  iVar2 = *(int *)(in_ECX + 0x200);
  iVar3 = *(int *)(in_ECX + 0x1dc);
  if (iVar2 < *(int *)(iVar3 + 0x2f4)) {
    *(int *)(iVar3 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
  }
  iVar2 = *(int *)(in_ECX + 0x204);
  iVar3 = *(int *)(in_ECX + 0x1e0);
  if (iVar2 < *(int *)(iVar3 + 0x2f4)) {
    *(int *)(iVar3 + 0x2ec) = iVar2;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar3 + 0x2ec) = 0xffffffff;
  }
  if (*(int *)(in_ECX + 0x1f0) < 0) {
    iVar2 = *DAT_103663bc;
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x25e08));
    (**(code **)(iVar2 + 0x658))(puVar1);
    iVar2 = *(int *)(in_ECX + 0x1d0);
    if (-1 < *(int *)(iVar2 + 0x2f4)) {
      *(undefined4 *)(iVar2 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar2 + 0x2ec) = 0xffffffff;
    return 1;
  }
  iVar2 = FUN_10196d00();
  if (iVar2 == 0) {
    iVar3 = 1;
  }
  else if (iVar2 == 10) {
    iVar3 = 2;
  }
  else if (iVar2 == 0x12) {
    iVar3 = 3;
  }
  else if (iVar2 == 0x19) {
    iVar3 = 4;
  }
  else if (iVar2 == 0x1f) {
    iVar3 = 5;
  }
  else if (iVar2 == 0x26) {
    iVar3 = 6;
  }
  else if (iVar2 == 0x2c) {
    iVar3 = 7;
  }
  else if (iVar2 == 0x31) {
    iVar3 = 8;
  }
  else {
    iVar3 = 9;
    if (iVar2 != 0x35) {
      iVar3 = param_1;
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x118))(1);
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x118))(0);
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x118))(0);
  FUN_10196f10(0);
  (**(code **)(**(int **)(*(int *)(DAT_103663bc[0x142b] + 0x1fc) + 0x1d0) + 0x174))();
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + iVar3 * 0xc + 0x7c21c));
  FUN_10196980(puVar1);
  (**(code **)(*DAT_103663bc + 0x5a4))();
  return 1;
}


// ==== 10199630 FUN_10199630

undefined4 FUN_10199630(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  
  FUN_10196c50();
  FUN_10196f10(0);
  if (*(int *)(in_ECX + 0x1f0) == 3) {
    if (param_1 != 0) {
      if (param_1 != 1) goto LAB_10199760;
      iVar1 = *(int *)(in_ECX + 500);
      if (iVar1 != 0) goto LAB_101996da;
      goto LAB_101996e0;
    }
LAB_10199662:
    (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x174))();
    FUN_10198e40(0xb3);
    FUN_10198e40(0xb4);
    FUN_10198e40(0xb5);
    FUN_10198e40(0xb6);
    uVar4 = 0xba;
  }
  else {
    iVar1 = param_1;
    if (param_1 == 0) goto LAB_10199662;
LAB_101996da:
    if (iVar1 != 1) goto LAB_10199760;
LAB_101996e0:
    (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x174))();
    FUN_10198e40(0xb3);
    FUN_10198e40(0xb4);
    FUN_10198e40(0xb5);
    FUN_10198e40(0xb6);
    FUN_10198e40(0xba);
    FUN_10198e40(0xbb);
    uVar4 = 0x323;
  }
  FUN_10198e40(uVar4);
LAB_10199760:
  *(int *)(in_ECX + 0x1f8) = param_1;
  *(undefined4 *)(in_ECX + 0x1fc) = 0;
  *(undefined4 *)(in_ECX + 0x200) = 0;
  *(undefined4 *)(in_ECX + 0x204) = 0;
  if (0 < *(int *)(*(int *)(in_ECX + 0x1d8) + 0x2f4)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x2ec) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x200);
  iVar2 = *(int *)(in_ECX + 0x1dc);
  if (iVar1 < *(int *)(iVar2 + 0x2f4)) {
    *(int *)(iVar2 + 0x2ec) = iVar1;
  }
  if (iVar1 < 0) {
    *(undefined4 *)(iVar2 + 0x2ec) = 0xffffffff;
  }
  iVar1 = *(int *)(in_ECX + 0x204);
  iVar2 = *(int *)(in_ECX + 0x1e0);
  if (iVar1 < *(int *)(iVar2 + 0x2f4)) {
    *(int *)(iVar2 + 0x2ec) = iVar1;
  }
  if (iVar1 < 0) {
    *(undefined4 *)(iVar2 + 0x2ec) = 0xffffffff;
  }
  if (-1 < *(int *)(in_ECX + 0x1f0)) {
    if (-1 < *(int *)(in_ECX + 500)) {
      (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x118))(1);
      (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x118))(1);
      (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x118))(1);
      (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x118))(1);
      (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x118))(1);
      (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x118))(1);
      FUN_10196f10(1);
      (**(code **)(*DAT_103663bc + 0x5a4))();
      iVar1 = *DAT_103663bc;
      uVar4 = FUN_10196c30();
      (**(code **)(iVar1 + 0x5a0))(uVar4);
      FUN_10198710(3);
      return 1;
    }
    iVar1 = *DAT_103663bc;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x25e64));
    (**(code **)(iVar1 + 0x658))(puVar3);
    iVar1 = *(int *)(in_ECX + 0x1d4);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1d8);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1dc);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x1e0);
    if (-1 < *(int *)(iVar1 + 0x2f4)) {
      *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
    FUN_10196f10(0);
    return 1;
  }
  iVar1 = *DAT_103663bc;
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x25e08));
  (**(code **)(iVar1 + 0x658))(puVar3);
  iVar1 = *(int *)(in_ECX + 0x1d0);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1d4);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1d8);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1dc);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x1e0);
  if (-1 < *(int *)(iVar1 + 0x2f4)) {
    *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2ec) = 0xffffffff;
  FUN_10196f10(0);
  return 1;
}


// ==== 10199a30 FUN_10199a30

void FUN_10199a30(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021638f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCSelectCtrl::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xbc));
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0xbb] = 0xffffffff;
  FArray::Empty((FArray *)(in_ECX + 0xbc),4,0);
  ExceptionList = local_c;
  return;
}


// ==== 10199ac0 FUN_10199ac0

void FUN_10199ac0(void)

{
  int in_ECX;
  
  FArray::Empty((FArray *)(in_ECX + 0x2f0),4,0);
  *(undefined4 *)(in_ECX + 0x2ec) = 0xffffffff;
  return;
}


// ==== 10199ae0 FUN_10199ae0

void FUN_10199ae0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_102163c6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCSelectCtrl::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_10039be0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 10199b50 FUN_10199b50

void FUN_10199b50(byte param_1)

{
  void *in_ECX;
  
  FUN_10199ae0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2fc);
  }
  return;
}


// ==== 10199b80 FUN_10199b80

void FUN_10199b80(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102163f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnInfoWnd::vftable;
  in_ECX[0x73] = 0;
  *(undefined2 *)(in_ECX + 0x75) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10199bf0 FUN_10199bf0

void FUN_10199bf0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216428;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnInfoWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10199c50 FUN_10199c50

void FUN_10199c50(byte param_1)

{
  void *in_ECX;
  
  FUN_10199bf0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5d4);
  }
  return;
}


// ==== 10199c80 FUN_10199c80

void FUN_10199c80(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnSetupWnd::vftable;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0xffffffff;
  in_ECX[0x7d] = 0xffffffff;
  in_ECX[0x7e] = 0xffffffff;
  in_ECX[0x7f] = 0xffffffff;
  in_ECX[0x80] = 0xffffffff;
  in_ECX[0x81] = 0xffffffff;
  in_ECX[0x82] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10199d30 FUN_10199d30

void FUN_10199d30(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10216488;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnSetupWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10199d90 FUN_10199d90

void FUN_10199d90(byte param_1)

{
  void *in_ECX;
  
  FUN_10199d30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x20c);
  }
  return;
}


// ==== 10199dc0 FUN_10199dc0

undefined4 FUN_10199dc0(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  wchar_t *pwStack_18;
  FName local_4 [4];
  
  FUN_10061b40();
  pwStack_18 = L"L2UI_CH3.LobbyWnd.select2_back";
  uStack_1c = 0x10199dd9;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1e8) = uVar1;
  pwStack_18 = 
  L"㶋쏔ဢ\xd7ffඋ쏜ဢᆋ䲋తᶋ쐬ဢjj橒樀儀桐헠ဵ폿쒃蔠瓀樘樀栀\x80";
  FName::FName(local_4,0);
  UObject::GetTransientPackage();
  uStack_1c = *(undefined4 *)GError_exref;
  pwStack_18 = (wchar_t *)0x0;
  uStack_20 = 0;
  uStack_34 = 0x10199e17;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_18 = (wchar_t *)0x0;
    uStack_1c = 0x80;
    uStack_20 = 0;
    iVar3 = FUN_1001a820();
  }
  pwStack_18 = (wchar_t *)0x0;
  uStack_1c = 0;
  *(int *)(in_ECX + 0x1ec) = iVar3;
  uStack_20 = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x1503;
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xc0))();
  uStack_34 = *(undefined4 *)(in_ECX + 0x1ec);
  uStack_38 = 0x10199e79;
  FUN_10060d40();
  uStack_34 = 0x10199e85;
  FUN_1005c1e0();
  uStack_34 = 0x10199e91;
  FName::FName((FName *)&uStack_20,0);
  UObject::GetTransientPackage();
  uStack_38 = *(undefined4 *)GError_exref;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_50 = 0x10199eb1;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10199a30();
  }
  uStack_34 = 0;
  uStack_38 = 0;
  *(int *)(in_ECX + 0x1cc) = iVar3;
  uStack_3c = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a3b2;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))();
  uStack_50 = *(undefined4 *)(in_ECX + 0x1cc);
  uStack_54 = 0x10199f04;
  FUN_10060d40();
  uStack_50 = 0x10199f10;
  FUN_1005c1e0();
  uStack_50 = 0x10199f1c;
  FName::FName((FName *)&uStack_3c,0);
  UObject::GetTransientPackage();
  uStack_54 = *(undefined4 *)GError_exref;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_6c = 0x10199f3c;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10199a30();
  }
  uStack_50 = 0;
  uStack_54 = 0;
  *(int *)(in_ECX + 0x1d0) = iVar3;
  uStack_58 = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a4b3;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  uStack_6c = *(undefined4 *)(in_ECX + 0x1d0);
  uStack_70 = 0x10199f8f;
  FUN_10060d40();
  uStack_6c = 0x10199f9b;
  FUN_1005c1e0();
  uStack_6c = 0x10199fa7;
  FName::FName((FName *)&uStack_58,0);
  UObject::GetTransientPackage();
  uStack_70 = *(undefined4 *)GError_exref;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_88 = 0x10199fc7;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10199a30();
  }
  uStack_6c = 0;
  uStack_70 = 0;
  *(int *)(in_ECX + 0x1d4) = iVar3;
  uStack_74 = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a5b4;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  uStack_88 = *(undefined4 *)(in_ECX + 0x1d4);
  uStack_8c = 0x1019a01a;
  FUN_10060d40();
  uStack_88 = 0x1019a026;
  FUN_1005c1e0();
  uStack_88 = 0x1019a032;
  FName::FName((FName *)&uStack_74,0);
  UObject::GetTransientPackage();
  uStack_8c = *(undefined4 *)GError_exref;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a4 = 0x1019a052;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10199a30();
  }
  uStack_88 = 0;
  uStack_8c = 0;
  *(int *)(in_ECX + 0x1d8) = iVar3;
  uStack_90 = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a7b6;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  uStack_a4 = *(undefined4 *)(in_ECX + 0x1d8);
  uStack_a8 = 0x1019a0a5;
  FUN_10060d40();
  uStack_a4 = 0x1019a0b1;
  FUN_1005c1e0();
  uStack_a4 = 0x1019a0bd;
  FName::FName((FName *)&uStack_90,0);
  pUVar4 = UObject::GetTransientPackage();
  uStack_a8 = *(undefined4 *)GError_exref;
  uStack_a4 = 0;
  uStack_ac = 0;
  pUVar2 = UObject::StaticAllocateObject(&DAT_103aa550,pUVar4,uStack_90,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10199a30();
  }
  uStack_a4 = 0;
  uStack_a8 = 0;
  *(int *)(in_ECX + 0x1dc) = iVar3;
  uStack_ac = 0x11;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a6b5;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))(0x56,0x94,0x88);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc),2);
  FUN_1005c1e0(uVar1);
  FName::FName((FName *)&uStack_ac,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticAllocateObject
                     (&DAT_103aa550,pUVar4,uStack_ac,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10199a30();
  }
  *(int *)(in_ECX + 0x1e0) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0xf0a8b7;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))(0x56,0xac,0x88,0x11,0,0,3);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e0),2);
  FUN_1005c1e0(uVar1);
  FUN_10198e70();
  return 1;
}


// ==== 1019a1e0 FUN_1019a1e0

void FUN_1019a1e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102164b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCPawnCreateWnd::vftable;
  in_ECX[0x8e] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1019a240 FUN_1019a240

void FUN_1019a240(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102164e8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPawnCreateWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1019a2a0 FUN_1019a2a0

void FUN_1019a2a0(byte param_1)

{
  void *in_ECX;
  
  FUN_1019a240();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x23c);
  }
  return;
}


// ==== 1019a2d0 FUN_1019a2d0

undefined4 FUN_1019a2d0(void)

{
  UObject *pUVar1;
  int *piVar2;
  undefined4 uVar3;
  UPackage *pUVar4;
  int in_ECX;
  byte bVar5;
  uint uVar6;
  undefined2 in_FPUControlWord;
  void *pvVar7;
  UPackage **ppUStack_124;
  undefined4 *puStack_120;
  undefined8 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_e8;
  UPackage *pUStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  UPackage *pUStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined *puStack_98;
  UPackage *pUStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined *puStack_6c;
  UPackage *pUStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_38;
  undefined4 local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_102165e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = 0;
  FUN_10061b40();
  *(undefined4 *)(in_ECX + 0x238) = 0;
  uStack_54 = 0x1019a315;
  FName::FName((FName *)&local_38,0);
  pUStack_68 = UObject::GetTransientPackage();
  uStack_58 = *(undefined4 *)GError_exref;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = local_38;
  puStack_6c = &DAT_103aafb0;
  uStack_70 = 0x1019a33d;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10199c80();
  }
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0xcd;
  uStack_60 = 0x100;
  *(int **)(in_ECX + 0x1cc) = piVar2;
  uStack_64 = 0x1b;
  pUStack_68 = (UPackage *)0x18;
  puStack_6c = (undefined *)0x1019a373;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_70 = *(undefined4 *)(in_ECX + 0x1cc);
  puStack_6c = (undefined *)0x4002;
  uStack_74 = 0x1019a386;
  puStack_6c = (undefined *)FUN_10060d40();
  uStack_70 = 0x1019a392;
  FUN_1005c1e0();
  puStack_6c = (undefined *)0x9e;
  uStack_70 = 0x1019a3a7;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x164))();
  uStack_70 = 0x1b;
  uStack_74 = 0x18;
  uStack_78 = 1;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xd0))();
  uStack_84 = CONCAT44(0x1019a3d1,(UPackage *)uStack_84);
  FName::FName((FName *)&uStack_64,0);
  pUStack_94 = UObject::GetTransientPackage();
  uStack_84 = (ulonglong)*(uint *)GError_exref;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_90 = uStack_64;
  puStack_98 = &DAT_103aaa80;
  uStack_9c = 0x1019a3f1;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10199b80();
  }
  uStack_84 = 0;
  uStack_88 = 0xcd;
  uStack_8c = 0x100;
  *(int **)(in_ECX + 0x1d0) = piVar2;
  uStack_90 = 0xf9;
  pUStack_94 = (UPackage *)0x18;
  puStack_98 = (undefined *)0x1019a42c;
  (**(code **)(*piVar2 + 0xc0))();
  uStack_9c = *(undefined4 *)(in_ECX + 0x1d0);
  puStack_98 = (undefined *)0x2;
  uStack_a0 = 0x1019a43c;
  puStack_98 = (undefined *)FUN_10060d40();
  uStack_9c = 0x1019a448;
  FUN_1005c1e0();
  puStack_98 = (undefined *)0xf9;
  uStack_9c = 0x18;
  uStack_a0 = 1;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xd0))();
  uStack_ac = CONCAT44(0x1019a472,(UPackage *)uStack_ac);
  FName::FName((FName *)&uStack_8c,0);
  pUStack_bc = UObject::GetTransientPackage();
  uStack_ac = (ulonglong)*(uint *)GError_exref;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = uStack_8c;
  puStack_c0 = &DAT_10357da0;
  uStack_c4 = 0x1019a492;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_ac = CONCAT44(0x1019a4aa,(UPackage *)uStack_ac);
    FString::FString((FString *)&uStack_78,(ushort *)L"l2ui.LobbyWnd.left_click");
    uStack_58 = 0;
    uStack_88 = 1;
    uStack_ac = CONCAT44(0x1019a4c9,(UPackage *)uStack_ac);
    FString::FString((FString *)&uStack_84,(ushort *)L"l2ui.LobbyWnd.left");
    uStack_58 = 1;
    uStack_ac = CONCAT44(&uStack_78,&uStack_84);
    uStack_88 = 3;
    uStack_b0 = 0x1019a4ec;
    uVar3 = FUN_10006d80();
  }
  *(undefined4 *)(in_ECX + 0x224) = uVar3;
  uStack_58 = 0;
  uVar6 = uStack_88;
  if ((uStack_88 & 2) != 0) {
    uVar6 = uStack_88 & 0xfffffffd;
    uStack_88 = uVar6;
    FString::~FString((FString *)&uStack_84);
  }
  uStack_58 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    uStack_88 = uVar6 & 0xfffffffe;
    FString::~FString((FString *)&uStack_78);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x224) + 0x1cc) = 0x100d;
  uStack_ac = 0;
  uStack_84._0_4_ = (UPackage *)(longlong)ROUND(*(float *)(in_ECX + 0x8c) - 100.0);
  uStack_b0 = 0x2c;
  uStack_b4 = 0x2c;
  uStack_b8 = (UPackage *)uStack_84;
  uStack_8c = CONCAT22(uStack_8c._2_2_,in_FPUControlWord);
  uStack_84 = (ulonglong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 88.0);
  pUStack_bc = (UPackage *)uStack_84;
  puStack_c0 = (undefined *)0x1019a5c4;
  (**(code **)(**(int **)(in_ECX + 0x224) + 0xc0))();
  uStack_c4 = *(undefined4 *)(in_ECX + 0x224);
  puStack_c0 = (undefined *)0x2;
  uStack_c8 = 0x1019a5d4;
  puStack_c0 = (undefined *)FUN_10060d40();
  uStack_c4 = 0x1019a5e0;
  FUN_1005c1e0();
  puStack_c0 = (undefined *)0x1019a5f0;
  (**(code **)(**(int **)(in_ECX + 0x224) + 0x13c))();
  puStack_c0 = (undefined *)0xffffffc8;
  uStack_c4 = 0xffffffbe;
  uStack_c8 = 8;
  (**(code **)(**(int **)(in_ECX + 0x224) + 0xd0))();
  uStack_d4 = CONCAT44(0x1019a61a,(undefined4)uStack_d4);
  FName::FName((FName *)&uStack_ac,0);
  pUStack_e4 = UObject::GetTransientPackage();
  uStack_d4 = (ulonglong)*(uint *)GError_exref;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_e0 = (UPackage *)uStack_ac;
  puStack_e8 = &DAT_10357da0;
  uStack_ec = 0x1019a63a;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_d4 = CONCAT44(0x1019a652,(undefined4)uStack_d4);
    FString::FString((FString *)&pUStack_94,(ushort *)L"l2ui.LobbyWnd.right_click");
    uStack_84 = CONCAT44(2,(UPackage *)uStack_84);
    uStack_b0 = uStack_b0 | 4;
    uStack_d4 = CONCAT44(0x1019a66e,(undefined4)uStack_d4);
    FString::FString((FString *)&uStack_a0,(ushort *)L"l2ui.LobbyWnd.right");
    uStack_84 = CONCAT44(3,(UPackage *)uStack_84);
    uStack_b0 = uStack_b0 | 8;
    uStack_d4 = CONCAT44(&pUStack_94,&uStack_a0);
    uStack_d8 = 0x1019a68e;
    uVar3 = FUN_10006d80();
  }
  *(undefined4 *)(in_ECX + 0x228) = uVar3;
  uStack_84 = CONCAT44(2,(UPackage *)uStack_84);
  uVar6 = uStack_b0;
  if ((uStack_b0 & 8) != 0) {
    uVar6 = uStack_b0 & 0xfffffff7;
    uStack_b0 = uVar6;
    FString::~FString((FString *)&uStack_a0);
  }
  uStack_84 = CONCAT44(0xffffffff,(UPackage *)uStack_84);
  if ((uVar6 & 4) != 0) {
    uStack_b0 = uVar6 & 0xfffffffb;
    FString::~FString((FString *)&pUStack_94);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x228) + 0x1cc) = 0x100e;
  uStack_d4 = 0;
  uStack_ac._0_4_ = (UPackage *)(longlong)ROUND(*(float *)(in_ECX + 0x8c) - 100.0);
  uStack_d8 = 0x2c;
  uStack_dc = 0x2c;
  uStack_e0 = (UPackage *)uStack_ac;
  uStack_b4 = CONCAT22(uStack_b4._2_2_,in_FPUControlWord);
  uStack_ac = (ulonglong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 + 44.0);
  pUStack_e4 = (UPackage *)uStack_ac;
  puStack_e8 = (undefined *)0x1019a766;
  (**(code **)(**(int **)(in_ECX + 0x228) + 0xc0))();
  uStack_ec = *(undefined4 *)(in_ECX + 0x228);
  puStack_e8 = (undefined *)0x2;
  uStack_f0 = 0x1019a776;
  puStack_e8 = (undefined *)FUN_10060d40();
  uStack_ec = 0x1019a782;
  FUN_1005c1e0();
  puStack_e8 = (undefined *)0x1019a792;
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x13c))();
  puStack_e8 = (undefined *)0xffffffc8;
  uStack_ec = 0x42;
  uStack_f0 = 8;
  (**(code **)(**(int **)(in_ECX + 0x228) + 0xd0))();
  uStack_fc = CONCAT44(0x1019a7bc,(undefined4)uStack_fc);
  FName::FName((FName *)&uStack_d4,0);
  UObject::GetTransientPackage();
  uStack_fc = (ulonglong)*(uint *)GError_exref;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_fc = CONCAT44(0x1019a7f4,(undefined4)uStack_fc);
    FString::FString((FString *)&uStack_c8,(ushort *)L"l2ui.LobbyWnd.zoomin_click");
    uStack_ac = CONCAT44(4,(UPackage *)uStack_ac);
    uStack_d8 = uStack_d8 | 0x10;
    uStack_fc = CONCAT44(0x1019a810,(undefined4)uStack_fc);
    FString::FString((FString *)&pUStack_bc,(ushort *)L"l2ui.LobbyWnd.zoomin");
    uStack_ac = CONCAT44(5,(UPackage *)uStack_ac);
    uStack_d8 = uStack_d8 | 0x20;
    uStack_fc = CONCAT44(&uStack_c8,&pUStack_bc);
    uVar3 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x22c) = uVar3;
  uStack_ac = CONCAT44(4,(UPackage *)uStack_ac);
  uVar6 = uStack_d8;
  if ((uStack_d8 & 0x20) != 0) {
    uVar6 = uStack_d8 & 0xffffffdf;
    uStack_d8 = uVar6;
    FString::~FString((FString *)&pUStack_bc);
  }
  uStack_ac = CONCAT44(0xffffffff,(UPackage *)uStack_ac);
  if ((uVar6 & 0x10) != 0) {
    uStack_d8 = uVar6 & 0xffffffef;
    FString::~FString((FString *)&uStack_c8);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x22c) + 0x1cc) = 0x1010;
  uStack_fc = 0;
  bVar5 = 0x2c;
  uStack_dc = CONCAT22(uStack_dc._2_2_,in_FPUControlWord);
  uStack_d4 = (ulonglong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 22.0);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0xd0))();
  puStack_120 = (undefined4 *)0x1019a95b;
  FName::FName((FName *)&uStack_fc,0);
  pUVar4 = UObject::GetTransientPackage();
  ppUStack_124 = *(UPackage ***)GError_exref;
  puStack_120 = (undefined4 *)0x0;
  pUVar1 = UObject::StaticAllocateObject(&DAT_10357870,pUVar4,(undefined4)uStack_fc,0,0);
  if (pUVar1 == (UObject *)0x0) {
    uVar3 = 0;
  }
  else {
    puStack_120 = (undefined4 *)0x1019a993;
    FString::FString((FString *)&uStack_f0,(ushort *)L"l2ui.LobbyWnd.zoomout_click");
    uStack_d4 = CONCAT44(6,(undefined4)uStack_d4);
    puStack_120 = (undefined4 *)0x1019a9af;
    FString::FString((FString *)&pUStack_e4,(ushort *)L"l2ui.LobbyWnd.zoomout");
    uStack_d4 = CONCAT44(7,(undefined4)uStack_d4);
    bVar5 = 0xec;
    puStack_120 = &uStack_f0;
    ppUStack_124 = &pUStack_e4;
    uVar3 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x230) = uVar3;
  uStack_d4 = CONCAT44(6,(undefined4)uStack_d4);
  if ((char)bVar5 < '\0') {
    bVar5 = bVar5 & 0x7f;
    FString::~FString((FString *)&pUStack_e4);
  }
  uStack_d4 = CONCAT44(0xffffffff,(undefined4)uStack_d4);
  if ((bVar5 & 0x40) != 0) {
    FString::~FString((FString *)&uStack_f0);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x230) + 0x1cc) = 0x1010;
  puStack_120 = (undefined4 *)0x0;
  ppUStack_124 = (UPackage **)0x0;
  uStack_fc._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) - 100.0);
  uVar3 = (undefined4)uStack_fc;
  pvVar7 = (void *)0x2c;
  uStack_fc = (ulonglong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 22.0);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0xc0))((undefined4)uStack_fc,uVar3,0x2c);
  uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x230),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x230) + 0xd0))(8,0,0xffffffc8);
  FName::FName((FName *)&ppUStack_124,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_103aa020,pUVar4,ppUStack_124,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar1 == (UObject *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10196610();
  }
  *(int **)(in_ECX + 0x234) = piVar2;
  (**(code **)(*piVar2 + 0xc0))
            (*(int *)GSEKScreenX_exref + -0x9a,*(int *)GSEKScreenY_exref + -200,0x78,0x8a,0,0,3);
  uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x234),2);
  FUN_1005c1e0(uVar3);
  (**(code **)(**(int **)(in_ECX + 0x234) + 0xd0))(9,0xffffffde,0xfffffff6);
  ExceptionList = pvVar7;
  return 1;
}


// ==== 1019ac10 FUN_1019ac10

undefined4 FUN_1019ac10(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x1ac))(param_1,param_2);
  ExceptionList = local_10;
  return 1;
}


// ==== 1019ac74 Catch@1019ac74

void Catch_1019ac74(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019ac88 Catch@1019ac88

void Catch_1019ac88(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_InvenItemWnd::OnLButtonDblClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019acb0 FUN_1019acb0

bool FUN_1019acb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xfe001a) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf3) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf4) {
      iVar1 = (**(code **)(*in_ECX + 0x200))();
      return iVar1 != 0;
    }
    if (param_2 == 0x11c) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0x102) {
      iVar1 = (**(code **)(*in_ECX + 0x204))();
      return iVar1 != 0;
    }
    if (param_2 == 0x103) {
      iVar1 = (**(code **)(*in_ECX + 0x208))();
      return iVar1 != 0;
    }
    if (param_2 == 0x115) {
      iVar1 = (**(code **)(*in_ECX + 0x20c))();
      return iVar1 != 0;
    }
    if (param_2 == 0x117) {
      iVar1 = (**(code **)(*in_ECX + 0x218))();
      return iVar1 != 0;
    }
    if (param_2 == 0x118) {
      iVar1 = (**(code **)(*in_ECX + 0x21c))();
      return iVar1 != 0;
    }
    if (param_2 == 0x119) {
      iVar1 = (**(code **)(*in_ECX + 0x224))();
      return iVar1 != 0;
    }
    if (param_2 == 0x11d) {
      iVar1 = (**(code **)(*in_ECX + 0x220))();
      return iVar1 != 0;
    }
    if (param_2 == 0x11e) {
      iVar1 = (**(code **)(*in_ECX + 0x228))();
      return iVar1 != 0;
    }
    if (param_2 == 0x11f) {
      iVar1 = (**(code **)(*in_ECX + 0x22c))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfe0107) {
      iVar1 = (**(code **)(*in_ECX + 0x234))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfe010a) {
      iVar1 = (**(code **)(*in_ECX + 0x23c))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfe0108) {
      iVar1 = (**(code **)(*in_ECX + 0x238))();
      return iVar1 != 0;
    }
    if (param_2 == 0x116) {
      iVar1 = (**(code **)(*in_ECX + 0x210))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x11b) {
      iVar1 = (**(code **)(*in_ECX + 0x214))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x12d) {
      iVar1 = (**(code **)(*in_ECX + 0x230))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1019af70 FUN_1019af70

void FUN_1019af70(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(in_ECX + 0x7ec);
  iVar2 = 8;
  do {
    (**(code **)(*(int *)piVar1[-8] + 0x13c))();
    (**(code **)(*(int *)*piVar1 + 0x13c))();
    (**(code **)(**(int **)(*piVar1 + 0x1cc) + 0x13c))();
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 1019afc0 FUN_1019afc0

void FUN_1019afc0(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  void *local_dc;
  undefined1 *puStack_d8;
  undefined4 local_d4;
  ushort local_d0 [100];
  uint local_8;
  
  puStack_d8 = &LAB_10216620;
  local_dc = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_d0;
  ExceptionList = &local_dc;
  local_d4 = 0;
  for (iVar5 = 0; iVar5 < 0x14; iVar5 = iVar5 + 1) {
    iVar1 = iVar5 * 0x314 + in_ECX;
    _memset((void *)(iVar1 + 0x87c),0,0x314);
    *(undefined4 *)(iVar1 + 0x8c8) = (&DAT_103527b0)[iVar5 * 3];
    *(undefined4 *)(iVar1 + 0x8cc) = (&DAT_103527b4)[iVar5 * 3];
    *(undefined4 *)(iVar1 + 0x8d0) = (&DAT_103527b8)[iVar5 * 3];
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,0);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,1);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,8);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0d4));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,9);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,6);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,7);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,6);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0e0));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,7);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,2);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,3);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,2);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0ec));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,3);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,10);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,0xb);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,0xc);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b11c));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b0f8));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,0xd);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b128));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b104));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,4);
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6b110));
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b134));
  puVar4 = FString::operator*((FString *)(GL2GameData_exref + 0x6b104));
  appSprintf(local_d0,(ushort *)L"%s%s%s",puVar4,puVar3,puVar2);
  FUN_1000b480(local_d0,5);
  local_d4 = 0xffffffff;
  ExceptionList = local_dc;
  __security_check_cookie(local_8 ^ (uint)local_d0);
  return;
}


// ==== 1019b72a Catch@1019b72a

void Catch_1019b72a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019b73e Catch@1019b73e

void Catch_1019b73e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::AddAllCharacter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019b760 FUN_1019b760

undefined4 FUN_1019b760(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 4) == 1) {
    switch(*(undefined4 *)(param_1 + 0xd4)) {
    case 6:
      return 4;
    case 9:
      return 2;
    case 10:
    case 0xf:
    case 0x10:
      return 0;
    case 0xb:
      return 1;
    case 0xc:
      return 3;
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0xd8);
    if ((*(int *)(in_ECX + 0x4620 + iVar1 * 4) == -1) &&
       ((iVar1 != 3 || (*(int *)(param_1 + 0xd4) == 0xe)))) {
      *(undefined4 *)(in_ECX + 0x4620 + iVar1 * 4) = *(undefined4 *)(param_1 + 0xc);
    }
    return 5;
  }
  return 6;
}


// ==== 1019b810 FUN_1019b810

void FUN_1019b810(int param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FName local_8 [8];
  
  iVar1 = *(int *)(param_1 + 4);
  FName::FName(local_8,0);
  iVar2 = FName::operator==((FName *)(param_1 + 0x50),local_8);
  if (iVar2 == 0) {
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x50));
    appStrcpy(param_2,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x54));
    appStrcpy(param_2 + 0x100,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x3c));
    appStrcpy(param_2 + 0x200,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x40));
    appStrcpy(param_2 + 0x280,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x44));
    appStrcpy(param_2 + 0x300,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x48));
    appStrcpy(param_2 + 0x380,puVar3);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x4c));
    appStrcpy(param_2 + 0x400,puVar3);
    puVar3 = FString::operator*((FString *)(param_1 + 0x58));
    appStrcpy(param_2 + 0x500,puVar3);
    *(int *)(param_2 + 0xe0e) = iVar1;
    uVar4 = 1;
    *(undefined4 *)(param_2 + 0xe14) = *(undefined4 *)(param_1 + 0xc);
    puVar3 = L2FName::operator*((L2FName *)(param_1 + 0x3c));
    iVar2 = FUN_1003f630(puVar3,uVar4);
    *(int *)(param_2 + 0xe02) = iVar2;
    if (iVar2 == 0) {
      appStrcpy(param_2 + 0x200,(ushort *)L"Icon.NoImage");
      uVar4 = FUN_1003f630(L"Icon.NoImage",1);
      *(undefined4 *)(param_2 + 0xe02) = uVar4;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_2 + 0xe22) = *(undefined4 *)(param_1 + 0x130);
      *(undefined4 *)(param_2 + 0xe24) = *(undefined4 *)(param_1 + 0x128);
      *(undefined4 *)(param_2 + 0xe26) = *(undefined4 *)(param_1 + 300);
      *(undefined4 *)(param_2 + 0xe2c) = *(undefined4 *)(param_1 + 0x144);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(param_1 + 0x134);
      *(undefined4 *)(param_2 + 0xe48) = *(undefined4 *)(param_1 + 0x154);
      *(undefined4 *)(param_2 + 0xe4a) = *(undefined4 *)(param_1 + 0x158);
      *(undefined4 *)(param_2 + 0xe1c) = *(undefined4 *)(param_1 + 0xd4);
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(param_1 + 0x5e8);
      *(undefined4 *)(param_2 + 0xe3e) = *(undefined4 *)(param_1 + 0x5e4);
      *(undefined4 *)(param_2 + 0xe28) = *(undefined4 *)(param_1 + 0x5f0);
      *(undefined4 *)(param_2 + 0xe2a) = *(undefined4 *)(param_1 + 0x5f4);
      *(undefined4 *)(param_2 + 0xe1c) = *(undefined4 *)(param_1 + 0xd4);
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_2 + 0xe1e) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_2 + 0xe32) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_2 + 0xe58) = *(undefined4 *)(param_1 + 0xfc);
      *(undefined4 *)(param_2 + 0xe10) = *(undefined4 *)(param_1 + 0x100);
      if ((*(int *)(param_1 + 0x100) == 2) || (*(int *)(param_1 + 0x100) == 0x10)) {
        param_2[0xe60] = 1;
        param_2[0xe61] = 0;
        return;
      }
      if (*(int *)(param_1 + 0x100) == 5) {
        param_2[0xe62] = 1;
        param_2[0xe63] = 0;
      }
    }
  }
  return;
}


// ==== 1019bab0 FUN_1019bab0

void FUN_1019bab0(void)

{
  uint uVar1;
  int iVar2;
  uint uStack_44;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216650;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = 0x5c002e;
  local_28 = 0x32004c;
  local_24 = 0x69002e;
  local_20 = 0x69006e;
  local_1c = 0;
  local_18 = uStack_44;
  iVar2 = FUN_1014a730();
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x80c) + 0x200);
  if (uVar1 < 0x15) {
    iVar2 = FUN_1014a730();
    iVar2 = iVar2 + 0x87c + uVar1 * 0x314;
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_HEAD",*(undefined4 *)(iVar2 + 0xb0),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_RHAND",*(undefined4 *)(iVar2 + 0xb4),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_LHAND",*(undefined4 *)(iVar2 + 0xb8),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_GLOVES",*(undefined4 *)(iVar2 + 0xbc),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_CHEST",*(undefined4 *)(iVar2 + 0xc0),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_LEGS",*(undefined4 *)(iVar2 + 0xc4),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_FEET",*(undefined4 *)(iVar2 + 200),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_BACK",*(undefined4 *)(iVar2 + 0xcc),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x28))
              (L"L2PawnViewer",L"ST_RLHAND",*(undefined4 *)(iVar2 + 0xd0),&local_2c);
    (**(code **)(**(int **)GConfig_exref + 0x34))(1,0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1019bcb8 Catch@1019bcb8

void Catch_1019bcb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 1019bccc Catch@1019bccc

void Catch_1019bccc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::OnItemSaveBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019bcf0 FUN_1019bcf0

void FUN_1019bcf0(void)

{
  User *this;
  uint uVar1;
  int iVar2;
  wchar_t *pwStack_98;
  User *pUStack_94;
  wchar_t **ppwStack_90;
  wchar_t *pwStack_8c;
  wchar_t *pwStack_88;
  User *pUStack_84;
  wchar_t **ppwStack_80;
  wchar_t *pwStack_7c;
  wchar_t *pwStack_78;
  User *pUStack_74;
  wchar_t **ppwStack_70;
  wchar_t *pwStack_6c;
  wchar_t *pwStack_68;
  User *pUStack_64;
  wchar_t **ppwStack_60;
  wchar_t *pwStack_5c;
  wchar_t *pwStack_58;
  User *pUStack_54;
  wchar_t **ppwStack_50;
  wchar_t *pwStack_4c;
  wchar_t *pwStack_48;
  User *pUStack_44;
  wchar_t **ppwStack_40;
  wchar_t *pwStack_3c;
  wchar_t *pwStack_38;
  User *pUStack_34;
  wchar_t **ppwStack_30;
  wchar_t *pwStack_2c;
  wchar_t *pwStack_28;
  User *pUStack_24;
  undefined4 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_18;
  local_14 = 0x32004c;
  local_18 = 0x5c002e;
  local_8 = 0;
  local_10 = 0x69002e;
  local_c = 0x69006e;
  puStack_20 = (undefined4 *)0x1019bd3b;
  iVar2 = FUN_1014a730();
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x80c) + 0x200);
  if (uVar1 < 0x15) {
    puStack_20 = (undefined4 *)0x1019bd5b;
    iVar2 = FUN_1014a730();
    this = (User *)(iVar2 + 0x87c + uVar1 * 0x314);
    puStack_20 = &local_18;
    pUStack_24 = this + 0xb0;
    pwStack_28 = L"ST_HEAD";
    pwStack_2c = L"L2PawnViewer";
    ppwStack_30 = (wchar_t **)0x1019bd8c;
    (**(code **)(**(int **)GConfig_exref + 4))();
    ppwStack_30 = &pwStack_28;
    pUStack_34 = this + 0xb4;
    pwStack_38 = L"ST_RHAND";
    pwStack_3c = L"L2PawnViewer";
    ppwStack_40 = (wchar_t **)0x1019bdb0;
    (**(code **)(**(int **)GConfig_exref + 4))();
    ppwStack_40 = &pwStack_38;
    pUStack_44 = this + 0xb8;
    pwStack_48 = L"ST_LHAND";
    pwStack_4c = L"L2PawnViewer";
    ppwStack_50 = (wchar_t **)0x1019bdd4;
    (**(code **)(**(int **)GConfig_exref + 4))();
    ppwStack_50 = &pwStack_48;
    pUStack_54 = this + 0xbc;
    pwStack_58 = L"ST_GLOVES";
    pwStack_5c = L"L2PawnViewer";
    ppwStack_60 = (wchar_t **)0x1019bdf8;
    (**(code **)(**(int **)GConfig_exref + 4))();
    ppwStack_60 = &pwStack_58;
    pUStack_64 = this + 0xc0;
    pwStack_68 = L"ST_CHEST";
    pwStack_6c = L"L2PawnViewer";
    ppwStack_70 = (wchar_t **)0x1019be1c;
    (**(code **)(**(int **)GConfig_exref + 4))();
    ppwStack_70 = &pwStack_68;
    pUStack_74 = this + 0xc4;
    pwStack_78 = L"ST_LEGS";
    pwStack_7c = L"L2PawnViewer";
    ppwStack_80 = (wchar_t **)0x1019be40;
    (**(code **)(**(int **)GConfig_exref + 4))();
    ppwStack_80 = &pwStack_78;
    pUStack_84 = this + 200;
    pwStack_88 = L"ST_FEET";
    pwStack_8c = L"L2PawnViewer";
    ppwStack_90 = (wchar_t **)0x1019be64;
    (**(code **)(**(int **)GConfig_exref + 4))();
    ppwStack_90 = &pwStack_88;
    pUStack_94 = this + 0xcc;
    pwStack_98 = L"ST_BACK";
    (**(code **)(**(int **)GConfig_exref + 4))(L"L2PawnViewer");
    (**(code **)(**(int **)GConfig_exref + 4))(L"L2PawnViewer",L"ST_RLHAND",this + 0xd0,&pwStack_98)
    ;
    puStack_20 = (undefined4 *)0x1019beb4;
    User::SetPawnResource(this);
  }
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}


// ==== 1019bed0 FUN_1019bed0

undefined4 FUN_1019bed0(void)

{
  return 1;
}


// ==== 1019bf20 Catch@1019bf20

void Catch_1019bf20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019bf34 Catch@1019bf34

void Catch_1019bf34(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::OnCloseBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019bf60 FUN_1019bf60

void FUN_1019bf60(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102166a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x80c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x80c) + 0x13c))();
  }
  FUN_1005ff00();
  ExceptionList = local_10;
  return;
}


// ==== 1019bfcd Catch@1019bfcd

void Catch_1019bfcd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019bfe1 Catch@1019bfe1

void Catch_1019bfe1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019c000 FUN_1019c000

void FUN_1019c000(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102166c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0x203] != 0) {
    (**(code **)(*(int *)in_ECX[0x203] + 0x138))();
  }
  FUN_1005fe50();
  (**(code **)(*in_ECX + 0x200))();
  (**(code **)(*(int *)in_ECX[0x219] + 0x1f8))();
  (**(code **)(*(int *)in_ECX[0x21a] + 0x1f8))();
  ExceptionList = local_10;
  return;
}


// ==== 1019c099 Catch@1019c099

void Catch_1019c099(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019c0ad Catch@1019c0ad

void Catch_1019c0ad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019c0d0 FUN_1019c0d0

undefined4 FUN_1019c0d0(int param_1)

{
  int *in_ECX;
  
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x204))();
  }
  return 1;
}


// ==== 1019c0f0 FUN_1019c0f0

undefined4 FUN_1019c0f0(int param_1)

{
  int *in_ECX;
  
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x224))();
  }
  return 1;
}


// ==== 1019c110 FUN_1019c110

bool FUN_1019c110(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x1f04) {
      iVar1 = (**(code **)(*in_ECX + 500))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x1f05) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x101) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == 0x129) {
      iVar1 = (**(code **)(*in_ECX + 0x200))();
      return iVar1 != 0;
    }
    if (param_2 == 0x12a) {
      iVar1 = (**(code **)(*in_ECX + 0x204))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1019c200 FUN_1019c200

undefined4 FUN_1019c200(void)

{
  return 1;
}


// ==== 1019c252 Catch@1019c252

void Catch_1019c252(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019c266 Catch@1019c266

void Catch_1019c266(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelectWnd::OnAniNameComboBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019c290 FUN_1019c290

bool FUN_1019c290(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0xf5)) {
    iVar1 = (**(code **)(*in_ECX + 500))(param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 1019c2f0 FUN_1019c2f0

bool FUN_1019c2f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0xfb) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfc) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfd) {
      iVar1 = (**(code **)(*in_ECX + 0x200))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfe) {
      iVar1 = (**(code **)(*in_ECX + 0x204))();
      return iVar1 != 0;
    }
    if (param_2 == 0xfe0106) {
      iVar1 = (**(code **)(*in_ECX + 0x208))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1019c3d0 FUN_1019c3d0

undefined4 FUN_1019c3d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = FUN_1014a730();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x80c) + 0x1d0);
  if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 0x310))) {
    (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x174))();
    uVar3 = 0;
    uVar2 = FUN_10032ee0(*(undefined4 *)(iVar1 + 0x310));
    FUN_10016ea0(uVar2,uVar3);
  }
  return 1;
}


// ==== 1019c430 FUN_1019c430

undefined4 FUN_1019c430(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = FUN_1014a730();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x80c) + 0x1d0);
  if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 0x310))) {
    (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x174))();
    uVar3 = 0;
    uVar2 = FUN_10032ee0(*(undefined4 *)(iVar1 + 0x310));
    FUN_10016ea0(uVar2,uVar3);
  }
  return 1;
}


// ==== 1019c490 FUN_1019c490

undefined4 FUN_1019c490(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = FUN_1014a730();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x80c) + 0x1d0);
  if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 0x310))) {
    (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x174))();
    uVar3 = 0;
    uVar2 = FUN_10032ee0(*(undefined4 *)(iVar1 + 0x310));
    FUN_10016ea0(uVar2,uVar3);
  }
  return 1;
}


// ==== 1019c4f0 FUN_1019c4f0

undefined4 FUN_1019c4f0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x174))();
  return 1;
}


// ==== 1019c510 FUN_1019c510

undefined4 FUN_1019c510(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216700;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10033250();
  ExceptionList = local_10;
  return 1;
}


// ==== 1019c565 Catch@1019c565

void Catch_1019c565(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019c579 Catch@1019c579

void Catch_1019c579(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelect_List::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019c5a0 FUN_1019c5a0

undefined4 FUN_1019c5a0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100326c0(param_1);
  ExceptionList = local_10;
  return 1;
}


// ==== 1019c5fb Catch@1019c5fb

void Catch_1019c5fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019c60f Catch@1019c60f

void Catch_1019c60f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelect_List::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019c630 FUN_1019c630

undefined4 FUN_1019c630(void)

{
  FUN_10032db0();
  return 1;
}


// ==== 1019c640 FUN_1019c640

bool FUN_1019c640(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x104) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x112) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x105) {
      iVar1 = (**(code **)(*in_ECX + 0x200))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x106) {
      iVar1 = (**(code **)(*in_ECX + 0x204))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x109) {
      iVar1 = (**(code **)(*in_ECX + 0x208))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x108) {
      iVar1 = (**(code **)(*in_ECX + 500))();
      return iVar1 != 0;
    }
    if (param_2 == 0x127) {
      iVar1 = (**(code **)(*in_ECX + 0x20c))();
      return iVar1 != 0;
    }
    if ((((param_2 == 0x121) || (param_2 == 0x122)) || (param_2 == 0x123)) ||
       (((param_2 == 0x124 || (param_2 == 0x125)) || (param_2 == 0x126)))) {
      iVar1 = (**(code **)(*in_ECX + 0x210))(param_3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1019c7c0 FUN_1019c7c0

int FUN_1019c7c0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x214);
  while( true ) {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    if (*piVar2 == 0xf) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0xe < iVar1) {
      return -1;
    }
  }
  return iVar1;
}


// ==== 1019c7f0 FUN_1019c7f0

int FUN_1019c7f0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x23c);
  while( true ) {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    if (*piVar2 == 0xf) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0xe < iVar1) {
      return -1;
    }
  }
  return iVar1;
}


// ==== 1019c820 FUN_1019c820

undefined4 FUN_1019c820(int param_1)

{
  int *in_ECX;
  
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x20c))();
  }
  return 1;
}


// ==== 1019c840 FUN_1019c840

bool FUN_1019c840(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0x113)) {
    iVar1 = (**(code **)(*in_ECX + 500))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1019c8a0 FUN_1019c8a0

undefined4 FUN_1019c8a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  param_1 = param_1 - *(int *)(in_ECX + 0x80);
  uVar1 = 0xffffffff;
  if ((param_2 - *(int *)(in_ECX + 0x84)) - 6U < 0x21) {
    if ((0x1e < param_1) && (param_1 < 0x40)) {
      uVar1 = 0;
    }
    if ((0x43 < param_1) && (param_1 < 0x65)) {
      uVar1 = 1;
    }
    if ((0x68 < param_1) && (param_1 < 0x8a)) {
      uVar1 = 2;
    }
    if ((0x8d < param_1) && (param_1 < 0xaf)) {
      uVar1 = 3;
    }
    if ((0xb2 < param_1) && (param_1 < 0xd4)) {
      uVar1 = 4;
    }
    if ((0xd7 < param_1) && (param_1 < 0xf9)) {
      uVar1 = 5;
    }
    if ((0xfc < param_1) && (param_1 < 0x11e)) {
      uVar1 = 6;
    }
    if ((0x121 < param_1) && (param_1 < 0x143)) {
      uVar1 = 7;
    }
    if ((0x146 < param_1) && (param_1 < 0x168)) {
      uVar1 = 8;
    }
    if ((0x16b < param_1) && (param_1 < 0x18d)) {
      uVar1 = 9;
    }
  }
  return uVar1;
}


// ==== 1019c990 FUN_1019c990

void FUN_1019c990(uint param_1)

{
  undefined1 local_c [12];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 8) {
    FUN_10021410(0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_102add7c);
  }
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1 * 8,&DAT_1022f8a0);
  return;
}


// ==== 1019c9f0 FUN_1019c9f0

void FUN_1019c9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ad400,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019ca20 FUN_1019ca20

void FUN_1019ca20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ac470,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019ca50 FUN_1019ca50

void FUN_1019ca50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ac9a0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019ca80 FUN_1019ca80

void FUN_1019ca80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103aba10,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019cab0 FUN_1019cab0

void FUN_1019cab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ae390,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019cae0 FUN_1019cae0

void FUN_1019cae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103aced0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019cb10 FUN_1019cb10

void FUN_1019cb10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ad930,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019cb40 FUN_1019cb40

void FUN_1019cb40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ade60,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1019cb70 FUN_1019cb70

undefined4 FUN_1019cb70(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1002cfe0(param_2 & 0xffff,param_2 >> 0x10,0,0);
  in_ECX[0xa0] = iVar1;
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  if (iVar1 != 0) {
    if (in_ECX[0x93] == 0) {
      FUN_1003f960();
      FUN_1003f8b0(0,0,0);
    }
    else if ((-1 < in_ECX[0x9f]) && (in_ECX[0x9f] < in_ECX[0x91])) {
      uVar3 = 0;
      uVar2 = FUN_1002c970(0);
      FUN_1003f8b0(4,uVar2,uVar3);
      FUN_1003f950();
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1019cc47 Catch@1019cc47

void Catch_1019cc47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019cc5b Catch@1019cc5b

void Catch_1019cc5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_InvenItemWnd::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019cc80 FUN_1019cc80

undefined4 FUN_1019cc80(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  uint uStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  FRotator local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216760;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = in_ECX[0x9f];
  if ((iVar3 < 0) || (in_ECX[0x91] <= iVar3)) {
LAB_1019ce2e:
    in_ECX[0x93] = 0;
  }
  else {
    puVar1 = &uStack_50;
    if ((in_ECX[0x93] != 0) && (puVar1 = &uStack_50, in_ECX[0xb9] == 0)) {
      iVar3 = *(int *)(in_ECX[0x90] + iVar3 * 4);
      if (iVar3 == 0) goto LAB_1019ce2e;
      iVar2 = (**(code **)(*in_ECX + 0x70))(param_2 & 0xffff,param_2 >> 0x10);
      puVar1 = (uint *)local_14;
      if (iVar2 == 0) {
        iVar2 = *(int *)(DAT_103663bc + 0x50);
        in_ECX[0xba] = *(int *)(iVar2 + 0x228);
        in_ECX[0xbb] = *(int *)(iVar2 + 0x22c);
        in_ECX[0xbc] = *(int *)(iVar2 + 0x230);
        local_38 = 0;
        local_34 = 1;
        local_3c = *(undefined4 *)(iVar3 + 0x1e5c);
        local_40 = 0;
        local_30 = 0;
        local_2c = 0;
        iVar3 = FUN_1014a730();
        iVar3 = *(int *)(*(int *)(iVar3 + 0x80c) + 0x200);
        iVar2 = **(int **)(DAT_103663bc + 0x50);
        puVar4 = (undefined4 *)FRotator::FRotator(local_28,0,0,0);
        iVar5 = FUN_1014a730(&local_40,in_ECX[0xba],in_ECX[0xbb],in_ECX[0xbc],*puVar4,puVar4[1],
                             puVar4[2]);
        (**(code **)(iVar2 + 0x160))(iVar5 + 0x87c + iVar3 * 0x314);
        puVar1 = (uint *)local_14;
      }
    }
    local_14 = (undefined1 *)puVar1;
    in_ECX[0xb9] = 0;
    in_ECX[0x93] = 0;
    FUN_1003f960();
    FUN_1003f8b0(0,0,0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1019ce36 Catch@1019ce36

void Catch_1019ce36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019ce4a Catch@1019ce4a

void Catch_1019ce4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_InvenItemWnd::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019ce70 FUN_1019ce70

undefined4 FUN_1019ce70(uint param_1)

{
  int in_ECX;
  
  FUN_1019af70();
  *(uint *)(in_ECX + 0x4610) = param_1;
  if (*(int *)(*(int *)(in_ECX + 0x86c) + 0x2fc) == 0) {
    if ((param_1 < 8) && (*(int *)(in_ECX + 0x7cc + param_1 * 4) != 0)) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x7ec + param_1 * 4) + 0x1cc) + 0x138))();
      (**(code **)(**(int **)(in_ECX + 0x7ec + *(int *)(in_ECX + 0x4610) * 4) + 0x138))();
    }
  }
  else if ((param_1 < 8) && (*(int *)(in_ECX + 0x7cc + param_1 * 4) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x7cc + param_1 * 4) + 0x138))();
    return 1;
  }
  return 1;
}


// ==== 1019cf10 FUN_1019cf10

undefined4 FUN_1019cf10(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
  if (*(int *)(*(int *)(in_ECX + 0x874) + 0x2fc) != 0) {
    *(undefined4 *)(iVar1 + 0xa28) = 0x49742400;
    return 1;
  }
  *(undefined4 *)(iVar1 + 0xa28) = 0x437a0000;
  if (*(float *)(iVar1 + 0x994) < *(float *)(iVar1 + 0x998)) {
    *(undefined4 *)(iVar1 + 0x994) = 0x437a0000;
    *(undefined4 *)(iVar1 + 0x998) = 0x437a0000;
    return 1;
  }
  return 1;
}


// ==== 1019cf80 FUN_1019cf80

void FUN_1019cf80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ULevel *pUVar3;
  int iVar4;
  UClass *pUVar5;
  int *piVar6;
  int iVar7;
  float fStack_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  float local_3c4;
  undefined4 *local_3c0;
  int local_3bc;
  UObject *pUVar8;
  wchar_t *pwVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  UPackageMap *pUVar13;
  int local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  UClass *local_380;
  undefined4 *puStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  float fStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  float fStack_364;
  float local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  float fStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  FRotator local_324 [12];
  User aUStack_318 [516];
  undefined4 uStack_114;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_390;
  piVar6 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
  iVar4 = *(int *)(*piVar6 + 0x3c);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x3bc) != 0)) &&
     (pUVar3 = AActor::GetLevel(*(AActor **)(*piVar6 + 0x3c)), pUVar3 != (ULevel *)0x0)) {
    iVar4 = FUN_1014a730();
    local_390 = *(int *)(*(int *)(*(int *)(iVar4 + 0x80c) + 0x1cc) + 0x324);
    piVar6 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
    iVar4 = *(int *)(*(int *)(*piVar6 + 0x3c) + 0x3bc);
    local_358 = *(float *)(iVar4 + 0x1c4);
    uVar1 = *(undefined4 *)(iVar4 + 0x1bc);
    uVar2 = *(undefined4 *)(iVar4 + 0x1c0);
    pUVar3 = AActor::GetLevel(*(AActor **)(*piVar6 + 0x3c));
    pUVar13 = (UPackageMap *)0x0;
    uVar12 = 1;
    puVar10 = (ushort *)0x0;
    pwVar9 = L"Engine.PlayerController";
    pUVar8 = (UObject *)0x0;
    pUVar5 = AController::StaticClass();
    local_3bc = 0x1019d050;
    local_380 = UObject::StaticLoadClass(pUVar5,pUVar8,(ushort *)pwVar9,puVar10,uVar12,pUVar13);
    iVar4 = *(int *)pUVar3;
    piVar6 = (int *)FRotator::FRotator(local_324,0,0,0);
    local_3c0 = (undefined4 *)*piVar6;
    local_3bc = piVar6[1];
    fStack_3d0 = local_358;
    local_3c4 = local_358;
    local_3cc = uVar1;
    local_3c8 = uVar2;
    FName::FName((FName *)&fStack_3d0,0);
    iVar4 = (**(code **)(iVar4 + 0xc0))(local_380);
    local_390 = local_390 * 0x314;
    pUVar13 = (UPackageMap *)0x0;
    uVar12 = 0;
    puVar11 = (ushort *)0x0;
    iVar7 = FUN_1014a730();
    puVar10 = User::GetClassNamePointer((User *)(iVar7 + 0x87c + local_390));
    pUVar8 = (UObject *)0x0;
    pUVar5 = APawn::StaticClass();
    local_3bc = 0x1019d0fa;
    local_380 = UObject::StaticLoadClass(pUVar5,pUVar8,puVar10,puVar11,uVar12,pUVar13);
    if (local_380 != (UClass *)0x0) {
      puStack_37c = (undefined4 *)(*(int *)pUVar3 + 0xc0);
      iVar7 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c) + 0x3bc);
      local_3c0 = *(undefined4 **)(iVar7 + 0x1c8);
      local_3bc = *(undefined4 *)(iVar7 + 0x1cc);
      fStack_3d0 = local_358;
      local_3c4 = local_358;
      local_3cc = uVar1;
      local_3c8 = uVar2;
      FName::FName((FName *)&fStack_3d0,0);
      iVar7 = (*(code *)*puStack_37c)(local_380);
      *(int *)(iVar4 + 0x3bc) = iVar7;
      local_3c0 = (undefined4 *)0x0;
      *(int *)(iVar7 + 0x14d8) = iVar4;
      local_3bc = 0;
      *(undefined1 *)(iVar4 + 0xc2) = 4;
      *(undefined1 *)(*(int *)(iVar4 + 0x3bc) + 0xc2) = 4;
      (**(code **)(**(int **)(iVar4 + 0x3bc) + 0x1c8))(1,0,0,0,0x3f800000);
      fStack_370 = local_358 + 50.0;
      fStack_364 = local_358;
      uStack_378 = uVar1;
      uStack_374 = uVar2;
      uStack_36c = uVar1;
      uStack_368 = uVar2;
      User::User(aUStack_318);
      iVar7 = FUN_1014a730();
      _memcpy(aUStack_318,(void *)(iVar7 + 0x87c + local_390),0x314);
      uStack_114 = *(undefined4 *)(iVar4 + 0x3bc);
      User::SetPawnResource(aUStack_318);
      iVar7 = 0;
      do {
        uStack_34c = 0;
        uStack_354 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        fStack_344 = 0.0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_33c = 0;
        uStack_338 = 0;
        uStack_32c = 0xffffffff;
        fStack_330 = 1.0;
        fStack_370 = fStack_370 + 30.0;
        fStack_364 = fStack_364 - 30.0;
        local_3bc = *(int *)(iVar4 + 0x3bc);
        uStack_38c = *(undefined4 *)(local_3bc + 0x2f0);
        uStack_388 = *(undefined4 *)(local_3bc + 0x2f0);
        uStack_384 = *(undefined4 *)(local_3bc + 0x2f4);
        local_3c0 = &uStack_354;
        local_3c4 = 3.0336577e-29;
        (**(code **)(*(int *)pUVar3 + 0xe4))();
        if (fStack_344 != 0.0) {
          puStack_37c = (undefined4 *)(fStack_330 * 12.0);
          if ((float)puStack_37c < 1.9) {
            fStack_344 = (2.15 - (float)puStack_37c) + fStack_344;
          }
          local_3bc = *(int *)(iVar4 + 0x3bc);
          local_3c0 = (undefined4 *)0x1019d3ab;
          (**(code **)(*(int *)pUVar3 + 0xa8))();
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_390);
  return;
}


// ==== 1019d3d0 FUN_1019d3d0

undefined4 FUN_1019d3d0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
  *(uint *)(iVar1 + 0x41c) = *(uint *)(iVar1 + 0x41c) ^ 2;
  return 1;
}


// ==== 1019d400 FUN_1019d400

undefined4 FUN_1019d400(void)

{
  int *piVar1;
  APawn *this;
  AActor *pAVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
  this = (APawn *)piVar1[0xef];
  pAVar2 = (AActor *)(**(code **)(*piVar1 + 0x35c))();
  if ((this != (APawn *)0x0) && (pAVar2 != (AActor *)0x0)) {
    APawn::Action_Attack(this,pAVar2,1,0,0,1,0,0,1);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1019d48b Catch@1019d48b

void Catch_1019d48b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019d49f Catch@1019d49f

void Catch_1019d49f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::OnTargetAttackedBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019d4c0 FUN_1019d4c0

undefined4 FUN_1019d4c0(void)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  uint uVar3;
  undefined2 in_FPUControlWord;
  uint local_14;
  uchar local_e;
  undefined1 uStack_d;
  int local_c;
  float local_8;
  int local_4;
  
  local_4 = (-(uint)(*(int *)(*(int *)(in_ECX + 0x878) + 0x2fc) != 0) & 0xfffffffa) + 6;
  fVar2 = (float)*(double *)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x6c) + 0x134);
  fVar1 = 0.0;
  uVar3 = (uint)ROUND(fVar2);
  local_14._0_1_ = (undefined1)uVar3;
  uVar3 = uVar3 & 0xff;
  uStack_d = (undefined1)((ushort)in_FPUControlWord >> 8);
  _local_e = CONCAT11(uStack_d,(undefined1)local_14);
  fVar2 = (fVar2 - (float)uVar3) * 3600.0;
  while ((fVar2 <= fVar1 * 60.0 || ((fVar1 + 1.0) * 60.0 <= fVar2))) {
    fVar1 = fVar1 + 1.0;
    local_14 = uVar3;
    if (60.0 <= fVar1) {
LAB_1019d565:
      UL2NEnvManager::SetNTime
                (*(UL2NEnvManager **)(*(int *)(DAT_103663bc + 0x50) + 0x6c),&local_e,
                 (uchar *)&local_14,&local_8);
      UL2NEnvManager::SetNTimeRatio
                (*(UL2NEnvManager **)(*(int *)(DAT_103663bc + 0x50) + 0x6c),&local_4);
      return 1;
    }
  }
  local_8 = fVar2 - fVar1 * 60.0;
  local_c = (int)ROUND(fVar1);
  local_14 = (uint)CONCAT11(uStack_d,(undefined1)local_c);
  goto LAB_1019d565;
}


// ==== 1019d5d0 FUN_1019d5d0

void FUN_1019d5d0(void)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int in_ECX;
  ushort auStack_104 [128];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_104;
  if (*(int *)(*(int *)(in_ECX + 0x878) + 0x2fc) == 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x834) + 0x1f8))();
    if (iVar1 != 0) {
      puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x834) + 0x1f8))();
      uVar3 = appAtoi(puVar2);
      if (uVar3 < 0x19) {
        appSprintf(auStack_104,(ushort *)L"settime time=%02d",uVar3);
        (*(code *)**(undefined4 **)
                    (**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x38))
                  (auStack_104,*(undefined4 *)GLog_exref);
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_104);
  return;
}


// ==== 1019d680 FUN_1019d680

undefined4 FUN_1019d680(void)

{
  APawn *pAVar1;
  undefined4 *puVar2;
  int in_ECX;
  FRotator local_c [12];
  
  pAVar1 = *(APawn **)
            (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
            0x3bc);
  *(uint *)(pAVar1 + 0x694) =
       *(uint *)(pAVar1 + 0x694) ^
       (*(uint *)(*(int *)(in_ECX + 0x870) + 0x2fc) ^ *(uint *)(pAVar1 + 0x694)) & 1;
  if (((byte)pAVar1[0x694] & 1) == 0) {
    puVar2 = (undefined4 *)FRotator::FRotator(local_c,0,0,0);
    APawn::FaceRotation(pAVar1,*puVar2,puVar2[1],puVar2[2],0);
  }
  return 1;
}


// ==== 1019d700 FUN_1019d700

void FUN_1019d700(void)

{
  int *piVar1;
  int iVar2;
  ULevel *pUVar3;
  ushort *puVar4;
  int iVar5;
  int in_ECX;
  int iStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  ushort auStack_104 [128];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&iStack_114;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x82c) + 0x1f8))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x830) + 0x1f8))();
    if (iVar2 != 0) {
      piVar1 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
      iVar2 = *(int *)(*piVar1 + 0x3c);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3bc) != 0)) {
        pUVar3 = AActor::GetLevel(*(AActor **)(*piVar1 + 0x3c));
        if (pUVar3 != (ULevel *)0x0) {
          puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x82c) + 0x1f8))();
          iVar2 = appAtoi(puVar4);
          puVar4 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x830) + 0x1f8))();
          iVar5 = appAtoi(puVar4);
          if ((iVar2 < 100) && (iVar5 < 100)) {
            if ((*(int *)GIsL2Seamless_exref == 0) || (DAT_103528a0 != 0)) {
              appSprintf(auStack_104,(ushort *)L"open %02d_%02d.unr",iVar2,iVar5);
              (*(code *)**(undefined4 **)(*(int *)(DAT_103663bc + 0x50) + 0x34))
                        (auStack_104,*(undefined4 *)GLog_exref);
              DAT_103528a0 = 0;
            }
            else {
              iStack_114 = iVar5 + -9;
              fStack_110 = ((float)(iVar2 + -9) * 32768.0 - 360448.0) + 16384.0;
              fStack_10c = ((float)iStack_114 * 32768.0 - 294912.0) + 16384.0;
              uStack_108 = 0xc47a0000;
              UGameEngine::L2_Teleport
                        (*(UGameEngine **)(DAT_103663bc + 0x50),
                         *(undefined4 *)
                          (*(int *)(**(int **)(*(int *)(*(UGameEngine **)(DAT_103663bc + 0x50) +
                                                       0x54) + 0x38) + 0x3c) + 0x3bc),fStack_110,
                         fStack_10c,0xc47a0000,0,1,0);
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_114);
  return;
}


// ==== 1019d8e0 FUN_1019d8e0

undefined4 FUN_1019d8e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uStack_34;
  undefined1 local_24 [4];
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102167a0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(*(int *)(in_ECX + 0x86c) + 0x2fc) == 0) {
    iVar3 = *(int *)(in_ECX + 0x824);
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x820);
  }
  if (iVar3 != 0) {
    FUN_10021a00(0,0x121,0x122,0xb9,0,0,0xf0,0xb9,iVar3,0xff,1);
  }
  if (*(int *)(in_ECX + 0x824) != 0) {
    FUN_10021a00(0,0x28,0x122,0xf9,0,0,0xf0,0xf9,*(int *)(in_ECX + 0x824),0xff,1);
    FUN_10021a00(0,0x1da,0x122,0x7d,0,0xdb,0xf0,0x7d,*(undefined4 *)(in_ECX + 0x824),0xff,1);
  }
  FUN_100217a0(10,0x1d2,0xffffff00,in_ECX + 0x1cc,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,0x1e3,0xffffff00,in_ECX + 0x3cc,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(10,500,0xffffff00,in_ECX + 0x5cc,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(local_24,&DAT_10291d98,0,0,0,0,0,0);
  FUN_100217a0(0x23,(0x10 - local_20) / 2 + 0x23f,0xffdcdcdc,&DAT_10291d98,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_10020bb0(local_24,L".unr",0,0,0,0,0,0);
  FUN_100217a0(0x45,(0x10 - local_20) / 2 + 0x23f,0xffdcdcdc,L".unr",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1019db41 Catch@1019db41

void Catch_1019db41(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019db55 Catch@1019db55

void Catch_1019db55(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019db80 FUN_1019db80

undefined4 FUN_1019db80(void)

{
  int in_ECX;
  
  FUN_1019af70();
  if (*(int *)(*(int *)(in_ECX + 0x86c) + 0x2fc) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x7cc + *(int *)(in_ECX + 0x4610) * 4) + 0x138))();
    return 1;
  }
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x7ec + *(int *)(in_ECX + 0x4610) * 4) + 0x1cc) + 0x138)
  )();
  (**(code **)(**(int **)(in_ECX + 0x7ec + *(int *)(in_ECX + 0x4610) * 4) + 0x138))();
  return 1;
}


// ==== 1019dbf0 FUN_1019dbf0

undefined4 FUN_1019dbf0(uint param_1,undefined4 param_2)

{
  UPackage *pUVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102167c0;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 < 8) && (*(int *)(in_ECX + 0x7cc + param_1 * 4) != 0)) {
    uStack_30 = param_2;
    uStack_34 = 0x1019dc4b;
    (**(code **)(**(int **)(in_ECX + 0x7cc + param_1 * 4) + 0x204))();
    uStack_34 = 0;
    FName::FName((FName *)&uStack_38,0);
    pUVar1 = UObject::GetTransientPackage();
    iVar2 = FUN_1002dd90(0x1f5c,pUVar1);
    if (iVar2 == 0) {
      uStack_34 = 0;
    }
    else {
      uStack_34 = param_2;
      uStack_38 = 0x1019dc7b;
      uStack_34 = FUN_1002f5d0();
    }
    uStack_38 = 0xffdcdcdc;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x7ec + param_1 * 4) + 0x1cc) + 0x1fc))(param_2);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1019dcb6 Catch@1019dcb6

void Catch_1019dcb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019dcca Catch@1019dcca

void Catch_1019dcca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewerWnd::AddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019dcf0 FUN_1019dcf0

void FUN_1019dcf0(int param_1)

{
  APawn *this;
  undefined4 uVar1;
  undefined4 uVar2;
  FName *pFVar3;
  FName *this_00;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uStack_14c;
  FString aFStack_13c [16];
  undefined1 auStack_12c [4];
  int iStack_128;
  float fStack_120;
  float fStack_11c;
  undefined1 *puStack_118;
  void *pvStack_114;
  undefined *puStack_110;
  int iStack_10c;
  ushort uStack_108;
  undefined1 auStack_106 [254];
  uint uStack_8;
  
  puStack_110 = &UNK_102167e9;
  pvStack_114 = ExceptionList;
  uStack_14c = DAT_103554c4 ^ (uint)&uStack_108;
  puStack_118 = (undefined1 *)&uStack_14c;
  ExceptionList = &pvStack_114;
  iStack_10c = 0;
  uStack_8 = uStack_14c;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0();
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar4 = *(int *)(in_ECX + 0x1ec);
  if (iVar4 != 0) {
    uVar7 = 0xff00000001;
    uVar1 = FUN_101c19e0();
    uVar6 = CONCAT44(iVar4,uVar1);
    uVar1 = FUN_101c19e0(uVar1,iVar4,uVar7);
    FUN_100218f0(0,0,uVar1,uVar6,uVar7);
  }
  iVar4 = *(int *)(in_ECX + 0x1e8);
  if (iVar4 != 0) {
    uVar1 = FUN_101c19e0();
    FUN_10021a00(2,3,uVar1,0x14,0,0,uVar1,0x14,iVar4,0xff,1);
  }
  this = *(APawn **)
          (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
          0x3bc);
  pFVar3 = (FName *)APawn::GetCurWaitAnimName(this);
  this_00 = (FName *)APawn::GetCurAnimName(this,(int)&fStack_120);
  iVar4 = FName::operator==(this_00,pFVar3);
  if (iVar4 != 0) {
    FString::FString(aFStack_13c,(ushort *)&DAT_10293508);
    iStack_10c._0_1_ = 1;
    FUN_10003dc0();
    iStack_10c = (uint)iStack_10c._1_3_ << 8;
    FString::~FString(aFStack_13c);
  }
  fStack_120 = 0.0;
  fStack_11c = 0.0;
  if (*(int *)(this + 0x134) != 0) {
    iVar4 = **(int **)(this + 0x134);
    fStack_11c = (float)**(int **)(this + 0x134);
    APawn::GetCurAnimName(this,(int)&fStack_120);
    uVar1 = (**(code **)((int)fStack_11c + 0xb8))();
    fVar5 = (float10)(**(code **)(iVar4 + 200))(uVar1);
    fStack_120 = (float)fVar5;
    fStack_11c = *(float *)(*(int *)(*(int *)(this + 0x134) + 0x184) + 0x10);
  }
  uStack_108 = 0;
  _memset(auStack_106,0,0xfe);
  appSprintf(&uStack_108,(ushort *)&UNK_102934f0,(double)(fStack_120 * fStack_11c),
             (double)fStack_120);
  FUN_10020bb0(auStack_12c,&DAT_102468e4,0,0,0,0,0,0);
  FUN_100217a0(0x55,(0x10 - iStack_128) / 2 + 0x127,0xffdcdcdc,L"Frame:",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x7d,(0x10 - iStack_128) / 2 + 0x127,0xffdcdcdc,&uStack_108,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(10,(0x10 - iStack_128) / 2 + 0x127,0xffdcdcdc,&UNK_102934d8,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  iStack_10c = 0xffffffff;
  ExceptionList = pvStack_114;
  __security_check_cookie(uStack_8 ^ (uint)&uStack_108);
  return;
}


// ==== 1019dfe9 Catch@1019dfe9

void Catch_1019dfe9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1019dffd Catch@1019dffd

void Catch_1019dffd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelectWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019e020 FUN_1019e020

void FUN_1019e020(void)

{
  APawn *this;
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  FName *pFVar4;
  FName *this_00;
  int in_ECX;
  undefined4 uStack_150;
  float local_128;
  FString aFStack_124 [12];
  undefined1 *puStack_118;
  FName aFStack_114 [4];
  ushort local_110;
  undefined1 local_10e [254];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10216844;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_128;
  ExceptionList = &local_c;
  puVar1 = (ushort *)FUN_10032ee0();
  this = *(APawn **)
          (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
          0x3bc);
  local_128 = *(float *)(this + 0x6b0);
  local_110 = 0;
  _memset(local_10e,0,0xfe);
  puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1e4) + 0x1f8))();
  appStrcpy(&local_110,puVar2);
  uStack_150 = 0x1019e0dc;
  iVar3 = appStrcmp(&local_110,(ushort *)&DAT_1022f9f8);
  if (iVar3 != 0) {
    local_128 = appAtof(&local_110);
  }
  pFVar4 = (FName *)FName::FName(aFStack_114,puVar1,1);
  this_00 = (FName *)APawn::GetCurAnimName(this,(int)&puStack_118);
  iVar3 = FName::operator==(this_00,pFVar4);
  if (iVar3 == 0) {
    FString::FString(aFStack_124,(ushort *)&DAT_10293510);
    uStack_4 = 2;
    FUN_10003dc0();
    uStack_4 = 0xffffffff;
    FString::~FString(aFStack_124);
    iVar3 = *(int *)this;
    puStack_118 = (undefined1 *)&uStack_150;
    FName::FName((FName *)&uStack_150,puVar1,1);
    (**(code **)(iVar3 + 0x328))(0);
  }
  else if (*(float *)(*(int *)(*(int *)(this + 0x134) + 0x184) + 0xc) == 0.0) {
    FString::FString(aFStack_124,(ushort *)&DAT_10293510);
    uStack_4 = 0;
    FUN_10003dc0();
    uStack_4 = 0xffffffff;
    FString::~FString(aFStack_124);
    *(float *)(*(int *)(*(int *)(this + 0x134) + 0x184) + 0xc) = local_128;
  }
  else {
    FString::FString(aFStack_124,(ushort *)&DAT_10293508);
    uStack_4 = 1;
    FUN_10003dc0();
    uStack_4 = 0xffffffff;
    FString::~FString(aFStack_124);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x134) + 0x184) + 0xc) = 0;
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_128);
  return;
}


// ==== 1019e290 FUN_1019e290

undefined4 FUN_1019e290(void)

{
  APawn *this;
  int iVar1;
  undefined4 *puVar2;
  
  this = *(APawn **)
          (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
          0x3bc);
  iVar1 = *(int *)this;
  puVar2 = (undefined4 *)APawn::GetWaitAnimName(this);
  (**(code **)(iVar1 + 0x328))(0,*puVar2,0x3f800000,0,1,0);
  return 1;
}


// ==== 1019e2f0 FUN_1019e2f0

void FUN_1019e2f0(void)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216880;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0;
  FName::FName((FName *)&uStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_10069610(0x324,pUVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uStack_34 = 0xb;
    uStack_38 = 3000;
    iVar2 = FUN_10034070();
  }
  *(int *)(in_ECX + 0x1cc) = iVar2;
  *(undefined4 *)(iVar2 + 0x1cc) = 0xf5;
  uStack_34 = 3;
  uStack_38 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))(0,0,0xde,0x8c,0);
  uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1cc),0x21);
  FUN_1005c1e0(uVar3);
  iVar2 = *(int *)(in_ECX + 0x1cc);
  *(undefined4 *)(iVar2 + 0x314) = 1;
  *(undefined4 *)(iVar2 + 0x318) = 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x31c) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1019e3ea Catch@1019e3ea

void Catch_1019e3ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019e3fe Catch@1019e3fe

void Catch_1019e3fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_InvenTextWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019e420 FUN_1019e420

undefined4 FUN_1019e420(void)

{
  UObject *pUVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  void *pvVar10;
  UPackage *pUStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  UPackage **ppUStack_80;
  UPackage *pUStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  uint *puStack_64;
  UPackage *pUStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  FString *pFStack_4c;
  FString *pFStack_48;
  uint uStack_40;
  undefined4 local_28;
  FString local_24 [4];
  undefined4 uStack_20;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102169b3;
  local_c = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar5 = 0;
  FUN_10061b40();
  pFStack_48 = (FString *)0x1019e45f;
  FName::FName((FName *)&local_28,0);
  pUStack_5c = UObject::GetTransientPackage();
  pFStack_4c = *(FString **)GError_exref;
  pFStack_48 = (FString *)0x0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = local_28;
  puStack_64 = (uint *)0x1019e485;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    pFStack_48 = (FString *)0x1019e49d;
    FString::FString(local_18,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_4 = 0;
    pFStack_48 = (FString *)0x1019e4b9;
    FString::FString(local_24,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_4 = 1;
    pFStack_48 = local_18;
    pFStack_4c = local_24;
    uVar5 = 3;
    uStack_50 = 0x1019e4d9;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1cc) = uVar2;
  local_4 = 0;
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    FString::~FString(local_24);
  }
  local_4 = 0xffffffff;
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffe;
    FString::~FString(local_18);
  }
  uVar2 = 3;
  pFStack_48 = (FString *)0x0;
  pFStack_4c = (FString *)0x0;
  uStack_50 = 0x10;
  *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x1cc) = 0xfb;
  uStack_54 = 0x20;
  uStack_58 = 0x19;
  pUStack_5c = (UPackage *)0xa;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))();
  puStack_64 = *(uint **)(in_ECX + 0x1cc);
  puStack_68 = (undefined1 *)0x1019e55d;
  FUN_10060d40();
  puStack_64 = (uint *)0x1019e569;
  FUN_1005c1e0();
  puStack_64 = (uint *)0x1019e579;
  FUN_10003cf0();
  puStack_64 = (uint *)0x1019e585;
  FName::FName((FName *)&stack0xffffffbc,0);
  uStack_74 = uVar2;
  pUStack_78 = UObject::GetTransientPackage();
  puStack_68 = *(undefined1 **)GError_exref;
  puStack_64 = (uint *)0x0;
  uStack_6c = 0;
  uStack_70 = 0;
  ppUStack_80 = (UPackage **)0x1019e5a9;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    puStack_64 = (uint *)0x1019e5c1;
    FString::FString((FString *)&uStack_40,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    uStack_20 = 2;
    pFStack_48 = (FString *)(uVar5 | 4);
    puStack_64 = (uint *)0x1019e5df;
    FString::FString((FString *)&stack0xffffffcc,(ushort *)L"L2UI_ch3.button.SmallButton2");
    uStack_20 = 3;
    puStack_64 = &uStack_40;
    puStack_68 = &stack0xffffffcc;
    uVar5 = uVar5 | 0xc;
    uStack_6c = 0x1019e601;
    pFStack_48 = (FString *)uVar5;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d0) = uVar2;
  uStack_20 = 2;
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    pFStack_48 = (FString *)uVar5;
    FString::~FString((FString *)&stack0xffffffcc);
  }
  uStack_20 = 0xffffffff;
  if ((uVar5 & 4) != 0) {
    uVar5 = uVar5 & 0xfffffffb;
    pFStack_48 = (FString *)uVar5;
    FString::~FString((FString *)&uStack_40);
  }
  uVar2 = 3;
  puStack_64 = (uint *)0x0;
  puStack_68 = (undefined1 *)0x0;
  uStack_6c = 0x10;
  *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x1cc) = 0xfc;
  uStack_70 = 0x20;
  uStack_74 = 0x37;
  pUStack_78 = (UPackage *)0xa;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  ppUStack_80 = *(UPackage ***)(in_ECX + 0x1d0);
  puStack_84 = (undefined4 *)0x1019e685;
  FUN_10060d40();
  ppUStack_80 = (UPackage **)0x1019e691;
  FUN_1005c1e0();
  ppUStack_80 = (UPackage **)0x1019e6a1;
  FUN_10003cf0();
  ppUStack_80 = (UPackage **)0x1019e6ad;
  FName::FName((FName *)&stack0xffffffa0,0);
  uStack_90 = uVar2;
  pUStack_94 = UObject::GetTransientPackage();
  puStack_84 = *(undefined4 **)GError_exref;
  ppUStack_80 = (UPackage **)0x0;
  uStack_88 = 0;
  uStack_8c = 0;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    ppUStack_80 = (UPackage **)0x1019e6e9;
    FString::FString((FString *)&pUStack_5c,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    puStack_64 = (uint *)(uVar5 | 0x10);
    ppUStack_80 = (UPackage **)0x1019e707;
    FString::FString((FString *)&uStack_50,(ushort *)L"L2UI_ch3.button.SmallButton2");
    ppUStack_80 = &pUStack_5c;
    puStack_84 = &uStack_50;
    uVar5 = uVar5 | 0x30;
    uStack_88 = 0x1019e729;
    puStack_64 = (uint *)uVar5;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d4) = uVar2;
  if ((uVar5 & 0x20) != 0) {
    uVar5 = uVar5 & 0xffffffdf;
    puStack_64 = (uint *)uVar5;
    FString::~FString((FString *)&uStack_50);
  }
  if ((uVar5 & 0x10) != 0) {
    uVar5 = uVar5 & 0xffffffef;
    puStack_64 = (uint *)uVar5;
    FString::~FString((FString *)&pUStack_5c);
  }
  ppUStack_80 = (UPackage **)0x0;
  puStack_84 = (undefined4 *)0x0;
  uStack_88 = 0x10;
  *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x1cc) = 0xfd;
  uStack_8c = 0x20;
  uStack_90 = 0x55;
  pUStack_94 = (UPackage *)0xa;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xffffff84,0);
  UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_78,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    uStack_58 = 6;
    ppUStack_80 = (UPackage **)(uVar5 | 0x40);
    FString::FString((FString *)&uStack_6c,(ushort *)L"L2UI_ch3.button.SmallButton2");
    uStack_58 = 7;
    uVar5 = uVar5 | 0xc0;
    ppUStack_80 = (UPackage **)uVar5;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1d8) = uVar2;
  uStack_58 = 6;
  if ((char)uVar5 < '\0') {
    uVar5 = uVar5 & 0xffffff7f;
    ppUStack_80 = (UPackage **)uVar5;
    FString::~FString((FString *)&uStack_6c);
  }
  uStack_58 = 0xffffffff;
  if ((uVar5 & 0x40) != 0) {
    ppUStack_80 = (UPackage **)(uVar5 & 0xffffffbf);
    FString::~FString((FString *)&pUStack_78);
  }
  uVar2 = 3;
  *(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x1cc) = 0xfe;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  FUN_10060d40(*(undefined4 *)(in_ECX + 0x1d8));
  FUN_1005c1e0();
  FUN_10003cf0();
  FName::FName((FName *)&stack0xffffff68,0);
  pUVar3 = UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar3,uVar2,0,0,*(undefined4 *)GError_exref,0);
  bVar9 = pUVar1 == (UObject *)0x0;
  if (bVar9) {
    uVar2 = 0;
  }
  else {
    FString::FString((FString *)&pUStack_94,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    uStack_74 = 8;
    FString::FString((FString *)&uStack_88,(ushort *)L"L2UI_ch3.button.SmallButton2");
    uStack_74 = 9;
    uVar2 = FUN_10006980(&uStack_88,&pUStack_94);
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar2;
  uStack_74 = 8;
  if (!bVar9) {
    FString::~FString((FString *)&uStack_88);
  }
  uStack_74 = 0xffffffff;
  if (!bVar9) {
    FString::~FString((FString *)&pUStack_94);
  }
  pvVar10 = (void *)0x3;
  *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x1cc) = 0xfe0106;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))(200,0x55,0x20,0x10,0,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1dc),2);
  FUN_1005c1e0(uVar2);
  FUN_10003cf0(0x1a9);
  iVar6 = 0;
  iVar7 = 0x19;
  piVar8 = (int *)(in_ECX + 0x1e0);
  do {
    FName::FName((FName *)&stack0xffffff4c,0);
    pUVar3 = UObject::GetTransientPackage();
    pUVar1 = UObject::StaticAllocateObject
                       (&DAT_1035d5e0,pUVar3,pvVar10,0,0,*(undefined4 *)GError_exref,0,0);
    if (pUVar1 == (UObject *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1001a820(0,0,1,0x40,0,0);
    }
    *piVar8 = iVar4;
    *(int *)(iVar4 + 0x1cc) = iVar6 + 0xff;
    (**(code **)(*(int *)*piVar8 + 0xc0))(0x32,iVar7,0x8c,0x10,0,0,3);
    uVar2 = FUN_10060d40(*piVar8,2);
    FUN_1005c1e0(uVar2);
    (**(code **)(*(int *)*piVar8 + 0x118))(0);
    iVar7 = iVar7 + 0x1e;
    iVar6 = iVar6 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar7 < 0x73);
  FName::FName((FName *)&stack0xffffff4c,0);
  pUVar3 = UObject::GetTransientPackage();
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_1035d5e0,pUVar3,pvVar10,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar1 == (UObject *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_1001a820(0,0,1,0x40,0,0);
  }
  *(int *)(in_ECX + 0x1ec) = iVar7;
  *(undefined4 *)(iVar7 + 0x1cc) = 0x128;
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xc0))(0x41,0x78,0x23,0x10,0,0,3);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1ec),2);
  FUN_1005c1e0(uVar2);
  FUN_10016ea0(&DAT_1029355c,1);
  ExceptionList = pvVar10;
  return 1;
}


// ==== 1019ebc0 FUN_1019ebc0

void FUN_1019ebc0(ushort *param_1,int param_2)

{
  int *piVar1;
  FMeshAnimSeq *pFVar2;
  int in_ECX;
  ushort auStack_104 [128];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)auStack_104;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
  FName::FName((FName *)&stack0xfffffef0,param_1,1);
  pFVar2 = APawn::FindSeq(*(APawn **)(*(int *)(*piVar1 + 0x3c) + 0x3bc));
  if (pFVar2 != (FMeshAnimSeq *)0x0) {
    *(undefined4 *)(in_ECX + 0x1f0 + param_2 * 4) = *(undefined4 *)(pFVar2 + 0x18);
    *(undefined4 *)(in_ECX + 0x1fc + param_2 * 4) = *(undefined4 *)(pFVar2 + 0x14);
  }
  *(undefined4 *)(in_ECX + 0x208) = 0x3e4ccccd;
  if (0.0 < *(float *)(in_ECX + 0x1f0)) {
    *(float *)(in_ECX + 0x208) = (float)*(int *)(in_ECX + 0x1fc) / *(float *)(in_ECX + 0x1f0) + 0.2;
  }
  if (0.0 < *(float *)(in_ECX + 500)) {
    *(float *)(in_ECX + 0x208) =
         (float)*(int *)(in_ECX + 0x200) / *(float *)(in_ECX + 500) + *(float *)(in_ECX + 0x208);
  }
  if (0.0 < *(float *)(in_ECX + 0x1f8)) {
    *(float *)(in_ECX + 0x208) =
         (float)*(int *)(in_ECX + 0x204) / *(float *)(in_ECX + 0x1f8) + *(float *)(in_ECX + 0x208);
  }
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x174))();
  appSprintf(auStack_104,(ushort *)L"%2.2f",(double)*(float *)(in_ECX + 0x208));
  (**(code **)(**(int **)(in_ECX + 0x1ec) + 0x174))();
  FUN_10016ea0(auStack_104);
  __security_check_cookie(local_4 ^ (uint)auStack_104);
  return;
}


// ==== 1019ed20 FUN_1019ed20

undefined4 FUN_1019ed20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uStack_34;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102169d0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10020bb0(&local_24,L"HITTIME",0,0,0,0,0,0);
  FUN_100217a0((0x32 - local_24) / 2 + 10,(0x10 - local_20) / 2 + 0x78,0xffdcdcdc,L"HITTIME",0,0,0,0
               ,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1019ee21 Catch@1019ee21

void Catch_1019ee21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019ee35 Catch@1019ee35

void Catch_1019ee35(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewer_MixAnimWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019ee60 FUN_1019ee60

undefined4 FUN_1019ee60(undefined4 *param_1)

{
  APawn *this;
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102169f0;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_30 = *(undefined4 **)(in_ECX + 0x310);
  uStack_34 = 0x1019eea1;
  puVar2 = (ushort *)FUN_10032ee0();
  this = *(APawn **)
          (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
          0x3bc);
  if ((*(int *)(in_ECX + 0x324) == *(int *)(in_ECX + 0x310)) && (((byte)this[0x678] & 0x10) != 0)) {
    *(uint *)(this + 0x1734) = *(uint *)(this + 0x1734) | 1;
    *(uint *)(this + 0x678) = *(uint *)(this + 0x678) & 0xffffffef;
    iVar1 = *(int *)this;
    puStack_30 = &param_1;
    uStack_34 = 0x1019eeee;
    puVar3 = (undefined4 *)APawn::GetWaitAnimName(this);
    puStack_30 = (undefined4 *)0x0;
    uStack_34 = 1;
    local_38 = 0;
    local_3c = 0x3f800000;
    uStack_40 = *puVar3;
    (**(code **)(iVar1 + 0x328))(0);
  }
  else {
    *(uint *)(this + 0x1734) = *(uint *)(this + 0x1734) & 0xfffffffe;
    *(uint *)(this + 0x678) = *(uint *)(this + 0x678) | 0x10;
    iVar1 = *(int *)this;
    puStack_30 = (undefined4 *)0x1;
    uStack_34 = param_1;
    param_1 = &uStack_40;
    local_38 = 0;
    local_3c = *(undefined4 *)(this + 0x6b0);
    FName::FName((FName *)&uStack_40,puVar2,1);
    (**(code **)(iVar1 + 0x328))(0);
    *(undefined4 *)(in_ECX + 0x324) = *(undefined4 *)(in_ECX + 0x310);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1019ef81 Catch@1019ef81

void Catch_1019ef81(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1019ef95 Catch@1019ef95

void Catch_1019ef95(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_CharacterSelect_List::PlayAnim");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1019efc0 FUN_1019efc0

void FUN_1019efc0(void)

{
  UObject *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  UPackage *pUVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piStack_1cc;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  int iStack_19c;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  UPackage *pUStack_178;
  int *piStack_174;
  int iStack_170;
  wchar_t *pwStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_148;
  undefined4 uStack_110;
  undefined4 uStack_f4;
  ushort auStack_e4 [4];
  FString *pFStack_dc;
  FString *pFStack_d8;
  FName local_bc [4];
  uint local_b8;
  FString local_a8 [12];
  FString local_9c [140];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10216a9c;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)local_bc;
  ExceptionList = &local_c;
  local_b8 = 0;
  FUN_10061b40();
  pFStack_d8 = (FString *)0x1019f016;
  FName::FName(local_bc,0);
  UObject::GetTransientPackage();
  pFStack_dc = *(FString **)GError_exref;
  pFStack_d8 = (FString *)0x0;
  auStack_e4[2] = 0;
  auStack_e4[3] = 0;
  auStack_e4[0] = 0;
  auStack_e4[1] = 0;
  uStack_f4 = 0x1019f042;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    pFStack_d8 = (FString *)0x1019f05a;
    FString::FString(local_9c,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    local_4 = 0;
    local_b8 = 1;
    pFStack_d8 = (FString *)0x1019f07c;
    FString::FString(local_a8,(ushort *)L"L2UI_ch3.button.SmallButton2");
    local_4 = 1;
    pFStack_d8 = local_9c;
    pFStack_dc = local_a8;
    local_b8 = 3;
    auStack_e4[2] = 0xf0a2;
    auStack_e4[3] = 0x1019;
    uVar2 = FUN_10006980();
  }
  *(undefined4 *)(in_ECX + 0x1e4) = uVar2;
  local_4 = 0;
  uVar6 = local_b8;
  if ((local_b8 & 2) != 0) {
    uVar6 = local_b8 & 0xfffffffd;
    local_b8 = uVar6;
    FString::~FString(local_a8);
  }
  local_4 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    local_b8 = uVar6 & 0xfffffffe;
    FString::~FString(local_9c);
  }
  pFStack_d8 = (FString *)0x0;
  pFStack_dc = (FString *)0x0;
  auStack_e4[2] = 0x10;
  auStack_e4[3] = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1e4) + 0x1cc) = 0x108;
  auStack_e4[0] = 0x23;
  auStack_e4[1] = 0;
  (**(code **)(**(int **)(in_ECX + 0x1e4) + 0xc0))();
  uStack_f4 = *(undefined4 *)(in_ECX + 0x1e4);
  FUN_10060d40();
  uStack_f4 = 0x1019f13f;
  FUN_1005c1e0();
  uStack_f4 = 0x1019f14f;
  FUN_10003cf0();
  uStack_f4 = 0x1019f15b;
  FName::FName((FName *)&pFStack_d8,0);
  UObject::GetTransientPackage();
  uStack_f4 = 0;
  uStack_110 = 0x1019f17b;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1000b680();
  }
  uStack_f4 = 0;
  *(int *)(in_ECX + 0x1cc) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x104;
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xc0))();
  uStack_110 = *(undefined4 *)(in_ECX + 0x1cc);
  FUN_10060d40();
  uStack_110 = 0x1019f1d7;
  FUN_1005c1e0();
  uStack_110 = 0x1019f1e3;
  FName::FName((FName *)&uStack_f4,0);
  UObject::GetTransientPackage();
  uStack_110 = 0;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1000b680();
  }
  uStack_110 = 0;
  *(int *)(in_ECX + 0x1d0) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x112;
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xc0))();
  FUN_10060d40();
  FUN_1005c1e0();
  iVar3 = 0;
  do {
    appSprintf(auStack_e4,(ushort *)&DAT_10233718);
    FUN_1000b3d0();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  iVar3 = 0;
  do {
    appSprintf(auStack_e4,(ushort *)&DAT_10233718);
    FUN_1000b3d0();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  FName::FName((FName *)&uStack_110,0);
  UObject::GetTransientPackage();
  uStack_148 = 0x1019f2ea;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1000b680();
  }
  *(int *)(in_ECX + 0x1d4) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x105;
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc0))();
  uStack_148 = *(undefined4 *)(in_ECX + 0x1d4);
  FUN_10060d40();
  uStack_148 = 0x1019f349;
  FUN_1005c1e0();
  uStack_148 = 0x1019f355;
  FName::FName((FName *)&stack0xfffffed4,0);
  UObject::GetTransientPackage();
  uStack_148 = 0;
  uStack_164 = 0x1019f375;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1000b680();
  }
  uStack_148 = 0;
  *(int *)(in_ECX + 0x1d8) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x106;
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xc0))();
  uStack_164 = *(undefined4 *)(in_ECX + 0x1d8);
  uStack_168 = 0x1019f3c8;
  FUN_10060d40();
  uStack_164 = 0x1019f3d4;
  FUN_1005c1e0();
  uStack_164 = 0x1019f3e0;
  FName::FName((FName *)&uStack_148,0);
  pUStack_178 = UObject::GetTransientPackage();
  uStack_168 = *(undefined4 *)GError_exref;
  uStack_164 = 0;
  pwStack_16c = (wchar_t *)0x0;
  iStack_170 = 0;
  piStack_174 = (int *)uStack_148;
  iStack_180 = 0x1019f400;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    uStack_164 = 0;
    uStack_168 = 0;
    pwStack_16c = L"AH & BH TOGETHER";
    iStack_170 = 0x1019f419;
    iVar3 = FUN_100097b0();
  }
  uStack_164 = 0;
  uStack_168 = 0;
  *(int *)(in_ECX + 0x1e0) = iVar3;
  pwStack_16c = (wchar_t *)0x10;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x110;
  iStack_170 = 0x96;
  piStack_174 = (int *)0xa;
  pUStack_178 = (UPackage *)0x14;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xc0))();
  iStack_180 = *(undefined4 *)(in_ECX + 0x1e0);
  uStack_184 = 0x1019f45e;
  FUN_10060d40();
  iStack_180 = 0x1019f46a;
  FUN_1005c1e0();
  *(undefined4 *)(*(int *)(in_ECX + 0x1e0) + 0x2fc) = 1;
  iStack_180 = 0x1019f486;
  FName::FName((FName *)&uStack_164,0);
  UObject::GetTransientPackage();
  uStack_184 = *(undefined4 *)GError_exref;
  iStack_180 = 0;
  uStack_188 = 0;
  uStack_18c = 0;
  uStack_190 = uStack_164;
  iStack_19c = 0x1019f4a6;
  pUVar1 = UObject::StaticAllocateObject();
  if (pUVar1 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1000b680();
  }
  iStack_180 = 0;
  uStack_184 = 0;
  *(int *)(in_ECX + 0x1dc) = iVar3;
  uStack_188 = 0x10;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x109;
  uStack_18c = 0x9b;
  uStack_190 = 0x7d;
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))();
  iStack_19c = *(int *)(in_ECX + 0x1dc);
  uStack_1a0 = 0x1019f4f9;
  FUN_10060d40();
  iStack_19c = 0x1019f505;
  FUN_1005c1e0();
  piStack_174 = (int *)(in_ECX + 0x1ec);
  iStack_170 = 0;
  iStack_180 = 0xaa;
  do {
    iVar7 = 0x23;
    iVar3 = iStack_170 + 0x121;
    piVar8 = piStack_174;
    do {
      iStack_19c = 0x1019f53e;
      FName::FName((FName *)&pUStack_178,0);
      UObject::GetTransientPackage();
      uStack_1a0 = *(undefined4 *)GError_exref;
      iStack_19c = 0;
      uStack_1a4 = 0;
      uStack_1a8 = 0;
      pUVar1 = UObject::StaticAllocateObject();
      if (pUVar1 == (UObject *)0x0) {
        iVar4 = 0;
      }
      else {
        iStack_19c = 0;
        uStack_1a0 = 0x40;
        uStack_1a4 = 1;
        uStack_1a8 = 0;
        iVar4 = FUN_1001a820();
      }
      iStack_19c = 0;
      uStack_1a0 = 0;
      *piVar8 = iVar4;
      uStack_1a4 = 0x10;
      *(int *)(iVar4 + 0x1cc) = iVar3;
      uStack_1a8 = 0x50;
      (**(code **)(*(int *)*piVar8 + 0xc0))();
      iStack_19c = *piVar8;
      uStack_1a0 = 0x1019f5b4;
      FUN_10060d40();
      iStack_19c = 0x1019f5bc;
      FUN_1005c1e0();
      iVar7 = iVar7 + 0x73;
      piVar8 = piVar8 + 3;
      iVar3 = iVar3 + 3;
    } while (iVar7 < 0x109);
    iStack_170 = iStack_170 + 1;
    piStack_174 = piStack_174 + 1;
    iStack_180 = iStack_180 + 0x14;
  } while (iStack_180 < 0xe6);
  iVar3 = **(int **)(in_ECX + 0x1ec);
  iStack_19c = 0x1019f60c;
  iStack_19c = FUN_10058020();
  uStack_1a0 = 0x1019f617;
  (**(code **)(iVar3 + 0x10c))();
  iVar3 = **(int **)(in_ECX + 0x1f0);
  uStack_1a0 = 0;
  uStack_1a4 = 0x1019f632;
  uStack_1a4 = FUN_10058020();
  uStack_1a8 = 0x1019f63d;
  (**(code **)(iVar3 + 0x10c))();
  iVar3 = **(int **)(in_ECX + 500);
  uStack_1a8 = 0;
  uStack_1ac = FUN_10058020();
  (**(code **)(iVar3 + 0x10c))();
  iVar3 = **(int **)(in_ECX + 0x1f8);
  FUN_10058020();
  (**(code **)(iVar3 + 0x10c))();
  iVar3 = **(int **)(in_ECX + 0x1fc);
  FUN_10058020();
  (**(code **)(iVar3 + 0x10c))();
  iVar3 = **(int **)(in_ECX + 0x200);
  FUN_10058020();
  (**(code **)(iVar3 + 0x10c))();
  piStack_1cc = (int *)0x1019f6e1;
  FName::FName((FName *)&uStack_1a8,0);
  pUVar5 = UObject::GetTransientPackage();
  piStack_1cc = (int *)0x0;
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar5,uStack_1a8,0,0,*(undefined4 *)GError_exref);
  if (pUVar1 == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    piStack_1cc = (int *)0x1019f721;
    FString::FString((FString *)&iStack_19c,(ushort *)L"L2UI_ch3.button.SmallButton2_Down");
    piStack_1cc = (int *)0x1019f740;
    FString::FString((FString *)&uStack_190,(ushort *)L"L2UI_ch3.button.SmallButton2");
    uStack_1ac = uStack_1ac | 0xc;
    piStack_1cc = &iStack_19c;
    uVar2 = FUN_10006980(&uStack_190);
  }
  *(undefined4 *)(in_ECX + 0x1e8) = uVar2;
  if ((uStack_1ac & 8) != 0) {
    uStack_1ac = uStack_1ac & 0xfffffff7;
    FString::~FString((FString *)&uStack_190);
  }
  if ((uStack_1ac & 4) != 0) {
    FString::~FString((FString *)&iStack_19c);
  }
  piStack_1cc = (int *)0x0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1e8) + 0x1cc) = 0x127;
  (**(code **)(**(int **)(in_ECX + 0x1e8) + 0xc0))(0x6e,0x96,0x26,0x10,0);
  uVar2 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x1e8),2);
  FUN_1005c1e0(uVar2);
  FUN_10003cf0(0x1a8);
  ExceptionList = (void *)0x23;
  __security_check_cookie((uint)&piStack_1cc ^ 0x19);
  return;
}


// ==== 1019f840 FUN_1019f840

void FUN_1019f840(void)

{
  UClass *pUVar1;
  int in_ECX;
  int iVar2;
  ushort *puVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  int iVar7;
  UObject *pUVar8;
  int *piStack_198;
  ushort auStack_194 [100];
  ushort auStack_cc [100];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&piStack_198;
  if ((*(byte *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                  + 0x3c) + 0x3bc) + 0x694) & 4) == 0) {
    if (*(int *)(*(int *)(in_ECX + 0x1dc) + 0x324) < 0) {
      FUN_10009f70(0);
    }
    (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x174))();
    piStack_198 = (int *)(in_ECX + 0x264);
    *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x324);
    iVar2 = 0;
    do {
      appSprintf(auStack_cc,(ushort *)L"%s_m000_t0%d_f",
                 L"MFighter" +
                 *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54
                                                               ) + 0x38) + 0x3c) + 0x3bc) + 0x698) *
                 0x14,iVar2);
      appSprintf(auStack_194,(ushort *)L"%s.face.%s",
                 L"MFighter" +
                 *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54
                                                               ) + 0x38) + 0x3c) + 0x3bc) + 0x698) *
                 0x14,auStack_cc);
      iVar7 = 0;
      puVar3 = auStack_194;
      pUVar4 = (UObject *)0xffffffff;
      pUVar1 = UMaterial::StaticClass();
      pUVar4 = UObject::StaticFindObject(pUVar1,pUVar4,puVar3,iVar7);
      if (pUVar4 == (UObject *)0x0) {
        puVar3 = auStack_194;
        pUVar5 = pUVar4;
        pUVar6 = pUVar4;
        pUVar8 = pUVar4;
        pUVar1 = UMaterial::StaticClass();
        pUVar4 = UObject::StaticLoadObject
                           (pUVar1,pUVar4,puVar3,(ushort *)pUVar5,(ulong)pUVar6,
                            (UPackageMap *)pUVar8);
        if (pUVar4 != (UObject *)0x0) goto LAB_1019f982;
      }
      else {
LAB_1019f982:
        FUN_1000b3d0(auStack_cc);
        *piStack_198 = iVar2;
        piStack_198 = piStack_198 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf);
  }
  __security_check_cookie(local_4 ^ (uint)&piStack_198);
  return;
}


// ==== 1019f9d0 FUN_1019f9d0

void FUN_1019f9d0(void)

{
  UClass *pUVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  int iVar8;
  UObject *pUVar9;
  int *piStack_1a4;
  int local_1a0;
  int local_19c;
  int *piStack_198;
  ushort auStack_194 [100];
  FOutputDevice aFStack_cc [200];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&piStack_1a4;
  if ((*(byte *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                  + 0x3c) + 0x3bc) + 0x694) & 4) == 0) {
    local_1a0 = 0;
    local_19c = 0;
    if (*(int *)(*(int *)(in_ECX + 0x1cc) + 0x324) < 0) {
      FUN_10009f70(0);
    }
    if (*(int *)(*(int *)(in_ECX + 0x1d0) + 0x324) < 0) {
      FUN_10009f70(0);
    }
    (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x174))();
    (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x174))();
    puVar3 = (undefined4 *)(in_ECX + 0x28c);
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar3 = (undefined4 *)(in_ECX + 0x48c);
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(*(int *)(in_ECX + 0x1cc) + 0x324);
    piStack_1a4 = (int *)(in_ECX + 0x23c);
    piStack_198 = (int *)(in_ECX + 0x214);
    *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(*(int *)(in_ECX + 0x1d0) + 0x324);
    iVar2 = 0;
    do {
      iVar8 = *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) +
                                                   0x38) + 0x3c) + 0x3bc) + 0x698);
      appSprintf(auStack_194,(ushort *)L"%s.%s_m00%d_m0%d_ah",L"Fighter" + iVar8 * 0x14,
                 L"MFighter" + iVar8 * 0x14,iVar2,*(undefined4 *)(in_ECX + 0x20c));
      appSprintf((ushort *)aFStack_cc,(ushort *)L"%s_m00%d_m0%d_ah",
                 L"MFighter" +
                 *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54
                                                               ) + 0x38) + 0x3c) + 0x3bc) + 0x698) *
                 0x14,iVar2,*(undefined4 *)(in_ECX + 0x20c));
      iVar8 = 0;
      puVar4 = auStack_194;
      pUVar5 = (UObject *)0xffffffff;
      pUVar1 = UMesh::StaticClass();
      pUVar5 = UObject::StaticFindObject(pUVar1,pUVar5,puVar4,iVar8);
      if (pUVar5 == (UObject *)0x0) {
        puVar4 = auStack_194;
        pUVar6 = pUVar5;
        pUVar7 = pUVar5;
        pUVar9 = pUVar5;
        pUVar1 = UMesh::StaticClass();
        pUVar5 = UObject::StaticLoadObject
                           (pUVar1,pUVar5,puVar4,(ushort *)pUVar6,(ulong)pUVar7,
                            (UPackageMap *)pUVar9);
        if (pUVar5 != (UObject *)0x0) goto LAB_1019fbb4;
      }
      else {
LAB_1019fbb4:
        FUN_1000b3d0(aFStack_cc);
        local_1a0 = local_1a0 + 1;
        *piStack_198 = iVar2;
        piStack_198 = piStack_198 + 1;
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2(aFStack_cc,*(ushort **)GLog_exref);
        }
      }
      iVar8 = *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) +
                                                   0x38) + 0x3c) + 0x3bc) + 0x698);
      appSprintf(auStack_194,(ushort *)L"%s.%s_m00%d_m0%d_bh",L"Fighter" + iVar8 * 0x14,
                 L"MFighter" + iVar8 * 0x14,iVar2,*(undefined4 *)(in_ECX + 0x20c));
      appSprintf((ushort *)aFStack_cc,(ushort *)L"%s_m00%d_m0%d_bh",
                 L"MFighter" +
                 *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54
                                                               ) + 0x38) + 0x3c) + 0x3bc) + 0x698) *
                 0x14,iVar2,*(undefined4 *)(in_ECX + 0x20c));
      iVar8 = 0;
      puVar4 = auStack_194;
      pUVar5 = (UObject *)0xffffffff;
      pUVar1 = UMesh::StaticClass();
      pUVar5 = UObject::StaticFindObject(pUVar1,pUVar5,puVar4,iVar8);
      if (pUVar5 == (UObject *)0x0) {
        puVar4 = auStack_194;
        pUVar6 = pUVar5;
        pUVar7 = pUVar5;
        pUVar9 = pUVar5;
        pUVar1 = UMesh::StaticClass();
        pUVar5 = UObject::StaticLoadObject
                           (pUVar1,pUVar5,puVar4,(ushort *)pUVar6,(ulong)pUVar7,
                            (UPackageMap *)pUVar9);
        if (pUVar5 != (UObject *)0x0) goto LAB_1019fcc7;
      }
      else {
LAB_1019fcc7:
        FUN_1000b3d0(aFStack_cc);
        local_19c = local_19c + 1;
        *piStack_1a4 = iVar2;
        piStack_1a4 = piStack_1a4 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf);
    FUN_1000b3d0(L"No Mesh");
    *(int *)(in_ECX + 0x214 + local_1a0 * 4) = iVar2;
    FUN_1000b3d0(L"No Mesh");
    *(int *)(in_ECX + 0x23c + local_19c * 4) = iVar2;
  }
  __security_check_cookie(local_4 ^ (uint)&piStack_1a4);
  return;
}


// ==== 1019fd50 FUN_1019fd50

void FUN_1019fd50(void)

{
  int *piVar1;
  undefined4 uVar2;
  UClass *pUVar3;
  int iVar4;
  int in_ECX;
  ushort *puVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  ushort *puVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  int iVar11;
  ushort local_204 [256];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_204;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
  iVar4 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
  if (((iVar4 != 0) &&
      (-1 < *(int *)(in_ECX + 0x214 + *(int *)(*(int *)(in_ECX + 0x1d4) + 0x324) * 4))) &&
     (-1 < *(int *)(in_ECX + 0x23c + *(int *)(*(int *)(in_ECX + 0x1d8) + 0x324) * 4))) {
    uVar2 = FUN_1000ac40(*(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x324));
    appSprintf(local_204,(ushort *)L"%s.%s",
               L"Fighter" + *(int *)(*(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc) + 0x698) * 0x14,
               uVar2);
    iVar11 = 0;
    puVar5 = local_204;
    pUVar7 = (UObject *)0xffffffff;
    pUVar3 = UMesh::StaticClass();
    pUVar7 = UObject::StaticFindObject(pUVar3,pUVar7,puVar5,iVar11);
    *(UObject **)(iVar4 + 0x3d0) = pUVar7;
    if (pUVar7 == (UObject *)0x0) {
      puVar5 = local_204;
      pUVar6 = pUVar7;
      pUVar9 = pUVar7;
      pUVar10 = pUVar7;
      pUVar3 = USkeletalMesh::StaticClass();
      pUVar7 = UObject::StaticLoadObject
                         (pUVar3,pUVar7,puVar5,(ushort *)pUVar6,(ulong)pUVar9,(UPackageMap *)pUVar10
                         );
      *(UObject **)(iVar4 + 0x3d0) = pUVar7;
    }
    iVar11 = 0;
    puVar5 = (ushort *)(in_ECX + 0x28c);
    pUVar7 = (UObject *)0xffffffff;
    puVar8 = puVar5;
    pUVar3 = UMaterial::StaticClass();
    pUVar7 = UObject::StaticFindObject(pUVar3,pUVar7,puVar8,iVar11);
    *(UObject **)(iVar4 + 0x478) = pUVar7;
    if (pUVar7 == (UObject *)0x0) {
      pUVar6 = pUVar7;
      pUVar9 = pUVar7;
      pUVar10 = pUVar7;
      pUVar3 = UMaterial::StaticClass();
      pUVar7 = UObject::StaticLoadObject
                         (pUVar3,pUVar7,puVar5,(ushort *)pUVar6,(ulong)pUVar9,(UPackageMap *)pUVar10
                         );
      *(UObject **)(iVar4 + 0x478) = pUVar7;
    }
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
    uVar2 = FUN_1000ac40(*(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x324));
    appSprintf(local_204,(ushort *)L"%s.%s",
               L"Fighter" + *(int *)(*(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc) + 0x698) * 0x14,
               uVar2);
    iVar11 = 0;
    puVar5 = local_204;
    pUVar7 = (UObject *)0xffffffff;
    pUVar3 = UMesh::StaticClass();
    pUVar7 = UObject::StaticFindObject(pUVar3,pUVar7,puVar5,iVar11);
    *(UObject **)(iVar4 + 0x3cc) = pUVar7;
    if (pUVar7 == (UObject *)0x0) {
      puVar5 = local_204;
      pUVar6 = pUVar7;
      pUVar9 = pUVar7;
      pUVar10 = pUVar7;
      pUVar3 = USkeletalMesh::StaticClass();
      pUVar7 = UObject::StaticLoadObject
                         (pUVar3,pUVar7,puVar5,(ushort *)pUVar6,(ulong)pUVar9,(UPackageMap *)pUVar10
                         );
      *(UObject **)(iVar4 + 0x3cc) = pUVar7;
    }
    iVar11 = 0;
    puVar5 = (ushort *)(in_ECX + 0x48c);
    pUVar7 = (UObject *)0xffffffff;
    puVar8 = puVar5;
    pUVar3 = UMaterial::StaticClass();
    pUVar7 = UObject::StaticFindObject(pUVar3,pUVar7,puVar8,iVar11);
    *(UObject **)(iVar4 + 0x474) = pUVar7;
    if (pUVar7 == (UObject *)0x0) {
      pUVar6 = pUVar7;
      pUVar9 = pUVar7;
      pUVar10 = pUVar7;
      pUVar3 = UMaterial::StaticClass();
      pUVar7 = UObject::StaticLoadObject
                         (pUVar3,pUVar7,puVar5,(ushort *)pUVar6,(ulong)pUVar9,(UPackageMap *)pUVar10
                         );
      *(UObject **)(iVar4 + 0x474) = pUVar7;
    }
    iVar4 = FUN_1014a730();
    iVar11 = *(int *)(*(int *)(*(int *)(iVar4 + 0x80c) + 0x1cc) + 0x324) * 0x314;
    iVar4 = FUN_1014a730();
    *(undefined4 *)(iVar4 + 0xabc + iVar11) = *(undefined4 *)(in_ECX + 0x208);
    iVar4 = FUN_1014a730();
    *(undefined4 *)(iVar4 + 0xac0 + iVar11) = *(undefined4 *)(in_ECX + 0x204);
  }
  __security_check_cookie(local_4 ^ (uint)local_204);
  return;
}


// ==== 1019ffc0 FUN_1019ffc0

undefined4 FUN_1019ffc0(void)

{
  int *in_ECX;
  
  in_ECX[0x83] = 0;
  FUN_10009f70(0);
  in_ECX[0x81] = 0;
  FUN_10009f70(0);
  FUN_1019f9d0();
  in_ECX[0x82] = 0;
  FUN_10009f70(0);
  (**(code **)(*in_ECX + 0x200))(in_ECX[0x82]);
  FUN_10009f70(in_ECX[0x82]);
  (**(code **)(*in_ECX + 0x204))(in_ECX[0x82]);
  in_ECX[0x84] = 0;
  FUN_10009f70(0);
  (**(code **)(*in_ECX + 0x208))(in_ECX[0x84]);
  return 1;
}


// ==== 101a0070 FUN_101a0070

undefined4 FUN_101a0070(void)

{
  if ((*(byte *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                  + 0x3c) + 0x3bc) + 0x694) & 4) == 0) {
    FUN_10009f70(0);
  }
  return 1;
}


// ==== 101a00b0 FUN_101a00b0

undefined4 FUN_101a00b0(int param_1)

{
  code *pcVar1;
  int *in_ECX;
  
  if ((*(byte *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                  + 0x3c) + 0x3bc) + 0x694) & 4) == 0) {
    pcVar1 = *(code **)(*in_ECX + 0x200);
    in_ECX[0x81] = param_1;
    (*pcVar1)(*(undefined4 *)(in_ECX[0x75] + 0x324));
    (**(code **)(*in_ECX + 0x204))(*(undefined4 *)(in_ECX[0x76] + 0x324));
    FUN_1019fd50();
  }
  return 1;
}


// ==== 101a0130 FUN_101a0130

undefined4 FUN_101a0130(int param_1)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  
  if ((*(byte *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                  + 0x3c) + 0x3bc) + 0x694) & 4) == 0) {
    if (in_ECX[param_1 + 0x85] == 0xf) {
      piVar2 = in_ECX + 0xa3;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)piVar2 = 0;
        piVar2 = (int *)((int)piVar2 + 1);
      }
    }
    else {
      in_ECX[0x82] = in_ECX[param_1 + 0x85];
      appSprintf((ushort *)(in_ECX + 0xa3),(ushort *)L"%s.%s_m00%d_t0%d_m0%d_ah",
                 L"MFighter" +
                 *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54
                                                               ) + 0x38) + 0x3c) + 0x3bc) + 0x698) *
                 0x14,L"MFighter" +
                      *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) +
                                                                    0x54) + 0x38) + 0x3c) + 0x3bc) +
                              0x698) * 0x14,in_ECX[param_1 + 0x85],in_ECX[0x81],in_ECX[0x83]);
    }
    FUN_1019fd50();
    if (((*(int *)(in_ECX[0x78] + 0x2fc) != 0) && (in_ECX[param_1 + 0x85] != 0xf)) &&
       (iVar1 = FUN_1019c7f0(in_ECX[param_1 + 0x85]), iVar1 != *(int *)(in_ECX[0x76] + 0x324))) {
      FUN_10009f70(iVar1);
      (**(code **)(*in_ECX + 0x204))(iVar1);
    }
  }
  return 1;
}


// ==== 101a0250 FUN_101a0250

undefined4 FUN_101a0250(int param_1)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  
  if ((*(byte *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                  + 0x3c) + 0x3bc) + 0x694) & 4) == 0) {
    if (in_ECX[param_1 + 0x8f] == 0xf) {
      piVar2 = in_ECX + 0x123;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)piVar2 = 0;
        piVar2 = (int *)((int)piVar2 + 1);
      }
    }
    else {
      in_ECX[0x82] = in_ECX[param_1 + 0x8f];
      appSprintf((ushort *)(in_ECX + 0x123),(ushort *)L"%s.%s_m00%d_t0%d_m0%d_bh",
                 L"MFighter" +
                 *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54
                                                               ) + 0x38) + 0x3c) + 0x3bc) + 0x698) *
                 0x14,L"MFighter" +
                      *(int *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) +
                                                                    0x54) + 0x38) + 0x3c) + 0x3bc) +
                              0x698) * 0x14,in_ECX[param_1 + 0x8f],in_ECX[0x81],in_ECX[0x83]);
    }
    FUN_1019fd50();
    if (((*(int *)(in_ECX[0x78] + 0x2fc) != 0) && (in_ECX[param_1 + 0x8f] != 0xf)) &&
       (iVar1 = FUN_1019c7c0(in_ECX[param_1 + 0x8f]), iVar1 != *(int *)(in_ECX[0x75] + 0x324))) {
      FUN_10009f70(iVar1);
      (**(code **)(*in_ECX + 0x200))(iVar1);
    }
  }
  return 1;
}


// ==== 101a0370 FUN_101a0370

undefined4 FUN_101a0370(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if ((*(byte *)(*(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38)
                                  + 0x3c) + 0x3bc) + 0x694) & 4) == 0) {
    iVar2 = *(int *)(in_ECX + 0x264 + param_1 * 4);
    *(int *)(in_ECX + 0x210) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(in_ECX + 0x210) = 0;
      FUN_10009f70(0);
    }
    iVar2 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                             0x3c) + 0x3bc);
    if (iVar2 != 0) {
      iVar1 = FUN_1014a730();
      iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 0x80c) + 0x1cc) + 0x324) * 0x314;
      iVar1 = FUN_1014a730();
      *(int *)(iVar1 + 0xa80 + iVar3) = iVar2;
      iVar2 = FUN_1014a730();
      *(undefined4 *)(iVar2 + 0xac4 + iVar3) = *(undefined4 *)(in_ECX + 0x210);
      iVar2 = FUN_1014a730();
      User::SetPawnResource((User *)(iVar2 + 0x87c + iVar3));
    }
  }
  return 1;
}


// ==== 101a0450 FUN_101a0450

void FUN_101a0450(void)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int in_ECX;
  float fVar4;
  ushort uStack_404;
  undefined1 auStack_402 [1022];
  uint uStack_4;
  
  uStack_4 = DAT_103554c4 ^ (uint)&uStack_404;
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c
                           ) + 0x3bc);
  if (iVar1 == 0) {
    __security_check_cookie(uStack_4 ^ (uint)&uStack_404);
    return;
  }
  uStack_404 = 0;
  _memset(auStack_402,0,0x3fe);
  puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1ec) + 0x1f8))();
  appStrcpy(&uStack_404,puVar2);
  if (*(int *)(iVar1 + 0x3d4) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x1874) = fVar4;
  }
  if (*(int *)(iVar1 + 0x3d8) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x188c) = fVar4;
  }
  if (*(int *)(iVar1 + 0x3dc) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x1898) = fVar4;
  }
  puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1f0) + 0x1f8))();
  appStrcpy(&uStack_404,puVar2);
  if (*(int *)(iVar1 + 0x3d4) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x1878) = fVar4;
  }
  if (*(int *)(iVar1 + 0x3d8) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x1890) = fVar4;
  }
  if (*(int *)(iVar1 + 0x3dc) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x189c) = fVar4;
  }
  puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 500) + 0x1f8))();
  appStrcpy(&uStack_404,puVar2);
  if (*(int *)(iVar1 + 0x3d4) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x187c) = fVar4;
  }
  if (*(int *)(iVar1 + 0x3d8) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x1894) = fVar4;
  }
  if (*(int *)(iVar1 + 0x3dc) != 0) {
    fVar4 = appAtof(&uStack_404);
    *(float *)(iVar1 + 0x18a0) = fVar4;
  }
  puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1f8) + 0x1f8))();
  appStrcpy(&uStack_404,puVar2);
  if (*(int *)(iVar1 + 0x3d4) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x1880) = uVar3;
  }
  if (*(int *)(iVar1 + 0x3d8) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x18a4) = uVar3;
  }
  if (*(int *)(iVar1 + 0x3dc) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x18b0) = uVar3;
  }
  puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x1fc) + 0x1f8))();
  appStrcpy(&uStack_404,puVar2);
  if (*(int *)(iVar1 + 0x3d4) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x1884) = uVar3;
  }
  if (*(int *)(iVar1 + 0x3d8) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x18a8) = uVar3;
  }
  if (*(int *)(iVar1 + 0x3dc) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x18b4) = uVar3;
  }
  puVar2 = (ushort *)(**(code **)(**(int **)(in_ECX + 0x200) + 0x1f8))();
  appStrcpy(&uStack_404,puVar2);
  if (*(int *)(iVar1 + 0x3d4) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x1888) = uVar3;
  }
  if (*(int *)(iVar1 + 0x3d8) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x18ac) = uVar3;
  }
  if (*(int *)(iVar1 + 0x3dc) != 0) {
    appAtof(&uStack_404);
    uVar3 = FUN_101c19e0();
    *(undefined4 *)(iVar1 + 0x18b8) = uVar3;
  }
  __security_check_cookie(uStack_4 ^ (uint)&uStack_404);
  return;
}


// ==== 101a07c0 FUN_101a07c0

void FUN_101a07c0(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uStack_b8;
  int iStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  void *pvStack_94;
  undefined *puStack_90;
  undefined4 uStack_8c;
  ushort auStack_88 [64];
  uint uStack_8;
  
  puStack_90 = &UNK_10216ad0;
  pvStack_94 = ExceptionList;
  uStack_b8 = DAT_103554c4 ^ (uint)auStack_88;
  puStack_98 = (undefined1 *)&uStack_b8;
  ExceptionList = &pvStack_94;
  uStack_8c = 0;
  uStack_8 = uStack_b8;
  FUN_10059eb0(param_1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  FUN_10020bb0(&iStack_a0,&UNK_1029388c,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x19,0xffdcdcdc,&UNK_1029388c,0
               ,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&iStack_a0,L"COLOR:",0,0,0,0,0,0);
  FUN_100217a0((0x37 - iStack_a0) / 2 + 0x5f,(0x10 - iStack_9c) / 2 + 0x19,0xffdcdcdc,L"COLOR:",0,0,
               0,0,0,0,0,0,0,0,0,0xffffffff);
  appSprintf(auStack_88,(ushort *)&UNK_1029386c,*(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0x2e4));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x2d,0xffdcdcdc,auStack_88,0,0,
               0,0,0,0,0,0,0,0,0,0xffffffff);
  appSprintf(auStack_88,(ushort *)&UNK_1029385c,*(undefined4 *)(*(int *)(in_ECX + 0x1d8) + 0x2e4));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x55,0xffdcdcdc,auStack_88,0,0,
               0,0,0,0,0,0,0,0,0,0xffffffff);
  puVar1 = (ushort *)(in_ECX + 0x28c);
  iVar4 = appStrlen(puVar1);
  if (0 < iVar4) {
    FUN_10020bb0(&iStack_a0,puVar1,0,0,0,0,0,0);
    FUN_100217a0((0xdc - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x41,0xff808000,puVar1,0,0,0,
                 0,0,0,0,0,0,0,0,0xffffffff);
  }
  puVar1 = (ushort *)(in_ECX + 0x48c);
  iVar4 = appStrlen(puVar1);
  if (0 < iVar4) {
    FUN_10020bb0(&iStack_a0,puVar1,0,0,0,0,0,0);
    FUN_100217a0((0xdc - iStack_a0) / 2 + 0xf,(0x10 - iStack_9c) / 2 + 0x69,0xff808000,puVar1,0,0,0,
                 0,0,0,0,0,0,0,0,0xffffffff);
  }
  appSprintf(auStack_88,(ushort *)L"FACE(%d):",*(undefined4 *)(*(int *)(in_ECX + 0x1dc) + 0x2e4));
  FUN_10020bb0(&iStack_a0,auStack_88,0,0,0,0,0,0);
  FUN_100217a0((0x28 - iStack_a0) / 2 + 10,(0x10 - iStack_9c) / 2 + 0x7d,0xffdcdcdc,auStack_88,0,0,0
               ,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0x96,0xffdcdcdc,L"Hair Accessary",0,0,0,0,0,0,0,0,0,0,0
               ,0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0xaa,0xffdcdcdc,&DAT_1024d1bc,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0xbe,0xffdcdcdc,&DAT_1024d1b8,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x14,(0x10 - iStack_9c) / 2 + 0xd2,0xffdcdcdc,&DAT_10284e14,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x78,(0x10 - iStack_9c) / 2 + 0xaa,0xffdcdcdc,L"Pitch",0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x78,(0x10 - iStack_9c) / 2 + 0xbe,0xffdcdcdc,&UNK_10293814,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  FUN_100217a0(0x78,(0x10 - iStack_9c) / 2 + 0xd2,0xffdcdcdc,&UNK_10293808,0,0,0,0,0,0,0,0,0,0,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  uStack_8c = 0xffffffff;
  ExceptionList = pvStack_94;
  __security_check_cookie(uStack_8 ^ (uint)auStack_88);
  return;
}


// ==== 101a0d25 Catch@101a0d25

void Catch_101a0d25(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101a0d39 Catch@101a0d39

void Catch_101a0d39(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewer_HairChangeWnd::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a0d60 FUN_101a0d60

undefined4 FUN_101a0d60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  double dVar5;
  uint uStack_38;
  int local_28;
  int local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10216b00;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059eb0(param_1);
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(in_ECX[0x20],in_ECX[0x21],uVar2,uVar1);
  FUN_10020bb0(&local_28,&DAT_10293910,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x1e,0xffdcdcdc,&DAT_10293910,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_10293900,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x3c,0xffdcdcdc,&DAT_10293900,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_102938f0,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x5a,0xffdcdcdc,&DAT_102938f0,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_102938e0,0,0,0,0,0,0);
  FUN_100217a0((0x50 - local_28) / 2 + 0x14,(0x10 - local_24) / 2 + 0x78,0xffdcdcdc,&DAT_102938e0,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  FUN_10020bb0(&local_28,&DAT_102938d8,0,0,0,0,0,0);
  FUN_100217a0((0x2d - local_28) / 2 + 0x19,(0x10 - local_24) / 2 + 0x96,0xffdcdcdc,&DAT_102938d8,0,
               0,0,0,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  if (in_ECX[0x79] != 0) {
    dVar5 = appSecondsQPC();
    *(double *)(in_ECX + 0x81) = dVar5 - *(double *)(in_ECX + 0x7f);
    *(double *)(in_ECX + 0x7f) = (dVar5 - *(double *)(in_ECX + 0x7f)) + *(double *)(in_ECX + 0x7f);
    for (iVar4 = 0; iVar4 < in_ECX[0x7a]; iVar4 = iVar4 + 1) {
      local_18 = iVar4;
      iVar3 = (**(code **)(*in_ECX + 0x1fc))(iVar4);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*in_ECX + 0x200))(iVar4);
        if (iVar3 == 0) {
          (**(code **)(*in_ECX + 0x204))(iVar4);
        }
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 101a1028 Catch@101a1028

void Catch_101a1028(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101a103c Catch@101a103c

void Catch_101a103c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnViewer_Simulator::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a1060 FUN_101a1060

void FUN_101a1060(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  UClass *pUVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  double dVar7;
  float fVar8;
  undefined4 uStack_3e0;
  undefined4 *puStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c0;
  float fStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  ulong uVar9;
  UPackageMap *pUVar10;
  float fStack_38c;
  float local_388;
  float local_384;
  float local_380;
  undefined4 local_37c;
  undefined4 local_378;
  UObject *pUVar11;
  ushort *puVar12;
  float local_34c [6];
  double local_334;
  undefined4 local_328;
  double local_324;
  User local_318 [76];
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_264;
  undefined4 local_248;
  undefined4 uStack_190;
  uint uStack_98;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_34c;
  User::User(local_318);
  local_34c[0] = 0.0;
  local_34c[1] = 1.4013e-45;
  local_34c[2] = 5.60519e-45;
  local_34c[3] = 7.00649e-45;
  local_34c[4] = 9.80909e-45;
  local_34c[5] = 1.12104e-44;
  _memset(local_318,0,0x314);
  fVar8 = appFrand();
  if (*(float *)(in_ECX + 0x1f8) <= fVar8 * 100.0) {
    appFrand();
    fVar8 = (float)FUN_101c19e0();
    param_1[1] = 1;
    local_264 = 1;
  }
  else {
    appFrand();
    iVar2 = FUN_101c19e0();
    fVar8 = local_34c[-iVar2];
    param_1[1] = 2;
    local_248 = 0x111;
  }
  local_2cc = (&DAT_103527b0)[(int)fVar8 * 3];
  local_2c8 = (&DAT_103527b4)[(int)fVar8 * 3];
  local_2c4 = (&DAT_103527b8)[(int)fVar8 * 3];
  FName::FName((FName *)&local_328,0);
  piVar1 = *(int **)(*(int *)(DAT_103663bc + 0x50) + 0x19c);
  iVar2 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c
                           ) + 0x3bc);
  local_34c[0] = *(float *)(iVar2 + 0x1bc);
  local_34c[1] = *(float *)(iVar2 + 0x1c0);
  local_34c[2] = *(float *)(iVar2 + 0x1c4) + 50.0;
  fVar8 = appFrand();
  local_334 = (double)(fVar8 * 3.1415927);
  fVar8 = appFrand();
  local_324 = (double)(fVar8 * 300.0);
  dVar7 = appCos(local_334);
  local_34c[0] = (float)((float10)dVar7 * (float10)local_324 + (float10)local_34c[0]);
  dVar7 = appSin(local_334);
  local_34c[1] = (float)((float10)dVar7 * (float10)local_324 + (float10)local_34c[1]);
  FName::FName((FName *)&local_334,(ushort *)L"Engine.PlayerController",1);
  pUVar10 = (UPackageMap *)0x0;
  uVar9 = 1;
  puVar12 = (ushort *)0x0;
  local_328 = local_334._0_4_;
  puVar3 = FName::operator*((FName *)&local_328);
  pUVar11 = (UObject *)0x0;
  pUVar4 = AController::StaticClass();
  local_378 = 0x101a125d;
  UObject::StaticLoadClass(pUVar4,pUVar11,puVar3,puVar12,uVar9,pUVar10);
  local_334 = (double)CONCAT44(local_334._4_4_,*piVar1);
  puVar5 = (undefined4 *)FRotator::FRotator((FRotator *)&local_324,0,0,0);
  local_37c = *puVar5;
  local_378 = puVar5[1];
  local_388 = local_34c[0];
  fStack_38c = local_34c[2];
  local_384 = local_34c[1];
  local_380 = local_34c[2];
  FName::FName((FName *)&fStack_38c,0);
  iVar6 = (**(code **)(local_334._0_4_ + 0xc0))();
  pUVar10 = (UPackageMap *)0x0;
  uVar9 = 0;
  puVar12 = (ushort *)0x0;
  puVar3 = User::GetClassNamePointer((User *)local_34c);
  pUVar11 = (UObject *)0x0;
  pUVar4 = APawn::StaticClass();
  uStack_3ac = 0x101a12e8;
  pUVar4 = UObject::StaticLoadClass(pUVar4,pUVar11,puVar3,puVar12,uVar9,pUVar10);
  *(UClass **)(iVar6 + 0x4f8) = pUVar4;
  iVar2 = *piVar1;
  puVar5 = (undefined4 *)FRotator::FRotator((FRotator *)&stack0xfffffc98,0,0,0);
  uStack_3b0 = *puVar5;
  uStack_3ac = puVar5[1];
  fStack_3bc = local_380;
  uStack_3c0 = local_378;
  uStack_3b8 = local_37c;
  uStack_3b4 = local_378;
  uStack_3c8 = 0x101a1345;
  FName::FName((FName *)&uStack_3c0,0);
  uStack_3c8 = 0x101a1356;
  iVar2 = (**(code **)(iVar2 + 0xc0))();
  *(int *)(iVar6 + 0x3bc) = iVar2;
  uStack_3b4 = 0;
  *(int *)(iVar2 + 0x14d8) = iVar6;
  *(undefined1 *)(iVar6 + 0xc2) = 4;
  *(undefined1 *)(*(int *)(iVar6 + 0x3bc) + 0xc2) = 4;
  uStack_3b0 = 0;
  uStack_3ac = 0x3f800000;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  uStack_3d4 = 0;
  uStack_3c8 = 0x3f800000;
  uStack_3d8 = 1;
  puStack_3dc = (undefined4 *)0x101a13b3;
  (**(code **)(**(int **)(iVar6 + 0x3bc) + 0x1c8))();
  uStack_190 = *(undefined4 *)(iVar6 + 0x3bc);
  fStack_38c = 0.0;
  puStack_3dc = (undefined4 *)0x101a13d2;
  User::SetPawnResource((User *)&stack0xfffffc6c);
  iVar2 = *(int *)*(APawn **)(iVar6 + 0x3bc);
  puStack_3dc = &uStack_3b0;
  uStack_3e0 = 0x101a13e5;
  puVar5 = (undefined4 *)APawn::GetWaitAnimName(*(APawn **)(iVar6 + 0x3bc));
  puStack_3dc = (undefined4 *)0x0;
  uStack_3e0 = 1;
  (**(code **)(iVar2 + 0x328))(0,*puVar5,0x3f800000,0);
  *param_1 = *(undefined4 *)(iVar6 + 0x3bc);
  __security_check_cookie(uStack_98 ^ (uint)&uStack_3e0);
  return;
}


// ==== 101a1430 FUN_101a1430

void FUN_101a1430(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  ushort *puVar5;
  int in_ECX;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  wchar_t *pwStack_13c;
  undefined4 local_124;
  longlong local_120 [32];
  uint uStack_20;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_124;
  FUN_10061b40();
  pwStack_13c = L"L2UI.ShortcutWnd.Back1";
  uStack_140 = 0x101a145d;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  pwStack_13c = (wchar_t *)0x101a146f;
  FName::FName((FName *)&local_124,0);
  pUVar2 = UObject::GetTransientPackage();
  uStack_140 = *(undefined4 *)GError_exref;
  pwStack_13c = (wchar_t *)0x0;
  uStack_144 = 0;
  uStack_148 = 0;
  pUVar3 = UObject::StaticAllocateObject(&DAT_1035db10,pUVar2,local_124);
  if (pUVar3 == (UObject *)0x0) {
    iVar4 = 0;
  }
  else {
    pwStack_13c = (wchar_t *)0x1;
    uStack_140 = 1;
    uStack_144 = 0x101a14ab;
    iVar4 = FUN_1001c510();
  }
  *(int *)(in_ECX + 0xc0) = iVar4;
  *(undefined4 *)(in_ECX + 200) = 0x120;
  *(undefined4 *)(iVar4 + 0x1cc) = 0x120;
  pwStack_13c = (wchar_t *)0x0;
  uStack_140 = 0;
  local_120[0] = (longlong)ROUND(*(float *)(in_ECX + 0x8c));
  uStack_144 = (undefined4)local_120[0];
  uStack_148 = 0xc;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc0))(0,0);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0xc0),2);
  FUN_1005c1e0(uVar1);
  pwStack_13c = (wchar_t *)local_120;
  local_124 = (uint)local_124._2_2_ << 0x10;
  plVar7 = (longlong *)pwStack_13c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)plVar7 = 0;
    plVar7 = (longlong *)((int)plVar7 + 4);
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)plVar7 = 0;
    plVar7 = (longlong *)((int)plVar7 + 1);
  }
  iVar4 = in_ECX + 0xbd0;
  iVar8 = in_ECX + 0x1d0;
  iVar6 = 0;
  do {
    puVar5 = appItoa(iVar6);
    appSprintf((ushort *)local_120,(ushort *)L"ShortcutCommand%s",puVar5);
    (**(code **)(**(int **)GConfig_exref + 0x10))
              (L"L2PawnViewer",local_120,iVar8,0x100,&stack0xfffffecc);
    puVar5 = appItoa(iVar6);
    appSprintf((ushort *)&stack0xfffffecc,(ushort *)L"ShortcutName%s",puVar5);
    (**(code **)(**(int **)GConfig_exref + 0x10))
              (L"L2PawnViewer",&stack0xfffffecc,iVar4,0x20,&uStack_148);
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0x100;
    iVar4 = iVar4 + 0x20;
  } while (iVar6 < 10);
  uStack_144 = 0x101a162f;
  __security_check_cookie(uStack_20 ^ (uint)&uStack_140);
  return;
}


// ==== 101a1640 FUN_101a1640

undefined4 FUN_101a1640(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined1 local_8 [8];
  
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
  if (*(int *)(in_ECX + 0x1cc) != 0) {
    FUN_10021a00(0,0,0x1a1,0x2c,0,0,0x1a1,0x2c,*(int *)(in_ECX + 0x1cc),0xff,1);
  }
  iVar3 = 0x1f;
  iVar4 = in_ECX + 0xbd0;
  do {
    if (iVar4 != 0) {
      FUN_10020bb0(local_8,iVar4,0,0,0,0,0,0);
      FUN_100217a0(iVar3,6,0xffdcdcdc,iVar4,0x20,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
    iVar3 = iVar3 + 0x25;
    iVar4 = iVar4 + 0x20;
  } while (iVar3 < 0x191);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 101a1750 FUN_101a1750

undefined4 FUN_101a1750(undefined4 param_1,uint param_2)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_1019c8a0(param_2 & 0xffff,param_2 >> 0x10);
  if ((-1 < iVar1) && (iVar1 = iVar1 * 0x100 + 0x1d0 + extraout_ECX, iVar1 != 0)) {
    (*(code *)**(undefined4 **)(*(int *)(DAT_103663bc + 0x50) + 0x34))
              (iVar1,*(undefined4 *)GLog_exref);
    (*(code *)**(undefined4 **)
                (**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x38))
              (iVar1,*(undefined4 *)GLog_exref);
  }
  return 1;
}


// ==== 101a17c0 FUN_101a17c0

int FUN_101a17c0(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 3) <= param_1)) {
    FUN_101c238d();
  }
  return *(int *)(in_ECX + 4) + param_1 * 8;
}


// ==== 101a17f0 FUN_101a17f0

void FUN_101a17f0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}


// ==== 101a1810 FUN_101a1810

void FUN_101a1810(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  FName *pFVar8;
  ushort *puVar9;
  int *in_ECX;
  int iVar10;
  undefined8 uVar11;
  uint uStack_444;
  undefined1 local_430 [8];
  int local_428;
  int *local_424;
  uint local_420;
  float local_41c;
  undefined1 *local_418;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  ushort local_408;
  undefined1 local_406 [1022];
  uint local_8;
  
  puStack_410 = &LAB_10216b20;
  local_414 = ExceptionList;
  uStack_444 = DAT_103554c4 ^ (uint)&local_408;
  local_418 = (undefined1 *)&uStack_444;
  ExceptionList = &local_414;
  local_40c = 0;
  local_424 = in_ECX;
  local_8 = uStack_444;
  iVar4 = FUN_1002cfe0(param_2 & 0xffff,param_2 >> 0x10,0,0);
  in_ECX[0x9f] = iVar4;
  if ((-1 < iVar4) && (iVar4 < in_ECX[0x91])) {
    (**(code **)(*in_ECX + 0x234))();
    FUN_1002cc50();
    iVar4 = FUN_1014a730();
    local_420 = *(uint *)(*(int *)(iVar4 + 0x80c) + 0x200);
    if (0x14 < local_420) goto LAB_101a1f41;
    iVar10 = local_420 * 0x314;
    iVar4 = FUN_1014a730();
    iVar4 = iVar4 + 0x87c + iVar10;
    piVar6 = (int *)(in_ECX[0x90] + in_ECX[0x9f] * 4);
    iVar5 = *piVar6;
    local_41c = *(float *)(iVar5 + 0x1e6c);
    uVar1 = *(uint *)(iVar5 + 0x1e5c);
    if (local_41c == 1.96182e-44) {
      *(undefined4 *)(iVar4 + 0xb4) = 0;
      *(undefined4 *)(iVar4 + 0xb8) = 0;
    }
    else {
      iVar5 = *(int *)(*piVar6 + 0x1e6c);
      if (iVar5 == 7) {
        *(undefined4 *)(iVar4 + 0xd0) = 0;
      }
      else if (iVar5 == 8) {
        *(undefined4 *)(iVar4 + 0xd0) = 0;
      }
      else if (iVar5 == 0x11) {
        *(undefined4 *)(iVar4 + 0xe4) = 0;
        *(undefined4 *)(iVar4 + 0xe0) = 0;
      }
      else if (iVar5 == 0x12) {
        *(undefined4 *)(iVar4 + 0xe4) = 0;
        *(undefined4 *)(iVar4 + 0xdc) = 0;
      }
    }
    iVar5 = *(int *)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e6c);
    if (iVar5 == 0xf) {
      *(undefined4 *)(iVar4 + 0xc4) = 0;
      *(uint *)(iVar4 + 0xc0) = -(uint)(*(uint *)(iVar4 + 0xc0) != uVar1) & uVar1;
    }
    else if (iVar5 == 0x10) {
      *(undefined4 *)(iVar4 + 0xc4) = 0;
      *(undefined4 *)(iVar4 + 0xbc) = 0;
      *(undefined4 *)(iVar4 + 200) = 0;
      *(uint *)(iVar4 + 0xc0) = -(uint)(*(uint *)(iVar4 + 0xc0) != uVar1) & uVar1;
    }
    else if (iVar5 == 0x13) {
      *(undefined4 *)(iVar4 + 0xe0) = 0;
      *(uint *)(iVar4 + 0xdc) = -(uint)(*(uint *)(iVar4 + 0xdc) != uVar1) & uVar1;
    }
    else {
      *(uint *)(iVar4 + 0x98 + (int)local_41c * 4) =
           -(uint)(*(uint *)(iVar4 + 0x98 + (int)local_41c * 4) != uVar1) & uVar1;
    }
    iVar5 = *(int *)(iVar4 + 0x204);
    if (0 < *(int *)(iVar5 + 0x6a0)) {
      *(undefined4 *)(iVar5 + 0x182c) = *(undefined4 *)(iVar5 + 0x6a0);
    }
    iVar5 = *(int *)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e6c);
    if (iVar5 == 0xe) {
      *(undefined4 *)(*(int *)(iVar4 + 0x204) + 0x6a0) = *(undefined4 *)(iVar4 + 0xd0);
    }
    else {
      if (iVar5 == 7) {
        uVar7 = *(undefined4 *)(iVar4 + 0xb4);
      }
      else {
        if (iVar5 != 8) goto LAB_101a1a85;
        uVar7 = *(undefined4 *)(iVar4 + 0xb8);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x204) + 0x6a0) = uVar7;
    }
LAB_101a1a85:
    iVar4 = *(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c);
    iVar5 = FUN_1014a730();
    *(undefined4 *)(iVar5 + 0xa80 + iVar10) = *(undefined4 *)(iVar4 + 0x3bc);
    iVar4 = FUN_1014a730();
    User::SetPawnResource((User *)(iVar4 + 0x87c + iVar10));
    piVar6 = (int *)FUN_10187a60();
    puVar2 = (undefined4 *)*piVar6;
    FUN_1014a730(local_420);
    uVar7 = FUN_1000ac70();
    pFVar8 = (FName *)(*(code *)*puVar2)(local_430,uVar7);
    puVar9 = FName::operator*(pFVar8);
    iVar4 = FUN_1014a730();
    appStrcpy((ushort *)(iVar4 + 0x1cc),puVar9);
    local_428 = 0;
    while (iVar4 = local_428, local_428 < 2) {
      iVar5 = *piVar6;
      FUN_1014a730(local_420);
      uVar7 = FUN_1000ac70();
      pFVar8 = (FName *)(**(code **)(iVar5 + 8))(local_430,uVar7);
      puVar9 = FName::operator*(pFVar8);
      iVar5 = FUN_1014a730();
      appStrcpy((ushort *)(iVar5 + 0x3cc + iVar4 * 0x200),puVar9);
      in_ECX = local_424;
      local_428 = iVar4 + 1;
    }
    piVar3 = *(int **)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) +
                               0x3c) + 0x3bc);
    if (piVar6[1] == 0) {
      if (piVar6[0x5a] < 0) {
        piVar3[0x608] = piVar3[0x608] & 0xfffffffd;
      }
      else {
        piVar3[0x608] = piVar3[0x608] | 2;
      }
    }
    iVar4 = *(int *)(*(int *)(in_ECX[0x90] + in_ECX[0x9f] * 4) + 0x1e6c);
    local_424 = piVar3;
    if (((iVar4 == 0x11) || (iVar4 == 0x12)) || (iVar4 == 0x13)) {
      iVar4 = 0;
      if ((local_41c == 2.38221e-44) || (local_41c == 2.66247e-44)) {
        iVar4 = 7;
      }
      else if (local_41c == 2.52234e-44) {
        iVar4 = 8;
      }
      iVar5 = FUN_1014a730();
      uVar1 = *(uint *)(*(int *)(iVar5 + 0xa80 + local_420 * 0x314) + 0x3bc + iVar4 * 4);
      local_420 = uVar1;
      if (uVar1 != 0) {
        iVar5 = FUN_1014a730();
        (**(code **)(**(int **)(*(int *)(iVar5 + 0x818) + 0x1ec) + 0x174))();
        iVar5 = FUN_1014a730();
        (**(code **)(**(int **)(*(int *)(iVar5 + 0x818) + 0x1f0) + 0x174))();
        iVar5 = FUN_1014a730();
        (**(code **)(**(int **)(*(int *)(iVar5 + 0x818) + 500) + 0x174))();
        iVar5 = FUN_1014a730();
        (**(code **)(**(int **)(*(int *)(iVar5 + 0x818) + 0x1f8) + 0x174))();
        iVar5 = FUN_1014a730();
        (**(code **)(**(int **)(*(int *)(iVar5 + 0x818) + 0x1fc) + 0x174))();
        iVar5 = FUN_1014a730();
        (**(code **)(**(int **)(*(int *)(iVar5 + 0x818) + 0x200) + 0x174))();
        local_408 = 0;
        _memset(local_406,0,0x3fe);
        if ((float)piVar3[iVar4 * 3 + 0x60e] == 0.0) {
          local_41c = *(float *)(uVar1 + 0x90);
        }
        else {
          local_41c = (float)piVar3[iVar4 * 3 + 0x60e];
        }
        appSprintf(&local_408,(ushort *)&DAT_1023d700,(double)local_41c);
        uVar11 = CONCAT44(1,&local_408);
        FUN_1014a730(&local_408,1);
        FUN_10016ea0(uVar11);
        if ((float)local_424[iVar4 * 3 + 0x60f] == 0.0) {
          local_41c = *(float *)(local_420 + 0x94);
        }
        else {
          local_41c = (float)local_424[iVar4 * 3 + 0x60f];
        }
        appSprintf(&local_408,(ushort *)&DAT_1023d700,(double)local_41c);
        uVar11 = CONCAT44(1,&local_408);
        FUN_1014a730(&local_408,1);
        FUN_10016ea0(uVar11);
        if ((float)piVar3[iVar4 * 3 + 0x610] == 0.0) {
          local_41c = *(float *)(local_420 + 0x98);
        }
        else {
          local_41c = (float)piVar3[iVar4 * 3 + 0x610];
        }
        appSprintf(&local_408,(ushort *)&DAT_1023d700,(double)local_41c);
        uVar11 = CONCAT44(1,&local_408);
        FUN_1014a730(&local_408);
        FUN_10016ea0(uVar11);
        appSprintf(&local_408,(ushort *)&DAT_10233718);
        uVar11 = CONCAT44(1,&local_408);
        FUN_1014a730(&local_408);
        FUN_10016ea0(uVar11);
        appSprintf(&local_408,(ushort *)&DAT_10233718);
        uVar11 = CONCAT44(1,&local_408);
        FUN_1014a730(&local_408);
        FUN_10016ea0(uVar11);
        appSprintf(&local_408,(ushort *)&DAT_10233718);
        uVar11 = CONCAT44(1,&local_408);
        FUN_1014a730(&local_408,1);
        FUN_10016ea0(uVar11);
      }
    }
  }
  local_40c = 0xffffffff;
LAB_101a1f41:
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)&local_408);
  return;
}


// ==== 101a1f70 Catch@101a1f70

void Catch_101a1f70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101a1f84 Catch@101a1f84

void Catch_101a1f84(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPawnView_InvenItemWnd::OnRButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101a1fb0 FUN_101a1fb0

undefined4 FUN_101a1fb0(void)

{
  User *this;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(in_ECX + 0x4618) + 0x324);
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x80c) + 0x200);
  if (uVar2 < 0x15) {
    if (iVar4 == 6) {
      iVar4 = 7;
    }
    this = (User *)(uVar2 * 0x314 + 0x87c + in_ECX);
    puVar1 = (undefined4 *)(in_ECX + 0x4620 + iVar4 * 4);
    iVar3 = FUN_10187a60(puVar1);
    if ((iVar3 == 0) || (iVar4 == 0)) {
      *(undefined4 *)(this + 0xb4) = 0;
      *(undefined4 *)(this + 0xb8) = 0;
      *(undefined4 *)(this + 0xd0) = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0xd4);
      if (iVar4 == 0xe) {
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined4 *)(this + 0xb8) = 0;
        *(undefined4 *)(this + *(int *)(iVar3 + 0xd4) * 4 + 0x98) = *puVar1;
      }
      else {
        if ((iVar4 == 7) || (iVar4 == 8)) {
          *(undefined4 *)(this + 0xd0) = 0;
        }
        *(undefined4 *)(this + *(int *)(iVar3 + 0xd4) * 4 + 0x98) = *puVar1;
      }
    }
    *(undefined4 *)(this + 0x204) =
         *(undefined4 *)
          (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
          0x3bc);
    User::SetPawnResource(this);
  }
  return 1;
}


