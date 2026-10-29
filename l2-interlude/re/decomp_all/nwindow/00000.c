// ==== 10001000 FUN_10001000

void FUN_10001000(void)

{
  UTexture *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d67d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UTexture::UTexture(in_ECX);
  *(undefined ***)in_ECX = NCAnimTexture::vftable;
  local_8 = 1;
  UObject::SetFlags((UObject *)in_ECX,0x4000000);
  *(undefined4 *)(in_ECX + 0x60c) = 0;
  *(undefined4 *)(in_ECX + 0x614) = 0;
  *(undefined4 *)(in_ECX + 0x610) = 0;
  *(undefined8 *)(in_ECX + 0x624) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10001089 Catch@10001089

void Catch_10001089(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000109d Catch@1000109d

void Catch_1000109d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::NCAnimTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100010c0 FUN_100010c0

void FUN_100010c0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x620) = param_1;
  if (param_1 < -1) {
    *(undefined4 *)(in_ECX + 0x620) = 0;
  }
  return;
}


// ==== 10001125 Catch@10001125

void Catch_10001125(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001139 Catch@10001139

void Catch_10001139(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::SetLoopCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001160 FUN_10001160

undefined4 FUN_10001160(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x618);
}


// ==== 100011aa Catch@100011aa

void Catch_100011aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100011be Catch@100011be

void Catch_100011be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::GetAnimTextureState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100011e0 FUN_100011e0

undefined4 FUN_100011e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x620);
}


// ==== 1000122a Catch@1000122a

void Catch_1000122a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000123e Catch@1000123e

void Catch_1000123e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::GetLoopCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001260 FUN_10001260

undefined4 FUN_10001260(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x610);
}


// ==== 100012aa Catch@100012aa

void Catch_100012aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100012be Catch@100012be

void Catch_100012be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::GetCurrentTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100012e0 FUN_100012e0

void FUN_100012e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5d8) = param_1;
  return;
}


// ==== 10001336 Catch@10001336

void Catch_10001336(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000134a Catch@1000134a

void Catch_1000134a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::SetAnimCur");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001370 FUN_10001370

void FUN_10001370(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x618) = param_1;
  return;
}


// ==== 100013c6 Catch@100013c6

void Catch_100013c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100013da Catch@100013da

void Catch_100013da(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::SetAnimTextureState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001400 FUN_10001400

void FUN_10001400(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d68c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10001450 FUN_10001450

void FUN_10001450(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d68f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCAnimTexture::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UTexture::~UTexture((UTexture *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100014c0 FUN_100014c0

void FUN_100014c0(byte param_1)

{
  void *in_ECX;
  
  FUN_10001450();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x62c);
  }
  return;
}


// ==== 100014f0 FUN_100014f0

float10 FUN_100014f0(float param_1,float param_2,float param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 < param_3)) {
    return (float10)param_1;
  }
  return (float10)param_2;
}


// ==== 10001530 FUN_10001530

void FUN_10001530(double param_1)

{
  int *in_ECX;
  float10 fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(double *)(in_ECX + 0x189) != 0.0) {
    fVar1 = (float10)FUN_100014f0(in_ECX[0x179],0x3dcccccd,0x42c80000);
    in_ECX[0x17b] =
         (int)(float)(((float10)param_1 - (float10)*(double *)(in_ECX + 0x189)) +
                     (float10)(float)in_ECX[0x17b]);
    while ((float)((float10)1 / fVar1) <= (float)in_ECX[0x17b]) {
      (**(code **)(*in_ECX + 0xc4))();
      in_ECX[0x17b] = (int)((float)in_ECX[0x17b] - (float)((float10)1 / fVar1));
    }
  }
  *(double *)(in_ECX + 0x189) = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 10001616 Catch@10001616

void Catch_10001616(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1000162a Catch@1000162a

void Catch_1000162a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001650 FUN_10001650

void FUN_10001650(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x5ec) = 0;
  iVar1 = **(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38);
  if (iVar1 != 0) {
    *(undefined8 *)(in_ECX + 0x624) = *(undefined8 *)(iVar1 + 0x144);
  }
  FUN_10001370(1);
  ExceptionList = local_10;
  return;
}


// ==== 100016cc Catch@100016cc

void Catch_100016cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100016e0 Catch@100016e0

void Catch_100016e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::Play");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001700 FUN_10001700

void FUN_10001700(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6960;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10001370(2);
  ExceptionList = local_10;
  return;
}


// ==== 10001752 Catch@10001752

void Catch_10001752(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001766 Catch@10001766

void Catch_10001766(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::Pause");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001790 FUN_10001790

void FUN_10001790(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10001370(0);
  ExceptionList = local_10;
  return;
}


// ==== 100017e2 Catch@100017e2

void Catch_100017e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100017f6 Catch@100017f6

void Catch_100017f6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::Stop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001820 FUN_10001820

void FUN_10001820(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d69a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x610) = param_1;
  FUN_100012e0(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1000187c Catch@1000187c

void Catch_1000187c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001890 Catch@10001890

void Catch_10001890(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::SetCurrentTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100018b0 FUN_100018b0

void FUN_100018b0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d69c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x620);
  if (iVar1 != -1) {
    if (iVar1 < 2) {
      FUN_10001370(0);
    }
    else {
      *(int *)(in_ECX + 0x620) = iVar1 + -1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000191d Catch@1000191d

void Catch_1000191d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001931 Catch@10001931

void Catch_10001931(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::IncreaseLoopCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001950 FUN_10001950

void FUN_10001950(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d69e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10001260();
  if (*(int *)(in_ECX + 0x618) == 0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x60c);
  }
  else {
    if (*(int *)(in_ECX + 0x618) != 1) {
      ExceptionList = local_10;
      return;
    }
    if (iVar1 == *(int *)(in_ECX + 0x614)) {
      FUN_10001820(*(undefined4 *)(in_ECX + 0x60c));
      FUN_100018b0();
      ExceptionList = local_10;
      return;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x5d4);
  }
  FUN_10001820(uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100019e8 Catch@100019e8

void Catch_100019e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100019fc Catch@100019fc

void Catch_100019fc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::ConstantTimeTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001a20 FUN_10001a20

void FUN_10001a20(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6a09;
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


// ==== 10001ac0 FUN_10001ac0

void FUN_10001ac0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int local_34;
  int local_30;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d6a38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(in_ECX + 0x60c) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)(in_ECX + 0x614) = 0;
  }
  else {
    FUN_10001400();
    local_8._0_1_ = 1;
    param_1 = *(int *)(in_ECX + 0x60c);
    while (iVar1 = *(int *)(param_1 + 0x5d4), iVar1 != 0) {
      for (iVar2 = 0; iVar2 < local_30; iVar2 = iVar2 + 1) {
        if (*(int *)(local_34 + iVar2 * 4) == iVar1) goto LAB_10001b37;
      }
      FUN_100d9a30(&param_1);
      param_1 = iVar1;
    }
LAB_10001b37:
    *(int *)(in_ECX + 0x614) = param_1;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10001a20();
  }
  FUN_10001820(*(undefined4 *)(in_ECX + 0x60c));
  ExceptionList = local_10;
  return;
}


// ==== 10001bba Catch@10001bba

void Catch_10001bba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10001bce Catch@10001bce

void Catch_10001bce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTexture::SetStartTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001bf0 FUN_10001bf0

undefined4 FUN_10001bf0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x300);
}


// ==== 10001c3a Catch@10001c3a

void Catch_10001c3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001c4e Catch@10001c4e

void Catch_10001c4e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::GetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001c70 FUN_10001c70

void FUN_10001c70(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6a80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x300) != 0) {
    FUN_10001650();
    *(undefined4 *)(in_ECX + 0x304) = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10001cd6 Catch@10001cd6

void Catch_10001cd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001cea Catch@10001cea

void Catch_10001cea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::Play");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001d10 FUN_10001d10

void FUN_10001d10(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6aa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x300) != 0) {
    FUN_10001700();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10001d6a Catch@10001d6a

void Catch_10001d6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001d7e Catch@10001d7e

void Catch_10001d7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::Pause");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001da0 FUN_10001da0

void FUN_10001da0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x300) != 0) {
    FUN_10001790();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10001dfa Catch@10001dfa

void Catch_10001dfa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001e0e Catch@10001e0e

void Catch_10001e0e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::Stop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001e30 FUN_10001e30

void FUN_10001e30(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x300) != 0) {
    FUN_100010c0(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10001e90 Catch@10001e90

void Catch_10001e90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10001ea4 Catch@10001ea4

void Catch_10001ea4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::SetLoopCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10001ed0 UWindowHandle::StaticClass

/* public: static class UClass * __cdecl UWindowHandle::StaticClass(void) */

UClass * __cdecl UWindowHandle::StaticClass(void)

{
                    /* 0x1ed0  1007  ?StaticClass@UWindowHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10001ee0 UAnimTextureHandle::StaticClass

/* public: static class UClass * __cdecl UAnimTextureHandle::StaticClass(void) */

UClass * __cdecl UAnimTextureHandle::StaticClass(void)

{
                    /* 0x1ee0  922  ?StaticClass@UAnimTextureHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10001ef0 UUIScript::eventOnTextureAnimEnd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnTextureAnimEnd(class UAnimTextureHandle *) */

void __thiscall UUIScript::eventOnTextureAnimEnd(UUIScript *this,UAnimTextureHandle *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x1ef0  1053  ?eventOnTextureAnimEnd@UUIScript@@QAEXPAVUAnimTextureHandle@@@Z
                        */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnTextureAnimEnd,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10001f30 FUN_10001f30

void FUN_10001f30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6b09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCObject::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10001f90 FUN_10001f90

void FUN_10001f90(byte param_1)

{
  void *in_ECX;
  
  FUN_10001f30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return;
}


// ==== 10001fc0 FUN_10001fc0

void FUN_10001fc0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6b38;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCCmdTarget::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10001f30(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10002020 FUN_10002020

undefined4 FUN_10002020(void)

{
  return 0;
}


// ==== 10002030 FUN_10002030

undefined4 FUN_10002030(void)

{
  return 0;
}


// ==== 10002040 FUN_10002040

void FUN_10002040(byte param_1)

{
  void *in_ECX;
  
  FUN_10001fc0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return;
}


// ==== 10002070 FUN_10002070

UObject * FUN_10002070(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UWindowHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 100020a0 FUN_100020a0

UObject * FUN_100020a0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103568e0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 100020d0 FUN_100020d0

UObject * FUN_100020d0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UAnimTextureHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10002100 FUN_10002100

void FUN_10002100(void)

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
  
  puStack_c = &LAB_101d6b60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UAnimTextureHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10002070(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x10002187;
    appFailAssert("m_pScriptHandle",".\\Src\\NAnimTextureCtrl.cpp",0x54);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 100021bb Catch@100021bb

void Catch_100021bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100021cf Catch@100021cf

void Catch_100021cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100021f0 FUN_100021f0

void FUN_100021f0(void)

{
  uint *puVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int in_ECX;
  code *pcStack_40;
  undefined4 uStack_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10053600();
  uStack_3c = 0;
  pcStack_40 = GError_exref;
  FName::FName((FName *)&pcStack_40,0);
  pUVar2 = UObject::GetTransientPackage();
  pUVar3 = UObject::StaticConstructObject(&DAT_103568e0,pUVar2);
  iVar4 = FUN_100020a0(pUVar3);
  *(int *)(in_ECX + 0x300) = iVar4;
  if (iVar4 == 0) {
    uStack_3c = 0x10002282;
    appFailAssert("m_pAnimTexture",".\\Src\\NAnimTextureCtrl.cpp",99);
  }
  FUN_10001ac0();
  *(undefined4 *)(*(int *)(in_ECX + 0x300) + 0x580) =
       *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + 0x580);
  *(undefined4 *)(*(int *)(in_ECX + 0x300) + 0x584) =
       *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + 0x584);
  *(undefined1 *)(*(int *)(in_ECX + 0x300) + 0x5dc) =
       *(undefined1 *)(*(int *)(in_ECX + 0x2fc) + 0x5dc);
  *(undefined1 *)(*(int *)(in_ECX + 0x300) + 0x5dd) =
       *(undefined1 *)(*(int *)(in_ECX + 0x2fc) + 0x5dc);
  *(undefined4 *)(*(int *)(in_ECX + 0x300) + 0x5e0) =
       *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + 0x5e0);
  *(undefined4 *)(*(int *)(in_ECX + 0x300) + 0x5e4) =
       *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + 0x5e4);
  *(undefined4 *)(*(int *)(in_ECX + 0x300) + 0x5e8) =
       *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + 0x5e8);
  puVar1 = (uint *)(*(int *)(in_ECX + 0x300) + 0x5c0);
  *puVar1 = *puVar1 ^ (*(uint *)(*(int *)(in_ECX + 0x2fc) + 0x5c0) ^
                      *(uint *)(*(int *)(in_ECX + 0x300) + 0x5c0)) & 2;
  puVar1 = (uint *)(*(int *)(in_ECX + 0x300) + 0x5c0);
  *puVar1 = *puVar1 ^ (*(uint *)(*(int *)(in_ECX + 0x2fc) + 0x5c0) ^
                      *(uint *)(*(int *)(in_ECX + 0x300) + 0x5c0)) & 1;
  ExceptionList = local_10;
  return;
}


// ==== 1000239f Catch@1000239f

void Catch_1000239f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100023b3 Catch@100023b3

void Catch_100023b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::CreateTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100023d0 FUN_100023d0

void FUN_100023d0(void)

{
  UUIScript *this;
  undefined4 uVar1;
  UAnimTextureHandle *pUVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    uVar1 = FUN_100580a0();
    pUVar2 = (UAnimTextureHandle *)FUN_100020d0(uVar1);
    UUIScript::eventOnTextureAnimEnd(this,pUVar2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10002445 Catch@10002445

void Catch_10002445(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10002459 Catch@10002459

void Catch_10002459(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::SendAnimEndEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10002480 FUN_10002480

void FUN_10002480(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6bc9;
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


// ==== 10002520 FUN_10002520

void FUN_10002520(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6bf9;
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


// ==== 100025c0 FUN_100025c0

void FUN_100025c0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d6c2c;
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


// ==== 100026a0 FUN_100026a0

undefined4 FUN_100026a0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x304) != 0) {
    iVar1 = FUN_10001160();
    if (iVar1 == *(int *)(in_ECX + 0x308)) {
      iVar1 = FUN_100011e0();
      if (iVar1 != *(int *)(in_ECX + 0x30c)) {
        if (iVar1 == *(int *)(in_ECX + 0x30c) + -1) {
          FUN_100023d0();
        }
        *(int *)(in_ECX + 0x30c) = iVar1;
      }
    }
    else {
      if (iVar1 == 0) {
        if (*(int *)(in_ECX + 0x308) - 1U < 2) {
          FUN_100023d0();
        }
        *(undefined4 *)(in_ECX + 0x304) = 0;
      }
      *(int *)(in_ECX + 0x308) = iVar1;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1000275b Catch@1000275b

void Catch_1000275b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000276f Catch@1000276f

void Catch_1000276f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::OnTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10002790 FUN_10002790

void FUN_10002790(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_10002480(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 100027e0 FUN_100027e0

void FUN_100027e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6ca9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100025c0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10002840 FUN_10002840

void FUN_10002840(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6cd8;
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
  FUN_100027e0();
  ExceptionList = local_c;
  return;
}


// ==== 100028c0 FUN_100028c0

void FUN_100028c0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_10002840(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 10002910 FUN_10002910

void FUN_10002910(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101d6dcb;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCWnd::vftable;
  local_4 = 9;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 8;
  FUN_10002520(uVar1);
  local_4._0_1_ = 7;
  FString::~FString((FString *)(in_ECX + 0x180));
  local_4._0_1_ = 6;
  FString::~FString((FString *)(in_ECX + 0x174));
  local_4._0_1_ = 5;
  FString::~FString((FString *)(in_ECX + 0x164));
  local_4._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0x144));
  local_4._0_1_ = 3;
  _eh_vector_destructor_iterator_(in_ECX + 0x10c,0xc,4,FUN_10002790);
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0xec));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0xe0));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10002840();
  local_4 = 0xffffffff;
  FUN_10001fc0();
  ExceptionList = local_c;
  return;
}


// ==== 10002a20 FUN_10002a20

undefined4 FUN_10002a20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xbc);
}


// ==== 10002a30 FUN_10002a30

undefined4 FUN_10002a30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xac);
}


// ==== 10002a40 FUN_10002a40

void FUN_10002a40(byte param_1)

{
  void *in_ECX;
  
  FUN_10002910();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1cc);
  }
  return;
}


// ==== 10002a70 FUN_10002a70

void FUN_10002a70(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6df8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NControl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10002ad0 FUN_10002ad0

void FUN_10002ad0(byte param_1)

{
  void *in_ECX;
  
  FUN_10002a70();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2d8);
  }
  return;
}


// ==== 10002b00 FUN_10002b00

void FUN_10002b00(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6e28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTextureCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10002b60 FUN_10002b60

void FUN_10002b60(byte param_1)

{
  void *in_ECX;
  
  FUN_10002b00();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x300);
  }
  return;
}


// ==== 10002b90 FUN_10002b90

void FUN_10002b90(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d6e58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10053f40();
  *in_ECX = NCAnimTextureCtrl::vftable;
  in_ECX[0xc1] = 0;
  in_ECX[0xc2] = 0;
  in_ECX[0xc3] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10002c01 Catch@10002c01

void Catch_10002c01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10002c15 Catch@10002c15

void Catch_10002c15(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCAnimTextureCtrl::NCAnimTextureCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10002c40 FUN_10002c40

void FUN_10002c40(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6e88;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCAnimTextureCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002b00(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10002ca0 FUN_10002ca0

void FUN_10002ca0(byte param_1)

{
  void *in_ECX;
  
  FUN_10002c40();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x310);
  }
  return;
}


// ==== 10002ce0 FUN_10002ce0

void FUN_10002ce0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2d8) = 0;
  *(undefined4 *)(in_ECX + 0x2dc) = 0;
  return;
}


// ==== 10002d35 Catch@10002d35

void Catch_10002d35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10002d49 Catch@10002d49

void Catch_10002d49(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10002d70 FUN_10002d70

void FUN_10002d70(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2d8) = param_1;
  *(undefined4 *)(in_ECX + 0x2dc) = param_2;
  return;
}


// ==== 10002dcf Catch@10002dcf

void Catch_10002dcf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10002de3 Catch@10002de3

void Catch_10002de3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::SetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10002e00 FUN_10002e00

void FUN_10002e00(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x2d8);
  *param_2 = *(undefined4 *)(in_ECX + 0x2dc);
  return;
}


// ==== 10002e63 Catch@10002e63

void Catch_10002e63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10002e77 Catch@10002e77

void Catch_10002e77(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::GetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10002ea0 FUN_10002ea0

undefined4 FUN_10002ea0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x174))();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10002efc Catch@10002efc

void Catch_10002efc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10002f10 Catch@10002f10

void Catch_10002f10(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10002f30 UBarHandle::StaticClass

/* public: static class UClass * __cdecl UBarHandle::StaticClass(void) */

UClass * __cdecl UBarHandle::StaticClass(void)

{
                    /* 0x2f30  924  ?StaticClass@UBarHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10002f40 FUN_10002f40

void FUN_10002f40(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  *(undefined4 *)(in_ECX + 0x3c) = param_2;
  *(undefined4 *)(in_ECX + 0x6c) = param_1;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 0x3c);
  return;
}


// ==== 10002f70 FUN_10002f70

undefined4 FUN_10002f70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d6f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  iVar5 = *(int *)(in_ECX + 0x2e0);
  if (iVar5 != 0) {
    uVar9 = 1;
    uVar8 = 0xff;
    uVar1 = *(undefined4 *)(in_ECX + 0x2ec);
    uVar2 = *(undefined4 *)(in_ECX + 0x2e8);
    uVar7 = 0;
    uVar6 = 0;
    uVar3 = FUN_101c19e0(0,0,uVar2,uVar1,iVar5,0xff,1);
    uVar4 = FUN_101c19e0(uVar3);
    FUN_10021a00(0,0,uVar4,uVar3,uVar6,uVar7,uVar2,uVar1,iVar5,uVar8,uVar9);
  }
  if ((*(int *)(in_ECX + 0x2e4) != 0) && (*(int *)(in_ECX + 0x2d8) != 0)) {
    iVar5 = FUN_101c19e0();
    if (0 < iVar5) {
      uVar9 = 1;
      uVar8 = 0xff;
      uVar1 = *(undefined4 *)(in_ECX + 0x2e4);
      uVar2 = *(undefined4 *)(in_ECX + 0x2ec);
      uVar3 = *(undefined4 *)(in_ECX + 0x2e8);
      uVar7 = 0;
      uVar6 = 0;
      uVar4 = FUN_101c19e0(0,0,uVar3,uVar2,uVar1,0xff,1);
      FUN_10021a00(0,0,iVar5,uVar4,uVar6,uVar7,uVar3,uVar2,uVar1,uVar8,uVar9);
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100030c2 Catch@100030c2

void Catch_100030c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100030d6 Catch@100030d6

void Catch_100030d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003100 FUN_10003100

void FUN_10003100(void)

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
  
  puStack_c = &LAB_101d6f50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UBarHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10002070(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x10003187;
    appFailAssert("m_pScriptHandle",".\\Src\\NBarCtrl.cpp",0x68);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 100031bb Catch@100031bb

void Catch_100031bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100031cf Catch@100031cf

void Catch_100031cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100031f0 FUN_100031f0

void FUN_100031f0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d6f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  *(undefined2 *)(in_ECX + 0x76) = 0;
  *in_ECX = NControl::vftable;
  in_ECX[0x75] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 10003260 FUN_10003260

void FUN_10003260(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d6fa8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  *in_ECX = NCBarCtrl::vftable;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xba] = 0;
  in_ECX[0xbb] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xb8] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100032e3 Catch@100032e3

void Catch_100032e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100032f7 Catch@100032f7

void Catch_100032f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::NCBarCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003320 FUN_10003320

void FUN_10003320(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d6fd8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCBarCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10003380 FUN_10003380

void FUN_10003380(byte param_1)

{
  void *in_ECX;
  
  FUN_10003320();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2f0);
  }
  return;
}


// ==== 100033b0 FUN_100033b0

void FUN_100033b0(FString *param_1,FString *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7008;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  *in_ECX = NCBarCtrl::vftable;
  local_8 = 1;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xba] = param_3;
  in_ECX[0xbb] = param_4;
  uVar2 = 1;
  puVar1 = FString::operator*(param_1);
  uVar2 = FUN_1003f630(puVar1,uVar2);
  in_ECX[0xb9] = uVar2;
  uVar2 = 1;
  puVar1 = FString::operator*(param_2);
  uVar2 = FUN_1003f630(puVar1,uVar2);
  in_ECX[0xb8] = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10003461 Catch@10003461

void Catch_10003461(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003475 Catch@10003475

void Catch_10003475(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCBarCtrl::NCBarCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100034b0 FUN_100034b0

void FUN_100034b0(void)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
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
  undefined4 uVar18;
  uint uStack_48;
  FString local_38 [12];
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d7039;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = 0;
  local_18 = 0;
  puVar1 = &uStack_48;
  switch(in_ECX[0xb6]) {
  case 1:
    iVar5 = in_ECX[0xba];
    local_18 = iVar5;
    puVar1 = &uStack_48;
    break;
  case 2:
    iVar5 = in_ECX[0xbb];
    local_18 = iVar5;
    puVar1 = &uStack_48;
    if (iVar5 != 0) break;
  case 0:
    iVar5 = in_ECX[0xb9];
    local_18 = iVar5;
    puVar1 = &uStack_48;
    break;
  case 3:
    iVar5 = in_ECX[0xbc];
    if (iVar5 == 0) {
      iVar5 = in_ECX[0xb9];
    }
    local_18 = iVar5;
    iVar3 = FUN_10147a60(0,0);
    puVar1 = (uint *)local_14;
    if (iVar3 == 0) {
      in_ECX[0xb6] = 0;
    }
  }
  local_14 = (undefined1 *)puVar1;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (in_ECX[0xc2] < 0) {
    FString::operator=(local_38,(FString *)(in_ECX + 0xbf));
  }
  else {
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + in_ECX[0xc2] * 0xc + 0x6a8dc));
    FString::operator=(local_38,puVar2);
  }
  iVar3 = (**(code **)(*in_ECX + 0x6c))();
  iVar3 = (-(uint)(iVar3 != 0) & 0x463c1e) - 0x5f5f60;
  if (iVar5 != 0) {
    local_1c = FUN_101c19e0();
    uVar4 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar4,local_1c,in_ECX[0x41],in_ECX[0x42],uVar4,local_1c,iVar5,0xff,1);
  }
  iVar5 = FString::operator_int(local_38);
  if ((iVar5 != 0) && (puVar2 = FString::operator[](local_38,0), *puVar2 != 0)) {
    uVar17 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar4 = 0;
    puVar2 = FString::operator*(local_38);
    FUN_10020bb0(&local_2c,puVar2,uVar4,uVar9,uVar11,uVar13,uVar15,uVar17);
    uVar18 = 0xffffffff;
    uVar16 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar17 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    puVar2 = FString::operator*(local_38);
    local_1c = local_28 / 2;
    uVar4 = FUN_101c19e0(iVar3,puVar2,uVar11,uVar13,uVar15,uVar17,uVar6,uVar7,uVar8,uVar10,uVar12,
                         uVar14,uVar16,uVar18);
    local_1c = local_2c / 2;
    uVar9 = FUN_101c19e0(uVar4);
    FUN_100217a0(uVar9,uVar4,iVar3,puVar2,uVar11,uVar13,uVar15,uVar17,uVar6,uVar7,uVar8,uVar10,
                 uVar12,uVar14,uVar16,uVar18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 100036e0 Catch@100036e0

void Catch_100036e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100036f4 Catch@100036f4

void Catch_100036f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::DrawButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003720 FUN_10003720

void FUN_10003720(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  *(undefined4 *)(in_ECX + 0x330) = 1;
  *(undefined4 *)(in_ECX + 0x338) = param_1;
  *unaff_FS_OFFSET = iVar1;
  return;
}


// ==== 10003780 Catch@10003780

void Catch_10003780(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003794 Catch@10003794

void Catch_10003794(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetDisableTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100037c0 FUN_100037c0

undefined4 FUN_100037c0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7080;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d6f0(param_1,param_2);
  iVar1 = (**(code **)(*in_ECX + 0x70))(param_2 & 0xffff,param_2 >> 0x10);
  if (iVar1 != 0) {
    in_ECX[0xb6] = 1;
    (**(code **)(*in_ECX + 0x16c))();
    if (in_ECX[0xc9] != 0) {
      iVar1 = (**(code **)(*in_ECX + 0x6c))();
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
      FUN_1014ed50(uVar2);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10003872 Catch@10003872

void Catch_10003872(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003886 Catch@10003886

void Catch_10003886(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100038b0 FUN_100038b0

undefined4 FUN_100038b0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d70a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d800(param_1,param_2);
  uVar1 = param_2 & 0xffff;
  param_2 = param_2 >> 0x10;
  iVar2 = (**(code **)(*in_ECX + 0x70))(uVar1,param_2);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x6c))();
    if (iVar2 != 0) {
      (**(code **)(*in_ECX + 0x1f8))();
      goto LAB_10003935;
    }
  }
  (**(code **)(*in_ECX + 0x1fc))(uVar1,param_2);
LAB_10003935:
  iVar2 = (**(code **)(*in_ECX + 0x108))(uVar1,param_2);
  if (iVar2 == 0) {
    in_ECX[0xb6] = 0;
    pcVar3 = *(code **)(*in_ECX + 0x170);
  }
  else {
    in_ECX[0xb6] = 2;
    pcVar3 = *(code **)(*in_ECX + 0x16c);
  }
  (*pcVar3)();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000398a Catch@1000398a

void Catch_1000398a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000399e Catch@1000399e

void Catch_1000399e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100039c0 FUN_100039c0

undefined4 FUN_100039c0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d70c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0xb6] != 3) {
    in_ECX[0xb6] = 3;
    in_ECX[0xb7] = 0;
    (**(code **)(*in_ECX + 0x16c))();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10003a32 Catch@10003a32

void Catch_10003a32(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003a46 Catch@10003a46

void Catch_10003a46(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnDragItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003a70 FUN_10003a70

undefined4 FUN_10003a70(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d70e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  FString::Empty((FString *)(in_ECX + 0x2fc));
  ExceptionList = local_10;
  return 1;
}


// ==== 10003acc Catch@10003acc

void Catch_10003acc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003ae0 Catch@10003ae0

void Catch_10003ae0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003b00 FUN_10003b00

undefined4 FUN_10003b00(void)

{
  return 1;
}


// ==== 10003b4b Catch@10003b4b

void Catch_10003b4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003b5f Catch@10003b5f

void Catch_10003b5f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnDragButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003b80 FUN_10003b80

undefined4 FUN_10003b80(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((param_1 == 0xd) || (param_1 == 0x20)) && (in_ECX[0xbe] == 1)) {
    if (in_ECX[0xc9] != 0) {
      iVar1 = (**(code **)(*in_ECX + 0x6c))();
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
      FUN_1014ed50(uVar2);
    }
    FUN_1000cb20(0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10003c13 Catch@10003c13

void Catch_10003c13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003c27 Catch@10003c27

void Catch_10003c27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnKeyDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003c50 FUN_10003c50

FString * FUN_10003c50(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d715a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(FString *)(in_ECX + 0x2fc));
  ExceptionList = local_10;
  return param_1;
}


// ==== 10003cb5 Catch@10003cb5

void Catch_10003cb5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10003cc9 Catch@10003cc9

void Catch_10003cc9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::GetButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003cf0 FUN_10003cf0

void FUN_10003cf0(int param_1)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7180;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6a8dc));
  if (puVar1 != (ushort *)0x0) {
    *(int *)(in_ECX + 0x308) = param_1;
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6a8dc));
    FString::operator=((FString *)(in_ECX + 0x2fc),puVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10003d85 Catch@10003d85

void Catch_10003d85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003d99 Catch@10003d99

void Catch_10003d99(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003dc0 FUN_10003dc0

void FUN_10003dc0(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d71a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 != 0) {
    puVar2 = FString::operator[](param_1,0);
    if (*puVar2 != 0) {
      *(undefined4 *)(in_ECX + 0x308) = 0xffffffff;
      FString::operator=((FString *)(in_ECX + 0x2fc),param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10003e45 Catch@10003e45

void Catch_10003e45(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003e59 Catch@10003e59

void Catch_10003e59(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003e80 FUN_10003e80

undefined4 FUN_10003e80(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d71c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if ((iVar1 != 0) && (puVar2 = FString::operator[](param_1,0), *puVar2 != 0)) {
    uVar3 = 1;
    puVar2 = FString::operator*(param_1);
    uVar3 = FUN_1003f630(puVar2,uVar3);
    *(undefined4 *)(in_ECX + 0x2e4) = uVar3;
    ExceptionList = local_10;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x2e4) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10003f10 Catch@10003f10

void Catch_10003f10(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003f24 Catch@10003f24

void Catch_10003f24(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetForeground");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10003f50 FUN_10003f50

undefined4 FUN_10003f50(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d71e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x2e8) = 0;
  }
  else {
    uVar3 = 1;
    puVar2 = FString::operator*(param_1);
    uVar3 = FUN_1003f630(puVar2,uVar3);
    *(undefined4 *)(in_ECX + 0x2e8) = uVar3;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10003fd0 Catch@10003fd0

void Catch_10003fd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10003fe4 Catch@10003fe4

void Catch_10003fe4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetBackground");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004010 FUN_10004010

undefined4 FUN_10004010(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x2ec) = 0;
  }
  else {
    uVar3 = 1;
    puVar2 = FString::operator*(param_1);
    uVar3 = FUN_1003f630(puVar2,uVar3);
    *(undefined4 *)(in_ECX + 0x2ec) = uVar3;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10004090 Catch@10004090

void Catch_10004090(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100040a4 Catch@100040a4

void Catch_100040a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetHighlight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100040d0 FUN_100040d0

void FUN_100040d0(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10054cc0();
  if ((-1 < param_1) &&
     (puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6a8dc)),
     puVar1 != (ushort *)0x0)) {
    *(int *)(in_ECX + 0x170) = param_1;
    *(undefined4 *)(in_ECX + 0x2e0) = param_2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000415d Catch@1000415d

void Catch_1000415d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004171 Catch@10004171

void Catch_10004171(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetToolTip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004190 FUN_10004190

void FUN_10004190(FString *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10054cc0();
  iVar1 = FString::operator_int(param_1);
  if (iVar1 != 0) {
    FString::operator=((FString *)(in_ECX + 0x310),param_1);
    *(undefined4 *)(in_ECX + 0x2e0) = param_2;
    *(undefined4 *)(in_ECX + 0x328) = param_3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000421b Catch@1000421b

void Catch_1000421b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000422f Catch@1000422f

void Catch_1000422f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::SetToolTip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004250 FUN_10004250

void FUN_10004250(FString *param_1,FString *param_2,FString *param_3,FString *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d7269;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x2f8) = param_5;
  *(undefined4 *)(in_ECX + 0x2dc) = 0;
  *(undefined4 *)(in_ECX + 0x2e0) = 1;
  *(undefined4 *)(in_ECX + 0x308) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 1;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  uVar1 = FUN_1003f630(L"L2UI.tooltip.mini-tool01",1);
  *(undefined4 *)(in_ECX + 0x2f4) = uVar1;
  *(undefined4 *)(in_ECX + 0x2e4) = 0;
  *(undefined4 *)(in_ECX + 0x2e8) = 0;
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  *(undefined4 *)(in_ECX + 0x2d8) = 0;
  iVar2 = FString::Len(param_1);
  if (0 < iVar2) {
    uVar1 = 1;
    puVar3 = FString::operator*(param_1);
    uVar1 = FUN_1003f630(puVar3,uVar1);
    *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  }
  iVar2 = FString::Len(param_2);
  if (0 < iVar2) {
    uVar1 = 1;
    puVar3 = FString::operator*(param_2);
    uVar1 = FUN_1003f630(puVar3,uVar1);
    *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
  }
  if ((*(byte *)(in_ECX + 0x2f8) & 2) == 0) {
    iVar2 = FString::Len(param_3);
    if (0 < iVar2) {
      uVar1 = 1;
      puVar3 = FString::operator*(param_3);
      uVar1 = FUN_1003f630(puVar3,uVar1);
      *(undefined4 *)(in_ECX + 0x2ec) = uVar1;
    }
    iVar2 = FString::Len(param_1);
    if ((0 < iVar2) && (*(int *)(in_ECX + 0x2ec) == 0)) {
      puVar3 = FString::operator*(param_1);
      FString::Printf((ushort *)local_28,L"%s_over",puVar3);
      local_8._0_1_ = 1;
      uVar1 = 0;
      puVar3 = FString::operator*(local_28);
      uVar1 = FUN_1003f630(puVar3,uVar1);
      *(undefined4 *)(in_ECX + 0x2ec) = uVar1;
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
  }
  iVar2 = FString::Len(param_4);
  if (0 < iVar2) {
    uVar1 = 1;
    puVar3 = FString::operator*(param_4);
    uVar1 = FUN_1003f630(puVar3,uVar1);
    *(undefined4 *)(in_ECX + 0x2f0) = uVar1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 100043fc Catch@100043fc

void Catch_100043fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004410 Catch@10004410

void Catch_10004410(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::Initialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004430 FUN_10004430

undefined4 FUN_10004430(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x70))(param_2 & 0xffff,param_2 >> 0x10);
  if (iVar1 != 0) {
    in_ECX[0xb6] = 1;
  }
  FUN_1000cb20(1);
  ExceptionList = local_10;
  return 1;
}


// ==== 100044ae Catch@100044ae

void Catch_100044ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100044c2 Catch@100044c2

void Catch_100044c2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCExButton::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100044e0 FUN_100044e0

undefined4 FUN_100044e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d72b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000cb20(0);
  *(undefined4 *)(in_ECX + 0x2d8) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1000453e Catch@1000453e

void Catch_1000453e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004552 Catch@10004552

void Catch_10004552(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCExButton::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004570 FUN_10004570

undefined4 FUN_10004570(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d72d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xbc) == 0) {
    return 1;
  }
  ExceptionList = &local_10;
  FUN_1005d6f0(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x2d8) = 1;
  ExceptionList = local_10;
  return 1;
}


// ==== 100045f4 Catch@100045f4

void Catch_100045f4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004608 Catch@10004608

void Catch_10004608(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCThumbButton::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004630 FUN_10004630

undefined4 FUN_10004630(byte param_1,undefined2 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d72f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0xbc) != 0) && ((param_1 & 1) != 0)) {
    FUN_1000cb20(param_2);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10004697 Catch@10004697

void Catch_10004697(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100046ab Catch@100046ab

void Catch_100046ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCThumbButton::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100046d0 FUN_100046d0

undefined4 FUN_100046d0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7310;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xbc) != 0) {
    FUN_1005d800(param_1,param_2);
    *(undefined4 *)(in_ECX + 0x2d8) = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1000473f Catch@1000473f

void Catch_1000473f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004753 Catch@10004753

void Catch_10004753(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCThumbButton::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004770 FUN_10004770

undefined4 FUN_10004770(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7330;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0xb6] = 1;
  in_ECX[0xcf] = 1;
  if (in_ECX[0xc9] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x6c))();
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    FUN_1014ed50(uVar2);
  }
  FUN_1000cb20(in_ECX[0x75]);
  if (in_ECX[0xd1] != 0) {
    FUN_1003f600(0xff000000,in_ECX[0xd0],0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1000481c Catch@1000481c

void Catch_1000481c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004830 Catch@10004830

void Catch_10004830(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPushButton::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004850 FUN_10004850

undefined4 FUN_10004850(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x2d8) = 0;
  *(undefined4 *)(in_ECX + 0x33c) = 0;
  if (*(int *)(in_ECX + 0x344) != 0) {
    FUN_1003f610(0xff000000);
  }
  FUN_1000cbf0();
  ExceptionList = local_10;
  return 1;
}


// ==== 100048c0 Catch@100048c0

void Catch_100048c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100048d4 Catch@100048d4

void Catch_100048d4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPushButton::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004900 FUN_10004900

undefined4 FUN_10004900(byte param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*in_ECX + 0x70))(param_2 & 0xffff,param_2 >> 0x10), iVar1 != 0)) {
    if ((param_1 & 1) != 0) {
      in_ECX[0xcf] = 1;
      in_ECX[0xb6] = 1;
      (**(code **)(*in_ECX + 0x170))();
      ExceptionList = local_10;
      return 1;
    }
    in_ECX[0xcf] = 0;
    in_ECX[0xb6] = 2;
    (**(code **)(*in_ECX + 0x16c))();
    ExceptionList = local_10;
    return 1;
  }
  in_ECX[0xcf] = 0;
  iVar1 = (**(code **)(*in_ECX + 0x108))(param_2 & 0xffff,param_2 >> 0x10);
  if (iVar1 == 0) {
    in_ECX[0xb6] = 0;
    pcVar2 = *(code **)(*in_ECX + 0x170);
  }
  else {
    in_ECX[0xb6] = 2;
    pcVar2 = *(code **)(*in_ECX + 0x16c);
  }
  (*pcVar2)();
  ExceptionList = local_10;
  return 1;
}


// ==== 10004a08 Catch@10004a08

void Catch_10004a08(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004a1c Catch@10004a1c

void Catch_10004a1c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPushButton::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004a40 FUN_10004a40

undefined4 FUN_10004a40(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == -0x1000000) && (*(int *)(in_ECX + 0x33c) != 0)) {
    FUN_1000cb20(0);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10004aa4 Catch@10004aa4

void Catch_10004aa4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004ab8 Catch@10004ab8

void Catch_10004ab8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPushButton::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004ae0 FUN_10004ae0

undefined4 FUN_10004ae0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d73b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10003a70();
  ExceptionList = local_10;
  return 1;
}


// ==== 10004b2e Catch@10004b2e

void Catch_10004b2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004b42 Catch@10004b42

void Catch_10004b42(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPushButton::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004b60 FUN_10004b60

undefined4 FUN_10004b60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x348);
}


// ==== 10004baa Catch@10004baa

void Catch_10004baa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004bbe Catch@10004bbe

void Catch_10004bbe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::IsSplit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004be0 FUN_10004be0

void FUN_10004be0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x348) = param_1;
  return;
}


// ==== 10004c36 Catch@10004c36

void Catch_10004c36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004c4a Catch@10004c4a

void Catch_10004c4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::SetSplit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004c70 FUN_10004c70

void FUN_10004c70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x344) = param_1;
  return;
}


// ==== 10004cc6 Catch@10004cc6

void Catch_10004cc6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004cda Catch@10004cda

void Catch_10004cda(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::SetArrayNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004d00 FUN_10004d00

void FUN_10004d00(int param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x34c) = (uint)(param_1 == 0);
  *(uint *)(in_ECX + 0x2d8) = (uint)((param_1 == 0) != 0);
  return;
}


// ==== 10004d68 Catch@10004d68

void Catch_10004d68(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004d7c Catch@10004d7c

void Catch_10004d7c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::SetForeGround");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004da0 FUN_10004da0

undefined4 FUN_10004da0(undefined4 param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d5d0(param_1,param_2);
  iVar1 = (**(code **)(*in_ECX + 0x6c))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x108))(param_2 & 0xffff,param_2 >> 0x10);
    if (iVar1 == 0) {
      in_ECX[0xb6] = (uint)(in_ECX[0xd3] != 0);
      pcVar2 = *(code **)(*in_ECX + 0x170);
    }
    else {
      in_ECX[0xb6] = 2 - (uint)(in_ECX[0xd3] != 0);
      pcVar2 = *(code **)(*in_ECX + 0x16c);
    }
    (*pcVar2)();
    iVar1 = (**(code **)(*in_ECX + 0x104))
                      (param_2 & 0xffff,param_2 >> 0x10,in_ECX[0x20],in_ECX[0x21],in_ECX[0x22],
                       in_ECX[0x23]);
    in_ECX[0xb7] = iVar1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10004e9f Catch@10004e9f

void Catch_10004e9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004eb3 Catch@10004eb3

void Catch_10004eb3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004ed0 FUN_10004ed0

void FUN_10004ed0(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_1022f8a0);
  return;
}


// ==== 10004ef0 FUN_10004ef0

undefined4 FUN_10004ef0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061b40();
  if (*(int *)(in_ECX + 0x350) == 0) {
    uVar1 = FUN_1003f630(L"l2ui_ch3.etc.glowbtn1",1);
    *(undefined4 *)(in_ECX + 0x350) = uVar1;
  }
  if (*(int *)(in_ECX + 0x354) == 0) {
    uVar1 = FUN_1003f630(L"l2ui_ch3.etc.glowbtn2",1);
    *(undefined4 *)(in_ECX + 0x354) = uVar1;
  }
  *(undefined1 *)(in_ECX + 0x368) = 0;
  *(undefined4 *)(in_ECX + 0x360) = 0;
  *(undefined4 *)(in_ECX + 0x364) = 0x32;
  *(undefined1 *)(in_ECX + 0x369) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10004f92 Catch@10004f92

void Catch_10004f92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10004fa6 Catch@10004fa6

void Catch_10004fa6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10004fd0 FUN_10004fd0

undefined4 FUN_10004fd0(int param_1)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0xf0e0f0) {
    *(bool *)(in_ECX + 0x344) = *(char *)(in_ECX + 0x344) == '\0';
  }
  else if (param_1 == 0xf0e0f1) {
    if (*(char *)(in_ECX + 0x368) == '\0') {
      piVar1 = (int *)(in_ECX + 0x360);
      *piVar1 = *piVar1 + -0xf;
      if (*piVar1 < 0) {
        *(undefined4 *)(in_ECX + 0x360) = 0;
        *(undefined1 *)(in_ECX + 0x368) = 1;
        FUN_1003f610(0xf0e0f1);
        FUN_1003f610(0xf0e0f2);
        *(undefined1 *)(in_ECX + 0x369) = 0;
      }
    }
    else {
      *(int *)(in_ECX + 0x360) = *(int *)(in_ECX + 0x360) + 0xf;
      if (0xff < *(int *)(in_ECX + 0x360)) {
        *(undefined4 *)(in_ECX + 0x360) = 0xff;
        *(undefined1 *)(in_ECX + 0x368) = 0;
      }
    }
  }
  else if (param_1 == 0xf0e0f2) {
    *(int *)(in_ECX + 0x364) = *(int *)(in_ECX + 0x364) + 5;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100050b1 Catch@100050b1

void Catch_100050b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100050c5 Catch@100050c5

void Catch_100050c5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100050f0 FUN_100050f0

void FUN_100050f0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d74b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x364) = 0x32;
  *(undefined4 *)(in_ECX + 0x360) = 0;
  *(undefined1 *)(in_ECX + 0x368) = 1;
  uVar1 = FUN_1003f600(0xf0e0f0,*(undefined4 *)(in_ECX + 0x33c),0);
  *(undefined4 *)(in_ECX + 0x340) = uVar1;
  uVar1 = FUN_1003f600(0xf0e0f1,10,0);
  *(undefined4 *)(in_ECX + 0x358) = uVar1;
  uVar1 = FUN_1003f600(0xf0e0f2,0x32,0);
  *(undefined4 *)(in_ECX + 0x35c) = uVar1;
  *(undefined1 *)(in_ECX + 0x369) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 100051a4 Catch@100051a4

void Catch_100051a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100051b8 Catch@100051b8

void Catch_100051b8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::StartEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100051e0 FUN_100051e0

void FUN_100051e0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d74d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x34c) = param_1;
  FUN_100050f0();
  ExceptionList = local_10;
  return;
}


// ==== 1000523b Catch@1000523b

void Catch_1000523b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000524f Catch@1000524f

void Catch_1000524f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::SetData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10005270 FUN_10005270

void FUN_10005270(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101d74fb;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)auStack_10);
  ExceptionList = &local_c;
  uVar3 = 0x3c;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(0x3c,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (iVar2 != 0) {
    FUN_100d1ba0(uVar3,iVar2);
  }
  ExceptionList = pvVar1;
  return;
}


// ==== 100052e0 FUN_100052e0

FArchive * FUN_100052e0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 10005300 UButtonHandle::StaticClass

/* public: static class UClass * __cdecl UButtonHandle::StaticClass(void) */

UClass * __cdecl UButtonHandle::StaticClass(void)

{
                    /* 0x5300  925  ?StaticClass@UButtonHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10005310 UUIScript::eventOnButtonTimer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnButtonTimer(unsigned long) */

void __thiscall UUIScript::eventOnButtonTimer(UUIScript *this,ulong param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x5310  1010  ?eventOnButtonTimer@UUIScript@@QAEXK@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnButtonTimer,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10005350 UUIScript::eventOnClickButtonWithHandle

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnClickButtonWithHandle(class UButtonHandle *) */

void __thiscall UUIScript::eventOnClickButtonWithHandle(UUIScript *this,UButtonHandle *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x5350  1014
                       ?eventOnClickButtonWithHandle@UUIScript@@QAEXPAVUButtonHandle@@@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,_NWINDOW_OnClickButtonWithHandle,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10005390 FUN_10005390

void FUN_10005390(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100053e0 FUN_100053e0

undefined4 FUN_100053e0(int param_1,int param_2)

{
  int *in_ECX;
  
  if ((((*in_ECX <= param_1) && ((float)param_1 <= (float)in_ECX[2] + (float)*in_ECX)) &&
      (in_ECX[1] <= param_2)) && ((float)param_2 <= (float)in_ECX[3] + (float)in_ECX[1])) {
    return 1;
  }
  return 0;
}


// ==== 10005430 FUN_10005430

undefined4 FUN_10005430(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    if (*(int *)(in_ECX + 0x170) < 0) {
      iVar3 = FString::Len((FString *)(in_ECX + 0x310));
      if (0 < iVar3) {
        FUN_101b8ab0((FString *)(in_ECX + 0x310),*(int *)(in_ECX + 0xd4) + 0x24,
                     *(undefined4 *)(in_ECX + 0x328));
      }
    }
    else {
      FUN_101b8d20(*(int *)(in_ECX + 0x170),*(int *)(in_ECX + 0xd4) + 0x24);
    }
    if (*(int *)(in_ECX + 0xd4) != 0) {
      if (*(int *)(in_ECX + 0x328) == 0) {
        iVar3 = FString::operator!=((FString *)(in_ECX + 0x164),(ushort *)&DAT_1022f9f8);
        if (iVar3 == 0) {
          FUN_100549b0(param_1,*(int *)(in_ECX + 0xd4) + 0x24,0,0,*(undefined4 *)(in_ECX + 0x80),
                       *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                       *(undefined4 *)(in_ECX + 0x8c));
          goto LAB_100055b3;
        }
      }
      FUN_10054680(param_1,*(int *)(in_ECX + 0xd4) + 0x24,0,0,*(undefined4 *)(in_ECX + 0x80),
                   *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                   *(undefined4 *)(in_ECX + 0x8c));
    }
  }
LAB_100055b3:
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 100055da Catch@100055da

void Catch_100055da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100055ee Catch@100055ee

void Catch_100055ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnPostPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10005610 FUN_10005610

undefined4 FUN_10005610(int param_1)

{
  UUIScript *this;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == in_ECX[0xcb]) {
    in_ECX[0xcd] = 0;
    FUN_1003f610(in_ECX[0xcb]);
    (**(code **)(*in_ECX + 0x118))(1);
    FUN_1000cc70(0x502,in_ECX[0x73],1);
    this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
    if (this != (UUIScript *)0x0) {
      UUIScript::eventOnButtonTimer(this,1);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100056b4 Catch@100056b4

void Catch_100056b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100056c8 Catch@100056c8

void Catch_100056c8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100056f0 FUN_100056f0

undefined4 FUN_100056f0(byte param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  int *in_ECX;
  uint uVar3;
  uint uStack_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7590;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = param_2 & 0xffff;
  iVar1 = (**(code **)(*in_ECX + 0x108))(uVar3,param_2 >> 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_10147a60(0,0);
    if (iVar1 != 0) {
      local_30 = 0;
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      FUN_10058770(&local_34);
      local_24 = uVar3;
      iVar1 = FUN_100053e0(uVar3,param_2 >> 0x10);
      if (iVar1 != 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    in_ECX[0xb6] = 0;
    in_ECX[0xb7] = 0;
    if ((param_1 & 1) != 0) {
      ExceptionList = local_10;
      return 1;
    }
    pcVar2 = *(code **)(*in_ECX + 0x170);
  }
  else {
    in_ECX[0xb6] = 2 - (uint)((param_1 & 1) != 0);
    in_ECX[0xb7] = 1;
    pcVar2 = *(code **)(*in_ECX + 0x16c);
  }
  (*pcVar2)();
  ExceptionList = local_10;
  return 1;
}


// ==== 100057e3 Catch@100057e3

void Catch_100057e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100057f7 Catch@100057f7

void Catch_100057f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10005820 FUN_10005820

void FUN_10005820(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d75b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    appFailAssert("a_pX",".\\Src\\NButton.cpp",0x3cb);
  }
  if (param_2 == (int *)0x0) {
    appFailAssert("a_pY",".\\Src\\NButton.cpp",0x3cc);
  }
  iVar1 = in_ECX[0x20];
  iVar2 = in_ECX[0x21];
  (**(code **)(*in_ECX + 0xd4))(1,1,0,in_ECX[0xcf],in_ECX[0xd0],0);
  (**(code **)(*in_ECX + 0xd0))(0,0,0);
  *param_1 = in_ECX[0x20] - iVar1;
  *param_2 = in_ECX[0x21] - iVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10005921 Catch@10005921

void Catch_10005921(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10005935 Catch@10005935

void Catch_10005935(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::MoveToOrgPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10005960 FUN_10005960

void FUN_10005960(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x33c) = param_1;
  *(undefined4 *)(in_ECX + 0x340) = param_2;
  return;
}


// ==== 100059bf Catch@100059bf

void Catch_100059bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100059d3 Catch@100059d3

void Catch_100059d3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::SetDefaultAnchorOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100059f0 FUN_100059f0

FArchive * FUN_100059f0(FArchive *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d75f0;
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


// ==== 10005a6e Catch@10005a6e

void Catch_10005a6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10005a82 Catch@10005a82

void Catch_10005a82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator <<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10005aa0 FUN_10005aa0

undefined4 FUN_10005aa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_100034b0(param_1);
  if (*(char *)(in_ECX + 0x369) == '\0') {
    if (*(char *)(in_ECX + 0x344) == '\0') goto LAB_10005bce;
    uVar7 = 1;
    uVar6 = 0xff;
    uVar1 = *(undefined4 *)(in_ECX + 0x2ec);
    uVar5 = 0x20;
    uVar2 = 0x20;
    iVar4 = 0x20;
    iVar3 = 0;
  }
  else {
    FUN_10021a00(0xffffffd0,0xffffffd0,0x80,0x80,0,0,0x80,0x80,*(undefined4 *)(in_ECX + 0x350),
                 *(undefined1 *)(in_ECX + 0x360),0);
    iVar4 = (*(int *)(in_ECX + 0x364) << 7) / 100;
    iVar3 = 0x10 - iVar4 / 2;
    uVar7 = 0;
    uVar6 = *(undefined1 *)(in_ECX + 0x360);
    uVar1 = *(undefined4 *)(in_ECX + 0x354);
    uVar5 = 0x80;
    uVar2 = 0x80;
  }
  FUN_10021a00(iVar3,iVar3,iVar4,iVar4,0,0,uVar2,uVar5,uVar1,uVar6,uVar7);
LAB_10005bce:
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10005bf5 Catch@10005bf5

void Catch_10005bf5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10005c09 Catch@10005c09

void Catch_10005c09(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10005c30 FUN_10005c30

int FUN_10005c30(void)

{
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  return DAT_1035786c;
}


// ==== 10005c50 FUN_10005c50

UObject * FUN_10005c50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035db10);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10005c80 FUN_10005c80

UObject * FUN_10005c80(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035eaa0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10005cb0 FUN_10005cb0

UObject * FUN_10005cb0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UButtonHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10005ce0 FUN_10005ce0

UObject * FUN_10005ce0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036ac80);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10005d10 FUN_10005d10

UObject * FUN_10005d10(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036ac80);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&DAT_1036ac80);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 10005d70 UUIScript::eventOnClickButton

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnClickButton(class FString const &) */

void __thiscall UUIScript::eventOnClickButton(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5d70  1013  ?eventOnClickButton@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d764a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x10005db8;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnClickButton,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10005e00 FUN_10005e00

undefined4 FUN_10005e00(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar7 = FUN_10058f70();
  iVar8 = FUN_10005c50(uVar7);
  if (iVar8 != 0) {
    uVar7 = FUN_10058f70();
    iVar8 = FUN_10005c80(uVar7);
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x1cc) != 0)) {
      iVar3 = *(int *)(in_ECX + 0x80);
      iVar4 = *(int *)(iVar8 + 0x1d0);
      iVar9 = iVar3;
      if (iVar3 <= iVar4) {
        iVar9 = iVar4;
      }
      iVar5 = *(int *)(in_ECX + 0x84);
      iVar6 = *(int *)(iVar8 + 0x1d4);
      iVar10 = iVar5;
      if (iVar5 <= iVar6) {
        iVar10 = iVar6;
      }
      fVar1 = *(float *)(iVar8 + 0x1d8) + (float)iVar4;
      if ((float)iVar3 + *(float *)(in_ECX + 0x88) <= fVar1) {
        fVar1 = *(float *)(in_ECX + 0x88);
      }
      else {
        fVar1 = fVar1 - (float)iVar3;
      }
      fVar2 = *(float *)(iVar8 + 0x1dc) + (float)iVar6;
      if ((float)iVar5 + *(float *)(in_ECX + 0x8c) <= fVar2) {
        fVar2 = *(float *)(in_ECX + 0x8c);
      }
      else {
        fVar2 = fVar2 - (float)iVar5;
      }
      FUN_100220e0(iVar9,iVar10,fVar1,fVar2);
      goto LAB_10005f80;
    }
  }
  uVar7 = FUN_101c19e0();
  uVar11 = FUN_101c19e0(uVar7);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar11,uVar7);
LAB_10005f80:
  FUN_100034b0(param_1);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10005faf Catch@10005faf

void Catch_10005faf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10005fc3 Catch@10005fc3

void Catch_10005fc3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10005fe0 FUN_10005fe0

void FUN_10005fe0(void)

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
  
  puStack_c = &LAB_101d7690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UButtonHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10005cb0(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1000606a;
    appFailAssert("m_pScriptHandle",".\\Src\\NButton.cpp",0x16e);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1000609e Catch@1000609e

void Catch_1000609e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100060b2 Catch@100060b2

void Catch_100060b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100060d0 FUN_100060d0

undefined4 FUN_100060d0(void)

{
  UUIScript *this;
  FString *pFVar1;
  undefined4 uVar2;
  UButtonHandle *pUVar3;
  int iVar4;
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d76b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    pFVar1 = (FString *)FUN_10057590(local_28);
    local_8._0_1_ = 1;
    UUIScript::eventOnClickButton(this,pFVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    uVar2 = FUN_100580a0();
    pUVar3 = (UButtonHandle *)FUN_10005cb0(uVar2);
    UUIScript::eventOnClickButtonWithHandle(this,pUVar3);
  }
  iVar4 = in_ECX[0x75];
  if (iVar4 == -1) {
    iVar4 = in_ECX[0x73];
  }
  FUN_1000cb20(iVar4);
  if (in_ECX[0xcc] != 0) {
    if (in_ECX[0xcd] != 0) goto LAB_100061ce;
    iVar4 = FUN_1003f600(0xff00ff01,in_ECX[0xce],0);
    in_ECX[0xcb] = iVar4;
    in_ECX[0xcd] = 1;
    FUN_1000cc70(0x502,in_ECX[0x73],0);
    if (this != (UUIScript *)0x0) {
      UUIScript::eventOnButtonTimer(this,0);
    }
  }
  if (in_ECX[0xcd] == 0) {
    ExceptionList = local_10;
    return 1;
  }
LAB_100061ce:
  (**(code **)(*in_ECX + 0x118))(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 100061f3 Catch@100061f3

void Catch_100061f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006207 Catch@10006207

void Catch_10006207(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::OnClickButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006230 FUN_10006230

undefined4 FUN_10006230(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  uint uStack_54;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d76e0;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_10058f70();
    iVar2 = FUN_10005ce0(uVar1);
    if (iVar2 != 0) {
      local_40 = 0;
      local_44 = 0;
      local_3c = 0;
      local_38 = 0;
      FUN_10058770(&local_44);
      iVar2 = *(int *)(in_ECX + 0x340);
      *param_1 = *(int *)(in_ECX + 0x33c) + local_44;
      param_1[1] = iVar2 + local_40;
      param_1[2] = *(int *)(in_ECX + 0x88);
      param_1[3] = *(int *)(in_ECX + 0x8c);
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 100062f7 Catch@100062f7

void Catch_100062f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000630b Catch@1000630b

void Catch_1000630b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::GetOriginalRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006330 FUN_10006330

undefined4 FUN_10006330(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7700;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d6f0(param_1,param_2);
  iVar1 = (**(code **)(*in_ECX + 0x6c))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x70))(param_2 & 0xffff,param_2 >> 0x10);
    if (iVar1 != 0) {
      in_ECX[0xb6] = 1;
      (**(code **)(*in_ECX + 0x16c))();
      if (in_ECX[0xc9] != 0) {
        iVar1 = (**(code **)(*in_ECX + 0x6c))();
        if (iVar1 == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 0;
        }
        FUN_1014ed50(uVar3);
      }
    }
    piVar2 = (int *)FUN_10005d10(*(undefined4 *)(*(int *)(in_ECX[0x2e] + 0xc) + 4));
    (**(code **)(*piVar2 + 0x1fc))(in_ECX[0xd1],1);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1000641d Catch@1000641d

void Catch_1000641d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006431 Catch@10006431

void Catch_10006431(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006450 FUN_10006450

undefined4 FUN_10006450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d800(param_1,param_2);
  iVar1 = (**(code **)(*in_ECX + 0x6c))();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_10005d10(*(undefined4 *)(*(int *)(in_ECX[0x2e] + 0xc) + 4));
    (**(code **)(*piVar2 + 0x204))(in_ECX[0xd1]);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100064e1 Catch@100064e1

void Catch_100064e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100064f5 Catch@100064f5

void Catch_100064f5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006520 FUN_10006520

undefined4 FUN_10006520(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100599f0(param_1,param_2);
  piVar1 = (int *)FUN_10005d10(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4));
  (**(code **)(*piVar1 + 0x200))
            (*(undefined4 *)(in_ECX + 0x344),(int)(short)param_2,(int)(short)((uint)param_2 >> 0x10)
            );
  ExceptionList = local_10;
  return 1;
}


// ==== 100065ad Catch@100065ad

void Catch_100065ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100065c1 Catch@100065c1

void Catch_100065c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::OnMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100065e0 FUN_100065e0

undefined4 FUN_100065e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d7782;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100038b0(param_1,param_2);
  FUN_1003f970();
  local_8._0_1_ = 1;
  iVar1 = *(int *)(in_ECX + 0x348);
  if (iVar1 == 0) {
    FUN_10144c10(*(undefined4 *)(in_ECX + 0x34c));
  }
  else if (iVar1 == 1) {
    FUN_1013d7f0(4,1);
    FUN_1003faa0();
    FString::FString(local_4c,"QuestID");
    local_8._0_1_ = 2;
    FUN_10040090(local_4c,*(undefined4 *)(in_ECX + 0x34c));
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    puVar3 = local_28;
    uVar2 = 0x2da;
    FUN_10005c30(0x2da,puVar3);
    FUN_100d1790(uVar2,puVar3);
  }
  else if (iVar1 == 2) {
    FUN_1003f970();
    local_8._0_1_ = 3;
    FString::FString(local_40,(ushort *)L"Index");
    local_8._0_1_ = 4;
    FUN_10040090(local_40,5);
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    puVar3 = local_34;
    uVar2 = 0x4a6;
    FUN_10005c30(0x4a6,puVar3);
    FUN_100d1790(uVar2,puVar3);
    local_8._0_1_ = 1;
    FUN_1003fff0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return 1;
}


// ==== 10006741 Catch@10006741

void Catch_10006741(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006755 Catch@10006755

void Catch_10006755(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006780 FUN_10006780

void FUN_10006780(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101d77c6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCButton::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x310));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x2fc));
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10006800 FUN_10006800

void FUN_10006800(byte param_1)

{
  void *in_ECX;
  
  FUN_10006780();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x33c);
  }
  return;
}


// ==== 10006830 FUN_10006830

void FUN_10006830(void)

{
  undefined4 *in_ECX;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d783a;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCButton::vftable;
  FString::FString((FString *)(in_ECX + 0xbf));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xc4));
  local_8._0_1_ = 3;
  FString::FString(local_50,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 4;
  FString::FString(local_44,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 5;
  FString::FString(local_38,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 6;
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 7;
  FUN_10004250(local_2c,local_38,local_44,local_50,0);
  local_8._0_1_ = 6;
  FString::~FString(local_2c);
  local_8._0_1_ = 5;
  FString::~FString(local_38);
  local_8._0_1_ = 4;
  FString::~FString(local_44);
  local_8 = CONCAT31(local_8._1_3_,3);
  FString::~FString(local_50);
  ExceptionList = local_10;
  return;
}


// ==== 10006946 Catch@10006946

void Catch_10006946(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000695a Catch@1000695a

void Catch_1000695a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::NCButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006980 FUN_10006980

void FUN_10006980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7898;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCButton::vftable;
  FString::FString((FString *)(in_ECX + 0xbf));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xc4));
  local_8._0_1_ = 3;
  FString::FString(local_38,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 4;
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 5;
  FUN_10004250(param_1,param_2,local_2c,local_38,param_3);
  local_8._0_1_ = 4;
  FString::~FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10006a5c Catch@10006a5c

void Catch_10006a5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006a70 Catch@10006a70

void Catch_10006a70(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::NCButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006a90 FUN_10006a90

void FUN_10006a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  uint uStack_3c;
  FString local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d78ef;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCButton::vftable;
  FString::FString((FString *)(in_ECX + 0xbf));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xc4));
  local_8._0_1_ = 3;
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 4;
  FUN_10004250(param_1,param_2,param_3,local_2c,param_4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10006b4d Catch@10006b4d

void Catch_10006b4d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006b61 Catch@10006b61

void Catch_10006b61(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::NCButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006b80 FUN_10006b80

void FUN_10006b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7936;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCButton::vftable;
  FString::FString((FString *)(in_ECX + 0xbf));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xc4));
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_10004250(param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_10;
  return;
}


// ==== 10006c1e Catch@10006c1e

void Catch_10006c1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006c32 Catch@10006c32

void Catch_10006c32(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCButton::NCButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006c50 FUN_10006c50

void FUN_10006c50(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7968;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006830();
  *in_ECX = NCExButton::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10006cb1 Catch@10006cb1

void Catch_10006cb1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006cc5 Catch@10006cc5

void Catch_10006cc5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCExButton::NCExButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006cf0 FUN_10006cf0

void FUN_10006cf0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7998;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCExButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10006780(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10006d50 FUN_10006d50

void FUN_10006d50(byte param_1)

{
  void *in_ECX;
  
  FUN_10006cf0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x33c);
  }
  return;
}


// ==== 10006d80 FUN_10006d80

void FUN_10006d80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d79c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006980(param_1,param_2,param_3);
  *in_ECX = NCExButton::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10006df1 Catch@10006df1

void Catch_10006df1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006e05 Catch@10006e05

void Catch_10006e05(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCExButton::NCExButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006e30 FUN_10006e30

void FUN_10006e30(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d79f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006830();
  *in_ECX = NCThumbButton::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10006e91 Catch@10006e91

void Catch_10006e91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006ea5 Catch@10006ea5

void Catch_10006ea5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCThumbButton::NCThumbButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10006ed0 FUN_10006ed0

void FUN_10006ed0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7a28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCThumbButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10006780(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10006f30 FUN_10006f30

void FUN_10006f30(byte param_1)

{
  void *in_ECX;
  
  FUN_10006ed0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x33c);
  }
  return;
}


// ==== 10006f60 FUN_10006f60

void FUN_10006f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7a58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006980(param_1,param_2,param_3);
  *in_ECX = NCThumbButton::vftable;
  ExceptionList = local_10;
  return;
}


// ==== 10006fd1 Catch@10006fd1

void Catch_10006fd1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10006fe5 Catch@10006fe5

void Catch_10006fe5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCThumbButton::NCThumbButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10007010 FUN_10007010

void FUN_10007010(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7a88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006830();
  *in_ECX = NCPushButton::vftable;
  in_ECX[0xcf] = 0;
  in_ECX[0xd0] = 100;
  in_ECX[0xd1] = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1000708f Catch@1000708f

void Catch_1000708f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100070a3 Catch@100070a3

void Catch_100070a3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPushButton::NCPushButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100070c0 FUN_100070c0

void FUN_100070c0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7ab8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCPushButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10006780(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10007120 FUN_10007120

void FUN_10007120(byte param_1)

{
  void *in_ECX;
  
  FUN_100070c0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x348);
  }
  return;
}


// ==== 10007150 FUN_10007150

void FUN_10007150(undefined4 *param_1,undefined4 param_2)

{
  ushort *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  uint uStack_3c;
  FString local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7af1;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  FUN_10006830();
  *in_ECX = NCPushButton::vftable;
  in_ECX[0xcf] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_10003e80(param_1);
  FUN_10003f50(param_2);
  if ((*(byte *)(in_ECX + 0xbe) & 2) == 0) {
    FString::Printf((ushort *)local_2c,L"%s_over",*param_1,param_1[1],param_1[2]);
    local_8._0_1_ = 2;
    uVar2 = 0;
    puVar1 = FString::operator*(local_2c);
    uVar2 = FUN_1003f630(puVar1,uVar2);
    in_ECX[0xbb] = uVar2;
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10007227 Catch@10007227

void Catch_10007227(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000723b Catch@1000723b

void Catch_1000723b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCPushButton::NCPushButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10007260 FUN_10007260

void FUN_10007260(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7b18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006830();
  *in_ECX = NCTabButton::vftable;
  in_ECX[0xd0] = 0;
  in_ECX[0xcf] = 0;
  in_ECX[0xd1] = 0xffffffff;
  in_ECX[0xd2] = 0;
  in_ECX[0xd3] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100072dc Catch@100072dc

void Catch_100072dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100072f0 Catch@100072f0

void Catch_100072f0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::NCTabButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10007310 FUN_10007310

void FUN_10007310(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7b48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCTabButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10006780(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10007370 FUN_10007370

void FUN_10007370(byte param_1)

{
  void *in_ECX;
  
  FUN_10007310();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x350);
  }
  return;
}


// ==== 100073a0 FUN_100073a0

void FUN_100073a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7b78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006980(param_1,param_2,param_3);
  *in_ECX = NCTabButton::vftable;
  in_ECX[0xd0] = 0;
  in_ECX[0xcf] = 0;
  in_ECX[0xd1] = 0xffffffff;
  in_ECX[0xd2] = 0;
  in_ECX[0xd3] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1000742c Catch@1000742c

void Catch_1000742c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10007440 Catch@10007440

void Catch_10007440(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCTabButton::NCTabButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10007460 FUN_10007460

void FUN_10007460(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7ba8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006830();
  *in_ECX = NCEffectButton::vftable;
  in_ECX[0xcf] = 500;
  in_ECX[0xd2] = 0;
  in_ECX[0xd4] = 0;
  in_ECX[0xd5] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100074db Catch@100074db

void Catch_100074db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100074ef Catch@100074ef

void Catch_100074ef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::NCEffectButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10007510 FUN_10007510

void FUN_10007510(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7bd8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCEffectButton::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10006780(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10007570 FUN_10007570

void FUN_10007570(byte param_1)

{
  void *in_ECX;
  
  FUN_10007510();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x36c);
  }
  return;
}


// ==== 100075a0 FUN_100075a0

void FUN_100075a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 FString *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ushort *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d7c08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10006a90(param_2,param_3,param_4,param_8);
  *in_ECX = NCEffectButton::vftable;
  local_8 = 1;
  in_ECX[0xd2] = param_1;
  in_ECX[0xcf] = param_7;
  *(undefined1 *)(in_ECX + 0xd1) = 0;
  uVar2 = 1;
  puVar1 = FString::operator*(param_5);
  uVar2 = FUN_1003f630(puVar1,uVar2);
  in_ECX[0xd4] = uVar2;
  uVar2 = 1;
  puVar1 = FString::operator*(param_5);
  uVar2 = FUN_1003f630(puVar1,uVar2);
  in_ECX[0xd5] = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10007661 Catch@10007661

void Catch_10007661(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10007675 Catch@10007675

void Catch_10007675(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEffectButton::NCEffectButton");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10007700 FUN_10007700

bool FUN_10007700(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x201) {
    iVar1 = (**(code **)(*in_ECX + 0x1a4))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == 0x202) {
    iVar1 = (**(code **)(*in_ECX + 0x1a8))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10007780 FUN_10007780

undefined4 FUN_10007780(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.left_enable1",1);
  *(undefined4 *)(in_ECX + 0x1d0) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.left_disable1",1);
  *(undefined4 *)(in_ECX + 0x1d4) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.left_enable2",1);
  *(undefined4 *)(in_ECX + 0x1d8) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.left_disable2",1);
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.center1",1);
  *(undefined4 *)(in_ECX + 0x1e0) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.center2",1);
  *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.right1",1);
  *(undefined4 *)(in_ECX + 0x1e8) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI.CandidateWnd.right2",1);
  *(undefined4 *)(in_ECX + 0x1ec) = uVar1;
  uVar1 = FUN_1003f630(L"Default.WhiteTexture",1);
  *(undefined4 *)(in_ECX + 0x1f0) = uVar1;
  return 1;
}


// ==== 10007850 FUN_10007850

void FUN_10007850(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x204) < 1) {
    *(undefined4 *)(in_ECX + 0x208) = 0;
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x204) + -1;
  *(int *)(in_ECX + 0x204) = iVar1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(in_ECX + 0x1cc);
    if (iVar1 % iVar2 == iVar2 + -1) {
      *(int *)(in_ECX + 0x208) = (iVar1 - iVar2) + 1;
    }
    return;
  }
  *(undefined4 *)(in_ECX + 0x208) = 0;
  return;
}


// ==== 100078a0 FUN_100078a0

int FUN_100078a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x204);
  iVar1 = iVar2 + 1;
  if (iVar1 < *(int *)(in_ECX + 0x20c)) {
    iVar2 = iVar1 / *(int *)(in_ECX + 0x1cc);
    *(int *)(in_ECX + 0x204) = iVar1;
    if (iVar1 % *(int *)(in_ECX + 0x1cc) == 0) {
      *(int *)(in_ECX + 0x208) = iVar1;
    }
  }
  return iVar2;
}


// ==== 100078d0 FUN_100078d0

undefined4 FUN_100078d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  
  switch(param_1) {
  case 0x21:
  case 0x22:
    iVar1 = (**(code **)(*in_ECX + 0xfc))(0);
    if (iVar1 == 0) {
      (**(code **)(*in_ECX + 0x138))();
    }
    else {
      (**(code **)(*in_ECX + 0x13c))();
    }
    break;
  case 0x26:
    FUN_10007850();
    break;
  case 0x28:
    FUN_100078a0();
  }
  FUN_1005f3a0(param_1,param_2);
  return 1;
}


// ==== 10007960 FUN_10007960

undefined4 FUN_10007960(void)

{
  FUN_10007850();
  return 1;
}


// ==== 10007970 FUN_10007970

undefined4 FUN_10007970(void)

{
  FUN_100078a0();
  return 1;
}


// ==== 10007980 FUN_10007980

undefined4 FUN_10007980(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0);
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x13c))();
  }
  return 1;
}


// ==== 100079b0 FUN_100079b0

undefined4 FUN_100079b0(int param_1,int param_2,int param_3,int param_4,float param_5,float param_6)

{
  if ((((param_3 <= param_1) && ((float)param_1 <= (float)param_3 + param_5)) &&
      (param_4 <= param_2)) && ((float)param_2 <= (float)param_4 + param_6)) {
    return 1;
  }
  return 0;
}


// ==== 10007a00 FUN_10007a00

void FUN_10007a00(uint param_1,int param_2)

{
  float fVar1;
  int in_ECX;
  
  if (param_1 < 0x46) {
    if (*(float *)(in_ECX + 0x88) < 70.0) {
      *(undefined4 *)(in_ECX + 0x88) = 0x428c0000;
    }
  }
  else {
    fVar1 = (float)(int)param_1;
    if ((int)param_1 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)(in_ECX + 0x88) = fVar1;
  }
  fVar1 = (float)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(in_ECX + 0x8c) = fVar1;
  return;
}


// ==== 10007a60 FUN_10007a60

void FUN_10007a60(void)

{
  return;
}


// ==== 10007a70 FUN_10007a70

void FUN_10007a70(int param_1)

{
  int *in_ECX;
  
  in_ECX[0x89] = param_1;
  if ((1 < param_1) && (param_1 < 5)) {
    (**(code **)(*in_ECX + 500))(0,0x96);
    return;
  }
  (**(code **)(*in_ECX + 500))(0,0x87);
  return;
}


// ==== 10007ab0 FUN_10007ab0

undefined4 FUN_10007ab0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  uVar1 = FUN_1003f630(L"Default.BlackTexture",1);
  *(undefined4 *)(in_ECX + 0x1cc) = uVar1;
  FString::Empty((FString *)(in_ECX + 0x1d0));
  return 1;
}


// ==== 10007ae0 FUN_10007ae0

void FUN_10007ae0(void)

{
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0x1e0)) {
    *(int *)(in_ECX + 0x1e0) = *(int *)(in_ECX + 0x1e0) + -1;
  }
  if (*(int *)(in_ECX + 0x1e0) < *(int *)(in_ECX + 0x1dc)) {
    *(int *)(in_ECX + 0x1dc) = *(int *)(in_ECX + 0x1e0);
  }
  return;
}


// ==== 10007b10 FUN_10007b10

FString * FUN_10007b10(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d7c4a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x1d0));
  ExceptionList = local_c;
  return param_1;
}


// ==== 10007b80 FUN_10007b80

void FUN_10007b80(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1e4) = param_1;
  return;
}


// ==== 10007b90 FUN_10007b90

undefined4 FUN_10007b90(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10007bde Catch@10007bde

void Catch_10007bde(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10007bf2 Catch@10007bf2

void Catch_10007bf2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCompositeBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10007c10 FUN_10007c10

void FUN_10007c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10360fd8,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10007c40 FUN_10007c40

undefined4 FUN_10007c40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_3c;
  int local_2c [4];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7c90;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar4 = *(int *)(in_ECX + 0x224);
  if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
    if (*(int *)(in_ECX + 0x1d0) != 0) {
      FUN_10021a00(0,0,0xb,0x88,0,0,0xb,0x88,*(int *)(in_ECX + 0x1d0),0xff,0);
    }
    iVar4 = *(int *)(in_ECX + 0x20c);
    if ((iVar4 < *(int *)(in_ECX + 0x1cc)) && (*(int *)(in_ECX + 0x1d4) != 0)) {
      iVar3 = (*(int *)(in_ECX + 0x1cc) - iVar4) * *(int *)(in_ECX + 500);
      iVar4 = iVar4 * *(int *)(in_ECX + 500);
      FUN_10021a00(1,iVar4 + 1,9,iVar3,0,iVar4,9,iVar3,*(int *)(in_ECX + 0x1d4),0xff,0);
    }
    iVar4 = *(int *)(in_ECX + 0x1e0);
    if (iVar4 != 0) {
      uVar12 = 0;
      uVar10 = 0xff;
      uVar9 = 0x88;
      uVar8 = 0xc;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x88;
      uVar2 = FUN_101c19e0(0x88,0,0,0xc,0x88,iVar4,0xff,0);
      FUN_10021a00(0xb,0,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,iVar4,uVar10,uVar12);
    }
    iVar4 = *(int *)(in_ECX + 0x1e8);
    if (iVar4 == 0) goto LAB_10008026;
    uVar5 = 0x88;
    uVar2 = 0x88;
  }
  else if ((iVar4 == 3) || (iVar4 == 4)) {
    if (*(int *)(in_ECX + 0x1d8) != 0) {
      FUN_10021a00(0,0,0xb,0x97,0,0,0xb,0x97,*(int *)(in_ECX + 0x1d8),0xff,0);
    }
    if ((*(int *)(in_ECX + 0x20c) < *(int *)(in_ECX + 0x1cc)) && (*(int *)(in_ECX + 0x1dc) != 0)) {
      iVar4 = (*(int *)(in_ECX + 0x1cc) - *(int *)(in_ECX + 0x20c)) * *(int *)(in_ECX + 500);
      iVar3 = *(int *)(in_ECX + 0x20c) * *(int *)(in_ECX + 500);
      FUN_10021a00(1,iVar3 + 1,9,iVar4,0,iVar3,9,iVar4,*(int *)(in_ECX + 0x1dc),0xff,0);
    }
    iVar4 = *(int *)(in_ECX + 0x1e4);
    if (iVar4 != 0) {
      uVar12 = 0;
      uVar10 = 0xff;
      uVar9 = 0x88;
      uVar8 = 0xc;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x97;
      uVar2 = FUN_101c19e0(0x97,0,0,0xc,0x88,iVar4,0xff,0);
      FUN_10021a00(0xb,0,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,iVar4,uVar10,uVar12);
    }
    iVar4 = *(int *)(in_ECX + 0x1ec);
    if (iVar4 == 0) goto LAB_10008026;
    uVar5 = 0x88;
    uVar2 = 0x97;
  }
  else {
    if (iVar4 != 5) goto LAB_10008026;
    if (*(int *)(in_ECX + 0x1d8) != 0) {
      FUN_10021a00(0,0,0xb,1,0,0,0xb,1,*(int *)(in_ECX + 0x1d8),0xff,0);
      FUN_10021a00(0,1,0xb,0x87,0,0x10,0xb,0x87,*(undefined4 *)(in_ECX + 0x1d8),0xff,0);
      FUN_10021a00(0,0x87,0xb,0xf,0,1,0xb,0xf,*(undefined4 *)(in_ECX + 0x1d8),0xff,0);
    }
    iVar4 = *(int *)(in_ECX + 0x20c);
    if ((iVar4 < *(int *)(in_ECX + 0x1cc)) && (*(int *)(in_ECX + 0x1dc) != 0)) {
      iVar3 = *(int *)(in_ECX + 500);
      iVar1 = ((*(int *)(in_ECX + 0x1cc) - iVar4) + -1) * iVar3;
      FUN_10021a00(1,iVar3 * *(int *)(in_ECX + 0x20c) + 1,9,iVar1,0,(iVar4 + 1) * iVar3,9,iVar1,
                   *(int *)(in_ECX + 0x1dc),0xff,0);
      iVar4 = *(int *)(in_ECX + 500);
      FUN_10021a00(1,(*(int *)(in_ECX + 0x1cc) + -1) * iVar4 + 1,9,iVar4,0,0,9,iVar4,
                   *(undefined4 *)(in_ECX + 0x1dc),0xff,0);
    }
    iVar4 = *(int *)(in_ECX + 0x1e4);
    if (iVar4 != 0) {
      uVar12 = 0;
      uVar10 = 0xff;
      uVar9 = 0x97;
      uVar8 = 0xc;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x97;
      uVar2 = FUN_101c19e0(0x97,0,0,0xc,0x97,iVar4,0xff,0);
      FUN_10021a00(0xb,0,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,iVar4,uVar10,uVar12);
    }
    iVar4 = *(int *)(in_ECX + 0x1ec);
    if (iVar4 == 0) goto LAB_10008026;
    uVar5 = 0x97;
    uVar2 = 0x97;
  }
  uVar13 = 0;
  uVar11 = 0xff;
  uVar12 = 4;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 4;
  uVar7 = 0;
  uVar6 = FUN_101c19e0(0,4,uVar2,0,0,4,uVar5,iVar4,0xff,0);
  FUN_10021a00(uVar6,uVar7,uVar8,uVar2,uVar9,uVar10,uVar12,uVar5,iVar4,uVar11,uVar13);
LAB_10008026:
  iVar4 = *(int *)(in_ECX + 0x208);
  local_18 = 0;
  do {
    if ((*(int *)(in_ECX + 0x1cc) + *(int *)(in_ECX + 0x208) <= iVar4) ||
       (*(int *)(in_ECX + 0x20c) < iVar4)) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      ExceptionList = local_10;
      return 1;
    }
    iVar3 = *(int *)(in_ECX + 0x208) + iVar4;
    local_1c = iVar4;
    if (iVar4 == *(int *)(in_ECX + 0x204)) {
      FUN_10020bb0(local_2c,iVar3 * 0x804 + *(int *)(in_ECX + 0x1f8),0,0,0,0,0,0);
      FUN_10021a00(0xc,(*(int *)(in_ECX + 0x204) % *(int *)(in_ECX + 0x1cc)) *
                       *(int *)(in_ECX + 500),local_2c[0] + 3,*(undefined4 *)(in_ECX + 500),0,0,
                   local_2c[0],*(undefined4 *)(in_ECX + 500),*(undefined4 *)(in_ECX + 0x1f0),0xff,0)
      ;
      iVar3 = *(int *)(in_ECX + 0x208) + iVar4;
      if (iVar3 < *(int *)(in_ECX + 0x1fc)) {
        iVar1 = iVar3 * 0x804 + *(int *)(in_ECX + 0x1f8);
        uVar2 = *(undefined4 *)(in_ECX + 0x21c);
        iVar3 = *(int *)(in_ECX + 500) * local_18;
LAB_1000816a:
        FUN_100217a0(0xe,iVar3 + 2,uVar2,iVar1,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
      }
    }
    else if (iVar3 < *(int *)(in_ECX + 0x1fc)) {
      iVar1 = iVar3 * 0x804 + *(int *)(in_ECX + 0x1f8);
      uVar2 = 0xffdcdcdc;
      iVar3 = *(int *)(in_ECX + 500) * local_18;
      goto LAB_1000816a;
    }
    iVar4 = iVar4 + 1;
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 100081af Catch@100081af

void Catch_100081af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100081c3 Catch@100081c3

void Catch_100081c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCandidateBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100081e0 FUN_100081e0

undefined4 FUN_100081e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  
  iVar1 = in_ECX[0x84];
  fVar2 = (float)in_ECX[0x7d];
  iVar4 = in_ECX[0x20];
  iVar5 = in_ECX[0x21];
  iVar7 = 0;
  if (in_ECX[0x7d] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar8 = in_ECX[0x82];
  if (iVar8 < in_ECX[0x73] + iVar8) {
    while (iVar8 < in_ECX[0x83]) {
      fVar3 = (float)(in_ECX[0x84] * 2);
      if (in_ECX[0x84] * 2 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      iVar6 = (**(code **)(*in_ECX + 0x104))
                        ((short)param_2 - (short)iVar4,(short)((uint)param_2 >> 0x10) - (short)iVar5
                         ,iVar1,in_ECX[0x7d] * iVar7 + in_ECX[0x85],(float)in_ECX[0x22] - fVar3,
                         fVar2);
      if (iVar6 != 0) {
        in_ECX[0x81] = iVar8;
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 1;
      if (in_ECX[0x73] + in_ECX[0x82] <= iVar8) {
        return 1;
      }
    }
  }
  return 1;
}


// ==== 10008310 FUN_10008310

undefined4 FUN_10008310(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FString *this;
  ushort *puVar4;
  int in_ECX;
  uint uVar5;
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
  uint uStack_40;
  FString local_30 [20];
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d7cb9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  uVar5 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  iVar3 = *(int *)(in_ECX + 0x1cc);
  if (iVar3 != 0) {
    uVar15 = 0xff;
    uVar13 = 1;
    uVar1 = FUN_101c19e0(iVar3,1,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_100218f0(0,0,uVar2,uVar1,iVar3,uVar13,uVar15);
  }
  local_1c = 0;
  local_18 = *(int *)(in_ECX + 0x1dc);
  while (iVar3 = FString::Len((FString *)(in_ECX + 0x1d0)), local_18 < iVar3) {
    if ((local_18 == *(int *)(in_ECX + 0x1e0)) && (*(int *)(in_ECX + 0x1e4) != 0)) {
      FUN_100217a0(uVar5 + 1,3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
    this = (FString *)FString::Mid((FString *)(in_ECX + 0x1d0),(int)local_30,local_18);
    local_8._0_1_ = 1;
    uVar14 = 0xffffffff;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar4 = FString::operator*(this);
    iVar3 = FUN_100217a0(uVar5 + 3,3,0xffdcdcdc,puVar4,uVar1,uVar2,uVar13,uVar15,uVar6,uVar7,uVar8,
                         uVar9,uVar10,uVar11,uVar12,uVar14);
    uVar5 = uVar5 + iVar3;
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = uVar5;
    FString::~FString(local_30);
    if (0x61 < uVar5) break;
    local_18 = local_18 + 1;
  }
  if ((local_18 == *(int *)(in_ECX + 0x1e0)) && (*(int *)(in_ECX + 0x1e4) != 0)) {
    FUN_100217a0(uVar5 + 1,3,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10008507 Catch@10008507

void Catch_10008507(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1000851b Catch@1000851b

void Catch_1000851b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCompositeBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10008540 FUN_10008540

void FUN_10008540(void)

{
  FString *this;
  uint uVar1;
  int iVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  FString *pFVar5;
  ushort *puVar6;
  int in_ECX;
  int iVar7;
  int *unaff_EBX;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_28;
  int local_24;
  FString local_20 [4];
  FString local_1c [4];
  undefined1 local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_101d7ce9;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  iVar7 = *(int *)(in_ECX + 0x1e0);
  this = (FString *)(in_ECX + 0x1d0);
  iVar2 = FString::Len(this);
  if (iVar7 < iVar2) {
    *(int *)(in_ECX + 0x1e0) = iVar7 + 1;
  }
  FName::FName((FName *)&local_24,0);
  pUVar3 = UObject::GetTransientPackage();
  pUVar4 = UObject::StaticAllocateObject
                     (&DAT_10360fd8,pUVar3,local_24,0,0,*(undefined4 *)GError_exref,0,0,uVar1);
  if (pUVar4 == (UObject *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_10023090();
  }
  iVar7 = *(int *)(in_ECX + 0x1e0) - *(int *)(in_ECX + 0x1dc);
  pFVar5 = (FString *)FString::Mid(this,(int)local_18,*(int *)(in_ECX + 0x1dc));
  local_8 = (undefined1 *)0x0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  puVar6 = FString::operator*(pFVar5);
  FUN_10020bb0(&local_24,puVar6,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,iVar7);
  local_8 = (undefined1 *)0xffffffff;
  FString::~FString(local_1c);
  while (0x61 < local_24) {
    *(int *)(in_ECX + 0x1dc) = *(int *)(in_ECX + 0x1dc) + 1;
    iVar7 = *(int *)(in_ECX + 0x1e0) - *(int *)(in_ECX + 0x1dc);
    pFVar5 = (FString *)FString::Mid(this,(int)local_1c,*(int *)(in_ECX + 0x1dc));
    local_c = (void *)0x0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    puVar6 = FString::operator*(pFVar5);
    FUN_10020bb0(&local_28,puVar6,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,iVar7);
    local_c = (void *)0xffffffff;
    FString::~FString(local_20);
    local_24 = local_28;
  }
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 0xc))(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 100086c0 FUN_100086c0

void FUN_100086c0(ushort *param_1)

{
  FString *this;
  FString *pFVar1;
  UPackage *pUVar2;
  UObject *pUVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  int unaff_EBX;
  int *unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_24;
  FString local_20 [4];
  FString local_1c [4];
  FString local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_101d7d22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != (ushort *)0x0) {
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
    pFVar1 = (FString *)FString::FString(local_18,param_1);
    local_4 = 0;
    this = (FString *)(in_ECX + 0x1d0);
    FString::operator=(this,pFVar1);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
    FName::FName((FName *)&local_24,0);
    pUVar2 = UObject::GetTransientPackage();
    pUVar3 = UObject::StaticAllocateObject
                       (&DAT_10360fd8,pUVar2,local_24,0,0,*(undefined4 *)GError_exref,0,0);
    if (pUVar3 != (UObject *)0x0) {
      FUN_10023090();
    }
    iVar5 = *(int *)(in_ECX + 0x1e0) - *(int *)(in_ECX + 0x1dc);
    pFVar1 = (FString *)FString::Mid(this,(int)local_18,*(int *)(in_ECX + 0x1dc));
    local_8 = (undefined1 *)0x1;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    puVar4 = FString::operator*(pFVar1);
    FUN_10020bb0(&local_24,puVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,iVar5);
    local_8 = (undefined1 *)0xffffffff;
    FString::~FString(local_1c);
    while (0x61 < local_24) {
      *(int *)(in_ECX + 0x1dc) = *(int *)(in_ECX + 0x1dc) + 1;
      iVar5 = *(int *)(in_ECX + 0x1e0) - *(int *)(in_ECX + 0x1dc);
      pFVar1 = (FString *)FString::Mid(this,(int)local_1c,*(int *)(in_ECX + 0x1dc));
      local_c = (void *)0x1;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      puVar4 = FString::operator*(pFVar1);
      FUN_10020bb0(&stack0xffffffd8,puVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,iVar5);
      local_c = (void *)0xffffffff;
      FString::~FString(local_20);
      local_24 = unaff_EBX;
    }
    if (unaff_retaddr != (int *)0x0) {
      (**(code **)(*unaff_retaddr + 0xc))(1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10008860 FUN_10008860

void FUN_10008860(short *param_1)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  short local_808 [1024];
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_808;
  local_808[0] = 0;
  local_8 = 0;
  if (param_1 != (short *)0x0) {
    iVar2 = (int)local_808 - (int)param_1;
    do {
      sVar1 = *param_1;
      *(short *)(iVar2 + (int)param_1) = sVar1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
  }
  iVar2 = FArray::Add((FArray *)(in_ECX + 0x1f8),1,0x804);
  psVar4 = local_808;
  puVar5 = (undefined4 *)(iVar2 * 0x804 + *(int *)(in_ECX + 0x1f8));
  for (iVar3 = 0x201; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)psVar4;
    psVar4 = psVar4 + 2;
    puVar5 = puVar5 + 1;
  }
  *(int *)(in_ECX + 0x20c) = *(int *)(in_ECX + 0x20c) + 1;
  __security_check_cookie(local_4 ^ (uint)local_808);
  return;
}


// ==== 10008900 FUN_10008900

void FUN_10008900(void)

{
  int in_ECX;
  
  FArray::Empty((FArray *)(in_ECX + 0x1f8),0x804,0);
  *(undefined4 *)(in_ECX + 0x20c) = 0;
  return;
}


// ==== 10008930 FUN_10008930

undefined4 FUN_10008930(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x1fc); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1f8),0x804,0);
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 100089a4 Catch@100089a4

void Catch_100089a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100089b8 Catch@100089b8

void Catch_100089b8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCandidateBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100089e0 FUN_100089e0

void FUN_100089e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7d69;
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
  FArray::Remove(in_ECX,0,iVar1,0x804);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10008a80 FUN_10008a80

void FUN_10008a80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d7daf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCCandidateBox::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x7e));
  in_ECX[0x81] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x86] = 0;
  in_ECX[0x88] = 0;
  in_ECX[0x73] = param_1;
  in_ECX[0x7d] = param_2;
  in_ECX[0x87] = 0xff000000;
  in_ECX[0x89] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10008b30 FUN_10008b30

void FUN_10008b30(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101d7de6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCCandidateBox::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_100089e0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 10008ba0 FUN_10008ba0

void FUN_10008ba0(byte param_1)

{
  void *in_ECX;
  
  FUN_10008b30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x228);
  }
  return;
}


// ==== 10008bd0 FUN_10008bd0

void FUN_10008bd0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d7e27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCCompositeBox::vftable;
  in_ECX[0x73] = 0;
  FString::FString((FString *)(in_ECX + 0x74));
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x77] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10008c50 FUN_10008c50

void FUN_10008c50(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101d7e67;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCCompositeBox::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x1d0));
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10008cc0 FUN_10008cc0

void FUN_10008cc0(byte param_1)

{
  void *in_ECX;
  
  FUN_10008c50();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e8);
  }
  return;
}


// ==== 10008cf0 FUN_10008cf0

void FUN_10008cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d7ea7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCCompositeBox::vftable;
  FString::FString((FString *)(in_ECX + 0x74));
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0x79] = param_5;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  FUN_1005e8f0(param_3,param_4,param_1,param_2,0,0,3);
  ExceptionList = local_c;
  return;
}


// ==== 10008dd0 FUN_10008dd0

undefined4 FUN_10008dd0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10061b40();
  if (*(int *)(in_ECX + 0x2d8) == 0) {
    uVar1 = FUN_1003f630(L"L2UI.Control.CheckBox_Checked",1);
    *(undefined4 *)(in_ECX + 0x2d8) = uVar1;
  }
  if (*(int *)(in_ECX + 0x2dc) == 0) {
    uVar1 = FUN_1003f630(L"L2UI.Control.CheckBox",1);
    *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
  }
  if (*(int *)(in_ECX + 0x2e0) == 0) {
    uVar1 = FUN_1003f630(L"L2UI.Control.CheckBox_Unable",1);
    *(undefined4 *)(in_ECX + 0x2e0) = uVar1;
  }
  if (*(int *)(in_ECX + 0x2e4) == 0) {
    uVar1 = FUN_1003f630(L"L2UI.Control.CheckBox_Checked_unable",1);
    *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
  }
  return 1;
}


// ==== 10008e60 FUN_10008e60

void FUN_10008e60(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_1 != (ushort *)0x0) {
    iVar1 = appStrlen(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_1003f630(param_1,1);
      *(undefined4 *)(in_ECX + 0x2d8) = uVar2;
    }
  }
  if (param_2 != (ushort *)0x0) {
    iVar1 = appStrlen(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_1003f630(param_2,1);
      *(undefined4 *)(in_ECX + 0x2dc) = uVar2;
    }
  }
  if (param_3 != (ushort *)0x0) {
    iVar1 = appStrlen(param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_1003f630(param_3,1);
      *(undefined4 *)(in_ECX + 0x2e0) = uVar2;
    }
  }
  if (param_4 != (ushort *)0x0) {
    iVar1 = appStrlen(param_4);
    if (iVar1 != 0) {
      uVar2 = FUN_1003f630(param_4,1);
      *(undefined4 *)(in_ECX + 0x2e4) = uVar2;
    }
  }
  return;
}


// ==== 10008f00 FUN_10008f00

undefined4 FUN_10008f00(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7ed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 10008f4e Catch@10008f4e

void Catch_10008f4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10008f62 Catch@10008f62

void Catch_10008f62(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCheckBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10008f80 UCheckBoxHandle::StaticClass

/* public: static class UClass * __cdecl UCheckBoxHandle::StaticClass(void) */

UClass * __cdecl UCheckBoxHandle::StaticClass(void)

{
                    /* 0x8f80  927  ?StaticClass@UCheckBoxHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10008f90 FUN_10008f90

void FUN_10008f90(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d7ef9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10008fe0 FUN_10008fe0

void FUN_10008fe0(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100586b0(param_1);
  *(uint *)(in_ECX + 0x300) = (uint)(param_1 == 0);
  ExceptionList = local_10;
  return;
}


// ==== 10009045 Catch@10009045

void Catch_10009045(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009059 Catch@10009059

void Catch_10009059(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCheckBox::SetEnable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009080 FUN_10009080

undefined4 FUN_10009080(ushort *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  int iVar5;
  uint uStack_34;
  int local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d7f40;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  iVar5 = *(int *)(in_ECX + 0x2f4);
  if (iVar5 < 0) {
    puVar3 = FString::operator*((FString *)(in_ECX + 0x2e8));
  }
  else if (*(int *)(in_ECX + 0x2f8) == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + iVar5 * 0xc + 0x6a8dc));
  }
  else if (*(int *)(in_ECX + 0x2f8) == 1) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + iVar5 * 0x5c + 0x240ec));
  }
  else {
    puVar3 = param_1;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
  }
  if (*(int *)(in_ECX + 0x304) == 0) {
    uVar1 = *(undefined4 *)(in_ECX + 0x30c);
    uVar2 = *(undefined4 *)(in_ECX + 0x308);
    uStack_34 = 1;
    if (*(int *)(in_ECX + 0x300) == 0) {
      if (*(int *)(in_ECX + 0x2fc) == 0) {
        uVar4 = *(undefined4 *)(in_ECX + 0x2dc);
      }
      else {
        uVar4 = *(undefined4 *)(in_ECX + 0x2d8);
      }
      FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,uVar4,0xff);
      uVar1 = *(undefined4 *)(in_ECX + 0x310);
      uVar2 = 0xffdcdcdc;
    }
    else if (*(int *)(in_ECX + 0x2fc) == 0) {
      FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2e0),0xff);
      uVar1 = *(undefined4 *)(in_ECX + 0x310);
      uVar2 = 0xff808080;
    }
    else {
      FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2e4),0xff);
      uVar1 = *(undefined4 *)(in_ECX + 0x310);
      uVar2 = 0xff808080;
    }
    iVar5 = *(int *)(in_ECX + 0x308) + 4;
  }
  else {
    uStack_34 = 0;
    FUN_10020bb0(local_24,puVar3,0,0,0,0,0);
    uVar1 = *(undefined4 *)(in_ECX + 0x30c);
    uVar2 = *(undefined4 *)(in_ECX + 0x308);
    uStack_34 = 1;
    if (*(int *)(in_ECX + 0x300) == 0) {
      if (*(int *)(in_ECX + 0x2fc) == 0) {
        FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2dc),
                     0xff);
        uVar1 = *(undefined4 *)(in_ECX + 0x310);
        uVar2 = 0xffdcdcdc;
        iVar5 = 0;
      }
      else {
        FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2d8),
                     0xff);
        uVar1 = *(undefined4 *)(in_ECX + 0x310);
        uVar2 = 0xffdcdcdc;
        iVar5 = 0;
      }
    }
    else if (*(int *)(in_ECX + 0x2fc) == 0) {
      FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2e0),
                   0xff);
      uVar1 = *(undefined4 *)(in_ECX + 0x310);
      uVar2 = 0xff808080;
      iVar5 = 0;
    }
    else {
      FUN_10021a00(local_24[0] + 4,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2e4),
                   0xff);
      uVar1 = *(undefined4 *)(in_ECX + 0x310);
      uVar2 = 0xff808080;
      iVar5 = 0;
    }
  }
  uStack_34 = 0xffffffff;
  FUN_100217a0(iVar5,0,uVar2,puVar3,uVar1,0,0,0,0,0,0,0,0,0,0);
  uStack_34 = 0x10009425;
  FUN_100212e0();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1000944e Catch@1000944e

void Catch_1000944e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009462 Catch@10009462

void Catch_10009462(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCheckBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009480 FUN_10009480

undefined4 FUN_10009480(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
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
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  local_10 = 0;
  FUN_1005d0a0(&local_10);
  if (*(int *)(in_ECX + 0xd4) != 0) {
    FUN_100549b0(param_1,*(int *)(in_ECX + 0xd4) + 0x24,0,0,*(undefined4 *)(in_ECX + 0x80),
                 *(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
                 *(undefined4 *)(in_ECX + 0x8c));
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 10009560 FUN_10009560

UObject * FUN_10009560(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UCheckBoxHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10009590 UUIScript::eventOnClickCheckBox

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnClickCheckBox(class FString const &) */

void __thiscall UUIScript::eventOnClickCheckBox(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9590  1015  ?eventOnClickCheckBox@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d7f7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x100095d8;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnClickCheckBox,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10009620 FUN_10009620

undefined4 FUN_10009620(void)

{
  int iVar1;
  uint uVar2;
  UUIScript *this;
  FString *pFVar3;
  int *in_ECX;
  FString aFStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101d7fa9;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  if (in_ECX[0xc0] == 0) {
    iVar1 = in_ECX[0xbf];
    in_ECX[0xbf] = (uint)(iVar1 == 0);
    FUN_1000cb20((uint)(iVar1 == 0));
    this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))(uVar2);
    if (this != (UUIScript *)0x0) {
      pFVar3 = (FString *)FUN_10057590(aFStack_18);
      uStack_4 = 0;
      UUIScript::eventOnClickCheckBox(this,pFVar3);
      uStack_4 = 0xffffffff;
      FString::~FString(aFStack_18);
    }
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 100096c0 FUN_100096c0

void FUN_100096c0(void)

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
  
  puStack_c = &LAB_101d7fd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UCheckBoxHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10009560(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1000974a;
    appFailAssert("m_pScriptHandle",".\\Src\\NCheckBox.cpp",0xf2);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1000977e Catch@1000977e

void Catch_1000977e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009792 Catch@10009792

void Catch_10009792(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCheckBox::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100097b0 FUN_100097b0

void FUN_100097b0(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8007;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCCheckBox::vftable;
  FString::FString((FString *)(in_ECX + 0xba));
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xbd] = 0xffffffff;
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    FString::operator=((FString *)(in_ECX + 0xba),param_1);
  }
  in_ECX[0xc2] = 0xc;
  in_ECX[0xc3] = 0xc;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xbf] = param_2;
  in_ECX[0xc0] = 0;
  in_ECX[0xc1] = param_3;
  in_ECX[0xc4] = param_4;
  ExceptionList = local_c;
  return;
}


// ==== 10009890 FUN_10009890

void FUN_10009890(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101d8047;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCCheckBox::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x2e8));
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10009900 FUN_10009900

void FUN_10009900(byte param_1)

{
  void *in_ECX;
  
  FUN_10009890();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x314);
  }
  return;
}


// ==== 10009930 FUN_10009930

void FUN_10009930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8087;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCCheckBox::vftable;
  FString::FString((FString *)(in_ECX + 0xba));
  in_ECX[0xbd] = param_1;
  in_ECX[0xc2] = 0xc;
  in_ECX[0xc3] = 0xc;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xbf] = param_2;
  in_ECX[0xc0] = 0;
  in_ECX[0xc1] = param_3;
  in_ECX[0xc4] = param_4;
  in_ECX[0xbe] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10009a20 FUN_10009a20

bool FUN_10009a20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 == 1) {
    iVar1 = (**(code **)(*in_ECX + 0x98))();
    return iVar1 != 0;
  }
  if (param_1 == 2) {
    iVar1 = (**(code **)(*in_ECX + 0x9c))();
    return iVar1 != 0;
  }
  if (param_1 == 0x113) {
    iVar1 = (**(code **)(*in_ECX + 0x94))(param_2);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10009a90 FUN_10009a90

bool FUN_10009a90(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x100b) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
  }
  else if (param_1 == 0x50e) {
    iVar1 = (**(code **)(*in_ECX + 0xa0))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 10009b10 FUN_10009b10

ushort * FUN_10009b10(void)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d80b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (in_ECX[1] < 0) {
    if (in_ECX[2] < 0) {
      if (*in_ECX != 0) {
        ExceptionList = &local_10;
        puVar2 = (ushort *)FUN_1004f5c0(0);
        ExceptionList = local_10;
        return puVar2;
      }
      return (ushort *)0x0;
    }
    iVar1 = in_ECX[2] * 0x5c + 0x240ec;
  }
  else {
    iVar1 = in_ECX[1] * 0xc + 0x6a8dc;
  }
  ExceptionList = &local_10;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + iVar1));
  ExceptionList = local_10;
  return puVar2;
}


// ==== 10009bbd Catch@10009bbd

void Catch_10009bbd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009bd1 Catch@10009bd1

void Catch_10009bd1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboElem::GetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009bf0 FUN_10009bf0

undefined4 FUN_10009bf0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 10009c37 Catch@10009c37

void Catch_10009c37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009c4b Catch@10009c4b

void Catch_10009c4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboElem::GetReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009c70 FUN_10009c70

void FUN_10009c70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}


// ==== 10009cc3 Catch@10009cc3

void Catch_10009cc3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009cd7 Catch@10009cd7

void Catch_10009cd7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboElem::SetReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009d00 FUN_10009d00

undefined4 FUN_10009d00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2e4);
}


// ==== 10009d4a Catch@10009d4a

void Catch_10009d4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009d5e Catch@10009d5e

void Catch_10009d5e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::GetNumOfItems");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009d80 FUN_10009d80

undefined4 FUN_10009d80(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = (short)param_2 - *(short *)(in_ECX + 0x80);
  uVar2 = (uint)(ushort)((short)((uint)param_2 >> 0x10) - *(short *)(in_ECX + 0x84));
  if ((((uVar1 == 0) || (*(float *)(in_ECX + 0x88) <= (float)uVar1)) ||
      ((int)uVar2 <= *(int *)(in_ECX + 0x318))) || (*(float *)(in_ECX + 0x8c) <= (float)uVar2)) {
    *(undefined4 *)(in_ECX + 0x328) = 0xffffffff;
    return 1;
  }
  if (*(int *)(in_ECX + 800) == 0) {
    *(undefined4 *)(in_ECX + 0x328) = 0;
  }
  else {
    *(int *)(in_ECX + 0x328) = (int)(uVar2 - *(int *)(in_ECX + 0x318)) / *(int *)(in_ECX + 0x32c);
  }
  if (*(int *)(in_ECX + 0x328) < *(int *)(in_ECX + 0x2e4)) {
    return 1;
  }
  *(int *)(in_ECX + 0x328) = *(int *)(in_ECX + 0x2e4) + -1;
  return 1;
}


// ==== 10009e72 Catch@10009e72

void Catch_10009e72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009e86 Catch@10009e86

void Catch_10009e86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009eb0 FUN_10009eb0

void FUN_10009eb0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[0xc4] != 0) {
    (**(code **)(*in_ECX + 0x128))((float)in_ECX[0xc5],(float)in_ECX[0xc6]);
    in_ECX[0xc4] = 0;
  }
  FUN_10058c60();
  ExceptionList = local_10;
  return;
}


// ==== 10009f39 Catch@10009f39

void Catch_10009f39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10009f4d Catch@10009f4d

void Catch_10009f4d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::ReleaseFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10009f70 FUN_10009f70

void FUN_10009f70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x324) = param_1;
  return;
}


// ==== 10009f80 FUN_10009f80

undefined4 FUN_10009f80(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *in_ECX;
  uVar2 = (**(code **)(iVar1 + 0x84))();
  (**(code **)(iVar1 + 0x80))(uVar2 | 0x8000);
  piVar3 = (int *)FUN_10058f70();
  do {
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *piVar3;
    uVar2 = (**(code **)(iVar1 + 0x84))();
    (**(code **)(iVar1 + 0x80))(uVar2 | 0x8000);
    piVar3 = (int *)FUN_10058f70();
  } while (piVar3 != *(int **)(DAT_103663bc + 0x50ac));
  ExceptionList = local_10;
  return 1;
}


// ==== 1000a024 Catch@1000a024

void Catch_1000a024(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000a038 Catch@1000a038

void Catch_1000a038(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::OnLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000a060 FUN_1000a060

void FUN_1000a060(void)

{
  int *in_ECX;
  
  if (in_ECX[0xc4] != 0) {
    (**(code **)(*in_ECX + 0x128))
              ((float)in_ECX[0xc5],(float)(in_ECX[0xcb] * in_ECX[0xb9] + in_ECX[0xc6]));
                    /* WARNING: Could not recover jumptable at 0x1000a0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x78))();
    return;
  }
  (**(code **)(*in_ECX + 0x128))((float)in_ECX[0xc5],(float)in_ECX[0xc6]);
  return;
}


// ==== 1000a0d0 UComboBoxHandle::StaticClass

/* public: static class UClass * __cdecl UComboBoxHandle::StaticClass(void) */

UClass * __cdecl UComboBoxHandle::StaticClass(void)

{
                    /* 0xa0d0  928  ?StaticClass@UComboBoxHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1000a0e0 FUN_1000a0e0

void FUN_1000a0e0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8199;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1000a130 FUN_1000a130

void FUN_1000a130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10357870,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1000a160 FUN_1000a160

void FUN_1000a160(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d81cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  if (((param_1 < 0) && (param_2 < 0)) && (param_3 != 0)) {
    iVar1 = FUN_10004ed0(0x14);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar1 == 0) {
      *in_ECX = 0;
    }
    else {
      uVar2 = FUN_1004f780(param_3);
      *in_ECX = uVar2;
    }
  }
  else {
    *in_ECX = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000a200 Catch@1000a200

void Catch_1000a200(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000a214 Catch@1000a214

void Catch_1000a214(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"ComboElem::ComboElem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000a240 FUN_1000a240

void FUN_1000a240(byte param_1)

{
  FUN_1004f7b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1000a270 FUN_1000a270

undefined4 FUN_1000a270(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  UPackage *pUVar4;
  UObject *pUVar5;
  undefined4 uVar6;
  int *in_ECX;
  bool bVar7;
  undefined4 local_3c;
  FString aFStack_38 [12];
  FString aFStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101d8224;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3c = 0;
  FUN_10061b40(DAT_103554c4 ^ (uint)&stack0xffffffb4);
  iVar3 = *in_ECX;
  uVar1 = (**(code **)(iVar3 + 0x84))();
  (**(code **)(iVar3 + 0x80))(uVar1 | 0x8000);
  piVar2 = (int *)FUN_10058f70();
  do {
    if (piVar2 == (int *)0x0) break;
    iVar3 = *piVar2;
    uVar1 = (**(code **)(iVar3 + 0x84))();
    (**(code **)(iVar3 + 0x80))(uVar1 | 0x8000);
    piVar2 = (int *)FUN_10058f70();
  } while (piVar2 != *(int **)(DAT_103663bc + 0x50ac));
  iVar3 = FUN_1003f630(L"L2UI_CH3.Etc.textbox1",1);
  in_ECX[0xbb] = iVar3;
  iVar3 = FUN_1003f630(L"L2UI_CH3.Etc.textbox2",1);
  in_ECX[0xbc] = iVar3;
  iVar3 = FUN_1003f630(L"L2UI_CH3.Etc.textbox3",1);
  in_ECX[0xbd] = iVar3;
  iVar3 = FUN_1003f630(L"L2UI_CH3.Etc.textbox1_disable",1);
  in_ECX[0xbe] = iVar3;
  iVar3 = FUN_1003f630(L"L2UI_CH3.Etc.textbox2_disable",1);
  in_ECX[0xbf] = iVar3;
  iVar3 = FUN_1003f630(L"L2UI_CH3.Etc.textbox3_disable",1);
  in_ECX[0xc0] = iVar3;
  iVar3 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect",1);
  in_ECX[0xc1] = iVar3;
  iVar3 = FUN_1003f630(L"L2UI_CH3.ListCtrl.TextSelect2",1);
  in_ECX[0xc2] = iVar3;
  FUN_10020bb0(in_ECX + 199,&DAT_10231ac0,0,0,0,0,0,0);
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  FUN_1005d0a0(&uStack_20);
  iVar3 = FUN_101c19e0();
  in_ECX[0xc5] = iVar3;
  iVar3 = FUN_101c19e0();
  in_ECX[0xc6] = iVar3;
  FName::FName((FName *)&local_3c,0);
  pUVar4 = UObject::GetTransientPackage();
  pUVar5 = UObject::StaticAllocateObject
                     (&DAT_10357870,pUVar4,local_3c,0,0,*(undefined4 *)GError_exref,0,0);
  bVar7 = pUVar5 == (UObject *)0x0;
  if (bVar7) {
    iVar3 = 0;
  }
  else {
    FString::FString(aFStack_2c,(ushort *)L"L2UI_CH3.Button.downbutton_down");
    puStack_8 = (undefined1 *)0x0;
    FString::FString(aFStack_38,(ushort *)L"L2UI_CH3.Button.downbutton");
    puStack_8 = (undefined1 *)0x1;
    iVar3 = FUN_10006980(aFStack_38,aFStack_2c,0);
  }
  in_ECX[0xc3] = iVar3;
  puStack_8 = (undefined1 *)0x0;
  if (!bVar7) {
    FString::~FString(aFStack_38);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (!bVar7) {
    FString::~FString(aFStack_2c);
  }
  *(undefined4 *)(in_ECX[0xc3] + 0x1cc) = 0x100b;
  (**(code **)(*(int *)in_ECX[0xc3] + 0x128))(0x41700000,0x41700000);
  uVar6 = FUN_10060d40(in_ECX[0xc3],2);
  FUN_1005c1e0(uVar6);
  if (in_ECX[0xc6] != 0) {
    (**(code **)(*(int *)in_ECX[0xc3] + 0xd0))(3,0xffffffff,in_ECX[0xc6] / 2 + -7);
  }
  ExceptionList = pvStack_18;
  return 1;
}


// ==== 1000a550 FUN_1000a550

void FUN_1000a550(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ee10(param_1,param_2);
  if (*(int *)(in_ECX + 0x314) == 0) {
    uVar1 = FUN_101c19e0();
    *(undefined4 *)(in_ECX + 0x314) = uVar1;
  }
  if (*(int *)(in_ECX + 0x318) == 0) {
    iVar2 = FUN_101c19e0();
    *(int *)(in_ECX + 0x318) = iVar2;
    (**(code **)(**(int **)(in_ECX + 0x30c) + 0xd0))(3,0xffffffff,iVar2 / 2 + -7);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000a60c Catch@1000a60c

void Catch_1000a60c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000a620 Catch@1000a620

void Catch_1000a620(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::SetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000a640 FUN_1000a640

undefined4 FUN_1000a640(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
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
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(in_ECX[0x20],in_ECX[0x21],uVar2,uVar1);
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  iVar3 = in_ECX[0xcb] / 2 - in_ECX[200] / 2;
  iVar4 = (**(code **)(*in_ECX + 0x6c))();
  uVar2 = 1;
  uVar1 = 0xff;
  iVar6 = in_ECX[0xcb];
  if (iVar4 == 0) {
    iVar4 = in_ECX[0xbe];
    uVar17 = 0x11;
    uVar16 = 8;
    uVar14 = 0;
    uVar11 = 0;
    uVar9 = 8;
    uVar7 = FUN_101c19e0(8,iVar6,0,0,8,0x11,iVar4,0xff,1);
    FUN_10021a00(0,uVar7,uVar9,iVar6,uVar11,uVar14,uVar16,uVar17,iVar4,uVar1,uVar2);
    iVar6 = in_ECX[0xcb];
    uVar17 = 1;
    uVar16 = 0xff;
    iVar4 = in_ECX[0xbf];
    uVar14 = 0x11;
    uVar11 = 8;
    uVar9 = 0;
    uVar7 = 0;
    uVar1 = FUN_101c19e0(iVar6,0,0,8,0x11,iVar4,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(8,uVar2,uVar1,iVar6,uVar7,uVar9,uVar11,uVar14,iVar4,uVar16,uVar17);
    iVar6 = in_ECX[0xcb];
    uVar8 = 1;
    uVar17 = 0xff;
    iVar4 = in_ECX[0xc0];
    uVar16 = 0x11;
    uVar14 = 8;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 8;
    uVar1 = FUN_101c19e0(8,iVar6,0,0,8,0x11,iVar4,0xff,1);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_10021a00(uVar2,uVar1,uVar7,iVar6,uVar9,uVar11,uVar14,uVar16,iVar4,uVar17,uVar8);
    if ((in_ECX[0xb9] <= in_ECX[0xc9]) || (in_ECX[0xc9] < 0)) goto LAB_1000a98c;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xff7e7e7e;
    iVar6 = (in_ECX[0xc6] / 2 - in_ECX[0xcb] / 2) + in_ECX[0xb7] + iVar3;
  }
  else {
    FUN_10021a00(0,in_ECX[0xc6] / 2 - iVar6 / 2,8,iVar6,0,0,8,0x11,in_ECX[0xbb],0xff,1);
    iVar6 = in_ECX[0xcb];
    uVar16 = 1;
    uVar14 = 0xff;
    iVar4 = in_ECX[0xbc];
    uVar11 = 0x11;
    uVar9 = 8;
    uVar7 = 0;
    uVar2 = 0;
    iVar5 = iVar6;
    uVar1 = FUN_101c19e0(iVar6,0,0,8,0x11,iVar4,0xff,1);
    FUN_10021a00(8,in_ECX[0xc6] / 2 - iVar6 / 2,uVar1,iVar5,uVar2,uVar7,uVar9,uVar11,iVar4,uVar14,
                 uVar16);
    iVar6 = in_ECX[0xcb];
    uVar17 = 1;
    uVar16 = 0xff;
    iVar4 = in_ECX[0xbd];
    uVar14 = 0x11;
    uVar11 = 8;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 8;
    iVar5 = in_ECX[0xc6] / 2 - iVar6 / 2;
    uVar1 = FUN_101c19e0(iVar5,8,iVar6,0,0,8,0x11,iVar4,0xff,1);
    FUN_10021a00(uVar1,iVar5,uVar2,iVar6,uVar7,uVar9,uVar11,uVar14,iVar4,uVar16,uVar17);
    if ((in_ECX[0xb9] <= in_ECX[0xc9]) || (in_ECX[0xc9] < 0)) goto LAB_1000a98c;
    uVar18 = 0xffffffff;
    uVar15 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    uVar2 = 0xffdcdcdc;
    iVar6 = in_ECX[0xc6] / 2 + (in_ECX[0xb7] - in_ECX[0xcb] / 2) + iVar3;
  }
  FUN_100217a0(in_ECX[0xb6],iVar6,uVar2,uVar1,uVar7,uVar9,uVar11,uVar14,uVar16,uVar17,uVar8,uVar10,
               uVar12,uVar13,uVar15,uVar18);
LAB_1000a98c:
  if (in_ECX[0xc4] != 0) {
    iVar6 = (**(code **)(*in_ECX + 0x74))();
    if (iVar6 != 0) {
      for (local_18 = 0; local_18 < in_ECX[0xb9]; local_18 = local_18 + 1) {
        FUN_10021a00(0,in_ECX[0xcb] * local_18 + in_ECX[0xc6],8,in_ECX[0xcb],0,0,8,0x11,in_ECX[0xbb]
                     ,0xff,1);
        iVar6 = in_ECX[0xcb];
        uVar16 = 1;
        uVar14 = 0xff;
        iVar4 = in_ECX[0xbc];
        uVar11 = 0x11;
        uVar9 = 8;
        uVar7 = 0;
        uVar2 = 0;
        iVar5 = iVar6;
        uVar1 = FUN_101c19e0(iVar6,0,0,8,0x11,iVar4,0xff,1);
        FUN_10021a00(8,iVar6 * local_18 + in_ECX[0xc6],uVar1,iVar5,uVar2,uVar7,uVar9,uVar11,iVar4,
                     uVar14,uVar16);
        iVar6 = in_ECX[0xcb];
        uVar17 = 1;
        uVar16 = 0xff;
        iVar4 = in_ECX[0xbd];
        uVar14 = 0x11;
        uVar11 = 8;
        uVar9 = 0;
        uVar7 = 0;
        uVar2 = 8;
        iVar5 = iVar6 * local_18 + in_ECX[0xc6];
        uVar1 = FUN_101c19e0(iVar5,8,iVar6,0,0,8,0x11,iVar4,0xff,1);
        FUN_10021a00(uVar1,iVar5,uVar2,iVar6,uVar7,uVar9,uVar11,uVar14,iVar4,uVar16,uVar17);
      }
      iVar6 = 0;
      while (iVar6 < in_ECX[0xb9]) {
        if (in_ECX[0xca] == iVar6) {
          uVar16 = 0xff;
          iVar4 = in_ECX[0xc1];
          uVar14 = 0xd;
          uVar11 = 0x10;
          uVar9 = 0;
          uVar7 = 0;
          uVar2 = 0x10;
          uVar1 = FUN_101c19e0(0x10,0,0,0x10,0xd,iVar4,0xff);
          FUN_10021970(1,in_ECX[0xcb] * iVar6 + in_ECX[0xc6],uVar1,uVar2,uVar7,uVar9,uVar11,uVar14,
                       iVar4,uVar16);
          uVar17 = 0xff;
          iVar4 = in_ECX[0xc2];
          uVar16 = 0xd;
          uVar14 = 0x20;
          uVar11 = 0;
          uVar9 = 0;
          uVar7 = 0x10;
          uVar2 = 0x20;
          iVar5 = in_ECX[0xcb] * iVar6 + in_ECX[0xc6];
          uVar1 = FUN_101c19e0(iVar5,0x20,0x10,0,0,0x20,0xd,iVar4,0xff);
          FUN_10021970(uVar1,iVar5,uVar2,uVar7,uVar9,uVar11,uVar14,uVar16,iVar4,uVar17);
          uVar15 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar8 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar14 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(in_ECX[0xb6],in_ECX[0xcb] * iVar6 + iVar3 + in_ECX[0xc6],0xffdcdcdc,uVar1,
                       uVar2,uVar7,uVar9,uVar11,uVar14,uVar16,uVar17,uVar8,uVar10,uVar12,uVar13,
                       uVar15);
          iVar6 = iVar6 + 1;
        }
        else {
          uVar15 = 0xffffffff;
          uVar13 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar8 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar14 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar7 = 0;
          uVar2 = 0;
          uVar1 = FUN_10009b10(0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
          FUN_100217a0(in_ECX[0xb6],in_ECX[0xcb] * iVar6 + in_ECX[0xc6] + iVar3,0xffdcdcdc,uVar1,
                       uVar2,uVar7,uVar9,uVar11,uVar14,uVar16,uVar17,uVar8,uVar10,uVar12,uVar13,
                       uVar15);
          iVar6 = iVar6 + 1;
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


// ==== 1000ac03 Catch@1000ac03

void Catch_1000ac03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1000ac17 Catch@1000ac17

void Catch_1000ac17(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000ac40 FUN_1000ac40

undefined4 FUN_1000ac40(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x2e4))) {
    uVar1 = FUN_10009b10();
    return uVar1;
  }
  return 0;
}


// ==== 1000ac70 FUN_1000ac70

undefined4 FUN_1000ac70(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x2e4))) {
    uVar1 = FUN_10009bf0();
    return uVar1;
  }
  return 0xffffffff;
}


// ==== 1000aca0 FUN_1000aca0

undefined4 FUN_1000aca0(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x6c))();
  if (iVar1 != 0) {
    if (in_ECX[0xc4] == 0) {
      in_ECX[0xc4] = 1;
    }
    FUN_1000a060();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1000ad10 Catch@1000ad10

void Catch_1000ad10(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000ad24 Catch@1000ad24

void Catch_1000ad24(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::OnExpandBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000ad50 FUN_1000ad50

void FUN_1000ad50(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  undefined4 *puVar2;
  
  iVar1 = FArray::Add(in_ECX,1,0x10);
  puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  puVar2[2] = param_1[2];
  puVar2[3] = param_1[3];
  return;
}


// ==== 1000ad90 FUN_1000ad90

UObject * FUN_1000ad90(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UComboBoxHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1000adc0 UUIScript::eventOnComboBoxItemSelected

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnComboBoxItemSelected(class FString const &,int) */

void __thiscall UUIScript::eventOnComboBoxItemSelected(UUIScript *this,FString *param_1,int param_2)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_ESI;
  FString *pFStack_30;
  FString local_1c [4];
  undefined4 uStack_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xadc0  1018  ?eventOnComboBoxItemSelected@UUIScript@@QAEXABVFString@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d82ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_1c);
  local_4 = 1;
  pFStack_30 = (FString *)0x1000ae08;
  FString::operator=(local_1c,param_1);
  iVar1 = *(int *)this;
  pFStack_30 = local_1c;
  local_10 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnComboBoxItemSelected,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&pFStack_30);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 1000ae60 FUN_1000ae60

void FUN_1000ae60(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    FUN_1004f7b0();
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
  }
  return;
}


// ==== 1000ae80 FUN_1000ae80

void FUN_1000ae80(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d82e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2e4); iVar1 = iVar1 + 1) {
    FUN_1000ae60();
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2e4); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2e0),0x10,0);
  ExceptionList = local_10;
  return;
}


// ==== 1000af0e Catch@1000af0e

void Catch_1000af0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1000af22 Catch@1000af22

void Catch_1000af22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::ClearStringArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000af40 FUN_1000af40

undefined4 FUN_1000af40(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x30c) != 0) {
    *(undefined4 *)(in_ECX + 0x30c) = 0;
  }
  FUN_1000ae80();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000afac Catch@1000afac

void Catch_1000afac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000afc0 Catch@1000afc0

void Catch_1000afc0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000afe0 FUN_1000afe0

undefined4 FUN_1000afe0(void)

{
  int iVar1;
  UUIScript *this;
  FString *pFVar2;
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d8329;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x6c))();
  if (iVar1 != 0) {
    if (in_ECX[0xc4] == 0) {
      (**(code **)(*in_ECX + 0x1f8))();
    }
    else {
      iVar1 = in_ECX[0xca];
      if (-1 < iVar1) {
        in_ECX[0xc9] = iVar1;
        FUN_1000cb20(iVar1);
        in_ECX[0xc4] = 0;
        (**(code **)(*in_ECX + 0x1f8))();
        this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
        if (this != (UUIScript *)0x0) {
          pFVar2 = (FString *)FUN_10057590(local_28);
          local_8._0_1_ = 1;
          UUIScript::eventOnComboBoxItemSelected(this,pFVar2,in_ECX[0xc9]);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_28);
        }
      }
      (**(code **)(*in_ECX + 0x7c))();
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1000b0be Catch@1000b0be

void Catch_1000b0be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000b0d2 Catch@1000b0d2

void Catch_1000b0d2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000b0f0 FUN_1000b0f0

void FUN_1000b0f0(void)

{
  int in_ECX;
  
  FUN_1000ae80();
  *(undefined4 *)(in_ECX + 0x324) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x328) = 0xffffffff;
  return;
}


// ==== 1000b110 FUN_1000b110

void FUN_1000b110(int param_1)

{
  uint uStack_3c;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8350;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    FUN_1000a160(param_1,0xffffffff,0);
    FUN_1000ad50(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000b182 Catch@1000b182

void Catch_1000b182(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000b196 Catch@1000b196

void Catch_1000b196(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::AddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000b1c0 FUN_1000b1c0

void FUN_1000b1c0(int param_1,undefined4 param_2)

{
  uint uStack_3c;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8370;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    FUN_1000a160(param_1,0xffffffff,0);
    FUN_10009c70(param_2);
    FUN_1000ad50(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000b23e Catch@1000b23e

void Catch_1000b23e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000b252 Catch@1000b252

void Catch_1000b252(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::AddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000b270 FUN_1000b270

void FUN_1000b270(int param_1)

{
  uint uStack_3c;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8390;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    FUN_1000a160(0xffffffff,param_1,0);
    FUN_1000ad50(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000b2e2 Catch@1000b2e2

void Catch_1000b2e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000b2f6 Catch@1000b2f6

void Catch_1000b2f6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::AddStringSystemMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000b320 FUN_1000b320

void FUN_1000b320(int param_1,undefined4 param_2)

{
  uint uStack_3c;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d83b0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (-1 < param_1) {
    FUN_1000a160(0xffffffff,param_1,0);
    FUN_10009c70(param_2);
    FUN_1000ad50(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000b39e Catch@1000b39e

void Catch_1000b39e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000b3b2 Catch@1000b3b2

void Catch_1000b3b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::AddStringSystemMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000b3d0 FUN_1000b3d0

void FUN_1000b3d0(short *param_1)

{
  uint uStack_3c;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d83d0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_1000a160(0xffffffff,0xffffffff,param_1);
    FUN_1000ad50(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000b448 Catch@1000b448

void Catch_1000b448(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000b45c Catch@1000b45c

void Catch_1000b45c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::AddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000b480 FUN_1000b480

void FUN_1000b480(short *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_1000a160(0xffffffff,0xffffffff,param_1);
    FUN_10009c70(param_2);
    iVar1 = FArray::Add((FArray *)(in_ECX + 0x2e0),1,0x10);
    puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)(in_ECX + 0x2e0));
    *puVar2 = local_10;
    puVar2[1] = local_c;
    puVar2[2] = local_8;
    puVar2[3] = local_4;
  }
  return;
}


// ==== 1000b4f0 FUN_1000b4f0

void FUN_1000b4f0(void)

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
  
  puStack_c = &LAB_101d83f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UComboBoxHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_1000ad90(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1000b57a;
    appFailAssert("m_pScriptHandle",".\\Src\\NComboBox.cpp",0x1fc);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1000b5ae Catch@1000b5ae

void Catch_1000b5ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000b5c2 Catch@1000b5c2

void Catch_1000b5c2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCComboBox::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000b5e0 FUN_1000b5e0

void FUN_1000b5e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8419;
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
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1000b680 FUN_1000b680

void FUN_1000b680(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d845f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCComboBox::vftable;
  in_ECX[0xb6] = 5;
  in_ECX[0xb7] = 0;
  FArray::FArray((FArray *)(in_ECX + 0xb8));
  in_ECX[0xc1] = 0;
  in_ECX[0xc3] = 0;
  in_ECX[0xc4] = 0;
  in_ECX[0xc9] = 0xffffffff;
  in_ECX[0xca] = 0xffffffff;
  in_ECX[0xcb] = 0x11;
  ExceptionList = local_c;
  return;
}


// ==== 1000b730 FUN_1000b730

void FUN_1000b730(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101d8496;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCComboBox::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_1000b5e0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 1000b7a0 FUN_1000b7a0

void FUN_1000b7a0(byte param_1)

{
  void *in_ECX;
  
  FUN_1000b730();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x330);
  }
  return;
}


// ==== 1000b7e0 FUN_1000b7e0

int FUN_1000b7e0(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0xc) == *param_1) {
        return iVar1 + 8 + iVar2 * 0xc;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0xc);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 1000b830 FUN_1000b830

int FUN_1000b830(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar2 * 0x14) == *param_1) {
        return iVar1 + 8 + iVar2 * 0x14;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 0x14);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 1000b880 FUN_1000b880

void FUN_1000b880(void)

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
      iVar4 = iVar4 + 0x14;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1000b930 FUN_1000b930

void FUN_1000b930(void)

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
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1000b9e0 FUN_1000b9e0

void FUN_1000b9e0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d84cc;
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
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 8));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 1000bac0 FUN_1000bac0

undefined4 FUN_1000bac0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d84f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_1000b7e0(&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  *param_2 = *puVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 1000bb33 Catch@1000bb33

void Catch_1000bb33(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000bb47 Catch@1000bb47

void Catch_1000bb47(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::GetConstantInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000bb70 FUN_1000bb70

undefined4 FUN_1000bb70(undefined4 param_1,FString *param_2)

{
  FString *pFVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = (FString *)FUN_1000b830(&param_1);
  if (pFVar1 == (FString *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  FString::operator=(param_2,pFVar1);
  ExceptionList = local_10;
  return 1;
}


// ==== 1000bbe9 Catch@1000bbe9

void Catch_1000bbe9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000bbfd Catch@1000bbfd

void Catch_1000bbfd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::GetConstantString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000bc20 FUN_1000bc20

undefined4 FUN_1000bc20(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8530;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_1000b7e0(&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  *param_2 = *puVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 1000bc96 Catch@1000bc96

void Catch_1000bc96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000bcaa Catch@1000bcaa

void Catch_1000bcaa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::GetConstantBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000bcd0 FUN_1000bcd0

bool FUN_1000bcd0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_1000b7e0(&param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = *puVar1;
  }
  ExceptionList = local_10;
  return puVar1 != (undefined4 *)0x0;
}


// ==== 1000bd36 Catch@1000bd36

void Catch_1000bd36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000bd4a Catch@1000bd4a

void Catch_1000bd4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::GetConstantFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000bd70 FUN_1000bd70

undefined4 * FUN_1000bd70(uint *param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d857c;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(uint *)(iVar1 + 4 + iVar3 * 0x14) == *param_1) {
        FString::operator=((FString *)(iVar1 + 8 + iVar3 * 0x14),param_2);
        ExceptionList = local_c;
        return (undefined4 *)(iVar3 * 0x14 + 8 + *in_ECX);
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0x14);
    } while (iVar3 != -1);
  }
  puVar4 = (undefined4 *)FUN_10097bd0(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    FString::FString((FString *)(puVar4 + 2),param_2);
    local_4 = 0xffffffff;
  }
  uVar5 = in_ECX[4] - 1U & puVar4[1];
  *puVar4 = *(undefined4 *)(in_ECX[3] + uVar5 * 4);
  *(int *)(in_ECX[3] + uVar5 * 4) = in_ECX[1] + -1;
  if (in_ECX[4] * 2 + 8 < in_ECX[1]) {
    in_ECX[4] = in_ECX[4] * 2;
    FUN_1000b880(uVar2);
  }
  ExceptionList = local_c;
  return puVar4 + 2;
}


// ==== 1000be70 FUN_1000be70

void FUN_1000be70(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b930();
  return;
}


// ==== 1000be90 FUN_1000be90

undefined4 * FUN_1000be90(uint *param_1,undefined4 *param_2)

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


// ==== 1000bf50 FUN_1000bf50

void FUN_1000bf50(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d85a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_1000b9e0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1000bfb0 FUN_1000bfb0

void FUN_1000bfb0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d85dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 8));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1000c030 FUN_1000c030

void FUN_1000c030(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8609;
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


// ==== 1000c0d0 FUN_1000c0d0

void FUN_1000c0d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8639;
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


// ==== 1000c170 FUN_1000c170

void FUN_1000c170(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10087320(&stack0x00000004,&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 1000c1ca Catch@1000c1ca

void Catch_1000c1ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000c1de Catch@1000c1de

void Catch_1000c1de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::SetConstantInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000c200 FUN_1000c200

void FUN_1000c200(void)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8689;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  puVar1 = FString::operator*((FString *)&stack0x00000008);
  FUN_1000bd70(&stack0x00000004,puVar1);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 1000c272 Catch@1000c272

void Catch_1000c272(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000c286 Catch@1000c286

void Catch_1000c286(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::SetConstantString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000c2b0 FUN_1000c2b0

void FUN_1000c2b0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d86b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10087320(&stack0x00000004,&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 1000c30d Catch@1000c30d

void Catch_1000c30d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000c321 Catch@1000c321

void Catch_1000c321(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::SetConstantBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000c340 FUN_1000c340

void FUN_1000c340(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d86d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000be90(&stack0x00000004,&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 1000c39d Catch@1000c39d

void Catch_1000c39d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000c3b1 Catch@1000c3b1

void Catch_1000c3b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::SetConstantFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000c3d0 FUN_1000c3d0

void FUN_1000c3d0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8701;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b880(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1000c440 FUN_1000c440

void FUN_1000c440(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8728;
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
  FUN_1000bf50();
  ExceptionList = local_c;
  return;
}


// ==== 1000c4c0 FUN_1000c4c0

void FUN_1000c4c0(void)

{
  int in_ECX;
  
  FUN_1000bfb0(0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  FUN_1000b880();
  return;
}


// ==== 1000c4e0 FUN_1000c4e0

void FUN_1000c4e0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8761;
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


// ==== 1000c550 FUN_1000c550

void FUN_1000c550(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8788;
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
  FUN_1000c030();
  ExceptionList = local_c;
  return;
}


// ==== 1000c5d0 FUN_1000c5d0

void FUN_1000c5d0(void)

{
  uint uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d87c1;
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


// ==== 1000c640 FUN_1000c640

void FUN_1000c640(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d87e8;
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
  FUN_1000c0d0();
  ExceptionList = local_c;
  return;
}


// ==== 1000c6c0 FUN_1000c6c0

void FUN_1000c6c0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1000c440(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1000c710 FUN_1000c710

void FUN_1000c710(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1000c550(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1000c760 FUN_1000c760

void FUN_1000c760(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8870;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000be70();
  FUN_1000c4c0();
  FUN_1000be70();
  FUN_1000be70();
  ExceptionList = local_10;
  return;
}


// ==== 1000c7ca Catch@1000c7ca

void Catch_1000c7ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000c7de Catch@1000c7de

void Catch_1000c7de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000c800 FUN_1000c800

void FUN_1000c800(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000be70();
  FUN_1000c4c0();
  FUN_1000be70();
  FUN_1000be70();
  ExceptionList = local_10;
  return;
}


// ==== 1000c86a Catch@1000c86a

void Catch_1000c86a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000c87e Catch@1000c87e

void Catch_1000c87e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000c8a0 FUN_1000c8a0

void FUN_1000c8a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d88b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000be70();
  FUN_1000c4c0();
  FUN_1000be70();
  FUN_1000be70();
  ExceptionList = local_10;
  return;
}


// ==== 1000c90a Catch@1000c90a

void Catch_1000c90a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000c91e Catch@1000c91e

void Catch_1000c91e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000c940 FUN_1000c940

void FUN_1000c940(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d88d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1000c640(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1000c990 FUN_1000c990

void FUN_1000c990(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d8949;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1000c5d0();
  local_8 = 1;
  FUN_1000c3d0();
  local_8._0_1_ = 3;
  FUN_1000c5d0();
  local_8._0_1_ = 5;
  FUN_1000c4e0();
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_1000c800();
  ExceptionList = local_10;
  return;
}


// ==== 1000ca1f Catch@1000ca1f

void Catch_1000ca1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000ca33 Catch@1000ca33

void Catch_1000ca33(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::NCConstantManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000ca50 FUN_1000ca50

void FUN_1000ca50(void)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d89b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 4;
  FUN_1000c8a0();
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_1000c550();
  local_8._0_1_ = 1;
  FUN_1000c640();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000c440();
  local_8 = 0xffffffff;
  FUN_1000c640();
  ExceptionList = local_10;
  return;
}


// ==== 1000caec Catch@1000caec

void Catch_1000caec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000cb00 Catch@1000cb00

void Catch_1000cb00(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConstantManager::~NCConstantManager");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000cb20 FUN_1000cb20

undefined4 FUN_1000cb20(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d89e0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x68))
              (0x501,*(undefined4 *)(in_ECX + 0x1cc),param_1);
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 1000cbb9 Catch@1000cbb9

void Catch_1000cbb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000cbcd Catch@1000cbcd

void Catch_1000cbcd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NControl::SendEventMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000cbf0 FUN_1000cbf0

void FUN_1000cbf0(void)

{
  int *in_ECX;
  
  if ((*(int *)(in_ECX[0x2e] + 0xc) != 0) && (*(int *)(*(int *)(in_ECX[0x2e] + 0xc) + 4) != 0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX[0x2e] + 0xc) + 4) + 0x78))();
  }
                    /* WARNING: Could not recover jumptable at 0x1000cc21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x7c))();
  return;
}


// ==== 1000cc30 FUN_1000cc30

bool FUN_1000cc30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(param_2,param_3,param_4);
    return iVar1 != 0;
  }
  return false;
}


// ==== 1000cc70 FUN_1000cc70

undefined4 FUN_1000cc70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x68))
              (param_1,param_2,param_3);
    return 1;
  }
  return 0;
}


// ==== 1000ccc0 FUN_1000ccc0

void FUN_1000ccc0(short *param_1)

{
  short sVar1;
  int in_ECX;
  int iVar2;
  
  if (param_1 != (short *)0x0) {
    iVar2 = (in_ECX + 0x1d8) - (int)param_1;
    do {
      sVar1 = *param_1;
      *(short *)(iVar2 + (int)param_1) = sVar1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
  }
  return;
}


// ==== 1000ccf0 FUN_1000ccf0

short * FUN_1000ccf0(void)

{
  short *psVar1;
  int in_ECX;
  
  psVar1 = (short *)(in_ECX + 0x1d8);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    psVar1 = (short *)0x0;
  }
  return psVar1;
}


// ==== 1000cd20 FUN_1000cd20

bool FUN_1000cd20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x100a) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0x100b) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1000cda0 FUN_1000cda0

undefined4 FUN_1000cda0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x31c) != 0) {
    uVar1 = FUN_10058020();
    FUN_10060e00(uVar1);
    if (*(int **)(in_ECX + 0x31c) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x31c) + 0xc))(1);
    }
    *(undefined4 *)(in_ECX + 0x31c) = 0;
  }
  if (*(int *)(in_ECX + 800) != 0) {
    uVar1 = FUN_10058020();
    FUN_10060e00(uVar1);
    if (*(int **)(in_ECX + 800) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 800) + 0xc))(1);
    }
    *(undefined4 *)(in_ECX + 800) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000ce50 Catch@1000ce50

void Catch_1000ce50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000ce64 Catch@1000ce64

void Catch_1000ce64(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCountSpin::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000ce90 FUN_1000ce90

undefined4 FUN_1000ce90(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x318) < *(int *)(in_ECX + 0x314)) {
    *(int *)(in_ECX + 0x318) = *(int *)(in_ECX + 0x318) + 1;
    FUN_1000cb20(1);
    if (*(int *)(in_ECX + 0x324) != 0) {
      *(int *)(in_ECX + 0x318) = *(int *)(in_ECX + 0x318) + -1;
      *(undefined4 *)(in_ECX + 0x324) = 0;
    }
    __itow(*(int *)(in_ECX + 0x318),(wchar_t *)(in_ECX + 0x2d8),10);
  }
  return 1;
}


// ==== 1000cef0 FUN_1000cef0

undefined4 FUN_1000cef0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x310) < *(int *)(in_ECX + 0x318)) {
    *(int *)(in_ECX + 0x318) = *(int *)(in_ECX + 0x318) + -1;
    FUN_1000cb20(2);
    if (*(int *)(in_ECX + 0x324) != 0) {
      *(int *)(in_ECX + 0x318) = *(int *)(in_ECX + 0x318) + 1;
      *(undefined4 *)(in_ECX + 0x324) = 0;
    }
    __itow(*(int *)(in_ECX + 0x318),(wchar_t *)(in_ECX + 0x2d8),10);
  }
  return 1;
}


// ==== 1000cf50 FUN_1000cf50

void FUN_1000cf50(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x2ec) = *(int *)(in_ECX + 0x2f0) - param_1;
  return;
}


// ==== 1000cf70 FUN_1000cf70

void FUN_1000cf70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2f0) = param_1;
  return;
}


// ==== 1000cf80 FUN_1000cf80

void FUN_1000cf80(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  *(undefined4 *)(in_ECX + 0x2e8) = 1;
  return;
}


// ==== 1000cfa0 FUN_1000cfa0

void FUN_1000cfa0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2e8) = 1;
  return;
}


// ==== 1000cfb0 FUN_1000cfb0

void FUN_1000cfb0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2e8) == 1) {
    *(undefined4 *)(in_ECX + 0x2e8) = 0;
  }
  return;
}


// ==== 1000cfd0 FUN_1000cfd0

void FUN_1000cfd0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2e8) = 0;
  return;
}


// ==== 1000cfe0 FUN_1000cfe0

void FUN_1000cfe0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8a29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1000d030 FUN_1000d030

void FUN_1000d030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10358800,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1000d060 FUN_1000d060

undefined4 FUN_1000d060(int param_1)

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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8a50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  iVar4 = *(int *)(in_ECX + 0x30c);
  if (iVar4 != 0) {
    uVar13 = 0xff;
    uVar11 = 1;
    uVar1 = FUN_101c19e0(iVar4,1,0xff);
    uVar2 = FUN_101c19e0(uVar1);
    FUN_100218f0(0,0,uVar2,uVar1,iVar4,uVar11,uVar13);
  }
  uVar14 = 0xffffffff;
  uVar12 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar13 = 0;
  uVar11 = 0;
  uVar2 = 0;
  uVar1 = 0;
  puVar3 = FString::operator*((FString *)(in_ECX + 0x2f8));
  iVar4 = FUN_100217a0(*(undefined4 *)(in_ECX + 0x304),*(undefined4 *)(in_ECX + 0x308),0xffdcdcdc,
                       puVar3,uVar1,uVar2,uVar11,uVar13,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,
                       uVar14);
  FUN_100217a0(*(int *)(in_ECX + 0x304) + 5 + iVar4,*(undefined4 *)(in_ECX + 0x308),0xffdcdcdc,
               in_ECX + 0x2d8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000d19f Catch@1000d19f

void Catch_1000d19f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000d1b3 Catch@1000d1b3

void Catch_1000d1b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCCountSpin::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000d1d0 FUN_1000d1d0

undefined4 FUN_1000d1d0(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UPackage *pUVar7;
  UObject *pUVar8;
  int in_ECX;
  void *pvVar9;
  undefined4 unaff_EDI;
  bool bVar10;
  undefined2 in_FPUControlWord;
  uint uStack_5c;
  undefined4 local_48;
  void *local_44;
  longlong local_40;
  FString local_34 [4];
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8ad8;
  local_c = ExceptionList;
  _uStack_5c = CONCAT44(unaff_EDI,DAT_103554c4 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_c;
  pvVar9 = (void *)0x0;
  local_44 = (void *)0x0;
  FUN_10061b40();
  uVar6 = FUN_1003f630(L"Default.EditBack",1);
  *(undefined4 *)(in_ECX + 0x30c) = uVar6;
  local_14 = 0.0;
  local_10 = 0.0;
  local_18 = 0;
  local_1c = 0;
  FUN_1005d0a0(&local_1c);
  FName::FName((FName *)&local_48,0);
  pUVar7 = UObject::GetTransientPackage();
  pUVar8 = UObject::StaticAllocateObject
                     (&DAT_10358800,pUVar7,local_48,0,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar8 == (UObject *)0x0) {
    uVar6 = 0;
  }
  else {
    FString::FString(local_34,(ushort *)L"Default.BlackTexture");
    local_4 = 0;
    local_44 = (void *)0x1;
    FString::FString((FString *)&local_40,(ushort *)L"Default.WhiteTexture");
    local_4 = 1;
    pvVar9 = (void *)0x3;
    local_44 = (void *)0x3;
    uVar6 = FUN_10007150(&local_40,local_34);
  }
  *(undefined4 *)(in_ECX + 0x31c) = uVar6;
  local_4 = 0;
  if (((uint)pvVar9 & 2) != 0) {
    pvVar9 = (void *)((uint)pvVar9 & 0xfffffffd);
    local_44 = pvVar9;
    FString::~FString((FString *)&local_40);
  }
  local_4 = 0xffffffff;
  if (((uint)pvVar9 & 1) != 0) {
    local_44 = (void *)((uint)pvVar9 & 0xfffffffe);
    FString::~FString(local_34);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x31c) + 0x1cc) = 0x100a;
  local_40._0_4_ = (undefined4)(longlong)ROUND((local_10 - 10.0) * 0.5);
  uVar6 = (undefined4)local_40;
  local_40._0_4_ = (undefined4)(longlong)ROUND(local_10 - 10.0);
  uVar5 = (undefined4)local_40;
  local_48 = CONCAT22(local_48._2_2_,in_FPUControlWord);
  local_40 = (longlong)ROUND((local_14 - local_10) + 5.0);
  (**(code **)(**(int **)(in_ECX + 0x31c) + 0xc0))((undefined4)local_40,3,uVar5,uVar6,0,0,3);
  uVar6 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x31c),2);
  FUN_1005c1e0(uVar6);
  *(undefined4 *)(*(int *)(in_ECX + 0x31c) + 0x340) = 0xb4;
  FName::FName((FName *)&uStack_5c,0);
  pUVar7 = UObject::GetTransientPackage();
  pUVar8 = UObject::StaticAllocateObject
                     (&DAT_10358800,pUVar7,uStack_5c,0,0,*(undefined4 *)GError_exref,0,0);
  bVar10 = pUVar8 == (UObject *)0x0;
  if (bVar10) {
    uVar6 = 0;
  }
  else {
    FString::FString((FString *)&local_44,(ushort *)L"Default.BlackTexture");
    uStack_20 = 2;
    FString::FString((FString *)&stack0xffffffb0,(ushort *)L"Default.WhiteTexture");
    uStack_20 = 3;
    uVar6 = FUN_10007150(&stack0xffffffb0,&local_44);
  }
  *(undefined4 *)(in_ECX + 800) = uVar6;
  uStack_20 = 2;
  if (!bVar10) {
    FString::~FString((FString *)&stack0xffffffb0);
  }
  uStack_20 = 0xffffffff;
  if (!bVar10) {
    FString::~FString((FString *)&local_44);
  }
  *(undefined4 *)(*(int *)(in_ECX + 800) + 0x1cc) = 0x100b;
  fVar1 = (fStack_2c - 10.0) * 0.5;
  uStack_5c = (uint)(longlong)ROUND(fVar1);
  uVar2 = uStack_5c;
  uStack_5c = (uint)(longlong)ROUND(fStack_2c - 10.0);
  uVar3 = uStack_5c;
  uStack_5c = (uint)(longlong)ROUND((fStack_2c - (fVar1 + 5.0)) + 2.0);
  uVar4 = uStack_5c;
  _uStack_5c = (longlong)ROUND((fStack_30 - fStack_2c) + 5.0);
  (**(code **)(**(int **)(in_ECX + 800) + 0xc0))(uStack_5c,uVar4,uVar3,uVar2,0,0,3);
  uVar6 = FUN_10060d40(*(undefined4 *)(in_ECX + 800),2);
  FUN_1005c1e0(uVar6);
  *(undefined4 *)(*(int *)(in_ECX + 800) + 0x340) = 0xb4;
  ExceptionList = local_44;
  return 1;
}


// ==== 1000d5e0 UUIScript::eventOnProgressTimeUp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnProgressTimeUp(class FString const &) */

void __thiscall UUIScript::eventOnProgressTimeUp(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd5e0  1041  ?eventOnProgressTimeUp@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8b1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x1000d628;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnProgressTimeUp,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 1000d670 FUN_1000d670

undefined4 FUN_1000d670(int param_1)

{
  int iVar1;
  UUIScript *this;
  FString *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_44;
  FString local_34 [20];
  int local_20;
  int iStack_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d8b49;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  fVar6 = (float10)FUN_1003f8a0();
  local_20 = (int)(longlong)ROUND(fVar6 * (float10)1000.0);
  iVar9 = local_20;
  local_20 = (int)(longlong)ROUND((float)in_ECX[0x22] - (float)(in_ECX[0xb9] * 2));
  iVar1 = local_20;
  _local_20 = CONCAT44(local_20,local_20);
  if ((in_ECX[0xba] == 0) &&
     (in_ECX[0xbb] = in_ECX[0xbb] + iVar9, (uint)in_ECX[0xbc] <= (uint)in_ECX[0xbb])) {
    this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
    if (this != (UUIScript *)0x0) {
      pFVar2 = (FString *)FUN_10057590(local_34);
      local_8._0_1_ = 1;
      UUIScript::eventOnProgressTimeUp(this,pFVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
    }
    FUN_1000cb20(0);
    in_ECX[0xbb] = in_ECX[0xbc];
    in_ECX[0xba] = 1;
  }
  local_18 = (uint)(in_ECX[0xbb] * iVar1) / (uint)in_ECX[0xbc];
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(in_ECX[0x20],in_ECX[0x21],uVar4,uVar3);
  FUN_10002f40(in_ECX[0x20],in_ECX[0x21]);
  if (in_ECX[0xb7] != 0) {
    uVar3 = FUN_101c19e0();
    uVar4 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar4,uVar3,0,0,uVar4,uVar3,in_ECX[0xb7],0xff,1);
  }
  iVar9 = in_ECX[0xb6];
  if (iVar9 != 0) {
    iVar1 = in_ECX[0xb9];
    uVar11 = 1;
    uVar10 = 0xff;
    uVar3 = FUN_101c19e0(iVar9,0xff,1);
    uVar4 = FUN_101c19e0(uVar3);
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = FUN_101c19e0(0,0,uVar4);
    FUN_10021a00(iVar1,iVar1,iStack_1c - local_18,uVar5,uVar7,uVar8,uVar4,uVar3,iVar9,uVar10,uVar11)
    ;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000d88c Catch@1000d88c

void Catch_1000d88c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1000d8a0 Catch@1000d8a0

void Catch_1000d8a0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCProgressCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000d8c0 FUN_1000d8c0

void FUN_1000d8c0(int param_1,undefined4 param_2,wchar_t *param_3)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8b87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *in_ECX = NCCountSpin::vftable;
  FString::FString((FString *)(in_ECX + 0xbe));
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xc1] = 5;
  in_ECX[0xc2] = 5;
  in_ECX[0xc3] = 0;
  in_ECX[199] = 0;
  in_ECX[200] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[0xc4] = param_1;
  in_ECX[0xc5] = param_2;
  in_ECX[0xc6] = param_1;
  __itow(param_1,(wchar_t *)(in_ECX + 0xb6),10);
  if (param_3 == (wchar_t *)0x0) {
    param_3 = L"Default";
  }
  FString::operator=((FString *)(in_ECX + 0xbe),(ushort *)param_3);
  ExceptionList = local_c;
  return;
}


// ==== 1000d9a0 FUN_1000d9a0

void FUN_1000d9a0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101d8bc7;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCCountSpin::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x2f8));
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1000da10 FUN_1000da10

void FUN_1000da10(byte param_1)

{
  void *in_ECX;
  
  FUN_1000d9a0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x328);
  }
  return;
}


// ==== 1000da40 FUN_1000da40

void FUN_1000da40(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCProgressCtrl::vftable;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 1;
  in_ECX[0xb9] = 2;
  in_ECX[0xba] = 1;
  in_ECX[0xbb] = 0;
  in_ECX[0xbc] = 1;
  uVar1 = FUN_1003f630(L"Default.BlackTexture",1);
  in_ECX[0xb7] = uVar1;
  uVar1 = FUN_1003f630(L"Default.WhiteTexture",1);
  in_ECX[0xb6] = uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 1000db00 FUN_1000db00

void FUN_1000db00(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d8c28;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCProgressCtrl::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1000db60 FUN_1000db60

void FUN_1000db60(byte param_1)

{
  void *in_ECX;
  
  FUN_1000db00();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2f8);
  }
  return;
}


// ==== 1000db90 FUN_1000db90

void FUN_1000db90(wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCProgressCtrl::vftable;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 1;
  in_ECX[0xb9] = 2;
  in_ECX[0xba] = 1;
  in_ECX[0xbb] = 0;
  in_ECX[0xbc] = 1;
  if ((param_1 == (wchar_t *)0x0) || (param_1 == L"")) {
    param_1 = L"Default.BlackTexture";
  }
  uVar1 = FUN_1003f630(param_1,1);
  in_ECX[0xb7] = uVar1;
  if ((param_2 == (wchar_t *)0x0) || (param_2 == L"")) {
    param_2 = L"Default.WhiteTexture";
  }
  uVar1 = FUN_1003f630(param_2,1);
  in_ECX[0xb6] = uVar1;
  in_ECX[0xb9] = param_3;
  ExceptionList = local_c;
  return;
}


// ==== 1000dcb0 FUN_1000dcb0

void FUN_1000dcb0(ushort *param_1,ushort *param_2,ushort *param_3)

{
  int in_ECX;
  
  if ((param_1 == (ushort *)0x0) || (*param_1 == 0)) {
    FString::Empty((FString *)(in_ECX + 0x3c));
  }
  else {
    FString::operator=((FString *)(in_ECX + 0x3c),param_1);
  }
  if ((param_2 == (ushort *)0x0) || (*param_2 == 0)) {
    FString::Empty((FString *)(in_ECX + 0x48));
  }
  else {
    FString::operator=((FString *)(in_ECX + 0x48),param_2);
  }
  if ((param_3 != (ushort *)0x0) && (*param_3 != 0)) {
    FString::operator=((FString *)(in_ECX + 0x54),param_3);
    return;
  }
  FString::Empty((FString *)(in_ECX + 0x54));
  return;
}


// ==== 1000dd30 FUN_1000dd30

void FUN_1000dd30(int param_1)

{
  ushort *puVar1;
  FString *pFVar2;
  int in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8c92;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1 = param_1 * 0x5c;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 + 0x240ec));
  if (puVar1 != (ushort *)0x0) {
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 + 0x240ec));
    FString::operator=((FString *)(in_ECX + 0x24),puVar1);
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 + 0x24100));
    pFVar2 = (FString *)FString::FString(local_18,puVar1);
    local_4 = 0;
    FString::operator=((FString *)(in_ECX + 0x9c),pFVar2);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 + 0x2410c));
    pFVar2 = (FString *)FString::FString(local_18,puVar1);
    local_4 = 1;
    FString::operator=((FString *)(in_ECX + 0xa8),pFVar2);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
    ExceptionList = local_c;
    return;
  }
  FString::Empty((FString *)(in_ECX + 0x24));
  ExceptionList = local_c;
  return;
}


// ==== 1000de50 FUN_1000de50

void FUN_1000de50(ushort *param_1)

{
  int in_ECX;
  
  if (param_1 != (ushort *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000de5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::operator=((FString *)(in_ECX + 0x24),param_1);
    return;
  }
  FString::Empty((FString *)(in_ECX + 0x24));
  return;
}


// ==== 1000de70 FUN_1000de70

void FUN_1000de70(ushort *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8cb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == (ushort *)0x0) || (*param_1 == 0)) {
    FString::Empty((FString *)(in_ECX + 0x60));
  }
  else {
    FString::operator=((FString *)(in_ECX + 0x60),param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000dedf Catch@1000dedf

void Catch_1000dedf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000def3 Catch@1000def3

void Catch_1000def3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDialogBoxInfo::SetReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000df10 FUN_1000df10

void FUN_1000df10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x6c) = param_1;
  *(undefined4 *)(in_ECX + 0x70) = param_2;
  *(undefined4 *)(in_ECX + 0x74) = param_3;
  return;
}


// ==== 1000df6f Catch@1000df6f

void Catch_1000df6f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000df83 Catch@1000df83

void Catch_1000df83(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDialogBoxInfo::SetReserved");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000dfa0 FUN_1000dfa0

bool FUN_1000dfa0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x501) {
    if (param_2 == 0x1004) {
      iVar1 = (**(code **)(*in_ECX + 0x1f8))();
      return iVar1 != 0;
    }
    if (param_2 == 0x1005) {
      iVar1 = (**(code **)(*in_ECX + 0x1fc))();
      return iVar1 != 0;
    }
    if (param_2 == 0xf5) {
      iVar1 = (**(code **)(*in_ECX + 0x204))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0x1504) {
      iVar1 = (**(code **)(*in_ECX + 0x200))(param_3);
      return iVar1 != 0;
    }
    if (param_2 == 0xf00de) {
      iVar1 = (**(code **)(*in_ECX + 0x208))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1000e090 FUN_1000e090

undefined4 FUN_1000e090(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8cf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < 0xd; iVar1 = iVar1 + 1) {
    if (*(int *)(in_ECX + 0x2ec + iVar1 * 4) != 0) {
      *(undefined4 *)(in_ECX + 0x2ec + iVar1 * 4) = 0;
    }
  }
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    *(undefined4 *)(in_ECX + 0x2e4) = 0;
  }
  if (*(int *)(in_ECX + 0x2e8) != 0) {
    *(undefined4 *)(in_ECX + 0x2e8) = 0;
  }
  if (*(int *)(in_ECX + 0x324) != 0) {
    *(undefined4 *)(in_ECX + 0x324) = 0;
  }
  if (*(int *)(in_ECX + 800) != 0) {
    *(undefined4 *)(in_ECX + 800) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000e133 Catch@1000e133

void Catch_1000e133(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1000e147 Catch@1000e147

void Catch_1000e147(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000e170 FUN_1000e170

void FUN_1000e170(void)

{
  int in_ECX;
  
  FUN_1005c5b0();
  if (*(int *)(in_ECX + 0x334) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000e18d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x324) + 0x78))();
    return;
  }
  return;
}


// ==== 1000e1a0 FUN_1000e1a0

undefined4 FUN_1000e1a0(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if ((param_1 == 0xd) && ((iVar1 = in_ECX[0xca], iVar1 != 0x46 || (in_ECX[0xdb] != 0x5e6)))) {
    if ((in_ECX[0xcd] == 0) && (((iVar1 != 0x1d && (iVar1 != 0x1f)) && (iVar1 != 0x10)))) {
      (**(code **)(*in_ECX + 0x1fc))();
      return 1;
    }
    (**(code **)(*in_ECX + 0x1f8))();
  }
  return 1;
}


// ==== 1000e200 FUN_1000e200

void FUN_1000e200(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8d10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x334) = 0;
  *(undefined4 *)(in_ECX + 0x330) = 0;
  FString::Empty((FString *)(in_ECX + 0x354));
  *(undefined4 *)(in_ECX + 0x39c) = 0;
  *(undefined4 *)(in_ECX + 0x33c) = 0;
  *(undefined4 *)(in_ECX + 0x340) = 10000;
  *(undefined4 *)(in_ECX + 0x350) = 0;
  *(undefined4 *)(in_ECX + 0x338) = 0;
  FString::operator=((FString *)(in_ECX + 0x360),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0x36c) = 0;
  *(undefined4 *)(in_ECX + 0x370) = 0;
  *(undefined4 *)(in_ECX + 0x374) = 0;
  (**(code **)(**(int **)(in_ECX + 0x324) + 0x174))();
  ExceptionList = local_10;
  return;
}


// ==== 1000e2bd Catch@1000e2bd

void Catch_1000e2bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000e2d1 Catch@1000e2d1

void Catch_1000e2d1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000e2f0 FUN_1000e2f0

void FUN_1000e2f0(void)

{
  int iVar1;
  int *in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d8d39;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0xfc))(0);
  if (((iVar1 != 0) && (in_ECX[0xd1] == 0)) && (in_ECX[0xca] == 0x46)) {
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_2c,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    L2ParamStack::PushBack(local_2c,(void *)in_ECX[0xdd]);
    FUN_101482b0(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
  }
  (**(code **)(*in_ECX + 0x174))();
  FUN_1005ff00();
  ExceptionList = local_10;
  return;
}


// ==== 1000e3c2 Catch@1000e3c2

void Catch_1000e3c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000e3d6 Catch@1000e3d6

void Catch_1000e3d6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000e400 FUN_1000e400

undefined4 FUN_1000e400(int param_1)

{
  int *in_ECX;
  
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x1f8))();
    return 1;
  }
  if (param_1 == 0) {
    (**(code **)(*in_ECX + 0x1fc))();
  }
  return 1;
}


// ==== 1000e440 FUN_1000e440

void FUN_1000e440(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101d8dd2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 7;
  FString::~FString((FString *)(in_ECX + 0xa8));
  local_4._0_1_ = 6;
  FString::~FString((FString *)(in_ECX + 0x9c));
  local_4._0_1_ = 5;
  FString::~FString((FString *)(in_ECX + 0x78));
  local_4._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0x60));
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x54));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x48));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x3c));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x30));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x24));
  ExceptionList = local_c;
  return;
}


// ==== 1000e510 FUN_1000e510

undefined4 FUN_1000e510(void)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  int *in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d8e5c;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0xd1] = 1;
  puVar1 = &uStack_3c;
  if (in_ECX[0xcf] != 0) {
    FUN_1000cfa0();
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (((int *)in_ECX[0xc9] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)in_ECX[0xc9] + 0x74))(), iVar2 != 0)) {
    (**(code **)(*(int *)in_ECX[0xc9] + 0x7c))();
  }
  switch(in_ECX[0xca]) {
  case 0:
  case 1:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30(in_ECX[0xcc],0xf0000003,0,0);
    }
  default:
    goto switchD_1000e597_caseD_2;
  case 7:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    (**(code **)(*DAT_103663bc + 0x7d4))(local_2c);
    break;
  case 10:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,2);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_10144870(local_2c);
    break;
  case 0xe:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,3);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_101441f0(local_2c);
    break;
  case 0x13:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,4);
    puVar3 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_2c,puVar3);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_10144230(local_2c);
    break;
  case 0x15:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,5);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_10144250(local_2c);
    break;
  case 0x20:
    (**(code **)(*DAT_103663bc + 0x7c4))(0,in_ECX[0xdb],in_ECX[0xdc]);
    goto switchD_1000e597_caseD_2;
  case 0x29:
    if (in_ECX[0xcc] != 0) {
      (**(code **)(**(int **)(in_ECX[0xcc] + 4) + 0x13c))();
    }
    goto switchD_1000e597_caseD_2;
  case 0x33:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,6);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_10144470(local_2c);
    break;
  case 0x34:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,8);
    puVar3 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_2c,puVar3);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    (**(code **)(*DAT_103663bc + 0x460))(local_2c);
    break;
  case 0x35:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,9);
    puVar3 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_2c,puVar3);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    (**(code **)(*DAT_103663bc + 0x468))(local_2c);
    break;
  case 0x3b:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 7;
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_101447d0(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
  case 0x28:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30(in_ECX[0xcc],0xf0000009,0,0);
    }
    goto switchD_1000e597_caseD_2;
  case 0x46:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,10);
    L2ParamStack::PushBack(local_2c,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    L2ParamStack::PushBack(local_2c,(void *)in_ECX[0xdd]);
    FUN_101482b0(local_2c);
    break;
  case 0x52:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    L2ParamStack::PushBack(local_2c,(void *)in_ECX[0xdb]);
    FUN_10143a20(local_2c);
    break;
  case 0x59:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_1014a190(local_2c);
  }
  local_8 = local_8 & 0xffffff00;
  L2ParamStack::~L2ParamStack(local_2c);
switchD_1000e597_caseD_2:
  (**(code **)(*in_ECX + 0x174))();
  (**(code **)(*in_ECX + 0x13c))();
  (**(code **)(*in_ECX + 0x7c))();
  in_ECX[0xd1] = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1000e8fd Catch@1000e8fd

void Catch_1000e8fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000e911 Catch@1000e911

void Catch_1000e911(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::OnCancelBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000e9d0 FUN_1000e9d0

void FUN_1000e9d0(uint param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort local_118 [10];
  ushort local_104 [128];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_118;
  if (param_1 < 9) {
    appSprintf(local_118,(ushort *)&DAT_10233718,param_1 + 1);
    puVar4 = local_118;
  }
  else if (param_1 == 9) {
    appSprintf(local_118,(ushort *)&DAT_10233718,0);
    puVar4 = local_118;
  }
  else {
    if (param_1 == 10) {
      uVar5 = 0;
      uVar3 = 8;
      uVar2 = 0x100;
      uVar1 = FUN_10058020(0x100,8,0);
      FUN_1000cc30(uVar1,uVar2,uVar3,uVar5);
      goto LAB_1000eabb;
    }
    if (param_1 == 0xb) {
      appSprintf(local_104,(ushort *)&DAT_10233718,*(undefined4 *)(in_ECX + 0x39c));
      (**(code **)(**(int **)(in_ECX + 0x324) + 0x174))();
      puVar4 = local_104;
    }
    else {
      if (param_1 != 0xc) goto LAB_1000eabb;
      (**(code **)(**(int **)(in_ECX + 0x324) + 0x174))();
      puVar4 = (ushort *)&DAT_10233714;
    }
  }
  FUN_10016ea0(puVar4,1);
LAB_1000eabb:
  __security_check_cookie(local_4 ^ (uint)local_118);
  return;
}


// ==== 1000eae0 FUN_1000eae0

void FUN_1000eae0(int param_1,int param_2)

{
  ushort *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2e4) != 0) {
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6a8dc));
    if (puVar1 != (ushort *)0x0) {
      FUN_10003cf0(param_1);
    }
  }
  if (*(int *)(in_ECX + 0x2e8) != 0) {
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_2 * 0xc + 0x6a8dc));
    if (puVar1 != (ushort *)0x0) {
      FUN_10003cf0(param_2);
    }
  }
  return;
}


// ==== 1000eb50 FUN_1000eb50

void FUN_1000eb50(int param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x334) != 0) && (param_1 != 0)) {
    FUN_10016ea0(param_1,1);
  }
  return;
}


// ==== 1000eb80 FUN_1000eb80

undefined4 FUN_1000eb80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x330);
}


// ==== 1000eb90 FUN_1000eb90

undefined4 FUN_1000eb90(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x1fc))();
  return 1;
}


// ==== 1000eba0 FUN_1000eba0

undefined4 FUN_1000eba0(void)

{
  FUN_10061b40();
  return 1;
}


// ==== 1000ebb0 FUN_1000ebb0

undefined4 FUN_1000ebb0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8e80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000ebfe Catch@1000ebfe

void Catch_1000ebfe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000ec12 Catch@1000ec12

void Catch_1000ec12(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDialogBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000ec30 FUN_1000ec30

void FUN_1000ec30(void)

{
  int *in_ECX;
  
  FUN_1005ff00();
  (**(code **)(*in_ECX + 0x188))(in_ECX[0x2e]);
  return;
}


// ==== 1000ec50 FUN_1000ec50

void FUN_1000ec50(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8ea0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  (**(code **)(*in_ECX + 0x184))(in_ECX[0x2e]);
  (**(code **)(*in_ECX + 0x78))();
  ExceptionList = local_10;
  return;
}


// ==== 1000ecbe Catch@1000ecbe

void Catch_1000ecbe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000ecd2 Catch@1000ecd2

void Catch_1000ecd2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDialogBox::DoModal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000ecf0 FUN_1000ecf0

void FUN_1000ecf0(void)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x84))();
  if ((uVar1 & 0x100) == 0) {
    FUN_1005ff00();
    return;
  }
  return;
}


// ==== 1000ed10 FUN_1000ed10

bool FUN_1000ed10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_10012770(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0x1004)) {
    iVar1 = (**(code **)(*in_ECX + 0x1fc))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1000ed70 FUN_1000ed70

void FUN_1000ed70(ushort *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 0x2e4),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1000edcd Catch@1000edcd

void Catch_1000edcd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000ede1 Catch@1000ede1

void Catch_1000ede1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWarningDialogBox::SetWarningMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000ee00 FUN_1000ee00

undefined4 FUN_1000ee00(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d8ee0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x2e0) != 0) {
    *(undefined4 *)(in_ECX + 0x2e0) = 0;
  }
  FUN_1000ebb0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1000ee61 Catch@1000ee61

void Catch_1000ee61(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000ee75 Catch@1000ee75

void Catch_1000ee75(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWarningDialogBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000eea0 FUN_1000eea0

void FUN_1000eea0(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0xffff;
  *(undefined4 *)(in_ECX + 2) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 6) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined4 *)(in_ECX + 0x12) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x16) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1a) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
  return;
}


// ==== 1000eee0 FUN_1000eee0

void FUN_1000eee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035bbe0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1000ef10 FUN_1000ef10

void FUN_1000ef10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035d5e0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1000ef40 FUN_1000ef40

void FUN_1000ef40(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d8f72;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 9));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0xc));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xf));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x12));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x15));
  local_4._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x18));
  local_4._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x1e));
  local_4._0_1_ = 6;
  FString::FString((FString *)(in_ECX + 0x27));
  local_4 = CONCAT31(local_4._1_3_,7);
  FString::FString((FString *)(in_ECX + 0x2a));
  *in_ECX = 0xffffffff;
  in_ECX[1] = 3;
  in_ECX[2] = 0;
  in_ECX[3] = 1;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 10000;
  in_ECX[0x23] = 0;
  in_ECX[5] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1000f050 FUN_1000f050

undefined4 FUN_1000f050(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  int in_ECX;
  uint uVar5;
  undefined4 unaff_EBP;
  uint uVar6;
  FString *pFStack_88;
  FString *pFStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  wchar_t *pwStack_68;
  int iVar7;
  undefined4 local_4c [3];
  FString aFStack_40 [4];
  undefined4 local_3c [2];
  FString aFStack_34 [20];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101d9046;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar5 = 0;
  pwStack_68 = L"L2UI_ch3.Calculate.Calculate12_back";
  local_4c[0] = 0;
  iStack_6c = 0x1000f08b;
  uVar1 = FUN_1003f630();
  pwStack_68 = L"L2UI_ch3.Calculate.Calculate1_back";
  *(undefined4 *)(in_ECX + 0x2d8) = uVar1;
  iStack_6c = 0x1000f09f;
  uVar1 = FUN_1003f630();
  pwStack_68 = L"L2UI_ch3.dialog.warningicon";
  *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
  iStack_6c = 0x1000f0b3;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x2e0) = uVar1;
  pwStack_68 = L"ᗿ쏔ဢඋ쏜ဢᆋ䲋␤卓卒兓桐헠ဵᗿ쐬ဢ쒃蔠瓀匕桓\x96";
  FName::FName((FName *)local_3c,0);
  UObject::GetTransientPackage();
  iStack_6c = *(int *)GError_exref;
  pwStack_68 = (wchar_t *)0x0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = local_3c[0];
  pFStack_84 = (FString *)0x1000f0e8;
  pUVar2 = UObject::StaticAllocateObject();
  if (pUVar2 == (UObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pwStack_68 = (wchar_t *)0x0;
    iStack_6c = 0x96;
    uStack_70 = 1;
    uStack_74 = 0;
    uStack_78 = 3;
    iVar3 = FUN_1001a820();
  }
  *(int *)(in_ECX + 0x324) = iVar3;
  *(undefined4 *)(iVar3 + 0x1cc) = 0x1504;
  iVar3 = *(int *)(in_ECX + 0x348);
  pwStack_68 = (wchar_t *)0x0;
  iStack_6c = 0;
  uStack_70 = 0x11;
  uStack_74 = 0x9c;
  uStack_78 = 0x49;
  (**(code **)(**(int **)(in_ECX + 0x324) + 0xc0))();
  pFStack_84 = *(FString **)(in_ECX + 0x324);
  pFStack_88 = (FString *)0x1000f156;
  FUN_10060d40();
  pFStack_84 = (FString *)0x1000f162;
  FUN_1005c1e0();
  iVar7 = 0x1c;
  uVar6 = 0;
  do {
    if (8 < uVar6) {
      if ((uVar6 == 9) || (uVar6 == 10)) {
LAB_1000f210:
        iVar7 = 0x1c;
      }
      else if (uVar6 == 0xb) {
        iVar7 = 0x39;
      }
      else if (uVar6 == 0xc) goto LAB_1000f210;
    }
    pFStack_84 = (FString *)0x1000f220;
    FName::FName((FName *)&stack0xffffffac,0);
    pUVar4 = UObject::GetTransientPackage();
    pFStack_88 = *(FString **)GError_exref;
    pFStack_84 = (FString *)0x0;
    pUVar2 = UObject::StaticAllocateObject(&DAT_10357870,pUVar4,unaff_EBP,0,0);
    if (pUVar2 == (UObject *)0x0) {
      uVar1 = 0;
    }
    else {
      pFStack_84 = (FString *)0x1000f270;
      FString::FString(aFStack_34,
                       (ushort *)(&PTR_u_L2UI_CH3_Calculate_Calculate1_1__1034c338)[uVar6 * 3]);
      uStack_20 = 0;
      pwStack_68 = (wchar_t *)(uVar5 | 1);
      pFStack_84 = (FString *)0x1000f290;
      FString::FString(aFStack_40,
                       (ushort *)(&PTR_u_L2UI_CH3_Calculate_Calculate1_1__1034c334)[uVar6 * 3]);
      uStack_20 = 1;
      pwStack_68 = (wchar_t *)(uVar5 | 3);
      pFStack_84 = (FString *)0x1000f2b0;
      FString::FString((FString *)local_4c,
                       (ushort *)(&PTR_u_L2UI_CH3_Calculate_Calculate1_1_1034c330)[uVar6 * 3]);
      uStack_20 = 2;
      pFStack_84 = aFStack_34;
      pFStack_88 = aFStack_40;
      uVar5 = 7;
      pwStack_68 = (wchar_t *)0x7;
      uVar1 = FUN_10006a90(local_4c);
    }
    *(undefined4 *)(in_ECX + 0x2ec + uVar6 * 4) = uVar1;
    uStack_20 = 1;
    if ((uVar5 & 4) != 0) {
      uVar5 = uVar5 & 0xfffffffb;
      pwStack_68 = (wchar_t *)uVar5;
      FString::~FString((FString *)local_4c);
    }
    uStack_20 = 0;
    if ((uVar5 & 2) != 0) {
      uVar5 = uVar5 & 0xfffffffd;
      pwStack_68 = (wchar_t *)uVar5;
      FString::~FString(aFStack_40);
    }
    uStack_20 = 0xffffffff;
    if ((uVar5 & 1) != 0) {
      uVar5 = uVar5 & 0xfffffffe;
      pwStack_68 = (wchar_t *)uVar5;
      FString::~FString(aFStack_34);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x2ec + uVar6 * 4) + 0x1cc) = 0xf5;
    *(uint *)(*(int *)(in_ECX + 0x2ec + uVar6 * 4) + 0x1d4) = uVar6;
    pFStack_84 = (FString *)(float)iVar7;
    pFStack_88 = (FString *)0x1000f37f;
    (**(code **)(**(int **)(in_ECX + 0x2ec + uVar6 * 4) + 0x128))();
    pFStack_88 = (FString *)pwStack_68;
    (**(code **)(**(int **)(in_ECX + 0x2ec + uVar6 * 4) + 0xd0))
              (1,*(int *)(in_ECX + 0x348) + iStack_6c);
    pFStack_84 = *(FString **)(in_ECX + 0x2ec + uVar6 * 4);
    pFStack_88 = (FString *)0x1000f3b3;
    FUN_10060d40();
    pFStack_84 = (FString *)0x1000f3c0;
    FUN_1005c1e0();
    uVar6 = uVar6 + 1;
    if (0xc < (int)uVar6) {
      pFStack_84 = (FString *)0x1000f3d8;
      FName::FName((FName *)&stack0xffffffb0,0);
      pUVar4 = UObject::GetTransientPackage();
      pFStack_88 = *(FString **)GError_exref;
      pFStack_84 = (FString *)0x0;
      pUVar2 = UObject::StaticAllocateObject(&DAT_1035bbe0,pUVar4,pUVar2,0,0);
      if (pUVar2 == (UObject *)0x0) {
        iVar7 = 0;
      }
      else {
        pFStack_84 = (FString *)0x102338b8;
        pFStack_88 = (FString *)0x1023387c;
        iVar7 = FUN_1000db90();
      }
      *(int *)(in_ECX + 800) = iVar7;
      *(undefined4 *)(iVar7 + 0x1cc) = 0xf00de;
      pFStack_84 = (FString *)0x0;
      pFStack_88 = (FString *)0x0;
      (**(code **)(**(int **)(in_ECX + 800) + 0xc0))
                ((*(int *)(in_ECX + 0x348) + -0xde) / 2,0x3d,0xde,6);
      uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 800),2);
      FUN_1005c1e0(uVar1);
      FUN_1000cf70(10000);
      FUN_1000cf80();
      FName::FName((FName *)&iStack_6c,0);
      pUVar4 = UObject::GetTransientPackage();
      pUVar2 = UObject::StaticAllocateObject
                         (&DAT_10357870,pUVar4,iStack_6c,0,0,*(undefined4 *)GError_exref,0,0);
      if (pUVar2 == (UObject *)0x0) {
        uVar1 = 0;
      }
      else {
        FString::FString((FString *)&stack0xffffffa4,(ushort *)L"L2UI_ch3.button.btn1_normalon");
        local_3c[0] = 3;
        pFStack_84 = (FString *)(uVar5 | 8);
        FString::FString((FString *)&stack0xffffffb0,(ushort *)L"L2UI_ch3.button.btn1_normal");
        local_3c[0] = 4;
        uVar5 = uVar5 | 0x18;
        pFStack_84 = (FString *)uVar5;
        uVar1 = FUN_10006980(&stack0xffffffb0,&stack0xffffffa4,0);
      }
      *(undefined4 *)(in_ECX + 0x2e4) = uVar1;
      local_3c[0] = 3;
      if ((uVar5 & 0x10) != 0) {
        uVar5 = uVar5 & 0xffffffef;
        pFStack_84 = (FString *)uVar5;
        FString::~FString((FString *)&stack0xffffffb0);
      }
      local_3c[0] = 0xffffffff;
      if ((uVar5 & 8) != 0) {
        pFStack_84 = (FString *)(uVar5 & 0xfffffff7);
        FString::~FString((FString *)&stack0xffffffa4);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x2e4) + 0x1cc) = 0x1004;
      (**(code **)(**(int **)(in_ECX + 0x2e4) + 0xc0))
                ((*(int *)(in_ECX + 0x348) + -0x9c) / 2,0x4b,0x4c,0x17,0,0,3);
      uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e4),2);
      FUN_1005c1e0(uVar1);
      FName::FName((FName *)&pFStack_88,0);
      pUVar4 = UObject::GetTransientPackage();
      pUVar2 = UObject::StaticAllocateObject
                         (&DAT_10357870,pUVar4,pFStack_88,0,0,*(undefined4 *)GError_exref,0,0);
      if (pUVar2 == (UObject *)0x0) {
        uVar1 = 0;
      }
      else {
        FString::FString((FString *)&uStack_78,(ushort *)L"L2UI_ch3.button.btn1_normalon");
        FString::FString((FString *)&iStack_6c,(ushort *)L"L2UI_ch3.button.btn1_normal");
        uVar1 = FUN_10006980(&iStack_6c,&uStack_78,0);
      }
      *(undefined4 *)(in_ECX + 0x2e8) = uVar1;
      if (pUVar2 != (UObject *)0x0) {
        FString::~FString((FString *)&iStack_6c);
        FString::~FString((FString *)&uStack_78);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x1cc) = 0x1005;
      (**(code **)(**(int **)(in_ECX + 0x2e8) + 0xc0))
                ((*(int *)(in_ECX + 0x348) + -0x9c) / 2 + 0x51,0x4b,0x4c,0x17,0,0,3);
      uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e8),2);
      FUN_1005c1e0(uVar1);
      ExceptionList = (void *)((iVar3 + -0x9c) / 2);
      return 1;
    }
  } while( true );
}


// ==== 1000f700 FUN_1000f700

void FUN_1000f700(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FString *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_144;
  int local_130 [3];
  FString local_124 [12];
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  uint local_10c;
  undefined1 local_108 [256];
  uint local_8;
  
  puStack_110 = &LAB_101d9079;
  local_114 = ExceptionList;
  uStack_144 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_144;
  ExceptionList = &local_114;
  local_10c = 0;
  local_8 = uStack_144;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  if (*(int *)(in_ECX + 0x2d8) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2d8),0xff,1);
  }
  if (*(int *)(in_ECX + 0x2e0) != 0) {
    FUN_10021a00(0xb,8,0x18,0x18,0,0,0x18,0x18,*(int *)(in_ECX + 0x2e0),0xff,1);
  }
  FString::FString(local_124);
  local_10c = CONCAT31(local_10c._1_3_,1);
  pFVar13 = local_124;
  puVar3 = FString::operator*((FString *)(in_ECX + 0x354));
  FUN_10146040(puVar3,pFVar13);
  uVar14 = 0xffffffff;
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
  iVar4 = *(int *)(in_ECX + 0x348) + -0x30;
  puVar3 = FString::operator*(local_124);
  FUN_100217a0(0x29,9,0xffdcdcdc,puVar3,iVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
               uVar11,uVar12,uVar14);
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x324) + 0x1f8))();
  if ((*(int *)(in_ECX + 0x334) != 0) && (*(int *)(in_ECX + 0x32c) == 3)) {
    if (*(int *)(in_ECX + 0x2dc) != 0) {
      uVar1 = *(undefined4 *)(in_ECX + 0x34c);
      FUN_10021a00(*(undefined4 *)(in_ECX + 0x348),0,uVar1,uVar1,0,0,uVar1,uVar1,
                   *(int *)(in_ECX + 0x2dc),0xff,1);
    }
    if (iVar4 != 0) {
      FUN_100676e0(local_108,iVar4,1);
      FUN_10146040(local_108,local_124);
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar2 = 0;
      uVar1 = *(undefined4 *)(in_ECX + 0x348);
      puVar3 = FString::operator*(local_124);
      FUN_10020bb0(local_130,puVar3,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8);
      uVar15 = 0xffffffff;
      uVar14 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar2 = 0;
      uVar1 = *(undefined4 *)(in_ECX + 0x348);
      puVar3 = FString::operator*(local_124);
      FUN_100217a0((*(int *)(in_ECX + 0x348) - local_130[0]) / 2,0x39,0xffe4ca7f,puVar3,uVar1,uVar2,
                   uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,uVar15);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  local_10c = local_10c & 0xffffff00;
  FString::~FString(local_124);
  local_10c = 0xffffffff;
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 1000f99d Catch@1000f99d

void Catch_1000f99d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1000f9b1 Catch@1000f9b1

void Catch_1000f9b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000f9d0 FUN_1000f9d0

void FUN_1000f9d0(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*in_ECX + 0x128))((float)in_ECX[0xd2],(float)in_ECX[0xd3]);
  uStack_10 = 0;
  uStack_c = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  FUN_1005d0a0(&uStack_18);
  (**(code **)(*(int *)in_ECX[0xb9] + 0x138))();
  (**(code **)(*(int *)in_ECX[0xba] + 0x138))();
  FUN_1005eb10((in_ECX[0xd2] + -0x9a) / 2,99,&uStack_18);
  FUN_1005eb10((in_ECX[0xd2] + -0x9a) / 2 + 0x50,99,&uStack_18);
  if (in_ECX[0xcd] == 0) {
    (**(code **)(*in_ECX + 0x128))((float)in_ECX[0xd2],(float)in_ECX[0xd3]);
    (**(code **)(*(int *)in_ECX[0xc9] + 0x13c))();
    piVar2 = in_ECX + 0xbb;
    iVar1 = 0xd;
    do {
      (**(code **)(*(int *)*piVar2 + 0x13c))();
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else {
    (**(code **)(*(int *)in_ECX[0xc9] + 0x138))();
    if (in_ECX[0xcb] == 3) {
      (**(code **)(*in_ECX + 0x128))((float)(in_ECX[0xd2] + in_ECX[0xd3]),(float)in_ECX[0xd3]);
      piVar2 = in_ECX + 0xbb;
      iVar1 = 0xd;
      do {
        (**(code **)(*(int *)*piVar2 + 0x138))();
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      (**(code **)(*in_ECX + 0x128))((float)in_ECX[0xd2],(float)in_ECX[0xd3]);
      piVar2 = in_ECX + 0xbb;
      iVar1 = 0xd;
      do {
        (**(code **)(*(int *)*piVar2 + 0x13c))();
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  iVar1 = in_ECX[0xca];
  if ((((iVar1 == 0x1d) || (iVar1 == 0x1f)) || (iVar1 == 0x10)) || (iVar1 == 0x50)) {
    (**(code **)(*(int *)in_ECX[0xba] + 0x13c))();
    FUN_1005eb10((int)(longlong)ROUND((float)in_ECX[0x22] * 0.5 - 38.0),99,&stack0xffffffe0);
  }
  if (in_ECX[0xcf] == 0) {
    (**(code **)(*(int *)in_ECX[200] + 0x13c))();
    return;
  }
  (**(code **)(*(int *)in_ECX[200] + 0x138))();
  if ((in_ECX[0xca] != 0x13) && (in_ECX[0xca] != 0x34)) {
    FUN_1000cf70(in_ECX[0xd0]);
    return;
  }
  FUN_1000cf70(900000);
  return;
}


// ==== 1000fc80 FUN_1000fc80

void FUN_1000fc80(int *param_1)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  int *in_ECX;
  code *pcVar4;
  FString *this;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d90b0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((in_ECX[0xca] == 0x46) && (in_ECX[0xdb] == 0x5e6)) {
    pcVar4 = *(code **)(*in_ECX + 0x13c);
LAB_1000fce2:
    (*pcVar4)();
    puVar1 = (uint *)local_14;
  }
  else {
    puVar1 = &uStack_3c;
    if (in_ECX[0xca] != -1) {
      pcVar4 = *(code **)(*in_ECX + 0x1fc);
      goto LAB_1000fce2;
    }
  }
  local_14 = (undefined1 *)puVar1;
  (**(code **)(*in_ECX + 0x174))();
  in_ECX[0xce] = param_1[5];
  in_ECX[0xca] = *param_1;
  iVar2 = param_1[1];
  in_ECX[0xcb] = iVar2;
  FUN_10014b00(iVar2);
  in_ECX[0xcd] = param_1[4];
  in_ECX[0xd4] = param_1[6];
  in_ECX[0xcc] = param_1[2];
  iVar2 = param_1[7];
  in_ECX[0xcf] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(*(int *)in_ECX[200] + 0x13c))();
  }
  else {
    in_ECX[0xd0] = param_1[8];
    (**(code **)(*(int *)in_ECX[200] + 0x138))();
    FUN_1000cf80();
    FUN_1000cfd0();
  }
  this = (FString *)(param_1 + 0xc);
  iVar2 = FString::operator_int(this);
  if (iVar2 == 0) {
    this = (FString *)(param_1 + 9);
    iVar2 = FString::operator_int(this);
    if (iVar2 == 0) goto LAB_1000fdaf;
  }
  FString::operator=((FString *)(in_ECX + 0xd5),this);
LAB_1000fdaf:
  iVar2 = FString::operator_int((FString *)(param_1 + 0x18));
  if (iVar2 != 0) {
    FString::operator=((FString *)(in_ECX + 0xd8),(FString *)(param_1 + 0x18));
  }
  if (param_1[0x1b] != 0) {
    in_ECX[0xdb] = param_1[0x1b];
  }
  if (param_1[0x1c] != 0) {
    in_ECX[0xdc] = param_1[0x1c];
  }
  if (param_1[0x1d] != 0) {
    in_ECX[0xdd] = param_1[0x1d];
  }
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_1005d0a0(&local_2c);
  in_ECX[0xe7] = param_1[0x23];
  in_ECX[0xde] = param_1[0x24];
  in_ECX[0xdf] = param_1[0x25];
  in_ECX[0xe0] = param_1[0x26];
  FString::operator=((FString *)(in_ECX + 0xe1),(FString *)(param_1 + 0x27));
  FString::operator=((FString *)(in_ECX + 0xe4),(FString *)(param_1 + 0x2a));
  if (in_ECX[0xcd] != 0) {
    iVar2 = FString::operator_int((FString *)(param_1 + 0x1e));
    if (iVar2 != 0) {
      puVar3 = FString::operator*((FString *)(param_1 + 0x1e));
      FUN_1000eb50(puVar3);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1000fea5 Catch@1000fea5

void Catch_1000fea5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1000feb9 Catch@1000feb9

void Catch_1000feb9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::SetDialogBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1000fee0 FUN_1000fee0

undefined4 FUN_1000fee0(int param_1)

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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d90d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  if (*(int *)(in_ECX + 0x2d8) != 0) {
    uVar1 = FUN_101c19e0();
    uVar2 = FUN_101c19e0();
    FUN_10021a00(0,0,uVar2,uVar1,0,0,uVar2,uVar1,*(undefined4 *)(in_ECX + 0x2d8),0xff,1);
  }
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    FUN_10021a00(0xb,0xf,0x18,0x18,0,0,0x18,0x18,*(int *)(in_ECX + 0x2dc),0xff,1);
  }
  iVar3 = FString::operator_int((FString *)(in_ECX + 0x2e4));
  if (iVar3 != 0) {
    uVar14 = 0xffffffff;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar2 = 0;
    uVar1 = 200;
    puVar4 = FString::operator*((FString *)(in_ECX + 0x2e4));
    FUN_100217a0(0x29,0x10,0xffdcdcdc,puVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                 ,uVar12,uVar13,uVar14);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_100212e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1001002d Catch@1001002d

void Catch_1001002d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10010041 Catch@10010041

void Catch_10010041(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCWarningDialogBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10010060 FUN_10010060

undefined4 FUN_10010060(void)

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
  puStack_8 = &LAB_101d9124;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = 0;
  local_38 = 0;
  FUN_1000eba0(DAT_103554c4 ^ (uint)&stack0xffffffb4);
  uVar1 = FUN_1003f630(L"L2UI_ch3.dialog.system_back",1);
  *(undefined4 *)(in_ECX + 0x2d8) = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_ch3.dialog.warningicon",1);
  *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
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
  *(undefined4 *)(in_ECX + 0x2e0) = uVar1;
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
  *(undefined4 *)(*(int *)(in_ECX + 0x2e0) + 0x1cc) = 0x1004;
  local_34 = (longlong)ROUND(local_14 * 0.5 - 38.0);
  (**(code **)(**(int **)(in_ECX + 0x2e0) + 0xc0))((undefined4)local_34,0x4b,0x4c,0x17,0,0,3);
  FUN_10003cf0(0x8c);
  uVar1 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2e0),2);
  FUN_1005c1e0(uVar1);
  ExceptionList = local_28[0];
  return 1;
}


// ==== 10010250 FUN_10010250

undefined4 FUN_10010250(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2f0) != 0) {
    appRequestExit(0);
    return 1;
  }
  FUN_1000ec30();
  *(undefined4 *)(in_ECX + 0x2f0) = 0;
  return 1;
}


// ==== 10010290 FUN_10010290

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


// ==== 100102c0 FUN_100102c0

void FUN_100102c0(void)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005fe50();
  puVar1 = FString::operator*((FString *)(in_ECX + 900));
  FUN_10147e60(puVar1);
  puVar1 = FString::operator*((FString *)(in_ECX + 0x390));
  FUN_101481d0(puVar1);
  FUN_1000f9d0();
  if ((*(int *)(DAT_103663bc + 0x50ac) != 0) &&
     (in_ECX == *(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x228))) {
    FUN_10058b20(*(undefined4 *)(in_ECX + 0xb8));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10010371 Catch@10010371

void Catch_10010371(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10010385 Catch@10010385

void Catch_10010385(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::ShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100103b0 FUN_100103b0

void FUN_100103b0(void)

{
  char cVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  User *pUVar5;
  int *piVar6;
  LPCWSTR pWVar7;
  char *pcVar8;
  short *psVar9;
  ushort *puVar10;
  int *in_ECX;
  code *pcVar11;
  void *pvVar12;
  undefined4 *puVar13;
  int *piVar14;
  bool bVar15;
  longlong lVar16;
  int aiStackY_83c [9];
  undefined4 uStackY_818;
  int iVar17;
  LPCSTR pCVar18;
  LPBOOL pBVar19;
  uint uStack_7f4;
  undefined4 local_460;
  int local_45c;
  int local_454;
  int local_424 [3];
  void *local_418;
  int local_3e8 [3];
  void *local_3dc;
  undefined4 local_3ac;
  int local_3a8;
  void *local_3a0;
  FString local_36c [16];
  undefined2 local_35c [2];
  L2ParamStack local_358 [4];
  FString local_354 [4];
  undefined8 local_350;
  L2ParamStack local_348 [16];
  undefined1 *local_338;
  void *local_334;
  undefined1 *puStack_330;
  uint local_32c;
  char local_328 [800];
  uint local_8;
  
  puStack_330 = &LAB_101d9323;
  local_334 = ExceptionList;
  uStack_7f4 = DAT_103554c4 ^ (uint)local_328;
  local_338 = (undefined1 *)&uStack_7f4;
  ExceptionList = &local_334;
  local_32c = 0;
  pvVar12 = (void *)0x1;
  in_ECX[0xd1] = 1;
  puVar2 = &uStack_7f4;
  local_8 = uStack_7f4;
  if (in_ECX[0xcf] != 0) {
    FUN_1000cfa0();
    puVar2 = (uint *)local_338;
  }
  local_338 = (undefined1 *)puVar2;
  local_350._0_4_ = 1;
  local_350._4_4_ = 0;
  local_350 = 1;
  if (in_ECX[0xcd] != 0) {
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      lVar16 = FUN_101c1b17();
      pvVar12 = (void *)lVar16;
      local_350 = lVar16;
      iVar4 = FUN_10162c10();
      if ((iVar4 == 3) || (in_ECX[0xce] != 0)) {
        if (-1 < lVar16) {
          if ((0xffffffff < lVar16) || ((void *)0x77359400 < pvVar12)) {
            (**(code **)(*in_ECX + 0x174))();
LAB_100104d8:
            FUN_1016eb50();
            in_ECX[0xd1] = 0;
            goto LAB_10010cc1;
          }
          goto LAB_100104f7;
        }
      }
      else {
        iVar4 = FUN_10162c10();
        if (iVar4 == 2) {
          if (lVar16 < 0) goto LAB_10010501;
          if ((0xffffffff < lVar16) || ((void *)0xf4240 < pvVar12)) {
            (**(code **)(*in_ECX + 0x174))();
            goto LAB_100104d8;
          }
        }
LAB_100104f7:
        if ((0xffffffff < lVar16) || (-1 < lVar16)) goto LAB_1001050b;
      }
LAB_10010501:
      pvVar12 = (void *)0x0;
      local_350 = 0;
    }
  }
LAB_1001050b:
  switch(in_ECX[0xca]) {
  case 0:
  case 1:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30();
    }
    break;
  case 2:
  case 3:
  case 8:
  case 0x23:
    if (in_ECX[0xcc] != 0) {
      if (in_ECX[0xcd] == 0) {
        FUN_1000cc30();
      }
      else {
        iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
        if (iVar4 != 0) {
          FUN_1000cc30();
        }
      }
    }
    break;
  case 4:
    FUN_1000eea0();
    local_3a8 = in_ECX[0xdb];
    local_3a0 = pvVar12;
    iVar4 = FUN_1014dd00();
    if ((*(byte *)(*(int *)(iVar4 + 0x204) + 0x6ac) & 1) == 0) {
      puVar13 = &local_3ac;
      goto LAB_1001064a;
    }
LAB_100105f1:
    FString::operator*((FString *)(GL2GameData_exref + 0x28140));
    FUN_1013e640();
    break;
  case 5:
    FUN_1000eea0();
    local_424[1] = in_ECX[0xdb];
    local_418 = pvVar12;
    iVar4 = *DAT_103663bc;
    piVar6 = local_424;
    piVar14 = aiStackY_83c + 3;
    for (iVar17 = 0xf; iVar17 != 0; iVar17 = iVar17 + -1) {
      *piVar14 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar14 = piVar14 + 1;
    }
    aiStackY_83c[2] = 0x10010584;
    (**(code **)(iVar4 + 0x7cc))();
    FUN_1014ed50();
    break;
  case 6:
    (**(code **)(*DAT_103663bc + 2000))();
    FUN_1014ed50();
    break;
  case 7:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 3;
    L2ParamStack::PushBack(local_348,(void *)0x1);
    (**(code **)(*DAT_103663bc + 0x7d4))();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 10:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 4;
    L2ParamStack::PushBack(local_348,(void *)0x1);
    FUN_10144870();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0xb:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 5;
    pvVar12 = (void *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    L2ParamStack::PushBack(local_348,pvVar12);
    FUN_101441e0();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0xc:
    FUN_10144210();
    break;
  case 0xe:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 6;
    L2ParamStack::PushBack(local_348,(void *)0x1);
    FUN_101441f0();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0xf:
    pUVar5 = (User *)FUN_1014ddd0();
    if ((pUVar5 != (User *)0x0) && (*(int *)(pUVar5 + 8) == 0)) {
      pBVar19 = (LPBOOL)0x0;
      pCVar18 = (LPCSTR)0x0;
      iVar17 = 800;
      iVar4 = -1;
      pcVar8 = local_328;
      pWVar7 = (LPCWSTR)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      uStackY_818 = 0x10010aa5;
      WideCharToMultiByte(0,0,pWVar7,iVar4,pcVar8,iVar17,pCVar18,pBVar19);
      pcVar8 = local_328;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      iVar4 = FUN_10145750();
      if (iVar4 == 0) {
        (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
        iVar4 = FUN_1016e320();
        if (iVar4 != 0) {
          if (0x10 < (int)pcVar8 - (int)(local_328 + 1)) {
            FUN_10170650();
            (**(code **)(*(int *)in_ECX[0xc9] + 0x78))();
            in_ECX[0xd1] = 0;
            goto LAB_10010cc1;
          }
          L2ParamStack::L2ParamStack(local_348,10);
          local_32c._0_1_ = 7;
          puVar10 = User::GetName(pUVar5);
          L2ParamStack::PushBack(local_348,puVar10);
          pvVar12 = (void *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
          L2ParamStack::PushBack(local_348,pvVar12);
          FUN_10144280();
          local_32c = (uint)local_32c._1_3_ << 8;
          L2ParamStack::~L2ParamStack(local_348);
          break;
        }
      }
      FUN_10170650();
      (**(code **)(*(int *)in_ECX[0xc9] + 0x174))();
      (**(code **)(*(int *)in_ECX[0xc9] + 0x78))();
      in_ECX[0xd1] = 0;
      goto LAB_10010cc1;
    }
    break;
  case 0x10:
    FUN_1000ef40();
    local_32c._0_1_ = 9;
    FUN_1000dd30();
    FUN_1016e1b0();
    in_ECX[0xd1] = 0;
    goto LAB_10010cba;
  case 0x11:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 10;
    pvVar12 = (void *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    L2ParamStack::PushBack(local_348,pvVar12);
    L2ParamStack::PushBack(local_348,(void *)0x0);
    FUN_10171960();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x12:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0xd;
    pvVar12 = (void *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    L2ParamStack::PushBack(local_348,pvVar12);
    FUN_10144220();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x13:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0xe;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    L2ParamStack::PushBack(local_348,(void *)0x1);
    FUN_10144230();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x14:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0xf;
    pvVar12 = (void *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    L2ParamStack::PushBack(local_348,pvVar12);
    FUN_10144240();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x15:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x10;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    L2ParamStack::PushBack(local_348,(void *)0x1);
    FUN_10144250();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x17:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      FUN_1000ef40();
      local_32c._0_1_ = 0x11;
      (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      FUN_1000de70();
      FUN_1000dd30();
      FUN_1016e1b0();
      in_ECX[0xd1] = 0;
      local_32c = (uint)local_32c._1_3_ << 8;
      FUN_1000e440();
      goto LAB_10010cc1;
    }
    break;
  case 0x18:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x12;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    FUN_10144200();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x19:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      FUN_1000ef40();
      local_32c._0_1_ = 0x13;
      (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      FUN_1000de70();
      FUN_1000dd30();
      FUN_1016e1b0();
      in_ECX[0xd1] = 0;
      local_32c = (uint)local_32c._1_3_ << 8;
      FUN_1000e440();
      goto LAB_10010cc1;
    }
    break;
  case 0x1a:
    FUN_101442a0();
    break;
  case 0x1b:
    if (DAT_103663bc[0x142b] != 0) {
      FUN_1013ca20();
      if (*(int *)(DAT_103663bc[0x142b] + 0x218) != 0) {
        (**(code **)(**(int **)(DAT_103663bc[0x142b] + 0x218) + 0x13c))();
      }
    }
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x14;
    FUN_101420d0();
    FString::FString(local_36c,(ushort *)L"SystemMenuWnd");
    local_32c._0_1_ = 0x15;
    (**(code **)(*DAT_103663bc + 0x778))();
    piVar6 = (int *)FUN_10010290();
    local_32c._0_1_ = 0x14;
    FString::~FString(local_36c);
    (**(code **)(*piVar6 + 0x13c))();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x1c:
    if ((*(int *)GIsOnlyL2Console_exref != 0) || (*(int *)GL2ReplayMode_exref != 0))
    goto switchD_1001051a_caseD_50;
    (**(code **)(*DAT_103663bc + 0x650))();
    break;
  case 0x1d:
    (**(code **)(*DAT_103663bc + 0x7c0))();
    break;
  case 0x1e:
    (**(code **)(*DAT_103663bc + 0x7dc))();
    FUN_10165630();
    break;
  case 0x20:
    (**(code **)(*DAT_103663bc + 0x7c4))();
    break;
  case 0x21:
    FUN_10142ea0();
    break;
  case 0x22:
    FUN_10143ba0();
    break;
  case 0x24:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      psVar9 = (short *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
        FUN_10143bd0();
      }
    }
    break;
  case 0x25:
    if (in_ECX[0xcc] != 0) {
      if (in_ECX[0xcd] == 0) {
        FUN_1000cc30();
      }
      else {
        iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
        if (iVar4 != 0) {
          iVar4 = FUN_1000cc30();
          if (iVar4 != 0) {
            if (in_ECX[0xca] == 0x25) {
              (**(code **)(*in_ECX + 0x174))();
              (**(code **)(*in_ECX + 0x13c))();
              in_ECX[0xd1] = 0;
            }
            goto LAB_10010cc1;
          }
          bVar15 = in_ECX[0xca] == 0x25;
          goto LAB_1001130c;
        }
      }
    }
    break;
  case 0x26:
    if (in_ECX[0xcc] != 0) {
      if (in_ECX[0xcd] == 0) goto LAB_10011423;
      iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      if (iVar4 == 0) break;
LAB_10011407:
      iVar4 = FUN_1000cc30();
joined_r0x1001142d:
      if (iVar4 == 0) {
LAB_1001130e:
        FUN_1016eb50();
        goto LAB_1001131e;
      }
    }
    break;
  case 0x27:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      psVar9 = (short *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      if (*psVar9 != 0) {
        FUN_10145270();
      }
    }
    break;
  case 0x28:
    if (in_ECX[0xcc] != 0) {
      iVar4 = FUN_1000cc30();
      if (iVar4 != 0) {
        if (in_ECX[0xca] != 0x28) goto LAB_10010cc1;
        (**(code **)(*in_ECX + 0x174))();
        (**(code **)(*in_ECX + 0x13c))();
        goto LAB_100112f5;
      }
      bVar15 = in_ECX[0xca] == 0x28;
LAB_1001130c:
      if (bVar15) goto LAB_1001130e;
LAB_1001131e:
      in_ECX[0xd1] = 0;
      goto LAB_10010cc1;
    }
    break;
  case 0x29:
    if (in_ECX[0xcc] != 0) {
LAB_10011423:
      iVar4 = FUN_1000cc30();
      goto joined_r0x1001142d;
    }
    break;
  case 0x2a:
    if (in_ECX[0xcc] != 0) {
      if (in_ECX[0xcd] == 0) {
        FUN_1000cc30();
      }
      else {
        iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
        if (iVar4 != 0) {
          iVar4 = FUN_1000cc30();
          if (iVar4 != 0) {
            (**(code **)(*in_ECX + 0x174))();
            (**(code **)(*in_ECX + 0x13c))();
            in_ECX[0xd1] = 0;
            goto LAB_10010cc1;
          }
          goto LAB_100112f5;
        }
      }
    }
    break;
  case 0x2b:
    if (in_ECX[0xcc] != 0) {
      if (in_ECX[0xcd] != 0) {
        iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
        goto joined_r0x10011887;
      }
      FUN_1000cc30();
    }
    break;
  case 0x2c:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      psVar9 = (short *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      if (*psVar9 != 0) {
        FUN_101452c0();
      }
    }
    break;
  case 0x2d:
    if (in_ECX[0xcc] != 0) {
      iVar4 = FUN_1000cc30();
      if (iVar4 != 0) {
        if (in_ECX[0xca] == -0xffffff3) {
          (**(code **)(*in_ECX + 0x174))();
          (**(code **)(*in_ECX + 0x13c))();
          in_ECX[0xd1] = 0;
        }
        goto LAB_10010cc1;
      }
LAB_100112f5:
      in_ECX[0xd1] = 0;
      goto LAB_10010cc1;
    }
    break;
  case 0x2e:
    iVar4 = in_ECX[0xcc];
joined_r0x10011887:
    if (iVar4 != 0) goto LAB_10011407;
    break;
  case 0x2f:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      L2ParamStack::L2ParamStack(local_348,10);
      local_32c._0_1_ = 0x16;
      pvVar12 = (void *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      L2ParamStack::PushBack(local_348,pvVar12);
      L2ParamStack::PushBack(local_348,(void *)0x0);
      FUN_10171c60();
      local_32c = (uint)local_32c._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_348);
    }
    break;
  case 0x30:
    FUN_101444b0();
    break;
  case 0x31:
    FUN_101444a0();
    break;
  case 0x32:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 != 0) {
      FUN_1000ef40();
      local_32c._0_1_ = 0x17;
      (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      FUN_1000de70();
      FUN_1000dd30();
      FUN_1016e1b0();
      in_ECX[0xd1] = 0;
      local_32c = (uint)local_32c._1_3_ << 8;
      FUN_1000e440();
      goto LAB_10010cc1;
    }
    break;
  case 0x33:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x18;
    L2ParamStack::PushBack(local_348,(void *)0x1);
    FUN_10144470();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x34:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x1b;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    L2ParamStack::PushBack(local_348,(void *)0x1);
    (**(code **)(*DAT_103663bc + 0x460))();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x35:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x1c;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    L2ParamStack::PushBack(local_348,(void *)0x1);
    (**(code **)(*DAT_103663bc + 0x468))();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x36:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 1;
    L2ParamStack::PushBack(local_348,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_348,pvVar12);
    FUN_10144cc0();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x37:
    L2ParamStack::L2ParamStack(local_358,10);
    local_32c._0_1_ = 2;
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_358,pvVar12);
    L2ParamStack::PushBack(local_358,(void *)0x0);
    FUN_10144cd0();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_358);
    break;
  case 0x38:
    FUN_1000eea0();
    local_3e8[1] = in_ECX[0xdb];
    local_3dc = pvVar12;
    iVar4 = FUN_1014dd00();
    if ((*(byte *)(*(int *)(iVar4 + 0x204) + 0x6ac) & 1) == 0) {
      piVar6 = local_3e8;
      piVar14 = aiStackY_83c;
      for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar14 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar14 = piVar14 + 1;
      }
      goto LAB_10010654;
    }
    FString::operator*((FString *)(GL2GameData_exref + 0x28140));
    FUN_1013e640();
    break;
  case 0x39:
    pBVar19 = (LPBOOL)0x0;
    pCVar18 = (LPCSTR)0x0;
    iVar17 = 800;
    iVar4 = -1;
    pcVar8 = local_328;
    pWVar7 = (LPCWSTR)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    uStackY_818 = 0x10011661;
    WideCharToMultiByte(0,0,pWVar7,iVar4,pcVar8,iVar17,pCVar18,pBVar19);
    pcVar8 = local_328;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    iVar4 = FUN_10145750();
    if (iVar4 == 0) {
      (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
      iVar4 = FUN_1016e320();
      if (iVar4 != 0) {
        if (0x10 < (int)pcVar8 - (int)(local_328 + 1)) {
          FUN_10170650();
          (**(code **)(*(int *)in_ECX[0xc9] + 0x78))();
          in_ECX[0xd1] = 0;
          goto LAB_10010cc1;
        }
        (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
        FUN_10144ce0();
        break;
      }
    }
    FUN_10170650();
    (**(code **)(*(int *)in_ECX[0xc9] + 0x174))();
    (**(code **)(*(int *)in_ECX[0xc9] + 0x78))();
    in_ECX[0xd1] = 0;
    goto LAB_10010cc1;
  case 0x3a:
    L2ParamStack::L2ParamStack(local_358,10);
    local_32c._0_1_ = 0x1a;
    L2ParamStack::PushBack(local_358,(void *)0x14);
    pvVar12 = (void *)(**(code **)(*DAT_103663bc + 0x590))();
    L2ParamStack::PushBack(local_358,pvVar12);
    bVar3 = UInput::KeyDown(*(UInput **)
                             (**(int **)(*(int *)(DAT_103663bc[0x14] + 0x54) + 0x38) + 0x78),0x10);
    L2ParamStack::PushBack(local_358,(void *)(uint)bVar3);
    FUN_101440c0();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_358);
    break;
  case 0x3b:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x19;
    L2ParamStack::PushBack(local_348,(void *)0x1);
    FUN_101447d0();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x3c:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30();
    }
    break;
  case 0x3d:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30();
    }
    break;
  case 0x3e:
    L2ParamStack::L2ParamStack(local_358,10);
    pcVar11 = PushBack_exref;
    local_32c = CONCAT31(local_32c._1_3_,0x1d);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    goto LAB_10011a63;
  case 0x3f:
    L2ParamStack::L2ParamStack(local_358,10);
    pcVar11 = PushBack_exref;
    local_32c = CONCAT31(local_32c._1_3_,0x1e);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_358,(void *)0x1);
    goto LAB_10011a6a;
  case 0x40:
    L2ParamStack::L2ParamStack(local_358,10);
    pcVar11 = PushBack_exref;
    local_32c = CONCAT31(local_32c._1_3_,0x1f);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
LAB_10011a63:
    (*pcVar11)();
    goto LAB_10011a6a;
  case 0x41:
    L2ParamStack::L2ParamStack(local_358,10);
    pcVar11 = PushBack_exref;
    local_32c = CONCAT31(local_32c._1_3_,0x20);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_358,(void *)0x0);
LAB_10011a6a:
    (*pcVar11)();
    pcVar11 = *(code **)(*DAT_103663bc + 0x484);
LAB_10011a7d:
    (*pcVar11)();
    local_32c = local_32c & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_358);
    break;
  case 0x42:
    L2ParamStack::L2ParamStack(local_358,10);
    pcVar11 = PushBack_exref;
    local_32c = CONCAT31(local_32c._1_3_,0x21);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdc]);
    goto LAB_10011b43;
  case 0x43:
    L2ParamStack::L2ParamStack(local_358,10);
    pcVar11 = PushBack_exref;
    local_32c = CONCAT31(local_32c._1_3_,0x22);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdc]);
LAB_10011b43:
    (*pcVar11)();
    pcVar11 = *(code **)(*DAT_103663bc + 0x488);
    goto LAB_10011a7d;
  case 0x44:
  case 0x47:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30();
    }
    break;
  case 0x45:
    FUN_10142ea0();
    break;
  case 0x46:
    L2ParamStack::L2ParamStack(local_358,10);
    local_32c._0_1_ = 0x23;
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_358,(void *)0x1);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdd]);
    FUN_101482b0();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_358);
    break;
  case 0x48:
    pUVar5 = (User *)FUN_1014ddd0();
    if ((pUVar5 != (User *)0x0) && (*(int *)(pUVar5 + 8) == 0)) {
      L2ParamStack::L2ParamStack(local_348,10);
      local_32c._0_1_ = 8;
      puVar10 = User::GetName(pUVar5);
      L2ParamStack::PushBack(local_348,puVar10);
      local_35c[0] = 0;
      L2ParamStack::PushBack(local_348,local_35c);
      FUN_10144280();
      local_32c = (uint)local_32c._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_348);
    }
    break;
  case 0x49:
    FUN_10144180();
    break;
  case 0x4a:
    FString::FString(local_354,(ushort *)L"sendhome ");
    local_32c._0_1_ = 0x24;
    FString::operator+=(local_354,(FString *)(in_ECX + 0xd8));
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x25;
    puVar10 = FString::operator*(local_354);
    L2ParamStack::PushBack(local_348,puVar10);
    (**(code **)(*DAT_103663bc + 0x360))();
    local_32c._0_1_ = 0x24;
    goto LAB_10011c3c;
  case 0x4b:
    FString::FString(local_354,(ushort *)L"recall ");
    local_32c._0_1_ = 0x26;
    FString::operator+=(local_354,(FString *)(in_ECX + 0xd8));
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x27;
    puVar10 = FString::operator*(local_354);
    L2ParamStack::PushBack(local_348,puVar10);
    (**(code **)(*DAT_103663bc + 0x360))();
    local_32c._0_1_ = 0x26;
LAB_10011c3c:
    L2ParamStack::~L2ParamStack(local_348);
    local_32c = (uint)local_32c._1_3_ << 8;
    FString::~FString(local_354);
    break;
  case 0x4c:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x28;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    (**(code **)(*DAT_103663bc + 0x46c))();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x4d:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x29;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    FUN_10144480();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x4e:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x2a;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    FUN_10144260();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x4f:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x2b;
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    L2ParamStack::PushBack(local_348,puVar10);
    FUN_10144270();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x50:
switchD_1001051a_caseD_50:
    appRequestExit(0);
    break;
  case 0x51:
    L2ParamStack::L2ParamStack(local_358,10);
    local_32c._0_1_ = 0x2c;
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdb]);
    L2ParamStack::PushBack(local_358,(void *)in_ECX[0xdc]);
    puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
    pvVar12 = (void *)appAtoi(puVar10);
    L2ParamStack::PushBack(local_358,pvVar12);
    (**(code **)(*DAT_103663bc + 0x414))();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_358);
    break;
  case 0x52:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x2d;
    L2ParamStack::PushBack(local_348,(void *)0x1);
    L2ParamStack::PushBack(local_348,(void *)in_ECX[0xdb]);
    FUN_10143a20();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x53:
    FUN_1000ef40();
    local_32c._0_1_ = 0xb;
    FUN_1000dd30();
    FUN_1016e1b0();
    in_ECX[0xd1] = 0;
LAB_10010cba:
    local_32c = (uint)local_32c._1_3_ << 8;
    FUN_1000e440();
    goto LAB_10010cc1;
  case 0x54:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0xc;
    pvVar12 = (void *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    L2ParamStack::PushBack(local_348,pvVar12);
    L2ParamStack::PushBack(local_348,(void *)0x0);
    FUN_10171720();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x55:
    FUN_101441c0();
    break;
  case 0x56:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30();
    }
    break;
  case 0x57:
    if (in_ECX[0xcc] != 0) {
      FUN_1000cc30();
    }
    break;
  case 0x58:
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (iVar4 == 0) {
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x60) + 0x98))();
    }
    else {
      (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x60) + 0x98))();
    }
    break;
  case 0x59:
    L2ParamStack::L2ParamStack(local_348,10);
    local_32c._0_1_ = 0x2e;
    L2ParamStack::PushBack(local_348,(void *)0x1);
    FUN_1014a190();
    local_32c = (uint)local_32c._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_348);
    break;
  case 0x5a:
    FUN_1000eea0();
    local_45c = in_ECX[0xdb];
    local_454 = in_ECX[0xe7];
    iVar4 = FUN_1014dd00();
    if ((*(byte *)(*(int *)(iVar4 + 0x204) + 0x6ac) & 1) != 0) goto LAB_100105f1;
    puVar13 = &local_460;
LAB_1001064a:
    piVar6 = aiStackY_83c;
    for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *puVar13;
      puVar13 = puVar13 + 1;
      piVar6 = piVar6 + 1;
    }
LAB_10010654:
    FUN_1014c430();
    break;
  case 0x5b:
    puVar10 = (ushort *)(**(code **)(*(int *)in_ECX[0xc9] + 0x1f8))();
    if (puVar10 != (ushort *)0x0) {
      FString::FString(local_354,puVar10);
      local_32c = CONCAT31(local_32c._1_3_,0x2f);
      if (in_ECX[0xdb] == 0) {
        iVar4 = FUN_100651c0();
      }
      else {
        iVar4 = FUN_100652c0();
      }
      if (iVar4 == 0) {
        L2ParamStack::L2ParamStack(local_348,10);
        local_32c._0_1_ = 0x31;
        L2ParamStack::PushBack(local_348,(void *)in_ECX[0xdb]);
        L2ParamStack::PushBack(local_348,(void *)0x1);
        puVar10 = FString::operator*((FString *)(in_ECX + 0xd8));
        L2ParamStack::PushBack(local_348,puVar10);
        (**(code **)(*DAT_103663bc + 0x730))();
        local_32c._0_1_ = 0x2f;
        L2ParamStack::~L2ParamStack(local_348);
        local_32c = (uint)local_32c._1_3_ << 8;
        FString::~FString(local_354);
        goto LAB_10010cc1;
      }
      L2ParamStack::L2ParamStack(local_348,10);
      local_32c._0_1_ = 0x30;
      L2ParamStack::PushBack(local_348,(void *)in_ECX[0xdb]);
      L2ParamStack::PushBack(local_348,puVar10);
      L2ParamStack::PushBack(local_348,(void *)in_ECX[0xdc]);
      FUN_1014a1c0();
      local_32c._0_1_ = 0x2f;
      L2ParamStack::~L2ParamStack(local_348);
      local_32c = (uint)local_32c._1_3_ << 8;
      FString::~FString(local_354);
    }
  }
  (**(code **)(*in_ECX + 0x174))();
  (**(code **)(*in_ECX + 0x13c))();
  if ((int *)in_ECX[0xc9] != (int *)0x0) {
    iVar4 = (**(code **)(*(int *)in_ECX[0xc9] + 0x74))();
    if (iVar4 != 0) {
      (**(code **)(*(int *)in_ECX[0xc9] + 0x7c))();
    }
  }
  (**(code **)(*in_ECX + 0x7c))();
  in_ECX[0xd1] = 0;
LAB_10010cc1:
  ExceptionList = local_334;
  __security_check_cookie(local_8 ^ (uint)local_328);
  return;
}


// ==== 10012023 Catch@10012023

void Catch_10012023(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 10012037 Catch@10012037

void Catch_10012037(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCGaraDialogBox::OnOKBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100121d0 FUN_100121d0

void FUN_100121d0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d9358;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCDialogBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10012230 FUN_10012230

void FUN_10012230(byte param_1)

{
  void *in_ECX;
  
  FUN_100121d0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2d8);
  }
  return;
}


// ==== 10012260 FUN_10012260

void FUN_10012260(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d93c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCGaraDialogBox::vftable;
  in_ECX[0xb6] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xba] = 0;
  in_ECX[200] = 0;
  in_ECX[0xcc] = 0;
  in_ECX[0xcf] = 0;
  FString::FString((FString *)(in_ECX + 0xd5));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0xd8));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xe1));
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString((FString *)(in_ECX + 0xe4));
  in_ECX[0xca] = 0xffffffff;
  in_ECX[0xcd] = 0;
  in_ECX[0xdb] = 0;
  in_ECX[0xdc] = 0;
  in_ECX[0xd1] = 0;
  in_ECX[0xd2] = 0x132;
  in_ECX[0xd3] = 0x80;
  ExceptionList = local_c;
  return;
}


// ==== 10012350 FUN_10012350

void FUN_10012350(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101d9424;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCGaraDialogBox::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x390));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 900));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x360));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x354));
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 100123f0 FUN_100123f0

void FUN_100123f0(byte param_1)

{
  void *in_ECX;
  
  FUN_10012350();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3a0);
  }
  return;
}


// ==== 10012420 FUN_10012420

void FUN_10012420(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d9448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCDialogBox::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10012480 FUN_10012480

void FUN_10012480(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d9487;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10012420(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCWarningDialogBox::vftable;
  FString::FString((FString *)(in_ECX + 0xb9));
  in_ECX[0xbc] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10012500 FUN_10012500

void FUN_10012500(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101d94c7;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCWarningDialogBox::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x2e4));
  local_4 = 0xffffffff;
  FUN_100121d0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 10012570 FUN_10012570

void FUN_10012570(byte param_1)

{
  void *in_ECX;
  
  FUN_10012500();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2f4);
  }
  return;
}


// ==== 100125d0 FUN_100125d0

void FUN_100125d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d9514;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString((FString *)(in_ECX + 6));
  local_8 = 0;
  FString::FString((FString *)(in_ECX + 0xf));
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::FString((FString *)(in_ECX + 0x13));
  *in_ECX = 1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[9] = 0xffffffff;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x12] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1001266d Catch@1001266d

void Catch_1001266d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10012681 Catch@10012681

void Catch_10012681(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawItem::NCDrawItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100126a0 FUN_100126a0

void FUN_100126a0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d9554;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 3;
  FString::Empty((FString *)(in_ECX + 0x18));
  FString::Empty((FString *)(in_ECX + 0x3c));
  FString::Empty((FString *)(in_ECX + 0x4c));
  local_8 = 1;
  FString::~FString((FString *)(in_ECX + 0x4c));
  local_8 = local_8 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x3c));
  local_8 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x18));
  ExceptionList = local_10;
  return;
}


// ==== 10012738 Catch@10012738

void Catch_10012738(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001274c Catch@1001274c

void Catch_1001274c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawItem::~NCDrawItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10012770 FUN_10012770

bool FUN_10012770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 10012790 FUN_10012790

undefined4 FUN_10012790(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x174))();
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 100127ec Catch@100127ec

void Catch_100127ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10012800 Catch@10012800

void Catch_10012800(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawPanel::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10012820 UDrawPanelHandle::StaticClass

/* public: static class UClass * __cdecl UDrawPanelHandle::StaticClass(void) */

UClass * __cdecl UDrawPanelHandle::StaticClass(void)

{
                    /* 0x12820  930  ?StaticClass@UDrawPanelHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10012830 FUN_10012830

void FUN_10012830(byte param_1)

{
  FUN_100126a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10012860 FUN_10012860

undefined4 FUN_10012860(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  FUN_10068be0(param_1,in_ECX + 0x2d8,0,0,0,0);
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10012911 Catch@10012911

void Catch_10012911(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10012925 Catch@10012925

void Catch_10012925(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawPanel::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10012950 FUN_10012950

void FUN_10012950(undefined4 param_1)

{
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
  
  puStack_c = &LAB_101d95b0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_10065570(in_ECX + 0x2d8,param_1,&local_2c,0,1);
  ExceptionList = local_10;
  return;
}


// ==== 100129bc Catch@100129bc

void Catch_100129bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100129d0 Catch@100129d0

void Catch_100129d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawPanel::PreCheckPanelSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100129f0 FUN_100129f0

UObject * FUN_100129f0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UDrawPanelHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10012a20 FUN_10012a20

void FUN_10012a20(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d95d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2dc); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x2d8) + iVar1 * 4) != 0) {
      FUN_10012830(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x2dc); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x2d8),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 10012ab2 Catch@10012ab2

void Catch_10012ab2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10012ac6 Catch@10012ac6

void Catch_10012ac6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawPanel::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10012af0 FUN_10012af0

void FUN_10012af0(undefined4 param_1)

{
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d95fb;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = FUN_10004ed0(0x58);
  local_8._0_1_ = 1;
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_100125d0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10063240(param_1,local_18);
  FUN_100d9a30(&local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10012b82 Catch@10012b82

void Catch_10012b82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10012b96 Catch@10012b96

void Catch_10012b96(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawPanel::InsertDrawItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10012bc0 FUN_10012bc0

void FUN_10012bc0(void)

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
  
  puStack_c = &LAB_101d9620;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UDrawPanelHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_100129f0(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x10012c47;
    appFailAssert("m_pScriptHandle",".\\Src\\NDrawPanel.cpp",0x7d);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10012c7b Catch@10012c7b

void Catch_10012c7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10012c8f Catch@10012c8f

void Catch_10012c8f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawPanel::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10012cb0 FUN_10012cb0

void FUN_10012cb0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d9649;
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


// ==== 10012d50 FUN_10012d50

void FUN_10012d50(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d968f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCDrawPanel::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xb6));
  in_ECX[0xb9] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10012dce Catch@10012dce

void Catch_10012dce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10012de2 Catch@10012de2

void Catch_10012de2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawPanel::NCDrawPanel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10012e00 FUN_10012e00

void FUN_10012e00(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101d96c6;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCDrawPanel::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_10012cb0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 10012e70 FUN_10012e70

void FUN_10012e70(byte param_1)

{
  void *in_ECX;
  
  FUN_10012e00();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2e8);
  }
  return;
}


// ==== 10012eb0 FUN_10012eb0

bool FUN_10012eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == -0xfffffee) {
    iVar1 = (**(code **)(*in_ECX + 0x204))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffed) {
    iVar1 = (**(code **)(*in_ECX + 0x208))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffe8) {
    iVar1 = (**(code **)(*in_ECX + 0x20c))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffe6) {
    iVar1 = (**(code **)(*in_ECX + 0x210))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffec) {
    iVar1 = (**(code **)(*in_ECX + 0x214))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffeb) {
    iVar1 = (**(code **)(*in_ECX + 0x218))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffe9) {
    iVar1 = (**(code **)(*in_ECX + 0x21c))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffe7) {
    iVar1 = (**(code **)(*in_ECX + 0x220))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == -0xfffffe5) {
    iVar1 = (**(code **)(*in_ECX + 0x224))(param_2,param_3);
    return iVar1 != 0;
  }
  if (param_1 == 0x203) {
    iVar1 = (**(code **)(*in_ECX + 0x1bc))(param_2,param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10013050 FUN_10013050

void FUN_10013050(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d96f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  iVar2 = (**(code **)(*in_ECX + 0x74))();
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x7c))();
  }
  FUN_1005ff00();
  if (iVar1 != 0) {
    FUN_1005c280(in_ECX[0x2e]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100130d5 Catch@100130d5

void Catch_100130d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100130e9 Catch@100130e9

void Catch_100130e9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::HideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10013110 FUN_10013110

undefined4 FUN_10013110(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10138530();
  if (*(int *)(in_ECX + 0x2dc) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x2dc));
    *(undefined4 *)(in_ECX + 0x2dc) = 0;
  }
  if (*(int *)(in_ECX + 0x34c) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x34c));
    *(undefined4 *)(in_ECX + 0x34c) = 0;
  }
  if (*(int *)(in_ECX + 0x314) != 0) {
    *(undefined4 *)(in_ECX + 0x314) = 0;
  }
  *(undefined4 *)(in_ECX + 0x314) = 0;
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 100131af Catch@100131af

void Catch_100131af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100131c3 Catch@100131c3

void Catch_100131c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100131e0 FUN_100131e0

void FUN_100131e0(int param_1)

{
  int in_ECX;
  
  if (-1 < param_1) {
    *(int *)(in_ECX + 0x374) = param_1;
  }
  return;
}


// ==== 1001323a Catch@1001323a

void Catch_1001323a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001324e Catch@1001324e

void Catch_1001324e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::SetLimitedCharNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10013270 FUN_10013270

void FUN_10013270(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x364) = param_1;
  return;
}


// ==== 100132c6 Catch@100132c6

void Catch_100132c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100132da Catch@100132da

void Catch_100132da(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::SetShowStartNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10013300 FUN_10013300

void FUN_10013300(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9779;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x3f4),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1001336a Catch@1001336a

void Catch_1001336a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001337e Catch@1001337e

void Catch_1001337e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::SetDefaultString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100133a0 FUN_100133a0

void FUN_100133a0(wchar_t *param_1,wchar_t *param_2)

{
  __vswprintf(param_1,param_2,&stack0x0000000c);
  return;
}


// ==== 100133c0 FUN_100133c0

void FUN_100133c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort *puVar1;
  int in_ECX;
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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d97a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x344) == 0) {
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
    uVar3 = 0;
    puVar1 = FString::operator*((FString *)(in_ECX + 0x3b4));
    uVar2 = 0xffdcdcdc;
  }
  else {
    FUN_100218f0(param_1 + param_3,param_2,param_4,0xc,*(undefined4 *)(in_ECX + 0x354),1,0xff);
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
    uVar3 = 0;
    puVar1 = FString::operator*((FString *)(in_ECX + 0x3b4));
    uVar2 = 0xff000000;
  }
  FUN_100217a0(param_1 + param_3,param_2,uVar2,puVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
               uVar10,uVar11,uVar12,uVar13,uVar14);
  ExceptionList = local_10;
  return;
}


// ==== 100134af Catch@100134af

void Catch_100134af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100134c3 Catch@100134c3

void Catch_100134c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawCursorInKorean");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100134e0 FUN_100134e0

void FUN_100134e0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  FString *pFVar5;
  ushort *puVar6;
  int *in_ECX;
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
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d97e4;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_4 == 0) {
    iVar1 = FUN_10141550();
    if (((iVar1 == 7) && (iVar1 = (**(code **)(*in_ECX + 0x74))(), iVar1 != 0)) &&
       (in_ECX[0xd1] != 0)) {
      FUN_100217a0(param_3 + -1,param_2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
    }
  }
  else {
    local_14 = (undefined1 *)&uStack_50;
    iVar1 = FUN_10141550();
    if ((iVar1 != 5) && (iVar1 = FUN_10141550(), iVar1 != 7)) {
      for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 3) {
        FUN_100217a0(local_18 + param_1 + -2 + param_3,param_2 + 3,0xffdcdcdc,&DAT_10234780,0,0,0,0,
                     0,0,0,0,0,0,0,0xffffffff);
      }
    }
  }
  if (in_ECX[0xd7] != 0) {
    iVar1 = FUN_10141550();
    if (iVar1 == 6) {
      FString::Len((FString *)(in_ECX + 0xf0));
      uVar2 = FUN_101c19e0();
      uVar3 = FUN_101c19e0(uVar2);
      if (in_ECX[0xd6] == 0) {
        FUN_10021df0(in_ECX[0x20],in_ECX[0x21],uVar3,uVar2);
        param_5 = param_1 + param_3 + param_5;
        uVar16 = 0xff;
        uVar3 = 1;
        uVar2 = FUN_1003f630(L"Default.WhiteTexture",1);
        FUN_100218f0(param_5,param_2 + 6,0xc,0x30,uVar2,uVar3,uVar16);
        iVar1 = 0;
        while (local_20 = iVar1, iVar4 = FString::Len((FString *)(in_ECX + 0xf0)), iVar1 < iVar4) {
          if (iVar1 < in_ECX[0xfc]) {
            pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xf0),(int)local_34,iVar1);
            local_8._0_1_ = 4;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_5,param_2 + 6 + iVar1 * 0xc,0xff0000ff,puVar6,uVar2,uVar3,uVar16,
                         uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_34);
            iVar1 = iVar1 + 1;
          }
          else {
            pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xf0),(int)local_40,iVar1);
            local_8._0_1_ = 3;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_5,param_2 + 6 + iVar1 * 0xc,0xffff0000,puVar6,uVar2,uVar3,uVar16,
                         uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_40);
            iVar1 = iVar1 + 1;
          }
        }
      }
      else {
        FUN_10021df0(in_ECX[0x20],in_ECX[0x21] + -100,uVar3,uVar2);
        param_5 = param_1 + param_3 + param_5;
        uVar16 = 0xff;
        uVar3 = 1;
        uVar2 = FUN_1003f630(L"Default.WhiteTexture",1);
        FUN_100218f0(param_5,param_2 + -0x2a,0xc,0x30,uVar2,uVar3,uVar16);
        iVar1 = 0;
        while (local_1c = iVar1, iVar4 = FString::Len((FString *)(in_ECX + 0xf0)), iVar1 < iVar4) {
          if (iVar1 < in_ECX[0xfc]) {
            pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xf0),(int)local_40,iVar1);
            local_8._0_1_ = 2;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_5,param_2 + -0x2a + iVar1 * 0xc,0xff0000ff,puVar6,uVar2,uVar3,uVar16,
                         uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_40);
            iVar1 = iVar1 + 1;
          }
          else {
            iVar4 = param_2 + -0x2a + iVar1 * 0xc;
            uVar16 = 0xff;
            uVar3 = 1;
            uVar2 = FUN_1003f630(L"Default.GrayTexture",1);
            FUN_100218f0(param_5,iVar4,0xc,0xc,uVar2,uVar3,uVar16);
            pFVar5 = (FString *)FString::Mid((FString *)(in_ECX + 0xf0),(int)local_34,iVar1);
            local_8._0_1_ = 1;
            uVar15 = 0xffffffff;
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar3 = 0;
            uVar2 = 0;
            puVar6 = FString::operator*(pFVar5);
            FUN_100217a0(param_5,iVar4,0xffff0000,puVar6,uVar2,uVar3,uVar16,uVar7,uVar8,uVar9,uVar10
                         ,uVar11,uVar12,uVar13,uVar14,uVar15);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_34);
            iVar1 = iVar1 + 1;
          }
        }
      }
      FUN_100212e0();
    }
    else {
      iVar1 = FUN_10141550();
      if (iVar1 == 4) {
        param_5 = param_1 + param_3 + param_5;
        uVar16 = 0xff;
        uVar3 = 1;
        uVar2 = FUN_1003f630(L"Default.GrayTexture",1);
        FUN_100218f0(param_5,param_2,param_6,0xc,uVar2,uVar3,uVar16);
        uVar15 = 0xffffffff;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar16 = 0;
        uVar3 = 0;
        uVar2 = 0;
        puVar6 = FString::operator*((FString *)(in_ECX + 0xf0));
        FUN_100217a0(param_5,param_2,0xff000000,puVar6,uVar2,uVar3,uVar16,uVar7,uVar8,uVar9,uVar10,
                     uVar11,uVar12,uVar13,uVar14,uVar15);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100139a7 Catch@100139a7

void Catch_100139a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100139bb Catch@100139bb

void Catch_100139bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawCursorInTaiwan");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100139e0 FUN_100139e0

void FUN_100139e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  FString *this;
  ushort *puVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
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
  undefined4 uVar19;
  uint uStack_5c;
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9809;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0xf9] = param_3;
  local_2c = 0;
  if (in_ECX[0xc5] != 0) {
    local_24 = in_ECX;
    uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCJapaneseIME::RTTI_Type_Descriptor,0);
    local_18 = FUN_101c1ed6(uVar2);
    if (local_18 != 0) {
      local_1c = 0;
      local_28 = 0;
      iVar3 = 0;
      while (iVar6 = iVar3, local_38 = iVar6, iVar3 = FString::Len((FString *)(in_ECX + 0xed)),
            iVar6 < iVar3) {
        if (((*(byte *)(iVar6 + 0x2ad8 + local_18) & 1) != 0) && (local_28 == 0)) {
          local_28 = 1;
          in_ECX[0xf9] = param_1 + param_3 + param_4;
        }
        iVar1 = param_1 + param_3 + param_4;
        uVar19 = 1;
        this = (FString *)FString::Mid((FString *)(local_24 + 0xed),(int)local_4c,iVar6);
        local_8._0_1_ = 1;
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
        uVar8 = 0;
        uVar2 = 0;
        puVar4 = FString::operator*(this);
        local_20 = FUN_100217a0(iVar1,param_2,0xffdcdcdc,puVar4,uVar2,uVar8,uVar9,uVar10,uVar11,
                                uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        param_4 = param_4 + local_20;
        iVar7 = param_1 + param_3 + param_4;
        local_34 = iVar6 + 1;
        if (*(int *)(local_18 + 0x32dc + local_1c * 4) == local_34) {
          local_1c = local_1c + 1;
          iVar7 = iVar7 + -1;
        }
        local_2c = iVar7;
        iVar5 = (**(code **)(*local_24 + 0x74))(uVar19);
        iVar3 = local_34;
        in_ECX = local_24;
        if (iVar5 != 0) {
          if (((*(byte *)(iVar6 + 0x2ad8 + local_18) & 1) != 0) && (0 < local_20)) {
            local_30 = param_2 + 0xd;
            FUN_10020e80(iVar1,local_30,iVar7,param_2 + 0xe,0xffdcdcdc,0);
            FUN_10020e80(iVar1,local_30,iVar7,local_30,0xffdcdcdc,0);
          }
          if (((*(byte *)(iVar6 + 0x2ad8 + local_18) & 3) != 0) && (0 < local_20)) {
            FUN_10020e80(iVar1,param_2 + 0xd,iVar7,param_2 + 0xd,0xffdcdcdc,0);
          }
          if ((*(byte *)(iVar6 + 0x2ad8 + local_18) & 2) != 0) {
            FUN_10020e80(iVar1,param_2 + 0xd,iVar7,param_2 + 0xd,0xffdcdcdc,0);
          }
          iVar3 = local_34;
          in_ECX = local_24;
          if ((*(byte *)(iVar6 + 0x2ad8 + local_18) & 4) != 0) {
            FUN_10020e80(iVar1,param_2 + 0xd,iVar7,param_2 + 0xd,0xffff0000,0);
            iVar3 = local_34;
            in_ECX = local_24;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10013c2a Catch@10013c2a

void Catch_10013c2a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 10013c3e Catch@10013c3e

void Catch_10013c3e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawJapaneseAttribute");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10013c60 FUN_10013c60

void FUN_10013c60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  FString *this;
  ushort *puVar4;
  int iVar5;
  int *in_ECX;
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
  uint local_5c;
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9839;
  local_10 = ExceptionList;
  local_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0xf9] = param_3;
  local_1c = 0;
  if (in_ECX[0xc5] != 0) {
    local_18 = in_ECX;
    uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCKoreanIME::RTTI_Type_Descriptor,0);
    local_24 = FUN_101c1ed6(uVar2);
    if (local_24 != 0) {
      if (in_ECX[0xd6] == 0) {
        local_2c = param_2 + 0xd;
      }
      else {
        local_2c = param_2 + -1;
      }
      local_20 = 0;
      local_28 = 0;
      local_38 = 0;
      iVar3 = local_38;
      while (local_38 = iVar3, iVar1 = local_38, iVar3 = FString::Len((FString *)(local_18 + 0xed)),
            iVar1 < iVar3) {
        if (((*(byte *)(iVar1 + 0x2ad8 + local_24) & 1) != 0) && (local_28 == 0)) {
          local_28 = 1;
          local_18[0xf9] = param_1 + param_3 + param_4;
        }
        local_30 = param_3 + param_1 + param_4;
        uVar17 = 1;
        this = (FString *)FString::Mid((FString *)(local_18 + 0xed),(int)local_4c,iVar1);
        local_8._0_1_ = 1;
        uVar16 = 0xffffffff;
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar2 = 0;
        puVar4 = FString::operator*(this);
        local_34 = FUN_100217a0(local_30,param_2,0xffdcdcdc,puVar4,uVar2,uVar6,uVar7,uVar8,uVar9,
                                uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_4c);
        param_4 = param_4 + local_34;
        local_1c = param_3 + param_1 + param_4;
        iVar3 = iVar1 + 1;
        if (*(int *)(local_24 + 0x32dc + local_20 * 4) == iVar3) {
          local_20 = local_20 + 1;
          local_1c = local_1c + -1;
        }
        iVar5 = (**(code **)(*local_18 + 0x74))(uVar17);
        if ((iVar5 != 0) && ((*(byte *)(iVar1 + 0x2ad8 + local_24) & 4) != 0)) {
          FUN_10020e80(local_30,local_2c,local_1c,local_2c,0xffff0000,0);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10013e33 Catch@10013e33

void Catch_10013e33(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 10013e47 Catch@10013e47

void Catch_10013e47(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawKoreanAttribute");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10013e70 FUN_10013e70

void FUN_10013e70(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  int iVar6;
  int *in_ECX;
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
  undefined4 uVar19;
  uint uStack_6c;
  FString local_5c [12];
  FString local_50 [20];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101d9872;
  local_10 = ExceptionList;
  uStack_6c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  in_ECX[0xf9] = param_3;
  local_2c = 0;
  local_1c = 0;
  local_18 = in_ECX;
  uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCTaiwanIME::RTTI_Type_Descriptor,0);
  local_20 = FUN_101c1ed6(uVar2);
  if (local_20 != 0) {
    if (in_ECX[0xd6] == 0) {
      local_30 = param_2 + 0xd;
    }
    else {
      local_30 = param_2 + -1;
    }
    local_24 = 0;
    local_28 = 0;
    iVar3 = 0;
    while( true ) {
      iVar8 = iVar3;
      local_3c = iVar8;
      iVar3 = FString::Len((FString *)(in_ECX + 0xed));
      if (iVar3 <= iVar8) break;
      iVar1 = local_1c + param_1 + param_3;
      pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0xed),(int)local_50,iVar8);
      local_8 = 1;
      uVar19 = 0xffffffff;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar2 = 0;
      puVar5 = FString::operator*(pFVar4);
      iVar3 = FUN_100217a0(iVar1,param_2,0xffdcdcdc,puVar5,uVar2,uVar9,uVar10,uVar11,uVar12,uVar13,
                           uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
      local_8 = 0;
      local_34 = iVar3;
      FString::~FString(local_50);
      if (((*(byte *)(iVar8 + 0x2ad8 + local_20) & 1) != 0) && (local_28 == 0)) {
        local_28 = 1;
        local_18[0xf9] = iVar1;
        if (iVar3 == 0) {
          *param_4 = local_1c;
        }
      }
      local_1c = local_1c + iVar3;
      iVar7 = local_1c + param_1 + param_3;
      local_38 = iVar8 + 1;
      if (*(int *)(local_20 + 0x32dc + local_24 * 4) == local_38) {
        local_24 = local_24 + 1;
        iVar7 = iVar7 + -1;
      }
      local_2c = iVar7;
      iVar6 = (**(code **)(*local_18 + 0x74))();
      in_ECX = local_18;
      iVar3 = local_38;
      if (iVar6 != 0) {
        if (((*(byte *)(iVar8 + 0x2ad8 + local_20) & 1) != 0) && (0 < local_34)) {
          uVar10 = 0xff;
          uVar9 = 1;
          uVar2 = FUN_1003f630(L"Default.GrayTexture",1);
          FUN_100218f0(iVar1,param_2,iVar7 - iVar1,0xc,uVar2,uVar9,uVar10);
          pFVar4 = (FString *)FString::Mid((FString *)(local_18 + 0xed),(int)local_5c,iVar8);
          local_8 = 2;
          uVar19 = 0xffffffff;
          uVar18 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar2 = 0;
          puVar5 = FString::operator*(pFVar4);
          FUN_100217a0(iVar1,param_2,0xff000000,puVar5,uVar2,uVar9,uVar10,uVar11,uVar12,uVar13,
                       uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
          local_8 = 0;
          FString::~FString(local_5c);
        }
        in_ECX = local_18;
        iVar3 = local_38;
        if ((*(byte *)(iVar8 + 0x2ad8 + local_20) & 4) != 0) {
          FUN_10020e80(iVar1,local_30,iVar7,local_30,0xffff0000,0);
          in_ECX = local_18;
          iVar3 = local_38;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100140dd Catch@100140dd

void Catch_100140dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 100140f1 Catch@100140f1

void Catch_100140f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawTaiwanAttribute");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014110 thunk_FUN_1005fe50 thunk -> 1005fe50

// ==== 10014120 FUN_10014120

void FUN_10014120(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0x10) {
    *(undefined4 *)(in_ECX + 0x3cc) = 0;
    DAT_1036c670 = 0;
  }
  FUN_1005d510();
  return;
}


// ==== 10014140 FUN_10014140

ushort * FUN_10014140(void)

{
  FString *this;
  FString *pFVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9899;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = (FString *)FString::operator+((FString *)(in_ECX + 0x378),local_2c);
  local_8._0_1_ = 1;
  this = (FString *)(in_ECX + 0x390);
  FString::operator=(this,pFVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  iVar2 = FString::Len(this);
  if (iVar2 != 0) {
    if (*(int *)(in_ECX + 0x334) == 3) {
      iVar2 = 0;
      while( true ) {
        local_18 = iVar2;
        iVar3 = FString::Len(this);
        if (iVar3 <= iVar2) break;
        puVar4 = FString::operator[](this,iVar2);
        if (*puVar4 == 0x2c) {
          FString::Delete(this,iVar2,1);
        }
        iVar2 = iVar2 + 1;
      }
    }
    puVar4 = FString::operator*(this);
    ExceptionList = local_10;
    return puVar4;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 1001421e Catch@1001421e

void Catch_1001421e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10014232 Catch@10014232

void Catch_10014232(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::GetBuffer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014250 FUN_10014250

FString * FUN_10014250(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d98da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(FString *)(in_ECX + 0x378));
  ExceptionList = local_10;
  return param_1;
}


// ==== 100142b5 Catch@100142b5

void Catch_100142b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100142c9 Catch@100142c9

void Catch_100142c9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::GetForeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100142f0 FUN_100142f0

FString * FUN_100142f0(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d991a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(FString *)(in_ECX + 900));
  ExceptionList = local_10;
  return param_1;
}


// ==== 10014355 Catch@10014355

void Catch_10014355(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10014369 Catch@10014369

void Catch_10014369(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::GetBackString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014390 FUN_10014390

void FUN_10014390(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x348) = param_1;
  return;
}


// ==== 100143e6 Catch@100143e6

void Catch_100143e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100143fa Catch@100143fa

void Catch_100143fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::SetHighLight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014420 FUN_10014420

undefined4 FUN_10014420(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_34;
  undefined4 local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9969;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 1;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  FUN_10020bb0(local_24,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return local_24[0];
}


// ==== 100144a1 Catch@100144a1

void Catch_100144a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100144b5 Catch@100144b5

void Catch_100144b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::GetStrLen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100144e0 FUN_100144e0

void FUN_100144e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::Empty((FString *)(in_ECX + 0x378));
  FString::Empty((FString *)(in_ECX + 900));
  FString::Empty((FString *)(in_ECX + 0x3b4));
  *(undefined4 *)(in_ECX + 0x364) = 0;
  *(undefined4 *)(in_ECX + 0x340) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 10014565 Catch@10014565

void Catch_10014565(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10014579 Catch@10014579

void Catch_10014579(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100145a0 FUN_100145a0

void FUN_100145a0(void)

{
  FString *this;
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  int local_21c;
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  ushort local_208 [128];
  ushort local_108 [128];
  uint local_8;
  
  puStack_210 = &LAB_101d99b0;
  local_214 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_208;
  ExceptionList = &local_214;
  iVar5 = 0;
  local_20c = 0;
  local_21c = 0;
  puVar1 = FString::operator*((FString *)(in_ECX + 0xde));
  appStrcpy(local_208,puVar1);
  iVar2 = appStrlen(local_208);
  local_108[0] = 0;
  uVar3 = (**(code **)(*in_ECX + 0x1f8))();
  FUN_10062ee0(local_108,uVar3);
  for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
    if (local_108[iVar4] == 0x2c) {
      iVar5 = iVar5 + 1;
    }
  }
  for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
    if (local_208[iVar4] == 0x2c) {
      local_21c = local_21c + 1;
    }
  }
  iVar2 = iVar2 + (iVar5 - local_21c);
  this = (FString *)(in_ECX + 0xde);
  FString::operator=(this,local_108);
  iVar4 = FString::Len(this);
  if (iVar2 < iVar4) {
    puVar1 = FString::operator*(this);
    FString::operator=((FString *)(in_ECX + 0xe1),puVar1 + iVar2);
    iVar4 = FString::Len(this);
    FString::Delete(this,iVar2,iVar4 - iVar2);
  }
  if (*(int *)GLanguageType_exref == 5) {
    uVar3 = 0;
    piVar6 = in_ECX + 0xe7;
    puVar1 = FString::operator*(this);
    FUN_10021620(puVar1,piVar6,uVar3);
    uVar3 = 0;
    piVar6 = in_ECX + 0xea;
    puVar1 = FString::operator*((FString *)(in_ECX + 0xe1));
    FUN_10021620(puVar1,piVar6,uVar3);
  }
  if (in_ECX[0xdd] != 0) {
    iVar2 = FString::Len((FString *)(in_ECX + 0xe1));
    iVar4 = FString::Len(this);
    in_ECX[0xd0] = (uint)(iVar2 + iVar4 < in_ECX[0xdd]);
  }
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 1001475f Catch@1001475f

void Catch_1001475f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10014773 Catch@10014773

void Catch_10014773(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::SetCommaStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014790 FUN_10014790

undefined4 FUN_10014790(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  FString *pFVar4;
  FString *pFVar5;
  ushort *puVar6;
  int in_ECX;
  uint uVar7;
  bool bVar8;
  uint uStack_60;
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9a04;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  iVar2 = FUN_10141550();
  if (iVar2 != 0xd) {
    ExceptionList = local_10;
    return 0;
  }
  uVar3 = FUN_10024500(param_1);
  switch(uVar3) {
  case 1:
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_100147f4_caseD_1;
  case 3:
    pFVar5 = (FString *)(in_ECX + 0x378);
    iVar2 = FString::Len(pFVar5);
    if (iVar2 < 1) {
      ExceptionList = local_10;
      return 0;
    }
    pFVar4 = (FString *)FString::Right(pFVar5,(int)local_2c);
    local_8._0_1_ = 1;
    puVar6 = FString::operator*(pFVar4);
    uVar1 = *puVar6;
    local_8._0_1_ = 0;
    FString::~FString(local_2c);
    iVar2 = FString::Len(pFVar5);
    if (1 < iVar2) {
      pFVar4 = (FString *)FString::Right(pFVar5,(int)local_38);
      local_8._0_1_ = 2;
      puVar6 = FString::operator*(pFVar4);
      local_18 = (uint)*puVar6;
      local_8._0_1_ = 0;
      FString::~FString(local_38);
    }
    iVar2 = FUN_10024500(uVar1);
    if (iVar2 == 1) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = FUN_10024500(uVar1);
    if (iVar2 == 2) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = FUN_10024500(uVar1);
    if (iVar2 != 8) {
      ExceptionList = local_10;
      return 0;
    }
    iVar2 = FString::Len(pFVar5);
    if (iVar2 < 2) {
      ExceptionList = local_10;
      return 0;
    }
    uVar7 = local_18 & 0xffff;
    break;
  case 4:
    iVar2 = FString::Len((FString *)(in_ECX + 0x378));
    if (iVar2 < 1) {
      ExceptionList = local_10;
      return 0;
    }
    pFVar5 = (FString *)FString::Right((FString *)(in_ECX + 0x378),(int)local_44);
    local_8._0_1_ = 3;
    puVar6 = FString::operator*(pFVar5);
    uVar1 = *puVar6;
    local_8._0_1_ = 0;
    FString::~FString(local_44);
    uVar7 = (uint)uVar1;
    iVar2 = FUN_10024500(uVar7);
    if (iVar2 == 1) {
      ExceptionList = local_10;
      return 1;
    }
    break;
  case 8:
  case 9:
    iVar2 = FString::Len((FString *)(in_ECX + 0x378));
    if (iVar2 < 1) {
      ExceptionList = local_10;
      return 0;
    }
    pFVar5 = (FString *)FString::Right((FString *)(in_ECX + 0x378),(int)local_50);
    local_8._0_1_ = 4;
    puVar6 = FString::operator*(pFVar5);
    uVar1 = *puVar6;
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_50);
    iVar2 = FUN_10024500(uVar1);
    if (iVar2 == 1) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = FUN_10024500(uVar1);
    if (iVar2 == 2) {
      ExceptionList = local_10;
      return 1;
    }
    iVar2 = FUN_10024500(uVar1);
    bVar8 = iVar2 == 4;
    goto LAB_100148d5;
  default:
    goto switchD_100147f4_default;
  }
  iVar2 = FUN_10024500(uVar7);
  bVar8 = iVar2 == 2;
LAB_100148d5:
  if (!bVar8) {
switchD_100147f4_default:
    ExceptionList = local_10;
    return 0;
  }
switchD_100147f4_caseD_1:
  ExceptionList = local_10;
  return 1;
}


// ==== 100149df Catch@100149df

void Catch_100149df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100149f3 Catch@100149f3

void Catch_100149f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::IsValidThaiChar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014a40 FUN_10014a40

undefined4 FUN_10014a40(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0xfa0d05) {
    *(uint *)(in_ECX + 0x344) = (uint)(*(int *)(in_ECX + 0x344) == 0);
  }
  else if ((param_1 == 0xfa0d06) && (*(int *)(in_ECX + 0x2d8) != 0)) {
    FUN_10138600();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10014ac3 Catch@10014ac3

void Catch_10014ac3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10014ad7 Catch@10014ad7

void Catch_10014ad7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014b00 FUN_10014b00

void FUN_10014b00(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x334) = param_1;
  return;
}


// ==== 10014b10 FUN_10014b10

void FUN_10014b10(void)

{
  int in_ECX;
  
  FUN_1005c5b0();
  if (*(int *)(in_ECX + 0x314) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10014b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x314) + 0x1f8))();
    return;
  }
  return;
}


// ==== 10014b40 FUN_10014b40

undefined4 FUN_10014b40(void)

{
  int iVar1;
  FString *this;
  ushort *puVar2;
  FString *pFVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uStack_54;
  FString local_44 [16];
  FString local_34 [4];
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_24;
  int local_20;
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d9aa1;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  uVar5 = 0;
  local_1c = 0;
  local_8 = 0;
  in_ECX[0xd7] = 0;
  FString::Empty((FString *)(in_ECX + 0xf0));
  if (in_ECX[0xd0] != 0) {
    if (in_ECX[0xcd] == 3) {
      local_20 = 0;
      while( true ) {
        pFVar3 = (FString *)(in_ECX + 0xed);
        iVar1 = FString::Len(pFVar3);
        if (iVar1 <= local_20) break;
        this = (FString *)FString::Mid(pFVar3,(int)local_44,local_20);
        local_8 = CONCAT31(local_8._1_3_,1);
        uVar5 = uVar5 | 1;
        local_1c = uVar5;
        puVar2 = FString::operator*(this);
        if (*puVar2 < 0x30) {
LAB_10014c21:
          local_15 = '\x01';
        }
        else {
          pFVar3 = (FString *)FString::Mid(pFVar3,(int)local_34,local_20);
          local_8 = 2;
          uVar5 = 3;
          local_1c = 3;
          puVar2 = FString::operator*(pFVar3);
          local_15 = '\0';
          if (0x39 < *puVar2) goto LAB_10014c21;
        }
        local_8 = 1;
        if ((uVar5 & 2) != 0) {
          uVar5 = uVar5 & 0xfffffffd;
          local_1c = uVar5;
          FString::~FString(local_34);
        }
        local_8 = 0;
        if ((uVar5 & 1) != 0) {
          uVar5 = uVar5 & 0xfffffffe;
          local_1c = uVar5;
          FString::~FString(local_44);
        }
        if (local_15 != '\0') {
          ExceptionList = local_10;
          return 1;
        }
        local_20 = local_20 + 1;
      }
      puVar2 = FString::operator*((FString *)(in_ECX + 0xed));
    }
    else {
      puVar2 = (ushort *)FUN_10025d70();
    }
    if (puVar2 != (ushort *)0x0) {
      pFVar3 = (FString *)(in_ECX + 0xde);
      iVar1 = FString::Len(pFVar3);
      if (iVar1 < 1) {
        FString::operator=(pFVar3,puVar2);
        (**(code **)(*in_ECX + 0x228))();
        iVar1 = appStrlen(puVar2);
        if (((iVar1 == 1) && (*puVar2 == 0x22)) && (in_ECX[0xcd] == 1)) {
          uVar6 = FUN_10058020();
          FUN_1000cc30(uVar6);
        }
      }
      else {
        FString::operator+=(pFVar3,puVar2);
        (**(code **)(*in_ECX + 0x228))();
      }
      local_24 = &stack0xffffffa0;
      FString::FString((FString *)&stack0xffffffa0,pFVar3);
      local_8 = local_8 & 0xffffff00;
      iVar1 = FUN_10014420();
      local_24 = &stack0xffffffa0;
      FString::FString((FString *)&stack0xffffffa0,(FString *)(in_ECX + 0xed));
      local_8 = local_8 & 0xffffff00;
      local_24 = (undefined1 *)FUN_10014420();
      local_2c = &stack0xffffffa0;
      FString::FString((FString *)&stack0xffffffa0,(FString *)(in_ECX + 0xe1));
      local_8 = local_8 & 0xffffff00;
      iVar4 = FUN_10014420();
      if (iVar4 + (int)local_24 + iVar1 < in_ECX[0xdb] + -0xc) {
        puVar2 = FString::operator*(pFVar3);
        local_2c = &stack0xffffffa0;
        FString::FString((FString *)&stack0xffffffa0,puVar2 + in_ECX[0xd9]);
        local_8 = local_8 & 0xffffff00;
        iVar1 = FUN_10014420();
        iVar4 = FUN_101c19e0();
        if (iVar4 < iVar1 + 0xc) {
          pFVar3 = (FString *)FString::Mid(pFVar3,(int)local_44,in_ECX[0xd9]);
          local_8._0_1_ = 7;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          puVar2 = FString::operator*(pFVar3);
          FUN_10020bb0(&local_30,puVar2,uVar6,uVar7,uVar8,uVar9);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_44);
          if (local_30 < 0xc) {
            in_ECX[0xd9] = in_ECX[0xd9] + 2;
          }
          else {
            in_ECX[0xd9] = in_ECX[0xd9] + 1;
          }
          in_ECX[0xdc] = in_ECX[0xd9];
        }
      }
      FString::Empty((FString *)(in_ECX + 0xed));
    }
    if (in_ECX[0xdd] != 0) {
      iVar1 = FString::Len((FString *)(in_ECX + 0xe1));
      iVar4 = FString::Len((FString *)(in_ECX + 0xde));
      in_ECX[0xd0] = (uint)(iVar1 + iVar4 < in_ECX[0xdd]);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10014ea1 Catch@10014ea1

void Catch_10014ea1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10014eb5 Catch@10014eb5

void Catch_10014eb5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnNIMEResultStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10014ee0 FUN_10014ee0

undefined4 FUN_10014ee0(uint param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  FString aFStack_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d9adb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x35c) = 0;
  FString::Empty((FString *)(in_ECX + 0x3c0));
  if ((*(int *)(in_ECX + 0x334) != 3) || ((0x2f < param_1 && (param_1 < 0x3a)))) {
    puVar1 = (ushort *)FUN_10025d30();
    if (puVar1 != (ushort *)0x0) {
      if (param_1 == 0) {
        if (param_2 == 0) {
          uStack_38 = 0x10014f72;
          FString::operator=((FString *)(in_ECX + 0x3b4),puVar1);
        }
      }
      else if (param_1 == 1) {
        if (param_2 == 0) {
          FString::FString(aFStack_3c,(FString *)(in_ECX + 0x378));
          local_8 = local_8 & 0xffffff00;
          iVar3 = FUN_10014420();
          FString::FString(aFStack_3c,(FString *)(in_ECX + 0x3b4));
          local_8 = local_8 & 0xffffff00;
          iVar4 = FUN_10014420();
          FString::FString(aFStack_3c,(FString *)(in_ECX + 900));
          local_8 = local_8 & 0xffffff00;
          iVar2 = FUN_10014420();
          if (iVar2 + iVar4 + iVar3 < *(int *)(in_ECX + 0x36c) + -0xc) {
            uStack_38 = 0x1001501c;
            FString::operator=((FString *)(in_ECX + 0x3b4),puVar1);
          }
        }
        else if (param_2 == 1) {
          FString::Empty((FString *)(in_ECX + 0x3b4));
        }
      }
    }
    if (*(int *)(in_ECX + 0x374) != 0) {
      iVar3 = FString::Len((FString *)(in_ECX + 900));
      iVar4 = FString::Len((FString *)(in_ECX + 0x378));
      *(uint *)(in_ECX + 0x340) = (uint)(iVar3 + iVar4 < *(int *)(in_ECX + 0x374));
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1001507e Catch@1001507e

void Catch_1001507e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10015092 Catch@10015092

void Catch_10015092(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnNIMECandStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100150b0 FUN_100150b0

undefined4 FUN_100150b0(uint param_1,undefined4 param_2)

{
  FString *this;
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  FString aFStack_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d9b1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x35c) = 1;
  this = (FString *)(in_ECX + 0x3c0);
  FString::Empty(this);
  if ((*(int *)(in_ECX + 0x334) != 3) || ((0x2f < param_1 && (param_1 < 0x3a)))) {
    puVar1 = (ushort *)FUN_10025db0();
    if (puVar1 != (ushort *)0x0) {
      *(undefined4 *)(in_ECX + 0x3f0) = param_2;
      if (*(int *)(in_ECX + 0x374) == 0) {
        FString::FString(aFStack_3c,(FString *)(in_ECX + 0x378));
        local_8 = local_8 & 0xffffff00;
        iVar2 = FUN_10014420();
        FString::FString(aFStack_3c,(FString *)(in_ECX + 0x3b4));
        local_8 = local_8 & 0xffffff00;
        iVar3 = FUN_10014420();
        FString::FString(aFStack_3c,(FString *)(in_ECX + 900));
        local_8 = local_8 & 0xffffff00;
        iVar4 = FUN_10014420();
        if (iVar4 + iVar3 + iVar2 < *(int *)(in_ECX + 0x36c) + -0xc) {
          uStack_38 = 0x1001521f;
          FString::operator=(this,puVar1);
        }
      }
      else {
        iVar2 = FString::Len((FString *)(in_ECX + 900));
        iVar3 = FString::Len((FString *)(in_ECX + 0x378));
        if (iVar2 + iVar3 < *(int *)(in_ECX + 0x374)) {
          uStack_38 = 0x10015173;
          FString::operator=(this,puVar1);
          *(undefined4 *)(in_ECX + 0x340) = 1;
        }
        else {
          *(undefined4 *)(in_ECX + 0x340) = 0;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10015238 Catch@10015238

void Catch_10015238(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1001524c Catch@1001524c

void Catch_1001524c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnNIMEBopomofoStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10015270 FUN_10015270

undefined4 FUN_10015270(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_10025df0();
  if (iVar1 == 1) {
    FString::Empty((FString *)(in_ECX + 0x3b4));
  }
  return 1;
}


// ==== 100152a0 FUN_100152a0

undefined4 FUN_100152a0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3ec) = param_1;
  return 1;
}


// ==== 100152c0 FUN_100152c0

int FUN_100152c0(void)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [12];
  int local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9b52;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8._0_1_ = 1;
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  puVar2 = FString::operator*((FString *)(in_ECX + 0x378));
  FUN_10020bb0(local_24,puVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10);
  iVar1 = local_24[0];
  uVar4 = *(undefined4 *)(in_ECX + 0x3ec);
  pFVar3 = (FString *)FString::Left((FString *)(in_ECX + 0x3b4),(int)local_3c);
  local_8._0_1_ = 2;
  FString::operator=(local_30,pFVar3);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  uVar9 = 0;
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  puVar2 = FString::operator*(local_30);
  FUN_10020bb0(local_24,puVar2,uVar5,uVar6,uVar7,uVar8,uVar10,uVar9,uVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return local_24[0] + iVar1;
}


// ==== 100153a4 Catch@100153a4

void Catch_100153a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100153b8 Catch@100153b8

void Catch_100153b8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::GetCandCursorPos");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100153e0 FUN_100153e0

undefined4 FUN_100153e0(undefined4 param_1,ushort param_2)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uStack_60;
  FString local_50 [12];
  int local_44 [2];
  int local_3c [2];
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9b79;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x3cc) != 0) {
    iVar6 = (uint)param_2 - *(int *)(in_ECX + 0x80);
    *(undefined4 *)(in_ECX + 0x3d4) = 0;
    *(undefined4 *)(in_ECX + 0x3d0) = 0;
    iVar14 = in_ECX + 900;
    FString::operator+((FString *)(in_ECX + 0x378),local_50);
    local_8._0_1_ = 1;
    iVar7 = *(int *)(in_ECX + 0x3dc);
    if (iVar6 < iVar7) {
      iVar3 = FString::Len((FString *)(in_ECX + 0x378));
      iVar3 = iVar3 + -1;
      iVar7 = *(int *)(in_ECX + 0x3dc);
      local_20 = iVar3;
      do {
        if (iVar3 < 0) break;
        if (*(int *)(in_ECX + 0x334) == 2) {
          uVar2 = 0x2a;
        }
        else {
          puVar5 = FString::operator[]((FString *)(in_ECX + 0x378),iVar3);
          uVar2 = *puVar5;
          iVar3 = iVar3 + -1;
          local_20 = iVar3;
        }
        FUN_100216e0(local_34,uVar2,0);
        *(int *)(in_ECX + 0x3d4) = *(int *)(in_ECX + 0x3d4) + local_34[0];
        *(int *)(in_ECX + 0x3d0) = *(int *)(in_ECX + 0x3d0) + -1;
      } while (*(int *)(in_ECX + 0x3d4) < iVar7 - iVar6);
    }
    else if (iVar7 < iVar6) {
      local_1c = 0;
      iVar3 = iVar6 - iVar7;
      local_18 = iVar3;
      if (iVar7 == 0) {
        for (iVar7 = 0; local_24 = iVar7, local_18 = iVar3, iVar7 < *(int *)(in_ECX + 0x364);
            iVar7 = iVar7 + 1) {
          puVar5 = FString::operator[]((FString *)(in_ECX + 900),iVar7);
          FUN_100216e0(local_34,*puVar5,0);
          iVar3 = iVar3 + local_34[0];
        }
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        puVar5 = FString::operator*((FString *)(in_ECX + 0x378));
        FUN_10020bb0(local_3c,puVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,iVar14);
        iVar3 = iVar3 - local_3c[0];
        local_18 = iVar3;
      }
      do {
        iVar4 = FString::Len((FString *)(in_ECX + 900));
        iVar7 = local_1c;
        if (iVar4 <= local_1c) break;
        if (*(int *)(in_ECX + 0x334) == 2) {
          uVar2 = 0x2a;
        }
        else {
          puVar5 = FString::operator[]((FString *)(in_ECX + 900),local_1c);
          uVar2 = *puVar5;
          local_1c = iVar7 + 1;
        }
        FUN_100216e0(local_3c,uVar2,0);
        *(int *)(in_ECX + 0x3d4) = *(int *)(in_ECX + 0x3d4) + local_3c[0];
        *(int *)(in_ECX + 0x3d0) = *(int *)(in_ECX + 0x3d0) + 1;
      } while (*(int *)(in_ECX + 0x3d4) < iVar3);
    }
    FString::Delete(local_50,0,*(int *)(in_ECX + 0x364));
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    puVar5 = FString::operator*(local_50);
    FUN_10020bb0(local_44,puVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,iVar14);
    fVar1 = *(float *)(in_ECX + 0x88) - 10.0;
    if (((float)iVar6 <= fVar1) || ((float)local_44[0] <= fVar1)) {
      if ((iVar6 < 10) && (0 < *(int *)(in_ECX + 0x364))) {
        *(int *)(in_ECX + 0x364) = *(int *)(in_ECX + 0x364) + -1;
      }
    }
    else {
      *(int *)(in_ECX + 0x364) = *(int *)(in_ECX + 0x364) + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_50);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10015667 Catch@10015667

void Catch_10015667(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1001567b Catch@1001567b

void Catch_1001567b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100156a0 FUN_100156a0

undefined4 FUN_100156a0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3cc) = 0;
  *(undefined4 *)(in_ECX + 0x3d8) = 0;
  return 1;
}


// ==== 100156c0 FUN_100156c0

void FUN_100156c0(void)

{
  FString *this;
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_34;
  int local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9ba0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (FString *)(in_ECX + 0x378);
  iVar1 = FString::Len(this);
  *(int *)(in_ECX + 0x3d0) = -iVar1;
  if (*(int *)(in_ECX + 0x334) == 2) {
    FUN_100216e0(local_24,0x2a,0);
    iVar1 = FString::Len(this);
    local_24[0] = iVar1 * local_24[0];
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    puVar2 = FString::operator*(this);
    FUN_10020bb0(local_24,puVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *(int *)(in_ECX + 0x3d4) = local_24[0];
  ExceptionList = local_10;
  return;
}


// ==== 10015775 Catch@10015775

void Catch_10015775(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10015789 Catch@10015789

void Catch_10015789(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::AllSelect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100157b0 FUN_100157b0

bool FUN_100157b0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x338) == 1;
}


// ==== 10015803 Catch@10015803

void Catch_10015803(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10015817 Catch@10015817

void Catch_10015817(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::IsEnglishIMEOnly");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10015840 FUN_10015840

void FUN_10015840(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9be0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000cb20(8);
  ExceptionList = local_10;
  return;
}


// ==== 10015892 Catch@10015892

void Catch_10015892(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100158a6 Catch@100158a6

void Catch_100158a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::NotifyCursorMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100158d0 FUN_100158d0

undefined4 FUN_100158d0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9c00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005f620(param_1,param_2);
  FUN_10014390(0);
  ExceptionList = local_10;
  return 1;
}


// ==== 10015935 Catch@10015935

void Catch_10015935(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10015949 Catch@10015949

void Catch_10015949(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnDragItemEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10015970 FUN_10015970

undefined4 FUN_10015970(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9c20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100596e0();
  ExceptionList = local_10;
  return 1;
}


// ==== 100159be Catch@100159be

void Catch_100159be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100159d2 Catch@100159d2

void Catch_100159d2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnGotFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100159f0 FUN_100159f0

undefined4 FUN_100159f0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9c40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10059760();
  ExceptionList = local_10;
  return 1;
}


// ==== 10015a3e Catch@10015a3e

void Catch_10015a3e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10015a52 Catch@10015a52

void Catch_10015a52(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnLostFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10015a70 FUN_10015a70

void FUN_10015a70(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d9c69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10015ac0 FUN_10015ac0

int FUN_10015ac0(void)

{
  int iVar1;
  short *in_ECX;
  
  iVar1 = 1;
  if (in_ECX[1] != 0) {
    if (in_ECX[2] != 0) {
      iVar1 = 2;
    }
    if (in_ECX[3] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (*in_ECX != 0) {
      iVar1 = iVar1 + 1;
    }
    if (in_ECX[4] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (in_ECX[6] != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


// ==== 10015b00 FUN_10015b00

int FUN_10015b00(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x13c + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  sVar2 = in_ECX[7];
  if (sVar2 == 0) {
    if (in_ECX[1] != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x74))(in_ECX[1]);
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 4);
      }
      sVar2 = *in_ECX;
      if (sVar2 == 0) {
        return iVar4;
      }
      if (sVar2 == 0xe33) {
        sVar2 = 0xe32;
      }
      iVar3 = (**(code **)(*piVar1 + 0x74))(sVar2);
      if (iVar3 == 0) {
        return iVar4;
      }
      return iVar4 + *(int *)(iVar3 + 4);
    }
    sVar2 = *in_ECX;
    if ((sVar2 == 0) && (sVar2 = in_ECX[5], sVar2 == 0)) {
      return 0;
    }
  }
  iVar3 = (**(code **)(*piVar1 + 0x74))(sVar2);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 4);
  }
  return iVar4;
}


// ==== 10015ba0 UEditBoxHandle::StaticClass

/* public: static class UClass * __cdecl UEditBoxHandle::StaticClass(void) */

UClass * __cdecl UEditBoxHandle::StaticClass(void)

{
                    /* 0x15ba0  931  ?StaticClass@UEditBoxHandle@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10015bb0 FUN_10015bb0

void FUN_10015bb0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d9c99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10015c00 FUN_10015c00

void FUN_10015c00(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d9cc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10015c50 FUN_10015c50

void FUN_10015c50(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101d9cf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10015ca0 FUN_10015ca0

void FUN_10015ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10361a58,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10015cd0 FUN_10015cd0

undefined4 FUN_10015cd0(void)

{
  undefined4 uVar1;
  int iVar2;
  UPackage *pUVar3;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar4;
  wchar_t *pwStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *pwStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9d20;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_34 = 0x10015d09;
  FUN_10061b40();
  uStack_34 = 1;
  pwStack_38 = L"L2UI_CH3.Etc.inputbox1";
  uStack_3c = 0x10015d17;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x318) = uVar1;
  uStack_34 = 1;
  pwStack_38 = L"L2UI_CH3.Etc.inputbox2";
  uStack_3c = 0x10015d2b;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x31c) = uVar1;
  uStack_34 = 1;
  pwStack_38 = L"L2UI_CH3.Etc.inputbox3";
  uStack_3c = 0x10015d3f;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 800) = uVar1;
  uStack_34 = 1;
  pwStack_38 = L"L2UI_CH3.Etc.inputbox1_disable";
  uStack_3c = 0x10015d53;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x324) = uVar1;
  uStack_34 = 1;
  pwStack_38 = L"L2UI_CH3.Etc.inputbox2_disable";
  uStack_3c = 0x10015d67;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x328) = uVar1;
  uStack_34 = 1;
  pwStack_38 = L"L2UI_CH3.Etc.inputbox3_disable";
  uStack_3c = 0x10015d7b;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x32c) = uVar1;
  uStack_34 = 1;
  pwStack_38 = L"L2UI.MacroWnd.Macro_Line_HighLight";
  uStack_3c = 0x10015d8f;
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x330) = uVar1;
  uStack_34 = 0;
  pwStack_38 = (wchar_t *)0x1f4;
  uStack_3c = 0xfa0d05;
  uStack_40 = 0x10015da8;
  uVar1 = FUN_1003f600();
  *(undefined4 *)(in_ECX + 0x34c) = uVar1;
  uStack_40 = 0x10015dba;
  FString::Empty((FString *)(in_ECX + 0x378));
  uStack_40 = 0x10015dc6;
  FString::Empty((FString *)(in_ECX + 900));
  uStack_40 = 0x10015dd2;
  FString::Empty((FString *)(in_ECX + 0x3b4));
  if (*(int *)(in_ECX + 0x354) == 0) {
    uStack_40 = 1;
    pwStack_44 = L"Default.WhiteTexture";
    uVar1 = FUN_1003f630();
    *(undefined4 *)(in_ECX + 0x354) = uVar1;
  }
  uStack_40 = 1;
  pwStack_44 = L"Default.WhiteTexture";
  uVar1 = FUN_1003f630();
  *(undefined4 *)(in_ECX + 0x354) = uVar1;
  if (*(int *)(in_ECX + 0x358) == 0) {
    *(uint *)(in_ECX + 1000) = (-(uint)(*(int *)GLanguageType_exref != 3) & 0x22) - 0x11;
    iVar4 = extraout_ECX;
  }
  else {
    uStack_40 = 0x10015e17;
    iVar2 = FUN_10141550();
    iVar4 = extraout_ECX_00;
    if (iVar2 != 5) {
      uStack_40 = 0x10015e27;
      iVar2 = FUN_10141550();
      iVar4 = extraout_ECX_01;
      if (iVar2 != 7) {
        uStack_40 = 0x10015e37;
        iVar2 = FUN_10141550();
        iVar4 = extraout_ECX_02;
        if (iVar2 != 9) {
          uStack_40 = 0x10015e47;
          iVar2 = FUN_10141550();
          iVar4 = extraout_ECX_03;
          if (iVar2 != 0xc) {
            iVar4 = (-(uint)(*(int *)GLanguageType_exref != 2) & 0x112) - 0x89;
            *(int *)(in_ECX + 1000) = iVar4;
            goto LAB_10015e95;
          }
        }
      }
    }
    *(undefined4 *)(in_ECX + 1000) = 0x98;
  }
LAB_10015e95:
  uStack_40 = 0;
  pwStack_44 = (wchar_t *)iVar4;
  FName::FName((FName *)&pwStack_44,0);
  pUVar3 = UObject::GetTransientPackage();
  iVar4 = FUN_10015ca0(0x2e4,pUVar3);
  if (iVar4 == 0) {
    pwStack_44 = (wchar_t *)0x0;
  }
  else {
    uStack_40 = *(undefined4 *)(in_ECX + 0x338);
    pwStack_44 = *(wchar_t **)(in_ECX + 0x334);
    pwStack_44 = (wchar_t *)FUN_1002b600();
  }
  *(wchar_t **)(in_ECX + 0x314) = pwStack_44;
  uStack_40 = 2;
  uStack_40 = FUN_10060d40();
  pwStack_44 = L"뺃˘";
  FUN_1005c1e0();
  if (*(int *)(in_ECX + 0x2d8) != 0) {
    uStack_40 = 0;
    pwStack_44 = (wchar_t *)0x3e8;
    uVar1 = FUN_1003f600(0xfa0d06);
    *(undefined4 *)(in_ECX + 0x2dc) = uVar1;
    FUN_10138530();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10015f36 Catch@10015f36

void Catch_10015f36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10015f4a Catch@10015f4a

void Catch_10015f4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10015f70 FUN_10015f70

void FUN_10015f70(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  FString *pFVar2;
  ushort *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  FString *this;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uStack_7c;
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101d9d64;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_28 = in_ECX;
  uVar1 = FUN_100152c0();
  *(undefined4 *)(in_ECX + 0x3dc) = uVar1;
  if (*(int *)(in_ECX + 0x314) != 0) {
    uVar1 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCJapaneseIME::RTTI_Type_Descriptor,0);
    local_20 = FUN_101c1ed6(uVar1);
    if (local_20 != 0) {
      local_24 = 0;
      iVar4 = 0;
      local_1c = 0;
      local_2c = 0;
      while (iVar5 = local_2c, local_2c < *(int *)(local_20 + 0x42dc)) {
        this = (FString *)(in_ECX + 0x3b4);
        uVar12 = 1;
        pFVar2 = (FString *)FString::Mid(this,(int)local_48,local_2c);
        local_8 = 1;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar1 = 0;
        puVar3 = FString::operator*(pFVar2);
        FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
        local_8 = 0;
        FString::~FString(local_48);
        if (*(char *)(iVar5 + 0x2ad8 + local_20) == '\0') {
          if ((iVar5 == 0) || (*(char *)(iVar5 + 0x2ad7 + local_20) != '\0')) {
            iVar11 = iVar5;
            pFVar2 = (FString *)FString::Mid(this,(int)local_60,0);
            local_8 = 2;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            uVar1 = 0;
            puVar3 = FString::operator*(pFVar2);
            FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,iVar11);
            local_8 = 0;
            FString::~FString(local_60);
            local_24 = local_3c[0];
            uVar12 = 1;
            pFVar2 = (FString *)FString::Mid(this,(int)local_6c,iVar5);
            local_8 = 3;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            uVar1 = 0;
            puVar3 = FString::operator*(pFVar2);
            FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
            pFVar2 = local_6c;
          }
          else {
            uVar12 = 1;
            pFVar2 = (FString *)FString::Mid(this,(int)local_54,iVar5);
            local_8 = 4;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            uVar1 = 0;
            puVar3 = FString::operator*(pFVar2);
            FUN_10020bb0(local_3c,puVar3,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
            pFVar2 = local_54;
          }
          local_8 = 0;
          FString::~FString(pFVar2);
          iVar4 = iVar4 + local_3c[0];
          local_1c = iVar4;
        }
        in_ECX = local_28;
        local_2c = iVar5 + 1;
      }
      if (0 < iVar4) {
        for (iVar5 = 0; local_18 = iVar5, iVar5 < iVar4; iVar5 = iVar5 + 3) {
          FUN_100217a0(iVar5 + local_24 + param_1 + -2 + param_3,param_2 + 3,0xffdcdcdc,
                       &DAT_10234780,0,0,0,0,0,0,0,0,0,0,0,0xffffffff);
        }
      }
      if (*(int *)(local_28 + 0x344) != 0) {
        FUN_100217a0(param_1 + -1 + *(int *)(local_28 + 0x3dc),param_2,0xffdcdcdc,&DAT_10230ff8,0,0,
                     0,0,0,0,0,0,0,0,0,0xffffffff);
        FUN_100217a0(*(int *)(local_28 + 0x3dc) + param_1,param_2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0
                     ,0,0,0,0,0,0,0xffffffff);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10016239 Catch@10016239

void Catch_10016239(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 1001624d Catch@1001624d

void Catch_1001624d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawCursorInJapanese");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10016270 FUN_10016270

void FUN_10016270(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *in_ECX;
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
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uStack_74;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  FString local_54 [12];
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  FString local_24 [4];
  undefined8 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9db6;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  local_8 = 0;
  if (in_ECX[0xc5] == 0) {
    return;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_10025df0();
  if (iVar2 == 0) {
    iVar2 = FUN_10141550();
    if (iVar2 == 8) {
      local_20._4_4_ = 0;
      local_30 = 0;
      if (in_ECX[0xd6] == 0) {
        in_ECX[0xfa] = 0x11;
      }
      else {
        iVar2 = FUN_10141550();
        if (((iVar2 == 5) || (iVar2 = FUN_10141550(), iVar2 == 9)) ||
           (iVar2 = FUN_10141550(), iVar2 == 0xc)) {
          in_ECX[0xfa] = 0x98;
        }
        else {
          in_ECX[0xfa] = 0x89;
        }
      }
      iVar3 = FString::Len((FString *)(in_ECX + 0xde));
      iVar2 = local_20._4_4_;
      if (iVar3 <= in_ECX[0xd9]) {
        iVar2 = FString::Len((FString *)(in_ECX + 0xde));
        iVar2 = in_ECX[0xd9] - iVar2;
        local_20._4_4_ = iVar2;
      }
      while( true ) {
        local_18 = iVar2;
        iVar3 = FString::Len((FString *)(in_ECX + 0xed));
        if (iVar3 <= iVar2) break;
        uVar21 = 1;
        pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0xed),(int)local_54,iVar2);
        local_8._0_1_ = 1;
        uVar19 = 0;
        uVar16 = 0;
        uVar14 = 0;
        uVar12 = 0;
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = FString::operator*(pFVar4);
        FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,uVar21);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_54);
        local_38 = local_48[0] + local_30 + param_3;
        fVar1 = (float)local_38;
        if (local_38 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        if ((float)in_ECX[0x22] < fVar1) break;
        iVar2 = iVar2 + 1;
        local_30 = local_48[0] + local_30;
      }
      pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0xed),(int)local_54,local_20._4_4_);
      local_8._0_1_ = 2;
      uVar20 = 0xffffffff;
      uVar17 = 0;
      uVar15 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar21 = 0;
      uVar19 = 0;
      uVar16 = 0;
      uVar14 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar9 = 0;
      puVar5 = FString::operator*(pFVar4);
      FUN_100217a0(param_1 + param_3,param_2,0xffdcdcdc,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,
                   uVar19,uVar21,uVar11,uVar13,uVar15,uVar17,uVar20);
      local_8._0_1_ = 0;
      FString::~FString(local_54);
      for (iVar2 = 0; local_18 = iVar2, iVar2 < local_30; iVar2 = iVar2 + 3) {
        FUN_100217a0(iVar2 + param_1 + -2 + param_3,param_2 + 3,0xffdcdcdc,&DAT_10234780,0,0,0,0,0,0
                     ,0,0,0,0,0,0xffffffff);
      }
      local_28 = 0;
      local_34 = 0;
      if (in_ECX[0xc5] != 0) {
        uVar9 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCChineseIME::RTTI_Type_Descriptor,0);
        iVar2 = FUN_101c1ed6(uVar9);
        local_38 = iVar2;
        piVar6 = (int *)FUN_100246c0();
        if ((iVar2 != 0) && (iVar2 = local_20._4_4_, piVar6 != (int *)0x0)) {
          for (; local_18 = iVar2, iVar2 < *(int *)(local_38 + 0x42dc); iVar2 = iVar2 + 1) {
            uVar21 = 1;
            pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0xed),(int)local_54,iVar2);
            local_8._0_1_ = 3;
            uVar19 = 0;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar9 = 0;
            puVar5 = FString::operator*(pFVar4);
            FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,uVar21);
            local_8._0_1_ = 0;
            FString::~FString(local_54);
            if (*(char *)(local_38 + 0x2ad8 + iVar2) == '\x01') {
              local_34 = local_48[0];
              iVar3 = local_28 + param_1 + param_3;
              uVar12 = 0xff;
              uVar10 = 1;
              uVar9 = FUN_1003f630(L"Default.WhiteTexture",1);
              FUN_100218f0(iVar3,param_2,local_34,0xc,uVar9,uVar10,uVar12);
              uVar18 = 1;
              pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0xed),(int)local_24,local_18);
              local_8._0_1_ = 4;
              uVar20 = 0xffffffff;
              uVar17 = 0;
              uVar15 = 0;
              uVar13 = 0;
              uVar11 = 0;
              uVar21 = 0;
              uVar19 = 0;
              uVar16 = 0;
              uVar14 = 0;
              uVar12 = 0;
              uVar10 = 0;
              uVar9 = 0;
              puVar5 = FString::operator*(pFVar4);
              FUN_100217a0(iVar3,param_2,0xff000000,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,
                           uVar21,uVar11,uVar13,uVar15,uVar17,uVar20);
              local_8._0_1_ = 0;
              FString::~FString(local_24);
              piVar7 = (int *)FUN_100246a0(uVar18);
              iVar2 = local_18;
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 0xc0))(iVar3 + 5,param_2 + -10,0x32,0xf,0,0,3);
                iVar2 = local_18;
              }
            }
            local_28 = local_28 + local_48[0];
          }
          local_60 = 0;
          local_64 = 0;
          local_5c = 0.0;
          local_58 = 0.0;
          FUN_10058770(&local_64);
          if (in_ECX[0xd6] == 0) {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_58);
            uVar9 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_5c);
            iVar2 = in_ECX[0xfa];
          }
          else {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_58);
            uVar9 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_5c);
            iVar2 = -in_ECX[0xfa];
          }
          (**(code **)(*piVar6 + 0xc0))(in_ECX[0xf9],iVar2,(undefined4)local_20,uVar9,0,0,3);
          if (((local_34 == 0) && (iVar2 = (**(code **)(*in_ECX + 0x74))(), iVar2 != 0)) &&
             (in_ECX[0xd1] != 0)) {
            FUN_100217a0(local_28 + param_1 + -2 + param_3,param_2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,
                         0,0,0,0,0,0,0,0xffffffff);
          }
          local_2c = 0;
          iVar2 = FString::Len((FString *)(in_ECX + 0xde));
          if (in_ECX[0xd9] < iVar2) {
            iVar2 = in_ECX[0xd9];
            iVar3 = FString::Len((FString *)(in_ECX + 0xed));
            iVar3 = iVar3 - iVar2;
            pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0xed),(int)local_54,iVar2);
            local_8._0_1_ = 5;
            uVar19 = 0;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar9 = 0;
            puVar5 = FString::operator*(pFVar4);
            FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,iVar3);
            local_8._0_1_ = 0;
            FString::~FString(local_54);
            local_2c = local_48[0];
          }
          for (iVar2 = 0; iVar3 = local_38, local_18 = iVar2, iVar2 < *(int *)(local_38 + 0x42dc);
              iVar2 = iVar2 + 1) {
            uVar21 = 1;
            pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0xed),(int)local_54,iVar2);
            local_8._0_1_ = 6;
            uVar19 = 0;
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar10 = 0;
            uVar9 = 0;
            puVar5 = FString::operator*(pFVar4);
            FUN_10020bb0(local_48,puVar5,uVar9,uVar10,uVar12,uVar14,uVar16,uVar19,uVar21);
            local_8._0_1_ = 0;
            FString::~FString(local_54);
            iVar8 = FString::Len((FString *)(in_ECX + 0xde));
            if (in_ECX[0xd9] - iVar8 <= iVar2) {
              local_2c = local_2c + local_48[0];
            }
            if (*(char *)(iVar3 + 0x2ad8 + iVar2) == '\x01') break;
          }
          iVar3 = in_ECX[0xd9];
          iVar8 = FString::Len((FString *)(in_ECX + 0xde));
          if (iVar2 < iVar3 - iVar8) {
            in_ECX[0xd9] = iVar3 + -1;
            ExceptionList = local_10;
            return;
          }
          fVar1 = (float)local_2c;
          if (local_2c < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          if (fVar1 <= (float)in_ECX[0x22]) {
            ExceptionList = local_10;
            return;
          }
          in_ECX[0xd9] = iVar3 + 1;
          in_ECX[0xdc] = iVar3 + 1;
          ExceptionList = local_10;
          return;
        }
      }
      ExceptionList = local_10;
      return;
    }
    iVar2 = FUN_10141550();
    if (((((iVar2 == 10) || (iVar2 = FUN_10141550(), iVar2 == 9)) ||
         (iVar2 = FUN_10141550(), iVar2 == 0xb)) || (iVar2 = FUN_10141550(), iVar2 == 0xc)) &&
       ((iVar2 = (**(code **)(*in_ECX + 0x74))(), iVar2 != 0 && (in_ECX[0xd1] != 0)))) {
      FUN_100217a0(param_1 + -2 + param_3,param_2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0,0,0,
                   0xffffffff);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10016978 Catch@10016978

void Catch_10016978(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 1001698c Catch@1001698c

void Catch_1001698c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawCursorInChinese");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100169b0 FUN_100169b0

void FUN_100169b0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  ushort *puVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_58;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  int local_38 [4];
  int local_28;
  int local_24;
  undefined8 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9df2;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x314) != 0) {
    *(undefined4 *)(in_ECX + 0x3e4) = 0;
    uVar2 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCChineseIME::RTTI_Type_Descriptor,0);
    iVar3 = FUN_101c1ed6(uVar2);
    local_20 = CONCAT44(iVar3,(undefined4)local_20);
    if (iVar3 != 0) {
      iVar3 = FUN_10025df0();
      if (iVar3 != 0) {
        piVar6 = (int *)FUN_100246a0();
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x13c))();
        }
        ExceptionList = local_10;
        return;
      }
      local_18 = 0;
      iVar3 = FString::Len((FString *)(in_ECX + 0x378));
      if (*(int *)(in_ECX + 0x364) < iVar3) {
        while( true ) {
          local_24 = iVar7;
          iVar3 = FString::Len((FString *)(in_ECX + 0x3b4));
          if (iVar3 <= iVar7) break;
          uVar13 = 1;
          pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0x3b4),(int)&local_44,iVar7);
          local_8._0_1_ = 1;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar2 = 0;
          puVar5 = FString::operator*(pFVar4);
          FUN_10020bb0(local_38,puVar5,uVar2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString((FString *)&local_44);
          cVar1 = *(char *)(iVar7 + 0x2ad8 + local_20._4_4_);
          if ((cVar1 == '\x01') || (cVar1 == '\0')) break;
          local_18 = local_18 + local_38[0];
          iVar7 = iVar7 + 1;
        }
      }
      else {
        iVar7 = FString::Len((FString *)(in_ECX + 0x378));
        iVar7 = *(int *)(in_ECX + 0x364) - iVar7;
        while( true ) {
          local_28 = iVar7;
          iVar3 = FString::Len((FString *)(in_ECX + 0x3b4));
          if (iVar3 <= iVar7) break;
          uVar13 = 1;
          pFVar4 = (FString *)FString::Mid((FString *)(in_ECX + 0x3b4),(int)&local_44,iVar7);
          local_8._0_1_ = 2;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar2 = 0;
          puVar5 = FString::operator*(pFVar4);
          FUN_10020bb0(local_38,puVar5,uVar2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString((FString *)&local_44);
          cVar1 = *(char *)(iVar7 + 0x2ad8 + local_20._4_4_);
          if ((cVar1 == '\x01') || (cVar1 == '\0')) break;
          local_18 = local_18 + local_38[0];
          iVar7 = iVar7 + 1;
        }
      }
      piVar6 = (int *)FUN_100246a0();
      if (piVar6 == (int *)0x0) {
        appFailAssert("pCompositeBox",".\\Src\\NEditBox.cpp",0x313);
      }
      iVar7 = FUN_10141550();
      if ((((iVar7 == 10) || (iVar7 = FUN_10141550(), iVar7 == 9)) ||
          (iVar7 = FUN_10141550(), iVar7 == 0xb)) || (iVar7 = FUN_10141550(), iVar7 == 0xc)) {
        if (*(int *)(in_ECX + 0x358) == 0) {
          *(undefined4 *)(in_ECX + 1000) = 0x11;
        }
        else {
          iVar7 = FUN_10141550();
          if (((iVar7 == 5) || (iVar7 = FUN_10141550(), iVar7 == 9)) ||
             (iVar7 = FUN_10141550(), iVar7 == 0xc)) {
            *(undefined4 *)(in_ECX + 1000) = 0x98;
          }
          else {
            *(undefined4 *)(in_ECX + 1000) = 0x89;
          }
        }
        if (*(int *)(in_ECX + 0x360) == 0) {
          iVar7 = *(int *)(in_ECX + 1000);
          if (*(int *)(in_ECX + 0x358) != 0) {
            iVar7 = -iVar7;
          }
          (**(code **)(*piVar6 + 0xc0))(param_1 + param_3,iVar7,100,0xf,0,0,3);
        }
        (**(code **)(*piVar6 + 0x138))();
        piVar6 = (int *)FUN_100246c0();
        local_44 = 0;
        local_48 = 0;
        local_40 = 0.0;
        local_3c = 0.0;
        if (piVar6 != (int *)0x0) {
          FUN_10058770(&local_48);
          if (*(int *)(in_ECX + 0x358) == 0) {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_3c);
            uVar2 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_40);
            iVar7 = *(int *)(in_ECX + 1000);
          }
          else {
            local_20._0_4_ = (undefined4)(longlong)ROUND(local_3c);
            uVar2 = (undefined4)local_20;
            local_20 = (longlong)ROUND(local_40);
            iVar7 = -*(int *)(in_ECX + 1000);
          }
          (**(code **)(*piVar6 + 0xc0))
                    (*(undefined4 *)(in_ECX + 0x3e4),iVar7,(undefined4)local_20,uVar2,0,0,3);
        }
      }
      else {
        iVar7 = FUN_10141550();
        if (iVar7 == 8) {
          puVar5 = FString::operator*((FString *)(in_ECX + 0x3c0));
          FUN_100086c0(puVar5);
          (**(code **)(*piVar6 + 0xc0))
                    (local_18 + param_1 + 5 + param_3,param_2 + -10,0x32,0xf,0,0,3);
          iVar7 = FString::Len((FString *)(in_ECX + 0x3c0));
          if (iVar7 == 0) {
            (**(code **)(*piVar6 + 0x13c))();
          }
          else {
            (**(code **)(*piVar6 + 0x138))();
          }
        }
      }
      iVar7 = FUN_10141550();
      if (iVar7 != 10) {
        FUN_10007b80(0);
        ExceptionList = local_10;
        return;
      }
      FUN_10007b80(1);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10016e68 Catch@10016e68

void Catch_10016e68(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 10016e7c Catch@10016e7c

void Catch_10016e7c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DrawChineseAttribute");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10016ea0 FUN_10016ea0

void FUN_10016ea0(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  FString *pFVar4;
  ushort *puStack_48;
  int *piStack_44;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d9e34;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  local_8 = 0;
  if (in_ECX[0xd0] == 0) {
    return;
  }
  ExceptionList = &local_10;
  if (param_2 == 0) {
    FString::FString(local_2c);
    local_8._0_1_ = 1;
    pFVar4 = (FString *)(in_ECX + 0xde);
    piStack_44 = (int *)0x10016f2a;
    FString::operator=(local_2c,pFVar4);
    piStack_44 = (int *)0x10016f36;
    FString::operator=(pFVar4,param_1);
    piStack_44 = (int *)0x10016f42;
    FString::operator+=(pFVar4,local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
  }
  else {
    piStack_44 = (int *)0x10016f0b;
    local_14 = (undefined1 *)&uStack_3c;
    FString::operator+=((FString *)(in_ECX + 0xde),param_1);
  }
  pFVar4 = (FString *)(in_ECX + 0xde);
  (**(code **)(*in_ECX + 0x228))();
  if (in_ECX[0xcd] == 3) {
    FUN_100145a0();
  }
  if (*(int *)GLanguageType_exref == 5) {
    piStack_44 = in_ECX + 0xe7;
    puStack_48 = (ushort *)0x10016f8a;
    puStack_48 = FString::operator*(pFVar4);
    FUN_10021620();
    iVar1 = in_ECX[0xd9];
    FString::Mid(pFVar4,(int)&puStack_48,0);
    local_8 = local_8 & 0xffffff00;
    local_18 = FUN_1002ac60(iVar1);
    while( true ) {
      iVar1 = FString::Len(pFVar4);
      if (iVar1 < in_ECX[0xd9]) break;
      iVar1 = in_ECX[0xd9];
      iVar2 = FString::Len(pFVar4);
      iVar2 = iVar2 - iVar1;
      FString::Mid(pFVar4,(int)&puStack_48,iVar1);
      local_8 = local_8 & 0xffffff00;
      iVar2 = FUN_10014420(iVar2);
      piStack_44 = (int *)0x10017013;
      iVar3 = FUN_101c19e0();
      iVar1 = local_18;
      if (iVar2 <= iVar3 + -0xc) break;
      piStack_44 = (int *)0x10017032;
      iVar2 = FUN_10015ac0();
      in_ECX[0xd9] = in_ECX[0xd9] + iVar2;
      local_18 = iVar1 + 1;
    }
  }
  else {
    while( true ) {
      iVar1 = FString::Len(pFVar4);
      if (iVar1 < in_ECX[0xd9]) break;
      iVar1 = in_ECX[0xd9];
      iVar2 = FString::Len(pFVar4);
      iVar2 = iVar2 - iVar1;
      FString::Mid(pFVar4,(int)&puStack_48,iVar1);
      local_8 = local_8 & 0xffffff00;
      iVar1 = FUN_10014420(iVar2);
      piStack_44 = (int *)0x1001708f;
      iVar2 = FUN_101c19e0();
      if (iVar1 <= iVar2 + -0xc) break;
      in_ECX[0xd9] = in_ECX[0xd9] + 1;
    }
  }
  if (in_ECX[0xdd] != 0) {
    iVar1 = FString::Len((FString *)(in_ECX + 0xe1));
    iVar2 = FString::Len(pFVar4);
    in_ECX[0xd0] = (uint)(iVar1 + iVar2 < in_ECX[0xdd]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100170ed Catch@100170ed

void Catch_100170ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10017101 Catch@10017101

void Catch_10017101(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::AddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10017120 FUN_10017120

void FUN_10017120(int param_1)

{
  FString *this;
  FString *pFVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  FString *pFVar6;
  int *in_ECX;
  int *piVar7;
  undefined4 uVar8;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d9e74;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = FUN_10141550();
  if (in_ECX[0xf3] == 0) {
    in_ECX[0xf5] = 0;
    in_ECX[0xf4] = 0;
    iVar5 = FUN_10025df0();
    if ((((iVar5 == 1) || (iVar3 == 9)) || (iVar3 == 0xb)) || ((iVar3 == 10 || (iVar3 == 0xc)))) {
      this = (FString *)(in_ECX + 0xde);
      iVar3 = FString::Len(this);
      if (0 < iVar3) {
        if (*(int *)GLanguageType_exref == 5) {
          if ((uint)in_ECX[0xf7] < 0xd) {
            iVar3 = FUN_10015ac0();
            in_ECX[0xd9] = in_ECX[0xd9] - iVar3;
          }
          if (in_ECX[0xd9] < 0) {
            in_ECX[0xd9] = 0;
          }
          pFVar1 = (FString *)(in_ECX + 0xe1);
          FString::FString(local_30,pFVar1);
          local_8._0_1_ = 1;
          FString::Empty(pFVar1);
          local_18 = FUN_10015ac0();
          pFVar6 = (FString *)FString::Right(this,(int)local_3c);
          local_8._0_1_ = 2;
          FString::operator=(pFVar1,pFVar6);
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_3c);
          FString::operator+=(pFVar1,local_30);
          iVar3 = local_18;
          iVar5 = FString::Len(this);
          FString::Delete(this,iVar5 - local_18,iVar3);
          uVar8 = 0;
          piVar7 = in_ECX + 0xe7;
          puVar4 = FString::operator*(this);
          FUN_10021620(puVar4,piVar7,uVar8);
          uVar8 = 0;
          piVar7 = in_ECX + 0xea;
          puVar4 = FString::operator*(pFVar1);
          FUN_10021620(puVar4,piVar7,uVar8);
        }
        else {
          if ((uint)in_ECX[0xf7] < 0xd) {
            in_ECX[0xd9] = in_ECX[0xd9] + -1;
          }
          if (in_ECX[0xd9] < 0) {
            in_ECX[0xd9] = 0;
          }
          pFVar1 = (FString *)(in_ECX + 0xe1);
          FString::FString(local_30,pFVar1);
          local_8._0_1_ = 3;
          FString::Empty(pFVar1);
          pFVar6 = (FString *)FString::Right(this,(int)local_3c);
          local_8._0_1_ = 4;
          FString::operator=(pFVar1,pFVar6);
          local_8 = CONCAT31(local_8._1_3_,3);
          FString::~FString(local_3c);
          FString::operator+=(pFVar1,local_30);
          iVar5 = 1;
          iVar3 = FString::Len(this);
          FString::Delete(this,iVar3 + -1,iVar5);
          if ((in_ECX[0xcd] == 3) && (puVar4 = FString::operator[](pFVar1,0), *puVar4 == 0x2c)) {
            (**(code **)(*in_ECX + 0x198))(0x25,0);
          }
        }
        local_8 = local_8 & 0xffffff00;
        FString::~FString(local_30);
        if (param_1 != 0) {
          (**(code **)(*in_ECX + 0x22c))();
        }
      }
    }
    ExceptionList = local_10;
    return;
  }
  if (0 < in_ECX[0xf4]) {
    if (in_ECX[0xcd] == 2) {
      uVar2 = 0x2a;
    }
    else {
      puVar4 = FString::operator[]((FString *)(in_ECX + 0xe1),in_ECX[0xf4] + -1);
      uVar2 = *puVar4;
    }
    FUN_100216e0(&local_1c,uVar2,0);
    if (*(int *)GLanguageType_exref != 5) {
      in_ECX[0xf5] = in_ECX[0xf5] - local_1c;
      in_ECX[0xf4] = in_ECX[0xf4] + -1;
      ExceptionList = local_10;
      return;
    }
    iVar3 = FUN_10015b00(DAT_103663c0,0);
    in_ECX[0xf5] = in_ECX[0xf5] - iVar3;
    in_ECX[0xf4] = in_ECX[0xf4] + -1;
    ExceptionList = local_10;
    return;
  }
  if (*(int *)GLanguageType_exref == 5) {
    iVar3 = in_ECX[0xe8];
  }
  else {
    iVar3 = FString::Len((FString *)(in_ECX + 0xde));
  }
  if (-in_ECX[0xf4] < iVar3) {
    if (in_ECX[0xcd] == 2) {
      uVar2 = 0x2a;
    }
    else {
      iVar3 = FString::Len((FString *)(in_ECX + 0xde));
      puVar4 = FString::operator[]((FString *)(in_ECX + 0xde),iVar3 + -1 + in_ECX[0xf4]);
      uVar2 = *puVar4;
    }
    FUN_100216e0(&local_1c,uVar2,0);
    if (*(int *)GLanguageType_exref == 5) {
      local_1c = FUN_10015b00(DAT_103663c0,0);
    }
    in_ECX[0xf5] = in_ECX[0xf5] + local_1c;
    in_ECX[0xf4] = in_ECX[0xf4] + -1;
    if (in_ECX[0xf7] == in_ECX[0xf5] || in_ECX[0xf7] - in_ECX[0xf5] < 0) {
      piVar7 = in_ECX + 0xd9;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 < 0) {
        in_ECX[0xd9] = 0;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10017531 Catch@10017531

void Catch_10017531(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10017545 Catch@10017545

void Catch_10017545(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::MoveCursorLeft");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10017570 FUN_10017570

void FUN_10017570(int param_1)

{
  FString *pFVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  FString *pFVar7;
  int *in_ECX;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uStack_50;
  FString local_40 [12];
  int local_34 [2];
  int local_2c [4];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9eab;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = FUN_10141550();
  if (in_ECX[0xf3] == 0) {
    in_ECX[0xf5] = 0;
    in_ECX[0xf4] = 0;
    iVar6 = FUN_10025df0();
    if ((((iVar6 == 1) || (iVar4 == 9)) || (iVar4 == 0xb)) || ((iVar4 == 10 || (iVar4 == 0xc)))) {
      pFVar1 = (FString *)(in_ECX + 0xe1);
      iVar4 = FString::Len(pFVar1);
      if (0 < iVar4) {
        if (*(int *)GLanguageType_exref == 5) {
          if (0 < in_ECX[0xeb]) {
            fVar2 = (float)in_ECX[0xf7];
            if (in_ECX[0xf7] < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            if ((float)in_ECX[0x22] - 12.0 < fVar2 != ((float)in_ECX[0x22] - 12.0 == fVar2)) {
              iVar4 = FUN_10015ac0();
              in_ECX[0xd9] = in_ECX[0xd9] + iVar4;
            }
            piVar14 = in_ECX + 0xea;
            local_18 = FUN_10015ac0();
            pFVar7 = (FString *)FString::Left(pFVar1,(int)local_40);
            local_8._0_1_ = 2;
            FString::operator+=((FString *)(in_ECX + 0xde),pFVar7);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_40);
            FString::Delete(pFVar1,0,local_18);
            uVar8 = 0;
            piVar13 = in_ECX + 0xe7;
            puVar5 = FString::operator*((FString *)(in_ECX + 0xde));
            FUN_10021620(puVar5,piVar13,uVar8);
            uVar8 = 0;
            puVar5 = FString::operator*(pFVar1);
            FUN_10021620(puVar5,piVar14,uVar8);
          }
        }
        else {
          fVar2 = (float)in_ECX[0xf7];
          if (in_ECX[0xf7] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          if ((float)in_ECX[0x22] - 12.0 < fVar2 != ((float)in_ECX[0x22] - 12.0 == fVar2)) {
            in_ECX[0xd9] = in_ECX[0xd9] + 1;
          }
          pFVar7 = (FString *)FString::Left(pFVar1,(int)local_40);
          local_8._0_1_ = 3;
          FString::operator+=((FString *)(in_ECX + 0xde),pFVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_40);
          FString::Delete(pFVar1,0,1);
        }
        if ((in_ECX[0xcd] == 3) && (puVar5 = FString::operator[](pFVar1,0), *puVar5 == 0x2c)) {
          (**(code **)(*in_ECX + 0x198))(0x27,0);
        }
      }
      if (param_1 != 0) {
        (**(code **)(*in_ECX + 0x22c))();
      }
    }
    ExceptionList = local_10;
    return;
  }
  if (in_ECX[0xf4] < 0) {
    pFVar1 = (FString *)(in_ECX + 0xde);
    iVar4 = FString::Len(pFVar1);
    if (-iVar4 == in_ECX[0xf4] || -in_ECX[0xf4] < iVar4) {
      if (in_ECX[0xcd] == 2) {
        uVar3 = 0x2a;
      }
      else {
        iVar4 = FString::Len(pFVar1);
        puVar5 = FString::operator[](pFVar1,iVar4 + in_ECX[0xf4]);
        uVar3 = *puVar5;
      }
      FUN_100216e0(&local_1c,uVar3,0);
      if (*(int *)GLanguageType_exref == 5) {
        iVar4 = FUN_10015b00(DAT_103663c0,0);
        in_ECX[0xf5] = in_ECX[0xf5] - iVar4;
        in_ECX[0xf4] = in_ECX[0xf4] + 1;
      }
      else {
        in_ECX[0xf5] = in_ECX[0xf5] - local_1c;
        in_ECX[0xf4] = in_ECX[0xf4] + 1;
      }
    }
  }
  else {
    if (*(int *)GLanguageType_exref == 5) {
      iVar4 = in_ECX[0xeb];
    }
    else {
      iVar4 = FString::Len((FString *)(in_ECX + 0xe1));
    }
    if (in_ECX[0xf4] < iVar4) {
      if (in_ECX[0xcd] == 2) {
        uVar3 = 0x2a;
      }
      else {
        puVar5 = FString::operator[]((FString *)(in_ECX + 0xe1),in_ECX[0xf4]);
        uVar3 = *puVar5;
      }
      FUN_100216e0(&local_1c,uVar3,0);
      if (*(int *)GLanguageType_exref == 5) {
        local_1c = FUN_10015b00(DAT_103663c0,0);
      }
      in_ECX[0xf5] = in_ECX[0xf5] + local_1c;
      in_ECX[0xf4] = in_ECX[0xf4] + 1;
      piVar14 = in_ECX + 0xe1;
      FString::operator+((FString *)(in_ECX + 0xde),local_40);
      local_8._0_1_ = 1;
      iVar4 = in_ECX[0xd9];
      iVar6 = FString::Len(local_40);
      FString::Delete(local_40,iVar4,iVar6 - iVar4);
      uVar15 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      puVar5 = FString::operator*(local_40);
      FUN_10020bb0(local_2c,puVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar15,piVar14);
      uVar15 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      puVar5 = FString::operator*((FString *)(in_ECX + 0xde));
      FUN_10020bb0(local_34,puVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar15);
      fVar2 = (float)((in_ECX[0xf7] - local_2c[0]) + in_ECX[0xf5] + local_34[0]);
      if ((float)in_ECX[0x22] - 10.0 < fVar2 != ((float)in_ECX[0x22] - 10.0 == fVar2)) {
        piVar14 = in_ECX + 0xd9;
        *piVar14 = *piVar14 + 1;
        if (*piVar14 < 0) {
          in_ECX[0xd9] = 0;
        }
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_40);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100179c4 Catch@100179c4

void Catch_100179c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100179d8 Catch@100179d8

void Catch_100179d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::MoveCursorRight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10017a00 FUN_10017a00

undefined4 FUN_10017a00(uint param_1)

{
  FString *this;
  ushort *puVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  int in_ECX;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uStack_48;
  FString local_38 [12];
  int local_2c [4];
  FString *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101d9ed9;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x35c) = 0;
  FString::Empty((FString *)(in_ECX + 0x3c0));
  if (*(int *)(in_ECX + 0x334) == 3) {
    if (param_1 < 0x30) {
      ExceptionList = local_10;
      return 1;
    }
    if (0x39 < param_1) {
      ExceptionList = local_10;
      return 1;
    }
  }
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  puVar1 = FString::operator*((FString *)(in_ECX + 0x378));
  FUN_10020bb0(local_2c,puVar1,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  iVar5 = local_2c[0];
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  puVar1 = FString::operator*((FString *)(in_ECX + 900));
  FUN_10020bb0(local_2c,puVar1,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  iVar5 = iVar5 + local_2c[0];
  if (*(int *)(in_ECX + 0x374) == 0) {
    iVar2 = *(int *)(in_ECX + 0x36c) + -0xc;
    bVar6 = SBORROW4(iVar5,iVar2);
    iVar2 = iVar5 - iVar2;
  }
  else {
    iVar2 = FString::Len((FString *)(in_ECX + 900));
    iVar3 = FString::Len((FString *)(in_ECX + 0x378));
    bVar6 = SBORROW4(iVar2 + iVar3,*(int *)(in_ECX + 0x374));
    iVar2 = (iVar2 + iVar3) - *(int *)(in_ECX + 0x374);
  }
  if (bVar6 == iVar2 < 0) {
    *(undefined4 *)(in_ECX + 0x340) = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0x340) = 1;
  }
  if (*(int *)(in_ECX + 0x340) == 0) {
    ExceptionList = local_10;
    return 1;
  }
  this = (FString *)(in_ECX + 0x3b4);
  FString::Empty(this);
  puVar1 = (ushort *)FUN_10025d30();
  if (puVar1 != (ushort *)0x0) {
    FString::operator=(this,puVar1);
  }
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  puVar1 = FString::operator*(this);
  FUN_10020bb0(local_2c,puVar1,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  if (*(int *)(in_ECX + 0x374) == 0) {
    if (local_2c[0] + iVar5 < *(int *)(in_ECX + 0x36c) + -0xc) {
      *(undefined4 *)(in_ECX + 0x340) = 1;
    }
    else {
      local_18 = 0;
      while (iVar2 = FString::Len(this), local_18 < iVar2) {
        iVar2 = FString::Len(this);
        iVar2 = iVar2 + -1;
        pFVar4 = (FString *)FString::Left(this,(int)local_38);
        local_8._0_1_ = 1;
        FString::operator=(this,pFVar4);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_38);
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        puVar1 = FString::operator*(this);
        FUN_10020bb0(local_2c,puVar1,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,iVar2);
        if (local_2c[0] + iVar5 < *(int *)(in_ECX + 0x36c) + -0xc) break;
        local_18 = local_18 + 1;
      }
      iVar5 = FString::Len(this);
      if (local_18 == iVar5) {
        FString::Empty(this);
      }
      *(undefined4 *)(in_ECX + 0x340) = 0;
    }
  }
  else {
    iVar5 = FString::Len((FString *)(in_ECX + 900));
    iVar2 = FString::Len((FString *)(in_ECX + 0x378));
    *(uint *)(in_ECX + 0x340) = (uint)(iVar5 + iVar2 < *(int *)(in_ECX + 0x374));
  }
  iVar5 = FUN_10141550();
  if ((iVar5 == 10) || (iVar5 = FUN_10141550(), iVar5 == 9)) {
    iVar5 = FUN_100246a0();
    uVar7 = FUN_10024670(0,&NCIME::RTTI_Type_Descriptor,&NCChineseIME::RTTI_Type_Descriptor,0);
    iVar2 = FUN_101c1ed6(uVar7);
    if ((iVar2 != 0) && (iVar5 != 0)) {
      local_1c = (FString *)(iVar2 + 0x4328);
      puVar1 = FString::operator*(this);
      FUN_100086c0(puVar1);
      iVar5 = FString::Len(this);
      iVar2 = FString::Len(local_1c);
      if (iVar5 < iVar2) {
        FUN_10007ae0();
      }
      else {
        iVar5 = FString::Len(this);
        iVar2 = FString::Len(local_1c);
        if (iVar2 < iVar5) {
          FUN_10008540();
        }
      }
      puVar1 = FString::operator*(this);
      FUN_100086c0(puVar1);
    }
  }
  if (*(int *)(in_ECX + 0x374) != 0) {
    iVar5 = FString::Len((FString *)(in_ECX + 900));
    iVar2 = FString::Len((FString *)(in_ECX + 0x378));
    *(uint *)(in_ECX + 0x340) = (uint)(iVar5 + iVar2 < *(int *)(in_ECX + 0x374));
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10017d6a Catch@10017d6a

void Catch_10017d6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10017d7e Catch@10017d7e

void Catch_10017d7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnNIMECompStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10017da0 FUN_10017da0

undefined4 FUN_10017da0(int param_1)

{
  int iVar1;
  float fVar2;
  int in_ECX;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    FUN_100246c0();
    local_8 = 0.0;
    local_4 = 0;
    local_c = 0;
    local_10 = 0;
    FUN_10058770(&local_10);
    iVar1 = *(int *)(in_ECX + 0x3e4);
    fVar2 = (float)iVar1;
    if (iVar1 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = (fVar2 + local_8) - *(float *)(in_ECX + 0x88);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    local_18 = (int)(longlong)ROUND(fVar2);
    FUN_1000cc30(param_1,0xf0000016,iVar1 - local_18,*(undefined4 *)(in_ECX + 1000));
  }
  return 1;
}


// ==== 10017e60 FUN_10017e60

undefined4 FUN_10017e60(undefined4 param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  uint uStack_50;
  FString local_40 [12];
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101d9f12;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  if (in_ECX[0xf6] != 0) {
    local_14 = (undefined1 *)&uStack_50;
    FUN_100156c0();
    ExceptionList = local_10;
    return 1;
  }
  uVar2 = (uint)(ushort)(param_2 - (short)in_ECX[0x20]);
  uVar1 = in_ECX[0xf7];
  if (uVar2 < uVar1) {
    local_14 = (undefined1 *)&uStack_50;
    iVar3 = FString::Len((FString *)(in_ECX + 0xde));
    iVar3 = iVar3 + -1;
    local_1c = 0;
    iVar6 = in_ECX[0xf7];
    local_18 = iVar3;
    FString::FString(local_40,(FString *)(in_ECX + 0xde));
    local_8 = CONCAT31(local_8._1_3_,1);
    do {
      if (iVar3 < 0) break;
      puVar4 = FString::operator[](local_40,iVar3);
      iVar3 = iVar3 + -1;
      local_18 = iVar3;
      FUN_100216e0(local_34,*puVar4,0);
      iVar5 = iVar5 + local_34[0];
      local_1c = iVar5;
      (**(code **)(*in_ECX + 0x198))(0x25,0);
    } while (iVar5 < (int)(iVar6 - uVar2));
  }
  else {
    if (uVar2 <= uVar1) goto LAB_10017fd7;
    local_20 = 0;
    local_24 = 0;
    FString::FString(local_40,(FString *)(in_ECX + 0xe1));
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar6 = 0;
    do {
      iVar3 = FString::Len(local_40);
      if (iVar3 <= iVar5) break;
      puVar4 = FString::operator[](local_40,iVar5);
      iVar5 = iVar5 + 1;
      local_20 = iVar5;
      FUN_100216e0(local_34,*puVar4,0);
      iVar6 = iVar6 + local_34[0];
      local_24 = iVar6;
      (**(code **)(*in_ECX + 0x198))(0x27,0);
    } while (iVar6 < (int)(uVar2 - uVar1));
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_40);
LAB_10017fd7:
  in_ECX[0xf3] = 1;
  in_ECX[0xf5] = 0;
  in_ECX[0xf4] = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10018004 Catch@10018004

void Catch_10018004(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10018018 Catch@10018018

void Catch_10018018(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10018040 FUN_10018040

undefined4 FUN_10018040(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101d9f30;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = in_ECX[0xf4];
  if (iVar1 < 0) {
    ExceptionList = &local_10;
    in_ECX[0xf4] = 0;
    in_ECX[0xf5] = 0;
    for (local_18 = 0; local_18 < -iVar1; local_18 = local_18 + 1) {
      if ((*(int *)GLanguageType_exref == 5) && (-1 < in_ECX[0xe8] + -1)) {
        iVar2 = FUN_10015ac0();
        for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
          (**(code **)(*in_ECX + 0x198))(8,0);
        }
      }
      else {
        (**(code **)(*in_ECX + 0x198))(8,0);
      }
    }
  }
  else {
    if (iVar1 < 1) {
      return 0;
    }
    ExceptionList = &local_10;
    in_ECX[0xf4] = 0;
    in_ECX[0xf5] = 0;
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(*in_ECX + 0x198))(0x2e,0);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10018155 Catch@10018155

void Catch_10018155(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10018169 Catch@10018169

void Catch_10018169(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::DeleteClipBoard");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10018190 FUN_10018190

undefined4 FUN_10018190(void)

{
  FUN_10018040();
  return 1;
}


// ==== 100181a0 FUN_100181a0

UObject * FUN_100181a0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10368830);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 100181d0 FUN_100181d0

UObject * FUN_100181d0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UEditBoxHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10018200 UUIScript::eventOnChatMarkedEditBox

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnChatMarkedEditBox(class FString const &) */

void __thiscall UUIScript::eventOnChatMarkedEditBox(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x18200  1012  ?eventOnChatMarkedEditBox@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d9f6a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x10018248;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnChatMarkedEditBox,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10018290 UUIScript::eventOnChangeEditBox

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnChangeEditBox(class FString const &) */

void __thiscall UUIScript::eventOnChangeEditBox(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x18290  1011  ?eventOnChangeEditBox@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d9faa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x100182d8;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnChangeEditBox,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10018320 UUIScript::eventOnCompleteEditBox

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnCompleteEditBox(class FString const &) */

void __thiscall UUIScript::eventOnCompleteEditBox(UUIScript *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void *unaff_EDI;
  undefined4 *puStack_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x18320  1019  ?eventOnCompleteEditBox@UUIScript@@QAEXABVFString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101d9fea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_2c = (undefined4 *)0x10018368;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  puStack_2c = local_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnCompleteEditBox,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 100183b0 FUN_100183b0

void FUN_100183b0(int param_1)

{
  FString *this;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piStack_3a4;
  uint uStack_398;
  int local_378;
  int local_374;
  int *local_370;
  undefined4 local_36c;
  int local_368;
  int local_364;
  FString local_360 [4];
  int local_35c;
  undefined1 *local_358;
  int local_354;
  int local_350;
  int local_34c [2];
  int local_344;
  int local_340;
  int local_33c;
  undefined1 *local_338;
  void *local_334;
  undefined1 *puStack_330;
  uint local_32c;
  ushort local_328 [400];
  uint local_8;
  
  puStack_330 = &LAB_101da022;
  local_334 = ExceptionList;
  uStack_398 = DAT_103554c4 ^ (uint)local_328;
  local_338 = (undefined1 *)&uStack_398;
  ExceptionList = &local_334;
  local_32c = 0;
  piStack_3a4 = (int *)0x10018411;
  local_8 = uStack_398;
  FUN_10002f40();
  FUN_101c19e0();
  FUN_101c19e0();
  piStack_3a4 = (int *)in_ECX[0x21];
  FUN_10021df0(in_ECX[0x20]);
  local_36c = 0xffdcdcdc;
  if (in_ECX[0xcd] == 3) {
    piStack_3a4 = (int *)0x10018465;
    FString::operator+((FString *)(in_ECX + 0xde),local_360);
    local_32c._0_1_ = 1;
    FString::operator*(local_360);
    piStack_3a4 = (int *)0x1001847a;
    local_36c = FUN_1005a050();
    FString::Empty(local_360);
    local_32c = (uint)local_32c._1_3_ << 8;
    FString::~FString(local_360);
  }
  iVar2 = (**(code **)(*in_ECX + 0x74))();
  if (iVar2 == 0) {
    if (in_ECX[0xc9] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar12 = 8;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar9,uVar12);
    }
    if (in_ECX[0xca] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar13 = 8;
      uVar12 = 0;
      uVar9 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar9,uVar12,uVar13);
    }
    iVar2 = in_ECX[0xcb];
  }
  else {
    if (in_ECX[0xc6] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar12 = 8;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      FUN_10021970(0,0,8,uVar3,uVar7,uVar9,uVar12);
    }
    if (in_ECX[199] != 0) {
      piStack_3a4 = (int *)0x11;
      uVar13 = 8;
      uVar12 = 0;
      uVar9 = 0;
      uVar3 = FUN_101c19e0(0,0,8);
      uVar7 = FUN_101c19e0(uVar3);
      FUN_10021970(8,0,uVar7,uVar3,uVar9,uVar12,uVar13);
    }
    iVar2 = in_ECX[200];
  }
  if (iVar2 != 0) {
    piStack_3a4 = (int *)0x11;
    uVar14 = 8;
    uVar10 = 0;
    uVar13 = 0;
    uVar3 = FUN_101c19e0(0,0,8);
    uVar12 = 8;
    uVar9 = 0;
    uVar7 = FUN_101c19e0(0,8,uVar3);
    FUN_10021970(uVar7,uVar9,uVar12,uVar3,uVar13,uVar10,uVar14);
  }
  if ((in_ECX[0xd2] != 0) && (in_ECX[0xcc] != 0)) {
    piStack_3a4 = (int *)0x10;
    uVar13 = 0xc1;
    uVar12 = 0;
    uVar9 = 0;
    uVar3 = FUN_101c19e0(0,0,0xc1);
    uVar7 = FUN_101c19e0(uVar3);
    FUN_10021970(0,0,uVar7,uVar3,uVar9,uVar12,uVar13);
  }
  local_370 = (int *)in_ECX[0xda];
  if ((int)local_370 < 1) {
    iVar2 = FUN_101c19e0();
  }
  else {
    iVar2 = FUN_101c19e0();
  }
  in_ECX[0xdb] = iVar2;
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xde));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  iVar2 = local_34c[0];
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  iVar2 = iVar2 + local_34c[0];
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xe1));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  if (in_ECX[0xdd] == 0) {
    in_ECX[0xd0] = (uint)(iVar2 + local_34c[0] < in_ECX[0xdb] + -0xc);
  }
  local_354 = 0;
  local_370 = (int *)0x0;
  if (in_ECX[0xcd] == 2) {
    for (iVar2 = 0; iVar5 = FString::Len((FString *)(in_ECX + 0xde)), iVar2 < iVar5;
        iVar2 = iVar2 + 1) {
      local_328[iVar2] = 0x2a;
    }
    local_328[iVar2] = 0;
    piStack_3a4 = (int *)0x0;
    piVar6 = (int *)FUN_100217a0(2,2,0xffdcdcdc,local_328,0,0,0,0,0,0,0,0,0);
  }
  else {
    iVar2 = FString::Len((FString *)(in_ECX + 0xde));
    if (in_ECX[0xd9] < iVar2) {
      piStack_3a4 = (int *)0x0;
      uVar11 = 0;
      uVar8 = 0;
      uVar14 = 0;
      uVar10 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*((FString *)(in_ECX + 0xde));
      piVar6 = (int *)FUN_100217a0(2,2,local_36c,puVar4 + in_ECX[0xd9],uVar3,uVar7,uVar9,uVar12,
                                   uVar13,uVar10,uVar14,uVar8,uVar11);
      iVar2 = FString::Len((FString *)(in_ECX + 0xde));
      if (0 < iVar2) {
        puVar4 = FString::operator*((FString *)(in_ECX + 0xde));
        local_358 = (undefined1 *)&piStack_3a4;
        FString::FString((FString *)&piStack_3a4,puVar4 + in_ECX[0xd9]);
        local_32c = local_32c & 0xffffff00;
        piVar6 = (int *)FUN_10014420();
      }
    }
    else {
      piVar6 = (int *)0x0;
    }
  }
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  local_33c = local_34c[0];
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xf0));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  local_354 = local_34c[0];
  if ((local_34c[0] != 0) && (iVar2 = FUN_10141550(), iVar2 == 6)) {
    local_354 = 0xc;
  }
  if (in_ECX[0xcd] != 2) {
    iVar2 = *(int *)GLanguageType_exref;
    if (iVar2 == 2) {
      piStack_3a4 = piVar6;
      FUN_100139e0(2,2);
    }
    else if (iVar2 == 0) {
      piStack_3a4 = piVar6;
      FUN_10013c60(2,2);
    }
    else if (iVar2 == 3) {
      piStack_3a4 = piVar6;
      FUN_10013e70(2,2);
    }
    else if (iVar2 == 4) {
      piStack_3a4 = (int *)0x2;
      FUN_100169b0(2);
    }
    if (in_ECX[0xcd] != 2) {
      iVar2 = FUN_10141550();
      if ((iVar2 == 10) || (iVar2 = FUN_10141550(), iVar2 == 9)) {
        local_34c[0] = 0;
      }
      else {
        piStack_3a4 = (int *)0x0;
        uVar9 = 0;
        uVar7 = 0;
        uVar3 = 0;
        puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
        FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
      }
      iVar2 = FString::Len((FString *)(in_ECX + 0xde));
      if (iVar2 < in_ECX[0xd9]) {
        iVar2 = FString::Len((FString *)(in_ECX + 0xde));
        local_358 = (undefined1 *)(in_ECX[0xd9] - iVar2);
        piStack_3a4 = (int *)0x0;
        uVar15 = 0;
        uVar11 = 0;
        uVar8 = 0;
        uVar14 = 0;
        uVar10 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar9 = 0;
        uVar7 = 0;
        puVar4 = FString::operator*((FString *)(in_ECX + 0xe1));
        puVar4 = puVar4 + (int)local_358;
        uVar3 = local_36c;
      }
      else {
        piStack_3a4 = (int *)0x0;
        uVar15 = 0;
        uVar11 = 0;
        uVar8 = 0;
        uVar14 = 0;
        uVar10 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar9 = 0;
        uVar7 = 0;
        puVar4 = FString::operator*((FString *)(in_ECX + 0xe1));
        uVar3 = local_36c;
      }
      goto LAB_10018a3f;
    }
  }
  local_350 = 0;
  while (iVar2 = FString::Len((FString *)(in_ECX + 0xe1)), local_350 < iVar2) {
    local_328[local_350] = 0x2a;
    local_350 = local_350 + 1;
  }
  local_328[local_350] = 0;
  piStack_3a4 = (int *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xed));
  FUN_10020bb0(local_34c,puVar4,uVar3,uVar7,uVar9);
  piStack_3a4 = (int *)0x0;
  uVar15 = 0;
  uVar11 = 0;
  uVar8 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar3 = 0xffdcdcdc;
  puVar4 = local_328;
LAB_10018a3f:
  FUN_100217a0((int)piVar6 + local_34c[0] + local_354 + 2,2,uVar3,puVar4,uVar7,uVar9,uVar12,uVar13,
               uVar10,uVar14,uVar8,uVar11,uVar15);
  iVar2 = (**(code **)(*in_ECX + 0x1f8))();
  if (((iVar2 == 0) && (iVar2 = (**(code **)(*in_ECX + 0x74))(), iVar2 == 0)) &&
     (iVar2 = FString::operator_int((FString *)(in_ECX + 0xfd)), iVar2 != 0)) {
    piStack_3a4 = (int *)0x0;
    uVar11 = 0;
    uVar8 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar3 = 0;
    puVar4 = FString::operator*((FString *)(in_ECX + 0xfd));
    FUN_100217a0(2,2,0xff787878,puVar4,uVar3,uVar7,uVar9,uVar12,uVar13,uVar10,uVar14,uVar8,uVar11);
  }
  if ((in_ECX[0xc5] == 0) || (iVar2 = FUN_10025df0(), iVar2 != 0)) {
    in_ECX[0xf7] = local_33c + (int)piVar6;
    if (in_ECX[0xf4] == 0) {
      this = (FString *)(in_ECX + 0xde);
      piStack_3a4 = (int *)0x0;
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = 0;
      puVar4 = FString::operator*(this);
      FUN_10020bb0(&local_374,puVar4,uVar3,uVar7,uVar9);
      iVar2 = in_ECX[0xf7];
      local_358 = (undefined1 *)(float)iVar2;
      if (iVar2 < 0) {
        local_358 = (undefined1 *)((float)local_358 + 4.2949673e+09);
      }
      if ((float)in_ECX[0x22] < (float)local_358 == ((float)in_ECX[0x22] == (float)local_358)) {
        local_33c = local_374 - iVar2;
        local_364 = 0;
        local_340 = 0;
        while (iVar2 = FString::Len(this), local_340 < iVar2) {
          FString::operator[](this,local_340);
          piStack_3a4 = &local_35c;
          FUN_100216e0();
          if (local_33c <= local_364) {
            in_ECX[0xd9] = local_340;
            break;
          }
          local_364 = local_364 + local_35c;
          local_340 = local_340 + 1;
        }
        if (local_33c <= local_364) {
          in_ECX[0xd9] = local_340;
        }
      }
      else {
        local_33c = FUN_101c19e0();
        local_368 = 0;
        local_344 = in_ECX[0xd9];
        while (iVar2 = FString::Len(this), local_344 < iVar2) {
          FString::operator[](this,local_344);
          piStack_3a4 = &local_35c;
          FUN_100216e0();
          if (local_33c <= local_368) {
            in_ECX[0xd9] = local_344;
            break;
          }
          local_368 = local_368 + local_35c;
          local_344 = local_344 + 1;
        }
        if (local_33c <= local_368) {
          in_ECX[0xd9] = local_344;
        }
      }
    }
    if (((in_ECX[0xcf] != 0) && (iVar2 = (**(code **)(*in_ECX + 0x74))(), iVar2 != 0)) &&
       (in_ECX[0xd1] != 0)) {
      piStack_3a4 = (int *)0x0;
      FUN_100217a0(in_ECX[0xf7] + -1,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
    if (in_ECX[0xf4] < 0) {
      piStack_3a4 = (int *)in_ECX[0xd5];
      FUN_100218f0((in_ECX[0xf7] - in_ECX[0xf5]) + 2,2,in_ECX[0xf5],0xc);
    }
    else if (0 < in_ECX[0xf4]) {
      local_378 = 0;
      for (iVar2 = 0; iVar2 < in_ECX[0xf4]; iVar2 = iVar2 + 1) {
        iVar5 = FString::Len((FString *)(in_ECX + 0xde));
        if ((in_ECX[0xd9] <= iVar5 + iVar2) &&
           (iVar5 = FString::Len((FString *)(in_ECX + 0xe1)), iVar2 < iVar5)) {
          FString::operator[]((FString *)(in_ECX + 0xe1),iVar2);
          piStack_3a4 = &local_35c;
          FUN_100216e0();
          if (*(int *)GLanguageType_exref == 5) {
            piStack_3a4 = (int *)0x10018ec4;
            local_35c = FUN_10015b00();
          }
          piStack_3a4 = (int *)in_ECX[0xd5];
          FUN_100218f0(in_ECX[0xf7] + 1 + local_378,2,local_35c,0xc);
          local_378 = local_378 + local_35c;
        }
      }
    }
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x74))();
    if ((iVar2 == 0) || (*(int *)GLanguageType_exref != 0)) {
      iVar2 = (**(code **)(*in_ECX + 0x74))();
      if ((iVar2 == 0) || (*(int *)GLanguageType_exref != 2)) {
        iVar2 = (**(code **)(*in_ECX + 0x74))();
        if ((iVar2 == 0) || (*(int *)GLanguageType_exref != 3)) {
          iVar2 = (**(code **)(*in_ECX + 0x74))();
          if ((iVar2 != 0) && (*(int *)GLanguageType_exref == 4)) {
            piStack_3a4 = piVar6;
            FUN_10016270(2,2);
          }
        }
        else {
          piStack_3a4 = local_370;
          FUN_100134e0(2,2,piVar6,local_33c);
        }
      }
      else {
        piStack_3a4 = piVar6;
        FUN_10015f70(2,2);
      }
    }
    else {
      piStack_3a4 = piVar6;
      FUN_100133c0(2,2);
    }
    iVar2 = (**(code **)(*in_ECX + 0x74))();
    if ((((iVar2 != 0) && (local_33c == 0)) && (in_ECX[0xcf] != 0)) && (in_ECX[0xd1] != 0)) {
      piStack_3a4 = (int *)0x0;
      FUN_100217a0((int)piVar6 + -1,2,0xffdcdcdc,&DAT_10230ff8,0,0,0,0,0,0,0,0,0);
    }
    local_358 = (undefined1 *)(local_33c + (int)piVar6);
    fVar1 = (float)(int)local_358;
    if ((int)local_358 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if ((float)in_ECX[0x22] < fVar1) {
      in_ECX[0xd9] = in_ECX[0xd9] + 1;
    }
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_334;
  __security_check_cookie(local_8 ^ (uint)local_328);
  return;
}


// ==== 10018f04 Catch@10018f04

void Catch_10018f04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_102a47f0);
}


// ==== 10018f18 Catch@10018f18

void Catch_10018f18(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10018f40 FUN_10018f40

void FUN_10018f40(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  FString *pFVar5;
  int *in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uStack_78;
  FString local_68 [16];
  int local_58 [3];
  undefined1 *local_4c [2];
  undefined1 *local_44;
  ushort local_40 [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101da06b;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_78;
  iVar1 = (**(code **)(*in_ECX + 0x6c))();
  if (((iVar1 != 0) && (((param_1 == 8 || (in_ECX[0xd0] != 0)) || (0 < in_ECX[0xf5])))) &&
     ((in_ECX[0xcd] != 3 || ((0x2f < param_1 && (param_1 < 0x3a)))))) {
    if (((0x1f < param_1) || ((iVar1 = FUN_10141550(), iVar1 == 9 && (0x81 < param_1)))) ||
       ((iVar1 = FUN_10141550(), iVar1 == 0xd && (iVar1 = FUN_10014790(), iVar1 != 0)))) {
      FUN_10018040();
      FUN_100133a0();
      if (in_ECX[0xdd] != 0) {
        iVar1 = FString::Len((FString *)(in_ECX + 0xe1));
        iVar2 = FString::Len((FString *)(in_ECX + 0xde));
        iVar3 = appStrlen(local_40);
        if (in_ECX[0xdd] < iVar3 + iVar1 + iVar2) goto code_r0x100192ed;
      }
      pFVar5 = (FString *)(in_ECX + 0xde);
      iVar1 = FString::Len(pFVar5);
      if (iVar1 < 1) {
        FString::operator=(pFVar5,local_40);
        (**(code **)(*in_ECX + 0x228))();
        if ((param_1 == 0x22) && (in_ECX[0xcd] == 1)) {
          uVar6 = FUN_10058020();
          FUN_1000cc30(uVar6);
        }
      }
      else {
        FString::operator+=(pFVar5,local_40);
        (**(code **)(*in_ECX + 0x228))();
      }
      if (*(int *)GLanguageType_exref == 5) {
        FString::operator*(pFVar5);
        FUN_10021620();
      }
      if (in_ECX[0xcd] == 3) {
        FUN_100145a0();
      }
      puVar4 = FString::operator*(pFVar5);
      local_44 = &stack0xffffff7c;
      FString::FString((FString *)&stack0xffffff7c,puVar4 + in_ECX[0xd9]);
      local_8 = local_8 & 0xffffff00;
      iVar1 = FUN_10014420();
      iVar2 = FUN_101c19e0();
      if (iVar2 < iVar1) {
        if (*(int *)GLanguageType_exref == 5) {
          local_44 = &stack0xffffff7c;
          iVar1 = in_ECX[0xd9];
          FString::Mid(pFVar5,(int)&stack0xffffff7c,0);
          local_8 = local_8 & 0xffffff00;
          FUN_1002ac60(iVar1);
          local_44 = (undefined1 *)FUN_10015b00();
          iVar1 = FUN_10015b00();
          local_4c[0] = local_44 + iVar1;
          local_58[0] = FUN_10015b00();
          if (local_58[0] < (int)local_4c[0]) {
            iVar1 = FUN_10015ac0();
            in_ECX[0xd9] = in_ECX[0xd9] + iVar1;
          }
          else {
            iVar1 = FUN_10015ac0();
            iVar2 = FUN_10015ac0();
            in_ECX[0xd9] = in_ECX[0xd9] + iVar1 + iVar2;
          }
        }
        else {
          pFVar5 = (FString *)FString::Mid(pFVar5,(int)local_68,in_ECX[0xd9]);
          local_8._0_1_ = 3;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          puVar4 = FString::operator*(pFVar5);
          FUN_10020bb0(local_4c,puVar4,uVar6,uVar7,uVar8,uVar9);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_68);
          FUN_10020bb0(local_58,local_40,0,0,0,0);
          if (local_58[0] < (int)local_4c[0]) {
            in_ECX[0xd9] = in_ECX[0xd9] + 1;
          }
          else {
            in_ECX[0xd9] = in_ECX[0xd9] + 2;
          }
        }
        in_ECX[0xdc] = in_ECX[0xd9];
      }
    }
    if (in_ECX[0xdd] != 0) {
      iVar1 = FString::Len((FString *)(in_ECX + 0xe1));
      iVar2 = FString::Len((FString *)(in_ECX + 0xde));
      in_ECX[0xd0] = (uint)(iVar1 + iVar2 < in_ECX[0xdd]);
    }
  }
code_r0x100192ed:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1001930b Catch@1001930b

void Catch_1001930b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_102a47f0);
}


// ==== 1001931f Catch@1001931f

void Catch_1001931f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnChar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10019340 FUN_10019340

void FUN_10019340(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)GLanguageType_exref == 5) {
    FString::operator+=((FString *)(in_ECX + 0x378),(FString *)(in_ECX + 900));
    FString::Empty((FString *)(in_ECX + 900));
    uVar5 = 0;
    iVar2 = in_ECX + 0x39c;
    puVar1 = FString::operator*((FString *)(in_ECX + 0x378));
    FUN_10021620(puVar1,iVar2,uVar5);
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x3ac); iVar2 = iVar2 + 1) {
    }
    FArray::Empty((FArray *)(in_ECX + 0x3a8),0x14,0);
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(in_ECX + 0x374) != 0) {
    if (*(int *)(in_ECX + 0x374) < 1) goto LAB_10019427;
    iVar2 = FString::Len((FString *)(in_ECX + 0x3b4));
    iVar3 = FString::Len((FString *)(in_ECX + 900));
    iVar4 = FString::Len((FString *)(in_ECX + 0x378));
    if (*(int *)(in_ECX + 0x374) < iVar4 + iVar2 + iVar3) goto LAB_10019427;
  }
  FString::operator+=((FString *)(in_ECX + 0x378),(FString *)(in_ECX + 0x3b4));
LAB_10019427:
  FString::operator+=((FString *)(in_ECX + 0x378),(FString *)(in_ECX + 900));
  FString::Empty((FString *)(in_ECX + 0x3b4));
  FString::Empty((FString *)(in_ECX + 900));
  ExceptionList = local_10;
  return;
}


// ==== 10019467 Catch@10019467

void Catch_10019467(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1001947b Catch@1001947b

void Catch_1001947b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::MoveToLastCursor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100194a0 FUN_100194a0

void FUN_100194a0(void)

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
  
  puStack_c = &LAB_101da0b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000cb20(6);
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    pFVar1 = (FString *)FUN_10057590(local_28);
    local_8._0_1_ = 1;
    UUIScript::eventOnChangeEditBox(this,pFVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1001952a Catch@1001952a

void Catch_1001952a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001953e Catch@1001953e

void Catch_1001953e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::NotifyEditBoxChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10019560 FUN_10019560

undefined4 FUN_10019560(undefined4 param_1,UObject *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da0e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005f4f0(param_1,param_2);
  param_2 = (UObject *)0x0;
  param_1 = 0;
  FUN_10147a60(&param_2,&param_1);
  if (param_2 == (UObject *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = UObject::IsA(param_2,(UClass *)&DAT_103678a0);
  if (iVar1 != 0) {
    iVar1 = FUN_100181a0(param_1);
    if (iVar1 != 0) {
      FUN_10014390(1);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10019618 Catch@10019618

void Catch_10019618(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001962c Catch@1001962c

void Catch_1001962c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnDragItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10019650 FUN_10019650

void FUN_10019650(void)

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
  
  puStack_c = &LAB_101da100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UEditBoxHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_100181d0(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x100196da;
    appFailAssert("m_pScriptHandle",".\\Src\\NEditBox.cpp",0xb59);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1001970e Catch@1001970e

void Catch_1001970e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10019722 Catch@10019722

void Catch_10019722(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10019740 FUN_10019740

void FUN_10019740(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101da129;
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
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 100197e0 FUN_100197e0

void FUN_100197e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101da159;
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
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10019880 FUN_10019880

undefined4 FUN_10019880(undefined4 param_1,int param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  UUIScript *pUVar7;
  FString *pFVar8;
  undefined4 uVar9;
  int *in_ECX;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uStack_b0;
  FString local_a0 [12];
  FString local_94 [12];
  FString local_88 [12];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  uint local_70;
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [20];
  undefined4 local_34;
  int local_30 [2];
  int local_28 [2];
  int local_20 [2];
  undefined1 *local_18;
  int local_14;
  int local_10;
  undefined1 *local_8;
  
  puStack_74 = &LAB_101da221;
  local_78 = ExceptionList;
  uStack_b0 = DAT_103554c4 ^ (uint)local_6c;
  local_7c = (undefined1 *)&uStack_b0;
  ExceptionList = &local_78;
  local_70 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x6c))();
  if (iVar1 == 0) {
    ExceptionList = local_78;
    return 1;
  }
  iVar1 = FUN_10141550();
  switch(param_1) {
  case 8:
    iVar1 = FUN_10025df0();
    if ((iVar1 != 1) || (iVar1 = FUN_10018040(), iVar1 != 0)) break;
    pFVar8 = (FString *)(in_ECX + 0xde);
    iVar1 = FString::Len(pFVar8);
    if (iVar1 < 1) break;
    if (in_ECX[0xcd] == 3) {
      iVar1 = FString::Len(pFVar8);
      puVar5 = FString::operator[](pFVar8,iVar1 + -1);
      if (*puVar5 == 0x2c) {
        pFVar3 = (FString *)(in_ECX + 0xe1);
        FString::FString((FString *)&local_14,pFVar3);
        local_70._0_1_ = 3;
        FString::Empty(pFVar3);
        pFVar2 = (FString *)FString::Right(pFVar8,(int)local_48);
        local_70._0_1_ = 4;
        FString::operator=(pFVar3,pFVar2);
        local_70._0_1_ = 3;
        FString::~FString(local_48);
        FString::operator+=(pFVar3,(FString *)&local_14);
        iVar6 = 1;
        iVar1 = FString::Len(pFVar8);
        FString::Delete(pFVar8,iVar1 + -1,iVar6);
        (**(code **)(*in_ECX + 0x198))();
        local_70 = (uint)local_70._1_3_ << 8;
        FString::~FString((FString *)&local_14);
        uVar9 = FUN_1005f3a0();
        ExceptionList = local_78;
        return uVar9;
      }
    }
    iVar1 = FString::Len(pFVar8);
    pFVar3 = (FString *)FString::Mid(pFVar8,(int)local_94,iVar1 + -1);
    local_70._0_1_ = 5;
    uVar10 = 0;
    uVar9 = 0;
    puVar5 = FString::operator*(pFVar3);
    FUN_10020bb0(local_20,puVar5,uVar9,uVar10);
    local_70._0_1_ = 0;
    FString::~FString(local_94);
    if (*(int *)GLanguageType_exref != 5) {
      if (in_ECX[0xd9] < 1) {
        local_28[0] = 0;
      }
      else {
        pFVar3 = (FString *)FString::Mid(pFVar8,(int)local_54,in_ECX[0xd9] + -1);
        local_70._0_1_ = 10;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = FString::operator*(pFVar3);
        FUN_10020bb0(local_28,puVar5,uVar9,uVar10,uVar11);
        local_70._0_1_ = 0;
        FString::~FString(local_54);
      }
      if (in_ECX[0xd9] < 2) {
        local_30[0] = 0;
      }
      else {
        pFVar3 = (FString *)FString::Mid(pFVar8,(int)local_60,in_ECX[0xd9] + -2);
        local_70._0_1_ = 0xb;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = FString::operator*(pFVar3);
        FUN_10020bb0(local_30,puVar5,uVar9,uVar10,uVar11,uVar12);
        local_70._0_1_ = 0;
        FString::~FString(local_60);
      }
      if (0 < in_ECX[0xd9]) {
        if (local_20[0] < 0xc) {
          if (0xb < local_28[0]) {
            puVar5 = FString::operator*(pFVar8);
            local_8 = &stack0xffffff3c;
            FString::FString((FString *)&stack0xffffff3c,puVar5 + in_ECX[0xd9]);
            local_70._0_1_ = 0;
            iVar1 = FUN_10014420();
            iVar6 = FUN_101c19e0();
            if (iVar6 + -0xc <= iVar1) goto LAB_1001a156;
          }
        }
        else if (local_30[0] - 7U < 6) {
          in_ECX[0xd9] = in_ECX[0xd9] + -2;
          in_ECX[0xdc] = in_ECX[0xdc] + -2;
          goto LAB_1001a156;
        }
        if (local_20[0] < local_28[0]) {
          puVar5 = FString::operator*(pFVar8);
          local_8 = &stack0xffffff3c;
          FString::FString((FString *)&stack0xffffff3c,puVar5 + in_ECX[0xd9]);
          local_70._0_1_ = 0;
          iVar1 = FUN_10014420();
          iVar6 = FUN_101c19e0();
          if (iVar6 + -0xc <= iVar1) goto LAB_1001a156;
        }
        in_ECX[0xd9] = in_ECX[0xd9] + -1;
        in_ECX[0xdc] = in_ECX[0xdc] + -1;
      }
      goto LAB_1001a156;
    }
    FUN_10015a70();
    local_70._0_1_ = 6;
    pFVar3 = (FString *)FString::Left(pFVar8,(int)local_6c);
    local_70._0_1_ = 7;
    FString::operator*(pFVar3);
    FUN_10021620();
    local_70 = CONCAT31(local_70._1_3_,6);
    FString::~FString(local_6c);
    if (local_10 < 1) {
      local_28[0] = 0;
    }
    else {
      local_28[0] = FUN_10015b00();
    }
    if (local_10 < 2) {
      local_30[0] = 0;
    }
    else {
      local_18 = (undefined1 *)(local_14 + -0x14 + local_10 * 0x14);
      iVar1 = FUN_10015b00();
      local_30[0] = FUN_10015b00();
      local_30[0] = iVar1 + local_30[0];
    }
    iVar1 = in_ECX[0xd9];
    if (0 < iVar1) {
      if (local_20[0] < 0xc) {
        if (0xb < local_28[0]) {
          puVar5 = FString::operator*(pFVar8);
          local_8 = &stack0xffffff3c;
          FString::FString((FString *)&stack0xffffff3c,puVar5 + in_ECX[0xd9]);
          local_70 = CONCAT31((int3)(local_70 >> 8),6);
          iVar1 = FUN_10014420();
          iVar6 = FUN_101c19e0();
          if (iVar6 + -0xc <= iVar1) goto LAB_10019fcf;
        }
      }
      else if (local_30[0] - 7U < 6) {
        local_8 = (undefined1 *)(local_14 + -0x14 + local_10 * 0x14);
        local_18 = (undefined1 *)(local_14 + (local_10 * 5 + -10) * 4);
        iVar6 = FUN_10015ac0();
        iVar4 = FUN_10015ac0();
        in_ECX[0xd9] = (iVar1 - iVar6) - iVar4;
        iVar1 = FUN_10015ac0();
        iVar6 = FUN_10015ac0();
        in_ECX[0xdc] = in_ECX[0xdc] - (iVar1 + iVar6);
        local_70._0_1_ = 0;
        FUN_10019740();
        goto LAB_1001a156;
      }
      if (local_20[0] < local_28[0]) {
        puVar5 = FString::operator*(pFVar8);
        local_8 = &stack0xffffff3c;
        FString::FString((FString *)&stack0xffffff3c,puVar5 + in_ECX[0xd9]);
        local_70 = CONCAT31((int3)(local_70 >> 8),6);
        iVar1 = FUN_10014420();
        iVar6 = FUN_101c19e0();
        if (iVar6 + -0xc <= iVar1) goto LAB_10019fcf;
      }
      iVar1 = FUN_10015ac0();
      in_ECX[0xd9] = in_ECX[0xd9] - iVar1;
      iVar1 = FUN_10015ac0();
      in_ECX[0xdc] = in_ECX[0xdc] - iVar1;
    }
LAB_10019fcf:
    local_70._0_1_ = 0;
    FUN_10019740();
LAB_1001a156:
    iVar6 = 1;
    iVar1 = FString::Len(pFVar8);
    FString::Delete(pFVar8,iVar1 + -1,iVar6);
    in_ECX[0xd0] = 1;
    if (*(int *)GLanguageType_exref == 5) {
      FString::operator*(pFVar8);
      FUN_10021620();
      FString::operator*((FString *)(in_ECX + 0xe1));
      FUN_10021620();
    }
    local_8 = &stack0xffffff3c;
    FString::FString((FString *)&stack0xffffff3c,pFVar8);
    local_70 = (uint)local_70._1_3_ << 8;
    local_8 = (undefined1 *)FUN_10014420();
    local_18 = &stack0xffffff3c;
    FString::FString((FString *)&stack0xffffff3c,(FString *)(in_ECX + 0xed));
    local_70 = local_70 & 0xffffff00;
    iVar1 = FUN_10014420();
    local_18 = &stack0xffffff3c;
    FString::FString((FString *)&stack0xffffff3c,(FString *)(in_ECX + 0xe1));
    local_70 = local_70 & 0xffffff00;
    iVar6 = FUN_10014420();
    iVar6 = iVar1 + iVar6 + (int)local_8;
    iVar1 = FUN_101c19e0();
    if (iVar6 <= iVar1) {
      in_ECX[0xd9] = 0;
    }
    if (in_ECX[0xcd] == 3) {
      iVar1 = FString::Len((FString *)(in_ECX + 0xe1));
      iVar6 = FString::Len(pFVar8);
      if (1 < iVar1 + iVar6) {
        FUN_100145a0();
      }
    }
    (**(code **)(*in_ECX + 0x228))();
    uVar9 = FUN_1005f3a0();
    ExceptionList = local_78;
    return uVar9;
  case 0xd:
    in_ECX[0xd9] = 0;
    in_ECX[0xdc] = 0;
    iVar1 = FString::Len((FString *)(in_ECX + 0xde));
    if (((iVar1 != 0) || (iVar1 = FString::Len((FString *)(in_ECX + 0xed)), iVar1 != 0)) ||
       (iVar1 = FString::Len((FString *)(in_ECX + 0xe1)), iVar1 != 0)) {
      iVar1 = FString::Len((FString *)(in_ECX + 0xed));
      if (iVar1 == 0) {
        local_34 = 1;
        if (in_ECX[0xb6] != 0) {
          puVar5 = (ushort *)(**(code **)(*in_ECX + 0x1f8))();
          if (puVar5 == (ushort *)0x0) {
            ExceptionList = local_78;
            return 1;
          }
          appStrlen(puVar5);
          FUN_10138a40();
          iVar1 = FUN_10136f10();
          if (iVar1 != 0) {
            local_34 = 0;
            pUVar7 = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
            if (pUVar7 != (UUIScript *)0x0) {
              pFVar8 = (FString *)FUN_10057590();
              local_70._0_1_ = 0x11;
              UUIScript::eventOnChatMarkedEditBox(pUVar7,pFVar8);
              local_70 = (uint)local_70._1_3_ << 8;
              FString::~FString(local_88);
            }
            (**(code **)(*in_ECX + 0x174))();
            uVar9 = FUN_1005f3a0();
            ExceptionList = local_78;
            return uVar9;
          }
        }
        FUN_1000cb20();
        pUVar7 = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
        if (pUVar7 != (UUIScript *)0x0) {
          pFVar8 = (FString *)FUN_10057590();
          local_70._0_1_ = 0x12;
          UUIScript::eventOnCompleteEditBox(pUVar7,pFVar8);
          local_70 = (uint)local_70._1_3_ << 8;
          FString::~FString(local_a0);
          uVar9 = FUN_1005f3a0();
          ExceptionList = local_78;
          return uVar9;
        }
      }
      break;
    }
    goto LAB_1001a584;
  case 0x10:
    in_ECX[0xf3] = 1;
    uVar9 = FUN_1005f3a0();
    ExceptionList = local_78;
    return uVar9;
  case 0x1b:
LAB_1001a584:
    FUN_1000cb20();
    break;
  case 0x23:
    if (in_ECX[0xf3] != 0) {
      if (in_ECX[0xcd] == 2) {
        FUN_10064a30();
        local_70._0_1_ = 2;
        uVar9 = 0;
        puVar5 = FString::operator*((FString *)&local_14);
        FUN_10020bb0(local_20,puVar5,uVar9);
        local_70 = (uint)local_70._1_3_ << 8;
        FString::~FString((FString *)&local_14);
      }
      else {
        uVar9 = 0;
        puVar5 = FString::operator*((FString *)(in_ECX + 0xe1));
        FUN_10020bb0(local_20,puVar5,uVar9);
      }
      in_ECX[0xf5] = local_20[0];
      iVar6 = FString::Len((FString *)(in_ECX + 0xe1));
      in_ECX[0xf4] = -iVar6;
    }
    iVar6 = FUN_10025df0();
    if ((((iVar6 == 1) || (iVar1 == 10)) || (iVar1 == 9)) || ((iVar1 == 0xb || (iVar1 == 0xc)))) {
      pFVar8 = (FString *)(in_ECX + 0xe1);
      FString::operator+=((FString *)(in_ECX + 0xde),pFVar8);
      FString::Empty(pFVar8);
      if (*(int *)GLanguageType_exref == 5) {
        FString::operator*((FString *)(in_ECX + 0xde));
        FUN_10021620();
        FString::operator*(pFVar8);
        FUN_10021620();
      }
      in_ECX[0xd9] = in_ECX[0xdc];
      (**(code **)(*in_ECX + 0x22c))();
      uVar9 = FUN_1005f3a0();
      ExceptionList = local_78;
      return uVar9;
    }
    break;
  case 0x24:
    if (in_ECX[0xf3] != 0) {
      if (in_ECX[0xcd] == 2) {
        FUN_10064a30();
        local_70._0_1_ = 1;
        uVar9 = 0;
        puVar5 = FString::operator*((FString *)&local_14);
        FUN_10020bb0(local_20,puVar5,uVar9);
        local_70 = (uint)local_70._1_3_ << 8;
        FString::~FString((FString *)&local_14);
      }
      else {
        uVar9 = 0;
        puVar5 = FString::operator*((FString *)(in_ECX + 0xde));
        FUN_10020bb0(local_20,puVar5,uVar9);
      }
      in_ECX[0xf5] = local_20[0];
      iVar6 = FString::Len((FString *)(in_ECX + 0xde));
      in_ECX[0xf4] = iVar6;
    }
    iVar6 = FUN_10025df0();
    if (((iVar6 == 1) || (iVar1 == 10)) || ((iVar1 == 9 || ((iVar1 == 0xb || (iVar1 == 0xc)))))) {
      pFVar8 = (FString *)(in_ECX + 0xe1);
      pFVar3 = (FString *)(in_ECX + 0xde);
      FString::operator+=(pFVar3,pFVar8);
      FString::operator=(pFVar8,pFVar3);
      FString::Empty(pFVar3);
      if (*(int *)GLanguageType_exref == 5) {
        FString::operator*(pFVar3);
        FUN_10021620();
        FString::operator*(pFVar8);
        FUN_10021620();
      }
      in_ECX[0xd9] = 0;
      (**(code **)(*in_ECX + 0x22c))();
      uVar9 = FUN_1005f3a0();
      ExceptionList = local_78;
      return uVar9;
    }
    break;
  case 0x25:
    FUN_10017120();
    uVar9 = FUN_1005f3a0();
    ExceptionList = local_78;
    return uVar9;
  case 0x26:
    if (in_ECX[0xcd] == 1) {
      FUN_10058020();
      FUN_1000cc30();
      uVar9 = FUN_1005f3a0();
      ExceptionList = local_78;
      return uVar9;
    }
    break;
  case 0x27:
    FUN_10017570();
    uVar9 = FUN_1005f3a0();
    ExceptionList = local_78;
    return uVar9;
  case 0x28:
    if (in_ECX[0xcd] == 1) {
      FUN_10058020();
      FUN_1000cc30();
      uVar9 = FUN_1005f3a0();
      ExceptionList = local_78;
      return uVar9;
    }
    break;
  case 0x2e:
    iVar1 = FUN_10018040();
    if ((iVar1 == 0) && (in_ECX[0xf3] == 0)) {
      pFVar8 = (FString *)(in_ECX + 0xe1);
      iVar1 = FString::Len(pFVar8);
      if (0 < iVar1) {
        if (*(int *)GLanguageType_exref == 5) {
          iVar1 = FUN_10015ac0();
          FString::Delete(pFVar8,0,iVar1);
          (**(code **)(*in_ECX + 0x228))();
          FString::operator*((FString *)(in_ECX + 0xde));
          FUN_10021620();
          FString::operator*(pFVar8);
          FUN_10021620();
        }
        else {
          (**(code **)(*in_ECX + 0x198))();
          (**(code **)(*in_ECX + 0x198))();
        }
        if (((in_ECX[0xcd] == 3) && (iVar1 = FString::operator_int(pFVar8), iVar1 != 0)) &&
           (puVar5 = FString::operator[](pFVar8,0), *puVar5 == 0x2c)) {
          (**(code **)(*in_ECX + 0x198))();
        }
      }
      if (in_ECX[0xdd] != 0) {
        iVar1 = FString::Len((FString *)(in_ECX + 0xde));
        iVar6 = FString::Len(pFVar8);
        in_ECX[0xd0] = (uint)(iVar1 + iVar6 < in_ECX[0xdd]);
        uVar9 = FUN_1005f3a0();
        ExceptionList = local_78;
        return uVar9;
      }
    }
    break;
  case 0xe5:
    if (iVar1 == 10) {
      if (param_2 == 0x14b0001) {
        iVar1 = FUN_100246a0();
        if (iVar1 != 0) {
          FUN_10007ae0();
          uVar9 = FUN_1005f3a0();
          ExceptionList = local_78;
          return uVar9;
        }
      }
      else if ((param_2 == 0x14d0001) && (iVar1 = FUN_100246a0(), iVar1 != 0)) {
        FUN_10008540();
        uVar9 = FUN_1005f3a0();
        ExceptionList = local_78;
        return uVar9;
      }
    }
  }
  uVar9 = FUN_1005f3a0();
  ExceptionList = local_78;
  return uVar9;
}


// ==== 1001a59f Catch@1001a59f

void Catch_1001a59f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x34,&DAT_102a47f0);
}


// ==== 1001a5b3 Catch@1001a5b3

void Catch_1001a5b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::OnKeyDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001a6f0 FUN_1001a6f0

void FUN_1001a6f0(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0xf6] = 1;
  FUN_10019340();
  in_ECX[0xf4] = 0;
  in_ECX[0xf5] = 0;
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)in_ECX[0xc5] + 0x1fc))();
  }
  FUN_10058c60();
  ExceptionList = local_10;
  return;
}


// ==== 1001a77a Catch@1001a77a

void Catch_1001a77a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001a78e Catch@1001a78e

void Catch_1001a78e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::ReleaseFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001a7b0 FUN_1001a7b0

undefined4 FUN_1001a7b0(void)

{
  FUN_10019340();
  FUN_100156c0();
  return 1;
}


// ==== 1001a7d0 FUN_1001a7d0

void FUN_1001a7d0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101da26b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_100197e0(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1001a820 FUN_1001a820

void FUN_1001a820(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101da32e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100031f0();
  local_8 = 0;
  *in_ECX = NCEditBox::vftable;
  in_ECX[0xb7] = 0;
  FUN_1013c1b0();
  local_8._0_1_ = 1;
  in_ECX[0xd3] = 0;
  in_ECX[0xd4] = 0;
  in_ECX[0xd5] = 0;
  FString::FString((FString *)(in_ECX + 0xde));
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xe1));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xe4));
  local_8._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0xe7));
  local_8._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0xea));
  local_8._0_1_ = 8;
  FString::FString((FString *)(in_ECX + 0xed));
  local_8._0_1_ = 9;
  FString::FString((FString *)(in_ECX + 0xf0));
  local_8._0_1_ = 10;
  FString::FString((FString *)(in_ECX + 0xfd));
  local_8 = CONCAT31(local_8._1_3_,0xc);
  in_ECX[0xcd] = param_1;
  in_ECX[0xd6] = param_3;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    uVar1 = FUN_1003f630(param_2,1);
    in_ECX[0xd4] = uVar1;
  }
  in_ECX[0xf9] = 0;
  in_ECX[0xfa] = 0;
  in_ECX[0xf7] = 0;
  in_ECX[0xf8] = 0;
  in_ECX[0xfb] = 0;
  in_ECX[0xfc] = 0xffffffff;
  in_ECX[0xd1] = 1;
  in_ECX[0xd0] = 1;
  in_ECX[0xd7] = 0;
  in_ECX[0xd8] = 0;
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = param_4;
  in_ECX[0xdc] = 0;
  in_ECX[0xdd] = 0;
  in_ECX[0xd2] = 0;
  in_ECX[0xcf] = 1;
  in_ECX[0xce] = param_5;
  if ((*(int *)GLanguageType_exref == 1) || (*(int *)GLanguageType_exref == 6)) {
    in_ECX[0xce] = 1;
  }
  in_ECX[0xc5] = 0;
  in_ECX[0xf3] = 0;
  in_ECX[0xf4] = 0;
  in_ECX[0xf6] = 1;
  in_ECX[0xb6] = param_6;
  FString::operator=((FString *)(in_ECX + 0xfd),(ushort *)&DAT_1022f9f8);
  ExceptionList = local_10;
  return;
}


// ==== 1001aa18 Catch@1001aa18

void Catch_1001aa18(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001aa2c Catch@1001aa2c

void Catch_1001aa2c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCEditBox::NCEditBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001aa50 FUN_1001aa50

void FUN_1001aa50(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101da3e7;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCEditBox::vftable;
  local_4 = 9;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 8;
  FString::~FString((FString *)(in_ECX + 0x3f4));
  local_4._0_1_ = 7;
  FString::~FString((FString *)(in_ECX + 0x3c0));
  local_4._0_1_ = 6;
  FString::~FString((FString *)(in_ECX + 0x3b4));
  local_4._0_1_ = 5;
  FUN_10019740(uVar1);
  local_4._0_1_ = 4;
  FUN_10019740();
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x390));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 900));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x378));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100197e0();
  local_4 = 0xffffffff;
  FUN_10002a70();
  ExceptionList = local_c;
  return;
}


// ==== 1001ab50 FUN_1001ab50

void FUN_1001ab50(byte param_1)

{
  void *in_ECX;
  
  FUN_1001aa50();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x400);
  }
  return;
}


// ==== 1001aba0 FUN_1001aba0

bool FUN_1001aba0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100b1c70(param_1,param_2,param_3);
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
    if (param_2 == 0xf0f2) {
      iVar1 = (**(code **)(*in_ECX + 0x204))();
      return iVar1 != 0;
    }
  }
  return false;
}


// ==== 1001ac40 FUN_1001ac40

undefined4 FUN_1001ac40(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x15c))();
  return 1;
}


// ==== 1001ac60 FUN_1001ac60

void FUN_1001ac60(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)param_1;
  if (param_1 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  FUN_1005ee10(fVar2,fVar1);
  return;
}


// ==== 1001aca0 FUN_1001aca0

void FUN_1001aca0(void)

{
  int in_ECX;
  short local_8 [2];
  short local_4 [2];
  
  if (*(int *)(in_ECX + 0x34c) != 0) {
    FUN_10145670(local_8,local_4);
    FUN_1000cc70(3,0,CONCAT22((local_4[0] - *(short *)(in_ECX + 0x344)) - *(short *)(in_ECX + 0x84),
                              (local_8[0] - *(short *)(in_ECX + 0x340)) - *(short *)(in_ECX + 0x80))
                );
    *(undefined4 *)(in_ECX + 0x34c) = 0;
  }
  return;
}


// ==== 1001ad10 FUN_1001ad10

undefined4 FUN_1001ad10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d6f0(param_1,param_2);
  FUN_1003f950();
  *(int *)(in_ECX + 0x318) = (int)(short)param_2;
  iVar2 = (int)(short)((uint)param_2 >> 0x10);
  *(int *)(in_ECX + 0x31c) = iVar2;
  iVar1 = (int)(short)param_2 - *(int *)(in_ECX + 0x80);
  *(int *)(in_ECX + 0x340) = iVar1;
  iVar2 = iVar2 - *(int *)(in_ECX + 0x84);
  *(int *)(in_ECX + 0x344) = iVar2;
  FUN_1013cc90(in_ECX,iVar1,iVar2);
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1001adbc Catch@1001adbc

void Catch_1001adbc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001add0 Catch@1001add0

void Catch_1001add0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001adf0 FUN_1001adf0

undefined4 FUN_1001adf0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d800(param_1,param_2);
  FUN_1003f960();
  FUN_1000cbf0();
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1001ae64 Catch@1001ae64

void Catch_1001ae64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001ae78 Catch@1001ae78

void Catch_1001ae78(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001aea0 FUN_1001aea0

void FUN_1001aea0(ushort *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (ushort *)0x0) {
    FString::operator=((FString *)(in_ECX + 0x2d8),param_1);
    *(undefined4 *)(in_ECX + 800) = 0;
    *(undefined4 *)(in_ECX + 0x324) = 0;
  }
  *(undefined4 *)(in_ECX + 0x2e4) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 1001af12 Catch@1001af12

void Catch_1001af12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001af26 Catch@1001af26

void Catch_1001af26(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::InsertTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001af50 FUN_1001af50

void FUN_1001af50(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 0x2d8),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(in_ECX + 0x2e4) = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 1001afb9 Catch@1001afb9

void Catch_1001afb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001afcd Catch@1001afcd

void Catch_1001afcd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::InsertTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001aff0 FUN_1001aff0

bool FUN_1001aff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1001aba0(param_1,param_2,param_3);
  return iVar1 != 0;
}


// ==== 1001b010 FUN_1001b010

undefined4 FUN_1001b010(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1001ad10(param_1,param_2);
  in_ECX[0xc6] = (int)(short)param_2;
  iVar1 = (int)(short)((uint)param_2 >> 0x10);
  in_ECX[199] = iVar1;
  iVar1 = (**(code **)(*in_ECX + 0x104))
                    ((int)(short)param_2,iVar1,in_ECX[0x20],in_ECX[0x21],in_ECX[0x22],in_ECX[0x23]);
  if (iVar1 != 0) {
    in_ECX[0xd4] = in_ECX[0xc6] - in_ECX[0x20];
    in_ECX[0xd5] = in_ECX[199] - in_ECX[0x21];
    in_ECX[0xdb] = 1;
    in_ECX[0xd8] = 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1001b0ee Catch@1001b0ee

void Catch_1001b0ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001b102 Catch@1001b102

void Catch_1001b102(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCResizeFrame::OnLButtonDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001b120 FUN_1001b120

undefined4 FUN_1001b120(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da4b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1001adf0(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x360) = 0;
  *(undefined4 *)(in_ECX + 0x36c) = 0;
  *(undefined4 *)(in_ECX + 0x350) = 0;
  *(undefined4 *)(in_ECX + 0x354) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1001b190 Catch@1001b190

void Catch_1001b190(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001b1a4 Catch@1001b1a4

void Catch_1001b1a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCResizeFrame::OnLButtonUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001b1d0 FUN_1001b1d0

void FUN_1001b1d0(void)

{
  int in_ECX;
  
  FUN_10058c60();
  *(undefined4 *)(in_ECX + 0x36c) = 0;
  *(undefined4 *)(in_ECX + 0x360) = 0;
  return;
}


// ==== 1001b1f0 UUIScript::eventOnFrameExpandClick

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::eventOnFrameExpandClick(unsigned long) */

void __thiscall UUIScript::eventOnFrameExpandClick(UUIScript *this,ulong param_1)

{
  int iVar1;
  UFunction *pUVar2;
  
                    /* 0x1b1f0  1031  ?eventOnFrameExpandClick@UUIScript@@QAEXK@Z */
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_NWINDOW_OnFrameExpandClick,0,&param_1,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1001b230 FUN_1001b230

undefined4 FUN_1001b230(void)

{
  uint uVar1;
  UPackage *pUVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  FString *extraout_ECX;
  FString *extraout_ECX_00;
  bool bVar5;
  FString *pFStack_58;
  FString aFStack_34 [12];
  FString aFStack_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101da538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = 0;
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  pFStack_58 = (FString *)0x1001b27b;
  FUN_1005d0a0();
  if ((((*(int *)(in_ECX + 0x348) != 0) && (*(int *)(in_ECX + 0xb8) != 0)) &&
      (iVar3 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc), iVar3 != 0)) && (*(int *)(iVar3 + 4) != 0))
  {
    uVar1 = (**(code **)(**(int **)(iVar3 + 4) + 0x84))();
    if ((uVar1 & 0x2000) != 0) {
      pFStack_58 = extraout_ECX;
      FName::FName((FName *)&pFStack_58,0);
      pUVar2 = UObject::GetTransientPackage();
      iVar3 = FUN_1000a130(0x33c,pUVar2);
      bVar5 = iVar3 == 0;
      if (bVar5) {
        uVar4 = 0;
      }
      else {
        pFStack_58 = (FString *)0x1001b2fb;
        FString::FString(aFStack_28,(ushort *)L"L2UI_CH3.FrameCtrl.FrameMiniOnBtn");
        uStack_4 = 0;
        pFStack_58 = (FString *)0x1001b317;
        FString::FString(aFStack_34,(ushort *)L"L2UI_CH3.FrameCtrl.FrameMiniBtn");
        uStack_4 = 1;
        pFStack_58 = aFStack_28;
        uVar4 = FUN_10006980(aFStack_34);
      }
      *(undefined4 *)(in_ECX + 0x2fc) = uVar4;
      uStack_4 = 0;
      if (!bVar5) {
        FString::~FString(aFStack_34);
      }
      uStack_4 = 0xffffffff;
      if (!bVar5) {
        FString::~FString(aFStack_28);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x2fc) + 0x1cc) = 0xf0f0;
      pFStack_58 = (FString *)0x41700000;
      (**(code **)(**(int **)(in_ECX + 0x2fc) + 0x128))();
      uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2fc),2);
      FUN_1005c1e0(uVar4);
      uVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x84))();
      if ((uVar1 & 0x4000) == 0) {
        (**(code **)(**(int **)(in_ECX + 0x2fc) + 0xd0))(3,0xffffffe7,3);
      }
      else {
        (**(code **)(**(int **)(in_ECX + 0x2fc) + 0xd0))(3,0xfffffff8);
      }
    }
    uVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4) + 0x84))();
    if ((uVar1 & 0x4000) == 0) {
      pFStack_58 = extraout_ECX_00;
      FName::FName((FName *)&pFStack_58,0);
      pUVar2 = UObject::GetTransientPackage();
      iVar3 = FUN_1000a130(0x33c,pUVar2);
      bVar5 = iVar3 == 0;
      if (bVar5) {
        uVar4 = 0;
      }
      else {
        pFStack_58 = (FString *)0x1001b46c;
        FString::FString(aFStack_34,(ushort *)L"L2UI_CH3.FrameCtrl.FrameCloseOnBtn");
        uStack_4 = 2;
        pFStack_58 = (FString *)0x1001b48a;
        FString::FString(aFStack_28,(ushort *)L"L2UI_CH3.FrameCtrl.FrameCloseBtn");
        uStack_4 = 3;
        pFStack_58 = aFStack_34;
        uVar4 = FUN_10006980(aFStack_28);
      }
      *(undefined4 *)(in_ECX + 0x2f8) = uVar4;
      uStack_4 = 2;
      if (!bVar5) {
        FString::~FString(aFStack_28);
      }
      uStack_4 = 0xffffffff;
      if (!bVar5) {
        FString::~FString(aFStack_34);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x2f8) + 0x1cc) = 0xf0f1;
      pFStack_58 = (FString *)0x41700000;
      (**(code **)(**(int **)(in_ECX + 0x2f8) + 0x128))();
      uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x2f8),2);
      FUN_1005c1e0(uVar4);
      (**(code **)(**(int **)(in_ECX + 0x2f8) + 0xd0))(3,0xfffffff8,3);
    }
  }
  ExceptionList = local_c;
  return 1;
}


// ==== 1001b580 FUN_1001b580

undefined4 FUN_1001b580(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x512c) == in_ECX) {
    *(undefined4 *)(DAT_103663bc + 0x512c) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1001b5e5 Catch@1001b5e5

void Catch_1001b5e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001b5f9 Catch@1001b5f9

void Catch_1001b5f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001b620 FUN_1001b620

void FUN_1001b620(undefined4 param_1,FString *param_2)

{
  UPackage *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  FString *pFStack_50;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da5b4;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_18 = 0;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x334) = param_1;
  *(FString **)(in_ECX + 0x338) = param_2;
  if (*(int *)(in_ECX + 0x330) == 0) {
    pFStack_50 = param_2;
    FName::FName((FName *)&pFStack_50,0);
    pUVar1 = UObject::GetTransientPackage();
    iVar2 = FUN_1000a130(0x33c,pUVar1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      pFStack_50 = (FString *)0x1001b6a9;
      FString::FString(local_38,(ushort *)L"L2UI_CH3.TargetWnd.Target_InfoButton");
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = 1;
      pFStack_50 = (FString *)0x1001b6c2;
      FString::FString(local_2c,(ushort *)L"L2UI_CH3.TargetWnd.Target_InfoButton");
      local_8 = 2;
      uVar4 = 3;
      local_18 = 3;
      pFStack_50 = local_38;
      uVar3 = FUN_10006980(local_2c);
    }
    *(undefined4 *)(in_ECX + 0x330) = uVar3;
    local_8 = 1;
    if ((uVar4 & 2) != 0) {
      uVar4 = uVar4 & 0xfffffffd;
      local_18 = uVar4;
      FString::~FString(local_2c);
    }
    local_8 = 0;
    if ((uVar4 & 1) != 0) {
      local_18 = uVar4 & 0xfffffffe;
      FString::~FString(local_38);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x330) + 0x1cc) = 0xf0f2;
    pFStack_50 = (FString *)0x0;
    (**(code **)(**(int **)(in_ECX + 0x330) + 0xc0))(1,6,0xb,0xd,0);
    uVar3 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x330),2);
    FUN_1005c1e0(uVar3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1001b787 Catch@1001b787

void Catch_1001b787(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1001b79b Catch@1001b79b

void Catch_1001b79b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::CreateExpandBtn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001b7c0 FUN_1001b7c0

undefined4 FUN_1001b7c0(void)

{
  UUIScript *this;
  int *in_ECX;
  undefined4 uVar1;
  int iVar2;
  uint uStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  FString local_24 [4];
  longlong local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101da5f4;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  FUN_10058770(&local_3c);
  if (in_ECX[0xcf] == 0) {
    FString::FString(local_24,(ushort *)L"L2UI_CH3.TargetWnd.Target_InfoButton_Down");
    local_8._0_1_ = 3;
    FUN_10003e80(local_24);
    local_8._0_1_ = 0;
    FString::~FString(local_24);
    FString::FString(local_24,(ushort *)L"L2UI_CH3.TargetWnd.Target_InfoButton_Down");
    local_8._0_1_ = 4;
    FUN_10003f50(local_24);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_24);
    (**(code **)(**(int **)(*(int *)(in_ECX[0x2e] + 0xc) + 4) + 0x128))
              (local_34,(float)in_ECX[0xce]);
    iVar2 = in_ECX[0xce];
    local_20 = (longlong)ROUND((float)in_ECX[0x22]);
  }
  else {
    FString::FString(local_24,(ushort *)L"L2UI_CH3.TargetWnd.Target_InfoButton");
    local_8._0_1_ = 1;
    FUN_10003e80(local_24);
    local_8._0_1_ = 0;
    FString::~FString(local_24);
    FString::FString(local_24,(ushort *)L"L2UI_CH3.TargetWnd.Target_InfoButton");
    local_8._0_1_ = 2;
    FUN_10003f50(local_24);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_24);
    (**(code **)(**(int **)(*(int *)(in_ECX[0x2e] + 0xc) + 4) + 0x128))
              (local_34,(float)in_ECX[0xcd]);
    iVar2 = in_ECX[0xcd];
    local_20 = (longlong)ROUND((float)in_ECX[0x22]);
  }
  (**(code **)(*in_ECX + 0x1f8))((undefined4)local_20,iVar2);
  iVar2 = in_ECX[0xcf];
  in_ECX[0xcf] = (uint)(iVar2 == 0);
  if ((iVar2 == 0) == 0) {
    uVar1 = 0xfffe;
  }
  else {
    uVar1 = 0xffff;
  }
  FUN_1000cb20(uVar1);
  this = (UUIScript *)(**(code **)(*in_ECX + 0xc4))();
  if (this != (UUIScript *)0x0) {
    UUIScript::eventOnFrameExpandClick(this,in_ECX[0xcf]);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1001b9e5 Catch@1001b9e5

void Catch_1001b9e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1001b9f9 Catch@1001b9f9

void Catch_1001b9f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::OnExpandBtnClick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001ba20 FUN_1001ba20

undefined4 FUN_1001ba20(int param_1)

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
  uint uStack_40;
  FString local_30 [12];
  undefined1 local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101da619;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar1 = FUN_101c19e0();
  uVar2 = FUN_101c19e0(uVar1);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar2,uVar1);
  if (*(int *)(in_ECX + 0x348) == 0) goto LAB_1001bdac;
  if (*(int *)(in_ECX + 0x328) == 0) {
    if (*(int *)(in_ECX + 0x32c) == 0) {
      if (*(int *)(in_ECX + 0x2ec) != 0) {
        FUN_10021a00(0,0,0x10,0x14,0,0,0x10,0x14,*(int *)(in_ECX + 0x2ec),0xff,1);
      }
      iVar3 = *(int *)(in_ECX + 0x2f4);
      if (iVar3 != 0) {
        uVar13 = 1;
        uVar11 = 0xff;
        uVar10 = 0x14;
        uVar9 = 0x10;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0x14;
        uVar5 = 0x10;
        uVar2 = 0;
        uVar1 = FUN_101c19e0(0,0x10,0x14,0,0,0x10,0x14,iVar3,0xff,1);
        FUN_10021a00(uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,iVar3,uVar11,uVar13);
      }
      iVar3 = *(int *)(in_ECX + 0x2f0);
      if (iVar3 != 0) {
        uVar9 = 0xff;
        uVar8 = 0x14;
        uVar7 = 0x20;
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = 0x14;
        uVar1 = FUN_101c19e0(0x14,0,0,0x20,0x14,iVar3,0xff);
        FUN_10021970(0x10,0,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,iVar3,uVar9);
      }
      FString::FString(local_30,(FString *)(in_ECX + 0x2d8));
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar3 = FString::operator==(local_30,(ushort *)&DAT_1022f9f8);
      if ((iVar3 != 0) && (*(int *)(in_ECX + 0x2e4) != -1)) {
        puVar4 = FString::operator*((FString *)
                                    (GL2GameData_exref + *(int *)(in_ECX + 0x2e4) * 0xc + 0x6a8dc));
        FString::operator=(local_30,puVar4);
      }
      if ((*(int *)(in_ECX + 800) == 0) && (*(int *)(in_ECX + 0x324) == 0)) {
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = 0;
        uVar1 = 0;
        puVar4 = FString::operator*(local_30);
        FUN_10020bb0(local_24,puVar4,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8);
        *(undefined4 *)(in_ECX + 800) = 0x14;
        uVar1 = FUN_101c19e0();
        *(undefined4 *)(in_ECX + 0x324) = uVar1;
      }
      iVar3 = FString::operator!=(local_30,(ushort *)&DAT_1022f9f8);
      if (iVar3 != 0) {
        uVar14 = 0xffffffff;
        uVar12 = 0;
        uVar13 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = 0;
        uVar1 = 0;
        puVar4 = FString::operator*(local_30);
        FUN_100217a0(*(undefined4 *)(in_ECX + 800),*(undefined4 *)(in_ECX + 0x324),0xffc8d2dc,puVar4
                     ,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13,uVar12,uVar14);
      }
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_30);
      goto LAB_1001bdac;
    }
    if (*(int *)(in_ECX + 0x32c) != 1) goto LAB_1001bd06;
    if (*(int *)(in_ECX + 0x300) != 0) {
      FUN_10021a00(0,0,8,0xc,0,0,8,0xc,*(undefined4 *)(in_ECX + 0x308),0xff,1);
    }
    iVar3 = *(int *)(in_ECX + 0x304);
    if (iVar3 != 0) {
      uVar10 = 1;
      uVar9 = 0xff;
      uVar8 = 0xc;
      uVar7 = 8;
      uVar6 = 0;
      uVar5 = 0;
      uVar2 = 0xc;
      uVar1 = FUN_101c19e0(0xc,0,0,8,0xc,iVar3,0xff,1);
      FUN_10021a00(8,0,uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,iVar3,uVar9,uVar10);
    }
    if (*(int *)(in_ECX + 0x308) == 0) goto LAB_1001bdac;
    uVar13 = 1;
    uVar11 = 0xff;
    iVar3 = *(int *)(in_ECX + 0x300);
    uVar10 = 0xc;
    uVar9 = 8;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0xc;
    uVar5 = 8;
    uVar2 = 0;
    uVar1 = FUN_101c19e0(0,8,0xc,0,0,8,0xc,iVar3,0xff,1);
  }
  else {
LAB_1001bd06:
    if ((*(int *)(in_ECX + 0x328) != 1) || (*(int *)(in_ECX + 0x32c) != 1)) goto LAB_1001bdac;
    if (*(int *)(in_ECX + 0x30c) != 0) {
      FUN_10021a00(0,0,0xc,8,0,0,0xc,8,*(int *)(in_ECX + 0x30c),0xff,1);
    }
    iVar3 = *(int *)(in_ECX + 0x310);
    if (iVar3 != 0) {
      uVar9 = 1;
      uVar8 = 0xff;
      uVar7 = 8;
      uVar6 = 0xc;
      uVar5 = 0;
      uVar2 = 0;
      uVar1 = FUN_101c19e0(0,0,0xc,8,iVar3,0xff,1);
      FUN_10021a00(0,8,0xc,uVar1,uVar2,uVar5,uVar6,uVar7,iVar3,uVar8,uVar9);
    }
    iVar3 = *(int *)(in_ECX + 0x314);
    if (iVar3 == 0) goto LAB_1001bdac;
    uVar13 = 1;
    uVar11 = 0xff;
    uVar10 = 8;
    uVar9 = 0xc;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 8;
    uVar5 = 0xc;
    uVar2 = FUN_101c19e0(0xc,8,0,0,0xc,8,iVar3,0xff,1);
    uVar1 = 0;
  }
  FUN_10021a00(uVar1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,iVar3,uVar11,uVar13);
LAB_1001bdac:
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1001bdda Catch@1001bdda

void Catch_1001bdda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001bdee Catch@1001bdee

void Catch_1001bdee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001be10 FUN_1001be10

undefined4 FUN_1001be10(uint param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d5d0(param_1,param_2);
  if ((param_1 & 1) != 0) {
    iVar5 = (int)(short)((uint)param_2 >> 0x10);
    iVar3 = (int)(short)param_2 - *(int *)(in_ECX + 0x318);
    *(int *)(in_ECX + 0x318) = iVar3;
    iVar6 = iVar5 - *(int *)(in_ECX + 0x31c);
    *(int *)(in_ECX + 0x31c) = iVar6;
    if ((iVar3 == 0) && (iVar6 == 0)) {
      *(undefined4 *)(in_ECX + 0x34c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x34c) = 1;
    }
    uVar1 = *(undefined2 *)(in_ECX + 0x31c);
    uVar2 = *(undefined2 *)(in_ECX + 0x318);
    iVar3 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc);
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar3 + 4);
    }
    while (piVar4 != (int *)0x0) {
      iVar3 = FUN_1005a330();
      if (iVar3 == 0) {
        (**(code **)(*piVar4 + 0x68))(3,0,CONCAT22(uVar1,uVar2));
        break;
      }
      piVar4 = (int *)FUN_1005a660();
    }
    *(int *)(in_ECX + 0x318) = (int)(short)param_2;
    *(int *)(in_ECX + 0x31c) = iVar5;
    *(int *)(DAT_103663bc + 0x512c) = in_ECX;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1001bf1e Catch@1001bf1e

void Catch_1001bf1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001bf32 Catch@1001bf32

void Catch_1001bf32(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameCtrl::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001bf50 FUN_1001bf50

undefined4 FUN_1001bf50(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005d5d0(param_1,param_2);
  iVar4 = (int)(short)param_2;
  iVar5 = (int)(short)((uint)param_2 >> 0x10);
  iVar1 = (**(code **)(*in_ECX + 0x104))
                    (iVar4,iVar5,in_ECX[0x20],in_ECX[0x21],in_ECX[0x22],in_ECX[0x23]);
  if (iVar1 == 0) {
    if ((param_1 & 1) == 0) {
      (**(code **)(*in_ECX + 0x170))();
    }
    if ((in_ECX[0xdb] == 0) || ((param_1 & 1) == 0)) {
      if (in_ECX[0xdc] == 0) {
        ExceptionList = local_10;
        return 1;
      }
      in_ECX[0xdc] = 0;
      FUN_1003f960();
      ExceptionList = local_10;
      return 1;
    }
    iVar3 = (iVar4 - in_ECX[0xd4]) - in_ECX[0x20];
    in_ECX[0xc6] = iVar3;
    iVar2 = (iVar5 - in_ECX[0xd5]) - in_ECX[0x21];
    in_ECX[199] = iVar2;
    iVar1 = in_ECX[0xd9];
    if (iVar1 == 3) {
      iVar2 = -iVar2;
    }
    else if (iVar1 != 4) {
      if (iVar1 == 1) {
        iVar2 = -iVar3;
      }
      else {
        iVar2 = iVar3;
        if (iVar1 != 2) goto LAB_1001c11e;
      }
    }
    FUN_1000cb20(iVar2);
LAB_1001c11e:
    in_ECX[0xc6] = iVar4;
    in_ECX[199] = iVar5;
    ExceptionList = local_10;
    return 1;
  }
  (**(code **)(*in_ECX + 0x16c))();
  iVar1 = in_ECX[0xd9];
  if ((iVar1 == 3) || (iVar1 == 4)) {
    uVar6 = 5;
LAB_1001c013:
    FUN_1003f8b0(uVar6,0,0);
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar6 = 6;
    goto LAB_1001c013;
  }
  FUN_1003f950();
  in_ECX[0xdc] = 1;
  if ((param_1 & 1) == 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (in_ECX[0xdb] == 0) {
    ExceptionList = local_10;
    return 1;
  }
  iVar3 = (iVar4 - in_ECX[0xd4]) - in_ECX[0x20];
  in_ECX[0xc6] = iVar3;
  iVar2 = (iVar5 - in_ECX[0xd5]) - in_ECX[0x21];
  in_ECX[199] = iVar2;
  iVar1 = in_ECX[0xd9];
  if (iVar1 == 3) {
    iVar2 = -iVar2;
  }
  else if (iVar1 != 4) {
    if (iVar1 == 1) {
      iVar2 = -iVar3;
    }
    else {
      iVar2 = iVar3;
      if (iVar1 != 2) goto LAB_1001c095;
    }
  }
  FUN_1000cb20(iVar2);
LAB_1001c095:
  in_ECX[0xc6] = iVar4;
  in_ECX[199] = iVar5;
  ExceptionList = local_10;
  return 1;
}


// ==== 1001c15a Catch@1001c15a

void Catch_1001c15a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001c16e Catch@1001c16e

void Catch_1001c16e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCResizeFrame::OnMouseMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001c190 FUN_1001c190

undefined4 FUN_1001c190(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
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
  if (*(int *)(in_ECX + 0x374) != 0) {
    iVar1 = *(int *)(in_ECX + 0x364);
    if ((iVar1 == 2) || (iVar1 == 1)) {
      uVar2 = *(undefined4 *)(in_ECX + 0x358);
      uVar8 = 0xd;
      uVar7 = 9;
      uVar6 = 0xd;
      uVar5 = 9;
      uVar4 = 4;
      uVar3 = 1;
    }
    else {
      if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_1001c24f;
      uVar2 = *(undefined4 *)(in_ECX + 0x35c);
      uVar8 = 10;
      uVar7 = 0x18;
      uVar6 = 10;
      uVar5 = 0x18;
      uVar4 = 0xfffffffd;
      uVar3 = 0;
    }
    FUN_10021a00(uVar3,uVar4,uVar5,uVar6,0,0,uVar7,uVar8,uVar2,0xff,0);
  }
LAB_1001c24f:
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== 1001c270 FUN_1001c270

void FUN_1001c270(void)

{
  int *piVar1;
  int *in_ECX;
  
  if ((*(int *)(in_ECX[0x2e] + 0xc) != 0) &&
     (piVar1 = (int *)FUN_10010290(*(undefined4 *)(*(int *)(in_ECX[0x2e] + 0xc) + 4)),
     piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x180))();
    (**(code **)(*piVar1 + 0x13c))();
  }
                    /* WARNING: Could not recover jumptable at 0x1001c2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x7c))();
  return;
}


// ==== 1001c2c0 FUN_1001c2c0

undefined4 FUN_1001c2c0(void)

{
  int in_ECX;
  
  UObject::IsA(*(UObject **)(*(int *)(*(int *)(in_ECX + 0xb8) + 0xc) + 4),(UClass *)&DAT_103a1410);
  FUN_1014ed50(6);
  FUN_1001c270();
  return 1;
}


// ==== 1001c300 FUN_1001c300

void FUN_1001c300(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101da697;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCFrameCtrl::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x2d8));
  local_4 = 0xffffffff;
  FUN_10002a70(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1001c370 FUN_1001c370

void FUN_1001c370(byte param_1)

{
  void *in_ECX;
  
  FUN_1001c300();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x350);
  }
  return;
}


// ==== 1001c3a0 FUN_1001c3a0

void FUN_1001c3a0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101da6d7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCFrameCtrl::vftable;
  FString::FString((FString *)(in_ECX + 0xb6));
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xbe] = 0;
  in_ECX[0xbf] = 0;
  in_ECX[199] = 0;
  in_ECX[0xc6] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[200] = 0;
  in_ECX[0xd1] = 0;
  in_ECX[0xd0] = 0;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackLeft",1);
  in_ECX[0xbb] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackMid",1);
  in_ECX[0xbc] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackRight",1);
  in_ECX[0xbd] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h1",1);
  in_ECX[0xc0] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h2",1);
  in_ECX[0xc1] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h3",1);
  in_ECX[0xc2] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar1",1);
  in_ECX[0xc3] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar2",1);
  in_ECX[0xc4] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar3",1);
  in_ECX[0xc5] = uVar1;
  in_ECX[0xd2] = 1;
  in_ECX[0xd3] = 0;
  in_ECX[0xcc] = 0;
  in_ECX[0xcf] = 0;
  in_ECX[0xb9] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 1001c510 FUN_1001c510

void FUN_1001c510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101da717;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100031f0(DAT_103554c4 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = NCFrameCtrl::vftable;
  FString::FString((FString *)(in_ECX + 0xb6));
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xbe] = 0;
  in_ECX[0xbf] = 0;
  in_ECX[199] = 0;
  in_ECX[0xc6] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[200] = 0;
  in_ECX[0xd1] = 0;
  in_ECX[0xd0] = 0;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackLeft",1);
  in_ECX[0xbb] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackMid",1);
  in_ECX[0xbc] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.FrameBackRight",1);
  in_ECX[0xbd] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h1",1);
  in_ECX[0xc0] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h2",1);
  in_ECX[0xc1] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar_h3",1);
  in_ECX[0xc2] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar1",1);
  in_ECX[0xc3] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar2",1);
  in_ECX[0xc4] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.FrameCtrl.smallbar3",1);
  in_ECX[0xc5] = uVar1;
  in_ECX[0xd2] = param_1;
  in_ECX[0xd3] = 0;
  in_ECX[0xca] = param_2;
  in_ECX[0xcb] = param_3;
  in_ECX[0xcc] = 0;
  in_ECX[0xcf] = 0;
  in_ECX[0xb9] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 1001c6a0 FUN_1001c6a0

void FUN_1001c6a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101da748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001c3a0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = NCResizeFrame::vftable;
  in_ECX[0xd5] = 0;
  in_ECX[0xd4] = 0;
  in_ECX[0xd9] = param_1;
  in_ECX[0xd2] = 0;
  in_ECX[0xda] = 0;
  in_ECX[0xdc] = 0;
  in_ECX[0xdb] = 0;
  uVar1 = FUN_1003f630(L"L2UI_CH3.PlayerStatusWnd.ps_sizecontrol2",1);
  in_ECX[0xd6] = uVar1;
  uVar1 = FUN_1003f630(L"L2UI_CH3.ChatWnd.Chatting_sizeControl",1);
  in_ECX[0xd7] = uVar1;
  in_ECX[0xdd] = param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1001c760 FUN_1001c760

void FUN_1001c760(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101da778;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCResizeFrame::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_1001c300(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1001c7c0 FUN_1001c7c0

void FUN_1001c7c0(byte param_1)

{
  void *in_ECX;
  
  FUN_1001c760();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x378);
  }
  return;
}


// ==== 1001c820 FUN_1001c820

void FUN_1001c820(undefined4 param_1)

{
  int in_ECX;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da7a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x34),(FString *)&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x50) = in_stack_00000014;
  *(undefined4 *)(in_ECX + 0x48) = in_stack_00000018;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  *(undefined4 *)(in_ECX + 0x54) = in_stack_0000001c;
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 1001c8a5 Catch@1001c8a5

void Catch_1001c8a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001c8b9 Catch@1001c8b9

void Catch_1001c8b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawerWindowInfo::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001c8e0 FUN_1001c8e0

void FUN_1001c8e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x4c) = param_1;
  return;
}


// ==== 1001c933 Catch@1001c933

void Catch_1001c933(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001c947 Catch@1001c947

void Catch_1001c947(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawerWindowInfo::SetOppositeDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001c970 FUN_1001c970

undefined4 FUN_1001c970(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x54);
}


// ==== 1001c9b7 Catch@1001c9b7

void Catch_1001c9b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001c9cb Catch@1001c9cb

void Catch_1001c9cb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawerWindowInfo::IsDirectionFixed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001c9f0 FUN_1001c9f0

void FUN_1001c9f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4c) != 0) {
    switch(*(undefined4 *)(in_ECX + 0x50)) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
  }
  return;
}


// ==== 1001ca6c Catch@1001ca6c

void Catch_1001ca6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1001ca80 Catch@1001ca80

void Catch_1001ca80(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawerWindowInfo::GetDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001cab0 FUN_1001cab0

undefined4 FUN_1001cab0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x40);
}


// ==== 1001caf7 Catch@1001caf7

void Catch_1001caf7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001cb0b Catch@1001cb0b

void Catch_1001cb0b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCDrawerWindowInfo::GetOwnerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001cb30 FUN_1001cb30

bool FUN_1001cb30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if (param_1 == 0x50f) {
    iVar1 = (**(code **)(*in_ECX + 0x214))();
    return iVar1 != 0;
  }
  return false;
}


// ==== 1001cb80 FUN_1001cb80

void FUN_1001cb80(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da850;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1005ff00();
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x208) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1001cbdc Catch@1001cbdc

void Catch_1001cbdc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001cbf0 Catch@1001cbf0

void Catch_1001cbf0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::DrawerHideTransitionFinished");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001cc10 FUN_1001cc10

undefined4 FUN_1001cc10(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1ec) == 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 0x1f0);
}


// ==== 1001cc77 Catch@1001cc77

void Catch_1001cc77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001cc8b Catch@1001cc8b

void Catch_1001cc8b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::GetShowAnimType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001ccb0 FUN_1001ccb0

undefined4 FUN_1001ccb0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1ec) == 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 500);
}


// ==== 1001cd17 Catch@1001cd17

void Catch_1001cd17(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001cd2b Catch@1001cd2b

void Catch_1001cd2b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::GetHideAnimType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001cd50 FUN_1001cd50

void FUN_1001cd50(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1f0) = param_1;
  return;
}


// ==== 1001cda6 Catch@1001cda6

void Catch_1001cda6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001cdba Catch@1001cdba

void Catch_1001cdba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::SetShowAnimType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001cde0 FUN_1001cde0

void FUN_1001cde0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 500) = param_1;
  return;
}


// ==== 1001ce36 Catch@1001ce36

void Catch_1001ce36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001ce4a Catch@1001ce4a

void Catch_1001ce4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::SetHideAnimType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001ce70 FUN_1001ce70

void FUN_1001ce70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x200) = param_1;
  return;
}


// ==== 1001cec6 Catch@1001cec6

void Catch_1001cec6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001ceda Catch@1001ceda

void Catch_1001ceda(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::SetShowHideTransitionState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001cf00 FUN_1001cf00

undefined4 FUN_1001cf00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x200);
}


// ==== 1001cf4a Catch@1001cf4a

void Catch_1001cf4a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001cf5e Catch@1001cf5e

void Catch_1001cf5e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::GetShowHideTransitionState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001cf80 FUN_1001cf80

undefined4 FUN_1001cf80(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10058f70();
  if (iVar1 != 0) {
    iVar1 = FUN_10058f70();
    while (iVar1 != 0) {
      if (iVar1 == param_1) {
        ExceptionList = local_10;
        return 0;
      }
      iVar1 = FUN_10058f70();
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1001d007 Catch@1001d007

void Catch_1001d007(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001d01b Catch@1001d01b

void Catch_1001d01b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::IsValidForParent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001d040 FUN_1001d040

undefined4 FUN_1001d040(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da950;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = (**(code **)(*in_ECX + 0x204))();
  if (((uVar1 & 1) == 0) || (in_ECX[0x82] == 0)) {
    iVar2 = FUN_1001cf00();
    if (iVar2 != 2) {
      uVar3 = FUN_1005c4d0(param_1);
      ExceptionList = local_10;
      return uVar3;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1001d0cc Catch@1001d0cc

void Catch_1001d0cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001d0e0 Catch@1001d0e0

void Catch_1001d0e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::IsShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001d100 FUN_1001d100

uint FUN_1001d100(void)

{
  uint uVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da970;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = (**(code **)(*in_ECX + 0x84))();
  ExceptionList = local_10;
  return uVar1 & 8;
}


// ==== 1001d151 Catch@1001d151

void Catch_1001d151(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001d165 Catch@1001d165

void Catch_1001d165(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::IsPassThrough");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001d190 FUN_1001d190

int FUN_1001d190(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x1e4);
  if (iVar2 == 0) {
    piVar1 = (int *)FUN_10058f70();
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0xc4))();
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 1001d207 Catch@1001d207

void Catch_1001d207(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1001d21b Catch@1001d21b

void Catch_1001d21b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCFrameWnd::GetUIScript");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1001d240 FUN_1001d240

void FUN_1001d240(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101da9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1001cf00();
  if (iVar1 == 1) {
    iVar1 = FUN_1001cc10();
    if (iVar1 != 3) {
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_1001ccb0();
    if (iVar1 != 3) {
      ExceptionList = local_10;
      return;
    }
    FUN_1005ff00();
  }
  FUN_1001ce70(0);
  ExceptionList = local_10;
  return;
}


