// ==== 100ec0f0 FUN_100ec0f0

void FUN_100ec0f0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd6f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  operator<<(param_1,(FString *)(in_ECX + 0x88));
  FUN_100ebec0(param_1,in_ECX + 0x94);
  FUN_100ebe10(param_1,in_ECX + 0x98);
  operator<<(param_1,(FString *)(in_ECX + 0x9c));
  FUN_100052e0(param_1,in_ECX + 0xa8);
  FUN_100052e0(param_1,in_ECX + 0xac);
  FUN_100052e0(param_1,in_ECX + 0xb0);
  FUN_100052e0(param_1,in_ECX + 0xb4);
  FUN_100052e0(param_1,in_ECX + 0xb8);
  FUN_100052e0(param_1,in_ECX + 0xbc);
  ExceptionList = local_10;
  return;
}


// ==== 100ec1d0 Catch@100ec1d0

void Catch_100ec1d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ec1e4 Catch@100ec1e4

void Catch_100ec1e4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextBoxData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ec210 FUN_100ec210

void FUN_100ec210(byte param_1)

{
  FUN_100ec030();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100ec240 FUN_100ec240

undefined4 FUN_100ec240(void)

{
  int iVar1;
  FString *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int *in_ECX;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  undefined4 uStack_58;
  wchar_t *pwStack_54;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [20];
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd7b2;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = (undefined1 *)&uStack_58;
  FString::FString((FString *)&uStack_58,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60();
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pwStack_54 = L"XMLTextBoxData(%s):default property processing failed!!";
  }
  else {
    pwStack_54 = 
    L"䗆ϼ\xec83謌觌ࡥ喍勔譑\xe8cfᕋ\xfffe䗆Ӽڋ䗆ϼ캋䂋ｸ裐ﱝ䶍ￔ쐕⋃栐\xe188ဥ䶍ￔ⠕⋄옐ﱅ謅褎ࡍ喍勔쾋⳨︖僿캋䖋謈籐틿嶈跼푍ᗿ쏄ဢ瑨◡贐푍ᗿ쐨ဢ䗆ۼڋ䖉贈푍譑\xe8cfᗳ\xfffe譐诎ࡕ芋\x80"
    ;
    FString::FString(local_30,(ushort *)L"text");
    local_8._0_1_ = 3;
    FUN_100cd860();
    local_8._0_1_ = 3;
    (**(code **)(*in_ECX + 0x78))();
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    FString::FString(local_30,(ushort *)L"sysstring");
    local_8._0_1_ = 5;
    iVar1 = *in_ECX;
    FUN_100cd980();
    (**(code **)(iVar1 + 0x7c))();
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    FString::FString(local_30,(ushort *)L"systemMsg");
    local_8._0_1_ = 6;
    iVar1 = *in_ECX;
    FUN_100cd980();
    (**(code **)(iVar1 + 0x80))();
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    FString::FString(local_30,(ushort *)L"align");
    local_8._0_1_ = 7;
    iVar1 = *in_ECX;
    FUN_100ce0a0();
    (**(code **)(iVar1 + 0x88))();
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    FString::FString(local_30,(ushort *)L"fontType");
    local_8._0_1_ = 8;
    iVar1 = *in_ECX;
    FUN_100ce210();
    (**(code **)(iVar1 + 0x8c))();
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    uStack_70 = 0x100ec42d;
    FString::FString(local_30,(ushort *)L"backTex");
    local_8._0_1_ = 9;
    FUN_100cd860(auStack_74,local_30);
    local_8._0_1_ = 9;
    (**(code **)(*in_ECX + 0x90))();
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    FString::FString(local_30,(ushort *)L"offsetY");
    local_8._0_1_ = 0xb;
    iVar1 = *in_ECX;
    uVar3 = FUN_100cd980(local_30);
    (**(code **)(iVar1 + 0x94))(uVar3);
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    FString::FString(local_30,(ushort *)L"emoticon");
    local_8._0_1_ = 0xc;
    pFVar2 = (FString *)FUN_100cd860(local_3c,local_30);
    local_8._0_1_ = 0xd;
    iVar1 = *in_ECX;
    iVar4 = FString::operator_int(pFVar2);
    (**(code **)(iVar1 + 0x98))(iVar4);
    local_8._0_1_ = 0xc;
    FString::~FString(local_3c);
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    FString::FString(local_30,(ushort *)L"autosize");
    local_8._0_1_ = 0xe;
    iVar1 = *in_ECX;
    uVar3 = FUN_100cda90(local_30);
    (**(code **)(iVar1 + 0x9c))(uVar3);
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    local_18 = 0;
    FString::FString(local_30,(ushort *)L"TextColor");
    local_8._0_1_ = 0xf;
    iVar1 = FUN_100cd670(local_30,&local_18);
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    if (iVar1 == 0) {
LAB_100ec67d:
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000008);
      ExceptionList = local_10;
      return 1;
    }
    FString::FString(local_30,(ushort *)&DAT_10268608);
    local_8._0_1_ = 0x10;
    puVar5 = (undefined1 *)FUN_100cd980(local_30);
    local_8._0_1_ = 1;
    local_1c = puVar5;
    FString::~FString(local_30);
    if (puVar5 == (undefined1 *)0xffffd8f1) {
      pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
      FString::operator*(pFVar2);
      pwStack_54 = L"XMLTextBoxData(%s):R is not defined for TextColor!!";
    }
    else {
      FString::FString(local_30,(ushort *)&DAT_10268598);
      local_8._0_1_ = 0x11;
      iVar1 = FUN_100cd980(local_30);
      local_8._0_1_ = 1;
      FString::~FString(local_30);
      if (iVar1 == -9999) {
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_54 = L"XMLTextBoxData(%s):G is not defined for TextColor!!";
      }
      else {
        FString::FString(local_30,(ushort *)&DAT_1024d210);
        local_8._0_1_ = 0x12;
        iVar4 = FUN_100cd980(local_30);
        local_8._0_1_ = 1;
        FString::~FString(local_30);
        if (iVar4 != -9999) {
          (**(code **)(*in_ECX + 0x84))(local_1c,iVar1,iVar4);
          goto LAB_100ec67d;
        }
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_54 = L"XMLTextBoxData(%s):B is not defined for TextColor!!";
      }
    }
  }
  uStack_58 = 0x100ec2c0;
  uStack_58 = FUN_10005c30();
  FUN_100d01f0();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100ec6a3 Catch@100ec6a3

void Catch_100ec6a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100ec6b7 Catch@100ec6b7

void Catch_100ec6b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextBoxData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ec6e0 FUN_100ec6e0

undefined4 FUN_100ec6e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  FString *this;
  int *in_ECX;
  undefined4 auStack_70 [3];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 auStack_58 [12];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  wchar_t *pwStack_3c;
  ushort *puStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fd7e2;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_38 = (ushort *)0x0;
  uStack_44 = 0x100ec724;
  FName::FName((FName *)&pwStack_3c,0);
  UObject::GetTransientPackage();
  uStack_44 = 0x378;
  uStack_48 = 0x100ec735;
  iVar1 = FUN_100ebde0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    puStack_38 = (ushort *)0x100ec74e;
    puStack_38 = (ushort *)(**(code **)(*in_ECX + 0xc4))();
    pwStack_3c = L"譐謆诎겐";
    pwStack_3c = (wchar_t *)(**(code **)(*in_ECX + 0xc0))();
    (**(code **)(*in_ECX + 0xac))();
    uStack_44 = 0x100ec775;
    uStack_44 = (**(code **)(*in_ECX + 0xa8))();
    uStack_48 = 0x100ec782;
    uStack_48 = (**(code **)(*in_ECX + 0xa4))();
    uStack_4c = 0x100ec78f;
    uStack_4c = (**(code **)(*in_ECX + 0xbc))();
    puStack_5c = auStack_58;
    uStack_60 = 0x100ec7a5;
    (**(code **)(*in_ECX + 0xb8))();
    local_8._0_1_ = 1;
    uStack_60 = 0x100ec7b5;
    uStack_60 = (**(code **)(*in_ECX + 0xb4))();
    uStack_64 = 0x100ec7c2;
    uStack_64 = (**(code **)(*in_ECX + 0xb0))();
    (**(code **)(*in_ECX + 0xa0))(auStack_70);
    local_8 = (uint)local_8._1_3_ << 8;
    auStack_70[0] = 0x100ec7e7;
    iVar1 = FUN_10052c20();
  }
  in_ECX[0x1f] = iVar1;
  puStack_38 = (ushort *)param_2;
  pwStack_3c = (wchar_t *)param_1;
  iVar1 = FUN_100f0800();
  if (iVar1 == 0) {
    puStack_38 = (ushort *)0x100ec80a;
    this = (FString *)(**(code **)(*in_ECX + 0x44))();
    puStack_38 = (ushort *)0x100ec812;
    puStack_38 = FString::operator*(this);
    pwStack_3c = L"XMLTextBoxData(%s):failed to create default property!!";
    FUN_10005c30();
    uStack_44 = 0x100ec823;
    FUN_100d01f0();
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100ec855 Catch@100ec855

void Catch_100ec855(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ec869 Catch@100ec869

void Catch_100ec869(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextBoxData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ec890 FUN_100ec890

void FUN_100ec890(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd800;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef430();
  ExceptionList = local_10;
  return;
}


// ==== 100ec8e0 Catch@100ec8e0

void Catch_100ec8e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ec8f4 Catch@100ec8f4

void Catch_100ec8f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextListBoxData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ec920 FUN_100ec920

void FUN_100ec920(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100efb90();
  ExceptionList = local_10;
  return;
}


// ==== 100ec970 Catch@100ec970

void Catch_100ec970(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ec984 Catch@100ec984

void Catch_100ec984(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextListBoxData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ec9b0 FUN_100ec9b0

void FUN_100ec9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10364ef0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100ec9e0 FUN_100ec9e0

void FUN_100ec9e0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101fd848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  *in_ECX = XMLTextListBoxData::vftable;
  local_8 = 1;
  FUN_100ec890();
  ExceptionList = local_10;
  return;
}


// ==== 100eca48 Catch@100eca48

void Catch_100eca48(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eca5c Catch@100eca5c

void Catch_100eca5c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextListBoxData::XMLTextListBoxData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eca80 FUN_100eca80

void FUN_100eca80(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLTextListBoxData::vftable;
  local_8 = 1;
  FUN_100ec920();
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100ecae6 Catch@100ecae6

void Catch_100ecae6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ecafa Catch@100ecafa

void Catch_100ecafa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextListBoxData::~XMLTextListBoxData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ecb20 FUN_100ecb20

void FUN_100ecb20(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd8a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  FUN_100052e0(param_1,in_ECX + 0x88);
  FUN_100052e0(param_1,in_ECX + 0x8c);
  FUN_100052e0(param_1,in_ECX + 0x90);
  FUN_100052e0(param_1,in_ECX + 0x94);
  ExceptionList = local_10;
  return;
}


// ==== 100ecbaf Catch@100ecbaf

void Catch_100ecbaf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ecbc3 Catch@100ecbc3

void Catch_100ecbc3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextListBoxData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ecbe0 FUN_100ecbe0

void FUN_100ecbe0(byte param_1)

{
  FUN_100eca80();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100ecc10 FUN_100ecc10

undefined4 FUN_100ecc10(undefined4 param_1)

{
  int iVar1;
  FString *pFVar2;
  int *in_ECX;
  undefined4 uStack_48;
  wchar_t *pwStack_44;
  uint uStack_3c;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd8f6;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = (undefined1 *)&uStack_48;
  FString::FString((FString *)&uStack_48,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pwStack_44 = L"XMLTextListBoxData(%s):default property processing failed!!";
  }
  else {
    pwStack_44 = L"䗆ϼ䶍凘쾋ꓨ\xfe0c觿貆";
    FString::FString(local_2c,(ushort *)L"maxRow");
    local_8._0_1_ = 3;
    pwStack_44 = L"蚉\x8c";
    iVar1 = FUN_100cd980();
    in_ECX[0x23] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_2c);
    if (in_ECX[0x23] == -9999) {
      pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
      FString::operator*(pFVar2);
      pwStack_44 = L"XMLTextListBoxData(%s):maxRow is not defined!!";
    }
    else {
      pwStack_44 = L"䗆Ӽ䶍凘쾋䷨\xfe0c觿袆";
      FString::FString(local_2c,(ushort *)L"showRow");
      local_8._0_1_ = 4;
      pwStack_44 = L"蚉\x88";
      iVar1 = FUN_100cd980();
      in_ECX[0x22] = iVar1;
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      if (in_ECX[0x22] == -9999) {
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_44 = L"XMLTextListBoxData(%s):showRow is not defined!!";
      }
      else {
        pwStack_44 = L"䗆׼䶍凘쾋\xf6e8\xfe0b觿邆";
        FString::FString(local_2c,(ushort *)L"lineGap");
        local_8._0_1_ = 5;
        pwStack_44 = L"蚉\x90";
        iVar1 = FUN_100cd980();
        in_ECX[0x24] = iVar1;
        local_8._0_1_ = 1;
        FString::~FString(local_2c);
        if (in_ECX[0x24] != -9999) {
          pwStack_44 = L"䗆ۼ䶍凘쾋꿨\xfe0c觿钆";
          FString::FString(local_2c,(ushort *)L"isShowScroll");
          local_8._0_1_ = 6;
          pwStack_44 = L"蚉\x94";
          iVar1 = FUN_100cda90();
          in_ECX[0x25] = iVar1;
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_2c);
          if (in_ECX[0x25] != -1) {
            local_8 = 0xffffffff;
            FString::~FString((FString *)&stack0x00000008);
            ExceptionList = local_10;
            return 1;
          }
          pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
          FString::operator*(pFVar2);
          pwStack_44 = L"XMLTextListBoxData(%s):isShowScroll is not defined!!";
          uStack_48 = 0x100ece1a;
          uStack_48 = FUN_10005c30();
          FUN_100d01f0();
          goto LAB_100ecca0;
        }
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_44 = L"XMLTextListBoxData(%s):lineGap is not defined!!";
      }
    }
  }
  uStack_48 = 0x100ecc90;
  uStack_48 = FUN_10005c30();
  FUN_100d01f0();
LAB_100ecca0:
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100ece4d Catch@100ece4d

void Catch_100ece4d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ece61 Catch@100ece61

void Catch_100ece61(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextListBoxData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ece80 FUN_100ece80

undefined4 FUN_100ece80(undefined4 param_1,undefined4 param_2)

{
  UPackage *pUVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined8 uVar5;
  wchar_t *pwStack_38;
  ushort *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd920;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_34 = (ushort *)0x0;
  pwStack_38 = (wchar_t *)in_ECX;
  FName::FName((FName *)&pwStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  uVar5 = FUN_100ec9b0(0x328,pUVar1);
  if ((int)uVar5 != 0) {
    puStack_34 = (ushort *)in_ECX[0x24];
    pwStack_38 = (wchar_t *)CONCAT31((int3)((ulonglong)uVar5 >> 0x28),in_ECX[0x25] != 0);
    iVar2 = FUN_10034230(in_ECX[0x23],in_ECX[0x22]);
    if (iVar2 != 0) {
      in_ECX[0x1f] = iVar2;
      puStack_34 = (ushort *)param_2;
      pwStack_38 = (wchar_t *)param_1;
      iVar2 = FUN_100f0800();
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      puStack_34 = (ushort *)0x100ecf61;
      pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
      puStack_34 = (ushort *)0x100ecf69;
      puStack_34 = FString::operator*(pFVar3);
      pwStack_38 = L"XMLTextListBoxData(%s):failed to create default property!!";
      goto LAB_100ecf1e;
    }
  }
  puStack_34 = (ushort *)0x100ecf10;
  pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
  puStack_34 = (ushort *)0x100ecf18;
  puStack_34 = FString::operator*(pFVar3);
  pwStack_38 = L"XMLTextListBoxData(%s):creation failed!!";
LAB_100ecf1e:
  uVar4 = FUN_10005c30();
  FUN_100d01f0(uVar4);
  ExceptionList = local_10;
  return 0;
}


// ==== 100ecf8a Catch@100ecf8a

void Catch_100ecf8a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ecf9e Catch@100ecf9e

void Catch_100ecf9e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextListBoxData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ecfc0 FUN_100ecfc0

void FUN_100ecfc0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd949;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x88),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100ed02a Catch@100ed02a

void Catch_100ed02a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed03e Catch@100ed03e

void Catch_100ed03e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::SetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed060 FUN_100ed060

void FUN_100ed060(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x94) = param_1;
  return;
}


// ==== 100ed0b6 Catch@100ed0b6

void Catch_100ed0b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed0ca Catch@100ed0ca

void Catch_100ed0ca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::SetTextAlign");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed0f0 FUN_100ed0f0

void FUN_100ed0f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x98) = param_1;
  return;
}


// ==== 100ed146 Catch@100ed146

void Catch_100ed146(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed15a Catch@100ed15a

void Catch_100ed15a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::SetTextureLayer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed180 FUN_100ed180

void FUN_100ed180(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x9c) = param_1;
  *(undefined4 *)(in_ECX + 0xa0) = param_2;
  *(float *)(in_ECX + 0xa4) = (float)param_3;
  *(float *)(in_ECX + 0xa8) = (float)param_4;
  return;
}


// ==== 100ed1f3 Catch@100ed1f3

void Catch_100ed1f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed207 Catch@100ed207

void Catch_100ed207(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::SetTextureCoords");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed230 FUN_100ed230

void FUN_100ed230(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xac) = param_1;
  return;
}


// ==== 100ed286 Catch@100ed286

void Catch_100ed286(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed29a Catch@100ed29a

void Catch_100ed29a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::SetTextureAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed2c0 FUN_100ed2c0

int FUN_100ed2c0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fd9f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x26];
  if (iVar2 == 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x8c))(), iVar2 != 0)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 2;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100ed32e Catch@100ed32e

void Catch_100ed32e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed342 Catch@100ed342

void Catch_100ed342(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::GetTextureLayer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed360 FUN_100ed360

int FUN_100ed360(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fda10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x2b];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x90))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0xff;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100ed3d4 Catch@100ed3d4

void Catch_100ed3d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed3e8 Catch@100ed3e8

void Catch_100ed3e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::GetTextureAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed410 FUN_100ed410

int FUN_100ed410(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fda30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x2c];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x94))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100ed47d Catch@100ed47d

void Catch_100ed47d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed491 Catch@100ed491

void Catch_100ed491(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::GetIsAnimTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed4b0 FUN_100ed4b0

int * FUN_100ed4b0(void)

{
  int *piVar1;
  FString *this;
  int iVar2;
  wchar_t *pwVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fda50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_100ef3b0();
  if (piVar1 != (int *)0x0) {
    pwVar3 = L"Texture";
    this = (FString *)(**(code **)(*piVar1 + 0x40))();
    iVar2 = FString::operator!=(this,(ushort *)pwVar3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return piVar1;
    }
  }
  ExceptionList = local_10;
  return (int *)0x0;
}


// ==== 100ed52f Catch@100ed52f

void Catch_100ed52f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed543 Catch@100ed543

void Catch_100ed543(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::GetExtendsData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed560 FUN_100ed560

void FUN_100ed560(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fda70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef430();
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 1;
  *(undefined4 *)(in_ECX + 0xac) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 0xb0) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 100ed5e6 Catch@100ed5e6

void Catch_100ed5e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed5fa Catch@100ed5fa

void Catch_100ed5fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed620 FUN_100ed620

void FUN_100ed620(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fda90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100efb90();
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 1;
  *(undefined4 *)(in_ECX + 0xac) = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100ed6a1 Catch@100ed6a1

void Catch_100ed6a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed6b5 Catch@100ed6b5

void Catch_100ed6b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed6e0 FUN_100ed6e0

void FUN_100ed6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036b6e0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100ed710 FUN_100ed710

void FUN_100ed710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10356e10,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100ed740 FUN_100ed740

FArchive * FUN_100ed740(FArchive *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdab0;
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


// ==== 100ed7be Catch@100ed7be

void Catch_100ed7be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ed7d2 Catch@100ed7d2

void Catch_100ed7d2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator <<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed7f0 FUN_100ed7f0

FArchive * FUN_100ed7f0(FArchive *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdad0;
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


// ==== 100ed86e Catch@100ed86e

void Catch_100ed86e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ed882 Catch@100ed882

void Catch_100ed882(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator <<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed8a0 FUN_100ed8a0

void FUN_100ed8a0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101fdb07;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  local_8 = 0;
  *in_ECX = XMLTextureCtrlData::vftable;
  FString::FString((FString *)(in_ECX + 0x22));
  in_ECX[0x28] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  FUN_100ed560();
  ExceptionList = local_10;
  return;
}


// ==== 100ed930 Catch@100ed930

void Catch_100ed930(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed944 Catch@100ed944

void Catch_100ed944(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::XMLTextureCtrlData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ed970 FUN_100ed970

void FUN_100ed970(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdb47;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLTextureCtrlData::vftable;
  local_8 = 2;
  FUN_100ed620();
  local_8 = 0;
  FString::~FString((FString *)(in_ECX + 0x22));
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100ed9e9 Catch@100ed9e9

void Catch_100ed9e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ed9fd Catch@100ed9fd

void Catch_100ed9fd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::~XMLTextureCtrlData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eda20 FUN_100eda20

void FUN_100eda20(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdb70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  operator<<(param_1,(FString *)(in_ECX + 0x88));
  FUN_100ed740(param_1,in_ECX + 0x94);
  FUN_100ed7f0(param_1,in_ECX + 0x98);
  FUN_1003ff50(param_1,in_ECX + 0x9c);
  FUN_100052e0(param_1,in_ECX + 0xac);
  FUN_100052e0(param_1,in_ECX + 0xb0);
  ExceptionList = local_10;
  return;
}


// ==== 100edaca Catch@100edaca

void Catch_100edaca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100edade Catch@100edade

void Catch_100edade(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100edb00 FUN_100edb00

void FUN_100edb00(byte param_1)

{
  FUN_100ed970();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100edb30 FUN_100edb30

undefined4 FUN_100edb30(int param_1)

{
  int iVar1;
  FString *pFVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *in_ECX;
  undefined4 uStack_5c;
  FString *pFStack_58;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [20];
  undefined1 *local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdc0e;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_20 = (undefined1 *)&uStack_5c;
  FString::FString((FString *)&uStack_5c,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pFStack_58 = (FString *)0x10263d68;
    uStack_5c = 0x100edbad;
    uStack_5c = FUN_10005c30();
    FUN_100d01f0();
  }
  else {
    pFStack_58 = (FString *)0x100edbea;
    FString::FString(local_40,(ushort *)L"file");
    local_8._0_1_ = 3;
    pFStack_58 = local_34;
    uStack_5c = 0x100edbfd;
    FUN_100cd860();
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    FString::FString((FString *)&uStack_5c,local_34);
    local_8._0_1_ = 5;
    (**(code **)(*in_ECX + 0x78))();
    FString::FString(local_40,(ushort *)L"type");
    local_8._0_1_ = 7;
    uVar3 = FUN_100ce400(local_40);
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    (**(code **)(*in_ECX + 0x7c))(uVar3);
    FString::FString(local_40,(ushort *)L"layer");
    local_8._0_1_ = 8;
    uVar3 = FUN_100ce590(local_40);
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    (**(code **)(*in_ECX + 0x80))(uVar3);
    FString::FString(local_40,(ushort *)L"alpha");
    local_8._0_1_ = 9;
    iVar1 = *in_ECX;
    uVar3 = FUN_100cd980(local_40);
    (**(code **)(iVar1 + 0x88))(uVar3);
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    FString::FString(local_40,(ushort *)L"isAnimTex");
    local_8._0_1_ = 10;
    iVar1 = FUN_100cda90(local_40);
    in_ECX[0x2c] = iVar1;
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    local_18 = 0;
    FString::FString(local_40,(ushort *)L"TextureCoords");
    local_8._0_1_ = 0xb;
    iVar1 = FUN_100cd670(local_40,&local_18);
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    if (iVar1 == 0) {
LAB_100ede99:
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_34);
      local_8 = 0xffffffff;
      FString::~FString((FString *)&stack0x00000008);
      ExceptionList = local_10;
      return 1;
    }
    FString::FString(local_40,(ushort *)&DAT_1026926c);
    local_8._0_1_ = 0xc;
    iVar1 = FUN_100cd980(local_40);
    local_8._0_1_ = 5;
    local_1c = iVar1;
    FString::~FString(local_40);
    if (iVar1 == -9999) {
      local_1c = 0;
    }
    FString::FString(local_40,(ushort *)&DAT_10269268);
    local_8._0_1_ = 0xd;
    param_1 = FUN_100cd980(local_40);
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    if (param_1 == -9999) {
      param_1 = 0;
    }
    FString::FString(local_40,(ushort *)L"usize");
    local_8._0_1_ = 0xe;
    puVar4 = (undefined1 *)FUN_100cd980(local_40);
    local_8._0_1_ = 5;
    local_20 = puVar4;
    FString::~FString(local_40);
    if (puVar4 == (undefined1 *)0xffffd8f1) {
      pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
      FString::operator*(pFVar2);
      pFStack_58 = (FString *)0x10269200;
    }
    else {
      FString::FString(local_40,(ushort *)L"vsize");
      local_8._0_1_ = 0xf;
      iVar1 = FUN_100cd980(local_40);
      local_8._0_1_ = 5;
      FString::~FString(local_40);
      if (iVar1 != -9999) {
        (**(code **)(*in_ECX + 0x84))(local_1c,param_1,local_20,iVar1);
        goto LAB_100ede99;
      }
      pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
      FString::operator*(pFVar2);
      pFStack_58 = (FString *)0x10269190;
    }
    uStack_5c = 0x100ede1a;
    uStack_5c = FUN_10005c30();
    FUN_100d01f0();
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_34);
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100edecf Catch@100edecf

void Catch_100edecf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100edee3 Catch@100edee3

void Catch_100edee3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100edf00 FUN_100edf00

undefined4 FUN_100edf00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  FString *this;
  uint uVar2;
  int *in_ECX;
  int extraout_ECX;
  FString aFStack_50 [12];
  int iStack_44;
  wchar_t *pwStack_38;
  ushort *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101fdc42;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_34 = (ushort *)0x100edf3d;
  iVar1 = (**(code **)(*in_ECX + 0x94))();
  puStack_34 = (ushort *)0x0;
  if (iVar1 == 0) {
    pwStack_38 = (wchar_t *)extraout_ECX;
    FName::FName((FName *)&pwStack_38,0);
    UObject::GetTransientPackage();
    iStack_44 = 0x100edffd;
    iVar1 = FUN_100ed6e0();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      pwStack_38 = (wchar_t *)in_ECX[0x29];
      puStack_34 = (ushort *)in_ECX[0x2a];
      iStack_44 = in_ECX[0x25];
      FString::FString(aFStack_50,(FString *)(in_ECX + 0x22));
      local_8 = local_8 & 0xffffff00;
      iVar1 = FUN_10054020();
    }
  }
  else {
    FName::FName((FName *)&pwStack_38,0);
    UObject::GetTransientPackage();
    iStack_44 = 0x100edf64;
    iVar1 = FUN_100ed710();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      puStack_34 = (ushort *)0x100edf72;
      iVar1 = FUN_10002b90();
    }
    iStack_44 = 0x100edf8d;
    FString::FString((FString *)&stack0xffffffc4,(FString *)(in_ECX + 0x22));
    local_8 = local_8 & 0xffffff00;
    FUN_10052e50();
    puStack_34 = (ushort *)in_ECX[0x25];
    pwStack_38 = L"隋\x9c";
    FUN_100531e0();
    puStack_34 = (ushort *)in_ECX[0x27];
    pwStack_38 = L"蚋\xa0";
    FUN_100532f0();
    puStack_34 = (ushort *)in_ECX[0x28];
    pwStack_38 = L"蛙¨";
    FUN_10053380();
    puStack_34 = (ushort *)0x100edfd0;
    puStack_34 = (ushort *)FUN_101c19e0();
    pwStack_38 = L"譐\xe8cf听\xfff6磫ᗿ쏘ဢᗿ쏔ဢ桐̀";
    pwStack_38 = (wchar_t *)FUN_101c19e0();
    FUN_10053410();
  }
  in_ECX[0x1f] = iVar1;
  puStack_34 = (ushort *)0x100ee06d;
  puStack_34 = (ushort *)(**(code **)(*in_ECX + 0x90))();
  pwStack_38 = 
  L"䖋倌䶋儈캋糨\'蔀痀謼謖诎䑂탿좋ᗿ쏤ဢ桐㸐ဦ賨\xf17b僿䛨︡菿ೄ쀳讛\xf44d襤\r"
  ;
  FUN_100536f0();
  puStack_34 = (ushort *)param_2;
  pwStack_38 = (wchar_t *)param_1;
  iVar1 = FUN_100f0800();
  if (iVar1 == 0) {
    puStack_34 = (ushort *)0x100ee091;
    this = (FString *)(**(code **)(*in_ECX + 0x44))();
    puStack_34 = (ushort *)0x100ee099;
    puStack_34 = FString::operator*(this);
    pwStack_38 = L"XMLTextureCtrlData(%s):failed to create default property!!";
    FUN_10005c30();
    FUN_100d01f0();
    ExceptionList = local_10;
    return 0;
  }
  if ((in_ECX[0x25] == 3) || (in_ECX[0x25] == 4)) {
    puStack_34 = (ushort *)0x100ee127;
    iVar1 = (**(code **)(*in_ECX + 0x8c))();
    if (iVar1 != 2) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *(int *)in_ECX[0x1f];
    puStack_34 = (ushort *)0x100ee136;
    uVar2 = FUN_1005a540();
    puStack_34 = (ushort *)(uVar2 | 0x1000000);
  }
  else {
    puStack_34 = (ushort *)0x100ee0e0;
    iVar1 = (**(code **)(*in_ECX + 0x8c))();
    if (iVar1 == 1) {
      iVar1 = *(int *)in_ECX[0x1f];
      puStack_34 = (ushort *)0x100ee105;
      uVar2 = FUN_1005a540();
      puStack_34 = (ushort *)(uVar2 | 8);
      pwStack_38 = L"Ƹ";
      (**(code **)(iVar1 + 0x80))();
      ExceptionList = local_10;
      return 1;
    }
    if (iVar1 != 2) {
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = *(int *)in_ECX[0x1f];
    puStack_34 = (ushort *)0x100ee0f4;
    uVar2 = FUN_1005a540();
    puStack_34 = (ushort *)(uVar2 | 0x1000008);
  }
  pwStack_38 = L"Ƹ";
  (**(code **)(iVar1 + 0x80))();
  ExceptionList = local_10;
  return 1;
}


// ==== 100ee151 Catch@100ee151

void Catch_100ee151(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee165 Catch@100ee165

void Catch_100ee165(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTextureCtrlData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee190 FUN_100ee190

void FUN_100ee190(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x88) = -(uint)(param_1 != 0xffffffff) & param_1;
  return;
}


// ==== 100ee1f1 Catch@100ee1f1

void Catch_100ee1f1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee205 Catch@100ee205

void Catch_100ee205(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::SetSaveExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee230 FUN_100ee230

void FUN_100ee230(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x8c) = -(uint)(param_1 != 0xffffffff) & param_1;
  return;
}


// ==== 100ee291 Catch@100ee291

void Catch_100ee291(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee2a5 Catch@100ee2a5

void Catch_100ee2a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::SetMultiExpand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee2d0 FUN_100ee2d0

void FUN_100ee2d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef430();
  *(undefined4 *)(in_ECX + 0x88) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x8c) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 100ee32d Catch@100ee32d

void Catch_100ee32d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee341 Catch@100ee341

void Catch_100ee341(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee360 FUN_100ee360

void FUN_100ee360(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdcc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100efb90();
  *(undefined4 *)(in_ECX + 0x88) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x8c) = 0xffffffff;
  ExceptionList = local_10;
  return;
}


// ==== 100ee3bd Catch@100ee3bd

void Catch_100ee3bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee3d1 Catch@100ee3d1

void Catch_100ee3d1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee3f0 FUN_100ee3f0

void FUN_100ee3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036dc38,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100ee420 FUN_100ee420

void FUN_100ee420(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101fdce8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  *in_ECX = XMLTreeCtrlData::vftable;
  local_8 = 1;
  FUN_100ee2d0();
  ExceptionList = local_10;
  return;
}


// ==== 100ee488 Catch@100ee488

void Catch_100ee488(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee49c Catch@100ee49c

void Catch_100ee49c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::XMLTreeCtrlData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee4c0 FUN_100ee4c0

void FUN_100ee4c0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdd18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLTreeCtrlData::vftable;
  local_8 = 1;
  FUN_100ee360();
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100ee526 Catch@100ee526

void Catch_100ee526(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee53a Catch@100ee53a

void Catch_100ee53a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::~XMLTreeCtrlData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee560 FUN_100ee560

void FUN_100ee560(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdd40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0(param_1);
  FUN_100052e0(param_1,in_ECX + 0x88);
  FUN_100052e0(param_1,in_ECX + 0x8c);
  ExceptionList = local_10;
  return;
}


// ==== 100ee5d5 Catch@100ee5d5

void Catch_100ee5d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee5e9 Catch@100ee5e9

void Catch_100ee5e9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee610 FUN_100ee610

void FUN_100ee610(byte param_1)

{
  FUN_100ee4c0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100ee640 FUN_100ee640

undefined4 FUN_100ee640(undefined4 param_1)

{
  int iVar1;
  FString *this;
  int *in_ECX;
  undefined4 uStack_48;
  uint uStack_3c;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdd84;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = (undefined1 *)&uStack_48;
  FString::FString((FString *)&uStack_48,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60(param_1);
  if (iVar1 == 0) {
    this = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(this);
    uStack_48 = 0x100ee6bd;
    uStack_48 = FUN_10005c30();
    FUN_100d01f0();
    local_8 = 0xffffffff;
    FString::~FString((FString *)&stack0x00000008);
    ExceptionList = local_10;
    return 0;
  }
  FString::FString(local_2c,(ushort *)L"SaveExpandedNode");
  local_8._0_1_ = 3;
  FUN_100cda90();
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  (**(code **)(*in_ECX + 0x78))();
  uStack_48 = 0x100ee730;
  FString::FString(local_2c,(ushort *)L"MultiExpand");
  local_8._0_1_ = 4;
  uStack_48 = 0x100ee73f;
  FUN_100cda90();
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  uStack_48 = 0x100ee758;
  (**(code **)(*in_ECX + 0x7c))();
  local_8 = 0xffffffff;
  uStack_48 = 0x100ee768;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 1;
}


// ==== 100ee781 Catch@100ee781

void Catch_100ee781(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee795 Catch@100ee795

void Catch_100ee795(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee7c0 FUN_100ee7c0

undefined4 FUN_100ee7c0(undefined4 param_1,undefined4 param_2)

{
  UPackage *pUVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  int *in_ECX;
  wchar_t *pwStack_38;
  ushort *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdda0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_34 = (ushort *)0x0;
  pwStack_38 = (wchar_t *)in_ECX;
  FName::FName((FName *)&pwStack_38,0);
  pUVar1 = UObject::GetTransientPackage();
  iVar2 = FUN_100ee3f0(0x220,pUVar1);
  if (iVar2 != 0) {
    puStack_34 = (ushort *)in_ECX[0x23];
    pwStack_38 = (wchar_t *)in_ECX[0x22];
    iVar2 = FUN_1006dcc0();
    if (iVar2 != 0) {
      in_ECX[0x1f] = iVar2;
      puStack_34 = (ushort *)param_2;
      pwStack_38 = (wchar_t *)param_1;
      iVar2 = FUN_100f0800();
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      puStack_34 = (ushort *)0x100ee88f;
      pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
      puStack_34 = (ushort *)0x100ee897;
      puStack_34 = FString::operator*(pFVar3);
      pwStack_38 = L"XMLTreeCtrlData(%s):failed to create default property!!";
      goto LAB_100ee84c;
    }
  }
  puStack_34 = (ushort *)0x100ee83e;
  pFVar3 = (FString *)(**(code **)(*in_ECX + 0x44))();
  puStack_34 = (ushort *)0x100ee846;
  puStack_34 = FString::operator*(pFVar3);
  pwStack_38 = L"XMLTreeCtrlData(%s):creation failed!!";
LAB_100ee84c:
  uVar4 = FUN_10005c30();
  FUN_100d01f0(uVar4);
  ExceptionList = local_10;
  return 0;
}


// ==== 100ee8b8 Catch@100ee8b8

void Catch_100ee8b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee8cc Catch@100ee8cc

void Catch_100ee8cc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLTreeCtrlData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee8f0 FUN_100ee8f0

void FUN_100ee8f0(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fddc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 0x30),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100ee94a Catch@100ee94a

void Catch_100ee94a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee95e Catch@100ee95e

void Catch_100ee95e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ee980 FUN_100ee980

void FUN_100ee980(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdde0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 4),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100ee9da Catch@100ee9da

void Catch_100ee9da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ee9ee Catch@100ee9ee

void Catch_100ee9ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eea10 FUN_100eea10

void FUN_100eea10(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fde00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 0x10),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100eea6a Catch@100eea6a

void Catch_100eea6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eea7e Catch@100eea7e

void Catch_100eea7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetExtends");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eeaa0 FUN_100eeaa0

void FUN_100eeaa0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  return;
}


// ==== 100eeaf3 Catch@100eeaf3

void Catch_100eeaf3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eeb07 Catch@100eeb07

void Catch_100eeb07(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetAlwaysOnTop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eeb30 FUN_100eeb30

void FUN_100eeb30(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = param_1;
  return;
}


// ==== 100eeb83 Catch@100eeb83

void Catch_100eeb83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eeb97 Catch@100eeb97

void Catch_100eeb97(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetAlwaysOnBack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eebc0 FUN_100eebc0

void FUN_100eebc0(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x68) = *(uint *)(in_ECX + 0x68) | param_1;
  return;
}


// ==== 100eec13 Catch@100eec13

void Catch_100eec13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eec27 Catch@100eec27

void Catch_100eec27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::AddNWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eec50 FUN_100eec50

void FUN_100eec50(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x68) = *(uint *)(in_ECX + 0x68) & ~param_1;
  return;
}


// ==== 100eeca5 Catch@100eeca5

void Catch_100eeca5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eecb9 Catch@100eecb9

void Catch_100eecb9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::RemoveNWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eece0 FUN_100eece0

void FUN_100eece0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x84) = param_1;
  return;
}


// ==== 100eed36 Catch@100eed36

void Catch_100eed36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eed4a Catch@100eed4a

void Catch_100eed4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetParentData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eed70 FUN_100eed70

undefined4 FUN_100eed70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x84);
}


// ==== 100eedba Catch@100eedba

void Catch_100eedba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eedce Catch@100eedce

void Catch_100eedce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetParentData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eedf0 FUN_100eedf0

int FUN_100eedf0(void)

{
  int in_ECX;
  
  return in_ECX + 0x30;
}


// ==== 100eee37 Catch@100eee37

void Catch_100eee37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eee4b Catch@100eee4b

void Catch_100eee4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eee70 FUN_100eee70

int FUN_100eee70(void)

{
  int in_ECX;
  
  return in_ECX + 4;
}


// ==== 100eeeb7 Catch@100eeeb7

void Catch_100eeeb7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eeecb Catch@100eeecb

void Catch_100eeecb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eeef0 FUN_100eeef0

int FUN_100eeef0(void)

{
  int in_ECX;
  
  return in_ECX + 0x10;
}


// ==== 100eef37 Catch@100eef37

void Catch_100eef37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eef4b Catch@100eef4b

void Catch_100eef4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetExtends");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100eef70 FUN_100eef70

int FUN_100eef70(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdf40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 == -1) {
    if ((*(int *)(in_ECX + 0x80) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x80) + 0x4c))(), iVar1 != -1)) {
      ExceptionList = local_10;
      return iVar1;
    }
    iVar1 = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 100eefd9 Catch@100eefd9

void Catch_100eefd9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100eefed Catch@100eefed

void Catch_100eefed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetAlwaysOnTop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef010 FUN_100ef010

int FUN_100ef010(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdf60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 == -1) {
    if ((*(int *)(in_ECX + 0x80) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x80) + 0x50))(), iVar1 != -1)) {
      ExceptionList = local_10;
      return iVar1;
    }
    iVar1 = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 100ef079 Catch@100ef079

void Catch_100ef079(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef08d Catch@100ef08d

void Catch_100ef08d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetAlwaysOnBack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef0b0 FUN_100ef0b0

int FUN_100ef0b0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdf80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x5c);
  if (iVar1 == 0) {
    if ((*(int *)(in_ECX + 0x80) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x80) + 0x58))(), iVar1 != 0)) {
      ExceptionList = local_10;
      return iVar1;
    }
    iVar1 = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 100ef116 Catch@100ef116

void Catch_100ef116(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef12a Catch@100ef12a

void Catch_100ef12a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef150 FUN_100ef150

int FUN_100ef150(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdfa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x58);
  if (iVar1 == 0) {
    if ((*(int *)(in_ECX + 0x80) != 0) &&
       (iVar1 = (**(code **)(**(int **)(in_ECX + 0x80) + 0x5c))(), iVar1 != 0)) {
      ExceptionList = local_10;
      return iVar1;
    }
    iVar1 = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 100ef1b6 Catch@100ef1b6

void Catch_100ef1b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef1ca Catch@100ef1ca

void Catch_100ef1ca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef1f0 FUN_100ef1f0

undefined4 FUN_100ef1f0(void)

{
  return 0;
}


// ==== 100ef236 Catch@100ef236

void Catch_100ef236(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef24a Catch@100ef24a

void Catch_100ef24a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetHidden");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef270 FUN_100ef270

int FUN_100ef270(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fdfe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x15];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x54))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100ef2d7 Catch@100ef2d7

void Catch_100ef2d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef2eb Catch@100ef2eb

void Catch_100ef2eb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetAnchored");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef310 FUN_100ef310

FString * FUN_100ef310(FString *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe01a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::FString(param_1,(FString *)(in_ECX + 0x24));
  ExceptionList = local_10;
  return param_1;
}


// ==== 100ef372 Catch@100ef372

void Catch_100ef372(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ef386 Catch@100ef386

void Catch_100ef386(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetParentName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef3b0 FUN_100ef3b0

undefined4 FUN_100ef3b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x80);
}


// ==== 100ef3fa Catch@100ef3fa

void Catch_100ef3fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef40e Catch@100ef40e

void Catch_100ef40e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::GetExtendsData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef430 FUN_100ef430

void FUN_100ef430(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe060;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 4),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x24),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x3c),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x48),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x54) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  FString::operator=((FString *)(in_ECX + 0x6c),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0x78) = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100ef4e8 Catch@100ef4e8

void Catch_100ef4e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef4fc Catch@100ef4fc

void Catch_100ef4fc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef520 FUN_100ef520

void FUN_100ef520(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101fe0d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLUIData::vftable;
  FString::FString((FString *)(in_ECX + 1));
  local_8 = 0;
  FString::FString((FString *)(in_ECX + 4));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 9));
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xc));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xf));
  local_8._0_1_ = 4;
  FString::FString((FString *)(in_ECX + 0x12));
  local_8._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x1b));
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_100ef430();
  ExceptionList = local_10;
  return;
}


