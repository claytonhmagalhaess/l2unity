// ==== 10070d2a Catch@10070d2a

void Catch_10070d2a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10070d3e Catch@10070d3e

void Catch_10070d3e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::PassToAllChildWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070d60 FUN_10070d60

void FUN_10070d60(void)

{
  HCURSOR pHVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)GUnicodeOS_exref == 0) {
      pHVar1 = LoadCursorA(DAT_10380814,(LPCSTR)(uint)(ushort)(&DAT_1034cc68)[iVar2 * 2]);
    }
    else {
      pHVar1 = LoadCursorW(DAT_10380814,(LPCWSTR)(uint)(ushort)(&DAT_1034cc68)[iVar2 * 2]);
    }
    *(HCURSOR *)(in_ECX + 0x78 + iVar2 * 4) = pHVar1;
    if (iVar2 == 0) {
      SetCursor(*(HCURSOR *)(in_ECX + 0x78));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  if (*(int *)GUnicodeOS_exref != 0) {
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    *(HCURSOR *)(in_ECX + 0x9c) = pHVar1;
    return;
  }
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  *(HCURSOR *)(in_ECX + 0x9c) = pHVar1;
  return;
}


// ==== 10070df0 FUN_10070df0

void FUN_10070df0(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x78);
  iVar1 = 9;
  do {
    DestroyCursor((HCURSOR)*puVar2);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(in_ECX + 0xac) != 0) {
    DestroyCursor(*(HCURSOR *)(in_ECX + 0xa8));
    *(undefined4 *)(in_ECX + 0xa8) = 0;
    *(undefined4 *)(in_ECX + 0xac) = 0;
  }
  return;
}


// ==== 10070e40 FUN_10070e40

void FUN_10070e40(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0xc))(1);
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  return;
}


// ==== 10070e60 FUN_10070e60

undefined4 FUN_10070e60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5dc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x70))(param_1,param_2);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10070ed4 Catch@10070ed4

void Catch_10070ed4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10070ee8 Catch@10070ee8

void Catch_10070ee8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::IsInterfaceFocused");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10070f10 FUN_10070f10

undefined4 FUN_10070f10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x58);
}


// ==== 10070f20 FUN_10070f20

int FUN_10070f20(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *in_ECX + -4 + (in_ECX[1] - param_1) * 4;
}


// ==== 10070f60 FUN_10070f60

void FUN_10070f60(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e5de8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCAbstractMain::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10001f30(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10070fc0 FUN_10070fc0

void FUN_10070fc0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e5e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f540(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCAbstractMain::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10071020 FUN_10071020

void FUN_10071020(byte param_1)

{
  void *in_ECX;
  
  FUN_10070f60();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return;
}


// ==== 10071050 FUN_10071050

float10 FUN_10071050(float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_2;
  uVar2 = (uint)param_2;
  if ((int)param_2 < 0) {
    uVar2 = -(int)param_2;
  }
  param_2 = 1.0;
  while( true ) {
    if ((uVar2 & 1) != 0) {
      param_2 = param_2 * param_1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar2 == 0) break;
    param_1 = param_1 * param_1;
  }
  if ((int)uVar1 < 0) {
    param_2 = 1.0 / param_2;
  }
  return (float10)param_2;
}


// ==== 100710a0 FUN_100710a0

undefined4 FUN_100710a0(undefined4 param_1)

{
  int iVar1;
  uint uStack_34;
  tagPOINT local_24 [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5e40;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)**(undefined4 **)
                                 (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x7c))();
  if (iVar1 == 0) {
    local_24[0].x = (LONG)(short)param_1;
    local_24[0].y = (LONG)(short)((uint)param_1 >> 0x10);
    ScreenToClient(DAT_103663b8,local_24);
    param_1 = CONCAT22((undefined2)local_24[0].y,(undefined2)local_24[0].x);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10071134 Catch@10071134

void Catch_10071134(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10071148 Catch@10071148

void Catch_10071148(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::CoordCompensate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10071170 FUN_10071170

void FUN_10071170(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  uint uStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5e60;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  local_8 = 0;
  if (param_1 == 0) {
    return;
  }
  piVar6 = *(int **)(param_1 + 4);
  if (piVar6 == (int *)0x0) {
    return;
  }
  ExceptionList = &local_10;
  local_20 = piVar6;
  iVar3 = FUN_1005ab70();
  if (iVar3 == 0) {
    ExceptionList = local_10;
    return;
  }
  uVar4 = (**(code **)(*piVar6 + 0x84))();
  if ((uVar4 & 2) == 0) {
    ExceptionList = local_10;
    return;
  }
  if ((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50ac) != 0)) {
    iVar3 = FUN_10058020();
    local_18 = 1;
    if (param_1 == iVar3) goto LAB_1007120f;
  }
  local_18 = 0;
LAB_1007120f:
  for (piVar6 = (int *)piVar6[0x13]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    piVar1 = *(int **)(*piVar6 + 4);
    if ((piVar1 != (int *)0x0) && (iVar3 = FUN_1005ab70(), iVar3 != 0)) {
      uVar4 = (**(code **)(*piVar1 + 0x84))();
      if (((uVar4 & 0x2000) == 0) || (iVar3 = FUN_1005e820(), iVar3 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      local_24 = uVar4 & 2;
      if ((local_24 != 0) || (bVar2)) {
        local_1c = 0;
        if ((local_18 != 0) &&
           (((iVar3 = (**(code **)(*local_20 + 0xf8))(*piVar6), iVar3 == 0 &&
             ((uVar4 & 0x2000000) == 0)) && (*(int *)GIsTransparencyMode_exref != 0)))) {
          local_1c = 1;
          *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x70) = 1;
        }
        uVar5 = (**(code **)(*piVar1 + 0xec))();
        FUN_10021500(uVar5);
        local_3c = 0;
        local_40 = 0;
        local_38 = 0;
        local_34 = 0;
        local_28 = FUN_10021d40(&local_40);
        if (local_24 == 0) {
          (**(code **)(*(int *)piVar1[0x14] + 0x68))(0xf,*(undefined4 *)(in_ECX + 0x34),0);
        }
        else {
          (**(code **)(*piVar1 + 0x68))();
          FUN_10071170(*piVar6);
        }
        if (local_28 == 0) {
          FUN_10021240();
        }
        else {
          FUN_10021be0(local_40,local_3c,local_38,local_34,1);
        }
        FUN_10021500(0xff);
        if (local_1c != 0) {
          *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x70) = 0;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10071397 Catch@10071397

void Catch_10071397(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100713ab Catch@100713ab

void Catch_100713ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::DrawChildWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100713d0 FUN_100713d0

void FUN_100713d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  FString *pFVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uStack_68;
  FString local_38 [12];
  FString local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101e5e92;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((((*(int *)GL2ShowWindowBox_exref != 0) || (*(int *)GL2ShowWindowName_exref != 0)) &&
      (param_1 != (int *)0x0)) && (piVar1 = *(int **)((int)param_1 + 4), piVar1 != (int *)0x0)) {
    iVar2 = FUN_1005ab70();
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*piVar1 + 0x84))();
      if ((uVar3 & 2) != 0) {
        if ((DAT_103663bc != 0) && (*(int *)(DAT_103663bc + 0x50ac) != 0)) {
          FUN_10058020();
        }
        param_1 = (int *)piVar1[0x13];
        do {
          if (param_1 == (int *)0x0) {
            ExceptionList = local_10;
            return;
          }
          piVar1 = *(int **)(*param_1 + 4);
          if (piVar1 != (int *)0x0) {
            iVar2 = FUN_1005ab70();
            if (iVar2 != 0) {
              uVar3 = (**(code **)(*piVar1 + 0x84))();
              if ((uVar3 & 2) != 0) {
                if (*(int *)GL2ShowWindowBox_exref != 0) {
                  FUN_10058770();
                  iVar2 = (**(code **)(*piVar1 + 0x74))();
                  iVar2 = (-(uint)(iVar2 != 0) & 0xffff0001) - 1;
                  if (*(int *)GL2ShowWindowBox_exref == 1) {
LAB_10071514:
                    uVar5 = FUN_101c19e0();
                    uVar15 = CONCAT44(iVar2,uVar5);
                    uVar5 = FUN_101c19e0(uVar5);
                    FUN_10020ef0(0,0,uVar5,uVar15);
                  }
                  else if (*(int *)GL2ShowWindowBox_exref == 2) {
                    iVar4 = (**(code **)(*piVar1 + 0x74))();
                    if (iVar4 != 0) goto LAB_10071514;
                  }
                }
                if (*(int *)GL2ShowWindowName_exref != 0) {
                  FUN_10057590();
                  local_8._0_1_ = 1;
                  iVar2 = FString::operator_int(local_2c);
                  if (iVar2 != 0) {
                    FUN_10058770();
                    iVar2 = (**(code **)(*piVar1 + 0x74))();
                    if (*(int *)GL2ShowWindowName_exref == 1) {
LAB_10071600:
                      uVar16 = 0xffffffff00000000;
                      uVar15 = 0;
                      uVar14 = 0;
                      uVar13 = 0;
                      uVar12 = 0;
                      uVar11 = 0;
                      uVar10 = 0;
                      uVar9 = 0;
                      uVar8 = 0;
                      uVar5 = 0;
                      puVar7 = FString::operator*(local_2c);
                      FUN_100217a0(0,0,(-(uint)(iVar2 != 0) & 0xfe0100) - 0xff0100,puVar7,uVar5,
                                   uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16);
                    }
                    else if (*(int *)GL2ShowWindowName_exref == 2) {
                      iVar4 = (**(code **)(*piVar1 + 0x74))();
                      if (iVar4 != 0) {
                        pFVar6 = (FString *)
                                 FString::Printf((ushort *)local_38,L"(%d,%d,%f,%f)",0,0,0,0);
                        local_8._0_1_ = 2;
                        FString::operator+=(local_2c,pFVar6);
                        local_8._0_1_ = 1;
                        FString::~FString(local_38);
                        goto LAB_10071600;
                      }
                    }
                  }
                  local_8 = (uint)local_8._1_3_ << 8;
                  FString::~FString(local_2c);
                }
                FUN_100713d0();
              }
            }
          }
          param_1 = (int *)param_1[1];
        } while( true );
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1007166c Catch@1007166c

void Catch_1007166c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10071680 Catch@10071680

void Catch_10071680(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::DrawWindowDebugInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100716a0 FUN_100716a0

void FUN_100716a0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5eb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (uVar3 = 0; uVar3 < *(uint *)(in_ECX + 0x38); uVar3 = uVar3 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + uVar3 * 4);
    if (*piVar1 != 0) {
      iVar2 = (**(code **)(*(int *)piVar1[1] + 0x74))();
      if (iVar2 != 0) {
        (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4) + 4) + 0x7c))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10071727 Catch@10071727

void Catch_10071727(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1007173b Catch@1007173b

void Catch_1007173b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::ClearFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10071760 FUN_10071760

undefined4 FUN_10071760(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_101c19e0();
  *param_1 = uVar1;
  uVar1 = FUN_101c19e0();
  *param_2 = uVar1;
  return 1;
}


// ==== 100717b0 FUN_100717b0

void FUN_100717b0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    piVar2 = *(int **)in_ECX;
    do {
      if (*piVar2 == *param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  iVar1 = FArray::Add(in_ECX,1,4);
  *(int *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 100717f0 FUN_100717f0

undefined4 * FUN_100717f0(UObject *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  UObject *this;
  int *in_ECX;
  undefined4 *puVar4;
  uint uStack_30;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101e5edb;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  local_8 = 0;
  if (6999 < (uint)in_ECX[0xe]) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_10004ed0(0x10);
  puVar4 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar4 = puVar1;
  }
  local_8 = local_8 & 0xffffff00;
  *puVar4 = 1;
  puVar4[1] = param_1;
  local_18 = puVar4;
  (**(code **)(*(int *)param_1 + 0x80))(param_2);
  puVar4[2] = in_ECX;
  if (param_3 == 0) {
    puVar4[3] = 0;
  }
  else {
    puVar4[3] = param_3;
  }
  FUN_100d9a30(&local_18);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  if ((puVar4[1] != 0) && (uVar2 = (**(code **)(*(int *)puVar4[1] + 0x84))(), (uVar2 & 0x1000) != 0)
     ) {
    (**(code **)(*in_ECX + 0x88))(puVar4);
  }
  if (puVar4[3] == 0) {
    FUN_100d9a30(&local_18);
  }
  iVar3 = UObject::IsA(param_1,(UClass *)&DAT_10367370);
  if (iVar3 != 0) {
    this = (UObject *)FUN_10010290(*(undefined4 *)(param_3 + 4));
    while (this != (UObject *)0x0) {
      iVar3 = UObject::IsA(this,(UClass *)&DAT_1035eaa0);
      if (iVar3 != 0) {
        (**(code **)(*(int *)this + 0x120))(0x20000);
        ExceptionList = local_10;
        return local_18;
      }
      this = (UObject *)FUN_10058f70();
    }
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1007194b Catch@1007194b

void Catch_1007194b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1007195f Catch@1007195f

void Catch_1007195f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::RegisterNWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10071980 FUN_10071980

undefined4 FUN_10071980(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(param_1 + 4));
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_1005ab70();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0xfc))(0);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x140))();
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*piVar1 + 0x70))(param_2,param_3);
          if (iVar2 != 0) {
            ExceptionList = local_10;
            return 1;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10071a38 Catch@10071a38

void Catch_10071a38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10071a4c Catch@10071a4c

void Catch_10071a4c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::IsCursoredWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10071a70 FUN_10071a70

undefined4 FUN_10071a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10010290(*(undefined4 *)(param_1 + 4));
  piVar3 = *(int **)(iVar1 + 0x48);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    piVar2 = (int *)FUN_10010290(*(undefined4 *)(*piVar3 + 4));
    if ((piVar2 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar2 + 0x68))(param_2,param_3,param_4), iVar1 != 0)) break;
    iVar1 = FUN_10071a70(*piVar3,param_2,param_3,param_4);
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return 1;
    }
    piVar3 = (int *)piVar3[2];
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10071b32 Catch@10071b32

void Catch_10071b32(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10071b46 Catch@10071b46

void Catch_10071b46(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::PassToOneChildWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10071b70 FUN_10071b70

void FUN_10071b70(UTexture *param_1,UTexture *param_2)

{
  uint3 uVar1;
  HBITMAP ho;
  uint *puVar2;
  HWND pHVar3;
  HDC pHVar4;
  HDC hdc;
  HBITMAP pHVar5;
  HICON pHVar6;
  int iVar7;
  byte *pbVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  UTexture *pUVar11;
  float10 fVar12;
  uint uStack_7c;
  ICONINFO local_6c;
  int local_50;
  int local_4c;
  UTexture *local_48;
  int local_44;
  BYTE *local_40;
  HBITMAP local_3c;
  int local_38;
  int local_34;
  BYTE *local_30;
  uchar *local_2c;
  int local_28;
  BYTE *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5f40;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  local_8 = 0;
  if ((param_1[0x578] != (UTexture)0x3) && (param_1[0x578] != (UTexture)0x7)) {
    return;
  }
  ExceptionList = &local_10;
  local_28 = in_ECX;
  puVar2 = &uStack_7c;
  if (*(int *)(in_ECX + 0xac) != 0) {
    DestroyCursor(*(HCURSOR *)(in_ECX + 0xa8));
    *(undefined4 *)(in_ECX + 0xa8) = 0;
    *(undefined4 *)(in_ECX + 0xac) = 0;
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  local_3c = *(HBITMAP *)GColorBits_exref;
  local_40 = (BYTE *)0x0;
  local_2c = (BYTE *)0x0;
  local_24 = (BYTE *)0x0;
  UTexture::ConvertDXT(param_1,0,0,0,&local_2c);
  iVar9 = *(int *)(param_1 + 0x580);
  iVar10 = *(int *)(param_1 + 0x584);
  local_38 = iVar9;
  local_18 = iVar10;
  if (param_2 != (UTexture *)0x0) {
    UTexture::ConvertDXT(param_2,0,0,0,(uchar **)&param_2);
    pHVar3 = GetDesktopWindow();
    pHVar4 = GetDC(pHVar3);
    GetDeviceCaps(pHVar4,0xc);
    hdc = CreateCompatibleDC((HDC)0x0);
    pHVar5 = CreateCompatibleBitmap(pHVar4,iVar9,local_18);
    local_3c = CreateCompatibleBitmap(pHVar4,iVar9,local_18);
    SelectObject(hdc,pHVar5);
    local_30 = local_2c;
    local_48 = param_2;
    pUVar11 = param_2;
    for (local_20 = 0; ho = local_3c, local_20 < local_18; local_20 = local_20 + 1) {
      for (local_1c = 0; local_1c < iVar9; local_1c = local_1c + 1) {
        if ((char)((ushort)*(undefined2 *)(pUVar11 + 2) >> 8) == '\0') {
          uVar1 = CONCAT21(CONCAT11((char)*(undefined2 *)local_30,
                                    (char)((ushort)*(undefined2 *)local_30 >> 8)),local_30[2]);
        }
        else {
          uVar1 = CONCAT21(CONCAT11((char)*(undefined2 *)pUVar11,
                                    (char)((ushort)*(undefined2 *)pUVar11 >> 8)),
                           (char)*(undefined2 *)(pUVar11 + 2));
        }
        SetPixel(hdc,local_1c,local_20,(uint)uVar1);
        local_30 = local_30 + 4;
        pUVar11 = pUVar11 + 4;
        iVar9 = local_38;
        local_48 = pUVar11;
      }
    }
    local_6c.fIcon = 0;
    local_6c.xHotspot = iVar9 / 2;
    local_6c.yHotspot = local_18 / 2;
    local_6c.hbmMask = local_3c;
    local_6c.hbmColor = pHVar5;
    pHVar6 = CreateIconIndirect(&local_6c);
    *(HICON *)(local_28 + 0xa8) = pHVar6;
    SetClassLongW(DAT_103663b8,-0xc,(LONG)pHVar6);
    SetCursor(*(HCURSOR *)(local_28 + 0xa8));
    DeleteObject(hdc);
    DeleteObject(pHVar5);
    DeleteObject(ho);
    ExceptionList = local_10;
    return;
  }
  iVar7 = (**(code **)(*(int *)**(undefined4 **)
                                 (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x7c))();
  if (iVar7 == 0) {
    pHVar3 = GetDesktopWindow();
    pHVar4 = GetDC(pHVar3);
    local_3c = (HBITMAP)GetDeviceCaps(pHVar4,0xc);
  }
  if (local_3c == (HBITMAP)0x20) {
    iVar7 = iVar10 * iVar9 * 4;
    local_24 = (BYTE *)FUN_10004ed0(iVar7);
    appMemset(local_24,0,iVar7);
  }
  else {
    if (local_3c == (HBITMAP)0x10) {
      local_24 = (BYTE *)FUN_10004ed0(((int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3) * iVar10);
      local_40 = (BYTE *)FUN_10004ed0(iVar10 * iVar9 * 2);
      pbVar8 = (byte *)FUN_10004ed0(4);
      param_1 = (UTexture *)0x0;
      for (local_44 = 0; local_44 < local_18; local_44 = local_44 + 1) {
        local_34 = 1;
        local_50 = 0;
        while (iVar10 = local_44, iVar9 = local_50, local_50 < local_38) {
          if (local_44 < local_18) {
            *(undefined4 *)pbVar8 = *(undefined4 *)(local_2c + (local_44 * local_38 + local_50) * 4)
            ;
          }
          else {
            appMemset(pbVar8,0,4);
          }
          if (pbVar8[3] == 0) {
            param_2 = (UTexture *)0x0;
          }
          else {
            param_2 = (UTexture *)
                      ((uint)(*pbVar8 >> 3) +
                      ((pbVar8[2] & 0xfffffff8) * 0x20 + (pbVar8[1] & 0xfffffffc)) * 8);
          }
          iVar10 = iVar10 * local_38;
          *(undefined2 *)(local_40 + (iVar10 + iVar9) * 2) = param_2._0_2_;
          if (pbVar8[3] == 0) {
            fVar12 = (float10)FUN_10071050(0x40000000,8 - local_34);
            local_4c = (int)ROUND((float)((uint)param_1 >> 0x18) + (float)fVar12);
            param_1 = (UTexture *)(local_4c << 0x18);
          }
          local_34 = local_34 + 1;
          if (local_34 == 9) {
            local_24[((int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3) +
                     ((int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3)] = param_1._3_1_;
            local_34 = 1;
            param_1 = (UTexture *)0x0;
          }
          local_50 = iVar9 + 1;
        }
      }
      FUN_10024ca0(pbVar8);
      iVar9 = local_38;
      iVar10 = local_18;
    }
    pHVar5 = local_3c;
    if (local_3c != (HBITMAP)0x20) {
      pHVar6 = CreateIcon((HINSTANCE)0x0,iVar9,iVar10,'\x01','\x10',local_24,local_40);
      *(HICON *)(local_28 + 0xa8) = pHVar6;
      goto LAB_10071fcd;
    }
  }
  pHVar5 = local_3c;
  pHVar6 = CreateIcon((HINSTANCE)0x0,iVar9,iVar10,'\x01',' ',local_24,local_2c);
  *(HICON *)(local_28 + 0xa8) = pHVar6;
LAB_10071fcd:
  *(undefined4 *)(local_28 + 0xac) = 1;
  SetClassLongW(DAT_103663b8,-0xc,*(LONG *)(local_28 + 0xa8));
  if (*(HCURSOR *)(local_28 + 0xa8) != (HCURSOR)0x0) {
    SetCursor(*(HCURSOR *)(local_28 + 0xa8));
  }
  FUN_10024ca0(local_2c);
  if (pHVar5 == (HBITMAP)0x10) {
    FUN_10024ca0(local_40);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10072036 Catch@10072036

void Catch_10072036(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_102a47f0);
}


// ==== 1007204a Catch@1007204a

void Catch_1007204a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::SetIconMoveCursor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072070 FUN_10072070

void FUN_10072070(int param_1,int param_2,undefined4 param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa4) != 0) {
    if (*(int *)GL2UseColorCursor_exref == 0) {
      SetCursor(*(HCURSOR *)(in_ECX + 0x9c));
      *(undefined4 *)(in_ECX + 0xa0) = 0xffffffff;
      return;
    }
    if (((param_1 != *(int *)(in_ECX + 0xa0)) || (param_1 != 4)) && (param_1 < 9)) {
      if ((param_1 == 4) && (param_2 != 0)) {
        FUN_10071b70(param_2,param_3);
        *(undefined4 *)(in_ECX + 0xa0) = 4;
        return;
      }
      SetCursor(*(HCURSOR *)(in_ECX + 0x78 + param_1 * 4));
      *(int *)(in_ECX + 0xa0) = param_1;
    }
  }
  return;
}


// ==== 10072100 FUN_10072100

int FUN_10072100(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5f60;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_10010290(*(undefined4 *)(param_1 + 4));
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = FUN_1005ab70();
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = FUN_1005e820();
  iVar3 = FUN_10071980(param_1,param_2,param_3);
  iVar4 = (**(code **)(*piVar1 + 0x178))();
  if ((iVar3 == 0) && (iVar4 == 0)) {
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  else if (iVar2 == 0) {
    for (puVar6 = (undefined4 *)piVar1[0x12]; puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[2]) {
      if ((param_4 == 0) || (iVar2 = (**(code **)(*piVar1 + 0xfc))(0), iVar2 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      iVar2 = FUN_10072100(*puVar6,param_2,param_3,uVar5);
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return iVar2;
      }
    }
    goto LAB_10072229;
  }
  uVar7 = 1;
  uVar5 = FUN_10058020(param_2,param_3,1);
  iVar2 = FUN_10072100(uVar5,param_2,param_3,uVar7);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return iVar2;
  }
LAB_10072229:
  if ((iVar3 != 0) && (param_4 != 0)) {
    iVar2 = FUN_10058020();
    ExceptionList = local_10;
    return iVar2;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10072256 Catch@10072256

void Catch_10072256(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1007226a Catch@1007226a

void Catch_1007226a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::FindPointingWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072290 FUN_10072290

void FUN_10072290(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != 0) {
    iVar1 = FArray::Add((FArray *)(in_ECX + 0x54),1,4);
    *(int *)(*(int *)(in_ECX + 0x54) + iVar1 * 4) = param_1;
  }
  return;
}


// ==== 100722c0 FUN_100722c0

void FUN_100722c0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5f80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_100717b0(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1007231f Catch@1007231f

void Catch_1007231f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10072333 Catch@10072333

void Catch_10072333(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::AddCapturedWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072350 FUN_10072350

void FUN_10072350(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5fa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 100); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x60),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 100723b7 Catch@100723b7

void Catch_100723b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100723cb Catch@100723cb

void Catch_100723cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::ClearCapturedWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100723f0 FUN_100723f0

void FUN_100723f0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e5fc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_100717b0(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1007244f Catch@1007244f

void Catch_1007244f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10072463 Catch@10072463

void Catch_10072463(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::AddStuckableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072480 FUN_10072480

void FUN_10072480(void)

{
  UObject *pUVar1;
  int iVar2;
  undefined4 uVar3;
  UObject *in_ECX;
  FName aFStack_3c [4];
  undefined4 uStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101e604c;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_38 = 0x100724b5;
  FUN_10070fc0();
  local_8 = 0;
  *(undefined ***)in_ECX = NCVirtualWndMain::vftable;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  uStack_38 = 0x100724d2;
  FArray::FArray((FArray *)(in_ECX + 0x3c));
  local_8._0_1_ = 2;
  uStack_38 = 0x100724e2;
  FArray::FArray((FArray *)(in_ECX + 0x48));
  local_8._0_1_ = 4;
  uStack_38 = 0x100724f2;
  FArray::FArray((FArray *)(in_ECX + 0x54));
  local_8._0_1_ = 6;
  uStack_38 = 0x10072502;
  FArray::FArray((FArray *)(in_ECX + 0x60));
  local_8._0_1_ = 8;
  uStack_38 = 0x10072512;
  FArray::FArray((FArray *)(in_ECX + 0x6c));
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 1;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  uStack_38 = 0;
  FName::FName(aFStack_3c,0);
  pUVar1 = UObject::GetOuter(in_ECX);
  iVar2 = FUN_10007c10(0x9c,pUVar1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_38 = 0x1007256c;
    uVar3 = FUN_10023090();
  }
  *(undefined4 *)(in_ECX + 0x34) = uVar3;
  uStack_38 = 0x1007257a;
  FUN_10021fc0();
  *(undefined4 *)(in_ECX + 0xa4) = 1;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100725a7 Catch@100725a7

void Catch_100725a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100725bb Catch@100725bb

void Catch_100725bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::NCVirtualWndMain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100725e0 FUN_100725e0

void FUN_100725e0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  puStack_c = &LAB_101e6070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_100562c0(&param_1);
  }
  FUN_100562c0(&param_1);
  FUN_100562c0(&param_1);
  (**(code **)(**(int **)(iVar1 + 4) + 0x68))(2,0,0);
  iVar2 = FUN_100562c0(&param_1);
  if (0 < iVar2) {
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + -1;
  }
  FUN_10024ca0(iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10072690 Catch@10072690

void Catch_10072690(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100726a4 Catch@100726a4

void Catch_100726a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::UnRegisterNWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100726d0 FUN_100726d0

undefined4
FUN_100726d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e6090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10072100(param_1,param_2,param_3,1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_10010290(*(undefined4 *)(iVar1 + 4));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x78))();
      if ((param_4 != 0x201) && (param_4 != 0x204)) {
        (**(code **)(*piVar2 + 0x68))(param_4,param_5,param_6);
        ExceptionList = local_10;
        return 1;
      }
      uVar3 = (**(code **)(*piVar2 + 0x68))(param_4,param_5,param_6);
      ExceptionList = local_10;
      return uVar3;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100727ac Catch@100727ac

void Catch_100727ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100727c0 Catch@100727c0

void Catch_100727c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::SetFocusingWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100727e0 FUN_100727e0

int FUN_100727e0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e60b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8 = 0;
  if (((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x74))(), iVar1 == 0)) {
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x48);
    while( true ) {
      if (puVar5 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
      iVar6 = FUN_100727e0(*puVar5,param_2,param_3,param_4);
      if (iVar6 != 0) break;
      puVar5 = (undefined4 *)puVar5[2];
    }
    ExceptionList = local_10;
    return iVar6;
  }
  if (param_2 < 0x20b) {
    if (param_2 == 0x20a) {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(0x20a,param_3,param_4);
      if (iVar1 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      piVar2 = (int *)FUN_10010290(*(undefined4 *)(param_1 + 4));
      if ((piVar2 != (int *)0x0) &&
         (uVar3 = (**(code **)(*piVar2 + 0x84))(), (uVar3 | 0x20000) != 0)) {
        iVar1 = FUN_10071a70(param_1,0x20a,param_3,param_4);
        iVar6 = 0;
        if (iVar1 != 0) {
          ExceptionList = local_10;
          return iVar1;
        }
      }
      while( true ) {
        if (iVar6 != 0) {
          ExceptionList = local_10;
          return iVar6;
        }
        param_1 = *(int *)(param_1 + 0xc);
        if (param_1 == 0) break;
        iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(0x20a,param_3,param_4);
      }
      ExceptionList = local_10;
      return 0;
    }
    if ((param_2 == 0x51) || ((0x10c < param_2 && (param_2 < 0x110)))) {
LAB_10072945:
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x88))();
      piVar2 = *(int **)(param_1 + 4);
      if (iVar1 != 0) {
        if (((param_2 == 0x282) && (piVar2 != (int *)0x0)) &&
           (iVar1 = (**(code **)(*piVar2 + 0x90))(), iVar1 != 0)) {
          param_4 = 0xffffffff;
        }
        for (piVar2 = (int *)piVar2[0x12]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          iVar1 = (**(code **)(**(int **)(*piVar2 + 4) + 0x8c))();
          if (iVar1 != 0) {
            for (piVar4 = *(int **)(*(int *)(*piVar2 + 4) + 0x48); piVar4 != (int *)0x0;
                piVar4 = (int *)piVar4[2]) {
              iVar1 = (**(code **)(**(int **)(*piVar4 + 4) + 0x68))(param_2,param_3,param_4);
              if (iVar1 != 0) {
                iVar6 = 1;
              }
            }
          }
        }
        ExceptionList = local_10;
        return iVar6;
      }
      iVar6 = (**(code **)(*piVar2 + 0x68))(param_2,param_3,param_4);
      goto LAB_1007287f;
    }
  }
  else if ((0x280 < param_2) && ((param_2 < 0x285 || (param_2 == 0x286)))) goto LAB_10072945;
  iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(param_2,param_3,param_4);
LAB_1007287f:
  if (iVar6 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10072a35 Catch@10072a35

void Catch_10072a35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10072a49 Catch@10072a49

void Catch_10072a49(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::PassToFocusedWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072a70 FUN_10072a70

undefined4
FUN_10072a70(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_4;
  puStack_c = &LAB_101e60d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  if (param_5 == 0) {
    for (; iVar4 < *(int *)(in_ECX + 100); iVar4 = iVar4 + 1) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x60) + iVar4 * 4);
      if (iVar1 == 0) {
        appFailAssert("hCapturedWnd",".\\Src\\VitualMain.cpp",0x176);
      }
      (**(code **)(**(int **)(iVar1 + 4) + 0x68))(param_2,param_3,uVar2);
    }
    iVar4 = FUN_10072100(param_1,(int)(short)uVar2,(int)(short)((uint)uVar2 >> 0x10),1);
    if ((iVar4 != 0) &&
       (piVar3 = (int *)FUN_10010290(*(undefined4 *)(iVar4 + 4)), piVar3 != (int *)0x0)) {
      if ((param_3 & 1) == 0) {
        (**(code **)(*piVar3 + 0x68))(param_2,param_3,uVar2);
      }
      else {
        param_2 = 0;
        param_3 = 0;
        iVar4 = FUN_10147a60(&param_2,&param_3);
        if (iVar4 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        iVar4 = (**(code **)(*piVar3 + 0x68))(0x503,param_2,param_3);
        if (iVar4 == 0) {
          ExceptionList = local_10;
          return 0;
        }
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10072bb6 Catch@10072bb6

void Catch_10072bb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10072bca Catch@10072bca

void Catch_10072bca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::PassToMouseMoveWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072bf0 FUN_10072bf0

undefined4 FUN_10072bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e60f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10072100(param_1,(int)(short)param_4,(int)(short)((uint)param_4 >> 0x10),1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))(param_2,param_3,param_4);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10072c8d Catch@10072c8d

void Catch_10072c8d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10072ca1 Catch@10072ca1

void Catch_10072ca1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::PassToCursorWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072cc0 FUN_10072cc0

undefined4 FUN_10072cc0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e6110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  local_8 = 0;
  iVar1 = FUN_10010290(*(undefined4 *)(param_3 + 4));
  if (iVar1 != 0) {
    for (; iVar2 < *(int *)(in_ECX + 0x4c); iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + iVar2 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        iVar1 = FUN_10072100(iVar1,param_1,param_2,1);
        if (param_3 == iVar1) {
          ExceptionList = local_10;
          return 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10072d67 Catch@10072d67

void Catch_10072d67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10072d7b Catch@10072d7b

void Catch_10072d7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::IsTopWindowAt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072da0 FUN_10072da0

void FUN_10072da0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  undefined4 uVar5;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e6130;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014b8c0();
  iVar2 = param_1;
  if (((iVar1 == 0) || ((*(byte *)(iVar1 + 0x960) & 2) == 0)) && (param_1 != 0)) {
    FUN_10071760(&local_18,&param_1);
    iVar2 = FUN_10072100(iVar2,local_18,param_1,1);
    if ((iVar2 != 0) &&
       (piVar3 = (int *)FUN_10010290(*(undefined4 *)(iVar2 + 4)), piVar3 != (int *)0x0)) {
      uVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x84))();
      if (((uVar4 & 2) == 0) ||
         (uVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x84))(), (uVar4 & 0x20) == 0)) {
        do {
          do {
            piVar3 = (int *)FUN_10058f70();
            if (piVar3 == (int *)0x0) {
              ExceptionList = local_10;
              return;
            }
            iVar2 = FUN_10058020();
            uVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x84))();
          } while ((uVar4 & 2) == 0);
          iVar2 = FUN_10058020();
          uVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x84))();
        } while ((uVar4 & 0x20) == 0);
        iVar2 = *piVar3;
        uVar5 = *(undefined4 *)(in_ECX + 0x34);
      }
      else {
        iVar2 = *piVar3;
        uVar5 = *(undefined4 *)(in_ECX + 0x34);
      }
      (**(code **)(iVar2 + 0x68))(0x50a,uVar5,0);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10072ed3 Catch@10072ed3

void Catch_10072ed3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10072ee7 Catch@10072ee7

void Catch_10072ee7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::PostDrawChildWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10072f10 FUN_10072f10

undefined4 FUN_10072f10(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  uint uStack_38;
  tagPOINT local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e6150;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  local_8 = 0;
  ppvVar2 = &local_10;
  if (param_2 < 0x201) {
    if (param_2 == 0x200) {
      ExceptionList = &local_10;
      local_14 = (undefined1 *)&uStack_38;
      iVar8 = (**(code **)(*(int *)**(undefined4 **)
                                     (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x7c)
              )();
      if (iVar8 != 0) {
        local_1c.x = (LONG)(short)param_4;
        local_1c.y = (LONG)(short)((uint)param_4 >> 0x10);
        ClientToScreen(DAT_103663b8,&local_1c);
        param_4 = CONCAT22((undefined2)local_1c.y,(undefined2)local_1c.x);
      }
      if (param_1 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x84))();
      if ((uVar7 & 2) == 0) {
        ExceptionList = local_10;
        return 0;
      }
      FUN_10072a70(param_1,0x200,param_3,param_4,0);
      ExceptionList = local_10;
      return 0;
    }
    if (0x51 < param_2) {
      puVar4 = &uStack_38;
      switch(param_2) {
      case 0x100:
      case 0x101:
      case 0x102:
        goto switchD_10072fac_caseD_100;
      default:
        goto switchD_10072fac_caseD_103;
      case 0x10d:
      case 0x10e:
      case 0x10f:
        goto switchD_10072fac_caseD_10d;
      }
    }
    if (param_2 == 0x51) {
switchD_10072fac_caseD_10d:
      if (param_1 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        return 0;
      }
      ExceptionList = &local_10;
      local_14 = (undefined1 *)&uStack_38;
      uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x84))();
      if ((uVar7 & 2) == 0) {
        ExceptionList = local_10;
        return 0;
      }
      iVar8 = FUN_100727e0(param_1,param_2,param_3,param_4);
      goto LAB_100730cf;
    }
    puVar4 = &uStack_38;
    if (param_2 != 3) {
      if (param_2 != 0x20) {
        return 0;
      }
      if (*(int *)GL2UseColorCursor_exref == 0) {
        return 0;
      }
      if ((short)param_4 != 1) {
        return 0;
      }
      return 1;
    }
  }
  else {
    puVar3 = &uStack_38;
    puVar4 = &uStack_38;
    switch(param_2) {
    case 0x201:
    case 0x203:
    case 0x206:
      ExceptionList = &local_10;
      local_14 = (undefined1 *)&uStack_38;
      uVar5 = FUN_100710a0(param_4);
      local_1c.y = (LONG)(short)uVar5;
      if (param_1 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x84))();
      if ((uVar7 & 2) == 0) {
        ExceptionList = local_10;
        return 0;
      }
      iVar8 = FUN_100726d0(param_1,local_1c.y,(int)(short)((uint)uVar5 >> 0x10),param_2,param_3,
                           uVar5);
      goto LAB_100730cf;
    case 0x202:
      if (*(int *)(in_ECX + 0xb8) == 0) {
        ExceptionList = &local_10;
        local_14 = (undefined1 *)&uStack_38;
        FUN_1003f960();
        iVar8 = FUN_10147a60(&local_1c.y,0);
        ppvVar2 = ExceptionList;
        puVar3 = (uint *)local_14;
        if (iVar8 != 0) {
          iVar8 = *(int *)(in_ECX + 0x4c);
          while (iVar8 = iVar8 + -1, -1 < iVar8) {
            iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + iVar8 * 4);
            if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) &&
               (iVar6 = (**(code **)(**(int **)(iVar1 + 4) + 0xfc))(0), iVar6 != 0)) {
              uVar5 = FUN_100710a0(param_4);
              FUN_10072bf0(iVar1,0x505,local_1c.y,uVar5);
            }
          }
          FUN_10147950(0,0,0,0);
          ppvVar2 = ExceptionList;
          puVar3 = (uint *)local_14;
        }
      }
      else {
        ExceptionList = &local_10;
        *(undefined4 *)(in_ECX + 0xb8) = 0;
        ppvVar2 = ExceptionList;
        puVar3 = &uStack_38;
      }
    case 0x205:
      local_14 = (undefined1 *)puVar3;
      ExceptionList = ppvVar2;
      param_4 = FUN_100710a0(param_4);
      ppvVar2 = ExceptionList;
      puVar4 = (uint *)local_14;
      break;
    case 0x204:
      ExceptionList = &local_10;
      uVar5 = FUN_100710a0(param_4);
      local_1c.y = (LONG)(short)uVar5;
      if ((((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
          (uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x84))(), (uVar7 & 2) != 0)) &&
         (iVar8 = FUN_100726d0(param_1,local_1c.y,(int)(short)((uint)uVar5 >> 0x10),param_2,param_3,
                               uVar5), iVar8 != 0)) {
        ExceptionList = local_10;
        return 1;
      }
      if (*(int *)GL2UseColorCursor_exref == 0) {
        ExceptionList = local_10;
        return 0;
      }
      FUN_1003f960();
      SetCursor(*(HCURSOR *)(in_ECX + 0x78));
      ExceptionList = local_10;
      return 0;
    default:
      goto switchD_10072fac_caseD_103;
    case 0x20a:
      break;
    case 0x281:
    case 0x282:
    case 0x283:
    case 0x284:
    case 0x286:
      goto switchD_10072fac_caseD_10d;
    }
  }
switchD_10072fac_caseD_100:
  local_14 = (undefined1 *)puVar4;
  ExceptionList = ppvVar2;
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x84))(), (uVar7 & 2) != 0)) {
    iVar8 = FUN_100727e0(param_1,param_2,param_3,param_4);
LAB_100730cf:
    if (iVar8 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
switchD_10072fac_caseD_103:
  ExceptionList = local_10;
  return 0;
}


// ==== 10073299 Catch@10073299

void Catch_10073299(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100732ad Catch@100732ad

void Catch_100732ad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::DispatchWndModalMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10073390 FUN_10073390

int FUN_10073390(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e6170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  local_8 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x4c) <= iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x48) + iVar3 * 4);
    if (((*piVar1 != 0) && (iVar2 = *piVar1, *(int *)(iVar2 + 4) != 0)) &&
       (iVar2 = FUN_10072100(iVar2,param_1,param_2,1), iVar2 != 0)) break;
    iVar3 = iVar3 + 1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 10073410 Catch@10073410

void Catch_10073410(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10073424 Catch@10073424

void Catch_10073424(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::FindNWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10073450 FUN_10073450

void FUN_10073450(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_100562c0(&param_1);
    if (0 < *(int *)(in_ECX + 0x58)) {
      if (*(int *)(in_ECX + 0x58) < 1) {
        appFailAssert("c<ArrayNum",
                      "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198)
        ;
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x54) + -4 + *(int *)(in_ECX + 0x58) * 4) +
                             4) + 0x78))();
    }
  }
  return;
}


// ==== 100734b0 FUN_100734b0

void FUN_100734b0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e6190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_100562c0(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1007350f Catch@1007350f

void Catch_1007350f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10073523 Catch@10073523

void Catch_10073523(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::DeleteCapturedWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10073540 FUN_10073540

void FUN_10073540(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101e61b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_100562c0(&param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1007359f Catch@1007359f

void Catch_1007359f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100735b3 Catch@100735b3

void Catch_100735b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::DeleteStuckableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100735d0 FUN_100735d0

void FUN_100735d0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101e620f;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCVirtualWndMain::vftable;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 4;
  FUN_10002480(uVar1);
  local_4._0_1_ = 3;
  FUN_10002480();
  local_4._0_1_ = 2;
  FUN_10002480();
  local_4._0_1_ = 1;
  FUN_10002480();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10002480();
  local_4 = 0xffffffff;
  FUN_10070f60();
  ExceptionList = local_c;
  return;
}


// ==== 10073680 FUN_10073680

void FUN_10073680(byte param_1)

{
  void *in_ECX;
  
  FUN_100735d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc4);
  }
  return;
}


// ==== 100736b0 FUN_100736b0

undefined4 FUN_100736b0(uint param_1,int param_2,int *param_3)

{
  short sVar1;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int in_ECX;
  uint local_50;
  tagPOINT local_38;
  tagPOINT local_30 [2];
  int *local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  short sVar2;
  
  puStack_c = &LAB_101e6230;
  local_10 = ExceptionList;
  local_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_50;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = FUN_10070ac0(param_1);
  if (iVar3 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  if ((param_1 != 0xf) && (0 < *(int *)(in_ECX + 0x58))) {
    puVar4 = (undefined4 *)FUN_10070f20(0);
    FUN_10072f10(*puVar4,param_1,param_2,param_3);
    ExceptionList = local_10;
    return 1;
  }
  sVar1 = (short)((uint)param_3 >> 0x10);
  sVar2 = (short)param_3;
  if (0x200 < param_1) {
    if (0x20a < param_1) {
      if (0x286 < param_1) {
        if (param_1 != 0x511) {
          ExceptionList = local_10;
          return 0;
        }
        for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x4c); iVar3 = iVar3 + 1) {
          iVar5 = *(int *)(*(int *)(in_ECX + 0x48) + iVar3 * 4);
          if (iVar5 != 0) {
            local_18 = iVar3;
            FUN_10070ca0(iVar5,0x511,param_2,param_3);
          }
        }
        ExceptionList = local_10;
        return 0;
      }
      if (param_1 != 0x286) {
        if (param_1 < 0x281) {
          ExceptionList = local_10;
          return 0;
        }
        if (0x284 < param_1) {
          ExceptionList = local_10;
          return 0;
        }
      }
switchD_10073769_caseD_51:
      local_18 = *(int *)(in_ECX + 0x4c);
      do {
        local_18 = local_18 + -1;
        if (local_18 < 0) {
          ExceptionList = local_10;
          return 0;
        }
        iVar3 = local_18 * 4;
        piVar6 = (int *)(iVar3 + *(int *)(in_ECX + 0x48));
      } while (((*piVar6 == 0) || (piVar6 = *(int **)(*piVar6 + 4), piVar6 == (int *)0x0)) ||
              ((uVar9 = (**(code **)(*piVar6 + 0x84))(), (uVar9 & 2) == 0 ||
               (iVar3 = FUN_100727e0(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3),param_1,
                                     param_2,param_3), iVar3 == 0))));
      ExceptionList = local_10;
      return 1;
    }
    if (param_1 == 0x20a) goto switchD_10073769_caseD_3;
    switch(param_1) {
    case 0x201:
      if (*(int *)(in_ECX + 0xb8) != 0) {
        ExceptionList = local_10;
        return 1;
      }
      FUN_10072350();
      uVar8 = FUN_100710a0(param_3);
      local_18 = *(int *)(in_ECX + 0x4c);
      while (local_18 = local_18 + -1, -1 < local_18) {
        iVar3 = local_18 * 4;
        piVar6 = (int *)(iVar3 + *(int *)(in_ECX + 0x48));
        if (((*piVar6 != 0) && (piVar6 = *(int **)(*piVar6 + 4), piVar6 != (int *)0x0)) &&
           ((uVar9 = (**(code **)(*piVar6 + 0x84))(), (uVar9 & 2) != 0 &&
            (iVar3 = FUN_100726d0(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3),(int)(short)uVar8
                                  ,(int)(short)((uint)uVar8 >> 0x10),param_1,param_2,uVar8),
            iVar3 != 0)))) {
          ExceptionList = local_10;
          return 1;
        }
      }
      break;
    case 0x202:
      if (*(int *)(in_ECX + 0xb8) == 0) {
        FUN_1003f960();
        iVar3 = FUN_10147a60(&local_1c,&local_20);
        if (iVar3 != 0) {
          iVar3 = *(int *)(in_ECX + 0x4c);
          do {
            do {
              iVar3 = iVar3 + -1;
              local_18 = iVar3;
              if (iVar3 < 0) {
                (**(code **)(*local_20 + 0x68))
                          (0x506,local_1c,*(undefined4 *)(DAT_103663bc + 0x50ac));
                goto LAB_10073caa;
              }
              iVar5 = *(int *)(*(int *)(in_ECX + 0x48) + iVar3 * 4);
            } while (((iVar5 == 0) || (*(int *)(iVar5 + 4) == 0)) ||
                    (iVar7 = (**(code **)(**(int **)(iVar5 + 4) + 0xfc))(0), iVar7 == 0));
            uVar8 = FUN_100710a0(param_3);
            iVar5 = FUN_10072bf0(iVar5,0x505,local_1c,uVar8);
          } while (iVar5 == 0);
          iVar3 = FUN_10147a60(&local_1c,&local_20);
          if (iVar3 != 0) {
            uVar8 = FUN_10147b40();
            (**(code **)(*local_20 + 0x68))(0x506,local_1c,uVar8);
          }
LAB_10073caa:
          FUN_10147950(0,0,0,0);
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0xb8) = 0;
      }
    case 0x205:
      if (*(int *)(in_ECX + 0xb8) != 0) {
        *(undefined4 *)(in_ECX + 0xb8) = 0;
      }
      goto switchD_1007382c_caseD_102;
    case 0x203:
    case 0x206:
      *(undefined4 *)(in_ECX + 0xb8) = 1;
      iVar3 = (**(code **)(*(int *)**(undefined4 **)
                                     (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x7c)
              )();
      if (iVar3 != 0) {
        local_1c = param_3;
        local_38.x = (LONG)sVar2;
        local_38.y = (LONG)sVar1;
        ClientToScreen(DAT_103663b8,&local_38);
        param_3 = (int *)CONCAT22((undefined2)local_38.y,(undefined2)local_38.x);
      }
      local_18 = *(int *)(in_ECX + 0x4c);
      while (local_18 = local_18 + -1, -1 < local_18) {
        iVar3 = local_18 * 4;
        piVar6 = (int *)(iVar3 + *(int *)(in_ECX + 0x48));
        if (((*piVar6 != 0) && (piVar6 = *(int **)(*piVar6 + 4), piVar6 != (int *)0x0)) &&
           ((uVar9 = (**(code **)(*piVar6 + 0x84))(), (uVar9 & 2) != 0 &&
            (iVar3 = FUN_100726d0(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3),
                                  (int)(short)param_3,(int)(short)((uint)param_3 >> 0x10),param_1,
                                  param_2,param_3), iVar3 != 0)))) {
          ExceptionList = local_10;
          return 1;
        }
      }
      break;
    case 0x204:
      uVar8 = FUN_100710a0(param_3);
      local_18 = *(int *)(in_ECX + 0x4c);
      while (local_18 = local_18 + -1, -1 < local_18) {
        iVar3 = local_18 * 4;
        piVar6 = (int *)(*(int *)(in_ECX + 0x48) + iVar3);
        if ((((*piVar6 != 0) && (piVar6 = *(int **)(*piVar6 + 4), piVar6 != (int *)0x0)) &&
            (uVar9 = (**(code **)(*piVar6 + 0x84))(), (uVar9 & 2) != 0)) &&
           (iVar3 = FUN_100726d0(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3),(int)(short)uVar8,
                                 (int)(short)((uint)uVar8 >> 0x10),param_1,param_2,uVar8),
           iVar3 != 0)) {
          ExceptionList = local_10;
          return 1;
        }
      }
      if (*(int *)GL2UseColorCursor_exref != 0) {
        FUN_1003f960();
        SetCursor(*(HCURSOR *)(in_ECX + 0x78));
      }
      if (DAT_1036c674 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x7c))();
      DAT_1036c674 = 0;
      ExceptionList = local_10;
      return 0;
    default:
      goto switchD_10073769_caseD_4;
    }
    if (DAT_1036c674 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    (**(code **)(**(int **)(DAT_1036c674 + 4) + 0x7c))();
    DAT_1036c674 = 0;
    ExceptionList = local_10;
    return 0;
  }
  if (param_1 == 0x200) {
    iVar3 = FUN_1014b8c0();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x960) & 2) != 0)) {
      ExceptionList = local_10;
      return 0;
    }
    iVar3 = (**(code **)(*(int *)**(undefined4 **)
                                   (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x7c))
                      ();
    if (iVar3 != 0) {
      local_20 = param_3;
      local_30[0].x = (LONG)sVar2;
      local_30[0].y = (LONG)sVar1;
      ClientToScreen(DAT_103663b8,local_30);
      param_3 = (int *)CONCAT22((undefined2)local_30[0].y,(undefined2)local_30[0].x);
    }
    iVar3 = (int)(short)((uint)param_3 >> 0x10);
    if ((*(int *)(in_ECX + 0xbc) == (int)(short)param_3) && (*(int *)(in_ECX + 0xc0) == iVar3)) {
      ExceptionList = local_10;
      return 0;
    }
    *(int *)(in_ECX + 0xbc) = (int)(short)param_3;
    *(int *)(in_ECX + 0xc0) = iVar3;
    *(undefined4 *)(in_ECX + 0xb4) = 1;
    local_18 = *(int *)(in_ECX + 0x4c);
    while (local_18 = local_18 + -1, -1 < local_18) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x48) + local_18 * 4);
      if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) &&
          (iVar5 = (**(code **)(**(int **)(iVar3 + 4) + 0xfc))(0), iVar5 != 0)) &&
         (iVar3 = FUN_10072a70(iVar3,0x200,param_2,param_3,0), iVar3 == 0)) {
        *(undefined4 *)(in_ECX + 0xb4) = 0;
      }
    }
    ExceptionList = local_10;
    return 0;
  }
  if (0x100 < param_1) {
    switch(param_1) {
    case 0x101:
      goto switchD_10073769_caseD_3;
    case 0x102:
      goto switchD_1007382c_caseD_102;
    default:
switchD_10073769_caseD_4:
      ExceptionList = local_10;
      return 0;
    case 0x10d:
    case 0x10e:
    case 0x10f:
      goto switchD_10073769_caseD_51;
    }
  }
  if (param_1 != 0x100) {
    switch(param_1) {
    case 3:
      goto switchD_10073769_caseD_3;
    default:
      ExceptionList = local_10;
      return 0;
    case 0xf:
      for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x4c); iVar3 = iVar3 + 1) {
        piVar6 = *(int **)(*(int *)(*(int *)(in_ECX + 0x48) + iVar3 * 4) + 4);
        if ((piVar6 != (int *)0x0) &&
           (local_18 = iVar3, uVar9 = (**(code **)(*piVar6 + 0x84))(), (uVar9 & 2) != 0)) {
          (**(code **)(*piVar6 + 0x68))(param_1,*(undefined4 *)(in_ECX + 0x34),param_3);
          FUN_10071170(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3 * 4));
          FUN_10072da0(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3 * 4));
          *(undefined4 *)(in_ECX + 0xb0) = 0;
          FUN_100713d0(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3 * 4));
        }
      }
      ExceptionList = local_10;
      return 0;
    case 0x20:
      if (*(int *)GL2UseColorCursor_exref == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (sVar2 != 1) {
        ExceptionList = local_10;
        return 0;
      }
      FUN_10072070(*(undefined4 *)(in_ECX + 0xa0),0,0);
      ExceptionList = local_10;
      return 1;
    case 0x51:
      goto switchD_10073769_caseD_51;
    }
  }
switchD_1007382c_caseD_102:
  if (param_2 == 0x11) {
    ExceptionList = local_10;
    return 0;
  }
switchD_10073769_caseD_3:
  uVar8 = FUN_100710a0(param_3);
  local_18 = *(int *)(in_ECX + 0x4c);
  do {
    local_18 = local_18 + -1;
    if (local_18 < 0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar3 = local_18 * 4;
    piVar6 = (int *)(iVar3 + *(int *)(in_ECX + 0x48));
  } while ((((*piVar6 == 0) || (piVar6 = *(int **)(*piVar6 + 4), piVar6 == (int *)0x0)) ||
           (uVar9 = (**(code **)(*piVar6 + 0x84))(), (uVar9 & 2) == 0)) ||
          (iVar3 = FUN_100727e0(*(undefined4 *)(*(int *)(in_ECX + 0x48) + iVar3),param_1,param_2,
                                uVar8), iVar3 == 0));
  ExceptionList = local_10;
  return 1;
}


// ==== 10073e17 Catch@10073e17

void Catch_10073e17(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10073e2b Catch@10073e2b

void Catch_10073e2b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCVirtualWndMain::DispatchWndMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10073ef0 FLVTexture::operator=

/* public: struct FLVTexture & __thiscall FLVTexture::operator=(struct FLVTexture const &) */

FLVTexture * __thiscall FLVTexture::operator=(FLVTexture *this,FLVTexture *param_1)

{
  int iVar1;
  FLVTexture *pFVar2;
  
                    /* 0x73ef0  508  ??4FLVTexture@@QAEAAU0@ABU0@@Z */
  pFVar2 = this;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 10073f10 FINT64::operator=

/* public: struct FINT64 & __thiscall FINT64::operator=(struct FINT64 const &) */

FINT64 * __thiscall FINT64::operator=(FINT64 *this,FINT64 *param_1)

{
                    /* 0x73f10  504  ??4FINT64@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10073f30 FUserInfo::~FUserInfo

/* public: __thiscall FUserInfo::~FUserInfo(void) */

void __thiscall FUserInfo::~FUserInfo(FUserInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x73f30  231  ??1FUserInfo@@QAE@XZ */
  puStack_8 = &LAB_101e6268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x10));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10073f90 FUserInfo::FUserInfo

/* public: __thiscall FUserInfo::FUserInfo(struct FUserInfo const &) */

FUserInfo * __thiscall FUserInfo::FUserInfo(FUserInfo *this,FUserInfo *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x73f90  35  ??0FUserInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e62a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
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
  *(uint *)(this + 0xcc) =
       *(uint *)(this + 0xcc) ^ (*(uint *)(this + 0xcc) ^ *(uint *)(param_1 + 0xcc)) & 1;
  uVar1 = (*(uint *)(param_1 + 0xcc) ^ *(uint *)(this + 0xcc)) & 2 ^ *(uint *)(this + 0xcc);
  *(uint *)(this + 0xcc) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0xcc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0xcc) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0xcc) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0xcc) = uVar1;
  *(uint *)(this + 0xcc) = (*(uint *)(param_1 + 0xcc) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  ExceptionList = local_c;
  return this;
}


// ==== 10074210 FUserInfo::operator=

/* public: struct FUserInfo & __thiscall FUserInfo::operator=(struct FUserInfo const &) */

FUserInfo * __thiscall FUserInfo::operator=(FUserInfo *this,FUserInfo *param_1)

{
  uint uVar1;
  
                    /* 0x74210  516  ??4FUserInfo@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::operator=((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
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
  *(uint *)(this + 0xcc) =
       *(uint *)(this + 0xcc) ^ (*(uint *)(this + 0xcc) ^ *(uint *)(param_1 + 0xcc)) & 1;
  uVar1 = (*(uint *)(param_1 + 0xcc) ^ *(uint *)(this + 0xcc)) & 2 ^ *(uint *)(this + 0xcc);
  *(uint *)(this + 0xcc) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0xcc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0xcc) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0xcc) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0xcc) = uVar1;
  *(uint *)(this + 0xcc) = (*(uint *)(param_1 + 0xcc) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  return this;
}


// ==== 10074440 FSkillInfo::~FSkillInfo

/* public: __thiscall FSkillInfo::~FSkillInfo(void) */

void __thiscall FSkillInfo::~FSkillInfo(FSkillInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x74440  228  ??1FSkillInfo@@QAE@XZ */
  puStack_8 = &LAB_101e6321;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 5;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x74));
  local_4._0_1_ = 4;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x68));
  local_4._0_1_ = 3;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x58));
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x4c));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x40));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100744e0 FSkillInfo::FSkillInfo

/* public: __thiscall FSkillInfo::FSkillInfo(struct FSkillInfo const &) */

FSkillInfo * __thiscall FSkillInfo::FSkillInfo(FSkillInfo *this,FSkillInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x744e0  29  ??0FSkillInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6391;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this,(FStringNoInit *)param_1);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  local_4._0_1_ = 1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(this + 0x38) =
       *(uint *)(this + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(this + 0x38)) & 1;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x40),(FStringNoInit *)(param_1 + 0x40));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x4c),(FStringNoInit *)(param_1 + 0x4c));
  local_4._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x58),(FStringNoInit *)(param_1 + 0x58));
  local_4._0_1_ = 4;
  *(uint *)(this + 100) =
       *(uint *)(this + 100) ^ (*(uint *)(param_1 + 100) ^ *(uint *)(this + 100)) & 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x68),(FStringNoInit *)(param_1 + 0x68));
  local_4 = CONCAT31(local_4._1_3_,5);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x74),(FStringNoInit *)(param_1 + 0x74));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  ExceptionList = local_c;
  return this;
}


// ==== 10074630 FSkillInfo::operator=

/* public: struct FSkillInfo & __thiscall FSkillInfo::operator=(struct FSkillInfo const &) */

FSkillInfo * __thiscall FSkillInfo::operator=(FSkillInfo *this,FSkillInfo *param_1)

{
                    /* 0x74630  513  ??4FSkillInfo@@QAEAAU0@ABU0@@Z */
  FStringNoInit::operator=((FStringNoInit *)this,(FStringNoInit *)param_1);
  FStringNoInit::operator=((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(this + 0x38) =
       *(uint *)(this + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(this + 0x38)) & 1;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x40),(FStringNoInit *)(param_1 + 0x40));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x4c),(FStringNoInit *)(param_1 + 0x4c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x58),(FStringNoInit *)(param_1 + 0x58));
  *(uint *)(this + 100) =
       *(uint *)(this + 100) ^ (*(uint *)(param_1 + 100) ^ *(uint *)(this + 100)) & 1;
  FStringNoInit::operator=((FStringNoInit *)(this + 0x68),(FStringNoInit *)(param_1 + 0x68));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x74),(FStringNoInit *)(param_1 + 0x74));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  return this;
}


// ==== 10074720 FPetInfo::~FPetInfo

/* public: __thiscall FPetInfo::~FPetInfo(void) */

void __thiscall FPetInfo::~FPetInfo(FPetInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x74720  227  ??1FPetInfo@@QAE@XZ */
  puStack_8 = &LAB_101e63bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10074770 FPetInfo::FPetInfo

/* public: __thiscall FPetInfo::FPetInfo(struct FPetInfo const &) */

FPetInfo * __thiscall FPetInfo::FPetInfo(FPetInfo *this,FPetInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x74770  27  ??0FPetInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e63ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(uint *)(this + 0x80) =
       *(uint *)(this + 0x80) ^ (*(uint *)(param_1 + 0x80) ^ *(uint *)(this + 0x80)) & 1;
  ExceptionList = local_c;
  return this;
}


// ==== 100748a0 FPetInfo::operator=

/* public: struct FPetInfo & __thiscall FPetInfo::operator=(struct FPetInfo const &) */

FPetInfo * __thiscall FPetInfo::operator=(FPetInfo *this,FPetInfo *param_1)

{
                    /* 0x748a0  510  ??4FPetInfo@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::operator=((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(uint *)(this + 0x80) =
       *(uint *)(this + 0x80) ^ (*(uint *)(param_1 + 0x80) ^ *(uint *)(this + 0x80)) & 1;
  return this;
}


// ==== 10074980 FMacroInfo::~FMacroInfo

/* public: __thiscall FMacroInfo::~FMacroInfo(void) */

void __thiscall FMacroInfo::~FMacroInfo(FMacroInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x74980  226  ??1FMacroInfo@@QAE@XZ */
  puStack_8 = &LAB_101e6457;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 3;
  _eh_vector_destructor_iterator_(this + 0x34,0xc,0xc,~FStringNoInit_exref);
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x28));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x1c));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x10));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10074a10 FMacroInfo::FMacroInfo

/* public: __thiscall FMacroInfo::FMacroInfo(struct FMacroInfo const &) */

FMacroInfo * __thiscall FMacroInfo::FMacroInfo(FMacroInfo *this,FMacroInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x74a10  25  ??0FMacroInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e64b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x1c),(FStringNoInit *)(param_1 + 0x1c));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x28),(FStringNoInit *)(param_1 + 0x28));
  local_4 = CONCAT31(local_4._1_3_,3);
  _eh_vector_copy_constructor_iterator_
            (this + 0x34,param_1 + 0x34,0xc,0xc,FStringNoInit_exref,~FStringNoInit_exref);
  ExceptionList = local_c;
  return this;
}


// ==== 10074ad0 FMacroInfo::operator=

/* public: struct FMacroInfo & __thiscall FMacroInfo::operator=(struct FMacroInfo const &) */

FMacroInfo * __thiscall FMacroInfo::operator=(FMacroInfo *this,FMacroInfo *param_1)

{
  FMacroInfo *this_00;
  int iVar1;
  
                    /* 0x74ad0  509  ??4FMacroInfo@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::operator=((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x1c),(FStringNoInit *)(param_1 + 0x1c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x28),(FStringNoInit *)(param_1 + 0x28));
  this_00 = this + 0x34;
  iVar1 = 0xc;
  do {
    FStringNoInit::operator=
              ((FStringNoInit *)this_00,(FStringNoInit *)(this_00 + ((int)param_1 - (int)this)));
    this_00 = this_00 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return this;
}


// ==== 10074b40 FRect::operator=

/* public: struct FRect & __thiscall FRect::operator=(struct FRect const &) */

FRect * __thiscall FRect::operator=(FRect *this,FRect *param_1)

{
                    /* 0x74b40  511  ??4FRect@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


// ==== 10074b60 FClanMemberInfo::~FClanMemberInfo

/* public: __thiscall FClanMemberInfo::~FClanMemberInfo(void) */

void __thiscall FClanMemberInfo::~FClanMemberInfo(FClanMemberInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x74b60  216  ??1FClanMemberInfo@@QAE@XZ */
  puStack_8 = &LAB_101e64dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10074bb0 FClanMemberInfo::FClanMemberInfo

/* public: __thiscall FClanMemberInfo::FClanMemberInfo(struct FClanMemberInfo const &) */

FClanMemberInfo * __thiscall
FClanMemberInfo::FClanMemberInfo(FClanMemberInfo *this,FClanMemberInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x74bb0  3  ??0FClanMemberInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e650c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  ExceptionList = local_c;
  return this;
}


// ==== 10074c40 FClanMemberInfo::operator=

/* public: struct FClanMemberInfo & __thiscall FClanMemberInfo::operator=(struct FClanMemberInfo
   const &) */

FClanMemberInfo * __thiscall
FClanMemberInfo::operator=(FClanMemberInfo *this,FClanMemberInfo *param_1)

{
                    /* 0x74c40  496  ??4FClanMemberInfo@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::operator=((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return this;
}


// ==== 10074c90 FResolutionInfo::operator=

/* public: struct FResolutionInfo & __thiscall FResolutionInfo::operator=(struct FResolutionInfo
   const &) */

FResolutionInfo * __thiscall
FResolutionInfo::operator=(FResolutionInfo *this,FResolutionInfo *param_1)

{
                    /* 0x74c90  512  ??4FResolutionInfo@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 10074cb0 FDrawItemInfo::FDrawItemInfo

/* public: __thiscall FDrawItemInfo::FDrawItemInfo(struct FDrawItemInfo const &) */

FDrawItemInfo * __thiscall FDrawItemInfo::FDrawItemInfo(FDrawItemInfo *this,FDrawItemInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x74cb0  7  ??0FDrawItemInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6554;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *this = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0xc) =
       *(uint *)(this + 0xc) ^ (*(uint *)(param_1 + 0xc) ^ *(uint *)(this + 0xc)) & 1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  local_4 = 0;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(this + 0x28) =
       *(uint *)(this + 0x28) ^ (*(uint *)(param_1 + 0x28) ^ *(uint *)(this + 0x28)) & 1;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,1);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  ExceptionList = local_c;
  return this;
}


// ==== 10074d90 FXMLTreeNodeItemInfo::~FXMLTreeNodeItemInfo

/* public: __thiscall FXMLTreeNodeItemInfo::~FXMLTreeNodeItemInfo(void) */

void __thiscall FXMLTreeNodeItemInfo::~FXMLTreeNodeItemInfo(FXMLTreeNodeItemInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x74d90  233  ??1FXMLTreeNodeItemInfo@@QAE@XZ */
  puStack_8 = &LAB_101e65a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x54));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x48));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x18));
  ExceptionList = local_c;
  return;
}


// ==== 10074e10 FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo

/* public: __thiscall FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo(struct FXMLTreeNodeItemInfo const
   &) */

FXMLTreeNodeItemInfo * __thiscall
FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo(FXMLTreeNodeItemInfo *this,FXMLTreeNodeItemInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x74e10  39  ??0FXMLTreeNodeItemInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e65f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *this = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0xc) =
       *(uint *)(this + 0xc) ^ (*(uint *)(this + 0xc) ^ *(uint *)(param_1 + 0xc)) & 1;
  *(uint *)(this + 0xc) =
       (*(uint *)(param_1 + 0xc) ^ *(uint *)(this + 0xc)) & 2 ^ *(uint *)(this + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  local_4 = 0;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(this + 0x28) =
       *(uint *)(this + 0x28) ^ (*(uint *)(param_1 + 0x28) ^ *(uint *)(this + 0x28)) & 1;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  local_4 = CONCAT31(local_4._1_3_,2);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x54),(FStringNoInit *)(param_1 + 0x54));
  ExceptionList = local_c;
  return this;
}


// ==== 10074f10 FXMLTreeNodeItemInfo::operator=

/* public: struct FXMLTreeNodeItemInfo & __thiscall FXMLTreeNodeItemInfo::operator=(struct
   FXMLTreeNodeItemInfo const &) */

FXMLTreeNodeItemInfo * __thiscall
FXMLTreeNodeItemInfo::operator=(FXMLTreeNodeItemInfo *this,FXMLTreeNodeItemInfo *param_1)

{
                    /* 0x74f10  518  ??4FXMLTreeNodeItemInfo@@QAEAAU0@ABU0@@Z */
  *this = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0xc) =
       *(uint *)(this + 0xc) ^ (*(uint *)(this + 0xc) ^ *(uint *)(param_1 + 0xc)) & 1;
  *(uint *)(this + 0xc) =
       (*(uint *)(param_1 + 0xc) ^ *(uint *)(this + 0xc)) & 2 ^ *(uint *)(this + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(this + 0x28) =
       *(uint *)(this + 0x28) ^ (*(uint *)(param_1 + 0x28) ^ *(uint *)(this + 0x28)) & 1;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x54),(FStringNoInit *)(param_1 + 0x54));
  return this;
}


// ==== 10074fc0 FStatusIconInfo::~FStatusIconInfo

/* public: __thiscall FStatusIconInfo::~FStatusIconInfo(void) */

void __thiscall FStatusIconInfo::~FStatusIconInfo(FStatusIconInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x74fc0  229  ??1FStatusIconInfo@@QAE@XZ */
  puStack_8 = &LAB_101e663d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x28));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x1c));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075040 FStatusIconInfo::FStatusIconInfo

/* public: __thiscall FStatusIconInfo::FStatusIconInfo(struct FStatusIconInfo const &) */

FStatusIconInfo * __thiscall
FStatusIconInfo::FStatusIconInfo(FStatusIconInfo *this,FStatusIconInfo *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75040  31  ??0FStatusIconInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e668d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this,(FStringNoInit *)param_1);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  local_4._0_1_ = 1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x1c),(FStringNoInit *)(param_1 + 0x1c));
  local_4 = CONCAT31(local_4._1_3_,2);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x28),(FStringNoInit *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(uint *)(this + 0x40) =
       *(uint *)(this + 0x40) ^ (*(uint *)(this + 0x40) ^ *(uint *)(param_1 + 0x40)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x40) ^ *(uint *)(this + 0x40)) & 2 ^ *(uint *)(this + 0x40);
  *(uint *)(this + 0x40) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x40) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x40) = uVar1;
  *(uint *)(this + 0x40) = (*(uint *)(param_1 + 0x40) ^ uVar1) & 8 ^ uVar1;
  ExceptionList = local_c;
  return this;
}


// ==== 10075120 FStatusIconInfo::operator=

/* public: struct FStatusIconInfo & __thiscall FStatusIconInfo::operator=(struct FStatusIconInfo
   const &) */

FStatusIconInfo * __thiscall
FStatusIconInfo::operator=(FStatusIconInfo *this,FStatusIconInfo *param_1)

{
  uint uVar1;
  
                    /* 0x75120  514  ??4FStatusIconInfo@@QAEAAU0@ABU0@@Z */
  FStringNoInit::operator=((FStringNoInit *)this,(FStringNoInit *)param_1);
  FStringNoInit::operator=((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x1c),(FStringNoInit *)(param_1 + 0x1c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x28),(FStringNoInit *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(uint *)(this + 0x40) =
       *(uint *)(this + 0x40) ^ (*(uint *)(this + 0x40) ^ *(uint *)(param_1 + 0x40)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x40) ^ *(uint *)(this + 0x40)) & 2 ^ *(uint *)(this + 0x40);
  *(uint *)(this + 0x40) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x40) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x40) = uVar1;
  *(uint *)(this + 0x40) = (*(uint *)(param_1 + 0x40) ^ uVar1) & 8 ^ uVar1;
  return this;
}


// ==== 100751b0 FGameTipData::~FGameTipData

/* public: __thiscall FGameTipData::~FGameTipData(void) */

void __thiscall FGameTipData::~FGameTipData(FGameTipData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x751b0  222  ??1FGameTipData@@QAE@XZ */
  puStack_8 = &LAB_101e66bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 10075200 FGameTipData::FGameTipData

/* public: __thiscall FGameTipData::FGameTipData(struct FGameTipData const &) */

FGameTipData * __thiscall FGameTipData::FGameTipData(FGameTipData *this,FGameTipData *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75200  15  ??0FGameTipData@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e66ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0xc) =
       *(uint *)(this + 0xc) ^ (*(uint *)(param_1 + 0xc) ^ *(uint *)(this + 0xc)) & 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  ExceptionList = local_c;
  return this;
}


// ==== 10075280 FGameTipData::operator=

/* public: struct FGameTipData & __thiscall FGameTipData::operator=(struct FGameTipData const &) */

FGameTipData * __thiscall FGameTipData::operator=(FGameTipData *this,FGameTipData *param_1)

{
                    /* 0x75280  502  ??4FGameTipData@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0xc) =
       *(uint *)(this + 0xc) ^ (*(uint *)(param_1 + 0xc) ^ *(uint *)(this + 0xc)) & 1;
  FStringNoInit::operator=((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  return this;
}


// ==== 100752c0 FHennaInfo::operator=

/* public: struct FHennaInfo & __thiscall FHennaInfo::operator=(struct FHennaInfo const &) */

FHennaInfo * __thiscall FHennaInfo::operator=(FHennaInfo *this,FHennaInfo *param_1)

{
  int iVar1;
  FHennaInfo *pFVar2;
  
                    /* 0x752c0  503  ??4FHennaInfo@@QAEAAU0@ABU0@@Z */
  pFVar2 = this;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 100752e0 FSystemMsgData::~FSystemMsgData

/* public: __thiscall FSystemMsgData::~FSystemMsgData(void) */

void __thiscall FSystemMsgData::~FSystemMsgData(FSystemMsgData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x752e0  230  ??1FSystemMsgData@@QAE@XZ */
  puStack_8 = &LAB_101e6749;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 3;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x48));
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x1c));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x10));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075370 FSystemMsgData::FSystemMsgData

/* public: __thiscall FSystemMsgData::FSystemMsgData(struct FSystemMsgData const &) */

FSystemMsgData * __thiscall
FSystemMsgData::FSystemMsgData(FSystemMsgData *this,FSystemMsgData *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75370  33  ??0FSystemMsgData@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e67a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this,(FStringNoInit *)param_1);
  local_4 = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x1c),(FStringNoInit *)(param_1 + 0x1c));
  local_4._0_1_ = 2;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,3);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  ExceptionList = local_c;
  return this;
}


// ==== 10075440 FSystemMsgData::operator=

/* public: struct FSystemMsgData & __thiscall FSystemMsgData::operator=(struct FSystemMsgData const
   &) */

FSystemMsgData * __thiscall FSystemMsgData::operator=(FSystemMsgData *this,FSystemMsgData *param_1)

{
                    /* 0x75440  515  ??4FSystemMsgData@@QAEAAU0@ABU0@@Z */
  FStringNoInit::operator=((FStringNoInit *)this,(FStringNoInit *)param_1);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x10),(FStringNoInit *)(param_1 + 0x10));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x1c),(FStringNoInit *)(param_1 + 0x1c));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x3c),(FStringNoInit *)(param_1 + 0x3c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x48),(FStringNoInit *)(param_1 + 0x48));
  return this;
}


// ==== 100754b0 UUIEventManager::StaticClass

/* public: static class UClass * __cdecl UUIEventManager::StaticClass(void) */

UClass * __cdecl UUIEventManager::StaticClass(void)

{
                    /* 0x754b0  1005  ?StaticClass@UUIEventManager@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 100754c0 UUIEventManager::operator_new

/* public: static void * __cdecl UUIEventManager::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIEventManager::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x754c0  489  ??2UUIEventManager@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100754f0 UUIEventManager::~UUIEventManager

/* public: virtual __thiscall UUIEventManager::~UUIEventManager(void) */

void __thiscall UUIEventManager::~UUIEventManager(UUIEventManager *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x754f0  318  ??1UUIEventManager@@UAE@XZ */
  puStack_8 = &LAB_101e67d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UInteractions::~UInteractions((UInteractions *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075550 UUIEventManager::UUIEventManager

/* protected: __thiscall UUIEventManager::UUIEventManager(void) */

UUIEventManager * __thiscall UUIEventManager::UUIEventManager(UUIEventManager *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75550  209  ??0UUIEventManager@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteractions::UInteractions((UInteractions *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100755b0 UUIEventManager::UUIEventManager

/* public: __thiscall UUIEventManager::UUIEventManager(class UUIEventManager const &) */

UUIEventManager * __thiscall
UUIEventManager::UUIEventManager(UUIEventManager *this,UUIEventManager *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x755b0  210  ??0UUIEventManager@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6839;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteractions::UInteractions((UInteractions *)this,(UInteractions *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075610 FUN_10075610

UUIEventManager * FUN_10075610(byte param_1)

{
  UUIEventManager *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIEventManager::~UUIEventManager);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIEventManager::~UUIEventManager(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10075670 UWindowHandle::operator_new

/* public: static void * __cdecl UWindowHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UWindowHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x75670  493  ??2UWindowHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100756a0 UWindowHandle::~UWindowHandle

/* public: virtual __thiscall UWindowHandle::~UWindowHandle(void) */

void __thiscall UWindowHandle::~UWindowHandle(UWindowHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x756a0  320  ??1UWindowHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIEventManager::~UUIEventManager((UUIEventManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075700 UWindowHandle::UWindowHandle

/* public: __thiscall UWindowHandle::UWindowHandle(void) */

UWindowHandle * __thiscall UWindowHandle::UWindowHandle(UWindowHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75700  214  ??0UWindowHandle@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075760 UWindowHandle::UWindowHandle

/* public: __thiscall UWindowHandle::UWindowHandle(class UWindowHandle const &) */

UWindowHandle * __thiscall UWindowHandle::UWindowHandle(UWindowHandle *this,UWindowHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75760  213  ??0UWindowHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e68c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this,(UUIEventManager *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = local_c;
  return this;
}


// ==== 100757d0 FUN_100757d0

UWindowHandle * FUN_100757d0(byte param_1)

{
  UWindowHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UWindowHandle::~UWindowHandle)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UWindowHandle::~UWindowHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10075830 UTextureHandle::operator_new

/* public: static void * __cdecl UTextureHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTextureHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x75830  393  ??2UTextureHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10075860 UTextureHandle::~UTextureHandle

/* public: virtual __thiscall UTextureHandle::~UTextureHandle(void) */

void __thiscall UTextureHandle::~UTextureHandle(UTextureHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75860  270  ??1UTextureHandle@@UAE@XZ */
  puStack_8 = &LAB_101e68f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100758c0 UTextureHandle::UTextureHandle

/* protected: __thiscall UTextureHandle::UTextureHandle(void) */

UTextureHandle * __thiscall UTextureHandle::UTextureHandle(UTextureHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x758c0  113  ??0UTextureHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075920 UTextureHandle::UTextureHandle

/* public: __thiscall UTextureHandle::UTextureHandle(class UTextureHandle const &) */

UTextureHandle * __thiscall
UTextureHandle::UTextureHandle(UTextureHandle *this,UTextureHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75920  114  ??0UTextureHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075980 FUN_10075980

UTextureHandle * FUN_10075980(byte param_1)

{
  UTextureHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UTextureHandle::~UTextureHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTextureHandle::~UTextureHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 100759e0 UAnimTextureHandle::operator_new

/* public: static void * __cdecl UAnimTextureHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UAnimTextureHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x759e0  323  ??2UAnimTextureHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10075a10 UAnimTextureHandle::~UAnimTextureHandle

/* public: virtual __thiscall UAnimTextureHandle::~UAnimTextureHandle(void) */

void __thiscall UAnimTextureHandle::~UAnimTextureHandle(UAnimTextureHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75a10  235  ??1UAnimTextureHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UTextureHandle::~UTextureHandle((UTextureHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075a70 UAnimTextureHandle::UAnimTextureHandle

/* protected: __thiscall UAnimTextureHandle::UAnimTextureHandle(void) */

UAnimTextureHandle * __thiscall UAnimTextureHandle::UAnimTextureHandle(UAnimTextureHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75a70  43  ??0UAnimTextureHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e69b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTextureHandle::UTextureHandle((UTextureHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075ad0 UAnimTextureHandle::UAnimTextureHandle

/* public: __thiscall UAnimTextureHandle::UAnimTextureHandle(class UAnimTextureHandle const &) */

UAnimTextureHandle * __thiscall
UAnimTextureHandle::UAnimTextureHandle(UAnimTextureHandle *this,UAnimTextureHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75ad0  44  ??0UAnimTextureHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e69e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTextureHandle::UTextureHandle((UTextureHandle *)this,(UTextureHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075b30 FUN_10075b30

UAnimTextureHandle * FUN_10075b30(byte param_1)

{
  UAnimTextureHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UAnimTextureHandle::~UAnimTextureHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UAnimTextureHandle::~UAnimTextureHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10075b90 UTextListBoxHandle::operator_new

/* public: static void * __cdecl UTextListBoxHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTextListBoxHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x75b90  391  ??2UTextListBoxHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10075bc0 UTextListBoxHandle::~UTextListBoxHandle

/* public: virtual __thiscall UTextListBoxHandle::~UTextListBoxHandle(void) */

void __thiscall UTextListBoxHandle::~UTextListBoxHandle(UTextListBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75bc0  269  ??1UTextListBoxHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075c20 UTextListBoxHandle::UTextListBoxHandle

/* protected: __thiscall UTextListBoxHandle::UTextListBoxHandle(void) */

UTextListBoxHandle * __thiscall UTextListBoxHandle::UTextListBoxHandle(UTextListBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75c20  111  ??0UTextListBoxHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075c80 UTextListBoxHandle::UTextListBoxHandle

/* public: __thiscall UTextListBoxHandle::UTextListBoxHandle(class UTextListBoxHandle const &) */

UTextListBoxHandle * __thiscall
UTextListBoxHandle::UTextListBoxHandle(UTextListBoxHandle *this,UTextListBoxHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75c80  112  ??0UTextListBoxHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075ce0 FUN_10075ce0

UTextListBoxHandle * FUN_10075ce0(byte param_1)

{
  UTextListBoxHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UTextListBoxHandle::~UTextListBoxHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTextListBoxHandle::~UTextListBoxHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10075d40 UChatWindowHandle::StaticClass

/* public: static class UClass * __cdecl UChatWindowHandle::StaticClass(void) */

UClass * __cdecl UChatWindowHandle::StaticClass(void)

{
                    /* 0x75d40  926  ?StaticClass@UChatWindowHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10075d50 UChatWindowHandle::operator_new

/* public: static void * __cdecl UChatWindowHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UChatWindowHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x75d50  331  ??2UChatWindowHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10075d80 UChatWindowHandle::~UChatWindowHandle

/* public: virtual __thiscall UChatWindowHandle::~UChatWindowHandle(void) */

void __thiscall UChatWindowHandle::~UChatWindowHandle(UChatWindowHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75d80  239  ??1UChatWindowHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UTextListBoxHandle::~UTextListBoxHandle((UTextListBoxHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075de0 UChatWindowHandle::UChatWindowHandle

/* protected: __thiscall UChatWindowHandle::UChatWindowHandle(void) */

UChatWindowHandle * __thiscall UChatWindowHandle::UChatWindowHandle(UChatWindowHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75de0  51  ??0UChatWindowHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTextListBoxHandle::UTextListBoxHandle((UTextListBoxHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075e40 UChatWindowHandle::UChatWindowHandle

/* public: __thiscall UChatWindowHandle::UChatWindowHandle(class UChatWindowHandle const &) */

UChatWindowHandle * __thiscall
UChatWindowHandle::UChatWindowHandle(UChatWindowHandle *this,UChatWindowHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75e40  52  ??0UChatWindowHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6b08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTextListBoxHandle::UTextListBoxHandle((UTextListBoxHandle *)this,(UTextListBoxHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075ea0 FUN_10075ea0

UChatWindowHandle * FUN_10075ea0(byte param_1)

{
  UChatWindowHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UChatWindowHandle::~UChatWindowHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UChatWindowHandle::~UChatWindowHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10075f00 UTextBoxHandle::operator_new

/* public: static void * __cdecl UTextBoxHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTextBoxHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x75f00  389  ??2UTextBoxHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10075f30 UTextBoxHandle::~UTextBoxHandle

/* public: virtual __thiscall UTextBoxHandle::~UTextBoxHandle(void) */

void __thiscall UTextBoxHandle::~UTextBoxHandle(UTextBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75f30  268  ??1UTextBoxHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6b38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10075f90 UTextBoxHandle::UTextBoxHandle

/* protected: __thiscall UTextBoxHandle::UTextBoxHandle(void) */

UTextBoxHandle * __thiscall UTextBoxHandle::UTextBoxHandle(UTextBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75f90  109  ??0UTextBoxHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10075ff0 UTextBoxHandle::UTextBoxHandle

/* public: __thiscall UTextBoxHandle::UTextBoxHandle(class UTextBoxHandle const &) */

UTextBoxHandle * __thiscall
UTextBoxHandle::UTextBoxHandle(UTextBoxHandle *this,UTextBoxHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x75ff0  110  ??0UTextBoxHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076050 FUN_10076050

UTextBoxHandle * FUN_10076050(byte param_1)

{
  UTextBoxHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UTextBoxHandle::~UTextBoxHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTextBoxHandle::~UTextBoxHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 100760b0 UTabHandle::operator_new

/* public: static void * __cdecl UTabHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTabHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x760b0  387  ??2UTabHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100760e0 UTabHandle::~UTabHandle

/* public: virtual __thiscall UTabHandle::~UTabHandle(void) */

void __thiscall UTabHandle::~UTabHandle(UTabHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x760e0  267  ??1UTabHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10076140 UTabHandle::UTabHandle

/* protected: __thiscall UTabHandle::UTabHandle(void) */

UTabHandle * __thiscall UTabHandle::UTabHandle(UTabHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76140  107  ??0UTabHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100761a0 UTabHandle::UTabHandle

/* public: __thiscall UTabHandle::UTabHandle(class UTabHandle const &) */

UTabHandle * __thiscall UTabHandle::UTabHandle(UTabHandle *this,UTabHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x761a0  108  ??0UTabHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076200 FUN_10076200

UTabHandle * FUN_10076200(byte param_1)

{
  UTabHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UTabHandle::~UTabHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTabHandle::~UTabHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10076260 UStatusIconHandle::operator_new

/* public: static void * __cdecl UStatusIconHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UStatusIconHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x76260  385  ??2UStatusIconHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10076290 UStatusIconHandle::~UStatusIconHandle

/* public: virtual __thiscall UStatusIconHandle::~UStatusIconHandle(void) */

void __thiscall UStatusIconHandle::~UStatusIconHandle(UStatusIconHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76290  266  ??1UStatusIconHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100762f0 UStatusIconHandle::UStatusIconHandle

/* protected: __thiscall UStatusIconHandle::UStatusIconHandle(void) */

UStatusIconHandle * __thiscall UStatusIconHandle::UStatusIconHandle(UStatusIconHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x762f0  105  ??0UStatusIconHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076350 UStatusIconHandle::UStatusIconHandle

/* public: __thiscall UStatusIconHandle::UStatusIconHandle(class UStatusIconHandle const &) */

UStatusIconHandle * __thiscall
UStatusIconHandle::UStatusIconHandle(UStatusIconHandle *this,UStatusIconHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76350  106  ??0UStatusIconHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100763b0 UAnimTextureHandle::operator=

/* public: class UAnimTextureHandle & __thiscall UAnimTextureHandle::operator=(class
   UAnimTextureHandle const &) */

UAnimTextureHandle * __thiscall
UAnimTextureHandle::operator=(UAnimTextureHandle *this,UAnimTextureHandle *param_1)

{
                    /* 0x763b0  520  ??4UAnimTextureHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  522  ??4UBarHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  523  ??4UButtonHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  524  ??4UChatWindowHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  525  ??4UCheckBoxHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  526  ??4UComboBoxHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  528  ??4UDrawPanelHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  529  ??4UEditBoxHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  535  ??4UHtmlHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  536  ??4UItemWindowHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  537  ??4UListCtrlHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  540  ??4UNameCtrlHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  551  ??4UStatusIconHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  552  ??4UTabHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  553  ??4UTextBoxHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  554  ??4UTextListBoxHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  555  ??4UTextureHandle@@QAEAAV0@ABV0@@Z
                       0x763b0  573  ??4UUIAPI_RADAR@@QAEAAV0@ABV0@@Z
                       0x763b0  604  ??4UUIScript@@QAEAAV0@ABV0@@Z
                       0x763b0  605  ??4UWindowHandle@@QAEAAV0@ABV0@@Z */
  UInteractions::operator=((UInteractions *)this,(UInteractions *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}


// ==== 100763d0 FUN_100763d0

UStatusIconHandle * FUN_100763d0(byte param_1)

{
  UStatusIconHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UStatusIconHandle::~UStatusIconHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UStatusIconHandle::~UStatusIconHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10076430 UNameCtrlHandle::operator_new

/* public: static void * __cdecl UNameCtrlHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UNameCtrlHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x76430  363  ??2UNameCtrlHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10076460 UNameCtrlHandle::~UNameCtrlHandle

/* public: virtual __thiscall UNameCtrlHandle::~UNameCtrlHandle(void) */

void __thiscall UNameCtrlHandle::~UNameCtrlHandle(UNameCtrlHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76460  255  ??1UNameCtrlHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100764c0 UNameCtrlHandle::UNameCtrlHandle

/* protected: __thiscall UNameCtrlHandle::UNameCtrlHandle(void) */

UNameCtrlHandle * __thiscall UNameCtrlHandle::UNameCtrlHandle(UNameCtrlHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x764c0  83  ??0UNameCtrlHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076520 UNameCtrlHandle::UNameCtrlHandle

/* public: __thiscall UNameCtrlHandle::UNameCtrlHandle(class UNameCtrlHandle const &) */

UNameCtrlHandle * __thiscall
UNameCtrlHandle::UNameCtrlHandle(UNameCtrlHandle *this,UNameCtrlHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76520  84  ??0UNameCtrlHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076580 FUN_10076580

UNameCtrlHandle * FUN_10076580(byte param_1)

{
  UNameCtrlHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UNameCtrlHandle::~UNameCtrlHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UNameCtrlHandle::~UNameCtrlHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 100765e0 UListCtrlHandle::operator_new

/* public: static void * __cdecl UListCtrlHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UListCtrlHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x765e0  357  ??2UListCtrlHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10076610 UListCtrlHandle::~UListCtrlHandle

/* public: virtual __thiscall UListCtrlHandle::~UListCtrlHandle(void) */

void __thiscall UListCtrlHandle::~UListCtrlHandle(UListCtrlHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76610  252  ??1UListCtrlHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10076670 UListCtrlHandle::UListCtrlHandle

/* protected: __thiscall UListCtrlHandle::UListCtrlHandle(void) */

UListCtrlHandle * __thiscall UListCtrlHandle::UListCtrlHandle(UListCtrlHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76670  77  ??0UListCtrlHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100766d0 UListCtrlHandle::UListCtrlHandle

/* public: __thiscall UListCtrlHandle::UListCtrlHandle(class UListCtrlHandle const &) */

UListCtrlHandle * __thiscall
UListCtrlHandle::UListCtrlHandle(UListCtrlHandle *this,UListCtrlHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x766d0  78  ??0UListCtrlHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076730 FUN_10076730

UListCtrlHandle * FUN_10076730(byte param_1)

{
  UListCtrlHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UListCtrlHandle::~UListCtrlHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UListCtrlHandle::~UListCtrlHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10076790 UItemWindowHandle::operator_new

/* public: static void * __cdecl UItemWindowHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UItemWindowHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x76790  355  ??2UItemWindowHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100767c0 UItemWindowHandle::~UItemWindowHandle

/* public: virtual __thiscall UItemWindowHandle::~UItemWindowHandle(void) */

void __thiscall UItemWindowHandle::~UItemWindowHandle(UItemWindowHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x767c0  251  ??1UItemWindowHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10076820 UItemWindowHandle::UItemWindowHandle

/* protected: __thiscall UItemWindowHandle::UItemWindowHandle(void) */

UItemWindowHandle * __thiscall UItemWindowHandle::UItemWindowHandle(UItemWindowHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76820  75  ??0UItemWindowHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076880 UItemWindowHandle::UItemWindowHandle

/* public: __thiscall UItemWindowHandle::UItemWindowHandle(class UItemWindowHandle const &) */

UItemWindowHandle * __thiscall
UItemWindowHandle::UItemWindowHandle(UItemWindowHandle *this,UItemWindowHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76880  76  ??0UItemWindowHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100768e0 FUN_100768e0

UItemWindowHandle * FUN_100768e0(byte param_1)

{
  UItemWindowHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UItemWindowHandle::~UItemWindowHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UItemWindowHandle::~UItemWindowHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10076940 UHtmlHandle::StaticClass

/* public: static class UClass * __cdecl UHtmlHandle::StaticClass(void) */

UClass * __cdecl UHtmlHandle::StaticClass(void)

{
                    /* 0x76940  937  ?StaticClass@UHtmlHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10076950 UHtmlHandle::operator_new

/* public: static void * __cdecl UHtmlHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UHtmlHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x76950  353  ??2UHtmlHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10076980 UHtmlHandle::~UHtmlHandle

/* public: virtual __thiscall UHtmlHandle::~UHtmlHandle(void) */

void __thiscall UHtmlHandle::~UHtmlHandle(UHtmlHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76980  250  ??1UHtmlHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100769e0 UHtmlHandle::UHtmlHandle

/* protected: __thiscall UHtmlHandle::UHtmlHandle(void) */

UHtmlHandle * __thiscall UHtmlHandle::UHtmlHandle(UHtmlHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x769e0  73  ??0UHtmlHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076a40 UHtmlHandle::UHtmlHandle

/* public: __thiscall UHtmlHandle::UHtmlHandle(class UHtmlHandle const &) */

UHtmlHandle * __thiscall UHtmlHandle::UHtmlHandle(UHtmlHandle *this,UHtmlHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76a40  74  ??0UHtmlHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076aa0 FUN_10076aa0

UHtmlHandle * FUN_10076aa0(byte param_1)

{
  UHtmlHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UHtmlHandle::~UHtmlHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UHtmlHandle::~UHtmlHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10076b00 UEditBoxHandle::operator_new

/* public: static void * __cdecl UEditBoxHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UEditBoxHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x76b00  341  ??2UEditBoxHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10076b30 UEditBoxHandle::~UEditBoxHandle

/* public: virtual __thiscall UEditBoxHandle::~UEditBoxHandle(void) */

void __thiscall UEditBoxHandle::~UEditBoxHandle(UEditBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76b30  244  ??1UEditBoxHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10076b90 UEditBoxHandle::UEditBoxHandle

/* protected: __thiscall UEditBoxHandle::UEditBoxHandle(void) */

UEditBoxHandle * __thiscall UEditBoxHandle::UEditBoxHandle(UEditBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76b90  61  ??0UEditBoxHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076bf0 UEditBoxHandle::UEditBoxHandle

/* public: __thiscall UEditBoxHandle::UEditBoxHandle(class UEditBoxHandle const &) */

UEditBoxHandle * __thiscall
UEditBoxHandle::UEditBoxHandle(UEditBoxHandle *this,UEditBoxHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76bf0  62  ??0UEditBoxHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076c50 FUN_10076c50

UEditBoxHandle * FUN_10076c50(byte param_1)

{
  UEditBoxHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UEditBoxHandle::~UEditBoxHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UEditBoxHandle::~UEditBoxHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10076cb0 UDrawPanelHandle::operator_new

/* public: static void * __cdecl UDrawPanelHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UDrawPanelHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x76cb0  339  ??2UDrawPanelHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10076ce0 UDrawPanelHandle::~UDrawPanelHandle

/* public: virtual __thiscall UDrawPanelHandle::~UDrawPanelHandle(void) */

void __thiscall UDrawPanelHandle::~UDrawPanelHandle(UDrawPanelHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76ce0  243  ??1UDrawPanelHandle@@UAE@XZ */
  puStack_8 = &LAB_101e6fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10076d40 UDrawPanelHandle::UDrawPanelHandle

/* protected: __thiscall UDrawPanelHandle::UDrawPanelHandle(void) */

UDrawPanelHandle * __thiscall UDrawPanelHandle::UDrawPanelHandle(UDrawPanelHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76d40  59  ??0UDrawPanelHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e6fe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076da0 UDrawPanelHandle::UDrawPanelHandle

/* public: __thiscall UDrawPanelHandle::UDrawPanelHandle(class UDrawPanelHandle const &) */

UDrawPanelHandle * __thiscall
UDrawPanelHandle::UDrawPanelHandle(UDrawPanelHandle *this,UDrawPanelHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76da0  60  ??0UDrawPanelHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076e00 FUN_10076e00

UDrawPanelHandle * FUN_10076e00(byte param_1)

{
  UDrawPanelHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UDrawPanelHandle::~UDrawPanelHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UDrawPanelHandle::~UDrawPanelHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10076e60 UComboBoxHandle::operator_new

/* public: static void * __cdecl UComboBoxHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UComboBoxHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x76e60  335  ??2UComboBoxHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10076e90 UComboBoxHandle::~UComboBoxHandle

/* public: virtual __thiscall UComboBoxHandle::~UComboBoxHandle(void) */

void __thiscall UComboBoxHandle::~UComboBoxHandle(UComboBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76e90  241  ??1UComboBoxHandle@@UAE@XZ */
  puStack_8 = &LAB_101e7048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10076ef0 UComboBoxHandle::UComboBoxHandle

/* protected: __thiscall UComboBoxHandle::UComboBoxHandle(void) */

UComboBoxHandle * __thiscall UComboBoxHandle::UComboBoxHandle(UComboBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76ef0  55  ??0UComboBoxHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076f50 UComboBoxHandle::UComboBoxHandle

/* public: __thiscall UComboBoxHandle::UComboBoxHandle(class UComboBoxHandle const &) */

UComboBoxHandle * __thiscall
UComboBoxHandle::UComboBoxHandle(UComboBoxHandle *this,UComboBoxHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x76f50  56  ??0UComboBoxHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e70a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10076fb0 FUN_10076fb0

UComboBoxHandle * FUN_10076fb0(byte param_1)

{
  UComboBoxHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UComboBoxHandle::~UComboBoxHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UComboBoxHandle::~UComboBoxHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10077010 UCheckBoxHandle::operator_new

/* public: static void * __cdecl UCheckBoxHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UCheckBoxHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x77010  333  ??2UCheckBoxHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10077040 UCheckBoxHandle::~UCheckBoxHandle

/* public: virtual __thiscall UCheckBoxHandle::~UCheckBoxHandle(void) */

void __thiscall UCheckBoxHandle::~UCheckBoxHandle(UCheckBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77040  240  ??1UCheckBoxHandle@@UAE@XZ */
  puStack_8 = &LAB_101e70d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100770a0 UCheckBoxHandle::UCheckBoxHandle

/* protected: __thiscall UCheckBoxHandle::UCheckBoxHandle(void) */

UCheckBoxHandle * __thiscall UCheckBoxHandle::UCheckBoxHandle(UCheckBoxHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x770a0  53  ??0UCheckBoxHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077100 UCheckBoxHandle::UCheckBoxHandle

/* public: __thiscall UCheckBoxHandle::UCheckBoxHandle(class UCheckBoxHandle const &) */

UCheckBoxHandle * __thiscall
UCheckBoxHandle::UCheckBoxHandle(UCheckBoxHandle *this,UCheckBoxHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77100  54  ??0UCheckBoxHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077160 FUN_10077160

UCheckBoxHandle * FUN_10077160(byte param_1)

{
  UCheckBoxHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UCheckBoxHandle::~UCheckBoxHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCheckBoxHandle::~UCheckBoxHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 100771c0 UButtonHandle::operator_new

/* public: static void * __cdecl UButtonHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UButtonHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x771c0  329  ??2UButtonHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100771f0 UButtonHandle::~UButtonHandle

/* public: virtual __thiscall UButtonHandle::~UButtonHandle(void) */

void __thiscall UButtonHandle::~UButtonHandle(UButtonHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x771f0  238  ??1UButtonHandle@@UAE@XZ */
  puStack_8 = &LAB_101e7168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10077250 UButtonHandle::UButtonHandle

/* protected: __thiscall UButtonHandle::UButtonHandle(void) */

UButtonHandle * __thiscall UButtonHandle::UButtonHandle(UButtonHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77250  49  ??0UButtonHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100772b0 UButtonHandle::UButtonHandle

/* public: __thiscall UButtonHandle::UButtonHandle(class UButtonHandle const &) */

UButtonHandle * __thiscall UButtonHandle::UButtonHandle(UButtonHandle *this,UButtonHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x772b0  50  ??0UButtonHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e71c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077310 FUN_10077310

UButtonHandle * FUN_10077310(byte param_1)

{
  UButtonHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UButtonHandle::~UButtonHandle)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UButtonHandle::~UButtonHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10077370 UBarHandle::operator_new

/* public: static void * __cdecl UBarHandle::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UBarHandle::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x77370  327  ??2UBarHandle@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100773a0 UBarHandle::~UBarHandle

/* public: virtual __thiscall UBarHandle::~UBarHandle(void) */

void __thiscall UBarHandle::~UBarHandle(UBarHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x773a0  237  ??1UBarHandle@@UAE@XZ */
  puStack_8 = &LAB_101e71f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UWindowHandle::~UWindowHandle((UWindowHandle *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10077400 UBarHandle::UBarHandle

/* protected: __thiscall UBarHandle::UBarHandle(void) */

UBarHandle * __thiscall UBarHandle::UBarHandle(UBarHandle *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77400  47  ??0UBarHandle@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077460 UBarHandle::UBarHandle

/* public: __thiscall UBarHandle::UBarHandle(class UBarHandle const &) */

UBarHandle * __thiscall UBarHandle::UBarHandle(UBarHandle *this,UBarHandle *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77460  48  ??0UBarHandle@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UWindowHandle::UWindowHandle((UWindowHandle *)this,(UWindowHandle *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100774c0 FUN_100774c0

UBarHandle * FUN_100774c0(byte param_1)

{
  UBarHandle *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UBarHandle::~UBarHandle);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UBarHandle::~UBarHandle(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10077520 UUIDataManager::StaticClass

/* public: static class UClass * __cdecl UUIDataManager::StaticClass(void) */

UClass * __cdecl UUIDataManager::StaticClass(void)

{
                    /* 0x77520  1004  ?StaticClass@UUIDataManager@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10077530 UUIDataManager::operator_new

/* public: static void * __cdecl UUIDataManager::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDataManager::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x77530  487  ??2UUIDataManager@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10077560 UUIDataManager::~UUIDataManager

/* public: virtual __thiscall UUIDataManager::~UUIDataManager(void) */

void __thiscall UUIDataManager::~UUIDataManager(UUIDataManager *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77560  317  ??1UUIDataManager@@UAE@XZ */
  puStack_8 = &LAB_101e7288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIEventManager::~UUIEventManager((UUIEventManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100775c0 UUIDataManager::UUIDataManager

/* public: __thiscall UUIDataManager::UUIDataManager(void) */

UUIDataManager * __thiscall UUIDataManager::UUIDataManager(UUIDataManager *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x775c0  208  ??0UUIDataManager@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e72b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077620 UUIDataManager::UUIDataManager

/* public: __thiscall UUIDataManager::UUIDataManager(class UUIDataManager const &) */

UUIDataManager * __thiscall
UUIDataManager::UUIDataManager(UUIDataManager *this,UUIDataManager *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77620  207  ??0UUIDataManager@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e72e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this,(UUIEventManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077680 FUN_10077680

UUIDataManager * FUN_10077680(byte param_1)

{
  UUIDataManager *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDataManager::~UUIDataManager);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDataManager::~UUIDataManager(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 100776e0 UUIDATA_USER::StaticClass

/* public: static class UClass * __cdecl UUIDATA_USER::StaticClass(void) */

UClass * __cdecl UUIDATA_USER::StaticClass(void)

{
                    /* 0x776e0  1003  ?StaticClass@UUIDATA_USER@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 100776f0 UUIDATA_USER::operator_new

/* public: static void * __cdecl UUIDATA_USER::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_USER::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x776f0  485  ??2UUIDATA_USER@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10077720 UUIDATA_USER::~UUIDATA_USER

/* public: virtual __thiscall UUIDATA_USER::~UUIDATA_USER(void) */

void __thiscall UUIDATA_USER::~UUIDATA_USER(UUIDATA_USER *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77720  316  ??1UUIDATA_USER@@UAE@XZ */
  puStack_8 = &LAB_101e7318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10077780 UUIDATA_USER::UUIDATA_USER

/* protected: __thiscall UUIDATA_USER::UUIDATA_USER(void) */

UUIDATA_USER * __thiscall UUIDATA_USER::UUIDATA_USER(UUIDATA_USER *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77780  205  ??0UUIDATA_USER@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100777e0 UUIDATA_USER::UUIDATA_USER

/* public: __thiscall UUIDATA_USER::UUIDATA_USER(class UUIDATA_USER const &) */

UUIDATA_USER * __thiscall UUIDATA_USER::UUIDATA_USER(UUIDATA_USER *this,UUIDATA_USER *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x777e0  206  ??0UUIDATA_USER@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077840 FUN_10077840

UUIDATA_USER * FUN_10077840(byte param_1)

{
  UUIDATA_USER *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_USER::~UUIDATA_USER);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_USER::~UUIDATA_USER(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 100778a0 UUIDATA_TARGET::StaticClass

/* public: static class UClass * __cdecl UUIDATA_TARGET::StaticClass(void) */

UClass * __cdecl UUIDATA_TARGET::StaticClass(void)

{
                    /* 0x778a0  1002  ?StaticClass@UUIDATA_TARGET@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 100778b0 UUIDATA_TARGET::operator_new

/* public: static void * __cdecl UUIDATA_TARGET::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_TARGET::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x778b0  483  ??2UUIDATA_TARGET@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100778e0 UUIDATA_TARGET::~UUIDATA_TARGET

/* public: virtual __thiscall UUIDATA_TARGET::~UUIDATA_TARGET(void) */

void __thiscall UUIDATA_TARGET::~UUIDATA_TARGET(UUIDATA_TARGET *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x778e0  315  ??1UUIDATA_TARGET@@UAE@XZ */
  puStack_8 = &LAB_101e73a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10077940 UUIDATA_TARGET::UUIDATA_TARGET

/* protected: __thiscall UUIDATA_TARGET::UUIDATA_TARGET(void) */

UUIDATA_TARGET * __thiscall UUIDATA_TARGET::UUIDATA_TARGET(UUIDATA_TARGET *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77940  203  ??0UUIDATA_TARGET@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e73d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100779a0 UUIDATA_TARGET::UUIDATA_TARGET

/* public: __thiscall UUIDATA_TARGET::UUIDATA_TARGET(class UUIDATA_TARGET const &) */

UUIDATA_TARGET * __thiscall
UUIDATA_TARGET::UUIDATA_TARGET(UUIDATA_TARGET *this,UUIDATA_TARGET *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x779a0  204  ??0UUIDATA_TARGET@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077a00 FUN_10077a00

UUIDATA_TARGET * FUN_10077a00(byte param_1)

{
  UUIDATA_TARGET *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_TARGET::~UUIDATA_TARGET);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_TARGET::~UUIDATA_TARGET(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10077a60 UUIDATA_STATICOBJECT::StaticClass

/* public: static class UClass * __cdecl UUIDATA_STATICOBJECT::StaticClass(void) */

UClass * __cdecl UUIDATA_STATICOBJECT::StaticClass(void)

{
                    /* 0x77a60  1001  ?StaticClass@UUIDATA_STATICOBJECT@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10077a70 UUIDATA_STATICOBJECT::operator_new

/* public: static void * __cdecl UUIDATA_STATICOBJECT::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIDATA_STATICOBJECT::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x77a70  481  ??2UUIDATA_STATICOBJECT@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10077aa0 UUIDATA_STATICOBJECT::~UUIDATA_STATICOBJECT

/* public: virtual __thiscall UUIDATA_STATICOBJECT::~UUIDATA_STATICOBJECT(void) */

void __thiscall UUIDATA_STATICOBJECT::~UUIDATA_STATICOBJECT(UUIDATA_STATICOBJECT *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77aa0  314  ??1UUIDATA_STATICOBJECT@@UAE@XZ */
  puStack_8 = &LAB_101e7438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10077b00 UUIDATA_STATICOBJECT::UUIDATA_STATICOBJECT

/* protected: __thiscall UUIDATA_STATICOBJECT::UUIDATA_STATICOBJECT(void) */

UUIDATA_STATICOBJECT * __thiscall
UUIDATA_STATICOBJECT::UUIDATA_STATICOBJECT(UUIDATA_STATICOBJECT *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77b00  201  ??0UUIDATA_STATICOBJECT@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077b60 UUIDATA_STATICOBJECT::UUIDATA_STATICOBJECT

/* public: __thiscall UUIDATA_STATICOBJECT::UUIDATA_STATICOBJECT(class UUIDATA_STATICOBJECT const &)
    */

UUIDATA_STATICOBJECT * __thiscall
UUIDATA_STATICOBJECT::UUIDATA_STATICOBJECT(UUIDATA_STATICOBJECT *this,UUIDATA_STATICOBJECT *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77b60  202  ??0UUIDATA_STATICOBJECT@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077bc0 FUN_10077bc0

UUIDATA_STATICOBJECT * FUN_10077bc0(byte param_1)

{
  UUIDATA_STATICOBJECT *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_STATICOBJECT::~UUIDATA_STATICOBJECT);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_STATICOBJECT::~UUIDATA_STATICOBJECT(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10077c20 UUIDATA_SKILL::StaticClass

/* public: static class UClass * __cdecl UUIDATA_SKILL::StaticClass(void) */

UClass * __cdecl UUIDATA_SKILL::StaticClass(void)

{
                    /* 0x77c20  1000  ?StaticClass@UUIDATA_SKILL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10077c30 UUIDATA_SKILL::operator_new

/* public: static void * __cdecl UUIDATA_SKILL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_SKILL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x77c30  479  ??2UUIDATA_SKILL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10077c60 UUIDATA_SKILL::~UUIDATA_SKILL

/* public: virtual __thiscall UUIDATA_SKILL::~UUIDATA_SKILL(void) */

void __thiscall UUIDATA_SKILL::~UUIDATA_SKILL(UUIDATA_SKILL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77c60  313  ??1UUIDATA_SKILL@@UAE@XZ */
  puStack_8 = &LAB_101e74c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10077cc0 UUIDATA_SKILL::UUIDATA_SKILL

/* protected: __thiscall UUIDATA_SKILL::UUIDATA_SKILL(void) */

UUIDATA_SKILL * __thiscall UUIDATA_SKILL::UUIDATA_SKILL(UUIDATA_SKILL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77cc0  199  ??0UUIDATA_SKILL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e74f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077d20 UUIDATA_SKILL::UUIDATA_SKILL

/* public: __thiscall UUIDATA_SKILL::UUIDATA_SKILL(class UUIDATA_SKILL const &) */

UUIDATA_SKILL * __thiscall UUIDATA_SKILL::UUIDATA_SKILL(UUIDATA_SKILL *this,UUIDATA_SKILL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77d20  200  ??0UUIDATA_SKILL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077d80 FUN_10077d80

UUIDATA_SKILL * FUN_10077d80(byte param_1)

{
  UUIDATA_SKILL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_SKILL::~UUIDATA_SKILL)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_SKILL::~UUIDATA_SKILL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10077de0 UUIDATA_RECIPE::StaticClass

/* public: static class UClass * __cdecl UUIDATA_RECIPE::StaticClass(void) */

UClass * __cdecl UUIDATA_RECIPE::StaticClass(void)

{
                    /* 0x77de0  998  ?StaticClass@UUIDATA_RECIPE@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10077df0 UUIDATA_RECIPE::operator_new

/* public: static void * __cdecl UUIDATA_RECIPE::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_RECIPE::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x77df0  475  ??2UUIDATA_RECIPE@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10077e20 UUIDATA_RECIPE::~UUIDATA_RECIPE

/* public: virtual __thiscall UUIDATA_RECIPE::~UUIDATA_RECIPE(void) */

void __thiscall UUIDATA_RECIPE::~UUIDATA_RECIPE(UUIDATA_RECIPE *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77e20  311  ??1UUIDATA_RECIPE@@UAE@XZ */
  puStack_8 = &LAB_101e7558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10077e80 UUIDATA_RECIPE::UUIDATA_RECIPE

/* protected: __thiscall UUIDATA_RECIPE::UUIDATA_RECIPE(void) */

UUIDATA_RECIPE * __thiscall UUIDATA_RECIPE::UUIDATA_RECIPE(UUIDATA_RECIPE *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77e80  195  ??0UUIDATA_RECIPE@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077ee0 UUIDATA_RECIPE::UUIDATA_RECIPE

/* public: __thiscall UUIDATA_RECIPE::UUIDATA_RECIPE(class UUIDATA_RECIPE const &) */

UUIDATA_RECIPE * __thiscall
UUIDATA_RECIPE::UUIDATA_RECIPE(UUIDATA_RECIPE *this,UUIDATA_RECIPE *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77ee0  196  ??0UUIDATA_RECIPE@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e75b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10077f40 FUN_10077f40

UUIDATA_RECIPE * FUN_10077f40(byte param_1)

{
  UUIDATA_RECIPE *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_RECIPE::~UUIDATA_RECIPE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_RECIPE::~UUIDATA_RECIPE(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10077fa0 UUIDATA_RAID::StaticClass

/* public: static class UClass * __cdecl UUIDATA_RAID::StaticClass(void) */

UClass * __cdecl UUIDATA_RAID::StaticClass(void)

{
                    /* 0x77fa0  997  ?StaticClass@UUIDATA_RAID@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10077fb0 UUIDATA_RAID::operator_new

/* public: static void * __cdecl UUIDATA_RAID::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_RAID::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x77fb0  473  ??2UUIDATA_RAID@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10077fe0 UUIDATA_RAID::~UUIDATA_RAID

/* public: virtual __thiscall UUIDATA_RAID::~UUIDATA_RAID(void) */

void __thiscall UUIDATA_RAID::~UUIDATA_RAID(UUIDATA_RAID *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x77fe0  310  ??1UUIDATA_RAID@@UAE@XZ */
  puStack_8 = &LAB_101e75e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078040 UUIDATA_RAID::UUIDATA_RAID

/* protected: __thiscall UUIDATA_RAID::UUIDATA_RAID(void) */

UUIDATA_RAID * __thiscall UUIDATA_RAID::UUIDATA_RAID(UUIDATA_RAID *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78040  193  ??0UUIDATA_RAID@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100780a0 UUIDATA_RAID::UUIDATA_RAID

/* public: __thiscall UUIDATA_RAID::UUIDATA_RAID(class UUIDATA_RAID const &) */

UUIDATA_RAID * __thiscall UUIDATA_RAID::UUIDATA_RAID(UUIDATA_RAID *this,UUIDATA_RAID *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x780a0  194  ??0UUIDATA_RAID@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078100 FUN_10078100

UUIDATA_RAID * FUN_10078100(byte param_1)

{
  UUIDATA_RAID *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_RAID::~UUIDATA_RAID);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_RAID::~UUIDATA_RAID(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10078160 UUIDATA_QUEST::StaticClass

/* public: static class UClass * __cdecl UUIDATA_QUEST::StaticClass(void) */

UClass * __cdecl UUIDATA_QUEST::StaticClass(void)

{
                    /* 0x78160  996  ?StaticClass@UUIDATA_QUEST@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10078170 UUIDATA_QUEST::operator_new

/* public: static void * __cdecl UUIDATA_QUEST::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_QUEST::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x78170  471  ??2UUIDATA_QUEST@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100781a0 UUIDATA_QUEST::~UUIDATA_QUEST

/* public: virtual __thiscall UUIDATA_QUEST::~UUIDATA_QUEST(void) */

void __thiscall UUIDATA_QUEST::~UUIDATA_QUEST(UUIDATA_QUEST *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x781a0  309  ??1UUIDATA_QUEST@@UAE@XZ */
  puStack_8 = &LAB_101e7678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078200 UUIDATA_QUEST::UUIDATA_QUEST

/* protected: __thiscall UUIDATA_QUEST::UUIDATA_QUEST(void) */

UUIDATA_QUEST * __thiscall UUIDATA_QUEST::UUIDATA_QUEST(UUIDATA_QUEST *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78200  191  ??0UUIDATA_QUEST@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e76a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078260 UUIDATA_QUEST::UUIDATA_QUEST

/* public: __thiscall UUIDATA_QUEST::UUIDATA_QUEST(class UUIDATA_QUEST const &) */

UUIDATA_QUEST * __thiscall UUIDATA_QUEST::UUIDATA_QUEST(UUIDATA_QUEST *this,UUIDATA_QUEST *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78260  192  ??0UUIDATA_QUEST@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e76d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100782c0 FUN_100782c0

UUIDATA_QUEST * FUN_100782c0(byte param_1)

{
  UUIDATA_QUEST *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_QUEST::~UUIDATA_QUEST)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_QUEST::~UUIDATA_QUEST(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10078320 UUIDATA_PLAYER::StaticClass

/* public: static class UClass * __cdecl UUIDATA_PLAYER::StaticClass(void) */

UClass * __cdecl UUIDATA_PLAYER::StaticClass(void)

{
                    /* 0x78320  995  ?StaticClass@UUIDATA_PLAYER@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10078330 UUIDATA_PLAYER::operator_new

/* public: static void * __cdecl UUIDATA_PLAYER::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_PLAYER::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x78330  469  ??2UUIDATA_PLAYER@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10078360 UUIDATA_PLAYER::~UUIDATA_PLAYER

/* public: virtual __thiscall UUIDATA_PLAYER::~UUIDATA_PLAYER(void) */

void __thiscall UUIDATA_PLAYER::~UUIDATA_PLAYER(UUIDATA_PLAYER *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78360  308  ??1UUIDATA_PLAYER@@UAE@XZ */
  puStack_8 = &LAB_101e7708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100783c0 UUIDATA_PLAYER::UUIDATA_PLAYER

/* protected: __thiscall UUIDATA_PLAYER::UUIDATA_PLAYER(void) */

UUIDATA_PLAYER * __thiscall UUIDATA_PLAYER::UUIDATA_PLAYER(UUIDATA_PLAYER *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x783c0  189  ??0UUIDATA_PLAYER@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078420 UUIDATA_PLAYER::UUIDATA_PLAYER

/* public: __thiscall UUIDATA_PLAYER::UUIDATA_PLAYER(class UUIDATA_PLAYER const &) */

UUIDATA_PLAYER * __thiscall
UUIDATA_PLAYER::UUIDATA_PLAYER(UUIDATA_PLAYER *this,UUIDATA_PLAYER *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78420  190  ??0UUIDATA_PLAYER@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078480 FUN_10078480

UUIDATA_PLAYER * FUN_10078480(byte param_1)

{
  UUIDATA_PLAYER *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_PLAYER::~UUIDATA_PLAYER);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_PLAYER::~UUIDATA_PLAYER(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 100784e0 UUIDATA_PET::StaticClass

/* public: static class UClass * __cdecl UUIDATA_PET::StaticClass(void) */

UClass * __cdecl UUIDATA_PET::StaticClass(void)

{
                    /* 0x784e0  994  ?StaticClass@UUIDATA_PET@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 100784f0 UUIDATA_PET::operator_new

/* public: static void * __cdecl UUIDATA_PET::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_PET::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x784f0  467  ??2UUIDATA_PET@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10078520 UUIDATA_PET::~UUIDATA_PET

/* public: virtual __thiscall UUIDATA_PET::~UUIDATA_PET(void) */

void __thiscall UUIDATA_PET::~UUIDATA_PET(UUIDATA_PET *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78520  307  ??1UUIDATA_PET@@UAE@XZ */
  puStack_8 = &LAB_101e7798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078580 UUIDATA_PET::UUIDATA_PET

/* protected: __thiscall UUIDATA_PET::UUIDATA_PET(void) */

UUIDATA_PET * __thiscall UUIDATA_PET::UUIDATA_PET(UUIDATA_PET *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78580  187  ??0UUIDATA_PET@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e77c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100785e0 UUIDATA_PET::UUIDATA_PET

/* public: __thiscall UUIDATA_PET::UUIDATA_PET(class UUIDATA_PET const &) */

UUIDATA_PET * __thiscall UUIDATA_PET::UUIDATA_PET(UUIDATA_PET *this,UUIDATA_PET *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x785e0  188  ??0UUIDATA_PET@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e77f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078640 FUN_10078640

UUIDATA_PET * FUN_10078640(byte param_1)

{
  UUIDATA_PET *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_PET::~UUIDATA_PET);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_PET::~UUIDATA_PET(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 100786a0 UUIDATA_PARTY::StaticClass

/* public: static class UClass * __cdecl UUIDATA_PARTY::StaticClass(void) */

UClass * __cdecl UUIDATA_PARTY::StaticClass(void)

{
                    /* 0x786a0  993  ?StaticClass@UUIDATA_PARTY@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 100786b0 UUIDATA_PARTY::operator_new

/* public: static void * __cdecl UUIDATA_PARTY::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_PARTY::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x786b0  465  ??2UUIDATA_PARTY@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100786e0 UUIDATA_PARTY::~UUIDATA_PARTY

/* public: virtual __thiscall UUIDATA_PARTY::~UUIDATA_PARTY(void) */

void __thiscall UUIDATA_PARTY::~UUIDATA_PARTY(UUIDATA_PARTY *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x786e0  306  ??1UUIDATA_PARTY@@UAE@XZ */
  puStack_8 = &LAB_101e7828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078740 UUIDATA_PARTY::UUIDATA_PARTY

/* protected: __thiscall UUIDATA_PARTY::UUIDATA_PARTY(void) */

UUIDATA_PARTY * __thiscall UUIDATA_PARTY::UUIDATA_PARTY(UUIDATA_PARTY *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78740  185  ??0UUIDATA_PARTY@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100787a0 UUIDATA_PARTY::UUIDATA_PARTY

/* public: __thiscall UUIDATA_PARTY::UUIDATA_PARTY(class UUIDATA_PARTY const &) */

UUIDATA_PARTY * __thiscall UUIDATA_PARTY::UUIDATA_PARTY(UUIDATA_PARTY *this,UUIDATA_PARTY *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x787a0  186  ??0UUIDATA_PARTY@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078800 FUN_10078800

UUIDATA_PARTY * FUN_10078800(byte param_1)

{
  UUIDATA_PARTY *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_PARTY::~UUIDATA_PARTY)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_PARTY::~UUIDATA_PARTY(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10078860 UUIDATA_NPC::StaticClass

/* public: static class UClass * __cdecl UUIDATA_NPC::StaticClass(void) */

UClass * __cdecl UUIDATA_NPC::StaticClass(void)

{
                    /* 0x78860  992  ?StaticClass@UUIDATA_NPC@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10078870 UUIDATA_NPC::operator_new

/* public: static void * __cdecl UUIDATA_NPC::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_NPC::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x78870  463  ??2UUIDATA_NPC@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100788a0 UUIDATA_NPC::~UUIDATA_NPC

/* public: virtual __thiscall UUIDATA_NPC::~UUIDATA_NPC(void) */

void __thiscall UUIDATA_NPC::~UUIDATA_NPC(UUIDATA_NPC *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x788a0  305  ??1UUIDATA_NPC@@UAE@XZ */
  puStack_8 = &LAB_101e78b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078900 UUIDATA_NPC::UUIDATA_NPC

/* protected: __thiscall UUIDATA_NPC::UUIDATA_NPC(void) */

UUIDATA_NPC * __thiscall UUIDATA_NPC::UUIDATA_NPC(UUIDATA_NPC *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78900  183  ??0UUIDATA_NPC@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e78e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078960 UUIDATA_NPC::UUIDATA_NPC

/* public: __thiscall UUIDATA_NPC::UUIDATA_NPC(class UUIDATA_NPC const &) */

UUIDATA_NPC * __thiscall UUIDATA_NPC::UUIDATA_NPC(UUIDATA_NPC *this,UUIDATA_NPC *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78960  184  ??0UUIDATA_NPC@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100789c0 FUN_100789c0

UUIDATA_NPC * FUN_100789c0(byte param_1)

{
  UUIDATA_NPC *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_NPC::~UUIDATA_NPC);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_NPC::~UUIDATA_NPC(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10078a20 UUIDATA_MACRO::StaticClass

/* public: static class UClass * __cdecl UUIDATA_MACRO::StaticClass(void) */

UClass * __cdecl UUIDATA_MACRO::StaticClass(void)

{
                    /* 0x78a20  991  ?StaticClass@UUIDATA_MACRO@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10078a30 UUIDATA_MACRO::operator_new

/* public: static void * __cdecl UUIDATA_MACRO::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_MACRO::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x78a30  461  ??2UUIDATA_MACRO@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10078a60 UUIDATA_MACRO::~UUIDATA_MACRO

/* public: virtual __thiscall UUIDATA_MACRO::~UUIDATA_MACRO(void) */

void __thiscall UUIDATA_MACRO::~UUIDATA_MACRO(UUIDATA_MACRO *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78a60  304  ??1UUIDATA_MACRO@@UAE@XZ */
  puStack_8 = &LAB_101e7948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078ac0 UUIDATA_MACRO::UUIDATA_MACRO

/* protected: __thiscall UUIDATA_MACRO::UUIDATA_MACRO(void) */

UUIDATA_MACRO * __thiscall UUIDATA_MACRO::UUIDATA_MACRO(UUIDATA_MACRO *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78ac0  181  ??0UUIDATA_MACRO@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078b20 UUIDATA_MACRO::UUIDATA_MACRO

/* public: __thiscall UUIDATA_MACRO::UUIDATA_MACRO(class UUIDATA_MACRO const &) */

UUIDATA_MACRO * __thiscall UUIDATA_MACRO::UUIDATA_MACRO(UUIDATA_MACRO *this,UUIDATA_MACRO *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78b20  182  ??0UUIDATA_MACRO@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e79a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078b80 FUN_10078b80

UUIDATA_MACRO * FUN_10078b80(byte param_1)

{
  UUIDATA_MACRO *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_MACRO::~UUIDATA_MACRO)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_MACRO::~UUIDATA_MACRO(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10078be0 UUIDATA_ITEM::StaticClass

/* public: static class UClass * __cdecl UUIDATA_ITEM::StaticClass(void) */

UClass * __cdecl UUIDATA_ITEM::StaticClass(void)

{
                    /* 0x78be0  990  ?StaticClass@UUIDATA_ITEM@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10078bf0 UUIDATA_ITEM::operator_new

/* public: static void * __cdecl UUIDATA_ITEM::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_ITEM::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x78bf0  459  ??2UUIDATA_ITEM@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10078c20 UUIDATA_ITEM::~UUIDATA_ITEM

/* public: virtual __thiscall UUIDATA_ITEM::~UUIDATA_ITEM(void) */

void __thiscall UUIDATA_ITEM::~UUIDATA_ITEM(UUIDATA_ITEM *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78c20  303  ??1UUIDATA_ITEM@@UAE@XZ */
  puStack_8 = &LAB_101e79d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078c80 UUIDATA_ITEM::UUIDATA_ITEM

/* protected: __thiscall UUIDATA_ITEM::UUIDATA_ITEM(void) */

UUIDATA_ITEM * __thiscall UUIDATA_ITEM::UUIDATA_ITEM(UUIDATA_ITEM *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78c80  179  ??0UUIDATA_ITEM@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078ce0 UUIDATA_ITEM::UUIDATA_ITEM

/* public: __thiscall UUIDATA_ITEM::UUIDATA_ITEM(class UUIDATA_ITEM const &) */

UUIDATA_ITEM * __thiscall UUIDATA_ITEM::UUIDATA_ITEM(UUIDATA_ITEM *this,UUIDATA_ITEM *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78ce0  180  ??0UUIDATA_ITEM@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078d40 FUN_10078d40

UUIDATA_ITEM * FUN_10078d40(byte param_1)

{
  UUIDATA_ITEM *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_ITEM::~UUIDATA_ITEM);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_ITEM::~UUIDATA_ITEM(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10078da0 UUIDATA_HUNTINGZONE::StaticClass

/* public: static class UClass * __cdecl UUIDATA_HUNTINGZONE::StaticClass(void) */

UClass * __cdecl UUIDATA_HUNTINGZONE::StaticClass(void)

{
                    /* 0x78da0  989  ?StaticClass@UUIDATA_HUNTINGZONE@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10078db0 UUIDATA_HUNTINGZONE::operator_new

/* public: static void * __cdecl UUIDATA_HUNTINGZONE::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIDATA_HUNTINGZONE::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x78db0  457  ??2UUIDATA_HUNTINGZONE@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10078de0 UUIDATA_HUNTINGZONE::~UUIDATA_HUNTINGZONE

/* public: virtual __thiscall UUIDATA_HUNTINGZONE::~UUIDATA_HUNTINGZONE(void) */

void __thiscall UUIDATA_HUNTINGZONE::~UUIDATA_HUNTINGZONE(UUIDATA_HUNTINGZONE *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78de0  302  ??1UUIDATA_HUNTINGZONE@@UAE@XZ */
  puStack_8 = &LAB_101e7a68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10078e40 UUIDATA_HUNTINGZONE::UUIDATA_HUNTINGZONE

/* protected: __thiscall UUIDATA_HUNTINGZONE::UUIDATA_HUNTINGZONE(void) */

UUIDATA_HUNTINGZONE * __thiscall UUIDATA_HUNTINGZONE::UUIDATA_HUNTINGZONE(UUIDATA_HUNTINGZONE *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78e40  177  ??0UUIDATA_HUNTINGZONE@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7a98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078ea0 UUIDATA_HUNTINGZONE::UUIDATA_HUNTINGZONE

/* public: __thiscall UUIDATA_HUNTINGZONE::UUIDATA_HUNTINGZONE(class UUIDATA_HUNTINGZONE const &) */

UUIDATA_HUNTINGZONE * __thiscall
UUIDATA_HUNTINGZONE::UUIDATA_HUNTINGZONE(UUIDATA_HUNTINGZONE *this,UUIDATA_HUNTINGZONE *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78ea0  178  ??0UUIDATA_HUNTINGZONE@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10078f00 FUN_10078f00

UUIDATA_HUNTINGZONE * FUN_10078f00(byte param_1)

{
  UUIDATA_HUNTINGZONE *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_HUNTINGZONE::~UUIDATA_HUNTINGZONE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_HUNTINGZONE::~UUIDATA_HUNTINGZONE(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10078f60 UUIDATA_HENNA::StaticClass

/* public: static class UClass * __cdecl UUIDATA_HENNA::StaticClass(void) */

UClass * __cdecl UUIDATA_HENNA::StaticClass(void)

{
                    /* 0x78f60  988  ?StaticClass@UUIDATA_HENNA@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10078f70 UUIDATA_HENNA::operator_new

/* public: static void * __cdecl UUIDATA_HENNA::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_HENNA::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x78f70  455  ??2UUIDATA_HENNA@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10078fa0 UUIDATA_HENNA::~UUIDATA_HENNA

/* public: virtual __thiscall UUIDATA_HENNA::~UUIDATA_HENNA(void) */

void __thiscall UUIDATA_HENNA::~UUIDATA_HENNA(UUIDATA_HENNA *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x78fa0  301  ??1UUIDATA_HENNA@@UAE@XZ */
  puStack_8 = &LAB_101e7af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079000 UUIDATA_HENNA::UUIDATA_HENNA

/* protected: __thiscall UUIDATA_HENNA::UUIDATA_HENNA(void) */

UUIDATA_HENNA * __thiscall UUIDATA_HENNA::UUIDATA_HENNA(UUIDATA_HENNA *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79000  175  ??0UUIDATA_HENNA@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079060 UUIDATA_HENNA::UUIDATA_HENNA

/* public: __thiscall UUIDATA_HENNA::UUIDATA_HENNA(class UUIDATA_HENNA const &) */

UUIDATA_HENNA * __thiscall UUIDATA_HENNA::UUIDATA_HENNA(UUIDATA_HENNA *this,UUIDATA_HENNA *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79060  176  ??0UUIDATA_HENNA@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7b58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100790c0 FUN_100790c0

UUIDATA_HENNA * FUN_100790c0(byte param_1)

{
  UUIDATA_HENNA *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_HENNA::~UUIDATA_HENNA)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_HENNA::~UUIDATA_HENNA(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10079120 UUIDATA_GAMETIP::StaticClass

/* public: static class UClass * __cdecl UUIDATA_GAMETIP::StaticClass(void) */

UClass * __cdecl UUIDATA_GAMETIP::StaticClass(void)

{
                    /* 0x79120  987  ?StaticClass@UUIDATA_GAMETIP@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079130 UUIDATA_GAMETIP::operator_new

/* public: static void * __cdecl UUIDATA_GAMETIP::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_GAMETIP::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79130  453  ??2UUIDATA_GAMETIP@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10079160 UActionAPI::operator_new

/* public: static void * __cdecl UActionAPI::operator new(unsigned int,enum EInternal *) */

void * __cdecl UActionAPI::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x79160  322  ??2UActionAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  324  ??2UAnimTextureHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  326  ??2UAudioAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  328  ??2UBarHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  330  ??2UButtonHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  332  ??2UChatWindowHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  334  ??2UCheckBoxHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  336  ??2UComboBoxHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  338  ??2UCommandChannelAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  340  ??2UDrawPanelHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  342  ??2UEditBoxHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  344  ??2UEnchantAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  346  ??2UEventMatchAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  348  ??2UGMAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  350  ??2UHennaAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  352  ??2UHeroTowerAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  354  ??2UHtmlHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  356  ??2UItemWindowHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  358  ??2UListCtrlHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  360  ??2UMacroAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  362  ??2UMiniMapAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  364  ??2UNameCtrlHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  366  ??2UOlympiadAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  368  ??2UPartyMatchAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  370  ??2UPetAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  372  ??2UPetitionAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  374  ??2UQuestAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  376  ??2URecipeAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  378  ??2URefineryAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  380  ??2USSQAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  382  ??2UShortcutAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  384  ??2USiegeAPI@@SAPAXIPAW4EInternal@@@Z
                       0x79160  386  ??2UStatusIconHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  388  ??2UTabHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  390  ??2UTextBoxHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  392  ??2UTextListBoxHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  394  ??2UTextureHandle@@SAPAXIPAW4EInternal@@@Z
                       0x79160  396  ??2UUIAPI_BARCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  398  ??2UUIAPI_BUTTON@@SAPAXIPAW4EInternal@@@Z
                       0x79160  400  ??2UUIAPI_CHECKBOX@@SAPAXIPAW4EInternal@@@Z
                       0x79160  402  ??2UUIAPI_COMBOBOX@@SAPAXIPAW4EInternal@@@Z
                       0x79160  404  ??2UUIAPI_EDITBOX@@SAPAXIPAW4EInternal@@@Z
                       0x79160  406  ??2UUIAPI_EFFECTBUTTON@@SAPAXIPAW4EInternal@@@Z
                       0x79160  408  ??2UUIAPI_HTMLCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  410  ??2UUIAPI_INVENWEIGHT@@SAPAXIPAW4EInternal@@@Z
                       0x79160  412  ??2UUIAPI_ITEMWINDOW@@SAPAXIPAW4EInternal@@@Z
                       0x79160  414  ??2UUIAPI_LISTBOX@@SAPAXIPAW4EInternal@@@Z
                       0x79160  416  ??2UUIAPI_LISTCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  418  ??2UUIAPI_MINIMAPCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  420  ??2UUIAPI_MULTIEDITBOX@@SAPAXIPAW4EInternal@@@Z
                       0x79160  422  ??2UUIAPI_MULTISELLITEMINFO@@SAPAXIPAW4EInternal@@@Z
                       0x79160  424  ??2UUIAPI_MULTISELLNEEDEDITEM@@SAPAXIPAW4EInternal@@@Z
                       0x79160  426  ??2UUIAPI_NAMECTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  428  ??2UUIAPI_PROGRESSCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  430  ??2UUIAPI_RADAR@@SAPAXIPAW4EInternal@@@Z
                       0x79160  432  ??2UUIAPI_SHORTCUTITEMWINDOW@@SAPAXIPAW4EInternal@@@Z
                       0x79160  434  ??2UUIAPI_SLIDERCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  436  ??2UUIAPI_STATUSBARCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  438  ??2UUIAPI_STATUSICONCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  440  ??2UUIAPI_TABCTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  442  ??2UUIAPI_TEXTBOX@@SAPAXIPAW4EInternal@@@Z
                       0x79160  444  ??2UUIAPI_TEXTLISTBOX@@SAPAXIPAW4EInternal@@@Z
                       0x79160  446  ??2UUIAPI_TEXTURECTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  448  ??2UUIAPI_TREECTRL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  450  ??2UUIAPI_WINDOW@@SAPAXIPAW4EInternal@@@Z
                       0x79160  452  ??2UUIDATA_CLAN@@SAPAXIPAW4EInternal@@@Z
                       0x79160  454  ??2UUIDATA_GAMETIP@@SAPAXIPAW4EInternal@@@Z
                       0x79160  456  ??2UUIDATA_HENNA@@SAPAXIPAW4EInternal@@@Z
                       0x79160  458  ??2UUIDATA_HUNTINGZONE@@SAPAXIPAW4EInternal@@@Z
                       0x79160  460  ??2UUIDATA_ITEM@@SAPAXIPAW4EInternal@@@Z
                       0x79160  462  ??2UUIDATA_MACRO@@SAPAXIPAW4EInternal@@@Z
                       0x79160  464  ??2UUIDATA_NPC@@SAPAXIPAW4EInternal@@@Z
                       0x79160  466  ??2UUIDATA_PARTY@@SAPAXIPAW4EInternal@@@Z
                       0x79160  468  ??2UUIDATA_PET@@SAPAXIPAW4EInternal@@@Z
                       0x79160  470  ??2UUIDATA_PLAYER@@SAPAXIPAW4EInternal@@@Z
                       0x79160  472  ??2UUIDATA_QUEST@@SAPAXIPAW4EInternal@@@Z
                       0x79160  474  ??2UUIDATA_RAID@@SAPAXIPAW4EInternal@@@Z
                       0x79160  476  ??2UUIDATA_RECIPE@@SAPAXIPAW4EInternal@@@Z
                       0x79160  478  ??2UUIDATA_REFINERYOPTION@@SAPAXIPAW4EInternal@@@Z
                       0x79160  480  ??2UUIDATA_SKILL@@SAPAXIPAW4EInternal@@@Z
                       0x79160  482  ??2UUIDATA_STATICOBJECT@@SAPAXIPAW4EInternal@@@Z
                       0x79160  484  ??2UUIDATA_TARGET@@SAPAXIPAW4EInternal@@@Z
                       0x79160  486  ??2UUIDATA_USER@@SAPAXIPAW4EInternal@@@Z
                       0x79160  488  ??2UUIDataManager@@SAPAXIPAW4EInternal@@@Z
                       0x79160  490  ??2UUIEventManager@@SAPAXIPAW4EInternal@@@Z
                       0x79160  492  ??2UUIScript@@SAPAXIPAW4EInternal@@@Z
                       0x79160  494  ??2UWindowHandle@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10079170 UUIDATA_GAMETIP::~UUIDATA_GAMETIP

/* public: virtual __thiscall UUIDATA_GAMETIP::~UUIDATA_GAMETIP(void) */

void __thiscall UUIDATA_GAMETIP::~UUIDATA_GAMETIP(UUIDATA_GAMETIP *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79170  300  ??1UUIDATA_GAMETIP@@UAE@XZ */
  puStack_8 = &LAB_101e7b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100791d0 UUIDATA_GAMETIP::UUIDATA_GAMETIP

/* protected: __thiscall UUIDATA_GAMETIP::UUIDATA_GAMETIP(void) */

UUIDATA_GAMETIP * __thiscall UUIDATA_GAMETIP::UUIDATA_GAMETIP(UUIDATA_GAMETIP *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x791d0  173  ??0UUIDATA_GAMETIP@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079230 UUIDATA_GAMETIP::UUIDATA_GAMETIP

/* public: __thiscall UUIDATA_GAMETIP::UUIDATA_GAMETIP(class UUIDATA_GAMETIP const &) */

UUIDATA_GAMETIP * __thiscall
UUIDATA_GAMETIP::UUIDATA_GAMETIP(UUIDATA_GAMETIP *this,UUIDATA_GAMETIP *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79230  174  ??0UUIDATA_GAMETIP@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079290 FUN_10079290

UUIDATA_GAMETIP * FUN_10079290(byte param_1)

{
  UUIDATA_GAMETIP *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_GAMETIP::~UUIDATA_GAMETIP);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_GAMETIP::~UUIDATA_GAMETIP(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 100792f0 UUIDATA_CLAN::StaticClass

/* public: static class UClass * __cdecl UUIDATA_CLAN::StaticClass(void) */

UClass * __cdecl UUIDATA_CLAN::StaticClass(void)

{
                    /* 0x792f0  986  ?StaticClass@UUIDATA_CLAN@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079300 UUIDATA_CLAN::operator_new

/* public: static void * __cdecl UUIDATA_CLAN::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIDATA_CLAN::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79300  451  ??2UUIDATA_CLAN@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10079330 UUIDATA_CLAN::~UUIDATA_CLAN

/* public: virtual __thiscall UUIDATA_CLAN::~UUIDATA_CLAN(void) */

void __thiscall UUIDATA_CLAN::~UUIDATA_CLAN(UUIDATA_CLAN *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79330  299  ??1UUIDATA_CLAN@@UAE@XZ */
  puStack_8 = &LAB_101e7c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIDataManager::~UUIDataManager((UUIDataManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079390 UUIDATA_CLAN::UUIDATA_CLAN

/* protected: __thiscall UUIDATA_CLAN::UUIDATA_CLAN(void) */

UUIDATA_CLAN * __thiscall UUIDATA_CLAN::UUIDATA_CLAN(UUIDATA_CLAN *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79390  171  ??0UUIDATA_CLAN@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7c48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100793f0 UUIDATA_CLAN::UUIDATA_CLAN

/* public: __thiscall UUIDATA_CLAN::UUIDATA_CLAN(class UUIDATA_CLAN const &) */

UUIDATA_CLAN * __thiscall UUIDATA_CLAN::UUIDATA_CLAN(UUIDATA_CLAN *this,UUIDATA_CLAN *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x793f0  172  ??0UUIDATA_CLAN@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIDataManager::UUIDataManager((UUIDataManager *)this,(UUIDataManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079450 FUN_10079450

UUIDATA_CLAN * FUN_10079450(byte param_1)

{
  UUIDATA_CLAN *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_CLAN::~UUIDATA_CLAN);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_CLAN::~UUIDATA_CLAN(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 100794b0 URefineryAPI::StaticClass

/* public: static class UClass * __cdecl URefineryAPI::StaticClass(void) */

UClass * __cdecl URefineryAPI::StaticClass(void)

{
                    /* 0x794b0  949  ?StaticClass@URefineryAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 100794c0 URefineryAPI::operator_new

/* public: static void * __cdecl URefineryAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
URefineryAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x794c0  377  ??2URefineryAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100794f0 URefineryAPI::~URefineryAPI

/* public: virtual __thiscall URefineryAPI::~URefineryAPI(void) */

void __thiscall URefineryAPI::~URefineryAPI(URefineryAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x794f0  262  ??1URefineryAPI@@UAE@XZ */
  puStack_8 = &LAB_101e7ca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIEventManager::~UUIEventManager((UUIEventManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079550 URefineryAPI::URefineryAPI

/* protected: __thiscall URefineryAPI::URefineryAPI(void) */

URefineryAPI * __thiscall URefineryAPI::URefineryAPI(URefineryAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79550  97  ??0URefineryAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100795b0 URefineryAPI::URefineryAPI

/* public: __thiscall URefineryAPI::URefineryAPI(class URefineryAPI const &) */

URefineryAPI * __thiscall URefineryAPI::URefineryAPI(URefineryAPI *this,URefineryAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x795b0  98  ??0URefineryAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this,(UUIEventManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079610 FUN_10079610

URefineryAPI * FUN_10079610(byte param_1)

{
  URefineryAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),URefineryAPI::~URefineryAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  URefineryAPI::~URefineryAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10079670 UGMAPI::StaticClass

/* public: static class UClass * __cdecl UGMAPI::StaticClass(void) */

UClass * __cdecl UGMAPI::StaticClass(void)

{
                    /* 0x79670  934  ?StaticClass@UGMAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079680 UGMAPI::operator_new

/* public: static void * __cdecl UGMAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UGMAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79680  347  ??2UGMAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100796b0 UGMAPI::~UGMAPI

/* public: virtual __thiscall UGMAPI::~UGMAPI(void) */

void __thiscall UGMAPI::~UGMAPI(UGMAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x796b0  247  ??1UGMAPI@@UAE@XZ */
  puStack_8 = &LAB_101e7d38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIEventManager::~UUIEventManager((UUIEventManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079710 UGMAPI::UGMAPI

/* protected: __thiscall UGMAPI::UGMAPI(void) */

UGMAPI * __thiscall UGMAPI::UGMAPI(UGMAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79710  67  ??0UGMAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079770 UGMAPI::UGMAPI

/* public: __thiscall UGMAPI::UGMAPI(class UGMAPI const &) */

UGMAPI * __thiscall UGMAPI::UGMAPI(UGMAPI *this,UGMAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79770  68  ??0UGMAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7d98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this,(UUIEventManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 100797d0 FUN_100797d0

UGMAPI * FUN_100797d0(byte param_1)

{
  UGMAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UGMAPI::~UGMAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UGMAPI::~UGMAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10079830 UEventMatchAPI::StaticClass

/* public: static class UClass * __cdecl UEventMatchAPI::StaticClass(void) */

UClass * __cdecl UEventMatchAPI::StaticClass(void)

{
                    /* 0x79830  933  ?StaticClass@UEventMatchAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079840 UEventMatchAPI::operator_new

/* public: static void * __cdecl UEventMatchAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UEventMatchAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79840  345  ??2UEventMatchAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10079870 UEventMatchAPI::~UEventMatchAPI

/* public: virtual __thiscall UEventMatchAPI::~UEventMatchAPI(void) */

void __thiscall UEventMatchAPI::~UEventMatchAPI(UEventMatchAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79870  246  ??1UEventMatchAPI@@UAE@XZ */
  puStack_8 = &LAB_101e7dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIEventManager::~UUIEventManager((UUIEventManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100798d0 UEventMatchAPI::UEventMatchAPI

/* protected: __thiscall UEventMatchAPI::UEventMatchAPI(void) */

UEventMatchAPI * __thiscall UEventMatchAPI::UEventMatchAPI(UEventMatchAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x798d0  65  ??0UEventMatchAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079930 UEventMatchAPI::UEventMatchAPI

/* public: __thiscall UEventMatchAPI::UEventMatchAPI(class UEventMatchAPI const &) */

UEventMatchAPI * __thiscall
UEventMatchAPI::UEventMatchAPI(UEventMatchAPI *this,UEventMatchAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79930  66  ??0UEventMatchAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this,(UUIEventManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079990 FUN_10079990

UEventMatchAPI * FUN_10079990(byte param_1)

{
  UEventMatchAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UEventMatchAPI::~UEventMatchAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UEventMatchAPI::~UEventMatchAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 100799f0 UUIAPI_WINDOW::StaticClass

/* public: static class UClass * __cdecl UUIAPI_WINDOW::StaticClass(void) */

UClass * __cdecl UUIAPI_WINDOW::StaticClass(void)

{
                    /* 0x799f0  985  ?StaticClass@UUIAPI_WINDOW@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079a00 UUIAPI_WINDOW::operator_new

/* public: static void * __cdecl UUIAPI_WINDOW::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_WINDOW::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79a00  449  ??2UUIAPI_WINDOW@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10079a30 UUIAPI_WINDOW::~UUIAPI_WINDOW

/* public: virtual __thiscall UUIAPI_WINDOW::~UUIAPI_WINDOW(void) */

void __thiscall UUIAPI_WINDOW::~UUIAPI_WINDOW(UUIAPI_WINDOW *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79a30  298  ??1UUIAPI_WINDOW@@UAE@XZ */
  puStack_8 = &LAB_101e7e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIEventManager::~UUIEventManager((UUIEventManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079a90 UUIAPI_WINDOW::UUIAPI_WINDOW

/* protected: __thiscall UUIAPI_WINDOW::UUIAPI_WINDOW(void) */

UUIAPI_WINDOW * __thiscall UUIAPI_WINDOW::UUIAPI_WINDOW(UUIAPI_WINDOW *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79a90  169  ??0UUIAPI_WINDOW@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079af0 UUIAPI_WINDOW::UUIAPI_WINDOW

/* public: __thiscall UUIAPI_WINDOW::UUIAPI_WINDOW(class UUIAPI_WINDOW const &) */

UUIAPI_WINDOW * __thiscall UUIAPI_WINDOW::UUIAPI_WINDOW(UUIAPI_WINDOW *this,UUIAPI_WINDOW *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79af0  170  ??0UUIAPI_WINDOW@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this,(UUIEventManager *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079b50 FUN_10079b50

UUIAPI_WINDOW * FUN_10079b50(byte param_1)

{
  UUIAPI_WINDOW *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_WINDOW::~UUIAPI_WINDOW)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_WINDOW::~UUIAPI_WINDOW(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10079bb0 UUIAPI_TEXTLISTBOX::StaticClass

/* public: static class UClass * __cdecl UUIAPI_TEXTLISTBOX::StaticClass(void) */

UClass * __cdecl UUIAPI_TEXTLISTBOX::StaticClass(void)

{
                    /* 0x79bb0  982  ?StaticClass@UUIAPI_TEXTLISTBOX@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079bc0 UUIAPI_TEXTLISTBOX::operator_new

/* public: static void * __cdecl UUIAPI_TEXTLISTBOX::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_TEXTLISTBOX::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79bc0  443  ??2UUIAPI_TEXTLISTBOX@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10079bf0 UUIAPI_TEXTLISTBOX::~UUIAPI_TEXTLISTBOX

/* public: virtual __thiscall UUIAPI_TEXTLISTBOX::~UUIAPI_TEXTLISTBOX(void) */

void __thiscall UUIAPI_TEXTLISTBOX::~UUIAPI_TEXTLISTBOX(UUIAPI_TEXTLISTBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79bf0  295  ??1UUIAPI_TEXTLISTBOX@@UAE@XZ */
  puStack_8 = &LAB_101e7ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079c50 UUIAPI_TEXTLISTBOX::UUIAPI_TEXTLISTBOX

/* protected: __thiscall UUIAPI_TEXTLISTBOX::UUIAPI_TEXTLISTBOX(void) */

UUIAPI_TEXTLISTBOX * __thiscall UUIAPI_TEXTLISTBOX::UUIAPI_TEXTLISTBOX(UUIAPI_TEXTLISTBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79c50  163  ??0UUIAPI_TEXTLISTBOX@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079cb0 UUIAPI_TEXTLISTBOX::UUIAPI_TEXTLISTBOX

/* public: __thiscall UUIAPI_TEXTLISTBOX::UUIAPI_TEXTLISTBOX(class UUIAPI_TEXTLISTBOX const &) */

UUIAPI_TEXTLISTBOX * __thiscall
UUIAPI_TEXTLISTBOX::UUIAPI_TEXTLISTBOX(UUIAPI_TEXTLISTBOX *this,UUIAPI_TEXTLISTBOX *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79cb0  164  ??0UUIAPI_TEXTLISTBOX@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079d10 FUN_10079d10

UUIAPI_TEXTLISTBOX * FUN_10079d10(byte param_1)

{
  UUIAPI_TEXTLISTBOX *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_TEXTLISTBOX::~UUIAPI_TEXTLISTBOX);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_TEXTLISTBOX::~UUIAPI_TEXTLISTBOX(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10079d70 UUIAPI_TABCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_TABCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_TABCTRL::StaticClass(void)

{
                    /* 0x79d70  980  ?StaticClass@UUIAPI_TABCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079d80 UUIAPI_TABCTRL::operator_new

/* public: static void * __cdecl UUIAPI_TABCTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_TABCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79d80  439  ??2UUIAPI_TABCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10079db0 UUIAPI_TABCTRL::~UUIAPI_TABCTRL

/* public: virtual __thiscall UUIAPI_TABCTRL::~UUIAPI_TABCTRL(void) */

void __thiscall UUIAPI_TABCTRL::~UUIAPI_TABCTRL(UUIAPI_TABCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79db0  293  ??1UUIAPI_TABCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e7f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079e10 UUIAPI_TABCTRL::UUIAPI_TABCTRL

/* protected: __thiscall UUIAPI_TABCTRL::UUIAPI_TABCTRL(void) */

UUIAPI_TABCTRL * __thiscall UUIAPI_TABCTRL::UUIAPI_TABCTRL(UUIAPI_TABCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79e10  159  ??0UUIAPI_TABCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079e70 UUIAPI_TABCTRL::UUIAPI_TABCTRL

/* public: __thiscall UUIAPI_TABCTRL::UUIAPI_TABCTRL(class UUIAPI_TABCTRL const &) */

UUIAPI_TABCTRL * __thiscall
UUIAPI_TABCTRL::UUIAPI_TABCTRL(UUIAPI_TABCTRL *this,UUIAPI_TABCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79e70  160  ??0UUIAPI_TABCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e7fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 10079ed0 FUN_10079ed0

UUIAPI_TABCTRL * FUN_10079ed0(byte param_1)

{
  UUIAPI_TABCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_TABCTRL::~UUIAPI_TABCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_TABCTRL::~UUIAPI_TABCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10079f30 UUIAPI_NAMECTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_NAMECTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_NAMECTRL::StaticClass(void)

{
                    /* 0x79f30  973  ?StaticClass@UUIAPI_NAMECTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10079f40 UUIAPI_NAMECTRL::operator_new

/* public: static void * __cdecl UUIAPI_NAMECTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_NAMECTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x79f40  425  ??2UUIAPI_NAMECTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10079f70 UUIAPI_NAMECTRL::~UUIAPI_NAMECTRL

/* public: virtual __thiscall UUIAPI_NAMECTRL::~UUIAPI_NAMECTRL(void) */

void __thiscall UUIAPI_NAMECTRL::~UUIAPI_NAMECTRL(UUIAPI_NAMECTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79f70  286  ??1UUIAPI_NAMECTRL@@UAE@XZ */
  puStack_8 = &LAB_101e8008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10079fd0 UUIAPI_NAMECTRL::UUIAPI_NAMECTRL

/* protected: __thiscall UUIAPI_NAMECTRL::UUIAPI_NAMECTRL(void) */

UUIAPI_NAMECTRL * __thiscall UUIAPI_NAMECTRL::UUIAPI_NAMECTRL(UUIAPI_NAMECTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79fd0  145  ??0UUIAPI_NAMECTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a030 UUIAPI_NAMECTRL::UUIAPI_NAMECTRL

/* public: __thiscall UUIAPI_NAMECTRL::UUIAPI_NAMECTRL(class UUIAPI_NAMECTRL const &) */

UUIAPI_NAMECTRL * __thiscall
UUIAPI_NAMECTRL::UUIAPI_NAMECTRL(UUIAPI_NAMECTRL *this,UUIAPI_NAMECTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a030  146  ??0UUIAPI_NAMECTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a090 FUN_1007a090

UUIAPI_NAMECTRL * FUN_1007a090(byte param_1)

{
  UUIAPI_NAMECTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_NAMECTRL::~UUIAPI_NAMECTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_NAMECTRL::~UUIAPI_NAMECTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007a0f0 UUIAPI_STATUSBARCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_STATUSBARCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_STATUSBARCTRL::StaticClass(void)

{
                    /* 0x7a0f0  978  ?StaticClass@UUIAPI_STATUSBARCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007a100 UUIAPI_STATUSBARCTRL::operator_new

/* public: static void * __cdecl UUIAPI_STATUSBARCTRL::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_STATUSBARCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7a100  435  ??2UUIAPI_STATUSBARCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007a130 UUIAPI_STATUSBARCTRL::~UUIAPI_STATUSBARCTRL

/* public: virtual __thiscall UUIAPI_STATUSBARCTRL::~UUIAPI_STATUSBARCTRL(void) */

void __thiscall UUIAPI_STATUSBARCTRL::~UUIAPI_STATUSBARCTRL(UUIAPI_STATUSBARCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a130  291  ??1UUIAPI_STATUSBARCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e8098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007a190 UUIAPI_STATUSBARCTRL::UUIAPI_STATUSBARCTRL

/* protected: __thiscall UUIAPI_STATUSBARCTRL::UUIAPI_STATUSBARCTRL(void) */

UUIAPI_STATUSBARCTRL * __thiscall
UUIAPI_STATUSBARCTRL::UUIAPI_STATUSBARCTRL(UUIAPI_STATUSBARCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a190  155  ??0UUIAPI_STATUSBARCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e80c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a1f0 UUIAPI_STATUSBARCTRL::UUIAPI_STATUSBARCTRL

/* public: __thiscall UUIAPI_STATUSBARCTRL::UUIAPI_STATUSBARCTRL(class UUIAPI_STATUSBARCTRL const &)
    */

UUIAPI_STATUSBARCTRL * __thiscall
UUIAPI_STATUSBARCTRL::UUIAPI_STATUSBARCTRL(UUIAPI_STATUSBARCTRL *this,UUIAPI_STATUSBARCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a1f0  156  ??0UUIAPI_STATUSBARCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e80f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a250 FUN_1007a250

UUIAPI_STATUSBARCTRL * FUN_1007a250(byte param_1)

{
  UUIAPI_STATUSBARCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_STATUSBARCTRL::~UUIAPI_STATUSBARCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_STATUSBARCTRL::~UUIAPI_STATUSBARCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007a2b0 UUIAPI_LISTBOX::StaticClass

/* public: static class UClass * __cdecl UUIAPI_LISTBOX::StaticClass(void) */

UClass * __cdecl UUIAPI_LISTBOX::StaticClass(void)

{
                    /* 0x7a2b0  967  ?StaticClass@UUIAPI_LISTBOX@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007a2c0 UUIAPI_LISTBOX::operator_new

/* public: static void * __cdecl UUIAPI_LISTBOX::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_LISTBOX::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7a2c0  413  ??2UUIAPI_LISTBOX@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007a2f0 UUIAPI_LISTBOX::~UUIAPI_LISTBOX

/* public: virtual __thiscall UUIAPI_LISTBOX::~UUIAPI_LISTBOX(void) */

void __thiscall UUIAPI_LISTBOX::~UUIAPI_LISTBOX(UUIAPI_LISTBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a2f0  280  ??1UUIAPI_LISTBOX@@UAE@XZ */
  puStack_8 = &LAB_101e8128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007a350 UUIAPI_LISTBOX::UUIAPI_LISTBOX

/* protected: __thiscall UUIAPI_LISTBOX::UUIAPI_LISTBOX(void) */

UUIAPI_LISTBOX * __thiscall UUIAPI_LISTBOX::UUIAPI_LISTBOX(UUIAPI_LISTBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a350  133  ??0UUIAPI_LISTBOX@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a3b0 UUIAPI_LISTBOX::UUIAPI_LISTBOX

/* public: __thiscall UUIAPI_LISTBOX::UUIAPI_LISTBOX(class UUIAPI_LISTBOX const &) */

UUIAPI_LISTBOX * __thiscall
UUIAPI_LISTBOX::UUIAPI_LISTBOX(UUIAPI_LISTBOX *this,UUIAPI_LISTBOX *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a3b0  134  ??0UUIAPI_LISTBOX@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a410 FUN_1007a410

UUIAPI_LISTBOX * FUN_1007a410(byte param_1)

{
  UUIAPI_LISTBOX *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_LISTBOX::~UUIAPI_LISTBOX);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_LISTBOX::~UUIAPI_LISTBOX(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007a470 UUIAPI_LISTCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_LISTCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_LISTCTRL::StaticClass(void)

{
                    /* 0x7a470  968  ?StaticClass@UUIAPI_LISTCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007a480 UUIAPI_LISTCTRL::operator_new

/* public: static void * __cdecl UUIAPI_LISTCTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_LISTCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7a480  415  ??2UUIAPI_LISTCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007a4b0 UUIAPI_LISTCTRL::~UUIAPI_LISTCTRL

/* public: virtual __thiscall UUIAPI_LISTCTRL::~UUIAPI_LISTCTRL(void) */

void __thiscall UUIAPI_LISTCTRL::~UUIAPI_LISTCTRL(UUIAPI_LISTCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a4b0  281  ??1UUIAPI_LISTCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e81b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007a510 UUIAPI_LISTCTRL::UUIAPI_LISTCTRL

/* protected: __thiscall UUIAPI_LISTCTRL::UUIAPI_LISTCTRL(void) */

UUIAPI_LISTCTRL * __thiscall UUIAPI_LISTCTRL::UUIAPI_LISTCTRL(UUIAPI_LISTCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a510  135  ??0UUIAPI_LISTCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e81e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a570 UUIAPI_LISTCTRL::UUIAPI_LISTCTRL

/* public: __thiscall UUIAPI_LISTCTRL::UUIAPI_LISTCTRL(class UUIAPI_LISTCTRL const &) */

UUIAPI_LISTCTRL * __thiscall
UUIAPI_LISTCTRL::UUIAPI_LISTCTRL(UUIAPI_LISTCTRL *this,UUIAPI_LISTCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a570  136  ??0UUIAPI_LISTCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a5d0 FUN_1007a5d0

UUIAPI_LISTCTRL * FUN_1007a5d0(byte param_1)

{
  UUIAPI_LISTCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_LISTCTRL::~UUIAPI_LISTCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_LISTCTRL::~UUIAPI_LISTCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007a630 UUIAPI_MULTIEDITBOX::StaticClass

/* public: static class UClass * __cdecl UUIAPI_MULTIEDITBOX::StaticClass(void) */

UClass * __cdecl UUIAPI_MULTIEDITBOX::StaticClass(void)

{
                    /* 0x7a630  970  ?StaticClass@UUIAPI_MULTIEDITBOX@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007a640 UUIAPI_MULTIEDITBOX::operator_new

/* public: static void * __cdecl UUIAPI_MULTIEDITBOX::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_MULTIEDITBOX::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7a640  419  ??2UUIAPI_MULTIEDITBOX@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007a670 UUIAPI_MULTIEDITBOX::~UUIAPI_MULTIEDITBOX

/* public: virtual __thiscall UUIAPI_MULTIEDITBOX::~UUIAPI_MULTIEDITBOX(void) */

void __thiscall UUIAPI_MULTIEDITBOX::~UUIAPI_MULTIEDITBOX(UUIAPI_MULTIEDITBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a670  283  ??1UUIAPI_MULTIEDITBOX@@UAE@XZ */
  puStack_8 = &LAB_101e8248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007a6d0 UUIAPI_MULTIEDITBOX::UUIAPI_MULTIEDITBOX

/* protected: __thiscall UUIAPI_MULTIEDITBOX::UUIAPI_MULTIEDITBOX(void) */

UUIAPI_MULTIEDITBOX * __thiscall UUIAPI_MULTIEDITBOX::UUIAPI_MULTIEDITBOX(UUIAPI_MULTIEDITBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a6d0  139  ??0UUIAPI_MULTIEDITBOX@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a730 UUIAPI_MULTIEDITBOX::UUIAPI_MULTIEDITBOX

/* public: __thiscall UUIAPI_MULTIEDITBOX::UUIAPI_MULTIEDITBOX(class UUIAPI_MULTIEDITBOX const &) */

UUIAPI_MULTIEDITBOX * __thiscall
UUIAPI_MULTIEDITBOX::UUIAPI_MULTIEDITBOX(UUIAPI_MULTIEDITBOX *this,UUIAPI_MULTIEDITBOX *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a730  140  ??0UUIAPI_MULTIEDITBOX@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e82a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a790 FUN_1007a790

UUIAPI_MULTIEDITBOX * FUN_1007a790(byte param_1)

{
  UUIAPI_MULTIEDITBOX *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_MULTIEDITBOX::~UUIAPI_MULTIEDITBOX);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_MULTIEDITBOX::~UUIAPI_MULTIEDITBOX(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007a7f0 UUIAPI_PROGRESSCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_PROGRESSCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_PROGRESSCTRL::StaticClass(void)

{
                    /* 0x7a7f0  974  ?StaticClass@UUIAPI_PROGRESSCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007a800 UUIAPI_PROGRESSCTRL::operator_new

/* public: static void * __cdecl UUIAPI_PROGRESSCTRL::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_PROGRESSCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7a800  427  ??2UUIAPI_PROGRESSCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007a830 UUIAPI_PROGRESSCTRL::~UUIAPI_PROGRESSCTRL

/* public: virtual __thiscall UUIAPI_PROGRESSCTRL::~UUIAPI_PROGRESSCTRL(void) */

void __thiscall UUIAPI_PROGRESSCTRL::~UUIAPI_PROGRESSCTRL(UUIAPI_PROGRESSCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a830  287  ??1UUIAPI_PROGRESSCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e82d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007a890 UUIAPI_PROGRESSCTRL::UUIAPI_PROGRESSCTRL

/* protected: __thiscall UUIAPI_PROGRESSCTRL::UUIAPI_PROGRESSCTRL(void) */

UUIAPI_PROGRESSCTRL * __thiscall UUIAPI_PROGRESSCTRL::UUIAPI_PROGRESSCTRL(UUIAPI_PROGRESSCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a890  147  ??0UUIAPI_PROGRESSCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a8f0 UUIAPI_PROGRESSCTRL::UUIAPI_PROGRESSCTRL

/* public: __thiscall UUIAPI_PROGRESSCTRL::UUIAPI_PROGRESSCTRL(class UUIAPI_PROGRESSCTRL const &) */

UUIAPI_PROGRESSCTRL * __thiscall
UUIAPI_PROGRESSCTRL::UUIAPI_PROGRESSCTRL(UUIAPI_PROGRESSCTRL *this,UUIAPI_PROGRESSCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a8f0  148  ??0UUIAPI_PROGRESSCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007a950 FUN_1007a950

UUIAPI_PROGRESSCTRL * FUN_1007a950(byte param_1)

{
  UUIAPI_PROGRESSCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_PROGRESSCTRL::~UUIAPI_PROGRESSCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_PROGRESSCTRL::~UUIAPI_PROGRESSCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007a9b0 UUIAPI_CHECKBOX::StaticClass

/* public: static class UClass * __cdecl UUIAPI_CHECKBOX::StaticClass(void) */

UClass * __cdecl UUIAPI_CHECKBOX::StaticClass(void)

{
                    /* 0x7a9b0  960  ?StaticClass@UUIAPI_CHECKBOX@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007a9c0 UUIAPI_CHECKBOX::operator_new

/* public: static void * __cdecl UUIAPI_CHECKBOX::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_CHECKBOX::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7a9c0  399  ??2UUIAPI_CHECKBOX@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007a9f0 UUIAPI_CHECKBOX::~UUIAPI_CHECKBOX

/* public: virtual __thiscall UUIAPI_CHECKBOX::~UUIAPI_CHECKBOX(void) */

void __thiscall UUIAPI_CHECKBOX::~UUIAPI_CHECKBOX(UUIAPI_CHECKBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a9f0  273  ??1UUIAPI_CHECKBOX@@UAE@XZ */
  puStack_8 = &LAB_101e8368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007aa50 UUIAPI_CHECKBOX::UUIAPI_CHECKBOX

/* protected: __thiscall UUIAPI_CHECKBOX::UUIAPI_CHECKBOX(void) */

UUIAPI_CHECKBOX * __thiscall UUIAPI_CHECKBOX::UUIAPI_CHECKBOX(UUIAPI_CHECKBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7aa50  119  ??0UUIAPI_CHECKBOX@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007aab0 UUIAPI_CHECKBOX::UUIAPI_CHECKBOX

/* public: __thiscall UUIAPI_CHECKBOX::UUIAPI_CHECKBOX(class UUIAPI_CHECKBOX const &) */

UUIAPI_CHECKBOX * __thiscall
UUIAPI_CHECKBOX::UUIAPI_CHECKBOX(UUIAPI_CHECKBOX *this,UUIAPI_CHECKBOX *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7aab0  120  ??0UUIAPI_CHECKBOX@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e83c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ab10 FUN_1007ab10

UUIAPI_CHECKBOX * FUN_1007ab10(byte param_1)

{
  UUIAPI_CHECKBOX *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_CHECKBOX::~UUIAPI_CHECKBOX);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_CHECKBOX::~UUIAPI_CHECKBOX(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007ab70 UUIAPI_COMBOBOX::StaticClass

/* public: static class UClass * __cdecl UUIAPI_COMBOBOX::StaticClass(void) */

UClass * __cdecl UUIAPI_COMBOBOX::StaticClass(void)

{
                    /* 0x7ab70  961  ?StaticClass@UUIAPI_COMBOBOX@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007ab80 UUIAPI_COMBOBOX::operator_new

/* public: static void * __cdecl UUIAPI_COMBOBOX::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_COMBOBOX::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7ab80  401  ??2UUIAPI_COMBOBOX@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007abb0 UUIAPI_COMBOBOX::~UUIAPI_COMBOBOX

/* public: virtual __thiscall UUIAPI_COMBOBOX::~UUIAPI_COMBOBOX(void) */

void __thiscall UUIAPI_COMBOBOX::~UUIAPI_COMBOBOX(UUIAPI_COMBOBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7abb0  274  ??1UUIAPI_COMBOBOX@@UAE@XZ */
  puStack_8 = &LAB_101e83f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007ac10 UUIAPI_COMBOBOX::UUIAPI_COMBOBOX

/* protected: __thiscall UUIAPI_COMBOBOX::UUIAPI_COMBOBOX(void) */

UUIAPI_COMBOBOX * __thiscall UUIAPI_COMBOBOX::UUIAPI_COMBOBOX(UUIAPI_COMBOBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ac10  121  ??0UUIAPI_COMBOBOX@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ac70 UUIAPI_COMBOBOX::UUIAPI_COMBOBOX

/* public: __thiscall UUIAPI_COMBOBOX::UUIAPI_COMBOBOX(class UUIAPI_COMBOBOX const &) */

UUIAPI_COMBOBOX * __thiscall
UUIAPI_COMBOBOX::UUIAPI_COMBOBOX(UUIAPI_COMBOBOX *this,UUIAPI_COMBOBOX *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ac70  122  ??0UUIAPI_COMBOBOX@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007acd0 FUN_1007acd0

UUIAPI_COMBOBOX * FUN_1007acd0(byte param_1)

{
  UUIAPI_COMBOBOX *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_COMBOBOX::~UUIAPI_COMBOBOX);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_COMBOBOX::~UUIAPI_COMBOBOX(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007ad30 UUIAPI_EDITBOX::StaticClass

/* public: static class UClass * __cdecl UUIAPI_EDITBOX::StaticClass(void) */

UClass * __cdecl UUIAPI_EDITBOX::StaticClass(void)

{
                    /* 0x7ad30  962  ?StaticClass@UUIAPI_EDITBOX@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007ad40 UUIAPI_EDITBOX::operator_new

/* public: static void * __cdecl UUIAPI_EDITBOX::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_EDITBOX::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7ad40  403  ??2UUIAPI_EDITBOX@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007ad70 UUIAPI_EDITBOX::~UUIAPI_EDITBOX

/* public: virtual __thiscall UUIAPI_EDITBOX::~UUIAPI_EDITBOX(void) */

void __thiscall UUIAPI_EDITBOX::~UUIAPI_EDITBOX(UUIAPI_EDITBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ad70  275  ??1UUIAPI_EDITBOX@@UAE@XZ */
  puStack_8 = &LAB_101e8488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007add0 UUIAPI_EDITBOX::UUIAPI_EDITBOX

/* protected: __thiscall UUIAPI_EDITBOX::UUIAPI_EDITBOX(void) */

UUIAPI_EDITBOX * __thiscall UUIAPI_EDITBOX::UUIAPI_EDITBOX(UUIAPI_EDITBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7add0  123  ??0UUIAPI_EDITBOX@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e84b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ae30 UUIAPI_EDITBOX::UUIAPI_EDITBOX

/* public: __thiscall UUIAPI_EDITBOX::UUIAPI_EDITBOX(class UUIAPI_EDITBOX const &) */

UUIAPI_EDITBOX * __thiscall
UUIAPI_EDITBOX::UUIAPI_EDITBOX(UUIAPI_EDITBOX *this,UUIAPI_EDITBOX *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ae30  124  ??0UUIAPI_EDITBOX@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e84e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ae90 FUN_1007ae90

UUIAPI_EDITBOX * FUN_1007ae90(byte param_1)

{
  UUIAPI_EDITBOX *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_EDITBOX::~UUIAPI_EDITBOX);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_EDITBOX::~UUIAPI_EDITBOX(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007aef0 UUIAPI_BUTTON::StaticClass

/* public: static class UClass * __cdecl UUIAPI_BUTTON::StaticClass(void) */

UClass * __cdecl UUIAPI_BUTTON::StaticClass(void)

{
                    /* 0x7aef0  959  ?StaticClass@UUIAPI_BUTTON@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007af00 UUIAPI_BUTTON::operator_new

/* public: static void * __cdecl UUIAPI_BUTTON::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_BUTTON::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7af00  397  ??2UUIAPI_BUTTON@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007af30 UUIAPI_BUTTON::~UUIAPI_BUTTON

/* public: virtual __thiscall UUIAPI_BUTTON::~UUIAPI_BUTTON(void) */

void __thiscall UUIAPI_BUTTON::~UUIAPI_BUTTON(UUIAPI_BUTTON *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7af30  272  ??1UUIAPI_BUTTON@@UAE@XZ */
  puStack_8 = &LAB_101e8518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007af90 UUIAPI_BUTTON::UUIAPI_BUTTON

/* protected: __thiscall UUIAPI_BUTTON::UUIAPI_BUTTON(void) */

UUIAPI_BUTTON * __thiscall UUIAPI_BUTTON::UUIAPI_BUTTON(UUIAPI_BUTTON *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7af90  117  ??0UUIAPI_BUTTON@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007aff0 UUIAPI_BUTTON::UUIAPI_BUTTON

/* public: __thiscall UUIAPI_BUTTON::UUIAPI_BUTTON(class UUIAPI_BUTTON const &) */

UUIAPI_BUTTON * __thiscall UUIAPI_BUTTON::UUIAPI_BUTTON(UUIAPI_BUTTON *this,UUIAPI_BUTTON *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7aff0  118  ??0UUIAPI_BUTTON@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b050 FUN_1007b050

UUIAPI_BUTTON * FUN_1007b050(byte param_1)

{
  UUIAPI_BUTTON *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_BUTTON::~UUIAPI_BUTTON)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_BUTTON::~UUIAPI_BUTTON(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007b0b0 UUIAPI_TREECTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_TREECTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_TREECTRL::StaticClass(void)

{
                    /* 0x7b0b0  984  ?StaticClass@UUIAPI_TREECTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007b0c0 UUIAPI_TREECTRL::operator_new

/* public: static void * __cdecl UUIAPI_TREECTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_TREECTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7b0c0  447  ??2UUIAPI_TREECTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007b0f0 UUIAPI_TREECTRL::~UUIAPI_TREECTRL

/* public: virtual __thiscall UUIAPI_TREECTRL::~UUIAPI_TREECTRL(void) */

void __thiscall UUIAPI_TREECTRL::~UUIAPI_TREECTRL(UUIAPI_TREECTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b0f0  297  ??1UUIAPI_TREECTRL@@UAE@XZ */
  puStack_8 = &LAB_101e85a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007b150 UUIAPI_TREECTRL::UUIAPI_TREECTRL

/* protected: __thiscall UUIAPI_TREECTRL::UUIAPI_TREECTRL(void) */

UUIAPI_TREECTRL * __thiscall UUIAPI_TREECTRL::UUIAPI_TREECTRL(UUIAPI_TREECTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b150  167  ??0UUIAPI_TREECTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e85d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b1b0 UUIAPI_TREECTRL::UUIAPI_TREECTRL

/* public: __thiscall UUIAPI_TREECTRL::UUIAPI_TREECTRL(class UUIAPI_TREECTRL const &) */

UUIAPI_TREECTRL * __thiscall
UUIAPI_TREECTRL::UUIAPI_TREECTRL(UUIAPI_TREECTRL *this,UUIAPI_TREECTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b1b0  168  ??0UUIAPI_TREECTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b210 FUN_1007b210

UUIAPI_TREECTRL * FUN_1007b210(byte param_1)

{
  UUIAPI_TREECTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_TREECTRL::~UUIAPI_TREECTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_TREECTRL::~UUIAPI_TREECTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007b270 UUIAPI_TEXTURECTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_TEXTURECTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_TEXTURECTRL::StaticClass(void)

{
                    /* 0x7b270  983  ?StaticClass@UUIAPI_TEXTURECTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007b280 UUIAPI_TEXTURECTRL::operator_new

/* public: static void * __cdecl UUIAPI_TEXTURECTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_TEXTURECTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7b280  445  ??2UUIAPI_TEXTURECTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007b2b0 UUIAPI_TEXTURECTRL::~UUIAPI_TEXTURECTRL

/* public: virtual __thiscall UUIAPI_TEXTURECTRL::~UUIAPI_TEXTURECTRL(void) */

void __thiscall UUIAPI_TEXTURECTRL::~UUIAPI_TEXTURECTRL(UUIAPI_TEXTURECTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b2b0  296  ??1UUIAPI_TEXTURECTRL@@UAE@XZ */
  puStack_8 = &LAB_101e8638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007b310 UUIAPI_TEXTURECTRL::UUIAPI_TEXTURECTRL

/* protected: __thiscall UUIAPI_TEXTURECTRL::UUIAPI_TEXTURECTRL(void) */

UUIAPI_TEXTURECTRL * __thiscall UUIAPI_TEXTURECTRL::UUIAPI_TEXTURECTRL(UUIAPI_TEXTURECTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b310  165  ??0UUIAPI_TEXTURECTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b370 UUIAPI_TEXTURECTRL::UUIAPI_TEXTURECTRL

/* public: __thiscall UUIAPI_TEXTURECTRL::UUIAPI_TEXTURECTRL(class UUIAPI_TEXTURECTRL const &) */

UUIAPI_TEXTURECTRL * __thiscall
UUIAPI_TEXTURECTRL::UUIAPI_TEXTURECTRL(UUIAPI_TEXTURECTRL *this,UUIAPI_TEXTURECTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b370  166  ??0UUIAPI_TEXTURECTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b3d0 FUN_1007b3d0

UUIAPI_TEXTURECTRL * FUN_1007b3d0(byte param_1)

{
  UUIAPI_TEXTURECTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_TEXTURECTRL::~UUIAPI_TEXTURECTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_TEXTURECTRL::~UUIAPI_TEXTURECTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007b430 UUIAPI_TEXTBOX::StaticClass

/* public: static class UClass * __cdecl UUIAPI_TEXTBOX::StaticClass(void) */

UClass * __cdecl UUIAPI_TEXTBOX::StaticClass(void)

{
                    /* 0x7b430  981  ?StaticClass@UUIAPI_TEXTBOX@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007b440 UUIAPI_TEXTBOX::operator_new

/* public: static void * __cdecl UUIAPI_TEXTBOX::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_TEXTBOX::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7b440  441  ??2UUIAPI_TEXTBOX@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007b470 UUIAPI_TEXTBOX::~UUIAPI_TEXTBOX

/* public: virtual __thiscall UUIAPI_TEXTBOX::~UUIAPI_TEXTBOX(void) */

void __thiscall UUIAPI_TEXTBOX::~UUIAPI_TEXTBOX(UUIAPI_TEXTBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b470  294  ??1UUIAPI_TEXTBOX@@UAE@XZ */
  puStack_8 = &LAB_101e86c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007b4d0 UUIAPI_TEXTBOX::UUIAPI_TEXTBOX

/* protected: __thiscall UUIAPI_TEXTBOX::UUIAPI_TEXTBOX(void) */

UUIAPI_TEXTBOX * __thiscall UUIAPI_TEXTBOX::UUIAPI_TEXTBOX(UUIAPI_TEXTBOX *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b4d0  161  ??0UUIAPI_TEXTBOX@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e86f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b530 UUIAPI_TEXTBOX::UUIAPI_TEXTBOX

/* public: __thiscall UUIAPI_TEXTBOX::UUIAPI_TEXTBOX(class UUIAPI_TEXTBOX const &) */

UUIAPI_TEXTBOX * __thiscall
UUIAPI_TEXTBOX::UUIAPI_TEXTBOX(UUIAPI_TEXTBOX *this,UUIAPI_TEXTBOX *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b530  162  ??0UUIAPI_TEXTBOX@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b590 FUN_1007b590

UUIAPI_TEXTBOX * FUN_1007b590(byte param_1)

{
  UUIAPI_TEXTBOX *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_TEXTBOX::~UUIAPI_TEXTBOX);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_TEXTBOX::~UUIAPI_TEXTBOX(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007b5f0 UUIAPI_STATUSICONCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_STATUSICONCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_STATUSICONCTRL::StaticClass(void)

{
                    /* 0x7b5f0  979  ?StaticClass@UUIAPI_STATUSICONCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007b600 UUIAPI_STATUSICONCTRL::operator_new

/* public: static void * __cdecl UUIAPI_STATUSICONCTRL::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_STATUSICONCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7b600  437  ??2UUIAPI_STATUSICONCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007b630 UUIAPI_STATUSICONCTRL::~UUIAPI_STATUSICONCTRL

/* public: virtual __thiscall UUIAPI_STATUSICONCTRL::~UUIAPI_STATUSICONCTRL(void) */

void __thiscall UUIAPI_STATUSICONCTRL::~UUIAPI_STATUSICONCTRL(UUIAPI_STATUSICONCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b630  292  ??1UUIAPI_STATUSICONCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e8758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007b690 UUIAPI_STATUSICONCTRL::UUIAPI_STATUSICONCTRL

/* protected: __thiscall UUIAPI_STATUSICONCTRL::UUIAPI_STATUSICONCTRL(void) */

UUIAPI_STATUSICONCTRL * __thiscall
UUIAPI_STATUSICONCTRL::UUIAPI_STATUSICONCTRL(UUIAPI_STATUSICONCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b690  157  ??0UUIAPI_STATUSICONCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b6f0 UUIAPI_STATUSICONCTRL::UUIAPI_STATUSICONCTRL

/* public: __thiscall UUIAPI_STATUSICONCTRL::UUIAPI_STATUSICONCTRL(class UUIAPI_STATUSICONCTRL const
   &) */

UUIAPI_STATUSICONCTRL * __thiscall
UUIAPI_STATUSICONCTRL::UUIAPI_STATUSICONCTRL
          (UUIAPI_STATUSICONCTRL *this,UUIAPI_STATUSICONCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b6f0  158  ??0UUIAPI_STATUSICONCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e87b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b750 FUN_1007b750

UUIAPI_STATUSICONCTRL * FUN_1007b750(byte param_1)

{
  UUIAPI_STATUSICONCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_STATUSICONCTRL::~UUIAPI_STATUSICONCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_STATUSICONCTRL::~UUIAPI_STATUSICONCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007b7b0 UUIAPI_SLIDERCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_SLIDERCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_SLIDERCTRL::StaticClass(void)

{
                    /* 0x7b7b0  977  ?StaticClass@UUIAPI_SLIDERCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007b7c0 UUIAPI_SLIDERCTRL::operator_new

/* public: static void * __cdecl UUIAPI_SLIDERCTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_SLIDERCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7b7c0  433  ??2UUIAPI_SLIDERCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007b7f0 UUIAPI_SLIDERCTRL::~UUIAPI_SLIDERCTRL

/* public: virtual __thiscall UUIAPI_SLIDERCTRL::~UUIAPI_SLIDERCTRL(void) */

void __thiscall UUIAPI_SLIDERCTRL::~UUIAPI_SLIDERCTRL(UUIAPI_SLIDERCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b7f0  290  ??1UUIAPI_SLIDERCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e87e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007b850 UUIAPI_SLIDERCTRL::UUIAPI_SLIDERCTRL

/* protected: __thiscall UUIAPI_SLIDERCTRL::UUIAPI_SLIDERCTRL(void) */

UUIAPI_SLIDERCTRL * __thiscall UUIAPI_SLIDERCTRL::UUIAPI_SLIDERCTRL(UUIAPI_SLIDERCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b850  153  ??0UUIAPI_SLIDERCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b8b0 UUIAPI_SLIDERCTRL::UUIAPI_SLIDERCTRL

/* public: __thiscall UUIAPI_SLIDERCTRL::UUIAPI_SLIDERCTRL(class UUIAPI_SLIDERCTRL const &) */

UUIAPI_SLIDERCTRL * __thiscall
UUIAPI_SLIDERCTRL::UUIAPI_SLIDERCTRL(UUIAPI_SLIDERCTRL *this,UUIAPI_SLIDERCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b8b0  154  ??0UUIAPI_SLIDERCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007b910 FUN_1007b910

UUIAPI_SLIDERCTRL * FUN_1007b910(byte param_1)

{
  UUIAPI_SLIDERCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_SLIDERCTRL::~UUIAPI_SLIDERCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_SLIDERCTRL::~UUIAPI_SLIDERCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007b970 UUIAPI_SHORTCUTITEMWINDOW::StaticClass

/* public: static class UClass * __cdecl UUIAPI_SHORTCUTITEMWINDOW::StaticClass(void) */

UClass * __cdecl UUIAPI_SHORTCUTITEMWINDOW::StaticClass(void)

{
                    /* 0x7b970  976  ?StaticClass@UUIAPI_SHORTCUTITEMWINDOW@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007b980 UUIAPI_SHORTCUTITEMWINDOW::operator_new

/* public: static void * __cdecl UUIAPI_SHORTCUTITEMWINDOW::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_SHORTCUTITEMWINDOW::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7b980  431  ??2UUIAPI_SHORTCUTITEMWINDOW@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007b9b0 UUIAPI_SHORTCUTITEMWINDOW::~UUIAPI_SHORTCUTITEMWINDOW

/* public: virtual __thiscall UUIAPI_SHORTCUTITEMWINDOW::~UUIAPI_SHORTCUTITEMWINDOW(void) */

void __thiscall
UUIAPI_SHORTCUTITEMWINDOW::~UUIAPI_SHORTCUTITEMWINDOW(UUIAPI_SHORTCUTITEMWINDOW *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7b9b0  289  ??1UUIAPI_SHORTCUTITEMWINDOW@@UAE@XZ */
  puStack_8 = &LAB_101e8878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007ba10 UUIAPI_SHORTCUTITEMWINDOW::UUIAPI_SHORTCUTITEMWINDOW

/* protected: __thiscall UUIAPI_SHORTCUTITEMWINDOW::UUIAPI_SHORTCUTITEMWINDOW(void) */

UUIAPI_SHORTCUTITEMWINDOW * __thiscall
UUIAPI_SHORTCUTITEMWINDOW::UUIAPI_SHORTCUTITEMWINDOW(UUIAPI_SHORTCUTITEMWINDOW *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ba10  151  ??0UUIAPI_SHORTCUTITEMWINDOW@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e88a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ba70 UUIAPI_SHORTCUTITEMWINDOW::UUIAPI_SHORTCUTITEMWINDOW

/* public: __thiscall UUIAPI_SHORTCUTITEMWINDOW::UUIAPI_SHORTCUTITEMWINDOW(class
   UUIAPI_SHORTCUTITEMWINDOW const &) */

UUIAPI_SHORTCUTITEMWINDOW * __thiscall
UUIAPI_SHORTCUTITEMWINDOW::UUIAPI_SHORTCUTITEMWINDOW
          (UUIAPI_SHORTCUTITEMWINDOW *this,UUIAPI_SHORTCUTITEMWINDOW *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ba70  152  ??0UUIAPI_SHORTCUTITEMWINDOW@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e88d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007bad0 UEventMatchAPI::operator=

/* public: class UEventMatchAPI & __thiscall UEventMatchAPI::operator=(class UEventMatchAPI const &)
    */

UEventMatchAPI * __thiscall UEventMatchAPI::operator=(UEventMatchAPI *this,UEventMatchAPI *param_1)

{
                    /* 0x7bad0  531  ??4UEventMatchAPI@@QAEAAV0@ABV0@@Z
                       0x7bad0  532  ??4UGMAPI@@QAEAAV0@ABV0@@Z
                       0x7bad0  547  ??4URefineryAPI@@QAEAAV0@ABV0@@Z
                       0x7bad0  556  ??4UUIAPI_BARCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  557  ??4UUIAPI_BUTTON@@QAEAAV0@ABV0@@Z
                       0x7bad0  558  ??4UUIAPI_CHECKBOX@@QAEAAV0@ABV0@@Z
                       0x7bad0  559  ??4UUIAPI_COMBOBOX@@QAEAAV0@ABV0@@Z
                       0x7bad0  560  ??4UUIAPI_EDITBOX@@QAEAAV0@ABV0@@Z
                       0x7bad0  561  ??4UUIAPI_EFFECTBUTTON@@QAEAAV0@ABV0@@Z
                       0x7bad0  562  ??4UUIAPI_HTMLCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  563  ??4UUIAPI_INVENWEIGHT@@QAEAAV0@ABV0@@Z
                       0x7bad0  564  ??4UUIAPI_ITEMWINDOW@@QAEAAV0@ABV0@@Z
                       0x7bad0  565  ??4UUIAPI_LISTBOX@@QAEAAV0@ABV0@@Z
                       0x7bad0  566  ??4UUIAPI_LISTCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  567  ??4UUIAPI_MINIMAPCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  568  ??4UUIAPI_MULTIEDITBOX@@QAEAAV0@ABV0@@Z
                       0x7bad0  569  ??4UUIAPI_MULTISELLITEMINFO@@QAEAAV0@ABV0@@Z
                       0x7bad0  570  ??4UUIAPI_MULTISELLNEEDEDITEM@@QAEAAV0@ABV0@@Z
                       0x7bad0  571  ??4UUIAPI_NAMECTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  572  ??4UUIAPI_PROGRESSCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  574  ??4UUIAPI_SHORTCUTITEMWINDOW@@QAEAAV0@ABV0@@Z
                       0x7bad0  575  ??4UUIAPI_SLIDERCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  576  ??4UUIAPI_STATUSBARCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  577  ??4UUIAPI_STATUSICONCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  578  ??4UUIAPI_TABCTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  579  ??4UUIAPI_TEXTBOX@@QAEAAV0@ABV0@@Z
                       0x7bad0  580  ??4UUIAPI_TEXTLISTBOX@@QAEAAV0@ABV0@@Z
                       0x7bad0  581  ??4UUIAPI_TEXTURECTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  582  ??4UUIAPI_TREECTRL@@QAEAAV0@ABV0@@Z
                       0x7bad0  583  ??4UUIAPI_WINDOW@@QAEAAV0@ABV0@@Z
                       0x7bad0  584  ??4UUIDATA_CLAN@@QAEAAV0@ABV0@@Z
                       0x7bad0  585  ??4UUIDATA_GAMETIP@@QAEAAV0@ABV0@@Z
                       0x7bad0  586  ??4UUIDATA_HENNA@@QAEAAV0@ABV0@@Z
                       0x7bad0  587  ??4UUIDATA_HUNTINGZONE@@QAEAAV0@ABV0@@Z
                       0x7bad0  588  ??4UUIDATA_ITEM@@QAEAAV0@ABV0@@Z
                       0x7bad0  589  ??4UUIDATA_MACRO@@QAEAAV0@ABV0@@Z
                       0x7bad0  590  ??4UUIDATA_NPC@@QAEAAV0@ABV0@@Z
                       0x7bad0  591  ??4UUIDATA_PARTY@@QAEAAV0@ABV0@@Z
                       0x7bad0  592  ??4UUIDATA_PET@@QAEAAV0@ABV0@@Z
                       0x7bad0  593  ??4UUIDATA_PLAYER@@QAEAAV0@ABV0@@Z
                       0x7bad0  594  ??4UUIDATA_QUEST@@QAEAAV0@ABV0@@Z
                       0x7bad0  595  ??4UUIDATA_RAID@@QAEAAV0@ABV0@@Z
                       0x7bad0  596  ??4UUIDATA_RECIPE@@QAEAAV0@ABV0@@Z
                       0x7bad0  598  ??4UUIDATA_SKILL@@QAEAAV0@ABV0@@Z
                       0x7bad0  599  ??4UUIDATA_STATICOBJECT@@QAEAAV0@ABV0@@Z
                       0x7bad0  600  ??4UUIDATA_TARGET@@QAEAAV0@ABV0@@Z
                       0x7bad0  601  ??4UUIDATA_USER@@QAEAAV0@ABV0@@Z
                       0x7bad0  602  ??4UUIDataManager@@QAEAAV0@ABV0@@Z
                       0x7bad0  603  ??4UUIEventManager@@QAEAAV0@ABV0@@Z */
  UInteractions::operator=((UInteractions *)this,(UInteractions *)param_1);
  return this;
}


// ==== 1007baf0 FUN_1007baf0

UUIAPI_SHORTCUTITEMWINDOW * FUN_1007baf0(byte param_1)

{
  UUIAPI_SHORTCUTITEMWINDOW *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),
               UUIAPI_SHORTCUTITEMWINDOW::~UUIAPI_SHORTCUTITEMWINDOW);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_SHORTCUTITEMWINDOW::~UUIAPI_SHORTCUTITEMWINDOW(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007bb50 UUIAPI_MULTISELLNEEDEDITEM::StaticClass

/* public: static class UClass * __cdecl UUIAPI_MULTISELLNEEDEDITEM::StaticClass(void) */

UClass * __cdecl UUIAPI_MULTISELLNEEDEDITEM::StaticClass(void)

{
                    /* 0x7bb50  972  ?StaticClass@UUIAPI_MULTISELLNEEDEDITEM@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007bb60 UUIAPI_MULTISELLNEEDEDITEM::operator_new

/* public: static void * __cdecl UUIAPI_MULTISELLNEEDEDITEM::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_MULTISELLNEEDEDITEM::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7bb60  423  ??2UUIAPI_MULTISELLNEEDEDITEM@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007bb90 UUIAPI_MULTISELLNEEDEDITEM::~UUIAPI_MULTISELLNEEDEDITEM

/* public: virtual __thiscall UUIAPI_MULTISELLNEEDEDITEM::~UUIAPI_MULTISELLNEEDEDITEM(void) */

void __thiscall
UUIAPI_MULTISELLNEEDEDITEM::~UUIAPI_MULTISELLNEEDEDITEM(UUIAPI_MULTISELLNEEDEDITEM *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bb90  285  ??1UUIAPI_MULTISELLNEEDEDITEM@@UAE@XZ */
  puStack_8 = &LAB_101e8908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007bbf0 UUIAPI_MULTISELLNEEDEDITEM::UUIAPI_MULTISELLNEEDEDITEM

/* protected: __thiscall UUIAPI_MULTISELLNEEDEDITEM::UUIAPI_MULTISELLNEEDEDITEM(void) */

UUIAPI_MULTISELLNEEDEDITEM * __thiscall
UUIAPI_MULTISELLNEEDEDITEM::UUIAPI_MULTISELLNEEDEDITEM(UUIAPI_MULTISELLNEEDEDITEM *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bbf0  143  ??0UUIAPI_MULTISELLNEEDEDITEM@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007bc50 UUIAPI_MULTISELLNEEDEDITEM::UUIAPI_MULTISELLNEEDEDITEM

/* public: __thiscall UUIAPI_MULTISELLNEEDEDITEM::UUIAPI_MULTISELLNEEDEDITEM(class
   UUIAPI_MULTISELLNEEDEDITEM const &) */

UUIAPI_MULTISELLNEEDEDITEM * __thiscall
UUIAPI_MULTISELLNEEDEDITEM::UUIAPI_MULTISELLNEEDEDITEM
          (UUIAPI_MULTISELLNEEDEDITEM *this,UUIAPI_MULTISELLNEEDEDITEM *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bc50  144  ??0UUIAPI_MULTISELLNEEDEDITEM@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007bcb0 FUN_1007bcb0

UUIAPI_MULTISELLNEEDEDITEM * FUN_1007bcb0(byte param_1)

{
  UUIAPI_MULTISELLNEEDEDITEM *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),
               UUIAPI_MULTISELLNEEDEDITEM::~UUIAPI_MULTISELLNEEDEDITEM);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_MULTISELLNEEDEDITEM::~UUIAPI_MULTISELLNEEDEDITEM(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007bd10 UUIAPI_MULTISELLITEMINFO::StaticClass

/* public: static class UClass * __cdecl UUIAPI_MULTISELLITEMINFO::StaticClass(void) */

UClass * __cdecl UUIAPI_MULTISELLITEMINFO::StaticClass(void)

{
                    /* 0x7bd10  971  ?StaticClass@UUIAPI_MULTISELLITEMINFO@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007bd20 UUIAPI_MULTISELLITEMINFO::operator_new

/* public: static void * __cdecl UUIAPI_MULTISELLITEMINFO::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_MULTISELLITEMINFO::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7bd20  421  ??2UUIAPI_MULTISELLITEMINFO@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007bd50 UUIAPI_MULTISELLITEMINFO::~UUIAPI_MULTISELLITEMINFO

/* public: virtual __thiscall UUIAPI_MULTISELLITEMINFO::~UUIAPI_MULTISELLITEMINFO(void) */

void __thiscall UUIAPI_MULTISELLITEMINFO::~UUIAPI_MULTISELLITEMINFO(UUIAPI_MULTISELLITEMINFO *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bd50  284  ??1UUIAPI_MULTISELLITEMINFO@@UAE@XZ */
  puStack_8 = &LAB_101e8998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007bdb0 UUIAPI_MULTISELLITEMINFO::UUIAPI_MULTISELLITEMINFO

/* protected: __thiscall UUIAPI_MULTISELLITEMINFO::UUIAPI_MULTISELLITEMINFO(void) */

UUIAPI_MULTISELLITEMINFO * __thiscall
UUIAPI_MULTISELLITEMINFO::UUIAPI_MULTISELLITEMINFO(UUIAPI_MULTISELLITEMINFO *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bdb0  141  ??0UUIAPI_MULTISELLITEMINFO@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e89c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007be10 UUIAPI_MULTISELLITEMINFO::UUIAPI_MULTISELLITEMINFO

/* public: __thiscall UUIAPI_MULTISELLITEMINFO::UUIAPI_MULTISELLITEMINFO(class
   UUIAPI_MULTISELLITEMINFO const &) */

UUIAPI_MULTISELLITEMINFO * __thiscall
UUIAPI_MULTISELLITEMINFO::UUIAPI_MULTISELLITEMINFO
          (UUIAPI_MULTISELLITEMINFO *this,UUIAPI_MULTISELLITEMINFO *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7be10  142  ??0UUIAPI_MULTISELLITEMINFO@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e89f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007be70 FUN_1007be70

UUIAPI_MULTISELLITEMINFO * FUN_1007be70(byte param_1)

{
  UUIAPI_MULTISELLITEMINFO *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_MULTISELLITEMINFO::~UUIAPI_MULTISELLITEMINFO
              );
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_MULTISELLITEMINFO::~UUIAPI_MULTISELLITEMINFO(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007bed0 UUIAPI_MINIMAPCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_MINIMAPCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_MINIMAPCTRL::StaticClass(void)

{
                    /* 0x7bed0  969  ?StaticClass@UUIAPI_MINIMAPCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007bee0 UUIAPI_MINIMAPCTRL::operator_new

/* public: static void * __cdecl UUIAPI_MINIMAPCTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_MINIMAPCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7bee0  417  ??2UUIAPI_MINIMAPCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007bf10 UUIAPI_MINIMAPCTRL::~UUIAPI_MINIMAPCTRL

/* public: virtual __thiscall UUIAPI_MINIMAPCTRL::~UUIAPI_MINIMAPCTRL(void) */

void __thiscall UUIAPI_MINIMAPCTRL::~UUIAPI_MINIMAPCTRL(UUIAPI_MINIMAPCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bf10  282  ??1UUIAPI_MINIMAPCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e8a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007bf70 UUIAPI_MINIMAPCTRL::UUIAPI_MINIMAPCTRL

/* protected: __thiscall UUIAPI_MINIMAPCTRL::UUIAPI_MINIMAPCTRL(void) */

UUIAPI_MINIMAPCTRL * __thiscall UUIAPI_MINIMAPCTRL::UUIAPI_MINIMAPCTRL(UUIAPI_MINIMAPCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bf70  137  ??0UUIAPI_MINIMAPCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007bfd0 UUIAPI_MINIMAPCTRL::UUIAPI_MINIMAPCTRL

/* public: __thiscall UUIAPI_MINIMAPCTRL::UUIAPI_MINIMAPCTRL(class UUIAPI_MINIMAPCTRL const &) */

UUIAPI_MINIMAPCTRL * __thiscall
UUIAPI_MINIMAPCTRL::UUIAPI_MINIMAPCTRL(UUIAPI_MINIMAPCTRL *this,UUIAPI_MINIMAPCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7bfd0  138  ??0UUIAPI_MINIMAPCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c030 FUN_1007c030

UUIAPI_MINIMAPCTRL * FUN_1007c030(byte param_1)

{
  UUIAPI_MINIMAPCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_MINIMAPCTRL::~UUIAPI_MINIMAPCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_MINIMAPCTRL::~UUIAPI_MINIMAPCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007c090 UUIAPI_ITEMWINDOW::StaticClass

/* public: static class UClass * __cdecl UUIAPI_ITEMWINDOW::StaticClass(void) */

UClass * __cdecl UUIAPI_ITEMWINDOW::StaticClass(void)

{
                    /* 0x7c090  966  ?StaticClass@UUIAPI_ITEMWINDOW@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007c0a0 UUIAPI_ITEMWINDOW::operator_new

/* public: static void * __cdecl UUIAPI_ITEMWINDOW::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_ITEMWINDOW::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7c0a0  411  ??2UUIAPI_ITEMWINDOW@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007c0d0 UUIAPI_ITEMWINDOW::~UUIAPI_ITEMWINDOW

/* public: virtual __thiscall UUIAPI_ITEMWINDOW::~UUIAPI_ITEMWINDOW(void) */

void __thiscall UUIAPI_ITEMWINDOW::~UUIAPI_ITEMWINDOW(UUIAPI_ITEMWINDOW *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c0d0  279  ??1UUIAPI_ITEMWINDOW@@UAE@XZ */
  puStack_8 = &LAB_101e8ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007c130 UUIAPI_ITEMWINDOW::UUIAPI_ITEMWINDOW

/* protected: __thiscall UUIAPI_ITEMWINDOW::UUIAPI_ITEMWINDOW(void) */

UUIAPI_ITEMWINDOW * __thiscall UUIAPI_ITEMWINDOW::UUIAPI_ITEMWINDOW(UUIAPI_ITEMWINDOW *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c130  131  ??0UUIAPI_ITEMWINDOW@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c190 UUIAPI_ITEMWINDOW::UUIAPI_ITEMWINDOW

/* public: __thiscall UUIAPI_ITEMWINDOW::UUIAPI_ITEMWINDOW(class UUIAPI_ITEMWINDOW const &) */

UUIAPI_ITEMWINDOW * __thiscall
UUIAPI_ITEMWINDOW::UUIAPI_ITEMWINDOW(UUIAPI_ITEMWINDOW *this,UUIAPI_ITEMWINDOW *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c190  132  ??0UUIAPI_ITEMWINDOW@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c1f0 FUN_1007c1f0

UUIAPI_ITEMWINDOW * FUN_1007c1f0(byte param_1)

{
  UUIAPI_ITEMWINDOW *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_ITEMWINDOW::~UUIAPI_ITEMWINDOW);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_ITEMWINDOW::~UUIAPI_ITEMWINDOW(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007c250 UUIAPI_INVENWEIGHT::StaticClass

/* public: static class UClass * __cdecl UUIAPI_INVENWEIGHT::StaticClass(void) */

UClass * __cdecl UUIAPI_INVENWEIGHT::StaticClass(void)

{
                    /* 0x7c250  965  ?StaticClass@UUIAPI_INVENWEIGHT@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007c260 UUIAPI_INVENWEIGHT::operator_new

/* public: static void * __cdecl UUIAPI_INVENWEIGHT::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_INVENWEIGHT::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7c260  409  ??2UUIAPI_INVENWEIGHT@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007c290 UUIAPI_INVENWEIGHT::~UUIAPI_INVENWEIGHT

/* public: virtual __thiscall UUIAPI_INVENWEIGHT::~UUIAPI_INVENWEIGHT(void) */

void __thiscall UUIAPI_INVENWEIGHT::~UUIAPI_INVENWEIGHT(UUIAPI_INVENWEIGHT *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c290  278  ??1UUIAPI_INVENWEIGHT@@UAE@XZ */
  puStack_8 = &LAB_101e8b48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007c2f0 UUIAPI_INVENWEIGHT::UUIAPI_INVENWEIGHT

/* protected: __thiscall UUIAPI_INVENWEIGHT::UUIAPI_INVENWEIGHT(void) */

UUIAPI_INVENWEIGHT * __thiscall UUIAPI_INVENWEIGHT::UUIAPI_INVENWEIGHT(UUIAPI_INVENWEIGHT *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c2f0  129  ??0UUIAPI_INVENWEIGHT@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c350 UUIAPI_INVENWEIGHT::UUIAPI_INVENWEIGHT

/* public: __thiscall UUIAPI_INVENWEIGHT::UUIAPI_INVENWEIGHT(class UUIAPI_INVENWEIGHT const &) */

UUIAPI_INVENWEIGHT * __thiscall
UUIAPI_INVENWEIGHT::UUIAPI_INVENWEIGHT(UUIAPI_INVENWEIGHT *this,UUIAPI_INVENWEIGHT *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c350  130  ??0UUIAPI_INVENWEIGHT@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c3b0 FUN_1007c3b0

UUIAPI_INVENWEIGHT * FUN_1007c3b0(byte param_1)

{
  UUIAPI_INVENWEIGHT *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_INVENWEIGHT::~UUIAPI_INVENWEIGHT);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_INVENWEIGHT::~UUIAPI_INVENWEIGHT(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007c410 UUIAPI_HTMLCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_HTMLCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_HTMLCTRL::StaticClass(void)

{
                    /* 0x7c410  964  ?StaticClass@UUIAPI_HTMLCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007c420 UUIAPI_HTMLCTRL::operator_new

/* public: static void * __cdecl UUIAPI_HTMLCTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_HTMLCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7c420  407  ??2UUIAPI_HTMLCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007c450 UUIAPI_HTMLCTRL::~UUIAPI_HTMLCTRL

/* public: virtual __thiscall UUIAPI_HTMLCTRL::~UUIAPI_HTMLCTRL(void) */

void __thiscall UUIAPI_HTMLCTRL::~UUIAPI_HTMLCTRL(UUIAPI_HTMLCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c450  277  ??1UUIAPI_HTMLCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e8bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007c4b0 UUIAPI_HTMLCTRL::UUIAPI_HTMLCTRL

/* protected: __thiscall UUIAPI_HTMLCTRL::UUIAPI_HTMLCTRL(void) */

UUIAPI_HTMLCTRL * __thiscall UUIAPI_HTMLCTRL::UUIAPI_HTMLCTRL(UUIAPI_HTMLCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c4b0  127  ??0UUIAPI_HTMLCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c510 UUIAPI_HTMLCTRL::UUIAPI_HTMLCTRL

/* public: __thiscall UUIAPI_HTMLCTRL::UUIAPI_HTMLCTRL(class UUIAPI_HTMLCTRL const &) */

UUIAPI_HTMLCTRL * __thiscall
UUIAPI_HTMLCTRL::UUIAPI_HTMLCTRL(UUIAPI_HTMLCTRL *this,UUIAPI_HTMLCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c510  128  ??0UUIAPI_HTMLCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c570 FUN_1007c570

UUIAPI_HTMLCTRL * FUN_1007c570(byte param_1)

{
  UUIAPI_HTMLCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_HTMLCTRL::~UUIAPI_HTMLCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_HTMLCTRL::~UUIAPI_HTMLCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007c5d0 UUIAPI_EFFECTBUTTON::StaticClass

/* public: static class UClass * __cdecl UUIAPI_EFFECTBUTTON::StaticClass(void) */

UClass * __cdecl UUIAPI_EFFECTBUTTON::StaticClass(void)

{
                    /* 0x7c5d0  963  ?StaticClass@UUIAPI_EFFECTBUTTON@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007c5e0 UUIAPI_EFFECTBUTTON::operator_new

/* public: static void * __cdecl UUIAPI_EFFECTBUTTON::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIAPI_EFFECTBUTTON::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7c5e0  405  ??2UUIAPI_EFFECTBUTTON@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007c610 UUIAPI_EFFECTBUTTON::~UUIAPI_EFFECTBUTTON

/* public: virtual __thiscall UUIAPI_EFFECTBUTTON::~UUIAPI_EFFECTBUTTON(void) */

void __thiscall UUIAPI_EFFECTBUTTON::~UUIAPI_EFFECTBUTTON(UUIAPI_EFFECTBUTTON *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c610  276  ??1UUIAPI_EFFECTBUTTON@@UAE@XZ */
  puStack_8 = &LAB_101e8c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007c670 UUIAPI_EFFECTBUTTON::UUIAPI_EFFECTBUTTON

/* protected: __thiscall UUIAPI_EFFECTBUTTON::UUIAPI_EFFECTBUTTON(void) */

UUIAPI_EFFECTBUTTON * __thiscall UUIAPI_EFFECTBUTTON::UUIAPI_EFFECTBUTTON(UUIAPI_EFFECTBUTTON *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c670  125  ??0UUIAPI_EFFECTBUTTON@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c6d0 UUIAPI_EFFECTBUTTON::UUIAPI_EFFECTBUTTON

/* public: __thiscall UUIAPI_EFFECTBUTTON::UUIAPI_EFFECTBUTTON(class UUIAPI_EFFECTBUTTON const &) */

UUIAPI_EFFECTBUTTON * __thiscall
UUIAPI_EFFECTBUTTON::UUIAPI_EFFECTBUTTON(UUIAPI_EFFECTBUTTON *this,UUIAPI_EFFECTBUTTON *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c6d0  126  ??0UUIAPI_EFFECTBUTTON@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c730 FUN_1007c730

UUIAPI_EFFECTBUTTON * FUN_1007c730(byte param_1)

{
  UUIAPI_EFFECTBUTTON *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_EFFECTBUTTON::~UUIAPI_EFFECTBUTTON);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_EFFECTBUTTON::~UUIAPI_EFFECTBUTTON(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007c790 UUIAPI_BARCTRL::StaticClass

/* public: static class UClass * __cdecl UUIAPI_BARCTRL::StaticClass(void) */

UClass * __cdecl UUIAPI_BARCTRL::StaticClass(void)

{
                    /* 0x7c790  958  ?StaticClass@UUIAPI_BARCTRL@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007c7a0 UUIAPI_BARCTRL::operator_new

/* public: static void * __cdecl UUIAPI_BARCTRL::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_BARCTRL::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7c7a0  395  ??2UUIAPI_BARCTRL@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007c7d0 UUIAPI_BARCTRL::~UUIAPI_BARCTRL

/* public: virtual __thiscall UUIAPI_BARCTRL::~UUIAPI_BARCTRL(void) */

void __thiscall UUIAPI_BARCTRL::~UUIAPI_BARCTRL(UUIAPI_BARCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c7d0  271  ??1UUIAPI_BARCTRL@@UAE@XZ */
  puStack_8 = &LAB_101e8cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIAPI_WINDOW::~UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007c830 UUIAPI_BARCTRL::UUIAPI_BARCTRL

/* protected: __thiscall UUIAPI_BARCTRL::UUIAPI_BARCTRL(void) */

UUIAPI_BARCTRL * __thiscall UUIAPI_BARCTRL::UUIAPI_BARCTRL(UUIAPI_BARCTRL *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c830  115  ??0UUIAPI_BARCTRL@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c890 UUIAPI_BARCTRL::UUIAPI_BARCTRL

/* public: __thiscall UUIAPI_BARCTRL::UUIAPI_BARCTRL(class UUIAPI_BARCTRL const &) */

UUIAPI_BARCTRL * __thiscall
UUIAPI_BARCTRL::UUIAPI_BARCTRL(UUIAPI_BARCTRL *this,UUIAPI_BARCTRL *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c890  116  ??0UUIAPI_BARCTRL@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIAPI_WINDOW::UUIAPI_WINDOW((UUIAPI_WINDOW *)this,(UUIAPI_WINDOW *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007c8f0 FUN_1007c8f0

UUIAPI_BARCTRL * FUN_1007c8f0(byte param_1)

{
  UUIAPI_BARCTRL *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIAPI_BARCTRL::~UUIAPI_BARCTRL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_BARCTRL::~UUIAPI_BARCTRL(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007c950 UUIScript::eventOnTimer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnTimer(int) */

void __thiscall UUIScript::eventOnTimer(UUIScript *this,int param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x7c950  1055  ?eventOnTimer@UUIScript@@QAEXH@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnTimer,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1007c990 UUIScript::operator_new

/* public: static void * __cdecl UUIScript::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIScript::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7c990  491  ??2UUIScript@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007c9c0 UUIScript::~UUIScript

/* public: virtual __thiscall UUIScript::~UUIScript(void) */

void __thiscall UUIScript::~UUIScript(UUIScript *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c9c0  319  ??1UUIScript@@UAE@XZ */
  puStack_8 = &LAB_101e8d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIEventManager::~UUIEventManager((UUIEventManager *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007ca20 UUIScript::UUIScript

/* public: __thiscall UUIScript::UUIScript(void) */

UUIScript * __thiscall UUIScript::UUIScript(UUIScript *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ca20  212  ??0UUIScript@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ca80 UUIScript::UUIScript

/* public: __thiscall UUIScript::UUIScript(class UUIScript const &) */

UUIScript * __thiscall UUIScript::UUIScript(UUIScript *this,UUIScript *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ca80  211  ??0UUIScript@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIEventManager::UUIEventManager((UUIEventManager *)this,(UUIEventManager *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = local_c;
  return this;
}


// ==== 1007caf0 FUN_1007caf0

UUIScript * FUN_1007caf0(byte param_1)

{
  UUIScript *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UUIScript::~UUIScript);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIScript::~UUIScript(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 1007cb50 FUN_1007cb50

void FUN_1007cb50(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e8e1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1007cba0 UUIAPI_RADAR::StaticClass

/* public: static class UClass * __cdecl UUIAPI_RADAR::StaticClass(void) */

UClass * __cdecl UUIAPI_RADAR::StaticClass(void)

{
                    /* 0x7cba0  975  ?StaticClass@UUIAPI_RADAR@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007cbb0 UUIAPI_RADAR::operator_new

/* public: static void * __cdecl UUIAPI_RADAR::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UUIAPI_RADAR::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7cbb0  429  ??2UUIAPI_RADAR@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007cbe0 UUIAPI_RADAR::~UUIAPI_RADAR

/* public: virtual __thiscall UUIAPI_RADAR::~UUIAPI_RADAR(void) */

void __thiscall UUIAPI_RADAR::~UUIAPI_RADAR(UUIAPI_RADAR *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7cbe0  288  ??1UUIAPI_RADAR@@UAE@XZ */
  puStack_8 = &LAB_101e8e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UUIScript::~UUIScript((UUIScript *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007cc40 UUIAPI_RADAR::UUIAPI_RADAR

/* protected: __thiscall UUIAPI_RADAR::UUIAPI_RADAR(void) */

UUIAPI_RADAR * __thiscall UUIAPI_RADAR::UUIAPI_RADAR(UUIAPI_RADAR *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7cc40  149  ??0UUIAPI_RADAR@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIScript::UUIScript((UUIScript *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007cca0 UUIAPI_RADAR::UUIAPI_RADAR

/* public: __thiscall UUIAPI_RADAR::UUIAPI_RADAR(class UUIAPI_RADAR const &) */

UUIAPI_RADAR * __thiscall UUIAPI_RADAR::UUIAPI_RADAR(UUIAPI_RADAR *this,UUIAPI_RADAR *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7cca0  150  ??0UUIAPI_RADAR@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UUIScript::UUIScript((UUIScript *)this,(UUIScript *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007cd00 FUN_1007cd00

UUIAPI_RADAR * FUN_1007cd00(byte param_1)

{
  UUIAPI_RADAR *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UUIAPI_RADAR::~UUIAPI_RADAR);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIAPI_RADAR::~UUIAPI_RADAR(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 1007cd60 UUIDATA_REFINERYOPTION::StaticClass

/* public: static class UClass * __cdecl UUIDATA_REFINERYOPTION::StaticClass(void) */

UClass * __cdecl UUIDATA_REFINERYOPTION::StaticClass(void)

{
                    /* 0x7cd60  999  ?StaticClass@UUIDATA_REFINERYOPTION@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007cd70 UUIDATA_REFINERYOPTION::operator_new

/* public: static void * __cdecl UUIDATA_REFINERYOPTION::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UUIDATA_REFINERYOPTION::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7cd70  477  ??2UUIDATA_REFINERYOPTION@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007cda0 UUIDATA_REFINERYOPTION::~UUIDATA_REFINERYOPTION

/* public: virtual __thiscall UUIDATA_REFINERYOPTION::~UUIDATA_REFINERYOPTION(void) */

void __thiscall UUIDATA_REFINERYOPTION::~UUIDATA_REFINERYOPTION(UUIDATA_REFINERYOPTION *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7cda0  312  ??1UUIDATA_REFINERYOPTION@@UAE@XZ */
  puStack_8 = &LAB_101e8ed9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007ce00 UUIDATA_REFINERYOPTION::UUIDATA_REFINERYOPTION

/* protected: __thiscall UUIDATA_REFINERYOPTION::UUIDATA_REFINERYOPTION(void) */

UUIDATA_REFINERYOPTION * __thiscall
UUIDATA_REFINERYOPTION::UUIDATA_REFINERYOPTION(UUIDATA_REFINERYOPTION *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ce00  197  ??0UUIDATA_REFINERYOPTION@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8f09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ce60 UUIDATA_REFINERYOPTION::UUIDATA_REFINERYOPTION

/* public: __thiscall UUIDATA_REFINERYOPTION::UUIDATA_REFINERYOPTION(class UUIDATA_REFINERYOPTION
   const &) */

UUIDATA_REFINERYOPTION * __thiscall
UUIDATA_REFINERYOPTION::UUIDATA_REFINERYOPTION
          (UUIDATA_REFINERYOPTION *this,UUIDATA_REFINERYOPTION *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ce60  198  ??0UUIDATA_REFINERYOPTION@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8f39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007cec0 FUN_1007cec0

UUIDATA_REFINERYOPTION * FUN_1007cec0(byte param_1)

{
  UUIDATA_REFINERYOPTION *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UUIDATA_REFINERYOPTION::~UUIDATA_REFINERYOPTION);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUIDATA_REFINERYOPTION::~UUIDATA_REFINERYOPTION(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007cf20 USSQAPI::StaticClass

/* public: static class UClass * __cdecl USSQAPI::StaticClass(void) */

UClass * __cdecl USSQAPI::StaticClass(void)

{
                    /* 0x7cf20  950  ?StaticClass@USSQAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007cf30 USSQAPI::operator_new

/* public: static void * __cdecl USSQAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
USSQAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7cf30  379  ??2USSQAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007cf60 USSQAPI::~USSQAPI

/* public: virtual __thiscall USSQAPI::~USSQAPI(void) */

void __thiscall USSQAPI::~USSQAPI(USSQAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7cf60  263  ??1USSQAPI@@UAE@XZ */
  puStack_8 = &LAB_101e8f69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007cfc0 USSQAPI::USSQAPI

/* protected: __thiscall USSQAPI::USSQAPI(void) */

USSQAPI * __thiscall USSQAPI::USSQAPI(USSQAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7cfc0  99  ??0USSQAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8f99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d020 USSQAPI::USSQAPI

/* public: __thiscall USSQAPI::USSQAPI(class USSQAPI const &) */

USSQAPI * __thiscall USSQAPI::USSQAPI(USSQAPI *this,USSQAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d020  100  ??0USSQAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e8fc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d080 FUN_1007d080

USSQAPI * FUN_1007d080(byte param_1)

{
  USSQAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),USSQAPI::~USSQAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USSQAPI::~USSQAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007d0e0 USiegeAPI::StaticClass

/* public: static class UClass * __cdecl USiegeAPI::StaticClass(void) */

UClass * __cdecl USiegeAPI::StaticClass(void)

{
                    /* 0x7d0e0  952  ?StaticClass@USiegeAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007d0f0 USiegeAPI::operator_new

/* public: static void * __cdecl USiegeAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
USiegeAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7d0f0  383  ??2USiegeAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007d120 USiegeAPI::~USiegeAPI

/* public: virtual __thiscall USiegeAPI::~USiegeAPI(void) */

void __thiscall USiegeAPI::~USiegeAPI(USiegeAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d120  265  ??1USiegeAPI@@UAE@XZ */
  puStack_8 = &LAB_101e8ff9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007d180 USiegeAPI::USiegeAPI

/* protected: __thiscall USiegeAPI::USiegeAPI(void) */

USiegeAPI * __thiscall USiegeAPI::USiegeAPI(USiegeAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d180  103  ??0USiegeAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9029;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d1e0 USiegeAPI::USiegeAPI

/* public: __thiscall USiegeAPI::USiegeAPI(class USiegeAPI const &) */

USiegeAPI * __thiscall USiegeAPI::USiegeAPI(USiegeAPI *this,USiegeAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d1e0  104  ??0USiegeAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9059;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d240 FUN_1007d240

USiegeAPI * FUN_1007d240(byte param_1)

{
  USiegeAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),USiegeAPI::~USiegeAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USiegeAPI::~USiegeAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007d2a0 UShortcutAPI::StaticClass

/* public: static class UClass * __cdecl UShortcutAPI::StaticClass(void) */

UClass * __cdecl UShortcutAPI::StaticClass(void)

{
                    /* 0x7d2a0  951  ?StaticClass@UShortcutAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007d2b0 UShortcutAPI::operator_new

/* public: static void * __cdecl UShortcutAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UShortcutAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7d2b0  381  ??2UShortcutAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007d2e0 UShortcutAPI::~UShortcutAPI

/* public: virtual __thiscall UShortcutAPI::~UShortcutAPI(void) */

void __thiscall UShortcutAPI::~UShortcutAPI(UShortcutAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d2e0  264  ??1UShortcutAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9089;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007d340 UShortcutAPI::UShortcutAPI

/* protected: __thiscall UShortcutAPI::UShortcutAPI(void) */

UShortcutAPI * __thiscall UShortcutAPI::UShortcutAPI(UShortcutAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d340  101  ??0UShortcutAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e90b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d3a0 UShortcutAPI::UShortcutAPI

/* public: __thiscall UShortcutAPI::UShortcutAPI(class UShortcutAPI const &) */

UShortcutAPI * __thiscall UShortcutAPI::UShortcutAPI(UShortcutAPI *this,UShortcutAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d3a0  102  ??0UShortcutAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e90e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d400 FUN_1007d400

UShortcutAPI * FUN_1007d400(byte param_1)

{
  UShortcutAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UShortcutAPI::~UShortcutAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UShortcutAPI::~UShortcutAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007d460 URecipeAPI::StaticClass

/* public: static class UClass * __cdecl URecipeAPI::StaticClass(void) */

UClass * __cdecl URecipeAPI::StaticClass(void)

{
                    /* 0x7d460  948  ?StaticClass@URecipeAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007d470 URecipeAPI::operator_new

/* public: static void * __cdecl URecipeAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
URecipeAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7d470  375  ??2URecipeAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007d4a0 URecipeAPI::~URecipeAPI

/* public: virtual __thiscall URecipeAPI::~URecipeAPI(void) */

void __thiscall URecipeAPI::~URecipeAPI(URecipeAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d4a0  261  ??1URecipeAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9119;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007d500 URecipeAPI::URecipeAPI

/* protected: __thiscall URecipeAPI::URecipeAPI(void) */

URecipeAPI * __thiscall URecipeAPI::URecipeAPI(URecipeAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d500  95  ??0URecipeAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9149;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d560 URecipeAPI::URecipeAPI

/* public: __thiscall URecipeAPI::URecipeAPI(class URecipeAPI const &) */

URecipeAPI * __thiscall URecipeAPI::URecipeAPI(URecipeAPI *this,URecipeAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d560  96  ??0URecipeAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9179;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d5c0 FUN_1007d5c0

URecipeAPI * FUN_1007d5c0(byte param_1)

{
  URecipeAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),URecipeAPI::~URecipeAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  URecipeAPI::~URecipeAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007d620 UQuestAPI::StaticClass

/* public: static class UClass * __cdecl UQuestAPI::StaticClass(void) */

UClass * __cdecl UQuestAPI::StaticClass(void)

{
                    /* 0x7d620  947  ?StaticClass@UQuestAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007d630 UQuestAPI::operator_new

/* public: static void * __cdecl UQuestAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UQuestAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7d630  373  ??2UQuestAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007d660 UQuestAPI::~UQuestAPI

/* public: virtual __thiscall UQuestAPI::~UQuestAPI(void) */

void __thiscall UQuestAPI::~UQuestAPI(UQuestAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d660  260  ??1UQuestAPI@@UAE@XZ */
  puStack_8 = &LAB_101e91a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007d6c0 UQuestAPI::UQuestAPI

/* protected: __thiscall UQuestAPI::UQuestAPI(void) */

UQuestAPI * __thiscall UQuestAPI::UQuestAPI(UQuestAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d6c0  93  ??0UQuestAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e91d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d720 UQuestAPI::UQuestAPI

/* public: __thiscall UQuestAPI::UQuestAPI(class UQuestAPI const &) */

UQuestAPI * __thiscall UQuestAPI::UQuestAPI(UQuestAPI *this,UQuestAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d720  94  ??0UQuestAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9209;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d780 FUN_1007d780

UQuestAPI * FUN_1007d780(byte param_1)

{
  UQuestAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UQuestAPI::~UQuestAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UQuestAPI::~UQuestAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007d7e0 UPetitionAPI::StaticClass

/* public: static class UClass * __cdecl UPetitionAPI::StaticClass(void) */

UClass * __cdecl UPetitionAPI::StaticClass(void)

{
                    /* 0x7d7e0  946  ?StaticClass@UPetitionAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007d7f0 UPetitionAPI::operator_new

/* public: static void * __cdecl UPetitionAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UPetitionAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7d7f0  371  ??2UPetitionAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007d820 UPetitionAPI::~UPetitionAPI

/* public: virtual __thiscall UPetitionAPI::~UPetitionAPI(void) */

void __thiscall UPetitionAPI::~UPetitionAPI(UPetitionAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d820  259  ??1UPetitionAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9239;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007d880 UPetitionAPI::UPetitionAPI

/* protected: __thiscall UPetitionAPI::UPetitionAPI(void) */

UPetitionAPI * __thiscall UPetitionAPI::UPetitionAPI(UPetitionAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d880  91  ??0UPetitionAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9269;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d8e0 UPetitionAPI::UPetitionAPI

/* public: __thiscall UPetitionAPI::UPetitionAPI(class UPetitionAPI const &) */

UPetitionAPI * __thiscall UPetitionAPI::UPetitionAPI(UPetitionAPI *this,UPetitionAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d8e0  92  ??0UPetitionAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9299;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007d940 FUN_1007d940

UPetitionAPI * FUN_1007d940(byte param_1)

{
  UPetitionAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UPetitionAPI::~UPetitionAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPetitionAPI::~UPetitionAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007d9a0 UPetAPI::StaticClass

/* public: static class UClass * __cdecl UPetAPI::StaticClass(void) */

UClass * __cdecl UPetAPI::StaticClass(void)

{
                    /* 0x7d9a0  945  ?StaticClass@UPetAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007d9b0 UPetAPI::operator_new

/* public: static void * __cdecl UPetAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UPetAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7d9b0  369  ??2UPetAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007d9e0 UPetAPI::~UPetAPI

/* public: virtual __thiscall UPetAPI::~UPetAPI(void) */

void __thiscall UPetAPI::~UPetAPI(UPetAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7d9e0  258  ??1UPetAPI@@UAE@XZ */
  puStack_8 = &LAB_101e92c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007da40 UPetAPI::UPetAPI

/* protected: __thiscall UPetAPI::UPetAPI(void) */

UPetAPI * __thiscall UPetAPI::UPetAPI(UPetAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7da40  89  ??0UPetAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e92f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007daa0 UPetAPI::UPetAPI

/* public: __thiscall UPetAPI::UPetAPI(class UPetAPI const &) */

UPetAPI * __thiscall UPetAPI::UPetAPI(UPetAPI *this,UPetAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7daa0  90  ??0UPetAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9329;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007db00 FUN_1007db00

UPetAPI * FUN_1007db00(byte param_1)

{
  UPetAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UPetAPI::~UPetAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPetAPI::~UPetAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007db60 UPartyMatchAPI::StaticClass

/* public: static class UClass * __cdecl UPartyMatchAPI::StaticClass(void) */

UClass * __cdecl UPartyMatchAPI::StaticClass(void)

{
                    /* 0x7db60  944  ?StaticClass@UPartyMatchAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007db70 UPartyMatchAPI::operator_new

/* public: static void * __cdecl UPartyMatchAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UPartyMatchAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7db70  367  ??2UPartyMatchAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007dba0 UPartyMatchAPI::~UPartyMatchAPI

/* public: virtual __thiscall UPartyMatchAPI::~UPartyMatchAPI(void) */

void __thiscall UPartyMatchAPI::~UPartyMatchAPI(UPartyMatchAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7dba0  257  ??1UPartyMatchAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9359;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007dc00 UPartyMatchAPI::UPartyMatchAPI

/* protected: __thiscall UPartyMatchAPI::UPartyMatchAPI(void) */

UPartyMatchAPI * __thiscall UPartyMatchAPI::UPartyMatchAPI(UPartyMatchAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7dc00  87  ??0UPartyMatchAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9389;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007dc60 UPartyMatchAPI::UPartyMatchAPI

/* public: __thiscall UPartyMatchAPI::UPartyMatchAPI(class UPartyMatchAPI const &) */

UPartyMatchAPI * __thiscall
UPartyMatchAPI::UPartyMatchAPI(UPartyMatchAPI *this,UPartyMatchAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7dc60  88  ??0UPartyMatchAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e93b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007dcc0 UActionAPI::operator=

/* public: class UActionAPI & __thiscall UActionAPI::operator=(class UActionAPI const &) */

UActionAPI * __thiscall UActionAPI::operator=(UActionAPI *this,UActionAPI *param_1)

{
                    /* 0x7dcc0  519  ??4UActionAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  521  ??4UAudioAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  527  ??4UCommandChannelAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  530  ??4UEnchantAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  533  ??4UHennaAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  534  ??4UHeroTowerAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  538  ??4UMacroAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  539  ??4UMiniMapAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  541  ??4UOlympiadAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  542  ??4UPartyMatchAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  543  ??4UPetAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  544  ??4UPetitionAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  545  ??4UQuestAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  546  ??4URecipeAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  548  ??4USSQAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  549  ??4UShortcutAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  550  ??4USiegeAPI@@QAEAAV0@ABV0@@Z
                       0x7dcc0  597  ??4UUIDATA_REFINERYOPTION@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  return this;
}


// ==== 1007dce0 FUN_1007dce0

UPartyMatchAPI * FUN_1007dce0(byte param_1)

{
  UPartyMatchAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UPartyMatchAPI::~UPartyMatchAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPartyMatchAPI::~UPartyMatchAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007dd40 UOlympiadAPI::StaticClass

/* public: static class UClass * __cdecl UOlympiadAPI::StaticClass(void) */

UClass * __cdecl UOlympiadAPI::StaticClass(void)

{
                    /* 0x7dd40  943  ?StaticClass@UOlympiadAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007dd50 UOlympiadAPI::operator_new

/* public: static void * __cdecl UOlympiadAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UOlympiadAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7dd50  365  ??2UOlympiadAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007dd80 UOlympiadAPI::~UOlympiadAPI

/* public: virtual __thiscall UOlympiadAPI::~UOlympiadAPI(void) */

void __thiscall UOlympiadAPI::~UOlympiadAPI(UOlympiadAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7dd80  256  ??1UOlympiadAPI@@UAE@XZ */
  puStack_8 = &LAB_101e93e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007dde0 UOlympiadAPI::UOlympiadAPI

/* protected: __thiscall UOlympiadAPI::UOlympiadAPI(void) */

UOlympiadAPI * __thiscall UOlympiadAPI::UOlympiadAPI(UOlympiadAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7dde0  85  ??0UOlympiadAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9419;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007de40 UOlympiadAPI::UOlympiadAPI

/* public: __thiscall UOlympiadAPI::UOlympiadAPI(class UOlympiadAPI const &) */

UOlympiadAPI * __thiscall UOlympiadAPI::UOlympiadAPI(UOlympiadAPI *this,UOlympiadAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7de40  86  ??0UOlympiadAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9449;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007dea0 FUN_1007dea0

UOlympiadAPI * FUN_1007dea0(byte param_1)

{
  UOlympiadAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UOlympiadAPI::~UOlympiadAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UOlympiadAPI::~UOlympiadAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007df00 UMiniMapAPI::StaticClass

/* public: static class UClass * __cdecl UMiniMapAPI::StaticClass(void) */

UClass * __cdecl UMiniMapAPI::StaticClass(void)

{
                    /* 0x7df00  941  ?StaticClass@UMiniMapAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007df10 UMiniMapAPI::operator_new

/* public: static void * __cdecl UMiniMapAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UMiniMapAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7df10  361  ??2UMiniMapAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007df40 UMiniMapAPI::~UMiniMapAPI

/* public: virtual __thiscall UMiniMapAPI::~UMiniMapAPI(void) */

void __thiscall UMiniMapAPI::~UMiniMapAPI(UMiniMapAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7df40  254  ??1UMiniMapAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9479;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007dfa0 UMiniMapAPI::UMiniMapAPI

/* protected: __thiscall UMiniMapAPI::UMiniMapAPI(void) */

UMiniMapAPI * __thiscall UMiniMapAPI::UMiniMapAPI(UMiniMapAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7dfa0  81  ??0UMiniMapAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e94a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e000 UMiniMapAPI::UMiniMapAPI

/* public: __thiscall UMiniMapAPI::UMiniMapAPI(class UMiniMapAPI const &) */

UMiniMapAPI * __thiscall UMiniMapAPI::UMiniMapAPI(UMiniMapAPI *this,UMiniMapAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e000  82  ??0UMiniMapAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e94d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e060 FUN_1007e060

UMiniMapAPI * FUN_1007e060(byte param_1)

{
  UMiniMapAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UMiniMapAPI::~UMiniMapAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMiniMapAPI::~UMiniMapAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007e0c0 UMacroAPI::StaticClass

/* public: static class UClass * __cdecl UMacroAPI::StaticClass(void) */

UClass * __cdecl UMacroAPI::StaticClass(void)

{
                    /* 0x7e0c0  940  ?StaticClass@UMacroAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007e0d0 UMacroAPI::operator_new

/* public: static void * __cdecl UMacroAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UMacroAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7e0d0  359  ??2UMacroAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007e100 UMacroAPI::~UMacroAPI

/* public: virtual __thiscall UMacroAPI::~UMacroAPI(void) */

void __thiscall UMacroAPI::~UMacroAPI(UMacroAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e100  253  ??1UMacroAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9509;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007e160 UMacroAPI::UMacroAPI

/* public: __thiscall UMacroAPI::UMacroAPI(void) */

UMacroAPI * __thiscall UMacroAPI::UMacroAPI(UMacroAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e160  80  ??0UMacroAPI@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9539;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e1c0 UMacroAPI::UMacroAPI

/* public: __thiscall UMacroAPI::UMacroAPI(class UMacroAPI const &) */

UMacroAPI * __thiscall UMacroAPI::UMacroAPI(UMacroAPI *this,UMacroAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e1c0  79  ??0UMacroAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9569;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e220 FUN_1007e220

UMacroAPI * FUN_1007e220(byte param_1)

{
  UMacroAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UMacroAPI::~UMacroAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMacroAPI::~UMacroAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007e280 UHeroTowerAPI::StaticClass

/* public: static class UClass * __cdecl UHeroTowerAPI::StaticClass(void) */

UClass * __cdecl UHeroTowerAPI::StaticClass(void)

{
                    /* 0x7e280  936  ?StaticClass@UHeroTowerAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007e290 UHeroTowerAPI::operator_new

/* public: static void * __cdecl UHeroTowerAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UHeroTowerAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7e290  351  ??2UHeroTowerAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007e2c0 UHeroTowerAPI::~UHeroTowerAPI

/* public: virtual __thiscall UHeroTowerAPI::~UHeroTowerAPI(void) */

void __thiscall UHeroTowerAPI::~UHeroTowerAPI(UHeroTowerAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e2c0  249  ??1UHeroTowerAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9599;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007e320 UHeroTowerAPI::UHeroTowerAPI

/* protected: __thiscall UHeroTowerAPI::UHeroTowerAPI(void) */

UHeroTowerAPI * __thiscall UHeroTowerAPI::UHeroTowerAPI(UHeroTowerAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e320  71  ??0UHeroTowerAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e95c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e380 UHeroTowerAPI::UHeroTowerAPI

/* public: __thiscall UHeroTowerAPI::UHeroTowerAPI(class UHeroTowerAPI const &) */

UHeroTowerAPI * __thiscall UHeroTowerAPI::UHeroTowerAPI(UHeroTowerAPI *this,UHeroTowerAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e380  72  ??0UHeroTowerAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e95f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e3e0 FUN_1007e3e0

UHeroTowerAPI * FUN_1007e3e0(byte param_1)

{
  UHeroTowerAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UHeroTowerAPI::~UHeroTowerAPI)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UHeroTowerAPI::~UHeroTowerAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007e440 UHennaAPI::StaticClass

/* public: static class UClass * __cdecl UHennaAPI::StaticClass(void) */

UClass * __cdecl UHennaAPI::StaticClass(void)

{
                    /* 0x7e440  935  ?StaticClass@UHennaAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007e450 UHennaAPI::operator_new

/* public: static void * __cdecl UHennaAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UHennaAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7e450  349  ??2UHennaAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007e480 UHennaAPI::~UHennaAPI

/* public: virtual __thiscall UHennaAPI::~UHennaAPI(void) */

void __thiscall UHennaAPI::~UHennaAPI(UHennaAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e480  248  ??1UHennaAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007e4e0 UHennaAPI::UHennaAPI

/* protected: __thiscall UHennaAPI::UHennaAPI(void) */

UHennaAPI * __thiscall UHennaAPI::UHennaAPI(UHennaAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e4e0  69  ??0UHennaAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9659;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e540 UHennaAPI::UHennaAPI

/* public: __thiscall UHennaAPI::UHennaAPI(class UHennaAPI const &) */

UHennaAPI * __thiscall UHennaAPI::UHennaAPI(UHennaAPI *this,UHennaAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e540  70  ??0UHennaAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e5a0 FUN_1007e5a0

UHennaAPI * FUN_1007e5a0(byte param_1)

{
  UHennaAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UHennaAPI::~UHennaAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UHennaAPI::~UHennaAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007e600 UEnchantAPI::StaticClass

/* public: static class UClass * __cdecl UEnchantAPI::StaticClass(void) */

UClass * __cdecl UEnchantAPI::StaticClass(void)

{
                    /* 0x7e600  932  ?StaticClass@UEnchantAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007e610 UEnchantAPI::operator_new

/* public: static void * __cdecl UEnchantAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UEnchantAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7e610  343  ??2UEnchantAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007e640 UEnchantAPI::~UEnchantAPI

/* public: virtual __thiscall UEnchantAPI::~UEnchantAPI(void) */

void __thiscall UEnchantAPI::~UEnchantAPI(UEnchantAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e640  245  ??1UEnchantAPI@@UAE@XZ */
  puStack_8 = &LAB_101e96b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007e6a0 UEnchantAPI::UEnchantAPI

/* protected: __thiscall UEnchantAPI::UEnchantAPI(void) */

UEnchantAPI * __thiscall UEnchantAPI::UEnchantAPI(UEnchantAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e6a0  63  ??0UEnchantAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e96e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e700 UEnchantAPI::UEnchantAPI

/* public: __thiscall UEnchantAPI::UEnchantAPI(class UEnchantAPI const &) */

UEnchantAPI * __thiscall UEnchantAPI::UEnchantAPI(UEnchantAPI *this,UEnchantAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e700  64  ??0UEnchantAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9719;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e760 FUN_1007e760

UEnchantAPI * FUN_1007e760(byte param_1)

{
  UEnchantAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UEnchantAPI::~UEnchantAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UEnchantAPI::~UEnchantAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007e7c0 UCommandChannelAPI::StaticClass

/* public: static class UClass * __cdecl UCommandChannelAPI::StaticClass(void) */

UClass * __cdecl UCommandChannelAPI::StaticClass(void)

{
                    /* 0x7e7c0  929  ?StaticClass@UCommandChannelAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007e7d0 UCommandChannelAPI::operator_new

/* public: static void * __cdecl UCommandChannelAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UCommandChannelAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7e7d0  337  ??2UCommandChannelAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007e800 UCommandChannelAPI::~UCommandChannelAPI

/* public: virtual __thiscall UCommandChannelAPI::~UCommandChannelAPI(void) */

void __thiscall UCommandChannelAPI::~UCommandChannelAPI(UCommandChannelAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e800  242  ??1UCommandChannelAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9749;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007e860 UCommandChannelAPI::UCommandChannelAPI

/* protected: __thiscall UCommandChannelAPI::UCommandChannelAPI(void) */

UCommandChannelAPI * __thiscall UCommandChannelAPI::UCommandChannelAPI(UCommandChannelAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e860  57  ??0UCommandChannelAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9779;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e8c0 UCommandChannelAPI::UCommandChannelAPI

/* public: __thiscall UCommandChannelAPI::UCommandChannelAPI(class UCommandChannelAPI const &) */

UCommandChannelAPI * __thiscall
UCommandChannelAPI::UCommandChannelAPI(UCommandChannelAPI *this,UCommandChannelAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e8c0  58  ??0UCommandChannelAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e97a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007e920 FUN_1007e920

UCommandChannelAPI * FUN_1007e920(byte param_1)

{
  UCommandChannelAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x34,*(int *)(in_ECX + -4),UCommandChannelAPI::~UCommandChannelAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCommandChannelAPI::~UCommandChannelAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007e980 UAudioAPI::StaticClass

/* public: static class UClass * __cdecl UAudioAPI::StaticClass(void) */

UClass * __cdecl UAudioAPI::StaticClass(void)

{
                    /* 0x7e980  923  ?StaticClass@UAudioAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007e990 UAudioAPI::operator_new

/* public: static void * __cdecl UAudioAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UAudioAPI::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7e990  325  ??2UAudioAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007e9c0 UAudioAPI::~UAudioAPI

/* public: virtual __thiscall UAudioAPI::~UAudioAPI(void) */

void __thiscall UAudioAPI::~UAudioAPI(UAudioAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e9c0  236  ??1UAudioAPI@@UAE@XZ */
  puStack_8 = &LAB_101e97d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007ea20 UAudioAPI::UAudioAPI

/* protected: __thiscall UAudioAPI::UAudioAPI(void) */

UAudioAPI * __thiscall UAudioAPI::UAudioAPI(UAudioAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ea20  45  ??0UAudioAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ea80 UAudioAPI::UAudioAPI

/* public: __thiscall UAudioAPI::UAudioAPI(class UAudioAPI const &) */

UAudioAPI * __thiscall UAudioAPI::UAudioAPI(UAudioAPI *this,UAudioAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ea80  46  ??0UAudioAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9839;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007eae0 FUN_1007eae0

UAudioAPI * FUN_1007eae0(byte param_1)

{
  UAudioAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UAudioAPI::~UAudioAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UAudioAPI::~UAudioAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007eb40 UActionAPI::StaticClass

/* public: static class UClass * __cdecl UActionAPI::StaticClass(void) */

UClass * __cdecl UActionAPI::StaticClass(void)

{
                    /* 0x7eb40  921  ?StaticClass@UActionAPI@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1007eb50 UActionAPI::operator_new

/* public: static void * __cdecl UActionAPI::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UActionAPI::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x7eb50  321  ??2UActionAPI@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1007eb80 UActionAPI::~UActionAPI

/* public: virtual __thiscall UActionAPI::~UActionAPI(void) */

void __thiscall UActionAPI::~UActionAPI(UActionAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7eb80  234  ??1UActionAPI@@UAE@XZ */
  puStack_8 = &LAB_101e9869;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = local_c;
  return;
}


// ==== 1007ebe0 UActionAPI::UActionAPI

/* protected: __thiscall UActionAPI::UActionAPI(void) */

UActionAPI * __thiscall UActionAPI::UActionAPI(UActionAPI *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ebe0  41  ??0UActionAPI@@IAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9899;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007ec40 UActionAPI::UActionAPI

/* public: __thiscall UActionAPI::UActionAPI(class UActionAPI const &) */

UActionAPI * __thiscall UActionAPI::UActionAPI(UActionAPI *this,UActionAPI *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ec40  42  ??0UActionAPI@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e98c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1007eca0 FUN_1007eca0

UActionAPI * FUN_1007eca0(byte param_1)

{
  UActionAPI *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UActionAPI::~UActionAPI);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UActionAPI::~UActionAPI(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 1007ed00 FUN_1007ed00

void FUN_1007ed00(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e98fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x28,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1007ed80 FUN_1007ed80

void FUN_1007ed80(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FDrawItemInfo::~FDrawItemInfo((FDrawItemInfo *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x54;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x54,param_1);
  return;
}


// ==== 1007edc0 FUN_1007edc0

int FUN_1007edc0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x4c);
  return iVar1 * 0x4c + *(int *)param_2;
}


// ==== 1007ede0 UUIEventManager::InternalConstructor

/* public: static void __cdecl UUIEventManager::InternalConstructor(void *) */

void __cdecl UUIEventManager::InternalConstructor(void *param_1)

{
                    /* 0x7ede0  779  ?InternalConstructor@UUIEventManager@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIEventManager(param_1);
    return;
  }
  return;
}


// ==== 1007edf0 UWindowHandle::InternalConstructor

/* public: static void __cdecl UWindowHandle::InternalConstructor(void *) */

void __cdecl UWindowHandle::InternalConstructor(void *param_1)

{
                    /* 0x7edf0  781  ?InternalConstructor@UWindowHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UWindowHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee00 UTextureHandle::InternalConstructor

/* public: static void __cdecl UTextureHandle::InternalConstructor(void *) */

void __cdecl UTextureHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee00  731  ?InternalConstructor@UTextureHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTextureHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee10 UAnimTextureHandle::InternalConstructor

/* public: static void __cdecl UAnimTextureHandle::InternalConstructor(void *) */

void __cdecl UAnimTextureHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee10  696  ?InternalConstructor@UAnimTextureHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UAnimTextureHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee20 UTextListBoxHandle::InternalConstructor

/* public: static void __cdecl UTextListBoxHandle::InternalConstructor(void *) */

void __cdecl UTextListBoxHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee20  730  ?InternalConstructor@UTextListBoxHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTextListBoxHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee30 UChatWindowHandle::InternalConstructor

/* public: static void __cdecl UChatWindowHandle::InternalConstructor(void *) */

void __cdecl UChatWindowHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee30  700  ?InternalConstructor@UChatWindowHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UChatWindowHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee40 UTextBoxHandle::InternalConstructor

/* public: static void __cdecl UTextBoxHandle::InternalConstructor(void *) */

void __cdecl UTextBoxHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee40  729  ?InternalConstructor@UTextBoxHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTextBoxHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee50 UTabHandle::InternalConstructor

/* public: static void __cdecl UTabHandle::InternalConstructor(void *) */

void __cdecl UTabHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee50  728  ?InternalConstructor@UTabHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTabHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee60 UStatusIconHandle::InternalConstructor

/* public: static void __cdecl UStatusIconHandle::InternalConstructor(void *) */

void __cdecl UStatusIconHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee60  727  ?InternalConstructor@UStatusIconHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UStatusIconHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee70 UNameCtrlHandle::InternalConstructor

/* public: static void __cdecl UNameCtrlHandle::InternalConstructor(void *) */

void __cdecl UNameCtrlHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee70  716  ?InternalConstructor@UNameCtrlHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UNameCtrlHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee80 UListCtrlHandle::InternalConstructor

/* public: static void __cdecl UListCtrlHandle::InternalConstructor(void *) */

void __cdecl UListCtrlHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee80  713  ?InternalConstructor@UListCtrlHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UListCtrlHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ee90 UItemWindowHandle::InternalConstructor

/* public: static void __cdecl UItemWindowHandle::InternalConstructor(void *) */

void __cdecl UItemWindowHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ee90  712  ?InternalConstructor@UItemWindowHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UItemWindowHandle(param_1);
    return;
  }
  return;
}


// ==== 1007eea0 UHtmlHandle::InternalConstructor

/* public: static void __cdecl UHtmlHandle::InternalConstructor(void *) */

void __cdecl UHtmlHandle::InternalConstructor(void *param_1)

{
                    /* 0x7eea0  711  ?InternalConstructor@UHtmlHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UHtmlHandle(param_1);
    return;
  }
  return;
}


// ==== 1007eeb0 UEditBoxHandle::InternalConstructor

/* public: static void __cdecl UEditBoxHandle::InternalConstructor(void *) */

void __cdecl UEditBoxHandle::InternalConstructor(void *param_1)

{
                    /* 0x7eeb0  705  ?InternalConstructor@UEditBoxHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UEditBoxHandle(param_1);
    return;
  }
  return;
}


// ==== 1007eec0 UDrawPanelHandle::InternalConstructor

/* public: static void __cdecl UDrawPanelHandle::InternalConstructor(void *) */

void __cdecl UDrawPanelHandle::InternalConstructor(void *param_1)

{
                    /* 0x7eec0  704  ?InternalConstructor@UDrawPanelHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UDrawPanelHandle(param_1);
    return;
  }
  return;
}


// ==== 1007eed0 UComboBoxHandle::InternalConstructor

/* public: static void __cdecl UComboBoxHandle::InternalConstructor(void *) */

void __cdecl UComboBoxHandle::InternalConstructor(void *param_1)

{
                    /* 0x7eed0  702  ?InternalConstructor@UComboBoxHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UComboBoxHandle(param_1);
    return;
  }
  return;
}


// ==== 1007eee0 UCheckBoxHandle::InternalConstructor

/* public: static void __cdecl UCheckBoxHandle::InternalConstructor(void *) */

void __cdecl UCheckBoxHandle::InternalConstructor(void *param_1)

{
                    /* 0x7eee0  701  ?InternalConstructor@UCheckBoxHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UCheckBoxHandle(param_1);
    return;
  }
  return;
}


// ==== 1007eef0 UButtonHandle::InternalConstructor

/* public: static void __cdecl UButtonHandle::InternalConstructor(void *) */

void __cdecl UButtonHandle::InternalConstructor(void *param_1)

{
                    /* 0x7eef0  699  ?InternalConstructor@UButtonHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UButtonHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ef00 UBarHandle::InternalConstructor

/* public: static void __cdecl UBarHandle::InternalConstructor(void *) */

void __cdecl UBarHandle::InternalConstructor(void *param_1)

{
                    /* 0x7ef00  698  ?InternalConstructor@UBarHandle@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UBarHandle(param_1);
    return;
  }
  return;
}


// ==== 1007ef10 UUIDataManager::InternalConstructor

/* public: static void __cdecl UUIDataManager::InternalConstructor(void *) */

void __cdecl UUIDataManager::InternalConstructor(void *param_1)

{
                    /* 0x7ef10  778  ?InternalConstructor@UUIDataManager@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDataManager(param_1);
    return;
  }
  return;
}


// ==== 1007ef20 UUIDATA_USER::InternalConstructor

/* public: static void __cdecl UUIDATA_USER::InternalConstructor(void *) */

void __cdecl UUIDATA_USER::InternalConstructor(void *param_1)

{
                    /* 0x7ef20  777  ?InternalConstructor@UUIDATA_USER@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_USER(param_1);
    return;
  }
  return;
}


// ==== 1007ef30 UUIDATA_TARGET::InternalConstructor

/* public: static void __cdecl UUIDATA_TARGET::InternalConstructor(void *) */

void __cdecl UUIDATA_TARGET::InternalConstructor(void *param_1)

{
                    /* 0x7ef30  776  ?InternalConstructor@UUIDATA_TARGET@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_TARGET(param_1);
    return;
  }
  return;
}


// ==== 1007ef40 UUIDATA_STATICOBJECT::InternalConstructor

/* public: static void __cdecl UUIDATA_STATICOBJECT::InternalConstructor(void *) */

void __cdecl UUIDATA_STATICOBJECT::InternalConstructor(void *param_1)

{
                    /* 0x7ef40  775  ?InternalConstructor@UUIDATA_STATICOBJECT@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_STATICOBJECT(param_1);
    return;
  }
  return;
}


// ==== 1007ef50 UUIDATA_SKILL::InternalConstructor

/* public: static void __cdecl UUIDATA_SKILL::InternalConstructor(void *) */

void __cdecl UUIDATA_SKILL::InternalConstructor(void *param_1)

{
                    /* 0x7ef50  774  ?InternalConstructor@UUIDATA_SKILL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_SKILL(param_1);
    return;
  }
  return;
}


// ==== 1007ef60 UUIDATA_RECIPE::InternalConstructor

/* public: static void __cdecl UUIDATA_RECIPE::InternalConstructor(void *) */

void __cdecl UUIDATA_RECIPE::InternalConstructor(void *param_1)

{
                    /* 0x7ef60  772  ?InternalConstructor@UUIDATA_RECIPE@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_RECIPE(param_1);
    return;
  }
  return;
}


// ==== 1007ef70 UUIDATA_RAID::InternalConstructor

/* public: static void __cdecl UUIDATA_RAID::InternalConstructor(void *) */

void __cdecl UUIDATA_RAID::InternalConstructor(void *param_1)

{
                    /* 0x7ef70  771  ?InternalConstructor@UUIDATA_RAID@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_RAID(param_1);
    return;
  }
  return;
}


// ==== 1007ef80 UUIDATA_QUEST::InternalConstructor

/* public: static void __cdecl UUIDATA_QUEST::InternalConstructor(void *) */

void __cdecl UUIDATA_QUEST::InternalConstructor(void *param_1)

{
                    /* 0x7ef80  770  ?InternalConstructor@UUIDATA_QUEST@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_QUEST(param_1);
    return;
  }
  return;
}


// ==== 1007ef90 UUIDATA_PLAYER::InternalConstructor

/* public: static void __cdecl UUIDATA_PLAYER::InternalConstructor(void *) */

void __cdecl UUIDATA_PLAYER::InternalConstructor(void *param_1)

{
                    /* 0x7ef90  769  ?InternalConstructor@UUIDATA_PLAYER@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_PLAYER(param_1);
    return;
  }
  return;
}


// ==== 1007efa0 UUIDATA_PET::InternalConstructor

/* public: static void __cdecl UUIDATA_PET::InternalConstructor(void *) */

void __cdecl UUIDATA_PET::InternalConstructor(void *param_1)

{
                    /* 0x7efa0  768  ?InternalConstructor@UUIDATA_PET@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_PET(param_1);
    return;
  }
  return;
}


// ==== 1007efb0 UUIDATA_PARTY::InternalConstructor

/* public: static void __cdecl UUIDATA_PARTY::InternalConstructor(void *) */

void __cdecl UUIDATA_PARTY::InternalConstructor(void *param_1)

{
                    /* 0x7efb0  767  ?InternalConstructor@UUIDATA_PARTY@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_PARTY(param_1);
    return;
  }
  return;
}


// ==== 1007efc0 UUIDATA_NPC::InternalConstructor

/* public: static void __cdecl UUIDATA_NPC::InternalConstructor(void *) */

void __cdecl UUIDATA_NPC::InternalConstructor(void *param_1)

{
                    /* 0x7efc0  766  ?InternalConstructor@UUIDATA_NPC@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_NPC(param_1);
    return;
  }
  return;
}


// ==== 1007efd0 UUIDATA_MACRO::InternalConstructor

/* public: static void __cdecl UUIDATA_MACRO::InternalConstructor(void *) */

void __cdecl UUIDATA_MACRO::InternalConstructor(void *param_1)

{
                    /* 0x7efd0  765  ?InternalConstructor@UUIDATA_MACRO@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_MACRO(param_1);
    return;
  }
  return;
}


// ==== 1007efe0 UUIDATA_ITEM::InternalConstructor

/* public: static void __cdecl UUIDATA_ITEM::InternalConstructor(void *) */

void __cdecl UUIDATA_ITEM::InternalConstructor(void *param_1)

{
                    /* 0x7efe0  764  ?InternalConstructor@UUIDATA_ITEM@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_ITEM(param_1);
    return;
  }
  return;
}


// ==== 1007eff0 UUIDATA_HUNTINGZONE::InternalConstructor

/* public: static void __cdecl UUIDATA_HUNTINGZONE::InternalConstructor(void *) */

void __cdecl UUIDATA_HUNTINGZONE::InternalConstructor(void *param_1)

{
                    /* 0x7eff0  763  ?InternalConstructor@UUIDATA_HUNTINGZONE@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_HUNTINGZONE(param_1);
    return;
  }
  return;
}


// ==== 1007f000 UUIDATA_HENNA::InternalConstructor

/* public: static void __cdecl UUIDATA_HENNA::InternalConstructor(void *) */

void __cdecl UUIDATA_HENNA::InternalConstructor(void *param_1)

{
                    /* 0x7f000  762  ?InternalConstructor@UUIDATA_HENNA@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_HENNA(param_1);
    return;
  }
  return;
}


// ==== 1007f010 UUIDATA_GAMETIP::InternalConstructor

/* public: static void __cdecl UUIDATA_GAMETIP::InternalConstructor(void *) */

void __cdecl UUIDATA_GAMETIP::InternalConstructor(void *param_1)

{
                    /* 0x7f010  761  ?InternalConstructor@UUIDATA_GAMETIP@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_GAMETIP(param_1);
    return;
  }
  return;
}


// ==== 1007f020 UUIDATA_CLAN::InternalConstructor

/* public: static void __cdecl UUIDATA_CLAN::InternalConstructor(void *) */

void __cdecl UUIDATA_CLAN::InternalConstructor(void *param_1)

{
                    /* 0x7f020  760  ?InternalConstructor@UUIDATA_CLAN@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_CLAN(param_1);
    return;
  }
  return;
}


// ==== 1007f030 URefineryAPI::InternalConstructor

/* public: static void __cdecl URefineryAPI::InternalConstructor(void *) */

void __cdecl URefineryAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f030  723  ?InternalConstructor@URefineryAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    URefineryAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f040 UGMAPI::InternalConstructor

/* public: static void __cdecl UGMAPI::InternalConstructor(void *) */

void __cdecl UGMAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f040  708  ?InternalConstructor@UGMAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UGMAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f050 UEventMatchAPI::InternalConstructor

/* public: static void __cdecl UEventMatchAPI::InternalConstructor(void *) */

void __cdecl UEventMatchAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f050  707  ?InternalConstructor@UEventMatchAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UEventMatchAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f060 UUIAPI_WINDOW::InternalConstructor

/* public: static void __cdecl UUIAPI_WINDOW::InternalConstructor(void *) */

void __cdecl UUIAPI_WINDOW::InternalConstructor(void *param_1)

{
                    /* 0x7f060  759  ?InternalConstructor@UUIAPI_WINDOW@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_WINDOW(param_1);
    return;
  }
  return;
}


// ==== 1007f070 UUIAPI_TEXTLISTBOX::InternalConstructor

/* public: static void __cdecl UUIAPI_TEXTLISTBOX::InternalConstructor(void *) */

void __cdecl UUIAPI_TEXTLISTBOX::InternalConstructor(void *param_1)

{
                    /* 0x7f070  756  ?InternalConstructor@UUIAPI_TEXTLISTBOX@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_TEXTLISTBOX(param_1);
    return;
  }
  return;
}


// ==== 1007f080 UUIAPI_TABCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_TABCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_TABCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f080  754  ?InternalConstructor@UUIAPI_TABCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_TABCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f090 UUIAPI_NAMECTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_NAMECTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_NAMECTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f090  747  ?InternalConstructor@UUIAPI_NAMECTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_NAMECTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f0a0 UUIAPI_STATUSBARCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_STATUSBARCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_STATUSBARCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f0a0  752  ?InternalConstructor@UUIAPI_STATUSBARCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_STATUSBARCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f0b0 UUIAPI_LISTBOX::InternalConstructor

/* public: static void __cdecl UUIAPI_LISTBOX::InternalConstructor(void *) */

void __cdecl UUIAPI_LISTBOX::InternalConstructor(void *param_1)

{
                    /* 0x7f0b0  741  ?InternalConstructor@UUIAPI_LISTBOX@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_LISTBOX(param_1);
    return;
  }
  return;
}


// ==== 1007f0c0 UUIAPI_LISTCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_LISTCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_LISTCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f0c0  742  ?InternalConstructor@UUIAPI_LISTCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_LISTCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f0d0 UUIAPI_MULTIEDITBOX::InternalConstructor

/* public: static void __cdecl UUIAPI_MULTIEDITBOX::InternalConstructor(void *) */

void __cdecl UUIAPI_MULTIEDITBOX::InternalConstructor(void *param_1)

{
                    /* 0x7f0d0  744  ?InternalConstructor@UUIAPI_MULTIEDITBOX@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_MULTIEDITBOX(param_1);
    return;
  }
  return;
}


// ==== 1007f0e0 UUIAPI_PROGRESSCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_PROGRESSCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_PROGRESSCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f0e0  748  ?InternalConstructor@UUIAPI_PROGRESSCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_PROGRESSCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f0f0 UUIAPI_CHECKBOX::InternalConstructor

/* public: static void __cdecl UUIAPI_CHECKBOX::InternalConstructor(void *) */

void __cdecl UUIAPI_CHECKBOX::InternalConstructor(void *param_1)

{
                    /* 0x7f0f0  734  ?InternalConstructor@UUIAPI_CHECKBOX@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_CHECKBOX(param_1);
    return;
  }
  return;
}


// ==== 1007f100 UUIAPI_COMBOBOX::InternalConstructor

/* public: static void __cdecl UUIAPI_COMBOBOX::InternalConstructor(void *) */

void __cdecl UUIAPI_COMBOBOX::InternalConstructor(void *param_1)

{
                    /* 0x7f100  735  ?InternalConstructor@UUIAPI_COMBOBOX@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_COMBOBOX(param_1);
    return;
  }
  return;
}


// ==== 1007f110 UUIAPI_EDITBOX::InternalConstructor

/* public: static void __cdecl UUIAPI_EDITBOX::InternalConstructor(void *) */

void __cdecl UUIAPI_EDITBOX::InternalConstructor(void *param_1)

{
                    /* 0x7f110  736  ?InternalConstructor@UUIAPI_EDITBOX@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_EDITBOX(param_1);
    return;
  }
  return;
}


// ==== 1007f120 UUIAPI_BUTTON::InternalConstructor

/* public: static void __cdecl UUIAPI_BUTTON::InternalConstructor(void *) */

void __cdecl UUIAPI_BUTTON::InternalConstructor(void *param_1)

{
                    /* 0x7f120  733  ?InternalConstructor@UUIAPI_BUTTON@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_BUTTON(param_1);
    return;
  }
  return;
}


// ==== 1007f130 UUIAPI_TREECTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_TREECTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_TREECTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f130  758  ?InternalConstructor@UUIAPI_TREECTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_TREECTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f140 UUIAPI_TEXTURECTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_TEXTURECTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_TEXTURECTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f140  757  ?InternalConstructor@UUIAPI_TEXTURECTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_TEXTURECTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f150 UUIAPI_TEXTBOX::InternalConstructor

/* public: static void __cdecl UUIAPI_TEXTBOX::InternalConstructor(void *) */

void __cdecl UUIAPI_TEXTBOX::InternalConstructor(void *param_1)

{
                    /* 0x7f150  755  ?InternalConstructor@UUIAPI_TEXTBOX@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_TEXTBOX(param_1);
    return;
  }
  return;
}


// ==== 1007f160 UUIAPI_STATUSICONCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_STATUSICONCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_STATUSICONCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f160  753  ?InternalConstructor@UUIAPI_STATUSICONCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_STATUSICONCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f170 UUIAPI_SLIDERCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_SLIDERCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_SLIDERCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f170  751  ?InternalConstructor@UUIAPI_SLIDERCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_SLIDERCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f180 UUIAPI_SHORTCUTITEMWINDOW::InternalConstructor

/* public: static void __cdecl UUIAPI_SHORTCUTITEMWINDOW::InternalConstructor(void *) */

void __cdecl UUIAPI_SHORTCUTITEMWINDOW::InternalConstructor(void *param_1)

{
                    /* 0x7f180  750  ?InternalConstructor@UUIAPI_SHORTCUTITEMWINDOW@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_SHORTCUTITEMWINDOW(param_1);
    return;
  }
  return;
}


// ==== 1007f190 UUIAPI_MULTISELLNEEDEDITEM::InternalConstructor

/* public: static void __cdecl UUIAPI_MULTISELLNEEDEDITEM::InternalConstructor(void *) */

void __cdecl UUIAPI_MULTISELLNEEDEDITEM::InternalConstructor(void *param_1)

{
                    /* 0x7f190  746  ?InternalConstructor@UUIAPI_MULTISELLNEEDEDITEM@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_MULTISELLNEEDEDITEM(param_1);
    return;
  }
  return;
}


// ==== 1007f1a0 UUIAPI_MULTISELLITEMINFO::InternalConstructor

/* public: static void __cdecl UUIAPI_MULTISELLITEMINFO::InternalConstructor(void *) */

void __cdecl UUIAPI_MULTISELLITEMINFO::InternalConstructor(void *param_1)

{
                    /* 0x7f1a0  745  ?InternalConstructor@UUIAPI_MULTISELLITEMINFO@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_MULTISELLITEMINFO(param_1);
    return;
  }
  return;
}


// ==== 1007f1b0 UUIAPI_MINIMAPCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_MINIMAPCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_MINIMAPCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f1b0  743  ?InternalConstructor@UUIAPI_MINIMAPCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_MINIMAPCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f1c0 UUIAPI_ITEMWINDOW::InternalConstructor

/* public: static void __cdecl UUIAPI_ITEMWINDOW::InternalConstructor(void *) */

void __cdecl UUIAPI_ITEMWINDOW::InternalConstructor(void *param_1)

{
                    /* 0x7f1c0  740  ?InternalConstructor@UUIAPI_ITEMWINDOW@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_ITEMWINDOW(param_1);
    return;
  }
  return;
}


// ==== 1007f1d0 UUIAPI_INVENWEIGHT::InternalConstructor

/* public: static void __cdecl UUIAPI_INVENWEIGHT::InternalConstructor(void *) */

void __cdecl UUIAPI_INVENWEIGHT::InternalConstructor(void *param_1)

{
                    /* 0x7f1d0  739  ?InternalConstructor@UUIAPI_INVENWEIGHT@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_INVENWEIGHT(param_1);
    return;
  }
  return;
}


// ==== 1007f1e0 UUIAPI_HTMLCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_HTMLCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_HTMLCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f1e0  738  ?InternalConstructor@UUIAPI_HTMLCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_HTMLCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f1f0 UUIAPI_EFFECTBUTTON::InternalConstructor

/* public: static void __cdecl UUIAPI_EFFECTBUTTON::InternalConstructor(void *) */

void __cdecl UUIAPI_EFFECTBUTTON::InternalConstructor(void *param_1)

{
                    /* 0x7f1f0  737  ?InternalConstructor@UUIAPI_EFFECTBUTTON@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_EFFECTBUTTON(param_1);
    return;
  }
  return;
}


// ==== 1007f200 UUIAPI_BARCTRL::InternalConstructor

/* public: static void __cdecl UUIAPI_BARCTRL::InternalConstructor(void *) */

void __cdecl UUIAPI_BARCTRL::InternalConstructor(void *param_1)

{
                    /* 0x7f200  732  ?InternalConstructor@UUIAPI_BARCTRL@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_BARCTRL(param_1);
    return;
  }
  return;
}


// ==== 1007f210 UUIScript::eventOnEvent

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnEvent(int,class FString const &) */

void __thiscall UUIScript::eventOnEvent(UUIScript *this,int param_1,FString *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_ESI;
  int local_1c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7f210  1029  ?eventOnEvent@UUIScript@@QAEXHABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e993a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  local_1c = param_1;
  FString::operator=((FString *)local_18,param_2);
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnEvent,0,&local_1c);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffd4);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 1007f2b0 UUIScript::InternalConstructor

/* public: static void __cdecl UUIScript::InternalConstructor(void *) */

void __cdecl UUIScript::InternalConstructor(void *param_1)

{
                    /* 0x7f2b0  780  ?InternalConstructor@UUIScript@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIScript(param_1);
    return;
  }
  return;
}


// ==== 1007f2c0 UUIAPI_RADAR::InternalConstructor

/* public: static void __cdecl UUIAPI_RADAR::InternalConstructor(void *) */

void __cdecl UUIAPI_RADAR::InternalConstructor(void *param_1)

{
                    /* 0x7f2c0  749  ?InternalConstructor@UUIAPI_RADAR@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIAPI_RADAR(param_1);
    return;
  }
  return;
}


// ==== 1007f2d0 UUIDATA_REFINERYOPTION::InternalConstructor

/* public: static void __cdecl UUIDATA_REFINERYOPTION::InternalConstructor(void *) */

void __cdecl UUIDATA_REFINERYOPTION::InternalConstructor(void *param_1)

{
                    /* 0x7f2d0  773  ?InternalConstructor@UUIDATA_REFINERYOPTION@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UUIDATA_REFINERYOPTION(param_1);
    return;
  }
  return;
}


// ==== 1007f2e0 USSQAPI::InternalConstructor

/* public: static void __cdecl USSQAPI::InternalConstructor(void *) */

void __cdecl USSQAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f2e0  724  ?InternalConstructor@USSQAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    USSQAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f2f0 USiegeAPI::InternalConstructor

/* public: static void __cdecl USiegeAPI::InternalConstructor(void *) */

void __cdecl USiegeAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f2f0  726  ?InternalConstructor@USiegeAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    USiegeAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f300 UShortcutAPI::InternalConstructor

/* public: static void __cdecl UShortcutAPI::InternalConstructor(void *) */

void __cdecl UShortcutAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f300  725  ?InternalConstructor@UShortcutAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UShortcutAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f310 URecipeAPI::InternalConstructor

/* public: static void __cdecl URecipeAPI::InternalConstructor(void *) */

void __cdecl URecipeAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f310  722  ?InternalConstructor@URecipeAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    URecipeAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f320 UQuestAPI::InternalConstructor

/* public: static void __cdecl UQuestAPI::InternalConstructor(void *) */

void __cdecl UQuestAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f320  721  ?InternalConstructor@UQuestAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UQuestAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f330 UPetitionAPI::InternalConstructor

/* public: static void __cdecl UPetitionAPI::InternalConstructor(void *) */

void __cdecl UPetitionAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f330  720  ?InternalConstructor@UPetitionAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UPetitionAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f340 UPetAPI::InternalConstructor

/* public: static void __cdecl UPetAPI::InternalConstructor(void *) */

void __cdecl UPetAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f340  719  ?InternalConstructor@UPetAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UPetAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f350 UPartyMatchAPI::InternalConstructor

/* public: static void __cdecl UPartyMatchAPI::InternalConstructor(void *) */

void __cdecl UPartyMatchAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f350  718  ?InternalConstructor@UPartyMatchAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UPartyMatchAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f360 UOlympiadAPI::InternalConstructor

/* public: static void __cdecl UOlympiadAPI::InternalConstructor(void *) */

void __cdecl UOlympiadAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f360  717  ?InternalConstructor@UOlympiadAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UOlympiadAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f370 UMiniMapAPI::InternalConstructor

/* public: static void __cdecl UMiniMapAPI::InternalConstructor(void *) */

void __cdecl UMiniMapAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f370  715  ?InternalConstructor@UMiniMapAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UMiniMapAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f380 UMacroAPI::InternalConstructor

/* public: static void __cdecl UMacroAPI::InternalConstructor(void *) */

void __cdecl UMacroAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f380  714  ?InternalConstructor@UMacroAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UMacroAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f390 UHeroTowerAPI::InternalConstructor

/* public: static void __cdecl UHeroTowerAPI::InternalConstructor(void *) */

void __cdecl UHeroTowerAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f390  710  ?InternalConstructor@UHeroTowerAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UHeroTowerAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f3a0 UHennaAPI::InternalConstructor

/* public: static void __cdecl UHennaAPI::InternalConstructor(void *) */

void __cdecl UHennaAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f3a0  709  ?InternalConstructor@UHennaAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UHennaAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f3b0 UEnchantAPI::InternalConstructor

/* public: static void __cdecl UEnchantAPI::InternalConstructor(void *) */

void __cdecl UEnchantAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f3b0  706  ?InternalConstructor@UEnchantAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UEnchantAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f3c0 UCommandChannelAPI::InternalConstructor

/* public: static void __cdecl UCommandChannelAPI::InternalConstructor(void *) */

void __cdecl UCommandChannelAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f3c0  703  ?InternalConstructor@UCommandChannelAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UCommandChannelAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f3d0 UAudioAPI::InternalConstructor

/* public: static void __cdecl UAudioAPI::InternalConstructor(void *) */

void __cdecl UAudioAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f3d0  697  ?InternalConstructor@UAudioAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UAudioAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f3e0 UActionAPI::InternalConstructor

/* public: static void __cdecl UActionAPI::InternalConstructor(void *) */

void __cdecl UActionAPI::InternalConstructor(void *param_1)

{
                    /* 0x7f3e0  695  ?InternalConstructor@UActionAPI@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UActionAPI(param_1);
    return;
  }
  return;
}


// ==== 1007f3f0 FUN_1007f3f0

void FUN_1007f3f0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *(undefined4 *)(*param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  ExceptionList = local_c;
  return;
}


// ==== 1007f470 FUN_1007f470

void FUN_1007f470(int *param_1)

{
  FClanMemberInfo *this;
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9999;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x28);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      this = (FClanMemberInfo *)FUN_10048c00(0x28);
      if (this != (FClanMemberInfo *)0x0) {
        FClanMemberInfo::FClanMemberInfo(this,(FClanMemberInfo *)(*param_1 + iVar1));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1007f510 FUN_1007f510

void FUN_1007f510(int *param_1)

{
  FDrawItemInfo *this;
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e99c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x54);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      this = (FDrawItemInfo *)FUN_10097bf0(0x54);
      if (this != (FDrawItemInfo *)0x0) {
        FDrawItemInfo::FDrawItemInfo(this,(FDrawItemInfo *)(*param_1 + iVar1));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x54;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1007f5b0 FUN_1007f5b0

void FUN_1007f5b0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e99fc;
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
      FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x28);
  ExceptionList = local_c;
  return;
}


// ==== 1007f690 FUN_1007f690

void FUN_1007f690(int *param_1)

{
  FClanMemberInfo *this;
  int *in_ECX;
  int iVar1;
  int iVar2;
  
  if (in_ECX == param_1) {
    return;
  }
  FUN_1007ed00(param_1[1]);
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      this = (FClanMemberInfo *)FUN_10048c00(0x28);
      if (this != (FClanMemberInfo *)0x0) {
        FClanMemberInfo::FClanMemberInfo(this,(FClanMemberInfo *)(*param_1 + iVar1));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < param_1[1]);
    return;
  }
  return;
}


// ==== 1007f6f0 FUN_1007f6f0

void FUN_1007f6f0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
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
    iVar1 = param_1 * 0x54;
    iVar2 = iVar2 - param_1;
    do {
      FDrawItemInfo::~FDrawItemInfo((FDrawItemInfo *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x54;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x54);
  return;
}


// ==== 1007f790 FUN_1007f790

void FUN_1007f790(int *param_1)

{
  FDrawItemInfo *this;
  int *in_ECX;
  int iVar1;
  int iVar2;
  
  if (in_ECX == param_1) {
    return;
  }
  FUN_1007ed80(param_1[1]);
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      this = (FDrawItemInfo *)FUN_10097bf0(0x54);
      if (this != (FDrawItemInfo *)0x0) {
        FDrawItemInfo::FDrawItemInfo(this,(FDrawItemInfo *)(*param_1 + iVar1));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x54;
    } while (iVar2 < param_1[1]);
    return;
  }
  return;
}


// ==== 1007f7f0 FUN_1007f7f0

void FUN_1007f7f0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e9a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_10039be0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1007f840 FEventMatchUserData::~FEventMatchUserData

/* public: __thiscall FEventMatchUserData::~FEventMatchUserData(void) */

void __thiscall FEventMatchUserData::~FEventMatchUserData(FEventMatchUserData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x7f840  221  ??1FEventMatchUserData@@QAE@XZ */
  puStack_8 = &LAB_101e9a82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_10039be0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10039be0();
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1007f8c0 FEventMatchUserData::operator=

/* public: struct FEventMatchUserData & __thiscall FEventMatchUserData::operator=(struct
   FEventMatchUserData const &) */

FEventMatchUserData * __thiscall
FEventMatchUserData::operator=(FEventMatchUserData *this,FEventMatchUserData *param_1)

{
                    /* 0x7f8c0  501  ??4FEventMatchUserData@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::operator=((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FUN_10030c30(param_1 + 0x38);
  FUN_10030c30(param_1 + 0x44);
  return this;
}


// ==== 1007f940 FUN_1007f940

void FUN_1007f940(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1007f3f0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1007f990 FEventMatchTeamData::~FEventMatchTeamData

/* public: __thiscall FEventMatchTeamData::~FEventMatchTeamData(void) */

void __thiscall FEventMatchTeamData::~FEventMatchTeamData(FEventMatchTeamData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7f990  220  ??1FEventMatchTeamData@@QAE@XZ */
  puStack_8 = &LAB_101e9af2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  _eh_vector_destructor_iterator_(this + 0x14,0x50,9,FEventMatchUserData::~FEventMatchUserData);
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1007fa00 FEventMatchTeamData::operator=

/* public: struct FEventMatchTeamData & __thiscall FEventMatchTeamData::operator=(struct
   FEventMatchTeamData const &) */

FEventMatchTeamData * __thiscall
FEventMatchTeamData::operator=(FEventMatchTeamData *this,FEventMatchTeamData *param_1)

{
  int iVar1;
  FEventMatchTeamData *this_00;
  
                    /* 0x7fa00  500  ??4FEventMatchTeamData@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::operator=((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this_00 = this + 0x14;
  iVar1 = 9;
  do {
    FEventMatchUserData::operator=
              ((FEventMatchUserData *)this_00,
               (FEventMatchUserData *)(this_00 + ((int)param_1 - (int)this)));
    this_00 = this_00 + 0x50;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return this;
}


// ==== 1007fa50 FEventMatchData::FEventMatchData

/* public: __thiscall FEventMatchData::FEventMatchData(void) */

FEventMatchData * __thiscall FEventMatchData::FEventMatchData(FEventMatchData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7fa50  10  ??0FEventMatchData@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9b26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (this,0x2e4,2,FEventMatchTeamData::FEventMatchTeamData,
             FEventMatchTeamData::~FEventMatchTeamData);
  ExceptionList = local_c;
  return this;
}


// ==== 1007fab0 FEventMatchData::~FEventMatchData

/* public: __thiscall FEventMatchData::~FEventMatchData(void) */

void __thiscall FEventMatchData::~FEventMatchData(FEventMatchData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7fab0  219  ??1FEventMatchData@@QAE@XZ */
  puStack_8 = &LAB_101e9b66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(this,0x2e4,2,FEventMatchTeamData::~FEventMatchTeamData);
  ExceptionList = local_c;
  return;
}


// ==== 1007fb00 FEventMatchData::operator=

/* public: struct FEventMatchData & __thiscall FEventMatchData::operator=(struct FEventMatchData
   const &) */

FEventMatchData * __thiscall
FEventMatchData::operator=(FEventMatchData *this,FEventMatchData *param_1)

{
  int iVar1;
  FEventMatchData *this_00;
  
                    /* 0x7fb00  499  ??4FEventMatchData@@QAEAAU0@ABU0@@Z */
  iVar1 = 2;
  this_00 = this;
  do {
    FEventMatchTeamData::operator=
              ((FEventMatchTeamData *)this_00,
               (FEventMatchTeamData *)(this_00 + ((int)param_1 - (int)this)));
    this_00 = this_00 + 0x2e4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return this;
}


// ==== 1007fb40 FUN_1007fb40

void FUN_1007fb40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e9b99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1007f5b0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1007fba0 FUN_1007fba0

void FUN_1007fba0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e9bc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1007f6f0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1007fc00 FClanInfo::operator=

/* public: struct FClanInfo & __thiscall FClanInfo::operator=(struct FClanInfo const &) */

FClanInfo * __thiscall FClanInfo::operator=(FClanInfo *this,FClanInfo *param_1)

{
                    /* 0x7fc00  495  ??4FClanInfo@@QAEAAU0@ABU0@@Z */
  FUN_1007f690(param_1);
  FStringNoInit::operator=((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  return this;
}


// ==== 1007fc30 FUN_1007fc30

void FUN_1007fc30(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e9bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1007fb40(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1007fc80 FUN_1007fc80

void FUN_1007fc80(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1007f470(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1007fcd0 FCustomTooltip::operator=

/* public: struct FCustomTooltip & __thiscall FCustomTooltip::operator=(struct FCustomTooltip const
   &) */

FCustomTooltip * __thiscall FCustomTooltip::operator=(FCustomTooltip *this,FCustomTooltip *param_1)

{
                    /* 0x7fcd0  497  ??4FCustomTooltip@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  FUN_1007f790(param_1 + 8);
  return this;
}


// ==== 1007fd00 FUN_1007fd00

void FUN_1007fd00(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e9c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1007fba0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1007fd50 FUN_1007fd50

void FUN_1007fd50(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1007f510(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1007fda0 FXMLTreeNodeInfo::operator=

/* public: struct FXMLTreeNodeInfo & __thiscall FXMLTreeNodeInfo::operator=(struct FXMLTreeNodeInfo
   const &) */

FXMLTreeNodeInfo * __thiscall
FXMLTreeNodeInfo::operator=(FXMLTreeNodeInfo *this,FXMLTreeNodeInfo *param_1)

{
                    /* 0x7fda0  517  ??4FXMLTreeNodeInfo@@QAEAAU0@ABU0@@Z */
  FStringNoInit::operator=((FStringNoInit *)this,(FStringNoInit *)param_1);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x34),(FStringNoInit *)(param_1 + 0x34));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x40),(FStringNoInit *)(param_1 + 0x40));
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  FStringNoInit::operator=((FStringNoInit *)(this + 0x80),(FStringNoInit *)(param_1 + 0x80));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x8c),(FStringNoInit *)(param_1 + 0x8c));
  FStringNoInit::operator=((FStringNoInit *)(this + 0x98),(FStringNoInit *)(param_1 + 0x98));
  FStringNoInit::operator=((FStringNoInit *)(this + 0xa4),(FStringNoInit *)(param_1 + 0xa4));
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  FUN_1007f790(param_1 + 0xb8);
  *(uint *)(this + 0xc4) =
       *(uint *)(this + 0xc4) ^ (*(uint *)(param_1 + 0xc4) ^ *(uint *)(this + 0xc4)) & 1;
  return this;
}


// ==== 1007fef0 FEventMatchUserData::FEventMatchUserData

/* public: __thiscall FEventMatchUserData::FEventMatchUserData(struct FEventMatchUserData const &)
    */

FEventMatchUserData * __thiscall
FEventMatchUserData::FEventMatchUserData(FEventMatchUserData *this,FEventMatchUserData *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7fef0  13  ??0FEventMatchUserData@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9cd2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  local_4 = 0;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FUN_1007f940(param_1 + 0x38);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1007f940(param_1 + 0x44);
  ExceptionList = local_c;
  return this;
}


// ==== 1007ffb0 FEventMatchTeamData::FEventMatchTeamData

/* public: __thiscall FEventMatchTeamData::FEventMatchTeamData(struct FEventMatchTeamData const &)
    */

FEventMatchTeamData * __thiscall
FEventMatchTeamData::FEventMatchTeamData(FEventMatchTeamData *this,FEventMatchTeamData *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ffb0  11  ??0FEventMatchTeamData@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9cfc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4),(FStringNoInit *)(param_1 + 4));
  local_4 = 0;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  _eh_vector_copy_constructor_iterator_
            (this + 0x14,param_1 + 0x14,0x50,9,FEventMatchUserData::FEventMatchUserData,
             FEventMatchUserData::~FEventMatchUserData);
  ExceptionList = local_c;
  return this;
}


// ==== 10080040 FEventMatchData::FEventMatchData

/* public: __thiscall FEventMatchData::FEventMatchData(struct FEventMatchData const &) */

FEventMatchData * __thiscall
FEventMatchData::FEventMatchData(FEventMatchData *this,FEventMatchData *param_1)

{
                    /* 0x80040  9  ??0FEventMatchData@@QAE@ABU0@@Z */
  _eh_vector_copy_constructor_iterator_
            (this,param_1,0x2e4,2,FEventMatchTeamData::FEventMatchTeamData,
             FEventMatchTeamData::~FEventMatchTeamData);
  return this;
}


// ==== 10080070 FClanInfo::~FClanInfo

/* public: __thiscall FClanInfo::~FClanInfo(void) */

void __thiscall FClanInfo::~FClanInfo(FClanInfo *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x80070  215  ??1FClanInfo@@QAE@XZ */
  puStack_8 = &LAB_101e9d48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x18));
  local_4 = local_4 & 0xffffff00;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4 = 0xffffffff;
  FUN_1007fb40(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100800e0 FClanInfo::FClanInfo

/* public: __thiscall FClanInfo::FClanInfo(struct FClanInfo const &) */

FClanInfo * __thiscall FClanInfo::FClanInfo(FClanInfo *this,FClanInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x800e0  1  ??0FClanInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9d90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1007fc80(param_1);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  local_4 = CONCAT31(local_4._1_3_,1);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18),(FStringNoInit *)(param_1 + 0x18));
  ExceptionList = local_c;
  return this;
}


// ==== 10080160 FCustomTooltip::~FCustomTooltip

/* public: __thiscall FCustomTooltip::~FCustomTooltip(void) */

void __thiscall FCustomTooltip::~FCustomTooltip(FCustomTooltip *this)

{
  FCustomTooltip *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x80160  217  ??1FCustomTooltip@@QAE@XZ */
  puStack_8 = &LAB_101e9dc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this + 8;
  local_4 = 0xffffffff;
  FUN_1007fba0(DAT_103554c4 ^ (uint)&local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100801b0 FCustomTooltip::FCustomTooltip

/* public: __thiscall FCustomTooltip::FCustomTooltip(struct FCustomTooltip const &) */

FCustomTooltip * __thiscall
FCustomTooltip::FCustomTooltip(FCustomTooltip *this,FCustomTooltip *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x801b0  5  ??0FCustomTooltip@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9deb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  FUN_1007fd50(param_1 + 8);
  ExceptionList = local_c;
  return this;
}


// ==== 10080210 FXMLTreeNodeInfo::~FXMLTreeNodeInfo

/* public: __thiscall FXMLTreeNodeInfo::~FXMLTreeNodeInfo(void) */

void __thiscall FXMLTreeNodeInfo::~FXMLTreeNodeInfo(FXMLTreeNodeInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x80210  232  ??1FXMLTreeNodeInfo@@QAE@XZ */
  puStack_8 = &LAB_101e9e8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4._1_3_ = 0;
  local_4._0_1_ = 6;
  FUN_1007fba0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4._0_1_ = 5;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0xa4));
  local_4._0_1_ = 4;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x98));
  local_4._0_1_ = 3;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x8c));
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x80));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x40));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0x34));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)this);
  ExceptionList = local_c;
  return;
}


// ==== 100802f0 FXMLTreeNodeInfo::FXMLTreeNodeInfo

/* public: __thiscall FXMLTreeNodeInfo::FXMLTreeNodeInfo(struct FXMLTreeNodeInfo const &) */

FXMLTreeNodeInfo * __thiscall
FXMLTreeNodeInfo::FXMLTreeNodeInfo(FXMLTreeNodeInfo *this,FXMLTreeNodeInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x802f0  37  ??0FXMLTreeNodeInfo@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this,(FStringNoInit *)param_1);
  local_4 = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x34),(FStringNoInit *)(param_1 + 0x34));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x40),(FStringNoInit *)(param_1 + 0x40));
  local_4._0_1_ = 2;
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x80),(FStringNoInit *)(param_1 + 0x80));
  local_4._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x8c),(FStringNoInit *)(param_1 + 0x8c));
  local_4._0_1_ = 4;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x98),(FStringNoInit *)(param_1 + 0x98));
  local_4._0_1_ = 5;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xa4),(FStringNoInit *)(param_1 + 0xa4));
  local_4 = CONCAT31(local_4._1_3_,6);
  FCustomTooltip::FCustomTooltip((FCustomTooltip *)(this + 0xb0),(FCustomTooltip *)(param_1 + 0xb0))
  ;
  *(uint *)(this + 0xc4) =
       *(uint *)(this + 0xc4) ^ (*(uint *)(param_1 + 0xc4) ^ *(uint *)(this + 0xc4)) & 1;
  ExceptionList = local_c;
  return this;
}


// ==== 10080490 FUN_10080490

void FUN_10080490(int *param_1)

{
  FLVData *this;
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9f49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x4c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      this = (FLVData *)FUN_1007edc0(0x4c);
      if (this != (FLVData *)0x0) {
        FLVData::FLVData(this,(FLVData *)(*param_1 + iVar1));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10080530 FUN_10080530

void FUN_10080530(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
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
    iVar1 = param_1 * 0x4c;
    iVar2 = iVar2 - param_1;
    do {
      FLVData::~FLVData((FLVData *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x4c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x4c);
  return;
}


// ==== 100805d0 FUN_100805d0

void FUN_100805d0(int *param_1)

{
  FLVData *this;
  int *in_ECX;
  int iVar1;
  int iVar2;
  
  if (in_ECX == param_1) {
    return;
  }
  FUN_10036fa0(param_1[1]);
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      this = (FLVData *)FUN_1007edc0(0x4c);
      if (this != (FLVData *)0x0) {
        FLVData::FLVData(this,(FLVData *)(*param_1 + iVar1));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (iVar2 < param_1[1]);
    return;
  }
  return;
}


// ==== 10080630 FUN_10080630

void FUN_10080630(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e9f79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10080530(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10080690 FLVDataRecord::operator=

/* public: struct FLVDataRecord & __thiscall FLVDataRecord::operator=(struct FLVDataRecord const &)
    */

FLVDataRecord * __thiscall FLVDataRecord::operator=(FLVDataRecord *this,FLVDataRecord *param_1)

{
                    /* 0x80690  507  ??4FLVDataRecord@@QAEAAU0@ABU0@@Z */
  FUN_100805d0(param_1);
  FStringNoInit::operator=((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}


// ==== 100806d0 FUN_100806d0

void FUN_100806d0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101e9fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_10080630(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10080720 FUN_10080720

void FUN_10080720(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101e9fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10080490(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10080770 FLVDataRecord::~FLVDataRecord

/* public: __thiscall FLVDataRecord::~FLVDataRecord(void) */

void __thiscall FLVDataRecord::~FLVDataRecord(FLVDataRecord *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x80770  225  ??1FLVDataRecord@@QAE@XZ */
  puStack_8 = &LAB_101ea01c;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4 = 0xffffffff;
  FUN_10080630(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 100807d0 FLVDataRecord::FLVDataRecord

/* public: __thiscall FLVDataRecord::FLVDataRecord(struct FLVDataRecord const &) */

FLVDataRecord * __thiscall FLVDataRecord::FLVDataRecord(FLVDataRecord *this,FLVDataRecord *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x807d0  22  ??0FLVDataRecord@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ea054;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10080720(param_1);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc),(FStringNoInit *)(param_1 + 0xc));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  ExceptionList = local_c;
  return this;
}


// ==== 10080850 FUN_10080850

void FUN_10080850(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = Dtdef::vftable;
  return;
}


// ==== 10080860 FUN_10080860

void FUN_10080860(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = Dtdef::vftable;
  return;
}


// ==== 10080870 FUN_10080870

int FUN_10080870(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  iVar6 = 0x33;
  do {
    iVar2 = (iVar6 - iVar7) / 2 + iVar7;
    puVar3 = (ushort *)(&PTR_DAT_1034e9a8)[iVar2 * 3];
    puVar5 = param_1;
    do {
      uVar1 = *puVar3;
      bVar8 = uVar1 < *puVar5;
      if (uVar1 != *puVar5) {
LAB_100808bd:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100808c2;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar3[1];
      bVar8 = uVar1 < puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_100808bd;
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
    iVar4 = 0;
LAB_100808c2:
    if (iVar4 == 0) {
      return iVar2;
    }
    if (iVar4 < 0) {
      iVar7 = iVar2 + 1;
      iVar2 = iVar6;
    }
    iVar6 = iVar2;
    if (iVar2 <= iVar7) {
      return -1;
    }
  } while( true );
}


// ==== 100808e0 FUN_100808e0

int FUN_100808e0(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_1 < 0) {
    return -1;
  }
  iVar6 = *(int *)(&DAT_1034e9b0 + param_1 * 0xc);
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      iVar2 = (iVar6 - iVar7) / 2 + iVar7;
      puVar3 = *(ushort **)((&PTR_PTR_1034e9ac)[param_1 * 3] + iVar2 * 4);
      puVar5 = param_2;
      do {
        uVar1 = *puVar3;
        bVar8 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_10080949:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1008094e;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar3[1];
        bVar8 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_10080949;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      iVar4 = 0;
LAB_1008094e:
      if (iVar4 == 0) {
        return iVar2 + 1;
      }
      if (iVar4 < 0) {
        iVar7 = iVar2 + 1;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
    } while (iVar7 < iVar2);
  }
  return -1;
}


// ==== 10080980 FUN_10080980

void FUN_10080980(byte param_1)

{
  FUN_10080860();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100809b0 FUN_100809b0

/* WARNING: Removing unreachable block (ram,0x100809f5) */
/* WARNING: Removing unreachable block (ram,0x10080a11) */

int FUN_100809b0(uint param_1)

{
  ushort *puVar1;
  uint uVar2;
  int in_ECX;
  ushort *puVar3;
  uint uVar4;
  
  puVar3 = *(ushort **)(in_ECX + 0x28);
  if (*(ushort **)(in_ECX + 0x2c) < puVar3) {
    FUN_101c238d();
  }
  uVar4 = *(uint *)(in_ECX + 0x38);
  if (*(uint *)(in_ECX + 0x3c) < uVar4) {
    FUN_101c238d();
  }
  while( true ) {
    puVar1 = *(ushort **)(in_ECX + 0x2c);
    if (puVar1 < *(ushort **)(in_ECX + 0x28)) {
      FUN_101c238d();
    }
    if (puVar3 == puVar1) {
      return 0;
    }
    uVar2 = *(uint *)(in_ECX + 0x3c);
    if (uVar2 < *(uint *)(in_ECX + 0x38)) {
      FUN_101c238d();
    }
    if (uVar4 == uVar2) break;
    if (*(ushort **)(in_ECX + 0x2c) <= puVar3) {
      FUN_101c238d();
    }
    if (*puVar3 == param_1) {
      if (*(uint *)(in_ECX + 0x3c) <= uVar4) {
        FUN_101c238d();
      }
      if (7 < *(uint *)(uVar4 + 0x18)) {
        return *(int *)(uVar4 + 4);
      }
      return uVar4 + 4;
    }
    if (*(ushort **)(in_ECX + 0x2c) <= puVar3) {
      FUN_101c238d();
    }
    puVar3 = puVar3 + 1;
    if (*(uint *)(in_ECX + 0x3c) <= uVar4) {
      FUN_101c238d();
    }
    uVar4 = uVar4 + 0x1c;
  }
  return 0;
}


// ==== 10080a90 FUN_10080a90

/* WARNING: Removing unreachable block (ram,0x10080ab9) */

undefined4 FUN_10080a90(uint param_1)

{
  ushort *puVar1;
  int in_ECX;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(in_ECX + 0x28);
  if (*(ushort **)(in_ECX + 0x2c) < puVar2) {
    FUN_101c238d();
  }
  while( true ) {
    puVar1 = *(ushort **)(in_ECX + 0x2c);
    if (puVar1 < *(ushort **)(in_ECX + 0x28)) {
      FUN_101c238d();
    }
    if (puVar2 == puVar1) break;
    if (*(ushort **)(in_ECX + 0x2c) <= puVar2) {
      FUN_101c238d();
    }
    if (*puVar2 == param_1) {
      return 1;
    }
    if (*(ushort **)(in_ECX + 0x2c) <= puVar2) {
      FUN_101c238d();
    }
    puVar2 = puVar2 + 1;
  }
  return 0;
}


// ==== 10080b00 FUN_10080b00

void FUN_10080b00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = NCHtmlObject::vftable;
  return;
}


// ==== 10080b10 FUN_10080b10

void FUN_10080b10(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) == 1) {
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 8);
  }
  else if (*(int *)(in_ECX + 0x34) == 3) {
    param_1 = param_1 - *(int *)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x10) = param_1;
    *(int *)(in_ECX + 8) = param_1;
  }
  return;
}


// ==== 10080b7e Catch@10080b7e

void Catch_10080b7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10080b92 Catch@10080b92

void Catch_10080b92(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlObject::SetHAlignPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10080bb0 FUN_10080bb0

int FUN_10080bb0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x38) == 1) {
    return param_1 / 2 - *(int *)(in_ECX + 0x28) / 2;
  }
  if (*(int *)(in_ECX + 0x38) != 3) {
    return 0;
  }
  return param_1 - *(int *)(in_ECX + 0x28);
}


// ==== 10080c47 Catch@10080c47

void Catch_10080c47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10080c5b Catch@10080c5b

void Catch_10080c5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlObject::GetVAlignPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10080c80 FUN_10080c80

undefined4 FUN_10080c80(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  
  pwVar3 = L"normal";
  pwVar4 = param_1;
  do {
    wVar1 = *pwVar4;
    bVar5 = (ushort)wVar1 < (ushort)*pwVar3;
    if (wVar1 != *pwVar3) {
LAB_10080ce6:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10080ceb;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar4[1];
    bVar5 = (ushort)wVar1 < (ushort)pwVar3[1];
    if (wVar1 != pwVar3[1]) goto LAB_10080ce6;
    pwVar4 = pwVar4 + 2;
    pwVar3 = pwVar3 + 2;
  } while (wVar1 != L'\0');
  iVar2 = 0;
LAB_10080ceb:
  if (iVar2 != 0) {
    pwVar3 = L"password";
    pwVar4 = param_1;
    do {
      wVar1 = *pwVar4;
      bVar5 = (ushort)wVar1 < (ushort)*pwVar3;
      if (wVar1 != *pwVar3) {
LAB_10080d36:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10080d3b;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar5 = (ushort)wVar1 < (ushort)pwVar3[1];
      if (wVar1 != pwVar3[1]) goto LAB_10080d36;
      pwVar4 = pwVar4 + 2;
      pwVar3 = pwVar3 + 2;
    } while (wVar1 != L'\0');
    iVar2 = 0;
LAB_10080d3b:
    if (iVar2 == 0) {
      return 2;
    }
    pwVar3 = L"date";
    pwVar4 = param_1;
    do {
      wVar1 = *pwVar4;
      bVar5 = (ushort)wVar1 < (ushort)*pwVar3;
      if (wVar1 != *pwVar3) {
LAB_10080d86:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10080d8b;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar5 = (ushort)wVar1 < (ushort)pwVar3[1];
      if (wVar1 != pwVar3[1]) goto LAB_10080d86;
      pwVar4 = pwVar4 + 2;
      pwVar3 = pwVar3 + 2;
    } while (wVar1 != L'\0');
    iVar2 = 0;
LAB_10080d8b:
    if (iVar2 == 0) {
      return 4;
    }
    pwVar3 = L"time";
    pwVar4 = param_1;
    do {
      wVar1 = *pwVar4;
      bVar5 = (ushort)wVar1 < (ushort)*pwVar3;
      if (wVar1 != *pwVar3) {
LAB_10080dd6:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10080ddb;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar5 = (ushort)wVar1 < (ushort)pwVar3[1];
      if (wVar1 != pwVar3[1]) goto LAB_10080dd6;
      pwVar4 = pwVar4 + 2;
      pwVar3 = pwVar3 + 2;
    } while (wVar1 != L'\0');
    iVar2 = 0;
LAB_10080ddb:
    if (iVar2 == 0) {
      return 5;
    }
    pwVar4 = L"number";
    do {
      wVar1 = *param_1;
      bVar5 = (ushort)wVar1 < (ushort)*pwVar4;
      if (wVar1 != *pwVar4) {
LAB_10080e26:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10080e2b;
      }
      if (wVar1 == L'\0') break;
      wVar1 = param_1[1];
      bVar5 = (ushort)wVar1 < (ushort)pwVar4[1];
      if (wVar1 != pwVar4[1]) goto LAB_10080e26;
      param_1 = param_1 + 2;
      pwVar4 = pwVar4 + 2;
    } while (wVar1 != L'\0');
    iVar2 = 0;
LAB_10080e2b:
    if (iVar2 == 0) {
      return 3;
    }
  }
  return 0;
}


// ==== 10080e4c Catch@10080e4c

void Catch_10080e4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10080e60 Catch@10080e60

void Catch_10080e60(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::GetEditBoxType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10080e80 FUN_10080e80

int FUN_10080e80(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x60) != 0) {
    return (*(int *)(in_ECX + 0x5c) * param_1) / 100;
  }
  return 0;
}


// ==== 10080efa Catch@10080efa

void Catch_10080efa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10080f0e Catch@10080f0e

void Catch_10080f0e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::GetRatioWidth");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10080f30 FUN_10080f30

undefined4 FUN_10080f30(void)

{
  int in_ECX;
  uint uStack_34;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea0f0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100440c0();
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x244) = *(undefined4 *)(in_ECX + 0x88);
  FUN_10020bb0(local_24,&DAT_10231ac0,0,0,0,0,0,0);
  *(undefined4 *)(in_ECX + 0x1e0) = local_20;
  ExceptionList = local_10;
  return 1;
}


// ==== 10080fc0 Catch@10080fc0

void Catch_10080fc0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10080fd4 Catch@10080fd4

void Catch_10080fd4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081000 FUN_10081000

void FUN_10081000(wchar_t *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (wchar_t *)0x0) {
    if (param_1 == L"Transparent") {
      *(undefined4 *)(in_ECX + 0x21c) = 0;
    }
    else {
      uVar1 = FUN_1003f630(param_1,1);
      *(undefined4 *)(in_ECX + 0x21c) = uVar1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10081079 Catch@10081079

void Catch_10081079(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1008108d Catch@1008108d

void Catch_1008108d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::SetBGTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100810b0 FUN_100810b0

void FUN_100810b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24c) = param_1;
  return;
}


// ==== 10081106 Catch@10081106

void Catch_10081106(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1008111a Catch@1008111a

void Catch_1008111a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::SetParentWndHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081140 FUN_10081140

void FUN_10081140(wchar_t *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == (wchar_t *)0x0) {
    param_1 = L"Default.BlackTexture";
  }
  FUN_1003f630(param_1,1);
  ExceptionList = local_10;
  return;
}


// ==== 1008119c Catch@1008119c

void Catch_1008119c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100811b0 Catch@100811b0

void Catch_100811b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::RegisterImage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100811d0 FUN_100811d0

undefined4 FUN_100811d0(short *param_1)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  short *psVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  psVar3 = &DAT_1036edc8;
  do {
    sVar1 = *param_1;
    *psVar3 = sVar1;
    param_1 = param_1 + 1;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  if (DAT_1036edc8 != 0) {
    iVar2 = (**(code **)(*DAT_103663bc + 0x7f0))(&DAT_1036edc8);
    if (iVar2 == 2) {
      if (in_ECX[0x93] == 0) {
        (**(code **)(*in_ECX + 0x13c))();
      }
      else {
        (**(code **)(**(int **)(in_ECX[0x93] + 4) + 0x68))(0xf0000004,0,0);
      }
    }
    FUN_1014ed50(0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1008129b Catch@1008129b

void Catch_1008129b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100812af Catch@100812af

void Catch_100812af(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100812d0 FUN_100812d0

undefined4 FUN_100812d0(short *param_1)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  short *psVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  psVar3 = &DAT_1036edc8;
  do {
    sVar1 = *param_1;
    *psVar3 = sVar1;
    param_1 = param_1 + 1;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  iVar2 = (**(code **)(*DAT_103663bc + 0x7f0))(&DAT_1036edc8);
  if (iVar2 == 2) {
    if (in_ECX[0x93] == 0) {
      (**(code **)(*in_ECX + 0x13c))();
    }
    else {
      (**(code **)(**(int **)(in_ECX[0x93] + 4) + 0x68))(0xf0000004,0,0);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10081385 Catch@10081385

void Catch_10081385(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081399 Catch@10081399

void Catch_10081399(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnHtmlButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100813c0 FUN_100813c0

undefined4 FUN_100813c0(int param_1,int *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int *in_ECX;
  short *psVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea1b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 1) {
    psVar2 = (short *)(**(code **)(*param_2 + 0x1f8))();
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      psVar4 = &DAT_1036edc8;
      do {
        sVar1 = *psVar2;
        *psVar4 = sVar1;
        psVar2 = psVar2 + 1;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      iVar3 = (**(code **)(*DAT_103663bc + 0x7f0))(&DAT_1036edc8);
      if (iVar3 == 2) {
        if (in_ECX[0x93] == 0) {
          (**(code **)(*in_ECX + 0x13c))();
        }
        else {
          (**(code **)(**(int **)(in_ECX[0x93] + 4) + 0x68))(0xf0000004,0,0);
        }
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10081495 Catch@10081495

void Catch_10081495(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100814a9 Catch@100814a9

void Catch_100814a9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnEditAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100814d0 FUN_100814d0

undefined4 FUN_100814d0(short *param_1)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  short *psVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea1d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = (int)(short)((uint)param_1 >> 0x10);
  if ((short)param_1 == 100) {
    if (iVar2 < 0) {
      (**(code **)(*in_ECX + 0x1fc))(iVar2 - in_ECX[0x74]);
      thunk_FUN_10049b50(-in_ECX[0x74]);
    }
  }
  else if (param_1 != (short *)0x0) {
    psVar3 = &DAT_1036edc8;
    do {
      sVar1 = *param_1;
      *psVar3 = sVar1;
      param_1 = param_1 + 1;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (**(code **)(*DAT_103663bc + 0x7f0))(&DAT_1036edc8);
    if (iVar2 == 2) {
      if (in_ECX[0x93] == 0) {
        (**(code **)(*in_ECX + 0x13c))();
      }
      else {
        (**(code **)(**(int **)(in_ECX[0x93] + 4) + 0x68))(0xf0000004,0,0);
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100815c6 Catch@100815c6

void Catch_100815c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100815da Catch@100815da

void Catch_100815da(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnMultiEditAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081600 FUN_10081600

undefined4 FUN_10081600(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea1f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (int)(short)((uint)param_1 >> 0x10);
  if (((short)param_1 == 100) && (iVar1 < 0)) {
    (**(code **)(*in_ECX + 0x1fc))(iVar1 - in_ECX[0x74]);
    thunk_FUN_10049b50(-in_ECX[0x74]);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10081689 Catch@10081689

void Catch_10081689(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1008169d Catch@1008169d

void Catch_1008169d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnComboBoxAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100816c0 FUN_100816c0

undefined4 FUN_100816c0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined1 *)(in_ECX + 0x254) = 0;
  UCanvas::SetTextAnim(DAT_103663c0,false,0.02);
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) ==
      *(int *)(*(int *)(DAT_103663bc + 0x50ac) + 500)) {
    FUN_10174940();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10081752 Catch@10081752

void Catch_10081752(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081766 Catch@10081766

void Catch_10081766(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081790 FUN_10081790

undefined4 FUN_10081790(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101ea239;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(DAT_103663bc[0x142b] + 500);
  if ((*(int *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) == iVar1) && (param_1 == 0x1b)) {
    if ((*(int *)(DAT_103663bc[0x142b] + 0x1f0) != 0) && (iVar1 != 0)) {
      FString::FString((FString *)&uStack_3c,(ushort *)L"LoginState");
      local_8 = local_8 & 0xffffff00;
      FUN_10070110();
      uStack_34 = 0x10081841;
      FUN_10174750();
    }
    if ((DAT_103663bc[0x14] != 0) && (*(int *)(DAT_103663bc[0x14] + 0x58) != 0)) {
      uStack_34 = 0;
      local_38 = 0;
      uStack_3c = 0x1008186c;
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0xd8))();
      uStack_3c = 0x1008187c;
      (**(code **)(*DAT_103663bc + 0x600))();
      uStack_3c = *(undefined4 *)(*(int *)(DAT_103663bc[0x142b] + 500) + 0xce0);
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x58) + 0x94))();
    }
  }
  uStack_34 = param_2;
  local_38 = param_1;
  uStack_3c = 0x100818b6;
  FUN_1005f3a0();
  ExceptionList = local_10;
  return 1;
}


// ==== 100818d0 Catch@100818d0

void Catch_100818d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100818e4 Catch@100818e4

void Catch_100818e4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnKeyDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081910 FUN_10081910

undefined4 FUN_10081910(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 600) = *(int *)(in_ECX + 600) + 1;
  return *(undefined4 *)(in_ECX + 600);
}


// ==== 10081961 Catch@10081961

void Catch_10081961(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081975 Catch@10081975

void Catch_10081975(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::GetUniqueControlID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100819a0 FUN_100819a0

void FUN_100819a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  ExceptionList = local_10;
  return;
}


// ==== 100819f0 Catch@100819f0

void Catch_100819f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081a04 Catch@10081a04

void Catch_10081a04(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081a30 FUN_10081a30

undefined4 FUN_10081a30(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea2a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10080f30();
  ExceptionList = local_10;
  return 1;
}


// ==== 10081a7e Catch@10081a7e

void Catch_10081a7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081a92 Catch@10081a92

void Catch_10081a92(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTutorialHtmlViewer::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081ab0 FUN_10081ab0

undefined4 FUN_10081ab0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea2c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100440c0();
  uVar1 = FUN_1003f600(0xff032113,10000,0);
  *(undefined4 *)(in_ECX + 0x270) = uVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 10081b19 Catch@10081b19

void Catch_10081b19(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081b2d Catch@10081b2d

void Catch_10081b2d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081b50 FUN_10081b50

undefined4 FUN_10081b50(int param_1)

{
  int in_ECX;
  
  if (param_1 == -0xfcdeed) {
    *(undefined4 *)(in_ECX + 0x25c) = 0;
  }
  return 1;
}


// ==== 10081bae Catch@10081bae

void Catch_10081bae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081bc2 Catch@10081bc2

void Catch_10081bc2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081be0 FUN_10081be0

void FUN_10081be0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100819a0();
  ExceptionList = local_10;
  return;
}


// ==== 10081c29 Catch@10081c29

void Catch_10081c29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081c3d Catch@10081c3d

void Catch_10081c3d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081c60 FUN_10081c60

undefined4 FUN_10081c60(short *param_1)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  short *psVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0x97] == 0) {
    in_ECX[0x99] = 0;
    in_ECX[0x9a] = 0;
    in_ECX[0x9b] = 0;
    psVar3 = &DAT_1036edc8;
    do {
      sVar1 = *param_1;
      *psVar3 = sVar1;
      param_1 = param_1 + 1;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    if (DAT_1036edc8 != 0) {
      iVar2 = (**(code **)(*DAT_103663bc + 0x7f0))(&DAT_1036edc8);
      if (iVar2 == 2) {
        if (in_ECX[0x93] == 0) {
          (**(code **)(*in_ECX + 0x13c))();
        }
        else {
          (**(code **)(**(int **)(in_ECX[0x93] + 4) + 0x68))(0xf0000004,0,0);
        }
      }
      else if (iVar2 == 1) {
        in_ECX[0x97] = 1;
      }
    }
    FUN_1014ed50(0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10081d50 Catch@10081d50

void Catch_10081d50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081d64 Catch@10081d64

void Catch_10081d64(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::OnAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081d90 FUN_10081d90

undefined4 FUN_10081d90(short *param_1)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  short *psVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0x97] == 0) {
    in_ECX[0x99] = 0;
    in_ECX[0x9a] = 0;
    in_ECX[0x9b] = 0;
    psVar3 = &DAT_1036edc8;
    do {
      sVar1 = *param_1;
      *psVar3 = sVar1;
      param_1 = param_1 + 1;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (**(code **)(*DAT_103663bc + 0x7f0))(&DAT_1036edc8);
    if (iVar2 == 2) {
      if (in_ECX[0x93] == 0) {
        (**(code **)(*in_ECX + 0x13c))();
      }
      else {
        (**(code **)(**(int **)(in_ECX[0x93] + 4) + 0x68))(0xf0000004,0,0);
      }
    }
    else if (iVar2 == 1) {
      in_ECX[0x97] = 1;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10081e5f Catch@10081e5f

void Catch_10081e5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081e73 Catch@10081e73

void Catch_10081e73(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::OnHtmlButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081e90 FUN_10081e90

void FUN_10081e90(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (ushort *)0x0) {
    iVar1 = appStrcmp(param_1,(ushort *)L"Title");
    if (iVar1 == 0) {
      uVar2 = 0x148;
    }
    else {
      iVar1 = appStrcmp(param_1,(ushort *)L"Content");
      if (iVar1 == 0) {
        uVar2 = 0x7d8;
      }
      else {
        iVar1 = appStrcmp(param_1,(ushort *)L"ToList");
        if (iVar1 == 0) {
          uVar2 = 0x7d7;
        }
        else {
          uVar2 = 0x149;
        }
      }
    }
    FUN_10170650(uVar2,0xffb09b79);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10081f4b Catch@10081f4b

void Catch_10081f4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10081f5f Catch@10081f5f

void Catch_10081f5f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::ShowNoDataMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10081f80 FUN_10081f80

undefined4 FUN_10081f80(ushort *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea380;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar1 = appStrcmp(param_1,(ushort *)L"Title");
  if ((iVar1 == 0) || (iVar1 = appStrcmp(param_1,(ushort *)L"ToList"), iVar1 == 0)) {
    if (param_2 < 0xa1) {
      ExceptionList = local_10;
      return 1;
    }
    uVar2 = 0x147;
  }
  else {
    iVar1 = appStrcmp(param_1,(ushort *)L"Comment");
    if (iVar1 == 0) {
      if (param_2 < 0x101) {
        ExceptionList = local_10;
        return 1;
      }
      uVar2 = 0x14a;
    }
    else {
      if (param_2 < 0xbb9) {
        ExceptionList = local_10;
        return 1;
      }
      uVar2 = 0x7d9;
    }
  }
  FUN_10170650(uVar2,0xffb09b79);
  ExceptionList = local_10;
  return 0;
}


// ==== 10082063 Catch@10082063

void Catch_10082063(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10082077 Catch@10082077

void Catch_10082077(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::ShowLimitMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100820a0 FUN_100820a0

bool FUN_100820a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == -0xffffffc) {
    iVar1 = (**(code **)(*in_ECX + 500))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10082100 FUN_10082100

undefined4 FUN_10082100(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea3a0;
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


// ==== 10082161 Catch@10082161

void Catch_10082161(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10082175 Catch@10082175

void Catch_10082175(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNPCHtmlViewer::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100821a0 FUN_100821a0

undefined4 FUN_100821a0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea3c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x13c))();
  ExceptionList = local_10;
  return 1;
}


// ==== 100821f5 Catch@100821f5

void Catch_100821f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10082209 Catch@10082209

void Catch_10082209(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNPCHtmlViewer::OnHideMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10082230 FUN_10082230

bool FUN_10082230(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100820a0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == -0xf0febed)) {
    iVar1 = (**(code **)(*in_ECX + 0x1f8))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 10082290 FUN_10082290

void FUN_10082290(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ea3e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100822e0 FUN_100822e0

undefined4 FUN_100822e0(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == 0) || (*in_ECX != *param_1)) {
    FUN_101c238d();
  }
  return CONCAT31((int3)((uint)in_ECX[1] >> 8),in_ECX[1] == param_1[1]);
}


// ==== 10082310 FUN_10082310

undefined4 FUN_10082310(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == 0) || (*in_ECX != *param_1)) {
    FUN_101c238d();
  }
  return CONCAT31((int3)((uint)in_ECX[1] >> 8),in_ECX[1] != param_1[1]);
}


// ==== 10082340 FUN_10082340

void FUN_10082340(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ea419;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10082390 FUN_10082390

void FUN_10082390(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  if (*(int *)(in_ECX + 0x1fc) != 0) {
    thunk_FUN_10049b50(0);
  }
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  return;
}


// ==== 100823c0 FUN_100823c0

void FUN_100823c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103723d0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100823f0 FUN_100823f0

void FUN_100823f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10372900,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10082420 FUN_10082420

void FUN_10082420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10372e30,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10082450 FUN_10082450

void FUN_10082450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10373890,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10082480 FUN_10082480

void FUN_10082480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10373dc0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100824b0 FUN_100824b0

void FUN_100824b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10370f10,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100824e0 FUN_100824e0

void FUN_100824e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036eff0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10082510 FUN_10082510

void FUN_10082510(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  uint uStack_3c;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea440;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x18) == 0) {
    *param_1 = *(int *)(in_ECX + 8);
    iVar3 = *(int *)(in_ECX + 0xc);
  }
  else {
    piVar2 = (int *)FUN_10082510(local_2c);
    iVar1 = *piVar2;
    iVar3 = piVar2[1];
    param_1[1] = 0;
    *param_1 = 0;
    *param_1 = *(int *)(in_ECX + 8) + iVar1;
    iVar3 = *(int *)(in_ECX + 0xc) + iVar3;
  }
  param_1[1] = iVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1008259f Catch@1008259f

void Catch_1008259f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100825b3 Catch@100825b3

void Catch_100825b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlObject::GetWndRelativePosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100825d0 FUN_100825d0

ulong FUN_100825d0(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  bool bVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea460;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (wchar_t *)0x0) {
    return 0;
  }
  pwVar8 = L"LEVEL";
  pwVar4 = param_1;
  do {
    wVar1 = *pwVar4;
    bVar11 = (ushort)wVar1 < (ushort)*pwVar8;
    if (wVar1 != *pwVar8) {
LAB_1008264a:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_1008264f;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar4[1];
    bVar11 = (ushort)wVar1 < (ushort)pwVar8[1];
    if (wVar1 != pwVar8[1]) goto LAB_1008264a;
    pwVar4 = pwVar4 + 2;
    pwVar8 = pwVar8 + 2;
  } while (wVar1 != L'\0');
  iVar3 = 0;
LAB_1008264f:
  if (iVar3 != 0) {
    pwVar4 = param_1;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    lVar2 = (ulonglong)(((int)pwVar4 - (int)(param_1 + 1) >> 1) + 5) * 2;
    ExceptionList = &local_10;
    pwVar8 = (wchar_t *)FUN_10004ed0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    pwVar9 = L"0xff";
    pwVar4 = pwVar8;
    do {
      wVar1 = *pwVar9;
      *pwVar4 = wVar1;
      pwVar9 = pwVar9 + 1;
      pwVar4 = pwVar4 + 1;
      pwVar5 = param_1;
    } while (wVar1 != L'\0');
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    uVar6 = (int)pwVar5 - (int)param_1;
    pwVar4 = pwVar8 + -1;
    do {
      pwVar9 = pwVar4 + 1;
      pwVar4 = pwVar4 + 1;
    } while (*pwVar9 != L'\0');
    pwVar9 = param_1;
    for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pwVar4 = *(undefined4 *)pwVar9;
      pwVar9 = pwVar9 + 2;
      pwVar4 = pwVar4 + 2;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)pwVar4 = (char)*pwVar9;
      pwVar9 = (wchar_t *)((int)pwVar9 + 1);
      pwVar4 = (wchar_t *)((int)pwVar4 + 1);
    }
    pwVar4 = param_1 + 1;
    do {
      wVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (wVar1 != L'\0');
    pwVar8[((int)param_1 - (int)pwVar4 >> 1) + 4] = L'\0';
    uVar7 = _wcstoul(pwVar8,(wchar_t **)0x0,0x10);
    FUN_10024ca0(pwVar8);
    ExceptionList = local_10;
    return uVar7;
  }
  return 0xffffcc00;
}


// ==== 1008272e Catch@1008272e

void Catch_1008272e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10082742 Catch@10082742

void Catch_10082742(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"GetMatchedColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10082760 FUN_10082760

void FUN_10082760(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uStack_48;
  FString local_38 [12];
  undefined1 local_2c [8];
  undefined4 local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101ea489;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100216e0(local_2c,0x41,*(undefined4 *)(in_ECX + 0x4c));
  FString::FString(local_38,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if (*(int *)(in_ECX + 4) == 1) {
    iVar4 = *(int *)(in_ECX + 0x50);
    iVar3 = in_ECX;
    if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 1)) && (*(int *)(iVar4 + 0x58) == 0)) &&
       (*(int *)(in_ECX + 0x58) == 0)) {
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_38);
      ExceptionList = local_10;
      return;
    }
    while (iVar3 != 0) {
      FString::operator+=(local_38,*(ushort **)(iVar3 + 0xa8));
      iVar3 = *(int *)(iVar3 + 0x54);
      if (((iVar3 == 0) || (*(int *)(iVar3 + 4) != 1)) ||
         ((*(int *)(iVar3 + 0x58) != 0 || (*(int *)(in_ECX + 0x58) != 0)))) break;
    }
    if (param_1 < *(int *)(in_ECX + 0x2c)) {
      param_1 = *(int *)(in_ECX + 0x2c);
    }
    uVar2 = *(undefined4 *)(in_ECX + 0x4c);
    uVar8 = *(undefined4 *)(in_ECX + 0xac);
    uVar7 = 0;
    uVar6 = 1;
    uVar5 = 0;
    iVar4 = param_1;
    puVar1 = FString::operator*(local_38);
    uVar2 = FUN_10020bb0(&local_24,puVar1,iVar4,uVar5,uVar6,uVar7,uVar8,uVar2);
    *(undefined4 *)(in_ECX + 0xb0) = uVar2;
    *(undefined4 *)(in_ECX + 0x24) = local_24;
    *(int *)(in_ECX + 0x28) = local_20 + 6;
    *(int *)(in_ECX + 0x30) = param_1;
    iVar4 = *(int *)(in_ECX + 0x58);
    if (((iVar4 == 2) || (iVar4 == 1)) || (iVar4 == 8)) {
      *(undefined4 *)(in_ECX + 0x20) = uVar2;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 100828b1 Catch@100828b1

void Catch_100828b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100828c5 Catch@100828c5

void Catch_100828c5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::Align");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100828f0 FUN_100828f0

void FUN_100828f0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea4b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x9c) != 0) {
    FUN_10024ca0(*(int *)(in_ECX + 0x9c));
    *(undefined4 *)(in_ECX + 0x9c) = 0;
  }
  if (*(int *)(in_ECX + 0xa8) != 0) {
    FUN_10024ca0(*(int *)(in_ECX + 0xa8));
    *(undefined4 *)(in_ECX + 0xa8) = 0;
  }
  FString::Empty((FString *)(in_ECX + 0x5c));
  FString::Empty((FString *)(in_ECX + 0x68));
  FString::Empty((FString *)(in_ECX + 0x74));
  FString::Empty((FString *)(in_ECX + 0x80));
  FString::Empty((FString *)(in_ECX + 0x8c));
  ExceptionList = local_10;
  return;
}


// ==== 100829a0 Catch@100829a0

void Catch_100829a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100829b4 Catch@100829b4

void Catch_100829b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::Release");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100829e0 FUN_100829e0

void FUN_100829e0(byte param_1)

{
  FUN_10080b00();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10082a10 FUN_10082a10

void FUN_10082a10(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint local_68;
  undefined1 local_58 [4];
  int local_54;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea4d0;
  local_10 = ExceptionList;
  local_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_68;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = *(int *)(in_ECX + 0x68);
  local_18 = 0;
  if (param_1 < *(int *)(in_ECX + 0x2c)) {
    param_1 = *(int *)(in_ECX + 0x2c);
  }
  *(int *)(in_ECX + 0x24) = param_1;
  FUN_100216e0(local_58,0x41,*(undefined4 *)(in_ECX + 0x4c));
  local_1c = 0;
  local_40 = 0;
  local_44 = 0;
  local_24 = 0;
  iVar5 = 0;
  do {
    if (local_2c <= local_24) {
      if (*(int *)(in_ECX + 0x28) < iVar5) {
        *(int *)(in_ECX + 0x28) = iVar5;
      }
      ExceptionList = local_10;
      return;
    }
    iVar5 = local_24 * 4;
    piVar3 = (int *)(*(int *)(in_ECX + 100) + iVar5);
    local_20 = (uint)(*(int *)(*piVar3 + 4) == 1);
    local_34 = 0;
    if (local_24 < local_2c + -1) {
      local_34 = (uint)(*(int *)(piVar3[1] + 4) == 1);
    }
    if ((*(int *)GL2ThaiHtmlMode_exref != 0) && (local_20 != 0)) {
      puVar1 = (ushort *)(in_ECX + 0x78);
      if (*puVar1 == 0) {
        appStrcpy(puVar1,*(ushort **)(*piVar3 + 0xa8));
      }
      if (local_34 == 0) {
        FUN_1008c0c0(puVar1,param_1);
        *puVar1 = 0;
      }
      else {
        appStrcat(puVar1,*(ushort **)(*(int *)(*(int *)(in_ECX + 100) + 4 + iVar5) + 0xa8));
      }
    }
    local_48 = 0;
    if (local_24 < local_2c + -1) {
      local_48 = (uint)(*(int *)(*(int *)(*(int *)(in_ECX + 100) + 4 + iVar5) + 0x34) == 1);
    }
    iVar4 = *(int *)(in_ECX + 100);
    iVar2 = *(int *)(iVar4 + iVar5);
    local_28 = (uint)(*(int *)(iVar2 + 0x34) == 1);
    local_30 = 0;
    if ((0 < local_24) && (local_20 != 0)) {
      local_30 = (uint)(*(int *)(*(int *)(iVar4 + -4 + iVar5) + 0x34) == 1);
      iVar2 = *(int *)(iVar4 + iVar5);
    }
    local_3c = 0;
    if (local_20 != 0) {
      local_3c = (uint)(*(int *)(*(int *)(iVar4 + iVar5) + 0x58) == 0);
      iVar2 = *(int *)(iVar4 + iVar5);
    }
    if (local_1c == 0) {
      if ((local_28 == 0) || (local_3c == 0)) {
LAB_10082c1e:
        if (((0 < local_24) && (local_20 != 0)) &&
           ((*(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(*(int *)(iVar4 + -4 + iVar5) + 0xb0),
            local_28 != 0 || (local_30 != 0)))) {
          *(undefined4 *)(*(int *)(*(int *)(in_ECX + 100) + iVar5) + 0xac) = 0;
        }
      }
      else {
        local_40 = 0;
        local_44 = local_24;
        while ((((local_44 < *(int *)(in_ECX + 0x68) &&
                 (iVar5 = *(int *)(iVar4 + local_44 * 4), *(int *)(iVar5 + 0x34) == 1)) &&
                (*(int *)(iVar5 + 4) != 0)) && (*(int *)(iVar5 + 0x58) == 0))) {
          local_40 = local_40 + *(int *)(iVar5 + 0x24);
          local_1c = local_1c + 1;
          local_44 = local_44 + 1;
        }
        iVar5 = local_24 * 4;
        *(int *)(*(int *)(iVar4 + iVar5) + 0xac) = (param_1 - local_40) / 2;
      }
    }
    else {
      if (local_1c < 1) goto LAB_10082c1e;
      *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(*(int *)(iVar4 + -4 + iVar5) + 0xb0);
    }
    (**(code **)**(undefined4 **)(iVar5 + *(int *)(in_ECX + 100)))(param_1,param_2);
    if (local_1c < 1) {
      if (local_28 == 0) {
        if ((local_20 == 0) || (local_30 != 0)) {
          iVar4 = *(int *)(iVar5 + *(int *)(in_ECX + 100));
          *(undefined4 *)(iVar4 + 8) = 0;
        }
        else {
          piVar3 = (int *)(*(int *)(in_ECX + 100) + iVar5);
          iVar4 = *piVar3;
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(*piVar3 + 0xac);
        }
        *(int *)(iVar4 + 0xc) = local_18;
      }
      else {
        piVar3 = (int *)(*(int *)(in_ECX + 100) + iVar5);
        iVar4 = (param_1 - *(int *)(*piVar3 + 0x24)) / 2;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        iVar2 = *piVar3;
        *(int *)(iVar2 + 8) = iVar4;
        *(int *)(iVar2 + 0xc) = local_18;
      }
      if (((local_20 == 0) || (local_34 == 0)) || ((local_48 != 0 || (local_28 != 0))))
      goto LAB_10082c8c;
      local_18 = local_18 + -6 +
                 (*(int *)(*(int *)(*(int *)(in_ECX + 100) + iVar5) + 0x28) - local_54);
    }
    else {
      piVar3 = (int *)(*(int *)(in_ECX + 100) + iVar5);
      iVar4 = *piVar3;
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(*piVar3 + 0xac);
      *(int *)(iVar4 + 0xc) = local_18;
      local_1c = local_1c + -1;
      if (local_1c == 0) {
LAB_10082c8c:
        local_18 = local_18 + *(int *)(*(int *)(*(int *)(in_ECX + 100) + iVar5) + 0x28);
      }
    }
    iVar5 = *(int *)(iVar5 + *(int *)(in_ECX + 100));
    if (*(int *)(in_ECX + 0x24) < *(int *)(iVar5 + 0x24)) {
      *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar5 + 0x24);
    }
    local_24 = local_24 + 1;
    iVar5 = local_18;
  } while( true );
}


// ==== 10082d80 Catch@10082d80

void Catch_10082d80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_102a47f0);
}


// ==== 10082d94 Catch@10082d94

void Catch_10082d94(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::Align");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10082dc0 FUN_10082dc0

void FUN_10082dc0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea4f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x68);
  FUN_10080bb0(param_2);
  if (*(int *)(in_ECX + 0x28) < param_2) {
    *(int *)(in_ECX + 0x28) = param_2;
  }
  if (*(int *)(in_ECX + 0x24) < param_1) {
    *(int *)(in_ECX + 0x24) = param_1;
  }
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 100) + iVar2 * 4) + 4))
              (*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10082e51 Catch@10082e51

void Catch_10082e51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10082e65 Catch@10082e65

void Catch_10082e65(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::AlignPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10082e90 FUN_10082e90

void FUN_10082e90(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x70) != 0) && (*(int *)(in_ECX + 4) == 0x2b)) {
    for (local_20 = 0; local_20 < *(int *)(in_ECX + 0x44); local_20 = local_20 + 1) {
      iVar4 = *(int *)(in_ECX + 0x3c);
      iVar1 = (*(int *)(in_ECX + 8) - iVar4) + -1 + local_20;
      iVar2 = (*(int *)(in_ECX + 0x24) - local_20) + iVar4 + *(int *)(in_ECX + 8);
      iVar3 = (*(int *)(in_ECX + 0xc) - iVar4) + -1 + local_20;
      iVar4 = (*(int *)(in_ECX + 0x28) - local_20) + *(int *)(in_ECX + 0xc) + iVar4;
      FUN_10020e80(iVar1,iVar3,iVar2,iVar3,0xffdcdcdc,0);
      FUN_10020e80(iVar1,iVar4,iVar2,iVar4,0xffdcdcdc,0);
      FUN_10020e80(iVar1,iVar3,iVar1,iVar4,0xffdcdcdc,0);
      FUN_10020e80(iVar2,iVar3,iVar2,iVar4,0xffdcdcdc,0);
    }
  }
  FUN_10023790(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
  iVar1 = *(int *)(in_ECX + 0x68);
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 100) + iVar3 * 4) + 8))(param_1);
  }
  FUN_10023160();
  ExceptionList = local_10;
  return;
}


// ==== 10082fdb Catch@10082fdb

void Catch_10082fdb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10082fef Catch@10082fef

void Catch_10082fef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::Draw");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10083010 FUN_10083010

int FUN_10083010(void)

{
  int iVar1;
  int in_ECX;
  uint uStack_34;
  undefined1 local_24 [4];
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea530;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x68);
  if (iVar1 < 1) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_10082510(local_24);
  ExceptionList = local_10;
  return *(int *)(*(int *)(*(int *)(in_ECX + 100) + -4 + iVar1 * 4) + 0x28) + local_20;
}


// ==== 10083093 Catch@10083093

void Catch_10083093(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100830a7 Catch@100830a7

void Catch_100830a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::GetMaxHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100830d0 FUN_100830d0

void FUN_100830d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10080b10(param_1);
  iVar2 = *(int *)(in_ECX + 0x884);
  for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
    iVar1 = iVar5 * 4;
    iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x880) + iVar1) + 4);
    local_18 = *(int *)(in_ECX + 0x40) + *(int *)(in_ECX + 0x44) * 2 + *(int *)(in_ECX + 0x3c);
    for (iVar6 = 0; iVar6 < iVar3; iVar6 = iVar6 + 1) {
      *(int *)(*(int *)(**(int **)(*(int *)(in_ECX + 0x880) + iVar1) + iVar6 * 4) + 8) = local_18;
      iVar4 = *(int *)(*(int *)(in_ECX + 0x898) + iVar6 * 4);
      local_18 = local_18 +
                 *(int *)(in_ECX + 0x40) + (*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x3c)) * 2 +
                 iVar4;
      (**(code **)(**(int **)(**(int **)(*(int *)(in_ECX + 0x880) + iVar1) + iVar6 * 4) + 4))
                (iVar4,*(undefined4 *)(*(int *)(in_ECX + 0x8b0) + iVar1));
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100831dc Catch@100831dc

void Catch_100831dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100831f0 Catch@100831f0

void Catch_100831f0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTable::AlignPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10083210 FUN_10083210

void FUN_10083210(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x8c0) != 0) {
    FUN_10020d60(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc),
                 *(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),
                 *(undefined4 *)(in_ECX + 0x8bc));
  }
  if (0 < *(int *)(in_ECX + 0x44)) {
    for (local_20 = 0; local_20 < *(int *)(in_ECX + 0x44); local_20 = local_20 + 1) {
      iVar1 = *(int *)(in_ECX + 8) + local_20;
      iVar2 = (*(int *)(in_ECX + 0x24) - local_20) + -1 + *(int *)(in_ECX + 8);
      iVar3 = *(int *)(in_ECX + 0xc) + local_20;
      iVar4 = (*(int *)(in_ECX + 0x28) - local_20) + -1 + *(int *)(in_ECX + 0xc);
      FUN_10020e80(iVar1,iVar3,iVar2,iVar3,0xffdcdcdc,0);
      FUN_10020e80(iVar1,iVar4,iVar2,iVar4,0xffdcdcdc,0);
      FUN_10020e80(iVar1,iVar3,iVar1,iVar4,0xffdcdcdc,0);
      FUN_10020e80(iVar2,iVar3,iVar2,iVar4,0xffdcdcdc,0);
    }
  }
  FUN_10023790(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
  iVar1 = *(int *)(in_ECX + 0x884);
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x880) + iVar3 * 4) + 4);
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (**(code **)(**(int **)(**(int **)(*(int *)(in_ECX + 0x880) + iVar3 * 4) + iVar4 * 4) + 8))
                (param_1);
    }
  }
  FUN_10023160();
  ExceptionList = local_10;
  return;
}


// ==== 100833a6 Catch@100833a6

void Catch_100833a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100833ba Catch@100833ba

void Catch_100833ba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTable::Draw");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100833e0 FUN_100833e0

undefined4 FUN_100833e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  if (*(int *)(in_ECX + 0x21c) != 0) {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xfc))(0);
    if (iVar3 == 0) {
      uVar4 = FUN_101c19e0();
      uVar5 = FUN_101c19e0();
      uVar10 = 1;
      uVar9 = 0xff;
      uVar1 = *(undefined4 *)(in_ECX + 0x21c);
      uVar7 = 0;
      uVar6 = 0;
      uVar2 = uVar5;
      uVar8 = uVar4;
    }
    else {
      uVar4 = FUN_101c19e0();
      uVar10 = 1;
      uVar9 = 0xff;
      uVar1 = *(undefined4 *)(in_ECX + 0x21c);
      uVar8 = uVar4;
      uVar2 = FUN_101c19e0(uVar4,uVar1,0xff,1);
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = FUN_101c19e0(uVar4,0,0,uVar2);
    }
    FUN_10021a00(0,0,uVar5,uVar4,uVar6,uVar7,uVar2,uVar8,uVar1,uVar9,uVar10);
  }
  FUN_10023790(*(undefined4 *)(in_ECX + 0x1cc),*(undefined4 *)(in_ECX + 0x1d0));
  if (*(char *)(in_ECX + 0x254) != '\0') {
    UCanvas::StartTextAnim(DAT_103663c0);
  }
  if (*(int *)(in_ECX + 0x238) != 0) {
    if (*(int *)(in_ECX + 0x218) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x218) + 8))(param_1);
    }
    if ((*(int *)(in_ECX + 0x238) != 0) && (*(int *)(in_ECX + 0x218) != 0)) {
      uVar1 = FUN_10083010();
      FUN_10043d00(uVar1);
    }
  }
  FUN_10023160();
  if (*(char *)(in_ECX + 0x254) != '\0') {
    UCanvas::EndTextAnim(DAT_103663c0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 100835a3 Catch@100835a3

void Catch_100835a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100835b7 Catch@100835b7

void Catch_100835b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100835e0 FUN_100835e0

void FUN_100835e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea5b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10083010();
  ExceptionList = local_10;
  return;
}


// ==== 1008362f Catch@1008362f

void Catch_1008362f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10083643 Catch@10083643

void Catch_10083643(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::GetFrameHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10083660 FUN_10083660

undefined4 FUN_10083660(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea5d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(int *)(in_ECX + 0x80) + 3,*(int *)(in_ECX + 0x84) + 10,uVar2,uVar1);
  FUN_10023790(*(undefined4 *)(in_ECX + 0x1cc),*(undefined4 *)(in_ECX + 0x1d0));
  if ((*(int *)(in_ECX + 0x218) != 0) && (*(int *)(in_ECX + 0x238) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x218) + 8))(param_1);
    if (*(int *)(in_ECX + 0x238) != 0) {
      uVar1 = FUN_10083010();
      FUN_10043d00(uVar1);
    }
  }
  FUN_10023160();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10083799 Catch@10083799

void Catch_10083799(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100837ad Catch@100837ad

void Catch_100837ad(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBBSHtmlViewer::OnPaINT");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100837d0 FUN_100837d0

undefined4 FUN_100837d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea5f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar2 = FUN_101c19e0();
  uVar3 = FUN_101c19e0(uVar2);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar3,uVar2);
  iVar1 = *(int *)(in_ECX + 0x1d0);
  if (iVar1 != 0) {
    uVar2 = FUN_101c19e0();
    uVar3 = FUN_101c19e0();
    FUN_10021a00(0,0x14,uVar3,uVar2,0,0,uVar3,uVar2,iVar1,0xff,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 100838c1 Catch@100838c1

void Catch_100838c1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100838d5 Catch@100838d5

void Catch_100838d5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCNPCHtmlViewer::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10083900 FUN_10083900

undefined4 FUN_10083900(void)

{
  int *in_ECX;
  
  if (in_ECX[1] < 1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *(undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
}


// ==== 10083930 FUN_10083930

uint FUN_10083930(void)

{
  int *in_ECX;
  
  if (*in_ECX == 0) {
    FUN_101c238d();
  }
  if (*(uint *)(*in_ECX + 8) <= (uint)in_ECX[1]) {
    FUN_101c238d();
    return in_ECX[1];
  }
  return in_ECX[1];
}


// ==== 10083960 FUN_10083960

void FUN_10083960(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 *puVar2;
  
  *in_ECX = 0;
  if ((param_2 != 0) && (param_1 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)(param_2 + 4);
    puVar2 = puVar1;
    if (7 < *(uint *)(param_2 + 0x18)) {
      puVar2 = (undefined4 *)*puVar1;
    }
    if (puVar2 <= param_1) {
      if (7 < *(uint *)(param_2 + 0x18)) {
        puVar1 = (undefined4 *)*puVar1;
      }
      if (param_1 <= (undefined4 *)((int)puVar1 + *(int *)(param_2 + 0x14) * 2)) goto LAB_100839a6;
    }
  }
  FUN_101c238d();
LAB_100839a6:
  *in_ECX = param_2;
  in_ECX[1] = (int)param_1;
  return;
}


// ==== 100839c0 FUN_100839c0

UObject * FUN_100839c0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UHtmlHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 100839f0 FUN_100839f0

UObject * FUN_100839f0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10373dc0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10083a20 FUN_10083a20

UObject * FUN_10083a20(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10373890);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10083a50 FUN_10083a50

void * FUN_10083a50(void *param_1,int param_2,void *param_3,int param_4)

{
  _memmove_s(param_1,param_2 * 2,param_3,param_4 * 2);
  return param_1;
}


// ==== 10083a80 FUN_10083a80

int FUN_10083a80(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10083aa0 FUN_10083aa0

void FUN_10083aa0(uint param_1)

{
  undefined1 local_c [12];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 2) {
    FUN_10021410(0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_102add7c);
  }
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1 * 2,&DAT_1022f8a0);
  return;
}


// ==== 10083b00 FUN_10083b00

undefined4 FUN_10083b00(void)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea610;
  local_10 = ExceptionList;
  local_8 = 0;
  if (DAT_1036efcc < 1) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_10083900();
  ExceptionList = local_10;
  return uVar1;
}


// ==== 10083b6b Catch@10083b6b

void Catch_10083b6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10083b7f Catch@10083b7f

void Catch_10083b7f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlObject::GetHAlign");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10083ba0 FUN_10083ba0

undefined4 FUN_10083ba0(void)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea630;
  local_10 = ExceptionList;
  local_8 = 0;
  if (DAT_1036efd8 < 1) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_10083900();
  ExceptionList = local_10;
  return uVar1;
}


// ==== 10083c0b Catch@10083c0b

void Catch_10083c0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10083c1f Catch@10083c1f

void Catch_10083c1f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlObject::GetVAlign");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10083c40 FUN_10083c40

void FUN_10083c40(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x68);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 100) + iVar2 * 4) + 0x14))();
    if (*(int *)(*(int *)(in_ECX + 100) + iVar2 * 4) != 0) {
      FUN_100829e0(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x68); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 100),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 10083cd4 Catch@10083cd4

void Catch_10083cd4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10083ce8 Catch@10083ce8

void Catch_10083ce8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::Release");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10083d10 FUN_10083d10

void FUN_10083d10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uStack_60;
  undefined4 local_44;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea670;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  FArray::Empty((FArray *)(in_ECX + 0x8b0),4,0);
  local_40 = *(int *)(in_ECX + 0x884);
  local_38 = 0;
  iVar10 = *(int *)(in_ECX + 0x44);
  iVar6 = *(int *)(in_ECX + 0x3c);
  local_18 = iVar6 + iVar10 * 2 + *(int *)(in_ECX + 0x40);
  local_30 = 0;
  local_2c = 0;
  if (*(int *)(in_ECX + 0x60) != 0) {
    *(int *)(in_ECX + 0x5c) = (*(int *)(in_ECX + 0x5c) * param_1) / 100;
  }
  if ((param_1 <= *(int *)(in_ECX + 0x24)) && (*(int *)(in_ECX + 0x5c) == 0)) {
    *(int *)(in_ECX + 0x5c) = param_1;
  }
  local_20 = 0;
LAB_10083db4:
  local_1c = 0;
  if (local_40 <= local_20) {
    iVar10 = *(int *)(in_ECX + 0x3c);
    iVar12 = local_18 - iVar10;
    iVar6 = *(int *)(in_ECX + 0x44);
    iVar1 = *(int *)(in_ECX + 0x40);
    local_18 = iVar10 + iVar6 * 2 + iVar1;
    iVar2 = *(int *)(in_ECX + 0x28);
    if (iVar12 < iVar2) {
      iVar12 = *(int *)(in_ECX + 0x8b4);
      for (iVar8 = 0; iVar8 < local_40; iVar8 = iVar8 + 1) {
        iVar3 = iVar8 * 4;
        iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x880) + iVar3) + 4);
        for (local_34 = 0; local_34 < iVar4; local_34 = local_34 + 1) {
          iVar9 = (*(int *)(iVar3 + *(int *)(in_ECX + 0x8b0)) *
                  ((iVar2 + ((iVar10 + iVar6) * iVar12 + iVar6) * -2) - (iVar12 + 1) * iVar1)) /
                  local_30;
          puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x880) + iVar3);
          iVar5 = local_34 * 4;
          if (*(int *)(*(int *)(iVar5 + *(int *)*puVar7) + 0x38) == 1) {
            *(int *)(*(int *)(iVar5 + *(int *)*puVar7) + 0x48) =
                 iVar9 / 2 - *(int *)(*(int *)(*(int *)*puVar7 + iVar5) + 0x28) / 2;
          }
          else if (*(int *)(*(int *)(iVar5 + *(int *)*puVar7) + 0x38) == 3) {
            *(int *)(*(int *)(iVar5 + *(int *)*puVar7) + 0x48) =
                 iVar9 - *(int *)(*(int *)(*(int *)*puVar7 + iVar5) + 0x28);
          }
          *(int *)(*(int *)(iVar5 + **(int **)(*(int *)(in_ECX + 0x880) + iVar3)) + 0x28) = iVar9;
          *(int *)(*(int *)(iVar5 + **(int **)(*(int *)(in_ECX + 0x880) + iVar3)) + 0xc) = local_18;
        }
        *(undefined4 *)(iVar3 + *(int *)(in_ECX + 0x8b0)) =
             *(undefined4 *)(*(int *)**(undefined4 **)(*(int *)(in_ECX + 0x880) + iVar3) + 0x28);
        local_18 = local_18 +
                   *(int *)(iVar3 + *(int *)(in_ECX + 0x8b0)) +
                   (*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x3c)) * 2 + *(int *)(in_ECX + 0x40)
        ;
      }
      iVar12 = *(int *)(in_ECX + 0x28);
    }
    *(int *)(in_ECX + 0x24) = local_38;
    *(int *)(in_ECX + 0x28) = iVar12;
    ExceptionList = local_10;
    return;
  }
  iVar1 = local_20 * 4;
  local_3c = *(int *)(*(int *)(*(int *)(in_ECX + 0x880) + iVar1) + 4);
  local_28 = iVar6 + iVar10 * 2 + *(int *)(in_ECX + 0x40);
  local_24 = 0;
LAB_10083de2:
  do {
    iVar10 = local_24;
    if (local_3c <= local_24) break;
    iVar6 = *(int *)(in_ECX + 0x24);
    if ((iVar6 < param_1) && (*(int *)(in_ECX + 0x5c) == 0)) {
      (**(code **)**(undefined4 **)(local_24 * 4 + **(int **)(*(int *)(in_ECX + 0x880) + iVar1)))
                (*(undefined4 *)(*(int *)(in_ECX + 0x8a4) + local_24 * 4),local_18);
    }
    else {
      iVar2 = local_24 * 4;
      if (iVar6 < 1) {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x8a4) + iVar2) * *(int *)(in_ECX + 0x5c);
      }
      else {
        iVar6 = (*(int *)(*(int *)(in_ECX + 0x8a4) + iVar2) * *(int *)(in_ECX + 0x5c)) / iVar6;
      }
      (**(code **)**(undefined4 **)(iVar2 + **(int **)(*(int *)(in_ECX + 0x880) + iVar1)))
                (iVar6,local_18);
    }
    iVar10 = iVar10 * 4;
    iVar6 = *(int *)(iVar10 + **(int **)(*(int *)(in_ECX + 0x880) + iVar1));
    *(int *)(iVar6 + 8) = local_28;
    *(int *)(iVar6 + 0xc) = local_18;
    puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x880) + iVar1);
    *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x28) =
         *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x28) + -6;
    puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x880) + iVar1);
    iVar6 = *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x28);
    if (local_1c < iVar6) {
      local_1c = iVar6;
    }
    local_28 = local_28 +
               *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x24) +
               (*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x3c)) * 2 + *(int *)(in_ECX + 0x40);
    if (local_24 < *(int *)(in_ECX + 0x89c)) {
      piVar11 = (int *)(*(int *)(in_ECX + 0x898) + iVar10);
      if (*piVar11 < *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x24)) {
        *piVar11 = *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x24);
        local_24 = local_24 + 1;
        goto LAB_10083de2;
      }
    }
    else {
      local_44 = *(undefined4 *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x24);
      FUN_100d9a30(&local_44);
    }
    local_24 = local_24 + 1;
  } while( true );
  local_2c = 0;
  while (local_2c < local_3c) {
    puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x880) + iVar1);
    iVar10 = local_2c * 4;
    if (*(int *)(*(int *)(iVar10 + *(int *)*puVar7) + 0x38) == 1) {
      *(int *)(*(int *)(iVar10 + *(int *)*puVar7) + 0x48) =
           local_1c / 2 - *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x28) / 2;
      local_2c = local_2c + 1;
    }
    else {
      if (*(int *)(*(int *)(iVar10 + *(int *)*puVar7) + 0x38) == 3) {
        *(int *)(*(int *)(iVar10 + *(int *)*puVar7) + 0x48) =
             local_1c - *(int *)(*(int *)(*(int *)*puVar7 + iVar10) + 0x28);
      }
      local_2c = local_2c + 1;
    }
  }
  FUN_100d9a30(&local_1c);
  local_30 = local_30 + local_1c;
  iVar10 = *(int *)(in_ECX + 0x44);
  iVar6 = *(int *)(in_ECX + 0x3c);
  local_18 = local_18 + *(int *)(in_ECX + 0x40) + (iVar6 + iVar10) * 2 + local_1c;
  if (local_38 < local_28 - iVar6) {
    local_38 = local_28 - iVar6;
  }
  local_20 = local_20 + 1;
  goto LAB_10083db4;
}


// ==== 1008419b Catch@1008419b

void Catch_1008419b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_102a47f0);
}


// ==== 100841af Catch@100841af

void Catch_100841af(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTable::Align");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100841d0 FUN_100841d0

undefined4 FUN_100841d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  UObject *this;
  undefined4 uVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  code *pcVar4;
  
  uVar1 = param_3;
  uVar3 = param_2;
  puStack_c = &LAB_101ea690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_10043910(param_1,param_2,param_3);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_1 == 0x501) {
    param_1 = uVar3;
    this = (UObject *)FUN_10187a60(&param_1);
    if (this != (UObject *)0x0) {
      iVar2 = UObject::IsA(this,(UClass *)&DAT_103723d0);
      if (iVar2 == 0) {
        iVar2 = UObject::IsA(this,(UClass *)&DAT_10372900);
        if (iVar2 == 0) {
          iVar2 = UObject::IsA(this,(UClass *)&DAT_10372e30);
          if (iVar2 == 0) {
            iVar2 = UObject::IsA(this,(UClass *)&DAT_10373dc0);
            if (iVar2 != 0) {
              uVar3 = (**(code **)(*in_ECX + 0x210))(uVar1,this);
              ExceptionList = local_10;
              return uVar3;
            }
            iVar2 = UObject::IsA(this,(UClass *)&DAT_10373890);
            if (iVar2 != 0) {
              uVar3 = (**(code **)(*in_ECX + 0x214))(uVar1,this);
              ExceptionList = local_10;
              return uVar3;
            }
            iVar2 = UObject::IsA(this,(UClass *)&DAT_10370f10);
            if (iVar2 == 0) {
              ExceptionList = local_10;
              return 0;
            }
            pcVar4 = *(code **)(*in_ECX + 0x218);
          }
          else {
            pcVar4 = *(code **)(*in_ECX + 0x20c);
          }
        }
        else {
          pcVar4 = *(code **)(*in_ECX + 0x208);
        }
      }
      else {
        pcVar4 = *(code **)(*in_ECX + 0x204);
      }
      uVar3 = (*pcVar4)(uVar1);
      ExceptionList = local_10;
      return uVar3;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10084366 Catch@10084366

void Catch_10084366(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1008437a Catch@1008437a

void Catch_1008437a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::DispatchWndMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100843a0 FUN_100843a0

void FUN_100843a0(void)

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
  
  puStack_c = &LAB_101ea6b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UHtmlHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_100839c0(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1008442a;
    appFailAssert("m_pScriptHandle",".\\Src\\HtmlTranslator.cpp",0x9ee);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1008445e Catch@1008445e

void Catch_1008445e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10084472 Catch@10084472

void Catch_10084472(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlViewer::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10084490 FUN_10084490

bool FUN_10084490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100841d0(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 100844b0 FUN_100844b0

void FUN_100844b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ea6d9;
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


// ==== 10084550 FUN_10084550

void FUN_10084550(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ea709;
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


// ==== 100845f0 FUN_100845f0

void FUN_100845f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ea739;
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


// ==== 10084690 FUN_10084690

void FUN_10084690(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ea769;
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


// ==== 10084730 FUN_10084730

int * FUN_10084730(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = in_ECX[1];
  *param_1 = iVar1;
  param_1[1] = iVar2;
  if (iVar1 == 0) {
    FUN_101c238d();
  }
  if (*(uint *)(*in_ECX + 8) <= (uint)in_ECX[1]) {
    FUN_101c238d();
  }
  in_ECX[1] = in_ECX[1] + 4;
  return param_1;
}


// ==== 10084770 FUN_10084770

void FUN_10084770(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ea799;
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


// ==== 10084810 FUN_10084810

void FUN_10084810(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = (uint)param_1;
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_101c0f70();
  }
  uVar2 = *(int *)(in_ECX + 0x14) - (int)param_1;
  uVar5 = (uint)param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    puVar4 = (undefined4 *)(in_ECX + 4);
    param_1 = puVar4;
    param_2 = puVar4;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      param_1 = (undefined4 *)*puVar4;
      param_2 = (undefined4 *)*puVar4;
    }
    _memmove_s((void *)((int)param_2 + uVar1 * 2),(*(uint *)(in_ECX + 0x18) - uVar1) * 2,
               (void *)((int)param_1 + (uVar1 + uVar5) * 2),(uVar2 - uVar5) * 2);
    iVar3 = *(int *)(in_ECX + 0x14) - uVar5;
    *(int *)(in_ECX + 0x14) = iVar3;
    if (7 < *(uint *)(in_ECX + 0x18)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined2 *)((int)puVar4 + iVar3 * 2) = 0;
  }
  return;
}


// ==== 100848b0 FUN_100848b0

void FUN_100848b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ea7c9;
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


// ==== 10084950 FUN_10084950

void FUN_10084950(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ea7f9;
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


// ==== 100849f0 FUN_100849f0

void FUN_100849f0(void)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea820;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  *in_ECX = NCHtmlObject::vftable;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  local_8 = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  in_ECX[1] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  puVar1 = &uStack_34;
  if (DAT_1036efcc < 1) {
    local_18 = 0;
    FUN_100d9a30(&local_18);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (DAT_1036efd8 < 1) {
    local_1c = 0;
    FUN_100d9a30(&local_1c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10084aa2 Catch@10084aa2

void Catch_10084aa2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10084ab6 Catch@10084ab6

void Catch_10084ab6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlObject::NCHtmlObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10084ae0 FUN_10084ae0

void FUN_10084ae0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_10083b00();
  *(undefined4 *)(in_ECX + 0x34) = uVar1;
  uVar1 = FUN_10083ba0();
  *(undefined4 *)(in_ECX + 0x38) = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10084b3f Catch@10084b3f

void Catch_10084b3f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10084b53 Catch@10084b53

void Catch_10084b53(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlObject::SetAlignType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10084b70 FUN_10084b70

void FUN_10084b70(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  FString *pFVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  short *psVar7;
  uint uStack_3c;
  FString local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ea8bc;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  FUN_100849f0();
  local_8 = 0;
  *in_ECX = NCHtmlTagInfo::vftable;
  FString::FString((FString *)(in_ECX + 0x17));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x1a));
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x1d));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x20));
  local_8._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x23));
  local_8._0_1_ = 6;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[6] = param_1;
  in_ECX[7] = param_2;
  in_ECX[0x2a] = 0;
  in_ECX[0x16] = param_3;
  if (param_3 != 0) {
    iVar3 = appStrlen(&DAT_1036edc8);
    if (0 < iVar3) {
      pFVar4 = (FString *)FString::FString(local_2c,&DAT_1036edc8);
      local_8._0_1_ = 7;
      FString::operator=((FString *)(in_ECX + 0x17),pFVar4);
      local_8._0_1_ = 6;
      FString::~FString(local_2c);
    }
    iVar3 = appStrlen(&DAT_1036ebc8);
    if (0 < iVar3) {
      pFVar4 = (FString *)FString::FString(local_2c,&DAT_1036ebc8);
      local_8._0_1_ = 8;
      FString::operator=((FString *)(in_ECX + 0x20),pFVar4);
      local_8._0_1_ = 6;
      FString::~FString(local_2c);
    }
  }
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x13] = param_4;
  if (0 < DAT_1036efe4) {
    psVar5 = (short *)FUN_10083900();
    psVar7 = psVar5 + 1;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    lVar2 = (ulonglong)(((int)psVar5 - (int)psVar7 >> 1) + 1) * 2;
    uVar6 = FUN_10004ed0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    in_ECX[0x27] = uVar6;
    psVar5 = (short *)FUN_10083900();
    psVar7 = (short *)in_ECX[0x27];
    do {
      sVar1 = *psVar5;
      *psVar7 = sVar1;
      psVar5 = psVar5 + 1;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10084d3f Catch@10084d3f

void Catch_10084d3f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10084d53 Catch@10084d53

void Catch_10084d53(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::NCHtmlTagInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10084d70 FUN_10084d70

void FUN_10084d70(undefined4 *param_1)

{
  short sVar1;
  longlong lVar2;
  uint *puVar3;
  short *psVar4;
  int in_ECX;
  short *psVar5;
  uint uStack_34;
  undefined4 local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea8e0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 4) = *param_1;
  if ((uint)param_1[8] < 8) {
    psVar4 = (short *)(param_1 + 3);
  }
  else {
    psVar4 = (short *)param_1[3];
  }
  psVar5 = psVar4 + 1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  puVar3 = &uStack_34;
  if (*(int *)(in_ECX + 0xa8) != 0) {
    FUN_10024ca0(*(int *)(in_ECX + 0xa8));
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  lVar2 = (ulonglong)(((int)psVar4 - (int)psVar5 >> 1) + 1) * 2;
  psVar4 = (short *)FUN_10004ed0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *(short **)(in_ECX + 0xa8) = psVar4;
  if ((uint)param_1[8] < 8) {
    psVar5 = (short *)(param_1 + 3);
  }
  else {
    psVar5 = (short *)param_1[3];
  }
  do {
    sVar1 = *psVar5;
    *psVar4 = sVar1;
    psVar5 = psVar5 + 1;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  FUN_10020bb0(&local_24,*(undefined4 *)(in_ECX + 0xa8),0,0,0,0,0,*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x24) = local_24;
  *(int *)(in_ECX + 0x28) = local_20 + 6;
  FUN_100216e0(&local_24,0x41,*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x2c) = local_24;
  ExceptionList = local_10;
  return;
}


// ==== 10084e87 Catch@10084e87

void Catch_10084e87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10084e9b Catch@10084e9b

void Catch_10084e9b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::MakeTextCodeInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10084ec0 FUN_10084ec0

void FUN_10084ec0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  FString *pFVar6;
  int in_ECX;
  undefined4 uVar7;
  uint uStack_c8;
  FString local_b8 [12];
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [12];
  FString local_88 [12];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  undefined1 local_70;
  undefined3 uStack_6f;
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [12];
  FString local_24 [16];
  FString local_14 [4];
  undefined1 local_10 [12];
  
  puStack_74 = &LAB_101ea975;
  local_78 = ExceptionList;
  uStack_c8 = DAT_103554c4 ^ (uint)local_6c;
  local_7c = (undefined1 *)&uStack_c8;
  ExceptionList = &local_78;
  uVar7 = 0;
  local_70 = 0;
  uStack_6f = 0;
  FUN_101a3cf0(local_10);
  cVar1 = FUN_100822e0(param_2);
  if (cVar1 != '\0') {
    ExceptionList = local_78;
    return;
  }
  FUN_10084ae0();
  puVar2 = (undefined4 *)FUN_10083930();
  uVar3 = *(undefined4 *)*puVar2;
  switch(uVar3) {
  case 1:
    FUN_10084d70((undefined4 *)*puVar2);
  default:
    goto switchD_10084f3b_caseD_2;
  case 6:
    *(undefined4 *)(in_ECX + 4) = uVar3;
    iVar4 = FUN_10080a90(2);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(2,0);
      pFVar6 = (FString *)FString::FString(local_14,puVar5);
      local_70 = 1;
      FString::operator=((FString *)(in_ECX + 0x5c),pFVar6);
      local_70 = 0;
      FString::~FString(local_14);
    }
    iVar4 = FUN_10080a90(4);
    if (iVar4 != 0) {
      uVar7 = FUN_100809b0(4,0);
      uVar7 = thunk_FUN_101c1b01(uVar7);
    }
    iVar4 = FUN_10080a90(1);
    if (iVar4 == 0) {
      *(undefined4 *)(in_ECX + 0x24) = uVar7;
      *(undefined4 *)(in_ECX + 0x28) = 0;
    }
    else {
      uVar3 = FUN_100809b0(1,0);
      uVar3 = thunk_FUN_101c1b01(uVar3);
      *(undefined4 *)(in_ECX + 0x24) = uVar7;
      *(undefined4 *)(in_ECX + 0x28) = uVar3;
    }
    break;
  case 0x10:
    *(undefined4 *)(in_ECX + 0x24) = 1;
    *(undefined4 *)(in_ECX + 0x28) = 9;
    *(undefined4 *)(in_ECX + 0x2c) = 1;
    goto switchD_10084f3b_caseD_2;
  case 0x31:
    uVar7 = 10;
    param_1 = 10;
    iVar4 = FUN_10080a90(1);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(1,0);
      pFVar6 = (FString *)FString::FString(local_94,puVar5);
      local_70 = 2;
      FString::operator=((FString *)(in_ECX + 0x5c),pFVar6);
      local_70 = 0;
      FString::~FString(local_94);
    }
    iVar4 = FUN_10080a90(6);
    if (iVar4 != 0) {
      uVar7 = FUN_100809b0(6,0);
      uVar7 = thunk_FUN_101c1b01(uVar7);
    }
    iVar4 = FUN_10080a90(4);
    if (iVar4 != 0) {
      uVar3 = FUN_100809b0(4,0);
      param_1 = thunk_FUN_101c1b01(uVar3);
    }
    iVar4 = FUN_10080a90(3);
    if (iVar4 == 0) {
      pFVar6 = (FString *)FString::FString(local_ac,(ushort *)L"Default.BlackTexture");
      local_70 = 4;
      FString::operator=((FString *)(in_ECX + 0x68),pFVar6);
      pFVar6 = local_ac;
    }
    else {
      puVar5 = (ushort *)FUN_100809b0(3,0);
      pFVar6 = (FString *)FString::FString(local_3c,puVar5);
      local_70 = 3;
      FString::operator=((FString *)(in_ECX + 0x68),pFVar6);
      pFVar6 = local_3c;
    }
    local_70 = 0;
    FString::~FString(pFVar6);
    iVar4 = FUN_10080a90(2);
    if (iVar4 == 0) {
      pFVar6 = (FString *)FString::FString(local_24,(ushort *)L"Default.WhiteTexture");
      local_70 = 6;
      FString::operator=((FString *)(in_ECX + 0x74),pFVar6);
      pFVar6 = local_24;
    }
    else {
      puVar5 = (ushort *)FUN_100809b0(2,0);
      pFVar6 = (FString *)FString::FString(local_54,puVar5);
      local_70 = 5;
      FString::operator=((FString *)(in_ECX + 0x74),pFVar6);
      pFVar6 = local_54;
    }
    local_70 = 0;
    FString::~FString(pFVar6);
    iVar4 = FUN_10080a90(5);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(5,0);
      pFVar6 = (FString *)FString::FString(local_6c,puVar5);
      local_70 = 7;
      FString::operator=((FString *)(in_ECX + 0x80),pFVar6);
      local_70 = 0;
      FString::~FString(local_6c);
    }
    *(undefined4 *)(in_ECX + 0x24) = uVar7;
    *(int *)(in_ECX + 0x28) = param_1 + 6;
    break;
  case 0x32:
    uVar7 = 0x32;
    param_1 = 0x28;
    iVar4 = FUN_10080a90(3);
    if (iVar4 != 0) {
      uVar7 = FUN_100809b0(3,0);
      uVar7 = thunk_FUN_101c1b01(uVar7);
    }
    iVar4 = FUN_10080a90(1);
    if (iVar4 != 0) {
      uVar3 = FUN_100809b0(1,0);
      param_1 = thunk_FUN_101c1b01(uVar3);
    }
    iVar4 = FUN_10080a90(2);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(2,0);
      pFVar6 = (FString *)FString::FString(local_30,puVar5);
      local_70 = 8;
      FString::operator=((FString *)(in_ECX + 0x80),pFVar6);
      local_70 = 0;
      FString::~FString(local_30);
    }
    *(undefined4 *)(in_ECX + 0x24) = uVar7;
    *(int *)(in_ECX + 0x28) = param_1 + 6;
    break;
  case 0x33:
    uVar7 = 0x32;
    param_1 = 0xf;
    iVar4 = FUN_10080a90(6);
    if (iVar4 != 0) {
      uVar7 = FUN_100809b0(6,0);
      uVar7 = thunk_FUN_101c1b01(uVar7);
    }
    iVar4 = FUN_10080a90(2);
    if (iVar4 != 0) {
      uVar3 = FUN_100809b0(2,0);
      param_1 = thunk_FUN_101c1b01(uVar3);
    }
    iVar4 = FUN_10080a90(5);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(5,0);
      pFVar6 = (FString *)FString::FString(local_48,puVar5);
      local_70 = 9;
      FString::operator=((FString *)(in_ECX + 0x80),pFVar6);
      local_70 = 0;
      FString::~FString(local_48);
    }
    iVar4 = FUN_10080a90(1);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(1,0);
      pFVar6 = (FString *)FString::FString(local_60,puVar5);
      local_70 = 10;
      FString::operator=((FString *)(in_ECX + 0x5c),pFVar6);
      local_70 = 0;
      FString::~FString(local_60);
    }
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    iVar4 = FUN_10080a90(4);
    if (iVar4 != 0) {
      uVar3 = FUN_100809b0(4,0);
      uVar3 = FUN_10080c80(uVar3);
      *(undefined4 *)(in_ECX + 0xa4) = uVar3;
    }
    *(undefined4 *)(in_ECX + 0x98) = 0;
    iVar4 = FUN_10080a90(3);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(3,0);
      iVar4 = appAtoi(puVar5);
      *(int *)(in_ECX + 0x98) = iVar4;
    }
    *(undefined4 *)(in_ECX + 0x24) = uVar7;
    *(int *)(in_ECX + 0x28) = param_1 + 6;
    break;
  case 0x34:
    uVar7 = 0x1e;
    iVar4 = FUN_10080a90(4);
    if (iVar4 != 0) {
      uVar7 = FUN_100809b0(4,0);
      uVar7 = thunk_FUN_101c1b01(uVar7);
    }
    iVar4 = FUN_10080a90(3);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(3,0);
      pFVar6 = (FString *)FString::FString(local_88,puVar5);
      local_70 = 0xb;
      FString::operator=((FString *)(in_ECX + 0x80),pFVar6);
      local_70 = 0;
      FString::~FString(local_88);
    }
    iVar4 = FUN_10080a90(1);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(1,0);
      pFVar6 = (FString *)FString::FString(local_a0,puVar5);
      local_70 = 0xc;
      FString::operator=((FString *)(in_ECX + 0x5c),pFVar6);
      local_70 = 0;
      FString::~FString(local_a0);
    }
    iVar4 = FUN_10080a90(2);
    if (iVar4 != 0) {
      puVar5 = (ushort *)FUN_100809b0(2,0);
      pFVar6 = (FString *)FString::FString(local_b8,puVar5);
      local_70 = 0xd;
      FString::operator=((FString *)(in_ECX + 0x8c),pFVar6);
      local_70 = 0;
      FString::~FString(local_b8);
    }
    *(undefined4 *)(in_ECX + 0x24) = uVar7;
    *(undefined4 *)(in_ECX + 0x28) = 0x15;
    break;
  case 0x35:
    *(undefined4 *)(in_ECX + 0x24) = 1;
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 1;
    goto switchD_10084f3b_caseD_2;
  }
  *(undefined4 *)(in_ECX + 0x2c) = uVar7;
switchD_10084f3b_caseD_2:
  FUN_10084730(local_10,0);
  ExceptionList = local_78;
  return;
}


// ==== 100854bf Catch@100854bf

void Catch_100854bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 100) = *(undefined4 *)(unaff_EBP + 0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 100,&DAT_102a47f0);
}


// ==== 100854d3 Catch@100854d3

void Catch_100854d3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::LoadHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10085550 FUN_10085550

void FUN_10085550(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uStack_70;
  FString local_60 [12];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101ea9a1;
  local_10 = ExceptionList;
  uStack_70 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0x50);
  if ((((iVar3 == 0) || (*(int *)(iVar3 + 4) != 1)) || (*(int *)(iVar3 + 0x58) != 0)) ||
     ((*(int *)(in_ECX + 4) != 1 || (*(int *)(in_ECX + 0x58) != 0)))) {
    FUN_10082340();
    local_8._0_1_ = 1;
    local_3c = 0;
    iVar3 = 0;
    local_1c = 0;
    FString::FString(local_60,(ushort *)&DAT_1022f9f8);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)(in_ECX + 0x18) != 0) {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + 0x48);
    }
    local_3c = *(undefined4 *)(in_ECX + 8);
    local_38 = *(int *)(in_ECX + 0xc) + iVar4;
    local_24 = FUN_100825d0(*(undefined4 *)(in_ECX + 0x9c));
    iVar4 = in_ECX;
    while (iVar4 != 0) {
      local_18 = appStrlen(*(ushort **)(iVar4 + 0xa8));
      iVar1 = FUN_100825d0(*(undefined4 *)(iVar4 + 0x9c));
      if (iVar1 != 0) {
        local_50 = local_18 + -1 + iVar3;
        local_54 = iVar3;
        local_4c = iVar1;
        local_20 = (int *)FUN_10004ed0(0xc);
        if (local_20 == (int *)0x0) {
          local_20 = (int *)0x0;
        }
        else {
          *local_20 = iVar3;
          local_20[1] = local_50;
          local_20[2] = local_4c;
        }
        FUN_100d9a30(&local_20);
        iVar3 = local_1c;
      }
      iVar3 = iVar3 + local_18;
      local_1c = iVar3;
      FString::operator+=(local_60,*(ushort **)(iVar4 + 0xa8));
      iVar4 = *(int *)(iVar4 + 0x54);
      if (((iVar4 == 0) || (*(int *)(iVar4 + 4) != 1)) ||
         ((*(int *)(iVar4 + 0x58) != 0 || (*(int *)(in_ECX + 0x58) != 0)))) break;
    }
    if (param_2 == 0) {
      uVar13 = 0;
      piVar12 = &local_48;
      iVar3 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = *(undefined4 *)(in_ECX + 0x4c);
      uVar8 = 1;
      uVar7 = 0;
      uVar6 = *(undefined4 *)(in_ECX + 0x30);
      puVar2 = FString::operator*(local_60);
      uVar5 = 0xffdcdcdc;
    }
    else {
      iVar3 = local_24;
      if (local_24 == 0) {
        iVar3 = -0x996601;
      }
      uVar13 = 0;
      piVar12 = &local_48;
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = *(undefined4 *)(in_ECX + 0x4c);
      uVar8 = 1;
      uVar7 = 0;
      uVar6 = *(undefined4 *)(in_ECX + 0x30);
      puVar2 = FString::operator*(local_60);
      uVar5 = 0xff6699ff;
    }
    FUN_10020c80(local_3c,local_38,uVar5,puVar2,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,iVar3,piVar12,
                 uVar13);
    iVar3 = 0;
    while( true ) {
      local_28 = iVar3;
      if (local_44 <= iVar3) break;
      FUN_10024ca0(*(undefined4 *)(local_48 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    }
    for (local_2c = 0; local_2c < local_44; local_2c = local_2c + 1) {
    }
    FArray::Empty((FArray *)&local_48,4,0);
    local_8._0_1_ = 1;
    FString::~FString(local_60);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10084770();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1008577e Catch@1008577e

void Catch_1008577e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10085792 Catch@10085792

void Catch_10085792(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::DrawTextCode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100857b0 FUN_100857b0

void FUN_100857b0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ea9c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = 0;
  if (*(int *)(in_ECX + 0x18) != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x18) + 0x48);
  }
  if (*(int *)(in_ECX + 4) == 1) {
    iVar1 = *(int *)(in_ECX + 0x58);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if (((iVar1 != 2) && (iVar1 != 1)) && (iVar1 != 8)) {
        FUN_100217a0(*(undefined4 *)(in_ECX + 8),*(int *)(in_ECX + 0xc) + iVar2,0xffdcdcdc,
                     *(undefined4 *)(in_ECX + 0xa8),*(undefined4 *)(in_ECX + 0x30),0,1,
                     *(undefined4 *)(in_ECX + 0x4c),0,0,0,0,0,1,0,0xffffffff);
        ExceptionList = local_10;
        return;
      }
      uVar3 = 1;
    }
    FUN_10085550(param_1,uVar3);
  }
  else if ((*(int *)(in_ECX + 4) == 6) && (*(int *)(in_ECX + 0xa0) != 0)) {
    FUN_10021a00(*(undefined4 *)(in_ECX + 8),*(int *)(in_ECX + 0xc) + iVar2,
                 *(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),0,0,
                 *(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),
                 *(int *)(in_ECX + 0xa0),0xff,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100858b2 Catch@100858b2

void Catch_100858b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100858c6 Catch@100858c6

void Catch_100858c6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTagInfo::Draw");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100858f0 FUN_100858f0

void FUN_100858f0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ea9fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100849f0();
  local_8 = 0;
  *in_ECX = NCHtmlFrame::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x19));
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x16] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10085971 Catch@10085971

void Catch_10085971(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10085985 Catch@10085985

void Catch_10085985(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::NCHtmlFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100859b0 FUN_100859b0

undefined4 FUN_100859b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x60);
}


// ==== 100859c0 FUN_100859c0

void FUN_100859c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101eaa3c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100849f0();
  local_8 = 0;
  *in_ECX = NCHtmlFrame::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x19));
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[6] = param_1;
  in_ECX[7] = param_2;
  in_ECX[0x1d] = 0;
  in_ECX[0x16] = 0xffffffff;
  in_ECX[0x13] = param_3;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10085a55 Catch@10085a55

void Catch_10085a55(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10085a69 Catch@10085a69

void Catch_10085a69(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::NCHtmlFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10085a90 FUN_10085a90

void FUN_10085a90(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eaa73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = NCHtmlFrame::vftable;
  local_8 = 2;
  for (iVar1 = 0; iVar1 < (int)in_ECX[0x1a]; iVar1 = iVar1 + 1) {
    if (*(int *)(in_ECX[0x19] + iVar1 * 4) != 0) {
      FUN_100829e0(1);
    }
  }
  for (iVar1 = 0; iVar1 < (int)in_ECX[0x1a]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x19),4,0);
  local_8 = 0;
  FUN_100845f0();
  local_8 = 0xffffffff;
  FUN_10080b00();
  ExceptionList = local_10;
  return;
}


// ==== 10085b3c Catch@10085b3c

void Catch_10085b3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10085b50 Catch@10085b50

void Catch_10085b50(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::~NCHtmlFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10085b70 FUN_10085b70

undefined4 FUN_10085b70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eaa9b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10004ed0(0xb4);
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10084b70(in_ECX,*(undefined4 *)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x74),
                         param_3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10084ec0(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x74) = 0;
  ExceptionList = local_10;
  return uVar2;
}


// ==== 10085bff Catch@10085bff

void Catch_10085bff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10085c13 Catch@10085c13

void Catch_10085c13(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::CreateUnitObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10085c30 FUN_10085c30

void FUN_10085c30(int param_1)

{
  short sVar1;
  int iVar2;
  wchar_t *pwVar3;
  short *psVar4;
  undefined4 uVar5;
  short *psVar6;
  int in_ECX;
  undefined4 *puVar7;
  uint local_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101eaac0;
  local_10 = ExceptionList;
  local_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_30;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = FUN_10080a90(1);
  if (iVar2 == 0) {
    local_18 = 0;
    puVar7 = &local_18;
  }
  else {
    pwVar3 = (wchar_t *)FUN_100809b0(1,0);
    if (pwVar3 == (wchar_t *)0x0) goto LAB_10085cf9;
    iVar2 = __wcsicmp((wchar_t *)PTR_u_CENTER_1034ed30,pwVar3);
    if (iVar2 == 0) {
      param_1 = 1;
      puVar7 = &param_1;
    }
    else {
      iVar2 = __wcsicmp((wchar_t *)PTR_u_RIGHT_1034ed34,pwVar3);
      if (iVar2 == 0) {
        param_1 = 3;
        puVar7 = &param_1;
      }
      else {
        iVar2 = __wcsicmp((wchar_t *)PTR_u_LEFT_1034ed38,pwVar3);
        param_1 = (-(uint)(iVar2 != 0) & 0xfffffffe) + 2;
        puVar7 = &param_1;
      }
    }
  }
  FUN_100d9a30(puVar7);
LAB_10085cf9:
  iVar2 = FUN_10080a90(7);
  if (iVar2 == 0) {
    *(undefined4 *)(in_ECX + 0x38) = 1;
  }
  else {
    pwVar3 = (wchar_t *)FUN_100809b0(7,0);
    iVar2 = __wcsicmp((wchar_t *)PTR_DAT_1034ed3c,pwVar3);
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0x38) = 2;
    }
    else {
      iVar2 = __wcsicmp((wchar_t *)PTR_u_BOTTOM_1034ed40,pwVar3);
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x38) = 3;
      }
      else {
        iVar2 = __wcsicmp((wchar_t *)PTR_u_CENTER_1034ed30,pwVar3);
        *(uint *)(in_ECX + 0x38) = (uint)(iVar2 == 0);
      }
    }
  }
  iVar2 = FUN_10080a90(8);
  if (iVar2 != 0) {
    psVar4 = (short *)FUN_100809b0(8,0);
    uVar5 = thunk_FUN_101c1b01(psVar4);
    *(undefined4 *)(in_ECX + 0x5c) = uVar5;
    psVar6 = psVar4;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    if (psVar4[((int)psVar6 - (int)(psVar4 + 1) >> 1) + -1] == 0x25) {
      *(undefined4 *)(in_ECX + 0x60) = 1;
    }
  }
  iVar2 = FUN_10080a90(6);
  if (iVar2 != 0) {
    uVar5 = FUN_100809b0(6,0);
    uVar5 = thunk_FUN_101c1b01(uVar5);
    *(undefined4 *)(in_ECX + 0x28) = uVar5;
  }
  iVar2 = FUN_10080a90(5);
  if (iVar2 == 0) {
    *(undefined4 *)(in_ECX + 0x58) = 0xffffffff;
  }
  else {
    uVar5 = FUN_100809b0(5,0);
    uVar5 = thunk_FUN_101c1b01(uVar5);
    *(undefined4 *)(in_ECX + 0x58) = uVar5;
  }
  if ((*(int *)(in_ECX + 0x60) == 0) && (0 < *(int *)(in_ECX + 0x5c))) {
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x5c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10085e3a Catch@10085e3a

void Catch_10085e3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10085e4e Catch@10085e4e

void Catch_10085e4e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlFrame::LoadTDTagInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10085e70 FUN_10085e70

void FUN_10085e70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101eab5b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100858f0();
  local_8 = 0;
  *in_ECX = NCHtmlTable::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x220));
  local_8._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x223));
  local_8._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x226));
  local_8._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x229));
  local_8 = CONCAT31(local_8._1_3_,8);
  FArray::FArray((FArray *)(in_ECX + 0x22c));
  in_ECX[0x11] = 0;
  in_ECX[0x21f] = 0;
  in_ECX[0x21e] = 0;
  in_ECX[6] = param_1;
  in_ECX[7] = param_2;
  in_ECX[0x22f] = 0xffffffff;
  in_ECX[0x230] = 0;
  in_ECX[0x10] = 2;
  in_ECX[0xf] = 1;
  in_ECX[0x13] = param_3;
  ExceptionList = local_10;
  return;
}


// ==== 10085f6a Catch@10085f6a

void Catch_10085f6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10085f7e Catch@10085f7e

void Catch_10085f7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCHtmlTable::NCHtmlTable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10085fa0 FUN_10085fa0

void FUN_10085fa0(byte param_1)

{
  FUN_100845f0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10085fd0 FUN_10085fd0

undefined4 FUN_10085fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101eab8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10004ed0(0x878);
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100859c0(in_ECX,*(undefined4 *)(in_ECX + 0x1c),param_3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100876c0(param_1,param_2,0 < *(int *)(in_ECX + 0x44));
  ExceptionList = local_10;
  return uVar2;
}


// ==== 1008606f Catch@1008606f

void Catch_1008606f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