// ==== 100ef5da Catch@100ef5da

void Catch_100ef5da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef5ee Catch@100ef5ee

void Catch_100ef5ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::XMLUIData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef610 FUN_100ef610

void FUN_100ef610(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe0fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10004ed0(0x14);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100cf730(param_1,param_2);
  }
  *(undefined4 *)(in_ECX + 0x5c) = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 100ef68e Catch@100ef68e

void Catch_100ef68e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef6a2 Catch@100ef6a2

void Catch_100ef6a2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetAbsoluteSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef6c0 FUN_100ef6c0

void FUN_100ef6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 FString *param_5)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fe134;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FString::FString((FString *)&stack0xffffffc0,param_5);
    local_8._0_1_ = 1;
    iVar1 = FUN_100cf990(param_1,param_2,param_3,param_4);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(int *)(in_ECX + 0x5c) = iVar1;
  if (iVar1 == 0) {
    appFailAssert("m_pSize",".\\XML\\XMLUIData.cpp",0x163);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100ef788 Catch@100ef788

void Catch_100ef788(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef79c Catch@100ef79c

void Catch_100ef79c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetRelativeSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef7c0 FUN_100ef7c0

void FUN_100ef7c0(undefined4 param_1,undefined4 param_2,FString *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int in_ECX;
  FString aFStack_44 [4];
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fe164;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10004ed0();
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FString::FString(aFStack_44,param_3);
    local_8._0_1_ = 1;
    iVar1 = FUN_100cfcb0(param_1,param_2);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(int *)(in_ECX + 0x58) = iVar1;
  if (iVar1 == 0) {
    uStack_40 = 0x100ef860;
    appFailAssert("m_pPosition",".\\XML\\XMLUIData.cpp",0x16d);
  }
  *(undefined4 *)(in_ECX + 0x54) = param_6;
  ExceptionList = local_10;
  return;
}


// ==== 100ef884 Catch@100ef884

void Catch_100ef884(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ef898 Catch@100ef898

void Catch_100ef898(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::SetPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ef8c0 FUN_100ef8c0

void FUN_100ef8c0(FArchive *param_1)

{
  FArchive *this;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uStack_38;
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  this = param_1;
  puStack_c = &LAB_101fe1a1;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  operator<<(param_1,(FString *)(in_ECX + 4));
  operator<<(this,(FString *)(in_ECX + 0x10));
  FUN_100052e0(this,in_ECX + 0x1c);
  FUN_100052e0(this,in_ECX + 0x20);
  operator<<(this,(FString *)(in_ECX + 0x24));
  operator<<(this,(FString *)(in_ECX + 0x3c));
  operator<<(this,(FString *)(in_ECX + 0x48));
  FUN_100052e0(this,in_ECX + 0x54);
  iVar1 = FArchive::IsSaving(this);
  if (iVar1 == 0) {
    local_1c = 0;
    FUN_100052e0(this,&local_1c);
    if (local_1c != 0) {
      FUN_100052e0(this,&param_1);
      if (param_1 == (FArchive *)0x0) {
        local_18 = FUN_10004ed0(0x28);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (local_18 == 0) goto LAB_100efa2b;
        iVar1 = FUN_100cf8d0();
      }
      else {
        local_18 = FUN_10004ed0(0x14);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_18 == 0) {
LAB_100efa2b:
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_100cf690();
        }
      }
      local_8 = local_8 & 0xffffff00;
      *(int *)(in_ECX + 0x5c) = iVar1;
      if (iVar1 == 0) {
        appFailAssert("m_pSize",".\\XML\\XMLUIData.cpp",0x23e);
      }
      FUN_100cfd80(this,*(undefined4 *)(in_ECX + 0x5c));
    }
    FUN_100052e0(this,&local_20);
    if (local_20 == 0) goto LAB_100efa9e;
    param_1 = (FArchive *)FUN_10004ed0(0x1c);
    local_8._0_1_ = 3;
    if (param_1 == (FArchive *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100cfbf0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 *)(in_ECX + 0x58) = uVar2;
  }
  else {
    param_1 = (FArchive *)(uint)(*(int *)(in_ECX + 0x5c) != 0);
    FUN_100052e0(this,&param_1);
    if (param_1 != (FArchive *)0x0) {
      local_20 = *(int *)(*(int *)(in_ECX + 0x5c) + 4);
      FUN_100052e0(this,&local_20);
      FUN_100cfd80(this,*(undefined4 *)(in_ECX + 0x5c));
    }
    local_18 = (uint)(*(int *)(in_ECX + 0x58) != 0);
    FUN_100052e0(this,&local_18);
    if (local_18 == 0) goto LAB_100efa9e;
    uVar2 = *(undefined4 *)(in_ECX + 0x58);
  }
  FUN_100cf4c0(this,uVar2);
LAB_100efa9e:
  FUN_100052e0(this,in_ECX + 0x60);
  FUN_100052e0(this,in_ECX + 100);
  FUN_100052e0(this,in_ECX + 0x68);
  operator<<(this,(FString *)(in_ECX + 0x6c));
  FUN_100052e0(this,in_ECX + 0x78);
  ExceptionList = local_10;
  return;
}


// ==== 100efaef Catch@100efaef

void Catch_100efaef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100efb03 Catch@100efb03

void Catch_100efb03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100efb20 FUN_100efb20

void FUN_100efb20(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101fe1cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 100efb90 FUN_100efb90

void FUN_100efb90(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe1f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::operator=((FString *)(in_ECX + 4),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x24),(ushort *)L"undefined");
  if (*(int *)(in_ECX + 0x5c) != 0) {
    FUN_10024ca0(*(int *)(in_ECX + 0x5c));
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  if (*(int *)(in_ECX + 0x58) != 0) {
    FUN_100efb20(1);
    *(undefined4 *)(in_ECX + 0x58) = 0;
  }
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  FString::operator=((FString *)(in_ECX + 0x6c),(ushort *)L"undefined");
  ExceptionList = local_10;
  return;
}


// ==== 100efc35 Catch@100efc35

void Catch_100efc35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100efc49 Catch@100efc49

void Catch_100efc49(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100efc70 FUN_100efc70

void FUN_100efc70(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fe264;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLUIData::vftable;
  local_8 = 7;
  FUN_100efb90();
  local_8 = 5;
  FString::~FString((FString *)(in_ECX + 0x1b));
  local_8._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0x12));
  local_8._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0xf));
  local_8._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0xc));
  local_8._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 9));
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 4));
  local_8 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 1));
  ExceptionList = local_10;
  return;
}


// ==== 100efd29 Catch@100efd29

void Catch_100efd29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100efd3d Catch@100efd3d

void Catch_100efd3d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::~XMLUIData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100efd60 FUN_100efd60

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100efd60(int param_1)

{
  FString *pFVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  int *in_ECX;
  wchar_t *pwVar6;
  uint uStack_70;
  FString local_60 [12];
  FString local_54 [20];
  FString local_40 [4];
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe3cd;
  local_10 = ExceptionList;
  uStack_70 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (param_1 == 0) {
    local_14 = (undefined1 *)&uStack_70;
    pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
    puVar2 = FString::operator*(pFVar1);
    pwVar6 = L"XMLUIData(%s):processing node is NULL!!";
  }
  else {
    param_1 = 0;
    FString::FString(local_60,(ushort *)L"DefaultProperty");
    local_8._0_1_ = 2;
    iVar4 = FUN_100cd670(local_60,&param_1);
    local_8._0_1_ = 1;
    FString::~FString(local_60);
    if (iVar4 != 0) {
      FString::FString(local_60,(ushort *)L"name");
      local_8._0_1_ = 3;
      uVar3 = FUN_100cd860(local_40,local_60);
      local_8._0_1_ = 4;
      (**(code **)(*in_ECX + 0x14))(uVar3);
      local_8._0_1_ = 3;
      FString::~FString(local_40);
      local_8._0_1_ = 1;
      FString::~FString(local_60);
      FString::FString(local_60,(ushort *)L"extends");
      local_8._0_1_ = 5;
      FUN_100cd860(local_54,local_60);
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      (**(code **)(*in_ECX + 0x18))(local_54);
      FString::FString(local_60,(ushort *)L"alwaysOnTop");
      local_8._0_1_ = 8;
      uVar3 = FUN_100cda90(local_60);
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      (**(code **)(*in_ECX + 0x1c))(uVar3);
      FString::FString(local_60,(ushort *)L"alwaysOnBack");
      local_8._0_1_ = 9;
      uVar3 = FUN_100cda90(local_60);
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      (**(code **)(*in_ECX + 0x20))(uVar3);
      FString::FString(local_60,(ushort *)L"virtual");
      local_8._0_1_ = 10;
      iVar4 = FUN_100cda90(local_60);
      in_ECX[0x18] = iVar4;
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      FString::FString(local_60,(ushort *)L"passThrough");
      local_8._0_1_ = 0xb;
      iVar4 = FUN_100cda90(local_60);
      in_ECX[0x19] = iVar4;
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      local_28 = 0;
      FString::FString(local_60,(ushort *)L"Size");
      local_8._0_1_ = 0xc;
      iVar4 = FUN_100cd670(local_60,&local_28);
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      if (iVar4 == 0) {
        iVar4 = FString::operator==(local_54,(ushort *)L"undefined");
        if (iVar4 == 0) {
LAB_100f01af:
          local_24[3] = 0;
          FString::FString(local_60,(ushort *)L"Position");
          local_8._0_1_ = 0x16;
          iVar4 = FUN_100cd670(local_60,local_24 + 3);
          local_8._0_1_ = 7;
          FString::~FString(local_60);
          if (iVar4 != 0) {
            FString::FString(local_40,(ushort *)L"relativePoint");
            local_8._0_1_ = 0x17;
            iVar4 = FUN_100cdce0(local_40);
            local_8 = CONCAT31(local_8._1_3_,7);
            local_2c = iVar4;
            FString::~FString(local_40);
            if ((iVar4 == 0) &&
               (iVar4 = FString::operator==(local_54,(ushort *)L"undefined"), iVar4 != 0)) {
              local_2c = 1;
            }
            FString::FString(local_40,(ushort *)L"anchorPoint");
            local_8._0_1_ = 0x18;
            iVar4 = FUN_100cdce0(local_40);
            local_8 = CONCAT31(local_8._1_3_,7);
            local_30 = iVar4;
            FString::~FString(local_40);
            if ((iVar4 == 0) &&
               (iVar4 = FString::operator==(local_54,(ushort *)L"undefined"), iVar4 != 0)) {
              local_30 = local_2c;
            }
            FString::FString(local_40,(ushort *)L"relativeTo");
            local_8._0_1_ = 0x19;
            FUN_100cd860(local_60,local_40);
            local_8 = CONCAT31(local_8._1_3_,0x1b);
            FString::~FString(local_40);
            iVar4 = FString::operator==(local_60,(ushort *)L"undefined");
            if (iVar4 != 0) {
              FString::operator=(local_60,(ushort *)&DAT_1022f9f8);
            }
            FString::FString(local_40,(ushort *)L"offsetX");
            local_8._0_1_ = 0x1c;
            iVar4 = FUN_100cd980(local_40);
            local_8._0_1_ = 0x1b;
            local_28 = iVar4;
            FString::~FString(local_40);
            if (iVar4 == -9999) {
              local_28 = 0;
            }
            FString::FString(local_40,(ushort *)L"offsetY");
            local_8._0_1_ = 0x1d;
            iVar4 = FUN_100cd980(local_40);
            local_8._0_1_ = 0x1b;
            local_24[0] = iVar4;
            FString::~FString(local_40);
            if (iVar4 == -9999) {
              local_24[0] = 0;
            }
            FString::FString(local_40,(ushort *)L"anchored");
            local_8._0_1_ = 0x1e;
            uVar3 = FUN_100cda90(local_40);
            local_8._0_1_ = 0x1b;
            FString::~FString(local_40);
            local_3c = local_28;
            (**(code **)(*in_ECX + 0x2c))(local_30,local_2c,local_60,local_28,local_24[0],uVar3);
            local_8._0_1_ = 7;
            FString::~FString(local_60);
          }
          local_24[1] = 0;
          FString::FString(local_60,(ushort *)L"Tooltip");
          local_8._0_1_ = 0x1f;
          iVar4 = FUN_100cd670(local_60,local_24 + 1);
          local_8._0_1_ = 7;
          FString::~FString(local_60);
          if (iVar4 == 0) {
LAB_100f059e:
            FString::FString(local_60,(ushort *)L"TabOrder");
            local_8._0_1_ = 0x23;
            iVar4 = FUN_100cd670(local_60,local_24 + 1);
            local_8._0_1_ = 7;
            FString::~FString(local_60);
            if (iVar4 != 0) {
              FString::FString(local_60,(ushort *)L"preOrder");
              local_8._0_1_ = 0x24;
              pFVar1 = (FString *)FUN_100cd860(local_40,local_60);
              local_8._0_1_ = 0x25;
              FString::operator=((FString *)(in_ECX + 0xf),pFVar1);
              local_8._0_1_ = 0x24;
              FString::~FString(local_40);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
              FString::FString(local_60,(ushort *)L"postOrder");
              local_8._0_1_ = 0x26;
              pFVar1 = (FString *)FUN_100cd860(local_40,local_60);
              local_8._0_1_ = 0x27;
              FString::operator=((FString *)(in_ECX + 0x12),pFVar1);
              local_8._0_1_ = 0x26;
              FString::~FString(local_40);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
            }
            FString::operator=((FString *)(in_ECX + 9),(FString *)&stack0x00000008);
            local_8 = CONCAT31(local_8._1_3_,1);
            FString::~FString(local_54);
            local_8 = 0xffffffff;
            FString::~FString((FString *)&stack0x00000008);
            ExceptionList = local_10;
            return 1;
          }
          FString::FString(local_60,(ushort *)L"type");
          local_8._0_1_ = 0x20;
          pFVar1 = (FString *)FUN_100ce6d0(local_40,local_60);
          local_8._0_1_ = 0x21;
          FString::operator=((FString *)(in_ECX + 0x1b),pFVar1);
          local_8._0_1_ = 0x20;
          FString::~FString(local_40);
          local_8._0_1_ = 7;
          FString::~FString(local_60);
          iVar4 = FString::operator==((FString *)(in_ECX + 0x1b),(ushort *)L"undefined");
          if (iVar4 == 0) {
            FString::FString(local_60,(ushort *)L"text");
            local_8._0_1_ = 0x22;
            iVar4 = FUN_100cd980(local_60);
            in_ECX[0x1e] = iVar4;
            local_8._0_1_ = 7;
            FString::~FString(local_60);
            goto LAB_100f059e;
          }
          pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
          puVar2 = FString::operator*(pFVar1);
          pwVar6 = L"XMLUIData(%s):type in Tooltip is not defined!!";
        }
        else {
          pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
          puVar2 = FString::operator*(pFVar1);
          pwVar6 = L"XMLUIData(%s):failed to get unique Size element!!";
        }
      }
      else {
        local_24[2] = 0;
        local_24[0] = 0;
        FString::FString(local_60,(ushort *)L"RelativeSize");
        local_8._0_1_ = 0xd;
        FUN_100cd670(local_60,local_24 + 2);
        local_8._0_1_ = 7;
        FString::~FString(local_60);
        FString::FString(local_60,(ushort *)L"AbsoluteSize");
        local_8._0_1_ = 0xe;
        FUN_100cd670(local_60,local_24);
        local_8._0_1_ = 7;
        FString::~FString(local_60);
        if (local_24[2] == 0) {
          if (local_24[0] == 0) goto LAB_100f0523;
          FString::FString(local_60,(ushort *)L"width");
          local_8._0_1_ = 0x14;
          fVar5 = (float)FUN_100cd980(local_60);
          local_8._0_1_ = 7;
          local_38 = fVar5;
          FString::~FString(local_60);
          if (fVar5 == -NAN) {
            pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
            puVar2 = FString::operator*(pFVar1);
            pwVar6 = L"XMLUIData(%s):width is not defined!!";
          }
          else {
            FString::FString(local_60,(ushort *)L"height");
            local_8._0_1_ = 0x15;
            iVar4 = FUN_100cd980(local_60);
            local_8._0_1_ = 7;
            FString::~FString(local_60);
            if (iVar4 != -9999) {
              (**(code **)(*in_ECX + 0x24))(local_38,iVar4);
              goto LAB_100f01af;
            }
            pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
            puVar2 = FString::operator*(pFVar1);
            pwVar6 = L"XMLUIData(%s):height is not defined!!";
          }
        }
        else if (local_24[0] == 0) {
          FString::FString(local_60,(ushort *)L"widthRate");
          local_8._0_1_ = 0xf;
          fVar5 = (float)FUN_100cd980(local_60);
          local_8._0_1_ = 7;
          local_38 = fVar5;
          FString::~FString(local_60);
          if (fVar5 == -NAN) {
            pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
            puVar2 = FString::operator*(pFVar1);
            pwVar6 = L"XMLUIData(%s):widthRate is not defined!!";
          }
          else {
            FString::FString(local_60,(ushort *)L"heightRate");
            local_8._0_1_ = 0x10;
            fVar5 = (float)FUN_100cd980(local_60);
            local_8._0_1_ = 7;
            local_34 = fVar5;
            FString::~FString(local_60);
            if (fVar5 != -NAN) {
              FString::FString(local_60,(ushort *)L"offsetWidth");
              local_8._0_1_ = 0x11;
              uVar3 = FUN_100cd980(local_60);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
              FString::FString(local_60,(ushort *)L"offsetHeight");
              local_8._0_1_ = 0x12;
              local_24[3] = FUN_100cd980(local_60);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
              FString::FString(local_60,(ushort *)&DAT_1022f9f8);
              local_8._0_1_ = 0x13;
              local_34 = (float)(int)local_34 / 100.0;
              local_38 = (float)(int)local_38 / 100.0;
              (**(code **)(*in_ECX + 0x28))(local_38,local_34,uVar3,local_24[3],local_60);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
              goto LAB_100f01af;
            }
            pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
            puVar2 = FString::operator*(pFVar1);
            pwVar6 = L"XMLUIData(%s):heightRate is not defined!!";
          }
        }
        else {
LAB_100f0523:
          pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
          puVar2 = FString::operator*(pFVar1);
          pwVar6 = L"XMLUIData(%s):neither Relative size nor Absolute size is defined!!";
        }
      }
      uVar3 = FUN_10005c30(pwVar6,puVar2);
      FUN_100d01f0(uVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_54);
      goto LAB_100efdc1;
    }
    pFVar1 = (FString *)(**(code **)(*in_ECX + 0x44))();
    puVar2 = FString::operator*(pFVar1);
    pwVar6 = L"XMLUIData(%s):failed to get unique DefaultProperty!!";
  }
  uVar3 = FUN_10005c30(pwVar6,puVar2);
  FUN_100d01f0(uVar3);
LAB_100efdc1:
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100f069c Catch@100f069c

void Catch_100f069c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_102a47f0);
}


// ==== 100f06b0 Catch@100f06b0

void Catch_100f06b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f06d0 FUN_100f06d0

undefined4 FUN_100f06d0(void)

{
  FString *pFVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  wchar_t *pwVar4;
  uint uStack_3c;
  FString local_2c [20];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101fe3f9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = (FString *)(**(code **)(*in_ECX + 0x48))();
  FString::FString(local_2c,pFVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FString::operator!=(local_2c,(ushort *)L"undefined");
  if (iVar2 == 0) {
    in_ECX[0x20] = 0;
  }
  else {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x3c))();
    local_18 = piVar3;
    if (piVar3 != (int *)0x0) {
      pwVar4 = L"Window";
      pFVar1 = (FString *)(**(code **)(*piVar3 + 0x40))();
      iVar2 = FString::operator!=(pFVar1,(ushort *)pwVar4);
      if (iVar2 != 0) {
        piVar3 = (int *)0x0;
        local_18 = (int *)0x0;
      }
    }
    pFVar1 = local_2c;
    FUN_10005c30(pFVar1,piVar3);
    iVar2 = FUN_100c9550(pFVar1,piVar3);
    in_ECX[0x20] = iVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return 1;
}


// ==== 100f079d Catch@100f079d

void Catch_100f079d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f07b1 Catch@100f07b1

void Catch_100f07b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::PreCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f07d0 FUN_100f07d0

void FUN_100f07d0(byte param_1)

{
  FUN_100efc70();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100f0800 FUN_100f0800

undefined4 FUN_100f0800(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  FString *pFVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *in_ECX;
  wchar_t *pwVar10;
  uint uStack_3c;
  FString local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fe429;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar2 = &uStack_3c;
  if (param_1 != 0) {
    pFVar6 = (FString *)(in_ECX + 1);
    puVar3 = FString::operator*(pFVar6);
    FString::FString(local_2c,puVar3);
    local_8._0_1_ = 1;
    iVar4 = FUN_100c8aa0(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
    if (iVar4 != 0) {
      puVar3 = FString::operator*(pFVar6);
      pwVar10 = L"Duplicated Window name=%s!!";
      goto LAB_100f0881;
    }
    piVar7 = in_ECX + 0x1f;
    puVar3 = FString::operator*(pFVar6);
    FUN_10060970(puVar3,piVar7);
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  FUN_100576b0(1);
  FUN_10057740(in_ECX + 1);
  iVar4 = (**(code **)(*in_ECX + 0x60))();
  if (iVar4 == 0) {
    (**(code **)(*in_ECX + 0x30))(0x4000000);
    (**(code **)(*in_ECX + 0x30))(2);
  }
  iVar4 = (**(code **)(*in_ECX + 0x4c))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 0x30))(0x800000);
  }
  iVar4 = (**(code **)(*in_ECX + 0x50))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 0x30))(0x1000000);
  }
  if (param_2 == 0) {
    param_2 = *(int *)(DAT_103663bc + 0x50ac);
  }
  if (param_2 == 0) {
    pFVar6 = (FString *)(**(code **)(*in_ECX + 0x44))();
    puVar3 = FString::operator*(pFVar6);
    pwVar10 = L"XMLUIData(%s):cannot find proper parent window!!";
  }
  else {
    local_18 = in_ECX[0x1a];
    if (in_ECX[0x18] == 1) {
      local_18 = local_18 | 8;
    }
    if (in_ECX[0x19] == 1) {
      local_18 = local_18 | 8;
    }
    uVar1 = local_18;
    uVar5 = FUN_10060d40(in_ECX[0x1f],local_18);
    FUN_1005c1e0(uVar5);
    iVar4 = FString::operator!=((FString *)(in_ECX + 0x1b),(ushort *)L"undefined");
    if (iVar4 != 0) {
      local_18 = uVar1 | 0x20;
      (**(code **)(*(int *)in_ECX[0x1f] + 0xac))((FString *)(in_ECX + 0x1b));
    }
    if (in_ECX[0x1e] != -9999) {
      (**(code **)(*(int *)in_ECX[0x1f] + 0xb4))(in_ECX[0x1e]);
    }
    piVar7 = (int *)(**(code **)(*in_ECX + 0x58))();
    if (piVar7 != (int *)0x0) {
      if (piVar7[1] == 0) {
        (**(code **)(*(int *)in_ECX[0x1f] + 0x130))(piVar7[6],piVar7[7],piVar7[8],piVar7[9]);
      }
      else {
        FUN_100cf600(param_2);
        iVar4 = *(int *)in_ECX[0x1f];
        iVar8 = (**(code **)(*piVar7 + 4))();
        iVar8 = (**(code **)*piVar7)((float)iVar8);
        (**(code **)(iVar4 + 0x128))((float)iVar8);
      }
    }
    puVar9 = (undefined4 *)(**(code **)(*in_ECX + 0x5c))();
    if (puVar9 != (undefined4 *)0x0) {
      iVar4 = *(int *)in_ECX[0x1f];
      iVar8 = (**(code **)(*in_ECX + 0x54))();
      (**(code **)(iVar4 + 0xd8))(*puVar9,puVar9[1],puVar9 + 2,puVar9[5],puVar9[6],iVar8 == 0);
      iVar4 = FString::operator!=((FString *)(in_ECX + 0xf),(ushort *)L"undefined");
      if (iVar4 != 0) {
        (**(code **)(*(int *)in_ECX[0x1f] + 0x110))((FString *)(in_ECX + 0xf));
      }
      iVar4 = FString::operator!=((FString *)(in_ECX + 0x12),(ushort *)L"undefined");
      if (iVar4 != 0) {
        (**(code **)(*(int *)in_ECX[0x1f] + 0x114))((FString *)(in_ECX + 0x12));
      }
      ExceptionList = local_10;
      return 1;
    }
    pFVar6 = (FString *)(**(code **)(*in_ECX + 0x44))();
    puVar3 = FString::operator*(pFVar6);
    pwVar10 = L"XMLUIData(%s):position is not defined!!";
  }
LAB_100f0881:
  uVar5 = FUN_10005c30(pwVar10,puVar3);
  FUN_100d01f0(uVar5);
  ExceptionList = local_10;
  return 0;
}


// ==== 100f0aff Catch@100f0aff

void Catch_100f0aff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f0b13 Catch@100f0b13

void Catch_100f0b13(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLUIData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0b30 FUN_100f0b30

void FUN_100f0b30(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe459;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x88),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100f0b9a Catch@100f0b9a

void Catch_100f0b9a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0bae Catch@100f0bae

void Catch_100f0bae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetParent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0bd0 FUN_100f0bd0

void FUN_100f0bd0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe489;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x94),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100f0c3a Catch@100f0c3a

void Catch_100f0c3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0c4e Catch@100f0c4e

void Catch_100f0c4e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetBackTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0c70 FUN_100f0c70

void FUN_100f0c70(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe4b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0xa0),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100f0cda Catch@100f0cda

void Catch_100f0cda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0cee Catch@100f0cee

void Catch_100f0cee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetScript");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0d10 FUN_100f0d10

void FUN_100f0d10(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe4e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0xac),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100f0d7a Catch@100f0d7a

void Catch_100f0d7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0d8e Catch@100f0d8e

void Catch_100f0d8e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0db0 FUN_100f0db0

void FUN_100f0db0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xb8) = param_1;
  return;
}


// ==== 100f0e06 Catch@100f0e06

void Catch_100f0e06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0e1a Catch@100f0e1a

void Catch_100f0e1a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0e40 FUN_100f0e40

void FUN_100f0e40(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  return;
}


// ==== 100f0e96 Catch@100f0e96

void Catch_100f0e96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0eaa Catch@100f0eaa

void Catch_100f0eaa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetIconable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0ed0 FUN_100f0ed0

void FUN_100f0ed0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc4) = param_1;
  return;
}


// ==== 100f0f26 Catch@100f0f26

void Catch_100f0f26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0f3a Catch@100f0f3a

void Catch_100f0f3a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetHidden");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0f60 FUN_100f0f60

void FUN_100f0f60(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 200) = param_1;
  return;
}


// ==== 100f0fb6 Catch@100f0fb6

void Catch_100f0fb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f0fca Catch@100f0fca

void Catch_100f0fca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetAlwaysFullAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f0ff0 FUN_100f0ff0

void FUN_100f0ff0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc0) = param_1;
  return;
}


// ==== 100f1046 Catch@100f1046

void Catch_100f1046(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f105a Catch@100f105a

void Catch_100f105a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetStuckable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1080 FUN_100f1080

void FUN_100f1080(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xe4) = param_1;
  return;
}


// ==== 100f10d6 Catch@100f10d6

void Catch_100f10d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f10ea Catch@100f10ea

void Catch_100f10ea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1110 FUN_100f1110

void FUN_100f1110(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xcc) = param_1;
  return;
}


// ==== 100f1166 Catch@100f1166

void Catch_100f1166(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f117a Catch@100f117a

void Catch_100f117a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetSavePosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f11a0 FUN_100f11a0

void FUN_100f11a0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xd0) = param_1;
  return;
}


// ==== 100f11f6 Catch@100f11f6

void Catch_100f11f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f120a Catch@100f120a

void Catch_100f120a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetSaveSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1230 FUN_100f1230

void FUN_100f1230(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xd4) = param_1;
  return;
}


// ==== 100f1286 Catch@100f1286

void Catch_100f1286(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f129a Catch@100f129a

void Catch_100f129a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetResizeFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f12c0 FUN_100f12c0

void FUN_100f12c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xdc) = param_1;
  return;
}


// ==== 100f1316 Catch@100f1316

void Catch_100f1316(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f132a Catch@100f132a

void Catch_100f132a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetDraggable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1350 FUN_100f1350

void FUN_100f1350(void)

{
  FString *this;
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe659;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  this = (FString *)(in_ECX + 0x158);
  FString::operator=(this,(FString *)&stack0x00000004);
  iVar1 = FString::operator==(this,(ushort *)L"undefined");
  if (iVar1 != 0) {
    FString::operator=(this,(ushort *)L"Game");
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 100f13da Catch@100f13da

void Catch_100f13da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f13ee Catch@100f13ee

void Catch_100f13ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::SetWorkingConfiguration");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1410 FUN_100f1410

FString * FUN_100f1410(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe6a3;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x22),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xb0))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x22));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100f14fc Catch@100f14fc

void Catch_100f14fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f1510 Catch@100f1510

void Catch_100f1510(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetParent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1530 FUN_100f1530

FString * FUN_100f1530(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe6e3;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x25),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xb4))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x25));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100f161c Catch@100f161c

void Catch_100f161c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f1630 Catch@100f1630

void Catch_100f1630(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetBackTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1650 FUN_100f1650

FString * FUN_100f1650(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe723;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x28),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xb8))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x28));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100f173c Catch@100f173c

void Catch_100f173c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f1750 Catch@100f1750

void Catch_100f1750(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetScript");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1770 FUN_100f1770

FString * FUN_100f1770(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe763;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x2b),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xbc))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)L"undefined");
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x2b));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100f185c Catch@100f185c

void Catch_100f185c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f1870 Catch@100f1870

void Catch_100f1870(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1890 FUN_100f1890

FString * FUN_100f1890(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe7a3;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x42),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xf8))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x42));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100f197c Catch@100f197c

void Catch_100f197c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f1990 Catch@100f1990

void Catch_100f1990(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetIconName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f19b0 FUN_100f19b0

FString * FUN_100f19b0(FString *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe7e3;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_18 = 0;
  local_8 = 1;
  iVar1 = FString::operator!=((FString *)(in_ECX + 0x4c),(ushort *)L"undefined");
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x11c))(local_2c);
      local_8._0_1_ = 2;
      iVar1 = FString::operator!=(local_2c,(ushort *)L"undefined");
      if (iVar1 != 0) {
        FString::FString(param_1,local_2c);
        local_18 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_2c);
        ExceptionList = local_10;
        return param_1;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_2c);
    }
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FString::FString(param_1,(FString *)(in_ECX + 0x4c));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 100f1a9c Catch@100f1a9c

void Catch_100f1a9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f1ab0 Catch@100f1ab0

void Catch_100f1ab0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetDrawerOwnerWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1ad0 FUN_100f1ad0

int FUN_100f1ad0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe800;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x2e];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc0))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1b3d Catch@100f1b3d

void Catch_100f1b3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1b51 Catch@100f1b51

void Catch_100f1b51(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1b70 FUN_100f1b70

int FUN_100f1b70(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x2f];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc4))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1bdd Catch@100f1bdd

void Catch_100f1bdd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1bf1 Catch@100f1bf1

void Catch_100f1bf1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetIconable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1c10 FUN_100f1c10

int FUN_100f1c10(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x30];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 200))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1c7d Catch@100f1c7d

void Catch_100f1c7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1c91 Catch@100f1c91

void Catch_100f1c91(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetStuckable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1cb0 FUN_100f1cb0

int FUN_100f1cb0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe860;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x31];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x60))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1d1a Catch@100f1d1a

void Catch_100f1d1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1d2e Catch@100f1d2e

void Catch_100f1d2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetHidden");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1d50 FUN_100f1d50

int FUN_100f1d50(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe880;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x32];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xcc))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1dbd Catch@100f1dbd

void Catch_100f1dbd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1dd1 Catch@100f1dd1

void Catch_100f1dd1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetAlwaysFullAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1df0 FUN_100f1df0

int FUN_100f1df0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe8a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x33];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xd0))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1e5d Catch@100f1e5d

void Catch_100f1e5d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1e71 Catch@100f1e71

void Catch_100f1e71(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetSavePosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1e90 FUN_100f1e90

int FUN_100f1e90(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe8c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x34];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xd4))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1efd Catch@100f1efd

void Catch_100f1efd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1f11 Catch@100f1f11

void Catch_100f1f11(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetSaveSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1f30 FUN_100f1f30

int FUN_100f1f30(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe8e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x35];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xd8))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f1f9d Catch@100f1f9d

void Catch_100f1f9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f1fb1 Catch@100f1fb1

void Catch_100f1fb1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetResizeFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f1fd0 FUN_100f1fd0

int FUN_100f1fd0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x36];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xdc))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f2040 Catch@100f2040

void Catch_100f2040(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2054 Catch@100f2054

void Catch_100f2054(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetFrameExitBtn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2080 FUN_100f2080

int FUN_100f2080(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x4b];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x118))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f20ed Catch@100f20ed

void Catch_100f20ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2101 Catch@100f2101

void Catch_100f2101(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetIsDirectionFixed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2120 FUN_100f2120

int FUN_100f2120(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x46];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x100))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f218d Catch@100f218d

void Catch_100f218d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f21a1 Catch@100f21a1

void Catch_100f21a1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetExpandBtn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f21c0 FUN_100f21c0

int FUN_100f21c0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe960;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x37];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x104))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f222d Catch@100f222d

void Catch_100f222d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2241 Catch@100f2241

void Catch_100f2241(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetDraggable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2260 FUN_100f2260

int FUN_100f2260(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x39];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xe0))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f22d1 Catch@100f22d1

void Catch_100f22d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f22e5 Catch@100f22e5

void Catch_100f22e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2310 FUN_100f2310

int FUN_100f2310(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe9a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x3a];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xe4))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f2381 Catch@100f2381

void Catch_100f2381(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2395 Catch@100f2395

void Catch_100f2395(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetResizeMaxIncrease");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f23c0 FUN_100f23c0

int FUN_100f23c0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe9c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x47];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x108))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f2431 Catch@100f2431

void Catch_100f2431(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2445 Catch@100f2445

void Catch_100f2445(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetExpandOrgHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2470 FUN_100f2470

int FUN_100f2470(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fe9e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x48];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x10c))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f24e1 Catch@100f24e1

void Catch_100f24e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f24f5 Catch@100f24f5

void Catch_100f24f5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetExpandExpHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2520 FUN_100f2520

int FUN_100f2520(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fea00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x4a];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x114))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f2591 Catch@100f2591

void Catch_100f2591(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f25a5 Catch@100f25a5

void Catch_100f25a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetDrawerOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f25d0 FUN_100f25d0

int FUN_100f25d0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fea20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x45];
  if (iVar2 == -9999) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xfc))(), iVar2 != -9999)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f2641 Catch@100f2641

void Catch_100f2641(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2655 Catch@100f2655

void Catch_100f2655(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetTooltip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2680 FUN_100f2680

int FUN_100f2680(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fea40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x3b];
  if (iVar2 == -1) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xe8))(), iVar2 != -1)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = -1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f26ee Catch@100f26ee

void Catch_100f26ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2702 Catch@100f2702

void Catch_100f2702(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2720 FUN_100f2720

int FUN_100f2720(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fea60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x3c];
  if (iVar2 == 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xec))(), iVar2 != 0)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f278b Catch@100f278b

void Catch_100f278b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f279f Catch@100f279f

void Catch_100f279f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetFrameDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f27c0 FUN_100f27c0

int FUN_100f27c0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fea80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x3d];
  if (iVar2 == 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xf0))(), iVar2 != 0)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f282b Catch@100f282b

void Catch_100f282b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f283f Catch@100f283f

void Catch_100f283f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetResizeFrameDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2860 FUN_100f2860

int FUN_100f2860(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101feaa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x49];
  if (iVar2 == 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x110))(), iVar2 != 0)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f28cb Catch@100f28cb

void Catch_100f28cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f28df Catch@100f28df

void Catch_100f28df(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetDrawerDirection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2900 FUN_100f2900

int FUN_100f2900(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101feac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x4f];
  if (iVar2 == 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x120))(), iVar2 != 0)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f296b Catch@100f296b

void Catch_100f296b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f297f Catch@100f297f

void Catch_100f297f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetShowAnim");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f29a0 FUN_100f29a0

int FUN_100f29a0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101feae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x50];
  if (iVar2 == 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x124))(), iVar2 != 0)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f2a0b Catch@100f2a0b

void Catch_100f2a0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2a1f Catch@100f2a1f

void Catch_100f2a1f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetHideAnim");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2a40 FUN_100f2a40

int FUN_100f2a40(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101feb00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = in_ECX[0x55];
  if (iVar2 == 0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x6c))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x130))(), iVar2 != 0)) {
      ExceptionList = local_10;
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 100f2aab Catch@100f2aab

void Catch_100f2aab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2abf Catch@100f2abf

void Catch_100f2abf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetChildList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2ae0 FUN_100f2ae0

void FUN_100f2ae0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x144);
  param_1[1] = *(undefined4 *)(in_ECX + 0x148);
  return;
}


// ==== 100f2b3a Catch@100f2b3a

void Catch_100f2b3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2b4e Catch@100f2b4e

void Catch_100f2b4e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetShowAnimInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2b70 FUN_100f2b70

void FUN_100f2b70(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x14c);
  param_1[1] = *(undefined4 *)(in_ECX + 0x150);
  return;
}


// ==== 100f2bca Catch@100f2bca

void Catch_100f2bca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2bde Catch@100f2bde

void Catch_100f2bde(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetHideAnimInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2c00 FUN_100f2c00

int * FUN_100f2c00(void)

{
  int *piVar1;
  FString *this;
  int iVar2;
  wchar_t *pwVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101feb60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)FUN_100ef3b0();
  if (piVar1 != (int *)0x0) {
    pwVar3 = L"Window";
    this = (FString *)(**(code **)(*piVar1 + 0x40))();
    iVar2 = FString::operator!=(this,(ushort *)pwVar3);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return piVar1;
    }
  }
  ExceptionList = local_10;
  return (int *)0x0;
}


// ==== 100f2c7f Catch@100f2c7f

void Catch_100f2c7f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2c93 Catch@100f2c93

void Catch_100f2c93(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetExtendsData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2cb0 FUN_100f2cb0

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
    if (*param_3 == -9999.0) {
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


// ==== 100f2dad Catch@100f2dad

void Catch_100f2dad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2dc1 Catch@100f2dc1

void Catch_100f2dc1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::ProcessShowHideAnimNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2de0 FUN_100f2de0

void FUN_100f2de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035eaa0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 100f2e10 FUN_100f2e10

FArchive * FUN_100f2e10(FArchive *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101febc0;
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


// ==== 100f2e8e Catch@100f2e8e

void Catch_100f2e8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f2ea2 Catch@100f2ea2

void Catch_100f2ea2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"operator <<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f2ec0 FUN_100f2ec0

void FUN_100f2ec0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101febe0;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c = -9999;
  local_28 = -9999;
  local_24 = -0x39e3c400;
  local_20 = -0x39e3c400;
  iVar1 = FUN_1003fe10(&local_2c);
  if (iVar1 != 0) {
    *param_1 = in_ECX[0x3e];
    param_1[1] = in_ECX[0x3f];
    param_1[2] = in_ECX[0x40];
    local_20 = in_ECX[0x41];
LAB_100f2f37:
    param_1[3] = local_20;
    ExceptionList = local_10;
    return;
  }
  piVar2 = (int *)(**(code **)(*in_ECX + 0x6c))();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xf4))(&local_2c);
    local_3c = 0xffffd8f1;
    local_38 = 0xffffd8f1;
    local_34 = 0xc61c3c00;
    local_30 = 0xc61c3c00;
    iVar1 = FUN_1003fe10(&local_3c);
    if (iVar1 != 0) {
      *param_1 = local_2c;
      param_1[1] = local_28;
      param_1[2] = local_24;
      goto LAB_100f2f37;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  *param_1 = -9999;
  param_1[1] = -9999;
  param_1[2] = -0x39e3c400;
  param_1[3] = -0x39e3c400;
  ExceptionList = local_10;
  return;
}


// ==== 100f2fd8 Catch@100f2fd8

void Catch_100f2fd8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f2fec Catch@100f2fec

void Catch_100f2fec(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetResizeFrameRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f3010 FUN_100f3010

int * FUN_100f3010(void)

{
  int iVar1;
  FString *pFVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  FString aFStack_5c [4];
  undefined4 uStack_58;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [16];
  undefined1 *local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fec24;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 1;
  uStack_58 = 0x100f3057;
  local_1c = in_ECX;
  iVar1 = FString::operator==((FString *)&stack0x00000004,(ushort *)&DAT_1022f9f8);
  if ((iVar1 == 0) && (*(int *)(in_ECX + 0x154) != 0)) {
    for (; local_18 = iVar4, iVar4 < (*(int **)(in_ECX + 0x154))[1]; iVar4 = iVar4 + 1) {
      piVar3 = *(int **)(**(int **)(in_ECX + 0x154) + iVar4 * 4);
      if (piVar3 != (int *)0x0) {
        pFVar2 = (FString *)(**(code **)(*piVar3 + 0x44))();
        uStack_58 = 0x100f30b9;
        FString::FString(local_34,pFVar2);
        local_8._0_1_ = 2;
        uStack_58 = 0x100f30ca;
        iVar1 = FString::operator==(local_34,(FString *)&stack0x00000004);
        if (iVar1 != 0) {
LAB_100f312f:
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString(local_34);
          local_8 = 0xffffffff;
          FString::~FString((FString *)&stack0x00000004);
          ExceptionList = local_10;
          return piVar3;
        }
        pFVar2 = (FString *)(**(code **)(*piVar3 + 0x40))();
        uStack_58 = 0x100f30e1;
        FString::FString(local_40,pFVar2);
        local_8._0_1_ = 3;
        uStack_58 = 0x100f30f2;
        iVar1 = FString::operator==(local_40,(ushort *)L"Window");
        if (iVar1 != 0) {
          local_24 = aFStack_5c;
          FString::FString(aFStack_5c,(FString *)&stack0x00000004);
          local_8._0_1_ = 3;
          piVar3 = (int *)(**(code **)(*piVar3 + 0x134))();
          if (piVar3 != (int *)0x0) {
            local_8._0_1_ = 2;
            FString::~FString(local_40);
            goto LAB_100f312f;
          }
        }
        local_8._0_1_ = 2;
        FString::~FString(local_40);
        local_8 = CONCAT31(local_8._1_3_,1);
        FString::~FString(local_34);
      }
      in_ECX = local_1c;
    }
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return (int *)0x0;
}


// ==== 100f3187 Catch@100f3187

void Catch_100f3187(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100f319b Catch@100f319b

void Catch_100f319b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::GetChildData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f31c0 FUN_100f31c0

void FUN_100f31c0(void)

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
  
  puStack_c = &LAB_101fec40;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef430();
  FString::operator=((FString *)(in_ECX + 0x88),(ushort *)L"undefined");
  FString::operator=((FString *)(in_ECX + 0x94),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0xe4) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 0x124) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xd0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xe4) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 0xd4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xec) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xdc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x118) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x11c) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 0x120) = 0xffffd8f1;
  *(undefined4 *)(in_ECX + 0x13c) = 0;
  *(undefined4 *)(in_ECX + 0x140) = 0;
  FString::operator=((FString *)(in_ECX + 0x108),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0x114) = 0xffffd8f1;
  local_2c = 0xffffd8f1;
  local_28 = 0xffffd8f1;
  local_24 = 0xc61c3c00;
  local_20 = 0xc61c3c00;
  FUN_1001d9e0(&local_2c);
  FString::operator=((FString *)(in_ECX + 0x158),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0x154) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 100f32f3 Catch@100f32f3

void Catch_100f32f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f3307 Catch@100f3307

void Catch_100f3307(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f3330 FUN_100f3330

void FUN_100f3330(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101fecd1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100ef520();
  local_8 = 0;
  *in_ECX = XMLWindowData::vftable;
  FString::FString((FString *)(in_ECX + 0x22));
  local_8._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x25));
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x28));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x2b));
  local_8._0_1_ = 4;
  in_ECX[0x3f] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  FString::FString((FString *)(in_ECX + 0x42));
  local_8._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x4c));
  local_8._0_1_ = 6;
  FString::FString((FString *)(in_ECX + 0x56));
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_100f31c0();
  ExceptionList = local_10;
  return;
}


// ==== 100f3420 Catch@100f3420

void Catch_100f3420(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f3434 Catch@100f3434

void Catch_100f3434(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::XMLWindowData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f3460 FUN_100f3460

undefined4 FUN_100f3460(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  FString *pFVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fecf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  iVar2 = FUN_100f06d0();
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  piVar3 = (int *)(**(code **)(*in_ECX + 0x130))();
  if (piVar3 != (int *)0x0) {
    for (; iVar7 < piVar3[1]; iVar7 = iVar7 + 1) {
      piVar1 = *(int **)(*piVar3 + iVar7 * 4);
      if (piVar1 == (int *)0x0) {
        pFVar4 = (FString *)(**(code **)(*in_ECX + 0x44))();
        puVar5 = FString::operator*(pFVar4);
        uVar6 = FUN_10005c30(L"XMLWindowData(%s):ChildList contains NULL(%s)!!",puVar5);
        FUN_100d01f0(uVar6);
        ExceptionList = local_10;
        return 0;
      }
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 0) {
        pFVar4 = (FString *)(**(code **)(*piVar1 + 0x44))();
        puVar5 = FString::operator*(pFVar4);
        pFVar4 = (FString *)(**(code **)(*in_ECX + 0x44))(puVar5);
        puVar5 = FString::operator*(pFVar4);
        uVar6 = FUN_10005c30(L"XMLWindowData(%s):failed to pre-create child window(%s)!!",puVar5);
        FUN_100d01f0(uVar6);
        ExceptionList = local_10;
        return 0;
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 100f357b Catch@100f357b

void Catch_100f357b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100f358f Catch@100f358f

void Catch_100f358f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::PreCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f35b0 FUN_100f35b0

undefined4 FUN_100f35b0(undefined4 param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FString *pFVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  FString *in_ECX;
  undefined4 uStack_80;
  int iStack_7c;
  FString *pFStack_70;
  FString *pFStack_6c;
  uint uStack_68;
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [16];
  FString local_30 [4];
  FString local_2c [4];
  FString local_28 [4];
  undefined1 *local_24;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101fed4f;
  local_10 = ExceptionList;
  uStack_68 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_6c = (FString *)0x0;
  local_18 = (int *)&pFStack_70;
  pFStack_70 = in_ECX;
  FName::FName((FName *)&pFStack_70,0);
  UObject::GetTransientPackage();
  iStack_7c = 0x100f3601;
  iVar2 = FUN_100f2de0();
  if (iVar2 == 0) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = (int *)&stack0xffffff8c;
    iStack_7c = 0x100f361f;
    (**(code **)(*(int *)in_ECX + 0xb8))();
    local_8._0_1_ = 1;
    local_24 = &stack0xffffff7c;
    (**(code **)(*(int *)in_ECX + 0xb4))(&stack0xffffff7c);
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = (int *)FUN_100205d0();
  }
  piVar5 = local_18;
  *(int **)(in_ECX + 0x7c) = local_18;
  pFStack_6c = (FString *)0x100f3661;
  iVar2 = (**(code **)(*(int *)in_ECX + 0xc0))();
  if (iVar2 != 0) {
    pFStack_6c = (FString *)0x80;
    pFStack_70 = (FString *)0x100f3673;
    (**(code **)(*(int *)in_ECX + 0x30))();
    pFStack_70 = (FString *)0x100f367f;
    iVar2 = (**(code **)(*(int *)in_ECX + 0xec))();
    if (iVar2 != 0) {
      pFStack_6c = (FString *)0x100f368f;
      pFStack_6c = (FString *)(**(code **)(*(int *)in_ECX + 0xe8))();
      pFStack_70 = (FString *)0x100f3698;
      FUN_10057b20();
      pFStack_6c = (FString *)0x100f36a4;
      pFStack_6c = (FString *)(**(code **)(*(int *)in_ECX + 0xec))();
      pFStack_70 = (FString *)0x100f36ad;
      FUN_10057bb0();
    }
  }
  pFStack_6c = (FString *)0x100f36b9;
  iVar2 = (**(code **)(*(int *)in_ECX + 0xc4))();
  if (iVar2 != 0) {
    pFStack_6c = (FString *)0x2000;
    pFStack_70 = (FString *)0x100f36cb;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  pFStack_6c = local_40;
  pFStack_70 = (FString *)0x100f36db;
  (**(code **)(*(int *)in_ECX + 0xf8))();
  local_8 = CONCAT31(local_8._1_3_,3);
  pFStack_70 = (FString *)0x100f36e8;
  iVar2 = FString::operator_int(local_40);
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x2000;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3706;
  iVar2 = (**(code **)(*(int *)in_ECX + 200))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x1000;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3724;
  iVar2 = (**(code **)(*(int *)in_ECX + 0xcc))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x2000000;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3742;
  iVar2 = (**(code **)(*(int *)in_ECX + 0xd8))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x8000000;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3760;
  iVar2 = (**(code **)(*(int *)in_ECX + 0xdc))();
  if (iVar2 == 0) {
    pFStack_70 = (FString *)0x4000;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  pFStack_70 = (FString *)0x100f377e;
  iVar2 = (**(code **)(*(int *)in_ECX + 0x104))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x400000;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  if (*(int *)(in_ECX + 0xe0) != -1) {
    pFStack_70 = (FString *)0x20000000;
    (**(code **)(*(int *)in_ECX + 0x30))();
  }
  pFStack_70 = (FString *)0x100f37b3;
  pFStack_70 = (FString *)(**(code **)(*(int *)in_ECX + 0xf0))();
  if (pFStack_70 != (FString *)0x0) {
    FUN_10057c40();
    pFStack_70 = local_30;
    puVar3 = (undefined4 *)(**(code **)(*(int *)in_ECX + 0xf4))();
    uStack_80 = *puVar3;
    iStack_7c = puVar3[1];
    FUN_1005c050();
    pFStack_70 = (FString *)(**(code **)(*(int *)in_ECX + 0xe4))();
    FUN_10057cd0();
  }
  pFStack_70 = (FString *)0x100f3814;
  iVar2 = (**(code **)(*(int *)in_ECX + 0x120))();
  if (iVar2 != 0) {
    pFStack_70 = local_28;
    pFStack_70 = (FString *)(**(code **)(*(int *)in_ECX + 0x128))();
    FUN_1001e050();
  }
  pFStack_70 = (FString *)0x100f383f;
  iVar2 = (**(code **)(*(int *)in_ECX + 0x124))();
  if (iVar2 != 0) {
    pFStack_70 = local_28;
    pFStack_70 = (FString *)(**(code **)(*(int *)in_ECX + 300))();
    FUN_1001e110();
  }
  pFStack_70 = (FString *)0x100f386a;
  pFStack_70 = (FString *)(**(code **)(*(int *)in_ECX + 0xd4))();
  (**(code **)(*(int *)in_ECX + 0xd0))();
  FUN_100577d0();
  pFStack_70 = param_2;
  iVar2 = FUN_100f0800();
  if (iVar2 == 0) {
    pFStack_70 = (FString *)0x100f389c;
    pFVar4 = (FString *)(**(code **)(*(int *)in_ECX + 0x44))();
    pFStack_70 = (FString *)0x100f38a4;
    pFStack_70 = (FString *)FString::operator*(pFVar4);
LAB_100f38aa:
    FUN_10005c30();
    iStack_7c = 0x100f38b5;
    FUN_100d01f0();
LAB_100f38b8:
    local_8 = local_8 & 0xffffff00;
    pFStack_70 = (FString *)0x100f38c5;
    FString::~FString(local_40);
    ExceptionList = local_10;
    return 0;
  }
  pFStack_70 = (FString *)0x100f38e4;
  iVar2 = FString::operator_int(local_40);
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x0;
    FString::operator*(local_40);
    iStack_7c = 0x100f3906;
    FUN_10023870();
  }
  pFStack_70 = (FString *)0x100f3912;
  iVar2 = (**(code **)(*(int *)in_ECX + 0xc0))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x100f3922;
    iVar2 = (**(code **)(*(int *)in_ECX + 0xec))();
    if (iVar2 != 0) {
      pFStack_70 = (FString *)0x100f3932;
      iVar2 = (**(code **)(*(int *)in_ECX + 0x100))();
      if (iVar2 != 0) {
        pFStack_70 = (FString *)0x100f393f;
        piVar5 = (int *)(**(code **)(*(int *)in_ECX + 0x58))();
        pFStack_70 = (FString *)0x100f394d;
        iVar2 = (**(code **)(*(int *)in_ECX + 0x108))();
        if (iVar2 < 1) {
          pFStack_70 = (FString *)0x100f395d;
          (**(code **)(*piVar5 + 4))();
        }
        pFStack_70 = (FString *)0x100f396b;
        pFStack_70 = (FString *)(**(code **)(*(int *)in_ECX + 0x10c))();
        if ((int)pFStack_70 < 1) {
          pFStack_70 = (FString *)0x100f3979;
          pFStack_70 = (FString *)(**(code **)(*piVar5 + 4))();
        }
        FUN_10057d60();
        piVar5 = local_18;
      }
    }
  }
  pFStack_70 = (FString *)0x100f398f;
  iVar2 = (**(code **)(*(int *)in_ECX + 0x60))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x100f39a0;
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x13c))();
    iVar2 = **(int **)(in_ECX + 0x7c);
    pFStack_70 = (FString *)0x100f39ad;
    uVar6 = (**(code **)(iVar2 + 0x84))();
    pFStack_70 = (FString *)(uVar6 & 0xfbffffff);
    (**(code **)(iVar2 + 0x80))();
  }
  pFStack_70 = (FString *)0x100f39ca;
  iVar2 = (**(code **)(*(int *)in_ECX + 0x110))();
  if (iVar2 != 0) {
    pFStack_70 = local_2c;
    uVar7 = (**(code **)(*(int *)in_ECX + 0x11c))();
    local_8._0_1_ = 4;
    iVar8 = *piVar5;
    (**(code **)(*(int *)in_ECX + 0x118))();
    (**(code **)(*(int *)in_ECX + 0x114))();
    uStack_80 = uVar7;
    iStack_7c = iVar2;
    (**(code **)(iVar8 + 0x208))();
    local_8 = CONCAT31(local_8._1_3_,3);
    pFStack_70 = (FString *)0x100f3a22;
    FString::~FString(local_2c);
  }
  pFStack_70 = (FString *)0x100f3a2e;
  pFStack_70 = (FString *)(**(code **)(*(int *)in_ECX + 0xe0))();
  if (pFStack_70 != (FString *)0xffffd8f1) {
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x164))();
  }
  pFStack_70 = (FString *)0x100f3a4f;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX + 0x130))();
  if (piVar5 != (int *)0x0) {
    local_1c = 0;
    while (iVar2 = local_1c, local_1c < piVar5[1]) {
      piVar1 = *(int **)(*piVar5 + local_1c * 4);
      if (piVar1 == (int *)0x0) {
        pFStack_70 = (FString *)0x100f3a7b;
        pFVar4 = (FString *)(**(code **)(*(int *)in_ECX + 0x44))();
        pFStack_70 = (FString *)0x100f3a83;
        pFStack_70 = (FString *)FString::operator*(pFVar4);
        goto LAB_100f38aa;
      }
      pFStack_70 = *(FString **)(in_ECX + 0x7c);
      iVar8 = (**(code **)(*piVar1 + 0xc))();
      if (iVar8 == 0) {
        pFStack_70 = (FString *)0x100f3aaa;
        pFVar4 = (FString *)(**(code **)(*piVar1 + 0x44))();
        pFStack_70 = (FString *)0x100f3ab2;
        pFStack_70 = (FString *)FString::operator*(pFVar4);
        pFVar4 = (FString *)(**(code **)(*(int *)in_ECX + 0x44))();
        FString::operator*(pFVar4);
        iStack_7c = 0x100f3acf;
        iStack_7c = FUN_10005c30();
        uStack_80 = 0x100f3ad5;
        FUN_100d01f0();
        goto LAB_100f38b8;
      }
      local_1c = iVar2 + 1;
    }
  }
  pFStack_70 = local_4c;
  (**(code **)(*(int *)in_ECX + 0xbc))();
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar2 = FString::operator!=(local_4c,(ushort *)L"undefined");
  if (iVar2 != 0) {
    iVar2 = FString::operator!=(local_4c,(ushort *)&DAT_1022f9f8);
    if (iVar2 != 0) {
      iStack_7c = 0x100f3b36;
      FUN_10141490();
      goto LAB_100f3b5a;
    }
  }
  iVar2 = (**(code **)(*(int *)in_ECX + 0x60))();
  if (iVar2 == 0) {
    pcVar9 = *(code **)(**(int **)(in_ECX + 0x7c) + 0x138);
  }
  else {
    pcVar9 = *(code **)(**(int **)(in_ECX + 0x7c) + 0x13c);
  }
  (*pcVar9)();
LAB_100f3b5a:
  (**(code **)(*(int *)in_ECX + 0xb0))();
  local_8._0_1_ = 6;
  iStack_7c = 0x100f3b7d;
  iVar2 = FString::operator!=(local_58,(ushort *)L"undefined");
  if (iVar2 != 0) {
    FString::FString((FString *)&uStack_80,local_58);
    local_8._0_1_ = 7;
    FUN_10005c30();
    local_8._0_1_ = 6;
    FUN_100ca430();
  }
  local_8._0_1_ = 5;
  FString::~FString(local_58);
  local_8._0_1_ = 3;
  FString::~FString(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return 1;
}


// ==== 100f3beb Catch@100f3beb

void Catch_100f3beb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100f3bff Catch@100f3bff

void Catch_100f3bff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f3c20 FUN_100f3c20

void FUN_100f3c20(FArchive *param_1)

{
  int iVar1;
  FString *pFVar2;
  int *piVar3;
  int in_ECX;
  code *pcVar4;
  uint uStack_48;
  FString local_38 [20];
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101fed96;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100ef8c0();
  pcVar4 = operator<<_exref;
  operator<<(param_1,(FString *)(in_ECX + 0x88));
  operator<<(param_1,(FString *)(in_ECX + 0x94));
  operator<<(param_1,(FString *)(in_ECX + 0xa0));
  operator<<(param_1,(FString *)(in_ECX + 0xac));
  FUN_100052e0(param_1,in_ECX + 0xb8);
  FUN_100052e0(param_1,in_ECX + 0xbc);
  FUN_100052e0(param_1,in_ECX + 0xc0);
  FUN_100052e0(param_1,in_ECX + 0xc4);
  FUN_100052e0();
  FUN_100052e0(param_1);
  FUN_100052e0(param_1,in_ECX + 0xd0);
  FUN_100052e0(param_1,in_ECX + 0xe4);
  FUN_100052e0(param_1,in_ECX + 0xd4);
  FUN_100f2e10(param_1,in_ECX + 0xec);
  FUN_1005ba90(param_1,in_ECX + 0xf0);
  FUN_100052e0(param_1,in_ECX + 0xd8);
  FUN_100052e0();
  FUN_1005ba90(param_1);
  FUN_1003ff50(param_1,in_ECX + 0xf8);
  FUN_100052e0(param_1,in_ECX + 0xe8);
  FUN_100052e0(param_1,in_ECX + 0x118);
  FUN_100052e0(param_1,in_ECX + 0x11c);
  FUN_100052e0(param_1,in_ECX + 0x120);
  FUN_1005ba90(param_1,in_ECX + 0x124);
  FUN_100052e0();
  FUN_100052e0(param_1);
  operator<<(param_1,(FString *)(in_ECX + 0x130));
  FUN_1001dc60(param_1,in_ECX + 0x13c);
  FUN_1001dc60(param_1,in_ECX + 0x140);
  FUN_1001dd10(param_1,in_ECX + 0x144);
  FUN_1001dd10(param_1,in_ECX + 0x14c);
  operator<<(param_1,(FString *)(in_ECX + 0x108));
  FUN_100052e0();
  FUN_100052e0(param_1);
  operator<<(param_1,(FString *)(in_ECX + 0x158));
  iVar1 = FArchive::IsSaving(param_1);
  if (iVar1 == 0) {
    local_20 = 0;
    FUN_100052e0();
    for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
      FString::FString(local_38);
      local_8._0_1_ = 2;
      (*pcVar4)();
      FString::FString((FString *)&stack0xffffffac,local_38);
      local_8._0_1_ = 3;
      FUN_10005c30();
      local_8._0_1_ = 2;
      piVar3 = (int *)FUN_100c8240();
      local_24 = piVar3;
      if (*(int *)(in_ECX + 0x154) == 0) {
        iVar1 = FUN_10004ed0();
        local_8._0_1_ = 4;
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_100e4b60();
        }
        local_8._0_1_ = 2;
        *(int *)(in_ECX + 0x154) = iVar1;
        if (iVar1 == 0) {
          appFailAssert("m_ChildList",".\\XML\\XMLWindowData.cpp",0x2d6);
        }
      }
      FUN_100d9a30();
      (**(code **)(*piVar3 + 0x38))();
      (**(code **)(*piVar3 + 100))();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_38);
      pcVar4 = operator<<_exref;
    }
  }
  else if (*(int *)(in_ECX + 0x154) == 0) {
    FUN_100052e0();
  }
  else {
    FUN_100052e0();
    for (local_18 = 0; local_18 < (*(int **)(in_ECX + 0x154))[1]; local_18 = local_18 + 1) {
      piVar3 = *(int **)(**(int **)(in_ECX + 0x154) + local_18 * 4);
      if (piVar3 == (int *)0x0) {
        appFailAssert("pUIData",".\\XML\\XMLWindowData.cpp",0x2bd);
      }
      pFVar2 = (FString *)(**(code **)(*piVar3 + 0x40))();
      FString::FString(local_38,pFVar2);
      local_8._0_1_ = 1;
      operator<<(param_1,local_38);
      (**(code **)(*piVar3 + 100))();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_38);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100f3fe9 Catch@100f3fe9

void Catch_100f3fe9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100f3ffd Catch@100f3ffd

void Catch_100f3ffd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f4020 FUN_100f4020

undefined4 FUN_100f4020(void)

{
  int iVar1;
  FString *pFVar2;
  int *piVar3;
  int *in_ECX;
  wchar_t *pwStack_7c;
  wchar_t *pwStack_78;
  uint uStack_70;
  FString local_60 [12];
  int local_54;
  int local_50;
  FString local_48 [20];
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fefb9;
  local_10 = ExceptionList;
  uStack_70 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_30 = (undefined1 *)&pwStack_7c;
  FString::FString((FString *)&pwStack_7c,(FString *)&stack0x00000008);
  local_8._0_1_ = 1;
  iVar1 = FUN_100efd60();
  if (iVar1 == 0) {
    pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
    FString::operator*(pFVar2);
    pwStack_78 = L"XMLUIData(%s):default property processing failed!!";
  }
  else {
    pwStack_78 = (wchar_t *)0x100f40df;
    FString::FString(local_48,(ushort *)L"parent");
    local_8._0_1_ = 3;
    FUN_100cd860();
    local_8._0_1_ = 3;
    (**(code **)(*in_ECX + 0x78))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"backTex");
    local_8._0_1_ = 5;
    FUN_100cd860();
    local_8._0_1_ = 5;
    (**(code **)(*in_ECX + 0x7c))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"script");
    local_8._0_1_ = 7;
    FUN_100cd860();
    local_8._0_1_ = 7;
    (**(code **)(*in_ECX + 0x80))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"state");
    local_8._0_1_ = 9;
    FUN_100cd860();
    local_8._0_1_ = 9;
    (**(code **)(*in_ECX + 0x84))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"frame");
    local_8._0_1_ = 0xb;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x88))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"resizeframe");
    local_8._0_1_ = 0xc;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xa8))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"iconable");
    local_8._0_1_ = 0xd;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x8c))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"hidden");
    local_8._0_1_ = 0xe;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x90))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"alwaysFullAlpha");
    local_8._0_1_ = 0xf;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x94))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"stuckable");
    local_8._0_1_ = 0x10;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x98))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"title");
    local_8._0_1_ = 0x11;
    iVar1 = *in_ECX;
    FUN_100cd980();
    (**(code **)(iVar1 + 0x9c))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"savePosition");
    local_8._0_1_ = 0x12;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xa0))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"saveSize");
    local_8._0_1_ = 0x13;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xa4))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"draggable");
    local_8._0_1_ = 0x14;
    iVar1 = *in_ECX;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xac))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"hookKeyInput");
    local_8._0_1_ = 0x15;
    iVar1 = FUN_100cda90();
    in_ECX[0x38] = iVar1;
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"WorkingConfiguration");
    local_8._0_1_ = 0x16;
    FUN_100cd860(&stack0xffffff2c);
    local_8._0_1_ = 0x16;
    FUN_100f1350();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    local_20 = 0;
    FString::FString(local_48,(ushort *)L"Drawer");
    local_8._0_1_ = 0x18;
    iVar1 = FUN_100cd670();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    if (iVar1 == 0) {
LAB_100f4657:
      local_24 = 0;
      FString::FString(local_48,(ushort *)L"ShowHideAnim");
      local_8._0_1_ = 0x1e;
      iVar1 = FUN_100cd670();
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      if (iVar1 == 0) {
LAB_100f47c4:
        local_18 = 0;
        FString::FString(local_48,(ushort *)L"Frame");
        local_8._0_1_ = 0x21;
        iVar1 = FUN_100cd670();
        local_8._0_1_ = 1;
        FString::~FString(local_48);
        if (iVar1 != 0) {
          FString::FString(local_48,(ushort *)L"size");
          local_8._0_1_ = 0x22;
          iVar1 = FUN_100cec80();
          in_ECX[0x3b] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"direction");
          local_8._0_1_ = 0x23;
          iVar1 = FUN_100ce7f0();
          in_ECX[0x3c] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x3c] == 0) {
            in_ECX[0x3c] = 3;
          }
          FString::FString(local_48,(ushort *)L"exitbutton");
          local_8._0_1_ = 0x24;
          iVar1 = FUN_100cda90();
          in_ECX[0x36] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"expandbutton");
          local_8._0_1_ = 0x25;
          iVar1 = FUN_100cda90();
          in_ECX[0x46] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x46] == -1) {
            in_ECX[0x46] = 0;
          }
          FString::FString(local_48,(ushort *)L"expandOrgHeight");
          local_8._0_1_ = 0x26;
          iVar1 = FUN_100cd980();
          in_ECX[0x47] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x47] == -9999) {
            in_ECX[0x47] = 0;
          }
          FString::FString(local_48,(ushort *)L"expandExpHeight");
          local_8._0_1_ = 0x27;
          iVar1 = FUN_100cd980();
          in_ECX[0x48] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x48] == -9999) {
            in_ECX[0x48] = 0;
          }
        }
        local_28 = 0;
        FString::FString(local_48,(ushort *)L"Iconable");
        local_8._0_1_ = 0x28;
        iVar1 = FUN_100cd670();
        local_8._0_1_ = 1;
        FString::~FString(local_48);
        if (iVar1 != 0) {
          FString::FString(local_48,(ushort *)L"IconName");
          local_8._0_1_ = 0x29;
          pFVar2 = (FString *)FUN_100cd860();
          local_8._0_1_ = 0x2a;
          FString::operator=((FString *)(in_ECX + 0x42),pFVar2);
          local_8._0_1_ = 0x29;
          FString::~FString(local_60);
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          iVar1 = FString::operator==((FString *)(in_ECX + 0x42),(ushort *)L"undefined");
          if (iVar1 != 0) {
            pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
            FString::operator*(pFVar2);
            pwStack_78 = L"XMLUIData(%s):direction is not defined!!";
            goto LAB_100f409c;
          }
          FString::FString(local_48,(ushort *)L"TooltipIdx");
          local_8._0_1_ = 0x2b;
          iVar1 = FUN_100cd980();
          in_ECX[0x45] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x45] == -9999) goto LAB_100f45b2;
        }
        local_1c = 0;
        FString::FString(local_48,(ushort *)L"ResizeFrame");
        local_8._0_1_ = 0x2c;
        iVar1 = FUN_100cd670();
        local_8._0_1_ = 1;
        FString::~FString(local_48);
        if (iVar1 != 0) {
          FString::FString(local_48,(ushort *)&DAT_1026b404);
          local_8._0_1_ = 0x2d;
          iVar1 = FUN_100cd980();
          in_ECX[0x3e] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)&DAT_1026b400);
          local_8._0_1_ = 0x2e;
          iVar1 = FUN_100cd980();
          in_ECX[0x3f] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"width");
          local_8._0_1_ = 0x2f;
          iVar1 = FUN_100cd980();
          in_ECX[0x40] = (int)(float)iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"height");
          local_8._0_1_ = 0x30;
          iVar1 = FUN_100cd980();
          in_ECX[0x41] = (int)(float)iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"direction");
          local_8._0_1_ = 0x31;
          iVar1 = FUN_100ce7f0();
          in_ECX[0x3d] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x3d] == 0) {
            in_ECX[0x3d] = 2;
          }
          FString::FString(local_48,(ushort *)L"maxIncrease");
          local_8._0_1_ = 0x32;
          iVar1 = FUN_100cd980();
          in_ECX[0x3a] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
        }
        FUN_100c80b0();
        local_8._0_1_ = 0x33;
        FString::FString(local_48,(ushort *)&DAT_1022f9f8);
        local_8._0_1_ = 0x34;
        iVar1 = FUN_100cd4b0();
        local_8._0_1_ = 0x33;
        FString::~FString(local_48);
        if (iVar1 != 0) {
          local_34 = 0;
          do {
            if (local_50 <= local_34) {
              local_8 = CONCAT31(local_8._1_3_,1);
              FUN_100c97c0();
              local_8 = 0xffffffff;
              FString::~FString((FString *)&stack0x00000008);
              ExceptionList = local_10;
              return 1;
            }
            local_30 = *(undefined1 **)(local_54 + local_34 * 4);
            FUN_100cd3e0();
            local_8._0_1_ = 0x35;
            iVar1 = FString::operator==(local_48,(ushort *)L"DefaultProperty");
            if (((((iVar1 == 0) &&
                  (iVar1 = FString::operator==(local_48,(ushort *)L"#comment"), iVar1 == 0)) &&
                 (iVar1 = FString::operator==(local_48,(ushort *)L"Drawer"), iVar1 == 0)) &&
                ((iVar1 = FString::operator==(local_48,(ushort *)L"Anchor"), iVar1 == 0 &&
                 (iVar1 = FString::operator==(local_48,(ushort *)L"Frame"), iVar1 == 0)))) &&
               ((iVar1 = FString::operator==(local_48,(ushort *)L"ResizeFrame"), iVar1 == 0 &&
                ((iVar1 = FString::operator==(local_48,(ushort *)L"Iconable"), iVar1 == 0 &&
                 (iVar1 = FString::operator==(local_48,(ushort *)L"ShowHideAnim"), iVar1 == 0))))))
            {
              FString::FString((FString *)&stack0xffffff2c,local_48);
              local_8._0_1_ = 0x36;
              FUN_10005c30();
              local_8._0_1_ = 0x35;
              piVar3 = (int *)FUN_100c8240();
              if (piVar3 != (int *)0x0) {
                if (in_ECX[0x55] == 0) {
                  local_2c = (undefined1 *)FUN_10004ed0();
                  local_8._0_1_ = 0x37;
                  if (local_2c == (undefined1 *)0x0) {
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = FUN_100e4b60();
                  }
                  local_8._0_1_ = 0x35;
                  in_ECX[0x55] = iVar1;
                  if (iVar1 == 0) {
                    appFailAssert("m_ChildList",".\\XML\\XMLWindowData.cpp",0xea);
                  }
                }
                FUN_100d9a30();
                (**(code **)(*piVar3 + 0x38))();
                pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
                local_2c = &stack0xffffff28;
                FString::FString((FString *)&stack0xffffff28,pFVar2);
                local_8._0_1_ = 0x35;
                iVar1 = (**(code **)(*piVar3 + 4))(local_30);
                if (iVar1 == 0) {
                  FString::operator*(local_48);
                  pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
                  pwStack_78 = (wchar_t *)0x100f4e2e;
                  pwStack_78 = (wchar_t *)FString::operator*(pFVar2);
                  pwStack_7c = L"XMLUIData(%s):failed to process child window";
                  FUN_10005c30();
                  FUN_100d01f0();
                  local_8._0_1_ = 0x33;
                  FString::~FString(local_48);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  FUN_100c97c0();
                  goto LAB_100f40aa;
                }
              }
            }
            local_8._0_1_ = 0x33;
            FString::~FString(local_48);
            local_34 = local_34 + 1;
          } while( true );
        }
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_78 = L"XMLUIData(%s):failed to get child window elements!!";
        pwStack_7c = (wchar_t *)0x100f4c57;
        pwStack_7c = (wchar_t *)FUN_10005c30();
        FUN_100d01f0();
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_100c97c0();
        goto LAB_100f40aa;
      }
      local_2c = (undefined1 *)0x0;
      FString::FString(local_48,(ushort *)L"ShowAnim");
      local_8._0_1_ = 0x1f;
      iVar1 = FUN_100cd670();
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      if (iVar1 == 0) {
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_78 = L"XMLUIData(%s):ShowAnim node is not present!!";
      }
      else {
        iVar1 = FUN_100f2cb0();
        if (iVar1 == 0) {
          pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
          FString::operator*(pFVar2);
          pwStack_78 = L"XMLUIData(%s):Failed to process ShowAnim node!!";
        }
        else {
          local_30 = (undefined1 *)0x0;
          FString::FString(local_48,(ushort *)L"HideAnim");
          local_8._0_1_ = 0x20;
          iVar1 = FUN_100cd670();
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (iVar1 == 0) {
            pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
            FString::operator*(pFVar2);
            pwStack_78 = L"XMLUIData(%s):HideAnim node is not present!!";
          }
          else {
            iVar1 = FUN_100f2cb0();
            if (iVar1 != 0) goto LAB_100f47c4;
            pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
            FString::operator*(pFVar2);
            pwStack_78 = L"XMLUIData(%s):Failed to process HideAnim node!!";
          }
        }
      }
    }
    else {
      FString::FString(local_48,(ushort *)L"ownerWindow");
      local_8._0_1_ = 0x19;
      pFVar2 = (FString *)FUN_100cd860();
      local_8._0_1_ = 0x1a;
      FString::operator=((FString *)(in_ECX + 0x4c),pFVar2);
      local_8._0_1_ = 0x19;
      FString::~FString(local_60);
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      iVar1 = FString::operator==((FString *)(in_ECX + 0x4c),(ushort *)L"undefined");
      if (iVar1 == 0) {
        FString::FString(local_48,(ushort *)L"direction");
        local_8._0_1_ = 0x1b;
        iVar1 = FUN_100ce7f0();
        in_ECX[0x49] = iVar1;
        local_8._0_1_ = 1;
        FString::~FString(local_48);
        if (in_ECX[0x49] != 0) {
          FString::FString(local_48,(ushort *)L"offset");
          local_8._0_1_ = 0x1c;
          iVar1 = FUN_100cd980();
          in_ECX[0x4a] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x4a] == -9999) {
            in_ECX[0x4a] = 0;
          }
          FString::FString(local_48,(ushort *)L"directionFixed");
          local_8._0_1_ = 0x1d;
          iVar1 = FUN_100cda90();
          in_ECX[0x4b] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (in_ECX[0x4b] == -1) {
            in_ECX[0x4b] = 0;
          }
          goto LAB_100f4657;
        }
LAB_100f45b2:
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_78 = L"XMLUIData(%s):direction is not defined!!";
      }
      else {
        pFVar2 = (FString *)(**(code **)(*in_ECX + 0x44))();
        FString::operator*(pFVar2);
        pwStack_78 = L"XMLUIData(%s):ownerWindow is not defined!!";
      }
    }
  }
LAB_100f409c:
  pwStack_7c = (wchar_t *)0x100f40a1;
  pwStack_7c = (wchar_t *)FUN_10005c30();
  FUN_100d01f0();
LAB_100f40aa:
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return 0;
}


// ==== 100f4e98 Catch@100f4e98

void Catch_100f4e98(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_102a47f0);
}


// ==== 100f4eac Catch@100f4eac

void Catch_100f4eac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::Process");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f4ed0 FUN_100f4ed0

void FUN_100f4ed0(void)

{
  FArray *this;
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101fefe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100efb90();
  if (*(int *)(in_ECX + 0x154) != 0) {
    iVar2 = 0;
    while( true ) {
      this = *(FArray **)(in_ECX + 0x154);
      if (*(int *)(this + 4) <= iVar2) break;
      puVar1 = *(undefined4 **)(*(int *)this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(**(int **)(in_ECX + 0x154) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    }
    for (iVar2 = 0; iVar2 < *(int *)(this + 4); iVar2 = iVar2 + 1) {
    }
    FArray::Empty(this,4,0);
    if (*(int *)(in_ECX + 0x154) != 0) {
      FUN_100e5780(1);
    }
    *(undefined4 *)(in_ECX + 0x154) = 0;
  }
  FString::operator=((FString *)(in_ECX + 0x108),(ushort *)L"undefined");
  *(undefined4 *)(in_ECX + 0x114) = 0xffffd8f1;
  ExceptionList = local_10;
  return;
}


// ==== 100f4fb1 Catch@100f4fb1

void Catch_100f4fb1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100f4fc5 Catch@100f4fc5

void Catch_100f4fc5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f4ff0 FUN_100f4ff0

void FUN_100f4ff0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101ff071;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = XMLWindowData::vftable;
  local_8 = 8;
  FUN_100f4ed0();
  local_8 = 6;
  FString::~FString((FString *)(in_ECX + 0x56));
  local_8._0_1_ = 5;
  FString::~FString((FString *)(in_ECX + 0x4c));
  local_8._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0x42));
  local_8._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x2b));
  local_8._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x28));
  local_8._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x25));
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x22));
  local_8 = 0xffffffff;
  FUN_100efc70();
  ExceptionList = local_10;
  return;
}


// ==== 100f50c9 Catch@100f50c9

void Catch_100f50c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f50dd Catch@100f50dd

void Catch_100f50dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"XMLWindowData::~XMLWindowData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5100 FUN_100f5100

void FUN_100f5100(byte param_1)

{
  FUN_100f4ff0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 100f5130 _DllMain@12

undefined4 _DllMain_12(undefined4 param_1)

{
                    /* 0xf5130  1873  _DllMain@12 */
  DAT_10380814 = param_1;
  return 1;
}


// ==== 100f5150 UUIScript::Initialize

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UUIScript::Initialize(void) */

void __thiscall UUIScript::Initialize(UUIScript *this)

{
  undefined4 *puVar1;
  uint uStack_30;
  FName local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf5150  694  ?Initialize@UUIScript@@QAEXXZ */
  puStack_c = &LAB_101ff090;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnLoad",2);
  _NWINDOW_OnLoad = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnTick",2);
  _NWINDOW_OnTick = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnShow",2);
  _NWINDOW_OnShow = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnHide",2);
  _NWINDOW_OnHide = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnEvent",2);
  _NWINDOW_OnEvent = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnTimer",2);
  _NWINDOW_OnTimer = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnMinimize",2);
  _NWINDOW_OnMinimize = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnEnterState",2);
  _NWINDOW_OnEnterState = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnExitState",2);
  _NWINDOW_OnExitState = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnSendPacketWhenHiding",2);
  _NWINDOW_OnSendPacketWhenHiding = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnFrameExpandClick",2);
  _NWINDOW_OnFrameExpandClick = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDefaultPosition",2);
  _NWINDOW_OnDefaultPosition = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnKeyDown",2);
  _NWINDOW_OnKeyDown = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnKeyUp",2);
  _NWINDOW_OnKeyUp = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnLButtonDown",2);
  _NWINDOW_OnLButtonDown = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnLButtonUp",2);
  _NWINDOW_OnLButtonUp = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnLButtonDblClick",2);
  _NWINDOW_OnLButtonDblClick = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnRButtonDown",2);
  _NWINDOW_OnRButtonDown = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnRButtonUp",2);
  _NWINDOW_OnRButtonUp = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnRButtonDblClick",2);
  _NWINDOW_OnRButtonDblClick = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDropItem",2);
  _NWINDOW_OnDropItem = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDragItemStart",2);
  _NWINDOW_OnDragItemStart = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDragItemEnd",2);
  _NWINDOW_OnDragItemEnd = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDropItemSource",2);
  _NWINDOW_OnDropItemSource = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnClickButton",2);
  _NWINDOW_OnClickButton = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnClickButtonWithHandle",2);
  _NWINDOW_OnClickButtonWithHandle = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnButtonTimer",2);
  _NWINDOW_OnButtonTimer = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnTabSplit",2);
  _NWINDOW_OnTabSplit = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnTabMerge",2);
  _NWINDOW_OnTabMerge = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnCompleteEditBox",2);
  _NWINDOW_OnCompleteEditBox = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnChangeEditBox",2);
  _NWINDOW_OnChangeEditBox = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnChatMarkedEditBox",2);
  _NWINDOW_OnChatMarkedEditBox = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnClickListCtrlRecord",2);
  _NWINDOW_OnClickListCtrlRecord = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDBClickListCtrlRecord",2);
  _NWINDOW_OnDBClickListCtrlRecord = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnClickCheckBox",2);
  _NWINDOW_OnClickCheckBox = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnClickItem",2);
  _NWINDOW_OnClickItem = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDBClickItem",2);
  _NWINDOW_OnDBClickItem = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnRClickItem",2);
  _NWINDOW_OnRClickItem = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnRDBClickItem",2);
  _NWINDOW_OnRDBClickItem = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnRClickItemWithHandle",2);
  _NWINDOW_OnRClickItemWithHandle = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnDBClickItemWithHandle",2);
  _NWINDOW_OnDBClickItemWithHandle = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnSelectItemWithHandle",2);
  _NWINDOW_OnSelectItemWithHandle = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnProgressTimeUp",2);
  _NWINDOW_OnProgressTimeUp = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnComboBoxItemSelected",2);
  _NWINDOW_OnComboBoxItemSelected = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnTextureAnimEnd",2);
  _NWINDOW_OnTextureAnimEnd = *puVar1;
  puVar1 = (undefined4 *)FName::FName(local_1c,(ushort *)L"OnModifyCurrentTickSliderCtrl",2);
  _NWINDOW_OnModifyCurrentTickSliderCtrl = *puVar1;
  ExceptionList = local_10;
  return;
}


// ==== 100f5529 Catch@100f5529

void Catch_100f5529(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f553d Catch@100f553d

void Catch_100f553d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::Initialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5560 UUIScript::execIsPKMode

/* public: void __thiscall UUIScript::execIsPKMode(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsPKMode(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf5560  1496  ?execIsPKMode@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff0b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = (**(code **)(*DAT_103663bc + 0x590))();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 100f55ea Catch@100f55ea

void Catch_100f55ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f55fe Catch@100f55fe

void Catch_100f55fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsPKMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5620 UUIScript::execRequestSkillList

/* public: void __thiscall UUIScript::execRequestSkillList(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestSkillList(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf5620  1684  ?execRequestSkillList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff0d9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (DAT_103663bc != 0) {
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 1;
    FUN_10143b60(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100f56cb Catch@100f56cb

void Catch_100f56cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f56df Catch@100f56df

void Catch_100f56df(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestSkillList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5700 UUIScript::execRequestAuthCardKeyLogin

/* public: void __thiscall UUIScript::execRequestAuthCardKeyLogin(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestAuthCardKeyLogin(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xf5700  1569  ?execRequestAuthCardKeyLogin@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_101ff109;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_2c);
  iVar3 = appAtoi(puVar2);
  FUN_10141b50(local_18,iVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100f57ed Catch@100f57ed

void Catch_100f57ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f5801 Catch@100f5801

void Catch_100f5801(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestLogin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5820 UUIScript::execRequestTradeDone

/* public: void __thiscall UUIScript::execRequestTradeDone(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestTradeDone(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf5820  1691  ?execRequestTradeDone@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff130;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10143210(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 100f58c9 Catch@100f58c9

void Catch_100f58c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f58dd Catch@100f58dd

void Catch_100f58dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestTradeDone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5900 UUIScript::execRequestStartTrade

/* public: void __thiscall UUIScript::execRequestStartTrade(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestStartTrade(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf5900  1686  ?execRequestStartTrade@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff150;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101430e0(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 100f59a9 Catch@100f59a9

void Catch_100f59a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f59bd Catch@100f59bd

void Catch_100f59bd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestStartTrade");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f59e0 UUIScript::execAnswerTradeRequest

/* public: void __thiscall UUIScript::execAnswerTradeRequest(struct FFrame &,void * const) */

void __thiscall UUIScript::execAnswerTradeRequest(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf59e0  1078  ?execAnswerTradeRequest@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff179;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,(void *)(uint)(local_18 != 0));
  (**(code **)(*DAT_103663bc + 0x7d4))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 100f5ab4 Catch@100f5ab4

void Catch_100f5ab4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f5ac8 Catch@100f5ac8

void Catch_100f5ac8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execAnswerTradeRequest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5af0 UUIScript::execRequestSellItem

/* public: void __thiscall UUIScript::execRequestSellItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestSellItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_90;
  L2ParamStack local_80 [16];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [32];
  int local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf5af0  1680  ?execRequestSellItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff1e7;
  local_10 = ExceptionList;
  uStack_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_90;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_4c);
  local_8._0_1_ = 2;
  FString::FString(local_58,(ushort *)L"merchant");
  local_8._0_1_ = 3;
  FUN_100404d0(local_58,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 4;
  FUN_100404d0(local_58,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  L2ParamStack::L2ParamStack(local_80,(int)local_18 * 3 + 2);
  local_8 = CONCAT31(local_8._1_3_,5);
  L2ParamStack::PushBack(local_80,local_1c);
  L2ParamStack::PushBack(local_80,local_18);
  local_2c = 0;
  while (iVar2 = local_2c, local_2c < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_58,L"serverID%d",local_2c);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8._0_1_ = 5;
    FString::~FString(local_58);
    uVar3 = FString::Printf((ushort *)local_64,L"classID%d",iVar2);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8._0_1_ = 5;
    FString::~FString(local_64);
    uVar3 = FString::Printf((ushort *)local_70,L"count%d",iVar2);
    local_8._0_1_ = 8;
    FUN_100404d0(uVar3,&local_28);
    local_8 = CONCAT31(local_8._1_3_,5);
    FString::~FString(local_70);
    L2ParamStack::PushBack(local_80,local_20);
    L2ParamStack::PushBack(local_80,local_24);
    L2ParamStack::PushBack(local_80,local_28);
    local_2c = iVar2 + 1;
  }
  FUN_10143460(local_80);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_80);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 100f5d1c Catch@100f5d1c

void Catch_100f5d1c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100f5d30 Catch@100f5d30

void Catch_100f5d30(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestSellItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5d50 UUIScript::execRequestBuyItem

/* public: void __thiscall UUIScript::execRequestBuyItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestBuyItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_80;
  L2ParamStack local_70 [16];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [32];
  int local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf5d50  1572  ?execRequestBuyItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff24e;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_48);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_48);
  local_8._0_1_ = 2;
  FString::FString(local_54,(ushort *)L"merchant");
  local_8._0_1_ = 3;
  FUN_100404d0(local_54,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  FString::FString(local_54,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 4;
  FUN_100404d0(local_54,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  L2ParamStack::L2ParamStack(local_70,(int)local_18 * 2 + 2);
  local_8 = CONCAT31(local_8._1_3_,5);
  L2ParamStack::PushBack(local_70,local_1c);
  L2ParamStack::PushBack(local_70,local_18);
  local_28 = 0;
  while (iVar2 = local_28, local_28 < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_54,L"classID%d",local_28);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8._0_1_ = 5;
    FString::~FString(local_54);
    uVar3 = FString::Printf((ushort *)local_60,L"count%d",iVar2);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8 = CONCAT31(local_8._1_3_,5);
    FString::~FString(local_60);
    L2ParamStack::PushBack(local_70,local_20);
    L2ParamStack::PushBack(local_70,local_24);
    local_28 = iVar2 + 1;
  }
  FUN_101433d0(local_70);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_70);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 100f5f3f Catch@100f5f3f

void Catch_100f5f3f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100f5f53 Catch@100f5f53

void Catch_100f5f53(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestBuyItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f5f70 UUIScript::execRequestBuySeed

/* public: void __thiscall UUIScript::execRequestBuySeed(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestBuySeed(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_80;
  L2ParamStack local_70 [16];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [32];
  int local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf5f70  1573  ?execRequestBuySeed@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff2ae;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_48);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_48);
  local_8._0_1_ = 2;
  FString::FString(local_54,(ushort *)L"merchant");
  local_8._0_1_ = 3;
  FUN_100404d0(local_54,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  FString::FString(local_54,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 4;
  FUN_100404d0(local_54,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  L2ParamStack::L2ParamStack(local_70,(int)local_18 * 3 + 2);
  local_8 = CONCAT31(local_8._1_3_,5);
  L2ParamStack::PushBack(local_70,local_1c);
  L2ParamStack::PushBack(local_70,local_18);
  local_28 = 0;
  while (iVar2 = local_28, local_28 < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_54,L"classID%d",local_28);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8._0_1_ = 5;
    FString::~FString(local_54);
    uVar3 = FString::Printf((ushort *)local_60,L"count%d",iVar2);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8 = CONCAT31(local_8._1_3_,5);
    FString::~FString(local_60);
    L2ParamStack::PushBack(local_70,local_20);
    L2ParamStack::PushBack(local_70,local_24);
    local_28 = iVar2 + 1;
  }
  FUN_101432b0(local_70);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_70);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 100f615f Catch@100f615f

void Catch_100f615f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100f6173 Catch@100f6173

void Catch_100f6173(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestBuySeed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6190 UUIScript::execRequestProcureCrop

/* public: void __thiscall UUIScript::execRequestProcureCrop(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestProcureCrop(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_90;
  L2ParamStack local_80 [16];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [32];
  int local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf6190  1659  ?execRequestProcureCrop@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff317;
  local_10 = ExceptionList;
  uStack_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_90;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_4c);
  local_8._0_1_ = 2;
  FString::FString(local_58,(ushort *)L"merchant");
  local_8._0_1_ = 3;
  FUN_100404d0(local_58,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 4;
  FUN_100404d0(local_58,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  L2ParamStack::L2ParamStack(local_80,(int)local_18 * 3 + 2);
  local_8 = CONCAT31(local_8._1_3_,5);
  L2ParamStack::PushBack(local_80,local_1c);
  L2ParamStack::PushBack(local_80,local_18);
  local_2c = 0;
  while (iVar2 = local_2c, local_2c < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_58,L"serverID%d",local_2c);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8._0_1_ = 5;
    FString::~FString(local_58);
    uVar3 = FString::Printf((ushort *)local_64,L"classID%d",iVar2);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8._0_1_ = 5;
    FString::~FString(local_64);
    uVar3 = FString::Printf((ushort *)local_70,L"count%d",iVar2);
    local_8._0_1_ = 8;
    FUN_100404d0(uVar3,&local_28);
    local_8 = CONCAT31(local_8._1_3_,5);
    FString::~FString(local_70);
    L2ParamStack::PushBack(local_80,local_20);
    L2ParamStack::PushBack(local_80,local_24);
    L2ParamStack::PushBack(local_80,local_28);
    local_2c = iVar2 + 1;
  }
  FUN_10143340(local_80);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_80);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 100f63bc Catch@100f63bc

void Catch_100f63bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100f63d0 Catch@100f63d0

void Catch_100f63d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestProcureCrop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f63f0 UUIScript::execMakeBuffTimeStr

/* public: void __thiscall UUIScript::execMakeBuffTimeStr(struct FFrame &,void * const) */

void __thiscall UUIScript::execMakeBuffTimeStr(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *pFVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf63f0  1519  ?execMakeBuffTimeStr@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff349;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = (FString *)FUN_100628f0(local_2c,local_18);
  local_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100f64ad Catch@100f64ad

void Catch_100f64ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f64c1 Catch@100f64c1

void Catch_100f64c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execMakeBuffTimeStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f64e0 UUIScript::execGetTimeString

/* public: void __thiscall UUIScript::execGetTimeString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetTimeString(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  FString *pFVar2;
  uint uStack_54;
  FString local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf64e0  1426  ?execGetTimeString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff379;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_54;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  appSystemTime(&local_34,&local_30,&local_2c,&local_28,&local_1c,&local_18,(int *)&param_1,local_24
               );
  pFVar2 = (FString *)
           FString::Printf((ushort *)local_44,L"%02d:%02d:%02d",local_1c,local_18,param_1);
  local_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100f65b6 Catch@100f65b6

void Catch_100f65b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100f65ca Catch@100f65ca

void Catch_100f65ca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetTimeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f65f0 UUIScript::execConvertTimetoStr

/* public: void __thiscall UUIScript::execConvertTimetoStr(struct FFrame &,void * const) */

void __thiscall UUIScript::execConvertTimetoStr(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_134;
  undefined4 local_11c;
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  undefined4 local_10c;
  ushort local_108 [128];
  uint local_8;
  
                    /* 0xf65f0  1120  ?execConvertTimetoStr@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_110 = &LAB_101ff3a0;
  local_114 = ExceptionList;
  uStack_134 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_134;
  ExceptionList = &local_114;
  local_10c = 0;
  local_11c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_134;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_11c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  appMemset(local_108,0,0x100);
  FUN_1016e5e0(local_11c,local_108);
  FString::operator=(param_2,local_108);
  local_10c = 0xffffffff;
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 100f66ea Catch@100f66ea

void Catch_100f66ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f66fe Catch@100f66fe

void Catch_100f66fe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execConvertTimetoStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6720 UUIScript::execIsKeyDown

/* public: void __thiscall UUIScript::execIsKeyDown(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsKeyDown(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  SHORT SVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf6720  1488  ?execIsKeyDown@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff3d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  SVar2 = GetKeyState(local_18);
  *(uint *)param_2 = (uint)((char)((ushort)SVar2 >> 8) == -1);
  ExceptionList = local_10;
  return;
}


// ==== 100f67d6 Catch@100f67d6

void Catch_100f67d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f67ea Catch@100f67ea

void Catch_100f67ea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsKeyDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6810 UUIScript::execExecuteCommandFromAction

/* public: void __thiscall UUIScript::execExecuteCommandFromAction(struct FFrame &,void * const) */

void __thiscall
UUIScript::execExecuteCommandFromAction(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xf6810  1148  ?execExecuteCommandFromAction@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_101ff3f9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GL2Console_exref;
  puVar3 = FString::operator*(local_28);
  (**(code **)(iVar2 + 0x73c))(puVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100f68e1 Catch@100f68e1

void Catch_100f68e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f68f5 Catch@100f68f5

void Catch_100f68f5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execExecuteCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6920 UUIScript::execDoAction

/* public: void __thiscall UUIScript::execDoAction(struct FFrame &,void * const) */

void __thiscall UUIScript::execDoAction(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf6920  1138  ?execDoAction@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff420;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10170860(local_18,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 100f69cd Catch@100f69cd

void Catch_100f69cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f69e1 Catch@100f69e1

void Catch_100f69e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execDoAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6a00 UUIScript::execIsStackableItem

/* public: void __thiscall UUIScript::execIsStackableItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsStackableItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf6a00  1506  ?execIsStackableItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff440;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (((local_18 == 1) || (local_18 == 2)) || (local_18 == 3)) {
    *(undefined4 *)param_2 = 1;
  }
  else {
    *(undefined4 *)param_2 = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 100f6ac0 Catch@100f6ac0

void Catch_100f6ac0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f6ad4 Catch@100f6ad4

void Catch_100f6ad4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsStackableItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6b00 UUIScript::execSetOptionBool

/* public: void __thiscall UUIScript::execSetOptionBool(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetOptionBool(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_80 [4];
  undefined4 uStack_7c;
  FString aFStack_74 [4];
  undefined4 uStack_70;
  FFrame *pFStack_6c;
  undefined4 uStack_68;
  FFrame *pFStack_64;
  undefined4 *puStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf6b00  1768  ?execSetOptionBool@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff484;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_50 = (FString *)0x100f6b39;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_3c;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x100f6b5e;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_58 = (FString *)0x100f6b67;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_58 = local_30;
  pFStack_5c = param_1;
  puStack_60 = (undefined4 *)0x100f6b89;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_60 = &local_18;
  pFStack_64 = param_1;
  uStack_68 = 0x100f6baa;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_68 = 0;
    pFStack_6c = param_1;
    uStack_70 = 0x100f6bce;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_68 = local_18;
  uStack_7c = 0x100f6be4;
  FString::FString(aFStack_74,local_30);
  local_8._0_1_ = 3;
  local_20 = aFStack_80;
  FString::FString(aFStack_80,local_3c);
  local_8._0_1_ = 2;
  FUN_10041d80();
  local_8._0_1_ = 1;
  uStack_68 = 0x100f6c20;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_68 = 0x100f6c2c;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 100f6c47 Catch@100f6c47

void Catch_100f6c47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f6c5b Catch@100f6c5b

void Catch_100f6c5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetOptionBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6c80 UUIScript::execSetOptionInt

/* public: void __thiscall UUIScript::execSetOptionInt(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetOptionInt(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_80 [4];
  undefined4 uStack_7c;
  FString aFStack_74 [4];
  undefined4 uStack_70;
  FFrame *pFStack_6c;
  undefined4 uStack_68;
  FFrame *pFStack_64;
  undefined4 *puStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf6c80  1770  ?execSetOptionInt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff4c4;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_50 = (FString *)0x100f6cb9;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_3c;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x100f6cde;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_58 = (FString *)0x100f6ce7;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_58 = local_30;
  pFStack_5c = param_1;
  puStack_60 = (undefined4 *)0x100f6d09;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_60 = &local_18;
  pFStack_64 = param_1;
  uStack_68 = 0x100f6d2a;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_68 = 0;
    pFStack_6c = param_1;
    uStack_70 = 0x100f6d4e;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_68 = local_18;
  uStack_7c = 0x100f6d64;
  FString::FString(aFStack_74,local_30);
  local_8._0_1_ = 3;
  local_20 = aFStack_80;
  FString::FString(aFStack_80,local_3c);
  local_8._0_1_ = 2;
  FUN_100428c0();
  local_8._0_1_ = 1;
  uStack_68 = 0x100f6da0;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_68 = 0x100f6dac;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 100f6dc7 Catch@100f6dc7

void Catch_100f6dc7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f6ddb Catch@100f6ddb

void Catch_100f6ddb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetOptionInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6e00 UUIScript::execSetOptionFloat

/* public: void __thiscall UUIScript::execSetOptionFloat(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetOptionFloat(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_80 [4];
  undefined4 uStack_7c;
  FString aFStack_74 [4];
  undefined4 uStack_70;
  FFrame *pFStack_6c;
  undefined4 uStack_68;
  FFrame *pFStack_64;
  undefined4 *puStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf6e00  1769  ?execSetOptionFloat@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff504;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_50 = (FString *)0x100f6e3c;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_3c;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x100f6e64;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_58 = (FString *)0x100f6e6d;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_58 = local_30;
  pFStack_5c = param_1;
  puStack_60 = (undefined4 *)0x100f6e8e;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_60 = &local_18;
  pFStack_64 = param_1;
  uStack_68 = 0x100f6eb0;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_68 = 0;
    pFStack_6c = param_1;
    uStack_70 = 0x100f6ed3;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_68 = local_18;
  uStack_7c = 0x100f6eec;
  FString::FString(aFStack_74,local_30);
  local_8._0_1_ = 3;
  local_20 = aFStack_80;
  FString::FString(aFStack_80,local_3c);
  local_8._0_1_ = 2;
  FUN_10041e90();
  local_8._0_1_ = 1;
  uStack_68 = 0x100f6f26;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_68 = 0x100f6f33;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 100f6f4f Catch@100f6f4f

void Catch_100f6f4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f6f63 Catch@100f6f63

void Catch_100f6f63(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetOptionFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f6f80 UUIScript::execSetOptionString

/* public: void __thiscall UUIScript::execSetOptionString(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetOptionString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_94 [4];
  undefined4 uStack_90;
  FString aFStack_88 [4];
  undefined4 uStack_84;
  FString aFStack_7c [8];
  undefined4 uStack_74;
  FFrame *pFStack_70;
  FString *pFStack_6c;
  FFrame *pFStack_68;
  FString *pFStack_64;
  FFrame *pFStack_60;
  FString *pFStack_5c;
  uint uStack_58;
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf6f80  1771  ?execSetOptionString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff556;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_5c = (FString *)0x100f6fbb;
  FString::FString(local_48);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_5c = local_48;
  pFStack_60 = param_1;
  pFStack_64 = (FString *)0x100f6fe0;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_64 = (FString *)0x100f6fe9;
  FString::FString(local_3c);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_64 = local_3c;
  pFStack_68 = param_1;
  pFStack_6c = (FString *)0x100f700b;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_6c = (FString *)0x100f7014;
  FString::FString(local_30);
  local_8._0_1_ = 3;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_6c = local_30;
  pFStack_70 = param_1;
  uStack_74 = 0x100f7037;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_84 = 0x100f7049;
  FString::FString(aFStack_7c,local_30);
  local_8._0_1_ = 4;
  local_1c = aFStack_88;
  uStack_90 = 0x100f705f;
  FString::FString(aFStack_88,local_3c);
  local_8._0_1_ = 5;
  local_20 = aFStack_94;
  FString::FString(aFStack_94,local_48);
  local_8._0_1_ = 3;
  FUN_10041fb0();
  local_8._0_1_ = 2;
  uStack_74 = 0x100f709a;
  FString::~FString(local_30);
  local_8._0_1_ = 1;
  uStack_74 = 0x100f70a7;
  FString::~FString(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_74 = 0x100f70b4;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 100f70cf Catch@100f70cf

void Catch_100f70cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f70e3 Catch@100f70e3

void Catch_100f70e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetOptionString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7100 UUIScript::execGetOptionBool

/* public: void __thiscall UUIScript::execGetOptionBool(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetOptionBool(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_78 [4];
  undefined4 uStack_74;
  FString aFStack_6c [4];
  undefined4 uStack_68;
  FFrame *pFStack_64;
  undefined4 *puStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf7100  1277  ?execGetOptionBool@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff5a4;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_50 = (FString *)0x100f7139;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_3c;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x100f7161;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_58 = (FString *)0x100f716a;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_58 = local_30;
  pFStack_5c = param_1;
  puStack_60 = (undefined4 *)0x100f718b;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    puStack_60 = (undefined4 *)0x0;
    pFStack_64 = param_1;
    uStack_68 = 0x100f71ad;
    (**(code **)(GNatives_exref + 0x108))();
  }
  local_18 = 0;
  puStack_60 = &local_18;
  uStack_74 = 0x100f71c6;
  FString::FString(aFStack_6c,local_30);
  local_8._0_1_ = 3;
  local_20 = aFStack_78;
  FString::FString(aFStack_78,local_3c);
  local_8._0_1_ = 2;
  FUN_10042370();
  *(undefined4 *)param_2 = local_18;
  local_8._0_1_ = 1;
  puStack_60 = (undefined4 *)0x100f7209;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_60 = (undefined4 *)0x100f7216;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 100f7231 Catch@100f7231

void Catch_100f7231(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f7245 Catch@100f7245

void Catch_100f7245(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetOptionBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7270 UUIScript::execGetOptionInt

/* public: void __thiscall UUIScript::execGetOptionInt(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetOptionInt(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_78 [4];
  undefined4 uStack_74;
  FString aFStack_6c [4];
  undefined4 uStack_68;
  FFrame *pFStack_64;
  undefined4 *puStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf7270  1280  ?execGetOptionInt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff5e4;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_50 = (FString *)0x100f72a9;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_3c;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x100f72d1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_58 = (FString *)0x100f72da;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_58 = local_30;
  pFStack_5c = param_1;
  puStack_60 = (undefined4 *)0x100f72fb;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    puStack_60 = (undefined4 *)0x0;
    pFStack_64 = param_1;
    uStack_68 = 0x100f731d;
    (**(code **)(GNatives_exref + 0x108))();
  }
  local_18 = 0;
  puStack_60 = &local_18;
  uStack_74 = 0x100f7336;
  FString::FString(aFStack_6c,local_30);
  local_8._0_1_ = 3;
  local_20 = aFStack_78;
  FString::FString(aFStack_78,local_3c);
  local_8._0_1_ = 2;
  FUN_100424c0();
  *(undefined4 *)param_2 = local_18;
  local_8._0_1_ = 1;
  puStack_60 = (undefined4 *)0x100f7379;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_60 = (undefined4 *)0x100f7386;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 100f73a1 Catch@100f73a1

void Catch_100f73a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f73b5 Catch@100f73b5

void Catch_100f73b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetOptionInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f73e0 UUIScript::execGetOptionFloat

/* public: void __thiscall UUIScript::execGetOptionFloat(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetOptionFloat(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_78 [4];
  undefined4 uStack_74;
  FString aFStack_6c [4];
  undefined4 uStack_68;
  FFrame *pFStack_64;
  undefined4 *puStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [16];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf73e0  1279  ?execGetOptionFloat@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff624;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_50 = (FString *)0x100f741c;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_3c;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x100f7444;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_58 = (FString *)0x100f744d;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_58 = local_30;
  pFStack_5c = param_1;
  puStack_60 = (undefined4 *)0x100f746e;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    puStack_60 = (undefined4 *)0x0;
    pFStack_64 = param_1;
    uStack_68 = 0x100f7491;
    (**(code **)(GNatives_exref + 0x108))();
  }
  local_18 = 0;
  puStack_60 = &local_18;
  uStack_74 = 0x100f74ac;
  FString::FString(aFStack_6c,local_30);
  local_8._0_1_ = 3;
  local_20 = aFStack_78;
  FString::FString(aFStack_78,local_3c);
  local_8._0_1_ = 2;
  FUN_10042610();
  *(undefined4 *)param_2 = local_18;
  local_8._0_1_ = 1;
  puStack_60 = (undefined4 *)0x100f74ef;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_60 = (undefined4 *)0x100f74fc;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 100f7518 Catch@100f7518

void Catch_100f7518(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f752c Catch@100f752c

void Catch_100f752c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetOptionFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7550 UUIScript::execGetOptionString

/* public: void __thiscall UUIScript::execGetOptionString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetOptionString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_880 [4];
  undefined4 uStack_87c;
  FString aFStack_874 [8];
  undefined4 uStack_86c;
  uint uStack_850;
  FString local_834 [12];
  FString local_828 [16];
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  int local_80c;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0xf7550  1281  ?execGetOptionString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_810 = &LAB_101ff664;
  local_814 = ExceptionList;
  uStack_850 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_850;
  ExceptionList = &local_814;
  local_80c = 0;
  local_8 = uStack_850;
  FString::FString(local_834);
  local_80c._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  FString::FString(local_828);
  local_80c = CONCAT31(local_80c._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_86c = 0x100f761a;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_86c = 0x100f7629;
  appStrcpy(local_808,(ushort *)&DAT_1022f9f8);
  uStack_87c = 0x100f7647;
  FString::FString(aFStack_874,local_828);
  local_80c._0_1_ = 3;
  FString::FString(aFStack_880,local_834);
  local_80c._0_1_ = 2;
  FUN_10042760();
  FString::operator=(param_2,local_808);
  local_80c._0_1_ = 1;
  FString::~FString(local_828);
  local_80c = (uint)local_80c._1_3_ << 8;
  FString::~FString(local_834);
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 100f76c9 Catch@100f76c9

void Catch_100f76c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f76dd Catch@100f76dd

void Catch_100f76dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetOptionString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7700 UUIScript::execGetConstantInt

/* public: void __thiscall UUIScript::execGetConstantInt(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetConstantInt(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  FFrame **ppFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0xf7700  1180  ?execGetConstantInt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff690;
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
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    ppFVar4 = &param_1;
  }
  else {
    ppFVar4 = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    *(undefined4 *)param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  uVar3 = FUN_1000bac0(local_18,ppFVar4);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 100f7823 Catch@100f7823

void Catch_100f7823(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f7837 Catch@100f7837

void Catch_100f7837(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetConstantInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7860 UUIScript::execGetConstantString

/* public: void __thiscall UUIScript::execGetConstantString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetConstantString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xf7860  1181  ?execGetConstantString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff6b9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_2c;
  }
  else {
    pFVar3 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    *(undefined4 *)param_2 = 0;
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_2c);
    ExceptionList = local_10;
    return;
  }
  uVar2 = FUN_1000bb70(local_18,pFVar3);
  *(undefined4 *)param_2 = uVar2;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100f79a5 Catch@100f79a5

void Catch_100f79a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f79b9 Catch@100f79b9

void Catch_100f79b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetConstantString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f79e0 UUIScript::execGetConstantBool

/* public: void __thiscall UUIScript::execGetConstantBool(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetConstantBool(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  FFrame **ppFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0xf79e0  1178  ?execGetConstantBool@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff6e0;
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
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    ppFVar4 = &param_1;
  }
  else {
    ppFVar4 = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    *(undefined4 *)param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  uVar3 = FUN_1000bc20(local_18,ppFVar4);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 100f7b03 Catch@100f7b03

void Catch_100f7b03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f7b17 Catch@100f7b17

void Catch_100f7b17(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetConstantBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7b40 UUIScript::execGetConstantFloat

/* public: void __thiscall UUIScript::execGetConstantFloat(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetConstantFloat(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  FFrame **ppFVar4;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0xf7b40  1179  ?execGetConstantFloat@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff700;
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
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    ppFVar4 = &param_1;
  }
  else {
    ppFVar4 = *(FFrame ***)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (*(int *)(DAT_103663bc + 0x5068) == 0) {
    *(undefined4 *)param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  uVar3 = FUN_1000bcd0(local_18,ppFVar4);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 100f7c7a Catch@100f7c7a

void Catch_100f7c7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f7c8e Catch@100f7c8e

void Catch_100f7c8e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetConstantFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7cb0 UUIScript::execSetSoundVolume

/* public: void __thiscall UUIScript::execSetSoundVolume(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetSoundVolume(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf7cb0  1801  ?execSetSoundVolume@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff720;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0x94))(local_18);
    if (local_18 == 0.0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0x88))(0,0);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100f7d97 Catch@100f7d97

void Catch_100f7d97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f7dab Catch@100f7dab

void Catch_100f7dab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetSoundVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7dd0 UUIScript::execSetMusicVolume

/* public: void __thiscall UUIScript::execSetMusicVolume(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetMusicVolume(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf7dd0  1761  ?execSetMusicVolume@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff740;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0x9c))(local_18);
    if (local_18 == 0.0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xd8))(0,0);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100f7ebb Catch@100f7ebb

void Catch_100f7ebb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f7ecf Catch@100f7ecf

void Catch_100f7ecf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetMusicVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f7ef0 UUIScript::execSetWavVoiceVolume

/* public: void __thiscall UUIScript::execSetWavVoiceVolume(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetWavVoiceVolume(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf7ef0  1840  ?execSetWavVoiceVolume@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff760;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xa4))(local_18);
    if (local_18 == 0.0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(0,0);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100f7fdb Catch@100f7fdb

void Catch_100f7fdb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f7fef Catch@100f7fef

void Catch_100f7fef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetWavVoiceVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f8010 UUIScript::execSetOggVoiceVolume

/* public: void __thiscall UUIScript::execSetOggVoiceVolume(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetOggVoiceVolume(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf8010  1767  ?execSetOggVoiceVolume@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff780;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0) {
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xa0))(local_18);
    if (local_18 == 0.0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x58) + 0xe0))(0,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100f80fb Catch@100f80fb

void Catch_100f80fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f810f Catch@100f810f

void Catch_100f810f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetOggVoiceVolume");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f8130 UUIScript::execRequestExit

/* public: void __thiscall UUIScript::execRequestExit(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestExit(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf8130  1620  ?execRequestExit@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff7a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  appRequestExit(0);
  ExceptionList = local_10;
  return;
}


// ==== 100f81b0 Catch@100f81b0

void Catch_100f81b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f81c4 Catch@100f81c4

void Catch_100f81c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f81f0 UUIScript::execRequestSelfTarget

/* public: void __thiscall UUIScript::execRequestSelfTarget(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestSelfTarget(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf81f0  1679  ?execRequestSelfTarget@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff7c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1014c600();
  ExceptionList = local_10;
  return;
}


// ==== 100f8270 Catch@100f8270

void Catch_100f8270(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f8284 Catch@100f8284

void Catch_100f8284(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestSelfTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f82b0 UUIScript::execRequestTargetCancel

/* public: void __thiscall UUIScript::execRequestTargetCancel(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestTargetCancel(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf82b0  1688  ?execRequestTargetCancel@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff7e9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,(void *)0x1);
  FUN_101440b0(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100f835c Catch@100f835c

void Catch_100f835c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f8370 Catch@100f8370

void Catch_100f8370(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestTargetCancel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f8390 UUIScript::execRequestAttack

/* public: void __thiscall UUIScript::execRequestAttack(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestAttack(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf8390  1568  ?execRequestAttack@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff810;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1014ca10(local_18,local_2c,local_28,local_24,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 100f8471 Catch@100f8471

void Catch_100f8471(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f8485 Catch@100f8485

void Catch_100f8485(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestAttack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f84b0 UUIScript::execRequestAction

/* public: void __thiscall UUIScript::execRequestAction(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestAction(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf84b0  1563  ?execRequestAction@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff830;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1014c9b0(local_18,local_2c,local_28,local_24);
  ExceptionList = local_10;
  return;
}


// ==== 100f858d Catch@100f858d

void Catch_100f858d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f85a1 Catch@100f85a1

void Catch_100f85a1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f85c0 UUIScript::execRequestAssist

/* public: void __thiscall UUIScript::execRequestAssist(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestAssist(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf85c0  1567  ?execRequestAssist@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff850;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1014c870(local_18,local_2c,local_28,local_24);
  ExceptionList = local_10;
  return;
}


// ==== 100f869d Catch@100f869d

void Catch_100f869d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f86b1 Catch@100f86b1

void Catch_100f86b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestAssist");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f86d0 UUIScript::execRequestTargetUser

/* public: void __thiscall UUIScript::execRequestTargetUser(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestTargetUser(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf86d0  1689  ?execRequestTargetUser@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff870;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1014c6a0(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 100f8779 Catch@100f8779

void Catch_100f8779(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f878d Catch@100f878d

void Catch_100f878d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestTargetUser");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f87b0 UUIScript::execRequestWarehouseDeposit

/* public: void __thiscall UUIScript::execRequestWarehouseDeposit(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestWarehouseDeposit(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_7c;
  L2ParamStack local_6c [16];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [32];
  int local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf87b0  1695  ?execRequestWarehouseDeposit@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_101ff8c5;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_44);
  local_8._0_1_ = 2;
  FString::FString(local_50,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 3;
  FUN_100404d0(local_50,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_50);
  L2ParamStack::L2ParamStack(local_6c,(int)local_18 * 2 + 1);
  local_8 = CONCAT31(local_8._1_3_,4);
  L2ParamStack::PushBack(local_6c,local_18);
  local_24 = 0;
  while (iVar2 = local_24, local_24 < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_50,L"dbID%d",local_24);
    local_8._0_1_ = 5;
    FUN_100404d0(uVar3,&local_1c);
    local_8._0_1_ = 4;
    FString::~FString(local_50);
    uVar3 = FString::Printf((ushort *)local_5c,L"count%d",iVar2);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8 = CONCAT31(local_8._1_3_,4);
    FString::~FString(local_5c);
    L2ParamStack::PushBack(local_6c,local_1c);
    L2ParamStack::PushBack(local_6c,local_20);
    local_24 = iVar2 + 1;
  }
  FUN_10143580(local_6c);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_6c);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100f896c Catch@100f896c

void Catch_100f896c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100f8980 Catch@100f8980

void Catch_100f8980(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestWarehouseDeposit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f89a0 UUIScript::execRequestWarehouseWithdraw

/* public: void __thiscall UUIScript::execRequestWarehouseWithdraw(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestWarehouseWithdraw(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_7c;
  L2ParamStack local_6c [16];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [32];
  int local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf89a0  1696  ?execRequestWarehouseWithdraw@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_101ff915;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_44);
  local_8._0_1_ = 2;
  FString::FString(local_50,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 3;
  FUN_100404d0(local_50,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_50);
  L2ParamStack::L2ParamStack(local_6c,(int)local_18 * 2 + 1);
  local_8 = CONCAT31(local_8._1_3_,4);
  L2ParamStack::PushBack(local_6c,local_18);
  local_24 = 0;
  while (iVar2 = local_24, local_24 < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_50,L"dbID%d",local_24);
    local_8._0_1_ = 5;
    FUN_100404d0(uVar3,&local_1c);
    local_8._0_1_ = 4;
    FString::~FString(local_50);
    uVar3 = FString::Printf((ushort *)local_5c,L"count%d",iVar2);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8 = CONCAT31(local_8._1_3_,4);
    FString::~FString(local_5c);
    L2ParamStack::PushBack(local_6c,local_1c);
    L2ParamStack::PushBack(local_6c,local_20);
    local_24 = iVar2 + 1;
  }
  FUN_10143590(local_6c);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_6c);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100f8b5c Catch@100f8b5c

void Catch_100f8b5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100f8b70 Catch@100f8b70

void Catch_100f8b70(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestWarehouseWithdraw");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f8b90 UUIScript::execRequestPackageSendableItemList

/* public: void __thiscall UUIScript::execRequestPackageSendableItemList(struct FFrame &,void *
   const) */

void __thiscall
UUIScript::execRequestPackageSendableItemList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf8b90  1649
                       ?execRequestPackageSendableItemList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff939;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_30,1);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  (**(code **)(*DAT_103663bc + 0x4b4))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 100f8c5f Catch@100f8c5f

void Catch_100f8c5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f8c73 Catch@100f8c73

void Catch_100f8c73(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestPackageSendableItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f8c90 UUIScript::execRequestPackageSend

/* public: void __thiscall UUIScript::execRequestPackageSend(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestPackageSend(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_80;
  L2ParamStack local_70 [16];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [32];
  int local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf8c90  1648  ?execRequestPackageSend@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff99e;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_48);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_48);
  local_8._0_1_ = 2;
  FString::FString(local_54,(ushort *)L"targetID");
  local_8._0_1_ = 3;
  FUN_100404d0(local_54,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  FString::FString(local_54,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 4;
  FUN_100404d0(local_54,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  L2ParamStack::L2ParamStack(local_70,(int)local_18 * 2 + 2);
  local_8 = CONCAT31(local_8._1_3_,5);
  L2ParamStack::PushBack(local_70,local_1c);
  L2ParamStack::PushBack(local_70,local_18);
  local_28 = 0;
  while (iVar2 = local_28, local_28 < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_54,L"dbID%d",local_28);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8._0_1_ = 5;
    FString::~FString(local_54);
    uVar3 = FString::Printf((ushort *)local_60,L"count%d",iVar2);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8 = CONCAT31(local_8._1_3_,5);
    FString::~FString(local_60);
    L2ParamStack::PushBack(local_70,local_20);
    L2ParamStack::PushBack(local_70,local_24);
    local_28 = iVar2 + 1;
  }
  (**(code **)(*DAT_103663bc + 0x4b0))(local_70);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_70);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 100f8e84 Catch@100f8e84

void Catch_100f8e84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100f8e98 Catch@100f8e98

void Catch_100f8e98(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestPackageSend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f8ec0 UUIScript::execRequestPreviewItem

/* public: void __thiscall UUIScript::execRequestPreviewItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestPreviewItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_74;
  L2ParamStack local_64 [16];
  FString local_54 [12];
  FString local_48 [32];
  int local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf8ec0  1658  ?execRequestPreviewItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff9fe;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_48);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_48);
  local_8._0_1_ = 2;
  FString::FString(local_54,(ushort *)L"merchant");
  local_8._0_1_ = 3;
  FUN_100404d0(local_54,&local_20);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  FString::FString(local_54,(ushort *)&DAT_1026ce24);
  local_8._0_1_ = 4;
  FUN_100404d0(local_54,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  FString::FString(local_54,(ushort *)&DAT_1026c428);
  local_8._0_1_ = 5;
  FUN_100404d0(local_54,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_54);
  L2ParamStack::L2ParamStack(local_64,(int)local_18 + 3);
  local_8 = CONCAT31(local_8._1_3_,6);
  L2ParamStack::PushBack(local_64,local_1c);
  L2ParamStack::PushBack(local_64,local_20);
  L2ParamStack::PushBack(local_64,local_18);
  local_28 = 0;
  while (iVar2 = local_28, local_28 < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_54,L"classID%d",local_28);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8 = CONCAT31(local_8._1_3_,6);
    FString::~FString(local_54);
    L2ParamStack::PushBack(local_64,local_24);
    local_28 = iVar2 + 1;
  }
  FUN_101434f0(local_64);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_64);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 100f90b3 Catch@100f90b3

void Catch_100f90b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 100f90c7 Catch@100f90c7

void Catch_100f90c7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestPreviewItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f90f0 UUIScript::execRequestBBSBoard

/* public: void __thiscall UUIScript::execRequestBBSBoard(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestBBSBoard(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf90f0  1570  ?execRequestBBSBoard@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffa29;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  FUN_10144b50(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100f9192 Catch@100f9192

void Catch_100f9192(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f91a6 Catch@100f91a6

void Catch_100f91a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestBBSBoard");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f91d0 UUIScript::execRequestQuitPrivateShop

/* public: void __thiscall UUIScript::execRequestQuitPrivateShop(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestQuitPrivateShop(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf91d0  1662  ?execRequestQuitPrivateShop@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffa6b;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_34,"buy");
  local_8._0_1_ = 2;
  iVar2 = FString::operator==(local_28,local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  if (iVar2 == 0) {
    FString::FString(local_34,"sell");
    local_8._0_1_ = 3;
    iVar2 = FString::operator==(local_28,local_34);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    if (iVar2 != 0) {
      FUN_10145260();
    }
  }
  else {
    FUN_101452b0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100f92f8 Catch@100f92f8

void Catch_100f92f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f930c Catch@100f930c

void Catch_100f930c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestQuitPrivateShop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f9330 UUIScript::execSendPrivateShopList

/* public: void __thiscall UUIScript::execSendPrivateShopList(struct FFrame &,void * const) */

void __thiscall UUIScript::execSendPrivateShopList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uStack_d4;
  FString local_c0 [12];
  FString local_b4 [12];
  FString local_a8 [12];
  FString local_9c [12];
  int local_90;
  int local_8c;
  FString local_88 [12];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  int local_70;
  int local_6c;
  int local_68;
  FString local_64 [16];
  FString local_54 [12];
  void *local_48;
  void *local_44;
  FString local_40 [12];
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  L2ParamStack local_24 [28];
  void *local_8;
  
                    /* 0xf9330  1708  ?execSendPrivateShopList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_74 = &LAB_101ffb70;
  local_78 = ExceptionList;
  uStack_d4 = DAT_103554c4 ^ (uint)&local_6c;
  local_7c = (undefined1 *)&uStack_d4;
  ExceptionList = &local_78;
  iVar5 = 0;
  local_70 = 0;
  FString::FString(local_54);
  pFVar2 = param_1;
  local_70._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_54);
  FString::FString(local_b4);
  local_70 = CONCAT31(local_70._1_3_,2);
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_b4);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  FUN_1003fa00(local_b4);
  local_70._0_1_ = 3;
  FString::FString(local_40,(ushort *)&DAT_1026c428);
  local_70._0_1_ = 4;
  FUN_100404d0(local_40,&local_8);
  local_70._0_1_ = 3;
  FString::~FString(local_40);
  L2ParamStack::L2ParamStack(local_24,(int)local_8 * 5 + 10);
  local_70._0_1_ = 5;
  iVar3 = FString::operator==(local_54,(ushort *)&DAT_1026cfa0);
  if (iVar3 == 0) {
    iVar3 = FString::operator==(local_54,(ushort *)L"buyList");
    if (iVar3 == 0) {
      iVar3 = FString::operator==(local_54,(ushort *)L"sell");
      if (iVar3 == 0) {
        iVar3 = FString::operator==(local_54,(ushort *)L"sellList");
        if (iVar3 != 0) {
          FString::FString(local_40,(ushort *)L"bulk");
          local_70._0_1_ = 0x16;
          FUN_100404d0(local_40,&param_1);
          local_70._0_1_ = 5;
          FString::~FString(local_40);
          L2ParamStack::PushBack(local_24,param_1);
          L2ParamStack::PushBack(local_24,local_8);
          for (; local_90 = iVar5, iVar5 < (int)local_8; iVar5 = iVar5 + 1) {
            uVar4 = FString::Printf((ushort *)local_c0,L"serverID%d",iVar5);
            local_70._0_1_ = 0x17;
            FUN_100404d0(uVar4,&local_48);
            local_70._0_1_ = 5;
            FString::~FString(local_c0);
            uVar4 = FString::Printf((ushort *)local_9c,L"count%d",iVar5);
            local_70._0_1_ = 0x18;
            FUN_100404d0(uVar4,&local_44);
            local_70._0_1_ = 5;
            FString::~FString(local_9c);
            uVar4 = FString::Printf((ushort *)local_a8,L"price%d",iVar5);
            local_70._0_1_ = 0x19;
            FUN_100404d0(uVar4,&local_34);
            local_70._0_1_ = 5;
            FString::~FString(local_a8);
            L2ParamStack::PushBack(local_24,local_48);
            L2ParamStack::PushBack(local_24,local_44);
            L2ParamStack::PushBack(local_24,local_34);
          }
          FUN_10145250(local_24);
        }
      }
      else {
        FString::FString(local_40,(ushort *)L"merchantID");
        local_70._0_1_ = 0xf;
        FUN_100404d0(local_40,&param_1);
        local_70._0_1_ = 5;
        FString::~FString(local_40);
        L2ParamStack::PushBack(local_24,param_1);
        L2ParamStack::PushBack(local_24,local_8);
        for (iVar5 = 0; local_8c = iVar5, iVar5 < (int)local_8; iVar5 = iVar5 + 1) {
          uVar4 = FString::Printf((ushort *)local_9c,L"serverID%d",iVar5);
          local_70._0_1_ = 0x10;
          FUN_100404d0(uVar4,&local_34);
          local_70._0_1_ = 5;
          FString::~FString(local_9c);
          uVar4 = FString::Printf((ushort *)local_a8,L"classID%d",iVar5);
          local_70._0_1_ = 0x11;
          FUN_100404d0(uVar4,&local_28);
          local_70._0_1_ = 5;
          FString::~FString(local_a8);
          uVar4 = FString::Printf((ushort *)local_88,L"enchanted%d",iVar5);
          local_70._0_1_ = 0x12;
          FUN_100404d0(uVar4,&local_30);
          local_70._0_1_ = 5;
          FString::~FString(local_88);
          uVar4 = FString::Printf((ushort *)local_64,L"damaged%d",iVar5);
          local_70._0_1_ = 0x13;
          FUN_100404d0(uVar4,&local_2c);
          local_70._0_1_ = 5;
          FString::~FString(local_64);
          uVar4 = FString::Printf((ushort *)local_40,L"count%d",iVar5);
          local_70._0_1_ = 0x14;
          FUN_100404d0(uVar4,&local_44);
          local_70._0_1_ = 5;
          FString::~FString(local_40);
          uVar4 = FString::Printf((ushort *)local_c0,L"price%d",iVar5);
          local_70._0_1_ = 0x15;
          FUN_100404d0(uVar4,&local_48);
          local_70._0_1_ = 5;
          FString::~FString(local_c0);
          L2ParamStack::PushBack(local_24,local_34);
          L2ParamStack::PushBack(local_24,local_28);
          L2ParamStack::PushBack(local_24,local_30);
          L2ParamStack::PushBack(local_24,local_2c);
          L2ParamStack::PushBack(local_24,local_44);
          L2ParamStack::PushBack(local_24,local_48);
        }
        FUN_101452d0(local_24);
      }
    }
    else {
      L2ParamStack::PushBack(local_24,local_8);
      for (iVar5 = 0; local_68 = iVar5, iVar5 < (int)local_8; iVar5 = iVar5 + 1) {
        uVar4 = FString::Printf((ushort *)local_88,L"classID%d",iVar5);
        local_70._0_1_ = 10;
        FUN_100404d0(uVar4,&param_1);
        local_70._0_1_ = 5;
        FString::~FString(local_88);
        uVar4 = FString::Printf((ushort *)local_64,L"enchanted%d",iVar5);
        local_70._0_1_ = 0xb;
        FUN_100404d0(uVar4,&local_28);
        local_70._0_1_ = 5;
        FString::~FString(local_64);
        uVar4 = FString::Printf((ushort *)local_40,L"damaged%d",iVar5);
        local_70._0_1_ = 0xc;
        FUN_100404d0(uVar4,&local_30);
        local_70._0_1_ = 5;
        FString::~FString(local_40);
        uVar4 = FString::Printf((ushort *)local_a8,L"count%d",iVar5);
        local_70._0_1_ = 0xd;
        FUN_100404d0(uVar4,&local_2c);
        local_70._0_1_ = 5;
        FString::~FString(local_a8);
        uVar4 = FString::Printf((ushort *)local_9c,L"price%d",iVar5);
        local_70._0_1_ = 0xe;
        FUN_100404d0(uVar4,&local_34);
        local_70._0_1_ = 5;
        FString::~FString(local_9c);
        L2ParamStack::PushBack(local_24,param_1);
        L2ParamStack::PushBack(local_24,local_28);
        L2ParamStack::PushBack(local_24,local_30);
        L2ParamStack::PushBack(local_24,local_2c);
        L2ParamStack::PushBack(local_24,local_34);
      }
      FUN_101452a0(local_24);
    }
  }
  else {
    FString::FString(local_40,(ushort *)L"merchantID");
    local_70._0_1_ = 6;
    FUN_100404d0(local_40,&param_1);
    local_70._0_1_ = 5;
    FString::~FString(local_40);
    L2ParamStack::PushBack(local_24,param_1);
    L2ParamStack::PushBack(local_24,local_8);
    for (; local_6c = iVar5, iVar5 < (int)local_8; iVar5 = iVar5 + 1) {
      uVar4 = FString::Printf((ushort *)local_40,L"serverID%d",iVar5);
      local_70._0_1_ = 7;
      FUN_100404d0(uVar4,&local_2c);
      local_70._0_1_ = 5;
      FString::~FString(local_40);
      uVar4 = FString::Printf((ushort *)local_64,L"count%d",iVar5);
      local_70._0_1_ = 8;
      FUN_100404d0(uVar4,&local_30);
      local_70._0_1_ = 5;
      FString::~FString(local_64);
      uVar4 = FString::Printf((ushort *)local_88,L"price%d",iVar5);
      local_70._0_1_ = 9;
      FUN_100404d0(uVar4,&local_28);
      local_70._0_1_ = 5;
      FString::~FString(local_88);
      L2ParamStack::PushBack(local_24,local_2c);
      L2ParamStack::PushBack(local_24,local_30);
      L2ParamStack::PushBack(local_24,local_28);
    }
    FUN_10145280(local_24);
  }
  local_70._0_1_ = 3;
  L2ParamStack::~L2ParamStack(local_24);
  local_70._0_1_ = 2;
  FUN_1003fff0();
  local_70._0_1_ = 1;
  FString::~FString(local_b4);
  local_70 = (uint)local_70._1_3_ << 8;
  FString::~FString(local_54);
  ExceptionList = local_78;
  return;
}


// ==== 100f9a29 Catch@100f9a29

void Catch_100f9a29(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_102a47f0);
}


// ==== 100f9a3d Catch@100f9a3d

void Catch_100f9a3d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSendPrivateShopList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f9a60 UUIScript::execGetSystemString

/* public: void __thiscall UUIScript::execGetSystemString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetSystemString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf9a60  1405  ?execGetSystemString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffb90;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0xc + 0x6a8dc));
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100f9b1d Catch@100f9b1d

void Catch_100f9b1d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f9b31 Catch@100f9b31

void Catch_100f9b31(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetSystemString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f9b50 UUIScript::execGetSystemMessage

/* public: void __thiscall UUIScript::execGetSystemMessage(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetSystemMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf9b50  1403  ?execGetSystemMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffbb0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0x5c + 0x240ec));
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100f9c0d Catch@100f9c0d

void Catch_100f9c0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f9c21 Catch@100f9c21

void Catch_100f9c21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetSystemMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f9c40 UUIScript::execGetResolutionIndex

/* public: void __thiscall UUIScript::execGetResolutionIndex(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetResolutionIndex(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_4e4;
  int local_4d4 [100];
  int local_344 [100];
  int local_1b4 [103];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf9c40  1358  ?execGetResolutionIndex@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffbd0;
  local_10 = ExceptionList;
  uStack_4e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4e4;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_4e4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0x78))
                    (100,local_344,local_1b4,local_4d4);
  iVar3 = 0;
  local_18 = 0;
  while ((iVar4 = -1, iVar3 < iVar2 &&
         (((*(int *)GSEKScreenX_exref != local_344[iVar3] ||
           (*(int *)GSEKScreenY_exref != local_1b4[iVar3])) ||
          (iVar4 = iVar3, *(int *)GColorBits_exref != local_4d4[iVar3]))))) {
    iVar3 = iVar3 + 1;
    local_18 = iVar3;
  }
  *(int *)param_2 = iVar4;
  ExceptionList = local_10;
  return;
}


// ==== 100f9d35 Catch@100f9d35

void Catch_100f9d35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100f9d49 Catch@100f9d49

void Catch_100f9d49(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetResolutionIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f9d70 UUIScript::execGetShaderVersion

/* public: void __thiscall UUIScript::execGetShaderVersion(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetShaderVersion(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 *puVar3;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0xf9d70  1390  ?execGetShaderVersion@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffbf0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = &local_1c;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0xcc))(param_1,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 100f9ea7 Catch@100f9ea7

void Catch_100f9ea7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100f9ebb Catch@100f9ebb

void Catch_100f9ebb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetShaderVersion");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f9ee0 UUIScript::execSetDefaultPosition

/* public: void __thiscall UUIScript::execSetDefaultPosition(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetDefaultPosition(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf9ee0  1724  ?execSetDefaultPosition@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffc10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x64c))();
  ExceptionList = local_10;
  return;
}


// ==== 100f9f65 Catch@100f9f65

void Catch_100f9f65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100f9f79 Catch@100f9f79

void Catch_100f9f79(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetDefaultPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100f9fa0 UUIScript::execSetKeyCrypt

/* public: void __thiscall UUIScript::execSetKeyCrypt(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetKeyCrypt(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf9fa0  1756  ?execSetKeyCrypt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffc30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((*(int *)GL2UseKeyCrypt_exref == 0) || (local_18 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_10135f30(uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100fa06d Catch@100fa06d

void Catch_100fa06d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fa081 Catch@100fa081

void Catch_100fa081(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetKeyCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa0a0 UUIScript::execGetServerAgeLimit

/* public: void __thiscall UUIScript::execGetServerAgeLimit(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetServerAgeLimit(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfa0a0  1379  ?execGetServerAgeLimit@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffc50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_10141130();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 100fa125 Catch@100fa125

void Catch_100fa125(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fa139 Catch@100fa139

void Catch_100fa139(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetServerAgeLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa160 UUIScript::execSetTextureDetail

/* public: void __thiscall UUIScript::execSetTextureDetail(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetTextureDetail(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfa160  1816  ?execSetTextureDetail@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffc70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((local_18 < 3) && (local_18 != *(uint *)GL2TextureDetail_exref)) {
    *(uint *)GL2TextureDetail_exref = local_18;
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0xac))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fa223 Catch@100fa223

void Catch_100fa223(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fa237 Catch@100fa237

void Catch_100fa237(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetTextureDetail");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa260 UUIScript::execSetModelingDetail

/* public: void __thiscall UUIScript::execSetModelingDetail(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetModelingDetail(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfa260  1759  ?execSetModelingDetail@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffc90;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)GL2UseReducePawnLOD_exref = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 100fa305 Catch@100fa305

void Catch_100fa305(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fa319 Catch@100fa319

void Catch_100fa319(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetModelingDetail");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa340 UUIScript::execSetMotionDetail

/* public: void __thiscall UUIScript::execSetMotionDetail(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetMotionDetail(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfa340  1760  ?execSetMotionDetail@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffcb0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)GL2UseSkipAnim_exref = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 100fa3e5 Catch@100fa3e5

void Catch_100fa3e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fa3f9 Catch@100fa3f9

void Catch_100fa3f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetMotionDetail");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa420 UUIScript::execSetShadow

/* public: void __thiscall UUIScript::execSetShadow(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetShadow(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfa420  1798  ?execSetShadow@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffcd0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)GIsL2Projector_exref = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 100fa4c5 Catch@100fa4c5

void Catch_100fa4c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fa4d9 Catch@100fa4d9

void Catch_100fa4d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetShadow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa500 UUIScript::execSetBackgroundEffect

/* public: void __thiscall UUIScript::execSetBackgroundEffect(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetBackgroundEffect(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfa500  1716  ?execSetBackgroundEffect@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffcf0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)GL2RenderDeco_exref = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 100fa5a5 Catch@100fa5a5

void Catch_100fa5a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fa5b9 Catch@100fa5b9

void Catch_100fa5b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetBackgroundEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa5e0 UUIScript::execSetTerrainClippingRange

/* public: void __thiscall UUIScript::execSetTerrainClippingRange(struct FFrame &,void * const) */

void __thiscall
UUIScript::execSetTerrainClippingRange(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_64 [4];
  undefined4 uStack_60;
  FString aFStack_58 [4];
  undefined4 uStack_54;
  FFrame *pFStack_50;
  FFrame *pFStack_4c;
  FFrame *pFStack_48;
  undefined4 *puStack_44;
  uint uStack_40;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfa5e0  1806  ?execSetTerrainClippingRange@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_101ffd58;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_44 = &local_24;
  pFStack_48 = param_1;
  pFStack_4c = (FFrame *)0x100fa635;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    pFStack_4c = (FFrame *)0x0;
    pFStack_50 = param_1;
    uStack_54 = 0x100fa659;
    (**(code **)(GNatives_exref + 0x108))();
  }
  switch(local_24) {
  case 0:
    param_1 = (FFrame *)0x41000000;
    local_1c = 0x40800000;
    local_20 = 0x40c00000;
    break;
  case 1:
    param_1 = (FFrame *)0x40e00000;
    local_1c = 0x40600000;
    local_20 = 0x40b00000;
    break;
  case 2:
    param_1 = (FFrame *)0x40c00000;
    local_1c = 0x40400000;
    local_20 = 0x40a00000;
    break;
  case 3:
    param_1 = (FFrame *)0x40a00000;
    local_1c = 0x40200000;
    local_20 = 0x40900000;
    break;
  case 4:
    param_1 = (FFrame *)0x40800000;
    local_1c = 0x40000000;
    local_20 = 0x40800000;
    break;
  default:
    ExceptionList = local_10;
    return;
  }
  pFStack_4c = param_1;
  uStack_60 = 0x100fa706;
  local_18 = local_20;
  FString::FString(aFStack_58,(ushort *)L"Terrain");
  local_8._0_1_ = 1;
  FString::FString(aFStack_64,(ushort *)L"ClippingRange");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10041e90();
  pFStack_4c = (FFrame *)local_18;
  uStack_60 = 0x100fa74e;
  FString::FString(aFStack_58,(ushort *)L"Actor");
  local_8._0_1_ = 3;
  FString::FString(aFStack_64,(ushort *)L"ClippingRange");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10041e90();
  pFStack_4c = (FFrame *)local_1c;
  uStack_60 = 0x100fa797;
  FString::FString(aFStack_58,(ushort *)L"StaticMesh");
  local_8._0_1_ = 5;
  FString::FString(aFStack_64,(ushort *)L"ClippingRange");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10041e90();
  pFStack_4c = (FFrame *)local_20;
  uStack_60 = 0x100fa7e0;
  FString::FString(aFStack_58,(ushort *)L"StaticMeshLod");
  local_8._0_1_ = 7;
  FString::FString(aFStack_64,(ushort *)L"ClippingRange");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10041e90();
  ExceptionList = local_10;
  return;
}


// ==== 100fa83f Catch@100fa83f

void Catch_100fa83f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 100fa853 Catch@100fa853

void Catch_100fa853(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetTerrainClippingRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fa890 UUIScript::execSetPawnClippingRange

/* public: void __thiscall UUIScript::execSetPawnClippingRange(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetPawnClippingRange(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_58 [4];
  undefined4 uStack_54;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  FFrame *pFStack_44;
  undefined4 uStack_40;
  FFrame *pFStack_3c;
  undefined4 *puStack_38;
  uint uStack_34;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfa890  1774  ?execSetPawnClippingRange@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffd92;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_38 = &local_18;
  pFStack_3c = param_1;
  uStack_40 = 0x100fa8e5;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_40 = 0;
    pFStack_44 = param_1;
    uStack_48 = 0x100fa909;
    (**(code **)(GNatives_exref + 0x108))();
  }
  switch(local_18) {
  case 0:
    uStack_40 = 0x40400000;
    break;
  case 1:
    uStack_40 = 0x40200000;
    break;
  case 2:
    uStack_40 = 0x40000000;
    break;
  case 3:
    uStack_40 = 0x3fc00000;
    break;
  case 4:
    uStack_40 = 0x3f800000;
    break;
  default:
    ExceptionList = local_10;
    return;
  }
  uStack_54 = 0x100fa95b;
  FString::FString(aFStack_4c,(ushort *)L"Pawn");
  local_8._0_1_ = 1;
  FString::FString(aFStack_58,(ushort *)L"ClippingRange");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10041e90();
  ExceptionList = local_10;
  return;
}


// ==== 100fa9ba Catch@100fa9ba

void Catch_100fa9ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fa9ce Catch@100fa9ce

void Catch_100fa9ce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetPawnClippingRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100faa00 UUIScript::execSetReflectionEffect

/* public: void __thiscall UUIScript::execSetReflectionEffect(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetReflectionEffect(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ffdb0;
  local_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)GIsL2WaterEffectType_exref = local_18;
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 100faaa5 Catch@100faaa5

void Catch_100faaa5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100faab9 Catch@100faab9

void Catch_100faab9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetReflectionEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100faae0 UUIScript::execSetHDR

/* public: void __thiscall UUIScript::execSetHDR(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetHDR(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfaae0  1740  ?execSetHDR@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffdd0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (local_18 < 6) {
    *(uint *)GL2PostProcessType_exref = local_18;
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fab8a Catch@100fab8a

void Catch_100fab8a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fab9e Catch@100fab9e

void Catch_100fab9e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetHDR");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fabc0 UUIScript::execSetWeatherEffect

/* public: void __thiscall UUIScript::execSetWeatherEffect(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetWeatherEffect(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfabc0  1841  ?execSetWeatherEffect@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffdf0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)GL2LevelOfWeather_exref = local_18;
  ExceptionList = local_10;
  return;
}


// ==== 100fac65 Catch@100fac65

void Catch_100fac65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fac79 Catch@100fac79

void Catch_100fac79(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetWeatherEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100faca0 UUIScript::execGetMultiSample

/* public: void __thiscall UUIScript::execGetMultiSample(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetMultiSample(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfaca0  1261  ?execGetMultiSample@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffe10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0xd0))();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 100fad2f Catch@100fad2f

void Catch_100fad2f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fad43 Catch@100fad43

void Catch_100fad43(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetMultiSample");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fad60 UUIScript::execCanUseAudio

/* public: void __thiscall UUIScript::execCanUseAudio(struct FFrame &,void * const) */

void __thiscall UUIScript::execCanUseAudio(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfad60  1084  ?execCanUseAudio@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffe30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(uint *)param_2 = (uint)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x58) != 0);
  ExceptionList = local_10;
  return;
}


// ==== 100fadea Catch@100fadea

void Catch_100fadea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fadfe Catch@100fadfe

void Catch_100fadfe(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execCanUseAudio");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fae20 UUIScript::execCanUseJoystick

/* public: void __thiscall UUIScript::execCanUseJoystick(struct FFrame &,void * const) */

void __thiscall UUIScript::execCanUseJoystick(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfae20  1086  ?execCanUseJoystick@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffe50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = *(undefined4 *)GL2CanUseJoystick_exref;
  ExceptionList = local_10;
  return;
}


// ==== 100faea1 Catch@100faea1

void Catch_100faea1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100faeb5 Catch@100faeb5

void Catch_100faeb5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execCanUseJoystick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100faee0 UUIScript::execCanUseHDR

/* public: void __thiscall UUIScript::execCanUseHDR(struct FFrame &,void * const) */

void __thiscall UUIScript::execCanUseHDR(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfaee0  1085  ?execCanUseHDR@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffe70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0xd4))(0x10);
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 100faf71 Catch@100faf71

void Catch_100faf71(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100faf85 Catch@100faf85

void Catch_100faf85(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execCanUseHDR");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fafb0 UUIScript::execIsEnableEngSelection

/* public: void __thiscall UUIScript::execIsEnableEngSelection(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsEnableEngSelection(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfafb0  1479  ?execIsEnableEngSelection@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffe90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = *(undefined4 *)GEnableEngSelection_exref;
  ExceptionList = local_10;
  return;
}


// ==== 100fb031 Catch@100fb031

void Catch_100fb031(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb045 Catch@100fb045

void Catch_100fb045(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsEnableEngSelection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb070 UUIScript::execIsUseKeyCrypt

/* public: void __thiscall UUIScript::execIsUseKeyCrypt(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsUseKeyCrypt(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfb070  1507  ?execIsUseKeyCrypt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffeb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 1;
  ExceptionList = local_10;
  return;
}


// ==== 100fb0ee Catch@100fb0ee

void Catch_100fb0ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb102 Catch@100fb102

void Catch_100fb102(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsUseKeyCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb120 UUIScript::execIsCheckKeyCrypt

/* public: void __thiscall UUIScript::execIsCheckKeyCrypt(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsCheckKeyCrypt(UUIScript *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfb120  1470  ?execIsCheckKeyCrypt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 1;
  if (*(int *)GL2UseKeyCrypt_exref == 0) {
    *(undefined4 *)param_2 = 0;
  }
  iVar1 = FUN_10136210();
  if (iVar1 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fb1c5 Catch@100fb1c5

void Catch_100fb1c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb1d9 Catch@100fb1d9

void Catch_100fb1d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsCheckKeyCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb200 UUIScript::execIsEnableKeyCrypt

/* public: void __thiscall UUIScript::execIsEnableKeyCrypt(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsEnableKeyCrypt(UUIScript *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfb200  1480  ?execIsEnableKeyCrypt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ffef0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 1;
  if (*(int *)GL2UseKeyCrypt_exref == 0) {
    *(undefined4 *)param_2 = 0;
  }
  iVar1 = FUN_101360b0();
  if (iVar1 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fb2a5 Catch@100fb2a5

void Catch_100fb2a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb2b9 Catch@100fb2b9

void Catch_100fb2b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsEnableKeyCrypt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb2e0 UUIScript::execGetLanguage

/* public: void __thiscall UUIScript::execGetLanguage(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetLanguage(UUIScript *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  FFrame *pFVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfb2e0  1244  ?execGetLanguage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101fff10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))
                    (L"LanguageSet",L"Language",&param_1,L"localization.ini");
  pFVar3 = (FFrame *)0x0;
  if (iVar1 != 0) {
    pFVar3 = param_1;
  }
  uVar2 = 0;
  switch(pFVar3) {
  case (FFrame *)0x0:
    uVar2 = 1;
    break;
  case (FFrame *)0x1:
    uVar2 = 2;
    break;
  case (FFrame *)0x2:
    uVar2 = 3;
    break;
  case (FFrame *)0x3:
    uVar2 = 4;
    break;
  case (FFrame *)0x4:
    uVar2 = 5;
    break;
  case (FFrame *)0x5:
    uVar2 = 6;
    break;
  case (FFrame *)0x6:
    uVar2 = 7;
    break;
  default:
    appFailAssert("false",".\\UIScript\\UIScriptNative.cpp",0x65c);
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 100fb3db Catch@100fb3db

void Catch_100fb3db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb3ef Catch@100fb3ef

void Catch_100fb3ef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetLanguage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb430 UUIEventManager::execRegisterState

/* public: void __thiscall UUIEventManager::execRegisterState(struct FFrame &,void * const) */

void __thiscall
UUIEventManager::execRegisterState(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfb430  1559  ?execRegisterState@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101fff4b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(**(int **)GL2Console_exref + 0x77c))(local_28,local_34);
  if (*(int *)GIsOnlyL2Console_exref != 0) {
    FString::FString(local_40,(ushort *)L"DebugState");
    local_8._0_1_ = 3;
    (**(code **)(**(int **)GL2Console_exref + 0x77c))(local_28,local_40);
    local_8 = CONCAT31(local_8._1_3_,2);
    FString::~FString(local_40);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fb570 Catch@100fb570

void Catch_100fb570(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb584 Catch@100fb584

void Catch_100fb584(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execRegisterState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb5b0 UUIEventManager::execSetUIState

/* public: void __thiscall UUIEventManager::execSetUIState(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execSetUIState(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfb5b0  1834  ?execSetUIState@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101fff79;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  (**(code **)(*DAT_103663bc + 0x780))(local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fb673 Catch@100fb673

void Catch_100fb673(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb687 Catch@100fb687

void Catch_100fb687(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execSetUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb6b0 UUIEventManager::execGetUIState

/* public: void __thiscall UUIEventManager::execGetUIState(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execGetUIState(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  FString *this_00;
  ushort *puVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfb6b0  1432  ?execGetUIState@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101fffa9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  if (DAT_103663bc != (int *)0x0) {
    this_00 = (FString *)(**(code **)(*DAT_103663bc + 0x784))(local_28);
    local_8._0_1_ = 1;
    puVar2 = FString::operator*(this_00);
    FString::operator=(param_2,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fb771 Catch@100fb771

void Catch_100fb771(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb785 Catch@100fb785

void Catch_100fb785(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execGetUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb7b0 UUIEventManager::execMessageBox

/* public: void __thiscall UUIEventManager::execMessageBox(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execMessageBox(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uStack_4c;
  FFrame *pFStack_48;
  undefined4 uStack_44;
  FFrame *pFStack_40;
  FString *pFStack_3c;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfb7b0  1525  ?execMessageBox@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101fffe2;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_3c = (FString *)0x100fb7eb;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = local_28;
  pFStack_40 = param_1;
  uStack_44 = 0x100fb813;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  FString::FString((FString *)&uStack_4c,local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1016f040();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_44 = 0;
    pFStack_48 = param_1;
    uStack_4c = 0x100fb85b;
    (**(code **)(GNatives_exref + 0x108))();
  }
  local_8 = local_8 & 0xffffff00;
  uStack_44 = 0x100fb868;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fb883 Catch@100fb883

void Catch_100fb883(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fb897 Catch@100fb897

void Catch_100fb897(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execMessageBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb8c0 UUIEventManager::execSMessageBox

/* public: void __thiscall UUIEventManager::execSMessageBox(struct FFrame &,void * const) */

void __thiscall
UUIEventManager::execSMessageBox(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uStack_44;
  FFrame *pFStack_40;
  undefined4 uStack_3c;
  FFrame *pFStack_38;
  int *piStack_34;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfb8c0  1702  ?execSMessageBox@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200009;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  piStack_34 = &local_18;
  pFStack_38 = param_1;
  uStack_3c = 0x100fb914;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_3c = 0x100fb92d;
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0x5c + 0x240ec));
  FString::FString((FString *)&uStack_44,puVar2);
  local_8 = local_8 & 0xffffff00;
  FUN_1016f040();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_3c = 0;
    pFStack_40 = param_1;
    uStack_44 = 0x100fb973;
    (**(code **)(GNatives_exref + 0x108))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fb98e Catch@100fb98e

void Catch_100fb98e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fb9a2 Catch@100fb9a2

void Catch_100fb9a2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execSMessageBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fb9c0 UUIEventManager::execParseString

/* public: void __thiscall UUIEventManager::execParseString(struct FFrame &,void * const) */

void __thiscall
UUIEventManager::execParseString(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_5c;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfb9c0  1543  ?execParseString@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200053;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_40);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_34);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_28;
  }
  else {
    pFVar3 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_40);
  local_8._0_1_ = 4;
  uVar2 = FUN_100406e0(local_34,pFVar3);
  *(undefined4 *)param_2 = uVar2;
  local_8._0_1_ = 3;
  FUN_1003fff0();
  local_8._0_1_ = 2;
  FString::~FString(local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 100fbb44 Catch@100fbb44

void Catch_100fbb44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fbb58 Catch@100fbb58

void Catch_100fbb58(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execParseString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fbb80 UUIEventManager::execParseInt

/* public: void __thiscall UUIEventManager::execParseInt(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execParseInt(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uStack_54;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfbb80  1542  ?execParseInt@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020008a;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = &local_18;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_38);
  local_8._0_1_ = 3;
  uVar2 = FUN_100404d0(local_2c,puVar3);
  *(undefined4 *)param_2 = uVar2;
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 100fbce4 Catch@100fbce4

void Catch_100fbce4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fbcf8 Catch@100fbcf8

void Catch_100fbcf8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execParseInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fbd20 UUIEventManager::execParseInt64

/* public: void __thiscall UUIEventManager::execParseInt64(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execParseInt64(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_58;
  FString local_3c [12];
  FString local_30 [12];
  undefined1 local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfbd20  1541  ?execParseInt64@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102000ca;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_24);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = local_24;
  }
  else {
    puVar3 = *(undefined1 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_3c);
  local_8._0_1_ = 3;
  uVar2 = FUN_100407b0(local_30,puVar3);
  *(undefined4 *)param_2 = uVar2;
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 100fbe8a Catch@100fbe8a

void Catch_100fbe8a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fbe9e Catch@100fbe9e

void Catch_100fbe9e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execParseInt64");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fbec0 UUIEventManager::execParseFloat

/* public: void __thiscall UUIEventManager::execParseFloat(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execParseFloat(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uStack_54;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfbec0  1540  ?execParseFloat@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020010a;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = &local_18;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_38);
  local_8._0_1_ = 3;
  uVar2 = FUN_100405e0(local_2c,puVar3);
  *(undefined4 *)param_2 = uVar2;
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 100fc031 Catch@100fc031

void Catch_100fc031(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fc045 Catch@100fc045

void Catch_100fc045(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execParseFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc070 UUIScript::execGetExpByPlayerLevel

/* public: void __thiscall UUIScript::execGetExpByPlayerLevel(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetExpByPlayerLevel(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfc070  1197  ?execGetExpByPlayerLevel@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200130;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_100631b0(*(undefined4 *)(L"XMLWindowData::~XMLWindowData" + local_18 * 4 + 0x1a),
               *(undefined4 *)(L"XMLWindowData::~XMLWindowData" + local_18 * 4 + 0x1c),&local_28);
  *(undefined4 *)param_2 = local_28;
  *(undefined4 *)((int)param_2 + 4) = local_24;
  ExceptionList = local_10;
  return;
}


// ==== 100fc137 Catch@100fc137

void Catch_100fc137(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fc14b Catch@100fc14b

void Catch_100fc14b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetExpByPlayerLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc170 UUIScript::execGetAccessoryServerID

/* public: void __thiscall UUIScript::execGetAccessoryServerID(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetAccessoryServerID(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uStack_44;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0xfc170  1155  ?execGetAccessoryServerID@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200150;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_28 = &local_1c;
  }
  else {
    local_28 = *(undefined4 **)GPropAddr_exref;
  }
  local_20 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_20);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_2c = &local_20;
  }
  else {
    local_2c = *(undefined4 **)GPropAddr_exref;
  }
  local_24 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_24);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = &local_24;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_1014dd00();
  if (iVar3 == 0) {
    *(undefined4 *)param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)(iVar3 + 0xa0);
  *local_28 = *(undefined4 *)(iVar3 + 0x9c);
  *local_2c = *(undefined4 *)(iVar3 + 0xac);
  *puVar4 = *(undefined4 *)(iVar3 + 0xa8);
  *(undefined4 *)param_2 = 1;
  ExceptionList = local_10;
  return;
}


// ==== 100fc393 Catch@100fc393

void Catch_100fc393(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 100fc3a7 Catch@100fc3a7

void Catch_100fc3a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetAccessoryServerID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc3d0 UUIScript::execGetClassStep

/* public: void __thiscall UUIScript::execGetClassStep(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetClassStep(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfc3d0  1171  ?execGetClassStep@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200170;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FUN_10146260(local_18);
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 100fc47e Catch@100fc47e

void Catch_100fc47e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fc492 Catch@100fc492

void Catch_100fc492(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetClassStep");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc4b0 UUIScript::execGetClanName

/* public: void __thiscall UUIScript::execGetClanName(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetClanName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfc4b0  1167  ?execGetClanName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200199;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10145a60(local_18);
  if (iVar2 == 0) {
    pFVar3 = (FString *)FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    FString::operator=(param_2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
  }
  else {
    FString::operator=(param_2,(ushort *)(iVar2 + 4));
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fc58d Catch@100fc58d

void Catch_100fc58d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fc5a1 Catch@100fc5a1

void Catch_100fc5a1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetClanName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc5c0 UUIScript::execGetClanNameValue

/* public: void __thiscall UUIScript::execGetClanNameValue(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetClanNameValue(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfc5c0  1168  ?execGetClanNameValue@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102001c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0xffffffff;
  iVar2 = FUN_10145a60(local_18);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x74);
  }
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 100fc678 Catch@100fc678

void Catch_100fc678(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fc68c Catch@100fc68c

void Catch_100fc68c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetClanNameValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc6b0 UUIScript::execRequestRaidRecord

/* public: void __thiscall UUIScript::execRequestRaidRecord(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestRaidRecord(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfc6b0  1663  ?execRequestRaidRecord@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102001e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (DAT_103663bc != 0) {
    FUN_1014a0b0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fc734 Catch@100fc734

void Catch_100fc734(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fc748 Catch@100fc748

void Catch_100fc748(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestRaidRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc770 UUIScript::execMakeFullSystemMsg

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: void __thiscall UUIScript::execMakeFullSystemMsg(struct FFrame &,void * const) */

void __thiscall UUIScript::execMakeFullSystemMsg(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uStack_2054;
  FString local_2040 [12];
  FString local_2034 [12];
  FString local_2028 [16];
  undefined1 *local_2018;
  void *local_2014;
  undefined1 *puStack_2010;
  int local_200c;
  ushort local_2008 [4096];
  uint local_8;
  
                    /* 0xfc770  1523  ?execMakeFullSystemMsg@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_2010 = &LAB_1020021b;
  local_2014 = ExceptionList;
  uStack_2054 = DAT_103554c4 ^ (uint)local_2008;
  local_2018 = (undefined1 *)&uStack_2054;
  ExceptionList = &local_2014;
  local_200c = 0;
  local_8 = uStack_2054;
  FString::FString(local_2034);
  local_200c._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2034);
  FString::FString(local_2040);
  local_200c._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2040);
  FString::FString(local_2028,(ushort *)&DAT_1022f9f8);
  local_200c = CONCAT31(local_200c._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2028);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar5 = 0;
  puVar2 = FString::operator*(local_2028);
  puVar3 = FString::operator*(local_2040);
  puVar4 = FString::operator*(local_2034);
  FUN_10164570(local_2008,puVar4,puVar3,puVar2,uVar5);
  FString::operator=(param_2,local_2008);
  local_200c._0_1_ = 2;
  FString::~FString(local_2028);
  local_200c._0_1_ = 1;
  FString::~FString(local_2040);
  local_200c = (uint)local_200c._1_3_ << 8;
  FString::~FString(local_2034);
  local_200c = 0xffffffff;
  ExceptionList = local_2014;
  __security_check_cookie(local_8 ^ (uint)local_2008);
  return;
}


// ==== 100fc8fc Catch@100fc8fc

void Catch_100fc8fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fc910 Catch@100fc910

void Catch_100fc910(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetFullSystemMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fc930 UUIScript::execRequestClanMemberInfo

/* public: void __thiscall UUIScript::execRequestClanMemberInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanMemberInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfc930  1591  ?execRequestClanMemberInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200259;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_2c);
  FUN_101442f0(local_18,puVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100fca13 Catch@100fca13

void Catch_100fca13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fca27 Catch@100fca27

void Catch_100fca27(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanMemberInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fca50 UUIScript::execRequestClanGradeList

/* public: void __thiscall UUIScript::execRequestClanGradeList(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanGradeList(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfca50  1588  ?execRequestClanGradeList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101442c0();
  ExceptionList = local_10;
  return;
}


// ==== 100fcad0 Catch@100fcad0

void Catch_100fcad0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fcae4 Catch@100fcae4

void Catch_100fcae4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanGradeList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fcb10 UUIScript::execRequestClanChangeGrade

/* public: void __thiscall UUIScript::execRequestClanChangeGrade(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanChangeGrade(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfcb10  1581  ?execRequestClanChangeGrade@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102002a9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = local_18;
  puVar2 = FString::operator*(local_2c);
  FUN_101442e0(puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100fcbf3 Catch@100fcbf3

void Catch_100fcbf3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fcc07 Catch@100fcc07

void Catch_100fcc07(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanChangeGrade");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fcc30 UUIScript::execRequestClanAssignPupil

/* public: void __thiscall UUIScript::execRequestClanAssignPupil(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanAssignPupil(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfcc30  1579  ?execRequestClanAssignPupil@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102002e2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_28);
  puVar3 = FString::operator*(local_34);
  FUN_101442b0(1,puVar3,puVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 100fcd34 Catch@100fcd34

void Catch_100fcd34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fcd48 Catch@100fcd48

void Catch_100fcd48(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanAssignPupil");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fcd70 UUIScript::execRequestClanDeletePupil

/* public: void __thiscall UUIScript::execRequestClanDeletePupil(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanDeletePupil(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfcd70  1586  ?execRequestClanDeletePupil@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200312;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_28);
  puVar3 = FString::operator*(local_34);
  FUN_101442b0(0,puVar3,puVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 100fce75 Catch@100fce75

void Catch_100fce75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fce89 Catch@100fce89

void Catch_100fce89(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanDeletePupil");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fceb0 UUIScript::execRequestClanAuth

/* public: void __thiscall UUIScript::execRequestClanAuth(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanAuth(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfceb0  1580  ?execRequestClanAuth@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200330;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x7f8))(local_18,1,0);
  ExceptionList = local_10;
  return;
}


// ==== 100fcf62 Catch@100fcf62

void Catch_100fcf62(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fcf76 Catch@100fcf76

void Catch_100fcf76(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanPenalty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fcfa0 UUIScript::execRequestClanMemberAuth

/* public: void __thiscall UUIScript::execRequestClanMemberAuth(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanMemberAuth(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfcfa0  1590  ?execRequestClanMemberAuth@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200359;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_2c);
  FUN_101442d0(local_18,puVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100fd083 Catch@100fd083

void Catch_100fd083(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fd097 Catch@100fd097

void Catch_100fd097(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanPenalty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd0c0 UUIScript::execRequestPCCafeCouponUse

/* public: void __thiscall UUIScript::execRequestPCCafeCouponUse(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestPCCafeCouponUse(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uStack_4c;
  FFrame *pFStack_48;
  undefined4 uStack_44;
  FFrame *pFStack_40;
  FString *pFStack_3c;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfd0c0  1647  ?execRequestPCCafeCouponUse@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200392;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_3c = (FString *)0x100fd0fb;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = local_28;
  pFStack_40 = param_1;
  uStack_44 = 0x100fd123;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_44 = 0;
    pFStack_48 = param_1;
    uStack_4c = 0x100fd146;
    (**(code **)(GNatives_exref + 0x108))();
  }
  FString::FString((FString *)&uStack_4c,local_28);
  local_8._1_3_ = (uint3)((uint)local_8 >> 8);
  local_8._0_1_ = 1;
  FUN_10144320();
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_44 = 0x100fd177;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fd192 Catch@100fd192

void Catch_100fd192(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fd1a6 Catch@100fd1a6

void Catch_100fd1a6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestPCCafeCoupon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd1d0 UUIScript::execRequestClanAskJoin

/* public: void __thiscall UUIScript::execRequestClanAskJoin(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanAskJoin(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0xfd1d0  1578  ?execRequestClanAskJoin@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102003b9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  L2ParamStack::PushBack(local_30,param_1);
  FUN_10144290(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 100fd2c6 Catch@100fd2c6

void Catch_100fd2c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fd2da Catch@100fd2da

void Catch_100fd2da(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanAskJoin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd300 UUIScript::execRequestClanDeclareWarWithUserID

/* public: void __thiscall UUIScript::execRequestClanDeclareWarWithUserID(struct FFrame &,void *
   const) */

void __thiscall
UUIScript::execRequestClanDeclareWarWithUserID(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_40;
  L2ParamStack local_30 [24];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfd300  1585
                       ?execRequestClanDeclareWarWithUserID@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102003e9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_10145910(local_18);
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x284))) {
    iVar2 = FUN_10145a60(*(undefined4 *)(iVar2 + 0x284));
    L2ParamStack::L2ParamStack(local_30,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_30,(void *)(iVar2 + 4));
    FUN_10144220(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 100fd3f9 Catch@100fd3f9

void Catch_100fd3f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fd40d Catch@100fd40d

void Catch_100fd40d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::RequestClanDeclareWarWithUserID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd430 UUIScript::execRequestClanDeclareWarWidhClanName

/* public: void __thiscall UUIScript::execRequestClanDeclareWarWidhClanName(struct FFrame &,void *
   const) */

void __thiscall
UUIScript::execRequestClanDeclareWarWidhClanName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_48;
  L2ParamStack local_38 [16];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfd430  1584
                       ?execRequestClanDeclareWarWidhClanName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200422;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_38,10);
  local_8._0_1_ = 2;
  puVar2 = FString::operator*(local_28);
  L2ParamStack::PushBack(local_38,puVar2);
  FUN_10144220(local_38);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fd51b Catch@100fd51b

void Catch_100fd51b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fd52f Catch@100fd52f

void Catch_100fd52f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::RequestClanDeclareWarWidhClanName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd550 UUIScript::execRequestClanWithdrawWarWithClanName

/* public: void __thiscall UUIScript::execRequestClanWithdrawWarWithClanName(struct FFrame &,void *
   const) */

void __thiscall
UUIScript::execRequestClanWithdrawWarWithClanName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_48;
  L2ParamStack local_38 [16];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfd550  1599
                       ?execRequestClanWithdrawWarWithClanName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200452;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_38,10);
  local_8._0_1_ = 2;
  puVar2 = FString::operator*(local_28);
  L2ParamStack::PushBack(local_38,puVar2);
  FUN_10144240(local_38);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fd63b Catch@100fd63b

void Catch_100fd63b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fd64f Catch@100fd64f

void Catch_100fd64f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanWithdrawWar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd670 UUIScript::execRequestClanChangeNickName

/* public: void __thiscall UUIScript::execRequestClanChangeNickName(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestClanChangeNickName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  uint uStack_858;
  L2ParamStack local_844 [16];
  FString local_834 [16];
  FString local_824 [12];
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  int local_80c;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0xfd670  1582  ?execRequestClanChangeNickName@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_810 = &LAB_1020048b;
  local_814 = ExceptionList;
  uStack_858 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_858;
  ExceptionList = &local_814;
  local_80c = 0;
  local_8 = uStack_858;
  FString::FString(local_834);
  local_80c._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_834);
  FString::FString(local_824);
  local_80c = CONCAT31(local_80c._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_824);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar3 = 0x400;
  puVar2 = FString::operator*(local_824);
  appStrncpy(local_808,puVar2,iVar3);
  iVar3 = FString::Len(local_824);
  if (iVar3 != 0) {
    iVar3 = FUN_1014cff0(local_808);
    if (iVar3 != 0) {
      FUN_10170650(0xcc,0xffb09b79);
      goto LAB_100fd7fb;
    }
    iVar3 = FUN_10064bd0(local_824);
    if (0x10 < iVar3) {
      FUN_10170650(0x50,0xffb09b79);
      goto LAB_100fd7fb;
    }
  }
  L2ParamStack::L2ParamStack(local_844,10);
  local_80c._0_1_ = 3;
  puVar2 = FString::operator*(local_834);
  L2ParamStack::PushBack(local_844,puVar2);
  puVar2 = FString::operator*(local_824);
  L2ParamStack::PushBack(local_844,puVar2);
  FUN_10144280(local_844);
  local_80c = CONCAT31(local_80c._1_3_,2);
  L2ParamStack::~L2ParamStack(local_844);
LAB_100fd7fb:
  local_80c._0_1_ = 1;
  FString::~FString(local_824);
  local_80c = (uint)local_80c._1_3_ << 8;
  FString::~FString(local_834);
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 100fd842 Catch@100fd842

void Catch_100fd842(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 100fd856 Catch@100fd856

void Catch_100fd856(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanChangeNickName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd880 UUIScript::execRequestInviteParty

/* public: void __thiscall UUIScript::execRequestInviteParty(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestInviteParty(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_48;
  L2ParamStack local_38 [16];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfd880  1632  ?execRequestInviteParty@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102004d2;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_38,10);
  local_8._0_1_ = 2;
  puVar2 = FString::operator*(local_28);
  L2ParamStack::PushBack(local_38,puVar2);
  L2ParamStack::PushBack(local_38,*(void **)GL2PartyLooting_exref);
  FUN_10144860(local_38);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fd97a Catch@100fd97a

void Catch_100fd97a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fd98e Catch@100fd98e

void Catch_100fd98e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanParty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fd9b0 UUIScript::execRequestClanWarList

/* public: void __thiscall UUIScript::execRequestClanWarList(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanWarList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0xfd9b0  1597  ?execRequestClanWarList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102004f0;
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
  FUN_10144300(local_18,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100fda77 Catch@100fda77

void Catch_100fda77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fda8b Catch@100fda8b

void Catch_100fda8b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanWarList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fdab0 UUIScript::execRequestClanReorganizeMember

/* public: void __thiscall UUIScript::execRequestClanReorganizeMember(struct FFrame &,void * const)
    */

void __thiscall
UUIScript::execRequestClanReorganizeMember(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  uint uStack_58;
  L2ParamStack local_48 [16];
  FString local_38 [12];
  FString local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0xfdab0  1594
                       ?execRequestClanReorganizeMember@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020052b;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_38);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_38);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_2c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  L2ParamStack::L2ParamStack(local_48,10);
  local_8._0_1_ = 3;
  L2ParamStack::PushBack(local_48,local_18);
  puVar3 = FString::operator*(local_38);
  L2ParamStack::PushBack(local_48,puVar3);
  L2ParamStack::PushBack(local_48,param_1);
  puVar3 = FString::operator*(local_2c);
  L2ParamStack::PushBack(local_48,puVar3);
  FUN_10144310(local_48);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_48);
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 100fdc34 Catch@100fdc34

void Catch_100fdc34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fdc48 Catch@100fdc48

void Catch_100fdc48(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanReorganizeMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fdc70 UUIScript::execGetCastleName

/* public: void __thiscall UUIScript::execGetCastleName(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetCastleName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfdc70  1164  ?execGetCastleName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200550;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)FUN_10145f50(local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100fdd23 Catch@100fdd23

void Catch_100fdd23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fdd37 Catch@100fdd37

void Catch_100fdd37(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetCastleName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fdd60 UUIScript::execHasClanCrest

/* public: void __thiscall UUIScript::execHasClanCrest(struct FFrame &,void * const) */

void __thiscall UUIScript::execHasClanCrest(UUIScript *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfdd60  1444  ?execHasClanCrest@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014dd00();
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x284))) {
    iVar1 = FUN_10145a60(*(int *)(iVar1 + 0x284));
    if (0 < *(int *)(iVar1 + 0x80)) {
      uVar2 = 1;
    }
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 100fde14 Catch@100fde14

void Catch_100fde14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fde28 Catch@100fde28

void Catch_100fde28(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execHasClanCrest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fde50 UUIScript::execHasClanEmblem

/* public: void __thiscall UUIScript::execHasClanEmblem(struct FFrame &,void * const) */

void __thiscall UUIScript::execHasClanEmblem(UUIScript *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfde50  1445  ?execHasClanEmblem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = 0;
  iVar1 = FUN_1014dd00();
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x284))) {
    iVar1 = FUN_10145a60(*(int *)(iVar1 + 0x284));
    if (0 < *(int *)(iVar1 + 0xdc)) {
      uVar2 = 1;
    }
  }
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 100fdf04 Catch@100fdf04

void Catch_100fdf04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fdf18 Catch@100fdf18

void Catch_100fdf18(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execHasClanEmblem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fdf40 UUIScript::execGetClassIconName

/* public: void __thiscall UUIScript::execGetClassIconName(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetClassIconName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfdf40  1170  ?execGetClassIconName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102005b0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)FUN_1014eb90(local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100fdff3 Catch@100fdff3

void Catch_100fdff3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fe007 Catch@100fe007

void Catch_100fe007(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetClassIconName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe030 UUIScript::execGetClassStr

/* public: void __thiscall UUIScript::execGetClassStr(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetClassStr(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfe030  1172  ?execGetClassStr@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102005d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)FUN_1014e370(local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100fe0e3 Catch@100fe0e3

void Catch_100fe0e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fe0f7 Catch@100fe0f7

void Catch_100fe0f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetClassStr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe120 UUIScript::execPlaySound

/* public: void __thiscall UUIScript::execPlaySound(struct FFrame &,void * const) */

void __thiscall UUIScript::execPlaySound(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfe120  1549  ?execPlaySound@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102005f9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_28);
  FUN_10147e60(puVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fe1e3 Catch@100fe1e3

void Catch_100fe1e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fe1f7 Catch@100fe1f7

void Catch_100fe1f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execPlaySound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe220 UUIScript::execStopSound

/* public: void __thiscall UUIScript::execStopSound(struct FFrame &,void * const) */

void __thiscall UUIScript::execStopSound(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfe220  1864  ?execStopSound@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200629;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10147f10(local_28);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fe2dd Catch@100fe2dd

void Catch_100fe2dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fe2f1 Catch@100fe2f1

void Catch_100fe2f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execStopSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe310 UUIScript::execGetCurrentIMELang

/* public: void __thiscall UUIScript::execGetCurrentIMELang(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetCurrentIMELang(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfe310  1183  ?execGetCurrentIMELang@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_10141550();
  switch(uVar1) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
    break;
  case 7:
    uVar1 = 8;
    break;
  case 8:
    uVar1 = 9;
    break;
  case 9:
    uVar1 = 10;
    break;
  case 10:
    uVar1 = 0xb;
    break;
  case 0xb:
    uVar1 = 0xc;
    break;
  case 0xc:
    uVar1 = 0xd;
    break;
  case 0xd:
    uVar1 = 0xe;
    break;
  default:
    uVar1 = 0;
  }
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 100fe408 Catch@100fe408

void Catch_100fe408(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fe41c Catch@100fe41c

void Catch_100fe41c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetCurrentIMELang");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe480 UUIScript::execRequestOpenMinimap

/* public: void __thiscall UUIScript::execRequestOpenMinimap(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestOpenMinimap(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfe480  1645  ?execRequestOpenMinimap@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200679;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  FUN_10143b30(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100fe522 Catch@100fe522

void Catch_100fe522(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fe536 Catch@100fe536

void Catch_100fe536(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestOpenMinimap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe560 UUIScript::execGetZoneNameWithZoneID

/* public: void __thiscall UUIScript::execGetZoneNameWithZoneID(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetZoneNameWithZoneID(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfe560  1443  ?execGetZoneNameWithZoneID@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102006a0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)FUN_10149b70(local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100fe613 Catch@100fe613

void Catch_100fe613(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fe627 Catch@100fe627

void Catch_100fe627(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetZoneNameWithZoneID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe650 UUIScript::execGetCurrentZoneName

/* public: void __thiscall UUIScript::execGetCurrentZoneName(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetCurrentZoneName(UUIScript *this,FFrame *param_1,void *param_2)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfe650  1186  ?execGetCurrentZoneName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102006c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar1 = (ushort *)FUN_10143850();
  FString::operator=(param_2,puVar1);
  ExceptionList = local_10;
  return;
}


// ==== 100fe6da Catch@100fe6da

void Catch_100fe6da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fe6ee Catch@100fe6ee

void Catch_100fe6ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetCurrentZoneName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe710 UUIScript::execGetLootingMethodName

/* public: void __thiscall UUIScript::execGetLootingMethodName(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetLootingMethodName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfe710  1245  ?execGetLootingMethodName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102006e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)FUN_10149d80(local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 100fe7c3 Catch@100fe7c3

void Catch_100fe7c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fe7d7 Catch@100fe7d7

void Catch_100fe7d7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetLootingMethodName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe800 UUIScript::execRefreshINI

/* public: void __thiscall UUIScript::execRefreshINI(struct FFrame &,void * const) */

void __thiscall UUIScript::execRefreshINI(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xfe800  1557  ?execRefreshINI@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200709;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_28);
  (**(code **)(iVar2 + 0x34))(1,puVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 100fe8cf Catch@100fe8cf

void Catch_100fe8cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fe8e3 Catch@100fe8e3

void Catch_100fe8e3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRefreshINI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fe900 UUIScript::execGetINIBool

/* public: void __thiscall UUIScript::execGetINIBool(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetINIBool(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uStack_58;
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfe900  1216  ?execGetINIBool@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020074b;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_48);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_48);
  FString::FString(local_3c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar7 = &local_18;
  }
  else {
    puVar7 = *(undefined4 **)GPropAddr_exref;
  }
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (undefined4 *)**(undefined4 **)GConfig_exref;
  puVar3 = FString::operator*(local_30);
  puVar8 = &local_1c;
  puVar4 = FString::operator*(local_3c);
  puVar5 = FString::operator*(local_48);
  uVar6 = (*(code *)*puVar2)(puVar5,puVar4,puVar8,puVar3);
  *(undefined4 *)param_2 = uVar6;
  *puVar7 = local_1c;
  local_8._0_1_ = 2;
  FString::~FString(local_30);
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 100feaae Catch@100feaae

void Catch_100feaae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100feac2 Catch@100feac2

void Catch_100feac2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetINIBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100feae0 UUIScript::execGetINIInt

/* public: void __thiscall UUIScript::execGetINIInt(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetINIInt(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfeae0  1218  ?execGetINIInt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020078b;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar7 = &local_18;
  }
  else {
    puVar7 = *(undefined4 **)GPropAddr_exref;
  }
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_2c);
  puVar4 = FString::operator*(local_38);
  puVar5 = FString::operator*(local_44);
  uVar6 = (**(code **)(iVar2 + 4))(puVar5,puVar4,puVar7,puVar3);
  *(undefined4 *)param_2 = uVar6;
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100fec88 Catch@100fec88

void Catch_100fec88(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fec9c Catch@100fec9c

void Catch_100fec9c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetINIInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fecc0 UUIScript::execGetINIFloat

/* public: void __thiscall UUIScript::execGetINIFloat(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetINIFloat(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfecc0  1217  ?execGetINIFloat@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102007cb;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar7 = &local_18;
  }
  else {
    puVar7 = *(undefined4 **)GPropAddr_exref;
  }
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_2c);
  puVar4 = FString::operator*(local_38);
  puVar5 = FString::operator*(local_44);
  uVar6 = (**(code **)(iVar2 + 8))(puVar5,puVar4,puVar7,puVar3);
  *(undefined4 *)param_2 = uVar6;
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100fee75 Catch@100fee75

void Catch_100fee75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100fee89 Catch@100fee89

void Catch_100fee89(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetINIFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100feeb0 UUIScript::execGetINIString

/* public: void __thiscall UUIScript::execGetINIString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetINIString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  FString *pFVar7;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfeeb0  1219  ?execGetINIString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200814;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_4c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  FString::FString(local_40);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar7 = local_34;
  }
  else {
    pFVar7 = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,4);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_28);
  puVar4 = FString::operator*(local_40);
  puVar5 = FString::operator*(local_4c);
  uVar6 = (**(code **)(iVar2 + 0xc))(puVar5,puVar4,pFVar7,puVar3);
  *(undefined4 *)param_2 = uVar6;
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 100ff078 Catch@100ff078

void Catch_100ff078(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ff08c Catch@100ff08c

void Catch_100ff08c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetINIString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ff0b0 UUIScript::execSetINIBool

/* public: void __thiscall UUIScript::execSetINIBool(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetINIBool(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xff0b0  1745  ?execSetINIBool@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020084b;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  FString::FString(local_38);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_2c);
  uVar6 = local_18;
  puVar4 = FString::operator*(local_38);
  puVar5 = FString::operator*(local_44);
  (**(code **)(iVar2 + 0x24))(puVar5,puVar4,uVar6,puVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100ff221 Catch@100ff221

void Catch_100ff221(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ff235 Catch@100ff235

void Catch_100ff235(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetINIBool");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ff260 UUIScript::execSetINIInt

/* public: void __thiscall UUIScript::execSetINIInt(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetINIInt(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xff260  1747  ?execSetINIInt@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020088b;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  FString::FString(local_38);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_2c);
  uVar6 = local_18;
  puVar4 = FString::operator*(local_38);
  puVar5 = FString::operator*(local_44);
  (**(code **)(iVar2 + 0x28))(puVar5,puVar4,uVar6,puVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100ff3d1 Catch@100ff3d1

void Catch_100ff3d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ff3e5 Catch@100ff3e5

void Catch_100ff3e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetINIInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ff410 UUIScript::execSetINIFloat

/* public: void __thiscall UUIScript::execSetINIFloat(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetINIFloat(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xff410  1746  ?execSetINIFloat@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102008cb;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  FString::FString(local_38);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_2c);
  uVar6 = local_18;
  puVar4 = FString::operator*(local_38);
  puVar5 = FString::operator*(local_44);
  (**(code **)(iVar2 + 0x2c))(puVar5,puVar4,uVar6,puVar3);
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 100ff58a Catch@100ff58a

void Catch_100ff58a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ff59e Catch@100ff59e

void Catch_100ff59e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetINIFloat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ff5c0 UUIScript::execSetINIString

/* public: void __thiscall UUIScript::execSetINIString(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetINIString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xff5c0  1748  ?execSetINIString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200914;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_4c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  FString::FString(local_40);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_34);
  local_8._0_1_ = 3;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,4);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = **(int **)GConfig_exref;
  puVar3 = FString::operator*(local_28);
  puVar4 = FString::operator*(local_34);
  puVar5 = FString::operator*(local_40);
  puVar6 = FString::operator*(local_4c);
  (**(code **)(iVar2 + 0x30))(puVar6,puVar5,puVar4,puVar3);
  local_8._0_1_ = 3;
  FString::~FString(local_28);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 100ff750 Catch@100ff750

void Catch_100ff750(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100ff764 Catch@100ff764

void Catch_100ff764(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetINIString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ff790 UUIScript::execGetInventoryItemCount

/* public: void __thiscall UUIScript::execGetInventoryItemCount(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetInventoryItemCount(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xff790  1224  ?execGetInventoryItemCount@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200930;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FUN_101b28d0(local_18);
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 100ff844 Catch@100ff844

void Catch_100ff844(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ff858 Catch@100ff858

void Catch_100ff858(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetInventoryItemCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ff880 UUIScript::execGetTextSize

/* public: void __thiscall UUIScript::execGetTextSize(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetTextSize(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uStack_48;
  FString local_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0xff880  1423  ?execGetTextSize@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200959;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = &local_1c;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  puVar3 = FString::operator*(local_38);
  FUN_10020bb0(&local_2c,puVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  *(undefined4 *)param_1 = local_2c;
  *puVar4 = local_28;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 100ff9fd Catch@100ff9fd

void Catch_100ff9fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100ffa11 Catch@100ffa11

void Catch_100ffa11(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetTextSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ffa30 UUIScript::execGetZoneNameTextSize

/* public: void __thiscall UUIScript::execGetZoneNameTextSize(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetZoneNameTextSize(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uStack_48;
  FString local_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0xffa30  1442  ?execGetZoneNameTextSize@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200989;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = &local_1c;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  puVar3 = FString::operator*(local_38);
  FUN_10020bb0(&local_2c,puVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  *(undefined4 *)param_1 = local_2c;
  *puVar4 = local_28;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 100ffbae Catch@100ffbae

void Catch_100ffbae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 100ffbc2 Catch@100ffbc2

void Catch_100ffbc2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetZoneNameTextSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ffbe0 UUIScript::execMakeFullItemName

/* public: void __thiscall UUIScript::execMakeFullItemName(struct FFrame &,void * const) */

void __thiscall UUIScript::execMakeFullItemName(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_240;
  FString local_22c [16];
  undefined4 local_21c;
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  int local_20c;
  ushort local_208 [256];
  uint local_8;
  
                    /* 0xffbe0  1522  ?execMakeFullItemName@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_210 = &LAB_102009b9;
  local_214 = ExceptionList;
  uStack_240 = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_240;
  ExceptionList = &local_214;
  local_20c = 0;
  local_21c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_240;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_21c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_22c);
  local_20c._0_1_ = 1;
  FUN_10146560(local_208,local_21c);
  FString::operator=(local_22c,local_208);
  FString::operator=(param_2,local_22c);
  local_20c = (uint)local_20c._1_3_ << 8;
  FString::~FString(local_22c);
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 100ffce5 Catch@100ffce5

void Catch_100ffce5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ffcf9 Catch@100ffcf9

void Catch_100ffcf9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execMakeFullItemName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ffd20 UUIScript::execGetItemGradeString

/* public: void __thiscall UUIScript::execGetItemGradeString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetItemGradeString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xffd20  1236  ?execGetItemGradeString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102009f9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_2c);
  local_8._0_1_ = 1;
  puVar2 = (ushort *)FUN_10146390(local_18);
  FString::operator=(local_2c,puVar2);
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100ffdf2 Catch@100ffdf2

void Catch_100ffdf2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 100ffe06 Catch@100ffe06

void Catch_100ffe06(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetItemGradeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100ffe30 UUIScript::execMakeCostStringInt64

/* public: void __thiscall UUIScript::execMakeCostStringInt64(struct FFrame &,void * const) */

void __thiscall UUIScript::execMakeCostStringInt64(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *pFVar2;
  undefined8 uVar3;
  uint uStack_40;
  FString local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xffe30  1521  ?execMakeCostStringInt64@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200a29;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = FUN_10063120(local_24,local_20);
  pFVar2 = (FString *)FUN_10062590(local_30,uVar3);
  local_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 100ffefb Catch@100ffefb

void Catch_100ffefb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 100fff0f Catch@100fff0f

void Catch_100fff0f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execMakeCostStringInt64");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 100fff30 UUIScript::execMakeCostString

/* public: void __thiscall UUIScript::execMakeCostString(struct FFrame &,void * const) */

void __thiscall UUIScript::execMakeCostString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfff30  1520  ?execMakeCostString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200a62;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_28);
  iVar3 = appAtoi(puVar2);
  pFVar4 = (FString *)FUN_10062590(local_34,iVar3,iVar3 >> 0x1f);
  local_8._0_1_ = 2;
  FString::operator=(param_2,pFVar4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10100017 Catch@10100017

void Catch_10100017(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010002b Catch@1010002b

void Catch_1010002b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execMakeCostString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100050 UUIScript::execConvertNumToText

/* public: void __thiscall UUIScript::execConvertNumToText(struct FFrame &,void * const) */

void __thiscall UUIScript::execConvertNumToText(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_148;
  FString local_134 [12];
  FString local_128 [16];
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  int local_10c;
  ushort local_108 [128];
  uint local_8;
  
                    /* 0x100050  1118  ?execConvertNumToText@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_110 = &LAB_10200a92;
  local_114 = ExceptionList;
  uStack_148 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_148;
  ExceptionList = &local_114;
  local_10c = 0;
  local_8 = uStack_148;
  FString::FString(local_134);
  local_10c = CONCAT31(local_10c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_134);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_128);
  local_10c._0_1_ = 2;
  uVar3 = 0;
  puVar2 = FString::operator*(local_134);
  FUN_100676e0(local_108,puVar2,uVar3);
  FString::operator=(local_128,local_108);
  FString::operator=(param_2,local_128);
  local_10c._0_1_ = 1;
  FString::~FString(local_128);
  local_10c = (uint)local_10c._1_3_ << 8;
  FString::~FString(local_134);
  local_10c = 0xffffffff;
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 10100175 Catch@10100175

void Catch_10100175(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10100189 Catch@10100189

void Catch_10100189(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execConvertNumToText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101001b0 UUIScript::execConvertNumToTextNoAdena

/* public: void __thiscall UUIScript::execConvertNumToTextNoAdena(struct FFrame &,void * const) */

void __thiscall
UUIScript::execConvertNumToTextNoAdena(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_148;
  FString local_134 [12];
  FString local_128 [16];
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  int local_10c;
  ushort local_108 [128];
  uint local_8;
  
                    /* 0x1001b0  1119  ?execConvertNumToTextNoAdena@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_110 = &LAB_10200ad2;
  local_114 = ExceptionList;
  uStack_148 = DAT_103554c4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_148;
  ExceptionList = &local_114;
  local_10c = 0;
  local_8 = uStack_148;
  FString::FString(local_134);
  local_10c = CONCAT31(local_10c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_134);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_128);
  local_10c._0_1_ = 2;
  uVar3 = 1;
  puVar2 = FString::operator*(local_134);
  FUN_100676e0(local_108,puVar2,uVar3);
  FString::operator=(local_128,local_108);
  FString::operator=(param_2,local_128);
  local_10c._0_1_ = 1;
  FString::~FString(local_128);
  local_10c = (uint)local_10c._1_3_ << 8;
  FString::~FString(local_134);
  local_10c = 0xffffffff;
  ExceptionList = local_114;
  __security_check_cookie(local_8 ^ (uint)local_108);
  return;
}


// ==== 101002d4 Catch@101002d4

void Catch_101002d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101002e8 Catch@101002e8

void Catch_101002e8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execConvertNumToTextNoAdena");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100310 UUIScript::execGetNumericColor

/* public: void __thiscall UUIScript::execGetNumericColor(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetNumericColor(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ulong uVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x100310  1274  ?execGetNumericColor@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200b09;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_2c);
  uVar3 = FUN_10063020(puVar2);
  FColor::FColor((FColor *)&local_18,uVar3);
  *(undefined4 *)param_2 = local_18;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101003e2 Catch@101003e2

void Catch_101003e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101003f6 Catch@101003f6

void Catch_101003f6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetNumericColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100420 UUIScript::execPlayConsoleSound

/* public: void __thiscall UUIScript::execPlayConsoleSound(struct FFrame &,void * const) */

void __thiscall UUIScript::execPlayConsoleSound(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x100420  1546  ?execPlayConsoleSound@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200b30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1014ed50(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101004c9 Catch@101004c9

void Catch_101004c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101004dd Catch@101004dd

void Catch_101004dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execPlayConsoleSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100500 UUIScript::execProcessChatMessage

/* public: void __thiscall UUIScript::execProcessChatMessage(struct FFrame &,void * const) */

void __thiscall UUIScript::execProcessChatMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x100500  1551  ?execProcessChatMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200b59;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = local_18;
  puVar2 = FString::operator*(local_2c);
  FUN_1013c310(puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101005ef Catch@101005ef

void Catch_101005ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10100603 Catch@10100603

void Catch_10100603(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execProcessChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100620 UUIScript::execProcessPartyMatchChatMessage

/* public: void __thiscall UUIScript::execProcessPartyMatchChatMessage(struct FFrame &,void * const)
    */

void __thiscall
UUIScript::execProcessPartyMatchChatMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x100620  1554
                       ?execProcessPartyMatchChatMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200b89;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  puVar2 = FString::operator*(local_28);
  FUN_10141990(0xe,puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101006e7 Catch@101006e7

void Catch_101006e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101006fb Catch@101006fb

void Catch_101006fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execProcessPartyMatchChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100720 UUIScript::execProcessPetitionChatMessage

/* public: void __thiscall UUIScript::execProcessPetitionChatMessage(struct FFrame &,void * const)
    */

void __thiscall
UUIScript::execProcessPetitionChatMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x100720  1555
                       ?execProcessPetitionChatMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200bb9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  puVar2 = FString::operator*(local_28);
  FUN_10141990(6,puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101007e7 Catch@101007e7

void Catch_101007e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101007fb Catch@101007fb

void Catch_101007fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execProcessPetitionChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100820 UUIScript::execProcessCommandChatMessage

/* public: void __thiscall UUIScript::execProcessCommandChatMessage(struct FFrame &,void * const) */

void __thiscall
UUIScript::execProcessCommandChatMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x100820  1552
                       ?execProcessCommandChatMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200be9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  puVar2 = FString::operator*(local_28);
  FUN_10141990(0xf,puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101008e7 Catch@101008e7

void Catch_101008e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101008fb Catch@101008fb

void Catch_101008fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execProcessCommandChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100920 UUIScript::execProcessCommandInterPartyChatMessage

/* public: void __thiscall UUIScript::execProcessCommandInterPartyChatMessage(struct FFrame &,void *
   const) */

void __thiscall
UUIScript::execProcessCommandInterPartyChatMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x100920  1553
                       ?execProcessCommandInterPartyChatMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200c19;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = 0;
  puVar2 = FString::operator*(local_28);
  FUN_10141990(0x10,puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101009e7 Catch@101009e7

void Catch_101009e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101009fb Catch@101009fb

void Catch_101009fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execProcessCommandInterPartyChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100a20 UUIScript::execGetClassType

/* public: void __thiscall UUIScript::execGetClassType(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetClassType(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x100a20  1173  ?execGetClassType@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200c49;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  puVar2 = (ushort *)FUN_101460d0(local_18);
  FString::operator=(local_2c,puVar2);
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10100af7 Catch@10100af7

void Catch_10100af7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10100b0b Catch@10100b0b

void Catch_10100b0b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetClassType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100b30 UUIScript::execGetPledgeCrestTexFromPledgeCrestID

/* public: void __thiscall UUIScript::execGetPledgeCrestTexFromPledgeCrestID(struct FFrame &,void *
   const) */

void __thiscall
UUIScript::execGetPledgeCrestTexFromPledgeCrestID(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x100b30  1315
                       ?execGetPledgeCrestTexFromPledgeCrestID@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200c70;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FUN_10145a70(local_18);
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10100bde Catch@10100bde

void Catch_10100bde(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10100bf2 Catch@10100bf2

void Catch_10100bf2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPledgeCrestTexFromPledgeCrestID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100c10 UUIScript::execGetAllianceCrestTexFromAllianceCrestID

/* public: void __thiscall UUIScript::execGetAllianceCrestTexFromAllianceCrestID(struct FFrame
   &,void * const) */

void __thiscall
UUIScript::execGetAllianceCrestTexFromAllianceCrestID(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x100c10  1157
                       ?execGetAllianceCrestTexFromAllianceCrestID@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10200c90;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FUN_10145a80(local_18);
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10100cbe Catch@10100cbe

void Catch_10100cbe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10100cd2 Catch@10100cd2

void Catch_10100cd2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetAllianceCrestTexFromAllianceCrestID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100cf0 UUIScript::execGetUserRankString

/* public: void __thiscall UUIScript::execGetUserRankString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetUserRankString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x100cf0  1436  ?execGetUserRankString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200cb9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1014a3b0(local_2c,local_18);
  local_8._0_1_ = 1;
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10100db3 Catch@10100db3

void Catch_10100db3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10100dc7 Catch@10100dc7

void Catch_10100dc7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetUserRankString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100df0 UUIScript::execGetRoutingString

/* public: void __thiscall UUIScript::execGetRoutingString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetRoutingString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  FString *pFVar4;
  uint uStack_434;
  int local_41c;
  undefined1 *local_418;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  ushort local_408 [512];
  uint local_8;
  
                    /* 0x100df0  1360  ?execGetRoutingString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_410 = &LAB_10200ce0;
  local_414 = ExceptionList;
  uStack_434 = DAT_103554c4 ^ (uint)local_408;
  local_418 = (undefined1 *)&uStack_434;
  ExceptionList = &local_414;
  local_40c = 0;
  local_41c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_434;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_41c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_408[0] = 0;
  if (local_41c == 0) {
    pFVar4 = (FString *)(GL2GameData_exref + 0x6bfb0);
LAB_10100e99:
    puVar2 = FString::operator*(pFVar4);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bfc8));
  }
  else {
    if (local_41c == 1) {
      pFVar4 = (FString *)(GL2GameData_exref + 0x6bfbc);
    }
    else {
      if (local_41c == 2) {
        puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x6ce44));
        puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bfc8));
        goto LAB_10100f54;
      }
      if (local_41c == 3) {
        pFVar4 = (FString *)(GL2GameData_exref + 0x6ce50);
        goto LAB_10100e99;
      }
      if (local_41c != 4) goto LAB_10100f5d;
      pFVar4 = (FString *)(GL2GameData_exref + 0x6ce5c);
    }
    puVar2 = FString::operator*(pFVar4);
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6bfc8));
  }
LAB_10100f54:
  appSprintf(local_408,(ushort *)L"%s : %s",puVar3,puVar2);
LAB_10100f5d:
  FString::operator=(param_2,local_408);
  local_40c = 0xffffffff;
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}


// ==== 10100f97 Catch@10100f97

void Catch_10100f97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10100fab Catch@10100fab

void Catch_10100fab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetRoutingString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10100fd0 UUIScript::execIsDebuff

/* public: void __thiscall UUIScript::execIsDebuff(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsDebuff(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x100fd0  1475  ?execIsDebuff@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200d10;
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
  uVar3 = FUN_10164a20(local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1010109c Catch@1010109c

void Catch_1010109c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101010b0 Catch@101010b0

void Catch_101010b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsDebuff");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101010d0 UUIScript::execCheckItemLimit

/* public: void __thiscall UUIScript::execCheckItemLimit(struct FFrame &,void * const) */

void __thiscall UUIScript::execCheckItemLimit(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1010d0  1087  ?execCheckItemLimit@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200d30;
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
  uVar3 = FUN_10170780(local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1010119c Catch@1010119c

void Catch_1010119c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101011b0 Catch@101011b0

void Catch_101011b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execCheckItemLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101011d0 UUIScript::execInt64ToString

/* public: void __thiscall UUIScript::execInt64ToString(struct FFrame &,void * const) */

void __thiscall UUIScript::execInt64ToString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  __int64 _Var2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint uStack_40;
  FString local_30 [12];
  undefined4 local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1011d0  1467  ?execInt64ToString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200d59;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_24);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = local_24;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  _Var2 = FUN_10063120(*puVar4,puVar4[1]);
  puVar3 = appI64toa(_Var2);
  FString::FString(local_30,puVar3);
  local_8._0_1_ = 1;
  FString::operator=(param_2,local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 101012de Catch@101012de

void Catch_101012de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101012f2 Catch@101012f2

void Catch_101012f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execInt64ToString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101310 UUIScript::execInt64SubtractBfromA

/* public: void __thiscall UUIScript::execInt64SubtractBfromA(struct FFrame &,void * const) */

void __thiscall UUIScript::execInt64SubtractBfromA(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uStack_44;
  undefined4 local_34 [2];
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x101310  1466  ?execInt64SubtractBfromA@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200d80;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = local_2c;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar2 = local_34;
  }
  else {
    puVar2 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  lVar4 = FUN_10063120(*puVar3,puVar3[1]);
  lVar5 = FUN_10063120(*puVar2,puVar2[1]);
  FUN_100631b0(lVar4 - lVar5,&local_24);
  *(undefined4 *)param_2 = local_24;
  *(undefined4 *)((int)param_2 + 4) = local_20;
  ExceptionList = local_10;
  return;
}


// ==== 1010146c Catch@1010146c

void Catch_1010146c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10101480 Catch@10101480

void Catch_10101480(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execInt64SubtractBfromA");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101014a0 UUIScript::execInt64Add

/* public: void __thiscall UUIScript::execInt64Add(struct FFrame &,void * const) */

void __thiscall UUIScript::execInt64Add(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uStack_44;
  undefined4 local_34 [2];
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1014a0  1464  ?execInt64Add@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200da0;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = local_2c;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar2 = local_34;
  }
  else {
    puVar2 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  lVar4 = FUN_10063120(*puVar3,puVar3[1]);
  lVar5 = FUN_10063120(*puVar2,puVar2[1]);
  FUN_100631b0(lVar4 + lVar5,&local_24);
  *(undefined4 *)param_2 = local_24;
  *(undefined4 *)((int)param_2 + 4) = local_20;
  ExceptionList = local_10;
  return;
}


// ==== 101015fc Catch@101015fc

void Catch_101015fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10101610 Catch@10101610

void Catch_10101610(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execInt64Add");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101630 UUIScript::execInt64Mul

/* public: void __thiscall UUIScript::execInt64Mul(struct FFrame &,void * const) */

void __thiscall UUIScript::execInt64Mul(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined8 uVar3;
  uint uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x101630  1465  ?execInt64Mul@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200dc0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
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
  uVar3 = __allmul(param_1,(int)param_1 >> 0x1f,local_18,local_18 >> 0x1f);
  FUN_100631b0(uVar3,&local_28);
  *(undefined4 *)param_2 = local_28;
  *(undefined4 *)((int)param_2 + 4) = local_24;
  ExceptionList = local_10;
  return;
}


// ==== 10101715 Catch@10101715

void Catch_10101715(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10101729 Catch@10101729

void Catch_10101729(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execInt64Mul");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101750 UUIScript::execInt2Int64

/* public: void __thiscall UUIScript::execInt2Int64(struct FFrame &,void * const) */

void __thiscall UUIScript::execInt2Int64(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x101750  1463  ?execInt2Int64@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200de0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_100631b0(local_18,local_18 >> 0x1f,&local_28);
  *(undefined4 *)param_2 = local_28;
  *(undefined4 *)((int)param_2 + 4) = local_24;
  ExceptionList = local_10;
  return;
}


// ==== 1010180a Catch@1010180a

void Catch_1010180a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010181e Catch@1010181e

void Catch_1010181e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execInt2Int64");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101840 UUIScript::execGetExpRate

/* public: void __thiscall UUIScript::execGetExpRate(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetExpRate(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  float10 fVar3;
  uint uStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x101840  1198  ?execGetExpRate@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200e00;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  param_1 = (FFrame *)0xffffffff;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  fVar3 = (float10)FUN_10065050(local_24,local_20,param_1);
  *(float *)param_2 = (float)fVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1010190e Catch@1010190e

void Catch_1010190e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10101922 Catch@10101922

void Catch_10101922(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetExpRate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101940 UUIScript::execGetCurrentResolution

/* public: void __thiscall UUIScript::execGetCurrentResolution(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetCurrentResolution(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 *puVar3;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x101940  1184  ?execGetCurrentResolution@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200e20;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = &local_1c;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  *(undefined4 *)param_1 = *(undefined4 *)GSEKScreenX_exref;
  *puVar3 = *(undefined4 *)GSEKScreenY_exref;
  ExceptionList = local_10;
  return;
}


// ==== 10101a72 Catch@10101a72

void Catch_10101a72(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10101a86 Catch@10101a86

void Catch_10101a86(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetCurrentResolution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101ab0 UUIScript::execRequestBypassToServer

/* public: void __thiscall UUIScript::execRequestBypassToServer(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestBypassToServer(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_48;
  L2ParamStack local_38 [16];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x101ab0  1574  ?execRequestBypassToServer@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200e52;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FString::Len(local_28);
  if (0 < iVar2) {
    L2ParamStack::L2ParamStack(local_38,10);
    local_8._0_1_ = 2;
    puVar3 = FString::operator*(local_28);
    L2ParamStack::PushBack(local_38,puVar3);
    FUN_10144a10(local_38);
    local_8 = CONCAT31(local_8._1_3_,1);
    L2ParamStack::~L2ParamStack(local_38);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10101ba8 Catch@10101ba8

void Catch_10101ba8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10101bbc Catch@10101bbc

void Catch_10101bbc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestBypassToServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101be0 UUIScript::execAddSystemMessage

/* public: void __thiscall UUIScript::execAddSystemMessage(struct FFrame &,void * const) */

void __thiscall UUIScript::execAddSystemMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ulong uVar2;
  ushort *puVar3;
  uint uStack_3c;
  FString local_2c [20];
  FColor local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x101be0  1072  ?execAddSystemMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200e79;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  FColor::FColor(local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FColor::operator_unsigned_long(local_18);
  puVar3 = FString::operator*(local_2c);
  FUN_101455b0(puVar3,uVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10101cd3 Catch@10101cd3

void Catch_10101cd3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10101ce7 Catch@10101ce7

void Catch_10101ce7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execAddSystemMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101d10 UUIScript::execAddSystemMessageParam

/* public: void __thiscall UUIScript::execAddSystemMessageParam(struct FFrame &,void * const) */

void __thiscall UUIScript::execAddSystemMessageParam(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x101d10  1073  ?execAddSystemMessageParam@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200ea9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x34c))(local_28);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10101dd2 Catch@10101dd2

void Catch_10101dd2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10101de6 Catch@10101de6

void Catch_10101de6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execAddSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101e10 UUIScript::execEndSystemMessageParam

/* public: void __thiscall UUIScript::execEndSystemMessageParam(struct FFrame &,void * const) */

void __thiscall UUIScript::execEndSystemMessageParam(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_854;
  L2ParamStack local_844 [20];
  FString local_830 [16];
  void *local_820;
  int local_81c;
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  int local_80c;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0x101e10  1143  ?execEndSystemMessageParam@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_810 = &LAB_10200ee2;
  local_814 = ExceptionList;
  uStack_854 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_854;
  ExceptionList = &local_814;
  local_80c = 0;
  local_820 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_854;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_820);
  local_81c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_81c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_844,10);
  local_80c._0_1_ = 1;
  FString::FString(local_830,(ushort *)&DAT_1022f9f8);
  local_80c._0_1_ = 2;
  L2ParamStack::PushBack(local_844,local_820);
  (**(code **)(*DAT_103663bc + 0x354))
            (local_844,CONCAT31((int3)((uint)local_808 >> 8),local_81c != 0),local_808,0);
  FString::operator=(local_830,local_808);
  FString::operator=(param_2,local_830);
  local_80c._0_1_ = 1;
  FString::~FString(local_830);
  local_80c = (uint)local_80c._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_844);
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 10101f71 Catch@10101f71

void Catch_10101f71(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10101f85 Catch@10101f85

void Catch_10101f85(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execEndSystemMessageParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10101fb0 UUIScript::execExecRestart

/* public: void __thiscall UUIScript::execExecRestart(struct FFrame &,void * const) */

void __thiscall UUIScript::execExecRestart(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x101fb0  1146  ?execExecRestart@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200f19;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (*(int *)(DAT_103663bc + 0x50ac) != 0) {
    FUN_1013ca20();
    if (*(int *)(*(int *)(DAT_103663bc + 0x50ac) + 0x218) != 0) {
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x218) + 0x13c))();
    }
  }
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  FUN_101420d0(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10102091 Catch@10102091

void Catch_10102091(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101020a5 Catch@101020a5

void Catch_101020a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execExecRestart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101020d0 UUIScript::execExecQuit

/* public: void __thiscall UUIScript::execExecQuit(struct FFrame &,void * const) */

void __thiscall UUIScript::execExecQuit(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1020d0  1145  ?execExecQuit@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200f40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((*(int *)GIsOnlyL2Console_exref == 0) && (*(int *)GL2ReplayMode_exref == 0)) {
    (**(code **)(*DAT_103663bc + 0x650))();
  }
  else {
    appRequestExit(0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10102177 Catch@10102177

void Catch_10102177(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010218b Catch@1010218b

void Catch_1010218b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execExecQuit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101021b0 UUIScript::User2FUserInfo

/* public: void __thiscall UUIScript::User2FUserInfo(struct User const *,struct FUserInfo *) */

void __thiscall UUIScript::User2FUserInfo(UUIScript *this,User *param_1,FUserInfo *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1021b0  1009  ?User2FUserInfo@UUIScript@@QAEXPBUUser@@PAUFUserInfo@@@Z */
  puStack_c = &LAB_10200f60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10064ca0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1010220d Catch@1010220d

void Catch_1010220d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10102221 Catch@10102221

void Catch_10102221(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::User2FUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102240 UUIScript::MagicSkillData2FSkillInfo

/* public: void __thiscall UUIScript::MagicSkillData2FSkillInfo(struct FL2MagicSkillData const
   *,struct FSkillInfo *) */

void __thiscall
UUIScript::MagicSkillData2FSkillInfo(UUIScript *this,FL2MagicSkillData *param_1,FSkillInfo *param_2)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102240  783
                       ?MagicSkillData2FSkillInfo@UUIScript@@QAEXPBUFL2MagicSkillData@@PAUFSkillInfo@@@Z
                        */
  puStack_c = &LAB_10200f80;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_1 != (FL2MagicSkillData *)0x0) && (param_2 != (FSkillInfo *)0x0)) {
    ExceptionList = &local_10;
    FStringNoInit::operator=((FStringNoInit *)param_2,(FString *)param_1);
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0xc),(FString *)(param_1 + 0xc));
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(uint *)(param_2 + 0x38) =
         *(uint *)(param_2 + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(param_2 + 0x38)) & 1;
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar1 = L2FName::operator*((L2FName *)(param_1 + 0x40));
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x40),puVar1);
    puVar1 = L2FName::operator*((L2FName *)(param_1 + 0x44));
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x4c),puVar1);
    puVar1 = L2FName::operator*((L2FName *)(param_1 + 0x48));
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x58),puVar1);
    *(uint *)(param_2 + 100) =
         *(uint *)(param_2 + 100) ^ (*(uint *)(param_1 + 0x4c) ^ *(uint *)(param_2 + 100)) & 1;
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x68),(FString *)(param_1 + 0x50));
    FStringNoInit::operator=((FStringNoInit *)(param_2 + 0x74),(FString *)(param_1 + 0x5c));
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x74);
    ExceptionList = local_10;
    return;
  }
  return;
}


// ==== 1010238d Catch@1010238d

void Catch_1010238d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101023a1 Catch@101023a1

void Catch_101023a1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::MagicSkillData2FSkillInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101023c0 UUIScript::Pet2FPetInfo

/* public: void __thiscall UUIScript::Pet2FPetInfo(struct PetInfo const *,struct FPetInfo *) */

void __thiscall UUIScript::Pet2FPetInfo(UUIScript *this,PetInfo *param_1,FPetInfo *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1023c0  830  ?Pet2FPetInfo@UUIScript@@QAEXPBUPetInfo@@PAUFPetInfo@@@Z */
  puStack_c = &LAB_10200fa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 4);
  FStringNoInit::operator=((FStringNoInit *)(param_2 + 4),(ushort *)(param_1 + 8));
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x50);
  FUN_100631b0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),param_2 + 0x28);
  FUN_100631b0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),param_2 + 0x30);
  FUN_100631b0(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  *(uint *)(param_2 + 0x80) =
       *(uint *)(param_2 + 0x80) ^ (*(uint *)param_1 ^ *(uint *)(param_2 + 0x80)) & 1;
  ExceptionList = local_10;
  return;
}


// ==== 10102517 Catch@10102517

void Catch_10102517(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010252b Catch@1010252b

void Catch_1010252b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::Pet2FPetInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102550 UUIScript::SetOwnerWndHandle

/* public: void __thiscall UUIScript::SetOwnerWndHandle(class UWindowHandle *) */

void __thiscall UUIScript::SetOwnerWndHandle(UUIScript *this,UWindowHandle *param_1)

{
                    /* 0x102550  919  ?SetOwnerWndHandle@UUIScript@@QAEXPAVUWindowHandle@@@Z */
  *(UWindowHandle **)(this + 0x34) = param_1;
  return;
}


// ==== 101025a3 Catch@101025a3

void Catch_101025a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101025b7 Catch@101025b7

void Catch_101025b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::SetOwnerWndHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101025e0 UUIScript::execRequestHennaItemInfo

/* public: void __thiscall UUIScript::execRequestHennaItemInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestHennaItemInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1025e0  1627  ?execRequestHennaItemInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200fe0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10143c30(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10102689 Catch@10102689

void Catch_10102689(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010269d Catch@1010269d

void Catch_1010269d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestHennaItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101026c0 UUIScript::execRequestHennaItemList

/* public: void __thiscall UUIScript::execRequestHennaItemList(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestHennaItemList(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1026c0  1628  ?execRequestHennaItemList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201000;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x298))();
  ExceptionList = local_10;
  return;
}


// ==== 10102745 Catch@10102745

void Catch_10102745(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10102759 Catch@10102759

void Catch_10102759(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestHennaItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102780 UUIScript::execRequestHennaEquip

/* public: void __thiscall UUIScript::execRequestHennaEquip(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestHennaEquip(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102780  1626  ?execRequestHennaEquip@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201020;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10143c40(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10102829 Catch@10102829

void Catch_10102829(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010283d Catch@1010283d

void Catch_1010283d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestHennaEquip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102860 UUIScript::execRequestHennaUnEquipInfo

/* public: void __thiscall UUIScript::execRequestHennaUnEquipInfo(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestHennaUnEquipInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102860  1630  ?execRequestHennaUnEquipInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201040;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10143c50(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10102909 Catch@10102909

void Catch_10102909(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010291d Catch@1010291d

void Catch_1010291d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestHennaUnEquipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102940 UUIScript::execRequestHennaUnEquipList

/* public: void __thiscall UUIScript::execRequestHennaUnEquipList(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestHennaUnEquipList(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102940  1631  ?execRequestHennaUnEquipList@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201060;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x29c))();
  ExceptionList = local_10;
  return;
}


// ==== 101029c5 Catch@101029c5

void Catch_101029c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101029d9 Catch@101029d9

void Catch_101029d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestHennaUnEquipList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102a00 UUIScript::execRequestHennaUnEquip

/* public: void __thiscall UUIScript::execRequestHennaUnEquip(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestHennaUnEquip(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102a00  1629  ?execRequestHennaUnEquip@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201080;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10143c60(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10102aa9 Catch@10102aa9

void Catch_10102aa9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10102abd Catch@10102abd

void Catch_10102abd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestHennaUnEquip");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102ae0 UUIScript::execGetPlayerPosition

/* public: void __thiscall UUIScript::execGetPlayerPosition(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPlayerPosition(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102ae0  1314  ?execGetPlayerPosition@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102010a0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_38;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  puVar2 = (undefined4 *)FUN_1014b730(local_28);
  *(undefined4 *)param_2 = *puVar2;
  *(undefined4 *)((int)param_2 + 4) = puVar2[1];
  *(undefined4 *)((int)param_2 + 8) = puVar2[2];
  ExceptionList = local_10;
  return;
}


// ==== 10102b77 Catch@10102b77

void Catch_10102b77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10102b8b Catch@10102b8b

void Catch_10102b8b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPlayerPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102bb0 UUIScript::execBeginReplay

/* public: void __thiscall UUIScript::execBeginReplay(struct FFrame &,void * const) */

void __thiscall UUIScript::execBeginReplay(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString aFStack_6c [8];
  undefined4 uStack_64;
  FFrame *pFStack_60;
  undefined4 uStack_5c;
  FFrame *pFStack_58;
  undefined4 *puStack_54;
  FFrame *pFStack_50;
  FFrame **ppFStack_4c;
  FFrame *pFStack_48;
  FString *pFStack_44;
  uint uStack_40;
  FString local_30 [20];
  FFrame *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x102bb0  1083  ?execBeginReplay@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102010d2;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_44 = (FString *)0x10102be9;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_44 = local_30;
  pFStack_48 = param_1;
  ppFStack_4c = (FFrame **)0x10102c0e;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_1c = (FFrame *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppFStack_4c = &local_1c;
  pFStack_50 = param_1;
  puStack_54 = (undefined4 *)0x10102c2f;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_54 = &local_18;
  pFStack_58 = param_1;
  uStack_5c = 0x10102c50;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_5c = 0;
    pFStack_60 = param_1;
    uStack_64 = 0x10102c74;
    (**(code **)(GNatives_exref + 0x108))();
  }
  if (*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x198) != 0) {
    uStack_5c = local_18;
    pFStack_60 = local_1c;
    FString::FString(aFStack_6c,local_30);
    local_8 = CONCAT31((int3)(local_8 >> 8),1);
    FL2ReplayManager::OnPublicLoad(*(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198));
  }
  local_8 = local_8 & 0xffffff00;
  uStack_5c = 0x10102cc6;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10102ce1 Catch@10102ce1

void Catch_10102ce1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10102cf5 Catch@10102cf5

void Catch_10102cf5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execBeginReplay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102d20 UUIScript::execEraseReplayFile

/* public: void __thiscall UUIScript::execEraseReplayFile(struct FFrame &,void * const) */

void __thiscall UUIScript::execEraseReplayFile(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *this_00;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_74;
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x102d20  1144  ?execEraseReplayFile@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201126;
  local_10 = ExceptionList;
  uStack_74 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (FString *)FString::Right(local_34,(int)local_64);
  local_8._0_1_ = 2;
  FString::Left(this_00,(int)local_58);
  local_8._0_1_ = 4;
  FString::~FString(local_64);
  FString::FString(local_4c,"..\\REPLAY");
  local_8._0_1_ = 5;
  FString::FString(local_40,".L2R");
  local_8._0_1_ = 6;
  FString::FString(local_28);
  local_8._0_1_ = 7;
  FString::operator+=(local_28,local_4c);
  FString::operator+=(local_28,(ushort *)&DAT_10258d10);
  FString::operator+=(local_28,local_58);
  FString::operator+=(local_28,local_40);
  iVar2 = **(int **)GFileManager_exref;
  uVar5 = 0;
  uVar4 = 0;
  puVar3 = FString::operator*(local_28);
  (**(code **)(iVar2 + 0x14))(puVar3,uVar4,uVar5);
  local_8._0_1_ = 6;
  FString::~FString(local_28);
  local_8._0_1_ = 5;
  FString::~FString(local_40);
  local_8._0_1_ = 4;
  FString::~FString(local_4c);
  local_8._0_1_ = 1;
  FString::~FString(local_58);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10102eba Catch@10102eba

void Catch_10102eba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10102ece Catch@10102ece

void Catch_10102ece(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execEraseReplayFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102ef0 UUIScript::execBeginPlay

/* public: void __thiscall UUIScript::execBeginPlay(struct FFrame &,void * const) */

void __thiscall UUIScript::execBeginPlay(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102ef0  1082  ?execBeginPlay@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FL2ReplayManager::SetState(*(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198),0);
  ExceptionList = local_10;
  return;
}


// ==== 10102f7b Catch@10102f7b

void Catch_10102f7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10102f8f Catch@10102f8f

void Catch_10102f8f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execBeginPlay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10102fb0 UUIScript::execBeginBenchMark

/* public: void __thiscall UUIScript::execBeginBenchMark(struct FFrame &,void * const) */

void __thiscall UUIScript::execBeginBenchMark(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x102fb0  1079  ?execBeginBenchMark@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)GIsBenchmarking_exref = 1;
  FL2ReplayManager::SetState(*(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198),0);
  FL2ReplayManager::ResetBMData(*(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198));
  appRandInit(0);
  ExceptionList = local_10;
  return;
}


// ==== 10103066 Catch@10103066

void Catch_10103066(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010307a Catch@1010307a

void Catch_1010307a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execBeginBenchMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101030a0 UUIScript::execRequestAcquireSkillInfo

/* public: void __thiscall UUIScript::execRequestAcquireSkillInfo(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestAcquireSkillInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_44;
  L2ParamStack local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x1030a0  1562  ?execRequestAcquireSkillInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201199;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  L2ParamStack::L2ParamStack(local_34,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_34,local_18);
  L2ParamStack::PushBack(local_34,param_1);
  L2ParamStack::PushBack(local_34,local_1c);
  (**(code **)(*DAT_103663bc + 0x7e0))(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101031c5 Catch@101031c5

void Catch_101031c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101031d9 Catch@101031d9

void Catch_101031d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestAcquireSkillInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103200 UUIScript::execRequestExEnchantSkillInfo

/* public: void __thiscall UUIScript::execRequestExEnchantSkillInfo(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestExEnchantSkillInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x103200  1619
                       ?execRequestExEnchantSkillInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102011c9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  L2ParamStack::PushBack(local_30,param_1);
  (**(code **)(*DAT_103663bc + 0x7e8))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 101032fb Catch@101032fb

void Catch_101032fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010330f Catch@1010330f

void Catch_1010330f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestExEnchantSkillInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103330 UUIScript::execRequestAcquireSkill

/* public: void __thiscall UUIScript::execRequestAcquireSkill(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestAcquireSkill(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_44;
  L2ParamStack local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x103330  1561  ?execRequestAcquireSkill@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102011f9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  L2ParamStack::L2ParamStack(local_34,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_34,local_18);
  L2ParamStack::PushBack(local_34,param_1);
  L2ParamStack::PushBack(local_34,local_1c);
  (**(code **)(*DAT_103663bc + 0x7e4))(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10103455 Catch@10103455

void Catch_10103455(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10103469 Catch@10103469

void Catch_10103469(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestAcquireSkill");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103490 UUIScript::execRequestExEnchantSkill

/* public: void __thiscall UUIScript::execRequestExEnchantSkill(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestExEnchantSkill(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x103490  1618  ?execRequestExEnchantSkill@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201229;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  L2ParamStack::PushBack(local_30,param_1);
  (**(code **)(*DAT_103663bc + 0x7ec))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010358b Catch@1010358b

void Catch_1010358b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010359f Catch@1010359f

void Catch_1010359f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestExEnchantSkill");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101035c0 UUIScript::execSetPrivateShopMessage

/* public: void __thiscall UUIScript::execSetPrivateShopMessage(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetPrivateShopMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1035c0  1779  ?execSetPrivateShopMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201262;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FString::operator==(local_34,(ushort *)L"sell");
  if (iVar2 == 0) {
    iVar2 = FString::operator==(local_34,(ushort *)&DAT_1026cfa0);
    if (iVar2 != 0) {
      puVar3 = FString::operator*(local_28);
      FUN_101452c0(puVar3);
    }
  }
  else {
    puVar3 = FString::operator*(local_28);
    FUN_10145270(puVar3);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101036f4 Catch@101036f4

void Catch_101036f4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10103708 Catch@10103708

void Catch_10103708(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetPrivateShopMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103730 UUIScript::execGetPrivateShopMessage

/* public: void __thiscall UUIScript::execGetPrivateShopMessage(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPrivateShopMessage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x103730  1316  ?execGetPrivateShopMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020129b;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_18 = (ushort *)0x0;
  iVar2 = FUN_1014dd00();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x204) != 0)) {
    iVar3 = FString::operator==(local_2c,(ushort *)L"sell");
    if (iVar3 == 0) {
      iVar3 = FString::operator==(local_2c,(ushort *)&DAT_1026cfa0);
      if (iVar3 == 0) goto LAB_1010382a;
      pFVar4 = (FString *)(*(int *)(iVar2 + 0x204) + 0x17b8);
    }
    else {
      pFVar4 = (FString *)(*(int *)(iVar2 + 0x204) + 0x17ac);
    }
    local_18 = FString::operator*(pFVar4);
    if (local_18 != (ushort *)0x0) {
      pFVar4 = (FString *)FString::FString(local_38,local_18);
      local_8._0_1_ = 2;
      goto LAB_1010383c;
    }
  }
LAB_1010382a:
  pFVar4 = (FString *)FString::FString(local_38,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 3;
LAB_1010383c:
  FString::operator=(param_2,pFVar4);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010387a Catch@1010387a

void Catch_1010387a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010388e Catch@1010388e

void Catch_1010388e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPrivateShopMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101038b0 UUIScript::execRequestObserverModeEnd

/* public: void __thiscall UUIScript::execRequestObserverModeEnd(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestObserverModeEnd(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1038b0  1642  ?execRequestObserverModeEnd@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102012c9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  (**(code **)(*DAT_103663bc + 0x7f4))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10103957 Catch@10103957

void Catch_10103957(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010396b Catch@1010396b

void Catch_1010396b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestObserverModeEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103990 UUIScript::execRequestFishRanking

/* public: void __thiscall UUIScript::execRequestFishRanking(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestFishRanking(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x103990  1622  ?execRequestFishRanking@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102012f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x4fc))();
  ExceptionList = local_10;
  return;
}


// ==== 10103a1a Catch@10103a1a

void Catch_10103a1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10103a2e Catch@10103a2e

void Catch_10103a2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestFishRanking");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103a50 UUIScript::execInitFishViewportWnd

/* public: void __thiscall UUIScript::execInitFishViewportWnd(struct FFrame &,void * const) */

void __thiscall UUIScript::execInitFishViewportWnd(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x103a50  1450  ?execInitFishViewportWnd@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201310;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x758))(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10103afe Catch@10103afe

void Catch_10103afe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10103b12 Catch@10103b12

void Catch_10103b12(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execInitFishViewportWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103b30 UUIScript::execFishFinalAction

/* public: void __thiscall UUIScript::execFishFinalAction(struct FFrame &,void * const) */

void __thiscall UUIScript::execFishFinalAction(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x103b30  1154  ?execFishFinalAction@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201330;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x764))();
  ExceptionList = local_10;
  return;
}


// ==== 10103bb5 Catch@10103bb5

void Catch_10103bb5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10103bc9 Catch@10103bc9

void Catch_10103bc9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execFishFinalAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103bf0 UUIScript::execRequestMultiSellChoose

/* public: void __thiscall UUIScript::execRequestMultiSellChoose(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestMultiSellChoose(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_64;
  L2ParamStack local_54 [16];
  FString local_44 [12];
  FString local_38 [32];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x103bf0  1641  ?execRequestMultiSellChoose@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201397;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_38);
  local_8._0_1_ = 2;
  L2ParamStack::L2ParamStack(local_54,10);
  local_8._0_1_ = 3;
  FString::FString(local_44,(ushort *)L"ShopID");
  local_8._0_1_ = 4;
  FUN_100404d0(local_44,&local_18);
  local_8._0_1_ = 3;
  FString::~FString(local_44);
  L2ParamStack::PushBack(local_54,local_18);
  FString::FString(local_44,(ushort *)L"ItemID");
  local_8._0_1_ = 5;
  FUN_100404d0(local_44,&local_18);
  local_8._0_1_ = 3;
  FString::~FString(local_44);
  L2ParamStack::PushBack(local_54,local_18);
  FString::FString(local_44,(ushort *)L"ItemCount");
  local_8._0_1_ = 6;
  FUN_100404d0(local_44,&local_18);
  local_8._0_1_ = 3;
  FString::~FString(local_44);
  L2ParamStack::PushBack(local_54,local_18);
  FString::FString(local_44,(ushort *)L"RefineryOp1");
  local_8._0_1_ = 7;
  FUN_100404d0(local_44,&local_18);
  local_8._0_1_ = 3;
  FString::~FString(local_44);
  L2ParamStack::PushBack(local_54,local_18);
  FString::FString(local_44,(ushort *)L"RefineryOp2");
  local_8._0_1_ = 8;
  FUN_100404d0(local_44,&local_18);
  local_8._0_1_ = 3;
  FString::~FString(local_44);
  L2ParamStack::PushBack(local_54,local_18);
  (**(code **)(*DAT_103663bc + 0x414))(local_54);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_54);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10103e03 Catch@10103e03

void Catch_10103e03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10103e17 Catch@10103e17

void Catch_10103e17(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestMultiSellChoose");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103e40 UUIScript::execRequestRestartPoint

/* public: void __thiscall UUIScript::execRequestRestartPoint(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestRestartPoint(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x103e40  1677  ?execRequestRestartPoint@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102013c9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (-1 < (int)local_18) {
    L2ParamStack::L2ParamStack(local_30,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_30,local_18);
    FUN_10142100(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10103f0e Catch@10103f0e

void Catch_10103f0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10103f22 Catch@10103f22

void Catch_10103f22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestRestartPoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10103f40 UUIScript::execGetAdena

/* public: void __thiscall UUIScript::execGetAdena(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetAdena(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x103f40  1156  ?execGetAdena@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102013f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101b2500();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10103fca Catch@10103fca

void Catch_10103fca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10103fde Catch@10103fde

void Catch_10103fde(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetAdena");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104000 UUIScript::execRequestUseItem

/* public: void __thiscall UUIScript::execRequestUseItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestUseItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x104000  1693  ?execRequestUseItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201410;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10142ea0(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101040a9 Catch@101040a9

void Catch_101040a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101040bd Catch@101040bd

void Catch_101040bd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestUseItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101040e0 UUIScript::execGetManorCount

/* public: void __thiscall UUIScript::execGetManorCount(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetManorCount(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1040e0  1251  ?execGetManorCount@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = FUN_101ad660();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1010416a Catch@1010416a

void Catch_1010416a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010417e Catch@1010417e

void Catch_1010417e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetManorCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101041a0 UUIScript::execGetManorIDInManorList

/* public: void __thiscall UUIScript::execGetManorIDInManorList(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetManorIDInManorList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1041a0  1252  ?execGetManorIDInManorList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201450;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FUN_101ae5f0(local_18);
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10104254 Catch@10104254

void Catch_10104254(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10104268 Catch@10104268

void Catch_10104268(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetManorIDInManorList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104290 UUIScript::execGetManorNameInManorList

/* public: void __thiscall UUIScript::execGetManorNameInManorList(struct FFrame &,void * const) */

void __thiscall
UUIScript::execGetManorNameInManorList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *pFVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x104290  1253  ?execGetManorNameInManorList@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201479;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = (FString *)FUN_101ae6a0(local_2c,local_18);
  local_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10104356 Catch@10104356

void Catch_10104356(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010436a Catch@1010436a

void Catch_1010436a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetManorNameInManorList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104390 UUIScript::execRequestUnequipItem

/* public: void __thiscall UUIScript::execRequestUnequipItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestUnequipItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FFrame *pFVar3;
  uint uStack_40;
  L2ParamStack local_30 [24];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar3 = param_1;
                    /* 0x104390  1692  ?execRequestUnequipItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102014a9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar3 + 0xc);
  *(byte **)(pFVar3 + 0xc) = *(byte **)(pFVar3 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar3,&param_1);
  *(int *)(pFVar3 + 0xc) = *(int *)(pFVar3 + 0xc) + 1;
  if (**(char **)(pFVar3 + 0xc) == 'B') {
    *(char **)(pFVar3 + 0xc) = *(char **)(pFVar3 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar3,0);
  }
  iVar2 = FUN_1014dd00();
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  if (*(int *)(iVar2 + 0x9c) == local_18) {
    pFVar3 = (FFrame *)0x2;
  }
  else if (*(int *)(iVar2 + 0xa0) == local_18) {
    pFVar3 = (FFrame *)0x4;
  }
  else if (*(int *)(iVar2 + 0xa8) == local_18) {
    pFVar3 = (FFrame *)0x10;
  }
  else {
    pFVar3 = param_1;
    if (*(int *)(iVar2 + 0xac) == local_18) {
      pFVar3 = (FFrame *)0x20;
    }
  }
  L2ParamStack::PushBack(local_30,pFVar3);
  FUN_10142f70(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 101044bb Catch@101044bb

void Catch_101044bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101044cf Catch@101044cf

void Catch_101044cf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestUnequipItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101044f0 UUIScript::execRequestCrystallizeItem

/* public: void __thiscall UUIScript::execRequestCrystallizeItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestCrystallizeItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1044f0  1605  ?execRequestCrystallizeItem@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102014d0;
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
  (**(code **)(*DAT_103663bc + 2000))(local_18,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101045bc Catch@101045bc

void Catch_101045bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101045d0 Catch@101045d0

void Catch_101045d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestCrystallizeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101045f0 UUIScript::execRequestItemList

/* public: void __thiscall UUIScript::execRequestItemList(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestItemList(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1045f0  1633  ?execRequestItemList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102014f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10142e10();
  ExceptionList = local_10;
  return;
}


// ==== 10104670 Catch@10104670

void Catch_10104670(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10104684 Catch@10104684

void Catch_10104684(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101046b0 UUIScript::execRequestDuelStart

/* public: void __thiscall UUIScript::execRequestDuelStart(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestDuelStart(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1046b0  1614  ?execRequestDuelStart@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201519;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101445d0(local_2c,local_18);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010478d Catch@1010478d

void Catch_1010478d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101047a1 Catch@101047a1

void Catch_101047a1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestDuelStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


