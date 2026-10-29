// ==== 10740ed0 FUN_10740ed0

undefined4 FUN_10740ed0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  FStaticTexture local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082ec60;
  local_c = ExceptionList;
  if (*(int *)(*(int *)(in_ECX + 0xc) + 0x60c) != 0) {
    ExceptionList = &local_c;
    piVar1 = (int *)FStaticTexture::FStaticTexture
                              (local_20,*(UTexture **)(*(int *)(in_ECX + 0xc) + 0x60c));
    local_4 = 0;
    uVar2 = (**(code **)(*piVar1 + 0x38))();
    local_4 = 0xffffffff;
    FRenderResource::~FRenderResource((FRenderResource *)local_20);
    ExceptionList = local_c;
    return uVar2;
  }
  return 5;
}


// ==== 10740f70 FUN_10740f70

undefined4 FUN_10740f70(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  FStaticTexture local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082eca0;
  local_c = ExceptionList;
  if (*(int *)(*(int *)(in_ECX + 0xc) + 0x60c) != 0) {
    ExceptionList = &local_c;
    piVar1 = (int *)FStaticTexture::FStaticTexture
                              (local_20,*(UTexture **)(*(int *)(in_ECX + 0xc) + 0x60c));
    local_4 = 0;
    uVar2 = (**(code **)(*piVar1 + 0x3c))();
    local_4 = 0xffffffff;
    FRenderResource::~FRenderResource((FRenderResource *)local_20);
    ExceptionList = local_c;
    return uVar2;
  }
  return 0;
}


// ==== 10741010 FUN_10741010

undefined4 FUN_10741010(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  FStaticTexture local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082ece0;
  local_c = ExceptionList;
  if (*(int *)(*(int *)(in_ECX + 0xc) + 0x60c) != 0) {
    ExceptionList = &local_c;
    piVar1 = (int *)FStaticTexture::FStaticTexture
                              (local_20,*(UTexture **)(*(int *)(in_ECX + 0xc) + 0x60c));
    local_4 = 0;
    uVar2 = (**(code **)(*piVar1 + 0x40))();
    local_4 = 0xffffffff;
    FRenderResource::~FRenderResource((FRenderResource *)local_20);
    ExceptionList = local_c;
    return uVar2;
  }
  return 0;
}


// ==== 107410f0 FUN_107410f0

void FUN_107410f0(void)

{
  int iVar1;
  FColor *pFVar2;
  FColor FVar3;
  FColor *pFVar4;
  UTexture *in_ECX;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ed00;
  local_10 = ExceptionList;
  iVar5 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x594) == 0) {
    *(undefined4 *)(in_ECX + 0x5a4) = 0xffffffff;
  }
  else {
    ExceptionList = &local_10;
    *(undefined4 *)(in_ECX + 0x5a4) = 0;
    pFVar4 = UTexture::GetColors(in_ECX);
    for (; iVar5 < *(int *)(in_ECX + 0x5f4); iVar5 = iVar5 + 1) {
      iVar6 = 0;
      while( true ) {
        iVar1 = *(int *)(in_ECX + 0x5f0) + iVar5 * 0x28;
        if (*(int *)(iVar1 + 0x20) <= iVar6) break;
        pFVar2 = pFVar4 + (uint)*(byte *)(*(int *)(iVar1 + 0x1c) + iVar6) * 4;
        FVar3 = *(FColor *)(in_ECX + 0x5a6);
        if ((byte)*(FColor *)(in_ECX + 0x5a6) < (byte)pFVar2[2]) {
          FVar3 = pFVar2[2];
        }
        *(FColor *)(in_ECX + 0x5a6) = FVar3;
        FVar3 = pFVar2[1];
        if ((byte)pFVar2[1] <= (byte)*(FColor *)(in_ECX + 0x5a5)) {
          FVar3 = *(FColor *)(in_ECX + 0x5a5);
        }
        *(FColor *)(in_ECX + 0x5a5) = FVar3;
        FVar3 = *pFVar2;
        if ((byte)*pFVar2 <= (byte)*(FColor *)(in_ECX + 0x5a4)) {
          FVar3 = *(FColor *)(in_ECX + 0x5a4);
        }
        *(FColor *)(in_ECX + 0x5a4) = FVar3;
        FVar3 = *(FColor *)(in_ECX + 0x5a7);
        if ((byte)*(FColor *)(in_ECX + 0x5a7) < (byte)pFVar2[3]) {
          FVar3 = pFVar2[3];
        }
        *(FColor *)(in_ECX + 0x5a7) = FVar3;
        iVar6 = iVar6 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10741205 Catch@10741205

void Catch_10741205(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10741219 Catch@10741219

void Catch_10741219(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::CreateColorRange");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x28),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107412b0 FUN_107412b0

void FUN_107412b0(byte param_1)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ed10;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_10;
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x5f4); iVar1 = iVar1 + 1) {
      FMipmap::Clear((FMipmap *)(*(int *)(in_ECX + 0x5f0) + iVar1 * 0x28));
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10741320 Catch@10741320

void Catch_10741320(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10741334 Catch@10741334

void Catch_10741334(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::Clear");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107413a0 FUN_107413a0

undefined4 FUN_107413a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  FOutputDevice *in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  undefined *puVar2;
  
  if (param_2 != 0) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(in_ECX,*(ushort **)GLog_exref);
    }
    appFailAssert("0",".\\UnTex.cpp",0x58b);
    return 0;
  }
  puVar2 = &DAT_10853a28;
  uVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(unaff_EDI * unaff_ESI * 4,&DAT_10853a28);
  *param_1 = uVar1;
  FUN_1073f490(puVar2);
  return 0;
}


// ==== 10741440 FUN_10741440

undefined4 FUN_10741440(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *unaff_EBX;
  
  iVar1 = (int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2;
  uVar6 = 0xffffffff;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  iVar2 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  iVar2 = iVar2 * iVar1;
  puVar4 = unaff_EBX;
  iVar1 = iVar2;
  if (iVar2 != 0) {
    do {
      iVar1 = iVar1 + -1;
      if (uVar6 != 0xffffffff) goto LAB_1074151d;
      uVar6 = *puVar4 & puVar4[1];
      puVar4 = puVar4 + 4;
    } while (iVar1 != 0);
    if (uVar6 != 0xffffffff) goto LAB_1074151d;
  }
  if (param_5 == 0) {
    puVar3 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(iVar2 * 8,&DAT_10853a28);
    *param_2 = puVar3;
    puVar4 = unaff_EBX + 2;
    if (0 < iVar2) {
      do {
        uVar6 = *puVar4;
        if ((ushort)*puVar4 < *(ushort *)((int)puVar4 + 2)) {
          *puVar3 = uVar6 >> 0x10 | uVar6 << 0x10;
          uVar6 = puVar4[1] ^ 0x55555555;
        }
        else {
          *puVar3 = uVar6;
          uVar6 = puVar4[1];
        }
        puVar3[1] = uVar6;
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return 1;
  }
LAB_1074151d:
  if (param_3 == 0) {
    uVar5 = (**(code **)**(undefined4 **)GMalloc_exref)(param_1 * (int)param_2 * 4,&DAT_10853a28);
    *param_2 = uVar5;
    FUN_1073f7b0();
    return 0;
  }
  appFailAssert("0",".\\UnTex.cpp",0x5c8);
  return 0;
}


// ==== 107415d0 FUN_107415d0

undefined4 FUN_107415d0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  short *psVar6;
  uint uVar7;
  short *unaff_EBX;
  short sVar8;
  
  iVar1 = (int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2;
  sVar8 = -1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  iVar2 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  iVar2 = iVar2 * iVar1;
  iVar1 = iVar2;
  psVar6 = unaff_EBX;
  if (iVar2 != 0) {
    do {
      iVar1 = iVar1 + -1;
      if (sVar8 != -1) goto LAB_107416ad;
      sVar8 = *psVar6;
      psVar6 = psVar6 + 8;
    } while (iVar1 != 0);
    if (sVar8 != -1) goto LAB_107416ad;
  }
  if (param_5 == 0) {
    puVar3 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(iVar2 * 8,&DAT_10853a28);
    *param_2 = puVar3;
    puVar4 = (uint *)(unaff_EBX + 4);
    if (0 < iVar2) {
      do {
        uVar7 = *puVar4;
        if ((ushort)*puVar4 < *(ushort *)((int)puVar4 + 2)) {
          *puVar3 = uVar7 >> 0x10 | uVar7 << 0x10;
          uVar7 = puVar4[1] ^ 0x55555555;
        }
        else {
          *puVar3 = uVar7;
          uVar7 = puVar4[1];
        }
        puVar3[1] = uVar7;
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return 1;
  }
LAB_107416ad:
  if (param_3 == 0) {
    uVar5 = (**(code **)**(undefined4 **)GMalloc_exref)(param_1 * (int)param_2 * 4,&DAT_10853a28);
    *param_2 = uVar5;
    FUN_1073fb20();
    return 0;
  }
  appFailAssert("0",".\\UnTex.cpp",0x626);
  return 0;
}


// ==== 10741760 FUN_10741760

void FUN_10741760(UObject *param_1)

{
  ulong uVar1;
  undefined4 *in_ECX;
  longlong lVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082ed28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10740b80();
  local_4 = 0;
  *in_ECX = FStaticCubemap::vftable;
  in_ECX[3] = param_1;
  if (param_1 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UObject::GetCacheIndex(param_1);
  }
  lVar2 = __allmul(uVar1,0,0x100,0);
  *(longlong *)(in_ECX + 1) = lVar2 + 0xe0;
  in_ECX[4] = 1;
  ExceptionList = local_c;
  return;
}


// ==== 10741810 FUN_10741810

void FUN_10741810(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UPalette::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 10741830 FUN_10741830

undefined4 FUN_10741830(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ed40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1037a940(param_1,param_2 + 0x10);
  uVar1 = thunk_FUN_10330040(param_1,param_2 + 4,param_2 + 8,param_2 + 0xc,param_2 + 0xd);
  uVar1 = thunk_FUN_10330040(uVar1);
  uVar1 = thunk_FUN_1032ffe0(uVar1);
  thunk_FUN_1032ffe0(uVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 107418b2 Catch@107418b2

void Catch_107418b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107418c6 Catch@107418c6

void Catch_107418c6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMipmap<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10741910 FUN_10741910

void FUN_10741910(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1082ed6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UObject::UObject(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UPalette::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x34));
  ExceptionList = local_10;
  return;
}


// ==== 10741977 Catch@10741977

void Catch_10741977(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074198b Catch@1074198b

void Catch_1074198b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UPalette::UPalette");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107419d0 FUN_107419d0

void FUN_107419d0(FArchive *param_1)

{
  int iVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ed80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  thunk_FUN_10682a50(param_1,in_ECX + 0x34);
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x42) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x38); iVar1 = iVar1 + 1) {
      *(undefined1 *)(*(int *)(in_ECX + 0x34) + 3 + iVar1 * 4) = 0xff;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10741a4f Catch@10741a4f

void Catch_10741a4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10741a63 Catch@10741a63

void Catch_10741a63(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UPalette::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10741ab0 FUN_10741ab0

UObject * FUN_10741ab0(void)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  UObject *in_ECX;
  int *piVar5;
  int iVar6;
  int local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ed90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10741810();
  do {
    if (*(int *)(GObjObjects_exref + 4) <= local_30) {
      ExceptionList = local_10;
      return in_ECX;
    }
    pUVar2 = *(UObject **)(*(int *)GObjObjects_exref + local_30 * 4);
    if (pUVar2 != in_ECX) {
      pUVar2 = UObject::GetOuter(pUVar2);
      pUVar3 = UObject::GetOuter(in_ECX);
      if (pUVar2 == pUVar3) {
        piVar5 = *(int **)(*(int *)(*(int *)GObjObjects_exref + local_30 * 4) + 0x34);
        piVar4 = *(int **)(in_ECX + 0x34);
        for (iVar6 = 0; iVar6 < 0x100; iVar6 = iVar6 + 1) {
          iVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          if (*piVar4 != iVar1) break;
          piVar4 = piVar4 + 1;
        }
        if (iVar6 == 0x100) {
          if (*(int *)GLog_exref != 0) {
            UObject::GetName(*(UObject **)(*(int *)GObjObjects_exref + local_30 * 4));
            UObject::GetName(in_ECX);
            FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2f8);
          }
          if (in_ECX != (UObject *)0x0) {
            (**(code **)(*(int *)in_ECX + 0xc))();
          }
          ExceptionList = local_10;
          return *(UObject **)(*(int *)GObjObjects_exref + local_30 * 4);
        }
      }
    }
    thunk_FUN_103737b0();
  } while( true );
}


// ==== 10741bf3 Catch@10741bf3

void Catch_10741bf3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10741c07 Catch@10741c07

void Catch_10741c07(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UPalette::ReplaceWithExisting");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x24),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10741ca0 FUN_10741ca0

undefined4
FUN_10741ca0(void *param_1,int param_2,size_t param_3,undefined4 param_4,undefined4 param_5,
            UObject *param_6)

{
  FMipmap *this;
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  FArray *this_00;
  
  if (param_6 != (UObject *)0x0) {
    iVar3 = UObject::IsA(param_6,&UTexture::PrivateStaticClass);
    if (iVar3 != 0) {
      uVar1 = appCeilLogTwo(*(int *)(param_6 + 0x580) >> ((byte)param_2 & 0x1f));
      uVar2 = appCeilLogTwo(*(int *)(param_6 + 0x584) >> ((byte)param_2 & 0x1f));
      this_00 = (FArray *)(param_6 + 0x5f0);
      iVar3 = FArray::Add(this_00,1,0x28);
      this = (FMipmap *)(*(int *)this_00 + iVar3 * 0x28);
      if (this != (FMipmap *)0x0) {
        FMipmap::FMipmap(this,uVar1,uVar2,param_3);
      }
      _memcpy(*(void **)(*(int *)this_00 + 0x1c + param_2 * 0x28),param_1,param_3);
    }
  }
  return 0;
}


// ==== 10741d70 FUN_10741d70

undefined4 FUN_10741d70(int param_1)

{
  uint uVar1;
  size_t _Size;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_40;
  void *local_28 [3];
  byte abStack_1c [5];
  byte bStack_17;
  byte bStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082edb1;
  local_c = ExceptionList;
  if ((*(char *)(in_ECX + 0x578) == '\a') && (param_1 == 5)) {
    local_5c = 0;
    if (0 < *(int *)(in_ECX + 0x5f4)) {
      local_58 = 0;
      ExceptionList = &local_c;
      do {
        iVar7 = *(int *)(in_ECX + 0x584) >> ((byte)local_5c & 0x1f);
        iVar6 = *(int *)(in_ECX + 0x580) >> ((byte)local_5c & 0x1f);
        FArray::FArray((FArray *)local_28,iVar7 * iVar6,4);
        local_4 = 1;
        iVar2 = *(int *)(in_ECX + 0x5f0) + local_58;
        if (*(int *)(iVar2 + 0x20) == 0) {
          (*(code *)**(undefined4 **)(iVar2 + 0x10))();
        }
        local_40 = 0;
        if (0 < iVar7) {
          local_60 = iVar6 * 4;
          local_64 = iVar6 * 8;
          iVar5 = iVar6 * 0x10;
          iVar2 = iVar6 * 0xc;
          local_68 = 0;
          do {
            iStack_54 = 0;
            if (0 < iVar6) {
              abStack_1c[3] = 0xff;
              uStack_15 = 0xff;
              uStack_11 = 0xff;
              param_1 = local_64;
              iStack_4c = local_60;
              iStack_50 = local_68;
              iStack_6c = iVar2;
              do {
                iVar4 = (((int)(iStack_54 + (iStack_54 >> 0x1f & 3U)) >> 2) +
                        ((int)(local_40 + (local_40 >> 0x1f & 3U)) >> 2) *
                        ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2)) * 0x10 +
                        *(int *)(local_58 + 0x1c + *(int *)(in_ECX + 0x5f0));
                uVar1 = *(uint *)(iVar4 + 10);
                abStack_1c[0] = *(char *)(iVar4 + 8) * '\b';
                bStack_16 = (char)(uVar1 >> 0xb) << 3;
                bStack_17 = (char)(uVar1 >> 5) * '\x04';
                abStack_1c[4] = *(char *)(iVar4 + 10) * '\b';
                abStack_1c[2] = (char)(*(uint *)(iVar4 + 8) >> 0xb) << 3;
                abStack_1c[1] = (char)(*(uint *)(iVar4 + 8) >> 5) * '\x04';
                if ((ushort)uVar1 < *(ushort *)(iVar4 + 8)) {
                  uStack_12 = (char)((ulonglong)
                                     ((longlong)(int)((uint)bStack_16 + (uint)abStack_1c[2] * 2) *
                                     0x55555556) >> 0x20);
                  uStack_13 = (char)((ulonglong)
                                     ((longlong)(int)((uint)bStack_17 + (uint)abStack_1c[1] * 2) *
                                     0x55555556) >> 0x20);
                  uStack_14 = (char)((ulonglong)
                                     ((longlong)(int)((uint)abStack_1c[4] + (uint)abStack_1c[0] * 2)
                                     * 0x55555556) >> 0x20);
                  uStack_e = (char)((ulonglong)
                                    ((longlong)(int)((uint)abStack_1c[2] + (uint)bStack_16 * 2) *
                                    0x55555556) >> 0x20);
                  uStack_f = (char)((ulonglong)
                                    ((longlong)(int)((uint)abStack_1c[1] + (uint)bStack_17 * 2) *
                                    0x55555556) >> 0x20);
                  uStack_d = 0xff;
                  uStack_10 = (char)((ulonglong)
                                     ((longlong)(int)((uint)abStack_1c[0] + (uint)abStack_1c[4] * 2)
                                     * 0x55555556) >> 0x20);
                }
                else {
                  uStack_12 = (char)(((uint)bStack_16 + (uint)abStack_1c[2]) / 2);
                  uStack_13 = (char)(((uint)bStack_17 + (uint)abStack_1c[1]) / 2);
                  uStack_14 = (char)(((uint)abStack_1c[4] + (uint)abStack_1c[0]) / 2);
                  uStack_d = 0;
                  uStack_e = 0;
                  uStack_f = 0xff;
                  uStack_10 = 0xff;
                }
                *(undefined4 *)((int)local_28[0] + iStack_50) =
                     *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xc) & 3) * 4);
                *(undefined4 *)((int)local_28[0] + iStack_50 + 4) =
                     *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xc) >> 2 & 3) * 4);
                *(undefined4 *)((int)local_28[0] + iStack_50 + 8) =
                     *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xc) >> 4 & 3) * 4);
                *(undefined4 *)((int)local_28[0] + iStack_50 + 0xc) =
                     *(undefined4 *)(abStack_1c + (uint)(*(byte *)(iVar4 + 0xc) >> 6) * 4);
                *(undefined4 *)((int)local_28[0] + iStack_4c) =
                     *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xd) & 3) * 4);
                *(undefined4 *)((int)local_28[0] + iStack_4c + 4) =
                     *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xd) >> 2 & 3) * 4);
                *(undefined4 *)((int)local_28[0] + iStack_4c + 8) =
                     *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xd) >> 4 & 3) * 4);
                *(undefined4 *)((int)local_28[0] + iStack_4c + 0xc) =
                     *(undefined4 *)(abStack_1c + (uint)(*(byte *)(iVar4 + 0xd) >> 6) * 4);
                puVar3 = (undefined4 *)((int)local_28[0] + param_1);
                *puVar3 = *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xe) & 3) * 4);
                puVar3[1] = *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xe) >> 2 & 3) * 4);
                puVar3[2] = *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xe) >> 4 & 3) * 4);
                puVar3[3] = *(undefined4 *)(abStack_1c + (uint)(*(byte *)(iVar4 + 0xe) >> 6) * 4);
                puVar3 = (undefined4 *)((int)local_28[0] + iStack_6c);
                *puVar3 = *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xf) & 3) * 4);
                puVar3[1] = *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xf) >> 2 & 3) * 4);
                puVar3[2] = *(undefined4 *)(abStack_1c + (*(byte *)(iVar4 + 0xf) >> 4 & 3) * 4);
                puVar3[3] = *(undefined4 *)(abStack_1c + (uint)(*(byte *)(iVar4 + 0xf) >> 6) * 4);
                param_1 = param_1 + 0x10;
                iStack_6c = iStack_6c + 0x10;
                iStack_50 = iStack_50 + 0x10;
                iStack_54 = iStack_54 + 4;
                iStack_4c = iStack_4c + 0x10;
              } while (iStack_54 < iVar6);
            }
            local_68 = local_68 + iVar5;
            local_64 = local_64 + iVar5;
            local_60 = local_60 + iVar5;
            local_40 = local_40 + 4;
            iVar2 = iVar2 + iVar5;
          } while (local_40 < iVar7);
        }
        _Size = iVar7 * iVar6 * 4;
        FArray::Empty((FArray *)(local_58 + 0x1c + *(int *)(in_ECX + 0x5f0)),1,_Size);
        FArray::Add((FArray *)(local_58 + 0x1c + *(int *)(in_ECX + 0x5f0)),_Size,1);
        _memcpy(*(void **)(local_58 + 0x1c + *(int *)(in_ECX + 0x5f0)),local_28[0],_Size);
        local_4 = 0xffffffff;
        thunk_FUN_10391680();
        local_5c = local_5c + 1;
        local_58 = local_58 + 0x28;
      } while (local_5c < *(int *)(in_ECX + 0x5f4));
    }
    *(uint *)(in_ECX + 0x5c0) = *(uint *)(in_ECX + 0x5c0) | 0x80;
    *(undefined1 *)(in_ECX + 0x578) = 5;
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


// ==== 107423d0 FUN_107423d0

char FUN_107423d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  FOutputDevice *this;
  int iVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082edd0;
  local_10 = ExceptionList;
  iVar4 = 0;
  local_8 = 0;
  param_1 = param_1 * 0x28;
  iVar3 = *(int *)(in_ECX + 0x5f0) + param_1;
  ExceptionList = &local_10;
  if (*(int *)(iVar3 + 0x20) == 0) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)(iVar3 + 0x10))();
  }
  if (*(int *)(*(int *)(in_ECX + 0x5f0) + param_1 + 0x1c) == 0) {
    appFailAssert("&Mips(MipLevel).DataArray(0)",".\\UnTex.cpp",0x52c);
  }
  iVar3 = *(int *)(in_ECX + 0x5f0) + param_1;
  uVar2 = *(undefined4 *)(iVar3 + 4);
  this = *(FOutputDevice **)(iVar3 + 8);
  cVar1 = *(char *)(in_ECX + 0x578);
  if (cVar1 == '\x03') {
    iVar4 = FUN_107413a0(*(undefined4 *)(*(int *)(in_ECX + 0x5f0) + param_1 + 0x1c),param_3,param_4)
    ;
  }
  else if (cVar1 == '\a') {
    iVar4 = FUN_10741440(uVar2,this,param_3,param_4,param_2);
  }
  else if (cVar1 == '\b') {
    iVar4 = FUN_107415d0(uVar2,this,param_3,param_4,param_2);
  }
  else {
    FOutputDevice::Logf(this,*(ushort **)GError_exref);
  }
  (**(code **)(*(int *)(param_1 + 0x10 + *(int *)(in_ECX + 0x5f0)) + 4))();
  ExceptionList = local_10;
  return (iVar4 == 0) * '\x02' + '\x03';
}


// ==== 10742526 Catch@10742526

void Catch_10742526(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1074253a Catch@1074253a

void Catch_1074253a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::ConvertDXT");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107425c0 FUN_107425c0

/* WARNING: Removing unreachable block (ram,0x107426f1) */

undefined1 FUN_107425c0(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  size_t local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ede0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  if ((*(char *)(in_ECX + 0x578) == '\a') || (*(char *)(in_ECX + 0x578) == '\b')) {
    local_20 = 0;
    ExceptionList = &local_10;
    for (local_1c = 0; local_1c < *(int *)(in_ECX + 0x5f4); local_1c = local_1c + 1) {
      local_28 = (void *)0x0;
      iVar1 = local_1c * 0x28;
      iVar3 = *(int *)(in_ECX + 0x5f0) + iVar1;
      iVar4 = *(int *)(iVar3 + 4);
      local_18 = *(int *)(iVar3 + 8);
      local_24 = iVar4;
      if (*(int *)(iVar3 + 0x20) == 0) {
        (*(code *)**(undefined4 **)(iVar3 + 0x10))();
      }
      if (*(int *)(*(int *)(in_ECX + 0x5f0) + iVar1 + 0x1c) == 0) {
        appFailAssert("&Mips(m).DataArray(0)",".\\UnTex.cpp",0x559);
      }
      if (*(char *)(in_ECX + 0x578) == '\a') {
        iVar4 = FUN_10741440(iVar4,local_18,0,&local_28,local_20);
      }
      else {
        iVar4 = FUN_107415d0(iVar4,local_18,0,&local_28,local_20);
      }
      if ((local_1c == 0) && (iVar4 == 0)) {
        local_20 = 1;
      }
      FArray::Empty((FArray *)(iVar1 + 0x1c + *(int *)(in_ECX + 0x5f0)),1,0);
      if (iVar4 == 0) {
        local_18 = local_18 * local_24 * 4;
      }
      else {
        local_18 = (int)(local_18 * local_24) / 2;
      }
      uVar6 = -(uint)(iVar4 != 0) & 8;
      uVar5 = local_18;
      if ((int)local_18 < (int)uVar6) {
        uVar5 = uVar6;
      }
      FArray::Add((FArray *)(iVar1 + 0x1c + *(int *)(in_ECX + 0x5f0)),uVar5,1);
      pvVar2 = local_28;
      _memcpy(*(void **)(*(int *)(in_ECX + 0x5f0) + iVar1 + 0x1c),local_28,local_18);
      thunk_FUN_103254c0(pvVar2);
    }
    *(char *)(in_ECX + 0x578) = (local_20 != 0) * '\x02' + '\x03';
  }
  ExceptionList = local_10;
  return *(undefined1 *)(in_ECX + 0x578);
}


// ==== 1074277a Catch@1074277a

void Catch_1074277a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1074278e Catch@1074278e

void Catch_1074278e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::ConvertDXT");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10742830 FUN_10742830

void FUN_10742830(UTexture *param_1)

{
  int iVar1;
  FMipmap *pFVar2;
  FArray *in_ECX;
  FArchive *in_EDX;
  int iVar3;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1082edfb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(in_ECX,in_EDX,0x28);
  iVar1 = FArchive::IsLoading(in_EDX);
  if (iVar1 == 0) {
    local_24 = *(undefined4 *)(in_ECX + 4);
    operator<<(in_EDX,(FCompactIndex *)&local_24);
    for (; iVar3 < *(int *)(in_ECX + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_10741830();
    }
  }
  else {
    operator<<(in_EDX,(FCompactIndex *)&local_18);
    thunk_FUN_103b33d0(local_18);
    local_20 = UTexture::DefaultLOD(param_1);
    while (iVar3 < local_18) {
      local_24 = *(undefined4 *)GLazyLoad_exref;
      if ((((byte)*GUglyHackFlags_exref & 0x20) == 0) || (iVar3 < local_20)) {
        *(uint *)GLazyLoad_exref = (uint)(*(int *)GIsEditor_exref == 0);
      }
      if (((byte)*GUglyHackFlags_exref & 8) != 0) {
        *(undefined4 *)GLazyLoad_exref = 0;
      }
      local_1c = iVar3;
      if ((*(int *)GIsEditor_exref == 0) && (iVar3 < 0)) {
        pFVar2 = (FMipmap *)thunk_FUN_1032ffc0(0x28);
        local_8._0_1_ = 1;
        if (pFVar2 == (FMipmap *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FMipmap::FMipmap(pFVar2);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        thunk_FUN_10741830();
        if (iVar1 != 0) {
          thunk_FUN_1039dcc0(1);
        }
        *(int *)(param_1 + 0x580) = *(int *)(param_1 + 0x580) >> 1;
        *(int *)(param_1 + 0x584) = *(int *)(param_1 + 0x584) >> 1;
        *(int *)(param_1 + 0x590) = *(int *)(param_1 + 0x590) + 1;
        *(undefined4 *)GLazyLoad_exref = local_24;
        iVar3 = local_1c + 1;
      }
      else {
        pFVar2 = (FMipmap *)thunk_FUN_103709f0(0x28);
        if (pFVar2 != (FMipmap *)0x0) {
          FMipmap::FMipmap(pFVar2);
        }
        thunk_FUN_10741830();
        *(undefined4 *)GLazyLoad_exref = local_24;
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 107429dd Catch@107429dd

void Catch_107429dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 107429f1 Catch@107429f1

void Catch_107429f1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SerializeMips");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10742a90 FUN_10742a90

void FUN_10742a90(void)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  UPalette *this;
  undefined4 uVar4;
  undefined1 *puVar5;
  UObject *in_ECX;
  undefined1 uVar6;
  int iVar7;
  double dVar8;
  undefined4 uStack_3c;
  int iStack_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ee10;
  local_10 = ExceptionList;
  local_8 = 0;
  iStack_38 = 0x10742ac2;
  ExceptionList = &local_10;
  UObject::PostLoad(in_ECX);
  if (in_ECX[0x578] == (UObject)0x0) {
    if (*(int *)(in_ECX + 0x594) == 0) {
      iStack_38 = 0;
      FName::FName((FName *)&uStack_3c,0);
      pUVar3 = UObject::GetOuter(in_ECX);
      this = UPalette::operator_new(0x40,pUVar3);
      if (this == (UPalette *)0x0) {
        uVar4 = 0;
      }
      else {
        iStack_38 = 0x10742aff;
        uVar4 = UPalette::UPalette(this);
      }
      *(undefined4 *)(in_ECX + 0x594) = uVar4;
      for (iVar7 = 0; iVar7 < 0x100; iVar7 = iVar7 + 1) {
        iStack_38 = *(int *)(in_ECX + 0x594) + 0x34;
        uStack_3c = 4;
        puVar5 = (undefined1 *)thunk_FUN_10370970();
        if (puVar5 != (undefined1 *)0x0) {
          uVar6 = (undefined1)iVar7;
          *puVar5 = uVar6;
          puVar5[1] = uVar6;
          puVar5[2] = uVar6;
          puVar5[3] = 0;
        }
      }
    }
    if (in_ECX[0x578] == (UObject)0x0) goto LAB_10742b56;
  }
  if (*(int *)(in_ECX + 0x594) != 0) {
    *(undefined4 *)(in_ECX + 0x594) = 0;
  }
LAB_10742b56:
  iStack_38 = *(int *)(in_ECX + 0x580);
  uStack_3c = 0;
  uVar4 = thunk_FUN_10370460(*(undefined4 *)(in_ECX + 0x588));
  *(undefined4 *)(in_ECX + 0x588) = uVar4;
  uVar4 = thunk_FUN_10370460(*(undefined4 *)(in_ECX + 0x58c),0,*(undefined4 *)(in_ECX + 0x584));
  *(undefined4 *)(in_ECX + 0x58c) = uVar4;
  *(int *)(in_ECX + 0x5d0) = *(int *)(in_ECX + 0x5f4) + -1;
  iVar7 = 0;
  do {
    if (*(int *)(in_ECX + 0x5f4) <= iVar7) {
LAB_10742bdc:
      *(undefined4 *)(in_ECX + 0x5ec) = 0;
      iStack_38 = 0x10742bea;
      dVar8 = appSecondsQPC();
      *(double *)(in_ECX + 0x604) = dVar8;
      ExceptionList = local_10;
      return;
    }
    iVar1 = *(int *)(in_ECX + 0x5f0) + iVar7 * 0x28;
    iVar2 = *(int *)(iVar1 + 4);
    if ((iVar2 < 0x40) ||
       (((iVar1 = *(int *)(iVar1 + 8), iVar1 < 0x40 && (iVar2 < 0x100)) && (iVar1 < 0x100)))) {
      *(int *)(in_ECX + 0x5d0) = iVar7;
      goto LAB_10742bdc;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}


// ==== 10742c09 Catch@10742c09

void Catch_10742c09(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10742c1d Catch@10742c1d

void Catch_10742c1d(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::PostLoad");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x20),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10742cd0 FUN_10742cd0

void FUN_10742cd0(ulong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uchar uVar2;
  FMipmap *pFVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ee20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(uint *)(in_ECX + 0x580) & *(uint *)(in_ECX + 0x580) - 1) != 0) {
    ExceptionList = &local_10;
    appFailAssert("!(USize & (USize-1))",".\\UnTex.cpp",0x21e);
  }
  if ((*(uint *)(in_ECX + 0x584) & *(uint *)(in_ECX + 0x584) - 1) != 0) {
    appFailAssert("!(VSize & (VSize-1))",".\\UnTex.cpp",0x21f);
  }
  *(ulong *)(in_ECX + 0x588) = param_1;
  *(ulong *)(in_ECX + 0x580) = param_1;
  *(undefined4 *)(in_ECX + 0x58c) = param_2;
  *(undefined4 *)(in_ECX + 0x584) = param_2;
  uVar2 = appCeilLogTwo(param_1);
  *(uchar *)(in_ECX + 0x57b) = uVar2;
  uVar2 = appCeilLogTwo(*(ulong *)(in_ECX + 0x584));
  *(uchar *)(in_ECX + 0x57c) = uVar2;
  puVar1 = (undefined4 *)(in_ECX + 0x5f0);
  thunk_FUN_103b33d0(0);
  if (*(char *)(in_ECX + 0x578) == '\x05') {
    pFVar3 = (FMipmap *)thunk_FUN_103709f0(0x28,puVar1);
    if (pFVar3 != (FMipmap *)0x0) {
      FMipmap::FMipmap(pFVar3,*(uchar *)(in_ECX + 0x57b),*(uchar *)(in_ECX + 0x57c),
                       *(int *)(in_ECX + 0x584) * *(int *)(in_ECX + 0x580) * 4);
    }
  }
  else if (*(char *)(in_ECX + 0x578) == '\n') {
    pFVar3 = (FMipmap *)thunk_FUN_103709f0(0x28,puVar1);
    if (pFVar3 != (FMipmap *)0x0) {
      FMipmap::FMipmap(pFVar3,*(uchar *)(in_ECX + 0x57b),*(uchar *)(in_ECX + 0x57c),
                       *(int *)(in_ECX + 0x584) * *(int *)(in_ECX + 0x580) * 2);
    }
  }
  else {
    pFVar3 = (FMipmap *)thunk_FUN_103709f0(0x28,puVar1);
    if (pFVar3 != (FMipmap *)0x0) {
      FMipmap::FMipmap(pFVar3,*(uchar *)(in_ECX + 0x57b),*(uchar *)(in_ECX + 0x57c));
    }
  }
  FMipmap::Clear((FMipmap *)*puVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10742e5a Catch@10742e5a

void Catch_10742e5a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10742e6e Catch@10742e6e

void Catch_10742e6e(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::Init");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10742f20 FUN_10742f20

void FUN_10742f20(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  UTexture UVar3;
  longlong lVar4;
  uchar uVar5;
  FColor *pFVar6;
  FPlane *pFVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  int *piVar11;
  FMipmap *pFVar12;
  byte bVar13;
  byte bVar14;
  UTexture *in_ECX;
  void *pvVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uchar *puVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 local_2f8 [32];
  FPlane local_2d8 [16];
  FPlane local_2c8 [48];
  FPlane local_298 [64];
  undefined1 local_258 [16];
  FPlane local_248 [16];
  FPlane local_238 [16];
  FPlane local_228 [48];
  FPlane local_1f8 [16];
  FPlane local_1e8 [32];
  FPlane local_1c8 [16];
  FPlane local_1b8 [16];
  FPlane local_1a8 [32];
  FPlane local_188 [16];
  FPlane local_178 [16];
  FPlane local_168 [32];
  FPlane local_148 [16];
  undefined1 local_138 [16];
  FPlane local_128 [16];
  FPlane local_118 [16];
  FPlane local_108 [32];
  FPlane local_e8 [16];
  FPlane local_d8 [20];
  FColor local_c4 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  FColor local_48;
  FColor local_47;
  FColor local_46;
  FColor local_45;
  FColor local_44;
  FColor local_43;
  FColor local_42;
  FColor local_41;
  FColor local_40;
  FColor local_3f;
  FColor local_3e;
  FColor local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  FColor *local_28;
  int local_24;
  FColor local_20;
  FColor local_1f;
  FColor local_1e;
  FColor local_1d;
  int local_1c;
  UTexture *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_7c = &LAB_1082ee30;
  local_80 = ExceptionList;
  local_84 = &stack0xfffffcfc;
  iVar17 = 0;
  local_78 = 0;
  ExceptionList = &local_80;
  local_18 = in_ECX;
  pFVar6 = UTexture::GetColors(in_ECX);
  local_28 = pFVar6;
  switch(in_ECX[0x578]) {
  case (UTexture)0x0:
    if (*(int *)(in_ECX + 0x594) == 0) {
      appFailAssert("Palette!=NULL",".\\UnTex.cpp",0x24d);
    }
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    for (; local_70 = iVar17, iVar17 < *(int *)(*(int *)(in_ECX + 0x5f0) + 0x20);
        iVar17 = iVar17 + 1) {
      FColor::Plane(pFVar6 + (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x5f0) + 0x1c) + iVar17) * 4
                   );
      FPlane::operator+=((FPlane *)&local_c0,local_e8);
    }
    local_c = *(int *)(*(int *)(in_ECX + 0x5f0) + 0x20);
    pFVar7 = (FPlane *)FPlane::operator/((FPlane *)&local_c0,(float)local_128);
    pFVar6 = (FColor *)&local_24;
    break;
  default:
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
  case (UTexture)0x3:
  case (UTexture)0x7:
  case (UTexture)0x8:
  case (UTexture)0xa:
    ExceptionList = local_80;
    return;
  case (UTexture)0x5:
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    for (; local_88 = iVar17, iVar17 < *(int *)(*(int *)(in_ECX + 0x5f0) + 0x20) >> 2;
        iVar17 = iVar17 + 1) {
      FColor::Plane((FColor *)(*(int *)(*(int *)(in_ECX + 0x5f0) + 0x1c) + iVar17 * 4));
      FPlane::operator+=((FPlane *)&local_9c,local_118);
    }
    local_c = *(int *)(*(int *)(in_ECX + 0x5f0) + 0x20);
    pFVar7 = (FPlane *)FPlane::operator/((FPlane *)&local_9c,(float)local_138);
    pFVar6 = &local_20;
    break;
  case (UTexture)0x9:
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    for (; local_8c = iVar17, iVar17 < *(int *)(*(int *)(in_ECX + 0x5f0) + 0x20);
        iVar17 = iVar17 + 1) {
      uVar2 = *(undefined1 *)(iVar17 + *(int *)(*(int *)(in_ECX + 0x5f0) + 0x1c));
      local_8 = (void *)CONCAT13(uVar2,CONCAT12(uVar2,CONCAT11(uVar2,uVar2)));
      FColor::operator_class_FPlane((FColor *)&local_8);
      FPlane::operator+=((FPlane *)&local_ac,local_d8);
    }
    local_c = *(int *)(*(int *)(in_ECX + 0x5f0) + 0x20);
    pFVar7 = (FPlane *)FPlane::operator/((FPlane *)&local_ac,(float)&local_3c);
    puVar8 = (undefined4 *)FColor::FColor((FColor *)&local_2c,pFVar7);
    *(undefined4 *)(in_ECX + 0x5a0) = *puVar8;
    goto LAB_10743113;
  }
  puVar8 = (undefined4 *)FColor::FColor(pFVar6,pFVar7);
  *(undefined4 *)(in_ECX + 0x5a0) = *puVar8;
LAB_10743113:
  if (in_ECX[0x578] != (UTexture)0x0) {
    *(uint *)(in_ECX + 0x5c0) = *(uint *)(in_ECX + 0x5c0) & 0xfffffffe;
  }
  if (1 < *(int *)(in_ECX + 0x5f4)) {
    thunk_FUN_103b32d0(1,*(int *)(in_ECX + 0x5f4) + -1);
  }
  if (param_1 != 0) {
    while( true ) {
      iVar17 = *(int *)(in_ECX + 0x5f4);
      if (((int)((uint)(byte)in_ECX[0x57b] - iVar17) < 0) &&
         ((int)((uint)(byte)in_ECX[0x57c] - iVar17) < 0)) break;
      iVar10 = (uint)(byte)in_ECX[0x57b] - iVar17;
      bVar13 = (iVar10 < 0) - 1U & (byte)iVar10;
      local_6c = (uint)(byte)in_ECX[0x57c] - iVar17 &
                 ((int)((uint)(byte)in_ECX[0x57c] - iVar17) < 0) - 1;
      UVar3 = in_ECX[0x578];
      bVar14 = (byte)local_6c;
      if (UVar3 == (UTexture)0x0) {
LAB_10743841:
        pFVar12 = (FMipmap *)thunk_FUN_103709f0(0x28,in_ECX + 0x5f0);
        if (pFVar12 != (FMipmap *)0x0) {
          FMipmap::FMipmap(pFVar12,bVar13,bVar14);
        }
      }
      else if (UVar3 == (UTexture)0x5) {
        pFVar12 = (FMipmap *)thunk_FUN_103709f0(0x28,in_ECX + 0x5f0);
        if (pFVar12 != (FMipmap *)0x0) {
          FMipmap::FMipmap(pFVar12,bVar13,bVar14,(1 << (bVar14 & 0x1f)) * (1 << (bVar13 & 0x1f)) * 4
                          );
        }
      }
      else if (UVar3 == (UTexture)0x9) goto LAB_10743841;
    }
    if (param_2 != 0) {
      pvVar15 = (void *)0x0;
      for (local_58 = 1; local_58 < *(int *)(in_ECX + 0x5f4); local_58 = local_58 + 1) {
        iVar17 = *(int *)(in_ECX + 0x5f0) + local_58 * 0x28;
        local_24 = *(int *)(iVar17 + -0x24);
        local_c = *(int *)(iVar17 + -0x20);
        uVar18 = local_c * local_24;
        lVar4 = (ulonglong)uVar18 * 4;
        pvVar9 = (void *)thunk_FUN_10329e10(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) |
                                            (uint)lVar4,L"FColor");
        if (pvVar9 == (void *)0x0) {
          local_8 = (void *)0x0;
        }
        else {
          _vector_constructor_iterator_(pvVar9,4,uVar18,FColor::FColor);
          local_8 = pvVar9;
        }
        if (((byte)in_ECX[0x5c0] & 1) == 0) {
          uVar18 = local_24 - 1U & 1;
          iVar10 = (local_c - 1U & 1) * local_24;
          for (local_10 = 0; local_10 < *(int *)(iVar17 + 8); local_10 = local_10 + 1) {
            local_1c = 0;
            while (local_1c < *(int *)(iVar17 + 4)) {
              iVar19 = local_10 * local_24 + local_1c;
              iVar1 = iVar19 * 2;
              local_3c = 0;
              local_38 = 0;
              local_34 = 0;
              local_30 = 0;
              if (pvVar15 == (void *)0x0) {
                UVar3 = local_18[0x578];
                if (UVar3 == (UTexture)0x0) {
                  FColor::Plane(local_28 + (uint)*(byte *)(*(int *)(iVar17 + -0xc) + iVar1) * 4);
                  FPlane::operator+=((FPlane *)&local_3c,local_178);
                  FColor::Plane(local_28 +
                                (uint)*(byte *)(*(int *)(iVar17 + -0xc) + iVar1 + uVar18) * 4);
                  FPlane::operator+=((FPlane *)&local_3c,local_1b8);
                  FColor::Plane(local_28 +
                                (uint)*(byte *)(*(int *)(iVar17 + -0xc) + iVar1 + iVar10) * 4);
                  FPlane::operator+=((FPlane *)&local_3c,local_1f8);
                  FColor::Plane(local_28 +
                                (uint)*(byte *)(*(int *)(iVar17 + -0xc) + iVar1 + iVar10 + uVar18) *
                                4);
                  pFVar7 = local_238;
                  goto LAB_10743533;
                }
                if (UVar3 == (UTexture)0x5) {
                  FColor::Plane((FColor *)(*(int *)(iVar17 + -0xc) + iVar19 * 8));
                  FPlane::operator+=((FPlane *)&local_3c,local_1c8);
                  FColor::Plane((FColor *)(*(int *)(iVar17 + -0xc) + (iVar1 + uVar18) * 4));
                  FPlane::operator+=((FPlane *)&local_3c,local_1e8);
                  FColor::Plane((FColor *)(*(int *)(iVar17 + -0xc) + (iVar1 + iVar10) * 4));
                  FPlane::operator+=((FPlane *)&local_3c,local_148);
                  FColor::Plane((FColor *)(*(int *)(iVar17 + -0xc) + (uVar18 + iVar1 + iVar10) * 4))
                  ;
                  pFVar7 = local_228;
                  goto LAB_10743533;
                }
                if (UVar3 == (UTexture)0x9) {
                  local_44 = *(FColor *)(iVar1 + *(int *)(iVar17 + -0xc));
                  local_43 = local_44;
                  local_42 = local_44;
                  local_41 = local_44;
                  FColor::operator_class_FPlane(&local_44);
                  FPlane::operator+=((FPlane *)&local_3c,local_2c8);
                  local_40 = *(FColor *)(*(int *)(iVar17 + -0xc) + iVar1 + uVar18);
                  local_3f = local_40;
                  local_3e = local_40;
                  local_3d = local_40;
                  FColor::operator_class_FPlane(&local_40);
                  FPlane::operator+=((FPlane *)&local_3c,local_188);
                  local_48 = *(FColor *)(*(int *)(iVar17 + -0xc) + iVar1 + iVar10);
                  local_47 = local_48;
                  local_46 = local_48;
                  local_45 = local_48;
                  FColor::operator_class_FPlane(&local_48);
                  FPlane::operator+=((FPlane *)&local_3c,local_248);
                  local_20 = *(FColor *)(*(int *)(iVar17 + -0xc) + iVar1 + iVar10 + uVar18);
                  local_1f = local_20;
                  local_1e = local_20;
                  local_1d = local_20;
                  FColor::operator_class_FPlane(&local_20);
                  pFVar7 = local_1a8;
                  goto LAB_10743533;
                }
              }
              else {
                FColor::Plane((FColor *)((int)pvVar15 + iVar19 * 8));
                FPlane::operator+=((FPlane *)&local_3c,local_118);
                FColor::Plane((FColor *)((int)pvVar15 + (iVar1 + uVar18) * 4));
                FPlane::operator+=((FPlane *)&local_3c,local_128);
                FColor::Plane((FColor *)((int)pvVar15 + (iVar1 + iVar10) * 4));
                FPlane::operator+=((FPlane *)&local_3c,local_108);
                FColor::Plane((FColor *)((int)pvVar15 + (uVar18 + iVar1 + iVar10) * 4));
                pFVar7 = local_168;
LAB_10743533:
                FPlane::operator+=((FPlane *)&local_3c,pFVar7);
              }
              uVar21 = 0x40800000;
              pFVar7 = (FPlane *)FPlane::operator/((FPlane *)&local_3c,(float)local_258);
              piVar11 = (int *)FColor::FColor(local_c4,pFVar7);
              local_c = *piVar11;
              *(int *)((int)local_8 + (*(int *)(iVar17 + 4) * local_10 + local_1c) * 4) = local_c;
              UVar3 = local_18[0x578];
              if (UVar3 == (UTexture)0x0) {
                puVar20 = (uchar *)(*(int *)(iVar17 + 4) * local_10 + *(int *)(iVar17 + 0x1c) +
                                   local_1c);
                uVar5 = UPalette::BestMatch(*(UPalette **)(local_18 + 0x594),local_c,0,uVar21);
                *puVar20 = uVar5;
LAB_107435e5:
                local_1c = local_1c + 1;
              }
              else if (UVar3 == (UTexture)0x5) {
                *(int *)(*(int *)(iVar17 + 0x1c) + (*(int *)(iVar17 + 4) * local_10 + local_1c) * 4)
                     = local_c;
                local_1c = local_1c + 1;
              }
              else {
                if (UVar3 != (UTexture)0x9) goto LAB_107435e5;
                *(char *)(*(int *)(iVar17 + 4) * local_10 + *(int *)(iVar17 + 0x1c) + local_1c) =
                     (char)((uint)local_c >> 0x10);
                local_1c = local_1c + 1;
              }
            }
          }
        }
        else {
          uVar18 = local_c - 1;
          for (local_14 = 0; local_14 < *(int *)(iVar17 + 8); local_14 = local_14 + 1) {
            local_54 = 0;
            while (local_54 < *(int *)(iVar17 + 4)) {
              local_4c = 0;
              local_68 = 0;
              local_64 = 0;
              local_60 = 0;
              local_5c = 0;
              iVar10 = (local_14 * local_24 + local_54) * 2;
              for (local_50 = 0; iVar1 = local_54, (int)local_50 < 2; local_50 = local_50 + 1) {
                uVar16 = 0;
                while (local_74 = uVar16, (int)uVar16 < 2) {
                  iVar1 = (uVar16 & uVar18) * local_24 + (local_50 & local_24 - 1U);
                  bVar13 = *(byte *)(*(int *)(iVar17 + -0xc) + iVar10 + iVar1);
                  if (bVar13 == 0) {
LAB_107436e8:
                    uVar16 = uVar16 + 1;
                  }
                  else {
                    local_4c = local_4c + 1;
                    if (pvVar15 == (void *)0x0) {
                      FColor::Plane(local_28 + (uint)bVar13 * 4);
                      FPlane::operator+=((FPlane *)&local_68,local_2d8);
                      goto LAB_107436e8;
                    }
                    FColor::Plane((FColor *)((int)pvVar15 + (iVar1 + iVar10) * 4));
                    FPlane::operator+=((FPlane *)&local_68,local_298);
                    uVar16 = uVar16 + 1;
                  }
                }
              }
              if (local_4c < 2) {
                local_2c = 0xff000000;
                *(undefined4 *)((int)local_8 + (*(int *)(iVar17 + 4) * local_14 + local_54) * 4) =
                     0xff000000;
                *(undefined1 *)
                 (*(int *)(iVar17 + 4) * local_14 + *(int *)(iVar17 + 0x1c) + local_54) = 0;
                local_54 = local_54 + 1;
              }
              else {
                fVar22 = (float)local_4c;
                pFVar7 = (FPlane *)FPlane::operator/((FPlane *)&local_68,(float)local_2f8);
                puVar8 = (undefined4 *)FColor::FColor((FColor *)&local_6c,pFVar7);
                *(undefined4 *)((int)local_8 + (*(int *)(iVar17 + 4) * local_14 + iVar1) * 4) =
                     *puVar8;
                iVar19 = *(int *)(iVar17 + 4) * local_14;
                iVar10 = *(int *)(iVar17 + 0x1c);
                uVar5 = UPalette::BestMatch(*(UPalette **)(local_18 + 0x594),
                                            *(undefined4 *)
                                             ((int)local_8 +
                                             (*(int *)(iVar17 + 4) * local_14 + iVar1) * 4),1,fVar22
                                           );
                *(uchar *)(iVar19 + iVar10 + iVar1) = uVar5;
                local_54 = iVar1 + 1;
              }
            }
          }
        }
        if (pvVar15 != (void *)0x0) {
          thunk_FUN_103254a0(pvVar15);
        }
        pvVar15 = local_8;
        in_ECX = local_18;
      }
      if (pvVar15 != (void *)0x0) {
        thunk_FUN_103254a0(pvVar15);
      }
    }
  }
  ExceptionList = local_80;
  return;
}


// ==== 107438cf Catch@107438cf

void Catch_107438cf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 107438e3 Catch@107438e3

void Catch_107438e3(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::CreateMips");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 0x5c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10743bc0 FUN_10743bc0

undefined4 FUN_10743bc0(int param_1,int param_2,int *param_3)

{
  void *_Dst;
  int iVar1;
  int in_ECX;
  undefined1 local_61c [52];
  undefined1 local_5e8;
  int local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b4;
  undefined1 local_5ab;
  undefined1 local_5a6;
  int local_5a4;
  undefined1 local_5a0;
  int local_59c;
  int local_594;
  undefined1 local_590;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined1 local_4b4;
  int local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ee40;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff9d8;
  local_8 = 0;
  if (param_1 == 3) {
    local_18 = 0;
  }
  else if (param_1 == 7) {
    local_18 = 2;
  }
  else {
    if (param_1 != 8) {
      return 0;
    }
    local_18 = 3;
  }
  if ((*(char *)(in_ECX + 0x578) != '\x05') && (*(char *)(in_ECX + 0x578) != '\0')) {
    return 0;
  }
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x5f0) + 0x10))();
  _Dst = (void *)thunk_FUN_103ff730(*(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584) * 4);
  if (*(char *)(in_ECX + 0x578) == '\x05') {
    _memcpy(_Dst,*(void **)(*(int *)(in_ECX + 0x5f0) + 0x1c),
            *(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584) * 4);
  }
  else {
    local_20 = **(int **)(in_ECX + 0x600);
    iVar1 = (**(code **)(local_20 + 0x28))(5,0);
    (**(code **)(local_20 + 0x48))(0,_Dst,iVar1 * 4);
  }
  thunk_FUN_103b33d0(0);
  thunk_FUN_105f2fe0();
  local_5c0 = (uint)(param_2 == 0) * 2 + 0x1e;
  local_5b8 = 4;
  if (param_3 != (int *)0x0) {
    local_5b4 = *param_3 != 0;
    local_5e8 = param_3[1] != 0;
    local_5ab = param_3[3] != 0;
    local_5a6 = param_3[4] != 0;
    local_5a4 = param_3[5];
    local_5a0 = param_3[6] != 0;
    local_59c = param_3[7];
    local_594 = param_3[8];
  }
  local_590 = 0;
  local_4bc = 0;
  local_4b8 = local_18;
  local_4b4 = 0;
  FUN_10776110(_Dst,*(int *)(in_ECX + 0x580),*(undefined4 *)(in_ECX + 0x584),
               *(int *)(in_ECX + 0x580) * 4,local_61c,4,FUN_10741ca0,0,0);
  *(undefined1 *)(in_ECX + 0x578) = (undefined1)param_1;
  thunk_FUN_103254c0(_Dst);
  *(uint *)(in_ECX + 0x5c0) = *(uint *)(in_ECX + 0x5c0) | 0x80;
  ExceptionList = local_10;
  return 1;
}


// ==== 10743dd5 Catch@10743dd5

void Catch_10743dd5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10743de9 Catch@10743de9

void Catch_10743de9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::Compress");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10743ea0 FUN_10743ea0

undefined4 FUN_10743ea0(void)

{
  FArray *this;
  FMipmap *this_00;
  int iVar1;
  char cVar2;
  uchar uVar3;
  uchar uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  int iStack_420;
  int local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  byte abStack_408 [1032];
  
  if (*(char *)(in_ECX + 0x578) == '\0') {
    this = (FArray *)(in_ECX + 0x5f0);
    local_418 = in_ECX;
    (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x5f0) + 0x10))();
    _Dst = (void *)(**(code **)**(undefined4 **)GMalloc_exref)
                             (*(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584),&DAT_10853a28);
    _memcpy(_Dst,*(void **)(*(int *)this + 0x1c),*(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584)
           );
    _memcpy(abStack_408,*(void **)(*(int *)(in_ECX + 0x594) + 0x34),
            *(int *)(*(int *)(in_ECX + 0x594) + 0x38) * 4);
    thunk_FUN_103b33d0(0);
    iVar8 = *(int *)(in_ECX + 0x584);
    iVar1 = *(int *)(in_ECX + 0x580);
    pvVar10 = _Dst;
    iVar7 = iVar8;
    if (0 < iVar8) {
      do {
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            iVar6 = (uint)*(byte *)(iVar5 + (int)pvVar10) * 4;
            if ((((abStack_408[(uint)*(byte *)(iVar5 + (int)pvVar10) * 4] < 0x21) &&
                 (abStack_408[iVar6 + 1] < 0x21)) && (abStack_408[iVar6 + 2] < 0x21)) &&
               (abStack_408[iVar6 + 3] < 0x21)) {
              cVar2 = '\0';
            }
            else {
              cVar2 = '\x01';
            }
            iVar6 = iVar5 + 1;
            *(char *)(iVar5 + (int)pvVar10) = cVar2 + -1;
            iVar5 = iVar6;
          } while (iVar6 < iVar1);
        }
        iVar7 = iVar7 + -1;
        pvVar10 = (void *)((int)pvVar10 + iVar1);
      } while (iVar7 != 0);
    }
    uVar3 = appCeilLogTwo(*(ulong *)(in_ECX + 0x580));
    uVar4 = appCeilLogTwo(*(ulong *)(in_ECX + 0x584));
    iVar7 = FArray::Add(this,1,0x28);
    this_00 = (FMipmap *)(*(int *)this + iVar7 * 0x28);
    if (this_00 != (FMipmap *)0x0) {
      FMipmap::FMipmap(this_00,uVar3,uVar4,(*(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584)) / 2
                      );
    }
    iVar5 = *(int *)(*(int *)this + 0x1c);
    iVar7 = 0;
    if (0 < iVar8) {
      pvVar10 = (void *)((int)_Dst + iVar1 * 3);
      pvVar12 = (void *)((int)_Dst + iVar1 * 2);
      iVar8 = (iVar8 - 1U >> 2) + 1;
      pvVar11 = _Dst;
      do {
        iVar6 = 0;
        if (0 < iVar1) {
          iVar9 = iVar5 + iVar7 * 8;
          iVar7 = iVar7 + 1 + (iVar1 - 1U >> 2);
          do {
            local_418 = *(int *)(iVar6 + (int)pvVar11);
            uStack_410 = *(undefined4 *)((int)pvVar12 + iVar6);
            uStack_414 = *(undefined4 *)((int)pvVar11 + iVar6 + iVar1);
            uStack_40c = *(undefined4 *)((int)pvVar10 + iVar6);
            thunk_FUN_1073e510(iVar9,&local_418);
            iVar6 = iVar6 + 4;
            iVar9 = iVar9 + 8;
            in_ECX = iStack_420;
          } while (iVar6 < iVar1);
        }
        iVar6 = iVar1 * 4;
        pvVar12 = (void *)((int)pvVar12 + iVar6);
        pvVar10 = (void *)((int)pvVar10 + iVar6);
        pvVar11 = (void *)((int)pvVar11 + iVar6);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined1 *)(in_ECX + 0x578) = 3;
    (**(code **)(**(int **)GMalloc_exref + 8))(_Dst);
    *(uint *)(in_ECX + 0x5c0) = *(uint *)(in_ECX + 0x5c0) | 0x80;
    return 1;
  }
  return 0;
}


// ==== 107441b0 FUN_107441b0

undefined4 FUN_107441b0(void)

{
  FArray *this;
  FMipmap *this_00;
  int iVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  UObject *pUVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  UObject *in_ECX;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puStack_38;
  int iStack_34;
  int iStack_2c;
  uint *puStack_28;
  uint uStack_24;
  uint uStack_20;
  UObject *pUStack_1c;
  uint uStack_18;
  UObject *local_14;
  uint uStack_10;
  uint uStack_c;
  
  if (in_ECX[0x578] != (UObject)0x3) {
    return 0;
  }
  this = (FArray *)(in_ECX + 0x5f0);
  local_14 = in_ECX;
  (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x5f0) + 0x10))();
  puStack_28 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)
                                 (*(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584),&DAT_10853a28)
  ;
  _memcpy(puStack_28,*(void **)(*(int *)this + 0x1c),
          (*(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584)) / 2);
  thunk_FUN_103b33d0(0);
  uVar2 = appCeilLogTwo(*(ulong *)(in_ECX + 0x580));
  uVar3 = appCeilLogTwo(*(ulong *)(in_ECX + 0x584));
  iVar4 = FArray::Add(this,1,0x28);
  this_00 = (FMipmap *)(*(int *)this + iVar4 * 0x28);
  if (this_00 != (FMipmap *)0x0) {
    FMipmap::FMipmap(this_00,uVar2,uVar3,*(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584));
  }
  if (*(int *)(in_ECX + 0x594) == 0) {
    FName::FName((FName *)&iStack_2c,0);
    pUVar5 = UObject::GetOuter(in_ECX);
    pUVar5 = UObject::StaticAllocateObject
                       (&UPalette::PrivateStaticClass,pUVar5,iStack_2c,0,0,
                        *(undefined4 *)GError_exref,0,0);
    if (pUVar5 == (UObject *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = UPalette::UPalette((UPalette *)pUVar5);
    }
    *(undefined4 *)(in_ECX + 0x594) = uVar6;
    iVar4 = 0;
    do {
      iVar1 = *(int *)(in_ECX + 0x594);
      iVar7 = FArray::Add((FArray *)(iVar1 + 0x34),1,4);
      puVar12 = (undefined1 *)(*(int *)(iVar1 + 0x34) + iVar7 * 4);
      if (puVar12 != (undefined1 *)0x0) {
        uVar14 = (undefined1)iVar4;
        *puVar12 = uVar14;
        puVar12[1] = uVar14;
        puVar12[2] = uVar14;
        puVar12[3] = uVar14;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
  }
  puStack_38 = *(undefined1 **)(*(int *)this + 0x1c);
  iStack_2c = 0;
  if (0 < *(int *)(in_ECX + 0x584)) {
    iVar4 = *(int *)(in_ECX + 0x580);
    puVar8 = puStack_28;
    do {
      iStack_34 = 0;
      if (0 < iVar4) {
        do {
          uVar11 = *puVar8;
          uStack_20 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar15 = (uVar11 & 0x1f) * 8 | uVar11 >> 2 & 7;
          uVar13 = uVar11 >> 5;
          uVar9 = (uVar11 & 0xf800 | uVar13 & 0x700) >> 8;
          uStack_24 = (uVar11 >> 6 & 0x18 | uVar11 & 0x7e0) >> 3;
          uVar10 = (uVar11 >> 6 & 0x180000 | uVar11 & 0x7e00000) >> 0x13;
          uStack_18 = (uStack_24 + uVar15 + uVar9) / 3;
          uVar16 = (uVar13 & 0xe000 | uVar11 & 0x1f0000) >> 0xd;
          uVar13 = (uVar11 & 0xf8ffffff | uVar13) >> 0x18;
          local_14 = (UObject *)((uVar16 + uVar10 + uVar13) / 3);
          uStack_10 = ((uVar16 * 0xb + uVar15 * 0x15 >> 5 & 0xff) +
                       (uVar10 * 0xb + uStack_24 * 0x15 >> 5 & 0xff) +
                      (uVar13 * 0xb + uVar9 * 0x15 >> 5 & 0xff)) / 3;
          if (uVar11 >> 0x10 < (uVar11 & 0xffff)) {
            uStack_c = ((uVar16 * 0x15 + uVar15 * 0xb >> 5 & 0xff) +
                        (uVar10 * 0x15 + uStack_24 * 0xb >> 5 & 0xff) +
                       (uVar13 * 0x15 + uVar9 * 0xb >> 5 & 0xff)) / 3;
          }
          else {
            uStack_c = 0;
          }
          iVar4 = 4;
          uVar11 = uStack_20;
          puVar12 = puStack_38;
          do {
            *puVar12 = *(undefined1 *)
                        (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                        (&uStack_18)[uVar11 & 3] * 4);
            puVar12[1] = *(undefined1 *)
                          (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                          (&uStack_18)[uVar11 >> 2 & 3] * 4);
            puVar12[2] = *(undefined1 *)
                          (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                          (&uStack_18)[uVar11 >> 4 & 3] * 4);
            puVar12[3] = *(undefined1 *)
                          (*(int *)(*(int *)(pUStack_1c + 0x594) + 0x34) + 2 +
                          (&uStack_18)[uVar11 >> 6 & 3] * 4);
            puVar12 = puVar12 + *(int *)(pUStack_1c + 0x580);
            uVar11 = uVar11 >> 8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iStack_34 = iStack_34 + 4;
          puStack_38 = puStack_38 + 4;
          in_ECX = pUStack_1c;
        } while (iStack_34 < *(int *)(pUStack_1c + 0x580));
      }
      iVar4 = *(int *)(in_ECX + 0x580);
      puStack_38 = puStack_38 + iVar4 * 3;
      iStack_2c = iStack_2c + 4;
    } while (iStack_2c < *(int *)(in_ECX + 0x584));
  }
  in_ECX[0x578] = (UObject)0x0;
  (**(code **)(**(int **)GMalloc_exref + 8))(puStack_28);
  *(uint *)(in_ECX + 0x5c0) = *(uint *)(in_ECX + 0x5c0) | 0x80;
  return 1;
}


// ==== 107446f0 FUN_107446f0

undefined4 FUN_107446f0(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  void *pvVar5;
  undefined1 local_624 [52];
  undefined1 local_5f0;
  undefined4 local_5c8;
  undefined4 local_5c0;
  undefined1 local_5bc;
  undefined1 local_5b3;
  undefined1 local_5ae;
  undefined4 local_5ac;
  undefined1 local_5a8;
  undefined4 local_5a4;
  undefined4 local_59c;
  undefined1 local_598;
  undefined4 local_4c4;
  uint local_4c0;
  undefined1 local_4bc;
  int local_24;
  int local_20;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1082ee5b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff9d0;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x578) != '\0') {
    return 0;
  }
  local_1c = -0xff01;
  ExceptionList = &local_10;
  (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x5f0) + 0x10))();
  uVar4 = *(int *)(in_ECX + 0x580) * *(int *)(in_ECX + 0x584);
  lVar2 = (ulonglong)uVar4 * 4;
  local_18 = (void *)thunk_FUN_103ff730(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2)
  ;
  local_8._0_1_ = 1;
  if (local_18 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(local_18,4,uVar4,FColor::FColor);
    pvVar5 = local_18;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_18 = (void *)**(int **)(in_ECX + 0x600);
  iVar3 = (**(code **)((int)local_18 + 0x28))(5,0);
  (**(code **)((int)local_18 + 0x48))(0,pvVar5,iVar3 * 4);
  thunk_FUN_103b33d0(0);
  iVar3 = *(int *)(in_ECX + 0x580);
  local_18 = *(void **)(in_ECX + 0x584);
  if (param_1 != 0) {
    for (local_20 = 0; local_20 < (int)local_18; local_20 = local_20 + 1) {
      for (local_24 = 0; local_24 < iVar3; local_24 = local_24 + 1) {
        piVar1 = (int *)((int)pvVar5 + (local_20 * iVar3 + local_24) * 4);
        *(char *)((int)piVar1 + 3) = (*piVar1 == local_1c) + -1;
      }
    }
  }
  thunk_FUN_105f2fe0();
  local_5c8 = 0x20;
  local_5c0 = 4;
  local_5bc = param_1 != 0;
  local_4c0 = (uint)(byte)local_5bc;
  local_5f0 = 0;
  local_5b3 = 0;
  local_5ae = 0;
  local_5ac = 0xffffffff;
  local_5a8 = 0;
  local_5a4 = 0xffffffff;
  local_59c = 0;
  local_598 = 0;
  local_4c4 = 0;
  local_4bc = 0;
  FUN_10776110(pvVar5,*(int *)(in_ECX + 0x580),*(undefined4 *)(in_ECX + 0x584),
               *(int *)(in_ECX + 0x580) * 4,local_624,4,FUN_10741ca0,0,0);
  *(undefined1 *)(in_ECX + 0x578) = 3;
  thunk_FUN_103254c0(pvVar5);
  *(uint *)(in_ECX + 0x5c0) = *(uint *)(in_ECX + 0x5c0) | 0x80;
  ExceptionList = local_10;
  return 1;
}


// ==== 107448fc Catch@107448fc

void Catch_107448fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10744910 Catch@10744910

void Catch_10744910(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::Crest_Compress");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107449c0 FUN_107449c0

void FUN_107449c0(void)

{
  FStaticTexture *this;
  undefined4 uVar1;
  UBitmapMaterial *in_ECX;
  double dVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1082ee9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UBitmapMaterial::UBitmapMaterial(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UTexture::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x5f0));
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  local_8._0_1_ = 3;
  this = (FStaticTexture *)thunk_FUN_1032ffc0(0x14);
  local_8._0_1_ = 4;
  if (this == (FStaticTexture *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FStaticTexture::FStaticTexture(this,(UTexture *)in_ECX);
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)(in_ECX + 0x600) = uVar1;
  if (((byte)*GUglyHackFlags_exref & 8) == 0) {
    in_ECX[0x578] = (UBitmapMaterial)0x0;
    *(undefined4 *)(in_ECX + 0x594) = 0;
    in_ECX[0x57b] = (UBitmapMaterial)0x0;
    in_ECX[0x57c] = (UBitmapMaterial)0x0;
    *(undefined4 *)(in_ECX + 0x580) = 0;
    *(undefined4 *)(in_ECX + 0x584) = 0;
    *(undefined4 *)(in_ECX + 0x5a0) = 0x408040;
    *(undefined4 *)(in_ECX + 0x5a4) = 0xffffffff;
  }
  dVar2 = appSecondsQPC();
  *(double *)(in_ECX + 0x5a8) = dVar2;
  *(undefined4 *)(in_ECX + 0x5bc) = 0x3f800000;
  ExceptionList = local_10;
  return;
}


// ==== 10744ac5 Catch@10744ac5

void Catch_10744ac5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10744ad9 Catch@10744ad9

void Catch_10744ad9(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::UTexture");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x20),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10744b60 FUN_10744b60

void FUN_10744b60(FArchive *param_1)

{
  int iVar1;
  UMaterial *in_ECX;
  int iVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1082eec8;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  UMaterial::Serialize(in_ECX,param_1);
  iVar1 = FArchive::IsSaving(param_1);
  if (((iVar1 != 0) || (iVar1 = FArchive::IsLoading(param_1), iVar1 != 0)) &&
     (((byte)in_ECX[0x5c0] & 0x40) != 0)) {
    for (; iVar2 < *(int *)(in_ECX + 0x5f4); iVar2 = iVar2 + 1) {
      FArray::Empty((FArray *)(*(int *)(in_ECX + 0x5f0) + 0x1c + iVar2 * 0x28),1,0);
    }
  }
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x54) {
    if ((*(uint *)(in_ECX + 0x5c0) & 0x100) != 0) {
      thunk_FUN_1073e5f0();
      local_8._0_1_ = 1;
      FUN_10742830();
      FUN_10742830();
      in_ECX[0x578] = in_ECX[0x5fc];
      *(uint *)(in_ECX + 0x5c0) = *(uint *)(in_ECX + 0x5c0) & 0xfffffeff;
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_103edca0();
      goto LAB_10744c73;
    }
  }
  else if ((*(uint *)(in_ECX + 0x5c0) & 0x100) != 0) {
    appFailAssert("!OLDbHasComp",".\\UnTex.cpp",0x1a5);
  }
  FUN_10742830();
LAB_10744c73:
  iVar1 = FArchive::IsSaving(param_1);
  if ((iVar1 == 0) && (iVar1 = FArchive::IsLoading(param_1), iVar1 == 0)) {
    ExceptionList = local_10;
    return;
  }
  if (((byte)in_ECX[0x5c0] & 0x40) != 0) {
    for (local_18 = 0; local_18 < *(int *)(in_ECX + 0x5f4); local_18 = local_18 + 1) {
      iVar1 = *(int *)(in_ECX + 0x5f0) + local_18 * 0x28;
      iVar2 = *(int *)(iVar1 + 8) * *(int *)(iVar1 + 4);
      FArray::Empty((FArray *)(iVar1 + 0x1c),1,iVar2);
      FArray::AddZeroed((FArray *)(local_18 * 0x28 + 0x1c + *(int *)(in_ECX + 0x5f0)),1,iVar2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10744d04 Catch@10744d04

void Catch_10744d04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10744d18 Catch@10744d18

void Catch_10744d18(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTexture::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10744db0 FUN_10744db0

void FUN_10744db0(void)

{
  FStaticCubemap *this;
  undefined4 uVar1;
  UTexture *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1082eef3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UTexture::UTexture(in_ECX);
  *(undefined ***)in_ECX = UCubemap::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  this = (FStaticCubemap *)thunk_FUN_1032ffc0(0x14);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (this == (FStaticCubemap *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FStaticCubemap::FStaticCubemap(this,(UCubemap *)in_ECX);
  }
  *(undefined4 *)(in_ECX + 0x624) = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10744e31 Catch@10744e31

void Catch_10744e31(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10744e45 Catch@10744e45

void Catch_10744e45(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UCubemap::UCubemap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10744e90 FUN_10744e90

undefined4 FUN_10744e90(void)

{
  return 0;
}


// ==== 10744ea0 FUN_10744ea0

undefined4 * FUN_10744ea0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  FMatrix local_7c [64];
  FMatrix local_3c [36];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ef2a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  local_18 = 0;
  local_8 = 0;
  if (param_2 == (int *)0x0) {
    puVar1 = (undefined4 *)(in_ECX + 0x34);
    ExceptionList = &local_10;
    local_14 = &stack0xffffff78;
  }
  else {
    ExceptionList = &local_10;
    (**(code **)(*param_2 + 0x148))(local_7c);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    puVar1 = (undefined4 *)FBox::TransformBy((FBox *)(in_ECX + 0x34),local_3c);
  }
  puVar3 = param_1;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  local_8 = 0;
  if (param_2 != (int *)0x0) {
    local_18 = 0;
    FMatrix::~FMatrix(local_7c);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10744f3c Catch@10744f3c

void Catch_10744f3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10744f50 Catch@10744f50

void Catch_10744f50(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::GetCollisionBoundingBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10744fa0 FUN_10744fa0

void FUN_10744fa0(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x34);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10744fea Catch@10744fea

void Catch_10744fea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10744ffe Catch@10744ffe

void Catch_10744ffe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::GetRenderBoundingBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10745040 FUN_10745040

undefined4 FUN_10745040(undefined4 param_1,undefined4 param_2)

{
  FBox *this;
  int *in_ECX;
  undefined1 local_1c [28];
  
  this = (FBox *)(**(code **)(*in_ECX + 0x78))(local_1c,param_2,param_1);
  FBox::GetExtent(this);
  return param_1;
}


// ==== 10745080 FUN_10745080

undefined4 FUN_10745080(undefined4 param_1,undefined4 param_2)

{
  FBox *this;
  int *in_ECX;
  undefined1 local_1c [28];
  
  this = (FBox *)(**(code **)(*in_ECX + 0x78))(local_1c,param_2,param_1);
  FBox::GetCenter(this);
  return param_1;
}


// ==== 107450c0 FUN_107450c0

void FUN_107450c0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082ef6b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x90));
  local_4 = 0xffffffff;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 10745130 FUN_10745130

void FUN_10745130(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082ef88;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_107450c0();
  ExceptionList = local_c;
  return;
}


// ==== 10745180 FUN_10745180

byte FUN_10745180(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,byte param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  
  fVar2 = param_4;
  fVar5 = param_3;
  fVar6 = param_2;
  do {
    if (param_1 == -NAN) {
      return param_8;
    }
    pfVar1 = (float *)(DAT_11d7d980 + (int)param_1 * 0x78);
    bVar8 = *(byte *)((int)pfVar1 + 0x57) & 1;
    fVar4 = (pfVar1[2] * param_7 +
            *pfVar1 * param_5 + *(float *)(DAT_11d7d980 + 4 + (int)param_1 * 0x78) * param_6) -
            pfVar1[3];
    bVar11 = -1 < (int)fVar4;
    fVar3 = (pfVar1[2] * fVar2 + *pfVar1 * param_2 + pfVar1[1] * param_3) - pfVar1[3];
    bVar12 = -1 < (int)fVar3;
    fVar9 = fVar5;
    fVar10 = fVar6;
    if ((uint)bVar11 != (uint)bVar12) {
      fVar4 = fVar4 / (fVar4 - fVar3);
      fVar10 = fVar4 * (param_2 - param_5) + param_5;
      fVar9 = (param_3 - param_6) * fVar4 + param_6;
      fVar2 = fVar4 * (fVar2 - param_7) + param_7;
      cVar7 = FUN_10745180(pfVar1[bVar12 + 8],fVar10,fVar9,fVar2,fVar6,fVar5,param_4,
                           (bVar12 ^ param_8) & bVar8 ^ bVar12);
      param_3 = fVar9;
      param_2 = fVar10;
      param_4 = fVar2;
      if (cVar7 == '\0') {
        return 0;
      }
    }
    param_1 = pfVar1[bVar11 + 8];
    param_8 = (bVar11 ^ param_8) & bVar8 ^ bVar11;
    fVar5 = fVar9;
    fVar6 = fVar10;
  } while( true );
}


// ==== 10745370 FUN_10745370

void FUN_10745370(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082efa8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_107450c0();
  ExceptionList = local_c;
  return;
}


// ==== 107453c0 FUN_107453c0

void FUN_107453c0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  FPlane *this;
  FMatrix *pFVar4;
  undefined4 *puVar5;
  FMatrix local_50 [4];
  FMatrix local_4c [60];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1082effe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  in_ECX[1] = param_2;
  *in_ECX = param_1;
  in_ECX[2] = param_3;
  pcVar1 = Identity_exref;
  if (param_3 != (int *)0x0) {
    pcVar1 = (code *)(**(code **)(*param_3 + 0x148))(local_4c);
  }
  pFVar4 = (FMatrix *)(in_ECX + 3);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar4 = *(undefined4 *)pcVar1;
    pcVar1 = pcVar1 + 4;
    pFVar4 = pFVar4 + 4;
  }
  uStack_4 = 2;
  if (param_3 != (int *)0x0) {
    FMatrix::~FMatrix(local_4c);
  }
  in_ECX[0x13] = param_4;
  in_ECX[0x14] = param_5;
  in_ECX[0x15] = param_6;
  in_ECX[0x16] = param_7;
  FBox::FBox((FBox *)(in_ECX + 0x1b),0);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  this = (FPlane *)(in_ECX + 0x34);
  iVar3 = 0x3f;
  do {
    FPlane::FPlane(this);
    this = this + 0x10;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)FMatrix::TransposeAdjoint((FMatrix *)(in_ECX + 3));
  puVar5 = in_ECX + 0x24;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_8 = (undefined1 *)CONCAT31((int3)((uint)puStack_8 >> 8),3);
  FMatrix::~FMatrix(local_50);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10745540 FUN_10745540

void FUN_10745540(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FPlane *this;
  FMatrix local_20 [32];
  
  piVar1 = (int *)(*(int *)(*(int *)(in_ECX + 4) + 0xc0) + *(int *)(param_1 + 0x4c) * 4);
  *(int **)(in_ECX + 0x5d0) = piVar1;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  iVar2 = *piVar1;
  while ((iVar2 != -1 && (uVar8 = *(uint *)(in_ECX + 0x5c), uVar8 < 0x40))) {
    uVar6 = *(uint *)(*(int *)(in_ECX + 0x5d0) + uVar8 * 4);
    puVar4 = (undefined4 *)
             (*(int *)(*(int *)(in_ECX + 4) + 100) + (uVar6 * 0x10 - (uVar6 & 0xbfffffff)) * 8);
    this = (FPlane *)((uVar8 + 0xd) * 0x10 + in_ECX);
    *(undefined4 *)this = *puVar4;
    *(undefined4 *)(this + 4) = puVar4[1];
    *(undefined4 *)(this + 8) = puVar4[2];
    *(undefined4 *)(this + 0xc) = puVar4[3];
    if (*(int *)(in_ECX + 8) != 0) {
      puVar4 = (undefined4 *)
               FPlane::TransformByUsingAdjointT(this,local_20,(FMatrix *)(in_ECX + 0xc));
      *(undefined4 *)this = *puVar4;
      *(undefined4 *)(this + 4) = puVar4[1];
      *(undefined4 *)(this + 8) = puVar4[2];
      *(undefined4 *)(this + 0xc) = puVar4[3];
    }
    if ((*(uint *)(*(int *)(in_ECX + 0x5d0) + *(int *)(in_ECX + 0x5c) * 4) & 0x40000000) != 0) {
      puVar4 = (undefined4 *)FPlane::Flip(this);
      *(undefined4 *)this = *puVar4;
      *(undefined4 *)(this + 4) = puVar4[1];
      *(undefined4 *)(this + 8) = puVar4[2];
      *(undefined4 *)(this + 0xc) = puVar4[3];
    }
    if (0.0 <= *(float *)this) {
      if (*(float *)this <= 0.0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 2;
      }
    }
    else {
      uVar8 = 1;
    }
    if (0.0 <= *(float *)(this + 4)) {
      if (*(float *)(this + 4) <= 0.0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 8;
      }
    }
    else {
      uVar6 = 4;
    }
    if (0.0 <= *(float *)(this + 8)) {
      if (*(float *)(this + 8) <= 0.0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x20;
      }
    }
    else {
      uVar5 = 0x10;
    }
    *(uint *)(in_ECX + 0x4d0 + *(int *)(in_ECX + 0x5c) * 4) = uVar5 | uVar6 | uVar8;
    *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + 1;
    iVar2 = *(int *)(*(int *)(in_ECX + 0x5d0) + *(int *)(in_ECX + 0x5c) * 4);
  }
  iVar7 = *(int *)(in_ECX + 0x5c) + *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0xc0);
  iVar2 = iVar3 + 4 + iVar7 * 4;
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(iVar3 + 4 + iVar7 * 4);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(iVar2 + 0x14);
  return;
}


// ==== 10745780 FUN_10745780

void FUN_10745780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,float param_10)

{
  int in_ECX;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082f028;
  local_c = ExceptionList;
  local_18 = (undefined4)(longlong)ROUND(param_10);
  ExceptionList = &local_c;
  thunk_FUN_107453c0(param_1,param_2,param_3,param_7,param_8,param_9,local_18);
  *(undefined4 *)(in_ECX + 0x5e0) = 0x47c35000;
  *(undefined4 *)(in_ECX + 0x5d4) = param_4;
  *(undefined4 *)(in_ECX + 0x5d8) = param_5;
  *(undefined4 *)(in_ECX + 0x5dc) = param_6;
  ExceptionList = local_c;
  return;
}


// ==== 10745880 FUN_10745880

undefined4 FUN_10745880(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *in_ECX;
  
  fVar6 = ABS((float)in_ECX[0x14] * param_1[1]) + ABS(*param_1 * (float)in_ECX[0x13]) +
          ABS((float)in_ECX[0x15] * param_1[2]);
  fVar7 = ((float)in_ECX[0x177] * param_1[2] +
          *param_1 * (float)in_ECX[0x175] + (float)in_ECX[0x176] * param_1[1]) - param_1[3];
  if (((0.0 < fVar7) && (fVar7 < (float)in_ECX[0x178])) && (fVar7 < fVar6)) {
    iVar5 = *in_ECX;
    in_ECX[0x178] = (int)fVar7;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar8 = fVar6 - fVar7;
    fVar3 = (float)in_ECX[0x176];
    fVar4 = (float)in_ECX[0x177];
    *(float *)(iVar5 + 8) = (float)in_ECX[0x175] + fVar8 * *param_1 * 1.02;
    *(float *)(iVar5 + 0xc) = fVar3 + fVar8 * fVar1 * 1.02;
    *(float *)(iVar5 + 0x10) = fVar4 + fVar8 * fVar2 * 1.02;
    iVar5 = *in_ECX;
    *(float *)(iVar5 + 0x14) = *param_1;
    *(float *)(iVar5 + 0x18) = param_1[1];
    *(float *)(iVar5 + 0x1c) = param_1[2];
    *(int *)(*in_ECX + 4) = in_ECX[2];
    *(int *)(*in_ECX + 0x20) = in_ECX[1];
    *(undefined4 *)(*in_ECX + 0x28) = param_2;
    *(undefined4 *)(*in_ECX + 0x24) = 0;
  }
  if (fVar6 <= fVar7) {
    return 0;
  }
  return 1;
}


// ==== 10745a80 FUN_10745a80

uint FUN_10745a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f040;
  local_10 = ExceptionList;
  local_8 = 0;
  DAT_11d7d980 = *(undefined4 *)(in_ECX + 100);
  if (*(int *)(in_ECX + 0x68) != 0) {
    ExceptionList = &local_10;
    uVar1 = FUN_10745180(0,param_1,param_2,param_3,param_4,param_5,param_6,
                         *(undefined1 *)(in_ECX + 0x124));
    ExceptionList = local_10;
    return uVar1 & 0xff;
  }
  return *(uint *)(in_ECX + 0x124);
}


// ==== 10745b23 Catch@10745b23

void Catch_10745b23(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10745b37 Catch@10745b37

void Catch_10745b37(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::FastLineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10745b90 FUN_10745b90

uint FUN_10745b90(int param_1,FMatrix *param_2,FMatrix *param_3,FMatrix *param_4,float param_5,
                 FMatrix *param_6,float param_7,FMatrix *param_8,float param_9,FMatrix *param_10,
                 uint param_11,uint param_12)

{
  FPlane *this;
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  FMatrix *pFVar4;
  FMatrix *pFVar5;
  float fVar6;
  FMatrix *pFVar7;
  code *pcVar8;
  float *pfVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  FMatrix *pFVar13;
  int unaff_retaddr;
  float fVar14;
  FMatrix *local_cc;
  FMatrix local_b0 [64];
  FMatrix local_70 [12];
  FMatrix local_64 [20];
  FMatrix local_50 [64];
  void *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_1082f07c;
  pvStack_c = ExceptionList;
  pcVar8 = Identity_exref;
  ExceptionList = &pvStack_c;
  if (param_3 != (FMatrix *)0x0) {
    ExceptionList = &pvStack_c;
    pcVar8 = (code *)FMatrix::TransposeAdjoint(param_3);
  }
  pFVar13 = local_b0;
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)pFVar13 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pFVar13 = pFVar13 + 4;
  }
  local_8 = (undefined1 *)0x2;
  if (param_3 != (FMatrix *)0x0) {
    FMatrix::~FMatrix(local_50);
  }
  pFVar4 = param_3;
  pFVar5 = param_10;
  fVar6 = param_9;
  fVar3 = param_9;
  pFVar7 = param_8;
  fVar2 = param_7;
  pFVar13 = param_6;
  do {
    while( true ) {
      while( true ) {
        if (param_4 == (FMatrix *)0xffffffff) {
          if (param_11 == 0) {
            if ((DAT_11d7d97c == 0) && ((param_12 & 0x10) != 0)) {
              param_11 = 1;
            }
            else {
              *(FMatrix **)(unaff_retaddr + 8) = pFVar7;
              *(float *)(unaff_retaddr + 0xc) = fVar6;
              *(FMatrix **)(unaff_retaddr + 0x10) = pFVar5;
              puVar1 = (undefined4 *)(*(int *)(param_1 + 100) + (int)pFVar4 * 0x78);
              *(undefined4 *)(unaff_retaddr + 0x14) = *puVar1;
              *(undefined4 *)(unaff_retaddr + 0x18) = puVar1[1];
              *(undefined4 *)(unaff_retaddr + 0x1c) = puVar1[2];
              *(int *)(unaff_retaddr + 0x20) = param_1;
              *(FMatrix **)(unaff_retaddr + 0x28) = pFVar4;
            }
          }
          else {
            DAT_11d7d97c = 1;
          }
          local_8 = (undefined1 *)0xffffffff;
          FMatrix::~FMatrix(local_b0);
          ExceptionList = local_10;
          return param_11;
        }
        this = (FPlane *)(*(int *)(param_1 + 100) + (int)param_4 * 0x78);
        if (param_3 == (FMatrix *)0x0) {
          local_cc = (FMatrix *)
                     ((*(float *)(this + 8) * (float)param_10 +
                      param_9 * *(float *)(this + 4) + *(float *)this * (float)param_8) -
                     *(float *)(this + 0xc));
          fVar14 = (*(float *)(this + 8) * fVar2 +
                   (float)pFVar13 * *(float *)(this + 4) + *(float *)this * param_5) -
                   *(float *)(this + 0xc);
        }
        else {
          pfVar9 = (float *)FPlane::TransformByUsingAdjointT(this,local_70,param_3);
          fVar14 = (pfVar9[2] * fVar3 + *pfVar9 * param_7 + pfVar9[1] * (float)pFVar7) - pfVar9[3];
          FPlane::TransformByUsingAdjointT(this,local_64,param_3);
          fVar2 = param_5;
          param_10 = pFVar7;
          param_8 = param_6;
          param_9 = param_7;
          pFVar13 = param_4;
        }
        if (((float)local_cc <= -0.001) || (fVar14 <= -0.001)) break;
        if ((this[0x56] == (FPlane)0x0) ||
           (((byte)this[0x57] & ((byte)param_12 & 0xef | 0x21)) != 0)) {
          param_4 = *(FMatrix **)(this + 0x24);
        }
        else {
          param_11 = param_11 | 1;
          param_4 = *(FMatrix **)(this + 0x24);
        }
      }
      if ((0.001 <= (float)local_cc) || (0.001 <= fVar14)) break;
      if ((this[0x56] == (FPlane)0x0) || (((byte)this[0x57] & ((byte)param_12 & 0xef | 0x21)) != 0))
      {
        param_11 = param_11 & 1;
        param_4 = *(FMatrix **)(this + 0x20);
      }
      else {
        param_11 = 0;
        param_4 = *(FMatrix **)(this + 0x20);
      }
    }
    fVar3 = (float)local_cc / (fVar14 - (float)local_cc);
    param_8 = (FMatrix *)(fVar3 * ((float)param_8 - param_5) + (float)param_8);
    param_9 = (param_9 - (float)pFVar13) * fVar3 + param_9;
    param_10 = (FMatrix *)(fVar3 * ((float)param_10 - fVar2) + (float)param_10);
    if ((float)local_cc <= 0.0) {
      uVar10 = 0;
      iVar12 = 0;
      if ((param_11 != 0) &&
         ((this[0x56] == (FPlane)0x0 || (((byte)this[0x57] & ((byte)param_12 | 0x21)) != 0)))) {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 1;
      iVar12 = 1;
      if ((param_11 == 0) &&
         ((this[0x56] == (FPlane)0x0 || (((byte)this[0x57] & ((byte)param_12 | 0x21)) != 0)))) {
        uVar10 = 0;
      }
    }
    iVar11 = thunk_FUN_10745b90(unaff_retaddr,param_1,param_2,pFVar4,
                                *(undefined4 *)(this + iVar12 * 4 + 0x20),param_8,param_9,param_10,
                                pFVar7,fVar6,pFVar5,uVar10,param_12);
    if (iVar11 == 0) {
      local_8 = (undefined1 *)0xffffffff;
      FMatrix::~FMatrix(local_b0);
      ExceptionList = local_10;
      return 0;
    }
    if (iVar12 == 1) {
      if ((param_11 == 0) ||
         ((this[0x56] != (FPlane)0x0 && (((byte)this[0x57] & ((byte)param_12 | 0x21)) == 0))))
      goto LAB_10745ffc;
      param_11 = 1;
    }
    else if ((param_11 == 0) &&
            ((this[0x56] == (FPlane)0x0 || (((byte)this[0x57] & ((byte)param_12 | 0x21)) != 0)))) {
LAB_10745ffc:
      param_11 = 0;
    }
    else {
      param_11 = 1;
    }
    param_3 = param_2;
    pFVar4 = param_4;
    local_cc = param_8;
    pFVar5 = param_10;
    fVar6 = param_9;
    fVar3 = param_9;
    pFVar7 = param_8;
    fVar2 = param_7;
    pFVar13 = param_6;
    param_4 = *(FMatrix **)(this + iVar12 * -4 + 0x24);
  } while( true );
}


// ==== 107462d0 FUN_107462d0

void FUN_107462d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 float param_5,float param_6,float param_7,float param_8,float param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  int in_ECX;
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082f0a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_107453c0(param_1,param_2,param_3,param_10,param_11,param_12,param_13);
  local_4 = 0;
  *(float *)(in_ECX + 0x5d4) = param_4;
  *(float *)(in_ECX + 0x5d8) = param_5;
  *(float *)(in_ECX + 0x5dc) = param_6;
  *(float *)(in_ECX + 0x5e0) = param_7;
  *(float *)(in_ECX + 0x5e4) = param_8;
  *(float *)(in_ECX + 0x5e8) = param_9;
  *(float *)(in_ECX + 0x5ec) = param_4 - param_7;
  *(float *)(in_ECX + 0x5f0) = param_5 - param_8;
  *(float *)(in_ECX + 0x5f4) = param_6 - param_9;
  fVar1 = FVector::Size((FVector *)(in_ECX + 0x5ec));
  *(float *)(in_ECX + 0x5f8) = fVar1;
  *(undefined4 *)(in_ECX + 0x5fc) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10746420 FUN_10746420

undefined4 FUN_10746420(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int in_ECX;
  
  pfVar6 = param_1;
  fVar1 = ABS(*(float *)(in_ECX + 0x50) * param_1[1]) + ABS(*param_1 * *(float *)(in_ECX + 0x4c)) +
          ABS(*(float *)(in_ECX + 0x54) * param_1[2]);
  fVar2 = (*(float *)(in_ECX + 0x5e8) * param_1[2] +
          *param_1 * *(float *)(in_ECX + 0x5e0) + *(float *)(in_ECX + 0x5e4) * param_1[1]) -
          param_1[3];
  fVar3 = (*(float *)(in_ECX + 0x5dc) * param_1[2] +
          *param_1 * *(float *)(in_ECX + 0x5d4) + *(float *)(in_ECX + 0x5d8) * param_1[1]) -
          param_1[3];
  param_1 = (float *)(fVar2 - fVar1);
  if (((fVar3 < fVar2) && (-fVar1 < (float)param_1 != (-fVar1 == (float)param_1))) &&
     ((float)param_1 < 0.0)) {
    param_1 = (float *)0x0;
  }
  fVar4 = fVar2 - fVar3;
  fVar5 = (float)param_1 / fVar4;
  if (-1e-05 <= fVar4) {
    if (fVar4 <= 1e-05) {
      if ((fVar1 < fVar2) && (fVar1 < fVar3)) {
        return 0;
      }
    }
    else if (*(float *)(in_ECX + 0x88) < fVar5) {
      *(float *)(in_ECX + 0x88) = fVar5;
      *(float *)(in_ECX + 0x60) = *pfVar6;
      *(float *)(in_ECX + 100) = pfVar6[1];
      *(float *)(in_ECX + 0x68) = pfVar6[2];
    }
  }
  else if (fVar5 < *(float *)(in_ECX + 0x8c)) {
    *(float *)(in_ECX + 0x8c) = fVar5;
  }
  if (*(float *)(in_ECX + 0x8c) <= *(float *)(in_ECX + 0x88)) {
    return 0;
  }
  return 1;
}


// ==== 10746620 FUN_10746620

int FUN_10746620(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_3c;
  float local_38;
  float local_34;
  int local_1c;
  float local_18;
  
  do {
    if (param_2 == -1) {
      return -1;
    }
    iVar1 = *(int *)(param_1 + 100) + param_2 * 0x78;
    pfVar2 = (float *)(*(int *)(param_1 + 0x94) +
                      *(int *)(*(int *)(param_1 + 0x74) + -8 +
                              ((uint)*(byte *)(iVar1 + 0x56) + *(int *)(iVar1 + 0x18)) * 8) * 0xc);
    local_3c = *pfVar2;
    local_38 = pfVar2[1];
    local_34 = pfVar2[2];
    pfVar2 = (float *)(*(int *)(param_1 + 0xa4) + 0x2c + *(int *)(iVar1 + 0x1c) * 0x44);
    local_18 = 0.0;
    local_1c = 0;
    while( true ) {
      if ((int)(uint)*(byte *)(iVar1 + 0x56) <= local_1c) {
        return param_2;
      }
      pfVar3 = (float *)(*(int *)(param_1 + 0x94) +
                        *(int *)(*(int *)(param_1 + 0x74) + (local_1c + *(int *)(iVar1 + 0x18)) * 8)
                        * 0xc);
      fVar5 = (pfVar3[2] - local_34) * pfVar2[1] - (pfVar3[1] - local_38) * pfVar2[2];
      fVar4 = pfVar2[2] * (*pfVar3 - local_3c) - *pfVar2 * (pfVar3[2] - local_34);
      fVar6 = *pfVar2 * (pfVar3[1] - local_38) - pfVar2[1] * (*pfVar3 - local_3c);
      fVar4 = (fVar6 * param_5 + param_4 * fVar4 + param_3 * fVar5) -
              (pfVar3[2] * fVar6 + *pfVar3 * fVar5 + pfVar3[1] * fVar4);
      if (((fVar4 < 0.0) && (0.0 < local_18)) || ((0.0 < fVar4 && (local_18 < 0.0)))) break;
      local_3c = *pfVar3;
      local_38 = pfVar3[1];
      local_34 = pfVar3[2];
      local_1c = local_1c + 1;
      local_18 = fVar4;
    }
    param_2 = *(int *)(iVar1 + 0x28);
  } while( true );
}


// ==== 10746849 Catch@10746849

void Catch_10746849(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1074685d Catch@1074685d

void Catch_1074685d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ClipNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10746910 FUN_10746910

void FUN_10746910(int *param_1,int param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  byte bVar3;
  int in_ECX;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f0d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    appFailAssert("Zone!=NULL",".\\UnTrace.cpp",0x2f8);
  }
  *param_1 = param_2;
  param_1[1] = -1;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(int *)(in_ECX + 0x68) != 0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x124);
    uVar7 = 0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    while (fVar5 != -NAN) {
      pfVar1 = (float *)(*(int *)(in_ECX + 100) + (int)fVar5 * 0x78);
      uVar7 = (uint)(0.0 <= (pfVar1[2] * param_5 + *pfVar1 * param_3 + pfVar1[1] * param_4) -
                            pfVar1[3]);
      uVar2 = thunk_FUN_10685750(uVar7,uVar2,0);
      fVar4 = fVar5;
      fVar5 = pfVar1[uVar7 + 8];
    }
    iVar6 = *(int *)(in_ECX + 100);
    param_1[1] = *(int *)(iVar6 + 0x58 + (uVar7 + (int)fVar4 * 0x1e) * 4);
    if (*(int *)(in_ECX + 0x134) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)(iVar6 + (int)fVar4 * 0x78 + 0x54 + uVar7);
    }
    *(byte *)(param_1 + 2) = bVar3;
    iVar6 = *(int *)(in_ECX + (bVar3 + 0xd) * 0x18);
    if (iVar6 == 0) {
      iVar6 = param_2;
    }
    *param_1 = iVar6;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10746a3d Catch@10746a3d

void Catch_10746a3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10746a51 Catch@10746a51

void Catch_10746a51(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::PointRegion");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10746ad0 FUN_10746ad0

void FUN_10746ad0(int param_1,float param_2,float *param_3)

{
  float *pfVar1;
  byte *pbVar2;
  int iVar3;
  float fVar4;
  
  do {
    iVar3 = *(int *)(param_1 + 100);
    pbVar2 = (byte *)(iVar3 + 0x57 + (int)param_2 * 0x78);
    *pbVar2 = *pbVar2 & 0x3f;
    pfVar1 = (float *)(iVar3 + (int)param_2 * 0x78);
    fVar4 = (pfVar1[2] * param_3[2] +
            *pfVar1 * *param_3 + *(float *)(iVar3 + 4 + (int)param_2 * 0x78) * param_3[1]) -
            pfVar1[3];
    if (-param_3[3] <= fVar4) {
      if (fVar4 <= param_3[3]) {
        if (pfVar1[8] != -NAN) {
          FUN_10746ad0(param_1,pfVar1[8],param_3);
        }
      }
      else {
        *(byte *)((int)pfVar1 + 0x57) = *(byte *)((int)pfVar1 + 0x57) | 0x40;
      }
      param_2 = pfVar1[9];
    }
    else {
      *(byte *)((int)pfVar1 + 0x57) = *(byte *)((int)pfVar1 + 0x57) | 0x80;
      param_2 = pfVar1[8];
    }
  } while (param_2 != -NAN);
  return;
}


// ==== 10746b90 FUN_10746b90

void FUN_10746b90(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f0e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x68) != 0) {
    ExceptionList = &local_10;
    FUN_10746ad0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10746be7 Catch@10746be7

void Catch_10746be7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10746bfb Catch@10746bfb

void Catch_10746bfb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::PrecomputeSphereFilter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10746c40 FUN_10746c40

undefined4 FUN_10746c40(undefined4 *param_1,FVector *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f0f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  local_38 = param_3[1] * param_4[2] - param_3[2] * param_4[1];
  local_34 = param_3[2] * *param_4 - *param_3 * param_4[2];
  local_30 = param_4[1] * *param_3 - *param_4 * param_3[1];
  ExceptionList = &local_10;
  *(float *)param_2 = local_38;
  *(float *)(param_2 + 4) = local_34;
  *(float *)(param_2 + 8) = local_30;
  local_20 = local_30;
  local_1c = local_34;
  local_18 = local_38;
  local_18 = FVector::SizeSquared(param_2);
  if (local_18 < 1.0000001e-06) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    ExceptionList = local_10;
    return 0;
  }
  local_50 = param_3[2] * *(float *)(param_2 + 4) - *(float *)(param_2 + 8) * param_3[1];
  local_4c = *param_3 * *(float *)(param_2 + 8) - *(float *)param_2 * param_3[2];
  local_48 = *(float *)param_2 * param_3[1] - *param_3 * *(float *)(param_2 + 4);
  local_5c = param_4[1] * *(float *)(param_2 + 8) - *(float *)(param_2 + 4) * param_4[2];
  local_58 = *(float *)param_2 * param_4[2] - *param_4 * *(float *)(param_2 + 8);
  local_54 = *param_4 * *(float *)(param_2 + 4) - *(float *)param_2 * param_4[1];
  local_24 = local_5c;
  local_20 = local_58;
  local_1c = local_54;
  pfVar1 = (float *)thunk_FUN_103301a0(local_44,param_4[3],&local_50);
  pfVar2 = (float *)thunk_FUN_103301a0(&local_50,param_3[3],&local_5c);
  local_68 = *pfVar1 + *pfVar2;
  local_64 = pfVar1[1] + pfVar2[1];
  local_60 = pfVar1[2] + pfVar2[2];
  local_24 = local_68;
  local_20 = local_64;
  local_1c = local_60;
  puVar3 = (undefined4 *)FVector::operator/((FVector *)&local_68,(float)&local_5c);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  FVector::Normalize(param_2);
  ExceptionList = local_10;
  return 1;
}


// ==== 10746e3c Catch@10746e3c

void Catch_10746e3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10746e50 Catch@10746e50

void Catch_10746e50(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FIntersectPlanes2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10746f00 FUN_10746f00 (decompilacao falhou: falhou:Exception while decompiling 10746f00: Decompiler process died )

// ==== 10747db0 FUN_10747db0

undefined8
FUN_10747db0(int param_1,int *param_2,float param_3,float param_4,float param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,int param_9)

{
  FPlane *this;
  int *piVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  float *pfVar8;
  int in_ECX;
  FMatrix *pFVar9;
  uint uVar10;
  FMatrix local_108 [64];
  FMatrix local_c8 [64];
  FMatrix local_88 [64];
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  uint local_3c;
  FMatrix local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  piVar1 = param_2;
  iVar4 = param_1;
  puStack_40 = &LAB_1082f15d;
  local_44 = ExceptionList;
  local_48 = &stack0xfffff908;
  local_8 = 0;
  local_3c = 0;
  uVar2 = rdtsc();
  local_1c = (int)uVar2;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &local_44;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 8) = param_3;
  *(float *)(param_1 + 0xc) = param_4;
  *(float *)(param_1 + 0x10) = param_5;
  *(int *)(param_1 + 0x20) = in_ECX;
  *(int **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar6 = *(undefined4 *)(in_ECX + 0x124);
  if (*(int *)(in_ECX + 0x68) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = in_ECX;
    iVar5 = FVector::operator!=((FVector *)&param_6,(FVector *)&local_2c);
    if (iVar5 == 0) {
      param_2 = (int *)0x0;
      pcVar7 = Identity_exref;
      if (piVar1 != (int *)0x0) {
        pcVar7 = (code *)(**(code **)(*piVar1 + 0x148))(local_108);
        local_8 = 1;
      }
      pFVar9 = local_88;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pFVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pFVar9 = pFVar9 + 4;
      }
      local_3c = 4;
      if ((local_8 & 1) != 0) {
        local_8 = local_8 & 0xfffffffe;
        FMatrix::~FMatrix(local_108);
      }
      FMatrix::TransposeAdjoint(local_88);
      local_3c._0_1_ = 5;
      param_1 = uVar6;
      do {
        param_9 = (int)param_2;
        this = (FPlane *)(*(int *)(local_20 + 100) + (int)param_2 * 0x78);
        pfVar8 = (float *)FPlane::TransformByUsingAdjointT(this,local_30,local_88);
        uVar10 = (uint)(0.0 < (pfVar8[2] * param_5 + *pfVar8 * param_3 + pfVar8[1] * param_4) -
                              pfVar8[3]);
        param_1 = thunk_FUN_10685750(uVar10,param_1,0);
        param_2 = *(int **)(this + uVar10 * 4 + 0x20);
      } while (param_2 != (int *)0xffffffff);
      *(uint *)(iVar4 + 0x28) = uVar10 + param_9 * 2;
      local_3c._0_1_ = 4;
      FMatrix::~FMatrix(local_c8);
      local_3c = (uint)local_3c._1_3_ << 8;
      FMatrix::~FMatrix(local_88);
      uVar6 = param_1;
    }
    else {
      fVar3 = (float)param_9;
      if (param_9 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      thunk_FUN_10745780(param_1,in_ECX,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         fVar3);
      local_3c = CONCAT31(local_3c._1_3_,1);
      uVar6 = thunk_FUN_10746f00(0,0,uVar6);
      if (*(int **)(param_1 + 4) != param_2) {
        appFailAssert("Hit.Actor==Owner",".\\UnTrace.cpp",0x155);
      }
      local_3c = local_3c & 0xffffff00;
      thunk_FUN_10745130();
    }
  }
  param_1 = uVar6;
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddd968 * 4);
  uVar2 = rdtsc();
  *piVar1 = *piVar1 + ((int)uVar2 - local_1c);
  ExceptionList = local_44;
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),param_1);
}


// ==== 10748038 Catch@10748038

void Catch_10748038(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 1074804c Catch@1074804c

void Catch_1074804c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::PointCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10748120 FUN_10748120

void FUN_10748120(int param_1,int param_2,undefined4 param_3,int param_4)

{
  FMatrix *this;
  float *pfVar1;
  FPlane *this_00;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  uint **ppuVar12;
  undefined1 *puVar13;
  FMatrix *local_188;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  uint *local_160;
  uint *local_15c;
  float local_158;
  float local_154;
  float local_150;
  int local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  uint *local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float fStack_118;
  float local_114;
  float local_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint *local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [4];
  FMatrix aFStack_4c [44];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1082f189;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (param_2 != -1) {
    this_00 = (FPlane *)(*(int *)(in_ECX[1] + 100) + param_2 * 0x78);
    if (in_ECX[2] == 0) {
      local_170 = *(float *)this_00;
      local_16c = *(float *)(this_00 + 4);
      local_168 = *(float *)(this_00 + 8);
      local_164 = *(float *)(this_00 + 0xc);
    }
    else {
      local_188 = (FMatrix *)(in_ECX + 0x24);
      iVar3 = FPlane::TransformByUsingAdjointT
                        (this_00,(FMatrix *)&local_128,(FMatrix *)(in_ECX + 3));
      local_170 = *(float *)(iVar3 + 4);
      local_16c = *(float *)(iVar3 + 8);
      local_168 = *(float *)(iVar3 + 0xc);
    }
    local_10c = (local_168 * (float)in_ECX[0x17a] +
                local_16c * (float)in_ECX[0x179] + local_170 * (float)in_ECX[0x178]) - local_164;
    fVar2 = ((float)in_ECX[0x177] * local_168 +
            local_16c * (float)in_ECX[0x176] + local_170 * (float)in_ECX[0x175]) - local_164;
    local_138 = (uint *)((float)in_ECX[0x14] * 1.1);
    local_15c = (uint *)ABS((float)in_ECX[0x13] * 1.1 * local_170);
    local_158 = ABS((float)local_138 * local_16c);
    local_160 = (uint *)ABS(local_168 * (float)in_ECX[0x15] * 1.1);
    local_154 = local_158 + (float)local_15c + (float)local_160;
    if ((local_10c <= local_154) || (fVar2 < local_154)) {
      local_150 = 1.4013e-45;
    }
    else {
      local_150 = 0.0;
    }
    local_174 = -local_154;
    if ((local_174 < local_10c == (local_174 == local_10c)) &&
       (local_174 < fVar2 == (local_174 == fVar2))) {
      local_14c = 0;
    }
    else {
      local_14c = 1;
    }
    uVar8 = (uint)(fVar2 < local_10c != (fVar2 == local_10c));
    if ((&local_150)[uVar8] != 0.0) {
      if (uVar8 == 0) {
        if ((param_4 == 0) ||
           ((this_00[0x56] != (FPlane)0x0 && (((byte)this_00[0x57] & 0x21) == 0))))
        goto LAB_10748328;
        local_188 = (FMatrix *)0x1;
      }
      else if ((param_4 == 0) &&
              ((this_00[0x56] == (FPlane)0x0 || (((byte)this_00[0x57] & 0x21) != 0)))) {
LAB_10748328:
        local_188 = (FMatrix *)0x0;
      }
      else {
        local_188 = (FMatrix *)0x1;
      }
      thunk_FUN_10748120(param_2,*(undefined4 *)(this_00 + uVar8 * 4 + 0x20),uVar8);
    }
    if ((&local_14c)[-uVar8] == 0) {
      ExceptionList = local_c;
      return;
    }
    param_2 = *(int *)(this_00 + (1 - uVar8) * 4 + 0x20);
    if (1 - uVar8 == 0) {
      if ((param_4 == 0) || ((this_00[0x56] != (FPlane)0x0 && (((byte)this_00[0x57] & 0x21) == 0))))
      goto LAB_107483a7;
      param_4 = 1;
    }
    else if ((param_4 == 0) &&
            ((this_00[0x56] == (FPlane)0x0 || (((byte)this_00[0x57] & 0x21) != 0)))) {
LAB_107483a7:
      param_4 = 0;
    }
    else {
      param_4 = 1;
    }
  }
  local_188 = (FMatrix *)(*(int *)(in_ECX[1] + 100) + param_1 * 0x78);
  if (param_4 != 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)((int)local_188 + 0x4c) == -1) {
    ExceptionList = local_c;
    return;
  }
  thunk_FUN_10745540();
  in_ECX[0x22] = -0x40800000;
  iVar3 = 0;
  in_ECX[0x23] = *(int *)(*in_ECX + 0x24);
  local_144 = 0.0;
  local_140 = 0.0;
  local_13c = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  if (0 < in_ECX[0x17]) {
    piVar9 = in_ECX + 0x34;
    do {
      local_188 = (FMatrix *)(*(uint *)(in_ECX[0x174] + iVar3 * 4) & 0xbfffffff);
      iVar4 = thunk_FUN_10746420(piVar9);
      if (iVar4 == 0) {
        ExceptionList = local_c;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar9 = piVar9 + 4;
    } while (iVar3 < in_ECX[0x17]);
  }
  if (in_ECX[2] == 0) {
    local_170 = 0.0;
    local_188 = (FMatrix *)0xffffffff;
    local_16c = 0.0;
    local_168 = -1.0;
    local_164 = 0.1 - (float)in_ECX[0x1d];
    iVar3 = thunk_FUN_10746420(&local_170);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_188 = (FMatrix *)0xffffffff;
    local_170 = 0.0;
    local_16c = 0.0;
    local_168 = 1.0;
    local_164 = (float)in_ECX[0x20] + 0.1;
    iVar3 = thunk_FUN_10746420(&local_170);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_188 = (FMatrix *)0xffffffff;
    local_170 = -1.0;
    local_16c = 0.0;
    local_168 = 0.0;
    local_164 = 0.1 - (float)in_ECX[0x1b];
    iVar3 = thunk_FUN_10746420(&local_170);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_188 = (FMatrix *)0xffffffff;
    local_170 = 1.0;
    local_16c = 0.0;
    local_168 = 0.0;
    local_164 = (float)in_ECX[0x1e] - 0.1;
    iVar3 = thunk_FUN_10746420(&local_170);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_188 = (FMatrix *)0xffffffff;
    local_170 = 0.0;
    local_16c = -1.0;
    local_168 = 0.0;
    local_164 = 0.1 - (float)in_ECX[0x1c];
    iVar3 = thunk_FUN_10746420(&local_170);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_188 = (FMatrix *)0xffffffff;
    local_170 = 0.0;
    local_16c = 1.0;
    local_168 = 0.0;
    local_164 = (float)in_ECX[0x1f] - 0.1;
    iVar3 = thunk_FUN_10746420(&local_170);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
LAB_107487d5:
    local_154 = 0.0;
    if (0 < in_ECX[0x17]) {
      local_160 = (uint *)(in_ECX + 0x134);
      pfVar11 = (float *)(in_ECX + 0x36);
      do {
        local_158 = 0.0;
        if (0 < (int)local_154) {
          local_138 = (uint *)(in_ECX + 0x134);
          pfVar10 = (float *)(in_ECX + 0x35);
          do {
            local_15c = (uint *)(*local_160 | *local_138);
            puVar7 = local_15c;
            if (((byte)local_15c & 3) == 3) {
              pfVar1 = pfVar11 + -2;
              local_188 = (FMatrix *)(pfVar10 + -1);
              local_e4 = *pfVar11 * 0.0 - pfVar11[-1] * 0.0;
              local_e0 = *pfVar1 * 0.0 - *pfVar11;
              local_dc = pfVar11[-1] - *pfVar1 * 0.0;
              local_d8 = pfVar10[1] * 0.0 - *pfVar10 * 0.0;
              local_d4 = *(float *)local_188 * 0.0 - pfVar10[1];
              local_d0 = *pfVar10 - *(float *)local_188 * 0.0;
              local_174 = local_d0 * local_dc + local_d4 * local_e0 + local_d8 * local_e4;
              if (0.001 < local_174) {
                thunk_FUN_10746c40(&local_84,&local_a8,pfVar1);
                local_b4 = local_a0 * 0.0 - local_a4 * 0.0;
                local_b0 = local_a8 * 0.0 - local_a0;
                local_ac = local_a4 - local_a8 * 0.0;
                FVector::UnsafeNormal((FVector *)&local_b4);
                if ((float)local_14c * *pfVar11 + local_150 * pfVar11[-1] + local_154 * *pfVar1 <
                    0.0) {
                  local_154 = local_154 * -1.0;
                  local_150 = local_150 * -1.0;
                  local_14c = (int)((float)local_14c * -1.0);
                }
                local_70 = local_154;
                local_6c = local_150;
                local_68 = (float)local_14c;
                local_64 = (float)local_14c * local_80 + local_88 * local_154 + local_84 * local_150
                ;
                iVar3 = thunk_FUN_10746420(&local_70,0xffffffff);
                puVar7 = local_160;
                if (iVar3 == 0) {
                  ExceptionList = local_c;
                  return;
                }
              }
            }
            bVar6 = (byte)puVar7;
            if ((bVar6 & 0xc) == 0xc) {
              pfVar1 = pfVar11 + -2;
              local_188 = (FMatrix *)(pfVar10 + -1);
              local_fc = *pfVar11 - pfVar11[-1] * 0.0;
              local_f8 = *pfVar1 * 0.0 - *pfVar11 * 0.0;
              local_f4 = pfVar11[-1] * 0.0 - *pfVar1;
              local_f0 = pfVar10[1] - *pfVar10 * 0.0;
              fStack_ec = *(float *)local_188 * 0.0 - pfVar10[1] * 0.0;
              local_e8 = *pfVar10 * 0.0 - *(float *)local_188;
              local_174 = local_e8 * local_f4 + fStack_ec * local_f8 + local_f0 * local_fc;
              if (0.001 < local_174) {
                thunk_FUN_10746c40(&fStack_90,&local_9c,pfVar1);
                local_cc = local_94 - local_98 * 0.0;
                local_c8 = local_9c * 0.0 - local_94 * 0.0;
                local_c4 = local_98 * 0.0 - local_9c;
                FVector::UnsafeNormal((FVector *)&local_cc);
                if (local_130 * *pfVar11 + local_134 * pfVar11[-1] + (float)local_138 * *pfVar1 <
                    0.0) {
                  local_138 = (uint *)((float)local_138 * -1.0);
                  local_134 = local_134 * -1.0;
                  local_130 = local_130 * -1.0;
                }
                local_60 = local_138;
                local_5c = local_134;
                local_58 = local_130;
                local_54 = local_134 * fStack_90 + local_94 * (float)local_138 +
                           local_8c * local_130;
                iVar3 = thunk_FUN_10746420(&local_60,0xffffffff);
                if (iVar3 == 0) {
                  ExceptionList = local_c;
                  param_1 = param_2;
                  return;
                }
                bVar6 = (byte)local_160;
              }
            }
            if ((bVar6 & 0x30) == 0x30) {
              pfVar1 = pfVar11 + -2;
              local_188 = (FMatrix *)(pfVar10 + -1);
              fStack_108 = *pfVar11 * 0.0 - pfVar11[-1];
              local_104 = *pfVar1 - *pfVar11 * 0.0;
              local_100 = pfVar11[-1] * 0.0 - *pfVar1 * 0.0;
              fStack_118 = pfVar10[1] * 0.0 - *pfVar10;
              local_114 = *(float *)local_188 - pfVar10[1] * 0.0;
              local_110 = *pfVar10 * 0.0 - *(float *)local_188 * 0.0;
              local_174 = local_110 * local_100 + local_114 * local_104 + fStack_118 * fStack_108;
              if (0.001 < local_174) {
                thunk_FUN_10746c40(&local_170,&fStack_78,pfVar1);
                fStack_c0 = local_70 * 0.0 - local_74;
                fStack_bc = fStack_78 - local_70 * 0.0;
                local_b8 = local_74 * 0.0 - fStack_78 * 0.0;
                FVector::UnsafeNormal((FVector *)&fStack_c0);
                if (local_140 * *pfVar11 + local_144 * pfVar11[-1] + local_148 * *pfVar1 < 0.0) {
                  local_148 = local_148 * -1.0;
                  local_144 = local_144 * -1.0;
                  local_140 = local_140 * -1.0;
                }
                local_12c = local_148;
                local_124 = local_140;
                local_128 = local_144;
                local_120 = local_140 * local_16c + local_144 * local_170 + local_174 * local_148;
                iVar3 = thunk_FUN_10746420(&local_12c,0xffffffff);
                if (iVar3 == 0) {
                  ExceptionList = local_c;
                  return;
                }
              }
            }
            local_158 = (float)((int)local_158 + 1);
            local_138 = local_138 + 1;
            pfVar10 = pfVar10 + 4;
          } while ((int)local_158 < (int)local_154);
        }
        local_160 = local_160 + 1;
        local_154 = (float)((int)local_154 + 1);
        pfVar11 = pfVar11 + 4;
      } while ((int)local_154 < in_ECX[0x17]);
    }
    if (((-1.0 < (float)in_ECX[0x22]) && ((float)in_ECX[0x22] < (float)in_ECX[0x23])) &&
       (0.0 < (float)in_ECX[0x23])) {
      *(int *)(*in_ECX + 0x24) = in_ECX[0x22];
      iVar3 = *in_ECX;
      *(int *)(iVar3 + 0x14) = in_ECX[0x18];
      *(int *)(iVar3 + 0x18) = in_ECX[0x19];
      *(int *)(iVar3 + 0x1c) = in_ECX[0x1a];
      *(int *)(*in_ECX + 4) = in_ECX[2];
      *(int *)(*in_ECX + 0x20) = in_ECX[1];
      in_ECX[0x17f] = 1;
    }
  }
  else {
    local_188 = aFStack_4c;
    this = (FMatrix *)(in_ECX + 3);
    FMatrix::TransposeAdjoint(this);
    puStack_8 = (undefined1 *)0x0;
    local_168 = 0.1 - (float)in_ECX[0x1d];
    puVar13 = local_50;
    local_174 = 0.0;
    local_170 = 0.0;
    local_16c = -1.0;
    uVar5 = FPlane::TransformByUsingAdjointT((FPlane *)&local_174,(FMatrix *)&local_12c,this);
    iVar3 = thunk_FUN_10746420(uVar5,puVar13);
    if (iVar3 != 0) {
      local_16c = (float)in_ECX[0x20] + 0.1;
      pfVar11 = &local_54;
      local_174 = 0.0;
      local_170 = 1.0;
      uVar5 = FPlane::TransformByUsingAdjointT
                        ((FPlane *)&stack0xfffffe88,(FMatrix *)&local_130,this);
      iVar3 = thunk_FUN_10746420(uVar5,pfVar11);
      if (iVar3 != 0) {
        local_170 = 0.1 - (float)in_ECX[0x1b];
        pfVar11 = &local_58;
        local_174 = 0.0;
        uVar5 = FPlane::TransformByUsingAdjointT
                          ((FPlane *)&stack0xfffffe84,(FMatrix *)&local_134,this);
        iVar3 = thunk_FUN_10746420(uVar5,pfVar11);
        if (iVar3 != 0) {
          local_174 = (float)in_ECX[0x1e] - 0.1;
          pfVar11 = &local_5c;
          uVar5 = FPlane::TransformByUsingAdjointT
                            ((FPlane *)&stack0xfffffe80,(FMatrix *)&local_138,this);
          iVar3 = thunk_FUN_10746420(uVar5,pfVar11);
          if (iVar3 != 0) {
            local_188 = (FMatrix *)(0.1 - (float)in_ECX[0x1c]);
            ppuVar12 = &local_60;
            uVar5 = FPlane::TransformByUsingAdjointT
                              ((FPlane *)&stack0xfffffe7c,(FMatrix *)&local_13c,this);
            iVar3 = thunk_FUN_10746420(uVar5,ppuVar12);
            if (iVar3 != 0) {
              pfVar11 = &local_64;
              local_188 = (FMatrix *)0x0;
              uVar5 = FPlane::TransformByUsingAdjointT
                                ((FPlane *)&local_188,(FMatrix *)&local_140,this);
              iVar3 = thunk_FUN_10746420(uVar5,pfVar11);
              if (iVar3 != 0) {
                uStack_20 = 0xffffffff;
                FMatrix::~FMatrix((FMatrix *)&local_68);
                goto LAB_107487d5;
              }
            }
          }
        }
      }
    }
    uStack_4 = 0xffffffff;
    local_188 = (FMatrix *)0x10748e59;
    FMatrix::~FMatrix(aFStack_4c);
  }
  ExceptionList = local_c;
  return;
}


// ==== 107491d0 FUN_107491d0

int FUN_107491d0(int param_1,int *param_2,float param_3,undefined8 param_4,float param_5,
                float param_6,float param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,float param_11,float param_12)

{
  FVector *this;
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  int in_ECX;
  FMatrix *pFVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_134;
  int local_130;
  FMatrix local_12c [64];
  float local_ec;
  float local_dc;
  float local_d0;
  float local_c4;
  float local_b8;
  float local_ac;
  FMatrix local_a0 [68];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined8 local_10;
  int local_8;
  
  puStack_48 = &LAB_1082f1cc;
  local_4c = ExceptionList;
  local_50 = &stack0xfffff8c8;
  local_44 = 0;
  uVar3 = rdtsc();
  local_8 = (int)uVar3;
  if (*(int *)(in_ECX + 0x68) == 0) {
    piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddd968 * 4);
    uVar3 = rdtsc();
    *piVar1 = *piVar1 + ((int)uVar3 - local_8);
    return *(int *)(in_ECX + 0x124);
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  ExceptionList = &local_4c;
  iVar4 = FVector::operator==((FVector *)&param_8,(FVector *)&local_40);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0x40000000;
    thunk_FUN_107462d0(param_1,in_ECX,param_2,param_3,(float)param_4,param_4._4_4_,param_5,param_6,
                       param_7,param_8,param_9,param_10,param_11);
    local_44._0_1_ = 4;
    thunk_FUN_10748120(0,0,0,*(undefined4 *)(in_ECX + 0x124));
    if (local_130 == 0) {
      piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddd968 * 4);
      uVar3 = rdtsc();
      *piVar1 = *piVar1 + ((int)uVar3 - local_8);
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_10745370();
      ExceptionList = local_4c;
      return 1;
    }
    local_10 = (double)*(float *)(param_1 + 0x24);
    fVar9 = (float10)thunk_FUN_103704b0(0x3dcccccd,0.1 / local_134,4.0 / local_134,0,0x3f800000);
    fVar9 = (float10)thunk_FUN_103704b0((float)((float10)local_10 - fVar9));
    fVar2 = (float)fVar9;
    *(float *)(param_1 + 0x24) = fVar2;
    local_dc = param_3 - param_5;
    local_b8 = fVar2 * local_dc;
    local_20 = local_b8 + param_5;
    param_11 = param_6 + ((float)param_4 - param_6) * fVar2;
    local_18 = param_7 + (param_4._4_4_ - param_7) * fVar2;
    *(float *)(param_1 + 8) = local_20;
    *(float *)(param_1 + 0xc) = param_11;
    *(float *)(param_1 + 0x10) = local_18;
    piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddd968 * 4);
    uVar3 = rdtsc();
    *piVar1 = *piVar1 + ((int)uVar3 - local_8);
    local_1c = param_11;
    if (*(float *)(param_1 + 0x24) == 1.0) {
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_10745370();
      ExceptionList = local_4c;
      return 1;
    }
    local_44 = (uint)local_44._1_3_ << 8;
    thunk_FUN_10745370();
    ExceptionList = local_4c;
    return 0;
  }
  DAT_11d7d97c = 0;
  local_44._0_1_ = 1;
  if (param_2 == (int *)0x0) {
    iVar4 = thunk_FUN_10745b90(param_1);
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x148))(local_12c);
    local_44 = (uint)local_44._1_3_ << 8;
    pFVar8 = local_a0;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pFVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      pFVar8 = pFVar8 + 4;
    }
    local_44._0_1_ = 1;
    FMatrix::~FMatrix(local_12c);
    iVar4 = thunk_FUN_10745b90(param_1);
  }
  if (iVar4 != 0) goto LAB_10749634;
  local_14 = param_3 - param_5;
  param_4._0_4_ = (float)param_4 - param_6;
  param_4._4_4_ = param_4._4_4_ - param_7;
  local_10 = (double)CONCAT44(param_4._4_4_,(float)param_4);
  local_c4 = *(float *)(param_1 + 8) - param_5;
  fVar2 = ((*(float *)(param_1 + 0x10) - param_7) * param_4._4_4_ +
          (*(float *)(param_1 + 0xc) - param_6) * (float)param_4 + local_c4 * local_14) /
          ((float)param_4 * (float)param_4 + local_14 * local_14 + param_4._4_4_ * param_4._4_4_);
  *(float *)(param_1 + 0x24) = fVar2;
  uVar12 = 0x3f800000;
  uVar11 = 0;
  param_11 = fVar2;
  fVar10 = FVector::Size((FVector *)&local_14);
  param_11 = fVar2 - 0.5 / fVar10;
  fVar9 = (float10)thunk_FUN_103704b0(param_11,uVar11,uVar12);
  fVar2 = (float)fVar9;
  *(float *)(param_1 + 0x24) = fVar2;
  local_ac = fVar2 * local_14;
  param_11 = local_ac + param_5;
  *(float *)(param_1 + 8) = param_11;
  *(float *)(param_1 + 0xc) = param_6 + (float)local_10 * fVar2;
  *(float *)(param_1 + 0x10) = param_7 + fVar2 * local_10._4_4_;
  *(int **)(param_1 + 4) = param_2;
  if (((uint)param_12 & 0x1000) != 0) {
    iVar6 = thunk_FUN_10746620();
    *(int *)(param_1 + 0x28) = iVar6;
    if (iVar6 == -1) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) =
           *(undefined4 *)
            (*(int *)(in_ECX + 0xa4) + *(int *)(*(int *)(in_ECX + 100) + iVar6 * 0x78 + 0x1c) * 0x44
            );
    }
  }
  if (param_2 != (int *)0x0) {
    pfVar7 = (float *)FMatrix::TransposeAdjoint(local_a0);
    this = (FVector *)(param_1 + 0x14);
    param_11 = *(float *)this;
    fVar2 = *(float *)(param_1 + 0x18);
    param_12 = *(float *)(param_1 + 0x1c);
    local_34 = *pfVar7 * param_11 + fVar2 * pfVar7[4] + param_12 * pfVar7[8] + pfVar7[0xc] * 0.0;
    local_30 = pfVar7[0xd] * 0.0 + pfVar7[9] * param_12 + pfVar7[5] * fVar2 + pfVar7[1] * param_11;
    local_2c = pfVar7[2] * param_11 + pfVar7[6] * fVar2 + pfVar7[10] * param_12 + pfVar7[0xe] * 0.0;
    *(float *)this = local_34;
    *(float *)(param_1 + 0x18) = local_30;
    *(float *)(param_1 + 0x1c) = local_2c;
    local_44._0_1_ = 1;
    local_ec = param_11;
    FMatrix::~FMatrix(local_12c);
    if ((float)param_2[0x9f] == 1.0) {
      local_5c = 0x3f800000;
      local_58 = 0x3f800000;
      local_54 = 0x3f800000;
      iVar6 = FVector::operator!=((FVector *)(param_2 + 0xa0),(FVector *)&local_5c);
      if (iVar6 == 0) goto LAB_107495af;
    }
    FVector::Normalize(this);
  }
LAB_107495af:
  local_d0 = -local_14;
  param_12 = -local_10._4_4_;
  param_11 = *(float *)(param_1 + 0x1c) * param_12 +
             *(float *)(param_1 + 0x18) * -(float)local_10 + *(float *)(param_1 + 0x14) * local_d0;
  if (param_11 < 0.0) {
    param_11 = -*(float *)(param_1 + 0x14);
    param_12 = -*(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x14) = param_11;
    *(float *)(param_1 + 0x18) = -*(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = param_12;
  }
LAB_10749634:
  piVar1 = (int *)(DAT_10ddd7e0 + DAT_10ddd968 * 4);
  uVar3 = rdtsc();
  *piVar1 = *piVar1 + ((int)uVar3 - local_8);
  local_44 = (uint)local_44._1_3_ << 8;
  FMatrix::~FMatrix(local_a0);
  ExceptionList = local_4c;
  return iVar4;
}


// ==== 1074989f Catch@1074989f

void Catch_1074989f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x1c,&DAT_10914c48);
}


// ==== 107498b3 Catch@107498b3

void Catch_107498b3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::LineCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10749a90 FUN_10749a90

float10 FUN_10749a90(int param_1,float *param_2,undefined4 *param_3,float param_4,float param_5,
                    int *param_6)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  double dVar10;
  byte local_61;
  float local_60;
  int *local_5c;
  
  local_60 = -1.0;
  fVar7 = param_4;
  do {
    if (param_5 == -NAN) break;
    pfVar1 = (float *)(*(int *)(param_1 + 100) + (int)param_5 * 0x78);
    fVar5 = pfVar1[8];
    fVar8 = (pfVar1[2] * param_2[2] +
            *param_2 * *pfVar1 +
            *(float *)(*(int *)(param_1 + 100) + 4 + (int)param_5 * 0x78) * param_2[1]) - pfVar1[3];
    if ((-fVar7 < fVar8 != (-fVar7 == fVar8)) && (pfVar1[9] != -NAN)) {
      fVar9 = (float10)FUN_10749a90(param_1,param_2,param_3,fVar7,pfVar1[9],param_6);
      fVar4 = (float)fVar9;
      fVar7 = param_4;
      if (0.0 <= fVar4) {
        fVar7 = fVar4;
        param_4 = fVar4;
        local_60 = fVar4;
      }
    }
    if ((-fVar7 < fVar8) && (fVar8 < fVar7 != (fVar8 == fVar7))) {
      while (param_5 != -NAN) {
        iVar2 = *(int *)(param_1 + 100) + (int)param_5 * 0x78;
        iVar6 = *(int *)(*(int *)(param_1 + 0xa4) + *(int *)(iVar2 + 0x1c) * 0x44 + 8);
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x94) + iVar6 * 0xc);
        fVar4 = *(float *)(*(int *)(param_1 + 0x94) + iVar6 * 0xc) - *param_2;
        fVar4 = ((float)puVar3[1] - param_2[1]) * ((float)puVar3[1] - param_2[1]) + fVar4 * fVar4 +
                ((float)puVar3[2] - param_2[2]) * ((float)puVar3[2] - param_2[2]);
        if (fVar4 < fVar7 * fVar7) {
          *param_6 = iVar6;
          dVar10 = appSqrt((double)fVar4);
          fVar7 = (float)dVar10;
          *param_3 = *puVar3;
          param_3[1] = puVar3[1];
          param_3[2] = puVar3[2];
          param_4 = fVar7;
          local_60 = fVar7;
        }
        local_5c = (int *)(*(int *)(param_1 + 0x74) + *(int *)(iVar2 + 0x18) * 8);
        local_61 = 0;
        if (*(char *)(iVar2 + 0x56) != '\0') {
          do {
            iVar6 = *local_5c;
            puVar3 = (undefined4 *)(*(int *)(param_1 + 0x94) + iVar6 * 0xc);
            fVar4 = *(float *)(*(int *)(param_1 + 0x94) + iVar6 * 0xc) - *param_2;
            fVar4 = ((float)puVar3[1] - param_2[1]) * ((float)puVar3[1] - param_2[1]) +
                    fVar4 * fVar4 +
                    ((float)puVar3[2] - param_2[2]) * ((float)puVar3[2] - param_2[2]);
            if (fVar4 < fVar7 * fVar7) {
              *param_6 = iVar6;
              dVar10 = appSqrt((double)fVar4);
              fVar7 = (float)dVar10;
              *param_3 = *puVar3;
              param_3[1] = puVar3[1];
              param_3[2] = puVar3[2];
              param_4 = fVar7;
              local_60 = fVar7;
            }
            local_5c = local_5c + 2;
            local_61 = local_61 + 1;
          } while (local_61 < *(byte *)(iVar2 + 0x56));
        }
        param_5 = *(float *)(iVar2 + 0x28);
      }
    }
    param_5 = fVar5;
  } while (fVar8 <= fVar7);
  return (float10)local_60;
}


// ==== 10749e30 FUN_10749e30

float10 FUN_10749e30(void)

{
  int in_ECX;
  float10 fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f1f0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x68) == 0) {
    fVar1 = (float10)-1.0;
  }
  else {
    ExceptionList = &local_10;
    fVar1 = (float10)FUN_10749a90();
  }
  ExceptionList = local_10;
  return (float10)(float)fVar1;
}


// ==== 10749e9f Catch@10749e9f

void Catch_10749e9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10749eb3 Catch@10749eb3

void Catch_10749eb3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::FindNearestVertex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10749f00 FUN_10749f00

void FUN_10749f00(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
                 float param_7,float param_8,float param_9,float param_10,float param_11,
                 FArray *param_12)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  while (param_2 != -NAN) {
    iVar5 = *(int *)(param_1 + 100);
    pfVar1 = (float *)(iVar5 + (int)param_2 * 0x78);
    fVar2 = ABS(param_7 * pfVar1[1]) + ABS(*(float *)(iVar5 + (int)param_2 * 0x78) * param_6) +
            ABS(pfVar1[2] * param_8);
    fVar3 = (pfVar1[2] * param_5 + param_4 * pfVar1[1] + *pfVar1 * param_3) - pfVar1[3];
    if (fVar3 <= fVar2) {
      if (-fVar2 <= fVar3) {
        while (param_2 != -NAN) {
          iVar4 = (int)param_2 * 0x78;
          if (*(float *)(iVar5 + 8 + iVar4) * param_11 +
              param_9 * *(float *)(iVar5 + iVar4) + *(float *)(iVar5 + 4 + iVar4) * param_10 <
              -0.0001) {
            iVar5 = FArray::Add(param_12,1,4);
            *(float *)(*(int *)param_12 + iVar5 * 4) = param_2;
          }
          iVar5 = *(int *)(param_1 + 100);
          param_2 = *(float *)(iVar5 + 0x28 + iVar4);
        }
        FUN_10749f00(param_1,pfVar1[9],param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12);
      }
      param_2 = pfVar1[8];
    }
    else {
      param_2 = pfVar1[9];
    }
  }
  return;
}


// ==== 1074a120 FUN_1074a120

undefined4 FUN_1074a120(FBox *param_1,int param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  FArray *in_stack_0000001c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f200;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::Empty(in_stack_0000001c,4,0);
  if (*(int *)(in_ECX + 0x68) != 0) {
    FBox::GetExtent(param_1);
    FBox::GetCenter(param_1);
    FUN_10749f00();
    for (local_18 = 0; local_18 < *(int *)(in_stack_0000001c + 4); local_18 = local_18 + 1) {
      iVar1 = *(int *)(in_ECX + 100) + *(int *)(*(int *)in_stack_0000001c + local_18 * 4) * 0x78;
      if ((*(byte *)(*(int *)(in_ECX + 0xa4) + 4 + *(int *)(iVar1 + 0x1c) * 0x44) & 1) == 0) {
        for (iVar5 = 0; iVar5 < param_3; iVar5 = iVar5 + 1) {
          iVar4 = 0;
          while( true ) {
            if ((int)(uint)*(byte *)(iVar1 + 0x56) <= iVar4) {
              thunk_FUN_103256b0(local_18,1);
              local_18 = local_18 + -1;
              goto LAB_1074a2ba;
            }
            pfVar2 = (float *)(*(int *)(in_ECX + 0x94) +
                              *(int *)(*(int *)(in_ECX + 0x74) +
                                      (*(int *)(iVar1 + 0x18) + iVar4) * 8) * 0xc);
            pfVar3 = (float *)(iVar5 * 0x10 + param_2);
            if (0.0 < (pfVar2[2] * pfVar3[2] + *pfVar3 * *pfVar2 + pfVar2[1] * pfVar3[1]) -
                      pfVar3[3]) break;
            iVar4 = iVar4 + 1;
          }
        }
      }
LAB_1074a2ba:
    }
  }
  ExceptionList = local_10;
  return *(undefined4 *)(in_stack_0000001c + 4);
}


// ==== 1074a2e9 Catch@1074a2e9

void Catch_1074a2e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1074a2fd Catch@1074a2fd

void Catch_1074a2fd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UModel::ConvexVolumeMultiCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074a3e0 FUN_1074a3e0

void FUN_1074a3e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082f219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1074a460 FUN_1074a460

void FUN_1074a460(void)

{
  int iVar1;
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::PostEditChange(in_ECX);
  iVar1 = *(int *)(in_ECX + 0x4d0);
  if (iVar1 < 4) {
    iVar1 = 3;
  }
  *(int *)(in_ECX + 0x4d0) = iVar1;
  (**(code **)(*(int *)in_ECX + 0x6c))();
  (**(code **)(*(int *)in_ECX + 0x68))(*(undefined4 *)(in_ECX + 0x10c));
  return;
}


// ==== 1074a4b0 FUN_1074a4b0

void FUN_1074a4b0(int param_1)

{
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f230;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::Initialize(in_ECX,param_1);
  FArray::Add((FArray *)(in_ECX + 0x4e4),*(int *)(in_ECX + 0x4d0) * param_1,0x1c);
  FArray::Add((FArray *)(in_ECX + 0x4f0),param_1,0x18);
  ExceptionList = local_10;
  return;
}


// ==== 1074a524 Catch@1074a524

void Catch_1074a524(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074a538 Catch@1074a538

void Catch_1074a538(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTrailEmitter::Initialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074a580 FUN_1074a580

void FUN_1074a580(void)

{
  int iVar1;
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f240;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::CleanUp(in_ECX);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x4e8); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x4e4),0x1c,0);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x4f4); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x4f0),0x18,0);
  ExceptionList = local_10;
  return;
}


// ==== 1074a605 Catch@1074a605

void Catch_1074a605(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1074a619 Catch@1074a619

void Catch_1074a619(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTrailEmitter::CleanUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074a670 FUN_1074a670

undefined4 FUN_1074a670(int param_1,float param_2,int param_3,int param_4,FVector *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  UParticleEmitter *in_ECX;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f250;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UParticleEmitter::SpawnParticle(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = param_1 * 0x18;
  *(undefined4 *)(iVar2 + *(int *)(in_ECX + 0x4f0)) = 1;
  *(undefined4 *)(iVar2 + 4 + *(int *)(in_ECX + 0x4f0)) = 2;
  iVar3 = param_1 * 0xe0;
  puVar4 = (undefined4 *)(*(int *)(in_ECX + 0x42c) + iVar3);
  puVar1 = (undefined4 *)(iVar2 + 8 + *(int *)(in_ECX + 0x4f0));
  *puVar1 = *puVar4;
  puVar1[1] = puVar4[1];
  puVar1[2] = puVar4[2];
  puVar4 = (undefined4 *)(*(int *)(in_ECX + 0x42c) + iVar3);
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x4e4) + *(int *)(in_ECX + 0x4d0) * param_1 * 0x1c);
  *puVar1 = *puVar4;
  puVar1[1] = puVar4[1];
  puVar1[2] = puVar4[2];
  *(undefined4 *)(*(int *)(in_ECX + 0x4e4) + 0xc + *(int *)(in_ECX + 0x4d0) * param_1 * 0x1c) =
       *(undefined4 *)(*(int *)(in_ECX + 0x42c) + iVar3 + 0xa8);
  *(undefined4 *)(*(int *)(in_ECX + 0x4e4) + 0x10 + *(int *)(in_ECX + 0x4d0) * param_1 * 0x1c) =
       *(undefined4 *)(*(int *)(in_ECX + 0x42c) + iVar3 + 0x6c);
  *(double *)(*(int *)(in_ECX + 0x4e4) + 0x14 + *(int *)(in_ECX + 0x4d0) * param_1 * 0x1c) =
       (double)*(float *)(*(int *)(*(int *)(in_ECX + 0x420) + 0xe0) + 0x4bc);
  puVar4 = (undefined4 *)(*(int *)(in_ECX + 0x42c) + iVar3);
  puVar1 = (undefined4 *)
           (*(int *)(in_ECX + 0x4e4) + (*(int *)(in_ECX + 0x4d0) * param_1 + 1) * 0x1c);
  *puVar1 = *puVar4;
  puVar1[1] = puVar4[1];
  puVar1[2] = puVar4[2];
  *(undefined4 *)(*(int *)(in_ECX + 0x4e4) + 0x28 + *(int *)(in_ECX + 0x4d0) * param_1 * 0x1c) =
       *(undefined4 *)(*(int *)(in_ECX + 0x42c) + iVar3 + 0xa8);
  *(undefined4 *)(*(int *)(in_ECX + 0x4e4) + 0x2c + *(int *)(in_ECX + 0x4d0) * param_1 * 0x1c) =
       *(undefined4 *)(*(int *)(in_ECX + 0x42c) + iVar3 + 0x6c);
  *(double *)(*(int *)(in_ECX + 0x4e4) + 0x30 + *(int *)(in_ECX + 0x4d0) * param_1 * 0x1c) =
       (double)*(float *)(*(int *)(*(int *)(in_ECX + 0x420) + 0xe0) + 0x4bc);
  ExceptionList = local_10;
  return 1;
}


// ==== 1074a89f Catch@1074a89f

void Catch_1074a89f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074a8b3 Catch@1074a8b3

void Catch_1074a8b3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTrailEmitter::SpawnParticle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074a970 FUN_1074a970

int FUN_1074a970(float param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  UParticleEmitter *in_ECX;
  int iVar3;
  int iVar4;
  FBox *pFVar5;
  undefined1 local_40 [36];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f260;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar4 = 0;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  if (((byte)in_ECX[0x4cc] & 1) == 0) {
    ExceptionList = &local_10;
    local_18 = UParticleEmitter::UpdateParticles(in_ECX,param_1);
  }
  else {
    for (; iVar4 < *(int *)(in_ECX + 0x43c); iVar4 = iVar4 + 1) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x4f0) + 4 + iVar4 * 0x18);
      *piVar1 = *piVar1 + -1;
      if (*(int *)(*(int *)(in_ECX + 0x4f0) + 4 + iVar4 * 0x18) < 1) {
        *(int *)(in_ECX + 0x43c) = *(int *)(in_ECX + 0x43c) + -1;
      }
    }
    local_1c = iVar4;
    local_14 = &stack0xffffffb4;
    if (*(int *)(in_ECX + 0x43c) < 1) {
      *(uint *)(in_ECX + 0x46c) = *(uint *)(in_ECX + 0x46c) | 2;
      local_14 = &stack0xffffffb4;
    }
  }
  iVar4 = local_18;
  puVar2 = (undefined4 *)FBox::ExpandBy((FBox *)(in_ECX + 0x444),(float)local_40);
  pFVar5 = (FBox *)(in_ECX + 0x444);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar5 = pFVar5 + 4;
  }
  ExceptionList = local_10;
  return iVar4;
}


// ==== 1074aa3e Catch@1074aa3e

void Catch_1074aa3e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1074aa52 Catch@1074aa52

void Catch_1074aa52(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTrailEmitter::UpdateParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074aab0 FUN_1074aab0

void FUN_1074aab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f280;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FIndexBuffer::vftable;
  local_4 = 1;
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  *in_ECX = FTrailIndexBuffer::vftable;
  pcVar3 = GMakeCacheIDIndex_exref;
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 5) = lVar4 + 0xe2;
  ExceptionList = local_c;
  return;
}


// ==== 1074ab90 FUN_1074ab90

undefined8 FUN_1074ab90(void)

{
  int in_ECX;
  
  return *(undefined8 *)(in_ECX + 0x14);
}


// ==== 1074aba0 FUN_1074aba0

undefined4 FUN_1074aba0(void)

{
  return 1;
}


// ==== 1074abb0 FUN_1074abb0

int FUN_1074abb0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 2;
}


// ==== 1074abc0 FUN_1074abc0

undefined4 FUN_1074abc0(void)

{
  return 2;
}


// ==== 1074abd0 FUN_1074abd0

void FUN_1074abd0(short *param_1)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  short sVar5;
  int local_c;
  int local_8;
  int local_4;
  
  psVar2 = param_1;
  iVar4 = *(int *)(in_ECX + 0xc);
  sVar5 = 0;
  local_4 = 0;
  if (0 < *(int *)(iVar4 + 0x43c)) {
    param_1 = (short *)0x0;
    local_8 = 0;
    do {
      if ((((*(byte *)(*(int *)(iVar4 + 0x42c) + 0xbc + local_8) & 1) != 0) &&
          (iVar3 = *(int *)(*(int *)(iVar4 + 0x4f0) + 4 + (int)param_1), 1 < iVar3)) &&
         (local_c = 0, ((*(uint *)(iVar4 + 0x4dc) & 1) != 0) != 0xffffffff)) {
        iVar3 = iVar3 + -1;
        do {
          iVar4 = 0;
          if (0 < iVar3) {
            do {
              sVar1 = sVar5 * 2;
              *psVar2 = sVar1;
              psVar2[1] = sVar1 + 1;
              psVar2[2] = sVar1 + 2;
              psVar2[3] = sVar1 + 2;
              psVar2[4] = sVar1 + 1;
              psVar2[5] = sVar1 + 3;
              iVar4 = iVar4 + 1;
              iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x4f0) + 4 + (int)param_1) + -1;
              psVar2 = psVar2 + 6;
              sVar5 = sVar5 + 1;
            } while (iVar4 < iVar3);
          }
          local_c = local_c + 1;
          sVar5 = sVar5 + 1;
        } while (local_c < (int)(((*(uint *)(*(int *)(in_ECX + 0xc) + 0x4dc) & 1) != 0) + 1));
      }
      iVar4 = *(int *)(in_ECX + 0xc);
      local_8 = local_8 + 0xe0;
      param_1 = (short *)((int)param_1 + 0x18);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(iVar4 + 0x43c));
  }
  return;
}


// ==== 1074ad60 FUN_1074ad60

void FUN_1074ad60(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f2a0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1074adb0 FUN_1074adb0

void FUN_1074adb0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  *(uint *)(in_ECX + 0x4cc) = *(uint *)(in_ECX + 0x4cc) | 1;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x43c); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(in_ECX + 0x4f0) + iVar2 * 0x18;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 4);
  }
  return;
}


// ==== 1074ae1b Catch@1074ae1b

void Catch_1074ae1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1074ae2f Catch@1074ae2f

void Catch_1074ae2f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTrailEmitter::NotifyPreDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074af20 FUN_1074af20

void FUN_1074af20(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int local_14;
  int local_8;
  
  iVar9 = param_2 * 0xe0 + *(int *)(in_ECX + 0x42c);
  iVar6 = param_2 * 0x18;
  local_14 = *(int *)(*(int *)(in_ECX + 0x4f0) + iVar6);
  iVar12 = *(int *)(*(int *)(in_ECX + 0x4f0) + iVar6 + 4);
  iVar2 = *(int *)(in_ECX + 0x4d0);
  iVar11 = iVar2 * param_2;
  iVar10 = ((local_14 - iVar12) + 1) % iVar2;
  if (3 < iVar12) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x4f0) + 4 + iVar6);
    local_8 = iVar12 + 1;
    do {
      if (local_8 <= iVar3) goto LAB_1074b147;
      iVar4 = *(int *)(*(int *)(in_ECX + 0x420) + 0xe0);
      iVar5 = *(int *)(in_ECX + 0x4e4);
      if ((double)*(float *)(iVar4 + 0x4bc) <
          *(double *)(iVar5 + 0x14 + (iVar10 + iVar11) * 0x1c) + 0.5) goto LAB_1074b147;
      iVar10 = (iVar10 + 1) % iVar2;
      if ((iVar12 <= iVar3) ||
         ((double)*(float *)(iVar4 + 0x4bc) <
          *(double *)(iVar5 + 0x14 + (iVar10 + iVar11) * 0x1c) + 0.5)) {
        iVar12 = iVar12 + -1;
        goto LAB_1074b147;
      }
      iVar10 = (iVar10 + 1) % iVar2;
      if ((iVar12 + -1 <= iVar3) ||
         ((double)*(float *)(iVar4 + 0x4bc) <
          *(double *)(iVar5 + 0x14 + (iVar10 + iVar11) * 0x1c) + 0.5)) {
        iVar12 = iVar12 + -2;
        goto LAB_1074b147;
      }
      iVar10 = (iVar10 + 1) % iVar2;
      if ((iVar12 + -2 <= iVar3) ||
         ((double)*(float *)(iVar4 + 0x4bc) <
          *(double *)(iVar5 + 0x14 + (iVar10 + iVar11) * 0x1c) + 0.5)) {
        iVar12 = iVar12 + -3;
        goto LAB_1074b147;
      }
      local_8 = local_8 + -4;
      iVar12 = iVar12 + -4;
      iVar10 = (iVar10 + 1) % iVar2;
    } while (3 < iVar12);
  }
  if (0 < iVar12) {
    param_2 = iVar12 + 1;
    do {
      if ((param_2 <= *(int *)(*(int *)(in_ECX + 0x4f0) + 4 + iVar6)) ||
         ((double)*(float *)(*(int *)(*(int *)(in_ECX + 0x420) + 0xe0) + 0x4bc) <
          *(double *)(*(int *)(in_ECX + 0x4e4) + 0x14 + (iVar10 + iVar11) * 0x1c) + 0.5)) break;
      param_2 = param_2 + -1;
      iVar12 = iVar12 + -1;
      iVar10 = (iVar10 + 1) % iVar2;
    } while (0 < iVar12);
  }
LAB_1074b147:
  iVar10 = *(int *)(in_ECX + 0x420);
  fVar7 = *(float *)(iVar6 + 8 + *(int *)(in_ECX + 0x4f0)) - *(float *)(iVar10 + 0x1bc);
  iVar2 = iVar6 + 8 + *(int *)(in_ECX + 0x4f0);
  fVar13 = *(float *)(iVar2 + 4) - *(float *)(iVar10 + 0x1c0);
  fVar8 = *(float *)(iVar2 + 8) - *(float *)(iVar10 + 0x1c4);
  fVar7 = fVar13 * fVar13 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar13 = FRange::GetMin((FRange *)(in_ECX + 0x4d4));
  if ((fVar13 * fVar13 < fVar7 != (fVar13 * fVar13 == fVar7)) &&
     (fVar13 = FRange::GetMax((FRange *)(in_ECX + 0x4d4)), fVar7 <= fVar13 * fVar13)) {
    iVar2 = *(int *)(in_ECX + 0x4d0);
    local_14 = local_14 + 1;
    if (local_14 == iVar2) {
      local_14 = 0;
    }
    iVar12 = iVar12 + 1;
    if (iVar2 < iVar12) {
      iVar12 = iVar2;
    }
    iVar2 = *(int *)(in_ECX + 0x420);
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x4f0) + 8 + iVar6);
    *puVar1 = *(undefined4 *)(iVar2 + 0x1bc);
    puVar1[1] = *(undefined4 *)(iVar2 + 0x1c0);
    puVar1[2] = *(undefined4 *)(iVar2 + 0x1c4);
  }
  iVar2 = *(int *)(in_ECX + 0x4e4);
  iVar10 = *(int *)(in_ECX + 0x420);
  iVar11 = (iVar11 + local_14) * 0x1c;
  *(undefined4 *)(iVar2 + iVar11) = *(undefined4 *)(iVar10 + 0x1bc);
  *(undefined4 *)(iVar2 + 4 + iVar11) = *(undefined4 *)(iVar10 + 0x1c0);
  *(undefined4 *)(iVar2 + 8 + iVar11) = *(undefined4 *)(iVar10 + 0x1c4);
  *(undefined4 *)(iVar11 + 0xc + *(int *)(in_ECX + 0x4e4)) = *(undefined4 *)(iVar9 + 0xa8);
  *(undefined4 *)(iVar11 + 0x10 + *(int *)(in_ECX + 0x4e4)) = *(undefined4 *)(iVar9 + 0x6c);
  *(double *)(iVar11 + 0x14 + *(int *)(in_ECX + 0x4e4)) =
       (double)*(float *)(*(int *)(*(int *)(in_ECX + 0x420) + 0xe0) + 0x4bc);
  *(int *)(*(int *)(in_ECX + 0x4f0) + 4 + iVar6) = iVar12;
  *(int *)(*(int *)(in_ECX + 0x4f0) + iVar6) = local_14;
  return;
}


// ==== 1074b410 FUN_1074b410

void FUN_1074b410(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f2d0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1074b480 FUN_1074b480

void FUN_1074b480(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f2e9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1074b540 FUN_1074b540

void FUN_1074b540(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f31b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1074b480();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1074b5a0 FUN_1074b5a0

void FUN_1074b5a0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f353;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  thunk_FUN_1074b480();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1074b600 FUN_1074b600

void FUN_1074b600(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f394;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FParticleVertexStream<FTrailVertex>::vftable;
  FArray::FArray((FArray *)(in_ECX + 3));
  pcVar3 = GMakeCacheIDIndex_exref;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar4 + 0xe1;
  ExceptionList = local_c;
  return;
}


// ==== 1074b720 FUN_1074b720

undefined4 FUN_1074b720(void)

{
  return 1;
}


// ==== 1074b730 FUN_1074b730

int FUN_1074b730(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 0x18;
}


// ==== 1074b740 FUN_1074b740

undefined4 FUN_1074b740(void)

{
  return 0x18;
}


// ==== 1074b750 FUN_1074b750

undefined4 FUN_1074b750(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 2;
  param_1[4] = 2;
  param_1[5] = 4;
  return 3;
}


// ==== 1074b790 FUN_1074b790

void FUN_1074b790(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0x18);
  return;
}


// ==== 1074b7c0 FUN_1074b7c0

void FUN_1074b7c0(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 0x18;
  return;
}


// ==== 1074b7e0 FUN_1074b7e0

void FUN_1074b7e0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f3cb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1074b480();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1074b860 FUN_1074b860

void FUN_1074b860(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082f3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1074b600();
  *in_ECX = FTrailVertexStream::vftable;
  in_ECX[6] = param_1;
  in_ECX[7] = param_2;
  in_ECX[8] = param_3;
  ExceptionList = local_c;
  return;
}


// ==== 1074b8e0 FUN_1074b8e0

int FUN_1074b8e0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x1c) * 0x18;
}


// ==== 1074b8f0 FUN_1074b8f0

void FUN_1074b8f0(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  FVector *this;
  int in_ECX;
  float fVar7;
  float fVar8;
  int unaff_ESI;
  int iVar9;
  float fVar10;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_154;
  undefined4 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_60 [40];
  float *pfStack_38;
  
  FSceneNode::Deproject(*(FSceneNode **)(in_ECX + 0x20),&local_d0,0,0,0,0x3f800000);
  iVar13 = 0;
  pfVar3 = (float *)FSceneNode::Deproject
                              (*(FSceneNode **)(in_ECX + 0x20),auStack_98,0,0xc47a0000,0,0x3f800000)
  ;
  fStack_e8 = pfVar3[1] - fStack_f4;
  fVar2 = pfVar3[2] - fStack_f0;
  fStack_ec = *pfVar3 - fStack_f8;
  fStack_19c = 1000.0;
  fStack_198 = 0.0;
  fStack_194 = 0.0;
  fStack_e4 = fVar2;
  pfVar3 = (float *)FSceneNode::Deproject(*(FSceneNode **)(in_ECX + 0x20),&fStack_ac);
  fStack_b0 = pfVar3[1] - fStack_108;
  fStack_ac = pfVar3[2] - fStack_104;
  fStack_b4 = *pfVar3 - fStack_10c;
  fStack_118 = fStack_f8 * fStack_b0 - fStack_fc * fStack_ac;
  fStack_114 = fStack_100 * fStack_ac - fStack_b4 * fStack_f8;
  fStack_110 = fStack_fc * fStack_b4 - fStack_100 * fStack_b0;
  FVector::Normalize((FVector *)&fStack_100);
  FVector::Normalize((FVector *)&fStack_b4);
  FVector::Normalize((FVector *)&fStack_118);
  iVar5 = *(int *)(in_ECX + 0x18);
  fStack_11c = 0.0;
  if (0 < *(int *)(iVar5 + 0x43c)) {
    fVar17 = 0.0;
    fStack_120 = 0.0;
    pfVar3 = pfStack_38;
    do {
      fStack_e8 = (float)(*(int *)(iVar5 + 0x42c) + (int)fStack_120);
      fVar8 = fStack_11c;
      if ((((*(byte *)((int)fStack_e8 + 0xbc) & 1) != 0) &&
          (iVar15 = *(int *)(*(int *)(iVar5 + 0x4f0) + 4 + (int)fVar17), 1 < iVar15)) &&
         (fVar16 = 0.0, ((*(uint *)(iVar5 + 0x4dc) & 1) != 0) != 0xffffffff)) {
        do {
          iVar5 = *(int *)(in_ECX + 0x18);
          fStack_128 = 0.0;
          iVar9 = *(int *)((int)fVar17 + *(int *)(iVar5 + 0x4f0));
          iVar4 = *(int *)(iVar5 + 0x4d0) * (int)fVar8 + iVar9;
          fVar7 = *(float *)(*(int *)(iVar5 + 0x4e4) + iVar4 * 0x1c);
          iVar5 = *(int *)(iVar5 + 0x4e4) + iVar4 * 0x1c;
          fVar11 = *(float *)(iVar5 + 4);
          fVar12 = *(float *)(iVar5 + 8);
          iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4d0) * (int)fVar8 + iVar9;
          iVar9 = iVar9 + -1;
          iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4e4);
          fVar14 = *(float *)(iVar5 + 0xc + iVar4 * 0x1c);
          fStack_190 = *(float *)(iVar5 + iVar4 * 0x1c + 0x10);
          if (iVar9 < 0) {
            iVar9 = iVar9 + *(int *)(*(int *)(in_ECX + 0x18) + 0x4d0);
          }
          iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4d0) * (int)fVar8 + iVar9;
          iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4e4);
          fVar1 = *(float *)(iVar5 + iVar4 * 0x1c);
          iVar5 = iVar5 + iVar4 * 0x1c;
          fStack_148 = *(float *)(iVar5 + 4);
          fStack_144 = *(float *)(iVar5 + 8);
          uStack_150 = fVar14;
          if (*(int *)GIsOpenGL_exref != 0) {
            uStack_150._0_2_ = CONCAT11((char)((uint)fVar14 >> 8),(char)((uint)fVar14 >> 0x10));
            uStack_150 = (float)CONCAT13((char)((uint)fVar14 >> 0x18),
                                         (int3)CONCAT22(SUB42(fVar14,0),(undefined2)uStack_150));
          }
          iVar5 = 0;
          fStack_154 = 0.0;
          if (0 < iVar15) {
            fVar14 = (float)iVar15;
            fVar18 = fVar17;
            do {
              if (iVar5 == 0) {
                fStack_90 = fVar1 - fVar7;
                fStack_8c = fStack_148 - fVar11;
                fStack_88 = fStack_144 - fVar12;
                pfVar6 = (float *)FVector::SafeNormal((FVector *)&fStack_90);
                fStack_144 = *pfVar6;
                fStack_140 = pfVar6[1];
              }
              else {
                if (iVar5 == iVar15 + -1) {
                  fStack_84 = fVar7 - 0.0;
                  this = (FVector *)&fStack_84;
                  fStack_80 = fVar11 - 0.0;
                  fStack_7c = fVar12 - 0.0;
                }
                else {
                  fStack_d8 = fVar7 - 0.0;
                  fStack_d4 = fVar11 - 0.0;
                  local_d0 = fVar12 - 0.0;
                  fStack_cc = fVar1 - fVar7;
                  fStack_c8 = fStack_148 - fVar11;
                  fStack_c4 = fStack_144 - fVar12;
                  fStack_a8 = fStack_cc + fStack_d8;
                  fStack_a4 = fStack_c8 + fStack_d4;
                  fStack_a0 = fStack_c4 + local_d0;
                  this = (FVector *)FVector::operator/((FVector *)&fStack_a8,(float)auStack_60);
                }
                pfVar6 = (float *)FVector::SafeNormal(this);
                fStack_148 = *pfVar6;
                fStack_144 = pfVar6[1];
                fStack_140 = pfVar6[2];
              }
              fStack_a4 = fStack_11c * fStack_140 - fStack_118 * fStack_144;
              fStack_a0 = fStack_148 * fStack_118 - fStack_120 * fStack_140;
              fStack_9c = fStack_144 * fStack_120 - fStack_11c * fStack_148;
              pfVar6 = (float *)FVector::SafeNormal((FVector *)&fStack_a4);
              fVar17 = *pfVar6;
              fVar16 = pfVar6[1];
              fVar11 = pfVar6[2];
              fStack_cc = fStack_120 * fStack_144 - fStack_11c * fStack_148;
              fStack_c8 = fVar1 * fStack_11c - fStack_144 * 0.0;
              fStack_c4 = fStack_148 * 0.0 - fStack_120 * fVar1;
              fVar10 = FVector::Size((FVector *)&fStack_cc);
              fStack_19c = (fVar10 * 0.8 + 0.2) * fStack_19c;
              fStack_f0 = fStack_19c * fVar17 * 2.0;
              fStack_ec = fVar16 * fStack_19c * 2.0;
              fVar16 = fStack_19c * fVar11 * 2.0;
              fStack_140 = 1.0;
              fVar11 = 0.0;
              if ((*(int *)(*(int *)(in_ECX + 0x18) + 0x34c) == 0) ||
                 (iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + 0x350), iVar5 == 0)) {
LAB_1074bfdf:
                fVar17 = 0.0;
                fVar10 = 1.0;
              }
              else {
                iVar4 = *(int *)((int)fStack_f4 + 0xc0);
                fVar7 = 1.0 / (float)*(int *)(*(int *)(in_ECX + 0x18) + 0x34c);
                fVar17 = 1.0 / (float)*(int *)(*(int *)(in_ECX + 0x18) + 0x350);
                if (iVar4 == -1) goto LAB_1074bfdf;
                fVar11 = fVar17 * (float)(iVar4 % iVar5);
                fStack_140 = fVar17 + fVar11;
                if (fStack_140 < 1.0 == (fStack_140 == 1.0)) {
                  fStack_140 = 1.0;
                }
                fVar17 = fVar7 * (float)(iVar4 / iVar5);
                fVar7 = fVar17 + fVar7;
                fVar10 = fVar7;
                if (fVar7 < 1.0 == (fVar7 == 1.0)) {
                  fVar10 = 1.0;
                }
              }
              fStack_100 = fStack_f0 + fStack_198;
              *pfVar3 = fStack_100;
              fStack_fc = fStack_ec + fStack_194;
              pfVar3[3] = fVar14;
              pfVar3[1] = fStack_fc;
              fStack_f8 = fVar16 + fStack_190;
              pfVar3[2] = fStack_f8;
              if ((*(byte *)(*(int *)(in_ECX + 0x18) + 0x4cc) & 1) == 0) {
                pfVar3[4] = fVar17 + ((float)unaff_ESI * (fVar10 - fVar17)) / fVar12;
                pfVar3[5] = fStack_140;
              }
              else {
                fVar7 = (float)(1 - iVar13 / *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x4f0) +
                                                      0x14 + (int)fVar2));
                pfVar3[4] = ((float)(int)fVar7 + (float)unaff_ESI / fVar12) * (fVar10 - fVar17) +
                            fVar17;
                pfVar3[5] = fStack_140;
                fVar8 = fStack_128;
              }
              fStack_f0 = fStack_198 - fStack_f0;
              pfVar3[6] = fStack_f0;
              fStack_ec = fStack_194 - fStack_ec;
              pfVar3[9] = fVar14;
              pfVar3[7] = fStack_ec;
              fStack_e8 = fStack_190 - fVar16;
              pfVar3[8] = fStack_e8;
              if ((*(byte *)(*(int *)(in_ECX + 0x18) + 0x4cc) & 1) == 0) {
                fVar14 = ((float)unaff_ESI * (fVar10 - fVar17)) / fVar12;
              }
              else {
                fVar7 = (float)(1 - iVar13 / *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x4f0) +
                                                      0x14 + (int)fVar2));
                fVar14 = ((float)(int)fVar7 + (float)unaff_ESI / fVar12) * (fVar10 - fVar17);
                fVar8 = fStack_128;
              }
              pfVar3[10] = fVar14 + fVar17;
              pfVar3[0xb] = fVar11;
              fStack_194 = fStack_154;
              iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4d0) * (int)fVar8 + iVar9;
              fStack_190 = uStack_150;
              iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4e4);
              fVar14 = *(float *)(iVar5 + 0xc + iVar4 * 0x1c);
              pfVar3 = pfVar3 + 0xc;
              iVar9 = iVar9 + -1;
              fStack_19c = *(float *)(iVar5 + iVar4 * 0x1c + 0x10);
              if (iVar9 < 0) {
                iVar9 = iVar9 + *(int *)(*(int *)(in_ECX + 0x18) + 0x4d0);
              }
              iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4d0) * (int)fVar8 + iVar9;
              iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + 0x4e4);
              fVar17 = *(float *)(iVar5 + iVar4 * 0x1c);
              iVar5 = iVar5 + iVar4 * 0x1c;
              fStack_154 = *(float *)(iVar5 + 4);
              uStack_150 = *(float *)(iVar5 + 8);
              iVar5 = unaff_ESI + 1;
              fStack_198 = fVar18;
              unaff_ESI = iVar5;
              fVar18 = fVar17;
            } while (iVar5 < iVar13);
          }
          fVar16 = (float)((int)fVar16 + 1);
        } while ((int)fVar16 < (int)(((*(uint *)(*(int *)(in_ECX + 0x18) + 0x4dc) & 1) != 0) + 1));
      }
      iVar5 = *(int *)(in_ECX + 0x18);
      fStack_120 = (float)((int)fStack_120 + 0xe0);
      fVar17 = (float)((int)fVar17 + 0x18);
      fStack_11c = (float)((int)fVar8 + 1);
    } while ((int)fStack_11c < *(int *)(iVar5 + 0x43c));
  }
  return;
}


// ==== 1074c500 FUN_1074c500

void FUN_1074c500(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f423;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  thunk_FUN_1074b480();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1074c580 FUN_1074c580

int FUN_1074c580(FDynamicActor *param_1,FLevelSceneNode *param_2,TList<FDynamicLight*> *param_3,
                FRenderInterface *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UParticleEmitter *in_ECX;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  FSphere aFStack_e8 [12];
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 auStack_d4 [14];
  undefined4 uStack_9c;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1082f450;
  local_10 = ExceptionList;
  iVar5 = 0;
  local_8 = 0;
  uStack_9c = 0x1074c5c0;
  ExceptionList = &local_10;
  UParticleEmitter::RenderParticles(in_ECX,param_1,param_2,param_3,param_4);
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_20 = 0;
  if (0 < *(int *)(in_ECX + 0x43c)) {
    local_18 = 0;
    iVar7 = 0;
    local_1c = 0;
    for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x43c); iVar3 = iVar3 + 1) {
      if (((*(byte *)(iVar3 * 0xe0 + *(int *)(in_ECX + 0x42c) + 0xbc) & 1) != 0) &&
         (iVar2 = *(int *)(*(int *)(in_ECX + 0x4f0) + 4 + iVar3 * 0x18), 1 < iVar2)) {
        local_20 = local_20 + 1;
        iVar7 = iVar7 + -2 + iVar2 * 2;
        local_18 = local_18 + iVar2 * 2;
        iVar5 = iVar5 + -6 + iVar2 * 6;
        local_1c = iVar7;
      }
    }
    if (local_20 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if (local_18 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if (((byte)in_ECX[0x4dc] & 1) != 0) {
      local_1c = iVar7 * 2;
      local_18 = local_18 * 2;
    }
    thunk_FUN_1074b860();
    local_8._0_1_ = 1;
    thunk_FUN_1074aab0();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)GL2Shader_exref == 0) {
      (**(code **)(*(int *)param_4 + 0xa8))();
    }
    else {
      (**(code **)(*(int *)param_4 + 0x68))();
    }
    uVar4 = (**(code **)(*(int *)param_4 + 0xb0))();
    iVar5 = *(int *)param_4;
    pcVar6 = Identity_exref;
    puVar8 = auStack_d4;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar8 = puVar8 + 1;
    }
    uStack_d8 = 0;
    uStack_dc = 0x1074c70e;
    (**(code **)(iVar5 + 0x40))();
    *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x578) = (uint)(byte)in_ECX[0x344];
    if (*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5b8) == 7) {
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) =
           *(undefined4 *)(in_ECX + 0x348);
    }
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x57c) = 0;
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x580) = 1;
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x584) = 0;
    *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x598) = *(uint *)(in_ECX + 0x1f8) & 1;
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x59c) =
         *(undefined4 *)(in_ECX + 500);
    puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac);
    *puVar1 = *puVar1 ^ (*(uint *)(in_ECX + 0x1f8) >> 1 ^
                        *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac)) & 1;
    *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a0) =
         *(uint *)(in_ECX + 0x1f8) >> 2 & 1;
    *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a4) =
         *(uint *)(in_ECX + 0x1f8) >> 3 & 1;
    uStack_dc = 0x1074c82d;
    iVar5 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
    *(int *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a8) = iVar5;
    iVar5 = *(int *)param_4;
    FSphere::FSphere(aFStack_e8,0,0,0,0);
    (**(code **)(iVar5 + 0x24))(0,1,0,0,0);
    if (*(int *)GL2Shader_exref == 0) {
      (**(code **)(*(int *)param_4 + 0x44))(*(undefined4 *)(*(int *)(in_ECX + 0x420) + 0x46c),0,0,0)
      ;
    }
    else {
      (**(code **)(*(int *)param_4 + 0x54))(0x1000010);
      (**(code **)(*(int *)param_4 + 0x4c))(*(undefined4 *)(*(int *)(in_ECX + 0x420) + 0x46c));
    }
    (**(code **)(*(int *)param_4 + 0xb4))(0,uVar4,local_1c,0,local_18 + -1);
    local_8._0_1_ = 1;
    thunk_FUN_1074ad60();
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_1074b5a0();
  }
  ExceptionList = local_10;
  return local_20;
}


// ==== 1074c922 Catch@1074c922

void Catch_1074c922(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1074c936 Catch@1074c936

void Catch_1074c936(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UTrailEmitter::RenderParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074ca50 FUN_1074ca50

void FUN_1074ca50(void)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f460;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"Protocol",0);
  FString::operator=(&FURL::DefaultProtocol,puVar1);
  puVar1 = (ushort *)
           (**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"ProtocolDescription",0);
  FString::operator=(&FURL::DefaultProtocolDescription,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"Name",0);
  FString::operator=(&FURL::DefaultName,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,&DAT_108ef248,0);
  FString::operator=(&FURL::DefaultMap,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"LocalMap",0);
  FString::operator=(&FURL::DefaultLocalMap,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"Host",0);
  FString::operator=(&FURL::DefaultHost,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"Portal",0);
  FString::operator=(&FURL::DefaultPortal,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"MapExt",0);
  FString::operator=(&FURL::DefaultMapExt,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"SaveExt",0);
  FString::operator=(&FURL::DefaultSaveExt,puVar1);
  puVar1 = (ushort *)(**(code **)(**(int **)GConfig_exref + 0x14))(&DAT_1088ac34,L"Port",0);
  FURL::DefaultPort = appAtoi(puVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1074cc18 Catch@1074cc18

void Catch_1074cc18(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074cc2c Catch@1074cc2c

void Catch_1074cc2c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::StaticInit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074ccd0 FUN_1074ccd0

void FUN_1074ccd0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f470;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::operator=(&FURL::DefaultProtocol,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultProtocolDescription,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultName,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultMap,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultLocalMap,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultHost,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultPortal,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultMapExt,(ushort *)&DAT_10853d94);
  FString::operator=(&FURL::DefaultSaveExt,(ushort *)&DAT_10853d94);
  ExceptionList = local_10;
  return;
}


// ==== 1074cda0 Catch@1074cda0

void Catch_1074cda0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074cdb4 Catch@1074cdb4

void Catch_1074cdb4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::StaticExit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074ce20 FUN_1074ce20

bool FUN_1074ce20(void)

{
  ushort *in_EAX;
  ushort *puVar1;
  
  puVar1 = appStrchr(in_EAX,0x20);
  return puVar1 == (ushort *)0x0;
}


// ==== 1074ce40 FUN_1074ce40

ushort * FUN_1074ce40(ushort *param_1,ushort param_2,ushort param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = appStrchr(param_1,(uint)param_2);
  puVar2 = appStrchr(param_1,(uint)param_3);
  if ((puVar1 != (ushort *)0x0) && ((puVar2 == (ushort *)0x0 || (puVar1 < puVar2)))) {
    puVar2 = puVar1;
  }
  return puVar2;
}


// ==== 1074ce90 FUN_1074ce90

void FUN_1074ce90(void)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f480;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::operator==(in_ECX,&FURL::DefaultProtocol);
  ExceptionList = local_10;
  return;
}


// ==== 1074ced4 Catch@1074ced4

void Catch_1074ced4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074cee8 Catch@1074cee8

void Catch_1074cee8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::IsInternal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074cf30 FUN_1074cf30

undefined4 FUN_1074cf30(void)

{
  int iVar1;
  FURL *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f490;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FURL::IsInternal(in_ECX);
  if (iVar1 != 0) {
    iVar1 = FString::Len((FString *)(in_ECX + 0xc));
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1074cf99 Catch@1074cf99

void Catch_1074cf99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074cfad Catch@1074cfad

void Catch_1074cfad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::IsLocalInternal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074cff0 FUN_1074cff0

undefined4 FUN_1074cff0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f4a0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != (ushort *)0x0) {
    ExceptionList = &local_10;
    puVar1 = appStrchr(param_1,0x3d);
    if (puVar1 == (ushort *)0x0) {
      iVar2 = appStrlen(param_1);
      iVar2 = iVar2 + 1;
    }
    else {
      puVar1 = appStrchr(param_1,0x3d);
      iVar2 = (int)puVar1 + (2 - (int)param_1) >> 1;
    }
    puVar1 = FString::operator*((FString *)(in_ECX + 0x1c));
    iVar2 = appStrnicmp(puVar1,param_1,iVar2);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1074d09b Catch@1074d09b

void Catch_1074d09b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074d0af Catch@1074d0af

void Catch_1074d0af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::IsMapName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074d110 FUN_1074d110

FString * FUN_1074d110(FString *param_1,int param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *in_ECX;
  FString local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f4d3;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1);
  local_18 = 1;
  iVar1 = FString::operator!=(in_ECX,&FURL::DefaultProtocol);
  if ((iVar1 != 0) || (param_2 != 0)) {
    FString::operator+=(param_1,in_ECX);
    FString::operator+=(param_1,(ushort *)&DAT_108c9f98);
    iVar1 = FString::operator!=(in_ECX + 0xc,&FURL::DefaultHost);
    if (iVar1 != 0) {
      FString::operator+=(param_1,(ushort *)&DAT_108ef36c);
    }
  }
  iVar1 = FString::operator!=(in_ECX + 0xc,&FURL::DefaultHost);
  if ((iVar1 != 0) || (*(int *)(in_ECX + 0x18) != FURL::DefaultPort)) {
    FString::operator+=(param_1,in_ECX + 0xc);
    if (*(int *)(in_ECX + 0x18) != FURL::DefaultPort) {
      FString::operator+=(param_1,(ushort *)&DAT_108c9f98);
      pFVar2 = (FString *)
               FString::Printf((ushort *)local_30,&DAT_1085d740,*(undefined4 *)(in_ECX + 0x18));
      local_8._0_1_ = 2;
      FString::operator+=(param_1,pFVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_30);
    }
    FString::operator+=(param_1,(ushort *)&DAT_108a239c);
  }
  iVar1 = FString::operator_int(in_ECX + 0x1c);
  if (iVar1 != 0) {
    FString::operator+=(param_1,in_ECX + 0x1c);
  }
  for (iVar1 = 0; local_1c = iVar1, iVar1 < *(int *)(in_ECX + 0x2c); iVar1 = iVar1 + 1) {
    FString::operator+=(param_1,(ushort *)&DAT_1085466c);
    FString::operator+=(param_1,(FString *)(*(int *)(in_ECX + 0x28) + iVar1 * 0xc));
  }
  iVar1 = FString::operator_int(in_ECX + 0x34);
  if (iVar1 != 0) {
    FString::operator+=(param_1,(ushort *)&DAT_108ef368);
    FString::operator+=(param_1,in_ECX + 0x34);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1074d299 Catch@1074d299

void Catch_1074d299(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1074d2ad Catch@1074d2ad

void Catch_1074d2ad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::String");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074d340 FUN_1074d340

void FUN_1074d340(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  FString *this;
  int in_ECX;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f4f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appStrchr(param_1,0x3d);
  if (puVar1 == (ushort *)0x0) {
    iVar5 = appStrlen(param_1);
    iVar5 = iVar5 + 1;
  }
  else {
    puVar1 = appStrchr(param_1,0x3d);
    iVar5 = (int)puVar1 + (2 - (int)param_1) >> 1;
  }
  iVar4 = 0;
  do {
    iVar3 = *(int *)(in_ECX + 0x2c);
    if (iVar3 <= iVar4) {
LAB_1074d3dd:
      if (iVar4 == iVar3) {
        this = (FString *)thunk_FUN_1032ad60(0xc,in_ECX + 0x28);
        if (this != (FString *)0x0) {
          FString::FString(this,param_1);
        }
      }
      else {
        FString::operator=((FString *)(*(int *)(in_ECX + 0x28) + iVar4 * 0xc),param_1);
      }
      ExceptionList = local_10;
      return;
    }
    puVar1 = param_1;
    iVar3 = iVar5;
    puVar2 = FString::operator*((FString *)(*(int *)(in_ECX + 0x28) + iVar4 * 0xc));
    iVar3 = appStrnicmp(puVar2,puVar1,iVar3);
    if (iVar3 == 0) {
      iVar3 = *(int *)(in_ECX + 0x2c);
      goto LAB_1074d3dd;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


// ==== 1074d426 Catch@1074d426

void Catch_1074d426(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1074d43a Catch@1074d43a

void Catch_1074d43a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::AddOption");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074d4a0 FUN_1074d4a0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1074d4a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  FURL *in_ECX;
  ushort *puVar2;
  ushort local_fa20 [32004];
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f500;
  local_10 = ExceptionList;
  uStack_18 = 0x1074d4c3;
  local_14 = &stack0xffff05d4;
  local_8 = 0;
  puVar2 = local_fa20;
  ExceptionList = &local_10;
  (**(code **)(**(int **)GConfig_exref + 0x18))(param_1,puVar2,32000,param_2);
  for (; *puVar2 != 0; puVar2 = puVar2 + iVar1 + 1) {
    FURL::AddOption(in_ECX,puVar2);
    iVar1 = appStrlen(puVar2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1074d534 Catch@1074d534

void Catch_1074d534(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074d548 Catch@1074d548

void Catch_1074d548(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::LoadURLConfig");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074d5a0 FUN_1074d5a0

void FUN_1074d5a0(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  ushort local_824 [1028];
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f510;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff7d0;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x2c); iVar3 = iVar3 + 1) {
    local_1c = iVar3;
    puVar1 = FString::operator*((FString *)(*(int *)(in_ECX + 0x28) + iVar3 * 0xc));
    appStrcpy(local_824,puVar1);
    puVar1 = appStrchr(local_824,0x3d);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = 0;
      iVar2 = appStricmp(local_824,param_2);
      if (iVar2 == 0) {
        (**(code **)(**(int **)GConfig_exref + 0x30))(param_1,local_824,puVar1 + 1,param_3);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1074d665 Catch@1074d665

void Catch_1074d665(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074d679 Catch@1074d679

void Catch_1074d679(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::SaveURLConfig");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074d6e0 FUN_1074d6e0

undefined4 FUN_1074d6e0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  ushort *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f520;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (*(int *)(in_ECX + 0x2c) <= iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    puVar4 = param_1;
    puVar1 = FString::operator*((FString *)(*(int *)(in_ECX + 0x28) + iVar3 * 0xc));
    iVar2 = appStricmp(puVar1,puVar4);
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1074d767 Catch@1074d767

void Catch_1074d767(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1074d77b Catch@1074d77b

void Catch_1074d77b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::HasOption");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074d7d0 FUN_1074d7d0

ushort * FUN_1074d7d0(ushort *param_1,ushort *param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f530;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar5 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (*(int *)(in_ECX + 0x2c) <= iVar5) {
      ExceptionList = local_10;
      return param_2;
    }
    iVar3 = *(int *)(in_ECX + 0x28);
    iVar1 = appStrlen(param_1);
    puVar4 = param_1;
    puVar2 = FString::operator*((FString *)(iVar3 + iVar5 * 0xc));
    iVar3 = appStrnicmp(puVar2,puVar4,iVar1);
    if (iVar3 == 0) break;
    iVar5 = iVar5 + 1;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  iVar1 = appStrlen(param_1);
  puVar4 = FString::operator*((FString *)(iVar3 + iVar5 * 0xc));
  ExceptionList = local_10;
  return puVar4 + iVar1;
}


// ==== 1074d88d Catch@1074d88d

void Catch_1074d88d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1074d8a1 Catch@1074d8a1

void Catch_1074d8a1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::GetOption");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074d900 FUN_1074d900

undefined4 FUN_1074d900(FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f540;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FString::operator!=(in_ECX,param_1);
  if (iVar1 == 0) {
    iVar1 = FString::operator!=(in_ECX + 0xc,param_1 + 0xc);
    if (iVar1 == 0) {
      iVar1 = FString::operator!=(in_ECX + 0x1c,param_1 + 0x1c);
      if (((iVar1 == 0) && (*(int *)(in_ECX + 0x18) == *(int *)(param_1 + 0x18))) &&
         (*(int *)(in_ECX + 0x2c) == *(int *)(param_1 + 0x2c))) {
        iVar1 = 0;
        while( true ) {
          if (*(int *)(in_ECX + 0x2c) <= iVar1) {
            ExceptionList = local_10;
            return 1;
          }
          iVar2 = FString::operator!=((FString *)(*(int *)(in_ECX + 0x28) + iVar1 * 0xc),
                                      (FString *)(*(int *)(param_1 + 0x28) + iVar1 * 0xc));
          if (iVar2 != 0) break;
          iVar1 = iVar1 + 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1074d9c2 Catch@1074d9c2

void Catch_1074d9c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1074d9d6 Catch@1074d9d6

void Catch_1074d9d6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::operator==");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074da30 FUN_1074da30

FArchive * FUN_1074da30(FArchive *param_1,FString *param_2)

{
  FArchive *pFVar1;
  undefined4 uVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f550;
  local_10 = ExceptionList;
  local_8 = 0;
  pFVar8 = param_2 + 0x40;
  pFVar7 = param_2 + 0x18;
  pFVar6 = param_2 + 0x28;
  pFVar5 = param_2 + 0x34;
  pFVar4 = param_2 + 0x1c;
  pFVar3 = param_2 + 0xc;
  ExceptionList = &local_10;
  pFVar1 = operator<<(param_1,param_2);
  pFVar1 = operator<<(pFVar1,pFVar3);
  pFVar1 = operator<<(pFVar1,pFVar4);
  pFVar1 = operator<<(pFVar1,pFVar5);
  uVar2 = thunk_FUN_105ccd30(pFVar1,pFVar6,pFVar7,pFVar8);
  uVar2 = thunk_FUN_10330040(uVar2);
  thunk_FUN_10330040(uVar2);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1074dac3 Catch@1074dac3

void Catch_1074dac3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074dad7 Catch@1074dad7

void Catch_1074dad7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074db30 FUN_1074db30

void FUN_1074db30(ushort *param_1)

{
  FString *pFVar1;
  FString *in_ECX;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082f5bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,&FURL::DefaultProtocol);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,&FURL::DefaultHost);
  local_4._0_1_ = 1;
  *(int *)(in_ECX + 0x18) = FURL::DefaultPort;
  if (param_1 == (ushort *)0x0) {
    pFVar1 = &FURL::DefaultMap;
  }
  else {
    pFVar1 = (FString *)FString::FString(local_18,param_1);
    local_4._0_1_ = 2;
  }
  FString::FString(in_ECX + 0x1c,pFVar1);
  local_4 = 4;
  if (param_1 != (ushort *)0x0) {
    FString::~FString(local_18);
  }
  FArray::FArray((FArray *)(in_ECX + 0x28));
  local_4 = CONCAT31(local_4._1_3_,6);
  FString::FString(in_ECX + 0x34,&FURL::DefaultPortal);
  *(undefined4 *)(in_ECX + 0x40) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 1074dc60 FUN_1074dc60

FURL * FUN_1074dc60(FString *param_1,ushort *param_2,int param_3)

{
  FString *pFVar1;
  ushort *puVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  FURL *pFVar6;
  ushort *puVar7;
  ushort *puVar8;
  FString *in_ECX;
  int iVar9;
  wchar_t *pwVar10;
  ushort *puVar11;
  ushort local_94c [1024];
  ushort local_14c [100];
  FURL local_84 [68];
  FArray *local_40;
  FString *local_34;
  uint local_30;
  int local_2c;
  int local_28;
  ushort *local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1082f641;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff6a8;
  ExceptionList = &local_10;
  local_34 = in_ECX;
  FString::FString(in_ECX,&FURL::DefaultProtocol);
  local_8 = 0;
  FString::FString(in_ECX + 0xc,&FURL::DefaultHost);
  local_8._0_1_ = 1;
  *(int *)(in_ECX + 0x18) = FURL::DefaultPort;
  FString::FString(in_ECX + 0x1c,&FURL::DefaultMap);
  local_8._0_1_ = 2;
  local_40 = (FArray *)(in_ECX + 0x28);
  FArray::FArray(local_40);
  local_8._0_1_ = 4;
  FString::FString(in_ECX + 0x34,&FURL::DefaultPortal);
  *(undefined4 *)(in_ECX + 0x40) = 1;
  local_8 = CONCAT31(local_8._1_3_,6);
  if (param_2 == (ushort *)0x0) {
    appFailAssert("TextURL",".\\UnURL.cpp",0x7a);
  }
  puVar2 = local_94c;
  local_18 = puVar2;
  appStrncpy(puVar2,param_2,0x400);
  if (param_3 == 2) {
    if (param_1 == (FString *)0x0) {
      appFailAssert("Base",".\\UnURL.cpp",0x83);
    }
    FString::operator=(in_ECX,param_1);
    FString::operator=(in_ECX + 0xc,param_1 + 0xc);
    FString::operator=(in_ECX + 0x1c,param_1 + 0x1c);
    FString::operator=(in_ECX + 0x34,param_1 + 0x34);
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
LAB_1074dd93:
    if (param_1 == (FString *)0x0) {
      appFailAssert("Base",".\\UnURL.cpp",0x8c);
    }
    for (local_20 = 0; local_20 < *(int *)(param_1 + 0x2c); local_20 = local_20 + 1) {
      iVar5 = local_20 * 0xc;
      pwVar10 = L"PUSH";
      puVar2 = FString::operator*((FString *)(*(int *)(param_1 + 0x28) + iVar5));
      iVar3 = appStricmp(puVar2,(ushort *)pwVar10);
      if (iVar3 != 0) {
        puVar11 = (ushort *)&DAT_108ef574;
        puVar2 = FString::operator*((FString *)(*(int *)(param_1 + 0x28) + iVar5));
        iVar3 = appStricmp(puVar2,puVar11);
        if (iVar3 != 0) {
          pwVar10 = L"PEER";
          puVar2 = FString::operator*((FString *)(*(int *)(param_1 + 0x28) + iVar5));
          iVar3 = appStricmp(puVar2,(ushort *)pwVar10);
          if (iVar3 != 0) {
            pwVar10 = L"LOAD";
            puVar2 = FString::operator*((FString *)(*(int *)(param_1 + 0x28) + iVar5));
            iVar3 = appStricmp(puVar2,(ushort *)pwVar10);
            if (iVar3 != 0) {
              pwVar10 = L"QUIET";
              puVar2 = FString::operator*((FString *)(*(int *)(param_1 + 0x28) + iVar5));
              iVar3 = appStricmp(puVar2,(ushort *)pwVar10);
              if ((iVar3 != 0) &&
                 (pFVar4 = (FString *)thunk_FUN_1032ad60(0xc,in_ECX + 0x28),
                 pFVar4 != (FString *)0x0)) {
                FString::FString(pFVar4,(FString *)(*(int *)(param_1 + 0x28) + iVar5));
              }
            }
          }
        }
      }
      puVar2 = local_18;
    }
  }
  else if (param_3 == 1) goto LAB_1074dd93;
  while (*puVar2 == 0x20) {
    puVar2 = puVar2 + 1;
    local_18 = puVar2;
  }
  puVar11 = (ushort *)thunk_FUN_1074ce40(puVar2,0x3f,0x23);
  if (puVar11 != (ushort *)0x0) {
    param_2 = (ushort *)(uint)*puVar11;
    local_30 = 0;
    *puVar11 = 0;
    param_1 = (FString *)(puVar11 + 1);
    do {
      local_24 = (ushort *)thunk_FUN_1074ce40(param_1,0x3f,0x23);
      if (local_24 != (ushort *)0x0) {
        local_30 = (uint)*local_24;
        *local_24 = 0;
        local_24 = local_24 + 1;
      }
      iVar5 = FUN_1074ce20();
      if (iVar5 == 0) {
        pFVar6 = (FURL *)FURL::FURL(local_84,(ushort *)0x0);
        local_8._0_1_ = 7;
        goto LAB_1074e4d0;
      }
      if ((short)param_2 == 0x3f) {
        FURL::AddOption((FURL *)in_ECX,(ushort *)param_1);
      }
      else {
        FString::operator=(in_ECX + 0x34,(ushort *)param_1);
      }
      param_1 = (FString *)local_24;
      param_2 = (ushort *)(local_30 & 0xffff);
    } while (local_24 != (ushort *)0x0);
  }
  local_1c = 0;
  local_2c = 0;
  iVar5 = appStrlen(puVar2);
  if ((iVar5 < 3) || (puVar2[1] != 0x3a)) {
    puVar11 = appStrchr(puVar2,0x3a);
    if ((puVar11 != (ushort *)0x0) && (puVar11 = appStrchr(puVar2,0x3a), puVar2 + 1 < puVar11)) {
      puVar8 = appStrchr(puVar2,0x2e);
      puVar11 = puVar2;
      if (puVar8 != (ushort *)0x0) {
        puVar8 = appStrchr(puVar2,0x3a);
        puVar7 = appStrchr(puVar2,0x2e);
        puVar2 = local_18;
        puVar11 = local_18;
        if (puVar7 <= puVar8) goto LAB_1074e04c;
      }
      puVar2 = appStrchr(puVar11,0x3a);
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      local_18 = puVar2;
      FString::operator=(in_ECX,puVar11);
    }
LAB_1074e04c:
    if (*puVar2 == 0x2f) {
      local_18 = puVar2 + 1;
      puVar2 = puVar2 + 2;
      if (*local_18 != 0x2f) {
        local_18 = puVar2;
        pFVar6 = (FURL *)FURL::FURL(local_84,(ushort *)0x0);
        local_8._0_1_ = 8;
        goto LAB_1074e4d0;
      }
      local_1c = 1;
      local_18 = puVar2;
      FString::operator=(in_ECX + 0xc,(ushort *)&DAT_10853d94);
    }
    puVar8 = appStrchr(puVar2,0x2e);
    puVar11 = puVar2;
    if ((puVar8 != (ushort *)0x0) && (0 < (int)((int)puVar8 - (int)puVar2 & 0xfffffffeU))) {
      iVar5 = FString::Len(&FURL::DefaultMapExt);
      puVar7 = FString::operator*(&FURL::DefaultMapExt);
      iVar5 = appStrnicmp(puVar8 + 1,puVar7,iVar5);
      if (iVar5 == 0) {
        iVar5 = FString::Len(&FURL::DefaultMapExt);
        iVar5 = thunk_FUN_105bc830(puVar8[iVar5 + 1]);
        if (iVar5 == 0) goto LAB_1074e1f2;
      }
      iVar5 = FString::Len(&FURL::DefaultSaveExt);
      puVar7 = FString::operator*(&FURL::DefaultSaveExt);
      iVar5 = appStrnicmp(puVar8 + 1,puVar7,iVar5);
      if (iVar5 == 0) {
        iVar5 = FString::Len(&FURL::DefaultSaveExt);
        iVar5 = thunk_FUN_105bc830(puVar8[iVar5 + 1]);
        if (iVar5 == 0) goto LAB_1074e1f2;
      }
      puVar11 = appStrchr(puVar2,0x2f);
      if (puVar11 != (ushort *)0x0) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      local_18 = puVar11;
      puVar8 = appStrchr(puVar2,0x3a);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = 0;
        iVar5 = appAtoi(puVar8 + 1);
        *(int *)(in_ECX + 0x18) = iVar5;
      }
      FString::operator=(in_ECX + 0xc,puVar2);
      puVar2 = FString::operator*(&FURL::DefaultProtocol);
      puVar8 = FString::operator*(in_ECX);
      iVar5 = appStricmp(puVar8,puVar2);
      if (iVar5 == 0) {
        FString::operator=(in_ECX + 0x1c,&FURL::DefaultMap);
      }
      else {
        FString::operator=(in_ECX + 0x1c,(ushort *)&DAT_10853d94);
      }
      local_1c = 1;
    }
  }
  else {
    FString::operator=(in_ECX,&FURL::DefaultProtocol);
    FString::operator=(in_ECX + 0xc,&FURL::DefaultHost);
    FString::operator=(in_ECX + 0x1c,puVar2);
    FString::operator=(in_ECX + 0x34,&FURL::DefaultPortal);
    local_18 = (ushort *)0x0;
    local_1c = 1;
    local_2c = 1;
    FString::operator=(in_ECX + 0xc,(ushort *)&DAT_10853d94);
    puVar11 = (ushort *)0x0;
  }
LAB_1074e1f2:
  if (((param_3 == 0) && (pFVar1 != (FString *)0x0)) &&
     (iVar5 = FURL::IsInternal((FURL *)in_ECX), iVar5 != 0)) {
    for (local_28 = 0; local_28 < *(int *)(pFVar1 + 0x2c); local_28 = local_28 + 1) {
      iVar5 = local_28 * 0xc;
      iVar3 = 5;
      pwVar10 = L"Name=";
      puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
      iVar3 = appStrnicmp(puVar2,(ushort *)pwVar10,iVar3);
      if (iVar3 == 0) {
LAB_1074e306:
        iVar3 = 0x3d;
        puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
        puVar2 = appStrchr(puVar2,iVar3);
        if (puVar2 == (ushort *)0x0) {
          puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
          appStrcpy(local_14c,puVar2);
        }
        else {
          iVar3 = *(int *)(pFVar1 + 0x28);
          puVar11 = FString::operator*((FString *)(iVar5 + iVar3));
          iVar9 = ((int)puVar2 - (int)puVar11 >> 1) + 1;
          puVar2 = FString::operator*((FString *)(iVar5 + iVar3));
          appStrncpy(local_14c,puVar2,iVar9);
        }
        pFVar4 = local_34;
        puVar11 = (ushort *)&DAT_10853d94;
        puVar2 = FURL::GetOption((FURL *)local_34,local_14c,(ushort *)&DAT_10853d94);
        iVar3 = appStrcmp(puVar2,puVar11);
        if (iVar3 == 0) {
          if (*(int *)GLog_exref != 0) {
            FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
            FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
          }
          pFVar4 = (FString *)thunk_FUN_1032ad60(0xc,(FURL *)(pFVar4 + 0x28));
          if (pFVar4 != (FString *)0x0) {
            FString::FString(pFVar4,(FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
          }
        }
      }
      else {
        iVar3 = 5;
        pwVar10 = L"Team=";
        puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
        iVar3 = appStrnicmp(puVar2,(ushort *)pwVar10,iVar3);
        if (iVar3 == 0) goto LAB_1074e306;
        iVar3 = 6;
        pwVar10 = L"Class=";
        puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
        iVar3 = appStrnicmp(puVar2,(ushort *)pwVar10,iVar3);
        if (iVar3 == 0) goto LAB_1074e306;
        iVar3 = 5;
        pwVar10 = L"Skin=";
        puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
        iVar3 = appStrnicmp(puVar2,(ushort *)pwVar10,iVar3);
        if (iVar3 == 0) goto LAB_1074e306;
        iVar3 = 5;
        pwVar10 = L"Face=";
        puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
        iVar3 = appStrnicmp(puVar2,(ushort *)pwVar10,iVar3);
        if (iVar3 == 0) goto LAB_1074e306;
        iVar3 = 6;
        pwVar10 = L"Voice=";
        puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
        iVar3 = appStrnicmp(puVar2,(ushort *)pwVar10,iVar3);
        if (iVar3 == 0) goto LAB_1074e306;
        iVar3 = 0xe;
        pwVar10 = L"OverrideClass=";
        puVar2 = FString::operator*((FString *)(*(int *)(pFVar1 + 0x28) + iVar5));
        iVar3 = appStrnicmp(puVar2,(ushort *)pwVar10,iVar3);
        if (iVar3 == 0) goto LAB_1074e306;
      }
      in_ECX = local_34;
      puVar11 = local_18;
    }
  }
  if ((puVar11 != (ushort *)0x0) && (*puVar11 != 0)) {
    iVar5 = FURL::IsInternal((FURL *)in_ECX);
    if (iVar5 != 0) {
      local_2c = 1;
      puVar2 = appStrchr(puVar11,0x2f);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = 0;
        puVar8 = appStrchr(puVar2 + 1,0x2f);
        if ((puVar8 != (ushort *)0x0) && (*puVar8 = 0, puVar8[1] != 0)) {
          pFVar6 = (FURL *)FURL::FURL(local_84,(ushort *)0x0);
          local_8._0_1_ = 9;
          goto LAB_1074e4d0;
        }
        FString::operator=(in_ECX + 0x34,puVar2 + 1);
      }
    }
    FString::operator=(in_ECX + 0x1c,puVar11);
  }
  FString::operator*(in_ECX);
  iVar5 = FUN_1074ce20();
  if (iVar5 != 0) {
    FString::operator*(in_ECX + 0xc);
    iVar5 = FUN_1074ce20();
    if (iVar5 != 0) {
      FString::operator*(in_ECX + 0x34);
      iVar5 = FUN_1074ce20();
      if (iVar5 != 0) {
        if (local_1c != 0) {
          ExceptionList = local_10;
          return (FURL *)in_ECX;
        }
        if (local_2c != 0) {
          ExceptionList = local_10;
          return (FURL *)in_ECX;
        }
        if (*(int *)(in_ECX + 0x2c) != 0) {
          ExceptionList = local_10;
          return (FURL *)in_ECX;
        }
      }
    }
  }
  pFVar6 = (FURL *)FURL::FURL(local_84,(ushort *)0x0);
  local_8._0_1_ = 10;
LAB_1074e4d0:
  FURL::operator=((FURL *)in_ECX,pFVar6);
  local_8 = CONCAT31(local_8._1_3_,6);
  FURL::~FURL(local_84);
  *(undefined4 *)(in_ECX + 0x40) = 0;
  ExceptionList = local_10;
  return (FURL *)in_ECX;
}


// ==== 1074e50b Catch@1074e50b

void Catch_1074e50b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 1074e51f Catch@1074e51f

void Catch_1074e51f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FURL::FURL");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074e780 FUN_1074e780

void FUN_1074e780(float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  APawn *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f670;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0x1d4);
  uVar2 = *(undefined4 *)(in_ECX + 0x1d8);
  uVar3 = *(undefined4 *)(in_ECX + 0x1dc);
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x15bc) = *(undefined4 *)(in_ECX + 0x1c4);
  *(uint *)(in_ECX + 0x14e8) = *(uint *)(in_ECX + 0x14e8) & 0xffbfffff;
  if (((byte)in_ECX[0x1a1c] & 1) != 0) {
    if (in_ECX[0x34] == (APawn)0x2) {
      (**(code **)(*(int *)in_ECX + 0x1dc))(param_1,0);
      *(uint *)(in_ECX + 0x14e8) = *(uint *)(in_ECX + 0x14e8) | 0x400000;
    }
    else if (in_ECX[0x34] == (APawn)0x4) {
      APawn::physFlying(in_ECX,param_1,0);
    }
    if ((*(int *)(in_ECX + 0x14d8) != 0) && ((*(uint *)(in_ECX + 0x2f8) & 0x8000) == 0)) {
      if ((*(uint *)(in_ECX + 0x14e8) & 0x100) == 0) {
        iVar4 = APawn::IsHumanControlled(in_ECX);
        if (iVar4 == 0) {
          iVar4 = FRotator::operator!=((FRotator *)(in_ECX + 0x1c8),(FRotator *)(in_ECX + 0x32c));
          if ((iVar4 == 0) && (*(int *)(in_ECX + 0x30c) < 1)) goto LAB_1074e88d;
        }
      }
      (**(code **)(*(int *)in_ECX + 0x324))(param_1,uVar1,uVar2,uVar3);
    }
  }
LAB_1074e88d:
  *(float *)(in_ECX + 0x1514) = param_1 * 0.2 + *(float *)(in_ECX + 0x1514) * 0.8;
  if (*(AActor **)(in_ECX + 0x338) != (AActor *)0x0) {
    AActor::eventPostTouch(*(AActor **)(in_ECX + 0x338),(AActor *)in_ECX);
    iVar4 = *(int *)(in_ECX + 0x338);
    if (iVar4 != 0) {
      *(undefined4 *)(in_ECX + 0x338) = *(undefined4 *)(iVar4 + 0x338);
      *(undefined4 *)(iVar4 + 0x338) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1074e8f5 Catch@1074e8f5

void Catch_1074e8f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074e909 Catch@1074e909

void Catch_1074e909(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AVehicle::performPhysics");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074e990 FUN_1074e990

void FUN_1074e990(float param_1,float param_2,float param_3,float param_4)

{
  FRotator *pFVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  APawn *in_ECX;
  float fVar5;
  FRotator *pFVar6;
  float fVar7;
  FRotator local_90 [24];
  float local_78;
  float local_74;
  float local_70;
  float local_60;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f680;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_8 = 0;
  pFVar1 = (FRotator *)(in_ECX + 0x1c8);
  local_30 = *(int *)pFVar1;
  local_2c = *(int *)(in_ECX + 0x1cc);
  local_28 = *(int *)(in_ECX + 0x1d0);
  ExceptionList = &local_10;
  iVar2 = FUN_107a6660();
  *(uint *)(in_ECX + 0x2f8) = *(uint *)(in_ECX + 0x2f8) | 0x4000;
  *(uint *)(in_ECX + 0x2f8) = *(uint *)(in_ECX + 0x2f8) & 0xffffdfff;
  iVar3 = APawn::IsHumanControlled(in_ECX);
  if (iVar3 == 0) {
    if (*(int *)(in_ECX + 0x330) != local_2c) {
      local_2c = AActor::fixedTurn((AActor *)in_ECX,local_2c,*(int *)(in_ECX + 0x330),iVar2);
    }
    if (((*(uint *)(in_ECX + 0x14e8) & 0x100) == 0) && (*(int *)(in_ECX + 0x32c) != local_30)) {
      local_30 = AActor::fixedTurn((AActor *)in_ECX,local_30,*(int *)(in_ECX + 0x32c),iVar2);
    }
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    piVar4 = (int *)(**(code **)(*(int *)in_ECX + 0x1e0))
                              (&param_2,*(undefined4 *)(in_ECX + 0x15a4),
                               *(undefined4 *)(in_ECX + 0x15a8),*(undefined4 *)(in_ECX + 0x15ac),
                               local_30,local_2c,local_28);
    local_30 = *piVar4;
    local_2c = piVar4[1];
    local_28 = piVar4[2];
    goto LAB_1074ece0;
  }
  if (*(int *)(in_ECX + 0x30c) < 1) {
    local_28 = 0;
    goto LAB_1074ece0;
  }
  local_54 = *(float *)(in_ECX + 0x1d4) - param_2;
  local_50 = *(float *)(in_ECX + 0x1d8) - param_3;
  param_4 = *(float *)(in_ECX + 0x1dc) - param_4;
  fVar7 = param_1;
  local_4c = param_4;
  local_1c = local_50;
  local_18 = local_54;
  FVector::operator/((FVector *)&local_54,(float)&local_3c);
  if (((byte)in_ECX[0x14ea] & 1) != 0) {
    local_60 = *(float *)(in_ECX + 0x1e0) + local_3c;
    param_2 = local_60 * 0.5;
    param_3 = (*(float *)(in_ECX + 0x1e4) + local_38) * 0.5;
    param_4 = (*(float *)(in_ECX + 0x1e8) + local_34) * 0.5;
    local_3c = param_2;
    local_38 = param_3;
    local_34 = param_4;
    local_1c = param_3;
    local_18 = param_4;
  }
  fVar5 = FVector::SizeSquared((FVector *)&local_3c);
  if (fVar5 <= 100000.0) {
    thunk_FUN_104a4970(0x3f800000,param_1,fVar7);
    if (local_28 < 0x8000) {
      local_28 = FUN_107a6660();
    }
    else {
      param_4 = (float)(0x10000 - local_28);
      local_28 = FUN_107a6660();
    }
    goto LAB_1074ece0;
  }
  local_28 = 0;
  pFVar6 = pFVar1;
  FCoords::operator/((FCoords *)(GMath_exref + 0x18),local_90);
  param_4 = local_70 * local_34 + local_78 * local_3c + local_74 * local_38;
  if (param_4 <= 0.0) {
    iVar2 = FUN_107a6660(pFVar6);
    local_28 = 0x10000 - *(int *)(in_ECX + 0x30c);
    if (local_28 < iVar2) goto LAB_1074ec09;
  }
  else {
    iVar2 = FUN_107a6660(pFVar6);
    local_28 = *(int *)(in_ECX + 0x30c);
    if (iVar2 < *(int *)(in_ECX + 0x30c)) {
LAB_1074ec09:
      local_28 = iVar2;
    }
  }
  *(uint *)(in_ECX + 0x1d0) = *(uint *)(in_ECX + 0x1d0) & 0xffff;
  iVar2 = *(int *)(in_ECX + 0x1d0);
  if (local_28 < 0x8001) {
    if (0x8000 < iVar2) {
      iVar2 = iVar2 + -0x10000;
      goto LAB_1074ec40;
    }
  }
  else if (iVar2 < 0x8000) {
    iVar2 = iVar2 + 0x10000;
LAB_1074ec40:
    *(int *)(in_ECX + 0x1d0) = iVar2;
  }
  thunk_FUN_104a4970(0x3f800000,param_1 + param_1);
  local_28 = FUN_107a6660(pFVar6);
LAB_1074ece0:
  iVar2 = FRotator::operator!=((FRotator *)&local_30,pFVar1);
  if (iVar2 != 0) {
    thunk_FUN_104419f0(0x3f800000,0);
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    (**(code **)(**(int **)(in_ECX + 0xe4) + 0xa4))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1074ed6e Catch@1074ed6e

void Catch_1074ed6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1074ed82 Catch@1074ed82

void Catch_1074ed82(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AVehicle::physicsRotation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074eeb0 FUN_1074eeb0

void FUN_1074eeb0(void)

{
  int *piVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f690;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostEditChange(in_ECX);
  piVar1 = (int *)(**(code **)(*(int *)in_ECX + 0x98))(0);
  (**(code **)(*piVar1 + 0x130))
            (*(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),
             *(undefined4 *)(in_ECX + 0x8c));
  ExceptionList = local_10;
  return;
}


// ==== 1074ef2d Catch@1074ef2d

void Catch_1074ef2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074ef41 Catch@1074ef41

void Catch_1074ef41(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074ef90 FUN_1074ef90

void FUN_1074ef90(undefined4 param_1,float param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float10 fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f6a0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_3 == 0) {
    in_ECX[0x32] = (int)param_2;
  }
  else {
    iVar1 = *in_ECX;
    ExceptionList = &local_10;
    uVar2 = (**(code **)(iVar1 + 0xb8))(in_ECX[0x30]);
    fVar3 = (float10)(**(code **)(iVar1 + 200))(uVar2);
    if (1.0 <= (float)fVar3) {
      param_2 = param_2 / ((float)fVar3 - 1.0);
    }
    in_ECX[0x32] = (int)param_2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1074f032 Catch@1074f032

void Catch_1074f032(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074f046 Catch@1074f046

void Catch_1074f046(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::SetAnimFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074f0a0 FUN_1074f0a0

undefined4 FUN_1074f0a0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x94))();
  return *(undefined4 *)(iVar1 + 0x170);
}


// ==== 1074f0c0 FUN_1074f0c0

void FUN_1074f0c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ==== 1074f0e0 FUN_1074f0e0

float10 FUN_1074f0e0(int param_1)

{
  return (float10)*(int *)(param_1 + 0x14);
}


// ==== 1074f0f0 FUN_1074f0f0

float10 FUN_1074f0f0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x18);
}


// ==== 1074f100 FUN_1074f100

undefined4 FUN_1074f100(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ==== 1074f110 FUN_1074f110

undefined4 FUN_1074f110(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  UObject *in_ECX;
  
  if (param_4 != 0) {
    if (*(int *)GLog_exref != 0) {
      UObject::GetName(in_ECX);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
    return 0;
  }
  *(undefined4 *)(in_ECX + 0xc0) = param_1;
  *(undefined4 *)(in_ECX + 200) = param_2;
  return 1;
}


// ==== 1074f180 FUN_1074f180

undefined4 FUN_1074f180(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f6b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x98))(param_2);
  (**(code **)(*piVar1 + 0x70))(param_1,param_2);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1074f1d9 Catch@1074f1d9

void Catch_1074f1d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074f1ed Catch@1074f1ed

void Catch_1074f1ed(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::GetRenderBoundingBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074f230 FUN_1074f230

undefined4 FUN_1074f230(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f6c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x98))(param_2);
  (**(code **)(*piVar1 + 0x74))(param_1,param_2);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1074f289 Catch@1074f289

void Catch_1074f289(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074f29d Catch@1074f29d

void Catch_1074f29d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::GetRenderBoundingSphere");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074f2e0 FUN_1074f2e0

FSphere * FUN_1074f2e0(FSphere *param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f6d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 0x94))();
  FSphere::FSphere(param_1,(FSphere *)(iVar1 + 0x50));
  ExceptionList = local_10;
  return param_1;
}


// ==== 1074f336 Catch@1074f336

void Catch_1074f336(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074f34a Catch@1074f34a

void Catch_1074f34a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::GetRenderBoundingSphere");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074f390 FUN_1074f390

undefined4 FUN_1074f390(int param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f6e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(int *)(in_ECX + 100) != 0) && (param_1 == 0)) {
    ExceptionList = &local_10;
    FName::FName((FName *)&param_1,0);
    iVar2 = FName::operator!=((FName *)(in_ECX + 0xc0),(FName *)&param_1);
    if (iVar2 != 0) {
      fVar1 = *(float *)(in_ECX + 200);
      if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
        fVar1 = *(float *)(in_ECX + 0xd0);
      }
      else {
        fVar1 = *(float *)(in_ECX + 0xc4);
      }
      if (fVar1 != 0.0) {
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1074f43e Catch@1074f43e

void Catch_1074f43e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1074f452 Catch@1074f452

void Catch_1074f452(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::IsAnimating");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074f4b0 FUN_1074f4b0

undefined4 FUN_1074f4b0(void)

{
  int in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f6f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  if (*(int *)(in_ECX + 100) != 0) {
    ExceptionList = &local_10;
    FName::FName((FName *)&local_18,0);
    *(undefined4 *)(in_ECX + 0xc0) = local_18;
    *(undefined4 *)(in_ECX + 200) = 0;
    *(undefined4 *)(in_ECX + 0xc4) = 0;
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 1074f52e Catch@1074f52e

void Catch_1074f52e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1074f542 Catch@1074f542

void Catch_1074f542(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::IsAnimating");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074f590 FUN_1074f590

undefined4 FUN_1074f590(void)

{
  return 0;
}


// ==== 1074f5a0 FUN_1074f5a0

undefined4 FUN_1074f5a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xe8);
}


// ==== 1074f5b0 FUN_1074f5b0

undefined4 FUN_1074f5b0(void)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 200) < *(float *)(in_ECX + 0xcc)) {
    return 1;
  }
  return 0;
}


// ==== 1074f5e0 FUN_1074f5e0

undefined4 FUN_1074f5e0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  return 1;
}


// ==== 1074f600 FUN_1074f600

FName * FUN_1074f600(FName *param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0xc0);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 1074f640 FUN_1074f640

float10 FUN_1074f640(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    return (float10)*(float *)(in_ECX + 0xc4);
  }
  return (float10)0;
}


// ==== 1074f660 FUN_1074f660

float10 FUN_1074f660(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    return (float10)*(float *)(in_ECX + 200);
  }
  return (float10)0;
}


// ==== 1074f6a0 FUN_1074f6a0

void FUN_1074f6a0(float *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = (float)((iVar1 << 0x15) >> 0x15);
  param_1[1] = (float)((iVar1 << 10) >> 0x15);
  param_1[2] = (float)(iVar1 >> 0x16);
  return;
}


// ==== 1074f6f0 FUN_1074f6f0

void FUN_1074f6f0(void)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f700;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostLoad(in_ECX);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x170); iVar2 = iVar2 + 1) {
    pUVar1 = UObject::GetOuter(in_ECX);
    thunk_FUN_105e5c90(pUVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1074f765 Catch@1074f765

void Catch_1074f765(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1074f779 Catch@1074f779

void Catch_1074f779(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074f7c0 FUN_1074f7c0

void FUN_1074f7c0(void)

{
  FName *this;
  UClass *pUVar1;
  UArrayProperty *this_00;
  UObjectProperty *this_01;
  UFloatProperty *pUVar2;
  UObject *in_ECX;
  UArrayProperty *pUVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f710;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::GetClass(in_ECX);
  this = (FName *)thunk_FUN_10370640();
  if (this != (FName *)0x0) {
    FName::FName(this,0x97);
  }
  FName::FName((FName *)&stack0xffffffbc,(ushort *)L"Materials",1);
  pUVar1 = UObject::GetClass(in_ECX);
  this_00 = UArrayProperty::operator_new(0x7c,pUVar1);
  pUVar3 = (UArrayProperty *)0x0;
  if (this_00 != (UArrayProperty *)0x0) {
    UArrayProperty::UArrayProperty(this_00,0,0x78,(ushort *)&DAT_10853d94,0x41);
    *(undefined ***)this_00 = UArrayProperty::vftable;
    pUVar3 = this_00;
  }
  FName::FName((FName *)&stack0xffffffbc,(ushort *)L"StructProperty0",1);
  this_01 = UObjectProperty::operator_new(0x7c,pUVar3);
  if (this_01 == (UObjectProperty *)0x0) {
    this_01 = (UObjectProperty *)0x0;
  }
  else {
    UObjectProperty::UObjectProperty
              (this_01,0,0,(ushort *)&DAT_10853d94,1,&UMaterial::PrivateStaticClass);
    *(undefined ***)this_01 = UObjectProperty::vftable;
  }
  *(UObjectProperty **)(pUVar3 + 0x78) = this_01;
  FName::FName((FName *)&stack0xffffffbc,(ushort *)L"ScaleX",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x84,(ushort *)&DAT_10853d94,1);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffbc,(ushort *)L"ScaleY",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x88,(ushort *)&DAT_10853d94,1);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffbc,(ushort *)L"ScaleZ",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x8c,(ushort *)&DAT_10853d94,1);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  *(undefined4 *)(in_ECX + 0x84) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x88) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x8c) = 0x3f800000;
  ExceptionList = local_10;
  return;
}


// ==== 1074f9bd Catch@1074f9bd

void Catch_1074f9bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1074f9d1 Catch@1074f9d1

void Catch_1074f9d1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1074fa80 FUN_1074fa80

int FUN_1074fa80(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*in_ECX + 0x94))();
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x170)) {
    iVar3 = 0;
    do {
      iVar2 = FName::operator==((FName *)&stack0x00000004,(FName *)(*(int *)(iVar1 + 0x16c) + iVar3)
                               );
      if (iVar2 != 0) {
        return iVar4 * 0x74 + *(int *)(iVar1 + 0x16c);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x74;
    } while (iVar4 < *(int *)(iVar1 + 0x170));
  }
  return 0;
}


// ==== 1074fb00 FUN_1074fb00

undefined4 FUN_1074fb00(float param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *in_ECX;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  float local_2c;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f720;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0xa0))(1);
  local_20 = 0;
  while ((((iVar2 = AActor::IsAnimating((AActor *)in_ECX[0x19],0), iVar2 != 0 && (0.0 < param_1)) &&
          (local_20 = local_20 + 1, local_20 < 5)) &&
         (uVar3 = (**(code **)(*in_ECX + 0xa4))(), (uVar3 & 2) == 0))) {
    fVar1 = (float)in_ECX[0x32];
    fVar10 = (float)in_ECX[0x32];
    if (NAN(fVar10) || 0.0 < fVar10 == (fVar10 == 0.0)) {
      fVar10 = (float)in_ECX[0x32] + param_1 * (float)in_ECX[0x34];
      in_ECX[0x32] = (int)fVar10;
      if (fVar10 < 0.0) break;
      param_1 = ((fVar10 - 0.0) * param_1) / (fVar10 - fVar1);
      in_ECX[0x32] = 0;
      if ((float)in_ECX[0x31] == 0.0) {
        (**(code **)(*(int *)in_ECX[0x19] + 0x170))(0);
      }
    }
    else {
      fVar10 = (float)in_ECX[0x31];
      if (NAN(fVar10) || 0.0 < fVar10 == (fVar10 == 0.0)) {
        fVar10 = FVector::Size((FVector *)(in_ECX[0x19] + 0x1d4));
        fVar9 = (float10)thunk_FUN_104a4940(0x3e99999a,-(float)in_ECX[0x31] * fVar10);
        in_ECX[0x32] = (int)(float)(fVar9 * (float10)param_1 + (float10)(float)in_ECX[0x32]);
      }
      else {
        in_ECX[0x32] = (int)((float)in_ECX[0x31] * param_1 + (float)in_ECX[0x32]);
      }
      if (((in_ECX[0x3b] == 0) || (*(int *)(in_ECX[0x19] + 0x104) == 0)) ||
         (iVar2 = (**(code **)(*in_ECX + 0xb8))(in_ECX[0x30]), iVar2 == 0)) {
LAB_1074fd46:
        if ((float)in_ECX[0x32] < (float)in_ECX[0x33]) break;
        if (in_ECX[0x3a] == 0) {
          param_1 = (((float)in_ECX[0x32] - (float)in_ECX[0x33]) * param_1) /
                    ((float)in_ECX[0x32] - fVar1);
          in_ECX[0x32] = in_ECX[0x33];
          in_ECX[0x31] = 0;
          (**(code **)(*(int *)in_ECX[0x19] + 0x170))(0);
        }
        else {
          if (1.0 <= (float)in_ECX[0x32]) {
            param_1 = (((float)in_ECX[0x32] - 1.0) * param_1) / ((float)in_ECX[0x32] - fVar1);
            in_ECX[0x32] = 0;
          }
          else {
            param_1 = 0.0;
          }
          if (fVar1 < (float)in_ECX[0x33]) {
            (**(code **)(*(int *)in_ECX[0x19] + 0x170))(0);
          }
        }
      }
      else {
        local_2c = 100000.0;
        local_1c = -1;
        iVar4 = 0;
        while (iVar7 = iVar4, iVar4 = (**(code **)(*in_ECX + 0xd0))(iVar2), iVar7 < iVar4) {
          fVar9 = (float10)(**(code **)(*in_ECX + 0xd4))(iVar2,iVar7);
          fVar10 = (float)fVar9;
          if (((fVar10 <= fVar1) || ((float)in_ECX[0x32] < fVar10)) ||
             ((local_1c != -1 && (local_2c <= fVar10 - fVar1)))) {
            iVar4 = iVar7 + 1;
          }
          else {
            iVar4 = iVar7 + 1;
            local_2c = fVar10 - fVar1;
            local_1c = iVar7;
          }
        }
        if (local_1c < 0) goto LAB_1074fd46;
        fVar10 = (float)in_ECX[0x32];
        fVar9 = (float10)(**(code **)(*in_ECX + 0xd4))(iVar2,local_1c);
        param_1 = (float)((((float10)fVar10 - fVar9) * (float10)param_1) /
                         ((float10)(float)in_ECX[0x32] - (float10)fVar1));
        fVar9 = (float10)(**(code **)(*in_ECX + 0xd4))(iVar2,local_1c);
        in_ECX[0x32] = (int)(float)fVar9;
        piVar5 = (int *)(**(code **)(*in_ECX + 0xdc))(iVar2,local_1c);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x68))();
        }
      }
    }
  }
  AActor::ReplicateAnim
            ((AActor *)in_ECX[0x19],0,in_ECX[0x30],in_ECX[0x31],in_ECX[0x32],in_ECX[0x34],
             in_ECX[0x33],in_ECX[0x3a]);
  uVar3 = (**(code **)(*in_ECX + 0xa4))();
  bVar8 = (uVar3 & 2) == 0;
  if (bVar8) {
    pcVar6 = *(code **)(*in_ECX + 0xa0);
  }
  else {
    pcVar6 = *(code **)(*in_ECX + 0xc);
  }
  (*pcVar6)(!bVar8);
  ExceptionList = local_10;
  return 1;
}


// ==== 1074fefd Catch@1074fefd

void Catch_1074fefd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1074ff11 Catch@1074ff11

void Catch_1074ff11(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateAnimation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10750040 FUN_10750040

undefined4 FUN_10750040(undefined4 param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  AActor *this;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float fVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f730;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 0xb8))(param_2);
  if (iVar1 == 0) {
    if (*(int *)GLog_exref != 0) {
      UObject::GetName((UObject *)in_ECX[0x18]);
      FName::operator*((FName *)&param_2);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
    ExceptionList = local_10;
    return 0;
  }
  this = (AActor *)(**(code **)(*in_ECX + 0x8c))();
  if (this == (AActor *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  if (param_5 == 0.0) {
    if (param_3 <= 0.0) {
      if (param_3 != 0.0) {
        ExceptionList = local_10;
        return 0;
      }
      fVar3 = (float10)(**(code **)(*in_ECX + 200))(iVar1);
      in_ECX[0x30] = param_2;
      in_ECX[0x33] = 0;
      in_ECX[0x3b] = 0;
      in_ECX[0x39] = 0;
      in_ECX[0x3a] = 0;
      in_ECX[0x31] = 0;
      in_ECX[0x35] = 0;
      if (0.0 < param_4) {
        in_ECX[0x34] = (int)(1.0 / ((float)fVar3 * param_4));
        in_ECX[0x32] = (int)(-1.0 / (float)fVar3);
        ExceptionList = local_10;
        return 1;
      }
      in_ECX[0x34] = 0;
      in_ECX[0x32] = 0;
      ExceptionList = local_10;
      return 1;
    }
    FName::FName((FName *)&param_5,0);
    iVar2 = FName::operator==((FName *)(in_ECX + 0x30),(FName *)&param_5);
    if (iVar2 != 0) {
      param_4 = 0.0;
    }
    fVar3 = (float10)(**(code **)(*in_ECX + 200))(iVar1);
    param_5 = (float)fVar3;
    in_ECX[0x30] = param_2;
    fVar3 = (float10)(**(code **)(*in_ECX + 0xcc))(iVar1);
    fVar4 = (float)(fVar3 / (float10)param_5);
    in_ECX[0x36] = (int)fVar4;
    in_ECX[0x31] = (int)(fVar4 * param_3);
    in_ECX[0x33] = (int)(float)((float10)1 - (float10)1 / (float10)param_5);
    iVar1 = (**(code **)(*in_ECX + 0xd0))(iVar1);
    in_ECX[0x3b] = (uint)(iVar1 != 0);
    in_ECX[0x39] = 0;
    in_ECX[0x3a] = 0;
    if ((float)in_ECX[0x33] == 0.0) goto LAB_107501a4;
    if (param_4 <= 0.0) {
      if (param_4 != -1.0) {
        in_ECX[0x34] = 0;
        param_5 = 0.001;
        goto LAB_107502d8;
      }
      in_ECX[0x32] = (int)(-1.0 / param_5);
      if ((float)in_ECX[0x35] <= 0.0) {
        if ((float)in_ECX[0x35] < 0.0) {
          fVar4 = FVector::Size((FVector *)(this + 0x1d4));
          fVar4 = fVar4 * -1.0 * (float)in_ECX[0x35];
          param_4 = (float)in_ECX[0x31];
LAB_107502a7:
          param_4 = param_4 * 0.5;
          fVar3 = (float10)thunk_FUN_104a4940(param_4,fVar4);
          in_ECX[0x34] = (int)(float)fVar3;
        }
        else {
LAB_107502ba:
          in_ECX[0x34] = (int)(1.0 / (param_5 * 0.025));
        }
      }
      else {
        in_ECX[0x34] = in_ECX[0x35];
      }
    }
    else {
LAB_107501f6:
      in_ECX[0x34] = (int)(1.0 / (param_5 * param_4));
      param_5 = -1.0 / param_5;
LAB_107502d8:
      in_ECX[0x32] = (int)param_5;
    }
  }
  else {
    fVar3 = (float10)(**(code **)(*in_ECX + 200))(iVar1);
    param_5 = (float)fVar3;
    fVar3 = (float10)(**(code **)(*in_ECX + 0xcc))(iVar1);
    iVar2 = FName::operator==((FName *)(in_ECX + 0x30),(FName *)&param_2);
    if (((iVar2 != 0) && (in_ECX[0x3a] != 0)) && (iVar2 = AActor::IsAnimating(this,0), iVar2 != 0))
    {
      fVar3 = (float10)(**(code **)(*in_ECX + 0xcc))(iVar1);
      in_ECX[0x36] = (int)(float)(fVar3 / (float10)param_5);
      param_3 = (float)(fVar3 / (float10)param_5) * param_3;
      in_ECX[0x31] = (int)param_3;
      in_ECX[0x39] = 0;
      goto LAB_107502e4;
    }
    in_ECX[0x30] = param_2;
    in_ECX[0x36] = (int)((float)fVar3 / param_5);
    in_ECX[0x31] = (int)(((float)fVar3 / param_5) * param_3);
    in_ECX[0x33] = (int)(1.0 - 1.0 / param_5);
    iVar1 = (**(code **)(*in_ECX + 0xd0))(iVar1);
    in_ECX[0x3b] = (uint)(iVar1 != 0);
    in_ECX[0x39] = 0;
    in_ECX[0x3a] = 1;
    if ((float)in_ECX[0x33] != 0.0) {
      if (param_4 <= 0.0) {
        if (param_4 != -1.0) {
          in_ECX[0x34] = 0;
          param_5 = 0.0001;
          goto LAB_107502d8;
        }
        in_ECX[0x32] = (int)(-1.0 / param_5);
        if ((float)in_ECX[0x35] <= 0.0) {
          if ((float)in_ECX[0x35] < 0.0) {
            fVar4 = FVector::Size((FVector *)(this + 0x1d4));
            fVar4 = fVar4 * -1.0 * (float)in_ECX[0x35];
            param_4 = (float)in_ECX[0x31];
            goto LAB_107502a7;
          }
          goto LAB_107502ba;
        }
        in_ECX[0x34] = in_ECX[0x35];
        goto LAB_107502de;
      }
      goto LAB_107501f6;
    }
LAB_107501a4:
    in_ECX[0x3b] = 0;
    in_ECX[0x35] = 0;
    if (param_4 <= 0.0) {
      param_4 = 10.0;
    }
    else {
      param_4 = 1.0 / param_4;
    }
    in_ECX[0x34] = (int)param_4;
    in_ECX[0x32] = (int)(-1.0 / param_5);
    in_ECX[0x31] = 0;
  }
LAB_107502de:
  param_3 = (float)in_ECX[0x31];
LAB_107502e4:
  in_ECX[0x35] = (int)param_3;
  ExceptionList = local_10;
  return 1;
}


// ==== 10750542 Catch@10750542

void Catch_10750542(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10750556 Catch@10750556

void Catch_10750556(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::PlayAnim");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107506c0 FUN_107506c0

int FUN_107506c0(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x94))();
  return param_1 * 0x74 + *(int *)(iVar1 + 0x16c);
}


// ==== 107506f0 FUN_107506f0

int FUN_107506f0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x94))();
  if (0 < *(int *)(iVar1 + 0x170)) {
    iVar1 = 0;
    do {
      iVar2 = (**(code **)(*in_ECX + 0x94))();
      iVar2 = FName::operator==((FName *)&stack0x00000004,(FName *)(*(int *)(iVar2 + 0x16c) + iVar1)
                               );
      if (iVar2 != 0) {
        iVar1 = (**(code **)(*in_ECX + 0x94))();
        return iVar3 * 0x74 + *(int *)(iVar1 + 0x16c);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x74;
      iVar2 = (**(code **)(*in_ECX + 0x94))();
    } while (iVar3 < *(int *)(iVar2 + 0x170));
  }
  return 0;
}


// ==== 107507a0 FUN_107507a0

FName * FUN_107507a0(FName *param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    *(undefined4 *)param_1 = **(undefined4 **)(param_2 + 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 107507e0 FUN_107507e0

float10 FUN_107507e0(int param_1,int param_2)

{
  return (float10)*(float *)(*(int *)(param_1 + 0x1c) + param_2 * 0xc);
}


// ==== 10750800 FUN_10750800

void FUN_10750800(int param_1,int param_2)

{
  FName::operator*((FName *)(*(int *)(param_1 + 0x1c) + param_2 * 0xc + 4));
  return;
}


// ==== 10750830 FUN_10750830

undefined4 FUN_10750830(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8 + param_2 * 0xc);
}


// ==== 10750850 FUN_10750850

FBox * FUN_10750850(FBox *param_1)

{
  float fVar1;
  FMeshAnimSeq *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  FBox *pFVar5;
  FBox local_40 [36];
  float local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f740;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  FBox::FBox(param_1);
  local_18 = (**(code **)(*in_ECX + 0x94))();
  pFVar2 = UVertMeshInstance::GetAnimSeq();
  if ((pFVar2 == (FMeshAnimSeq *)0x0) ||
     (fVar1 = (float)in_ECX[0x32], NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) {
    puVar4 = (undefined4 *)(local_18 + 0x34);
  }
  else {
    local_1c = ((float)in_ECX[0x32] + 1.0) * (float)*(int *)(pFVar2 + 0x14);
    iVar3 = appFloor(local_1c);
    puVar4 = (undefined4 *)
             FBox::operator+((FBox *)(*(int *)(local_18 + 0x178) +
                                     (iVar3 % *(int *)(pFVar2 + 0x14) + *(int *)(pFVar2 + 0x10)) *
                                     0x1c),local_40);
  }
  pFVar5 = param_1;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar5 = pFVar5 + 4;
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1075094b Catch@1075094b

void Catch_1075094b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1075095f Catch@1075095f

void Catch_1075095f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::GetRenderBoundingBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107509d0 FUN_107509d0

void FUN_107509d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f750;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 0x94))();
  *(undefined4 *)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = param_2;
  *(undefined4 *)(iVar1 + 0x8c) = param_3;
  fVar2 = (float10)thunk_FUN_10370480(*(undefined4 *)(iVar1 + 0x8c));
  fVar2 = (float10)thunk_FUN_10370480(*(undefined4 *)(iVar1 + 0x88),(float)fVar2);
  fVar2 = (float10)thunk_FUN_104a4940((float)fVar2);
  fVar2 = (float10)thunk_FUN_10370480(*(undefined4 *)(iVar1 + 0x84),(float)fVar2);
  fVar2 = (float10)thunk_FUN_104a4940((float)fVar2);
  *(float *)(iVar1 + 0xe4) = (float)((float10)*(float *)(iVar1 + 0x5c) * (float10)0.0078125 * fVar2)
  ;
  ExceptionList = local_10;
  return;
}


// ==== 10750a92 Catch@10750a92

void Catch_10750a92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10750aa6 Catch@10750aa6

void Catch_10750aa6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::SetScale");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10750b00 FUN_10750b00

float * FUN_10750b00(void)

{
  float fVar1;
  undefined4 *puVar2;
  FMatrix *pFVar3;
  float *pfVar4;
  FMatrix *pFVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 auStack_464 [15];
  undefined4 uStack_428;
  undefined1 *puStack_424;
  undefined4 auStack_420 [15];
  undefined4 uStack_3e4;
  undefined4 *puStack_3e0;
  undefined4 auStack_3dc [2];
  FMatrix aFStack_3d4 [40];
  undefined4 uStack_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  FMatrix aFStack_354 [4];
  undefined4 local_350;
  undefined4 local_34c [14];
  FMatrix aFStack_314 [8];
  undefined4 local_30c [14];
  FMatrix aFStack_2d4 [8];
  undefined4 local_2cc [14];
  FMatrix aFStack_294 [8];
  undefined4 local_28c [14];
  FMatrix aFStack_254 [4];
  undefined1 auStack_250 [4];
  undefined4 local_24c [14];
  FMatrix aFStack_214 [4];
  undefined4 auStack_210 [15];
  FMatrix aFStack_1d4 [4];
  undefined4 auStack_1d0 [15];
  FMatrix aFStack_194 [8];
  undefined4 local_18c [14];
  FMatrix aFStack_154 [8];
  undefined4 local_14c [14];
  FMatrix aFStack_114 [64];
  FMatrix aFStack_d4 [64];
  void *pvStack_94;
  undefined4 local_8c;
  float *pfStack_84;
  undefined1 uStack_48;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082f893;
  pvStack_c = ExceptionList;
  local_4 = 0;
  iVar7 = *(int *)(in_ECX + 100);
  local_350 = 1;
  if (*(int *)(in_ECX + 0x84) == 0) {
    local_3a8 = *(float *)(iVar7 + 0x28c) + *(float *)(iVar7 + 0x1bc);
    local_3a4 = *(float *)(iVar7 + 0x1c0) + *(float *)(iVar7 + 0x290);
    local_3a0 = *(float *)(iVar7 + 0x1c4) + *(float *)(iVar7 + 0x294);
    uStack_3ac = 0x10750e0b;
    ExceptionList = &pvStack_c;
    puVar2 = (undefined4 *)thunk_FUN_10326fb0();
    local_4 = 0xb;
    iVar7 = *(int *)(in_ECX + 100);
    puVar8 = local_2cc;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    local_3a8 = *(float *)(iVar7 + 0x1c8);
    local_3a4 = *(float *)(iVar7 + 0x1cc);
    local_3a0 = *(float *)(iVar7 + 0x1d0);
    uStack_3ac = 0x10750e4f;
    puVar2 = (undefined4 *)thunk_FUN_105263f0();
    local_4._0_1_ = 0xc;
    iVar7 = *(int *)(in_ECX + 0x60);
    puVar8 = local_30c;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    local_3a8 = *(float *)(iVar7 + 0x9c);
    local_3a4 = *(float *)(iVar7 + 0xa0);
    local_3a0 = *(float *)(iVar7 + 0xa4);
    uStack_3ac = 0x10750e90;
    puVar2 = (undefined4 *)thunk_FUN_105263f0();
    local_4 = CONCAT31(local_4._1_3_,0xd);
    puVar8 = local_34c;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar2 = local_2cc;
    puVar8 = local_28c;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    local_4._0_1_ = 0xe;
    puVar2 = auStack_1d0;
    puVar8 = local_30c;
    for (iVar7 = 0x10; puVar2 = puVar2 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar2 = *puVar8;
      puVar8 = puVar8 + 1;
    }
    local_4._0_1_ = 0xf;
    puVar2 = local_34c;
    puVar8 = local_24c;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    local_4._0_1_ = 0x10;
    iVar7 = *(int *)(in_ECX + 100);
    fVar1 = *(float *)(iVar7 + 0x27c);
    iVar6 = *(int *)(in_ECX + 0x60);
    local_3a8 = *(float *)(iVar6 + 0x84) * fVar1 * *(float *)(iVar7 + 0x280);
    local_3a4 = *(float *)(iVar6 + 0x88) * *(float *)(iVar7 + 0x284) * fVar1;
    local_3a0 = *(float *)(iVar6 + 0x8c) * fVar1 * *(float *)(iVar7 + 0x288);
    uStack_3ac = 0x10750f95;
    pFVar3 = (FMatrix *)thunk_FUN_103274a0();
    local_4 = CONCAT31(local_4._1_3_,0x11);
    puStack_3e0 = local_18c;
    puVar2 = local_24c;
    puVar8 = auStack_3dc;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    uStack_3e4 = 0x10750fc0;
    pFVar3 = (FMatrix *)FMatrix::operator*(pFVar3);
    uStack_48 = 0x12;
    puVar2 = auStack_210;
    puVar8 = auStack_420;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    puStack_424 = auStack_250;
    uStack_428 = 0x10750feb;
    pFVar5 = (FMatrix *)FMatrix::operator*(pFVar3);
    local_8c._0_1_ = 0x13;
    pFVar3 = aFStack_314;
    puVar2 = auStack_464;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar2 = *(undefined4 *)pFVar3;
      pFVar3 = pFVar3 + 4;
      puVar2 = puVar2 + 1;
    }
    pfVar4 = (float *)FMatrix::operator*(pFVar5,aFStack_1d4);
    pfVar9 = pfStack_84;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar9 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar9 = pfVar9 + 1;
    }
    local_8c._0_1_ = 0x13;
    uStack_428 = 0x10751045;
    FMatrix::~FMatrix(aFStack_1d4);
    local_8c._0_1_ = 0x12;
    uStack_428 = 0x1075105a;
    FMatrix::~FMatrix(aFStack_294);
    local_8c._0_1_ = 0x11;
    uStack_428 = 0x1075106f;
    FMatrix::~FMatrix(aFStack_214);
    local_8c._0_1_ = 0x10;
    uStack_428 = 0x10751084;
    FMatrix::~FMatrix(aFStack_194);
    local_8c._0_1_ = 0xf;
    uStack_428 = 0x10751096;
    FMatrix::~FMatrix(aFStack_3d4);
    local_8c._0_1_ = 0xe;
    uStack_428 = 0x107510ab;
    FMatrix::~FMatrix((FMatrix *)&stack0xfffffc6c);
    local_8c._0_1_ = 0xd;
    uStack_428 = 0x107510c0;
    FMatrix::~FMatrix(aFStack_354);
    local_8c._0_1_ = 0xc;
    uStack_428 = 0x107510d5;
    FMatrix::~FMatrix(aFStack_114);
    local_8c = CONCAT31(local_8c._1_3_,0xb);
    uStack_428 = 0x107510ea;
    FMatrix::~FMatrix(aFStack_154);
    pFVar3 = aFStack_d4;
  }
  else {
    local_3a8 = *(float *)(iVar7 + 0x1bc);
    local_3a4 = *(float *)(iVar7 + 0x1c0);
    local_3a0 = *(float *)(iVar7 + 0x1c4);
    uStack_3ac = 0x10750b77;
    ExceptionList = &pvStack_c;
    puVar2 = (undefined4 *)thunk_FUN_10326fb0();
    local_4 = 1;
    iVar7 = *(int *)(in_ECX + 100);
    puVar8 = local_34c;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    local_3a8 = *(float *)(iVar7 + 0x1c8);
    local_3a4 = *(float *)(iVar7 + 0x1cc);
    local_3a0 = *(float *)(iVar7 + 0x1d0);
    uStack_3ac = 0x10750bb4;
    puVar2 = (undefined4 *)thunk_FUN_105263f0();
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar8 = local_30c;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar2 = local_34c;
    puVar8 = local_18c;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    local_4._0_1_ = 3;
    puVar2 = local_30c;
    puVar8 = local_2cc;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    local_4._0_1_ = 4;
    iVar7 = *(int *)(in_ECX + 100);
    fVar1 = *(float *)(iVar7 + 0x27c);
    iVar6 = *(int *)(in_ECX + 0x60);
    local_3a8 = *(float *)(iVar6 + 0x84) * fVar1 * *(float *)(iVar7 + 0x280);
    local_3a4 = *(float *)(iVar6 + 0x88) * *(float *)(iVar7 + 0x284) * fVar1;
    local_3a0 = *(float *)(iVar6 + 0x8c) * fVar1 * *(float *)(iVar7 + 0x288);
    uStack_3ac = 0x10750c9f;
    pFVar3 = (FMatrix *)thunk_FUN_103274a0();
    local_4 = CONCAT31(local_4._1_3_,5);
    puStack_3e0 = local_14c;
    puVar2 = local_2cc;
    puVar8 = auStack_3dc;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    uStack_3e4 = 0x10750cca;
    pFVar3 = (FMatrix *)FMatrix::operator*(pFVar3);
    uStack_48 = 6;
    puVar2 = auStack_1d0;
    puVar8 = auStack_420;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    puStack_424 = auStack_250;
    uStack_428 = 0x10750cf5;
    pfVar4 = (float *)FMatrix::operator*(pFVar3);
    local_8c._1_3_ = (undefined3)((uint)local_8c >> 8);
    pfVar9 = pfStack_84;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar9 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar9 = pfVar9 + 1;
    }
    local_8c._0_1_ = 6;
    uStack_428 = 0x10750d24;
    FMatrix::~FMatrix(aFStack_294);
    local_8c._0_1_ = 5;
    uStack_428 = 0x10750d39;
    FMatrix::~FMatrix(aFStack_1d4);
    local_8c._0_1_ = 4;
    uStack_428 = 0x10750d4e;
    FMatrix::~FMatrix(aFStack_314);
    local_8c._0_1_ = 3;
    uStack_428 = 0x10750d63;
    FMatrix::~FMatrix((FMatrix *)&stack0xfffffc6c);
    local_8c._0_1_ = 2;
    uStack_428 = 0x10750d75;
    FMatrix::~FMatrix(aFStack_3d4);
    local_8c = CONCAT31(local_8c._1_3_,1);
    uStack_428 = 0x10750d8a;
    FMatrix::~FMatrix(aFStack_254);
    pFVar3 = aFStack_2d4;
  }
  local_8c = 0;
  uStack_428 = 0x10751102;
  FMatrix::~FMatrix(pFVar3);
  if (*(int *)(in_ECX + 0x84) == 0) {
    iVar7 = *(int *)(in_ECX + 0x60);
    pfStack_84[0xc] =
         -*(float *)(iVar7 + 0x98) * pfStack_84[8] +
         -*(float *)(iVar7 + 0x94) * pfStack_84[4] + -*(float *)(iVar7 + 0x90) * *pfStack_84 +
         pfStack_84[0xc];
    iVar7 = *(int *)(in_ECX + 0x60);
    pfStack_84[0xd] =
         -*(float *)(iVar7 + 0x98) * pfStack_84[9] +
         -*(float *)(iVar7 + 0x94) * pfStack_84[5] + -*(float *)(iVar7 + 0x90) * pfStack_84[1] +
         pfStack_84[0xd];
    iVar7 = *(int *)(in_ECX + 0x60);
    pfStack_84[0xe] =
         -*(float *)(iVar7 + 0x98) * pfStack_84[10] +
         -*(float *)(iVar7 + 0x94) * pfStack_84[6] + -*(float *)(iVar7 + 0x90) * pfStack_84[2] +
         pfStack_84[0xe];
  }
  ExceptionList = pvStack_94;
  return pfStack_84;
}


// ==== 10751440 FUN_10751440

void FUN_10751440(void)

{
  undefined4 local_4;
  
  local_4 = 0;
  thunk_FUN_105a7220(&stack0x00000008,&local_4);
  return;
}


// ==== 10751470 FUN_10751470

/* WARNING: Removing unreachable block (ram,0x10751de9) */
/* WARNING: Removing unreachable block (ram,0x10751932) */
/* WARNING: Removing unreachable block (ram,0x107517b0) */
/* WARNING: Removing unreachable block (ram,0x10751790) */
/* WARNING: Removing unreachable block (ram,0x10751912) */
/* WARNING: Removing unreachable block (ram,0x10751c1a) */
/* WARNING: Removing unreachable block (ram,0x10751bdc) */
/* WARNING: Removing unreachable block (ram,0x10751bfc) */
/* WARNING: Removing unreachable block (ram,0x10751dc9) */
/* WARNING: Removing unreachable block (ram,0x10751e07) */
/* WARNING: Removing unreachable block (ram,0x10751c66) */
/* WARNING: Removing unreachable block (ram,0x10751950) */
/* WARNING: Removing unreachable block (ram,0x107517ce) */
/* WARNING: Removing unreachable block (ram,0x10751c46) */
/* WARNING: Removing unreachable block (ram,0x10751c84) */

void FUN_10751470(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int *param_5
                 ,int param_6)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *in_ECX;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  void *local_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  int local_48;
  int local_3c;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_20;
  int *local_1c;
  FMeshAnimSeq *local_10 [3];
  
  puStack_64 = &LAB_1082f8f0;
  local_68 = ExceptionList;
  local_60 = 0;
  ExceptionList = &local_68;
  local_1c = in_ECX;
  iVar9 = (**(code **)(*in_ECX + 0x94))();
  local_2c = *param_5;
  if (*(int *)(iVar9 + 0x68) < *param_5) {
    local_2c = *(int *)(iVar9 + 0x68);
  }
  local_28 = local_2c;
  local_20 = 1.4013e-45;
  local_30 = iVar9;
  if ((in_ECX[0x23] == 0) || (iVar10 = (**(code **)(*in_ECX + 0x94))(), in_ECX[0x2b] != iVar10)) {
    iVar10 = (**(code **)(*in_ECX + 0x94))();
    if (in_ECX[0x2b] != iVar10) {
      for (local_48 = 0; local_48 < in_ECX[0x23]; local_48 = local_48 + 1) {
      }
      FArray::Empty((FArray *)(in_ECX + 0x22),0xc,0);
      for (iVar10 = 0; iVar10 < in_ECX[0x26]; iVar10 = iVar10 + 1) {
      }
      FArray::Empty((FArray *)(in_ECX + 0x25),0xc,0);
    }
    FArray::Add((FArray *)(in_ECX + 0x22),*(int *)(iVar9 + 0x68),0xc);
    FArray::Add((FArray *)(in_ECX + 0x25),*(int *)(iVar9 + 0x68),0xc);
    local_20 = 0.0;
    in_ECX[0x2c] = 0x3f800000;
    iVar9 = (**(code **)(*in_ECX + 0x94))();
    in_ECX[0x2b] = iVar9;
    FName::FName((FName *)local_10,0);
    in_ECX[0x29] = (int)local_10[0];
    in_ECX[0x28] = 0;
  }
  iVar9 = in_ECX[0x22];
  iVar10 = in_ECX[0x25];
  iVar11 = in_ECX[0x30];
  local_10[0] = UVertMeshInstance::GetAnimSeq();
  fVar2 = (float)in_ECX[0x32];
  if ((!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) || (local_20 == 0.0)) {
    *param_5 = local_28;
    in_ECX[0x2a] = local_28;
    iVar14 = 0;
    if (local_10[0] != (FMeshAnimSeq *)0x0) {
      fVar18 = (float10)thunk_FUN_104a4940(in_ECX[0x32],0,iVar11);
      local_20 = (float)(fVar18 * (float10)*(int *)(local_10[0] + 0x14));
      iVar11 = appFloor(local_20);
      local_20 = local_20 - (float)iVar11;
      iVar14 = (iVar11 % *(int *)(local_10[0] + 0x14) + *(int *)(local_10[0] + 0x10)) *
               *(int *)(local_30 + 0x68);
      iVar11 = ((iVar11 + 1) % *(int *)(local_10[0] + 0x14) + *(int *)(local_10[0] + 0x10)) *
               *(int *)(local_30 + 0x68);
      if (local_20 < 0.0 == (local_20 == 0.0)) {
        iVar15 = *(int *)(local_30 + 0x6c);
        iVar17 = *(int *)(local_30 + 0x6c);
        iVar3 = *(int *)(local_30 + 0x154);
        for (iVar16 = 0; iVar16 < local_28; iVar16 = iVar16 + 1) {
          iVar4 = *(int *)(iVar15 + iVar14 * 4 + iVar16 * 4);
          fVar2 = (float)((iVar4 << 0x15) >> 0x15);
          fVar6 = (float)((iVar4 << 10) >> 0x15);
          iVar5 = *(int *)(iVar17 + iVar11 * 4 + iVar16 * 4);
          iVar7 = iVar16 * 0xc;
          *(float *)(iVar7 + iVar9) = ((float)((iVar5 << 0x15) >> 0x15) - fVar2) * local_20 + fVar2;
          *(float *)(iVar7 + 4 + iVar9) =
               fVar6 + ((float)((iVar5 << 10) >> 0x15) - fVar6) * local_20;
          *(float *)(iVar7 + 8 + iVar9) =
               (float)(iVar4 >> 0x16) + ((float)(iVar5 >> 0x16) - (float)(iVar4 >> 0x16)) * local_20
          ;
          uVar12 = *(uint *)(iVar3 + iVar14 * 4 + iVar16 * 4);
          fVar2 = (float)(uVar12 & 0x3ff) - 512.0;
          fVar6 = (float)(uVar12 >> 10 & 0x3ff) - 512.0;
          fVar8 = (float)(uVar12 >> 0x14 & 0x3ff) - 512.0;
          uVar12 = *(uint *)(iVar3 + iVar11 * 4 + iVar16 * 4);
          *(float *)(iVar7 + iVar10) =
               (((float)(uVar12 & 0x3ff) - 512.0) - fVar2) * local_20 + fVar2;
          *(float *)(iVar7 + 4 + iVar10) =
               fVar6 + (((float)(uVar12 >> 10 & 0x3ff) - 512.0) - fVar6) * local_20;
          *(float *)(iVar7 + 8 + iVar10) =
               fVar8 + (((float)(uVar12 >> 0x14 & 0x3ff) - 512.0) - fVar8) * local_20;
        }
        goto LAB_10751e4d;
      }
    }
    iVar11 = *(int *)(local_30 + 0x6c);
    iVar15 = *(int *)(local_30 + 0x154);
    for (iVar17 = 0; iVar17 < local_28; iVar17 = iVar17 + 1) {
      iVar3 = *(int *)(iVar11 + iVar14 * 4 + iVar17 * 4);
      iVar16 = iVar17 * 0xc;
      *(float *)(iVar16 + iVar9) = (float)((iVar3 << 0x15) >> 0x15);
      *(float *)(iVar16 + 4 + iVar9) = (float)((iVar3 << 10) >> 0x15);
      *(float *)(iVar16 + 8 + iVar9) = (float)(iVar3 >> 0x16);
      uVar12 = *(uint *)(iVar15 + iVar14 * 4 + iVar17 * 4);
      *(float *)(iVar16 + iVar10) = (float)(uVar12 & 0x3ff) - 512.0;
      *(float *)(iVar16 + 4 + iVar10) = (float)(uVar12 >> 10 & 0x3ff) - 512.0;
      *(float *)(iVar16 + 8 + iVar10) = (float)(uVar12 >> 0x14 & 0x3ff) - 512.0;
    }
    goto LAB_10751e4d;
  }
  iVar11 = in_ECX[0x2a];
  if (local_28 <= in_ECX[0x2a]) {
    iVar11 = local_28;
  }
  in_ECX[0x2a] = iVar11;
  *param_5 = iVar11;
  if (local_10[0] == (FMeshAnimSeq *)0x0) {
    local_10[0] = (FMeshAnimSeq *)0x0;
    local_20 = 0.0;
  }
  else {
    local_20 = (float)(*(int *)(local_10[0] + 0x10) * *(int *)(local_30 + 0x68));
    local_10[0] = (FMeshAnimSeq *)(-1.0 / (float)*(int *)(local_10[0] + 0x14));
  }
  local_34 = 1.0 - (float)in_ECX[0x32] / (float)in_ECX[0x28];
  local_28 = iVar11;
  iVar11 = FName::operator!=((FName *)(in_ECX + 0x29),(FName *)(in_ECX + 0x30));
  if (iVar11 != 0) {
    in_ECX[0x2c] = 0;
  }
  iVar11 = FName::operator!=((FName *)(in_ECX + 0x29),(FName *)(in_ECX + 0x30));
  if (((iVar11 != 0) || (local_34 < 0.0)) || (1.0 < local_34)) {
    in_ECX[0x28] = (int)local_10[0];
    in_ECX[0x29] = in_ECX[0x30];
    local_34 = 0.0;
  }
  fVar2 = (1.0 - (float)in_ECX[0x2c]) * local_34 + (float)in_ECX[0x2c];
  in_ECX[0x2c] = (int)fVar2;
  if (fVar2 <= 0.97) {
LAB_1075182b:
    if (local_34 < 0.0 == (local_34 == 0.0)) {
      iVar11 = *(int *)(local_30 + 0x6c);
      iVar14 = *(int *)(local_30 + 0x154);
      for (iVar15 = 0; iVar15 < local_28; iVar15 = iVar15 + 1) {
        iVar17 = *(int *)(iVar11 + (int)local_20 * 4 + iVar15 * 4);
        iVar3 = iVar15 * 0xc;
        *(float *)(iVar3 + iVar9) =
             ((float)((iVar17 << 0x15) >> 0x15) - *(float *)(iVar3 + iVar9)) * local_34 +
             *(float *)(iVar3 + iVar9);
        *(float *)(iVar3 + 4 + iVar9) =
             ((float)((iVar17 << 10) >> 0x15) - *(float *)(iVar3 + 4 + iVar9)) * local_34 +
             *(float *)(iVar3 + 4 + iVar9);
        *(float *)(iVar3 + 8 + iVar9) =
             ((float)(iVar17 >> 0x16) - *(float *)(iVar3 + 8 + iVar9)) * local_34 +
             *(float *)(iVar3 + 8 + iVar9);
        uVar12 = *(uint *)(iVar14 + (int)local_20 * 4 + iVar15 * 4);
        *(float *)(iVar3 + iVar10) =
             (((float)(uVar12 & 0x3ff) - 512.0) - *(float *)(iVar3 + iVar10)) * local_34 +
             *(float *)(iVar3 + iVar10);
        *(float *)(iVar3 + 4 + iVar10) =
             *(float *)(iVar3 + 4 + iVar10) +
             (((float)(uVar12 >> 10 & 0x3ff) - 512.0) - *(float *)(iVar3 + 4 + iVar10)) * local_34;
        pfVar1 = (float *)(iVar3 + 8 + iVar10);
        *pfVar1 = *pfVar1 + (((float)(uVar12 >> 0x14 & 0x3ff) - 512.0) -
                            *(float *)(iVar3 + 8 + iVar10)) * local_34;
        in_ECX = local_1c;
      }
    }
  }
  else if (local_28 < local_2c) {
    iVar11 = *(int *)(local_30 + 0x6c);
    iVar14 = *(int *)(local_30 + 0x154);
    for (; local_28 < local_2c; local_28 = local_28 + 1) {
      iVar15 = *(int *)(iVar11 + (int)local_20 * 4 + local_28 * 4);
      iVar17 = local_28 * 0xc;
      *(float *)(iVar17 + iVar9) = (float)((iVar15 << 0x15) >> 0x15);
      *(float *)(iVar17 + 4 + iVar9) = (float)((iVar15 << 10) >> 0x15);
      *(float *)(iVar17 + 8 + iVar9) = (float)(iVar15 >> 0x16);
      uVar12 = *(uint *)(iVar14 + (int)local_20 * 4 + local_28 * 4);
      *(float *)(iVar17 + iVar10) = (float)(uVar12 & 0x3ff) - 512.0;
      *(float *)(iVar17 + 4 + iVar10) = (float)(uVar12 >> 10 & 0x3ff) - 512.0;
      *(float *)(iVar17 + 8 + iVar10) = (float)(uVar12 >> 0x14 & 0x3ff) - 512.0;
    }
    local_28 = local_2c;
    *param_5 = local_2c;
    in_ECX[0x2a] = local_2c;
    local_34 = 0.0;
    goto LAB_1075182b;
  }
  in_ECX[0x28] = in_ECX[0x32];
LAB_10751e4d:
  iVar11 = 0;
  if (param_6 == 1) {
    for (; iVar11 < *param_5; iVar11 = iVar11 + 1) {
      puVar13 = (undefined4 *)(iVar9 + iVar11 * 0xc);
      *param_3 = *puVar13;
      param_3[1] = puVar13[1];
      param_3[2] = puVar13[2];
      param_3 = (undefined4 *)((int)param_3 + param_4);
    }
  }
  else {
    for (local_3c = 0; local_3c < *(int *)(local_30 + 0xd0); local_3c = local_3c + 1) {
      uVar12 = (uint)*(ushort *)(*(int *)(local_30 + 0xcc) + local_3c * 0xc);
      if ((int)uVar12 < local_28) {
        iVar11 = uVar12 * 0xc;
        *param_3 = *(undefined4 *)(iVar11 + iVar9);
        param_3[1] = *(undefined4 *)(iVar11 + 4 + iVar9);
        param_3[2] = *(undefined4 *)(iVar11 + 8 + iVar9);
        puVar13 = (undefined4 *)(iVar11 + iVar10);
        param_3[3] = *puVar13;
        param_3[4] = puVar13[1];
        param_3[5] = puVar13[2];
      }
      param_3 = (undefined4 *)((int)param_3 + param_4);
    }
  }
  ExceptionList = local_68;
  return;
}


// ==== 10751f0d Catch@10751f0d

void Catch_10751f0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x1c,&DAT_10914c48);
}


// ==== 10751f21 Catch@10751f21

void Catch_10751f21(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::GetFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10752200 FUN_10752200

int FUN_10752200(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f900;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_1040b4c0(param_1);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_105eaa00(param_1);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_105ea9d0(param_1);
      if (iVar1 == 0) {
        iVar1 = thunk_FUN_106b8630(param_1);
        if (iVar1 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        uVar2 = *(undefined4 *)(iVar1 + 0x580);
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + 0x578);
      }
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x578);
    }
    iVar1 = FUN_10752200(uVar2);
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 107522af Catch@107522af

void Catch_107522af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107522c3 Catch@107522c3

void Catch_107522c3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GetTextureFromMaterial");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10752320 FUN_10752320

int FUN_10752320(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0xac))(param_1), iVar1 == 0)) {
    if ((param_1 == 0) ||
       (iVar1 = (**(code **)(*in_ECX + 0x94))(), *(int *)(iVar1 + 0x7c) <= param_1)) {
      if ((param_2 == (int *)0x0) || (param_2[0xa7] == 0)) {
        if ((-1 < param_1) &&
           (iVar1 = (**(code **)(*in_ECX + 0x94))(), param_1 < *(int *)(iVar1 + 0x7c))) {
          iVar1 = (**(code **)(*in_ECX + 0x94))();
          iVar1 = *(int *)(*(int *)(iVar1 + 0x78) + param_1 * 4);
          goto LAB_10752396;
        }
        iVar1 = (**(code **)(*in_ECX + 0x94))();
        if (param_1 < *(int *)(iVar1 + 0x7c)) {
          return 0;
        }
        iVar1 = (**(code **)(*in_ECX + 0x94))();
        if (*(int *)(iVar1 + 0x7c) < 1) {
          return 0;
        }
        iVar1 = (**(code **)(*in_ECX + 0x94))();
        piVar4 = *(int **)(iVar1 + 0x78);
      }
      else {
        piVar4 = (int *)param_2[0xa6];
      }
      iVar1 = *piVar4;
    }
    else {
      iVar1 = (**(code **)(*in_ECX + 0x94))();
      iVar1 = *(int *)(*(int *)(iVar1 + 0x78) + param_1 * 4);
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0xac))(param_1);
  }
LAB_10752396:
  if ((((iVar1 != 0) && (param_2 != (int *)0x0)) && ((*(byte *)(param_2 + 0xe8) & 1) != 0)) &&
     (iVar2 = (**(code **)(*param_2 + 0x124))(), iVar2 != 0)) {
    iVar3 = FUN_10752200(iVar1);
    *(int *)(iVar2 + 0x578) = iVar3;
    if (iVar3 != 0) {
      return iVar2;
    }
  }
  return iVar1;
}


// ==== 107524a0 FUN_107524a0

FArchive * FUN_107524a0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FSphere *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f910;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x10);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_105e98b0(param_1,iVar1 * 0x10 + *(int *)param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x10,local_18);
    while (iVar3 < local_18) {
      this = (FSphere *)thunk_FUN_10371cb0(0x10,param_2);
      if (this == (FSphere *)0x0) {
        thunk_FUN_105e98b0(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FSphere::FSphere(this);
        thunk_FUN_105e98b0(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10752593 Catch@10752593

void Catch_10752593(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 107525a7 Catch@107525a7

void Catch_107525a7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10752610 FUN_10752610

void FUN_10752610(FArchive *param_1)

{
  int iVar1;
  ULodMeshInstance *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f920;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ULodMeshInstance::Serialize(in_ECX,param_1);
  iVar1 = FArchive::IsPersistent(param_1);
  if (iVar1 == 0) {
    ULodMeshInstance::Serialize(in_ECX,param_1);
    thunk_FUN_1038fb90(param_1,in_ECX + 0x88);
    thunk_FUN_1038fb90(param_1,in_ECX + 0x94);
    thunk_FUN_10330060(param_1,in_ECX + 0xa0);
    (**(code **)(*(int *)param_1 + 0x1c))(in_ECX + 0xa4);
    thunk_FUN_10330060(param_1,in_ECX + 0xb0);
    thunk_FUN_10330060(param_1,in_ECX + 0xb4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 107526cb Catch@107526cb

void Catch_107526cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107526df Catch@107526df

void Catch_107526df(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10752760 FUN_10752760

void FUN_10752760(void)

{
  UObject *this;
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  UObject *pUVar6;
  FBox local_74 [28];
  FSphere local_58 [16];
  undefined1 local_48 [12];
  FVector *local_3c;
  int local_38;
  FVector *local_30;
  int local_2c;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1082f940;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_8 = 0;
  ExceptionList = &local_10;
  this = (UObject *)(**(code **)(*in_ECX + 0x94))();
  (**(code **)(**(int **)GWarn_exref + 0x18))();
  thunk_FUN_10368910();
  local_8._0_1_ = 1;
  for (local_18 = 0; iVar3 = local_18, local_18 < *(int *)(this + 0x194); local_18 = local_18 + 1) {
    thunk_FUN_10368910();
    local_8._0_1_ = 2;
    for (iVar5 = 0; local_1c = iVar5, iVar5 < *(int *)(this + 400); iVar5 = iVar5 + 1) {
      thunk_FUN_1074f6a0(local_48);
      thunk_FUN_10379630(local_48);
      thunk_FUN_10379630(local_48);
    }
    iVar5 = *(int *)(this + 0x178);
    puVar1 = (undefined4 *)FBox::FBox(local_74,local_30,local_2c);
    puVar4 = (undefined4 *)(iVar5 + iVar3 * 0x1c);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar4 = (undefined4 *)(local_18 * 0x10 + *(int *)(this + 0x184));
    puVar1 = (undefined4 *)FSphere::FSphere(local_58,local_30,local_2c);
    *puVar4 = *puVar1;
    puVar4[1] = puVar1[1];
    puVar4[2] = puVar1[2];
    puVar4[3] = puVar1[3];
    local_8._0_1_ = 1;
    thunk_FUN_1038fad0();
  }
  puVar1 = (undefined4 *)FBox::FBox(local_74,local_3c,local_38);
  pUVar6 = this + 0x34;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    pUVar6 = pUVar6 + 4;
  }
  puVar1 = (undefined4 *)FSphere::FSphere(local_58,local_3c,local_38);
  *(undefined4 *)(this + 0x50) = *puVar1;
  *(undefined4 *)(this + 0x54) = puVar1[1];
  *(undefined4 *)(this + 0x58) = puVar1[2];
  *(undefined4 *)(this + 0x5c) = puVar1[3];
  if (*(int *)GLog_exref != 0) {
    UObject::GetName(this);
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_1038fad0();
  ExceptionList = local_10;
  return;
}


// ==== 10752977 Catch@10752977

void Catch_10752977(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1075298b Catch@1075298b

void Catch_1075298b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::MeshBuildBounds");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10752a40 FUN_10752a40

void FUN_10752a40(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FCoords *pFVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *in_ECX;
  int iVar7;
  FRotator *pFVar8;
  FScale *pFVar9;
  float *pfVar10;
  FRotator *pFVar11;
  FVector local_170 [48];
  FRotator local_140 [48];
  FVector local_110 [48];
  FScale local_e0 [48];
  float local_b0;
  FScale local_a4 [8];
  float local_9c [3];
  float local_90 [12];
  undefined1 *local_60;
  void *local_5c;
  undefined1 *puStack_58;
  uint local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24 [3];
  int local_18;
  undefined4 *local_10;
  float local_c;
  float local_8;
  
  puStack_58 = &LAB_1082f958;
  local_5c = ExceptionList;
  local_60 = &stack0xfffffe84;
  local_54 = 0;
  ExceptionList = &local_5c;
  thunk_FUN_10368910();
  local_54 = CONCAT31(local_54._1_3_,1);
  iVar3 = (**(code **)(*in_ECX + 0x94))();
  FArray::AddZeroed((FArray *)local_24,0xc,*(int *)(iVar3 + 0x68));
  (**(code **)(*in_ECX + 0x120))(param_1,0,local_24[0],0xc,param_4,1);
  FCoords::FCoords((FCoords *)local_90);
  fVar1 = *(float *)(iVar3 + 0x84) * *(float *)(param_1 + 0x280);
  fVar2 = *(float *)(iVar3 + 0x88) * *(float *)(param_1 + 0x284);
  if (in_ECX[0x21] == 0) {
    local_28 = *(float *)(param_1 + 0x27c);
    local_30 = local_28 * fVar1;
    local_2c = fVar2 * local_28;
    local_28 = local_28 * *(float *)(iVar3 + 0x8c) * *(float *)(param_1 + 0x288);
    local_48 = *(float *)(param_1 + 0x1bc) + *(float *)(param_1 + 0x28c);
    local_44 = *(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0x290);
    local_40 = *(float *)(param_1 + 0x1c4) + *(float *)(param_1 + 0x294);
    local_9c[0] = fVar1;
    local_c = local_44;
    local_8 = local_40;
    FScale::FScale(local_a4,(FVector *)&local_30,0.0,0);
    pFVar9 = (FScale *)(param_1 + 0x1c8);
    pFVar11 = local_140;
    pFVar8 = (FRotator *)&local_48;
    pFVar4 = (FCoords *)FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_170);
    pFVar4 = (FCoords *)FCoords::operator*(pFVar4,pFVar8);
    pFVar4 = (FCoords *)FCoords::operator*(pFVar4,pFVar11);
    pfVar5 = (float *)FCoords::operator*(pFVar4,pFVar9);
    pfVar10 = local_90;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar10 = pfVar10 + 1;
    }
    local_90[0] = local_90[0] + *(float *)(iVar3 + 0x90);
    local_90[1] = *(float *)(iVar3 + 0x94) + local_90[1];
    local_90[2] = *(float *)(iVar3 + 0x98) + local_90[2];
  }
  else {
    local_34 = *(float *)(param_1 + 0x27c);
    local_3c = local_34 * fVar1;
    local_38 = fVar2 * local_34;
    local_34 = local_34 * *(float *)(iVar3 + 0x8c) * *(float *)(param_1 + 0x288);
    local_b0 = fVar1;
    local_c = local_34;
    local_8 = local_38;
    FScale::FScale(local_a4,(FVector *)&local_3c,0.0,0);
    pFVar9 = local_e0;
    pFVar8 = (FRotator *)(param_1 + 0x1bc);
    pFVar4 = (FCoords *)FCoords::operator*((FCoords *)(GMath_exref + 0x18),local_110);
    pFVar4 = (FCoords *)FCoords::operator*(pFVar4,pFVar8);
    pfVar5 = (float *)FCoords::operator*(pFVar4,pFVar9);
    pfVar10 = local_90;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar10 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar10 = pfVar10 + 1;
    }
  }
  for (iVar3 = 0; local_18 = iVar3, local_10 = param_2, iVar3 < *param_4; iVar3 = iVar3 + 1) {
    puVar6 = (undefined4 *)
             FVector::TransformPointBy((FVector *)(local_24[0] + iVar3 * 0xc),(FCoords *)local_9c);
    *param_2 = *puVar6;
    param_2[1] = puVar6[1];
    param_2[2] = puVar6[2];
    param_2 = (undefined4 *)((int)param_2 + param_3);
  }
  local_54 = local_54 & 0xffffff00;
  thunk_FUN_1038fad0();
  ExceptionList = local_5c;
  return;
}


// ==== 10752d35 Catch@10752d35

void Catch_10752d35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x3c) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x3c,&DAT_10914c48);
}


// ==== 10752d49 Catch@10752d49

void Catch_10752d49(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::GetMeshVerts");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10752e30 FUN_10752e30

int FUN_10752e30(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  ushort uStack_2e;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f970;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = 0;
  if (*(int *)(in_ECX + 0x1e8) == 0) {
    for (; iVar2 < *(int *)(in_ECX + 0x1ac); iVar2 = iVar2 + 1) {
    }
    ExceptionList = &local_10;
    FArray::Empty((FArray *)(in_ECX + 0x1a8),0x20,0);
    FArray::Add((FArray *)(in_ECX + 0x1a8),*(int *)(in_ECX + 0xd0),0x20);
    *(int *)(in_ECX + 0x1b4) = *(int *)(in_ECX + 0x1b4) + 1;
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0xd0); iVar2 = iVar2 + 1) {
      iVar3 = iVar2 * 0x20 + *(int *)(in_ECX + 0x1a8);
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(*(int *)(in_ECX + 0xcc) + 4 + iVar2 * 0xc);
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(*(int *)(in_ECX + 0xcc) + 8 + iVar2 * 0xc);
    }
    puVar4 = (ushort *)0x0;
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0xb8); iVar2 = iVar2 + 1) {
      uVar1 = *(uint *)(*(int *)(in_ECX + 0xb4) + 4 + iVar2 * 8);
      if ((puVar4 == (ushort *)0x0) || (uVar1 >> 0x10 != (uint)*puVar4)) {
        iVar3 = thunk_FUN_10371880(0x5c,in_ECX + 0x1e4);
        if (iVar3 == 0) {
          puVar4 = (ushort *)0x0;
        }
        else {
          puVar4 = (ushort *)thunk_FUN_106d93e0();
        }
        puVar4[7] = (ushort)iVar2;
        uStack_2e = (ushort)(uVar1 >> 0x10);
        *puVar4 = uStack_2e;
        puVar4[2] = 0;
        puVar4[3] = (short)*(undefined4 *)(in_ECX + 0xd0) - 1;
        puVar4[8] = 0;
        puVar4[8] = 0;
      }
      puVar4[8] = puVar4[8] + 1;
    }
    iVar2 = 1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 10752f81 Catch@10752f81

void Catch_10752f81(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10752f95 Catch@10752f95

void Catch_10752f95(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::RenderPreProcess");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10753020 FUN_10753020

void FUN_10753020(int *param_1,FSceneNode *param_2,FSphere *param_3,undefined4 param_4,
                 FRenderInterface *param_5)

{
  ushort uVar1;
  UVertMesh *this;
  FRenderInterface *pFVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  UObject *pUVar6;
  FPlane *pFVar7;
  AActor *pAVar8;
  int *piVar9;
  int *in_ECX;
  int iVar10;
  int iVar11;
  code *pcVar12;
  FMatrix *pFVar13;
  FRenderInterface *pFVar14;
  int *piVar15;
  float10 fVar16;
  float fVar17;
  double dVar18;
  int aiStackY_240 [7];
  undefined4 uStackY_224;
  undefined4 uStackY_220;
  int aiStackY_21c [5];
  undefined4 uStackY_208;
  uint uStackY_204;
  uint uStackY_200;
  undefined4 uStackY_1fc;
  UClass *pUStackY_1f8;
  undefined4 uStack_1f0;
  UClass *pUStack_1ec;
  FSphere aFStack_1b4 [8];
  undefined4 uStack_1ac;
  undefined4 auStack_178 [15];
  undefined4 uStack_13c;
  FMatrix *pFStack_138;
  undefined4 local_134;
  FMatrix local_124 [32];
  FLineBatcher local_104 [32];
  FMatrix local_e4 [64];
  FRawIndexBuffer local_a4 [12];
  TArray<unsigned_short> local_98 [4];
  undefined1 *local_94;
  int local_84 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  void *local_64;
  undefined1 *puStack_60;
  uint local_5c;
  int local_58;
  uint local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  undefined8 local_34;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint local_1c;
  AActor *local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puStack_60 = &LAB_1082f9b3;
  local_64 = ExceptionList;
  local_68 = &stack0xfffffed0;
  local_5c = 0;
  local_18 = (AActor *)*param_1;
  this = *(UVertMesh **)(local_18 + 0x104);
  ExceptionList = &local_64;
  puVar3 = &stack0xfffffed0;
  local_28 = in_ECX;
  if (*(int *)(this + 0x1e8) == 0) {
    local_134 = 0x10753072;
    ExceptionList = &local_64;
    UVertMesh::RenderPreProcess(this);
    puVar3 = local_68;
  }
  local_68 = puVar3;
  pcVar12 = Identity_exref;
  pFVar13 = local_e4;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pFVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pFVar13 = pFVar13 + 4;
  }
  local_5c._0_1_ = 1;
  local_134 = 0x3f800000;
  pFStack_138 = local_124;
  uStack_13c = 0x107530a3;
  puVar4 = (undefined4 *)(**(code **)(*local_28 + 0x128))();
  local_5c = (uint)local_5c._1_3_ << 8;
  pFVar13 = local_e4;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pFVar13 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar13 = pFVar13 + 4;
  }
  local_5c = CONCAT31(local_5c._1_3_,1);
  uStack_13c = 0x107530c6;
  FMatrix::~FMatrix(local_124);
  iVar10 = *(int *)param_5;
  pFVar13 = local_e4;
  puVar4 = auStack_178;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar4 = *(undefined4 *)pFVar13;
    pFVar13 = pFVar13 + 4;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(iVar10 + 0x40))();
  dVar18 = appTan((double)(*(float *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x3c8) * 0.008726646)
                 );
  pAVar8 = local_18;
  local_14 = (float)dVar18;
  local_8 = ((float)*(int *)(this + 0x68) * 0.75) / 250.0 + 0.25;
  local_c = ((float)*(int *)(*(int *)(param_2 + 4) + 0x94) * 0.7) / 640.0 + 0.3;
  iVar10 = FSceneNode::Project(param_2);
  local_10 = *(float *)(iVar10 + 0xc) - *(float *)(this + 0xf4);
  fVar16 = (float10)thunk_FUN_104a4940();
  local_10 = (float)((float10)*(float *)(this + 0xe8) * (float10)local_14 * fVar16 *
                    (float10)local_8);
  fVar17 = FVector::GetAbsMax((FVector *)(pAVar8 + 0x280));
  local_34 = (double)(local_c * 530.0 * fVar17);
  fVar16 = (float10)thunk_FUN_10370480();
  local_10 = (float)((fVar16 * (float10)local_34 * (float10)*(float *)(pAVar8 + 0x144) *
                     (float10)*(float *)(this + 0xe4)) / (float10)local_10);
  iVar10 = *(int *)(this + 0x68);
  local_c = (float)iVar10 * local_10;
  fVar16 = (float10)thunk_FUN_104a4940();
  local_c = (float)fVar16;
  local_8 = (float)appRound(local_c);
  pAVar8 = local_18;
  if (iVar10 < (int)local_8) {
    local_8 = (float)iVar10;
  }
  if (*(int *)(this + 0x1e8) == 0) goto LAB_10753229;
  if (*(int *)(local_18 + 0x270) == 0) {
    if ((*(int *)(local_18 + 0xec) == 0) || (*(int *)(*(int *)(local_18 + 0xec) + 0x408) == 0)) {
      iVar10 = *(int *)(*(int *)(local_18 + 0xe0) + 0x408);
      if (iVar10 == 0) goto LAB_10753229;
      goto LAB_1075328d;
    }
  }
  else {
    iVar10 = *(int *)(local_18 + 0x270);
LAB_1075328d:
    if (iVar10 == 0) {
LAB_10753229:
      local_5c = local_5c & 0xffffff00;
      FMatrix::~FMatrix(local_e4);
      ExceptionList = local_64;
      return;
    }
  }
  local_14 = (float)UViewport::IsWire(*(UViewport **)(param_2 + 4));
  local_3c = (int)local_8;
  (**(code **)(*local_28 + 0x120))();
  FRawIndexBuffer::FRawIndexBuffer(local_a4);
  local_5c._0_1_ = 3;
  uStack_1ac = 0x107532e2;
  TArray<unsigned_short>::Empty(local_98,*(int *)(this + 0xb8) * 3);
  thunk_FUN_10368430();
  local_5c = CONCAT31(local_5c._1_3_,4);
  local_2c = 0;
  while (pFVar14 = param_5, local_2c < *(int *)(this + 0x1e8)) {
    local_10 = 0.0;
    local_44 = local_94;
    *(short *)(*(int *)(this + 0x1e4) + 2 + local_2c * 0x5c) = (short)local_94;
    local_c = (float)(uint)*(ushort *)(*(int *)(this + 0x1e4) + 0xe + local_2c * 0x5c);
    local_48 = 0;
    while (iVar11 = local_2c, iVar10 = local_48,
          local_48 < (int)(uint)*(ushort *)(local_2c * 0x5c + 0x10 + *(int *)(this + 0x1e4))) {
      iVar11 = local_48 + (int)local_c;
      uStack_1ac = 0x1075335b;
      puVar5 = TArray<unsigned_short>::operator()((TArray<unsigned_short> *)(this + 0xa8),iVar11);
      if ((int)(uint)*puVar5 <= (int)local_8) {
        local_34 = (double)CONCAT44(*(undefined4 *)(*(int *)(this + 0xb4) + 4 + iVar11 * 8),
                                    *(undefined4 *)(*(int *)(this + 0xb4) + iVar11 * 8));
        for (iVar11 = 0; local_40 = iVar11, iVar11 < 3; iVar11 = iVar11 + 1) {
          uVar1 = *(ushort *)((int)&local_34 + iVar11 * -2 + 4);
          while (local_4c = (uint)uVar1,
                (int)local_8 <= (int)(uint)*(ushort *)(*(int *)(this + 0xcc) + local_4c * 0xc)) {
            uStack_1ac = 0x107533ad;
            puVar5 = TArray<unsigned_short>::operator()
                               ((TArray<unsigned_short> *)(this + 0xc0),local_4c);
            uVar1 = *puVar5;
          }
          uStack_1ac = 0x107533c5;
          local_1c = local_4c;
          TArray<unsigned_short>::AddItem(local_98,(ushort *)&local_1c);
        }
        local_10 = (float)((int)local_10 + 1);
      }
      local_48 = iVar10 + 1;
    }
    uStack_1ac = 0x107533e8;
    thunk_FUN_104225e0();
    pAVar8 = local_18;
    local_2c = iVar11 + 1;
  }
  if (local_14 == 0.0) {
    if (((*(uint *)(pAVar8 + 0x368) & 0x400) != 0) &&
       ((*(uint *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5ac) & 0x20000) != 0)) {
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      iVar10 = *(int *)param_5;
      param_3 = aFStack_1b4;
      FSphere::FSphere(aFStack_1b4);
      (**(code **)(iVar10 + 0x24))();
      local_8 = -NAN;
LAB_1075361e:
      pcVar12 = *(code **)(*(int *)pFVar14 + 0x20);
      goto LAB_10753624;
    }
    pAVar8 = AActor::GetAmbientLightingActor(pAVar8);
    if ((((byte)pAVar8[0x2e4] & 1) != 0) ||
       (iVar10 = UViewport::IsLit(*(UViewport **)(param_2 + 4)), pFVar14 = param_5, iVar10 == 0)) {
      local_14 = -NAN;
      pFVar14 = param_5;
      goto LAB_1075361e;
    }
    local_1c = (uint)(byte)local_18[0x2b5];
    local_24 = 0;
    iVar10 = *(int *)param_5;
    local_44 = aFStack_1b4;
    FSphere::FSphere(aFStack_1b4,(FSphere *)(param_1 + 0x2a));
    (**(code **)(iVar10 + 0x24))();
    puVar4 = (undefined4 *)param_3;
    for (; (puVar4 != (undefined4 *)0x0 && (local_24 < (int)local_1c)); local_24 = local_24 + 1) {
      (**(code **)(*(int *)pFVar14 + 0x28))();
      puVar4 = (undefined4 *)puVar4[1];
    }
    (**(code **)(*(int *)pFVar14 + 0x20))();
  }
  else {
    iVar10 = *(int *)param_5;
    param_3 = aFStack_1b4;
    FSphere::FSphere(aFStack_1b4,(FSphere *)(param_1 + 0x2a));
    (**(code **)(iVar10 + 0x24))();
    pUVar6 = UObject::GetOuter(*(UObject **)(param_2 + 4));
    local_c = *(float *)(*(int *)(pUVar6 + 0x34) + 0x184);
    if (((*(uint *)(local_18 + 0x368) & 0x400) == 0) ||
       ((*(uint *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5ac) & 0x20000) == 0)) {
      iVar10 = *(int *)pFVar14;
      pFVar7 = (FPlane *)FColor::Plane((FColor *)&local_c);
      uStack_1ac = 0x107534b7;
      FColor::FColor((FColor *)&param_3,pFVar7);
      pcVar12 = *(code **)(iVar10 + 0x20);
    }
    else {
      param_3 = (FSphere *)0xff78ff4b;
      pcVar12 = *(code **)(*(int *)pFVar14 + 0x20);
    }
LAB_10753624:
    uStack_1ac = 0x10753628;
    (*pcVar12)();
  }
  (**(code **)(*(int *)pFVar14 + 0xa8))();
  local_1c = (**(code **)(*(int *)pFVar14 + 0xb0))();
  iVar10 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
  if (iVar10 == 0) {
    if (*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5b8) != 7) goto LAB_1075371e;
    if (DAT_11d7e048 == 0) {
      param_3 = (FSphere *)&stack0xfffffe1c;
      pUStack_1ec = (UClass *)0x107536e5;
      FName::FName((FName *)&stack0xfffffe1c,0);
      pUStack_1ec = &UShader::PrivateStaticClass;
      uStack_1f0 = 0x107536f1;
      DAT_11d7e048 = thunk_FUN_1053d370();
      thunk_FUN_10530420();
    }
    pUStack_1ec = (UClass *)DAT_11d7e048;
    pcVar12 = *(code **)(*(int *)pFVar14 + 0x44);
  }
  else {
    if (DAT_11d7e04c == 0) {
      param_3 = (FSphere *)&stack0xfffffe1c;
      pUStack_1ec = (UClass *)0x10753679;
      FName::FName((FName *)&stack0xfffffe1c,0);
      pUStack_1ec = &UShader::PrivateStaticClass;
      uStack_1f0 = 0x10753685;
      DAT_11d7e04c = thunk_FUN_1053d370();
      thunk_FUN_10530420();
      *(uint *)(DAT_11d7e04c + 0x59c) = *(uint *)(DAT_11d7e04c + 0x59c) | 2;
    }
    pUStack_1ec = (UClass *)DAT_11d7e04c;
    pcVar12 = *(code **)(*(int *)pFVar14 + 0x44);
  }
  uStack_1f0 = 0x1075371e;
  (*pcVar12)();
LAB_1075371e:
  local_20 = 0;
  do {
    pFVar2 = param_5;
    if (*(int *)(this + 0x1e8) <= local_20) {
      if (*(int *)(*(int *)(param_2 + 4) + 0x114) != 0) {
        FLineBatcher::FLineBatcher(local_104,param_5,1);
        local_5c = CONCAT31(local_5c._1_3_,5);
        piVar9 = param_1 + 0x23;
        piVar15 = local_84;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar15 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar15 = piVar15 + 1;
        }
        iVar10 = *(int *)pFVar2;
        pcVar12 = Identity_exref;
        piVar9 = aiStackY_21c;
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          *piVar9 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          piVar9 = piVar9 + 1;
        }
        uStackY_220 = 0;
        uStackY_224 = 0x107538e7;
        (**(code **)(iVar10 + 0x40))();
        uStackY_224 = 0xff485aff;
        piVar9 = local_84;
        piVar15 = aiStackY_240;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar15 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar15 = piVar15 + 1;
        }
        FLineBatcher::DrawBox(local_104);
        local_5c = CONCAT31(local_5c._1_3_,4);
        FLineBatcher::~FLineBatcher(local_104);
      }
      local_5c._0_1_ = 3;
      thunk_FUN_10325f90();
      local_5c._0_1_ = 1;
      FRawIndexBuffer::~FRawIndexBuffer(local_a4);
      local_5c = (uint)local_5c._1_3_ << 8;
      FMatrix::~FMatrix(local_e4);
      ExceptionList = local_64;
      return;
    }
    puVar5 = (ushort *)(*(int *)(this + 0x1e4) + local_20 * 0x5c);
    if ((*(int *)(local_58 + local_20 * 4) != 0) &&
       (*(short *)(*(int *)(this + 0x1e4) + 0x10 + local_20 * 0x5c) != 0)) {
      piVar9 = (int *)(**(code **)(*(int *)this + 0x98))();
      param_3 = (FSphere *)(*(int *)(this + 0xd8) + (uint)*puVar5 * 8);
      pUStack_1ec = (UClass *)0x107537a3;
      param_3 = (FSphere *)(**(code **)(*piVar9 + 0x114))();
      pUStack_1ec = (UClass *)0x107537b1;
      iVar10 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
      if ((iVar10 == 0) && (local_28[0x1e] == 0)) {
        pUStackY_1f8 = (UClass *)(uint)*puVar5;
        pUStack_1ec = (UClass *)0x0;
        uStack_1f0 = 0;
        if (((int *)*param_1)[0xa7] <= (int)pUStackY_1f8) {
          pUStackY_1f8 = (UClass *)param_3;
          pcVar12 = *(code **)(*(int *)pFVar14 + 0x44);
          goto LAB_10753858;
        }
        param_3 = (FSphere *)(*(int *)pFVar14 + 0x44);
        uStackY_1fc = 0x107537e8;
        uStackY_1fc = (**(code **)(*(int *)*param_1 + 0xac))();
        uStackY_200 = 0x107537f2;
        (**(code **)param_3)();
      }
      else {
        if (DAT_11d7e044 == (undefined4 *)0x0) {
          pUStack_1ec = (UClass *)0x0;
          param_3 = (FSphere *)&uStack_1f0;
          pUStackY_1f8 = (UClass *)0x10753816;
          FName::FName((FName *)&uStack_1f0,0);
          pUStackY_1f8 = &UShader::PrivateStaticClass;
          uStackY_1fc = 0x10753822;
          DAT_11d7e044 = (undefined4 *)thunk_FUN_1053d370();
          pUStack_1ec = (UClass *)&DAT_11d7e044;
          uStack_1f0 = 0x1075383a;
          thunk_FUN_10530420();
          DAT_11d7e044[0x167] = DAT_11d7e044[0x167] | 2;
        }
        pUStackY_1f8 = (UClass *)DAT_11d7e044;
        pcVar12 = *(code **)(*(int *)pFVar14 + 0x44);
LAB_10753858:
        pUStack_1ec = (UClass *)0x0;
        uStack_1f0 = 0;
        uStackY_1fc = 0x1075385c;
        (*pcVar12)();
      }
      uStackY_200 = (uint)puVar5[3];
      uStackY_204 = (uint)puVar5[2];
      uStackY_208 = *(undefined4 *)(local_58 + local_20 * 4);
      aiStackY_21c[4] = puVar5[1] + local_1c;
      aiStackY_21c[3] = 0;
      aiStackY_21c[2] = 0x10753886;
      (**(code **)(*(int *)pFVar14 + 0xb4))();
    }
    local_20 = local_20 + 1;
  } while( true );
}


// ==== 10753959 Catch@10753959

void Catch_10753959(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 1075396d Catch@1075396d

void Catch_1075396d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::Render");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10753bf0 FUN_10753bf0

undefined4 FUN_10753bf0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  ushort *puVar4;
  ushort uStack_2a;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f9d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (in_ECX[0x2b] == 0) {
    ExceptionList = &local_10;
    iVar2 = (**(code **)(*in_ECX + 0x94))();
    in_ECX[0x2b] = iVar2;
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 0x10),0x20,0);
  FArray::Add((FArray *)(param_1 + 0x10),*(int *)(in_ECX[0x2b] + 0xd0),0x20);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(in_ECX[0x2b] + 0xd0) <= iVar2) break;
    iVar3 = iVar2 * 0x20 + *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(*(int *)(in_ECX[0x2b] + 0xcc) + 4 + iVar2 * 0xc)
    ;
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(*(int *)(in_ECX[0x2b] + 0xcc) + 8 + iVar2 * 0xc)
    ;
    iVar2 = iVar2 + 1;
  }
  puVar4 = (ushort *)0x0;
  if (*(int *)(in_ECX[0x2b] + 0x1e8) != 0) {
    thunk_FUN_103f7550(0);
  }
  iVar2 = 0;
  while( true ) {
    iVar3 = in_ECX[0x2b];
    if (*(int *)(iVar3 + 0xb8) <= iVar2) break;
    uVar1 = *(uint *)(*(int *)(iVar3 + 0xb4) + 4 + iVar2 * 8);
    if ((puVar4 == (ushort *)0x0) || (uVar1 >> 0x10 != (uint)*puVar4)) {
      iVar3 = thunk_FUN_10371880(0x5c,iVar3 + 0x1e4);
      if (iVar3 == 0) {
        puVar4 = (ushort *)0x0;
      }
      else {
        puVar4 = (ushort *)thunk_FUN_106d93e0();
      }
      puVar4[7] = (ushort)iVar2;
      uStack_2a = (ushort)(uVar1 >> 0x10);
      *puVar4 = uStack_2a;
      puVar4[2] = 0;
      puVar4[3] = (short)*(undefined4 *)(in_ECX[0x2b] + 0xd0) - 1;
      puVar4[8] = 0;
      puVar4[8] = 0;
    }
    puVar4[8] = puVar4[8] + 1;
    iVar2 = iVar2 + 1;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10753da3 Catch@10753da3

void Catch_10753da3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10753db7 Catch@10753db7

void Catch_10753db7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshInstance::RenderPreProcess");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10753e50 FUN_10753e50

void FUN_10753e50(FArchive *param_1)

{
  int iVar1;
  ULodMesh *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f9e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ULodMesh::Serialize(in_ECX,param_1);
  operator<<(param_1,(FAnimMeshVertexStream *)(in_ECX + 0x198));
  thunk_FUN_105dd9f0(param_1,in_ECX + 0x148);
  thunk_FUN_1038fda0(param_1,in_ECX + 0x160);
  thunk_FUN_106e6990(param_1,in_ECX + 0x16c);
  thunk_FUN_103aca10(param_1,in_ECX + 0x154);
  thunk_FUN_10330040(param_1,in_ECX + 400);
  thunk_FUN_10330040(param_1,in_ECX + 0x194);
  thunk_FUN_105eb280(param_1,in_ECX + 0x178);
  thunk_FUN_107524a0(param_1,in_ECX + 0x184);
  iVar1 = FArchive::IsPersistent(param_1);
  if (iVar1 == 0) {
    thunk_FUN_106e5af0(param_1,in_ECX + 0x1c4);
    thunk_FUN_106e5af0(param_1,in_ECX + 0x1f0);
    thunk_FUN_106e5af0(param_1,in_ECX + 0x21c);
    thunk_FUN_106e5af0(param_1,in_ECX + 0x248);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10753f5e Catch@10753f5e

void Catch_10753f5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10753f72 Catch@10753f72

void Catch_10753f72(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMesh::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754000 FUN_10754000

void FUN_10754000(void)

{
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082f9f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::PostLoad(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10754045 Catch@10754045

void Catch_10754045(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10754059 Catch@10754059

void Catch_10754059(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107540a0 FUN_107540a0

void FUN_107540a0(void)

{
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fa00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)in_ECX + 0x6c))();
  UParticleEmitter::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 107540f0 Catch@107540f0

void Catch_107540f0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10754104 Catch@10754104

void Catch_10754104(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754150 FUN_10754150

void FUN_10754150(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fa10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x6c))();
  (**(code **)(*in_ECX + 0x68))(in_ECX[0x43]);
  ExceptionList = local_10;
  return;
}


// ==== 107541a9 Catch@107541a9

void Catch_107541a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107541bd Catch@107541bd

void Catch_107541bd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMeshEmitter::PostEditChange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754200 FUN_10754200

void FUN_10754200(void)

{
  return;
}


// ==== 10754240 Catch@10754240

void Catch_10754240(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10754254 Catch@10754254

void Catch_10754254(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UMeshEmitter::Spawned");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754290 FUN_10754290

void FUN_10754290(void)

{
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fa30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::Reset(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 107542d5 Catch@107542d5

void Catch_107542d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107542e9 Catch@107542e9

void Catch_107542e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::Reset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754330 FUN_10754330

void FUN_10754330(int param_1)

{
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fa40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x50c) != 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)in_ECX + 0x6c))();
    FArray::Add((FArray *)(in_ECX + 0x4e8),param_1,4);
    FArray::Add((FArray *)(in_ECX + 0x4f4),param_1,4);
  }
  UParticleEmitter::Initialize(in_ECX,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 107543b2 Catch@107543b2

void Catch_107543b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107543c6 Catch@107543c6

void Catch_107543c6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::Initialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754410 FUN_10754410

void FUN_10754410(void)

{
  int iVar1;
  UParticleEmitter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fa50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UParticleEmitter::CleanUp(in_ECX);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x4ec); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x4e8),4,0);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x4f8); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x4f4),4,0);
  thunk_FUN_10370020(0);
  thunk_FUN_10370070(0);
  ExceptionList = local_10;
  return;
}


// ==== 107544af Catch@107544af

void Catch_107544af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 107544c3 Catch@107544c3

void Catch_107544c3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::CleanUp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754520 FUN_10754520

int FUN_10754520(float param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  UParticleEmitter *in_ECX;
  int iVar4;
  FBox *pFVar5;
  undefined1 local_44 [36];
  int local_20;
  FBox *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fa60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = UParticleEmitter::UpdateParticles(in_ECX,param_1);
  if (*(int **)(in_ECX + 0x50c) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x50c) + 0x98))
                              (*(undefined4 *)(in_ECX + 0x420));
    if (piVar1 != (int *)0x0) {
      while( true ) {
        iVar2 = *(int *)(in_ECX + 0x43c);
        if (*(int *)(in_ECX + 0x48c) <= *(int *)(in_ECX + 0x43c)) {
          iVar2 = *(int *)(in_ECX + 0x48c);
        }
        local_18 = iVar4;
        if (iVar2 <= iVar4) break;
        piVar1[0x32] = *(int *)(*(int *)(in_ECX + 0x4e8) + iVar4 * 4);
        (**(code **)(*piVar1 + 0xa8))(param_1);
        *(int *)(*(int *)(in_ECX + 0x4e8) + iVar4 * 4) = piVar1[0x32];
        iVar4 = iVar4 + 1;
      }
      pFVar5 = (FBox *)(in_ECX + 0x444);
      local_1c = pFVar5;
      thunk_FUN_10535800(*(undefined4 *)(in_ECX + 0x514),*(undefined4 *)(in_ECX + 0x518),
                         *(undefined4 *)(in_ECX + 0x51c));
      puVar3 = (undefined4 *)FBox::ExpandBy(pFVar5,(float)local_44);
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pFVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        pFVar5 = pFVar5 + 4;
      }
      if (*(int *)(in_ECX + 0x420) != 0) {
        FVector::Size((FVector *)(*(int *)(in_ECX + 0x420) + 0x28c));
        pFVar5 = local_1c;
        puVar3 = (undefined4 *)FBox::ExpandBy(local_1c,(float)local_44);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pFVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          pFVar5 = pFVar5 + 4;
        }
      }
      ExceptionList = local_10;
      return local_20;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1075468c Catch@1075468c

void Catch_1075468c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 107546a0 Catch@107546a0

void Catch_107546a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::UpdateParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10754730 FUN_10754730

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int FUN_10754730(FDynamicActor *param_1,FLevelSceneNode *param_2,TList<FDynamicLight*> *param_3,
                FRenderInterface *param_4)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  UVertMeshInstance *this;
  ushort *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  FMatrix *pFVar10;
  UParticleEmitter *in_ECX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar11;
  undefined4 *puVar12;
  float fVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 auStack_1980 [4];
  undefined4 uStack_1970;
  undefined4 uStack_196c;
  undefined1 *puStack_1968;
  undefined4 uStack_1964;
  uint uStack_1960;
  uint uStack_195c;
  wchar_t *pwStack_1958;
  float *pfStack_1954;
  undefined4 uStack_1950;
  wchar_t *pwStack_194c;
  FMatrix *pFStack_1948;
  undefined4 uStack_1944;
  FMatrix *pFStack_1940;
  undefined4 auStack_193c [15];
  undefined4 uStack_1900;
  FMatrix *pFStack_18fc;
  undefined4 auStack_18f8 [15];
  undefined4 uStack_18bc;
  FMatrix *pFStack_18b8;
  undefined4 auStack_18b4 [15];
  undefined4 uStack_1878;
  FMatrix *pFStack_1874;
  undefined4 auStack_1870 [15];
  undefined4 uStack_1834;
  FMatrix *pFStack_1830;
  undefined4 auStack_182c [6];
  undefined4 uStack_1814;
  int *piStack_1810;
  undefined4 uStack_180c;
  undefined8 uStack_1800;
  undefined4 local_177c [32];
  undefined4 local_16fc [48];
  FMatrix local_163c [128];
  FMatrix local_15bc [64];
  undefined4 local_157c [16];
  undefined4 local_153c [16];
  FMatrix local_14fc [64];
  undefined4 local_14bc [48];
  FMatrix local_13fc [128];
  FMatrix local_137c [128];
  undefined4 local_12fc [48];
  FMatrix local_123c [64];
  FMatrix local_11fc [64];
  FMatrix local_11bc [64];
  undefined4 local_117c [16];
  FMatrix local_113c [128];
  undefined4 local_10bc [16];
  FMatrix local_107c [64];
  undefined4 local_103c [16];
  FMatrix local_ffc [64];
  undefined4 local_fbc [16];
  undefined4 local_f7c [32];
  undefined4 local_efc [32];
  undefined4 local_e7c [80];
  FMatrix local_d3c [128];
  FMatrix local_cbc [64];
  FMatrix local_c7c [64];
  FMatrix local_c3c [64];
  FMatrix local_bfc [64];
  undefined4 local_bbc [16];
  undefined4 local_b7c [16];
  undefined4 local_b3c [16];
  undefined4 local_afc [16];
  undefined4 local_abc [112];
  FMatrix local_8fc [128];
  undefined4 local_87c [32];
  undefined4 local_7fc [16];
  FMatrix local_7bc [64];
  undefined4 local_77c [16];
  FMatrix local_73c [64];
  FMatrix local_6fc [64];
  FMatrix local_6bc [64];
  FMatrix local_67c [64];
  FMatrix local_63c [64];
  FMatrix local_5fc [64];
  FMatrix local_5bc [64];
  FMatrix local_57c [64];
  FMatrix local_53c [64];
  FMatrix local_4fc [64];
  FMatrix local_4bc [64];
  FMatrix local_47c [64];
  FMatrix local_43c [64];
  FMatrix local_3fc [64];
  FMatrix local_3bc [64];
  FMatrix local_37c [64];
  FMatrix local_33c [64];
  FMatrix local_2fc [64];
  FMatrix local_2bc [64];
  FMatrix local_27c [64];
  FMatrix local_23c [64];
  FMatrix local_1fc [64];
  FMatrix local_1bc [64];
  FMatrix local_17c [64];
  FSphere local_13c [16];
  FMatrix local_12c [68];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 *local_c4;
  float local_c0;
  int *local_bc;
  float local_b8;
  int *local_b4;
  undefined1 *local_b0;
  float local_ac;
  undefined1 *local_a8;
  float local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  undefined1 *local_94;
  float local_90;
  int *local_8c;
  int local_84;
  int local_80;
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  uint local_70;
  undefined1 *local_6c;
  float local_68;
  int *local_64;
  undefined1 *local_60;
  float local_5c;
  int *local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_16;
  byte local_15;
  float local_14;
  undefined1 *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_74 = &LAB_1082fda5;
  local_78 = ExceptionList;
  local_80 = 0x10754758;
  local_7c = &stack0xffffe838;
  local_70 = 0;
  ExceptionList = &local_78;
  UParticleEmitter::RenderParticles(in_ECX,param_1,param_2,param_3,param_4);
  local_4c = 0;
  if (*(int *)(in_ECX + 0x50c) == 0) {
    ExceptionList = local_78;
    return 0;
  }
  local_50 = *(undefined4 *)param_1;
  if ((((byte)in_ECX[0x510] & 1) != 0) &&
     (iVar5 = UViewport::IsWire(*(UViewport **)(param_2 + 4)), iVar5 == 0)) {
    iVar5 = UViewport::IsLit(*(UViewport **)(param_2 + 4));
    local_8 = (int *)0x1;
    if (iVar5 != 0) goto LAB_107547df;
  }
  local_8 = (int *)0x0;
LAB_107547df:
  FSphere::FSphere(local_13c,(FVector *)(in_ECX + 0x444),2);
  iVar5 = *(int *)param_4;
  local_48 = &stack0xffffe828;
  FSphere::FSphere((FSphere *)&stack0xffffe828,local_13c);
  (**(code **)(iVar5 + 0x24))();
  if (local_8 != (int *)0x0) {
    *(uint *)(*(int *)(in_ECX + 0x420) + 0x2e4) =
         *(uint *)(*(int *)(in_ECX + 0x420) + 0x2e4) & 0xfffffffe;
    if (((*(byte *)(*(int *)(in_ECX + 0x420) + 0x13c) & 1) == 0) ||
       (*(int *)(*(int *)(*(int *)(param_2 + 0x1cc) + 0x74) + 0x6c) == 0)) {
      (**(code **)(*(int *)param_4 + 0x20))();
    }
    else {
      local_16 = 0;
      local_15 = 0;
      piVar7 = *(int **)(*(int *)(*(int *)(param_2 + 0x1cc) + 0x74) + 0x6c);
      local_28 = (float)*(double *)(piVar7 + 0x4d);
      uStack_1800._0_4_ = 0x107548a5;
      uStack_1800._4_4_ = local_28;
      (**(code **)(*piVar7 + 0xcc))();
      local_8 = (int *)CONCAT13(0xff,(uint3)CONCAT11(local_16 >> 1,local_15 >> 1) << 8);
      uStack_1800 = (double)CONCAT44(uStack_1800._4_4_,local_8);
      (**(code **)(*(int *)param_4 + 0x20))();
    }
    local_54 = 0;
    local_30 = 0;
    while (param_3 != (TList<FDynamicLight*> *)0x0) {
      if ((*(int *)GL2Shader_exref == 0) || (2 < local_30)) {
        uStack_1800 = (double)CONCAT44(local_54,0x1075493a);
        (**(code **)(*(int *)param_4 + 0x28))();
        local_54 = local_54 + 1;
        param_3 = *(TList<FDynamicLight*> **)(param_3 + 4);
      }
      else {
        uStack_1800 = (double)CONCAT44(local_30,0x1075491b);
        (**(code **)(*(int *)param_4 + 0x30))();
        local_30 = local_30 + 1;
        param_3 = *(TList<FDynamicLight*> **)(param_3 + 4);
      }
    }
  }
  local_c = 0;
  do {
    if (*(int *)(in_ECX + 0x43c) <= local_c) {
      ExceptionList = local_78;
      return local_4c;
    }
    this = (UVertMeshInstance *)(**(code **)(**(int **)(in_ECX + 0x50c) + 0x98))();
    if (this != (UVertMeshInstance *)0x0) {
      iVar5 = (**(code **)(*(int *)this + 0x94))();
      iVar11 = local_c * 0x2c;
      if (*(int *)((FAnimMeshVertexStream *)(*(int *)(in_ECX + 0x4d0) + iVar11) + 0x14) == 0) {
        UVertMeshInstance::RenderPreProcess
                  (this,(FAnimMeshVertexStream *)(*(int *)(in_ECX + 0x4d0) + iVar11));
      }
      iVar2 = iVar11 + *(int *)(in_ECX + 0x4d0);
      if (*(int *)(iVar2 + 0x14) == 0) {
        for (local_98 = 0; local_98 < *(int *)(iVar2 + 0x14); local_98 = local_98 + 1) {
        }
        FArray::Empty((FArray *)(iVar2 + 0x10),0x20,0);
        iVar11 = local_c * 0x2c;
        FArray::Add((FArray *)(iVar11 + 0x10 + *(int *)(in_ECX + 0x4d0)),*(int *)(iVar5 + 0xd0),0x20
                   );
        piVar7 = (int *)(iVar11 + 0x1c + *(int *)(in_ECX + 0x4d0));
        *piVar7 = *piVar7 + 1;
      }
      if (*(int *)(*(int *)(in_ECX + 0x50c) + 0x1e8) == 0) {
        ExceptionList = local_78;
        return 0;
      }
      iVar5 = *(int *)(*(int *)(in_ECX + 0x50c) + 0x68);
      *(undefined4 *)(this + 200) = *(undefined4 *)(*(int *)(in_ECX + 0x4e8) + local_c * 4);
      uStack_1800 = (double)CONCAT44(*(undefined4 *)(*(int *)(in_ECX + 0x4d0) + iVar11 + 0x10),
                                     param_2);
      local_84 = iVar5;
      (**(code **)(*(int *)this + 0x120))();
      *(undefined4 *)(*(int *)(in_ECX + 0x4e8) + local_c * 4) = *(undefined4 *)(this + 200);
      local_28 = *(float *)(in_ECX + 0x50c);
      uStack_180c = 0x10754a99;
      TArray<unsigned_short>::Empty
                ((TArray<unsigned_short> *)(*(int *)(in_ECX + 0x4dc) + 0xc + local_c * 0x1c),
                 *(int *)((int)local_28 + 0xb8) * 3);
      thunk_FUN_10368430();
      local_70 = CONCAT31(local_70._1_3_,1);
      local_44 = 0;
      fVar13 = local_28;
      while (iVar11 = local_c, local_44 < *(int *)((int)fVar13 + 0x1e8)) {
        sVar4 = 0;
        local_48 = *(undefined1 **)(*(int *)(in_ECX + 0x4dc) + local_c * 0x1c + 0x10);
        *(short *)(local_44 * 0x5c + 2 + *(int *)((int)fVar13 + 0x1e4)) = (short)local_48;
        local_8 = (int *)(uint)*(ushort *)(local_44 * 0x5c + 0xe + *(int *)((int)fVar13 + 0x1e4));
        for (local_2c = 0; iVar11 = local_44,
            local_2c <
            (int)(uint)*(ushort *)(local_44 * 0x5c + 0x10 + *(int *)((int)fVar13 + 0x1e4));
            local_2c = local_2c + 1) {
          iVar11 = local_2c + (int)local_8;
          uStack_180c = 0x10754b3a;
          puVar6 = TArray<unsigned_short>::operator()
                             ((TArray<unsigned_short> *)(*(int *)(in_ECX + 0x50c) + 0xa8),iVar11);
          if ((int)(uint)*puVar6 <= iVar5) {
            local_d8 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x50c) + 0xb4) + iVar11 * 8);
            local_d4 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x50c) + 0xb4) + 4 + iVar11 * 8);
            for (iVar11 = 0; local_9c = iVar11, iVar11 < 3; iVar11 = iVar11 + 1) {
              uVar3 = *(ushort *)((int)&local_d4 + iVar11 * -2);
              while( true ) {
                local_14 = (float)(uint)uVar3;
                if ((int)(uint)*(ushort *)
                                (*(int *)(*(int *)(in_ECX + 0x50c) + 0xcc) + (int)local_14 * 0xc) <
                    iVar5) break;
                uStack_180c = 0x10754b9c;
                puVar6 = TArray<unsigned_short>::operator()
                                   ((TArray<unsigned_short> *)(*(int *)(in_ECX + 0x50c) + 0xc0),
                                    (int)local_14);
                uVar3 = *puVar6;
              }
              uStack_180c = 0x10754bc7;
              local_ac = local_14;
              TArray<unsigned_short>::AddItem
                        ((TArray<unsigned_short> *)(*(int *)(in_ECX + 0x4dc) + 0xc + local_c * 0x1c)
                         ,(ushort *)&local_ac);
              fVar13 = local_28;
            }
            sVar4 = sVar4 + 1;
          }
        }
        *(short *)(local_44 * 0x5c + 0x10 + *(int *)((int)fVar13 + 0x1e4)) = sVar4;
        uStack_180c = 0x10754bff;
        thunk_FUN_104225e0();
        local_44 = iVar11 + 1;
      }
      if (*(int *)GL2Shader_exref == 0) {
        uStack_180c = 0;
        piStack_1810 = (int *)0x10754c49;
        uStack_180c = (**(code **)(*(int *)param_4 + 0xa8))();
        iVar11 = local_c;
      }
      else {
        uStack_180c = 0x10754c30;
        uStack_180c = (**(code **)(*(int *)param_4 + 0x68))();
      }
      piStack_1810 = (int *)(*(int *)(in_ECX + 0x4dc) + iVar11 * 0x1c);
      uStack_1814 = 0x10754c6c;
      local_48 = (undefined1 *)(**(code **)(*(int *)param_4 + 0xb0))();
      for (local_34 = 0; local_34 < *(int *)(*(int *)(in_ECX + 0x50c) + 0x1e8);
          local_34 = local_34 + 1) {
        local_80 = *(int *)((int)local_28 + 0x1e4) + local_34 * 0x5c;
        if ((*(int *)(local_d0 + local_34 * 4) != 0) &&
           (*(short *)(*(int *)(*(int *)(in_ECX + 0x50c) + 0x1e4) + 0x10 + local_34 * 0x5c) != 0)) {
          piVar7 = (int *)(**(code **)(**(int **)(in_ECX + 0x50c) + 0x98))();
          uStack_1800 = (double)CONCAT44(0x10754d03,(undefined4)uStack_1800);
          local_8 = (int *)(**(code **)(*piVar7 + 0x114))();
          puVar12 = (undefined4 *)(local_c * 0xe0 + *(int *)(in_ECX + 0x42c));
          uStack_1800 = (double)CONCAT44(0x10754d29,(undefined4)uStack_1800);
          iVar5 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
          if (iVar5 == 0) {
            if (((byte)in_ECX[0x510] & 1) == 0) {
              *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x578) =
                   (uint)(byte)in_ECX[0x344];
              if (*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x3c) + 0x5b8) == 7) {
                *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) = 0;
              }
              else {
                uStack_1800 = (double)CONCAT44(local_8,0x10754de9);
                uVar8 = thunk_FUN_105e70e0();
                *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x588) = uVar8;
              }
              *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x57c) = 0;
              *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x580) =
                   *(uint *)(in_ECX + 0x510) >> 1 & 1;
              *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x584) = 1;
              *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x598) =
                   *(uint *)(in_ECX + 0x1f8) & 1;
              *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x59c) =
                   *(undefined4 *)(in_ECX + 500);
              puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac);
              *puVar1 = *puVar1 ^ (*(uint *)(in_ECX + 0x1f8) >> 1 ^
                                  *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5ac)) & 1
              ;
              *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a0) =
                   *(uint *)(in_ECX + 0x1f8) >> 2 & 1;
              *(uint *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a4) =
                   *(uint *)(in_ECX + 0x1f8) >> 3 & 1;
              uStack_1800 = (double)CONCAT44(0x10754ee4,(undefined4)uStack_1800);
              iVar5 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
              *(int *)(*(int *)(*(int *)(in_ECX + 0x420) + 0x46c) + 0x5a8) = iVar5;
              uStack_1800 = (double)*(float *)(in_ECX + 0x4c8);
              (**(code **)(*(int *)param_4 + 0x78))();
              (**(code **)(*(int *)param_4 + 0x7c))();
              if (*(int *)GL2Shader_exref == 0) {
                uStack_180c = 0;
                piStack_1810 = *(int **)(*(int *)(in_ECX + 0x420) + 0x46c);
                uStack_1814 = 0x10754f6c;
                (**(code **)(*(int *)param_4 + 0x44))();
                uStack_1814 = 0x10754f78;
                (**(code **)(*(int *)param_4 + 0x80))();
              }
              else {
                (**(code **)(*(int *)param_4 + 0x54))();
                uStack_180c = 0x10754f3f;
                (**(code **)(*(int *)param_4 + 0x4c))();
                uStack_180c = 0x10754f4b;
                (**(code **)(*(int *)param_4 + 0x80))();
              }
            }
            else {
              if (DAT_11d7ecc4 == (int *)0x0) {
                local_10 = (undefined1 *)&uStack_1800;
                uStack_1800 = (double)(ulonglong)extraout_ECX;
                FName::FName((FName *)&uStack_1800,0);
                uStack_180c = 0x10754fa2;
                DAT_11d7ecc4 = (int *)thunk_FUN_105e7110();
                uStack_1800 = 1.034171926108547e-222;
                thunk_FUN_10530420();
              }
              uStack_1800 = (double)CONCAT44(0x10754fc5,(undefined4)uStack_1800);
              iVar5 = UViewport::IsWire(*(UViewport **)(param_2 + 4));
              if (iVar5 == 0) {
                if (((byte)in_ECX[0x510] & 4) == 0) {
                  uStack_1800 = (double)*(float *)(in_ECX + 0x4c8);
                  (**(code **)(*(int *)param_4 + 0x78))();
                  (**(code **)(*(int *)param_4 + 0x7c))();
                  piVar7 = local_8;
                  if (*(int *)GL2Shader_exref == 0) goto LAB_107550bc;
                  (**(code **)(*(int *)param_4 + 0x4c))();
                }
                else {
                  DAT_11d7ecc4[0x15e] = (int)local_8;
                  uStack_1800 = (double)*(float *)(in_ECX + 0x4c8);
                  (**(code **)(*(int *)param_4 + 0x78))();
                  (**(code **)(*(int *)param_4 + 0x7c))();
                  piVar7 = DAT_11d7ecc4;
                  if (*(int *)GL2Shader_exref == 0) {
LAB_107550bc:
                    uStack_180c = 0;
                    uStack_1814 = 0x107550cc;
                    piStack_1810 = piVar7;
                    (**(code **)(*(int *)param_4 + 0x44))();
                  }
                  else {
                    (**(code **)(*(int *)param_4 + 0x4c))();
                  }
                }
                (**(code **)(*(int *)param_4 + 0x80))();
              }
              else {
                if (DAT_11d7ecc0 == (UClass *)0x0) {
                  local_10 = (undefined1 *)&uStack_1800;
                  uStack_1800 = (double)(ulonglong)extraout_ECX_00;
                  FName::FName((FName *)&uStack_1800,0);
                  uStack_180c = 0x10754fee;
                  DAT_11d7ecc0 = (UClass *)thunk_FUN_1053d370();
                  uStack_1800 = 1.0341692878140227e-222;
                  thunk_FUN_10530420();
                  *(uint *)(DAT_11d7ecc0 + 0x59c) = *(uint *)(DAT_11d7ecc0 + 0x59c) | 2;
                }
                uStack_1800 = 0.0;
                uStack_180c = 0x10755027;
                (**(code **)(*(int *)param_4 + 0x44))();
              }
            }
          }
          else {
            if (DAT_11d7ecc8 == (UClass *)0x0) {
              local_10 = (undefined1 *)&uStack_1800;
              uStack_1800 = (double)(ulonglong)extraout_ECX;
              FName::FName((FName *)&uStack_1800,0);
              uStack_180c = 0x10754d52;
              DAT_11d7ecc8 = (UClass *)thunk_FUN_1053d370();
              uStack_1800 = 1.0341745644029921e-222;
              thunk_FUN_10530420();
              *(uint *)(DAT_11d7ecc8 + 0x59c) = *(uint *)(DAT_11d7ecc8 + 0x59c) | 2;
            }
            uStack_1800 = 0.0;
            uStack_180c = 0x10754d8b;
            (**(code **)(*(int *)param_4 + 0x44))();
          }
          if ((*(byte *)(puVar12 + 0x2f) & 1) != 0) {
            local_4c = local_4c + 1;
            local_70 = CONCAT31(local_70._1_3_,2);
            local_24 = *puVar12;
            local_20 = puVar12[1];
            local_1c = puVar12[2];
            uStack_1800 = (double)CONCAT44(0x1075510d,(undefined4)uStack_1800);
            FRotator::FRotator((FRotator *)&local_40,0,0,0);
            uVar14 = *(uint *)(in_ECX + 0x244) & 1;
            if (uVar14 != 0) {
              local_3c = FUN_107a6660();
              local_40 = FUN_107a6660();
              local_38 = FUN_107a6660();
            }
            if (in_ECX[0x108] == (UParticleEmitter)0x1) {
              if (uVar14 == 0) {
                uStack_1800 = (double)CONCAT44(0x10755520,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x13;
                pFVar10 = local_3bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x1075555e,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x14;
                pFVar10 = local_5bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755592,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x15;
                pFVar10 = local_33c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x107555cb,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70._0_1_ = 0x16;
                pFVar10 = local_4bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_3bc;
                puVar9 = local_16fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x17;
                pFVar10 = local_5bc;
                puVar9 = local_b7c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,0x18);
                pFVar10 = local_33c;
                puVar9 = local_117c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x19;
                pFVar10 = local_4bc;
                puVar9 = local_afc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x1a;
                iVar5 = *(int *)(in_ECX + 0x420);
                local_6c = (undefined1 *)-*(float *)(iVar5 + 0x28c);
                local_68 = -*(float *)(iVar5 + 0x290);
                local_64 = (int *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x1075568f,(undefined4)uStack_1800);
                local_14 = local_68;
                local_10 = local_6c;
                local_8 = local_64;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x1b;
                puVar9 = local_afc;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_14fc;
                uStack_1834 = 0x107556b4;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x1c;
                puVar9 = local_117c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_c7c;
                uStack_1878 = 0x107556d9;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x1d;
                puVar9 = local_b7c;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_11fc;
                uStack_18bc = 0x107556fe;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x1e;
                puVar9 = local_16fc;
                puVar15 = auStack_18f8;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18fc = local_bfc;
                uStack_1900 = 0x10755723;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x1e;
                uStack_1944 = 0x10755746;
                FMatrix::~FMatrix(local_bfc);
                local_70._0_1_ = 0x1d;
                uStack_1944 = 0x10755756;
                FMatrix::~FMatrix(local_11fc);
                local_70._0_1_ = 0x1c;
                uStack_1944 = 0x10755766;
                FMatrix::~FMatrix(local_c7c);
                local_70._0_1_ = 0x1b;
                uStack_1944 = 0x10755776;
                FMatrix::~FMatrix(local_14fc);
                local_70._0_1_ = 0x1a;
                uStack_1944 = 0x10755785;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x19;
                uStack_1944 = 0x10755795;
                FMatrix::~FMatrix(local_4bc);
                local_70._0_1_ = 0x18;
                uStack_1944 = 0x107557a5;
                FMatrix::~FMatrix(local_33c);
                local_70._0_1_ = 0x17;
                uStack_1944 = 0x107557b5;
                FMatrix::~FMatrix(local_5bc);
                local_70._0_1_ = 0x16;
                uStack_1944 = 0x107557c5;
                FMatrix::~FMatrix(local_3bc);
                local_70._0_1_ = 0x15;
                uStack_1944 = 0x107557d4;
                thunk_FUN_10328560();
                local_70._0_1_ = 0x14;
                uStack_1944 = 0x107557e3;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x13;
                uStack_1944 = 0x107557f2;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
              else {
                uStack_1800 = (double)CONCAT44(0x10755195,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 3;
                pFVar10 = local_2bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x107551d3,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 4;
                pFVar10 = local_63c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755207,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 5;
                pFVar10 = local_23c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x1075523b,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 6;
                pFVar10 = local_17c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755274,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70 = CONCAT31(local_70._1_3_,7);
                pFVar10 = local_43c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_2bc;
                puVar9 = local_7fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,8);
                pFVar10 = local_63c;
                puVar9 = local_177c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 9;
                pFVar10 = local_23c;
                puVar9 = local_77c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 10;
                pFVar10 = local_17c;
                puVar9 = local_f7c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0xb;
                pFVar10 = local_43c;
                puVar9 = local_87c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0xc;
                iVar5 = *(int *)(in_ECX + 0x420);
                local_b8 = -*(float *)(iVar5 + 0x28c);
                local_b4 = (int *)-*(float *)(iVar5 + 0x290);
                local_b0 = (undefined1 *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x1075534f,(undefined4)uStack_1800);
                local_14 = local_b8;
                local_10 = local_b0;
                local_8 = local_b4;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0xd;
                puVar9 = local_87c;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_107c;
                uStack_1834 = 0x10755374;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0xe;
                puVar9 = local_f7c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_8fc;
                uStack_1878 = 0x10755399;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0xf;
                puVar9 = local_77c;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_13fc;
                uStack_18bc = 0x107553be;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x10;
                puVar9 = local_177c;
                puVar15 = auStack_18f8;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18fc = local_6bc;
                uStack_1900 = 0x107553e3;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x11;
                puVar9 = local_7fc;
                puVar15 = auStack_193c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1940 = local_ffc;
                uStack_1944 = 0x10755408;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x11;
                uStack_1944 = 0x1075542b;
                FMatrix::~FMatrix(local_ffc);
                local_70._0_1_ = 0x10;
                uStack_1944 = 0x1075543b;
                FMatrix::~FMatrix(local_6bc);
                local_70._0_1_ = 0xf;
                uStack_1944 = 0x1075544b;
                FMatrix::~FMatrix(local_13fc);
                local_70._0_1_ = 0xe;
                uStack_1944 = 0x1075545b;
                FMatrix::~FMatrix(local_8fc);
                local_70._0_1_ = 0xd;
                uStack_1944 = 0x1075546b;
                FMatrix::~FMatrix(local_107c);
                local_70._0_1_ = 0xc;
                uStack_1944 = 0x1075547a;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0xb;
                uStack_1944 = 0x1075548a;
                FMatrix::~FMatrix(local_43c);
                local_70._0_1_ = 10;
                uStack_1944 = 0x1075549a;
                FMatrix::~FMatrix(local_17c);
                local_70._0_1_ = 9;
                uStack_1944 = 0x107554aa;
                FMatrix::~FMatrix(local_23c);
                local_70._0_1_ = 8;
                uStack_1944 = 0x107554ba;
                FMatrix::~FMatrix(local_63c);
                local_70._0_1_ = 7;
                uStack_1944 = 0x107554ca;
                FMatrix::~FMatrix(local_2bc);
                local_70._0_1_ = 6;
                uStack_1944 = 0x107554d9;
                thunk_FUN_10328560();
                local_70._0_1_ = 5;
                uStack_1944 = 0x107554e8;
                thunk_FUN_10526040();
                local_70._0_1_ = 4;
                uStack_1944 = 0x107554f7;
                thunk_FUN_103284c0();
                local_70._0_1_ = 3;
                uStack_1944 = 0x10755506;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
            }
            else if (in_ECX[0x108] == (UParticleEmitter)0x4) {
              if (uVar14 == 0) {
                uStack_1800 = (double)CONCAT44(0x10755b18,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x2d;
                pFVar10 = local_3fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755b53,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x2e;
                pFVar10 = local_37c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755b8c,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70 = CONCAT31(local_70._1_3_,0x2f);
                pFVar10 = local_2fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_3fc;
                puVar9 = local_bbc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x30;
                pFVar10 = local_37c;
                puVar9 = local_b3c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x31;
                pFVar10 = local_2fc;
                puVar9 = local_abc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x32;
                iVar5 = *(int *)(in_ECX + 0x420);
                local_94 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
                local_90 = -*(float *)(iVar5 + 0x290);
                local_8c = (int *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x10755c39,(undefined4)uStack_1800);
                local_14 = local_90;
                local_10 = local_94;
                local_8 = local_8c;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x33;
                puVar9 = local_abc;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_d3c;
                uStack_1834 = 0x10755c5e;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x34;
                puVar9 = local_b3c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_cbc;
                uStack_1878 = 0x10755c83;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x35;
                puVar9 = local_bbc;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_c3c;
                uStack_18bc = 0x10755ca8;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x35;
                uStack_1944 = 0x10755ccb;
                FMatrix::~FMatrix(local_c3c);
                local_70._0_1_ = 0x34;
                uStack_1944 = 0x10755cdb;
                FMatrix::~FMatrix(local_cbc);
                local_70._0_1_ = 0x33;
                uStack_1944 = 0x10755ceb;
                FMatrix::~FMatrix(local_d3c);
                local_70._0_1_ = 0x32;
                uStack_1944 = 0x10755cfa;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x31;
                uStack_1944 = 0x10755d0a;
                FMatrix::~FMatrix(local_2fc);
                local_70._0_1_ = 0x30;
                uStack_1944 = 0x10755d1a;
                FMatrix::~FMatrix(local_37c);
                local_70._0_1_ = 0x2f;
                uStack_1944 = 0x10755d2a;
                FMatrix::~FMatrix(local_3fc);
                local_70._0_1_ = 0x2e;
                uStack_1944 = 0x10755d39;
                thunk_FUN_10328560();
                local_70._0_1_ = 0x2d;
                uStack_1944 = 0x10755d48;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
              else {
                uStack_1800 = (double)CONCAT44(0x1075582f,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x20;
                pFVar10 = local_27c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x10755863,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x21;
                pFVar10 = local_1fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x1075589e,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_105263f0();
                local_70._0_1_ = 0x22;
                pFVar10 = local_1bc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                uStack_1800 = (double)CONCAT44(0x107558d7,(undefined4)uStack_1800);
                puVar9 = (undefined4 *)thunk_FUN_103274a0();
                local_70 = CONCAT31(local_70._1_3_,0x23);
                pFVar10 = local_53c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                pFVar10 = local_27c;
                puVar9 = local_efc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,0x24);
                pFVar10 = local_1fc;
                puVar9 = local_157c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x25;
                pFVar10 = local_1bc;
                puVar9 = local_e7c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70 = CONCAT31(local_70._1_3_,0x26);
                pFVar10 = local_53c;
                puVar9 = local_12fc;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *(undefined4 *)pFVar10;
                  pFVar10 = pFVar10 + 4;
                  puVar9 = puVar9 + 1;
                }
                local_70._0_1_ = 0x27;
                iVar5 = *(int *)(in_ECX + 0x420);
                local_60 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
                local_5c = -*(float *)(iVar5 + 0x290);
                local_58 = (int *)-*(float *)(iVar5 + 0x294);
                uStack_1800 = (double)CONCAT44(0x1075599b,(undefined4)uStack_1800);
                local_14 = local_5c;
                local_10 = local_60;
                local_8 = local_58;
                pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
                local_70._0_1_ = 0x28;
                puVar9 = local_12fc;
                puVar15 = auStack_182c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1830 = local_7bc;
                uStack_1834 = 0x107559c0;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x29;
                puVar9 = local_e7c;
                puVar15 = auStack_1870;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_1874 = local_73c;
                uStack_1878 = 0x107559e5;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x2a;
                puVar9 = local_157c;
                puVar15 = auStack_18b4;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18b8 = local_6fc;
                uStack_18bc = 0x10755a0a;
                pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
                local_70._0_1_ = 0x2b;
                puVar9 = local_efc;
                puVar15 = auStack_18f8;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar15 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar15 = puVar15 + 1;
                }
                pFStack_18fc = local_137c;
                uStack_1900 = 0x10755a2f;
                puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
                local_70 = (uint)local_70._1_3_ << 8;
                pFVar10 = local_12c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pFVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  pFVar10 = pFVar10 + 4;
                }
                local_70._0_1_ = 0x2b;
                uStack_1944 = 0x10755a52;
                FMatrix::~FMatrix(local_137c);
                local_70._0_1_ = 0x2a;
                uStack_1944 = 0x10755a62;
                FMatrix::~FMatrix(local_6fc);
                local_70._0_1_ = 0x29;
                uStack_1944 = 0x10755a72;
                FMatrix::~FMatrix(local_73c);
                local_70._0_1_ = 0x28;
                uStack_1944 = 0x10755a82;
                FMatrix::~FMatrix(local_7bc);
                local_70._0_1_ = 0x27;
                uStack_1944 = 0x10755a91;
                thunk_FUN_103284c0();
                local_70._0_1_ = 0x26;
                uStack_1944 = 0x10755aa1;
                FMatrix::~FMatrix(local_53c);
                local_70._0_1_ = 0x25;
                uStack_1944 = 0x10755ab1;
                FMatrix::~FMatrix(local_1bc);
                local_70._0_1_ = 0x24;
                uStack_1944 = 0x10755ac1;
                FMatrix::~FMatrix(local_1fc);
                local_70._0_1_ = 0x23;
                uStack_1944 = 0x10755ad1;
                FMatrix::~FMatrix(local_27c);
                local_70._0_1_ = 0x22;
                uStack_1944 = 0x10755ae0;
                thunk_FUN_10328560();
                local_70._0_1_ = 0x21;
                uStack_1944 = 0x10755aef;
                thunk_FUN_10526040();
                local_70._0_1_ = 0x20;
                uStack_1944 = 0x10755afe;
                thunk_FUN_10526040();
                local_70 = CONCAT31(local_70._1_3_,2);
              }
            }
            else if (uVar14 == 0) {
              uStack_1800 = (double)CONCAT44(0x10755fbe,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x41;
              pFVar10 = local_67c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              uStack_1800 = (double)CONCAT44(0x10755ff7,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_103274a0();
              local_70._0_1_ = 0x42;
              pFVar10 = local_5fc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              pFVar10 = local_67c;
              puVar9 = local_153c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70 = CONCAT31(local_70._1_3_,0x43);
              pFVar10 = local_5fc;
              puVar9 = local_14bc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x44;
              iVar5 = *(int *)(in_ECX + 0x420);
              local_a8 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
              local_a4 = -*(float *)(iVar5 + 0x290);
              local_a0 = (int *)-*(float *)(iVar5 + 0x294);
              uStack_1800 = (double)CONCAT44(0x1075608d,(undefined4)uStack_1800);
              local_14 = local_a4;
              local_10 = local_a8;
              local_8 = local_a0;
              pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x45;
              puVar9 = local_14bc;
              puVar15 = auStack_182c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1830 = local_163c;
              uStack_1834 = 0x107560b2;
              pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
              local_70._0_1_ = 0x46;
              puVar9 = local_153c;
              puVar15 = auStack_1870;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1874 = local_15bc;
              uStack_1878 = 0x107560d7;
              puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
              local_70 = (uint)local_70._1_3_ << 8;
              pFVar10 = local_12c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              local_70._0_1_ = 0x46;
              uStack_1944 = 0x107560fa;
              FMatrix::~FMatrix(local_15bc);
              local_70._0_1_ = 0x45;
              uStack_1944 = 0x1075610a;
              FMatrix::~FMatrix(local_163c);
              local_70._0_1_ = 0x44;
              uStack_1944 = 0x10756119;
              thunk_FUN_103284c0();
              local_70._0_1_ = 0x43;
              uStack_1944 = 0x10756129;
              FMatrix::~FMatrix(local_5fc);
              local_70._0_1_ = 0x42;
              uStack_1944 = 0x10756139;
              FMatrix::~FMatrix(local_67c);
              local_70._0_1_ = 0x41;
              uStack_1944 = 0x10756148;
              thunk_FUN_10328560();
              local_70 = CONCAT31(local_70._1_3_,2);
            }
            else {
              uStack_1800 = (double)CONCAT44(0x10755d7b,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x37;
              pFVar10 = local_57c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              uStack_1800 = (double)CONCAT44(0x10755daf,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_105263f0();
              local_70._0_1_ = 0x38;
              pFVar10 = local_4fc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              uStack_1800 = (double)CONCAT44(0x10755de8,(undefined4)uStack_1800);
              puVar9 = (undefined4 *)thunk_FUN_103274a0();
              local_70._0_1_ = 0x39;
              pFVar10 = local_47c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              pFVar10 = local_57c;
              puVar9 = local_10bc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x3a;
              pFVar10 = local_4fc;
              puVar9 = local_103c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x3b;
              pFVar10 = local_47c;
              puVar9 = local_fbc;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              local_70._0_1_ = 0x3c;
              iVar5 = *(int *)(in_ECX + 0x420);
              local_c4 = (undefined1 *)-*(float *)(iVar5 + 0x28c);
              local_c0 = -*(float *)(iVar5 + 0x290);
              local_bc = (int *)-*(float *)(iVar5 + 0x294);
              uStack_1800 = (double)CONCAT44(0x10755e95,(undefined4)uStack_1800);
              local_14 = local_c0;
              local_10 = local_c4;
              local_8 = local_bc;
              pFVar10 = (FMatrix *)thunk_FUN_10326fb0();
              local_70._0_1_ = 0x3d;
              puVar9 = local_fbc;
              puVar15 = auStack_182c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1830 = local_123c;
              uStack_1834 = 0x10755eba;
              pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
              local_70._0_1_ = 0x3e;
              puVar9 = local_103c;
              puVar15 = auStack_1870;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_1874 = local_11bc;
              uStack_1878 = 0x10755edf;
              pFVar10 = (FMatrix *)FMatrix::operator*(pFVar10);
              local_70._0_1_ = 0x3f;
              puVar9 = local_10bc;
              puVar15 = auStack_18b4;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              }
              pFStack_18b8 = local_113c;
              uStack_18bc = 0x10755f04;
              puVar9 = (undefined4 *)FMatrix::operator*(pFVar10);
              local_70 = (uint)local_70._1_3_ << 8;
              pFVar10 = local_12c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined4 *)pFVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                pFVar10 = pFVar10 + 4;
              }
              local_70._0_1_ = 0x3f;
              uStack_1944 = 0x10755f27;
              FMatrix::~FMatrix(local_113c);
              local_70._0_1_ = 0x3e;
              uStack_1944 = 0x10755f37;
              FMatrix::~FMatrix(local_11bc);
              local_70._0_1_ = 0x3d;
              uStack_1944 = 0x10755f47;
              FMatrix::~FMatrix(local_123c);
              local_70._0_1_ = 0x3c;
              uStack_1944 = 0x10755f56;
              thunk_FUN_103284c0();
              local_70._0_1_ = 0x3b;
              uStack_1944 = 0x10755f66;
              FMatrix::~FMatrix(local_47c);
              local_70._0_1_ = 0x3a;
              uStack_1944 = 0x10755f76;
              FMatrix::~FMatrix(local_4fc);
              local_70._0_1_ = 0x39;
              uStack_1944 = 0x10755f86;
              FMatrix::~FMatrix(local_57c);
              local_70._0_1_ = 0x38;
              uStack_1944 = 0x10755f95;
              thunk_FUN_10328560();
              local_70._0_1_ = 0x37;
              uStack_1944 = 0x10755fa4;
              thunk_FUN_10526040();
              local_70 = CONCAT31(local_70._1_3_,2);
            }
            uStack_1944 = 0x10756157;
            thunk_FUN_103284c0();
            if (*(int *)GL2Shader_exref == 0) {
              iVar5 = *(int *)param_4;
              pFVar10 = local_12c;
              puVar9 = auStack_1980;
              for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar9 = *(undefined4 *)pFVar10;
                pFVar10 = pFVar10 + 4;
                puVar9 = puVar9 + 1;
              }
              (**(code **)(iVar5 + 0x40))(0);
              (**(code **)(*(int *)param_4 + 0x3c))(puVar12[0x2a]);
            }
            else {
              uStack_1944 = 4;
              pFStack_1948 = local_12c;
              pwStack_194c = L"world_mat";
              uStack_1950 = 0x10756180;
              (**(code **)(*(int *)param_4 + 0x6c))();
              local_e8 = (float)*(byte *)((int)puVar12 + 0xaa) / 255.0;
              local_e4 = (float)*(byte *)((int)puVar12 + 0xa9) / 255.0;
              local_e0 = (float)*(byte *)(puVar12 + 0x2a) / 255.0;
              local_dc = (float)*(byte *)((int)puVar12 + 0xab) / 255.0;
              uStack_1950 = 1;
              pfStack_1954 = &local_e8;
              pwStack_1958 = L"tFactor";
              uStack_195c = 0x107561e7;
              (**(code **)(*(int *)param_4 + 0x70))();
            }
            uStack_195c = (uint)*(ushort *)(local_80 + 6);
            uStack_1960 = (uint)*(ushort *)(local_80 + 4);
            uStack_1964 = *(undefined4 *)(local_d0 + local_34 * 4);
            puStack_1968 = local_48 + *(ushort *)(local_80 + 2);
            uStack_196c = 0;
            uStack_1970 = 0x1075624d;
            (**(code **)(*(int *)param_4 + 0xb4))();
            local_70 = CONCAT31(local_70._1_3_,1);
            FMatrix::~FMatrix(local_12c);
          }
        }
      }
      local_70 = local_70 & 0xffffff00;
      thunk_FUN_10325f90();
    }
    local_c = local_c + 1;
  } while( true );
}


// ==== 10756289 Catch@10756289

void Catch_10756289(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1075629d Catch@1075629d

void Catch_1075629d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::RenderParticles");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107569a0 FUN_107569a0

undefined4 FUN_107569a0(int param_1,float param_2,int param_3,int param_4,FVector *param_5)

{
  int iVar1;
  FAnimMeshVertexStream *this;
  FRawIndexBuffer *this_00;
  int *piVar2;
  undefined4 *puVar3;
  UParticleEmitter *in_ECX;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fe80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = UParticleEmitter::SpawnParticle(in_ECX,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  if (*(int *)(in_ECX + 0x50c) != 0) {
    if (*(int *)(in_ECX + 0x4d4) <= param_1) {
      this = (FAnimMeshVertexStream *)thunk_FUN_10371cd0(0x2c,in_ECX + 0x4d0);
      if (this != (FAnimMeshVertexStream *)0x0) {
        FAnimMeshVertexStream::FAnimMeshVertexStream(this);
      }
      this_00 = (FRawIndexBuffer *)thunk_FUN_10371cf0(0x1c,in_ECX + 0x4dc);
      if (this_00 != (FRawIndexBuffer *)0x0) {
        FRawIndexBuffer::FRawIndexBuffer(this_00);
      }
    }
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x50c) + 0x98))
                              (*(undefined4 *)(in_ECX + 0x420));
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      puVar4 = &param_5;
      puVar3 = (undefined4 *)UObject::GetFName(*(UObject **)(in_ECX + 0x50c));
      (**(code **)(iVar1 + 0xac))
                (0,*puVar3,*(undefined4 *)(*(int *)(in_ECX + 0x420) + 0x3f0),0,1,puVar4);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x4e8) + param_1 * 4) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x4f4) + param_1 * 4) = 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10756ad6 Catch@10756ad6

void Catch_10756ad6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10756aea Catch@10756aea

void Catch_10756aea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertMeshEmitter::SpawnParticle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10756b60 FUN_10756b60

void FUN_10756b60(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3fc) = 0;
  *(undefined4 *)(in_ECX + 0x3f8) = param_1;
  return;
}


// ==== 10756b80 FUN_10756b80

void FUN_10756b80(undefined4 param_1)

{
  FRotator *this;
  FArray *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FVector *this_01;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float *pfVar9;
  int in_ECX;
  float unaff_EBP;
  undefined1 *puVar10;
  undefined1 *puVar11;
  FRotator local_9c [12];
  FRotator local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [12];
  undefined1 local_74 [8];
  undefined1 local_6c [16];
  undefined1 local_5c [20];
  undefined1 local_48 [24];
  undefined1 local_30 [16];
  undefined1 local_20 [4];
  undefined1 local_1c [28];
  
  iVar5 = *(int *)(**(int **)(*(int *)(DAT_10c51044 + 0x54) + 0x38) + 0x3c);
  if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x3bc), iVar5 != 0)) {
    *(undefined4 *)(in_ECX + 1000) = param_1;
    switch(param_1) {
    case 1:
      *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(in_ECX + 0x1c8);
      *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(in_ECX + 0x1cc);
      puVar11 = local_30;
      *(undefined4 *)(in_ECX + 0x3d8) = *(undefined4 *)(in_ECX + 0x1d0);
      puVar10 = local_48;
      this_01 = (FVector *)FRotator::Vector((FRotator *)(in_ECX + 0x1c8));
      uVar6 = FVector::GetNormalized(this_01);
      pfVar9 = (float *)thunk_FUN_103301a0(local_80,0x43480000,uVar6,puVar10,puVar11);
      fVar1 = pfVar9[1];
      fVar2 = pfVar9[2];
      *(float *)(in_ECX + 0x3c4) = *(float *)(in_ECX + 0x1bc) - *pfVar9;
      puVar10 = local_20;
      *(float *)(in_ECX + 0x3c8) = *(float *)(in_ECX + 0x1c0) - fVar1;
      *(float *)(in_ECX + 0x3cc) = *(float *)(in_ECX + 0x1c4) - fVar2;
      uVar6 = FRotator::Vector((FRotator *)(iVar5 + 0x1c8));
      puVar7 = (undefined4 *)thunk_FUN_103301a0(local_6c,0x43480000,uVar6,puVar10);
      *(undefined4 *)(in_ECX + 0x1d4) = *puVar7;
      *(undefined4 *)(in_ECX + 0x1d8) = puVar7[1];
      *(undefined4 *)(in_ECX + 0x1dc) = puVar7[2];
      *(undefined4 *)(in_ECX + 0x1e0) = 0;
      *(undefined4 *)(in_ECX + 0x1e4) = 0;
      *(undefined4 *)(in_ECX + 0x1e8) = 0;
      return;
    case 2:
      uVar6 = FRotator::FRotator(local_9c,0,0x8000,0);
      puVar7 = (undefined4 *)FRotator::operator+((FRotator *)(iVar5 + 0x1c8),local_90);
      *(undefined4 *)(in_ECX + 0x3d0) = *puVar7;
      this = (FRotator *)(in_ECX + 0x3d0);
      *(undefined4 *)(in_ECX + 0x3d4) = puVar7[1];
      *(undefined4 *)(in_ECX + 0x3d8) = puVar7[2];
      *(undefined4 *)this = 0xffffeae8;
      fVar1 = *(float *)(*(int *)(iVar5 + 0x72c) + 0x1bc);
      fVar2 = *(float *)(*(int *)(iVar5 + 0x72c) + 0x1c0);
      puVar10 = local_88;
      uVar8 = FRotator::Vector(this);
      pfVar9 = (float *)thunk_FUN_103301a0(local_74,0x42c80000,uVar8,puVar10,uVar6);
      fVar3 = pfVar9[1];
      fVar4 = pfVar9[2];
      *(float *)(in_ECX + 0x3c4) = unaff_EBP - *pfVar9;
      *(float *)(in_ECX + 0x3c8) = (fVar1 + 0.0) - fVar3;
      puVar10 = local_5c;
      *(float *)(in_ECX + 0x3cc) = (fVar2 + 0.0) - fVar4;
      uVar6 = FRotator::Vector(this);
      pfVar9 = (float *)thunk_FUN_103301a0(local_48,0x42c80000,uVar6,puVar10);
      fVar1 = pfVar9[1];
      fVar2 = pfVar9[2];
      *(float *)(in_ECX + 0x1e0) = *pfVar9 - *(float *)(in_ECX + 0x1d4);
      this_00 = (FArray *)(in_ECX + 0x3dc);
      *(float *)(in_ECX + 0x1e4) = fVar1 - *(float *)(in_ECX + 0x1d8);
      *(float *)(in_ECX + 0x1e8) = fVar2 - *(float *)(in_ECX + 0x1dc);
      FArray::Empty(this_00,0xc,0);
      FArray::AddZeroed(this_00,0xc,3);
      puVar7 = *(undefined4 **)this_00;
      *puVar7 = *(undefined4 *)(in_ECX + 0x1bc);
      puVar7[1] = *(undefined4 *)(in_ECX + 0x1c0);
      puVar10 = local_30;
      puVar7[2] = *(undefined4 *)(in_ECX + 0x1c4);
      uVar6 = FRotator::Vector((FRotator *)(iVar5 + 0x1c8));
      pfVar9 = (float *)thunk_FUN_103301a0(local_1c,0x43480000,uVar6,puVar10);
      fVar1 = pfVar9[1];
      fVar2 = *(float *)(in_ECX + 0x1c0);
      fVar3 = pfVar9[2];
      iVar5 = *(int *)this_00;
      fVar4 = *(float *)(in_ECX + 0x1c4);
      *(float *)(iVar5 + 0xc) = *(float *)(in_ECX + 0x1bc) + *pfVar9;
      *(float *)(iVar5 + 0x10) = fVar1 + fVar2;
      *(float *)(iVar5 + 0x14) = fVar3 + fVar4;
      iVar5 = *(int *)this_00;
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(in_ECX + 0x3c4);
      *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(in_ECX + 0x3c8);
      *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(in_ECX + 0x3cc);
      return;
    case 3:
      *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(in_ECX + 0x1bc);
      *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(in_ECX + 0x1c0);
      *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(in_ECX + 0x1c4);
      return;
    case 4:
      *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(*(int *)(iVar5 + 0x72c) + 0x134);
      *(undefined4 *)(in_ECX + 0x3c0) = 0;
    }
  }
  return;
}


// ==== 10757070 FUN_10757070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10757070(float *param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  AViewportWindowController *in_ECX;
  undefined4 unaff_ESI;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float fVar7;
  float *unaff_retaddr;
  undefined1 *puVar8;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 local_3c [8];
  undefined1 local_34 [24];
  FRotator aFStack_1c [8];
  FRotator aFStack_14 [20];
  
  iVar5 = *(int *)(**(int **)(*(int *)(DAT_10c51044 + 0x54) + 0x38) + 0x3c);
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(iVar5 + 0x3bc) != 0) {
    switch(*(undefined4 *)(in_ECX + 1000)) {
    case 0:
    case 3:
      *param_1 = *(float *)(in_ECX + 0x1bc);
      param_1[1] = *(float *)(in_ECX + 0x1c0);
      param_1[2] = *(float *)(in_ECX + 0x1c4);
      *param_2 = *(undefined4 *)(in_ECX + 0x1c8);
      param_2[1] = *(undefined4 *)(in_ECX + 0x1cc);
      param_2[2] = *(undefined4 *)(in_ECX + 0x1d0);
      return;
    case 1:
      local_54 = *(float *)(in_ECX + 0x3c4) - *(float *)(in_ECX + 0x1bc);
      local_50 = *(float *)(in_ECX + 0x3c8) - *(float *)(in_ECX + 0x1c0);
      local_4c = *(float *)(in_ECX + 0x3cc) - *(float *)(in_ECX + 0x1c4);
      local_60 = (double)(param_3 * 400.0);
      fVar7 = FVector::Size((FVector *)&local_54);
      if ((float)local_60 <= fVar7) {
        puVar8 = local_3c;
        uVar4 = FVector::GetNormalized((FVector *)&local_54);
        pfVar6 = (float *)thunk_FUN_103301a0(local_34,(float)(double)CONCAT44((float)local_60,
                                                                              unaff_ESI),uVar4,
                                             puVar8);
        fVar7 = pfVar6[1];
        fVar1 = *(float *)(in_ECX + 0x1c0);
        fVar2 = pfVar6[2];
        fVar3 = *(float *)(in_ECX + 0x1c4);
        *unaff_retaddr = *(float *)(in_ECX + 0x1bc) + *pfVar6;
        unaff_retaddr[1] = fVar7 + fVar1;
        unaff_retaddr[2] = fVar2 + fVar3;
      }
      else {
        local_60._0_4_ = *(float *)(in_ECX + 0x1bc) + local_54;
        local_60._4_4_ = *(float *)(in_ECX + 0x1c0) + local_50;
        local_58 = *(float *)(in_ECX + 0x1c4);
        *param_1 = (float)local_60;
        local_58 = local_58 + local_4c;
        param_1[1] = local_60._4_4_;
        param_1[2] = local_58;
        AViewportWindowController::SetCalcStep(in_ECX,2);
        unaff_retaddr = param_1;
      }
      _DAT_11d7f304 = 0.0;
      *param_1 = *(float *)(in_ECX + 0x1c8);
      param_1[1] = *(float *)(in_ECX + 0x1cc);
      param_1[2] = *(float *)(in_ECX + 0x1d0);
      *(float *)(in_ECX + 0x1bc) = *unaff_retaddr;
      *(float *)(in_ECX + 0x1c0) = unaff_retaddr[1];
      *(float *)(in_ECX + 0x1c4) = unaff_retaddr[2];
      return;
    case 2:
      goto switchD_107570ac_caseD_2;
    case 4:
      if (*(int *)(in_ECX + 0x3bc) == 0) {
        *param_2 = *(undefined4 *)(in_ECX + 0x1c8);
        param_2[1] = *(undefined4 *)(in_ECX + 0x1cc);
        param_2[2] = *(undefined4 *)(in_ECX + 0x1d0);
      }
      else {
        FRotator::FRotator((FRotator *)&local_60);
        iVar5 = (**(code **)(**(int **)(in_ECX + 0x3bc) + 0x150))
                          (*(undefined4 *)(in_ECX + 0x3c0),&local_54);
        if (iVar5 == 0) {
          *param_2 = *(undefined4 *)(in_ECX + 0x1c8);
          param_2[1] = *(undefined4 *)(in_ECX + 0x1cc);
          param_2[2] = *(undefined4 *)(in_ECX + 0x1d0);
        }
        else {
          fStack_48 = local_54 - *(float *)(in_ECX + 0x1bc);
          fStack_44 = local_50 - *(float *)(in_ECX + 0x1c0);
          fStack_40 = local_4c - *(float *)(in_ECX + 0x1c4);
          iVar5 = FVector::Rotation((FVector *)&fStack_48);
          local_60._0_4_ = *(float *)(iVar5 + 4);
          local_60._4_4_ = *(float *)(iVar5 + 8);
          iVar5 = FRotator::operator-((FRotator *)&stack0xffffff9c,aFStack_1c);
          local_60._0_4_ = *(float *)(iVar5 + 8);
          fVar7 = unaff_retaddr[1];
          while (0x8000 < (int)fVar7) {
            unaff_retaddr[1] = (float)((int)unaff_retaddr[1] + -0x10000);
            fVar7 = unaff_retaddr[1];
          }
          fVar7 = unaff_retaddr[1];
          while ((int)fVar7 < -0x7fff) {
            unaff_retaddr[1] = (float)((int)unaff_retaddr[1] + 0x10000);
            fVar7 = unaff_retaddr[1];
          }
          pfVar6 = (float *)FRotator::operator+((FRotator *)(in_ECX + 0x1c8),aFStack_14);
          *unaff_retaddr = *pfVar6;
          unaff_retaddr[1] = pfVar6[1];
          unaff_retaddr[2] = pfVar6[2];
        }
      }
      *param_1 = *(float *)(in_ECX + 0x1bc);
      param_1[1] = *(float *)(in_ECX + 0x1c0);
      param_1[2] = *(float *)(in_ECX + 0x1c4);
    default:
      return;
    }
  }
  return;
switchD_107570ac_caseD_2:
  _DAT_11d7f304 = param_3 + _DAT_11d7f304;
  if (_DAT_11d7f304 <= 2.0) {
    if (_DAT_11d7f304 < 1.0) {
      fVar7 = 0.5 - (_DAT_11d7f304 - 1.0) * 0.5 * (_DAT_11d7f304 - 1.0);
      goto LAB_1075729f;
    }
  }
  else {
    _DAT_11d7f304 = 2.0;
  }
  fVar7 = (_DAT_11d7f304 - 1.0) * 0.5 * (_DAT_11d7f304 - 1.0) + 0.5;
LAB_1075729f:
  pfVar6 = *(float **)(in_ECX + 0x3dc);
  fVar1 = 1.0 - fVar7;
  fVar2 = fVar1 * fVar1;
  fVar1 = (fVar7 + fVar7) * fVar1;
  fVar7 = fVar7 * fVar7;
  *param_1 = pfVar6[6] * fVar7 + *pfVar6 * fVar2 + pfVar6[3] * fVar1;
  iVar5 = *(int *)(in_ECX + 0x3dc);
  param_1[1] = *(float *)(iVar5 + 0x1c) * fVar7 +
               *(float *)(iVar5 + 0x10) * fVar1 + *(float *)(iVar5 + 4) * fVar2;
  iVar5 = *(int *)(in_ECX + 0x3dc);
  param_1[2] = fVar7 * *(float *)(iVar5 + 0x20) +
               fVar2 * *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x14) * fVar1;
  *param_2 = *(undefined4 *)(in_ECX + 0x1c8);
  param_2[1] = *(undefined4 *)(in_ECX + 0x1cc);
  param_2[2] = *(undefined4 *)(in_ECX + 0x1d0);
  uVar4 = FUN_107a6660();
  *param_2 = uVar4;
  if (((extraout_ST0 == extraout_ST1) &&
      (iVar5 = *(int *)(**(int **)(*(int *)(DAT_10c51044 + 0x54) + 0x38) + 0x3c), iVar5 != 0)) &&
     (*(int *)(iVar5 + 0x3bc) != 0)) {
    *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(in_ECX + 0x1bc);
    *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(in_ECX + 0x1c0);
    *(undefined4 *)(in_ECX + 1000) = 3;
    *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(in_ECX + 0x1c4);
  }
  *(undefined4 *)(in_ECX + 0x1c8) = *param_2;
  *(undefined4 *)(in_ECX + 0x1cc) = param_2[1];
  *(undefined4 *)(in_ECX + 0x1d0) = param_2[2];
  *(float *)(in_ECX + 0x1bc) = *param_1;
  *(float *)(in_ECX + 0x1c0) = param_1[1];
  *(float *)(in_ECX + 0x1c4) = param_1[2];
  return;
}


// ==== 107576c0 FUN_107576c0

undefined4 FUN_107576c0(float param_1)

{
  AViewportWindowController *in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FRotator::FRotator((FRotator *)&local_18);
  AViewportWindowController::CalcView(in_ECX,(FVector *)&local_c,(FRotator *)&local_18,param_1);
  UCanvas::ModifyViewportWindowParam
            (*(UCanvas **)(**(int **)(*(int *)(DAT_10c51044 + 0x54) + 0x38) + 0x74),0,0,local_c,
             local_8,local_4,local_18,local_14,local_10,0);
  return 1;
}


// ==== 10757770 FUN_10757770

UObject * FUN_10757770(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&ADecoVolumeObject::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 107577a0 FUN_107577a0

void FUN_107577a0(void)

{
  float *pfVar1;
  FRange *pFVar2;
  undefined4 *puVar3;
  AActor *this;
  uint uVar4;
  AActor *in_ECX;
  int iVar5;
  float fVar6;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  FMatrix local_fc [64];
  float local_bc;
  FRange local_b4 [8];
  float local_ac;
  FRange local_a4 [12];
  float local_98;
  float local_94;
  float local_90;
  undefined1 *local_8c;
  void *local_88;
  undefined1 *puStack_84;
  uint local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58 [2];
  undefined4 *local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  undefined1 *local_10;
  int local_c;
  int local_8;
  
  puStack_84 = &LAB_1082feab;
  local_88 = ExceptionList;
  local_8c = &stack0xfffffee8;
  iVar5 = 0;
  local_80 = 0;
  ExceptionList = &local_88;
  AActor::PostBeginPlay(in_ECX);
  if (*(int *)(in_ECX + 0x430) == 0) {
    ExceptionList = local_88;
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x278) + 0x70))();
  pfVar1 = (float *)(**(code **)(*(int *)in_ECX + 0x148))();
  local_bc = local_44;
  local_70 = *pfVar1 * local_44 + local_40 * pfVar1[4] + local_3c * pfVar1[8] + pfVar1[0xc];
  local_6c = pfVar1[9] * local_3c + pfVar1[1] * local_44 + pfVar1[5] * local_40 + pfVar1[0xd];
  local_68 = local_3c * pfVar1[10] + local_40 * pfVar1[6] + pfVar1[2] * local_44 + pfVar1[0xe];
  local_80 = local_80 & 0xffffff00;
  local_44 = local_70;
  local_40 = local_6c;
  local_3c = local_68;
  FMatrix::~FMatrix(local_fc);
  pfVar1 = (float *)(**(code **)(*(int *)in_ECX + 0x148))();
  local_ac = local_38;
  local_60 = *pfVar1 * local_38 + local_34 * pfVar1[4] + local_30 * pfVar1[8] + pfVar1[0xc];
  local_5c = pfVar1[9] * local_30 + pfVar1[1] * local_38 + pfVar1[5] * local_34 + pfVar1[0xd];
  local_58[0] = local_30 * pfVar1[10] + local_34 * pfVar1[6] + pfVar1[2] * local_38 + pfVar1[0xe];
  local_80 = local_80 & 0xffffff00;
  local_38 = local_60;
  local_34 = local_5c;
  local_30 = local_58[0];
  FMatrix::~FMatrix(local_fc);
  FBox::GetExtent((FBox *)&local_44);
  do {
    if (*(int *)(*(int *)(in_ECX + 0x430) + 0x3c0) <= iVar5) {
      ExceptionList = local_88;
      return;
    }
    local_50 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x430) + 0x3bc) + iVar5 * 0x24);
    local_c = iVar5;
    FRange::GetRand((FRange *)(local_50 + 1));
    local_4c = FUN_107a6660();
    local_8 = 0;
    while (local_8 < local_4c) {
      pFVar2 = (FRange *)FRange::FRange(local_a4,-local_98,local_98);
      local_14 = FRange::GetRand(pFVar2);
      pFVar2 = (FRange *)FRange::FRange(local_b4,-local_94,local_94);
      local_48 = FRange::GetRand(pFVar2);
      pFVar2 = (FRange *)FRange::FRange((FRange *)local_58,-local_90,local_90);
      local_10 = (undefined1 *)FRange::GetRand(pFVar2);
      local_7c = local_14;
      pfVar1 = (float *)(**(code **)(*(int *)in_ECX + 0x148))();
      local_7c = *pfVar1 * local_14 + local_48 * pfVar1[4] + (float)local_10 * pfVar1[8] +
                 pfVar1[0xc];
      local_78 = pfVar1[9] * (float)local_10 + pfVar1[1] * local_14 + pfVar1[5] * local_48 +
                 pfVar1[0xd];
      local_74 = (float)local_10 * pfVar1[10] + local_48 * pfVar1[6] + pfVar1[2] * local_14 +
                 pfVar1[0xe];
      local_80 = local_80 & 0xffffff00;
      local_24 = local_7c;
      local_20 = local_78;
      local_1c = local_74;
      FMatrix::~FMatrix(local_fc);
      iVar5 = **(int **)(in_ECX + 0xe4);
      uStack_140 = 0x10757a79;
      puVar3 = (undefined4 *)FRotator::FRotator((FRotator *)&local_6c,0,0,0);
      uStack_140 = 0;
      uStack_144 = 0;
      uStack_150 = *puVar3;
      uStack_14c = puVar3[1];
      uStack_148 = puVar3[2];
      fStack_15c = local_24;
      fStack_158 = local_20;
      fStack_154 = local_1c;
      local_10 = (undefined1 *)&fStack_160;
      fStack_160 = local_1c;
      FName::FName((FName *)&fStack_160,0);
      (**(code **)(iVar5 + 0xc0))(&ADecoVolumeObject::PrivateStaticClass);
      this = (AActor *)thunk_FUN_10757770();
      puVar3 = local_50;
      if (this == (AActor *)0x0) {
LAB_10757b98:
        local_8 = local_8 + 1;
        iVar5 = local_c;
      }
      else {
        *(undefined4 *)(this + 0x38) = *local_50;
        iVar5 = ULevel::ToFloor(*(ULevel **)(in_ECX + 0xe4),this,local_50[5],in_ECX);
        if (iVar5 != 0) {
          if (puVar3[6] != 0) {
            uVar4 = appRand();
            uVar4 = uVar4 & 0x8000ffff;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
            }
            *(uint *)(this + 0x1c8) = *(int *)(this + 0x1c8) + uVar4;
          }
          if (puVar3[7] != 0) {
            uVar4 = appRand();
            uVar4 = uVar4 & 0x8000ffff;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
            }
            *(uint *)(this + 0x1cc) = *(int *)(this + 0x1cc) + uVar4;
          }
          if (puVar3[8] != 0) {
            uVar4 = appRand();
            uVar4 = uVar4 & 0x8000ffff;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
            }
            *(uint *)(this + 0x1d0) = *(int *)(this + 0x1d0) + uVar4;
          }
          iVar5 = FRange::IsZero((FRange *)(puVar3 + 3));
          if (iVar5 == 0) {
            fVar6 = FRange::GetRand((FRange *)(puVar3 + 3));
            AActor::SetDrawScale(this,fVar6);
          }
          goto LAB_10757b98;
        }
        (**(code **)(**(int **)(in_ECX + 0xe4) + 0xac))();
        local_8 = local_8 + 1;
        iVar5 = local_c;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// ==== 10757bc8 Catch@10757bc8

void Catch_10757bc8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x54) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x54,&DAT_10914c48);
}


// ==== 10757bdc Catch@10757bdc

void Catch_10757bdc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AVolume::PostBeginPlay");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10757d30 FUN_10757d30

void FUN_10757d30(int param_1)

{
  int *in_ECX;
  
  if (*in_ECX == 0) {
    *in_ECX = param_1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    in_ECX[2] = in_ECX[2] + 1;
    in_ECX[1] = param_1;
    return;
  }
  *(int *)(in_ECX[1] + 0x40) = param_1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  in_ECX[2] = in_ECX[2] + 1;
  in_ECX[1] = param_1;
  return;
}


// ==== 10757d70 FUN_10757d70

void FUN_10757d70(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *(int *)(*in_ECX + 0x40);
  in_ECX[2] = in_ECX[2] + -1;
  *in_ECX = iVar1;
  return;
}


// ==== 10757d80 FUN_10757d80

void FUN_10757d80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CGeoCellInfo::vftable;
  if ((undefined4 *)in_ECX[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xf])(1);
  }
  in_ECX[0xf] = 0;
  return;
}


// ==== 10757db0 FUN_10757db0

void FUN_10757db0(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(in_ECX + 0x200001c) = 0;
  *(undefined4 *)(in_ECX + 0x2000020) = 0;
  piVar2 = (int *)(in_ECX + 0x1c);
  iVar1 = 0x800;
  do {
    iVar3 = 0x800;
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      *piVar2 = 0;
      piVar2[0x400000] = 0;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10757e40 FUN_10757e40

void FUN_10757e40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  int in_ECX;
  int iVar12;
  int iVar13;
  int iStack_870;
  int local_86c;
  undefined4 uStack_860;
  int iStack_85c;
  int local_854;
  int iStack_850;
  int local_84c;
  int local_83c;
  ushort local_800 [1024];
  
  local_83c = 0;
  local_86c = 0;
  local_84c = 0;
  do {
    local_84c = local_84c + 1;
    bVar10 = false;
    local_854 = 1;
    do {
      appSprintf(local_800,(ushort *)L"Post Processing.... [Loop: %d] [TotalCount/Count : %d/%d]",
                 local_84c,local_83c,local_86c);
      (**(code **)(**(int **)GWarn_exref + 0x18))(*(int **)GWarn_exref,local_854,0x800,local_800);
      iStack_850 = 1;
      do {
        iStack_85c = 0;
        iStack_870 = 0x1c;
        do {
          iVar2 = *(int *)(DAT_11d805b0 + 0x1c +
                          ((*(int *)(&DAT_10b14de0 + iStack_85c) + local_854) * 0x800 + iStack_850 +
                          *(int *)(&DAT_10b14de4 + iStack_85c)) * 4);
          iVar3 = *(int *)(DAT_11d805b0 + 0x1c +
                          ((*(int *)(&DAT_10b14df8 + iStack_85c) + local_854) * 0x800 +
                           *(int *)(&DAT_10b14dfc + iStack_85c) + iStack_850) * 4);
          iVar4 = *(int *)(DAT_11d805b0 + 0x1c +
                          ((*(int *)(&DAT_10b14dd8 + iStack_85c) + local_854) * 0x800 +
                           *(int *)(&DAT_10b14ddc + iStack_85c) + iStack_850) * 4);
          for (iVar1 = *(int *)((local_854 * 0x800 + iStack_850) * 4 + 0x1c + DAT_11d805b0);
              iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
            if (iVar2 != 0) {
              iVar13 = iVar2;
              do {
                if (*(int *)(iVar13 + 0xc) <= *(int *)(iVar1 + 0xc) + 0x10) goto LAB_10757f96;
                iVar13 = *(int *)(iVar13 + 0x3c);
              } while (iVar13 != 0);
            }
            iVar13 = 0;
LAB_10757f96:
            if (iVar3 != 0) {
              iVar12 = iVar3;
              do {
                if (*(int *)(iVar12 + 0xc) <= *(int *)(iVar1 + 0xc) + 0x10) goto LAB_10757fb6;
                iVar12 = *(int *)(iVar12 + 0x3c);
              } while (iVar12 != 0);
            }
            iVar12 = 0;
LAB_10757fb6:
            if (iVar4 != 0) {
              iVar11 = iVar4;
              do {
                if (*(int *)(iVar11 + 0xc) <= *(int *)(iVar1 + 0xc) + 0x10) goto LAB_10757fd2;
                iVar11 = *(int *)(iVar11 + 0x3c);
              } while (iVar11 != 0);
            }
            iVar11 = 0;
LAB_10757fd2:
            if ((iVar13 != 0) && (iVar12 != 0)) {
              if (*(int *)(iStack_870 + iVar13) == 0) {
LAB_10757ffb:
                if (*(int *)(iStack_870 + 0x10 + iVar13) == 0) {
LAB_10758006:
                  if (((((*(int *)(iStack_870 + iVar12) != 0) ||
                        (*(int *)(iStack_870 + 0x10 + iVar12) == 0)) &&
                       (*(int *)(iStack_870 + iVar1) != 0)) &&
                      ((param_1 != 0 || (*(int *)(iStack_870 + 0x10 + iVar1) == 0)))) &&
                     ((iVar11 != 0 && (*(int *)(iStack_870 + iVar11) != 0)))) {
                    local_83c = local_83c + 1;
                    *(undefined4 *)(iStack_870 + 0x10 + iVar1) = 1;
                    fVar5 = *(float *)(iVar1 + 0x10);
                    fVar6 = *(float *)(iVar1 + 0x14);
                    fVar7 = *(float *)(iVar1 + 0x18) + 1.0;
                    iVar13 = (**(code **)(**(int **)(in_ECX + 8) + 0xa8))
                                       (*(undefined4 *)(in_ECX + 0x10),fVar5,fVar6,fVar7,1,1,0);
                    if (iVar13 == 0) break;
                    if ((*(int *)(in_ECX + 4) != 0) &&
                       ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x3c) +
                                                        0xe4) + 0x74) + 0x68))(0x40a00000),
                       *(int *)(in_ECX + 4) != 0)) {
                      (**(code **)(**(int **)(in_ECX + 4) + 0xa4))(1);
                    }
                    fVar8 = fVar5 + *(float *)(&DAT_10b14de8 + iStack_85c) * 16.0;
                    fVar9 = *(float *)(&DAT_10b14dec + iStack_85c) * 16.0 + fVar6;
                    iVar13 = APawn::L2walkReachable
                                       (*(APawn **)(in_ECX + 0x10),fVar8,fVar9,uStack_860,0,0);
                    if (iVar13 != 0) {
                      iVar13 = (**(code **)(**(int **)(in_ECX + 8) + 0xa8))
                                         (*(undefined4 *)(in_ECX + 0x10),fVar8,fVar9,fVar7,1,1,0);
                      if (iVar13 == 0) break;
                      if ((*(int *)(in_ECX + 4) != 0) &&
                         ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x3c) +
                                                          0xe4) + 0x74) + 0x68))(0x41200000),
                         *(int *)(in_ECX + 4) != 0)) {
                        (**(code **)(**(int **)(in_ECX + 4) + 0xa4))(1);
                      }
                      iVar13 = APawn::L2walkReachable
                                         (*(APawn **)(in_ECX + 0x10),
                                          fVar8 + *(float *)(&DAT_10b14df0 + iStack_85c) * 16.0,
                                          *(float *)(&DAT_10b14df4 + iStack_85c) * 16.0 + fVar9,
                                          uStack_860,0,0);
                      if (iVar13 != 0) {
                        if ((*(int *)(in_ECX + 4) != 0) &&
                           ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x3c) +
                                                            0xe4) + 0x74) + 0x68))(0x41200000),
                           *(int *)(in_ECX + 4) != 0)) {
                          (**(code **)(**(int **)(in_ECX + 4) + 0xa4))(1);
                        }
                        iVar13 = (**(code **)(**(int **)(in_ECX + 8) + 0xa8))
                                           (*(undefined4 *)(in_ECX + 0x10),fVar5,fVar6,fVar7,1,1,0);
                        if (iVar13 == 0) break;
                        if ((*(int *)(in_ECX + 4) != 0) &&
                           ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x3c) +
                                                            0xe4) + 0x74) + 0x68))(0x41200000),
                           *(int *)(in_ECX + 4) != 0)) {
                          (**(code **)(**(int **)(in_ECX + 4) + 0xa4))(1);
                        }
                        fVar5 = fVar5 + *(float *)(&DAT_10b14e00 + iStack_85c) * 16.0;
                        fVar6 = *(float *)(&DAT_10b14e04 + iStack_85c) * 16.0 + fVar6;
                        iVar13 = APawn::L2walkReachable
                                           (*(APawn **)(in_ECX + 0x10),fVar5,fVar6,uStack_860,0,0);
                        if (iVar13 != 0) {
                          if ((*(int *)(in_ECX + 4) != 0) &&
                             ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x3c)
                                                              + 0xe4) + 0x74) + 0x68))(0x41200000),
                             *(int *)(in_ECX + 4) != 0)) {
                            (**(code **)(**(int **)(in_ECX + 4) + 0xa4))(1);
                          }
                          iVar13 = (**(code **)(**(int **)(in_ECX + 8) + 0xa8))
                                             (*(undefined4 *)(in_ECX + 0x10),fVar5,fVar6,fVar7,1,1,0
                                             );
                          if (iVar13 == 0) break;
                          if ((*(int *)(in_ECX + 4) != 0) &&
                             ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x3c)
                                                              + 0xe4) + 0x74) + 0x68))(0x41200000),
                             *(int *)(in_ECX + 4) != 0)) {
                            (**(code **)(**(int **)(in_ECX + 4) + 0xa4))(1);
                          }
                          iVar13 = APawn::L2walkReachable
                                             (*(APawn **)(in_ECX + 0x10),
                                              fVar5 + *(float *)(&DAT_10b14e08 + iStack_85c) * 16.0,
                                              *(float *)(&DAT_10b14e0c + iStack_85c) * 16.0 + fVar6,
                                              uStack_860,0,0);
                          if (iVar13 != 0) {
                            if ((*(int *)(in_ECX + 4) != 0) &&
                               ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) +
                                                                         0x3c) + 0xe4) + 0x74) +
                                            0x68))(0x41200000), *(int *)(in_ECX + 4) != 0)) {
                              (**(code **)(**(int **)(in_ECX + 4) + 0xa4))(1);
                            }
                            goto LAB_107584df;
                          }
                        }
                      }
                    }
                    local_86c = local_86c + 1;
                    *(undefined4 *)(iStack_870 + iVar1) = 0;
                    bVar10 = true;
                  }
                }
              }
              else if (*(int *)(iStack_870 + iVar12) == 0) {
                if (*(int *)(iStack_870 + iVar13) == 0) goto LAB_10757ffb;
                goto LAB_10758006;
              }
            }
LAB_107584df:
          }
          iStack_85c = iStack_85c + 0x38;
          iStack_870 = iStack_870 + 4;
        } while (iStack_870 < 0x2c);
        iStack_850 = iStack_850 + 1;
      } while (iStack_850 < 0x7ff);
      local_854 = local_854 + 1;
    } while (local_854 < 0x7ff);
    if ((!bVar10) || (0x13 < local_84c)) {
      return;
    }
  } while( true );
}


// ==== 10758720 FUN_10758720

undefined4 FUN_10758720(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  FILE *_File;
  
  iVar1 = 0;
  while( true ) {
    iVar1 = iVar1 + 1;
    _sprintf(param_1,"%s_%02d.%s",param_2,iVar1,param_3);
    if (*(int *)GLog_exref != 0) {
      appFromAnsi(param_1,(ushort *)0x0);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
    _File = _fopen(param_1,"rt");
    if (_File == (FILE *)0x0) break;
    _fclose(_File);
    if (99 < iVar1) {
      return 0;
    }
  }
  return 1;
}


// ==== 107587d0 FUN_107587d0

void FUN_107587d0(byte param_1)

{
  CGeoZoneInfo *in_ECX;
  
  CGeoZoneInfo::~CGeoZoneInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10758800 FUN_10758800

undefined4 FUN_10758800(void)

{
  CGeoCellInfo *pCVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CGeoCellInfo *pCVar6;
  CGeoCellInfo *pCVar7;
  CGeoZoneInfo *in_ECX;
  int unaff_retaddr;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar3 = FUN_107a6660();
  iVar4 = FUN_107a6660();
  iVar5 = FUN_107a6660();
  pCVar6 = CGeoZoneInfo::FindCell(in_ECX,iVar5,iVar4,iVar3);
  iVar3 = FUN_107a6660();
  iVar4 = FUN_107a6660();
  iVar5 = FUN_107a6660();
  pCVar7 = CGeoZoneInfo::FindCell(in_ECX,iVar5,iVar4,iVar3);
  if (((pCVar7 == (CGeoCellInfo *)0x0) &&
      (pCVar7 = CGeoZoneInfo::FindCell(in_ECX,iVar5,iVar4,iVar3 + 8), pCVar7 == (CGeoCellInfo *)0x0)
      ) && (pCVar7 = CGeoZoneInfo::FindCell(in_ECX,iVar5,iVar4,iVar3 + -8),
           pCVar7 == (CGeoCellInfo *)0x0)) {
    bVar2 = CGeoZoneInfo::AddCell();
    pCVar7 = CGeoZoneInfo::FindCell(in_ECX,iVar5,iVar4,iVar3);
    if (bVar2) {
      pCVar1 = pCVar7;
      if (DAT_11d805bc != (CGeoCellInfo *)0x0) {
        *(CGeoCellInfo **)(DAT_11d805c0 + 0x40) = pCVar7;
        pCVar1 = DAT_11d805bc;
      }
      DAT_11d805bc = pCVar1;
      *(undefined4 *)(pCVar7 + 0x40) = 0;
      DAT_11d805c4 = DAT_11d805c4 + 1;
      DAT_11d805c0 = pCVar7;
    }
    *(CGeoCellInfo **)(in_stack_00000018 + 0x1c + unaff_retaddr * 4) = pCVar6;
    return 1;
  }
  *(undefined4 *)(pCVar6 + in_stack_0000001c * 4 + 0x1c) = in_stack_00000020;
  return 0;
}


// ==== 10758970 FUN_10758970

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_10758970(CGeoZoneInfo *param_1)

{
  CGeoZoneInfo *pCVar1;
  wchar_t *_Filename;
  undefined4 uVar2;
  FILE *_File;
  int iVar3;
  int iVar4;
  CGeoCellInfo *pCVar5;
  char *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  char *_Mode;
  char acStack_450 [4];
  CGeoZoneInfo *pCStack_44c;
  char local_43c [1024];
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  FILE *local_1c;
  int local_18;
  char local_13;
  char local_12;
  char local_11;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  _Filename = (wchar_t *)param_1;
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1082fecb;
  *unaff_FS_OFFSET = &local_10;
  pCVar1 = DAT_11d805b0;
  if (param_1 != (CGeoZoneInfo *)0x0) {
    if (DAT_11d805b0 != (CGeoZoneInfo *)0x0) {
      pCStack_44c = (CGeoZoneInfo *)0x107589b8;
      CGeoZoneInfo::~CGeoZoneInfo(DAT_11d805b0);
      pCStack_44c = pCVar1;
      builtin_strncpy(acStack_450,"ǉu\x10",4);
      (**(code **)(**(int **)GMalloc_exref + 8))();
    }
    pCStack_44c = (CGeoZoneInfo *)&DAT_10853a28;
    acStack_450[0] = '$';
    acStack_450[1] = '\0';
    acStack_450[2] = '\0';
    acStack_450[3] = '\x02';
    param_1 = (CGeoZoneInfo *)(**(code **)**(undefined4 **)GMalloc_exref)();
    local_8 = 0;
    if (param_1 == (CGeoZoneInfo *)0x0) {
      DAT_11d805b0 = (CGeoZoneInfo *)0x0;
    }
    else {
      DAT_11d805b0 = (CGeoZoneInfo *)CGeoZoneInfo::CGeoZoneInfo(param_1);
    }
    local_8 = 0xffffffff;
    if (*(int *)GUnicodeOS_exref == 0) {
      iVar3 = winGetSizeANSI((ushort *)_Filename);
      if (iVar3 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        winGetSizeANSI((ushort *)_Filename);
        pcVar6 = acStack_450;
      }
      _Mode = "r";
      iVar3 = winGetSizeANSI((ushort *)_Filename);
      pcVar6 = winToANSI(pcVar6,(ushort *)_Filename,iVar3);
      _File = _fopen(pcVar6,_Mode);
    }
    else {
      _File = __wfopen(_Filename,L"r");
    }
    if (_File != (FILE *)0x0) {
      local_1c = _File;
      _fgets(local_43c,0x400,_File);
      _fgets(local_43c,0x400,_File);
      _fgets(local_43c,0x400,_File);
      FID_conflict__sscanf
                (local_43c,"(%d, %d) ~ (%d, %d)",DAT_11d805b0,DAT_11d805b0 + 8,DAT_11d805b0 + 4,
                 DAT_11d805b0 + 0xc);
      _fgets(local_43c,0x400,_File);
      _fgets(local_43c,0x400,_File);
      _fgets(local_43c,0x400,_File);
      local_2c = 0x100000;
      do {
        _fgets(local_43c,0x400,_File);
        FID_conflict__sscanf
                  (local_43c,"[%d,%d]%d(%d:%c%c%c%c)",&local_30,&local_34,local_3c,&local_38,
                   (int)&param_1 + 3,&local_13,&local_11,&local_12);
        pCVar1 = DAT_11d805b0;
        local_28 = (float)(local_30 * 0x10 + 8 + *(int *)DAT_11d805b0);
        local_18 = *(int *)(DAT_11d805b0 + 8) + 8 + local_34 * 0x10;
        local_24 = (float)local_18;
        local_20 = (float)local_38;
        iVar3 = FUN_107a6660();
        iVar4 = FUN_107a6660();
        local_18 = FUN_107a6660();
        CGeoZoneInfo::AddCell(pCVar1,local_18,iVar4,iVar3,local_28,local_24,local_20,0);
        pCVar5 = CGeoZoneInfo::FindCell(DAT_11d805b0,local_18,iVar4,iVar3);
        *(int *)(pCVar5 + 0x1c) = param_1._3_1_ + -0x30;
        *(int *)(pCVar5 + 0x20) = local_13 + -0x30;
        *(int *)(pCVar5 + 0x24) = local_11 + -0x30;
        *(int *)(pCVar5 + 0x28) = local_12 + -0x30;
        local_2c = local_2c + -1;
        _File = local_1c;
      } while (0 < local_2c);
      _fclose(local_1c);
      uVar2 = 1;
      DAT_11d805b4 = 1;
      goto LAB_10758c33;
    }
  }
  DAT_11d805b4 = 0;
  uVar2 = 0;
LAB_10758c33:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


// ==== 10758d00 FUN_10758d00

void FUN_10758d00(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fee0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  uStack_60 = 0x10758d39;
  thunk_FUN_10589730();
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = **(int **)(in_ECX + 8);
  uStack_60 = 0x10758d5d;
  puVar1 = (undefined4 *)FRotator::FRotator((FRotator *)&local_44,0,0,0);
  uStack_60 = 0;
  uStack_64 = 0;
  local_70 = *puVar1;
  local_6c = puVar1[1];
  local_68 = puVar1[2];
  local_7c = local_2c;
  local_78 = local_28;
  local_74 = local_24;
  local_1c = (undefined1 *)&uStack_80;
  uStack_80 = local_24;
  FName::FName((FName *)&uStack_80,0);
  (**(code **)(iVar2 + 0xc0))();
  iVar2 = thunk_FUN_104b42a0();
  *(int *)(in_ECX + 0x10) = iVar2;
  if (iVar2 != 0) {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    iVar2 = **(int **)(in_ECX + 8);
    uStack_94 = 0x10758ded;
    puVar1 = (undefined4 *)FRotator::FRotator((FRotator *)&local_44,0,0,0);
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a4 = *puVar1;
    uStack_a0 = puVar1[1];
    uStack_9c = puVar1[2];
    uStack_b0 = local_38;
    uStack_ac = local_34;
    uStack_a8 = local_30;
    local_1c = (undefined1 *)&uStack_b4;
    uStack_b4 = local_30;
    FName::FName((FName *)&uStack_b4,0);
    uVar3 = thunk_FUN_10589730(0xffffffff,L"LineagePlayerController",0);
    uVar3 = (**(code **)(iVar2 + 0xc0))(uVar3);
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x14d8) = uVar3;
    if (*(int *)(*(UObject **)(in_ECX + 0x10) + 0x14d8) != 0) {
      UObject::SetFlags(*(UObject **)(in_ECX + 0x10),0x4000);
      *(int *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x14d8) + 0x3bc) = *(int *)(in_ECX + 0x10);
      *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x14d8) + 0xc2) = 4;
      *(undefined1 *)(*(int *)(in_ECX + 0x10) + 0xc2) = 4;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0x3f800000;
      (**(code **)(**(int **)(in_ECX + 0x10) + 0x1c8))(1,0,0,0,0x3f800000);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10758ee7 Catch@10758ee7

void Catch_10758ee7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10758efb Catch@10758efb

void Catch_10758efb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWorldBuilder::getScout");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10758fa0 FUN_10758fa0

void FUN_10758fa0(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1082fefe;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1072ad70();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10759010 FUN_10759010

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_10759010(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  AActor *pAVar2;
  FWorldBuilder *pFVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FILE *pFVar8;
  ALevelInfo *pAVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FWorldBuilder *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  int iVar14;
  AActor *pAVar15;
  int iVar16;
  int *piVar17;
  float10 fVar18;
  undefined8 uVar19;
  char local_52c [128];
  char local_4ac [128];
  char local_42c [120];
  undefined2 auStack_3b4 [4];
  ushort local_3ac [2];
  undefined2 auStack_3a8 [254];
  int iStack_1ac;
  int local_188 [4];
  float local_178;
  FMemMark local_14c [12];
  int local_140 [12];
  double local_110;
  float local_108;
  float local_104;
  undefined4 local_100;
  FOutputDevice *local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  float local_b4;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  int *local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  void *local_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  int local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  FWorldBuilder *local_40;
  int local_3c;
  int local_38;
  AActor *local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_6c = &LAB_1082ff26;
  local_70 = ExceptionList;
  local_74 = &stack0xfffffac8;
  local_68 = 0;
  if (param_2 != (ushort *)0x0) {
    ExceptionList = &local_70;
    local_40 = in_ECX;
    fVar18 = (float10)thunk_FUN_104da1f0();
    local_110 = (double)(fVar18 * (float10)-1.0);
    *(undefined4 *)(in_ECX + 4) = param_3;
    *(undefined4 *)(in_ECX + 8) = param_1;
    appStrcpy(local_3ac,param_2);
    for (iVar5 = appStrlen(param_2);
        (((0 < iVar5 && (uVar1 = param_2[iVar5 + -1], uVar1 != 0x5c)) && (uVar1 != 0x2f)) &&
        (uVar1 != 0x3a)); iVar5 = iVar5 + -1) {
    }
    local_c4 = iVar5;
    appStrcpy(local_3ac,param_2 + iVar5);
    auStack_3a8[iVar5] = 0;
    iVar6 = appAtoi(local_3ac);
    appStrcpy(local_3ac,param_2 + iVar5 + 3);
    auStack_3a8[iVar5 + 3] = 0;
    iVar7 = appAtoi(local_3ac);
    appStrcpy(local_3ac,param_2 + iVar5);
    iVar5 = appStrlen(local_3ac);
    auStack_3b4[iVar5] = 0;
    (**(code **)(**(int **)GWarn_exref + 0x10))(L"Compare World with Geodata",1);
    pFVar3 = local_40;
    local_34 = (AActor *)0x0;
    local_68 = CONCAT31(local_68._1_3_,1);
    if (*(int *)(local_40 + 4) == 0) {
      FWorldBuilder::getScout(local_40);
      pAVar2 = *(AActor **)(pFVar3 + 0x10);
      pAVar15 = (AActor *)0x0;
      if (pAVar2 != (AActor *)0x0) {
        pAVar15 = pAVar2;
        local_34 = pAVar2;
      }
      *(undefined4 *)(pAVar15 + 0x1c4) = 0x466a6000;
    }
    else {
      local_34 = *(AActor **)(*(int *)(*(int *)(local_40 + 4) + 0x3c) + 0x3bc);
      *(AActor **)(local_40 + 0x10) = local_34;
    }
    local_68 = 0;
    iVar5 = (**(code **)(**(int **)GConfig_exref + 4))
                      (L"WorldBuildOptions",L"TestGeoDataErrorBound",&local_c0,L"Unrealed.ini");
    if (iVar5 == 0) {
      local_c0 = 8;
    }
    local_d8 = (float)((iVar6 + -0x14) * 0x8000);
    local_d4 = (float)((iVar7 + -0x12) * 0x8000);
    local_68._0_1_ = 3;
    iVar5 = thunk_FUN_1032ffc0();
    local_68._0_1_ = 4;
    if (iVar5 == 0) {
      iVar5 = 0;
      this = extraout_ECX;
    }
    else {
      iVar5 = thunk_FUN_1072bc50();
      this = extraout_ECX_00;
    }
    local_68 = CONCAT31(local_68._1_3_,3);
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
    }
    cVar4 = thunk_FUN_1043d470(iVar6,iVar7);
    if (cVar4 != '\0') {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
      }
      _sprintf(local_42c,"%d_%d_Error",iVar6);
      thunk_FUN_10758720(local_4ac,local_42c,&DAT_108f04d8);
      pFVar8 = _fopen(local_4ac,"wt");
      local_c8 = 128.0;
      local_b4 = 16.0;
      local_90 = 16.0;
      local_38 = 0;
      local_8 = 2;
      do {
        if (0xfd < local_8) {
          _fprintf(pFVar8,"HitSetNum : %d\n");
          _fclose(pFVar8);
          if (iVar5 != 0) {
            thunk_FUN_10758fa0();
          }
          local_68 = 0;
          (**(code **)(**(int **)GWarn_exref + 0x14))();
          thunk_FUN_104da1f0();
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2
                      (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
            ExceptionList = local_70;
            return 1;
          }
          ExceptionList = local_70;
          return 1;
        }
        (**(code **)(**(int **)GWarn_exref + 0x18))(*(int **)GWarn_exref,local_8,0x100);
        for (local_18 = 2; local_18 < 0xfe; local_18 = local_18 + 1) {
          local_24 = (float)local_8 * 128.0 + local_d8;
          local_108 = local_24;
          local_30 = 0;
          local_44 = 0;
          for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
            for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
              local_fc = (FOutputDevice *)0xffff8000;
              local_f8 = 0xffff8000;
              local_f4 = 0xffff8000;
              local_f0 = 0xffff8000;
              local_ec = 0xffff8000;
              local_e8 = 0xffff8000;
              local_e4 = 0xffff8000;
              local_e0 = 0xffff8000;
              local_dc = 0xffff8000;
              iVar7 = local_20;
              for (iVar6 = 0; local_3c = iVar6, iVar6 < 9; iVar6 = iVar6 + 1) {
                local_c = local_1c;
                local_2c = local_8;
                local_28 = local_18;
                local_10 = iVar7;
                if (iVar6 == 1) {
                  local_c = local_1c + -1;
                  if ((local_c < 0) && (0 < local_8)) {
                    local_c = 7;
                    local_2c = local_8 + -1;
                  }
                  goto LAB_1075956d;
                }
                if (iVar6 == 2) {
                  local_c = local_1c + -1;
                  if ((local_c < 0) && (0 < local_8)) {
                    local_c = 7;
                    local_2c = local_8 + -1;
                  }
LAB_10759464:
                  local_10 = iVar7 + 1;
                  if ((7 < local_10) && (local_18 < 0xff)) {
                    local_10 = 0;
                    local_28 = local_18 + 1;
                  }
                }
                else {
                  if (iVar6 == 3) goto LAB_10759464;
                  if (iVar6 == 4) {
                    local_c = local_1c + 1;
                    if ((7 < local_c) && (local_8 < 0xff)) {
                      local_c = 0;
                      local_2c = local_8 + 1;
                    }
                    goto LAB_10759464;
                  }
                  if (iVar6 == 5) {
                    local_c = local_1c + 1;
                    if ((7 < local_c) && (local_8 < 0xff)) {
                      local_c = 0;
                      local_2c = local_8 + 1;
                    }
                  }
                  else {
                    if (iVar6 == 6) {
                      local_c = local_1c + 1;
                      if ((7 < local_c) && (local_8 < 0xff)) {
                        local_c = 0;
                        local_2c = local_8 + 1;
                      }
                    }
                    else if (iVar6 != 7) {
                      if (iVar6 != 8) goto LAB_1075956d;
                      local_c = local_1c + -1;
                      if ((local_c < 0) && (0 < local_8)) {
                        local_c = 7;
                        local_2c = local_8 + -1;
                      }
                    }
                    local_10 = iVar7 + -1;
                    if ((local_10 < 0) && (0 < local_18)) {
                      local_10 = 7;
                      local_28 = local_18 + -1;
                    }
                  }
                }
LAB_1075956d:
                iVar11 = local_c;
                iVar7 = local_10;
                iVar14 = (local_2c * 0x100 + local_28) * 0xd0 + iVar5;
                local_108 = (float)local_2c * 128.0 + local_d8;
                local_104 = (float)local_28 * local_c8 + local_d4;
                local_78 = 0;
                local_100 = 0;
                local_ac = (float)local_c * local_b4 + local_108 + 8.0;
                local_a8 = (float)local_10 * local_90 + local_104 + 8.0;
                local_4c = 0x467a0000;
                local_94 = 0x467a0000;
                local_a4 = 0xc67a0000;
                if (iVar6 == 0) {
                  local_58 = 0x467a0000;
                  local_60 = local_ac;
                  local_5c = local_a8;
                }
                local_9c = local_ac;
                local_98 = local_a8;
                local_80 = local_108;
                local_7c = local_104;
                local_54 = local_ac;
                local_50 = local_a8;
                local_24 = local_a8;
                local_14 = local_ac;
                if (*(char *)(iVar14 + 0xc9) == '\0') {
                  if (*(char *)(iVar14 + 200) == '\0') {
                    local_14 = (float)(int)*(char *)(local_c + local_10 * 8 + iVar14);
                    iVar16 = -0x8000;
                    local_bc = -0x8000;
                    for (local_48 = 0; iVar6 = local_3c, local_48 < (int)local_14;
                        local_48 = local_48 + 1) {
                      iVar6 = (int)(short)(*(ushort *)
                                            (*(int *)(iVar5 + 0xd00000) +
                                            ((int)*(short *)(iVar14 + (iVar7 + 0x20 + iVar11 * 8) *
                                                                      2) + *(int *)(iVar14 + 0xc4) +
                                            local_48) * 2) & DAT_11d805b8) >> 1;
                      local_140[local_3c] = iVar6;
                      if (iVar16 < iVar6) {
                        iVar16 = iVar6;
                        local_bc = iVar6;
                      }
                    }
                    local_30 = local_30 + -1 + (int)local_14;
                    local_140[local_3c] = iVar16;
                  }
                  else {
                    local_140[iVar6] =
                         (int)(short)(*(ushort *)
                                       (*(int *)(iVar5 + 0xd00000) +
                                       ((int)*(short *)(iVar14 + (local_10 + 0x20 + local_c * 8) * 2
                                                       ) + *(int *)(iVar14 + 0xc4)) * 2) &
                                     DAT_11d805b8) >> 1;
                  }
                }
                else {
                  local_140[iVar6] = (int)*(short *)(iVar14 + 0xca);
                }
                iVar7 = local_20;
                FMemMark::FMemMark(local_14c,(FMemStack *)GMem_exref);
                thunk_FUN_105bcd20();
                local_68._0_1_ = 5;
                if (iVar6 == 0) {
                  thunk_FUN_104419f0(0x3f800000,0);
                  local_8c = 0x41000000;
                  local_88 = 0x41000000;
                  local_84 = 0x41bc0000;
                  iVar11 = *(int *)*(ULevel **)(local_40 + 8);
                  uVar19 = CONCAT44(local_34,0x9e);
                  pAVar9 = ULevel::GetLevelInfo(*(ULevel **)(local_40 + 8));
                  piVar10 = (int *)(**(code **)(iVar11 + 0xf4))
                                             (GMem_exref,local_ac,local_a8,local_a4,local_9c,
                                              local_98,local_94,local_8c,local_88,local_84,pAVar9,
                                              uVar19);
LAB_107597df:
                  local_a0 = piVar10;
                  if (piVar10 != (int *)0x0) {
                    iVar11 = AActor::IsBlockedBy(local_34,(AActor *)piVar10[1]);
                    if (iVar11 == 0) goto LAB_10759880;
                    piVar17 = local_188;
                    for (iVar11 = 0xc; iVar7 = local_20, iVar11 != 0; iVar11 = iVar11 + -1) {
                      *piVar17 = *piVar10;
                      piVar10 = piVar10 + 1;
                      piVar17 = piVar17 + 1;
                    }
                  }
                  local_178 = local_178 + 2.0;
                  iStack_1ac = FUN_107a6660();
                  if (local_188[1] != 0) {
                    iVar11 = (int)(iStack_1ac + (iStack_1ac >> 0x1f & 7U)) >> 3;
                    iStack_1ac = iVar11 * 8;
                    local_fc = (FOutputDevice *)(local_140[0] + iVar11 * -8);
                  }
                }
                FMemMark::Pop(local_14c);
                local_68 = CONCAT31(local_68._1_3_,3);
                thunk_FUN_105c4170();
              }
              for (local_64 = 1; local_64 < 9; local_64 = local_64 + 1) {
                iVar6 = local_140[local_64] - local_140[0];
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (0xf < iVar6) goto LAB_10759969;
              }
              local_38 = local_38 + 1;
              cVar4 = *(char *)((local_8 * 0x100 + local_18) * 0xd0 + iVar5 + 0xc9);
              if (cVar4 == '\0') {
LAB_10759915:
                if (8 < (int)local_fc) {
                  uVar12 = FUN_107a6660();
                  uVar13 = FUN_107a6660();
                  uVar19 = CONCAT44(uVar12,uVar13);
LAB_1075993d:
                  _fprintf(pFVar8," %d %d \n",uVar19);
                  if (*(int *)GLog_exref != 0) {
                    FOutputDevice::Logf2(local_fc,*(ushort **)GLog_exref);
                  }
                }
              }
              else {
                if (0x20 < (int)local_fc) {
                  uVar12 = FUN_107a6660();
                  uVar13 = FUN_107a6660();
                  uVar19 = CONCAT44(uVar12,uVar13);
                  goto LAB_1075993d;
                }
                if (cVar4 == '\0') goto LAB_10759915;
              }
LAB_10759969:
              local_30 = local_30 + 1;
              local_44 = local_44 + 1;
            }
          }
        }
        local_8 = local_8 + 1;
      } while( true );
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    }
    _sprintf(local_52c,"%d_%d_Not_Found_Geo.txt",iVar6,iVar7);
    pFVar8 = _fopen(local_52c,"wt");
    _fclose(pFVar8);
    if (iVar5 != 0) {
      thunk_FUN_10758fa0();
    }
    (**(code **)(**(int **)GWarn_exref + 0x14))();
  }
  ExceptionList = local_70;
  return 0;
LAB_10759880:
  piVar10 = (int *)*piVar10;
  goto LAB_107597df;
}


// ==== 10759a20 Catch@10759a20

void Catch_10759a20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0xb8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 10759a37 Catch@10759a37

void Catch_10759a37(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWorldBuilder::testWorldStructure::CompareWorldwithGeodata");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10759a53 Catch@10759a53

void Catch_10759a53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0xb0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x68,&DAT_10914c48);
}


// ==== 10759a6a Catch@10759a6a

void Catch_10759a6a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GetScout");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10759a71 Catch@10759a71

void Catch_10759a71(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0xb4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x54,&DAT_10914c48);
}


// ==== 10759a85 Catch@10759a85

void Catch_10759a85(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWorldBuilder::testWorldStructure");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10759d30 FUN_10759d30

undefined4
FUN_10759d30(undefined4 param_1,ushort *param_2,UViewport *param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  APawn *pAVar2;
  int *piVar3;
  CGeoZoneInfo *pCVar4;
  FWorldBuilder *pFVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  FOutputDevice *this;
  int iVar10;
  ushort **ppuVar11;
  CGeoCellInfo *pCVar12;
  int iVar13;
  FILE *pFVar14;
  ushort *puVar15;
  float fVar16;
  FWorldBuilder *in_ECX;
  FOutputDevice *this_00;
  int iVar17;
  APawn *pAVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float10 fVar22;
  char *pcVar23;
  float fVar24;
  wchar_t *pwVar25;
  char local_ba8 [256];
  ushort *local_aa8;
  float local_aa4 [299];
  char local_5f8 [120];
  undefined2 auStack_580 [4];
  ushort local_578 [2];
  undefined2 auStack_574 [254];
  char local_378 [128];
  ushort local_2f8 [64];
  float local_278;
  float local_26c;
  float local_258;
  float local_24c;
  float local_244;
  float local_240;
  float local_238;
  float local_234;
  float local_22c;
  float local_228;
  undefined1 local_220 [36];
  float local_1fc;
  float local_1f0;
  CGeoZoneInfo *local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  CGeoZoneInfo *local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  float local_1b4;
  int local_1b0;
  ushort *local_1ac;
  float local_1a8;
  float local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  int local_150;
  int local_14c;
  ushort *local_148;
  float local_144;
  ushort *local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  ushort *local_114;
  float local_110;
  ushort *local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  double local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  ushort *local_84;
  float local_80;
  float local_7c;
  undefined1 *local_78;
  void *local_74;
  undefined1 *puStack_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  ushort *local_34;
  int local_30;
  int local_2c;
  CGeoZoneInfo *local_28;
  float local_24;
  int local_20;
  APawn *local_1c;
  float local_18;
  int local_14;
  int local_10;
  ushort *local_c;
  FWorldBuilder *local_8;
  
  puStack_70 = &LAB_1082ff56;
  local_74 = ExceptionList;
  local_78 = &stack0xfffff44c;
  local_6c = 0;
  if (param_2 == (ushort *)0x0) {
    return 0;
  }
  ExceptionList = &local_74;
  local_8 = in_ECX;
  fVar22 = (float10)thunk_FUN_104da1f0();
  local_c8 = (double)(fVar22 * (float10)-1.0);
  DAT_11d805b4 = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(UViewport **)(in_ECX + 4) = param_3;
  appStrcpy(local_578,param_2);
  for (iVar8 = appStrlen(param_2);
      (((0 < iVar8 && (uVar1 = param_2[iVar8 + -1], uVar1 != 0x5c)) && (uVar1 != 0x2f)) &&
      (uVar1 != 0x3a)); iVar8 = iVar8 + -1) {
  }
  local_c = param_2 + iVar8;
  local_1b0 = iVar8;
  appStrcpy(local_578,local_c);
  auStack_574[iVar8] = 0;
  iVar9 = appAtoi(local_578);
  appStrcpy(local_578,param_2 + iVar8 + 3);
  auStack_574[iVar8 + 3] = 0;
  this = (FOutputDevice *)appAtoi(local_578);
  appStrcpy(local_578,local_c);
  iVar10 = appStrlen(local_578);
  iVar8 = 0;
  auStack_580[iVar10] = 0;
  (**(code **)(**(int **)GWarn_exref + 0x10))(L"Calculating WorldStructure",1);
  (**(code **)(**(int **)GWarn_exref + 0x18))
            (*(int **)GWarn_exref,0,0x400,L"Setting Initial Points");
  local_14 = 0;
  _vector_constructor_iterator_(&local_aa8,0xc,100,FVector_exref);
  if (DAT_11d805b0 != (CGeoZoneInfo *)0x0) {
    thunk_FUN_107587d0(1);
  }
  local_28 = (CGeoZoneInfo *)thunk_FUN_1032ffc0(0x2000024);
  local_6c._0_1_ = 1;
  if (local_28 == (CGeoZoneInfo *)0x0) {
    DAT_11d805b0 = (CGeoZoneInfo *)0x0;
  }
  else {
    DAT_11d805b0 = (CGeoZoneInfo *)CGeoZoneInfo::CGeoZoneInfo(local_28);
  }
  local_6c = (uint)local_6c._1_3_ << 8;
  if ((iVar9 < 1) || ((int)this < 1)) {
    *(undefined4 *)DAT_11d805b0 = 0xffffc000;
    *(int *)(DAT_11d805b0 + 4) = *(int *)DAT_11d805b0 + 0x7fff;
    *(undefined4 *)(DAT_11d805b0 + 8) = 0xffffc000;
    *(int *)(DAT_11d805b0 + 0xc) = *(int *)(DAT_11d805b0 + 8) + 0x7fff;
  }
  else {
    *(int *)DAT_11d805b0 = (iVar9 + -0x14) * 0x8000;
    *(int *)(DAT_11d805b0 + 4) = iVar9 * 0x8000 + -0x98001;
    *(int *)(DAT_11d805b0 + 8) = (int)(this + -0x12) * 0x8000;
    *(int *)(DAT_11d805b0 + 0xc) = (int)this * 0x8000 + -0x88001;
  }
  local_1c = (APawn *)0x0;
  if (*(int *)(in_ECX + 4) == 0) {
    FWorldBuilder::getScout(in_ECX);
    pAVar2 = *(APawn **)(in_ECX + 0x10);
    pAVar18 = (APawn *)0x0;
    if (pAVar2 != (APawn *)0x0) {
      pAVar18 = pAVar2;
      local_1c = pAVar2;
    }
    *(undefined4 *)(pAVar18 + 0x1c4) = 0x466a6000;
  }
  else {
    pAVar18 = *(APawn **)(*(int *)(*(int *)(in_ECX + 4) + 0x3c) + 0x3bc);
    *(APawn **)(in_ECX + 0x10) = pAVar18;
    local_1c = pAVar18;
  }
  if (*(int *)(in_ECX + 4) != 0) {
    local_aa8 = *(ushort **)(pAVar18 + 0x1bc);
    local_aa4[0] = *(float *)(pAVar18 + 0x1c0);
    local_aa4[1] = *(float *)(pAVar18 + 0x1c4);
    iVar8 = 1;
    local_14 = 1;
    local_1ac = local_aa8;
    local_1a8 = local_aa4[0];
    local_1a4 = local_aa4[1];
    local_24 = local_aa4[1];
    local_18 = local_aa4[0];
    local_c = local_aa8;
    local_cc = FUN_107a6660();
    local_bc = FUN_107a6660();
    local_a8 = FUN_107a6660();
    local_d0 = FUN_107a6660();
    goto LAB_1075a3a5;
  }
  for (local_10 = 0; local_10 < *(int *)(*(int *)(in_ECX + 8) + 0x3c); local_10 = local_10 + 1) {
    iVar10 = thunk_FUN_105a7390(*(undefined4 *)
                                 (*(int *)(*(int *)(in_ECX + 8) + 0x38) + local_10 * 4));
    if (iVar10 != 0) {
      iVar10 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0x38) + local_10 * 4);
      (&local_aa8)[iVar8 * 3] = *(ushort **)(iVar10 + 0x1bc);
      local_aa4[iVar8 * 3] = *(float *)(iVar10 + 0x1c0);
      local_aa4[iVar8 * 3 + 1] = *(float *)(iVar10 + 0x1c4);
      iVar8 = iVar8 + 1;
      local_14 = iVar8;
    }
  }
  if ((iVar9 < 1) || ((int)this < 1)) {
    local_114 = (ushort *)(float)((*(int *)(DAT_11d805b0 + 4) + *(int *)DAT_11d805b0) / 2);
    local_110 = (float)((*(int *)(DAT_11d805b0 + 0xc) + *(int *)(DAT_11d805b0 + 8)) / 2);
    local_10c = (ushort *)0x466a6000;
    ppuVar11 = &local_aa8 + iVar8 * 3;
    local_c = local_114;
    *ppuVar11 = local_114;
    local_aa4[iVar8 * 3] = local_110;
    puVar15 = local_10c;
LAB_1075a385:
    iVar8 = iVar8 + 1;
    local_14 = iVar8;
    ppuVar11[2] = puVar15;
  }
  else if (iVar9 == 0x15) {
    if (this != (FOutputDevice *)0x19) {
LAB_1075a2b0:
      local_148 = (ushort *)(float)(*(int *)DAT_11d805b0 + 0x100);
      local_144 = (float)(*(int *)(DAT_11d805b0 + 0xc) + -0x100);
      local_140 = (ushort *)0x466a6000;
      ppuVar11 = &local_aa8 + iVar8 * 3;
      local_c = local_148;
      *ppuVar11 = local_148;
      local_aa4[iVar8 * 3] = local_144;
      puVar15 = local_140;
      goto LAB_1075a385;
    }
    local_16c = 0x4740c600;
    local_168 = 248464.0;
    local_164 = -5900.0;
    (&local_aa8)[iVar8 * 3] = (ushort *)0x4740c600;
    local_aa4[iVar8 * 3] = local_168;
    local_aa4[iVar8 * 3 + 1] = local_164;
    iVar8 = iVar8 + 1;
    local_14 = iVar8;
  }
  else {
    if ((iVar9 != 0x14) || (this != (FOutputDevice *)0x15)) goto LAB_1075a2b0;
    local_1d4 = 0x467c0000;
    local_1d0 = 114193.0;
    local_1cc = -3410.0;
    (&local_aa8)[iVar8 * 3] = (ushort *)0x467c0000;
    local_aa4[iVar8 * 3] = local_1d0;
    local_aa4[iVar8 * 3 + 1] = local_1cc;
    iVar10 = iVar8 + 1;
    local_184 = 0x468a2400;
    local_180 = 114081.0;
    local_17c = -11650.0;
    (&local_aa8)[iVar10 * 3] = (ushort *)0x468a2400;
    local_aa4[iVar10 * 3] = local_180;
    local_aa4[iVar10 * 3 + 1] = local_17c;
    iVar10 = iVar8 + 2;
    local_1bc = 0x468a6800;
    local_1b8 = 110413.0;
    local_1b4 = -9260.0;
    (&local_aa8)[iVar10 * 3] = (ushort *)0x468a6800;
    local_aa4[iVar10 * 3] = local_1b8;
    local_aa4[iVar10 * 3 + 1] = local_1b4;
    iVar10 = iVar8 + 3;
    local_13c = 0x468a5000;
    local_138 = 118403.0;
    local_134 = -6747.0;
    (&local_aa8)[iVar10 * 3] = (ushort *)0x468a5000;
    local_aa4[iVar10 * 3] = local_138;
    local_aa4[iVar10 * 3 + 1] = local_134;
    iVar8 = iVar8 + 4;
    local_14 = iVar8;
  }
  local_cc = *(int *)DAT_11d805b0;
  local_bc = *(int *)(DAT_11d805b0 + 8);
  local_a8 = *(int *)(DAT_11d805b0 + 4);
  local_d0 = *(int *)(DAT_11d805b0 + 0xc);
LAB_1075a3a5:
  iVar10 = (**(code **)**(undefined4 **)GConfig_exref)
                     (L"WorldBuildOptions",L"RunWalkbuild",&local_e4,L"Unrealed.ini");
  if (iVar10 == 0) {
    local_e4 = 1;
  }
  iVar10 = (**(code **)**(undefined4 **)GConfig_exref)
                     (L"WorldBuildOptions",L"GeoTestDuringBuild",&local_68,L"Unrealed.ini");
  if (iVar10 == 0) {
    local_68 = 1;
  }
  iVar10 = (**(code **)**(undefined4 **)GConfig_exref)
                     (L"WorldBuildOptions",L"RunPostbuild",&local_f8,L"Unrealed.ini");
  if (iVar10 == 0) {
    local_f8 = 1;
  }
  if (*(int *)(in_ECX + 4) == 0) {
    for (local_10 = 0; local_10 < 0x800; local_10 = local_10 + 1) {
      (**(code **)(**(int **)GWarn_exref + 0x18))();
      for (local_3c = 0; local_3c < 0x800; local_3c = local_3c + 1) {
        iVar10 = local_10 * 0x10 + 8 + *(int *)DAT_11d805b0;
        if ((((local_cc <= iVar10) && (iVar10 <= local_a8)) &&
            (puVar15 = (ushort *)(local_3c * 0x10 + 8 + *(int *)(DAT_11d805b0 + 8)),
            local_bc <= (int)puVar15)) && ((int)puVar15 <= local_d0)) {
          local_108 = (float)iVar10;
          local_104 = (float)(int)puVar15;
          local_100 = 0x466a6000;
          local_40 = 15000.0;
          local_48 = local_108;
          local_44 = local_104;
          local_c = puVar15;
          (**(code **)(**(int **)(in_ECX + 8) + 0xa8))(pAVar18,local_108,local_104,0x466a6000,1,1,0)
          ;
          thunk_FUN_104419f0(0x3f800000,0);
          do {
            local_160 = 0;
            local_15c = 0;
            local_158 = 0xc6ea6000;
            iVar8 = *(int *)(local_8 + 0x10);
            (**(code **)(**(int **)(local_8 + 8) + 0xa4))
                      (pAVar18,0,0,0xc6ea6000,*(undefined4 *)(iVar8 + 0x1c8),
                       *(undefined4 *)(iVar8 + 0x1cc),*(undefined4 *)(iVar8 + 0x1d0),local_220,1,1,0
                       ,0);
            if (NAN(local_1fc) || 1.0 < local_1fc == (local_1fc == 1.0)) break;
          } while (-16200.0 < *(float *)(pAVar18 + 0x1c4));
          iVar8 = local_14;
          in_ECX = local_8;
          if (((-16200.0 < *(float *)(pAVar18 + 0x1c4)) &&
              (bVar6 = CGeoZoneInfo::AddCell(DAT_11d805b0), iVar8 = local_14, in_ECX = local_8,
              bVar6)) &&
             (pCVar12 = CGeoZoneInfo::FindCell
                                  (DAT_11d805b0,*(undefined4 *)(pAVar18 + 0x1bc),
                                   *(undefined4 *)(pAVar18 + 0x1c0),*(undefined4 *)(pAVar18 + 0x1c4)
                                  ), iVar8 = local_14, in_ECX = local_8,
             pCVar12 != (CGeoCellInfo *)0x0)) {
            CellQueueType::Push((CellQueueType *)&DAT_11d805bc,pCVar12);
            iVar8 = local_14;
            in_ECX = local_8;
          }
        }
      }
    }
  }
  local_10 = 0;
LAB_1075a690:
  do {
    if (iVar8 <= local_10) break;
    local_84 = (&local_aa8)[local_10 * 3];
    local_80 = local_aa4[local_10 * 3];
    local_7c = local_aa4[local_10 * 3 + 1];
    iVar10 = FUN_107a6660();
    iVar10 = iVar10 - *(int *)DAT_11d805b0;
    local_84 = (ushort *)
               (float)(((int)(iVar10 + (iVar10 >> 0x1f & 0xfU)) >> 4) * 0x10 + 8 +
                      *(int *)DAT_11d805b0);
    iVar10 = *(int *)(DAT_11d805b0 + 8);
    iVar13 = FUN_107a6660();
    iVar13 = iVar13 - iVar10;
    local_80 = (float)(((int)(iVar13 + (iVar13 >> 0x1f & 0xfU)) >> 4) * 0x10 + 8 + iVar10);
    if (*(int *)(in_ECX + 4) == 0) {
      iVar10 = (**(code **)(**(int **)(in_ECX + 8) + 0xa8))
                         (pAVar18,local_84,local_80,local_7c,1,1,0);
      if (iVar10 != 0) {
        thunk_FUN_104419f0(0x3f800000,0);
        local_178 = 0;
        local_174 = 0;
        local_170 = 0xc47a0000;
        iVar8 = *(int *)(in_ECX + 0x10);
        (**(code **)(**(int **)(in_ECX + 8) + 0xa4))
                  (pAVar18,0,0,0xc47a0000,*(undefined4 *)(iVar8 + 0x1c8),
                   *(undefined4 *)(iVar8 + 0x1cc),*(undefined4 *)(iVar8 + 0x1d0),local_220,1,1,0,0);
        do {
          local_190 = 0;
          local_18c = 0;
          local_188 = 0xc47a0000;
          iVar8 = *(int *)(local_8 + 0x10);
          (**(code **)(**(int **)(local_8 + 8) + 0xa4))
                    (pAVar18,0,0,0xc47a0000,*(undefined4 *)(iVar8 + 0x1c8),
                     *(undefined4 *)(iVar8 + 0x1cc),*(undefined4 *)(iVar8 + 0x1d0),local_220,1,1,0,0
                    );
          if (NAN(local_1fc) || 1.0 < local_1fc == (local_1fc == 1.0)) break;
        } while (-16200.0 < *(float *)(*(int *)(local_8 + 0x10) + 0x1c4));
        if (*(float *)(*(int *)(local_8 + 0x10) + 0x1c4) < -16200.0) {
          (**(code **)(**(int **)GWarn_exref + 0x14))();
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2
                      (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
          }
          ExceptionList = local_74;
          return 0xffffffff;
        }
        bVar6 = CGeoZoneInfo::AddCell
                          (DAT_11d805b0,*(undefined4 *)(pAVar18 + 0x1bc),
                           *(undefined4 *)(pAVar18 + 0x1c0),*(undefined4 *)(pAVar18 + 0x1c4),0);
        pCVar12 = CGeoZoneInfo::FindCell
                            (DAT_11d805b0,*(undefined4 *)(pAVar18 + 0x1bc),
                             *(undefined4 *)(pAVar18 + 0x1c0),*(undefined4 *)(pAVar18 + 0x1c4));
        iVar8 = local_14;
        if ((bVar6) && (pCVar12 != (CGeoCellInfo *)0x0)) {
          CellQueueType::Push((CellQueueType *)&DAT_11d805bc,pCVar12);
          iVar8 = local_14;
        }
      }
    }
    else {
      (**(code **)(**(int **)(in_ECX + 8) + 0xa8))(pAVar18,local_84,local_80);
      CGeoZoneInfo::AddCell
                (DAT_11d805b0,*(undefined4 *)(pAVar18 + 0x1bc),*(undefined4 *)(pAVar18 + 0x1c0),
                 *(undefined4 *)(pAVar18 + 0x1c4),0);
      pCVar12 = CGeoZoneInfo::FindCell
                          (DAT_11d805b0,*(undefined4 *)(pAVar18 + 0x1bc),
                           *(undefined4 *)(pAVar18 + 0x1c0),*(undefined4 *)(pAVar18 + 0x1c4));
      if (pCVar12 != (CGeoCellInfo *)0x0) {
        CellQueueType::Push((CellQueueType *)&DAT_11d805bc,pCVar12);
        local_10 = local_10 + 1;
        in_ECX = local_8;
        goto LAB_1075a690;
      }
    }
    local_10 = local_10 + 1;
    in_ECX = local_8;
  } while( true );
  if (local_68 != 0) {
    _sprintf((char *)local_2f8,"%d_%d_BuildTest_1_TopMostCells",iVar9,this);
    thunk_FUN_10758720(local_378,local_2f8,&DAT_108f04d8);
    pFVar14 = _fopen(local_378,"wt");
    local_5c = 0;
    for (iVar8 = 0; local_8c = iVar8, iVar8 < 0x7f0; iVar8 = iVar8 + 1) {
      (**(code **)(**(int **)GWarn_exref + 0x18))();
      local_34 = (ushort *)0x0;
      while ((int)local_34 < 0x7f0) {
        if (local_5c != 0) {
          _fprintf(pFVar14,"\n");
        }
        local_5c = 0;
        local_b0 = 0;
        local_fc = 0;
        local_ec = -0x8000;
        local_94 = 0;
        iVar10 = *(int *)(DAT_11d805b0 + (int)(local_34 + iVar8 * 0x400) * 4 + 0x1c);
        while (iVar13 = iVar10, iVar13 != 0) {
          if (local_ec < *(int *)(iVar13 + 0xc)) {
            local_ec = *(int *)(iVar13 + 0xc);
            local_b0 = iVar13;
          }
          if (*(int *)(iVar13 + 0x44) == 0) {
            local_94 = local_94 + 1;
            iVar10 = *(int *)(iVar13 + 0x3c);
          }
          else {
            local_94 = local_94 + 1;
            iVar10 = *(int *)(iVar13 + 0x3c);
            local_fc = iVar13;
          }
        }
        iVar10 = iVar8;
        puVar15 = local_34;
        if (local_b0 == 0) {
          pcVar23 = "- Empty Cell ( %d , %d )\n";
LAB_1075aaff:
          _fprintf(pFVar14,pcVar23,iVar10,puVar15);
          local_5c = 1;
          local_34 = (ushort *)((int)local_34 + 1);
          pAVar18 = local_1c;
        }
        else {
          if (local_fc == 0) {
            pcVar23 = "- No Droping Cell ( %d , %d ) \n";
            goto LAB_1075aaff;
          }
          local_24 = (float)(*(int *)(local_b0 + 0xc) * 8);
          local_18 = (float)(*(int *)(local_fc + 0xc) * 8);
          if ((local_b0 != local_fc) || (local_24 != local_18)) {
            _fprintf(pFVar14,
                     "# ( i:%d , j:%d , NumOfCell:%d ) TopMostHeight = %d, DropingCellHeight = %d   Diff = %d\n"
                    );
            local_5c = 1;
          }
          local_238 = (float)((iVar9 + -0x14) * 0x8000);
          local_234 = (float)((int)(this + -0x12) * 0x8000);
          local_120 = local_238 + (float)local_8c * 16.0 + 8.0;
          local_11c = (float)(int)local_34 * 16.0 + local_234 + 8.0;
          local_118 = 0x466a6000;
          local_c = (ushort *)local_11c;
          (**(code **)(**(int **)(local_8 + 8) + 0xa8))
                    (pAVar18,local_120,local_11c,0x466a6000,1,1,0);
          thunk_FUN_104419f0(0x3f800000,0);
          do {
            pAVar18 = local_1c;
            local_12c = 0;
            local_128 = 0;
            local_124 = 0xc6ea6000;
            iVar8 = *(int *)(local_8 + 0x10);
            (**(code **)(**(int **)(local_8 + 8) + 0xa4))
                      (local_1c,0,0,0xc6ea6000,*(undefined4 *)(iVar8 + 0x1c8),
                       *(undefined4 *)(iVar8 + 0x1cc),*(undefined4 *)(iVar8 + 0x1d0),local_220,1,1,0
                       ,0);
            if (NAN(local_1fc) || 1.0 < local_1fc == (local_1fc == 1.0)) break;
          } while (-16200.0 < *(float *)(pAVar18 + 0x1c4));
          iVar8 = FUN_107a6660();
          iVar13 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
          iVar10 = (int)local_24 + iVar13 * -8;
          local_c = (ushort *)((int)local_18 + iVar13 * -8);
          iVar8 = iVar10;
          if (iVar10 < 0) {
            iVar8 = -iVar10;
          }
          if (8 < iVar8) {
LAB_1075ad14:
            _fprintf(pFVar14,"* NumOfCell: %d\n",local_94);
            _fprintf(pFVar14,"* TestData < X:%f Y:%f Z:%f >  Height:%d\n",
                     (double)*(float *)(pAVar18 + 0x1bc),(double)*(float *)(pAVar18 + 0x1c0),
                     SUB84((double)*(float *)(pAVar18 + 0x1c4),0),
                     (int)((ulonglong)(double)*(float *)(pAVar18 + 0x1c4) >> 0x20),iVar13 * 8);
            puVar15 = local_34;
            iVar8 = local_8c;
            _fprintf(pFVar14,"* TopMostData  ( %d , %d )  Height:%d\n",local_8c,local_34,local_24);
            _fprintf(pFVar14,"* DropData ( %d , %d ) Height:%d\n",iVar8,puVar15,local_18);
            pcVar23 = "* HeightDiff=%d   Test&DropDiff=%d\n";
            puVar15 = local_c;
            goto LAB_1075aaff;
          }
          puVar15 = local_c;
          if ((int)local_c < 0) {
            puVar15 = (ushort *)-(int)local_c;
          }
          if (8 < (int)puVar15) goto LAB_1075ad14;
          local_34 = (ushort *)((int)local_34 + 1);
          pAVar18 = local_1c;
          iVar8 = local_8c;
        }
      }
    }
    fVar22 = (float10)thunk_FUN_104da1f0();
    _fprintf(pFVar14,"\nBuild world time %.2f seconds",SUB84((double)(fVar22 + (float10)local_c8),0)
             ,(int)((ulonglong)(double)(fVar22 + (float10)local_c8) >> 0x20));
    _fprintf(pFVar14,"\n...");
    _fclose(pFVar14);
    in_ECX = local_8;
  }
  local_c0 = 0;
  local_c = (ushort *)DAT_11d805c4;
  if (local_e4 != 0) {
LAB_1075adf2:
    if (0 < (int)DAT_11d805c4) {
      iVar8 = **(int **)GWarn_exref;
      FUN_107a6660(0x400,L"Calculating WorldStructure");
      (**(code **)(iVar8 + 0x18))();
      fVar16 = DAT_11d805bc;
      local_c = (ushort *)DAT_11d805c4;
      local_c0 = local_c0 + 1;
      local_24 = DAT_11d805bc;
      DAT_11d805c4 = (float)((int)DAT_11d805c4 + -1);
      local_48 = *(float *)((int)DAT_11d805bc + 0x10);
      local_44 = *(float *)((int)DAT_11d805bc + 0x14);
      local_18 = 1.0;
      local_40 = *(float *)((int)DAT_11d805bc + 0x18) + 1.0;
      DAT_11d805bc = *(float *)((int)DAT_11d805bc + 0x40);
      iVar8 = (**(code **)(**(int **)(local_8 + 8) + 0xa8))
                        (pAVar18,local_48,local_44,local_40,1,1,0);
      in_ECX = local_8;
      if (iVar8 != 0) {
        iVar8 = 0;
LAB_1075aeb7:
        do {
          in_ECX = local_8;
          local_150 = iVar8;
          if (3 < iVar8) break;
          local_28 = (CGeoZoneInfo *)((&DAT_108f0198)[iVar8 * 2] << 4);
          local_dc = (float)(int)local_28 + local_48;
          if (((float)local_cc <= local_dc) && (local_dc <= (float)local_a8)) {
            local_28 = (CGeoZoneInfo *)((&DAT_108f019c)[iVar8 * 2] << 4);
            local_d8 = (float)(int)local_28 + local_44;
            if (((float)local_bc <= local_d8) && (local_d8 <= (float)local_d0)) {
              (**(code **)(**(int **)(local_8 + 8) + 0xa8))
                        (pAVar18,local_48,local_44,local_40,1,1,0);
              pFVar5 = local_8;
              if (*(int *)(local_8 + 4) != 0) {
                (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(local_8 + 4) + 0x3c) + 0xe4) +
                                       0x74) + 0x68))(0x41200000);
              }
              piVar3 = *(int **)(pFVar5 + 4);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 0xa4))(1);
              }
              iVar10 = APawn::L2walkReachable(pAVar18,local_dc,local_d8,local_d4,0,0);
              fVar16 = local_24;
              if (iVar10 == 0) {
                *(undefined4 *)((int)local_24 + 0x1c + iVar8 * 4) = 0;
                iVar10 = APawn::L2walkReachable2(pAVar18,local_dc,local_d8,local_d4,0,0);
                if (iVar10 != 0) {
                  if (*(int *)(local_8 + 4) != 0) {
                    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(local_8 + 4) + 0x3c) + 0xe4)
                                           + 0x74) + 0x68))(0x41200000);
                  }
                  if (-16200.0 < *(float *)(pAVar18 + 0x1c4)) {
                    local_258 = local_40 - local_18;
                    CGeoZoneInfo::SetReachability
                              (DAT_11d805b0,local_48,local_44,local_258,
                               *(undefined4 *)(pAVar18 + 0x1bc),*(undefined4 *)(pAVar18 + 0x1c0),
                               *(undefined4 *)(pAVar18 + 0x1c4),iVar8,0);
                  }
                }
              }
              else {
                iVar10 = *(int *)(pFVar5 + 4);
                if (iVar10 != 0) {
                  (**(code **)(**(int **)(*(int *)(*(int *)(iVar10 + 0x3c) + 0xe4) + 0x74) + 0x68))
                            (0x41200000);
                }
                fVar16 = local_24;
                if (-16200.0 < *(float *)(pAVar18 + 0x1c4)) {
                  local_24c = local_40 - local_18;
                  CGeoZoneInfo::SetReachability
                            (DAT_11d805b0,local_48,local_44,local_24c,
                             *(undefined4 *)(pAVar18 + 0x1bc),*(undefined4 *)(pAVar18 + 0x1c0),
                             *(undefined4 *)(pAVar18 + 0x1c4),iVar8,1);
                  fVar16 = local_24;
                }
              }
              if (*(int **)(local_8 + 4) != (int *)0x0) {
                (**(code **)(**(int **)(local_8 + 4) + 0xa4))(1);
              }
              iVar8 = iVar8 + 1;
              goto LAB_1075aeb7;
            }
          }
          *(undefined4 *)((int)fVar16 + 0x1c + iVar8 * 4) = 1;
          iVar8 = iVar8 + 1;
        } while( true );
      }
      goto LAB_1075adf2;
    }
    if (local_68 != 0) {
      _sprintf(local_378,"%d_%d_BuildTest_2_WithWalk",iVar9,this);
      thunk_FUN_10758720(local_2f8,local_378,&DAT_108f04d8);
      pFVar14 = _fopen((char *)local_2f8,"wt");
      local_4c = 0;
      for (local_2c = 0; local_2c < 0x7f0; local_2c = local_2c + 1) {
        (**(code **)(**(int **)GWarn_exref + 0x18))();
        local_88 = 0.0;
        while (fVar16 = local_88, (int)local_88 < 0x7f0) {
          if (local_4c != 0) {
            _fprintf(pFVar14,"\n");
          }
          local_4c = 0;
          local_ac = 0;
          local_f0 = 0;
          local_e8 = -0x8000;
          local_90 = 0;
          iVar8 = *(int *)(DAT_11d805b0 + (local_2c * 0x800 + (int)fVar16) * 4 + 0x1c);
          while (iVar10 = iVar8, iVar10 != 0) {
            if (local_e8 < *(int *)(iVar10 + 0xc)) {
              local_e8 = *(int *)(iVar10 + 0xc);
              local_ac = iVar10;
            }
            if (*(int *)(iVar10 + 0x44) == 0) {
              local_90 = local_90 + 1;
              iVar8 = *(int *)(iVar10 + 0x3c);
            }
            else {
              local_90 = local_90 + 1;
              iVar8 = *(int *)(iVar10 + 0x3c);
              local_f0 = iVar10;
            }
          }
          iVar8 = local_2c;
          fVar24 = fVar16;
          if (local_ac == 0) {
            pcVar23 = "- Empty Cell ( %d , %d )\n";
LAB_1075b289:
            _fprintf(pFVar14,pcVar23,iVar8,fVar24);
            local_4c = 1;
            local_88 = (float)((int)fVar16 + 1);
            pAVar18 = local_1c;
          }
          else {
            if (local_f0 == 0) {
              pcVar23 = "- No Droping Cell ( %d , %d ) \n";
              goto LAB_1075b289;
            }
            local_c = (ushort *)(*(int *)(local_ac + 0xc) * 8);
            local_18 = (float)(*(int *)(local_f0 + 0xc) * 8);
            if ((local_ac != local_f0) || (local_c != (ushort *)local_18)) {
              _fprintf(pFVar14,
                       "# ( i:%d , j:%d , NumOfCell:%d ) TopMostHeight = %d, DropingCellHeight = %d   Diff = %d\n"
                      );
              local_4c = 1;
            }
            local_22c = (float)((iVar9 + -0x14) * 0x8000);
            local_228 = (float)((int)(this + -0x12) * 0x8000);
            local_1c8 = local_22c + (float)local_2c * 16.0 + 8.0;
            local_1c4 = (CGeoZoneInfo *)((float)(int)local_88 * 16.0 + local_228 + 8.0);
            local_1c0 = 0x466a6000;
            local_28 = local_1c4;
            (**(code **)(**(int **)(local_8 + 8) + 0xa8))
                      (pAVar18,local_1c8,local_1c4,0x466a6000,1,1,0);
            thunk_FUN_104419f0(0x3f800000,0);
            do {
              pAVar18 = local_1c;
              local_1e0 = 0;
              local_1dc = 0;
              local_1d8 = 0xc6ea6000;
              iVar8 = *(int *)(local_8 + 0x10);
              (**(code **)(**(int **)(local_8 + 8) + 0xa4))
                        (local_1c,0,0,0xc6ea6000,*(undefined4 *)(iVar8 + 0x1c8),
                         *(undefined4 *)(iVar8 + 0x1cc),*(undefined4 *)(iVar8 + 0x1d0),local_220,1,1
                         ,0,0);
              if (NAN(local_1fc) || 1.0 < local_1fc == (local_1fc == 1.0)) break;
            } while (-16200.0 < *(float *)(pAVar18 + 0x1c4));
            iVar8 = FUN_107a6660();
            iVar13 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
            iVar8 = (int)local_c + iVar13 * -8;
            local_24 = (float)((int)local_18 + iVar13 * -8);
            iVar10 = iVar8;
            if (iVar8 < 0) {
              iVar10 = -iVar8;
            }
            if (8 < iVar10) {
LAB_1075b4a4:
              _fprintf(pFVar14,"* NumOfCell: %d\n",local_90);
              _fprintf(pFVar14,"* TestData < X:%f Y:%f Z:%f >  Height:%d\n",
                       (double)*(float *)(pAVar18 + 0x1bc),(double)*(float *)(pAVar18 + 0x1c0),
                       SUB84((double)*(float *)(pAVar18 + 0x1c4),0),
                       (int)((ulonglong)(double)*(float *)(pAVar18 + 0x1c4) >> 0x20),iVar13 * 8);
              iVar10 = local_2c;
              fVar16 = local_88;
              _fprintf(pFVar14,"* TopMostData  ( %d , %d )  Height:%d\n",local_2c,local_88,local_c);
              _fprintf(pFVar14,"* DropData ( %d , %d ) Height:%d\n",iVar10,fVar16,local_18);
              pcVar23 = "* HeightDiff=%d   Test&DropDiff=%d\n";
              fVar24 = local_24;
              goto LAB_1075b289;
            }
            fVar16 = local_24;
            if ((int)local_24 < 0) {
              fVar16 = (float)-(int)local_24;
            }
            if (8 < (int)fVar16) goto LAB_1075b4a4;
            local_88 = (float)((int)local_88 + 1);
            pAVar18 = local_1c;
          }
        }
      }
      fVar22 = (float10)thunk_FUN_104da1f0();
      _fprintf(pFVar14,"\nBuild world time %.2f seconds",
               SUB84((double)(fVar22 + (float10)local_c8),0),
               (int)((ulonglong)(double)(fVar22 + (float10)local_c8) >> 0x20));
      _fprintf(pFVar14,"\n...");
      _fclose(pFVar14);
      in_ECX = local_8;
    }
  }
  if (local_f8 == 0) {
LAB_1075b99e:
    if (local_68 != 0) {
      iVar8 = thunk_FUN_1032ffc0(0xd00020);
      local_6c._0_1_ = 2;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = thunk_FUN_1072bc50();
      }
      local_6c = (uint)local_6c._1_3_ << 8;
      cVar7 = thunk_FUN_1043d470(iVar9,this);
      if (cVar7 == '\0') {
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
        }
        _sprintf(local_378,"%d_%d_Not_Found_Geo.txt",iVar9,this);
        pFVar14 = _fopen(local_378,"wt");
        _fclose(pFVar14);
        if (iVar8 != 0) {
          thunk_FUN_10758fa0(1);
        }
        (**(code **)(**(int **)GWarn_exref + 0x14))();
      }
      else {
        _sprintf(local_378,"%d_%d_CompareBuiltDataWithGeo",iVar9,this);
        thunk_FUN_10758720(local_5f8,local_378,&DAT_108f04d8);
        pFVar14 = _fopen(local_5f8,"wt");
        local_26c = (float)((iVar9 + -0x14) * 0x8000);
        local_60 = 0;
        for (local_30 = 0; local_30 < 0xfe; local_30 = local_30 + 1) {
          (**(code **)(**(int **)GWarn_exref + 0x18))();
          for (local_38 = 0; local_38 < 0xfe; local_38 = local_38 + 1) {
            iVar9 = (local_30 * 0x100 + local_38) * 0xd0 + iVar8;
            local_278 = (float)local_30 * 128.0 + local_26c;
            local_54 = 0;
            for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
              for (local_64 = 0; local_64 < 8; local_64 = local_64 + 1) {
                if (local_60 != 0) {
                  _fprintf(pFVar14,"\n");
                }
                local_60 = 0;
                if (*(char *)(iVar9 + 0xc9) == '\0') {
                  if (*(char *)(iVar9 + 200) == '\0') {
                    iVar10 = (int)*(char *)(local_50 + local_64 * 8 + iVar9);
                    param_3 = (UViewport *)0xffff8000;
                    local_14c = -0x8000;
                    for (local_1e4 = 0; local_1e4 < iVar10; local_1e4 = local_1e4 + 1) {
                      iVar13 = (int)(short)(*(ushort *)
                                             (*(int *)(iVar8 + 0xd00000) +
                                             (*(int *)(iVar9 + 0xc4) + local_1e4 + local_54) * 2) &
                                           DAT_11d805b8) >> 1;
                      if ((int)param_3 < iVar13) {
                        param_3 = (UViewport *)iVar13;
                        local_14c = iVar13;
                      }
                    }
                    local_54 = local_54 + -1 + iVar10;
                  }
                  else {
                    param_3 = (UViewport *)
                              ((int)(short)(DAT_11d805b8 &
                                           *(ushort *)
                                            (*(int *)(iVar8 + 0xd00000) +
                                            (*(int *)(iVar9 + 0xc4) + local_54) * 2)) >> 1);
                  }
                }
                else {
                  param_3 = (UViewport *)(int)*(short *)(iVar9 + 0xca);
                }
                local_28 = (CGeoZoneInfo *)(local_50 + local_30 * 8);
                iVar10 = local_64 + local_38 * 8;
                iVar13 = *(int *)(DAT_11d805b0 + ((int)local_28 * 0x800 + iVar10) * 4 + 0x1c);
                iVar17 = 0;
                local_130 = 0;
                local_b4 = 0;
                iVar20 = -0x8000;
                local_154 = -0x8000;
                local_9c = 0;
                for (; iVar13 != 0; iVar13 = *(int *)(iVar13 + 0x3c)) {
                  iVar19 = *(int *)(iVar13 + 0xc);
                  if (iVar20 < iVar19) {
                    iVar17 = iVar13;
                    iVar20 = iVar19;
                    local_154 = iVar19;
                    local_130 = iVar13;
                  }
                  if (*(int *)(iVar13 + 0x44) != 0) {
                    local_b4 = iVar13;
                  }
                  local_9c = local_9c + 1;
                }
                if (iVar17 == 0) {
                  _fprintf(pFVar14,"- Empty Cell ( %d , %d )\n",local_30,local_38);
LAB_1075be31:
                  local_60 = 1;
                }
                else {
                  if (local_b4 == 0) {
                    _fprintf(pFVar14,"- No Droping Cell ( %d , %d ) \n",local_30,local_38);
                    goto LAB_1075be31;
                  }
                  iVar13 = *(int *)(iVar17 + 0xc) * 8;
                  iVar20 = *(int *)(local_b4 + 0xc) * 8;
                  if ((iVar17 != local_b4) || (iVar13 != iVar20)) {
                    _fprintf(pFVar14,
                             "# ( i:%d , j:%d , NumOfCell:%d ) TopMostHeight = %d, DropingCellHeight = %d   Diff = %d\n"
                            );
                    local_60 = 1;
                  }
                  local_18 = (float)(iVar13 - (int)param_3);
                  local_c = (ushort *)(iVar20 - (int)param_3);
                  if (*(char *)(iVar9 + 0xc9) == '\0') {
                    fVar16 = local_18;
                    if ((int)local_18 < 0) {
                      fVar16 = (float)-(int)local_18;
                    }
                    if ((int)fVar16 < 9) {
                      fVar16 = (float)local_c;
                      if ((int)local_c < 0) {
                        fVar16 = (float)-(int)local_c;
                      }
                      bVar21 = SBORROW4((int)fVar16,8);
                      iVar17 = (int)fVar16 + -8;
                      bVar6 = fVar16 == 1.12104e-44;
                      goto LAB_1075bd69;
                    }
LAB_1075bd6f:
                    if (*(char *)(iVar9 + 0xc9) == '\0') {
                      if (*(char *)(iVar9 + 200) == '\0') {
                        pwVar25 = L"Multi Layer";
                      }
                      else {
                        pwVar25 = L"Single Layer";
                      }
                    }
                    else {
                      pwVar25 = L"Solid Sector";
                    }
                    appSprintf(local_2f8,(ushort *)pwVar25);
                    iVar17 = local_9c;
                    pcVar23 = appToAnsi(local_2f8,(char *)0x0);
                    _fprintf(pFVar14,"*  < %s > NumOfCell: %d\n",pcVar23,iVar17);
                    _fprintf(pFVar14,"* GeoData ( i=%d , j=%d : x=%d , y=%d  )  Height:%d\n",
                             local_30,local_38,local_50,local_64,param_3);
                    pCVar4 = local_28;
                    _fprintf(pFVar14,"* TopMostData  ( %d , %d )  Height:%d\n",local_28,iVar10,
                             iVar13);
                    _fprintf(pFVar14,"* DropData ( %d , %d ) Height:%d\n",pCVar4,iVar10,iVar20);
                    _fprintf(pFVar14,"* HeightDiff=%d    Test&DropDiff=%d\n");
                    goto LAB_1075be31;
                  }
                  fVar16 = local_18;
                  if ((int)local_18 < 0) {
                    fVar16 = (float)-(int)local_18;
                  }
                  if (0x20 < (int)fVar16) goto LAB_1075bd6f;
                  fVar16 = (float)local_c;
                  if ((int)local_c < 0) {
                    fVar16 = (float)-(int)local_c;
                  }
                  bVar21 = SBORROW4((int)fVar16,0x20);
                  iVar17 = (int)fVar16 + -0x20;
                  bVar6 = fVar16 == 4.48416e-44;
LAB_1075bd69:
                  if (!bVar6 && bVar21 == iVar17 < 0) goto LAB_1075bd6f;
                }
                local_54 = local_54 + 1;
                pAVar18 = local_1c;
              }
            }
            in_ECX = local_8;
          }
        }
        fVar22 = (float10)thunk_FUN_104da1f0();
        _fprintf(pFVar14,"\nBuild world time %.2f seconds",
                 SUB84((double)(fVar22 + (float10)local_c8),0),
                 (int)((ulonglong)(double)(fVar22 + (float10)local_c8) >> 0x20));
        _fprintf(pFVar14,"\n...");
        _fclose(pFVar14);
      }
    }
  }
  else {
    if ((param_5 != 0) || (*(int *)GIsEditor_exref != 0)) {
      FWorldBuilder::ComboPostProcessing(in_ECX,param_3);
    }
    if (local_68 != 0) {
      _sprintf(local_378,"%d_%d_BuildTest_3_AfterPostprocessing",iVar9,this);
      thunk_FUN_10758720(local_2f8,local_378,&DAT_108f04d8);
      pFVar14 = _fopen((char *)local_2f8,"wt");
      local_58 = 0;
      for (local_20 = 0; local_20 < 0x7f0; local_20 = local_20 + 1) {
        (**(code **)(**(int **)GWarn_exref + 0x18))();
        local_a0 = 0;
        while (iVar8 = local_a0, local_a0 < 0x7f0) {
          if (local_58 != 0) {
            _fprintf(pFVar14,"\n");
          }
          local_58 = 0;
          local_a4 = 0;
          local_e0 = 0;
          local_f4 = -0x8000;
          local_98 = 0;
          iVar10 = *(int *)(DAT_11d805b0 + (local_20 * 0x800 + iVar8) * 4 + 0x1c);
          while (iVar13 = iVar10, iVar13 != 0) {
            if (local_f4 < *(int *)(iVar13 + 0xc)) {
              local_f4 = *(int *)(iVar13 + 0xc);
              local_a4 = iVar13;
            }
            if (*(int *)(iVar13 + 0x44) == 0) {
              local_98 = local_98 + 1;
              iVar10 = *(int *)(iVar13 + 0x3c);
            }
            else {
              local_98 = local_98 + 1;
              iVar10 = *(int *)(iVar13 + 0x3c);
              local_e0 = iVar13;
            }
          }
          iVar10 = local_20;
          iVar13 = iVar8;
          if (local_a4 == 0) {
            pcVar23 = "- Empty Cell ( %d , %d )\n";
LAB_1075b6b9:
            _fprintf(pFVar14,pcVar23,iVar10,iVar13);
            local_58 = 1;
            local_a0 = iVar8 + 1;
            pAVar18 = local_1c;
          }
          else {
            if (local_e0 == 0) {
              pcVar23 = "- No Droping Cell ( %d , %d ) \n";
              goto LAB_1075b6b9;
            }
            iVar17 = *(int *)(local_a4 + 0xc) * 8;
            iVar20 = *(int *)(local_e0 + 0xc) * 8;
            if ((local_a4 != local_e0) || (iVar17 != iVar20)) {
              _fprintf(pFVar14,
                       "# ( i:%d , j:%d , NumOfCell:%d ) TopMostHeight = %d, DropingCellHeight = %d   Diff = %d\n"
                      );
              local_58 = 1;
            }
            local_244 = (float)((iVar9 + -0x14) * 0x8000);
            local_240 = (float)((int)(this + -0x12) * 0x8000);
            local_1f0 = local_244 + (float)local_20 * 16.0 + 8.0;
            local_1ec = (CGeoZoneInfo *)((float)local_a0 * 16.0 + local_240 + 8.0);
            local_1e8 = 0x466a6000;
            local_28 = local_1ec;
            (**(code **)(**(int **)(local_8 + 8) + 0xa8))
                      (pAVar18,local_1f0,local_1ec,0x466a6000,1,1,0);
            thunk_FUN_104419f0(0x3f800000,0);
            do {
              pAVar18 = local_1c;
              local_19c = 0;
              local_198 = 0;
              local_194 = 0xc6ea6000;
              iVar8 = *(int *)(local_8 + 0x10);
              (**(code **)(**(int **)(local_8 + 8) + 0xa4))
                        (local_1c,0,0,0xc6ea6000,*(undefined4 *)(iVar8 + 0x1c8),
                         *(undefined4 *)(iVar8 + 0x1cc),*(undefined4 *)(iVar8 + 0x1d0),local_220,1,1
                         ,0,0);
              if (NAN(local_1fc) || 1.0 < local_1fc == (local_1fc == 1.0)) break;
            } while (-16200.0 < *(float *)(pAVar18 + 0x1c4));
            iVar8 = FUN_107a6660();
            iVar19 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
            iVar10 = iVar17 + iVar19 * -8;
            iVar13 = iVar20 + iVar19 * -8;
            iVar8 = iVar10;
            if (iVar10 < 0) {
              iVar8 = -iVar10;
            }
            if (8 < iVar8) {
LAB_1075b8d6:
              _fprintf(pFVar14,"* NumOfCell: %d\n",local_98);
              _fprintf(pFVar14,"* TestData < X:%f Y:%f Z:%f >  Height:%d\n",
                       (double)*(float *)(local_1c + 0x1bc),(double)*(float *)(local_1c + 0x1c0),
                       SUB84((double)*(float *)(local_1c + 0x1c4),0),
                       (int)((ulonglong)(double)*(float *)(local_1c + 0x1c4) >> 0x20),iVar19 * 8);
              iVar8 = local_a0;
              _fprintf(pFVar14,"* TopMostData  ( %d , %d )  Height:%d\n",local_20,local_a0,iVar17);
              _fprintf(pFVar14,"* DropData ( %d , %d ) Height:%d\n",local_20,iVar8,iVar20);
              pcVar23 = "* HeightDiff=%d   Test&DropDiff=%d\n";
              goto LAB_1075b6b9;
            }
            iVar8 = iVar13;
            if (iVar13 < 0) {
              iVar8 = -iVar13;
            }
            if (8 < iVar8) goto LAB_1075b8d6;
            local_a0 = local_a0 + 1;
            pAVar18 = local_1c;
          }
        }
      }
      fVar22 = (float10)thunk_FUN_104da1f0();
      _fprintf(pFVar14,"\nBuild world time %.2f seconds",
               SUB84((double)(fVar22 + (float10)local_c8),0),
               (int)((ulonglong)(double)(fVar22 + (float10)local_c8) >> 0x20));
      _fprintf(pFVar14,"\n...");
      _fclose(pFVar14);
      in_ECX = local_8;
      goto LAB_1075b99e;
    }
  }
  if (*(int *)(in_ECX + 4) == 0) {
    _sprintf(local_ba8,"%S_path.txt",local_578);
    pFVar14 = _fopen(local_ba8,"wt");
    _fprintf(pFVar14,"total : %d\n");
    _fprintf(pFVar14,"visited : %d\n",*(undefined4 *)(DAT_11d805b0 + 0x200001c));
    _fprintf(pFVar14,"(%d, %d) ~ (%d, %d)\n",*(undefined4 *)DAT_11d805b0,
             *(undefined4 *)(DAT_11d805b0 + 8),*(undefined4 *)(DAT_11d805b0 + 4),
             *(undefined4 *)(DAT_11d805b0 + 0xc));
    _fprintf(pFVar14,"cellsize : %d\n",0x10);
    _fprintf(pFVar14,"heightunit : %d\n");
    local_b8 = 0;
    for (local_10 = 0; local_10 < 0x800; local_10 = local_10 + 1) {
      for (local_3c = 0; local_3c < 0x800; local_3c = local_3c + 1) {
        local_b8 = local_b8 + 1;
        iVar8 = local_10 * 0x800 + local_3c;
        _fprintf(pFVar14,"\n[%d,%d]%d",local_10,local_3c,
                 *(undefined4 *)(DAT_11d805b0 + iVar8 * 4 + 0x100001c));
        iVar8 = *(int *)(DAT_11d805b0 + iVar8 * 4 + 0x1c);
        if (iVar8 != 0) {
          for (; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x3c)) {
            _fprintf(pFVar14,"(%d:%d%d%d%d)",*(int *)(iVar8 + 0xc) * 8,*(undefined4 *)(iVar8 + 0x1c)
                     ,*(undefined4 *)(iVar8 + 0x20),*(undefined4 *)(iVar8 + 0x24),
                     *(undefined4 *)(iVar8 + 0x28));
          }
        }
      }
    }
    _fprintf(pFVar14,"\n\noutput : %d\n",local_b8);
    _fclose(pFVar14);
    in_ECX = local_8;
    if (*(int *)(local_8 + 4) == 0) {
      (**(code **)(**(int **)(local_8 + 8) + 0xac))
                (*(undefined4 *)(*(int *)(local_8 + 0x10) + 0x14d8),0);
      (**(code **)(**(int **)(local_8 + 8) + 0xac))();
      goto LAB_1075c069;
    }
  }
  (**(code **)(**(int **)(in_ECX + 8) + 0xa8))(pAVar18,local_84,local_80,local_7c,1,1,0);
LAB_1075c069:
  fVar22 = (float10)thunk_FUN_104da1f0();
  local_c8 = (double)(fVar22 + (float10)local_c8);
  if ((*(int *)GLog_exref != 0) &&
     (FOutputDevice::Logf2(*(FOutputDevice **)in_ECX,*(ushort **)GLog_exref),
     *(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
  }
  (**(code **)(**(int **)GWarn_exref + 0x14))();
  ExceptionList = local_74;
  return 1;
}


// ==== 1075c0cd Catch@1075c0cd

void Catch_1075c0cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x138) = *(undefined4 *)(unaff_EBP + -0x1e0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x138,&DAT_10914c48);
}


// ==== 1075c0ea Catch@1075c0ea

void Catch_1075c0ea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FWorldBuilder::buildWorldStructure");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075ca00 FUN_1075ca00

char * FUN_1075ca00(void)

{
  int iVar1;
  int *in_ECX;
  char acStack_108 [4];
  undefined1 local_100 [256];
  
  if (in_ECX != (int *)0x0) {
    acStack_108[0] = '\0';
    acStack_108[1] = '\x01';
    acStack_108[2] = '\0';
    acStack_108[3] = '\0';
    iVar1 = (**(code **)(*in_ECX + 0x14))(local_100);
    if (iVar1 != 0) {
      iVar1 = __stricmp(acStack_108,"Logitech iFeel Mouse");
      if ((iVar1 != 0) && (iVar1 = __stricmp(acStack_108,"Logitech iFeel MouseMan"), iVar1 != 0)) {
        return "../ForceFeedback/other.ifr";
      }
      return "../ForceFeedback/ifeel.ifr";
    }
  }
  return "../ForceFeedback/other.ifr";
}


// ==== 1075ca90 FUN_1075ca90

void FUN_1075ca90(byte param_1)

{
  CImmProject *in_ECX;
  
  CImmProject::~CImmProject(in_ECX);
  if ((param_1 & 1) != 0) {
    thunk_FUN_103254a0();
  }
  return;
}


// ==== 1075cb10 FUN_1075cb10

void FUN_1075cb10(void)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = CImmProject::GetNumEffects(DAT_11d805d4);
  if (0 < iVar1) {
    do {
      pcVar2 = CImmProject::GetEffectName(DAT_11d805d4,iVar4);
      uVar3 = CImmProject::GetEffectType(DAT_11d805d4,pcVar2);
      if (uVar3 == 8) {
        CImmProject::CreateEffectByIndex(DAT_11d805d4,iVar4,(CImmDevice *)0x0,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


// ==== 1075cb80 FUN_1075cb80

void FUN_1075cb80(void)

{
  int iVar1;
  
  iVar1 = DAT_11d805d4;
  if (DAT_11d805d4 != 0) {
    CImmProject::~CImmProject((CImmProject *)DAT_11d805d4);
    thunk_FUN_103254a0(iVar1);
    DAT_11d805d4 = 0;
  }
  if (DAT_11d805d0 != (undefined4 *)0x0) {
    (**(code **)*DAT_11d805d0)(1);
    DAT_11d805d0 = (undefined4 *)0x0;
  }
  return;
}


// ==== 1075cbe0 FUN_1075cbe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1075cbe0(void)

{
  HWND pHVar1;
  CImmProject *this;
  char *pcVar2;
  int iVar3;
  CImmDevice *pCVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082ff7b;
  local_c = ExceptionList;
  if (DAT_11d805d0 == 0) {
    ExceptionList = &local_c;
    pHVar1 = GetActiveWindow();
    DAT_11d805d0 = (int)CImmDevice::CreateDevice(DAT_10b221e8,pHVar1);
    if ((CImmDevice *)DAT_11d805d0 != (CImmDevice *)0x0) {
      this = (CImmProject *)thunk_FUN_1032ffc0(0x214);
      local_4 = 0;
      if (this == (CImmProject *)0x0) {
        DAT_11d805d4 = (CImmProject *)0x0;
      }
      else {
        DAT_11d805d4 = (CImmProject *)CImmProject::CImmProject(this);
      }
      local_4 = 0xffffffff;
      pCVar4 = (CImmDevice *)DAT_11d805d0;
      pcVar2 = (char *)FUN_1075ca00(DAT_11d805d0,this);
      iVar3 = CImmProject::OpenFile(DAT_11d805d4,pcVar2,pCVar4);
      if (iVar3 == 0) {
        thunk_FUN_1075cb80();
        ExceptionList = local_c;
        return;
      }
      thunk_FUN_1075cb10();
      _DAT_11d805cc = 1;
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 1075cce0 FUN_1075cce0

void FUN_1075cce0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ff90;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = **(int **)(*(int *)(in_ECX + 0x54) + 0xc0);
  ExceptionList = &local_10;
  UObject::StaticClass();
  (**(code **)(iVar1 + 0x6c))();
  ExceptionList = local_10;
  return;
}


// ==== 1075cd44 Catch@1075cd44

void Catch_1075cd44(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075cd58 Catch@1075cd58

void Catch_1075cd58(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FInBunch<<UObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075cda0 FUN_1075cda0

void FUN_1075cda0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082ffa0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x54) + 0xc0) + 0x70))();
  ExceptionList = local_10;
  return;
}


// ==== 1075cdf4 Catch@1075cdf4

void Catch_1075cdf4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075ce08 Catch@1075ce08

void Catch_1075ce08(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FInBunch<<FName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075ce50 FUN_1075ce50

void FUN_1075ce50(void)

{
  FBitWriter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1082ffb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FBitWriter::FBitWriter(in_ECX,0);
  *(undefined ***)in_ECX = FOutBunch::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1075ceb0 FUN_1075ceb0

void FUN_1075ceb0(int param_1,FBitWriter param_2)

{
  int iVar1;
  FBitWriter *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1082ffd9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FBitWriter::FBitWriter(in_ECX,*(int *)(*(int *)(param_1 + 0x34) + 200) * 8 + -0x51);
  *(undefined ***)in_ECX = FOutBunch::vftable;
  *(int *)(in_ECX + 0x50) = param_1;
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x70] = (FBitWriter)0x0;
  in_ECX[0x71] = param_2;
  in_ECX[0x72] = (FBitWriter)0x0;
  local_8 = 1;
  if (*(int *)(*(int *)(in_ECX + 0x50) + 0x3c) != 0) {
    appFailAssert("!Channel->Closing",".\\UnBunch.cpp",0x3b);
  }
  iVar1 = *(int *)(in_ECX + 0x50);
  if (*(int *)(*(int *)(iVar1 + 0x34) + 0xeac + *(int *)(iVar1 + 0x40) * 4) != iVar1) {
    appFailAssert("Channel->Connection->Channels[Channel->ChIndex]==Channel",".\\UnBunch.cpp",0x3c);
  }
  if ((int)((byte)in_ECX[0x71] + 0x7f) <= *(int *)(*(int *)(in_ECX + 0x50) + 0x58)) {
    FBitWriter::SetOverflowed(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075cf9b Catch@1075cf9b

void Catch_1075cf9b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075cfaf Catch@1075cfaf

void Catch_1075cfaf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOutBunch::FOutBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d020 FUN_1075d020

void FUN_1075d020(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1082fff0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x34) + 0xc0) + 0x70))();
  ExceptionList = local_10;
  return;
}


// ==== 1075d077 Catch@1075d077

void Catch_1075d077(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075d08b Catch@1075d08b

void Catch_1075d08b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOutBunch<<FName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d0d0 FUN_1075d0d0

void FUN_1075d0d0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830000;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = **(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x34) + 0xc0);
  ExceptionList = &local_10;
  UObject::StaticClass();
  (**(code **)(iVar1 + 0x6c))();
  ExceptionList = local_10;
  return;
}


// ==== 1075d13a Catch@1075d13a

void Catch_1075d13a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075d14e Catch@1075d14e

void Catch_1075d14e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FOutBunch<<UObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d1a0 FUN_1075d1a0

void FUN_1075d1a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  FArchive *unaff_ESI;
  undefined4 *unaff_EDI;
  bool bVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  char local_d;
  
  uStack_18 = &local_10;
  local_d = (char)((uint)*unaff_EDI >> 8);
  local_10 = local_d != '\0';
  local_f = (undefined1)((uint)unaff_EDI[2] >> 8);
  uStack_14 = 1;
  local_e = (undefined1)((uint)unaff_EDI[1] >> 8);
  uStack_1c = 0x1075d1d8;
  (**(code **)(*(int *)unaff_ESI + 8))();
  if ((char)uStack_18 == '\0') {
    uStack_18 = (undefined1 *)((uint)uStack_18 & 0xffffff);
  }
  else {
    uStack_1c = 1;
    uStack_20 = (undefined4 *)((int)&uStack_18 + 3);
    uStack_24 = 0x1075d1ee;
    (**(code **)(*(int *)unaff_ESI + 4))();
  }
  uStack_20 = &uStack_18;
  bVar3 = uStack_18._2_1_ != '\0';
  uStack_18 = (undefined1 *)CONCAT31(uStack_18._1_3_,bVar3);
  uStack_1c = 1;
  uStack_24 = 0x1075d210;
  (**(code **)(*(int *)unaff_ESI + 8))();
  if ((char)uStack_20 == '\0') {
    uStack_20._0_3_ = (uint3)(ushort)uStack_20;
  }
  else {
    uStack_24 = 1;
    (**(code **)(*(int *)unaff_ESI + 4))((int)&uStack_20 + 2);
  }
  puVar2 = &uStack_20;
  bVar3 = uStack_20._1_1_ != '\0';
  uStack_20 = (undefined4 *)CONCAT31(uStack_20._1_3_,bVar3);
  uStack_24 = 1;
  (**(code **)(*(int *)unaff_ESI + 8))();
  if ((char)puVar2 == '\0') {
    puVar2 = (undefined4 *)((uint)puVar2 & 0xffff0000);
  }
  else {
    (**(code **)(*(int *)unaff_ESI + 4))(&stack0xffffffd9,1);
  }
  iVar1 = FArchive::IsLoading(unaff_ESI);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FRotator::FRotator((FRotator *)&uStack_24,((uint)puVar2 >> 0x18) << 8,
                                ((uint)puVar2 >> 0x10 & 0xff) << 8,((uint)puVar2 >> 8 & 0xff) << 8);
    *unaff_EDI = *puVar2;
    unaff_EDI[1] = puVar2[1];
    unaff_EDI[2] = puVar2[2];
  }
  return;
}


// ==== 1075d2f0 FUN_1075d2f0

void FUN_1075d2f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830019;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UChannel::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1075d350 FUN_1075d350

void FUN_1075d350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x34) = param_1;
  *(undefined4 *)(in_ECX + 0x40) = param_2;
  *(undefined4 *)(in_ECX + 0x44) = param_3;
  *(undefined4 *)(in_ECX + 0x48) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0xd8);
  return;
}


// ==== 1075d3af Catch@1075d3af

void Catch_1075d3af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075d3c3 Catch@1075d3c3

void Catch_1075d3c3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d410 FUN_1075d410

undefined4 FUN_1075d410(void)

{
  ulong uVar1;
  int iVar2;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830040;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(UObject **)(in_ECX + 0x34) != (UObject *)0x0) {
    ExceptionList = &local_10;
    uVar1 = UObject::GetFlags(*(UObject **)(in_ECX + 0x34));
    if ((uVar1 & 2) != 0) {
      UObject::ClearFlags(in_ECX,0x800000);
      iVar2 = UObject::ConditionalDestroy(*(UObject **)(in_ECX + 0x34));
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      UObject::SetFlags(in_ECX,0x800000);
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1075d49b Catch@1075d49b

void Catch_1075d49b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075d4af Catch@1075d4af

void Catch_1075d4af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::RouteDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d500 FUN_1075d500

void FUN_1075d500(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  return;
}


// ==== 1075d547 Catch@1075d547

void Catch_1075d547(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075d55b Catch@1075d55b

void Catch_1075d55b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::SetClosingFlag");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d5a0 FUN_1075d5a0

void FUN_1075d5a0(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  byte bVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830060;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX[0xd] + 0xeac + in_ECX[0x10] * 4) != in_ECX) {
    ExceptionList = &local_10;
    appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0xaa);
  }
  for (iVar3 = in_ECX[0x19]; (iVar3 != 0 && (*(int *)(iVar3 + 0x4c) != 0));
      iVar3 = *(int *)(iVar3 + 0x4c)) {
    if (*(int *)(*(int *)(iVar3 + 0x4c) + 0x68) <= *(int *)(iVar3 + 0x68)) {
      appFailAssert("Out->Next->ChSequence>Out->ChSequence",".\\UnChan.cpp",0xae);
    }
  }
  bVar2 = 0;
  while ((puVar1 = (undefined4 *)in_ECX[0x19], puVar1 != (undefined4 *)0x0 && (puVar1[0x17] != 0)))
  {
    bVar2 = bVar2 | *(byte *)((int)puVar1 + 0x71);
    in_ECX[0x19] = puVar1[0x13];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x16] = in_ECX[0x16] + -1;
  }
  if ((bVar2 != 0) || ((in_ECX[0x13] != 0 && (in_ECX[0xe] != 0)))) {
    if (puVar1 != (undefined4 *)0x0) {
      appFailAssert("!OutRec",".\\UnChan.cpp",0xbe);
    }
    (**(code **)(*in_ECX + 0xc))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075d6a6 Catch@1075d6a6

void Catch_1075d6a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1075d6ba Catch@1075d6ba

void Catch_1075d6ba(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::ReceivedAcks");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d730 FUN_1075d730

void FUN_1075d730(void)

{
  int in_ECX;
  FOutBunch *pFVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830070;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) != in_ECX) {
    ExceptionList = &local_10;
    appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0xdb);
  }
  if ((*(int *)(in_ECX + 0x40) == 0) && (*(int *)(in_ECX + 0x38) == 0)) {
    for (pFVar1 = *(FOutBunch **)(in_ECX + 100); pFVar1 != (FOutBunch *)0x0;
        pFVar1 = *(FOutBunch **)(pFVar1 + 0x4c)) {
      if ((*(int *)(pFVar1 + 0x5c) == 0) &&
         (1.0 < (float)((float10)*(double *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x50) -
                       (float10)*(double *)(pFVar1 + 0x54)))) {
        FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                            (ushort *)0x306);
        if (pFVar1[0x72] == (FOutBunch)0x0) {
          appFailAssert("Out->bReliable",".\\UnChan.cpp",0xe8);
        }
        UNetConnection::SendRawBunch(*(UNetConnection **)(in_ECX + 0x34),pFVar1,0);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075d82b Catch@1075d82b

void Catch_1075d82b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1075d83f Catch@1075d83f

void Catch_1075d83f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d8b0 FUN_1075d8b0

void FUN_1075d8b0(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830080;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = *(int *)(in_ECX + 0x60); (iVar1 != 0 && (*(int *)(iVar1 + 0x50) != 0));
      iVar1 = *(int *)(iVar1 + 0x50)) {
    if (*(int *)(*(int *)(iVar1 + 0x50) + 0x60) <= *(int *)(iVar1 + 0x60)) {
      appFailAssert("In->Next->ChSequence>In->ChSequence",".\\UnChan.cpp",0xfa);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075d927 Catch@1075d927

void Catch_1075d927(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075d93b Catch@1075d93b

void Catch_1075d93b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::AssertInSequenced");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075d990 FUN_1075d990

undefined4 FUN_1075d990(int param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830090;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x66) != '\0') {
    ExceptionList = &local_10;
    *(undefined4 *)(in_ECX[0xd] + 0x2ea4 + in_ECX[0x10] * 4) = *(undefined4 *)(param_1 + 0x60);
  }
  if (in_ECX[0xf] == 0) {
    (**(code **)(*in_ECX + 0x78))(param_1);
  }
  if (*(char *)(param_1 + 0x65) != '\0') {
    if (in_ECX[0x18] != 0) {
      FOutputDevice::Logf(*(FOutputDevice **)(param_1 + 0x60),*(ushort **)GNull_exref);
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2((FOutputDevice *)in_ECX[0x10],*(EName *)GLog_exref,(ushort *)0x306);
    }
    (**(code **)(*in_ECX + 0xc))(1);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1075da6b Catch@1075da6b

void Catch_1075da6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075da7f Catch@1075da7f

void Catch_1075da7f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::ReceivedSequencedBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075dae0 FUN_1075dae0

void FUN_1075dae0(FInBunch *param_1)

{
  FInBunch *pFVar1;
  int iVar2;
  UChannel *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *pFVar3;
  UChannel *pUVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108300a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(UChannel **)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) != in_ECX) {
    ExceptionList = &local_10;
    appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0x123);
  }
  if ((param_1[0x66] == (FInBunch)0x0) ||
     (*(int *)(param_1 + 0x60) ==
      *(int *)(*(int *)(in_ECX + 0x34) + 0x2ea4 + *(int *)(in_ECX + 0x40) * 4) + 1)) {
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar2 = UChannel::ReceivedSequencedBunch(in_ECX,param_1);
    if (iVar2 == 0) {
      local_8 = 5;
      while ((*(int *)(in_ECX + 0x60) != 0 &&
             (pFVar3 = (FOutputDevice *)
                       (*(int *)(*(int *)(in_ECX + 0x34) + 0x2ea4 + *(int *)(in_ECX + 0x40) * 4) + 1
                       ), *(FOutputDevice **)(*(int *)(in_ECX + 0x60) + 0x60) == pFVar3))) {
        FOutputDevice::Logf(pFVar3,*(EName *)GNull_exref,(ushort *)0x306);
        pFVar1 = *(FInBunch **)(in_ECX + 0x60);
        *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(pFVar1 + 0x50);
        *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + -1;
        iVar2 = UChannel::ReceivedSequencedBunch(in_ECX,pFVar1);
        if (pFVar1 != (FInBunch *)0x0) {
          (*(code *)**(undefined4 **)pFVar1)();
        }
        if (iVar2 != 0) {
          ExceptionList = local_10;
          return;
        }
        UChannel::AssertInSequenced(in_ECX);
      }
    }
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,1);
    pFVar3 = *(FOutputDevice **)(param_1 + 0x60);
    if ((int)pFVar3 <= *(int *)(*(int *)(in_ECX + 0x34) + 0x2ea4 + *(int *)(in_ECX + 0x40) * 4)) {
      appFailAssert("Bunch.ChSequence>Connection->InReliable[ChIndex]",".\\UnChan.cpp",0x12d);
      pFVar3 = extraout_ECX;
    }
    FOutputDevice::Logf(pFVar3,*(EName *)GNull_exref,(ushort *)0x306);
    for (pUVar4 = in_ECX + 0x60; *(int *)pUVar4 != 0; pUVar4 = (UChannel *)(*(int *)pUVar4 + 0x50))
    {
      iVar2 = *(int *)(*(int *)pUVar4 + 0x60);
      if (*(int *)(param_1 + 0x60) == iVar2) {
        ExceptionList = local_10;
        return;
      }
      if (*(int *)(param_1 + 0x60) < iVar2) break;
    }
    pFVar1 = (FInBunch *)thunk_FUN_103ff710();
    if (pFVar1 == (FInBunch *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FInBunch::FInBunch(pFVar1,param_1);
    }
    *(int *)(iVar2 + 0x50) = *(int *)pUVar4;
    *(int *)pUVar4 = iVar2;
    *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + 1;
    if (0x80 < *(int *)(in_ECX + 0x54)) {
      appFailAssert("NumInRec<=RELIABLE_BUFFER",".\\UnChan.cpp",0x143);
    }
    UChannel::AssertInSequenced(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075dc2d Catch@1075dc2d

void Catch_1075dc2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075dc41 Catch@1075dc41

void Catch_1075dc41(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"QueueIt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075dce6 Catch@1075dce6

void Catch_1075dce6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1075dcfa Catch@1075dcfa

void Catch_1075dcfa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ReleaseQueued");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075dd04 Catch@1075dd04

void Catch_1075dd04(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1075dd18 Catch@1075dd18

void Catch_1075dd18(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Direct");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075dd22 Catch@1075dd22

void Catch_1075dd22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1075dd36 Catch@1075dd36

void Catch_1075dd36(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::ReceivedRawBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075dde0 FUN_1075dde0

int FUN_1075dde0(FArchive *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *in_ECX;
  FOutBunch *pFVar8;
  FBitWriterMark local_1c [4];
  FOutBunch *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108300b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd0;
  if (in_ECX[0xf] != 0) {
    ExceptionList = &local_10;
    appFailAssert("!Closing",".\\UnChan.cpp",0x16b);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (*(int **)(in_ECX[0xd] + 0xeac + in_ECX[0x10] * 4) != in_ECX) {
    appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0x16c);
  }
  iVar2 = FArchive::IsError(param_1);
  if (iVar2 != 0) {
    appFailAssert("!Bunch->IsError()",".\\UnChan.cpp",0x16d);
  }
  if ((in_ECX[0x12] == -1) && (in_ECX[0x11] != 0)) {
    param_1[0x70] = (FArchive)0x1;
    in_ECX[0x13] = (uint)(param_1[0x72] == (FArchive)0x0);
  }
  if ((in_ECX[0x13] != 0) && (param_1[0x72] != (FArchive)0x0)) {
    appFailAssert("!Bunch->bReliable",".\\UnChan.cpp",0x178);
  }
  pFVar8 = (FOutBunch *)0x0;
  local_18 = (FOutBunch *)0x0;
  if ((((param_2 != 0) && (iVar2 = in_ECX[0xd], *(int *)(iVar2 + 0x1a8) == *(int *)(param_1 + 0x60))
       ) && (*(int *)(iVar2 + 0x13c) != 0)) &&
     (iVar2 = FBitWriterMark::GetNumBits((FBitWriterMark *)(iVar2 + 0x134)), iVar2 != 0)) {
    iVar2 = FBitWriter::GetNumBits((FBitWriter *)(in_ECX[0xd] + 0x254));
    iVar3 = FBitWriterMark::GetNumBits((FBitWriterMark *)(in_ECX[0xd] + 0x134));
    pFVar8 = local_18;
    if (iVar3 == iVar2) {
      iVar2 = in_ECX[0xd];
      iVar3 = FBitWriter::GetNumBytes((FBitWriter *)(iVar2 + 0x254));
      iVar4 = FBitWriter::GetNumBytes((FBitWriter *)param_1);
      pFVar8 = local_18;
      if (iVar3 + 9 + iVar4 <= *(int *)(iVar2 + 200)) {
        iVar2 = FArchive::IsError((FArchive *)(iVar2 + 0x148));
        if (iVar2 != 0) {
          appFailAssert("!Connection->LastOut.IsError()",".\\UnChan.cpp",0x185);
        }
        iVar2 = *(int *)(in_ECX[0xd] + 0x148);
        iVar3 = FBitWriter::GetNumBits((FBitWriter *)param_1);
        puVar5 = FBitWriter::GetData((FBitWriter *)param_1);
        (**(code **)(iVar2 + 8))(puVar5,iVar3);
        *(byte *)(in_ECX[0xd] + 0x1ba) = (byte)param_1[0x72] | *(byte *)(in_ECX[0xd] + 0x1ba);
        *(byte *)(in_ECX[0xd] + 0x1b8) = (byte)param_1[0x70] | *(byte *)(in_ECX[0xd] + 0x1b8);
        *(byte *)(in_ECX[0xd] + 0x1b9) = (byte)param_1[0x71] | *(byte *)(in_ECX[0xd] + 0x1b9);
        pFVar8 = *(FOutBunch **)(in_ECX[0xd] + 0x144);
        param_1 = (FArchive *)(in_ECX[0xd] + 0x148);
        iVar2 = FArchive::IsError(param_1);
        if (iVar2 != 0) {
          appFailAssert("!Bunch->IsError()",".\\UnChan.cpp",0x18c);
        }
        FBitWriterMark::Pop((FBitWriterMark *)(in_ECX[0xd] + 300),
                            (FBitWriter *)(in_ECX[0xd] + 0x254));
        *(int *)(in_ECX[0xd] + 0x214) = *(int *)(in_ECX[0xd] + 0x214) + -1;
      }
    }
  }
  if (*(FOutBunch *)(param_1 + 0x72) == (FOutBunch)0x0) {
    *(undefined4 *)(in_ECX[0xd] + 0x144) = 0;
  }
  else if (pFVar8 == (FOutBunch *)0x0) {
    if ((int)((byte)*(FOutBunch *)(param_1 + 0x71) + 0x7f) <= in_ECX[0x16]) {
      appFailAssert("NumOutRec<RELIABLE_BUFFER-1+Bunch->bClose",".\\UnChan.cpp",0x198);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    piVar6 = (int *)(in_ECX[0xd] + 0x1ea8 + in_ECX[0x10] * 4);
    *piVar6 = *piVar6 + 1;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(in_ECX[0xd] + 0x1ea8 + in_ECX[0x10] * 4);
    in_ECX[0x16] = in_ECX[0x16] + 1;
    pFVar8 = (FOutBunch *)thunk_FUN_103ff710(0x74,L"FOutBunch");
    if (pFVar8 == (FOutBunch *)0x0) {
      param_1 = (FArchive *)0x0;
    }
    else {
      param_1 = (FArchive *)FOutBunch::FOutBunch(pFVar8,(FOutBunch *)param_1);
    }
    for (piVar6 = in_ECX + 0x19; *piVar6 != 0; piVar6 = (int *)(*piVar6 + 0x4c)) {
    }
    *piVar6 = (int)param_1;
    *(FArchive **)(in_ECX[0xd] + 0x144) = param_1;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(pFVar8 + 0x4c);
    FOutBunch::operator=(pFVar8,(FOutBunch *)param_1);
    *(FOutBunch **)(in_ECX[0xd] + 0x144) = pFVar8;
    param_1 = (FArchive *)pFVar8;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar2 = UNetConnection::SendRawBunch((UNetConnection *)in_ECX[0xd],(FOutBunch *)param_1,1);
  if ((in_ECX[0x12] == -1) && (in_ECX[0x11] != 0)) {
    in_ECX[0x12] = iVar2;
  }
  if (*(FOutBunch *)(param_1 + 0x71) != (FOutBunch)0x0) {
    (**(code **)(*in_ECX + 0x6c))();
  }
  FOutBunch::operator=((FOutBunch *)(in_ECX[0xd] + 0x148),(FOutBunch *)param_1);
  puVar7 = (undefined4 *)
           FBitWriterMark::FBitWriterMark(local_1c,(FBitWriter *)(in_ECX[0xd] + 0x254));
  iVar3 = in_ECX[0xd];
  *(undefined4 *)(iVar3 + 0x134) = *puVar7;
  *(undefined4 *)(iVar3 + 0x138) = puVar7[1];
  ExceptionList = local_10;
  return iVar2;
}


// ==== 1075e176 Catch@1075e176

void Catch_1075e176(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1075e18a Catch@1075e18a

void Catch_1075e18a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::SendBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075e2a0 FUN_1075e2a0

ushort * FUN_1075e2a0(ushort *param_1)

{
  FString *this;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108300e3;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  this = (FString *)FString::FString(local_2c,(ushort *)L"State=");
  local_8._0_1_ = 2;
  FString::operator+(this,param_1);
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1075e323 Catch@1075e323

void Catch_1075e323(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1075e337 Catch@1075e337

void Catch_1075e337(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::Describe");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075e390 FUN_1075e390

undefined4 FUN_1075e390(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830100;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0x7e < *(int *)(in_ECX + 0x58)) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x8c))(param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1075e3f7 Catch@1075e3f7

void Catch_1075e3f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075e40b Catch@1075e40b

void Catch_1075e40b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::IsNetReady");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075e450 FUN_1075e450

undefined4 FUN_1075e450(uint param_1)

{
  if ((param_1 < 8) && ((&UChannel::ChannelClasses)[param_1] != (UClass **)0x0)) {
    return 1;
  }
  return 0;
}


// ==== 1075e4b3 Catch@1075e4b3

void Catch_1075e4b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075e4c7 Catch@1075e4c7

void Catch_1075e4c7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::IsKnownChannelType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075e510 FUN_1075e510

void FUN_1075e510(int param_1)

{
  int in_ECX;
  FOutBunch *pFVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830120;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (pFVar1 = *(FOutBunch **)(in_ECX + 100); pFVar1 != (FOutBunch *)0x0;
      pFVar1 = *(FOutBunch **)(pFVar1 + 0x4c)) {
    if ((*(int *)(pFVar1 + 0x6c) == param_1) && (*(int *)(pFVar1 + 0x5c) == 0)) {
      if (pFVar1[0x72] == (FOutBunch)0x0) {
        appFailAssert("Out->bReliable",".\\UnChan.cpp",0x1ec);
      }
      FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                          (ushort *)0x306);
      UNetConnection::SendRawBunch(*(UNetConnection **)(in_ECX + 0x34),pFVar1,0);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075e5bc Catch@1075e5bc

void Catch_1075e5bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075e5d0 Catch@1075e5d0

void Catch_1075e5d0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::ReceivedNak");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075e630 FUN_1075e630

void FUN_1075e630(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830141;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UChannel::vftable;
  local_4 = 1;
  FOutputDevice::FOutputDevice((FOutputDevice *)(in_ECX + 0x70));
  *(undefined ***)in_ECX = UControlChannel::vftable_for_UChannel_;
  *(undefined ***)(in_ECX + 0x70) = UControlChannel::vftable_for_FOutputDevice_;
  ExceptionList = local_c;
  return;
}


// ==== 1075e6c0 FUN_1075e6c0

void FUN_1075e6c0(UNetConnection *param_1,int param_2,int param_3)

{
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830160;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UChannel::Init(in_ECX,param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 1075e713 Catch@1075e713

void Catch_1075e713(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075e727 Catch@1075e727

void Catch_1075e727(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UControlChannel::UControlChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075e770 FUN_1075e770

void FUN_1075e770(FArchive *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort *puVar4;
  int in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10830179;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffcc;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    ExceptionList = &local_10;
    appFailAssert("!Closing",".\\UnChan.cpp",0x21d);
    puVar2 = local_14;
  }
  while( true ) {
    local_14 = puVar2;
    FString::FString(local_28);
    local_8._0_1_ = 1;
    operator<<(param_1,local_28);
    iVar3 = FArchive::IsError(param_1);
    if (iVar3 != 0) break;
    iVar3 = *(int *)(in_ECX + 0x34);
    iVar1 = **(int **)(*(int *)(iVar3 + 0x74) + 0x48);
    puVar4 = FString::operator*(local_28);
    (**(code **)(iVar1 + 0x10))(iVar3,puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    puVar2 = local_14;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1075e848 Catch@1075e848

void Catch_1075e848(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075e85c Catch@1075e85c

void Catch_1075e85c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UControlChannel::ReceivedBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075e8c0 FUN_1075e8c0

void FUN_1075e8c0(ushort *param_1)

{
  int iVar1;
  int in_ECX;
  FOutBunch local_9c [114];
  undefined1 local_2a;
  undefined1 *local_28;
  void *local_24;
  undefined1 *puStack_20;
  int local_1c;
  FString local_18 [20];
  
  puStack_20 = &LAB_108301a4;
  local_24 = ExceptionList;
  local_28 = &stack0xffffff58;
  local_1c = 0;
  ExceptionList = &local_24;
  FOutBunch::FOutBunch(local_9c,(UChannel *)(in_ECX + -0x70),0);
  local_1c._0_1_ = 1;
  local_2a = 1;
  FString::FString(local_18,param_1);
  local_1c = CONCAT31(local_1c._1_3_,2);
  operator<<((FArchive *)local_9c,local_18);
  iVar1 = FArchive::IsError((FArchive *)local_9c);
  if (iVar1 == 0) {
    UChannel::SendBunch((UChannel *)(in_ECX + -0x70),local_9c,1);
  }
  else if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x304);
  }
  local_1c._0_1_ = 1;
  FString::~FString(local_18);
  local_1c = (uint)local_1c._1_3_ << 8;
  FOutBunch::~FOutBunch(local_9c);
  ExceptionList = local_24;
  return;
}


// ==== 1075e9a7 Catch@1075e9a7

void Catch_1075e9a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 1075e9bb Catch@1075e9bb

void Catch_1075e9bb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UControlChannel::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075ea20 FUN_1075ea20

FString * FUN_1075ea20(FString *param_1)

{
  FString *this;
  UChannel *in_ECX;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108301ec;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  UChannel::Describe(in_ECX);
  local_8._0_1_ = 2;
  this = (FString *)FString::FString(local_2c,(ushort *)L"Text ");
  local_8._0_1_ = 3;
  FString::operator+(this,param_1);
  local_18 = 1;
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_38);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1075eaaf Catch@1075eaaf

void Catch_1075eaaf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1075eac3 Catch@1075eac3

void Catch_1075eac3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UControlChannel::Describe");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075eb10 FUN_1075eb10

void FUN_1075eb10(UNetConnection *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830210;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UChannel::Init(in_ECX,param_1,param_2,param_3);
  uVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x48) + 0xc))();
  *(undefined4 *)(in_ECX + 0x70) = uVar2;
  *(undefined8 *)(in_ECX + 0x7c) = *(undefined8 *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x50);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x34) + 0x74);
  *(double *)(in_ECX + 0x84) = (double)((float)*(double *)(iVar1 + 0x50) - *(float *)(iVar1 + 0x68))
  ;
  *(undefined8 *)(in_ECX + 0x8c) = 0xbff0000000000000;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1075ebb3 Catch@1075ebb3

void Catch_1075ebb3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075ebc7 Catch@1075ebc7

void Catch_1075ebc7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::UActorChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075ec20 FUN_1075ec20

void FUN_1075ec20(void)

{
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830220;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UChannel::Tick(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1075ec65 Catch@1075ec65

void Catch_1075ec65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075ec79 Catch@1075ec79

void Catch_1075ec79(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075ece0 FUN_1075ece0

FString * FUN_1075ece0(FString *param_1)

{
  UObject *this;
  uint uVar1;
  ushort *puVar2;
  FString *pFVar3;
  UChannel *in_ECX;
  uint uVar4;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1083026e;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_18 = 0;
  local_8 = 1;
  if ((*(int *)(in_ECX + 0x3c) == 0) && (*(int *)(in_ECX + 0x74) != 0)) {
    pFVar3 = local_38;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffbc;
    UChannel::Describe(in_ECX);
    local_8._0_1_ = 4;
    this = *(UObject **)(in_ECX + 0x74);
    uVar4 = (uint)(byte)this[0xc1];
    uVar1 = (uint)(byte)this[0xc2];
    puVar2 = UObject::GetFullName(this,(ushort *)0x0);
    pFVar3 = (FString *)
             FString::Printf((ushort *)local_2c,L"Actor=%s (Role=%i RemoteRole=%i) ",puVar2,uVar1,
                             uVar4,pFVar3);
    local_8._0_1_ = 5;
    FString::operator+(pFVar3,param_1);
    local_18 = 1;
    local_8._0_1_ = 4;
    FString::~FString(local_2c);
    pFVar3 = local_38;
  }
  else {
    ExceptionList = &local_10;
    UChannel::Describe(in_ECX);
    local_8._0_1_ = 2;
    pFVar3 = (FString *)FString::FString(local_38,(ushort *)L"Actor=None ");
    local_8._0_1_ = 3;
    FString::operator+(pFVar3,param_1);
    local_18 = 1;
    local_8._0_1_ = 2;
    FString::~FString(local_38);
    pFVar3 = local_2c;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(pFVar3);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1075ede9 Catch@1075ede9

void Catch_1075ede9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1075edfd Catch@1075edfd

void Catch_1075edfd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::Describe");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075ee70 FUN_1075ee70

void FUN_1075ee70(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108302a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UChannel::vftable;
  *(undefined ***)in_ECX = UFileChannel::vftable;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1075eee0 FUN_1075eee0

void FUN_1075eee0(UNetConnection *param_1,int param_2,int param_3)

{
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108302c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UChannel::Init(in_ECX,param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 1075ef33 Catch@1075ef33

void Catch_1075ef33(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075ef47 Catch@1075ef47

void Catch_1075ef47(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFileChannel::UFileChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075efc0 FUN_1075efc0

void FUN_1075efc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108302d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1075f030 FUN_1075f030

UObject * FUN_1075f030(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UClass::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1075f060 FUN_1075f060

UObject * FUN_1075f060(UObject *param_1,uint param_2)

{
  UClass *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UObject::GetClass(param_1);
    if ((*(uint *)(pUVar1 + 0x4a4) & param_2) != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1075f090 FUN_1075f090

UObject * FUN_1075f090(UObject *param_1,uint param_2)

{
  UClass *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UObject::GetClass(param_1);
    if ((*(uint *)(pUVar1 + 0x4a4) & param_2) != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1075f0c0 FUN_1075f0c0

uchar * FUN_1075f0c0(int param_1,FMemStack *param_2,undefined4 param_3,int param_4,int param_5)

{
  FMemStackFrame *this;
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar3 = param_1 * param_4;
  uVar2 = uVar3;
  this = FMemStack::GetThreadSafeMemStack(param_2);
  puVar1 = FMemStackFrame::PushBytes(this,uVar2,param_5);
  uVar2 = uVar3 & 3;
  puVar4 = puVar1;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4 = puVar4 + 4;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = '\0';
    puVar4 = puVar4 + 1;
  }
  return puVar1;
}


// ==== 1075f150 FUN_1075f150

void FUN_1075f150(float *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  char unaff_BP;
  FArchive *unaff_ESI;
  int iVar7;
  int local_24;
  int local_20;
  float *pfStack_1c;
  int iStack_18;
  int local_10;
  
  local_20 = appRound(*param_1);
  iVar2 = appRound(param_1[1]);
  local_10 = iVar2;
  iVar3 = appRound(param_1[2]);
  iVar6 = iVar3;
  if (iVar3 < 0) {
    iVar6 = -iVar3;
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar4 = local_20;
  if (local_20 < 0) {
    iVar4 = -local_20;
  }
  if (iVar4 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar4 < iVar6) {
    iVar4 = iVar6;
  }
  bVar1 = appCeilLogTwo(iVar4 + 1);
  uVar5 = (uint)bVar1;
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  else if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  local_24 = uVar5 - 1;
  iVar7 = 0x14;
  (**(code **)(*(int *)unaff_ESI + 0xc))();
  iVar4 = 1 << (unaff_BP + 1U & 0x1f);
  iVar2 = 1 << (unaff_BP + 2U & 0x1f);
  local_24 = iVar4 + unaff_EBX;
  local_20 = iVar4 + iStack_18;
  pfStack_1c = (float *)(iVar4 + iVar3);
  (**(code **)(*(int *)unaff_ESI + 0xc))(&local_24);
  (**(code **)(*(int *)unaff_ESI + 0xc))(&stack0xffffffd8,iVar2);
  (**(code **)(*(int *)unaff_ESI + 0xc))(&stack0xffffffd4,iVar2);
  iVar6 = FArchive::IsLoading(unaff_ESI);
  if (iVar6 != 0) {
    *pfStack_1c = (float)(iVar2 - iVar4);
    pfStack_1c[1] = (float)((int)&local_24 - iVar4);
    pfStack_1c[2] = (float)(iVar7 - iVar4);
  }
  return;
}


// ==== 1075f310 FUN_1075f310

void FUN_1075f310(undefined4 *param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  undefined4 *in_ECX;
  
  FUN_1075f150(param_1);
  if ((in_EAX != 0) && (*(int *)(in_EAX + 0xa8) != 0)) {
    iVar1 = *(int *)(in_EAX + 0xa4);
    *(undefined4 *)(iVar1 + 0x1bc) = *param_1;
    *(undefined4 *)(iVar1 + 0x1c0) = param_1[1];
    *(undefined4 *)(iVar1 + 0x1c4) = param_1[2];
  }
  if (param_2 != 0) {
    FUN_1075d1a0();
    if ((in_EAX != 0) && (*(int *)(in_EAX + 0xa8) != 0)) {
      iVar1 = *(int *)(in_EAX + 0xa4);
      *(undefined4 *)(iVar1 + 0x1c8) = *in_ECX;
      *(undefined4 *)(iVar1 + 0x1cc) = in_ECX[1];
      *(undefined4 *)(iVar1 + 0x1d0) = in_ECX[2];
    }
  }
  return;
}


// ==== 1075f3b0 FUN_1075f3b0

void FUN_1075f3b0(void)

{
  undefined1 *puVar1;
  int iVar2;
  UChannel *in_ECX;
  FOutBunch local_90 [113];
  char local_1f;
  undefined1 local_1e;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_108302fb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff64;
  if (*(UChannel **)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) != in_ECX) {
    ExceptionList = &local_10;
    appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0x7d);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if ((*(int *)(in_ECX + 0x3c) == 0) &&
     ((*(int *)(*(int *)(in_ECX + 0x34) + 0x78) == 3 ||
      (*(int *)(*(int *)(in_ECX + 0x34) + 0x78) == 2)))) {
    FOutBunch::FOutBunch(local_90,in_ECX,1);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = FArchive::IsError((FArchive *)local_90);
    if (iVar2 != 0) {
      appFailAssert("!CloseBunch.IsError()",".\\UnChan.cpp",0x84);
    }
    if (local_1f == '\0') {
      appFailAssert("CloseBunch.bClose",".\\UnChan.cpp",0x85);
    }
    local_1e = 1;
    UChannel::SendBunch(in_ECX,local_90,0);
    local_8 = local_8 & 0xffffff00;
    FOutBunch::~FOutBunch(local_90);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075f4aa Catch@1075f4aa

void Catch_1075f4aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075f4be Catch@1075f4be

void Catch_1075f4be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::Close");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075f530 FUN_1075f530

uint FUN_1075f530(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830310;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FBitWriter::GetNumBits((FBitWriter *)(*(int *)(in_ECX + 0x34) + 0x254));
  iVar4 = *(int *)(*(int *)(in_ECX + 0x34) + 200);
  iVar2 = FBitWriter::GetNumBits((FBitWriter *)(*(int *)(in_ECX + 0x34) + 0x254));
  iVar4 = ((iVar4 * 8 - ((-(uint)(iVar1 != 0) & 0xfffffff0) + 0x10)) - iVar2) + -0x41;
  uVar3 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
  ExceptionList = local_10;
  return uVar3 & ((int)uVar3 < 1) - 1;
}


// ==== 1075f5bb Catch@1075f5bb

void Catch_1075f5bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075f5cf Catch@1075f5cf

void Catch_1075f5cf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::MaxSendBytes");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075f620 FUN_1075f620

void FUN_1075f620(void)

{
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830320;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UChannel::Close(in_ECX);
  *(undefined4 *)(in_ECX + 0x74) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1075f66e Catch@1075f66e

void Catch_1075f66e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075f682 Catch@1075f682

void Catch_1075f682(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::Close");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075f6c0 FUN_1075f6c0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_1075f6c0(void)

{
  ushort *puVar1;
  int iVar2;
  UChannel *in_ECX;
  int iVar3;
  undefined1 *puVar4;
  wchar_t *pwVar5;
  FOutBunch local_90 [113];
  char local_1f;
  undefined1 local_1e;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_10830349;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  UChannel::Tick(in_ECX);
  *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x140) = 1;
  if ((DAT_11d81eec & 1) == 0) {
    DAT_11d81eec = DAT_11d81eec | 1;
    local_8 = 1;
    pwVar5 = L"lanplay";
    puVar1 = appCmdLine();
    DAT_11d81ee8 = ParseParam(puVar1,(ushort *)pwVar5);
    local_8 = 0;
  }
  while( true ) {
    if ((*(int *)(in_ECX + 0x44) != 0) || (*(int *)(in_ECX + 0x74) == 0)) {
      ExceptionList = local_10;
      return;
    }
    iVar2 = UChannel::IsNetReady(in_ECX,DAT_11d81ee8);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return;
    }
    iVar2 = UChannel::MaxSendBytes(in_ECX);
    if (iVar2 == 0) break;
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x34) + 0x24 +
                    *(int *)(in_ECX + 0x278) * 0x44) - *(int *)(in_ECX + 0x27c);
    FOutBunch::FOutBunch(local_90,in_ECX,(uint)(iVar3 <= iVar2));
    _local_8 = CONCAT31(uStack_7,2);
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    if (iVar2 == 0) {
      puVar4 = (void *)0x0;
    }
    else {
      local_14 = &stack0xffffff64;
      puVar4 = &stack0xffffff64;
    }
    (**(code **)(**(int **)(in_ECX + 0x74) + 4))(puVar4,iVar2);
    FArchive::IsError(*(FArchive **)(in_ECX + 0x74));
    *(int *)(in_ECX + 0x27c) = *(int *)(in_ECX + 0x27c) + iVar2;
    FBitWriter::Serialize((FBitWriter *)local_90,puVar4,iVar2);
    local_1e = 1;
    iVar2 = FArchive::IsError((FArchive *)local_90);
    if (iVar2 != 0) {
      appFailAssert("!Bunch.IsError()",".\\UnChan.cpp",0x56f);
    }
    UChannel::SendBunch(in_ECX,local_90,0);
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x84))();
    if (local_1f != '\0') {
      if (*(undefined4 **)(in_ECX + 0x74) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0x74))(1);
      }
      *(undefined4 *)(in_ECX + 0x74) = 0;
    }
    local_8 = 0;
    FOutBunch::~FOutBunch(local_90);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1075f884 Catch@1075f884

void Catch_1075f884(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1075f898 Catch@1075f898

void Catch_1075f898(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFileChannel::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075f940 FUN_1075f940

FString * FUN_1075f940(FString *param_1)

{
  FString *pFVar1;
  UChannel *in_ECX;
  UChannel *pUVar2;
  FString local_44 [12];
  FString local_38 [20];
  undefined4 local_24;
  int local_20;
  wchar_t *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1083038c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_24 = 0;
  local_8 = 1;
  local_20 = *(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x34) +
             *(int *)(in_ECX + 0x278) * 0x44;
  if (*(int *)(in_ECX + 0x44) == 0) {
    local_18 = *(undefined4 *)(in_ECX + 0x27c);
  }
  else if (*(int *)(in_ECX + 0x70) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x454);
  }
  local_1c = L"Received";
  if (*(int *)(in_ECX + 0x44) == 0) {
    local_1c = L"Sent";
    pUVar2 = in_ECX + 0x78;
  }
  else if (*(int *)(in_ECX + 0x70) == 0) {
    pUVar2 = (UChannel *)&DAT_10853d94;
  }
  else {
    pUVar2 = (UChannel *)(*(int *)(in_ECX + 0x70) + 0x54);
  }
  pFVar1 = local_44;
  ExceptionList = &local_10;
  UChannel::Describe(in_ECX);
  local_8._0_1_ = 2;
  pFVar1 = (FString *)
           FString::Printf((ushort *)local_38,L"File=\'%s\', %s=%i/%i ",pUVar2,local_1c,local_18,
                           *(undefined4 *)(local_20 + 0x24),pFVar1);
  local_8._0_1_ = 3;
  FString::operator+(pFVar1,param_1);
  local_24 = 1;
  local_8._0_1_ = 2;
  FString::~FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_44);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1075fa60 Catch@1075fa60

void Catch_1075fa60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1075fa74 Catch@1075fa74

void Catch_1075fa74(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFileChannel::Describe");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1075faf0 FUN_1075faf0

undefined4 * FUN_1075faf0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  
  iVar1 = FArray::Add(in_ECX,1,0xc);
  puVar3 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *param_1;
    puVar3[2] = *param_2;
  }
  if ((UObject *)puVar3[1] == (UObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UObject::GetIndex((UObject *)puVar3[1]);
  }
  uVar2 = *(int *)(in_ECX + 0x10) - 1U & uVar2;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1032b7e0();
  }
  return puVar3 + 2;
}


// ==== 1075fb90 FUN_1075fb90

void FUN_1075fb90(FBitReader *param_1)

{
  FString *this;
  undefined1 *puVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  ushort *puVar5;
  UChannel *in_ECX;
  FOutputDevice *this_00;
  FOutBunch local_11c [116];
  FOutBunch local_a8 [128];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_108303cf;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffed8;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xfffffed8;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    ExceptionList = &local_10;
    appFailAssert("!Closing",".\\UnChan.cpp",0x512);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (*(int *)(in_ECX + 0x44) != 0) {
    iVar4 = **(int **)(in_ECX + 0x70);
    iVar2 = FBitReader::GetNumBytes(param_1);
    puVar3 = FBitReader::GetData(param_1);
    (**(code **)(iVar4 + 0x70))(puVar3,iVar2);
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x7c) == 0) {
    if (*(int *)GLog_exref != 0) {
      LocalizeError((ushort *)L"NetInvalid",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x304)
      ;
    }
    FOutBunch::FOutBunch(local_a8,in_ECX,1);
    local_8._0_1_ = 1;
    UChannel::SendBunch(in_ECX,local_a8,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FOutBunch::~FOutBunch(local_a8);
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(in_ECX + 0x74) == 0) {
    FGuid::FGuid((FGuid *)&local_28);
    thunk_FUN_105714f0(param_1,&local_28);
    iVar4 = FArchive::IsError((FArchive *)param_1);
    if (iVar4 == 0) {
      for (iVar4 = 0; local_18 = iVar4,
          iVar4 < *(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x38); iVar4 = iVar4 + 1) {
        this = (FString *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x34) + iVar4 * 0x44)
        ;
        iVar2 = _AfxIsEqualGUID((_GUID *)(this + 0x14),(_GUID *)&local_28);
        if ((iVar2 != 0) && (iVar2 = FString::operator!=(this,(ushort *)&DAT_10853d94), iVar2 != 0))
        {
          if (0 < *(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x94)) {
            iVar4 = **(int **)GFileManager_exref;
            puVar5 = FString::operator*(this);
            iVar4 = (**(code **)(iVar4 + 0x10))(puVar5);
            if (*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x94) < iVar4) break;
          }
          iVar4 = 0x100;
          puVar5 = FString::operator*(this);
          appStrncpy((ushort *)(in_ECX + 0x78),puVar5,iVar4);
          iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x48) + 0x14))
                            (*(int *)(in_ECX + 0x34),local_28,local_24,local_20,local_1c);
          iVar4 = local_18;
          if (iVar2 != 0) {
            if (*(int *)(this + 0xc) == 0) {
              appFailAssert("Info.Linker",".\\UnChan.cpp",0x541);
            }
            iVar2 = (**(code **)(**(int **)GFileManager_exref + 8))
                              (in_ECX + 0x78,0,*(undefined4 *)GNull_exref);
            *(int *)(in_ECX + 0x74) = iVar2;
            iVar4 = local_18;
            if (iVar2 != 0) {
              if (*(int *)GLog_exref != 0) {
                LocalizeProgress((ushort *)L"NetSend",(ushort *)L"Engine",(ushort *)0x0);
                FOutputDevice::Logf2
                          ((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x304);
              }
              *(int *)(in_ECX + 0x278) = local_18;
              ExceptionList = local_10;
              return;
            }
          }
        }
      }
    }
  }
  else {
    FString::FString((FString *)&local_24);
    local_8 = CONCAT31(local_8._1_3_,2);
    operator<<((FArchive *)param_1,(FString *)&local_24);
    iVar4 = FArchive::IsError((FArchive *)param_1);
    if ((iVar4 == 0) &&
       (iVar4 = FString::operator==((FString *)&local_24,(ushort *)L"SKIP"), iVar4 != 0)) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2((FOutputDevice *)(in_ECX + 0x78),*(ushort **)GLog_exref);
      }
      thunk_FUN_105ca790(*(undefined4 *)(in_ECX + 0x278));
      local_8 = local_8 & 0xffffff00;
      FString::~FString((FString *)&local_24);
      ExceptionList = local_10;
      return;
    }
    local_8 = local_8 & 0xffffff00;
    FString::~FString((FString *)&local_24);
  }
  if (*(int *)GLog_exref != 0) {
    LocalizeError((ushort *)L"NetInvalid",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x304);
  }
  FOutBunch::FOutBunch(local_11c,in_ECX,1);
  local_8._0_1_ = 3;
  UChannel::SendBunch(in_ECX,local_11c,0);
  local_8 = (uint)local_8._1_3_ << 8;
  FOutBunch::~FOutBunch(local_11c);
  ExceptionList = local_10;
  return;
}


// ==== 1075ff7d Catch@1075ff7d

void Catch_1075ff7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1075ff91 Catch@1075ff91

void Catch_1075ff91(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFileChannel::ReceivedBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107600c0 FUN_107600c0

int FUN_107600c0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_1032b720(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 10760110 FUN_10760110

int FUN_10760110(int *param_1,undefined4 *param_2)

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
  iVar3 = thunk_FUN_1075faf0(param_1,param_2);
  return iVar3;
}


// ==== 107601a0 FUN_107601a0

int FUN_107601a0(int *param_1)

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
        thunk_FUN_1032ba90(iVar3,1);
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
      thunk_FUN_1032b7e0();
    }
  }
  return iVar2;
}


// ==== 10760240 FUN_10760240

void FUN_10760240(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  UObject *in_ECX;
  undefined4 *puVar4;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108303f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffd4;
  if (*(int *)(in_ECX + 0x34) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Connection",".\\UnChan.cpp",0x92);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (*(UObject **)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) != in_ECX) {
    appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0x93);
  }
  puVar4 = *(undefined4 **)(in_ECX + 100);
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[0x13];
    (**(code **)*puVar4)(1);
    puVar4 = puVar1;
  }
  puVar4 = *(undefined4 **)(in_ECX + 0x60);
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[0x14];
    (**(code **)*puVar4)(1);
    puVar4 = puVar1;
  }
  iVar3 = thunk_FUN_107600c0(local_18);
  if (iVar3 != 1) {
    appFailAssert("Connection->OpenChannels.RemoveItem(this)==1",".\\UnChan.cpp",0x9c);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1076033f Catch@1076033f

void Catch_1076033f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10760353 Catch@10760353

void Catch_10760353(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannel::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107603c0 FUN_107603c0

void FUN_107603c0(void)

{
  int iVar1;
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830400;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x34) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Connection",".\\UnChan.cpp",0x20e);
  }
  iVar1 = UChannel::RouteDestroy(in_ECX);
  if (iVar1 == 0) {
    if (*(UChannel **)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) != in_ECX) {
      appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0x211);
    }
    UChannel::Destroy(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10760459 Catch@10760459

void Catch_10760459(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076046d Catch@1076046d

void Catch_1076046d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UControlChannel::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107604c0 FUN_107604c0

void FUN_107604c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1083047d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UChannel::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UActorChannel::vftable;
  FArray::FArray((FArray *)(in_ECX + 0xa4));
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0xb0));
  local_4._0_1_ = 5;
  FArray::FArray((FArray *)(in_ECX + 0xbc));
  local_4 = CONCAT31(local_4._1_3_,7);
  FArray::FArray((FArray *)(in_ECX + 200));
  ExceptionList = local_c;
  return;
}


// ==== 107605a0 FUN_107605a0

void FUN_107605a0(void)

{
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108304b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x74) != 0) {
    ExceptionList = &local_10;
    thunk_FUN_107601a0(in_ECX + 0x74);
  }
  UChannel::SetClosingFlag(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10760600 Catch@10760600

void Catch_10760600(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10760614 Catch@10760614

void Catch_10760614(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::SetClosingFlag");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10760660 FUN_10760660

void FUN_10760660(void)

{
  int iVar1;
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108304c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x34) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Connection",".\\UnChan.cpp",0x28b);
  }
  iVar1 = UChannel::RouteDestroy(in_ECX);
  if (iVar1 == 0) {
    if (*(UChannel **)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) != in_ECX) {
      appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0x28e);
    }
    (**(code **)(*(int *)in_ECX + 0x6c))();
    if (*(int *)(in_ECX + 0xa8) != 0) {
      if (*(int *)(in_ECX + 0x78) == 0) {
        appFailAssert("ActorClass",".\\UnChan.cpp",0x296);
      }
      UObject::ExitProperties(*(uchar **)(in_ECX + 0xa4),*(UClass **)(in_ECX + 0x78));
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x44) == 0) {
      if ((*(int *)(in_ECX + 0x74) != 0) && (*(int *)(in_ECX + 0x38) == 0)) {
        thunk_FUN_104e9650(in_ECX + 0x74);
      }
    }
    else {
      if (*(UObject **)(in_ECX + 0x74) != (UObject *)0x0) {
        iVar1 = UObject::IsValid(*(UObject **)(in_ECX + 0x74));
        if (iVar1 == 0) {
          appFailAssert("!Actor || Actor->IsValid()",".\\UnChan.cpp",0x29e);
        }
      }
      if (*(int *)(in_ECX + 0x70) == 0) {
        appFailAssert("Level",".\\UnChan.cpp",0x29f);
      }
      iVar1 = UObject::IsValid(*(UObject **)(in_ECX + 0x70));
      if (iVar1 == 0) {
        appFailAssert("Level->IsValid()",".\\UnChan.cpp",0x2a0);
      }
      if (*(int *)(in_ECX + 0x34) == 0) {
        appFailAssert("Connection",".\\UnChan.cpp",0x2a1);
      }
      iVar1 = UObject::IsValid(*(UObject **)(in_ECX + 0x34));
      if (iVar1 == 0) {
        appFailAssert("Connection->IsValid()",".\\UnChan.cpp",0x2a2);
      }
      if (*(int *)(*(int *)(in_ECX + 0x34) + 0x74) == 0) {
        appFailAssert("Connection->Driver",".\\UnChan.cpp",0x2a3);
      }
      iVar1 = UObject::IsValid(*(UObject **)(*(int *)(in_ECX + 0x34) + 0x74));
      if (iVar1 == 0) {
        appFailAssert("Connection->Driver->IsValid()",".\\UnChan.cpp",0x2a4);
      }
      iVar1 = *(int *)(in_ECX + 0x74);
      if (iVar1 != 0) {
        if ((*(uint *)(iVar1 + 0x74) & 0x20000) == 0) {
          if ((*(uint *)(iVar1 + 0x74) & 0x200) == 0) {
            (**(code **)(**(int **)(iVar1 + 0xe4) + 0xac))(iVar1,1);
          }
        }
        else {
          *(undefined1 *)(iVar1 + 0xc2) = 4;
          *(undefined1 *)(*(int *)(in_ECX + 0x74) + 0xc1) = 0;
        }
      }
    }
    local_8 = 0;
    UChannel::Destroy(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10760886 Catch@10760886

void Catch_10760886(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076089a Catch@1076089a

void Catch_1076089a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DestroyChannelActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107608b6 Catch@107608b6

void Catch_107608b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 107608ca Catch@107608ca

void Catch_107608ca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10760970 FUN_10760970

void FUN_10760970(int param_1)

{
  int iVar1;
  int iVar2;
  UChannel *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_108304d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UChannel::ReceivedNak(in_ECX,param_1);
  if (*(int *)(in_ECX + 0x78) != 0) {
    iVar3 = *(int *)(in_ECX + 0xcc);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar1 = *(int *)(in_ECX + 200) + iVar3 * 0xc;
      if ((*(int *)(iVar1 + 4) == iVar2) && (*(char *)(iVar1 + 8) == '\0')) {
        param_1 = iVar3;
        thunk_FUN_104af820(&param_1);
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x98) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 10760a08 Catch@10760a08

void Catch_10760a08(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10760a1c Catch@10760a1c

void Catch_10760a1c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::ReceivedNak");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10760a70 FUN_10760a70

void FUN_10760a70(UObject *param_1)

{
  int *piVar1;
  FArray *this;
  UObject *pUVar2;
  UClass *pUVar3;
  FClassNetCache *this_00;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  UProperty *this_01;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108304e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    ExceptionList = &local_10;
    appFailAssert("!Closing",".\\UnChan.cpp",0x2d0);
  }
  piVar1 = (int *)(in_ECX + 0x74);
  if (*piVar1 != 0) {
    appFailAssert("Actor==NULL",".\\UnChan.cpp",0x2d1);
  }
  pUVar2 = param_1;
  *piVar1 = (int)param_1;
  pUVar3 = UObject::GetClass(param_1);
  *(UClass **)(in_ECX + 0x78) = pUVar3;
  this_00 = (FClassNetCache *)
            (**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x88))(pUVar3);
  param_1 = (UObject *)in_ECX;
  thunk_FUN_10760110(piVar1,&param_1);
  iVar4 = FClassNetCache::GetRepConditionCount(this_00);
  FArray::AddZeroed((FArray *)(in_ECX + 0xb0),1,iVar4);
  if ((*(uint *)(pUVar2 + 0x74) & 0x200) == 0) {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x78) + 0x4f8);
    this = (FArray *)(in_ECX + 0xa4);
    FArray::Add(this,iVar4,1);
    UObject::InitProperties
              (*(uchar **)this,iVar4,*(UClass **)(in_ECX + 0x78),(uchar *)0x0,0,(UObject *)0x0,
               (UObject *)0x0);
    this_01 = *(UProperty **)(*(int *)(in_ECX + 0x78) + 0x74);
    while (this_01 != (UProperty *)0x0) {
      if ((*(uint *)(this_01 + 0x48) & 0x400000) != 0) {
        (**(code **)(*(int *)this_01 + 0xac))(*(int *)(this_01 + 0x54) + *(int *)this);
      }
      iVar4 = thunk_FUN_1069f930(this_01,0x20000);
      if (iVar4 == 0) {
        param_1 = (UObject *)(*(int *)(this_01 + 0x54) + *(int *)this);
        iVar4 = UProperty::GetSize(this_01);
        thunk_FUN_1032fd80(param_1,iVar4);
        this_01 = *(UProperty **)(this_01 + 0x5c);
      }
      else {
        *(uint *)(*(int *)(this_01 + 0x54) + *(int *)this) =
             *(uint *)(*(int *)(this_01 + 0x54) + *(int *)this) & ~*(uint *)(iVar4 + 0x78);
        this_01 = *(UProperty **)(this_01 + 0x5c);
      }
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(in_ECX + 0xcc); iVar4 = iVar4 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 200),0xc,*(int *)(*(int *)(in_ECX + 0x78) + 0x4c8));
  while (*(int *)(in_ECX + 0xcc) < *(int *)(*(int *)(in_ECX + 0x78) + 0x4c8)) {
    puVar5 = (undefined4 *)thunk_FUN_1032abb0(0xc,in_ECX + 200);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xffffffff;
      puVar5[1] = 0xffffffff;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10760c53 Catch@10760c53

void Catch_10760c53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10760c67 Catch@10760c67

void Catch_10760c67(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::SetChannelActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10760d10 FUN_10760d10

void FUN_10760d10(FBitReader *param_1)

{
  UActorChannel *pUVar1;
  undefined1 uVar2;
  byte bVar3;
  FClassNetCache *pFVar4;
  undefined1 *puVar5;
  uchar uVar6;
  UObject *pUVar7;
  UStruct *pUVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  FFieldNetCache *pFVar12;
  UFunction *pUVar13;
  UFunction *this;
  UActorChannel *in_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  int *piVar14;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void *pvVar15;
  FFrame local_d8 [24];
  FMemMark aFStack_c0 [48];
  UObject *local_90;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  UFunction *local_78;
  UObject *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_40 [2];
  int *local_38;
  int local_34;
  FFieldNetCache *local_30;
  int iStack_2c;
  int local_28;
  undefined1 *local_24;
  ulong local_20;
  int local_1c;
  int local_18;
  FClassNetCache *local_14;
  FName local_10 [4];
  UFunction *pUStack_c;
  byte local_5;
  
  puStack_80 = &LAB_108304f0;
  local_84 = ExceptionList;
  local_88 = &stack0xffffff1c;
  local_7c = 0;
  ExceptionList = &local_84;
  puVar5 = &stack0xffffff1c;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    ExceptionList = &local_84;
    appFailAssert("!Closing",".\\UnChan.cpp",0x301);
    puVar5 = local_88;
  }
  local_88 = puVar5;
  if (*(int *)(in_ECX + 0x68) != 0) {
    ExceptionList = local_84;
    return;
  }
  if (*(int *)(in_ECX + 0x6c) != 0) {
    ExceptionList = local_84;
    return;
  }
  local_28 = 0;
  local_14 = (FClassNetCache *)0x0;
  if (*(UObject **)(in_ECX + 0x74) == (UObject *)0x0) {
    local_7c = CONCAT31(local_7c._1_3_,1);
    if (param_1[100] == (FBitReader)0x0) {
      uStack_fc = 0x10760da4;
      FOutputDevice::Logf((FOutputDevice *)(uint)(byte)param_1[0x65],*(ushort **)GWarn_exref);
LAB_10760da7:
      *(undefined4 *)(in_ECX + 0x68) = 1;
      ExceptionList = local_84;
      return;
    }
    (**(code **)(*(int *)param_1 + 0x18))();
    pUVar7 = (UObject *)thunk_FUN_104eee90();
    local_70 = pUVar7;
    if (pUVar7 == (UObject *)0x0) {
      pUVar8 = (UStruct *)thunk_FUN_1075f030();
      if ((pUVar8 == (UStruct *)0x0) ||
         (iVar9 = UStruct::IsChildOf(pUVar8,(UStruct *)&AActor::PrivateStaticClass), iVar9 == 0)) {
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        goto LAB_10760da7;
      }
      iVar9 = UStruct::IsChildOf(pUVar8,(UStruct *)&AActor::PrivateStaticClass);
      if (iVar9 == 0) {
        appFailAssert("ActorClass->IsChildOf(AActor::StaticClass())",".\\UnChan.cpp",0x322);
      }
      FRotator::FRotator((FRotator *)local_40,0,0,0);
      UClass::GetDefaultActor((UClass *)pUVar8);
      FUN_1075f310();
      iVar9 = **(int **)(in_ECX + 0x70);
      uStack_fc = local_40[0];
      uStack_108 = local_68;
      uStack_104 = local_64;
      uStack_100 = local_60;
      local_24 = (undefined1 *)&uStack_10c;
      uStack_10c = local_60;
      FName::FName((FName *)&uStack_10c,0);
      pUVar7 = (UObject *)(**(code **)(iVar9 + 0xc0))(pUVar8);
      local_28 = 1;
      local_70 = pUVar7;
      if (pUVar7 == (UObject *)0x0) {
        if (*(int *)GLog_exref != 0) {
          UClass::GetDefaultActor((UClass *)pUVar8);
          UObject::GetName((UObject *)pUVar8);
          FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
        }
        appFailAssert("InActor",".\\UnChan.cpp",0x32c);
      }
    }
    if (*(int *)GLog_exref != 0) {
      UObject::GetFullName(pUVar7,(ushort *)0x0);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x306);
    }
    UActorChannel::SetChannelActor(in_ECX,(AActor *)pUVar7);
    local_7c = 0;
  }
  else if (*(int *)GLog_exref != 0) {
    UObject::GetFullName(*(UObject **)(in_ECX + 0x74),(ushort *)0x0);
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x306);
  }
  local_14 = (FClassNetCache *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x88))();
  local_7c = CONCAT31(local_7c._1_3_,3);
  *(uint *)(*(int *)(in_ECX + 0x74) + 0x368) =
       *(uint *)(*(int *)(in_ECX + 0x74) + 0x368) & 0xfffffffd;
  iVar9 = (**(code **)(**(int **)(in_ECX + 0x74) + 0x31c))();
  if (iVar9 == 0) {
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar7 = *(UObject **)(iVar9 + 0x560);
  }
  if (*(int *)(*(int *)(*(UObject **)(in_ECX + 0x34) + 0x74) + 0x44) == 0) {
    if (pUVar7 != *(UObject **)(in_ECX + 0x34)) goto LAB_10761063;
  }
  else if ((pUVar7 == (UObject *)0x0) ||
          (iVar9 = UObject::IsA(pUVar7,&UViewport::PrivateStaticClass), iVar9 == 0))
  goto LAB_10761063;
  *(uint *)(*(int *)(in_ECX + 0x74) + 0x368) = *(uint *)(*(int *)(in_ECX + 0x74) + 0x368) | 2;
LAB_10761063:
  local_7c = 5;
  uVar10 = FClassNetCache::GetMaxIndex(local_14);
  uVar10 = FBitReader::ReadInt(param_1,uVar10);
  local_20 = uVar10;
  iVar9 = FArchive::IsError((FArchive *)param_1);
  if (iVar9 == 0) {
    local_30 = FClassNetCache::GetFromIndex(local_14,uVar10);
  }
  else {
    local_30 = (FFieldNetCache *)0x0;
  }
  while (pFVar12 = local_30, local_30 != (FFieldNetCache *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x74) + 0xa0))();
    local_7c = CONCAT31(local_7c._1_3_,6);
    while ((pFVar12 != (FFieldNetCache *)0x0 &&
           (pUVar7 = (UObject *)thunk_FUN_1075f060(), local_90 = pUVar7, pUVar7 != (UObject *)0x0)))
    {
      local_5 = 0;
      if (*(int *)(pUVar7 + 0x40) != 1) {
        thunk_FUN_1032ffe0();
      }
      local_1c = *(int *)(in_ECX + 0x74);
      if (*(int *)(in_ECX + 0xa8) == 0) {
        local_18 = 0;
      }
      else {
        local_18 = *(int *)(in_ECX + 0xa4);
      }
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x44) == 0) {
        local_7c = CONCAT31(local_7c._1_3_,7);
        iVar9 = *(int *)(in_ECX + 0x74);
        uVar2 = *(undefined1 *)(iVar9 + 0xc2);
        *(undefined1 *)(iVar9 + 0xc2) = *(undefined1 *)(iVar9 + 0xc1);
        *(undefined1 *)(iVar9 + 0xc1) = uVar2;
        local_34 = 0;
        pvVar15 = (void *)0x0;
        uVar11 = (uint)*(ushort *)(pUVar7 + 0x50);
        pUVar8 = (UStruct *)(**(code **)(*(int *)pUVar7 + 0x74))();
        iVar9 = FFrame::FFrame(local_d8,*(UObject **)(in_ECX + 0x74),pUVar8,uVar11,pvVar15);
        bVar3 = **(byte **)(iVar9 + 0xc);
        *(byte **)(iVar9 + 0xc) = *(byte **)(iVar9 + 0xc) + 1;
        (**(code **)(GNatives_exref + (uint)bVar3 * 4))();
        iVar9 = *(int *)(in_ECX + 0x74);
        uVar2 = *(undefined1 *)(iVar9 + 0xc2);
        *(undefined1 *)(iVar9 + 0xc2) = *(undefined1 *)(iVar9 + 0xc1);
        *(undefined1 *)(iVar9 + 0xc1) = uVar2;
        if ((local_34 == 0) || ((*(byte *)(*(int *)(in_ECX + 0x74) + 0x368) & 2) == 0)) {
          UObject::GetFullName(*(UObject **)(in_ECX + 0x74),(ushort *)0x0);
          UObject::GetName(pUVar7);
          FOutputDevice::Logf((FOutputDevice *)GNull_exref,*(EName *)GNull_exref,(ushort *)0x304);
          local_1c = 0;
          local_18 = 0;
        }
        local_7c = 6;
      }
      piVar14 = (int *)(*(int *)(in_ECX + 200) +
                       ((uint)*(ushort *)(pUVar7 + 0x52) + (uint)local_5) * 0xc);
      if (*(int *)(param_1 + 0x4c) < *piVar14) {
        UObject::GetName(pUVar7);
        FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                            (ushort *)0x304);
        local_1c = 0;
        local_18 = 0;
      }
      else {
        *piVar14 = *(int *)(param_1 + 0x4c);
      }
      local_7c = CONCAT31(local_7c._1_3_,9);
      FMemMark::FMemMark((FMemMark *)&local_68,(FMemStack *)GMem_exref);
      if (local_1c == 0) {
        pUStack_c = (UFunction *)thunk_FUN_10670480();
      }
      else {
        pUStack_c = (UFunction *)
                    ((uint)local_5 * *(int *)(pUVar7 + 0x44) + *(int *)(pUVar7 + 0x54) + local_1c);
      }
      (**(code **)(*(int *)pUVar7 + 0x94))();
      if (local_18 != 0) {
        (**(code **)(*(int *)pUVar7 + 0xa4))();
      }
      FMemMark::Pop((FMemMark *)&local_68);
      local_7c = 6;
      if (*(int *)GLog_exref != 0) {
        UObject::GetName(pUVar7);
        FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x306);
      }
      pFVar4 = local_14;
      uVar10 = FClassNetCache::GetMaxIndex(local_14);
      uVar10 = FBitReader::ReadInt(param_1,uVar10);
      local_20 = uVar10;
      iVar9 = FArchive::IsError((FArchive *)param_1);
      if (iVar9 == 0) {
        pFVar12 = FClassNetCache::GetFromIndex(pFVar4,uVar10);
        local_30 = pFVar12;
      }
      else {
        pFVar12 = (FFieldNetCache *)0x0;
        local_30 = (FFieldNetCache *)0x0;
      }
    }
    local_7c = 5;
    (**(code **)(**(int **)(in_ECX + 0x74) + 0xa4))();
    if (local_28 != 0) {
      local_28 = 0;
      AActor::eventPostNetBeginPlay(*(AActor **)(in_ECX + 0x74));
    }
    if (pFVar12 == (FFieldNetCache *)0x0) break;
    iVar9 = thunk_FUN_1069f900();
    if (iVar9 == 0) {
      UObject::GetFullName(*(UObject **)(in_ECX + 0x74),(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(ushort *)*(FOutputDevice **)GNull_exref);
      ExceptionList = local_84;
      return;
    }
    local_7c = CONCAT31(local_7c._1_3_,0xc);
    UObject::GetFName(*(UObject **)pFVar12);
    pUStack_c = UObject::FindFunction(*(UObject **)(in_ECX + 0x74));
    if (pUStack_c == (UFunction *)0x0) {
      appFailAssert("Function",".\\UnChan.cpp",0x3a6);
    }
    iStack_2c = 0;
    this = pUStack_c;
    while (local_78 = this, pUVar13 = UFunction::GetSuperFunction(this), pUVar13 != (UFunction *)0x0
          ) {
      this = UFunction::GetSuperFunction(this);
    }
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x44) == 0) {
      local_7c = CONCAT31(local_7c._1_3_,0xd);
      iVar9 = *(int *)(in_ECX + 0x74);
      uVar2 = *(undefined1 *)(iVar9 + 0xc2);
      *(undefined1 *)(iVar9 + 0xc2) = *(undefined1 *)(iVar9 + 0xc1);
      *(undefined1 *)(iVar9 + 0xc1) = uVar2;
      local_24 = (undefined1 *)0x0;
      pvVar15 = (void *)0x0;
      uVar11 = (uint)*(ushort *)(this + 0x92);
      pUVar8 = (UStruct *)(**(code **)(*(int *)this + 0x74))();
      iVar9 = FFrame::FFrame(local_d8,*(UObject **)(in_ECX + 0x74),pUVar8,uVar11,pvVar15);
      bVar3 = **(byte **)(iVar9 + 0xc);
      *(byte **)(iVar9 + 0xc) = *(byte **)(iVar9 + 0xc) + 1;
      (**(code **)(GNatives_exref + (uint)bVar3 * 4))();
      iVar9 = *(int *)(in_ECX + 0x74);
      uVar2 = *(undefined1 *)(iVar9 + 0xc2);
      *(undefined1 *)(iVar9 + 0xc2) = *(undefined1 *)(iVar9 + 0xc1);
      *(undefined1 *)(iVar9 + 0xc1) = uVar2;
      if ((local_24 == (undefined1 *)0x0) || ((*(byte *)(*(int *)(in_ECX + 0x74) + 0x368) & 2) == 0)
         ) {
        if (*(int *)GLog_exref != 0) {
          UObject::GetFullName(*(UObject **)(in_ECX + 0x74),(ushort *)0x0);
          FName::operator*(local_10);
          FOutputDevice::Logf2(this_01,*(EName *)GLog_exref,(ushort *)0x304);
        }
        iStack_2c = 1;
      }
      local_7c = 0xc;
    }
    if (*(int *)GLog_exref != 0) {
      FName::operator*(local_10);
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x306);
    }
    FMemMark::FMemMark(aFStack_c0,(FMemStack *)GMem_exref);
    thunk_FUN_1075f0c0();
    thunk_FUN_1058b610();
    while ((piVar14 = local_38, local_38 != (int *)0x0 && ((local_38[0x12] & 0x480U) == 0x80))) {
      iVar9 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x74))();
      if ((iVar9 != -1) &&
         ((iVar9 = thunk_FUN_1069f930(), iVar9 != 0 ||
          (uVar6 = FBitReader::ReadBit(param_1), uVar6 != '\0')))) {
        (**(code **)(*piVar14 + 0x94))();
      }
      local_38 = (int *)piVar14[0xe];
      thunk_FUN_10589890();
    }
    if (iStack_2c == 0) {
      *(uint *)(*(int *)(in_ECX + 0x74) + 0x368) = *(uint *)(*(int *)(in_ECX + 0x74) + 0x368) | 0x20
      ;
      (**(code **)(**(int **)(in_ECX + 0x74) + 0x10))();
    }
    for (piVar14 = *(int **)(pUStack_c + 0x78); piVar14 != (int *)0x0;
        piVar14 = (int *)piVar14[0x18]) {
      if (piVar14[0x15] < (int)(uint)*(ushort *)(pUStack_c + 0x96)) {
        (**(code **)(*piVar14 + 0xac))();
      }
    }
    FMemMark::Pop(aFStack_c0);
    pFVar4 = local_14;
    uVar10 = FClassNetCache::GetMaxIndex(local_14);
    uVar10 = FBitReader::ReadInt(param_1,uVar10);
    local_20 = uVar10;
    iVar9 = FArchive::IsError((FArchive *)param_1);
    if (iVar9 == 0) {
      local_30 = FClassNetCache::GetFromIndex(pFVar4,uVar10);
      local_7c = 5;
    }
    else {
      local_30 = (FFieldNetCache *)0x0;
      local_7c = 5;
    }
  }
  local_7c = 0;
  pUVar1 = in_ECX + 0x74;
  piVar14 = *(int **)pUVar1;
  if (((piVar14[0x1d] & 0x20000U) == 0) || (*(char *)(piVar14[0x38] + 0x5d4) != '\x03')) {
    iVar9 = *(int *)(in_ECX + 0x34);
    if (((*(int *)(iVar9 + 0x74) != 0) &&
        (((iVar9 == *(int *)(*(int *)(iVar9 + 0x74) + 0x44) && (*(int *)(iVar9 + 0x78) == 2)) &&
         ((*(byte *)(piVar14 + 0xda) & 2) != 0)))) &&
       (iVar9 = (**(code **)(*piVar14 + 0x2ec))(), iVar9 != 0)) {
      (**(code **)(**(int **)(in_ECX + 0x34) + 0x90))();
    }
  }
  else {
    *(undefined1 *)((int)piVar14 + 0xc2) = 4;
    *(undefined1 *)(*(int *)pUVar1 + 0xc1) = 0;
    *(undefined4 *)(in_ECX + 0x6c) = 1;
    thunk_FUN_107601a0();
    AActor::eventTornOff(*(AActor **)pUVar1);
    *(int *)pUVar1 = 0;
  }
  ExceptionList = local_84;
  return;
}


// ==== 10760f90 Catch@10760f90

void Catch_10760f90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10760fa4 Catch@10760fa4

void Catch_10760fa4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"InitialClientActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076121f Catch@1076121f

void Catch_1076121f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 4,&DAT_10914c48);
}


// ==== 10761233 Catch@10761233

void Catch_10761233(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"EvalPropertyCondition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10761371 Catch@10761371

void Catch_10761371(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_10914c48);
}


// ==== 10761385 Catch@10761385

void Catch_10761385(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ReceiveProperty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076161a Catch@1076161a

void Catch_1076161a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 1076162e Catch@1076162e

void Catch_1076162e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"EvalRPCCondition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107616e7 Catch@107616e7

void Catch_107616e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x34) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x34,&DAT_10914c48);
}


// ==== 107616fb Catch@107616fb

void Catch_107616fb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"RemoteCall");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10761730 Catch@10761730

void Catch_10761730(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_10914c48);
}


// ==== 10761744 Catch@10761744

void Catch_10761744(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"Properties");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107617f4 Catch@107617f4

void Catch_107617f4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x2c,&DAT_10914c48);
}


// ==== 10761808 Catch@10761808

void Catch_10761808(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"HandleStream");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10761812 Catch@10761812

void Catch_10761812(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 10761826 Catch@10761826

void Catch_10761826(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SetNetMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10761830 Catch@10761830

void Catch_10761830(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x1c,&DAT_10914c48);
}


// ==== 10761844 Catch@10761844

void Catch_10761844(void)

{
  UObject *this;
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::ReceivedBunch");
  this = *(UObject **)(*(int *)(unaff_EBP + 0xc) + 0x74);
  if (this == (UObject *)0x0) {
    appUnwindf((ushort *)L"(Actor %s)",L"None");
  }
  else {
    puVar1 = UObject::GetName(this);
    appUnwindf((ushort *)L"(Actor %s)",puVar1);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10761b70 FUN_10761b70

void FUN_10761b70(void)

{
  UChannel *pUVar1;
  uint *puVar2;
  byte bVar3;
  UObject *this;
  byte *pbVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  UClass *pUVar8;
  int iVar9;
  void *pvVar10;
  UStruct *pUVar11;
  FName *pFVar12;
  ulong uVar13;
  UChannel *in_ECX;
  uint uVar14;
  FOutputDevice *this_00;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *piVar17;
  FFieldNetCache *pFVar18;
  bool bVar19;
  UObject *pUVar20;
  FName *pFVar21;
  FFrame aFStack_14c [24];
  FMemMark aFStack_134 [12];
  int local_128 [28];
  byte local_b7;
  byte local_b6;
  FName aFStack_a8 [8];
  FBitWriterMark aFStack_a0 [20];
  undefined1 *local_8c;
  void *local_88;
  undefined1 *puStack_84;
  int local_80;
  int local_7c;
  int iStack_78;
  int iStack_6c;
  undefined4 *puStack_64;
  int iStack_5c;
  int *piStack_54;
  int *piStack_48;
  byte *pbStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  void *pvStack_20;
  FClassNetCache *local_1c;
  int *piStack_18;
  undefined1 uStack_12;
  char local_11;
  int *piStack_10;
  int *local_c;
  FFieldNetCache *pFStack_8;
  
  puStack_84 = &LAB_10830513;
  local_88 = ExceptionList;
  local_8c = &stack0xfffffea8;
  local_80 = 0;
  ExceptionList = &local_88;
  puVar6 = &stack0xfffffea8;
  if (*(int *)(in_ECX + 0x74) == 0) {
    ExceptionList = &local_88;
    appFailAssert("Actor",".\\UnChan.cpp",0x400);
    puVar6 = local_8c;
  }
  local_8c = puVar6;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    appFailAssert("!Closing",".\\UnChan.cpp",0x401);
  }
  FOutBunch::FOutBunch((FOutBunch *)local_128,in_ECX,0);
  local_80._0_1_ = 1;
  iVar7 = FArchive::IsError((FArchive *)local_128);
  if (iVar7 != 0) {
    local_80 = (uint)local_80._1_3_ << 8;
    FOutBunch::~FOutBunch((FOutBunch *)local_128);
    ExceptionList = local_88;
    return;
  }
  local_80 = CONCAT31(local_80._1_3_,2);
  if (*(int *)(in_ECX + 0x48) == -1) {
    puVar2 = (uint *)(*(int *)(in_ECX + 0x74) + 0x368);
    *puVar2 = *puVar2 | 1;
    local_b7 = (byte)(*(uint *)(*(int *)(in_ECX + 0x74) + 0x74) >> 9) & 1;
    local_b6 = ~(byte)(*(uint *)(*(int *)(in_ECX + 0x74) + 0x74) >> 9) & 1;
  }
  else {
    puVar2 = (uint *)(*(int *)(in_ECX + 0x74) + 0x368);
    *puVar2 = *puVar2 & 0xfffffffe;
    if ((*(int *)(in_ECX + 0x94) == 0) && (*(int *)(in_ECX + 0x38) != 0)) {
      *(undefined4 *)(in_ECX + 0x94) = 1;
      piVar17 = *(int **)(in_ECX + 0xcc);
      while (piVar17 = (int *)((int)piVar17 + -1), local_c = piVar17, -1 < (int)piVar17) {
        iVar7 = *(int *)(in_ECX + 200) + (int)piVar17 * 0xc;
        if ((*(int *)(iVar7 + 4) != -1) && (*(char *)(iVar7 + 8) == '\0')) {
          thunk_FUN_104af820(&local_c);
        }
      }
    }
  }
  local_80 = 1;
  iVar7 = **(int **)(*(int *)(in_ECX + 0x34) + 0xc0);
  pUVar1 = in_ECX + 0x74;
  pUVar8 = UObject::GetClass(*(UObject **)pUVar1);
  local_1c = (FClassNetCache *)(**(code **)(iVar7 + 0x88))(pUVar8);
  if (local_1c == (FClassNetCache *)0x0) {
    appFailAssert("ClassCache",".\\UnChan.cpp",0x422);
  }
  *(uint *)(*(int *)pUVar1 + 0x368) = *(uint *)(*(int *)pUVar1 + 0x368) & 0xfffffffd;
  iVar7 = (**(code **)(**(int **)pUVar1 + 0x31c))();
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x560);
  }
  local_c = (int *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 0x74) + 0x8c))();
  if ((local_c == (int *)0x0) || (*(char *)(*(int *)(*(int *)pUVar1 + 0xe0) + 0x5d4) != '\x03')) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  if (local_c == (int *)0x0) {
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x44) == 0) {
      bVar19 = iVar7 == *(int *)(in_ECX + 0x34);
    }
    else {
      iVar7 = thunk_FUN_1032bbf0(iVar7);
      bVar19 = iVar7 != 0;
    }
    puVar2 = (uint *)(*(int *)pUVar1 + 0x368);
    *puVar2 = *puVar2 ^ ((uint)bVar19 * 2 ^ *(uint *)(*(int *)pUVar1 + 0x368)) & 2;
  }
  else {
    if ((bVar19) && ((iVar7 == 0 || (iVar7 = thunk_FUN_1032bbf0(iVar7), iVar7 == 0)))) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    puVar2 = (uint *)(*(int *)pUVar1 + 0x368);
    *puVar2 = *puVar2 ^ (iVar7 * 2 ^ *(uint *)(*(int *)pUVar1 + 0x368)) & 2;
  }
  if (((*(byte *)(*(int *)pUVar1 + 0x368) & 1) != 0) && (*(int *)(in_ECX + 0x44) != 0)) {
    local_80 = CONCAT31(local_80._1_3_,4);
    if ((*(byte *)(*(int *)pUVar1 + 100) & 0x50) == 0) {
      (**(code **)(local_128[0] + 0x18))(in_ECX + 0x78);
      FUN_1075f310(*(int *)pUVar1 + 0x1bc,*(uint *)(*(int *)pUVar1 + 0x74) >> 0x14 & 1);
    }
    else {
      (**(code **)(local_128[0] + 0x18))(pUVar1);
    }
    local_80 = 1;
  }
  iVar7 = *(int *)pUVar1;
  local_11 = *(char *)(iVar7 + 0xc1);
  if ((local_11 == '\x03') &&
     ((((*(int *)(iVar7 + 0xd4) != 0 && ((*(byte *)(*(int *)(iVar7 + 0xd4) + 0x368) & 2) == 0)) &&
       ((*(byte *)(iVar7 + 0x368) & 2) == 0)) || (local_c != (int *)0x0)))) {
    *(undefined1 *)(iVar7 + 0xc1) = 2;
  }
  if ((*(int *)(in_ECX + 0x98) == 0) && ((*(byte *)(*(int *)pUVar1 + 0x368) & 1) == 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  puVar2 = (uint *)(*(int *)pUVar1 + 0x74);
  *puVar2 = *puVar2 ^ (iVar7 << 0xb ^ *(uint *)(*(int *)pUVar1 + 0x74)) & 0x800;
  iVar7 = *(int *)pUVar1;
  if (((*(byte *)(iVar7 + 0x368) & 1) == 0) && (*(int *)(in_ECX + 0xa0) == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  *(uint *)(iVar7 + 0x368) = *(uint *)(iVar7 + 0x368) ^ (*(uint *)(iVar7 + 0x368) ^ uVar14) & 1;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  if (*(int *)GLog_exref != 0) {
    UObject::GetName(*(UObject **)(in_ECX + 0x78));
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x306);
  }
  FMemMark::FMemMark(aFStack_134,(FMemStack *)GMem_exref);
  thunk_FUN_1032fd80(*(undefined4 *)(in_ECX + 0xb0),*(undefined4 *)(in_ECX + 0xb4));
  local_c = (int *)thunk_FUN_10665d30(GMem_exref,*(undefined4 *)(in_ECX + 0xcc),8);
  iStack_38 = 0;
  local_80 = CONCAT31(local_80._1_3_,6);
  if (*(int *)(in_ECX + 0xa8) == 0) {
    iStack_2c = *(int *)(*(int *)(in_ECX + 0x78) + 0x4f4);
  }
  else {
    iStack_2c = *(int *)(in_ECX + 0xa4);
  }
  iStack_30 = *(int *)(local_1c + 4);
  piVar17 = (int *)(**(code **)(**(int **)pUVar1 + 0x68))
                             (iStack_2c,*(undefined4 *)(in_ECX + 200),local_c,
                              *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0xc0));
  piStack_10 = piVar17;
  if ((*(uint *)(*(int *)pUVar1 + 0x74) & 0x800) != 0) {
    for (iStack_28 = 0; iStack_28 < iStack_30; iStack_28 = iStack_28 + 1) {
      puVar16 = *(undefined4 **)(*(int *)local_1c + iStack_28 * 4);
      pFVar18 = (FFieldNetCache *)*puVar16;
      pbStack_3c = (byte *)(puVar16[2] + *(int *)(in_ECX + 0xb0));
      pFStack_8 = pFVar18;
      if (*pbStack_3c != 2) {
        iStack_34 = thunk_FUN_1075f090(pFVar18,0x10000);
        for (iStack_24 = 0; iStack_24 < *(int *)(pFVar18 + 0x40); iStack_24 = iStack_24 + 1) {
          iVar7 = *(int *)(pFStack_8 + 0x44) * iStack_24 + *(int *)(pFStack_8 + 0x54);
          puVar16 = (undefined4 *)(*(int *)(in_ECX + 0x74) + iVar7);
          puStack_64 = puVar16;
          if ((iStack_34 != 0) &&
             (iVar9 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 0xc0) + 0x68))(*puVar16),
             iVar9 == 0)) {
            *(undefined4 *)(in_ECX + 0x9c) = 1;
            puVar16 = (undefined4 *)0x0;
            puStack_64 = (undefined4 *)0x0;
          }
          pvVar10 = (void *)(**(code **)(*(int *)pFStack_8 + 0x84))(iVar7 + iStack_2c,puVar16);
          pbVar4 = pbStack_3c;
          if (pvVar10 == (void *)0x0) {
            if ((*pbStack_3c & 2) == 0) {
              uVar14 = (uint)*(ushort *)(*(int **)(pFStack_8 + 0x68) + 0x14);
              pvStack_20 = pvVar10;
              pUVar11 = (UStruct *)(**(code **)(**(int **)(pFStack_8 + 0x68) + 0x74))();
              iVar7 = FFrame::FFrame(aFStack_14c,*(UObject **)(in_ECX + 0x74),pUVar11,uVar14,pvVar10
                                    );
              bVar3 = **(byte **)(iVar7 + 0xc);
              *(byte **)(iVar7 + 0xc) = *(byte **)(iVar7 + 0xc) + 1;
              (**(code **)(GNatives_exref + (uint)bVar3 * 4))(iVar7,&pvStack_20);
              *pbVar4 = (byte)pvStack_20 | 2;
            }
            if ((*pbVar4 & 1) != 0) {
              *piStack_10 = (uint)*(ushort *)(pFStack_8 + 0x52) + iStack_24;
              piStack_10 = piStack_10 + 1;
            }
          }
          piVar17 = piStack_10;
          pFVar18 = pFStack_8;
        }
      }
    }
  }
  iVar7 = FArchive::IsError((FArchive *)local_128);
  if (iVar7 != 0) {
    appFailAssert("!Bunch.IsError()",".\\UnChan.cpp",0x47d);
  }
  piVar5 = local_c;
  iStack_6c = *(int *)(in_ECX + 0xc0);
  while (iStack_6c = iStack_6c + -1, -1 < iStack_6c) {
    iVar7 = *(int *)(*(int *)(in_ECX + 0xbc) + iStack_6c * 4);
    for (piStack_48 = local_c; (piStack_48 < piVar17 && (*piStack_48 != iVar7));
        piStack_48 = piStack_48 + 1) {
    }
    if (piStack_48 == piVar17) {
      *piVar17 = iVar7;
      piVar17 = piVar17 + 1;
      piStack_10 = piVar17;
    }
  }
  local_80 = 1;
  thunk_FUN_10368430();
  local_80 = CONCAT31((int3)((uint)local_80 >> 8),0xb);
  piStack_18 = piVar5;
  do {
    if (piVar17 <= piStack_18) {
code_r0x107623ce:
      local_80 = 10;
      iVar7 = FBitWriter::GetNumBits((FBitWriter *)local_128);
      if (iVar7 != 0) {
        local_80 = CONCAT31(local_80._1_3_,0xd);
        iVar7 = UChannel::SendBunch(in_ECX,(FOutBunch *)local_128,1);
        for (piVar17 = local_c; piStack_54 = piVar17, piVar17 < piStack_10; piVar17 = piVar17 + 1) {
          thunk_FUN_10601660(piVar17);
          iVar9 = *(int *)(in_ECX + 200) + *piVar17 * 0xc;
          *(int *)(iVar9 + 4) = iVar7;
          *(byte *)(iVar9 + 8) = local_b6;
        }
        if ((*(uint *)(*(int *)(in_ECX + 0x74) + 0x74) & 0x200) != 0) {
          thunk_FUN_1037ae60(in_ECX + 0x74);
        }
        local_80 = 10;
      }
      iVar7 = iStack_38;
      for (iVar9 = 0; iStack_5c = iVar9, iVar9 < iStack_78; iVar9 = iVar9 + 1) {
        thunk_FUN_104af820(local_7c + iVar9 * 4);
      }
      if (iVar7 == 0) {
        *(undefined8 *)(in_ECX + 0x84) =
             *(undefined8 *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x50);
      }
      else {
        UObject::GetName(*(UObject **)(in_ECX + 0x74));
        FOutputDevice::Logf(this_00,*(EName *)GNull_exref,(ushort *)0x306);
      }
      iVar9 = *(int *)(in_ECX + 0x74);
      if (((*(byte *)(iVar9 + 0x368) & 1) == 0) ||
         ((iVar7 == 0 &&
          (((*(uint *)(iVar9 + 0x74) & 0x200) != 0 || (*(int *)(in_ECX + 0x9c) == 0)))))) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      *(undefined4 *)(in_ECX + 0xa0) = uVar15;
      if ((*(int *)(in_ECX + 0x9c) == 0) && (iVar7 == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      *(undefined4 *)(in_ECX + 0x98) = uVar15;
      *(uint *)(iVar9 + 0x368) = *(uint *)(iVar9 + 0x368) & 0xfffffffd;
      *(char *)(*(int *)(in_ECX + 0x74) + 0xc1) = local_11;
      *(uint *)(*(int *)(in_ECX + 0x74) + 0x74) =
           *(uint *)(*(int *)(in_ECX + 0x74) + 0x74) & 0xfffff7ff;
      FMemMark::Pop(aFStack_134);
      local_80._0_1_ = 1;
      thunk_FUN_10325f90();
      local_80 = (uint)local_80._1_3_ << 8;
      FOutBunch::~FOutBunch((FOutBunch *)local_128);
      ExceptionList = local_88;
      return;
    }
    puVar16 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x78) + 0x4c4) + *piStack_18 * 8);
    this = (UObject *)*puVar16;
    iStack_30 = puVar16[1];
    iVar9 = *(int *)(this + 0x44) * iStack_30 + *(int *)(this + 0x54);
    FName::FName((FName *)&pbStack_3c,0x2e6);
    pFVar21 = (FName *)&iStack_2c;
    pFVar12 = (FName *)UObject::GetFName(this);
    pUVar20 = (UObject *)0x10762231;
    iVar7 = FName::operator==(pFVar12,pFVar21);
    if (iVar7 == 0) {
      FName::FName((FName *)&iStack_34,0x2e7);
      pFVar21 = aFStack_a8;
      pFVar12 = (FName *)UObject::GetFName(this);
      iVar7 = FName::operator==(pFVar12,pFVar21);
      pUVar20 = this;
      if (iVar7 != 0) {
        pUVar20 = *(UObject **)(*(int *)(*(int *)(in_ECX + 0x34) + 0x74) + 0x84);
      }
    }
    pFStack_8 = FClassNetCache::GetFromField(local_1c,pUVar20);
    if (pFStack_8 == (FFieldNetCache *)0x0) {
      appFailAssert("FieldCache",".\\UnChan.cpp",0x4a1);
    }
    FBitWriterMark::FBitWriterMark(aFStack_a0,(FBitWriter *)local_128);
    uVar13 = FClassNetCache::GetMaxIndex(local_1c);
    FBitWriter::WriteInt((FBitWriter *)local_128,*(ulong *)(pFStack_8 + 4),uVar13);
    if (*(int *)(this + 0x40) != 1) {
      uStack_12 = (undefined1)iStack_30;
      thunk_FUN_1032ffe0(local_128,&uStack_12);
    }
    pvStack_20 = (void *)(**(code **)(*(int *)this + 0x94))
                                   (local_128,*(undefined4 *)(*(int *)(in_ECX + 0x34) + 0xc0),
                                    *(int *)(in_ECX + 0x74) + iVar9);
    if (*(int *)GLog_exref != 0) {
      UObject::GetName(this);
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x306)
      ;
    }
    iVar7 = FArchive::IsError((FArchive *)local_128);
    if (iVar7 != 0) {
      FBitWriterMark::Pop(aFStack_a0,(FBitWriter *)local_128);
      piStack_10 = piStack_18;
      iStack_38 = 1;
      goto code_r0x107623ce;
    }
    if (*(int *)(in_ECX + 0xa8) != 0) {
      if (pvStack_20 == (void *)0x0) {
        thunk_FUN_104af820(piStack_18);
      }
      else {
        (**(code **)(*(int *)this + 0xa4))
                  (*(int *)(in_ECX + 0xa4) + iVar9,*(int *)(in_ECX + 0x74) + iVar9,0);
      }
    }
    piVar17 = (int *)(DAT_10ddd7e0 + DAT_10dddb74 * 4);
    *piVar17 = *piVar17 + 1;
    piStack_18 = piStack_18 + 1;
    piVar17 = piStack_10;
  } while( true );
}


// ==== 10761e92 Catch@10761e92

void Catch_10761e92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + -0x14);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_10914c48);
}


// ==== 10761ea6 Catch@10761ea6

void Catch_10761ea6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SendInitialActorData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762478 Catch@10762478

void Catch_10762478(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x3c) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x3c,&DAT_10914c48);
}


// ==== 1076248c Catch@1076248c

void Catch_1076248c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DoSendBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762584 Catch@10762584

void Catch_10762584(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x38) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x38,&DAT_10914c48);
}


// ==== 10762598 Catch@10762598

void Catch_10762598(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ReplicateThem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107625a2 Catch@107625a2

void Catch_107625a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x2c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x2c,&DAT_10914c48);
}


// ==== 107625b6 Catch@107625b6

void Catch_107625b6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AddDirtyProperties");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107625c0 Catch@107625c0

void Catch_107625c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 107625d4 Catch@107625d4

void Catch_107625d4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FigureOutWhatNeedsReplicating");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107625de Catch@107625de

void Catch_107625de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x1c,&DAT_10914c48);
}


// ==== 107625f2 Catch@107625f2

void Catch_107625f2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"SetupInitial");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107625fc Catch@107625fc

void Catch_107625fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 10762610 Catch@10762610

void Catch_10762610(void)

{
  UObject *this;
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UActorChannel::ReplicateActor");
  this = *(UObject **)(*(int *)(unaff_EBP + 0xc) + 0x74);
  if (this == (UObject *)0x0) {
    appUnwindf((ushort *)L"(Actor %s)",L"None");
  }
  else {
    puVar1 = UObject::GetName(this);
    appUnwindf((ushort *)L"(Actor %s)",puVar1);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762910 FUN_10762910

void FUN_10762910(void)

{
  int iVar1;
  UChannel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830530;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x34) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Connection",".\\UnChan.cpp",0x57e);
  }
  iVar1 = UChannel::RouteDestroy(in_ECX);
  if (iVar1 == 0) {
    if (*(UChannel **)(*(int *)(in_ECX + 0x34) + 0xeac + *(int *)(in_ECX + 0x40) * 4) != in_ECX) {
      appFailAssert("Connection->Channels[ChIndex]==this",".\\UnChan.cpp",0x581);
    }
    if (*(undefined4 **)(in_ECX + 0x74) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x74))(1);
      *(undefined4 *)(in_ECX + 0x74) = 0;
    }
    if ((*(int *)(in_ECX + 0x44) != 0) && (*(int **)(in_ECX + 0x70) != (int *)0x0)) {
      (**(code **)(**(int **)(in_ECX + 0x70) + 0x7c))();
      if (*(int **)(in_ECX + 0x70) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x70) + 0xc))(1);
      }
    }
    UChannel::Destroy(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 107629e3 Catch@107629e3

void Catch_107629e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107629f7 Catch@107629f7

void Catch_107629f7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFileChannel::~UFileChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762a90 FUN_10762a90

int FUN_10762a90(int param_1,int param_2,int param_3)

{
  return (((param_3 / 2 - param_2) + param_1 & param_3 - 1U) - param_3 / 2) + param_2;
}


// ==== 10762ac0 FUN_10762ac0

void FUN_10762ac0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10762ae0 FUN_10762ae0

void FUN_10762ae0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10762b00 FUN_10762b00

void FUN_10762b00(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830540;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0xc4);
  ExceptionList = &local_10;
  if (iVar1 < 1) {
    ExceptionList = &local_10;
    appFailAssert("ProtocolVersion>=MIN_PROTOCOL_VERSION",".\\UnConn.cpp",0x90);
    iVar1 = *(int *)(in_ECX + 0xc4);
  }
  if (1 < iVar1) {
    appFailAssert("ProtocolVersion<=MAX_PROTOCOL_VERSION",".\\UnConn.cpp",0x91);
  }
  iVar1 = *(int *)(in_ECX + 0x78);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    appFailAssert("State==USOCK_Closed || State==USOCK_Pending || State==USOCK_Open",".\\UnConn.cpp"
                  ,0x92);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10762baa Catch@10762baa

void Catch_10762baa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10762bbe Catch@10762bbe

void Catch_10762bbe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::AssertValid");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762c20 FUN_10762c20

void FUN_10762c20(void)

{
  FBitWriter *pFVar1;
  int in_ECX;
  FBitWriter local_68 [84];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10830559;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FBitWriter *)FBitWriter::FBitWriter(local_68,*(int *)(in_ECX + 200) * 8);
  local_8._0_1_ = 1;
  FBitWriter::operator=((FBitWriter *)(in_ECX + 0x254),pFVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  FBitWriter::~FBitWriter(local_68);
  ExceptionList = local_10;
  return;
}


// ==== 10762c96 Catch@10762c96

void Catch_10762c96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10762caa Catch@10762caa

void Catch_10762caa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecConnection::InitOut");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762cf0 FUN_10762cf0

void FUN_10762cf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830570;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0xe78);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) == 0)) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)(iVar1 + 0x70))(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10762d53 Catch@10762d53

void Catch_10762d53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10762d67 Catch@10762d67

void Catch_10762d67(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762db0 FUN_10762db0

bool FUN_10762db0(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830580;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    iVar1 = FBitWriter::GetNumBytes((FBitWriter *)(in_ECX + 0x254));
    *(int *)(in_ECX + 0x124) = -iVar1;
  }
  iVar1 = FBitWriter::GetNumBytes((FBitWriter *)(in_ECX + 0x254));
  ExceptionList = local_10;
  return iVar1 + *(int *)(in_ECX + 0x124) < 1;
}


// ==== 10762e22 Catch@10762e22

void Catch_10762e22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10762e36 Catch@10762e36

void Catch_10762e36(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::IsReady");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10762e80 FUN_10762e80

void FUN_10762e80(void)

{
  return;
}


// ==== 10762e90 FUN_10762e90

void FUN_10762e90(int param_1)

{
  FBitWriter *this;
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830590;
  local_10 = ExceptionList;
  local_8 = 0;
  this = (FBitWriter *)(in_ECX + 0x95);
  ExceptionList = &local_10;
  iVar1 = FBitWriter::GetNumBits(this);
  if (in_ECX[0x32] * 8 < iVar1 + 1 + param_1) {
    (**(code **)(*in_ECX + 0x84))();
  }
  iVar1 = FBitWriter::GetNumBits(this);
  if (iVar1 == 0) {
    FBitWriter::WriteInt(this,in_ECX[0x3a9],0x4000);
    iVar1 = FBitWriter::GetNumBits(this);
    if (0x10 < iVar1) {
      appFailAssert("Out.GetNumBits()<=MAX_PACKET_HEADER_BITS",".\\UnConn.cpp",0x25c);
    }
  }
  iVar1 = in_ECX[0x32];
  iVar2 = FBitWriter::GetNumBits(this);
  if (iVar1 * 8 < iVar2 + 1 + param_1) {
    FBitWriter::GetNumBits(this);
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10762f7c Catch@10762f7c

void Catch_10762f7c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10762f90 Catch@10762f90

void Catch_10762f90(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::PreSend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763000 FUN_10763000

void FUN_10763000(void)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108305a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FBitWriter::GetNumBits((FBitWriter *)(in_ECX + 0x95));
  if (in_ECX[0x32] * 8 < iVar1) {
    appFailAssert("Out.GetNumBits()<=MaxPacket*8",".\\UnConn.cpp",0x26e);
  }
  iVar1 = FBitWriter::GetNumBits((FBitWriter *)(in_ECX + 0x95));
  if (iVar1 == in_ECX[0x32] * 8) {
    (**(code **)(*in_ECX + 0x84))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1076309a Catch@1076309a

void Catch_1076309a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107630ae Catch@107630ae

void Catch_107630ae(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::PostSend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763100 FUN_10763100

undefined4 FUN_10763100(FArchive *param_1,undefined4 param_2)

{
  FBitWriter *pFVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uchar uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined4 *puVar8;
  uchar *puVar9;
  UNetConnection *in_ECX;
  ulong uVar10;
  FBitWriter local_70 [76];
  FBitWriterMark local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_108305b9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar3 = &stack0xffffff84;
  if (*(int *)(param_1 + 0x5c) != 0) {
    ExceptionList = &local_10;
    appFailAssert("!Bunch.ReceivedAck",".\\UnConn.cpp",0x29d);
    puVar3 = local_14;
  }
  local_14 = puVar3;
  iVar5 = FArchive::IsError(param_1);
  if (iVar5 != 0) {
    appFailAssert("!Bunch.IsError()",".\\UnConn.cpp",0x29e);
  }
  *(int *)(in_ECX + 0x214) = *(int *)(in_ECX + 0x214) + 1;
  *(undefined4 *)(in_ECX + 0x140) = 1;
  FBitWriter::FBitWriter(local_70,0x40);
  local_8 = CONCAT31(local_8._1_3_,1);
  FBitWriter::WriteBit(local_70,'\0');
  if ((param_1[0x70] == (FArchive)0x0) && (param_1[0x71] == (FArchive)0x0)) {
    uVar4 = '\0';
  }
  else {
    uVar4 = '\x01';
  }
  FBitWriter::WriteBit(local_70,uVar4);
  if ((param_1[0x70] != (FArchive)0x0) || (param_1[0x71] != (FArchive)0x0)) {
    FBitWriter::WriteBit(local_70,(uchar)param_1[0x70]);
    FBitWriter::WriteBit(local_70,(uchar)param_1[0x71]);
  }
  FBitWriter::WriteBit(local_70,(uchar)param_1[0x72]);
  FBitWriter::WriteInt(local_70,*(ulong *)(param_1 + 0x60),0x3ff);
  if (param_1[0x72] == (FArchive)0x0) {
LAB_1076320d:
    if (param_1[0x70] == (FArchive)0x0) goto LAB_1076321e;
  }
  else {
    FBitWriter::WriteInt(local_70,*(ulong *)(param_1 + 0x68),0x400);
    if (param_1[0x72] == (FArchive)0x0) goto LAB_1076320d;
  }
  FBitWriter::WriteInt(local_70,*(ulong *)(param_1 + 100),8);
LAB_1076321e:
  uVar10 = *(int *)(in_ECX + 200) * 8;
  uVar6 = FBitWriter::GetNumBits((FBitWriter *)param_1);
  FBitWriter::WriteInt(local_70,uVar6,uVar10);
  iVar5 = FArchive::IsError((FArchive *)local_70);
  if (iVar5 != 0) {
    appFailAssert("!Header.IsError()",".\\UnConn.cpp",0x2b2);
  }
  iVar5 = FBitWriter::GetNumBits((FBitWriter *)param_1);
  iVar7 = FBitWriter::GetNumBits(local_70);
  UNetConnection::PreSend(in_ECX,iVar5 + iVar7);
  *(undefined4 *)(in_ECX + 0x13c) = param_2;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(in_ECX + 0xea4);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(*(int *)(in_ECX + 0x74) + 0x50);
  pFVar1 = (FBitWriter *)(in_ECX + 0x254);
  puVar8 = (undefined4 *)FBitWriterMark::FBitWriterMark(local_24,pFVar1);
  *(undefined4 *)(in_ECX + 300) = *puVar8;
  *(undefined4 *)(in_ECX + 0x130) = puVar8[1];
  iVar5 = *(int *)pFVar1;
  iVar7 = FBitWriter::GetNumBits(local_70);
  puVar9 = FBitWriter::GetData(local_70);
  (**(code **)(iVar5 + 8))(puVar9,iVar7);
  iVar5 = *(int *)pFVar1;
  iVar7 = FBitWriter::GetNumBits((FBitWriter *)param_1);
  puVar9 = FBitWriter::GetData((FBitWriter *)param_1);
  (**(code **)(iVar5 + 8))(puVar9,iVar7);
  UNetConnection::PostSend(in_ECX);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  local_8 = local_8 & 0xffffff00;
  FBitWriter::~FBitWriter(local_70);
  ExceptionList = local_10;
  return uVar2;
}


// ==== 1076332a Catch@1076332a

void Catch_1076332a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076333e Catch@1076333e

void Catch_1076333e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::SendRawBunch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763400 FUN_10763400

void FUN_10763400(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10763420 FUN_10763420

void FUN_10763420(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108305d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10763470 FUN_10763470

void FUN_10763470(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108305f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 107634e0 FUN_107634e0

void FUN_107634e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830619;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10763550 FUN_10763550

void FUN_10763550(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830639;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 107635a0 FUN_107635a0

UObject * FUN_107635a0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UDownload::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&UDownload::PrivateStaticClass);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 10763610 FUN_10763610

void FUN_10763610(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UChannel::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 10763690 FUN_10763690

void FUN_10763690(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UDownload::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 10763710 FUN_10763710

void FUN_10763710(FArchive *param_1)

{
  UPlayer *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830650;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UPlayer::Serialize(in_ECX,param_1);
  thunk_FUN_10763400(param_1,in_ECX + 0xc0);
  for (iVar1 = 0; iVar1 < 0x3ff; iVar1 = iVar1 + 1) {
    thunk_FUN_10762ae0(param_1,in_ECX + iVar1 * 4 + 0xeac);
  }
  thunk_FUN_10762ac0(param_1,in_ECX + 0x3ee4);
  ExceptionList = local_10;
  return;
}


// ==== 107637a0 Catch@107637a0

void Catch_107637a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 107637b4 Catch@107637b4

void Catch_107637b4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763810 FUN_10763810

undefined4 FUN_10763810(ushort *param_1,FOutputDevice *param_2)

{
  int iVar1;
  UPlayer *in_ECX;
  FOutputDevice *this;
  FOutputDevice *extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830660;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = ParseCommand(&param_1,(ushort *)L"GETPING");
  if (iVar1 == 0) {
    iVar1 = ParseCommand(&param_1,(ushort *)L"GETLOSS");
    if (iVar1 == 0) {
      iVar1 = UPlayer::Exec(in_ECX,param_1,param_2);
      if (iVar1 != 0) {
        ExceptionList = local_10;
        return 1;
      }
      ExceptionList = local_10;
      return 0;
    }
    FUN_107a6660();
    this = extraout_ECX;
  }
  else {
    FUN_107a6660();
    this = param_2;
  }
  FOutputDevice::Logf(this,(ushort *)param_2);
  ExceptionList = local_10;
  return 1;
}


// ==== 107638ea Catch@107638ea

void Catch_107638ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107638fe Catch@107638fe

void Catch_107638fe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763960 FUN_10763960

void FUN_10763960(int param_1)

{
  UChannel *this;
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830670;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x3ebc);
  ExceptionList = &local_10;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    this = *(UChannel **)(*(int *)(in_ECX + 0x3eb8) + iVar1 * 4);
    (**(code **)(*(int *)this + 0x7c))(param_1);
    if (*(int *)(this + 0x48) == param_1) {
      UChannel::ReceivedAcks(this);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 107639df Catch@107639df

void Catch_107639df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 107639f3 Catch@107639f3

void Catch_107639f3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::ReceivedNak");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763a40 FUN_10763a40

void FUN_10763a40(APlayerController *param_1)

{
  UObject *this;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830680;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x54) == 0) {
    ExceptionList = &local_10;
    appFailAssert("PC->GetLevel()->Engine->Client",".\\UnConn.cpp",0x393);
  }
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x54) + 0x3c) == 0) {
    appFailAssert("PC->GetLevel()->Engine->Client->Viewports.Num()",".\\UnConn.cpp",0x394);
  }
  this = (UObject *)
         **(undefined4 **)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x54) + 0x38);
  *(undefined4 *)(*(int *)(this + 0x3c) + 0x560) = 0;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0xc2] = (APlayerController)0x3;
  *(undefined4 *)(param_1 + 0x5ac) = 0x334cc80c;
  *(undefined4 *)(param_1 + 0x5b8) = 5;
  APlayerController::SetPlayer(param_1,(UPlayer *)this);
  if (*(int *)GLog_exref != 0) {
    UObject::GetName(this);
    UObject::GetName((UObject *)param_1);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
  }
  (**(code **)(**(int **)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + 0x74) + 0x54) +
                                    0x38) + 0x78) + 0x80))();
  (**(code **)(**(int **)(*(int *)(param_1 + 0xe4) + 0x74) + 0x74))();
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x5cc) = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x78) != 2) {
    appFailAssert("State==USOCK_Pending",".\\UnConn.cpp",0x3a6);
  }
  *(undefined4 *)(in_ECX + 0x78) = 3;
  *(APlayerController **)(in_ECX + 0x3c) = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 10763bbb Catch@10763bbb

void Catch_10763bbb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10763bcf Catch@10763bcf

void Catch_10763bcf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"InitialPlayerPawn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763beb Catch@10763beb

void Catch_10763beb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10763bff Catch@10763bff

void Catch_10763bff(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::HandleClientPlayer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763c80 FUN_10763c80

void FUN_10763c80(int param_1)

{
  FArray *this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830690;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = FArray::IsValidIndex((FArray *)(*(int *)(in_ECX + 0xc0) + 0x34),param_1);
  if (iVar2 == 0) {
    appFailAssert("PackageMap->List.IsValidIndex(PackageIndex)",".\\UnConn.cpp",0x3b7);
  }
  if (*(int *)(in_ECX + 0x3eec) == 0) {
    this = (FArray *)(in_ECX + 0x3ee8);
    FArray::AddZeroed(this,0x20,1);
    **(undefined4 **)this = &UChannelDownload::PrivateStaticClass;
    FString::operator=((FString *)(*(int *)this + 4),(ushort *)L"Engine.UChannelDownload");
    FString::operator=((FString *)(*(int *)this + 0x10),(ushort *)&DAT_10853d94);
    *(undefined4 *)(*(int *)this + 0x1c) = 0;
  }
  if (*(int **)(in_ECX + 0x3ee4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3ee4) + 0xc))();
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x3ee8);
  FName::FName((FName *)&stack0xffffffd0,0);
  piVar3 = (int *)thunk_FUN_10763690(*puVar1,0xffffffff);
  *(int **)(in_ECX + 0x3ee4) = piVar3;
  iVar2 = *piVar3;
  FString::operator*((FString *)(*(int *)(in_ECX + 0x3ee8) + 0x10));
  (**(code **)(iVar2 + 0x6c))();
  ExceptionList = local_10;
  return;
}


// ==== 10763da0 Catch@10763da0

void Catch_10763da0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10763db4 Catch@10763db4

void Catch_10763db4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::ReceiveFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10763e30 FUN_10763e30

void FUN_10763e30(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10763e60 FUN_10763e60

void FUN_10763e60(void)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  FString *pFVar4;
  UClass *this;
  UObject *pUVar5;
  int in_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  UPackageMap *pUVar10;
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [4];
  int *local_2c;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_108306d6;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  local_8 = 0;
  iVar7 = *(int *)(in_ECX + 0xc0);
  piVar1 = (int *)(iVar7 + 0x34);
  ExceptionList = &local_10;
  local_2c = piVar1;
  local_18 = in_ECX;
  for (iVar6 = 0; iVar6 < *(int *)(iVar7 + 0x38); iVar6 = iVar6 + 1) {
    puVar2 = FString::operator*((FString *)(*piVar1 + iVar6 * 0x44));
    FString::FString(local_30,puVar2);
    local_8._0_1_ = 1;
    while( true ) {
      iVar3 = FString::InStr(local_30,(ushort *)&DAT_108a2398,0);
      if (iVar3 == -1) break;
      pFVar4 = (FString *)FString::Mid(local_30,(int)local_3c,iVar3 + 1);
      local_8._0_1_ = 2;
      FString::operator=(local_30,pFVar4);
      local_8._0_1_ = 1;
      FString::~FString(local_3c);
    }
    while( true ) {
      iVar3 = FString::InStr(local_30,(ushort *)&DAT_108c9f98,0);
      if (iVar3 == -1) break;
      pFVar4 = (FString *)FString::Mid(local_30,(int)local_48,iVar3 + 1);
      local_8._0_1_ = 3;
      FString::operator=(local_30,pFVar4);
      local_8._0_1_ = 1;
      FString::~FString(local_48);
    }
    while( true ) {
      iVar3 = FString::InStr(local_30,(ushort *)&DAT_108a239c,0);
      if (iVar3 == -1) break;
      pFVar4 = (FString *)FString::Mid(local_30,(int)local_54,iVar3 + 1);
      local_8._0_1_ = 4;
      FString::operator=(local_30,pFVar4);
      local_8._0_1_ = 1;
      FString::~FString(local_54);
    }
    while( true ) {
      iVar3 = FString::InStr(local_30,(ushort *)&DAT_108a2398,0);
      if (iVar3 == -1) break;
      pFVar4 = (FString *)FString::Mid(local_30,(int)local_60,iVar3 + 1);
      local_8._0_1_ = 5;
      FString::operator=(local_30,pFVar4);
      local_8._0_1_ = 1;
      FString::~FString(local_60);
    }
    iVar3 = *piVar1 + iVar6 * 0x44;
    FString::operator*(local_30);
    UObject::GetName(*(UObject **)(iVar3 + 0x10));
    FGuid::String((FGuid *)(iVar3 + 0x14));
    FOutputDevice::Logf(this_00,(ushort *)(local_18 + 0x34));
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_30);
  }
  iVar7 = 0;
  while( true ) {
    if (*(int *)(*(int *)(local_18 + 0x74) + 0x9c) <= iVar7) break;
    pUVar10 = (UPackageMap *)0x0;
    uVar9 = 2;
    puVar8 = (ushort *)0x0;
    local_1c = iVar7;
    puVar2 = FString::operator*((FString *)
                                (*(int *)(*(int *)(local_18 + 0x74) + 0x98) + iVar7 * 0xc));
    this = UObject::StaticLoadClass
                     (&UDownload::PrivateStaticClass,(UObject *)0x0,puVar2,puVar8,uVar9,pUVar10);
    if (this != (UClass *)0x0) {
      pUVar5 = UClass::GetDefaultObject(this);
      iVar6 = thunk_FUN_107635a0(pUVar5);
      puVar2 = FString::operator*((FString *)(iVar6 + 0x40));
      FString::FString(local_30,puVar2);
      local_8 = CONCAT31(local_8._1_3_,6);
      pUVar5 = UClass::GetDefaultObject(this);
      thunk_FUN_107635a0(pUVar5);
      puVar2 = FString::operator*(local_30);
      if (*puVar2 != 0) {
        FString::operator*(local_30);
        UObject::GetPathName((UObject *)this,(UObject *)0x0,(ushort *)0x0);
        FOutputDevice::Logf(this_01,(ushort *)(local_18 + 0x34));
      }
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_30);
    }
    iVar7 = iVar7 + 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10764149 Catch@10764149

void Catch_10764149(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1076415d Catch@1076415d

void Catch_1076415d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::SendPackageMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10764240 FUN_10764240

void FUN_10764240(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830701;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10764290 FUN_10764290

void FUN_10764290(void)

{
  int *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830720;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < in_ECX[0xfac]; iVar1 = iVar1 + 1) {
    (**(code **)(*in_ECX + 0x80))(*(undefined4 *)(in_ECX[0xfab] + iVar1 * 4),0);
  }
  FArray::Empty((FArray *)(in_ECX + 0xfab),4,0x20);
  ExceptionList = local_10;
  return;
}


// ==== 1076430c Catch@1076430c

void Catch_1076430c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10764320 Catch@10764320

void Catch_10764320(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::PurgeAcks");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10764370 FUN_10764370

void FUN_10764370(ulong param_1,int param_2)

{
  byte bVar1;
  UNetConnection *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830730;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xd0) == 0) {
    ExceptionList = &local_10;
    if (param_2 != 0) {
      ExceptionList = &local_10;
      UNetConnection::PurgeAcks(in_ECX);
      thunk_FUN_104225e0(&param_1);
    }
    bVar1 = appCeilLogTwo(0x4000);
    UNetConnection::PreSend(in_ECX,bVar1 + 1);
    FBitWriter::WriteBit((FBitWriter *)(in_ECX + 0x254),'\x01');
    FBitWriter::WriteInt((FBitWriter *)(in_ECX + 0x254),param_1,0x4000);
    *(undefined4 *)(in_ECX + 0x13c) = 0;
    UNetConnection::PostSend(in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10764425 Catch@10764425

void Catch_10764425(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10764439 Catch@10764439

void Catch_10764439(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::SendAck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10764490 FUN_10764490

int * FUN_10764490(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = (int)param_1;
  puStack_c = &LAB_10830740;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UChannel::IsKnownChannelType((int)param_1);
  if (iVar2 == 0) {
    appFailAssert("UChannel::IsKnownChannelType(ChType)",".\\UnConn.cpp",0x2d2);
  }
  (**(code **)(*in_ECX + 0x7c))();
  if (param_3 == -1) {
    param_3 = 1;
    if (iVar1 == 1) {
      param_3 = 0;
    }
    for (; (param_3 < 0x3ff && (in_ECX[param_3 + 0x3ab] != 0)); param_3 = param_3 + 1) {
    }
    if (param_3 == 0x3ff) {
      ExceptionList = local_10;
      return (int *)0x0;
    }
  }
  iVar2 = param_3;
  if (0x3fe < param_3) {
    appFailAssert("ChIndex<MAX_CHANNELS",".\\UnConn.cpp",0x2e3);
  }
  if (in_ECX[iVar2 + 0x3ab] != 0) {
    appFailAssert("Channels[ChIndex]==NULL",".\\UnConn.cpp",0x2e4);
  }
  param_1 = (int *)&stack0xffffffd0;
  FName::FName((FName *)&stack0xffffffd0,0);
  piVar3 = (int *)thunk_FUN_10763610((&UChannel::ChannelClasses)[iVar1],0xffffffff);
  param_1 = piVar3;
  (**(code **)(*piVar3 + 0x68))();
  in_ECX[iVar2 + 0x3ab] = (int)piVar3;
  thunk_FUN_10763e30(&param_1);
  ExceptionList = local_10;
  return piVar3;
}


// ==== 107645d8 Catch@107645d8

void Catch_107645d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107645ec Catch@107645ec

void Catch_107645ec(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::CreateChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10764670 FUN_10764670

int FUN_10764670(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_1032b660(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 107646c0 FUN_107646c0

void FUN_107646c0(void)

{
  int *piVar1;
  UObject *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830750;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    appTimestamp();
    UObject::GetName(in_ECX);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x313);
  }
  if (*(int **)(in_ECX + 0xeac) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xeac) + 0x70))();
  }
  (**(code **)(*(int *)in_ECX + 0x84))();
  if (*(UObject **)(*(int *)(in_ECX + 0x74) + 0x44) == (UObject *)0x0) {
    iVar2 = thunk_FUN_10764670();
    if (iVar2 != 1) {
      appFailAssert("Driver->ClientConnections.RemoveItem( this )==1",".\\UnConn.cpp",99);
    }
  }
  else {
    if (*(UObject **)(*(int *)(in_ECX + 0x74) + 0x44) != in_ECX) {
      appFailAssert("Driver->ServerConnection==this",".\\UnConn.cpp",0x5d);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0x44) = 0;
  }
  *(undefined4 *)(in_ECX + 0x78) = 1;
  iVar2 = *(int *)(in_ECX + 0x3ebc);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x3eb8) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
  }
  if (*(int **)(in_ECX + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xc0) + 0xc))();
  }
  if (*(int **)(in_ECX + 0x3ee4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3ee4) + 0xc))();
  }
  UPlayer::Destroy((UPlayer *)in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1076480c Catch@1076480c

void Catch_1076480c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10764820 Catch@10764820

void Catch_10764820(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107648a0 FUN_107648a0

void FUN_107648a0(FArchive *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  UChannel *pUVar5;
  UNetConnection *in_ECX;
  FOutputDevice *this;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *pFVar6;
  char local_db;
  FInBunch local_b8 [76];
  int local_6c;
  ulong local_60;
  EChannelType local_5c;
  int local_58;
  uchar local_54;
  uchar local_53;
  uchar local_52;
  undefined1 *local_50;
  void *local_4c;
  undefined1 *puStack_48;
  uint local_44;
  UChannel *local_38;
  int local_2c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_48 = &LAB_10830773;
  local_4c = ExceptionList;
  local_50 = &stack0xfffffea8;
  local_44._0_1_ = 0;
  local_44._1_3_ = 0;
  ExceptionList = &local_4c;
  (**(code **)(*(int *)in_ECX + 0x7c))();
  iVar2 = FArchive::IsError(param_1);
  if (iVar2 == 0) {
    *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(*(int *)(in_ECX + 0x74) + 0x50);
    FBitReader::ReadInt((FBitReader *)param_1,0x4000);
    local_8 = thunk_FUN_10762a90();
    if (*(int *)(in_ECX + 0xea0) < local_8) {
      *(int *)(in_ECX + 0x200) =
           *(int *)(in_ECX + 0x200) + (local_8 - *(int *)(in_ECX + 0xea0)) + -1;
      *(int *)(in_ECX + 0xea0) = local_8;
    }
    else {
      *(int *)(in_ECX + 0x220) = *(int *)(in_ECX + 0x220) + 1;
    }
    (**(code **)(*(int *)in_ECX + 0x80))(local_8);
    while( true ) {
      while( true ) {
        iVar2 = (**(code **)(*(int *)param_1 + 0x30))();
        if (iVar2 != 0) {
          ExceptionList = local_4c;
          return;
        }
        if (*(int *)(in_ECX + 0x78) == 1) {
          ExceptionList = local_4c;
          return;
        }
        local_18 = FBitReader::GetPosBits((FBitReader *)param_1);
        uVar1 = FBitReader::ReadBit((FBitReader *)param_1);
        iVar2 = FArchive::IsError(param_1);
        if (iVar2 != 0) {
          pFVar6 = *(FOutputDevice **)GNull_exref;
          this = (FOutputDevice *)GNull_exref;
          goto LAB_107648f6;
        }
        if (uVar1 == '\0') break;
        FBitReader::ReadInt((FBitReader *)param_1,0x4000);
        uVar3 = thunk_FUN_10762a90();
        local_14 = uVar3;
        iVar2 = FArchive::IsError(param_1);
        if (iVar2 != 0) {
          pFVar6 = *(FOutputDevice **)GNull_exref;
          this = (FOutputDevice *)GNull_exref;
          goto LAB_107648f6;
        }
        local_44 = CONCAT31(local_44._1_3_,1);
        iVar2 = *(int *)(in_ECX + 0xea8);
        if (iVar2 < (int)uVar3) {
          while (iVar2 = iVar2 + 1, local_2c = iVar2, iVar2 < (int)local_14) {
            FBitReader::GetPosBits((FBitReader *)param_1);
            FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref
                                ,(ushort *)0x306);
            UNetConnection::ReceivedNak(in_ECX,iVar2);
            *(int *)(in_ECX + 0x204) = *(int *)(in_ECX + 0x204) + 1;
          }
          *(uint *)(in_ECX + 0xea8) = local_14;
          uVar3 = local_14;
        }
        if (*(uint *)(in_ECX + (uVar3 & 0xff) * 4 + 0xaa0) == uVar3) {
          *(float *)(in_ECX + 0x1f8) =
               (float)(((float10)*(double *)(*(int *)(in_ECX + 0x74) + 0x50) -
                       (float10)*(double *)(in_ECX + (uVar3 & 0xff) * 8 + 0x2a0)) -
                      (float10)*(double *)(in_ECX + 0x238) * (float10)0.5) +
               *(float *)(in_ECX + 0x1f8);
          *(int *)(in_ECX + 0x228) = *(int *)(in_ECX + 0x228) + 1;
        }
        local_44 = 3;
        FBitReader::GetPosBits((FBitReader *)param_1);
        FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                            (ushort *)0x306);
        local_c = *(int *)(in_ECX + 0x3ebc);
        while (local_c = local_c + -1, -1 < local_c) {
          pUVar5 = *(UChannel **)(*(int *)(in_ECX + 0x3eb8) + local_c * 4);
          for (iVar2 = *(int *)(pUVar5 + 100); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x4c)) {
            if ((*(uint *)(iVar2 + 0x6c) == uVar3) &&
               (*(undefined4 *)(iVar2 + 0x5c) = 1, *(char *)(iVar2 + 0x70) != '\0')) {
              *(undefined4 *)(pUVar5 + 0x38) = 1;
            }
          }
          if (*(uint *)(pUVar5 + 0x48) == uVar3) {
            *(undefined4 *)(pUVar5 + 0x38) = 1;
          }
          UChannel::ReceivedAcks(pUVar5);
        }
        local_44._0_1_ = 0;
        local_44._1_3_ = 0;
      }
      FInBunch::FInBunch(local_b8,in_ECX);
      local_44 = CONCAT31(local_44._1_3_,6);
      local_10 = FBitReader::GetPosBits((FBitReader *)param_1);
      uVar1 = FBitReader::ReadBit((FBitReader *)param_1);
      local_6c = local_8;
      if (uVar1 == '\0') {
        local_54 = '\0';
        local_53 = '\0';
      }
      else {
        local_54 = FBitReader::ReadBit((FBitReader *)param_1);
        local_53 = FBitReader::ReadBit((FBitReader *)param_1);
      }
      local_52 = FBitReader::ReadBit((FBitReader *)param_1);
      local_60 = FBitReader::ReadInt((FBitReader *)param_1,0x3ff);
      if (local_52 == '\0') {
        local_58 = 0;
      }
      else {
        FBitReader::ReadInt((FBitReader *)param_1,0x400);
        local_58 = thunk_FUN_10762a90();
      }
      if ((local_52 == '\0') && (local_54 == '\0')) {
        local_5c = 0;
      }
      else {
        local_5c = FBitReader::ReadInt((FBitReader *)param_1,8);
      }
      uVar4 = FBitReader::ReadInt((FBitReader *)param_1,*(int *)(in_ECX + 200) * 8);
      FBitReader::GetPosBits((FBitReader *)param_1);
      iVar2 = FArchive::IsError(param_1);
      if (iVar2 != 0) break;
      FBitReader::SetData((FBitReader *)local_b8,(FBitReader *)param_1,uVar4);
      iVar2 = FArchive::IsError(param_1);
      if (iVar2 != 0) {
        FBitReader::GetNumBits((FBitReader *)param_1);
        FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(ushort *)*(FOutputDevice **)GNull_exref)
        ;
        local_44 = local_44 & 0xffffff00;
        FInBunch::~FInBunch(local_b8);
        ExceptionList = local_4c;
        return;
      }
      if (local_52 == '\0') {
        FBitReader::GetPosBits((FBitReader *)param_1);
        FOutputDevice::Logf((FOutputDevice *)GNull_exref,*(EName *)GNull_exref,(ushort *)0x306);
        pFVar6 = extraout_ECX_00;
      }
      else {
        FBitReader::GetPosBits((FBitReader *)param_1);
        FOutputDevice::Logf((FOutputDevice *)GNull_exref,*(EName *)GNull_exref,(ushort *)0x306);
        pFVar6 = extraout_ECX;
      }
      local_44 = 5;
      if (((*(int *)(in_ECX + local_60 * 4 + 0xeac) == 0) && (*(int *)(in_ECX + 0xeac) == 0)) &&
         ((local_60 != 0 || (local_5c != 1)))) {
        FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,(EName)*(FOutputDevice **)GNull_exref,
                            (ushort *)0x306);
        local_44 = local_44 & 0xffffff00;
        FInBunch::~FInBunch(local_b8);
        ExceptionList = local_4c;
        return;
      }
      local_44._0_1_ = 8;
      local_44._1_3_ = 0;
      pUVar5 = *(UChannel **)(in_ECX + local_60 * 4 + 0xeac);
      local_38 = pUVar5;
      if (local_52 == '\0') {
        if (((local_54 != '\0') && (local_53 != '\0')) ||
           ((pUVar5 != (UChannel *)0x0 && (*(int *)(pUVar5 + 0x48) != -1)))) goto LAB_10764eda;
        FOutputDevice::Logf(*(FOutputDevice **)(in_ECX + local_60 * 4 + 0x2ea4),
                            *(EName *)GNull_exref,(ushort *)0x306);
        local_44._0_1_ = 0;
        FInBunch::~FInBunch(local_b8);
        local_44._0_1_ = 0;
      }
      else if (*(int *)(in_ECX + local_60 * 4 + 0x2ea4) < local_58) {
LAB_10764eda:
        if (pUVar5 == (UChannel *)0x0) {
          local_44._0_1_ = 9;
          local_44._1_3_ = 0;
          iVar2 = UChannel::IsKnownChannelType(local_5c);
          if (iVar2 == 0) {
            FOutputDevice::Logf(*(FOutputDevice **)GNull_exref,
                                (ushort *)*(FOutputDevice **)GNull_exref);
            local_44 = (uint)local_44._1_3_ << 8;
            FInBunch::~FInBunch(local_b8);
            ExceptionList = local_4c;
            return;
          }
          FOutputDevice::Logf((FOutputDevice *)GNull_exref,*(EName *)GNull_exref,(ushort *)0x306);
          pUVar5 = UNetConnection::CreateChannel(in_ECX,local_5c,0,local_60);
          local_38 = pUVar5;
          iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x74) + 0x48) + 8))();
          if (iVar2 == 0) {
            local_44._0_1_ = 10;
            FOutBunch::FOutBunch((FOutBunch *)&stack0xfffffeb4,pUVar5,1);
            local_44 = CONCAT31(local_44._1_3_,0xb);
            iVar2 = FArchive::IsError((FArchive *)&stack0xfffffeb4);
            if (iVar2 != 0) {
              appFailAssert("!CloseBunch.IsError()",".\\UnConn.cpp",0x227);
            }
            if (local_db == '\0') {
              appFailAssert("CloseBunch.bClose",".\\UnConn.cpp",0x228);
            }
            UChannel::SendBunch(pUVar5,(FOutBunch *)&stack0xfffffeb4,0);
            (**(code **)(*(int *)in_ECX + 0x84))();
            if (pUVar5 != (UChannel *)0x0) {
              (**(code **)(*(int *)pUVar5 + 0xc))();
            }
            if (local_60 == 0) {
              FOutputDevice::Logf((FOutputDevice *)GNull_exref,*(EName *)GNull_exref,(ushort *)0x306
                                 );
              *(undefined4 *)(in_ECX + 0x78) = 1;
            }
            local_44._0_1_ = 10;
            FOutBunch::~FOutBunch((FOutBunch *)&stack0xfffffeb4);
            goto LAB_10764e74;
          }
        }
        if (local_54 != '\0') {
          *(undefined4 *)(pUVar5 + 0x38) = 1;
          *(int *)(pUVar5 + 0x48) = local_8;
        }
        local_44 = 0xe;
        UChannel::ReceivedRawBunch(pUVar5,local_b8);
        *(int *)(in_ECX + 0x210) = *(int *)(in_ECX + 0x210) + 1;
        local_44._0_1_ = 0;
        local_44._1_3_ = 0;
        FInBunch::~FInBunch(local_b8);
      }
      else {
        FOutputDevice::Logf(pFVar6,*(EName *)GNull_exref,(ushort *)0x306);
LAB_10764e74:
        local_44 = (uint)local_44._1_3_ << 8;
        FInBunch::~FInBunch(local_b8);
        local_44._0_1_ = 0;
      }
    }
    FOutputDevice::Logf((FOutputDevice *)GNull_exref,*(ushort **)GNull_exref);
    local_44 = local_44 & 0xffffff00;
    FInBunch::~FInBunch(local_b8);
  }
  else {
    pFVar6 = *(FOutputDevice **)GNull_exref;
    this = pFVar6;
LAB_107648f6:
    FOutputDevice::Logf(this,(ushort *)pFVar6);
  }
  ExceptionList = local_4c;
  return;
}


// ==== 10764b8d Catch@10764b8d

void Catch_10764b8d(void)

{
  undefined4 *unaff_EBP;
  
  *unaff_EBP = unaff_EBP[-0x1f];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP,&DAT_10914c48);
}


// ==== 10764ba1 Catch@10764ba1

void Catch_10764ba1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ReceivedAck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10764bbd Catch@10764bbd

void Catch_10764bbd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 10764bd4 Catch@10764bd4

void Catch_10764bd4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ReceivedVirtualNak");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076503d Catch@1076503d

void Catch_1076503d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 10765054 Catch@10765054

void Catch_10765054(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"NotifyAcceptingRefused");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107650ad Catch@107650ad

void Catch_107650ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x88);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 107650c4 Catch@107650c4

void Catch_107650c4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CreateNewChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107650ce Catch@107650ce

void Catch_107650ce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x1c,&DAT_10914c48);
}


// ==== 107650e5 Catch@107650e5

void Catch_107650e5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DispatchDataToChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107650ef Catch@107650ef

void Catch_107650ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 10765103 Catch@10765103

void Catch_10765103(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"BunchData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076510d Catch@1076510d

void Catch_1076510d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x84);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 10765124 Catch@10765124

void Catch_10765124(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"BunchHeader");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076513b Catch@1076513b

void Catch_1076513b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 4,&DAT_10914c48);
}


// ==== 10765152 Catch@10765152

void Catch_10765152(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::ReceivedPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10765390 FUN_10765390

void FUN_10765390(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108307a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1032b7e0();
  ExceptionList = local_c;
  return;
}


// ==== 10765400 FUN_10765400

void FUN_10765400(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108307c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10765390();
  ExceptionList = local_c;
  return;
}


// ==== 10765450 FUN_10765450

void FUN_10765450(uchar *param_1,int param_2)

{
  uchar uVar1;
  UNetConnection *in_ECX;
  FOutputDevice *this;
  FOutputDevice *pFVar2;
  FBitReader local_6c [84];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108307e9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_104da1f0(param_2);
  FUN_107a6660();
  FOutputDevice::Logf((FOutputDevice *)0x3e8,*(EName *)GNull_exref,(ushort *)0x306);
  this = (FOutputDevice *)(*(int *)(in_ECX + 0xcc) + param_2);
  *(FOutputDevice **)(in_ECX + 0x218) = this + *(int *)(in_ECX + 0x218);
  *(int *)(in_ECX + 0x208) = *(int *)(in_ECX + 0x208) + 1;
  if (param_2 < 1) {
    pFVar2 = *(FOutputDevice **)GNull_exref;
  }
  else {
    uVar1 = param_1[param_2 + -1];
    if (uVar1 != '\0') {
      local_18 = param_2 * 8;
      for (; local_18 = local_18 + -1, -1 < (char)uVar1; uVar1 = uVar1 * '\x02') {
      }
      FBitReader::FBitReader(local_6c,param_1,local_18);
      local_8._0_1_ = 1;
      UNetConnection::ReceivedPacket(in_ECX,local_6c);
      local_8 = (uint)local_8._1_3_ << 8;
      FBitReader::~FBitReader(local_6c);
      ExceptionList = local_10;
      return;
    }
    this = *(FOutputDevice **)GNull_exref;
    pFVar2 = this;
  }
  FOutputDevice::Logf(this,(ushort *)pFVar2);
  ExceptionList = local_10;
  return;
}


// ==== 10765557 Catch@10765557

void Catch_10765557(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076556b Catch@1076556b

void Catch_1076556b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::ReceivedRawPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107655e0 FUN_107655e0

void FUN_107655e0(void)

{
  FArchive *this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uchar *puVar4;
  UNetConnection *in_ECX;
  code *pcVar5;
  float10 fVar6;
  float fVar7;
  FBitWriterMark local_28 [4];
  undefined4 *local_24;
  int local_20;
  void *local_1c;
  FArray *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830800;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  this = (FArchive *)(in_ECX + 0x254);
  ExceptionList = &local_10;
  iVar1 = FArchive::IsError(this);
  if (iVar1 != 0) {
    appFailAssert("!Out.IsError()",".\\UnConn.cpp",0xf2);
  }
  puVar2 = (undefined4 *)FBitWriterMark::FBitWriterMark(local_28);
  *(undefined4 *)(in_ECX + 0x134) = *puVar2;
  *(undefined4 *)(in_ECX + 0x138) = puVar2[1];
  *(undefined4 *)(in_ECX + 0x140) = 0;
  iVar1 = FBitWriter::GetNumBits((FBitWriter *)this);
  if ((iVar1 != 0) ||
     ((double)*(float *)(*(int *)(in_ECX + 0x74) + 0x60) <
      *(double *)(*(int *)(in_ECX + 0x74) + 0x50) - *(double *)(in_ECX + 0x10c))) {
    iVar1 = FBitWriter::GetNumBits((FBitWriter *)this);
    if (iVar1 == 0) {
      UNetConnection::PreSend(in_ECX,0);
    }
    FBitWriter::WriteBit((FBitWriter *)this,'\x01');
    iVar1 = FArchive::IsError(this);
    if (iVar1 != 0) {
      appFailAssert("!Out.IsError()",".\\UnConn.cpp",0xff);
    }
    while (uVar3 = FBitWriter::GetNumBits((FBitWriter *)this), (uVar3 & 7) != 0) {
      FBitWriter::WriteBit((FBitWriter *)this,'\0');
    }
    iVar1 = FArchive::IsError(this);
    if (iVar1 != 0) {
      appFailAssert("!Out.IsError()",".\\UnConn.cpp",0x102);
    }
    if (*(int *)(in_ECX + 0x3f04) == 0) {
      if (*(int *)(in_ECX + 0x3f0c) == 0) {
        if ((*(int *)(in_ECX + 0x3f00) == 0) ||
           (fVar7 = appFrand(), pcVar5 = GetNumBytes_exref,
           (float)*(int *)(in_ECX + 0x3f00) < fVar7 * 100.0 !=
           ((float)*(int *)(in_ECX + 0x3f00) == fVar7 * 100.0))) {
          pcVar5 = GetNumBytes_exref;
          local_24 = (undefined4 *)(*(int *)in_ECX + 0x74);
          iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this);
          puVar4 = FBitWriter::GetData((FBitWriter *)this);
          (*(code *)*local_24)(puVar4,iVar1);
          if ((*(int *)(in_ECX + 0x3f08) != 0) &&
             (fVar7 = appFrand(), fVar7 * 100.0 < (float)*(int *)(in_ECX + 0x3f08))) {
            local_24 = (undefined4 *)(*(int *)in_ECX + 0x74);
            iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this);
            puVar4 = FBitWriter::GetData((FBitWriter *)this);
            (*(code *)*local_24)(puVar4,iVar1);
          }
        }
      }
      else if ((*(int *)(in_ECX + 0x3f00) == 0) ||
              (fVar7 = appFrand(), pcVar5 = GetNumBytes_exref,
              (float)*(int *)(in_ECX + 0x3f00) < fVar7 * 100.0)) {
        iVar1 = thunk_FUN_1032ab80(0x14,in_ECX + 0x3f10);
        if (iVar1 == 0) {
          local_18 = (FArray *)0x0;
        }
        else {
          local_18 = (FArray *)thunk_FUN_10764240();
        }
        pcVar5 = GetNumBytes_exref;
        iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this);
        FArray::Add(local_18,iVar1,1);
        local_24 = *(undefined4 **)local_18;
        local_1c = (void *)FBitWriter::GetNumBytes((FBitWriter *)this);
        puVar4 = FBitWriter::GetData((FBitWriter *)this);
        _memcpy(local_24,puVar4,(size_t)local_1c);
        fVar6 = (float10)thunk_FUN_104da1f0();
        *(double *)(local_18 + 0xc) =
             (double)((float10)*(int *)(in_ECX + 0x3f0c) / (float10)1000.0 + fVar6);
      }
    }
    else {
      iVar1 = thunk_FUN_1032ab80(0x14,in_ECX + 0x3f10);
      if (iVar1 == 0) {
        local_18 = (FArray *)0x0;
      }
      else {
        local_18 = (FArray *)thunk_FUN_10764240();
      }
      pcVar5 = GetNumBytes_exref;
      iVar1 = FBitWriter::GetNumBytes((FBitWriter *)this);
      FArray::Add(local_18,iVar1,1);
      local_1c = *(void **)local_18;
      local_18 = (FArray *)FBitWriter::GetNumBytes((FBitWriter *)this);
      puVar4 = FBitWriter::GetData((FBitWriter *)this);
      _memcpy(local_1c,puVar4,(size_t)local_18);
      iVar1 = *(int *)(in_ECX + 0x3f14);
      while (iVar1 = iVar1 + -1, local_20 = iVar1, -1 < iVar1) {
        fVar7 = appFrand();
        if (0.5 < fVar7) {
          if ((*(int *)(in_ECX + 0x3f00) == 0) ||
             (fVar7 = appFrand(), (float)*(int *)(in_ECX + 0x3f00) < fVar7 * 100.0)) {
            puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x3f10) + iVar1 * 0x14);
            (**(code **)(*(int *)in_ECX + 0x74))(*puVar2,puVar2[1]);
          }
          thunk_FUN_1032e690(iVar1,1);
        }
      }
    }
    uVar3 = *(uint *)(in_ECX + 0xea4) & 0xff;
    *(uint *)(in_ECX + uVar3 * 4 + 0xaa0) = *(uint *)(in_ECX + 0xea4);
    *(undefined8 *)(in_ECX + uVar3 * 8 + 0x2a0) = *(undefined8 *)(*(int *)(in_ECX + 0x74) + 0x50);
    *(int *)(in_ECX + 0xea4) = *(int *)(in_ECX + 0xea4) + 1;
    *(int *)(in_ECX + 0x20c) = *(int *)(in_ECX + 0x20c) + 1;
    *(undefined8 *)(in_ECX + 0x10c) = *(undefined8 *)(*(int *)(in_ECX + 0x74) + 0x50);
    iVar1 = (*pcVar5)();
    *(int *)(in_ECX + 0x124) = *(int *)(in_ECX + 0x124) + iVar1 + *(int *)(in_ECX + 0xcc);
    iVar1 = (*pcVar5)();
    *(int *)(in_ECX + 0x21c) = *(int *)(in_ECX + 0x21c) + iVar1 + *(int *)(in_ECX + 0xcc);
    (**(code **)(*(int *)in_ECX + 0x78))();
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x3ea4); iVar1 = iVar1 + 1) {
    thunk_FUN_104225e0(*(int *)(in_ECX + 0x3ea0) + iVar1 * 4);
  }
  FArray::Empty((FArray *)(in_ECX + 0x3ea0),4,0x20);
  ExceptionList = local_10;
  return;
}


// ==== 107659e3 Catch@107659e3

void Catch_107659e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 107659f7 Catch@107659f7

void Catch_107659f7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::FlushNet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10765b30 FUN_10765b30

void FUN_10765b30(void)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UChannel *this;
  FOutputDevice *this_00;
  double dVar5;
  int iVar6;
  undefined4 uVar7;
  UNetConnection *in_ECX;
  int iVar8;
  float10 fVar9;
  float10 extraout_ST0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830810;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)in_ECX + 0x7c))();
  if (*(int *)(in_ECX + 0x3f0c) != 0) {
    for (iVar8 = 0; iVar8 < *(int *)(in_ECX + 0x3f14); iVar8 = iVar8 + 1) {
      iVar6 = *(int *)(in_ECX + 0x3f10);
      fVar9 = (float10)thunk_FUN_104da1f0();
      if ((float10)*(double *)(iVar6 + iVar8 * 0x14 + 0xc) < fVar9) {
        (**(code **)(*(int *)in_ECX + 0x74))
                  (*(undefined4 *)(iVar8 * 0x14 + *(int *)(in_ECX + 0x3f10)));
        thunk_FUN_1032e690(iVar8,1);
        iVar8 = iVar8 + -1;
      }
    }
  }
  fVar9 = (float10)thunk_FUN_104da1f0();
  *(double *)(in_ECX + 0x238) = (double)(fVar9 - (float10)*(double *)(in_ECX + 0x230));
  *(double *)(in_ECX + 0x230) = (double)fVar9;
  dVar5 = *(double *)(in_ECX + 0x240) + *(double *)(in_ECX + 0x238);
  *(double *)(in_ECX + 0x240) = dVar5;
  *(int *)(in_ECX + 0x250) = *(int *)(in_ECX + 0x250) + 1;
  if (1.0 < dVar5) {
    *(double *)(in_ECX + 0x248) = dVar5 / (double)*(int *)(in_ECX + 0x250);
    *(undefined8 *)(in_ECX + 0x240) = 0;
    *(undefined4 *)(in_ECX + 0x250) = 0;
  }
  if (*(int *)(in_ECX + 0xd0) != 0) {
    *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(*(int *)(in_ECX + 0x74) + 0x50);
    iVar8 = *(int *)(in_ECX + 0x3ebc);
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      this = *(UChannel **)(*(int *)(in_ECX + 0x3eb8) + iVar8 * 4);
      for (iVar6 = *(int *)(this + 100); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x4c)) {
        *(undefined4 *)(iVar6 + 0x5c) = 1;
      }
      *(undefined4 *)(this + 0x38) = 1;
      UChannel::ReceivedAcks(this);
    }
  }
  if ((double)*(float *)(in_ECX + 0x1c4) <
      *(double *)(*(int *)(in_ECX + 0x74) + 0x50) - *(double *)(in_ECX + 0x1bc)) {
    local_8 = CONCAT31(local_8._1_3_,1);
    fVar2 = (float)((float10)*(double *)(*(int *)(in_ECX + 0x74) + 0x50) -
                   (float10)*(double *)(in_ECX + 0x1bc));
    *(float *)(in_ECX + 0x1c8) = (float)*(int *)(in_ECX + 0x218) / fVar2;
    *(float *)(in_ECX + 0x1cc) = (float)*(int *)(in_ECX + 0x21c) / fVar2;
    iVar8 = *(int *)(in_ECX + 0x208);
    *(float *)(in_ECX + 0x1d0) = (float)iVar8 / fVar2;
    *(float *)(in_ECX + 0x1d4) = (float)*(int *)(in_ECX + 0x20c) / fVar2;
    *(float *)(in_ECX + 0x1d8) = (float)*(int *)(in_ECX + 0x210) / fVar2;
    *(float *)(in_ECX + 0x1dc) = (float)*(int *)(in_ECX + 0x214) / fVar2;
    *(float *)(in_ECX + 0x1e8) = (float)*(int *)(in_ECX + 0x220) / fVar2;
    *(float *)(in_ECX + 0x1ec) = (float)*(int *)(in_ECX + 0x224) / fVar2;
    iVar6 = *(int *)(in_ECX + 0x204);
    fVar9 = (float10)thunk_FUN_104a4940((float)*(int *)(in_ECX + 0x20c) / fVar2,0x3f800000);
    fVar3 = (float)((float10)((double)iVar6 * 100.0) / fVar9);
    *(float *)(in_ECX + 0x1e4) = fVar3;
    iVar6 = *(int *)(in_ECX + 0x200);
    fVar9 = (float10)thunk_FUN_104a4940((float)iVar6 + (float)iVar8 / fVar2,0x3f800000);
    fVar2 = (float)((float10)((float)iVar6 * 100.0) / fVar9);
    *(float *)(in_ECX + 0x1e0) = fVar2;
    if (*(int *)(in_ECX + 0x228) != 0) {
      *(float *)(in_ECX + 500) = *(float *)(in_ECX + 0x1f8) / (float)*(int *)(in_ECX + 0x228);
    }
    fVar4 = *(float *)(in_ECX + 500);
    *(float *)(in_ECX + 0x1f0) = fVar4;
    if ((20.0 < fVar3) || (20.0 < fVar2)) {
      *(int *)(in_ECX + 0x22c) = *(int *)(in_ECX + 0x22c) + 1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x22c) = 0;
    }
    iVar8 = *(int *)(in_ECX + 0x3c);
    if (iVar8 != 0) {
      fVar9 = (float10)thunk_FUN_104a4940(fVar2,fVar3);
      if (*(int *)(iVar8 + 0x6b4) != 0) {
        if (((*(int *)(in_ECX + 0xd0) == 0) &&
            (((0.8 < (float)(fVar9 * (float10)0.009999999776482582) * 1.2 + fVar4 ||
              ((1.0 - (float)(fVar9 * (float10)0.009999999776482582)) *
               (float)*(int *)(in_ECX + 0x50) < 2000.0)) &&
             (iVar8 = thunk_FUN_105d2b00(), iVar8 != 0)))) || (*(float *)(in_ECX + 0x1d0) < 2.0)) {
          iVar8 = 1;
        }
        else {
          iVar8 = 0;
        }
        puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x6b4) + 0x3fc);
        *puVar1 = *puVar1 ^ (iVar8 << 4 ^
                            *(uint *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x6b4) + 0x3fc)) & 0x10;
      }
    }
    *(undefined4 *)(in_ECX + 0x1f8) = 0;
    *(undefined4 *)(in_ECX + 0x1fc) = 0x461c3c00;
    *(undefined4 *)(in_ECX + 0x218) = 0;
    *(undefined4 *)(in_ECX + 0x21c) = 0;
    *(undefined4 *)(in_ECX + 0x208) = 0;
    *(undefined4 *)(in_ECX + 0x20c) = 0;
    *(undefined4 *)(in_ECX + 0x210) = 0;
    *(undefined4 *)(in_ECX + 0x214) = 0;
    *(undefined4 *)(in_ECX + 0x200) = 0;
    *(undefined4 *)(in_ECX + 0x204) = 0;
    *(undefined4 *)(in_ECX + 0x220) = 0;
    *(undefined4 *)(in_ECX + 0x224) = 0;
    *(undefined4 *)(in_ECX + 0x228) = 0;
    *(undefined8 *)(in_ECX + 0x1bc) = *(undefined8 *)(*(int *)(in_ECX + 0x74) + 0x50);
    local_8 = 0;
  }
  iVar8 = *(int *)(in_ECX + 0x74);
  *(undefined8 *)(in_ECX + 0x114) = *(undefined8 *)(iVar8 + 0x50);
  iVar6 = FUN_107a6660();
  *(int *)(in_ECX + 0x124) = *(int *)(in_ECX + 0x124) - iVar6;
  if ((float)*(int *)(in_ECX + 0x124) < -(float)(extraout_ST0 + extraout_ST0)) {
    uVar7 = FUN_107a6660();
    *(undefined4 *)(in_ECX + 0x124) = uVar7;
  }
  this_00 = *(FOutputDevice **)(in_ECX + 0x78);
  if ((this_00 == (FOutputDevice *)0x2) || (*(int *)(in_ECX + 0x3c) == 0)) {
    fVar2 = *(float *)(iVar8 + 0x5c);
  }
  else {
    fVar2 = *(float *)(iVar8 + 0x58);
  }
  if (*(double *)(iVar8 + 0x50) - *(double *)(in_ECX + 0x104) <= (double)fVar2) {
    iVar8 = *(int *)(in_ECX + 0x3ebc);
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3eb8) + iVar8 * 4) + 0x80))();
    }
    if ((*(int *)(in_ECX + 0xeac) != 0) ||
       ((*(int *)(in_ECX + 0x1ea8) == 0 && (*(int *)(in_ECX + 0x2ea4) == 0)))) goto LAB_10766077;
  }
  else if ((this_00 != (FOutputDevice *)0x1) && (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x304);
  }
  *(undefined4 *)(in_ECX + 0x78) = 1;
LAB_10766077:
  UNetConnection::PurgeAcks(in_ECX);
  if ((*(int *)(in_ECX + 0x140) != 0) ||
     ((double)*(float *)(*(int *)(in_ECX + 0x74) + 0x60) <
      *(double *)(*(int *)(in_ECX + 0x74) + 0x50) - *(double *)(in_ECX + 0x10c))) {
    (**(code **)(*(int *)in_ECX + 0x84))();
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  if (*(int **)(in_ECX + 0x3ee4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3ee4) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10765f95 Catch@10765f95

void Catch_10765f95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10765fa9 Catch@10765fa9

void Catch_10765fa9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UpdateStats");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107660df Catch@107660df

void Catch_107660df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 107660f3 Catch@107660f3

void Catch_107660f3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TickDownload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107660fd Catch@107660fd

void Catch_107660fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 10766111 Catch@10766111

void Catch_10766111(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107662a0 FUN_107662a0

void FUN_107662a0(void)

{
  UPlayer *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1083091d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPlayer::UPlayer(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UNetConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UNetConnection::vftable_for_FExec_;
  FURL::FURL((FURL *)(in_ECX + 0x7c),(ushort *)0x0);
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0xe0));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xec));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xf8));
  local_4._0_1_ = 4;
  FBitWriterMark::FBitWriterMark((FBitWriterMark *)(in_ECX + 300));
  FBitWriterMark::FBitWriterMark((FBitWriterMark *)(in_ECX + 0x134));
  FOutBunch::FOutBunch((FOutBunch *)(in_ECX + 0x148));
  local_4._0_1_ = 5;
  FBitWriter::FBitWriter((FBitWriter *)(in_ECX + 0x254),0);
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x3ea0));
  local_4._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x3eac));
  local_4._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x3eb8));
  local_4._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x3ec4));
  local_4._0_1_ = 0xe;
  thunk_FUN_10765390();
  local_4._0_1_ = 0x10;
  FArray::FArray((FArray *)(in_ECX + 0x3ee8));
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FArray::FArray((FArray *)(in_ECX + 0x3f10));
  ExceptionList = local_c;
  return;
}


// ==== 10766460 FUN_10766460

void FUN_10766460(undefined4 param_1,FURL *param_2)

{
  ushort *puVar1;
  int iVar2;
  UPackageMapLevel *this;
  undefined4 uVar3;
  UPlayer *in_ECX;
  wchar_t *pwVar4;
  UPlayer *pUVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10830a6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UPlayer::UPlayer(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UNetConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UNetConnection::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x74) = param_1;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  FURL::FURL((FURL *)(in_ECX + 0x7c),param_2);
  local_8._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0xc4) = 1;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 2000;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0xe0));
  local_8._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xec));
  local_8._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xf8));
  local_8._0_1_ = 4;
  iVar2 = *(int *)(in_ECX + 0x74);
  *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(iVar2 + 0x50);
  *(undefined8 *)(in_ECX + 0x10c) = *(undefined8 *)(iVar2 + 0x50);
  *(undefined8 *)(in_ECX + 0x114) = *(undefined8 *)(iVar2 + 0x50);
  *(undefined8 *)(in_ECX + 0x11c) = 0;
  *(undefined4 *)(in_ECX + 0x124) = 0;
  FBitWriterMark::FBitWriterMark((FBitWriterMark *)(in_ECX + 300));
  FBitWriterMark::FBitWriterMark((FBitWriterMark *)(in_ECX + 0x134));
  FOutBunch::FOutBunch((FOutBunch *)(in_ECX + 0x148));
  local_8._0_1_ = 5;
  *(undefined8 *)(in_ECX + 0x1bc) = *(undefined8 *)(*(int *)(in_ECX + 0x74) + 0x50);
  *(undefined4 *)(in_ECX + 0x1c4) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x1f0) = 0x461c3c00;
  *(undefined4 *)(in_ECX + 500) = 0x461c3c00;
  *(undefined4 *)(in_ECX + 0x1f8) = 0x461c3c00;
  *(undefined4 *)(in_ECX + 0x1fc) = 0x461c3c00;
  FBitWriter::FBitWriter((FBitWriter *)(in_ECX + 0x254),0);
  local_8._0_1_ = 6;
  *(undefined4 *)(in_ECX + 0xea0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xea8) = 0xffffffff;
  FArray::FArray((FArray *)(in_ECX + 0x3ea0));
  local_8._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x3eac));
  local_8._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x3eb8));
  local_8._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x3ec4));
  local_8._0_1_ = 0xe;
  thunk_FUN_10765390();
  local_8._0_1_ = 0x10;
  FArray::FArray((FArray *)(in_ECX + 0x3ee8));
  local_8._0_1_ = 0x12;
  FArray::FArray((FArray *)(in_ECX + 0x3f10));
  local_8 = CONCAT31(local_8._1_3_,0x15);
  pUVar5 = in_ECX + 0x3f00;
  pwVar4 = L"PktLoss=";
  puVar1 = appCmdLine();
  Parse(puVar1,(ushort *)pwVar4,(int *)pUVar5);
  pUVar5 = in_ECX + 0x3f04;
  pwVar4 = L"PktOrder=";
  puVar1 = appCmdLine();
  Parse(puVar1,(ushort *)pwVar4,(int *)pUVar5);
  pUVar5 = in_ECX + 0x3f08;
  pwVar4 = L"PktDup=";
  puVar1 = appCmdLine();
  Parse(puVar1,(ushort *)pwVar4,(int *)pUVar5);
  pUVar5 = in_ECX + 0x3f0c;
  pwVar4 = L"PktLag=";
  puVar1 = appCmdLine();
  Parse(puVar1,(ushort *)pwVar4,(int *)pUVar5);
  iVar2 = FURL::HasOption((FURL *)(in_ECX + 0x7c),(ushort *)&DAT_108b7954);
  if (iVar2 == 0) {
    iVar2 = *(int *)(DAT_10db0314 + 0x54);
  }
  else {
    iVar2 = *(int *)(DAT_10db0314 + 0x58);
  }
  *(int *)(in_ECX + 0x50) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(in_ECX + 0x50) = 0xa28;
  }
  else {
    if (iVar2 < 0x5dc) {
      iVar2 = 0x5dc;
    }
    *(int *)(in_ECX + 0x50) = iVar2;
  }
  FName::FName((FName *)&stack0xffffffcc,0);
  this = UPackageMapLevel::operator_new(0x80);
  if (this == (UPackageMapLevel *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = UPackageMapLevel::UPackageMapLevel(this,(UNetConnection *)in_ECX);
  }
  *(undefined4 *)(in_ECX + 0xc0) = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10766739 Catch@10766739

void Catch_10766739(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076674d Catch@1076674d

void Catch_1076674d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetConnection::UNetConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10766860 FUN_10766860

undefined4 FUN_10766860(void)

{
  return 0;
}


// ==== 1076689b Catch@1076689b

void Catch_1076689b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107668af Catch@107668af

void Catch_107668af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoPlayPendingLevel::NotifyGetLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107668f0 FUN_107668f0

void FUN_107668f0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830ad0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xbc) == 0) {
    ExceptionList = &local_10;
    appFailAssert("DemoRecDriver",".\\UnDemoPenLev.cpp",0x5f);
  }
  if (*(int *)(*(int *)(in_ECX + 0xbc) + 0x44) == 0) {
    appFailAssert("DemoRecDriver->ServerConnection",".\\UnDemoPenLev.cpp",0x60);
  }
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x84))(param_1);
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x80))();
  ExceptionList = local_10;
  return;
}


// ==== 1076699c Catch@1076699c

void Catch_1076699c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107669b0 Catch@107669b0

void Catch_107669b0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoPlayPendingLevel::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10766a10 FUN_10766a10

void FUN_10766a10(UStruct *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UStruct::IsChildOf(param_1,(UStruct *)&UNetDriver::PrivateStaticClass);
  if (iVar1 == 0) {
    appFailAssert("Class->IsChildOf(T::StaticClass())",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
  }
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0);
  return;
}


// ==== 10766a90 FUN_10766a90

UObject * FUN_10766a90(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UDemoRecDriver::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&UDemoRecDriver::PrivateStaticClass);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 10766b00 FUN_10766b00

int FUN_10766b00(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x44);
  return *(int *)param_2 + iVar1 * 0x44;
}


// ==== 10766b30 FUN_10766b30

void FUN_10766b30(int param_1,FOutputDevice *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  FPackageInfo *this;
  UPackage *pUVar4;
  ushort *puVar5;
  int iVar6;
  int in_ECX;
  FGuid *pFVar7;
  ushort *puVar8;
  ushort local_2b0 [256];
  ushort local_b0;
  undefined1 local_ae [58];
  FURL local_74 [28];
  FString local_58 [40];
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10830af1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd44;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  puVar2 = &stack0xfffffd44;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2(param_2,*(EName *)GLog_exref,(ushort *)0x304);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"USES");
  if (iVar3 != 0) {
    this = (FPackageInfo *)thunk_FUN_10766b00();
    if (this == (FPackageInfo *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FPackageInfo::FPackageInfo(this,(ULinkerLoad *)0x0);
    }
    local_b0 = 0;
    _memset(local_ae,0,0x7e);
    Parse((ushort *)param_2,(ushort *)L"GUID=",(FGuid *)(iVar3 + 0x14));
    Parse((ushort *)param_2,(ushort *)L"GEN=",(int *)(iVar3 + 0x3c));
    Parse((ushort *)param_2,(ushort *)L"SIZE=",(int *)(iVar3 + 0x24));
    Parse((ushort *)param_2,(ushort *)L"FLAGS=",(ulong *)(iVar3 + 0x40));
    Parse((ushort *)param_2,(ushort *)L"PKG=",&local_b0,0x40);
    pUVar4 = UObject::CreatePackage((UObject *)0x0,&local_b0);
    *(UPackage **)(iVar3 + 0x10) = pUVar4;
    ExceptionList = local_10;
    return;
  }
  iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"WELCOME");
  if (iVar3 != 0) {
    FURL::FURL(local_74,(ushort *)0x0);
    local_8 = CONCAT31(local_8._1_3_,1);
    Parse((ushort *)param_2,(ushort *)L"LEVEL=",local_58);
    iVar3 = 0;
    while( true ) {
      local_1c = iVar3;
      if (*(int *)(*(int *)(param_1 + 0xc0) + 0x38) <= iVar3) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 0x34) + iVar3 * 0x44;
      puVar8 = local_2b0;
      pFVar7 = (FGuid *)(iVar1 + 0x14);
      puVar5 = UObject::GetName(*(UObject **)(iVar1 + 0x10));
      iVar6 = appFindPackageFile(puVar5,pFVar7,puVar8);
      if (iVar6 == 0) {
        if (*(int *)GLog_exref != 0) {
          UObject::GetName(*(UObject **)(iVar1 + 0x10));
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
        }
        local_8 = local_8 & 0xffffff00;
        FURL::~FURL(local_74);
        ExceptionList = local_10;
        return;
      }
      iVar3 = iVar3 + 1;
      in_ECX = local_18;
    }
    FString::FString(local_30);
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar3 = Parse((ushort *)param_2,(ushort *)L"SERVERDEMO",local_30);
    if (iVar3 != 0) {
      iVar3 = thunk_FUN_10766a90();
      *(undefined4 *)(iVar3 + 0xc0) = 1;
    }
    *(undefined8 *)(*(int *)(in_ECX + 0x88) + 0x50) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 1;
    local_8._0_1_ = 1;
    FString::~FString(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    FURL::~FURL(local_74);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10766dd0 Catch@10766dd0

void Catch_10766dd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10766de4 Catch@10766de4

void Catch_10766de4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoPlayPendingLevel::NotifyReceivedText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10766ec0 FUN_10766ec0

void FUN_10766ec0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10830b27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPendingLevel::vftable;
  *(undefined ***)(in_ECX + 0x34) = UPendingLevel::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0xd0));
  local_4 = 0xffffffff;
  ULevelBase::~ULevelBase((ULevelBase *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10766f50 FUN_10766f50

void FUN_10766f50(void)

{
  ULevelBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830b57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULevelBase::ULevelBase(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UPendingLevel::vftable;
  *(undefined ***)(in_ECX + 0x34) = UPendingLevel::vftable;
  FString::FString((FString *)(in_ECX + 0xd0));
  ExceptionList = local_c;
  return;
}


// ==== 10766fd0 FUN_10766fd0

void FUN_10766fd0(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_10766ec0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xdc);
  }
  return;
}


// ==== 10767000 FUN_10767000

void FUN_10767000(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10766f50();
  *in_ECX = UDemoPlayPendingLevel::vftable;
  in_ECX[0xd] = UDemoPlayPendingLevel::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10767070 FUN_10767070

undefined4 FUN_10767070(void)

{
  return 0;
}


// ==== 10767080 FUN_10767080

void FUN_10767080(void)

{
  return;
}


// ==== 10767090 FUN_10767090

undefined4 FUN_10767090(void)

{
  return 1;
}


// ==== 107670a0 FUN_107670a0

void FUN_107670a0(void)

{
  return;
}


// ==== 107670b0 FUN_107670b0

undefined4 FUN_107670b0(void)

{
  return 0;
}


// ==== 107670c0 FUN_107670c0

undefined4 FUN_107670c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xbc);
}


// ==== 107670d0 FUN_107670d0

void FUN_107670d0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc4) = 1;
  return;
}


// ==== 107670e0 FUN_107670e0

undefined4 FUN_107670e0(void)

{
  return 0;
}


// ==== 107670f0 FUN_107670f0

void FUN_107670f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10830b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UDemoPlayPendingLevel::vftable;
  *(undefined ***)(in_ECX + 0x34) = UDemoPlayPendingLevel::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  thunk_FUN_10766ec0();
  ExceptionList = local_c;
  return;
}


// ==== 10767160 FUN_10767160

void FUN_10767160(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_107670f0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xdc);
  }
  return;
}


// ==== 10767190 FUN_10767190

void FUN_10767190(void)

{
  UClass *pUVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10830bb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_1076e3c0();
  *in_ECX = UDemoPlayPendingLevel::vftable;
  in_ECX[0xd] = UDemoPlayPendingLevel::vftable;
  local_8 = 1;
  pUVar1 = UObject::StaticLoadClass
                     (&UNetDriver::PrivateStaticClass,(UObject *)0x0,
                      (ushort *)L"ini:Engine.Engine.DemoRecordingDevice",(ushort *)0x0,1,
                      (UPackageMap *)0x0);
  FName::FName((FName *)&stack0xffffffcc,0);
  piVar2 = (int *)thunk_FUN_10766a10(pUVar1,0xffffffff);
  in_ECX[0x2f] = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x78))(in_ECX + 0xd);
  if (iVar3 == 0) {
    if ((int *)in_ECX[0x2f] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x2f] + 0xc))(1);
    }
    in_ECX[0x2f] = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1076726f Catch@1076726f

void Catch_1076726f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767283 Catch@10767283

void Catch_10767283(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoPlayPendingLevel::UDemoPlayPendingLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767310 FUN_10767310

void FUN_10767310(void)

{
  return;
}


// ==== 10767350 Catch@10767350

void Catch_10767350(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767364 Catch@10767364

void Catch_10767364(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecConnection::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107673a0 FUN_107673a0

undefined4 FUN_107673a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x74);
}


// ==== 107673b0 FUN_107673b0

FString * FUN_107673b0(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830bfa;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(ushort *)&DAT_10853d94);
  ExceptionList = local_10;
  return param_1;
}


// ==== 10767408 Catch@10767408

void Catch_10767408(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076741c Catch@1076741c

void Catch_1076741c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecConnection::LowLevelGetRemoteAddress");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767460 FUN_10767460

void FUN_10767460(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830c10;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x74);
  if (*(int *)(iVar1 + 0x44) == 0) {
    ExceptionList = &local_10;
    uVar2 = thunk_FUN_10330040(*(undefined4 *)(iVar1 + 0xbc),iVar1 + 0xd4,iVar1 + 0x50,&param_2);
    uVar2 = thunk_FUN_104a1e20(uVar2);
    thunk_FUN_10330040(uVar2);
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x74) + 0xbc) + 4))(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 107674f5 Catch@107674f5

void Catch_107674f5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767509 Catch@10767509

void Catch_10767509(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecConnection::LowLevelSend");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767560 FUN_10767560

FString * FUN_10767560(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830c3a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(ushort *)L"Demo recording driver connection");
  ExceptionList = local_10;
  return param_1;
}


// ==== 107675b8 Catch@107675b8

void Catch_107675b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 107675cc Catch@107675cc

void Catch_107675cc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecConnection::Describe");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767610 FUN_10767610

undefined4 FUN_10767610(void)

{
  return 1;
}


// ==== 10767620 FUN_10767620

void FUN_10767620(void)

{
  UNetConnection *in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x74) + 0x44) == 0) {
    UNetConnection::FlushNet(in_ECX);
    return;
  }
  return;
}


// ==== 10767640 FUN_10767640

void FUN_10767640(void)

{
  return;
}


// ==== 10767682 Catch@10767682

void Catch_10767682(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767696 Catch@10767696

void Catch_10767696(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecConnection::HandleClientPlayer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107676d0 FUN_107676d0

undefined4 FUN_107676d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830c60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::operator=((FString *)(in_ECX + 0xa4),(FString *)(param_3 + 0x1c));
  *(undefined8 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 10767734 Catch@10767734

void Catch_10767734(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767748 Catch@10767748

void Catch_10767748(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767790 FUN_10767790

void FUN_10767790(void)

{
  UClass *pUVar1;
  UStrProperty *this;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830c70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"DemoSpectatorClass",1);
  pUVar1 = UObject::GetClass(in_ECX);
  this = UStrProperty::operator_new(0x78,pUVar1);
  if (this != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(this,0,0xb0,(ushort *)L"Client",0x4000);
    *(undefined ***)this = UStrProperty::vftable;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10767820 Catch@10767820

void Catch_10767820(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767834 Catch@10767834

void Catch_10767834(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767890 FUN_10767890

void FUN_10767890(void)

{
  FOutputDevice *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830c80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    FOutputDevice::Logf2(in_ECX,*(ushort **)GLog_exref);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(undefined4 **)(in_ECX + 0xbc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0xbc))();
    *(undefined4 *)(in_ECX + 0xbc) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10767914 Catch@10767914

void Catch_10767914(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767928 Catch@10767928

void Catch_10767928(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CloseFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767944 Catch@10767944

void Catch_10767944(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10767958 Catch@10767958

void Catch_10767958(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::LowLevelDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107679a0 FUN_107679a0

FString * FUN_107679a0(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830caa;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(ushort *)&DAT_10853d94);
  ExceptionList = local_10;
  return param_1;
}


// ==== 107679f8 Catch@107679f8

void Catch_107679f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10767a0c Catch@10767a0c

void Catch_10767a0c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::LowLevelGetNetworkNumber");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767a50 FUN_10767a50

void FUN_10767a50(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830cc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x48) + 0xc))();
  if (iVar1 == 0) {
    appFailAssert("Notify->NotifyGetLevel()",".\\UnDemoRec.cpp",0x15e);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0xc))();
  ExceptionList = local_10;
  return;
}


// ==== 10767abb Catch@10767abb

void Catch_10767abb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767acf Catch@10767acf

void Catch_10767acf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::GetLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767b20 FUN_10767b20

void FUN_10767b20(void)

{
  return;
}


// ==== 10767b62 Catch@10767b62

void Catch_10767b62(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10767b76 Catch@10767b76

void Catch_10767b76(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::SpawnDemoRecSpectator");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767bd0 FUN_10767bd0

void FUN_10767bd0(float param_1)

{
  int iVar1;
  int iVar2;
  ULevel *pUVar3;
  FString *pFVar4;
  FString *this;
  ushort *puVar5;
  ushort *puVar6;
  UNetDriver *in_ECX;
  FOutputDevice *this_00;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 local_258 [520];
  FString local_50 [12];
  FString local_44 [16];
  FString local_34 [4];
  double local_30;
  int local_28 [2];
  double local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10830cfb;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd9c;
  local_8 = 0;
  ExceptionList = &local_10;
  UNetDriver::TickDispatch(in_ECX,param_1);
  *(int *)(in_ECX + 0xd4) = *(int *)(in_ECX + 0xd4) + 1;
  if ((*(int *)(in_ECX + 0x44) != 0) &&
     ((iVar1 = *(int *)(*(int *)(in_ECX + 0x44) + 0x78), iVar1 == 2 || (iVar1 == 3)))) {
    local_18 = 0;
    do {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0xbc) + 0x30))();
      if ((iVar1 != 0) || (iVar1 = FArchive::IsError(*(FArchive **)(in_ECX + 0xbc)), iVar1 != 0)) {
LAB_10767d81:
        *(undefined4 *)(*(int *)(in_ECX + 0x44) + 0x78) = 1;
        *(undefined4 *)(in_ECX + 0xcc) = 1;
        if (*(int *)(in_ECX + 0xd0) != 0) {
          pUVar3 = UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
          pFVar4 = (FString *)FURL::String((FURL *)(in_ECX + 0xd8),(int)local_50);
          local_8._0_1_ = 1;
          this = (FString *)FString::FString(local_44,(ushort *)L"DEMOPLAY ");
          local_8._0_1_ = 2;
          puVar5 = FString::operator*(pFVar4);
          pFVar4 = (FString *)FString::operator+(this,(ushort *)local_34);
          local_8._0_1_ = 3;
          iVar1 = *(int *)pUVar3;
          uVar8 = *(undefined4 *)GLog_exref;
          puVar6 = FString::operator*(pFVar4);
          (**(code **)(iVar1 + 0x8c))(puVar6,uVar8,puVar5);
          local_8._0_1_ = 2;
          FString::~FString(local_34);
          local_8._0_1_ = 1;
          FString::~FString(local_44);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_50);
        }
        ExceptionList = local_10;
        return;
      }
      thunk_FUN_10330040(*(undefined4 *)(in_ECX + 0xbc),local_28);
      thunk_FUN_104a1e20(*(undefined4 *)(in_ECX + 0xbc),&local_20);
      if (*(int *)(in_ECX + 0xc4) == 0) {
        if (*(int *)(in_ECX + 0xd4) < local_28[0]) goto LAB_10767cb2;
      }
      else if (*(double *)(in_ECX + 0x50) < local_20) {
LAB_10767cb2:
        iVar1 = **(int **)(in_ECX + 0xbc);
        iVar2 = (**(code **)(iVar1 + 0x28))();
        (**(code **)(iVar1 + 0x3c))(iVar2 + -0xc);
        ExceptionList = local_10;
        return;
      }
      if (((*(int *)(in_ECX + 200) == 0) && (*(int *)(in_ECX + 0xc4) == 0)) &&
         (*(double *)(in_ECX + 0x50) < local_20)) {
        fVar7 = (float10)thunk_FUN_104da1f0();
        local_30 = (double)(((float10)local_20 - (float10)*(double *)(in_ECX + 0x50)) + fVar7);
        do {
          fVar7 = (float10)thunk_FUN_104da1f0();
        } while (fVar7 < (float10)local_30);
      }
      thunk_FUN_10330020(*(undefined4 *)(in_ECX + 0xbc),&param_1);
      (**(code **)(**(int **)(in_ECX + 0xbc) + 4))(local_258,param_1);
      iVar1 = FArchive::IsError(*(FArchive **)(in_ECX + 0xbc));
      if (iVar1 != 0) {
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x304);
        }
        goto LAB_10767d81;
      }
      if (param_1 != 0.0) {
        local_18 = local_18 + 1;
      }
      UNetConnection::ReceivedRawPacket(*(UNetConnection **)(in_ECX + 0x44),local_258,(int)param_1);
    } while (*(int *)(*(int *)(in_ECX + 0x44) + 0x78) != 2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10767e6d Catch@10767e6d

void Catch_10767e6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10767e81 Catch@10767e81

void Catch_10767e81(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::TickDispatch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10767f60 FUN_10767f60

undefined4 FUN_10767f60(undefined4 param_1,FOutputDevice *param_2)

{
  int iVar1;
  ULevel *pUVar2;
  int in_ECX;
  FOutputDevice *this;
  UDemoRecDriver *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830d10;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x98) != 0) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar1 = ParseCommand((ushort **)&param_1,(ushort *)L"DEMOREC");
  if ((iVar1 != 0) || (iVar1 = ParseCommand((ushort **)&param_1,(ushort *)L"DEMOPLAY"), iVar1 != 0))
  {
    if (*(int *)(in_ECX + 0x10) == 0) {
      FString::operator*((FString *)(in_ECX + 0x70));
      FOutputDevice::Logf(this,(ushort *)param_2);
    }
    else {
      FString::operator*((FString *)(in_ECX + 0x70));
      FOutputDevice::Logf(param_2,(ushort *)param_2);
    }
    ExceptionList = local_10;
    return 1;
  }
  iVar1 = ParseCommand((ushort **)&param_1,(ushort *)L"STOPDEMO");
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  FString::operator*((FString *)(in_ECX + 0x70));
  FOutputDevice::Logf(param_2,(ushort *)param_2);
  if (*(int *)(in_ECX + 0x10) == 0) {
    this_00 = (UDemoRecDriver *)(in_ECX + -0x34);
    pUVar2 = UDemoRecDriver::GetLevel(this_00);
    *(undefined4 *)(pUVar2 + 0xbc) = 0;
    if (this_00 == (UDemoRecDriver *)0x0) {
      ExceptionList = local_10;
      return 1;
    }
    (**(code **)(*(int *)this_00 + 0xc))();
    ExceptionList = local_10;
    return 1;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x78) = 1;
  ExceptionList = local_10;
  return 1;
}


// ==== 10768099 Catch@10768099

void Catch_10768099(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107680ad Catch@107680ad

void Catch_107680ad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768130 FUN_10768130

void FUN_10768130(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10768160 FUN_10768160

void FUN_10768160(void)

{
  UNetDriver *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830d54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetDriver::UNetDriver(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UDemoRecDriver::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDemoRecDriver::vftable_for_FExec_;
  FString::FString((FString *)(in_ECX + 0xa4));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0xb0));
  local_4 = CONCAT31(local_4._1_3_,2);
  FURL::FURL((FURL *)(in_ECX + 0xd8),(ushort *)0x0);
  ExceptionList = local_c;
  return;
}


// ==== 10768200 FUN_10768200

void FUN_10768200(UNetDriver *param_1,FURL *param_2)

{
  UNetConnection *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10830d78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UNetConnection::UNetConnection(in_ECX,param_1,param_2);
  *(undefined ***)in_ECX = UDemoRecConnection::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDemoRecConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UDemoRecConnection::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 200) = 0x200;
  *(undefined4 *)(in_ECX + 0xd0) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 10768284 Catch@10768284

void Catch_10768284(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10768298 Catch@10768298

void Catch_10768298(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecConnection::UDemoRecConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107682f0 FUN_107682f0

undefined4 FUN_107682f0(FNetworkNotify *param_1,FURL *param_2,FString *param_3)

{
  int iVar1;
  UPackage *pUVar2;
  UDemoRecConnection *this;
  ushort *puVar3;
  FString *pFVar4;
  UNetDriver *in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10830d99;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = UNetDriver::InitConnect(in_ECX,param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = UDemoRecDriver::InitBase((UDemoRecDriver *)in_ECX,1,param_1,param_2,param_3);
    if (iVar1 != 0) {
      FName::FName((FName *)&stack0xffffffc4,0);
      pUVar2 = UObject::GetTransientPackage();
      this = UDemoRecConnection::operator_new(0x3f1c,pUVar2);
      if (this == (UDemoRecConnection *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = UDemoRecConnection::UDemoRecConnection(this,in_ECX,param_2);
      }
      *(int *)(in_ECX + 0x44) = iVar1;
      *(undefined4 *)(iVar1 + 0x50) = 1000000;
      *(undefined4 *)(*(int *)(in_ECX + 0x44) + 0x78) = 2;
      iVar1 = **(int **)GFileManager_exref;
      puVar3 = FString::operator*((FString *)(in_ECX + 0xa4));
      iVar1 = (**(code **)(iVar1 + 8))(puVar3);
      *(int *)(in_ECX + 0xbc) = iVar1;
      if (iVar1 != 0) {
        FURL::operator=((FURL *)(in_ECX + 0xd8),param_2);
        iVar1 = FURL::HasOption(param_2,(ushort *)L"3rdperson");
        *(int *)(in_ECX + 0xc0) = iVar1;
        iVar1 = FURL::HasOption(param_2,(ushort *)L"timebased");
        *(int *)(in_ECX + 0xc4) = iVar1;
        iVar1 = FURL::HasOption(param_2,(ushort *)L"noframecap");
        *(int *)(in_ECX + 200) = iVar1;
        iVar1 = FURL::HasOption(param_2,(ushort *)L"loop");
        *(int *)(in_ECX + 0xd0) = iVar1;
        ExceptionList = local_10;
        return 1;
      }
      puVar3 = FString::operator*((FString *)(in_ECX + 0xa4));
      pFVar4 = (FString *)
               FString::Printf((ushort *)local_28,L"Couldn\'t open demo file %s for reading",puVar3)
      ;
      local_8._0_1_ = 1;
      FString::operator=(param_3,pFVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10768489 Catch@10768489

void Catch_10768489(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076849d Catch@1076849d

void Catch_1076849d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::InitConnect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768530 FUN_10768530

undefined4 FUN_10768530(UNetConnection *param_1,FURL *param_2,FString *param_3)

{
  FURL *pFVar1;
  int iVar2;
  UPackage *pUVar3;
  UDemoRecConnection *this;
  UNetConnection *this_00;
  ushort *puVar4;
  undefined4 uVar5;
  FString *pFVar6;
  ULevel *pUVar7;
  undefined4 *puVar8;
  ALevelInfo *pAVar9;
  UNetDriver *in_ECX;
  wchar_t *pwVar10;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar6 = param_3;
  pFVar1 = param_2;
  puStack_c = &LAB_10830db9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = UNetDriver::InitListen(in_ECX,(FNetworkNotify *)param_1,param_2,param_3);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = UDemoRecDriver::InitBase
                    ((UDemoRecDriver *)in_ECX,0,(FNetworkNotify *)param_1,pFVar1,pFVar6);
  if (iVar2 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  param_1 = (UNetConnection *)&stack0xffffffc4;
  FName::FName((FName *)&stack0xffffffc4,0);
  pUVar3 = UObject::GetTransientPackage();
  this = UDemoRecConnection::operator_new(0x3f1c,pUVar3);
  if (this == (UDemoRecConnection *)0x0) {
    this_00 = (UNetConnection *)0x0;
  }
  else {
    this_00 = (UNetConnection *)UDemoRecConnection::UDemoRecConnection(this,in_ECX,pFVar1);
  }
  *(undefined4 *)(this_00 + 0x50) = 1000000;
  *(undefined4 *)(this_00 + 0x78) = 3;
  (**(code **)(*(int *)this_00 + 0x78))();
  param_1 = (UNetConnection *)**(int **)GFileManager_exref;
  puVar4 = FString::operator*((FString *)(in_ECX + 0xa4));
  uVar5 = (**(code **)((int)param_1 + 0xc))(puVar4);
  *(undefined4 *)(in_ECX + 0xbc) = uVar5;
  param_1 = this_00;
  thunk_FUN_10768130(&param_1);
  if (*(int *)(in_ECX + 0xbc) == 0) {
    puVar4 = FString::operator*((FString *)(in_ECX + 0xa4));
    pFVar6 = (FString *)
             FString::Printf((ushort *)local_28,L"Couldn\'t open demo file %s for writing",puVar4);
    local_8._0_1_ = 1;
    FString::operator=(param_3,pFVar6);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    ExceptionList = local_10;
    return 0;
  }
  pUVar7 = UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
  puVar8 = (undefined4 *)thunk_FUN_1056b1d0(*(undefined4 *)(pUVar7 + 0x74));
  pUVar7 = UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
  pAVar9 = ULevel::GetLevelInfo(pUVar7);
  if (pAVar9[0x5d4] == (ALevelInfo)0x3) {
    pUVar7 = UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
    UPackageMap::CopyLinkers
              (*(UPackageMap **)(in_ECX + 0x4c),
               *(UPackageMap **)(*(int *)(*(int *)(pUVar7 + 0x70) + 0x44) + 0xc0));
  }
  else {
    UDemoRecDriver::SpawnDemoRecSpectator((UDemoRecDriver *)in_ECX,this_00);
    param_1 = (UNetConnection *)*puVar8;
    UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
    (**(code **)(param_1 + 0xe0))();
  }
  UNetConnection::CreateChannel(this_00,1,1,0);
  pUVar7 = UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
  pAVar9 = ULevel::GetLevelInfo(pUVar7);
  if (pAVar9[0x5d4] != (ALevelInfo)0x3) {
    pUVar7 = UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
    pAVar9 = ULevel::GetLevelInfo(pUVar7);
    pwVar10 = L"SERVERDEMO";
    if (pAVar9[0x5d4] != (ALevelInfo)0x0) goto LAB_10768728;
  }
  pwVar10 = L"CLIENTDEMO";
LAB_10768728:
  pUVar7 = UDemoRecDriver::GetLevel((UDemoRecDriver *)in_ECX);
  (**(code **)(*(int *)pUVar7 + 0x11c))(this_00,pwVar10);
  ExceptionList = local_10;
  return 1;
}


// ==== 10768755 Catch@10768755

void Catch_10768755(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10768769 Catch@10768769

void Catch_10768769(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDemoRecDriver::InitListen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768820 FUN_10768820

void FUN_10768820(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10768840 FUN_10768840

void FUN_10768840(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10768860 FUN_10768860

void FUN_10768860(undefined4 param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830dd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(in_ECX);
  *(undefined ***)in_ECX = FBufferWriter::vftable;
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 107688e0 FUN_107688e0

undefined4 FUN_107688e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3c);
}


// ==== 107688f0 FUN_107688f0

void FUN_107688f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3c) = param_1;
  return;
}


// ==== 10768900 FUN_10768900

undefined4 FUN_10768900(void)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x38) + 4);
}


// ==== 10768910 FUN_10768910

void FUN_10768910(void)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10830df9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FArchive::~FArchive(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10768960 FUN_10768960

void FUN_10768960(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830e10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::operator=((FString *)(in_ECX + 0x40),(ushort *)&DAT_10853d94);
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 107689b7 Catch@107689b7

void Catch_107689b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107689cb Catch@107689cb

void Catch_107689cb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768a10 FUN_10768a10

void FUN_10768a10(FArchive *param_1)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830e20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  thunk_FUN_10768820(param_1,in_ECX + 0x34);
  ExceptionList = local_10;
  return;
}


// ==== 10768a6b Catch@10768a6b

void Catch_10768a6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10768a7f Catch@10768a7f

void Catch_10768a7f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768ac0 FUN_10768ac0

undefined4 FUN_10768ac0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x50) != 0) && ((*(byte *)(*(int *)(in_ECX + 0x3c) + 0x40) & 2) != 0)) {
    *(undefined4 *)(in_ECX + 0x458) = 1;
    return 1;
  }
  return 0;
}


// ==== 10768b26 Catch@10768b26

void Catch_10768b26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10768b3a Catch@10768b3a

void Catch_10768b3a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::TrySkipFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768b80 FUN_10768b80

void FUN_10768b80(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  FString *this;
  int *in_ECX;
  FOutputDevice *this_00;
  wchar_t *pwVar5;
  double dVar6;
  ushort local_428 [256];
  ushort local_228 [256];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10830e49;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xfffffbcc;
  if ((in_ECX[0x115] == 0) &&
     (ExceptionList = &local_10, puVar1 = &stack0xfffffbcc, in_ECX[0x14] == 0)) {
    ExceptionList = &local_10;
    puVar1 = &stack0xfffffbcc;
    if (*(int *)GLog_exref != 0) {
      ExceptionList = &local_10;
      UObject::GetName(*(UObject **)(in_ECX[0xf] + 0x10));
      FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x304);
      puVar1 = local_14;
    }
    local_14 = puVar1;
    iVar3 = **(int **)GFileManager_exref;
    FString::operator*((FString *)(*(int *)GSys_exref + 0x4c));
    (**(code **)(iVar3 + 0x28))();
    puVar4 = (ushort *)(in_ECX + 0x15);
    puVar2 = FString::operator*((FString *)(*(int *)GSys_exref + 0x4c));
    appCreateTempFilename(puVar2,puVar4);
    iVar3 = (**(code **)(**(int **)GFileManager_exref + 0xc))(in_ECX + 0x15,0);
    in_ECX[0x14] = iVar3;
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if ((int *)in_ECX[0x14] == (int *)0x0) {
    iVar3 = *in_ECX;
    LocalizeError((ushort *)L"NetOpen",(ushort *)L"Engine",(ushort *)0x0);
    (**(code **)(iVar3 + 0x78))();
  }
  else {
    if (0 < param_2) {
      (**(code **)(*(int *)in_ECX[0x14] + 4))(param_1);
    }
    iVar3 = FArchive::IsError((FArchive *)in_ECX[0x14]);
    if (iVar3 == 0) {
      in_ECX[0x115] = in_ECX[0x115] + param_2;
      if ((*(byte *)(in_ECX[0xf] + 0x40) & 2) == 0) {
        pwVar5 = L"ReceiveFile";
      }
      else {
        pwVar5 = L"ReceiveOptionalFile";
      }
      puVar4 = LocalizeProgress((ushort *)pwVar5,(ushort *)L"Engine",(ushort *)0x0);
      UObject::GetName(*(UObject **)(in_ECX[0xf] + 0x10));
      appSprintf(local_428,puVar4);
      iVar3 = *(int *)(in_ECX[0xf] + 0x24);
      dVar6 = ((double)in_ECX[0x115] * 100.0) / (double)iVar3;
      iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3ffU)) >> 10;
      puVar4 = LocalizeProgress((ushort *)L"ReceiveSize",(ushort *)L"Engine",(ushort *)0x0);
      appSprintf(local_228,puVar4,iVar3,dVar6);
      (**(code **)(**(int **)(*(int *)(in_ECX[0xd] + 0x74) + 0x48) + 0x1c))
                (local_428,local_228,0x40800000);
    }
    else {
      puVar4 = LocalizeError((ushort *)L"NetWrite",(ushort *)L"Engine",(ushort *)0x0);
      this = (FString *)FString::Printf((ushort *)local_28,puVar4);
      local_8._0_1_ = 1;
      iVar3 = *in_ECX;
      FString::operator*(this);
      (**(code **)(iVar3 + 0x78))();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10768dcd Catch@10768dcd

void Catch_10768dcd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10768de1 Catch@10768de1

void Catch_10768de1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::ReceiveData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768ea0 FUN_10768ea0

void FUN_10768ea0(ushort *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830e60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  appStrcpy((ushort *)(in_ECX + 0x254),param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10768ef6 Catch@10768ef6

void Catch_10768ef6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10768f0a Catch@10768f0a

void Catch_10768f0a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::DownloadError");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10768f60 FUN_10768f60

undefined4 FUN_10768f60(int *param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  puStack_c = &LAB_10830e70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  iVar5 = 0;
  local_8 = 0;
  cVar4 = '\0';
  ExceptionList = &local_10;
  while( true ) {
    iVar3 = (**(code **)(*piVar1 + 0x30))();
    if (iVar3 != 0) break;
    thunk_FUN_1032ffe0(piVar1,&local_15);
    thunk_FUN_1032ffe0(param_2,&local_15);
    if (local_15 == cVar4) {
      iVar5 = iVar5 + 1;
      if (iVar5 == 5) {
        thunk_FUN_1032ffe0(piVar1,(int)&param_1 + 3);
        if (param_1._3_1_ < 2) {
          appFailAssert("C>=2","..\\..\\Core\\Inc\\FCodec.h",0xc4);
        }
        while (bVar2 = param_1._3_1_, param_1 = (int *)CONCAT13(param_1._3_1_ - 1,param_1._0_3_),
              5 < bVar2) {
          thunk_FUN_1032ffe0(param_2,&local_15);
        }
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 1;
      cVar4 = local_15;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1076904b Catch@1076904b

void Catch_1076904b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1076905f Catch@1076905f

void Catch_1076905f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecRLE::Decode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107690d0 FUN_107690d0

undefined4 FUN_107690d0(void)

{
  return 0;
}


// ==== 107690f0 FUN_107690f0

undefined4 FUN_107690f0(void)

{
  return 0;
}


// ==== 10769100 FUN_10769100

undefined4 FUN_10769100(void)

{
  return 0;
}


// ==== 10769110 FUN_10769110

undefined4 FUN_10769110(void)

{
  return 0;
}


// ==== 10769130 FUN_10769130

undefined4 FUN_10769130(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char local_124 [268];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_2;
  piVar1 = param_1;
  puStack_c = &LAB_10830e80;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffed0;
  local_8 = 0;
  for (local_18 = 0; ExceptionList = &local_10, local_18 < 0x100; local_18 = local_18 + 1) {
    local_124[local_18] = (char)local_18;
  }
  do {
    iVar3 = (**(code **)(*piVar1 + 0x30))();
    if (iVar3 != 0) {
      ExceptionList = local_10;
      return 0;
    }
    thunk_FUN_1032ffe0(piVar1,(int)&param_2 + 3);
    for (local_18 = 0; iVar3 = local_18, local_18 < 0x100; local_18 = local_18 + 1) {
      if (local_124[local_18] == param_2._3_1_) goto LAB_107691d1;
    }
    appFailAssert("i<256","..\\..\\Core\\Inc\\FCodec.h",0x182);
LAB_107691d1:
    param_1 = (int *)CONCAT13((char)iVar3,param_1._0_3_);
    thunk_FUN_1032ffe0(uVar2,(int)&param_1 + 3);
    while (0 < iVar3) {
      local_124[iVar3] = local_124[iVar3 + -1];
      iVar3 = iVar3 + -1;
      local_18 = iVar3;
    }
    local_124[0] = param_2._3_1_;
  } while( true );
}


// ==== 10769221 Catch@10769221

void Catch_10769221(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10769235 Catch@10769235

void Catch_10769235(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecMTF::Encode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107692a0 FUN_107692a0

undefined4 FUN_107692a0(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_124 [268];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_2;
  piVar1 = param_1;
  puStack_c = &LAB_10830e90;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffed0;
  local_8 = 0;
  for (local_18 = 0; ExceptionList = &local_10, (int)local_18 < 0x100; local_18 = local_18 + 1) {
    auStack_124[local_18] = (char)local_18;
  }
  while (iVar3 = (**(code **)(*piVar1 + 0x30))(), iVar3 == 0) {
    thunk_FUN_1032ffe0(piVar1,(int)&param_2 + 3);
    param_1 = (int *)CONCAT13(auStack_124[param_2 >> 0x18],param_1._0_3_);
    thunk_FUN_1032ffe0(uVar2,(int)&param_1 + 3);
    for (local_18 = param_2 >> 0x18; 0 < (int)local_18; local_18 = local_18 - 1) {
      auStack_124[local_18] = auStack_124[local_18 - 1];
    }
    auStack_124[0] = param_1._3_1_;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10769366 Catch@10769366

void Catch_10769366(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076937a Catch@1076937a

void Catch_1076937a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecMTF::Decode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107693e0 FUN_107693e0

undefined4 FUN_107693e0(void)

{
  return 0;
}


// ==== 10769400 FUN_10769400

undefined4 FUN_10769400(void)

{
  return 0;
}


// ==== 10769410 FUN_10769410

void FUN_10769410(void)

{
  int iVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830ea0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(undefined4 **)(in_ECX + 0x50) != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (**(code **)**(undefined4 **)(in_ECX + 0x50))(1);
    *(undefined4 *)(in_ECX + 0x50) = 0;
    (**(code **)(**(int **)GFileManager_exref + 0x14))(in_ECX + 0x54,0,0);
  }
  iVar1 = *(int *)(in_ECX + 0x34);
  if ((iVar1 != 0) && (*(UObject **)(iVar1 + 0x3ee4) == in_ECX)) {
    *(undefined4 *)(iVar1 + 0x3ee4) = 0;
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10769496 Catch@10769496

void Catch_10769496(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 107694aa Catch@107694aa

void Catch_107694aa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10769500 FUN_10769500

void FUN_10769500(void)

{
  return;
}


// ==== 10769540 Catch@10769540

void Catch_10769540(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10769554 Catch@10769554

void Catch_10769554(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannelDownload::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10769590 FUN_10769590

void FUN_10769590(FArchive *param_1)

{
  UDownload *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830ec0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UDownload::Serialize(in_ECX,param_1);
  thunk_FUN_10768840(param_1,in_ECX + 0x460);
  ExceptionList = local_10;
  return;
}


// ==== 107695ed Catch@107695ed

void Catch_107695ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10769601 Catch@10769601

void Catch_10769601(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannelDownload::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10769650 FUN_10769650

undefined4 FUN_10769650(void)

{
  int iVar1;
  UDownload *in_ECX;
  FOutBunch local_9c [114];
  undefined1 local_2a;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10830ee4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff58;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x460) != 0) {
    ExceptionList = &local_10;
    iVar1 = UDownload::TrySkipFile(in_ECX);
    if (iVar1 != 0) {
      FOutBunch::FOutBunch(local_9c,*(UChannel **)(in_ECX + 0x460),1);
      local_8._0_1_ = 1;
      FString::FString(local_28,(ushort *)L"SKIP");
      local_8._0_1_ = 2;
      operator<<((FArchive *)local_9c,local_28);
      local_2a = 1;
      UChannel::SendBunch(*(UChannel **)(in_ECX + 0x460),local_9c,0);
      local_8._0_1_ = 1;
      FString::~FString(local_28);
      local_8 = (uint)local_8._1_3_ << 8;
      FOutBunch::~FOutBunch(local_9c);
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10769730 Catch@10769730

void Catch_10769730(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10769744 Catch@10769744

void Catch_10769744(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannelDownload::TrySkipFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 107697b0 FUN_107697b0

void FUN_107697b0(void)

{
  int iVar1;
  UDownload *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10830f00;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x460);
  ExceptionList = &local_10;
  if ((iVar1 != 0) && (ExceptionList = &local_10, *(UDownload **)(iVar1 + 0x70) == in_ECX)) {
    ExceptionList = &local_10;
    *(undefined4 *)(iVar1 + 0x70) = 0;
  }
  *(undefined4 *)(in_ECX + 0x460) = 0;
  UDownload::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1076980b Catch@1076980b

void Catch_1076980b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076981f Catch@1076981f

void Catch_1076981f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannelDownload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10769860 FUN_10769860

void FUN_10769860(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830f19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 107698b0 FUN_107698b0

void FUN_107698b0(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830f39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,4);
  ExceptionList = local_c;
  return;
}


// ==== 10769920 FUN_10769920

int FUN_10769920(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *in_ECX + -4 + (in_ECX[1] - param_1) * 4;
}


// ==== 107699b0 FUN_107699b0

void FUN_107699b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830f59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10769a60 FUN_10769a60

undefined4 FUN_10769a60(int *param_1)

{
  (**(code **)(*param_1 + 4))(&param_1);
  return 1;
}


// ==== 10769ab0 FUN_10769ab0

void FUN_10769ab0(void *param_1,size_t param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(FArray **)(in_ECX + 0x38) + 4);
  if (iVar1 < (int)(*(int *)(in_ECX + 0x3c) + param_2)) {
    FArray::Add(*(FArray **)(in_ECX + 0x38),(*(int *)(in_ECX + 0x3c) - iVar1) + param_2,1);
  }
  _memcpy((void *)(**(int **)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c)),param_1,param_2);
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + param_2;
  return;
}


// ==== 10769b10 FUN_10769b10

void FUN_10769b10(byte param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10830f79;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FArchive::~FArchive(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10769b80 FUN_10769b80

void FUN_10769b80(int *param_1,undefined4 param_2,byte param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if (uVar1 < 6) {
    if (uVar1 == 0) goto LAB_10769bb7;
  }
  else {
    uVar1 = 5;
  }
  do {
    (**(code **)(*param_1 + 4))(&param_2,1);
    uVar1 = uVar1 - 1;
  } while (0 < (int)uVar1);
LAB_10769bb7:
  if (4 < param_3) {
    (**(code **)(*param_1 + 4))(&param_3,1);
  }
  return;
}


// ==== 10769bf0 FUN_10769bf0

undefined4 FUN_10769bf0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_2;
  puStack_c = &LAB_10830f90;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = local_1c & 0xffffff00;
  cVar3 = '\0';
  local_18 = local_18 & 0xffffff00;
  ExceptionList = &local_10;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0x30))();
    if (iVar2 != 0) break;
    thunk_FUN_1032ffe0(param_1,(int)&param_2 + 3);
    if ((param_2._3_1_ != (char)local_1c) || (cVar3 == -1)) {
      thunk_FUN_10769b80(uVar1,local_1c,local_18);
      local_1c = CONCAT31(local_1c._1_3_,param_2._3_1_);
      cVar3 = '\0';
      local_18 = local_18 & 0xffffff00;
    }
    cVar3 = cVar3 + '\x01';
    local_18 = CONCAT31(local_18._1_3_,cVar3);
  }
  thunk_FUN_10769b80(uVar1,local_1c,local_18);
  ExceptionList = local_10;
  return 0;
}


// ==== 10769c99 Catch@10769c99

void Catch_10769c99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10769cad Catch@10769cad

void Catch_10769cad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecRLE::Encode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10769d00 FUN_10769d00

void FUN_10769d00(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  FArray::Insert((FArray *)(in_ECX + 0x14),0,1,1);
  iVar1 = 0;
  **(undefined1 **)(in_ECX + 0x14) = (char)param_1;
  if (0 < *(int *)(in_ECX + 0xc)) {
    do {
      thunk_FUN_10769d00(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xc));
  }
  return;
}


// ==== 10769d50 FUN_10769d50

void FUN_10769d50(FBitWriter *param_1)

{
  FBitWriter *pFVar1;
  undefined1 *in_ECX;
  int iVar2;
  
  pFVar1 = param_1;
  FBitWriter::WriteBit(param_1,*(int *)(in_ECX + 0xc) != 0);
  if (*(int *)(in_ECX + 0xc) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(in_ECX + 0xc)) {
      do {
        thunk_FUN_10769d50(pFVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_ECX + 0xc));
    }
    return;
  }
  param_1 = (FBitWriter *)CONCAT31(param_1._1_3_,*in_ECX);
  (**(code **)(*(int *)pFVar1 + 4))(&param_1,1);
  return;
}


// ==== 10769dd0 FUN_10769dd0

void FUN_10769dd0(int param_1,int param_2)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x34) = param_1;
  *(int *)(in_ECX + 0x38) = param_2;
  *(int *)(in_ECX + 0x3c) = *(int *)(*(int *)(param_1 + 0xc0) + 0x34) + param_2 * 0x44;
  return;
}


// ==== 10769e34 Catch@10769e34

void Catch_10769e34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10769e48 Catch@10769e48

void Catch_10769e48(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::ReceiveFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10769e90 FUN_10769e90

void FUN_10769e90(UNetConnection *param_1,int param_2,ushort *param_3,int param_4)

{
  UChannel *pUVar1;
  ushort *puVar2;
  int iVar3;
  UDownload *in_ECX;
  FOutBunch local_90 [114];
  undefined1 local_1e;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10830fbb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_8 = 0;
  ExceptionList = &local_10;
  UDownload::ReceiveFile(in_ECX,param_1,param_2,param_3,param_4);
  pUVar1 = UNetConnection::CreateChannel(*(UNetConnection **)(in_ECX + 0x34),3,1,-1);
  *(UChannel **)(in_ECX + 0x460) = pUVar1;
  if (pUVar1 == (UChannel *)0x0) {
    iVar3 = *(int *)in_ECX;
    puVar2 = LocalizeError((ushort *)L"ChAllocate",(ushort *)L"Engine",(ushort *)0x0);
    (**(code **)(iVar3 + 0x78))(puVar2);
    (**(code **)(*(int *)in_ECX + 0x7c))();
    ExceptionList = local_10;
    return;
  }
  *(UDownload **)(pUVar1 + 0x70) = in_ECX;
  *(undefined4 *)(*(int *)(in_ECX + 0x460) + 0x278) = *(undefined4 *)(in_ECX + 0x38);
  FOutBunch::FOutBunch(local_90,*(UChannel **)(in_ECX + 0x460),0);
  local_8 = CONCAT31(local_8._1_3_,1);
  thunk_FUN_105714f0(local_90,*(int *)(in_ECX + 0x3c) + 0x14);
  local_1e = 1;
  iVar3 = FArchive::IsError((FArchive *)local_90);
  if (iVar3 != 0) {
    appFailAssert("!Bunch.IsError()",".\\UnDownload.cpp",0x107);
  }
  UChannel::SendBunch(*(UChannel **)(in_ECX + 0x460),local_90,0);
  local_8 = local_8 & 0xffffff00;
  FOutBunch::~FOutBunch(local_90);
  ExceptionList = local_10;
  return;
}


// ==== 10769fd0 Catch@10769fd0

void Catch_10769fd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10769fe4 Catch@10769fe4

void Catch_10769fe4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UChannelDownload::ReceiveFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076a060 FUN_1076a060

void FUN_1076a060(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10830fd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1076a110 FUN_1076a110

void FUN_1076a110(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 1076a140 FUN_1076a140

void FUN_1076a140(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 1076a280 FUN_1076a280

void FUN_1076a280(FBufferReader *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                 code *param_5)

{
  FBufferReader *pFVar1;
  int in_ECX;
  undefined1 *puVar2;
  int iVar3;
  FBufferReader local_bc [64];
  undefined1 local_7c [72];
  TArray<unsigned_char> local_34 [12];
  TArray<unsigned_char> local_28 [16];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10831014;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff38;
  local_8 = 0;
  ExceptionList = &local_10;
  TArray<unsigned_char>::TArray<unsigned_char>(local_34);
  local_8._0_1_ = 1;
  TArray<unsigned_char>::TArray<unsigned_char>(local_28);
  local_8._0_1_ = 2;
  for (iVar3 = 0; local_18 = iVar3, iVar3 < *(int *)(in_ECX + 8); iVar3 = iVar3 + 1) {
    FBufferReader::FBufferReader(local_bc,local_34);
    local_8._0_1_ = 3;
    thunk_FUN_10768860(local_28);
    local_8 = CONCAT31(local_8._1_3_,4);
    puVar2 = local_7c;
    if (*(int *)(in_ECX + 8) + -1 <= iVar3) {
      puVar2 = param_2;
    }
    pFVar1 = local_bc;
    if (iVar3 == 0) {
      pFVar1 = param_1;
    }
    (*param_5)(pFVar1,puVar2);
    if (iVar3 < *(int *)(in_ECX + 8) + -1) {
      TArray<unsigned_char>::operator=(local_34,local_28);
      FArray::Empty((FArray *)local_28,1,0);
    }
    local_8._0_1_ = 3;
    thunk_FUN_10768910();
    local_8._0_1_ = 2;
    FBufferReader::~FBufferReader(local_bc);
  }
  local_8._0_1_ = 1;
  TArray<unsigned_char>::~TArray<unsigned_char>(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  TArray<unsigned_char>::~TArray<unsigned_char>(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1076a39f Catch@1076a39f

void Catch_1076a39f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076a3b3 Catch@1076a3b3

void Catch_1076a3b3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecFull::Code");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076a430 FUN_1076a430

undefined4 FUN_1076a430(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831030;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1076a280(param_1,param_2,0xffffffff,*(int *)(in_ECX + 8) + -1,&LAB_10311aae);
  ExceptionList = local_10;
  return 1;
}


// ==== 1076a48b Catch@1076a48b

void Catch_1076a48b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076a49f Catch@1076a49f

void Catch_1076a49f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecFull::Decode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076a4e0 FUN_1076a4e0

void FUN_1076a4e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831040;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1076a110(&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1076a52e Catch@1076a52e

void Catch_1076a52e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076a542 Catch@1076a542

void Catch_1076a542(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecFull::AddCodec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076a580 FUN_1076a580

void FUN_1076a580(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10831059;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1076a640 FUN_1076a640

undefined4 FUN_1076a640(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[1] < 1) {
    appFailAssert("ArrayNum>0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x18e);
  }
  uVar1 = *(undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
  thunk_FUN_1076a140(in_ECX[1] + -1,1);
  return uVar1;
}


// ==== 1076a690 FUN_1076a690

void FUN_1076a690(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10831079;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1076a750 FUN_1076a750

void FUN_1076a750(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108310b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = param_1;
  in_ECX[1] = 0;
  FArray::FArray((FArray *)(in_ECX + 2));
  local_4 = 1;
  FArray::FArray((FArray *)(in_ECX + 5));
  ExceptionList = local_c;
  return;
}


// ==== 1076a7e0 FUN_1076a7e0

void FUN_1076a7e0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_108310e6;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(in_ECX + 0xc)) {
    iVar2 = 0;
    ExceptionList = &pvStack_c;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 8) + iVar2 * 4);
      if (iVar1 != 0) {
        thunk_FUN_1076a7e0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0xc));
  }
  local_4 = local_4 & 0xffffff00;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 0x14));
  local_4 = 0xffffffff;
  thunk_FUN_1076a580();
  ExceptionList = pvStack_c;
  return;
}


// ==== 1076a890 FUN_1076a890

void FUN_1076a890(FBitReader *param_1)

{
  FBitReader *pFVar1;
  uchar uVar2;
  undefined4 uVar3;
  uint *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pFVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1083110b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FBitReader::ReadBit(param_1);
  if (uVar2 == '\0') {
    (**(code **)(*(int *)pFVar1 + 4))(&param_1,1);
    *in_ECX = (uint)param_1 & 0xff;
  }
  else {
    FArray::Add((FArray *)(in_ECX + 2),2,4);
    iVar4 = 0;
    if (0 < (int)in_ECX[3]) {
      do {
        param_1 = (FBitReader *)(**(code **)**(undefined4 **)GMalloc_exref)(0x20,&DAT_10853a28);
        uStack_4 = 0;
        if (param_1 == (FBitReader *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = thunk_FUN_1076a750(0xffffffff);
        }
        uStack_4 = 0xffffffff;
        *(undefined4 *)(*(int *)(in_ECX + 2) + iVar4 * 4) = uVar3;
        thunk_FUN_1076a890(pFVar1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)in_ECX[3]);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 1076a9a0 FUN_1076a9a0

undefined4 FUN_1076a9a0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  FBitReader local_98 [76];
  undefined1 *local_4c;
  void *local_48;
  undefined1 *puStack_44;
  int local_40;
  int local_3c [9];
  uchar *local_18;
  int local_14;
  int local_8;
  
  piVar4 = param_1;
  puStack_44 = &LAB_10831139;
  local_48 = ExceptionList;
  local_4c = &stack0xffffff5c;
  local_40 = 0;
  ExceptionList = &local_48;
  thunk_FUN_10330040(param_1,&local_8);
  iVar2 = (**(code **)(*piVar4 + 0x2c))();
  iVar3 = (**(code **)(*piVar4 + 0x28))();
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)&local_18,iVar2 - iVar3);
  local_40._0_1_ = 1;
  (**(code **)(*piVar4 + 4))(local_18,local_14);
  FBitReader::FBitReader(local_98,local_18,local_14 * 8);
  local_40._0_1_ = 2;
  thunk_FUN_1076a750(0xffffffff);
  local_40 = CONCAT31(local_40._1_3_,3);
  thunk_FUN_1076a890(local_98);
  while (0 < local_8) {
    local_8 = local_8 + -1;
    iVar2 = FBitReader::AtEnd(local_98);
    piVar4 = local_3c;
    if (iVar2 != 0) {
      appFailAssert("!Reader.AtEnd()","..\\..\\Core\\Inc\\FCodec.h",0x162);
    }
    for (; *piVar4 == -1; piVar4 = *(int **)(piVar4[2] + (uint)bVar1 * 4)) {
      bVar1 = FBitReader::ReadBit(local_98);
    }
    param_1 = (int *)CONCAT13((char)*piVar4,param_1._0_3_);
    thunk_FUN_1032ffe0(param_2,(int)&param_1 + 3);
  }
  local_40._0_1_ = 2;
  local_8 = local_8 + -1;
  thunk_FUN_1076a7e0();
  local_40._0_1_ = 1;
  FBitReader::~FBitReader(local_98);
  local_40 = (uint)local_40._1_3_ << 8;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)&local_18);
  ExceptionList = local_48;
  return 1;
}


// ==== 1076aaf2 Catch@1076aaf2

void Catch_1076aaf2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + 0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_10914c48);
}


// ==== 1076ab06 Catch@1076ab06

void Catch_1076ab06(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecHuffman::Decode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076ab90 FUN_1076ab90

void FUN_1076ab90(byte param_1)

{
  thunk_FUN_1076a7e0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1076abc0 FUN_1076abc0

void FUN_1076abc0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1083115b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = FCodecFull::vftable;
  local_8 = 1;
  for (iVar1 = 0; iVar1 < (int)in_ECX[2]; iVar1 = iVar1 + 1) {
    thunk_FUN_103254a0(*(undefined4 *)(in_ECX[1] + iVar1 * 4));
  }
  local_8 = 0xffffffff;
  thunk_FUN_1076a690();
  ExceptionList = local_10;
  return;
}


// ==== 1076ac35 Catch@1076ac35

void Catch_1076ac35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076ac49 Catch@1076ac49

void Catch_1076ac49(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecFull::~FCodecFull");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076ac90 FUN_1076ac90

undefined4 FUN_1076ac90(void)

{
  return 0;
}


// ==== 1076acb0 FUN_1076acb0

undefined4 FUN_1076acb0(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831170;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1076a280(param_1,param_2,1,0,&LAB_103083c8);
  ExceptionList = local_10;
  return 0;
}


// ==== 1076ad03 Catch@1076ad03

void Catch_1076ad03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076ad17 Catch@1076ad17

void Catch_1076ad17(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecFull::Encode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076ad60 FUN_1076ad60

void FUN_1076ad60(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10831194;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FCodecFull::vftable;
  FArray::FArray((FArray *)(in_ECX + 1));
  ExceptionList = local_c;
  return;
}


// ==== 1076adc0 FUN_1076adc0

undefined4 FUN_1076adc0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  FBitWriter local_9c [76];
  undefined1 *local_50;
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  int local_38;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  puStack_48 = &LAB_108311df;
  local_4c = ExceptionList;
  local_50 = &stack0xffffff58;
  iVar8 = 0;
  local_44 = 0;
  ExceptionList = &local_4c;
  uVar2 = (**(code **)(*param_1 + 0x28))();
  local_1c = 0;
  local_28 = uVar2;
  thunk_FUN_107698b0(0x100);
  while (local_44._0_1_ = 1, local_8 = iVar8, iVar8 < 0x100) {
    local_24 = thunk_FUN_1032ffc0(0x20);
    local_44._0_1_ = 2;
    if (local_24 == 0) {
      *(undefined4 *)(local_18 + iVar8 * 4) = 0;
      iVar8 = iVar8 + 1;
    }
    else {
      uVar3 = thunk_FUN_1076a750(iVar8);
      *(undefined4 *)(local_18 + iVar8 * 4) = uVar3;
      iVar8 = iVar8 + 1;
    }
  }
  thunk_FUN_1076a060(&local_18);
  local_44 = CONCAT31(local_44._1_3_,3);
  while (iVar8 = (**(code **)(*param_1 + 0x30))(), iVar8 == 0) {
    uVar4 = thunk_FUN_10769a60(param_1);
    piVar5 = (int *)(*(int *)(local_18 + (uVar4 & 0xff) * 4) + 4);
    *piVar5 = *piVar5 + 1;
    local_1c = local_1c + 1;
  }
  (**(code **)(*param_1 + 0x3c))(uVar2);
  thunk_FUN_10330040(param_2,&local_1c);
  while ((1 < local_14 && (piVar5 = (int *)thunk_FUN_10769920(0), *(int *)(*piVar5 + 4) == 0))) {
    iVar8 = thunk_FUN_1076a640();
    if (iVar8 != 0) {
      thunk_FUN_1076ab90(1);
    }
  }
  local_c = local_14 * 9;
  while (iVar8 = local_c, 1 < local_14) {
    local_24 = thunk_FUN_1032ffc0(0x20);
    local_44._0_1_ = 4;
    if (local_24 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = thunk_FUN_1076a750(0xffffffff);
    }
    local_44 = CONCAT31(local_44._1_3_,3);
    FArray::Add((FArray *)(iVar8 + 8),2,4);
    for (local_8 = 0; local_8 < *(int *)(iVar8 + 0xc); local_8 = local_8 + 1) {
      iVar6 = local_8 * 4;
      iVar1 = *(int *)(iVar8 + 8);
      uVar2 = thunk_FUN_1076a640();
      *(undefined4 *)(iVar1 + iVar6) = uVar2;
      thunk_FUN_10769d00(local_8);
      *(int *)(iVar8 + 4) =
           *(int *)(iVar8 + 4) + *(int *)(*(int *)(*(int *)(iVar8 + 8) + iVar6) + 4);
    }
    local_8 = 0;
    while ((iVar6 = local_8, local_8 < local_14 &&
           (*(int *)(iVar8 + 4) <= *(int *)(*(int *)(local_18 + local_8 * 4) + 4)))) {
      local_8 = local_8 + 1;
    }
    FArray::Insert((FArray *)&local_18,local_8,1,4);
    *(int *)(local_18 + iVar6 * 4) = iVar8;
    local_c = local_c + 1;
  }
  local_8 = thunk_FUN_1076a640();
  while (iVar6 = (**(code **)(*param_1 + 0x30))(), iVar6 == 0) {
    uVar4 = thunk_FUN_10769a60(param_1);
    iVar8 = iVar8 + *(int *)(*(int *)(local_38 + (uVar4 & 0xff) * 4) + 0x18);
    local_c = iVar8;
  }
  (**(code **)(*param_1 + 0x3c))(local_28);
  FBitWriter::FBitWriter(local_9c,iVar8);
  local_44 = CONCAT31(local_44._1_3_,5);
  thunk_FUN_10769d50(local_9c);
  while (iVar8 = (**(code **)(*param_1 + 0x30))(), iVar8 == 0) {
    uVar4 = thunk_FUN_10769a60(param_1);
    iVar8 = *(int *)(local_38 + (uVar4 & 0xff) * 4);
    for (iVar6 = 0; local_2c = iVar6, iVar6 < *(int *)(iVar8 + 0x18); iVar6 = iVar6 + 1) {
      FBitWriter::WriteBit(local_9c,*(uchar *)(*(int *)(iVar8 + 0x14) + iVar6));
    }
  }
  iVar8 = FArchive::IsError((FArchive *)local_9c);
  if (iVar8 != 0) {
    appFailAssert("!Writer.IsError()","..\\..\\Core\\Inc\\FCodec.h",0x14c);
  }
  iVar8 = FBitWriter::GetNumBits(local_9c);
  if (iVar8 != local_c) {
    appFailAssert("Writer.GetNumBits()==BitCount","..\\..\\Core\\Inc\\FCodec.h",0x14d);
  }
  iVar8 = *param_2;
  iVar6 = FBitWriter::GetNumBytes(local_9c);
  puVar7 = FBitWriter::GetData(local_9c);
  (**(code **)(iVar8 + 4))(puVar7,iVar6);
  if (local_8 != 0) {
    thunk_FUN_1076ab90(1);
  }
  local_44._0_1_ = 3;
  FBitWriter::~FBitWriter(local_9c);
  local_44._0_1_ = 1;
  thunk_FUN_1076a580();
  local_44 = (uint)local_44._1_3_ << 8;
  thunk_FUN_1076a580();
  ExceptionList = local_4c;
  return 0;
}


// ==== 1076b11c Catch@1076b11c

void Catch_1076b11c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 1076b130 Catch@1076b130

void Catch_1076b130(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FCodecHuffman::Encode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076b230 FUN_1076b230

void FUN_1076b230(void)

{
  int *piVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  FString *this;
  ushort *puVar5;
  FArchive *pFVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *in_ECX;
  FOutputDevice *this_00;
  ushort local_670 [256];
  ushort local_470 [256];
  ushort local_270 [282];
  FString local_3c [32];
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10831222;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff984;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xfffff984;
  if ((undefined4 *)in_ECX[0x14] != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)in_ECX[0x14])(1);
    in_ECX[0x14] = 0;
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (in_ECX[0x116] == 0) {
    puVar3 = FGuid::String((FGuid *)(in_ECX[0xf] + 0x14));
    puVar4 = FString::operator*((FString *)(*(int *)GSys_exref + 0x4c));
    appSprintf(local_470,(ushort *)L"%s\\%s.uxx",puVar4,puVar3);
    if ((short)in_ECX[0x95] == 0) {
      if (in_ECX[0x115] == 0) {
        puVar3 = UObject::GetName(*(UObject **)(in_ECX[0xf] + 0x10));
        puVar4 = LocalizeError((ushort *)L"NetRefused",(ushort *)L"Engine",(ushort *)0x0);
        this = (FString *)FString::Printf((ushort *)local_3c,puVar4,puVar3);
        local_8._0_1_ = 1;
        iVar9 = *in_ECX;
        puVar3 = FString::operator*(this);
        (**(code **)(iVar9 + 0x78))(puVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_3c);
      }
      if (((short)in_ECX[0x95] == 0) && (in_ECX[0x117] != 0)) {
        puVar3 = (ushort *)(in_ECX + 0x15);
        appStrcpy(local_270,puVar3);
        puVar4 = puVar3;
        puVar5 = FString::operator*((FString *)(*(int *)GSys_exref + 0x4c));
        appCreateTempFilename(puVar5,puVar4);
        pFVar6 = (FArchive *)
                 (**(code **)(**(int **)GFileManager_exref + 8))
                           (local_270,0,*(undefined4 *)GNull_exref);
        puVar7 = (undefined4 *)
                 (**(code **)(**(int **)GFileManager_exref + 0xc))
                           (puVar3,0,*(undefined4 *)GNull_exref);
        local_18 = puVar7;
        if ((pFVar6 == (FArchive *)0x0) || (puVar7 == (undefined4 *)0x0)) {
          iVar9 = *in_ECX;
          puVar3 = LocalizeError((ushort *)L"NetOpen",(ushort *)L"Engine",(ushort *)0x0);
          (**(code **)(iVar9 + 0x78))(puVar3);
          puVar7 = local_18;
        }
        else {
          FString::FString(local_3c);
          local_8._0_1_ = 2;
          thunk_FUN_10330040(pFVar6,&local_1c);
          if (local_1c == 0x162e) {
            operator<<(pFVar6,local_3c);
            thunk_FUN_1076ad60();
            local_8._0_1_ = 3;
            puVar8 = (undefined4 *)thunk_FUN_1032ffc0(4);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = _vftable__exref;
              *puVar8 = FCodecRLE::vftable;
            }
            thunk_FUN_1076a4e0(puVar8);
            puVar8 = (undefined4 *)thunk_FUN_1032ffc0(4);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = _vftable__exref;
              *puVar8 = FCodecBWT::vftable;
            }
            thunk_FUN_1076a4e0(puVar8);
            puVar8 = (undefined4 *)thunk_FUN_1032ffc0(4);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = _vftable__exref;
              *puVar8 = FCodecMTF::vftable;
            }
            thunk_FUN_1076a4e0(puVar8);
            puVar8 = (undefined4 *)thunk_FUN_1032ffc0(4);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = _vftable__exref;
              *puVar8 = FCodecRLE::vftable;
            }
            thunk_FUN_1076a4e0(puVar8);
            puVar8 = (undefined4 *)thunk_FUN_1032ffc0(4);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = _vftable__exref;
              *puVar8 = FCodecHuffman::vftable;
            }
            thunk_FUN_1076a4e0(puVar8);
            thunk_FUN_1076a430(pFVar6,puVar7);
            local_8._0_1_ = 2;
            thunk_FUN_1076abc0();
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_3c);
          }
          else {
            iVar9 = *in_ECX;
            puVar3 = LocalizeError((ushort *)L"NetSize",(ushort *)L"Engine",(ushort *)0x0);
            (**(code **)(iVar9 + 0x78))(puVar3);
            puVar7 = local_18;
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_3c);
          }
        }
        if (pFVar6 != (FArchive *)0x0) {
          (**(code **)(**(int **)GFileManager_exref + 0x14))(local_270,0,0);
          (*(code *)**(undefined4 **)pFVar6)(1);
        }
        if (puVar7 != (undefined4 *)0x0) {
          (**(code **)*puVar7)(1);
        }
      }
    }
    piVar1 = in_ECX + 0x95;
    if ((short)*piVar1 == 0) {
      iVar9 = (**(code **)(**(int **)GFileManager_exref + 0x10))(in_ECX + 0x15);
      if (iVar9 != *(int *)(in_ECX[0xf] + 0x24)) {
        iVar9 = *in_ECX;
        puVar3 = LocalizeError((ushort *)L"NetSize",(ushort *)L"Engine",(ushort *)0x0);
        (**(code **)(iVar9 + 0x78))(puVar3);
      }
      if ((short)*piVar1 == 0) {
        iVar9 = (**(code **)(**(int **)GFileManager_exref + 0x1c))(local_470,in_ECX + 0x15,1,0,0);
        if (iVar9 == 0) {
          iVar9 = *in_ECX;
          puVar3 = LocalizeError((ushort *)L"NetMove",(ushort *)L"Engine",(ushort *)0x0);
          (**(code **)(iVar9 + 0x78))(puVar3);
        }
        if ((short)*piVar1 == 0) {
          thunk_FUN_105a3820();
          local_8 = CONCAT31(local_8._1_3_,4);
          puVar3 = FString::operator*((FString *)(*(int *)GSys_exref + 0x4c));
          appSprintf(local_270,(ushort *)L"%s\\cache.ini",puVar3);
          puVar3 = FString::operator*((FString *)in_ECX[0xf]);
          if (*puVar3 == 0) {
            puVar3 = UObject::GetName(*(UObject **)(in_ECX[0xf] + 0x10));
          }
          else {
            puVar3 = FString::operator*((FString *)in_ECX[0xf]);
          }
          puVar4 = local_270;
          puVar5 = FGuid::String((FGuid *)(in_ECX[0xf] + 0x14));
          thunk_FUN_105a34d0(L"Cache",puVar5,puVar3,puVar4);
          puVar3 = UObject::GetName(*(UObject **)(in_ECX[0xf] + 0x10));
          appSprintf(local_670,(ushort *)L"Received \'%s\'",puVar3);
          (**(code **)(**(int **)(*(int *)(in_ECX[0xd] + 0x74) + 0x48) + 0x1c))
                    (L"Success",local_670,0x40800000);
          (**(code **)(**(int **)(*(int *)(in_ECX[0xd] + 0x74) + 0x48) + 0x18))
                    (in_ECX[0xd],in_ECX[0xe],piVar1,0);
          local_8 = local_8 & 0xffffff00;
          thunk_FUN_105a47d0();
          ExceptionList = local_10;
          return;
        }
      }
    }
    (**(code **)(**(int **)GFileManager_exref + 0x14))(in_ECX + 0x15,0,0);
    (**(code **)(**(int **)(*(int *)(in_ECX[0xd] + 0x74) + 0x48) + 0x18))
              (in_ECX[0xd],in_ECX[0xe],piVar1,0);
  }
  else {
    if (*(int *)GLog_exref != 0) {
      UObject::GetName(*(UObject **)(in_ECX[0xf] + 0x10));
      FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
    }
    (**(code **)(**(int **)GFileManager_exref + 0x14))(in_ECX + 0x15,0,0);
    puVar3 = UObject::GetName(*(UObject **)(in_ECX[0xf] + 0x10));
    appSprintf(local_270,(ushort *)L"Skipped \'%s\'",puVar3);
    (**(code **)(**(int **)(*(int *)(in_ECX[0xd] + 0x74) + 0x48) + 0x1c))
              (L"Success",local_270,0x40800000);
    (**(code **)(**(int **)(*(int *)(in_ECX[0xd] + 0x74) + 0x48) + 0x18))
              (in_ECX[0xd],in_ECX[0xe],&DAT_10853d94,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1076b7da Catch@1076b7da

void Catch_1076b7da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1076b7ee Catch@1076b7ee

void Catch_1076b7ee(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UDownload::DownloadDone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076b990 FUN_1076b990

void FUN_1076b990(void)

{
  UClass *pUVar1;
  UFloatProperty *pUVar2;
  UIntProperty *pUVar3;
  UBoolProperty *this;
  UArrayProperty *this_00;
  UStrProperty *this_01;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831240;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"ConnectionTimeout",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x58,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"InitialConnectTimeout",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x5c,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"KeepAliveTime",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x60,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"RelevantTimeout",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,100,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"SpawnPrioritySeconds",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x68,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"ServerTravelPause",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UFloatProperty::operator_new(0x78,pUVar1);
  if (pUVar2 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(pUVar2,0,0x6c,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UFloatProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"MaxClientRate",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x70,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"NetServerMaxTickRate",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x74,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"LanServerMaxTickRate",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x78,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"AllowDownloads",1);
  pUVar1 = UObject::GetClass(in_ECX);
  this = UBoolProperty::operator_new(0x7c,pUVar1);
  if (this != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(this,0,0x7c,(ushort *)L"Client",0x4000);
    *(undefined ***)this = UBoolProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"MaxDownloadSize",1);
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar3 = UIntProperty::operator_new(0x78,pUVar1);
  if (pUVar3 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(pUVar3,0,0x94,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar3 = UIntProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"DownloadManagers",1);
  pUVar1 = UObject::GetClass(in_ECX);
  this_00 = UArrayProperty::operator_new(0x7c,pUVar1);
  if (this_00 == (UArrayProperty *)0x0) {
    this_00 = (UArrayProperty *)0x0;
  }
  else {
    UArrayProperty::UArrayProperty(this_00,0,0x98,(ushort *)L"Client",0x4000);
    *(undefined ***)this_00 = UArrayProperty::vftable;
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"StrProperty0",1);
  this_01 = UStrProperty::operator_new(0x78,this_00);
  if (this_01 == (UStrProperty *)0x0) {
    this_01 = (UStrProperty *)0x0;
  }
  else {
    UStrProperty::UStrProperty(this_01);
    *(undefined ***)this_01 = UStrProperty::vftable;
  }
  *(UStrProperty **)(this_00 + 0x78) = this_01;
  *(undefined4 *)(in_ECX + 0x70) = 25000;
  ExceptionList = local_10;
  return;
}


// ==== 1076bd75 Catch@1076bd75

void Catch_1076bd75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076bd89 Catch@1076bd89

void Catch_1076bd89(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076beb0 FUN_1076beb0

void FUN_1076beb0(void)

{
  return;
}


// ==== 1076bef0 Catch@1076bef0

void Catch_1076bef0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076bf04 Catch@1076bf04

void Catch_1076bf04(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::AssertValid");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076bf40 FUN_1076bf40

undefined4 FUN_1076bf40(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x48) = param_1;
  return 1;
}


// ==== 1076bf86 Catch@1076bf86

void Catch_1076bf86(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076bf9a Catch@1076bf9a

void Catch_1076bf9a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076bfe0 FUN_1076bfe0

undefined4 FUN_1076bfe0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x48) = param_1;
  return 1;
}


// ==== 1076c026 Catch@1076c026

void Catch_1076c026(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076c03a Catch@1076c03a

void Catch_1076c03a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076c080 FUN_1076c080

void FUN_1076c080(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10831289;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1076c0f0 FUN_1076c0f0

void FUN_1076c0f0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 1076c110 FUN_1076c110

void FUN_1076c110(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108312a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x44) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x44) + 0x88))();
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x3c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + iVar1 * 4) + 0x88))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1076c184 Catch@1076c184

void Catch_1076c184(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076c198 Catch@1076c198

void Catch_1076c198(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::TickFlush");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076c1e0 FUN_1076c1e0

void FUN_1076c1e0(float param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108312b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(double *)(in_ECX + 0x50) = (double)(param_1 + (float)*(double *)(in_ECX + 0x50));
  if (*(int *)(in_ECX + 0x44) == 0) {
    iVar2 = *(int *)(in_ECX + 0x3c);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x38) + iVar2 * 4);
      if ((piVar1[0x1e] == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0xc))(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1076c26b Catch@1076c26b

void Catch_1076c26b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076c27f Catch@1076c27f

void Catch_1076c27f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::TickDispatch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076c2d0 FUN_1076c2d0

void FUN_1076c2d0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108312c0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0x44) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x44) + 0xc))(1);
  }
  local_8 = 3;
  while (*(int *)(in_ECX + 0x3c) != 0) {
    if ((int *)**(int **)(in_ECX + 0x38) != (int *)0x0) {
      (**(code **)(*(int *)**(int **)(in_ECX + 0x38) + 0xc))(1);
    }
  }
  local_8 = 0;
  (**(code **)(*(int *)in_ECX + 0x6c))();
  if (*(int **)(in_ECX + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x4c) + 0xc))(1);
  }
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1076c37b Catch@1076c37b

void Catch_1076c37b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076c38f Catch@1076c38f

void Catch_1076c38f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DestroyClientConnections");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076c3ab Catch@1076c3ab

void Catch_1076c3ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076c3bf Catch@1076c3bf

void Catch_1076c3bf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"DestroyServerConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076c3c6 Catch@1076c3c6

void Catch_1076c3c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1076c3d7 Catch@1076c3d7

void Catch_1076c3d7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076c430 FUN_1076c430

undefined4 FUN_1076c430(undefined4 param_1,FOutputDevice *param_2)

{
  int *piVar1;
  int iVar2;
  FOutputDevice *pFVar3;
  int iVar4;
  FString *pFVar5;
  int in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FString local_44 [12];
  FString local_38 [20];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108312f4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  iVar4 = ParseCommand((ushort **)&param_1,(ushort *)L"SOCKETS");
  pFVar3 = param_2;
  if (iVar4 != 0) {
    FOutputDevice::Logf(this,(ushort *)param_2);
    if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
      pFVar5 = (FString *)(**(code **)(**(int **)(in_ECX + 0x10) + 0x70))();
      local_8._0_1_ = 1;
      FString::operator*(pFVar5);
      FOutputDevice::Logf(this_00,(ushort *)pFVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_38);
      iVar4 = 0;
      while( true ) {
        local_24 = iVar4;
        if (*(int *)(*(int *)(in_ECX + 0x10) + 0x3ebc) <= iVar4) break;
        pFVar5 = (FString *)
                 (**(code **)(**(int **)(iVar4 * 4 + *(int *)(*(int *)(in_ECX + 0x10) + 0x3eb8)) +
                             0x74))();
        local_8._0_1_ = 2;
        FString::operator*(pFVar5);
        FOutputDevice::Logf(param_2,(ushort *)param_2);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_38);
        iVar4 = iVar4 + 1;
        in_ECX = local_1c;
      }
    }
    for (local_20 = 0; local_20 < *(int *)(in_ECX + 8); local_20 = local_20 + 1) {
      piVar1 = *(int **)(*(int *)(in_ECX + 4) + local_20 * 4);
      pFVar5 = (FString *)(**(code **)(*piVar1 + 0x70))();
      local_8._0_1_ = 3;
      FString::operator*(pFVar5);
      FOutputDevice::Logf(this_01,(ushort *)param_2);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_38);
      for (local_18 = 0; local_18 < piVar1[0xfaf]; local_18 = local_18 + 1) {
        iVar4 = local_18 * 4;
        pFVar5 = (FString *)(**(code **)(**(int **)(iVar4 + piVar1[0xfae]) + 0x74))();
        local_8._0_1_ = 4;
        iVar2 = piVar1[0xfae];
        FString::operator*(pFVar5);
        FOutputDevice::Logf(*(FOutputDevice **)(*(int *)(iVar2 + iVar4) + 0x40),(ushort *)param_2);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_44);
        in_ECX = local_1c;
      }
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1076c629 Catch@1076c629

void Catch_1076c629(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1076c63d Catch@1076c63d

void Catch_1076c63d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076c6f0 FUN_1076c6f0

bool FUN_1076c6f0(UObject *param_1)

{
  UObject *pUVar1;
  int iVar2;
  
  pUVar1 = param_1;
  if (param_1 != (UObject *)0x0) {
    iVar2 = UObject::IsA(param_1,&AActor::PrivateStaticClass);
    if ((iVar2 != 0) && (((byte)pUVar1[100] & 0x50) == 0)) {
      param_1 = pUVar1;
      iVar2 = thunk_FUN_105d2b00(&param_1);
      return iVar2 != 0;
    }
  }
  return true;
}


// ==== 1076c760 FUN_1076c760

undefined4 FUN_1076c760(FArchive *param_1,UObject *param_2,int *param_3)

{
  int *piVar1;
  FArchive *this;
  UObject *this_00;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  int local_20;
  uint local_1c;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_1;
  puStack_c = &LAB_10831310;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  iVar3 = FArchive::IsLoading(param_1);
  piVar2 = param_3;
  if (iVar3 == 0) {
    local_20 = thunk_FUN_104eee90(*param_3);
    if ((local_20 != 0) && ((*(byte *)(local_20 + 100) & 0x50) == 0)) {
      local_15 = 1;
      (**(code **)(*(int *)this + 8))(&local_15,1);
      iVar3 = thunk_FUN_105d2b00(&local_20);
      uVar4 = 0;
      if (iVar3 != 0) {
        local_1c = *(uint *)(iVar3 + 0x40);
        uVar4 = *(undefined4 *)(iVar3 + 0x38);
      }
      (**(code **)(*(int *)this + 0xc))(&local_1c,0x3ff);
      ExceptionList = local_10;
      return uVar4;
    }
    if ((*piVar2 != 0) &&
       (local_1c = (**(code **)(*in_ECX + 0x74))(*piVar2), local_1c != 0xffffffff)) {
      local_16 = 0;
      (**(code **)(*(int *)this + 8))(&local_16,1);
      (**(code **)(*(int *)this + 0xc))(&local_1c,in_ECX[0x1d]);
      ExceptionList = local_10;
      return 1;
    }
    local_17 = 1;
    (**(code **)(*(int *)this + 8))(&local_17,1);
    (**(code **)(*(int *)this + 0xc))(&local_1c,0x3ff);
    ExceptionList = local_10;
    return 1;
  }
  *param_3 = 0;
  param_1 = (FArchive *)((uint)param_1 & 0xffffff);
  (**(code **)(*(int *)this + 8))((int)&param_1 + 3,1);
  if (param_1._3_1_ == '\0') {
    (**(code **)(*(int *)this + 0xc))(&local_1c,in_ECX[0x1d]);
    iVar3 = FArchive::IsError(this);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*in_ECX + 0x78))(local_1c,1);
LAB_1076c83d:
      *piVar2 = iVar3;
    }
  }
  else {
    (**(code **)(*(int *)this + 0xc))(&local_1c,0x3ff);
    if (local_1c == 0) goto LAB_1076c888;
    iVar3 = FArchive::IsError(this);
    if ((((iVar3 == 0) && (local_1c < 0x3ff)) &&
        (piVar1 = (int *)(in_ECX[0x1f] + 0xeac + local_1c * 4), *piVar1 != 0)) &&
       ((iVar3 = *piVar1, *(int *)(iVar3 + 0x50) == 2 && (*(int *)(iVar3 + 0x3c) == 0)))) {
      iVar3 = *(int *)(iVar3 + 0x74);
      goto LAB_1076c83d;
    }
  }
  this_00 = param_2;
  if ((UObject *)*piVar2 == (UObject *)0x0) {
    ExceptionList = local_10;
    return 1;
  }
  iVar3 = UObject::IsA((UObject *)*piVar2,(UClass *)param_2);
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(int *)GLog_exref != 0) {
    UObject::GetFullName(this_00,(ushort *)0x0);
    UObject::GetFullName((UObject *)*piVar2,(ushort *)0x0);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
  }
LAB_1076c888:
  *piVar2 = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1076c984 Catch@1076c984

void Catch_1076c984(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1076c998 Catch@1076c998

void Catch_1076c998(void)

{
  ushort *puVar1;
  ushort *puVar2;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"UPackageMapLevel::SerializeObject");
  puVar1 = UObject::GetFullName((UObject *)**(undefined4 **)(unaff_EBP + 0x10),(ushort *)0x0);
  puVar2 = UObject::GetFullName(*(UObject **)(unaff_EBP + 0xc),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %s)",puVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076ca80 FUN_1076ca80

FArchive * FUN_1076ca80(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831320;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10768820(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_1032ab20(4,param_2);
      thunk_FUN_10768820(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1076cb50 Catch@1076cb50

void Catch_1076cb50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1076cb64 Catch@1076cb64

void Catch_1076cb64(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076cbd0 FUN_1076cbd0

void FUN_1076cbd0(void)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  UPackageMap *this;
  ushort *puVar3;
  int iVar4;
  USubsystem *in_ECX;
  wchar_t *pwVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10831364;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  USubsystem::USubsystem(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = UNetDriver::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UNetDriver::vftable_for_FExec_;
  FArray::FArray((FArray *)(in_ECX + 0x38));
  local_8._0_1_ = 2;
  *(undefined8 *)(in_ECX + 0x50) = 0;
  FArray::FArray((FArray *)(in_ECX + 0x98),0);
  local_8 = CONCAT31(local_8._1_3_,5);
  uVar1 = thunk_FUN_10526620(&AActor::PrivateStaticClass);
  *(undefined4 *)(in_ECX + 0x84) = uVar1;
  uVar1 = thunk_FUN_10526620(&AActor::PrivateStaticClass,L"RemoteRole",0);
  *(undefined4 *)(in_ECX + 0x88) = uVar1;
  FName::FName((FName *)&stack0xffffffc8,0);
  pUVar2 = UObject::GetTransientPackage();
  this = UPackageMap::operator_new(0x7c,pUVar2);
  if (this == (UPackageMap *)0x0) {
    this = (UPackageMap *)0x0;
  }
  else {
    UPackageMap::UPackageMap(this);
    *(undefined ***)this = UPackageMap::vftable;
  }
  *(UPackageMap **)(in_ECX + 0x4c) = this;
  pwVar5 = L"profilestats";
  puVar3 = appCmdLine();
  iVar4 = ParseParam(puVar3,(ushort *)pwVar5);
  *(int *)(in_ECX + 0x80) = iVar4;
  ExceptionList = local_10;
  return;
}


// ==== 1076cce3 Catch@1076cce3

void Catch_1076cce3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076ccf7 Catch@1076ccf7

void Catch_1076ccf7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::UNetDriver");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076cd70 FUN_1076cd70

void FUN_1076cd70(byte param_1)

{
  UPackageMap *in_ECX;
  
  UPackageMap::~UPackageMap(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1076cda0 FUN_1076cda0

void FUN_1076cda0(FArchive *param_1)

{
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831380;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  uVar1 = thunk_FUN_1076ca80(param_1,in_ECX + 0x38,in_ECX + 0x44,in_ECX + 0x4c,in_ECX + 0x84,
                             in_ECX + 0x88);
  uVar1 = thunk_FUN_10768820(uVar1);
  uVar1 = thunk_FUN_10763400(uVar1);
  uVar1 = thunk_FUN_1076c0f0(uVar1);
  thunk_FUN_1076c0f0(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1076ce35 Catch@1076ce35

void Catch_1076ce35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076ce49 Catch@1076ce49

void Catch_1076ce49(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076cea0 FUN_1076cea0

void FUN_1076cea0(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831390;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x3c);
  ExceptionList = &local_10;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    if ((*(uint *)(param_1 + 0x74) & 0x200) != 0) {
      thunk_FUN_104e9650(&param_1);
    }
    piVar1 = (int *)thunk_FUN_105d2b00(&param_1);
    if (piVar1 != (int *)0x0) {
      if (piVar1[0x11] == 0) {
        appFailAssert("Channel->OpenedLocally",".\\UnNetDrv.cpp",0x107);
      }
      (**(code **)(*piVar1 + 0x70))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1076cf53 Catch@1076cf53

void Catch_1076cf53(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076cf67 Catch@1076cf67

void Catch_1076cf67(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetDriver::NotifyActorDestroyed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076cfd0 FUN_1076cfd0

undefined4 FUN_1076cfd0(void)

{
  return 0;
}


// ==== 1076d00b Catch@1076d00b

void Catch_1076d00b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d01f Catch@1076d01f

void Catch_1076d01f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::NotifyAcceptingConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d060 FUN_1076d060

void FUN_1076d060(void)

{
  return;
}


// ==== 1076d0a2 Catch@1076d0a2

void Catch_1076d0a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d0b6 Catch@1076d0b6

void Catch_1076d0b6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::NotifyAcceptedConnection");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d0f0 FUN_1076d0f0

undefined4 FUN_1076d0f0(void)

{
  return 0;
}


// ==== 1076d12d Catch@1076d12d

void Catch_1076d12d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d141 Catch@1076d141

void Catch_1076d141(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::NotifyAcceptingChannel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d180 FUN_1076d180

undefined4 FUN_1076d180(void)

{
  return 0;
}


// ==== 1076d1bb Catch@1076d1bb

void Catch_1076d1bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d1cf Catch@1076d1cf

void Catch_1076d1cf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::NotifyGetLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d210 FUN_1076d210

undefined4 FUN_1076d210(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108313e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x44) + 0x3ee4) != 0) {
    ExceptionList = &local_10;
    iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x70) + 0x44) + 0x3ee4) + 0x68))();
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1076d284 Catch@1076d284

void Catch_1076d284(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d298 Catch@1076d298

void Catch_1076d298(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::TrySkipFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d2e0 FUN_1076d2e0

undefined4 FUN_1076d2e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108313f0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &local_10;
    LocalizeError((ushort *)L"RequestDenied",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x304);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1076d351 Catch@1076d351

void Catch_1076d351(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d365 Catch@1076d365

void Catch_1076d365(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::NotifySendingFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d3b0 FUN_1076d3b0

void FUN_1076d3b0(undefined4 param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831400;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x70) == 0) {
    ExceptionList = &local_10;
    appFailAssert("NetDriver",".\\UnPenLev.cpp",0x120);
  }
  if (*(int *)(*(int *)(in_ECX + 0x70) + 0x44) == 0) {
    appFailAssert("NetDriver->ServerConnection",".\\UnPenLev.cpp",0x121);
  }
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x44) + 0x78) == 1) {
    iVar1 = FString::operator==((FString *)(in_ECX + 0xd0),(ushort *)&DAT_10853d94);
    if (iVar1 != 0) {
      puVar2 = LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
      FString::operator=((FString *)(in_ECX + 0xd0),puVar2);
      ExceptionList = local_10;
      return;
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x70) + 0x84))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x70) + 0x80))();
  ExceptionList = local_10;
  return;
}


// ==== 1076d4ab Catch@1076d4ab

void Catch_1076d4ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d4bf Catch@1076d4bf

void Catch_1076d4bf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d530 FUN_1076d530

void FUN_1076d530(void)

{
  int in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831410;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0xc4) = 1;
  this = (FOutputDevice *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x44) + 0x34);
  FOutputDevice::Logf(this,(ushort *)this);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x70) + 0x44) + 0x84))();
  ExceptionList = local_10;
  return;
}


// ==== 1076d5a4 Catch@1076d5a4

void Catch_1076d5a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076d5b8 Catch@1076d5b8

void Catch_1076d5b8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::SendJoin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d600 FUN_1076d600

void FUN_1076d600(UNetConnection *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10831420;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(param_1 + 0xc0) + 0x38) <= iVar1) {
      if (*(int **)(param_1 + 0x3ee4) != (int *)0x0) {
        ExceptionList = &local_10;
        (**(code **)(**(int **)(param_1 + 0x3ee4) + 0xc))(1);
      }
      ExceptionList = local_10;
      return;
    }
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x34) + 0x40 + iVar1 * 0x44) & 0x8000) != 0)
    break;
    iVar1 = iVar1 + 1;
  }
  ExceptionList = &local_10;
  UNetConnection::ReceiveFile(param_1,iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1076d69b Catch@1076d69b

void Catch_1076d69b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076d6af Catch@1076d6af

void Catch_1076d6af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::ReceiveNextFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d700 FUN_1076d700

void FUN_1076d700(int param_1,int param_2,short *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  FString *pFVar5;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10831439;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArray::IsValidIndex((FArray *)(*(int *)(param_1 + 0xc0) + 0x34),param_2);
  if (iVar1 == 0) {
    appFailAssert("Connection->PackageMap->List.IsValidIndex(PackageIndex)",".\\UnPenLev.cpp",0xe3);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 0x34) + param_2 * 0x44;
  if (*param_3 == 0) {
    if (param_1 != *(int *)(*(int *)(local_18 + 0x3c) + 0x44)) {
      appFailAssert("Connection==NetDriver->ServerConnection",".\\UnPenLev.cpp",0xf9);
    }
    if ((*(uint *)(iVar1 + 0x40) & 0x8000) == 0) {
      appFailAssert("Info.PackageFlags&PKG_Need",".\\UnPenLev.cpp",0xfa);
    }
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xffff7fff;
    *(int *)(local_18 + 0x98) = *(int *)(local_18 + 0x98) + -1;
    if (param_4 != 0) {
      thunk_FUN_105ca790(param_2,1);
    }
  }
  else {
    if (*(int *)(param_1 + 0x3eec) < 2) {
      iVar2 = FString::operator==((FString *)(local_18 + 0x9c),(ushort *)&DAT_10853d94);
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return;
      }
      puVar3 = UObject::GetName(*(UObject **)(iVar1 + 0x10));
      puVar4 = LocalizeError((ushort *)L"DownloadFailed",(ushort *)L"Engine",(ushort *)0x0);
      pFVar5 = (FString *)FString::Printf((ushort *)local_2c,puVar4,puVar3,param_3);
      local_8._0_1_ = 1;
      FString::operator=((FString *)(local_18 + 0x9c),pFVar5);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_2c);
      ExceptionList = local_10;
      return;
    }
    thunk_FUN_1032cc20(0,1);
  }
  thunk_FUN_1076d600(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1076d899 Catch@1076d899

void Catch_1076d899(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1076d8ad Catch@1076d8ad

void Catch_1076d8ad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::NotifyReceivedFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076d940 FUN_1076d940

void FUN_1076d940(int param_1,FOutputDevice *param_2)

{
  FArray *this;
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort *puVar4;
  FString *pFVar5;
  FPackageInfo *this_00;
  UPackage *pUVar6;
  UClass *pUVar7;
  int iVar8;
  int in_ECX;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  int iVar9;
  ushort *puVar10;
  ulong uVar11;
  FGuid *pFVar12;
  UPackageMap *pUVar13;
  ushort local_2c4 [256];
  ushort local_c4;
  undefined1 local_c2 [58];
  FURL local_88 [12];
  FString local_7c [28];
  int local_60;
  int local_5c;
  undefined1 *local_44;
  void *local_40;
  undefined1 *puStack_3c;
  int local_38;
  FString local_34 [16];
  int local_24;
  FString local_1c [12];
  int local_10;
  int local_c;
  int local_8;
  
  iVar9 = param_1;
  puStack_3c = &LAB_1083148d;
  local_40 = ExceptionList;
  local_44 = &stack0xfffffd30;
  local_38 = 0;
  ExceptionList = &local_40;
  puVar2 = &stack0xfffffd30;
  if (param_1 != *(int *)(*(int *)(in_ECX + 0x3c) + 0x44)) {
    ExceptionList = &local_40;
    appFailAssert("Connection==NetDriver->ServerConnection",".\\UnPenLev.cpp",0x58);
    puVar2 = local_44;
  }
  local_44 = puVar2;
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(param_2,*(EName *)GLog_exref,(ushort *)0x304);
  }
  iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"UPGRADE");
  if (iVar3 == 0) {
    iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"FAILURE");
    if (iVar3 == 0) {
      iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"FAILCODE");
      if (iVar3 == 0) {
        iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"USES");
        if (iVar3 != 0) {
          this_00 = (FPackageInfo *)thunk_FUN_10766b00();
          if (this_00 == (FPackageInfo *)0x0) {
            pFVar5 = (FString *)0x0;
          }
          else {
            pFVar5 = (FString *)FPackageInfo::FPackageInfo(this_00,(ULinkerLoad *)0x0);
          }
          local_c4 = 0;
          _memset(local_c2,0,0x7e);
          Parse((ushort *)param_2,(ushort *)L"GUID=",(FGuid *)(pFVar5 + 0x14));
          Parse((ushort *)param_2,(ushort *)L"GEN=",(int *)(pFVar5 + 0x3c));
          Parse((ushort *)param_2,(ushort *)L"SIZE=",(int *)(pFVar5 + 0x24));
          Parse((ushort *)param_2,(ushort *)L"FLAGS=",(ulong *)(pFVar5 + 0x40));
          Parse((ushort *)param_2,(ushort *)L"PKG=",&local_c4,0x40);
          Parse((ushort *)param_2,(ushort *)L"FNAME=",pFVar5);
          pUVar6 = UObject::CreatePackage((UObject *)0x0,&local_c4);
          *(UPackage **)(pFVar5 + 0x10) = pUVar6;
          ExceptionList = local_40;
          return;
        }
        iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"USERFLAG");
        if (iVar3 != 0) {
          iVar3 = appAtoi((ushort *)param_2);
          *(int *)(iVar9 + 0xdc) = iVar3;
          ExceptionList = local_40;
          return;
        }
        iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"CHALLENGE");
        if (iVar3 == 0) {
          iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"DLMGR");
          if (iVar3 != 0) {
            this = (FArray *)(iVar9 + 0x3ee8);
            param_1 = FArray::AddZeroed(this,0x20,1);
            iVar3 = param_1 * 0x20;
            Parse((ushort *)param_2,(ushort *)L"CLASS=",(FString *)(iVar3 + 4 + *(int *)this));
            Parse((ushort *)param_2,(ushort *)L"PARAMS=",(FString *)(iVar3 + 0x10 + *(int *)this));
            ParseUBOOL((ushort *)param_2,(ushort *)L"COMPRESSION=",
                       (int *)(iVar3 + 0x1c + *(int *)this));
            iVar9 = *(int *)this;
            pUVar13 = (UPackageMap *)0x0;
            uVar11 = 0x2002;
            puVar10 = (ushort *)0x0;
            puVar4 = FString::operator*((FString *)((undefined4 *)(iVar3 + iVar9) + 1));
            pUVar7 = UObject::StaticLoadClass
                               (&UDownload::PrivateStaticClass,(UObject *)0x0,puVar4,puVar10,uVar11,
                                pUVar13);
            *(undefined4 *)(iVar3 + iVar9) = pUVar7;
            if (*(int *)(iVar3 + *(int *)this) != 0) {
              ExceptionList = local_40;
              return;
            }
            thunk_FUN_1032cc20();
            ExceptionList = local_40;
            return;
          }
          iVar3 = ParseCommand((ushort **)&param_2,(ushort *)L"WELCOME");
          if (iVar3 == 0) {
            ExceptionList = local_40;
            return;
          }
          if (*(int *)GLog_exref != 0) {
            FOutputDevice::Logf2(this_02,*(EName *)GLog_exref,(ushort *)0x304);
          }
          Parse((ushort *)param_2,(ushort *)L"LEVEL=",(FString *)(in_ECX + 0x60));
          ParseUBOOL((ushort *)param_2,(ushort *)L"LONE=",(int *)(in_ECX + 0x94));
          Parse((ushort *)param_2,(ushort *)L"CHALLENGE=",(int *)(iVar9 + 0xd4));
          local_8 = 0;
          do {
            if (*(int *)(*(int *)(iVar9 + 0xc0) + 0x38) <= local_8) {
              thunk_FUN_1076d600();
              *(undefined4 *)(in_ECX + 0x8c) = 1;
              ExceptionList = local_40;
              return;
            }
            iVar3 = *(int *)(*(int *)(iVar9 + 0xc0) + 0x34) + local_8 * 0x44;
            puVar4 = local_2c4;
            pFVar12 = (FGuid *)(iVar3 + 0x14);
            puVar10 = UObject::GetName(*(UObject **)(iVar3 + 0x10));
            iVar8 = appFindPackageFile(puVar10,pFVar12,puVar4);
            if (iVar8 == 0) {
              UObject::GetName(*(UObject **)(iVar3 + 0x10));
              appSprintf(local_2c4,(ushort *)L"%s%s");
              iVar8 = (**(code **)(**(int **)GFileManager_exref + 0x10))();
              if (iVar8 < 1) {
                *(int *)(in_ECX + 0x98) = *(int *)(in_ECX + 0x98) + 1;
                *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) | 0x8000;
                if ((*(int *)(*(int *)(in_ECX + 0x3c) + 0x7c) == 0) ||
                   ((*(byte *)(iVar3 + 0x40) & 1) == 0)) {
                  UObject::GetName(*(UObject **)(iVar3 + 0x10));
                  pFVar5 = (FString *)FString::Printf((ushort *)local_1c);
                  local_38._0_1_ = 7;
                  FString::operator=((FString *)(in_ECX + 0x9c),pFVar5);
                  local_38 = (uint)local_38._1_3_ << 8;
                  FString::~FString(local_1c);
                  *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) + 0x78) = 1;
                  ExceptionList = local_40;
                  return;
                }
              }
            }
            local_8 = local_8 + 1;
          } while( true );
        }
        local_10 = 0;
        Parse((ushort *)param_2,(ushort *)L"VER=",(int *)(iVar9 + 0xd8));
        Parse((ushort *)param_2,(ushort *)L"CHALLENGE=",(int *)(iVar9 + 0xd4));
        FURL::FURL(local_88,(FURL *)(in_ECX + 0x44));
        local_38 = CONCAT31(local_38._1_3_,4);
        FString::operator=(local_7c,(ushort *)&DAT_10853d94);
        iVar3 = *(int *)(in_ECX + 0x70);
        while (iVar3 = iVar3 + -1, local_10 = iVar3, -1 < iVar3) {
          pFVar5 = (FString *)
                   FString::Left((FString *)(*(int *)(in_ECX + 0x6c) + iVar3 * 0xc),(int)local_1c);
          local_38._0_1_ = 5;
          local_c = FString::operator==(pFVar5,(ushort *)L"game=");
          local_38 = CONCAT31(local_38._1_3_,4);
          FString::~FString(local_1c);
          iVar9 = param_1;
          if (local_c != 0) {
            thunk_FUN_1032c0e0(iVar3);
            iVar9 = param_1;
          }
        }
        FOutputDevice::Logf(*(FOutputDevice **)(iVar9 + 0x50),
                            (ushort *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) + 0x34));
        pFVar5 = (FString *)FURL::String(local_88,(int)local_1c);
        local_38._0_1_ = 6;
        piVar1 = *(int **)(in_ECX + 0x40);
        FString::operator*(pFVar5);
        (**(code **)(*piVar1 + 0xa4))();
        this_01 = (FOutputDevice *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) + 0x34);
        FOutputDevice::Logf(this_01,(ushort *)this_01);
        local_38._0_1_ = 4;
        FString::~FString(local_1c);
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x44) + 0x84))();
      }
      else {
        iVar9 = *(int *)(*(int *)(in_ECX + 0x40) + 0x54);
        if (iVar9 == 0) {
          ExceptionList = local_40;
          return;
        }
        piVar1 = *(int **)(iVar9 + 0x38);
        if (*piVar1 == 0) {
          ExceptionList = local_40;
          return;
        }
        if (*(int *)(*piVar1 + 0x40) == 0) {
          ExceptionList = local_40;
          return;
        }
        FURL::FURL(local_88,(FURL *)(in_ECX + 0x44));
        local_38._0_1_ = 1;
        iVar9 = local_5c;
        while (iVar9 = iVar9 + -1, local_24 = iVar9, -1 < iVar9) {
          pFVar5 = (FString *)FString::Left((FString *)(local_60 + iVar9 * 0xc),(int)local_1c);
          local_38._0_1_ = 2;
          pFVar5 = (FString *)FString::Caps(pFVar5);
          local_38._0_1_ = 3;
          iVar3 = FString::operator==(pFVar5,(ushort *)L"PASSWORD=");
          local_38._0_1_ = 2;
          FString::~FString(local_34);
          local_38._0_1_ = 1;
          FString::~FString(local_1c);
          if (iVar3 != 0) {
            thunk_FUN_1032c0e0(iVar9,1);
          }
        }
      }
      local_38 = (uint)local_38._1_3_ << 8;
      FURL::~FURL(local_88);
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0x40) + 0xac))(L"Rejected By Server");
    }
  }
  else {
    param_1 = 0;
    local_c = 0;
    Parse((ushort *)param_2,(ushort *)L"MINVER=",&param_1);
    Parse((ushort *)param_2,(ushort *)L"VER=",&local_c);
    if (param_1 < 0x83f) {
      iVar9 = **(int **)(in_ECX + 0x40);
      LocalizeError((ushort *)L"ServerOutdated",(ushort *)L"Engine",(ushort *)0x0);
      puVar4 = LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
      (**(code **)(iVar9 + 0xac))(puVar4);
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0x40) + 0xac))(&DAT_10853d94);
    }
  }
  ExceptionList = local_40;
  return;
}


// ==== 1076e084 Catch@1076e084

void Catch_1076e084(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 1076e098 Catch@1076e098

void Catch_1076e098(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::NotifyReceivedText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076e2a0 FUN_1076e2a0

void FUN_1076e2a0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108314b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10766f50();
  *in_ECX = UNetPendingLevel::vftable;
  in_ECX[0xd] = UNetPendingLevel::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1076e310 FUN_1076e310

undefined4 FUN_1076e310(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x70);
}


// ==== 1076e320 FUN_1076e320

void FUN_1076e320(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108314d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UNetPendingLevel::vftable;
  *(undefined ***)(in_ECX + 0x34) = UNetPendingLevel::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  thunk_FUN_10766ec0();
  ExceptionList = local_c;
  return;
}


// ==== 1076e390 FUN_1076e390

void FUN_1076e390(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_1076e320();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xdc);
  }
  return;
}


// ==== 1076e3c0 FUN_1076e3c0

void FUN_1076e3c0(UEngine *param_1,FURL *param_2)

{
  ULevelBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10831507;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULevelBase::ULevelBase(in_ECX,param_1,param_2);
  local_4 = 0;
  *(undefined ***)in_ECX = UPendingLevel::vftable;
  *(undefined ***)(in_ECX + 0x34) = UPendingLevel::vftable;
  FString::FString((FString *)(in_ECX + 0xd0));
  ExceptionList = local_c;
  return;
}


// ==== 1076e450 FUN_1076e450

void FUN_1076e450(void)

{
  UClass *pUVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10831528;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_1076e3c0();
  *in_ECX = UNetPendingLevel::vftable;
  in_ECX[0xd] = UNetPendingLevel::vftable;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 0x34),(ushort *)&DAT_10853d94);
  in_ECX[0x1c] = 0;
  pUVar1 = UObject::StaticLoadClass
                     (&UNetDriver::PrivateStaticClass,(UObject *)0x0,
                      (ushort *)L"ini:Engine.Engine.NetworkDevice",(ushort *)0x0,1,
                      (UPackageMap *)0x0);
  FName::FName((FName *)&stack0xffffffcc,0);
  piVar2 = (int *)thunk_FUN_10766a10(pUVar1,0xffffffff);
  in_ECX[0x1c] = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x78))(in_ECX + 0xd);
  if (iVar3 == 0) {
    if ((int *)in_ECX[0x1c] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x1c] + 0xc))(1);
    }
    in_ECX[0x1c] = 0;
  }
  else {
    this = (FOutputDevice *)(*(int *)(in_ECX[0x1c] + 0x44) + 0x34);
    FOutputDevice::Logf(this,(ushort *)this);
    (**(code **)(**(int **)(in_ECX[0x1c] + 0x44) + 0x84))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1076e566 Catch@1076e566

void Catch_1076e566(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1076e57a Catch@1076e57a

void Catch_1076e57a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetPendingLevel::UNetPendingLevel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1076e680 FUN_1076e680

void FUN_1076e680(undefined1 param_1)

{
  DAT_11d85d2c = param_1;
  return;
}


// ==== 1076e6c0 FUN_1076e6c0

void FUN_1076e6c0(uint *param_1,uint param_2,undefined4 *param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 local_70;
  undefined1 local_6c [4];
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c [4];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar11 = param_2;
  puStack_8 = &LAB_1083157e;
  local_c = ExceptionList;
  local_3c[0] = param_4._0_1_;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4 = 0;
  local_70 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    iVar5 = FUN_1076ef80();
    if (iVar5 != 0) {
      FUN_1076f1b0(local_38,local_34);
    }
  }
  else {
    puVar14 = &local_70;
    ExceptionList = &local_c;
    iVar5 = FUN_1076ef80(puVar14);
    FUN_1076efa0(0,uVar11 - iVar5,puVar14);
  }
  uVar12 = 0;
  uVar6 = 0;
  if (uVar11 != 0) {
    do {
      *(undefined2 *)(local_38 + uVar6 * 2) = *(undefined2 *)((int)param_1 + uVar6 * 2);
      uVar1 = *(ushort *)((int)param_1 + uVar6 * 2);
      if (uVar12 < uVar1) {
        uVar12 = uVar1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar11);
  }
  local_58 = 0;
  local_5c[0] = param_4._0_1_;
  local_54 = 0;
  local_50 = 0;
  local_68 = 0;
  local_6c[0] = param_4._0_1_;
  local_64 = 0;
  local_60 = 0;
  local_4._0_1_ = 2;
  FUN_1076f200();
  local_4._0_1_ = 3;
  FUN_10771340(local_3c,DAT_10b150a4,DAT_11d85d28,uVar12,local_5c,local_6c);
  local_48 = 0;
  local_4c[0] = param_4._0_1_;
  local_44 = 0;
  local_40 = 0;
  local_4._0_1_ = 4;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 4;
  param_2 = 0;
  if (DAT_11d85d2c == '\0') {
    local_4._0_1_ = uVar3;
    FUN_10770e60(local_5c,local_4c,DAT_10b150a8,&param_2);
    *param_4 = (ushort)param_2;
    if ((local_68 != 0) && (local_64 - local_68 >> 2 != 0)) {
      *param_4 = (ushort)param_2 + 1;
    }
    uVar11 = (uint)*param_4;
    puVar9 = (uint *)thunk_FUN_1032ffc0(uVar11 * 0xc + 4);
    local_4._0_1_ = 6;
    if (puVar9 == (uint *)0x0) {
      param_1 = (uint *)0x0;
    }
    else {
      param_1 = puVar9 + 1;
      *puVar9 = uVar11;
      _eh_vector_constructor_iterator_
                (param_1,0xc,uVar11,(_func_void_void_ptr *)&LAB_1076f1e0,
                 (_func_void_void_ptr *)&LAB_1030ee17);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    uVar11 = 0;
    *param_3 = param_1;
    uVar6 = 0;
    if (param_2 != 0) {
      puVar9 = param_1 + 2;
      do {
        uVar13 = uVar11;
        if (DAT_10b150a8 == '\0') {
          for (; ((local_48 != 0 && (uVar13 < (uint)(local_44 - local_48 >> 2))) &&
                 (*(int *)(local_48 + uVar13 * 4) != -1)); uVar13 = uVar13 + 1) {
          }
          uVar13 = uVar13 - uVar11;
        }
        else if (local_48 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = local_44 - local_48 >> 2;
        }
        puVar9[-2] = 1;
        uVar10 = thunk_FUN_1032ffc0(uVar13 * 2);
        puVar9[-1] = uVar13;
        iVar5 = uVar13 + uVar11;
        *puVar9 = uVar10;
        if ((int)uVar11 < iVar5) {
          iVar7 = 0;
          do {
            iVar2 = uVar11 * 4;
            uVar11 = uVar11 + 1;
            *(undefined2 *)(iVar7 + *puVar9) = *(undefined2 *)(local_48 + iVar2);
            iVar7 = iVar7 + 2;
          } while ((int)uVar11 < iVar5);
        }
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 3;
        uVar11 = iVar5 + 1;
      } while (uVar6 < param_2);
    }
    if ((local_68 != 0) &&
       (param_3 = (undefined4 *)(local_64 - local_68 >> 2), param_3 != (undefined4 *)0x0)) {
      param_1 = param_1 + (*param_4 - 1) * 3;
      *param_1 = 0;
      if (local_68 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_64 - local_68 >> 2;
      }
      uVar11 = thunk_FUN_1032ffc0(iVar5 * 6);
      param_1[2] = uVar11;
      if (local_68 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_64 - local_68 >> 2;
      }
      uVar11 = 0;
      param_1[1] = iVar5 * 3;
      iVar5 = 0;
      while ((local_68 != 0 && (uVar11 < (uint)(local_64 - local_68 >> 2)))) {
        *(undefined2 *)(iVar5 + param_1[2]) = **(undefined2 **)(local_68 + uVar11 * 4);
        iVar7 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        *(undefined2 *)(iVar5 + 2 + param_1[2]) = *(undefined2 *)(*(int *)(local_68 + iVar7) + 4);
        *(undefined2 *)(iVar5 + 4 + param_1[2]) =
             *(undefined2 *)(*(int *)(local_68 + -4 + uVar11 * 4) + 8);
        iVar5 = iVar5 + 6;
      }
    }
  }
  else {
    *param_4 = 1;
    param_4 = (ushort *)thunk_FUN_1032ffc0(0x10);
    local_4._0_1_ = 5;
    if (param_4 == (ushort *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14 = (undefined4 *)((int)param_4 + 4);
      *(undefined4 *)param_4 = 1;
      _eh_vector_constructor_iterator_
                (puVar14,0xc,1,(_func_void_void_ptr *)&LAB_1076f1e0,
                 (_func_void_void_ptr *)&LAB_1030ee17);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    *param_3 = puVar14;
    iVar5 = 0;
    uVar11 = 0;
    while ((local_58 != 0 && (uVar11 < (uint)(local_54 - local_58 >> 2)))) {
      iVar7 = *(int *)(local_58 + uVar11 * 4);
      iVar2 = *(int *)(iVar7 + 0x10);
      if (iVar2 == 0) {
        uVar11 = uVar11 + 1;
      }
      else {
        uVar11 = uVar11 + 1;
        iVar5 = (*(int *)(iVar7 + 0x14) - iVar2 >> 2) * 3 + iVar5;
      }
    }
    if (local_68 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = local_64 - local_68 >> 2;
    }
    iVar5 = iVar7 * 3 + iVar5;
    *puVar14 = 0;
    puVar14[1] = iVar5;
    uVar8 = thunk_FUN_1032ffc0(iVar5 * 2);
    iVar5 = 0;
    puVar14[2] = uVar8;
    for (param_4 = (ushort *)0x0;
        (local_58 != 0 && (param_4 < (ushort *)(local_54 - local_58 >> 2)));
        param_4 = (ushort *)((int)param_4 + 1)) {
      uVar11 = 0;
      while( true ) {
        iVar7 = *(int *)(local_58 + (int)param_4 * 4);
        iVar2 = *(int *)(iVar7 + 0x10);
        if ((iVar2 == 0) || ((uint)(*(int *)(iVar7 + 0x14) - iVar2 >> 2) <= uVar11)) break;
        cVar4 = FUN_10771600(*(undefined4 *)(iVar2 + uVar11 * 4));
        if (cVar4 == '\0') {
          iVar5 = iVar5 + 3;
          uVar11 = uVar11 + 1;
          *(undefined2 *)(puVar14[2] + -6 + iVar5 * 2) =
               **(undefined2 **)
                 (*(int *)(*(int *)(local_58 + (int)param_4 * 4) + 0x10) + -4 + uVar11 * 4);
          *(undefined2 *)(puVar14[2] + -4 + iVar5 * 2) =
               *(undefined2 *)
                (*(int *)(*(int *)(*(int *)(local_58 + (int)param_4 * 4) + 0x10) + -4 + uVar11 * 4)
                + 4);
          *(undefined2 *)(puVar14[2] + -2 + iVar5 * 2) =
               *(undefined2 *)
                (*(int *)(*(int *)(*(int *)(local_58 + (int)param_4 * 4) + 0x10) + -4 + uVar11 * 4)
                + 8);
        }
        else {
          uVar11 = uVar11 + 1;
          puVar14[1] = puVar14[1] + -3;
        }
      }
    }
    uVar11 = 0;
    iVar5 = iVar5 * 2;
    while ((local_68 != 0 && (uVar11 < (uint)(local_64 - local_68 >> 2)))) {
      *(undefined2 *)(iVar5 + puVar14[2]) = **(undefined2 **)(local_68 + uVar11 * 4);
      iVar7 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      *(undefined2 *)(iVar5 + 2 + puVar14[2]) = *(undefined2 *)(*(int *)(local_68 + iVar7) + 4);
      *(undefined2 *)(iVar5 + 4 + puVar14[2]) =
           *(undefined2 *)(*(int *)(local_68 + -4 + uVar11 * 4) + 8);
      iVar5 = iVar5 + 6;
    }
  }
  uVar11 = 0;
  while ((local_58 != 0 && (uVar11 < (uint)(local_54 - local_58 >> 2)))) {
    uVar6 = 0;
    while( true ) {
      iVar5 = *(int *)(local_58 + uVar11 * 4);
      iVar7 = *(int *)(iVar5 + 0x10);
      if ((iVar7 == 0) || ((uint)(*(int *)(iVar5 + 0x14) - iVar7 >> 2) <= uVar6)) break;
      thunk_FUN_103254a0(*(undefined4 *)(iVar7 + uVar6 * 4));
      uVar6 = uVar6 + 1;
      *(undefined4 *)(*(int *)(*(int *)(local_58 + uVar11 * 4) + 0x10) + -4 + uVar6 * 4) = 0;
    }
    iVar5 = *(int *)(local_58 + uVar11 * 4);
    if (iVar5 != 0) {
      thunk_FUN_103254a0(*(undefined4 *)(iVar5 + 0x10));
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      thunk_FUN_103254a0(iVar5);
    }
    uVar11 = uVar11 + 1;
    *(undefined4 *)(local_58 + -4 + uVar11 * 4) = 0;
  }
  for (uVar11 = 0; (local_68 != 0 && (uVar11 < (uint)(local_64 - local_68 >> 2)));
      uVar11 = uVar11 + 1) {
    thunk_FUN_103254a0(*(undefined4 *)(local_68 + uVar11 * 4));
    *(undefined4 *)(local_68 + uVar11 * 4) = 0;
  }
  thunk_FUN_103254a0(local_48);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_1076f220();
  thunk_FUN_103254a0(local_68);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  thunk_FUN_103254a0(local_58);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  thunk_FUN_103254a0(local_38);
  ExceptionList = local_c;
  return;
}


// ==== 1076ef00 FUN_1076ef00

void FUN_1076ef00(void)

{
  int in_ECX;
  
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1076ef20 FUN_1076ef20

void FUN_1076ef20(void)

{
  int in_ECX;
  
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1076ef40 FUN_1076ef40

void FUN_1076ef40(void)

{
  int in_ECX;
  
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1076ef60 FUN_1076ef60

void FUN_1076ef60(void)

{
  int in_ECX;
  
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1076ef80 FUN_1076ef80

int FUN_1076ef80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 1;
}


// ==== 1076efa0 FUN_1076efa0

void FUN_1076efa0(undefined2 *param_1,uint param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar6 = *(undefined2 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar6 >> 1)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 1) < param_2) {
      puVar7 = param_1 + param_2;
      if (param_1 != puVar6) {
        puVar4 = puVar7 + -param_2;
        do {
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar6);
      }
      puVar6 = *(undefined2 **)(in_ECX + 8);
      for (iVar2 = param_2 - ((int)puVar6 - (int)param_1 >> 1); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = *param_3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined2 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 2;
      return;
    }
    if (param_2 != 0) {
      puVar7 = puVar6;
      for (puVar4 = puVar6 + -param_2; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined2 **)(in_ECX + 8);
      for (puVar7 = puVar6 + -param_2; param_1 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_1 + param_2;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 2;
    }
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar5 = (int)puVar6 - iVar2 >> 1, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2 >> 1;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = (undefined2 *)thunk_FUN_1032ffc0(iVar3 * 2);
  puVar7 = puVar4;
  for (puVar6 = *(undefined2 **)(in_ECX + 4); uVar5 = param_2, puVar1 = puVar7, puVar6 != param_1;
      puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined2 **)(in_ECX + 8);
  puVar6 = puVar7 + param_2;
  if (param_1 != puVar1) {
    param_1 = (undefined2 *)((int)puVar6 + (param_2 * -2 - (int)puVar7) + (int)param_1);
    do {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *param_1;
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    } while (param_1 != puVar1);
  }
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined2 **)(in_ECX + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    *(undefined2 **)(in_ECX + 4) = puVar4;
    *(undefined2 **)(in_ECX + 8) = puVar4 + param_2;
    return;
  }
  *(undefined2 **)(in_ECX + 4) = puVar4;
  *(undefined2 **)(in_ECX + 8) = puVar4 + (*(int *)(in_ECX + 8) - iVar2 >> 1) + param_2;
  return;
}


// ==== 1076f1b0 FUN_1076f1b0

void FUN_1076f1b0(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined2 **)(in_ECX + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined2 **)(in_ECX + 8) = param_1;
  return;
}


// ==== 1076f200 FUN_1076f200

void FUN_1076f200(void)

{
  undefined1 *in_ECX;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *in_ECX = local_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1076f220 FUN_1076f220

void FUN_1076f220(void)

{
  int in_ECX;
  
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1076f240 FUN_1076f240

int FUN_1076f240(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + param_2 * 4);
  while( true ) {
    while( true ) {
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(iVar1 + 0xc) == param_2) break;
      if (*(int *)(iVar1 + 0xc) == param_3) {
        return iVar1;
      }
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    if (*(int *)(iVar1 + 0x10) == param_3) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


// ==== 1076f280 FUN_1076f280

int FUN_1076f280(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_1076f240(param_1,param_2,param_3);
  if ((iVar1 == 0) && (param_2 == param_3)) {
    return 0;
  }
  if (*(int *)(iVar1 + 4) == param_4) {
    return *(int *)(iVar1 + 8);
  }
  return *(int *)(iVar1 + 4);
}


// ==== 1076f2c0 FUN_1076f2c0

uint FUN_1076f2c0(int *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  iVar1 = *(int *)(param_2 + 4);
  while( true ) {
    if ((iVar1 == 0) || (in_EAX = (int *)(*(int *)(param_2 + 8) - iVar1 >> 2), in_EAX <= piVar2)) {
      return (uint)in_EAX & 0xffffff00;
    }
    in_EAX = *(int **)(iVar1 + (int)piVar2 * 4);
    if (((*in_EAX == *param_1) && (in_EAX[1] == param_1[1])) &&
       (in_EAX = (int *)in_EAX[2], in_EAX == (int *)param_1[2])) break;
    piVar2 = (int *)((int)piVar2 + 1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// ==== 1076f320 FUN_1076f320

/* WARNING: Removing unreachable block (ram,0x1076f8ac) */
/* WARNING: Removing unreachable block (ram,0x1076f8c1) */
/* WARNING: Removing unreachable block (ram,0x1076f8d0) */
/* WARNING: Removing unreachable block (ram,0x1076f8dd) */
/* WARNING: Removing unreachable block (ram,0x1076f8ea) */
/* WARNING: Removing unreachable block (ram,0x1076f984) */
/* WARNING: Removing unreachable block (ram,0x1076f999) */
/* WARNING: Removing unreachable block (ram,0x1076f9a8) */
/* WARNING: Removing unreachable block (ram,0x1076f9b1) */

void FUN_1076f320(uint param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int *piVar11;
  uint *local_1c;
  uint local_18;
  uint *local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar2 = param_1;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 1;
  }
  uVar8 = iVar10 / 3;
  if (*(int *)(param_1 + 4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  local_c = in_ECX;
  local_8 = uVar8;
  if (uVar5 < uVar8) {
    uVar5 = uVar8;
    if ((int)uVar8 < 0) {
      uVar5 = 0;
    }
    iVar10 = thunk_FUN_1032ffc0(uVar5 * 4);
    FUN_10772fc0(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),iVar10);
    FUN_10772fb0(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    thunk_FUN_103254a0(*(undefined4 *)(iVar2 + 4));
    *(uint *)(iVar2 + 0xc) = iVar10 + uVar8 * 4;
    iVar6 = FUN_10772d60();
    *(int *)(iVar2 + 4) = iVar10;
    *(int *)(iVar2 + 8) = iVar10 + iVar6 * 4;
  }
  iVar10 = param_2;
  uVar5 = 0;
  param_1 = 0;
  uVar8 = (param_3 & 0xffff) + 1;
  if (*(int *)(param_2 + 4) != 0) {
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  if (uVar5 < uVar8) {
    param_3 = *(uint *)(param_2 + 8);
    puVar7 = &param_1;
    iVar6 = FUN_10772da0(puVar7);
    FUN_107731f0(param_3,uVar8 - iVar6,puVar7);
  }
  else {
    uVar5 = FUN_10772da0();
    if (uVar8 < uVar5) {
      FUN_10773400(*(int *)(iVar10 + 4) + uVar8 * 4,*(undefined4 *)(iVar10 + 8));
    }
  }
  iVar6 = 0;
  if (uVar8 != 0) {
    do {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*(int *)(iVar10 + 4) + -4 + iVar6 * 4) = 0;
    } while (iVar6 < (int)uVar8);
  }
  if (0 < (int)local_8) {
    local_4 = 0;
    do {
      iVar10 = *(int *)(in_ECX + 4);
      uVar8 = (uint)*(ushort *)(iVar10 + local_4);
      iVar6 = local_4 + 4;
      uVar5 = (uint)*(ushort *)(iVar10 + local_4 + 2);
      local_4 = local_4 + 6;
      param_1 = CONCAT31(param_1._1_3_,1);
      local_18 = (uint)*(ushort *)(iVar10 + iVar6);
      param_3 = param_3 & 0xff000000;
      cVar4 = FUN_10771620(uVar8,uVar5,local_18);
      if (cVar4 != '\0') goto LAB_1076f9c7;
      local_14 = (uint *)thunk_FUN_1032ffc0(0x18);
      iVar10 = param_2;
      if (local_14 == (uint *)0x0) {
        local_14 = (uint *)0x0;
      }
      else {
        *local_14 = uVar8;
        local_14[1] = uVar5;
        local_14[2] = local_18;
        local_14[3] = 0xffffffff;
        local_14[4] = 0xffffffff;
        local_14[5] = 0xffffffff;
      }
      local_1c = local_14;
      local_10 = (undefined4 *)FUN_1076f240(param_2,uVar8,uVar5);
      if (local_10 == (undefined4 *)0x0) {
        param_1 = param_1 & 0xffffff00;
        local_10 = (undefined4 *)thunk_FUN_1032ffc0(0x1c);
        if (local_10 == (undefined4 *)0x0) {
          local_10 = (undefined4 *)0x0;
        }
        else {
          local_10[3] = uVar8;
          local_10[4] = uVar5;
          local_10[1] = 0;
          local_10[2] = 0;
          local_10[5] = 0;
          local_10[6] = 0;
          *local_10 = 2;
        }
        local_10[5] = *(undefined4 *)(*(int *)(iVar10 + 4) + uVar8 * 4);
        local_10[6] = *(undefined4 *)(*(int *)(iVar10 + 4) + uVar5 * 4);
        *(undefined4 **)(*(int *)(iVar10 + 4) + uVar8 * 4) = local_10;
        *(undefined4 **)(*(int *)(iVar10 + 4) + uVar5 * 4) = local_10;
        local_10[1] = local_1c;
      }
      else if (local_10[2] == 0) {
        param_3 = CONCAT31(param_3._1_3_,1);
        local_10[2] = local_14;
      }
      else {
        FID_conflict__wprintf(s_BuildStripifyInfo__>_2_triangles_10b150b0);
      }
      local_14 = (uint *)FUN_1076f240(iVar10,uVar5,local_18);
      if (local_14 == (undefined4 *)0x0) {
        param_1 = param_1 & 0xffffff00;
        local_14 = (uint *)thunk_FUN_1032ffc0(0x1c);
        if (local_14 == (undefined4 *)0x0) {
          local_14 = (undefined4 *)0x0;
        }
        else {
          local_14[3] = uVar5;
          local_14[4] = local_18;
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[5] = 0;
          local_14[6] = 0;
          *local_14 = 2;
        }
        local_14[5] = *(undefined4 *)(*(int *)(iVar10 + 4) + uVar5 * 4);
        local_14[6] = *(undefined4 *)(*(int *)(iVar10 + 4) + local_18 * 4);
        *(uint **)(*(int *)(iVar10 + 4) + uVar5 * 4) = local_14;
        *(uint **)(*(int *)(iVar10 + 4) + local_18 * 4) = local_14;
        local_14[1] = (uint)local_1c;
      }
      else if (local_14[2] == 0) {
        param_3._0_2_ = CONCAT11(1,(char)param_3);
        local_14[2] = (uint)local_1c;
      }
      else {
        FID_conflict__wprintf(s_BuildStripifyInfo__>_2_triangles_10b150b0);
      }
      uVar5 = local_18;
      iVar6 = FUN_1076f240(iVar10,local_18,uVar8);
      local_18 = iVar6;
      if (iVar6 == 0) {
        puVar7 = (undefined4 *)thunk_FUN_1032ffc0(0x1c);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[3] = uVar5;
          puVar7[4] = uVar8;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          *puVar7 = 2;
        }
        puVar7[5] = *(undefined4 *)(*(int *)(iVar10 + 4) + uVar5 * 4);
        puVar7[6] = *(undefined4 *)(*(int *)(iVar10 + 4) + uVar8 * 4);
        *(undefined4 **)(*(int *)(iVar10 + 4) + uVar5 * 4) = puVar7;
        *(undefined4 **)(*(int *)(iVar10 + 4) + uVar8 * 4) = puVar7;
        puVar7[1] = local_1c;
LAB_1076f694:
        piVar11 = *(int **)(iVar2 + 8);
        if (*(int *)(iVar2 + 0xc) - (int)piVar11 >> 2 == 0) {
          if ((*(int *)(iVar2 + 4) == 0) ||
             (uVar8 = (int)piVar11 - *(int *)(iVar2 + 4) >> 2, uVar8 < 2)) {
            uVar8 = 1;
          }
          iVar6 = FUN_10772d60();
          iVar6 = iVar6 + uVar8;
          iVar10 = iVar6;
          if (iVar6 < 0) {
            iVar10 = 0;
          }
          iVar9 = thunk_FUN_1032ffc0(iVar10 << 2);
          param_1 = FUN_10772fc0(*(undefined4 *)(iVar2 + 4),piVar11,iVar9);
          FUN_10774720(param_1,1,&local_1c);
          FUN_10772fc0(piVar11,*(undefined4 *)(iVar2 + 8),param_1 + 4);
          FUN_10772fb0(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
          thunk_FUN_103254a0(*(undefined4 *)(iVar2 + 4));
          *(int *)(iVar2 + 0xc) = iVar9 + iVar6 * 4;
          iVar10 = FUN_10772d60();
          iVar10 = iVar9 + 4 + iVar10 * 4;
          *(int *)(iVar2 + 4) = iVar9;
        }
        else {
          FUN_10772fc0(piVar11,piVar11,piVar11 + 1);
          FUN_10774720(*(int *)(iVar2 + 8),1 - (*(int *)(iVar2 + 8) - (int)piVar11 >> 2),&local_1c);
          piVar1 = *(int **)(iVar2 + 8);
          for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
            *piVar11 = (int)local_1c;
          }
LAB_1076f9be:
          iVar10 = *(int *)(iVar2 + 8) + 4;
        }
        *(int *)(iVar2 + 8) = iVar10;
      }
      else {
        if (*(int *)(iVar6 + 8) == 0) {
          param_3._0_3_ = CONCAT12(1,(undefined2)param_3);
          *(uint **)(iVar6 + 8) = local_1c;
        }
        else {
          FID_conflict__wprintf(s_BuildStripifyInfo__>_2_triangles_10b150b0);
        }
        puVar3 = local_1c;
        if ((char)param_1 == '\0') goto LAB_1076f694;
        cVar4 = FUN_1076f2c0(local_1c,iVar2);
        if (cVar4 == '\0') {
          piVar11 = *(int **)(iVar2 + 8);
          if (*(int *)(iVar2 + 0xc) - (int)piVar11 >> 2 == 0) {
            if ((*(int *)(iVar2 + 4) == 0) || ((uint)((int)piVar11 - *(int *)(iVar2 + 4) >> 2) < 2))
            {
              iVar10 = 1;
            }
            else {
              iVar10 = FUN_10772d60();
            }
            iVar6 = FUN_10772d60();
            iVar6 = iVar6 + iVar10;
            iVar10 = iVar6;
            if (iVar6 < 0) {
              iVar10 = 0;
            }
            iVar10 = thunk_FUN_1032ffc0(iVar10 * 4);
            param_1 = FUN_10772fc0(*(undefined4 *)(iVar2 + 4),piVar11,iVar10);
            FUN_10774720(param_1,1,&local_1c);
            FUN_10772fc0(piVar11,*(undefined4 *)(iVar2 + 8),param_1 + 4);
            FUN_10772fb0(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            thunk_FUN_103254a0(*(undefined4 *)(iVar2 + 4));
            *(int *)(iVar2 + 0xc) = iVar10 + iVar6 * 4;
            iVar6 = FUN_10772d60();
            *(int *)(iVar2 + 4) = iVar10;
            *(int *)(iVar2 + 8) = iVar10 + 4 + iVar6 * 4;
            goto LAB_1076f9c7;
          }
          FUN_10772fc0(piVar11,piVar11,piVar11 + 1);
          FUN_10774720(*(int *)(iVar2 + 8),1 - (*(int *)(iVar2 + 8) - (int)piVar11 >> 2),&local_1c);
          piVar1 = *(int **)(iVar2 + 8);
          for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
            *piVar11 = (int)local_1c;
          }
          goto LAB_1076f9be;
        }
        thunk_FUN_103254a0(puVar3);
        if ((char)param_3 != '\0') {
          local_10[2] = 0;
        }
        if (param_3._1_1_ != '\0') {
          local_14[2] = 0;
        }
        if (param_3._2_1_ != '\0') {
          *(undefined4 *)(iVar6 + 8) = 0;
        }
      }
LAB_1076f9c7:
      local_8 = local_8 - 1;
      in_ECX = local_c;
    } while (local_8 != 0);
  }
  return;
}


// ==== 1076f9e0 FUN_1076f9e0

uint FUN_1076f9e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  iVar1 = *(int *)(param_1 + 4);
  for (local_14 = 0; (iVar1 != 0 && (local_14 < (uint)(*(int *)(param_1 + 8) - iVar1 >> 2)));
      local_14 = local_14 + 1) {
    puVar2 = *(undefined4 **)(iVar1 + local_14 * 4);
    uVar3 = puVar2[1];
    uVar4 = *puVar2;
    iVar6 = FUN_1076f280(param_2,uVar4,uVar3,puVar2);
    uVar7 = (uint)(iVar6 == 0);
    uVar5 = puVar2[2];
    iVar6 = FUN_1076f280(param_2,uVar3,uVar5,puVar2);
    if (iVar6 == 0) {
      uVar7 = uVar7 + 1;
    }
    iVar6 = FUN_1076f280(param_2,uVar5,uVar4,puVar2);
    if (iVar6 == 0) {
      uVar7 = uVar7 + 1;
    }
    if ((int)local_10 < (int)uVar7) {
      local_c = local_14;
      local_10 = uVar7;
    }
  }
  if (local_10 == 0) {
    return 0xffffffff;
  }
  return local_c;
}


// ==== 1076fac0 FUN_1076fac0

undefined4 FUN_1076fac0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    iVar2 = __ftol();
  }
  else {
    iVar2 = FUN_1076f9e0(param_1,param_2);
    *(undefined1 *)(in_ECX + 0x1c) = 0;
  }
  if (iVar2 == -1) {
    iVar2 = __ftol();
  }
  iVar3 = iVar2;
  do {
    if (*(int *)(*(int *)(*(int *)(param_1 + 4) + iVar3 * 4) + 0xc) < 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4);
      break;
    }
    iVar3 = iVar3 + 1;
    if (iVar4 <= iVar3) {
      iVar3 = 0;
    }
  } while (iVar3 != iVar2);
  fVar1 = *(float *)(in_ECX + 0x18) + 0.1;
  *(float *)(in_ECX + 0x18) = fVar1;
  if (1.0 < fVar1) {
    *(undefined4 *)(in_ECX + 0x18) = 0x3d4ccccd;
  }
  return uVar5;
}


// ==== 1076fb70 FUN_1076fb70

int FUN_1076fb70(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (((((iVar2 == iVar1) || (iVar2 == param_1[1])) || (iVar2 == param_1[2])) &&
      (((iVar2 = param_2[1], iVar2 == iVar1 || (iVar2 == param_1[1])) || (iVar2 == param_1[2])))) &&
     (((iVar2 = param_2[2], iVar2 == iVar1 || (iVar2 == param_1[1])) || (iVar2 == param_1[2])))) {
    iVar2 = -1;
  }
  return iVar2;
}


// ==== 1076fbc0 FUN_1076fbc0

void FUN_1076fbc0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  *param_3 = -1;
  *param_4 = -1;
  iVar1 = *param_2;
  if (((iVar1 == *param_1) || (iVar1 == param_1[1])) || (iVar1 == param_1[2])) {
    if (*param_3 != -1) goto LAB_1076fc2e;
    *param_3 = iVar1;
  }
  iVar1 = param_2[1];
  if (((iVar1 == *param_1) || (iVar1 == param_1[1])) || (iVar1 == param_1[2])) {
    if (*param_3 != -1) goto LAB_1076fc2e;
    *param_3 = iVar1;
  }
  iVar1 = param_2[2];
  if (((iVar1 != *param_1) && (iVar1 != param_1[1])) && (iVar1 != param_1[2])) {
    return;
  }
  if (*param_3 == -1) {
    *param_3 = iVar1;
    return;
  }
LAB_1076fc2e:
  *param_4 = iVar1;
  return;
}


// ==== 1076fc40 FUN_1076fc40

undefined4 FUN_1076fc40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  
  bVar4 = false;
  iVar1 = *(int *)(param_1 + 4);
  bVar5 = false;
  bVar6 = false;
  uVar7 = 0;
  do {
    if ((iVar1 == 0) || ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) <= uVar7)) {
      return 1;
    }
    if (!bVar5) {
      piVar2 = *(int **)(iVar1 + uVar7 * 4);
      iVar3 = *param_2;
      if (((*piVar2 == iVar3) || (piVar2[1] == iVar3)) || (piVar2[2] == iVar3)) {
        bVar5 = true;
      }
    }
    if (!bVar6) {
      piVar2 = *(int **)(iVar1 + uVar7 * 4);
      iVar3 = param_2[1];
      if (((*piVar2 == iVar3) || (piVar2[1] == iVar3)) || (piVar2[2] == iVar3)) {
        bVar6 = true;
      }
    }
    if (!bVar4) {
      piVar2 = *(int **)(iVar1 + uVar7 * 4);
      iVar3 = param_2[2];
      if (((*piVar2 == iVar3) || (piVar2[1] == iVar3)) || (piVar2[2] == iVar3)) {
        bVar4 = true;
      }
    }
    if (bVar5) {
      if ((bVar6) && (bVar4)) {
        return 0;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


// ==== 1076fd00 FUN_1076fd00

void FUN_1076fd00(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  undefined1 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_108315d0;
  local_c = ExceptionList;
  iVar8 = 0;
  local_4c = (undefined1)param_1;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c[0] = (undefined1)param_1;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_18 = 0;
  local_1c[0] = (undefined1)param_1;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  ExceptionList = &local_c;
  local_68 = in_ECX;
  FUN_10772de0(0,in_ECX);
  iVar4 = *in_ECX;
  if (in_ECX[8] < 0) {
    *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
    *(int *)(iVar4 + 0xc) = in_ECX[7];
  }
  else {
    *(int *)(iVar4 + 0x14) = in_ECX[8];
    *(int *)(iVar4 + 0x10) = in_ECX[7];
  }
  iVar4 = in_ECX[1];
  if ((char)in_ECX[2] == '\0') {
    local_58 = *(int **)(iVar4 + 0x10);
    piVar7 = *(int **)(iVar4 + 0xc);
  }
  else {
    local_58 = *(int **)(iVar4 + 0xc);
    piVar7 = *(int **)(iVar4 + 0x10);
  }
  local_5c = piVar7;
  local_54 = local_58;
  FUN_10773010(local_44,&local_58);
  local_58 = piVar7;
  FUN_10773010(local_44,&local_58);
  puVar3 = (undefined4 *)*in_ECX;
  if (local_48 != 0) {
    iVar8 = local_44 - local_48 >> 1;
  }
  piVar7 = (int *)puVar3[2];
  piVar2 = (int *)(uint)*(ushort *)(local_48 + -4 + iVar8 * 2);
  piVar5 = (int *)(uint)*(ushort *)(local_48 + -2 + iVar8 * 2);
  piVar10 = (int *)*puVar3;
  piVar11 = (int *)puVar3[1];
  local_64 = piVar10;
  if ((piVar10 == piVar2) || (piVar10 == piVar5)) {
    if ((piVar11 == piVar2) || (piVar11 == piVar5)) {
      if ((piVar7 == piVar2) || (piVar7 == piVar5)) {
        if (((piVar10 != piVar11) && (piVar10 != piVar7)) && (local_64 = piVar11, piVar11 != piVar7)
           ) {
          local_64 = (int *)0xffffffff;
        }
      }
      else {
        local_64 = piVar7;
        if (((piVar10 != piVar2) && (piVar10 != piVar5)) ||
           ((piVar11 != piVar2 && (piVar11 != piVar5)))) {
          FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
          FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
        }
      }
    }
    else if (((piVar10 != piVar2) && (piVar10 != piVar5)) ||
            ((local_64 = piVar11, piVar7 != piVar2 && (piVar7 != piVar5)))) {
      FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
      FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
      local_64 = piVar11;
    }
  }
  else if (((piVar11 != piVar2) && (piVar11 != piVar5)) ||
          ((piVar7 != piVar2 && (piVar7 != piVar5)))) {
    FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
    FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
  }
  piVar10 = local_64;
  local_58 = local_64;
  FUN_10773010(local_44,&local_58);
  piVar11 = local_5c;
  piVar7 = local_68;
  local_60 = local_5c;
  puVar3 = (undefined4 *)FUN_1076f280(param_1,local_5c,piVar10,*local_68);
  while (((local_6c = puVar3, puVar3 != (undefined4 *)0x0 && ((int)puVar3[3] < 0)) &&
         ((piVar7[8] < 0 || (puVar3[5] != piVar7[8]))))) {
    local_50 = piVar10;
    iVar4 = FUN_1076ef80();
    piVar7 = (int *)puVar3[1];
    piVar5 = (int *)(uint)*(ushort *)(local_48 + -4 + iVar4 * 2);
    piVar6 = (int *)(uint)*(ushort *)(local_48 + -2 + iVar4 * 2);
    piVar11 = (int *)*puVar3;
    piVar2 = (int *)puVar3[2];
    if ((piVar11 == piVar5) || (piVar11 == piVar6)) {
      if ((piVar7 == piVar5) || (piVar7 == piVar6)) {
        if ((piVar2 == piVar5) || (piVar2 == piVar6)) {
          if ((piVar11 != piVar7) && ((piVar11 != piVar2 && (piVar11 = piVar7, piVar7 != piVar2))))
          {
            piVar11 = (int *)0xffffffff;
          }
        }
        else if (((piVar11 != piVar5) && (piVar11 != piVar6)) ||
                ((piVar11 = piVar2, piVar7 != piVar5 && (piVar7 != piVar6)))) {
          FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
          FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
          piVar11 = piVar2;
        }
      }
      else if (((piVar11 != piVar5) && (piVar11 != piVar6)) ||
              ((piVar11 = piVar7, piVar2 != piVar5 && (piVar2 != piVar6)))) {
        FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
        FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
        piVar11 = piVar7;
      }
    }
    else if (((piVar7 != piVar5) && (piVar7 != piVar6)) ||
            ((piVar2 != piVar5 && (piVar2 != piVar6)))) {
      FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
      FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
    }
    puVar3 = local_6c;
    iVar4 = FUN_1076f280(param_1,piVar10,piVar11,local_6c);
    piVar2 = local_60;
    piVar7 = local_68;
    if ((((iVar4 == 0) || (-1 < *(int *)(iVar4 + 0xc))) ||
        ((piVar5 = local_50, -1 < local_68[8] && (*(int *)(iVar4 + 0x14) == local_68[8])))) &&
       (((iVar4 = FUN_1076f280(param_1,local_60,piVar11,puVar3), piVar5 = local_50, iVar4 != 0 &&
         (*(int *)(iVar4 + 0xc) < 0)) && ((piVar7[8] < 0 || (*(int *)(iVar4 + 0x14) != piVar7[8]))))
       )) {
      local_58 = (int *)thunk_FUN_1032ffc0(0x18);
      if (local_58 == (int *)0x0) {
        local_58 = (int *)0x0;
      }
      else {
        local_58[1] = (int)piVar10;
        *local_58 = (int)piVar2;
        local_58[2] = (int)piVar2;
        local_58[3] = -1;
        local_58[4] = -1;
        local_58[5] = -1;
      }
      FUN_10772de0(local_34,&local_58);
      if (piVar7[8] < 0) {
        local_58[5] = -1;
        local_58[3] = piVar7[7];
      }
      else {
        local_58[5] = piVar7[8];
        local_58[4] = piVar7[7];
      }
      local_60 = piVar2;
      FUN_10773010(local_44,&local_60);
      piVar7[10] = piVar7[10] + 1;
      piVar5 = piVar2;
    }
    FUN_10772de0(local_34,&local_6c);
    if (piVar7[8] < 0) {
      local_6c[5] = 0xffffffff;
      local_6c[3] = piVar7[7];
    }
    else {
      local_6c[5] = piVar7[8];
      local_6c[4] = piVar7[7];
    }
    local_50 = piVar11;
    FUN_10773010(local_44,&local_50);
    local_60 = piVar5;
    puVar3 = (undefined4 *)FUN_1076f280(param_1,piVar5,piVar11,local_6c);
    piVar7 = local_68;
    piVar10 = piVar11;
    piVar11 = local_5c;
  }
  local_2c[0] = (undefined1)param_1;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,3);
  for (uVar9 = 0; (local_38 != 0 && (uVar9 < (uint)(local_34 - local_38 >> 2))); uVar9 = uVar9 + 1)
  {
    FUN_10772de0(local_24,local_38 + uVar9 * 4);
  }
  local_50 = (int *)0x0;
  FUN_1076ef80();
  iVar4 = FUN_1076ef80();
  if (iVar4 != 0) {
    FUN_1076f1b0(local_48,local_44);
  }
  local_50 = local_64;
  FUN_10773010(local_44,&local_50);
  local_50 = piVar11;
  FUN_10773010(local_44,&local_50);
  piVar10 = local_54;
  local_50 = local_54;
  FUN_10773010(local_44,&local_50);
  local_5c = piVar10;
  local_60 = piVar11;
  puVar3 = (undefined4 *)FUN_1076f280(param_1,piVar11,piVar10,*piVar7);
  while ((((local_6c = puVar3, puVar3 != (undefined4 *)0x0 && ((int)puVar3[3] < 0)) &&
          ((piVar7[8] < 0 || (puVar3[5] != piVar7[8])))) &&
         (cVar1 = FUN_1076fc40(local_2c,puVar3), cVar1 != '\0'))) {
    local_58 = local_5c;
    iVar4 = FUN_1076ef80();
    piVar7 = (int *)puVar3[1];
    piVar2 = (int *)(uint)*(ushort *)(local_48 + -4 + iVar4 * 2);
    piVar5 = (int *)(uint)*(ushort *)(local_48 + -2 + iVar4 * 2);
    piVar10 = (int *)*puVar3;
    piVar11 = (int *)puVar3[2];
    if ((piVar10 == piVar2) || (piVar10 == piVar5)) {
      if ((piVar7 == piVar2) || (piVar7 == piVar5)) {
        if ((piVar11 == piVar2) || (piVar11 == piVar5)) {
          if ((piVar10 != piVar7) && ((piVar10 != piVar11 && (piVar10 = piVar7, piVar7 != piVar11)))
             ) {
            piVar10 = (int *)0xffffffff;
          }
        }
        else if (((piVar10 != piVar2) && (piVar10 != piVar5)) ||
                ((piVar10 = piVar11, piVar7 != piVar2 && (piVar7 != piVar5)))) {
          FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
          FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
          piVar10 = piVar11;
        }
      }
      else if (((piVar10 != piVar2) && (piVar10 != piVar5)) ||
              ((piVar10 = piVar7, piVar11 != piVar2 && (piVar11 != piVar5)))) {
        FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
        FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
        piVar10 = piVar7;
      }
    }
    else if (((piVar7 != piVar2) && (piVar7 != piVar5)) ||
            ((piVar11 != piVar2 && (piVar11 != piVar5)))) {
      FID_conflict__wprintf(s_GetNextIndex__Triangle_doesn_t_h_10b15134);
      FID_conflict__wprintf(s_GetNextIndex__Duplicate_triangle_10b150f8);
    }
    puVar3 = local_6c;
    iVar4 = FUN_1076f280(param_1,local_5c,piVar10,local_6c);
    piVar7 = local_68;
    if ((((iVar4 == 0) || (-1 < *(int *)(iVar4 + 0xc))) ||
        ((-1 < local_68[8] && (*(int *)(iVar4 + 0x14) == local_68[8])))) &&
       (((iVar4 = FUN_1076f280(param_1,local_60,piVar10,puVar3), iVar4 != 0 &&
         (*(int *)(iVar4 + 0xc) < 0)) && ((piVar7[8] < 0 || (*(int *)(iVar4 + 0x14) != piVar7[8]))))
       )) {
      local_54 = (int *)thunk_FUN_1032ffc0(0x18);
      piVar11 = local_60;
      if (local_54 == (int *)0x0) {
        local_54 = (int *)0x0;
      }
      else {
        *local_54 = (int)local_60;
        local_54[1] = (int)local_5c;
        local_54[2] = (int)local_60;
        local_54[3] = -1;
        local_54[4] = -1;
        local_54[5] = -1;
      }
      FUN_10772de0(local_14,&local_54);
      FUN_10770570(local_54);
      local_50 = piVar11;
      FUN_10773010(local_44,&local_50);
      local_58 = piVar11;
      piVar7[10] = piVar7[10] + 1;
    }
    FUN_10772de0(local_14,&local_6c);
    FUN_10772de0(local_24,&local_6c);
    FUN_10770570(local_6c);
    local_50 = piVar10;
    FUN_10773010(local_44,&local_50);
    local_60 = local_58;
    local_5c = piVar10;
    puVar3 = (undefined4 *)FUN_1076f280(param_1,local_58,piVar10,local_6c);
    piVar7 = local_68;
  }
  FUN_107705a0(local_3c,local_1c);
  local_4._0_1_ = 2;
  FUN_1076ef00();
  local_4._0_1_ = 1;
  FUN_1076ef00();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1076ef00();
  local_4 = 0xffffffff;
  FUN_1076ef20();
  ExceptionList = local_c;
  return;
}


// ==== 10770570 FUN_10770570

void FUN_10770570(int param_1)

{
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x20)) {
    *(int *)(param_1 + 0x14) = *(int *)(in_ECX + 0x20);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x1c);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0x1c);
  return;
}


// ==== 107705a0 FUN_107705a0

/* WARNING: Removing unreachable block (ram,0x10770733) */
/* WARNING: Removing unreachable block (ram,0x10770748) */
/* WARNING: Removing unreachable block (ram,0x10770757) */
/* WARNING: Removing unreachable block (ram,0x10770760) */

void FUN_107705a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uVar7;
  int local_c;
  
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FUN_107739b0(*(undefined4 *)(in_ECX + 0x14),1,*(int *)(param_2 + 4) + iVar3 * 4);
  }
  if (*(int *)(param_1 + 4) == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  local_c = 0;
  if (0 < param_2) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + local_c * 4);
      puVar6 = *(undefined4 **)(in_ECX + 0x14);
      if (*(int *)(in_ECX + 0x18) - (int)puVar6 >> 2 == 0) {
        iVar3 = *(int *)(in_ECX + 0x10);
        if ((iVar3 == 0) || (uVar7 = (int)puVar6 - iVar3 >> 2, uVar7 < 2)) {
          uVar7 = 1;
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)puVar6 - iVar3 >> 2;
        }
        iVar3 = iVar3 + uVar7;
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = 0;
        }
        iVar4 = thunk_FUN_1032ffc0(iVar4 * 4);
        iVar5 = FUN_10772fc0(*(undefined4 *)(in_ECX + 0x10),puVar6,iVar4);
        FUN_10774720(iVar5,1,puVar1);
        FUN_10772fc0(puVar6,*(undefined4 *)(in_ECX + 0x14),iVar5 + 4);
        FUN_10772fb0(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
        thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 0x10));
        *(int *)(in_ECX + 0x18) = iVar4 + iVar3 * 4;
        iVar3 = FUN_10772d60();
        *(int *)(in_ECX + 0x14) = iVar4 + 4 + iVar3 * 4;
        *(int *)(in_ECX + 0x10) = iVar4;
      }
      else {
        FUN_10772fc0(puVar6,puVar6,puVar6 + 1);
        FUN_10774720(*(int *)(in_ECX + 0x14),1 - (*(int *)(in_ECX + 0x14) - (int)puVar6 >> 2),puVar1
                    );
        puVar2 = *(undefined4 **)(in_ECX + 0x14);
        for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
          *puVar6 = *puVar1;
        }
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
      }
      local_c = local_c + 1;
    } while (local_c < param_2);
  }
  return;
}


// ==== 10770790 FUN_10770790

undefined4 FUN_10770790(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  bool bVar6;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  iVar5 = FUN_1076f240(param_2,uVar2,uVar1);
  iVar3 = *(int *)(iVar5 + 4);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x20) < 0) {
      bVar6 = *(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar3 + 0x10) == *(int *)(in_ECX + 0x1c);
    }
    if (bVar6) {
      return 1;
    }
  }
  iVar3 = *(int *)(iVar5 + 8);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x20) < 0) {
      bVar6 = *(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar3 + 0x10) == *(int *)(in_ECX + 0x1c);
    }
    if (bVar6) {
      return 1;
    }
  }
  uVar4 = param_1[2];
  iVar5 = FUN_1076f240(param_2,uVar1,uVar4);
  iVar3 = *(int *)(iVar5 + 4);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x20) < 0) {
      bVar6 = *(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar3 + 0x10) == *(int *)(in_ECX + 0x1c);
    }
    if (bVar6) {
      return 1;
    }
  }
  iVar3 = *(int *)(iVar5 + 8);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x20) < 0) {
      bVar6 = *(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar3 + 0x10) == *(int *)(in_ECX + 0x1c);
    }
    if (bVar6) {
      return 1;
    }
  }
  iVar5 = FUN_1076f240(param_2,uVar4,uVar2);
  iVar3 = *(int *)(iVar5 + 4);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x20) < 0) {
      bVar6 = *(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar3 + 0x10) == *(int *)(in_ECX + 0x1c);
    }
    if (bVar6) {
      return 1;
    }
  }
  iVar3 = *(int *)(iVar5 + 8);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x20) < 0) {
      bVar6 = *(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar3 + 0x10) == *(int *)(in_ECX + 0x1c);
    }
    if (bVar6) {
      return 1;
    }
  }
  return 0;
}


// ==== 107708e0 FUN_107708e0

void FUN_107708e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  if (0 < local_8) {
    do {
      local_4 = *(int *)(*(int *)(param_2 + 4) + iVar4 * 4);
      *(undefined4 *)(local_4 + 0x20) = 0xffffffff;
      FUN_10773bf0(*(undefined4 *)(param_1 + 8),1,&local_4);
      iVar1 = *(int *)(*(int *)(param_2 + 4) + iVar4 * 4);
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 2;
      }
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + iVar5 * 4);
          if (*(int *)(local_4 + 0x20) < 0) {
            *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
            *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(local_4 + 0x1c);
          }
          else {
            *(int *)(iVar2 + 0x14) = *(int *)(local_4 + 0x20);
            *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(local_4 + 0x1c);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_8);
  }
  return;
}


// ==== 107709b0 FUN_107709b0

bool FUN_107709b0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = param_3;
  if (*(char *)(param_3 + 8) == '\0') {
    iVar8 = *(int *)(*(int *)(param_3 + 4) + 0xc);
  }
  else {
    iVar8 = *(int *)(*(int *)(param_3 + 4) + 0x10);
  }
  param_3 = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 4) + iVar8 * 4);
  do {
    iVar6 = param_3;
    if (iVar1 == 0) {
LAB_10770a6e:
      param_3 = iVar6;
      *param_4 = param_3;
      param_4[1] = iVar1;
      if (iVar1 != 0) {
        cVar5 = FUN_10770790(param_3,param_2);
        if (cVar5 != '\0') {
          *(bool *)(param_4 + 2) = *(int *)(iVar1 + 0xc) == iVar8;
          return param_3 != 0;
        }
        *(bool *)(param_4 + 2) = *(int *)(iVar1 + 0x10) == iVar8;
      }
      return param_3 != 0;
    }
    iVar2 = *(int *)(iVar1 + 4);
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar2 == 0) {
LAB_10770a1e:
      if (iVar6 != 0) {
        iVar3 = *(int *)(iVar4 + 0x20);
        if (iVar3 < 0) {
          iVar6 = *(int *)(iVar6 + 0xc);
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x10);
        }
        if ((((iVar6 != *(int *)(iVar4 + 0x1c)) && (iVar2 != 0)) && (*(int *)(iVar2 + 0xc) < 0)) &&
           ((iVar6 = iVar2, iVar3 < 0 || (*(int *)(iVar2 + 0x14) != iVar3)))) goto LAB_10770a6e;
      }
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x20);
      if (iVar3 < 0) {
        iVar7 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar7 = *(int *)(iVar2 + 0x10);
      }
      if (iVar7 == *(int *)(iVar4 + 0x1c)) goto LAB_10770a1e;
      if (iVar6 != 0) {
        if ((-1 < *(int *)(iVar6 + 0xc)) || ((-1 < iVar3 && (*(int *)(iVar6 + 0x14) == iVar3))))
        goto LAB_10770a1e;
        goto LAB_10770a6e;
      }
    }
    if (*(int *)(iVar1 + 0xc) == iVar8) {
      iVar1 = *(int *)(iVar1 + 0x14);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
  } while( true );
}


// ==== 10770ad0 FUN_10770ad0

/* WARNING: Removing unreachable block (ram,0x10770c19) */
/* WARNING: Removing unreachable block (ram,0x10770bf1) */
/* WARNING: Removing unreachable block (ram,0x10770bfe) */
/* WARNING: Removing unreachable block (ram,0x10770c15) */
/* WARNING: Removing unreachable block (ram,0x10770c22) */
/* WARNING: Removing unreachable block (ram,0x10770c29) */
/* WARNING: Removing unreachable block (ram,0x10770c2b) */
/* WARNING: Removing unreachable block (ram,0x10770c32) */
/* WARNING: Removing unreachable block (ram,0x10770c34) */
/* WARNING: Removing unreachable block (ram,0x10770c86) */
/* WARNING: Removing unreachable block (ram,0x10770c4b) */
/* WARNING: Removing unreachable block (ram,0x10770c70) */
/* WARNING: Removing unreachable block (ram,0x10770c82) */
/* WARNING: Removing unreachable block (ram,0x10770c88) */
/* WARNING: Removing unreachable block (ram,0x10770ca2) */
/* WARNING: Removing unreachable block (ram,0x10770caf) */
/* WARNING: Removing unreachable block (ram,0x10770cb9) */
/* WARNING: Removing unreachable block (ram,0x10770ccf) */
/* WARNING: Removing unreachable block (ram,0x10770cd3) */
/* WARNING: Removing unreachable block (ram,0x10770cd6) */
/* WARNING: Removing unreachable block (ram,0x10770d21) */
/* WARNING: Removing unreachable block (ram,0x10770d25) */
/* WARNING: Removing unreachable block (ram,0x10770d3c) */
/* WARNING: Removing unreachable block (ram,0x10770ceb) */
/* WARNING: Removing unreachable block (ram,0x10770c91) */
/* WARNING: Removing unreachable block (ram,0x10770c9e) */

void FUN_10770ad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108315f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10772f80(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  FUN_10773600(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  local_4 = 0;
  uVar5 = 0;
  do {
    while( true ) {
      iVar1 = *(int *)(param_1 + 4);
      if ((iVar1 == 0) || ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) <= uVar5)) {
        thunk_FUN_103254a0(0);
        ExceptionList = local_c;
        return;
      }
      iVar2 = *(int *)(iVar1 + uVar5 * 4);
      iVar3 = *(int *)(iVar2 + 0x10);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(iVar2 + 0x14) - iVar3 >> 2;
      }
      if (uVar4 < *(uint *)(in_ECX + 0x14)) break;
      FUN_10773bf0(*(undefined4 *)(param_2 + 8),1,iVar1 + uVar5 * 4);
LAB_10770bdb:
      uVar5 = uVar5 + 1;
    }
    uVar4 = 0;
    while( true ) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar5 * 4);
      iVar2 = *(int *)(iVar1 + 0x10);
      if ((iVar2 == 0) || ((uint)(*(int *)(iVar1 + 0x14) - iVar2 >> 2) <= uVar4)) break;
      FUN_10772de0(0,iVar2 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar5 * 4);
    if (iVar1 == 0) goto LAB_10770bdb;
    FUN_1076ef00();
    thunk_FUN_103254a0(iVar1);
    uVar5 = uVar5 + 1;
  } while( true );
}


// ==== 10770d70 FUN_10770d70

bool FUN_10770d70(uint param_1)

{
  param_1 = param_1 & 0x80000001;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xfffffffe) + 1;
  }
  return param_1 == 0;
}


// ==== 10770d90 FUN_10770d90

bool FUN_10770d90(int *param_1,int param_2,int param_3)

{
  if (*param_1 == param_2) {
    return param_1[1] == param_3;
  }
  if (param_1[1] == param_2) {
    return param_1[2] == param_3;
  }
  return *param_1 == param_3;
}


// ==== 10770e60 FUN_10770e60

/* WARNING: Removing unreachable block (ram,0x1077129f) */
/* WARNING: Removing unreachable block (ram,0x107712b6) */
/* WARNING: Removing unreachable block (ram,0x107712c5) */
/* WARNING: Removing unreachable block (ram,0x107712ce) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10770e60(int param_1,int param_2,char param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 uVar14;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [12];
  
  iVar1 = param_2;
  local_30[6] = 0;
  local_30[8] = 0;
  local_30[9] = 0xffffffff;
  local_30[10] = 0xffffffff;
  local_30[0xb] = 0xffffffff;
  if (*(int *)(param_1 + 4) == 0) {
    local_4c = 0;
  }
  else {
    local_4c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  local_48 = 0;
  local_50 = 0;
  if (0 < local_4c) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 4) + local_50 * 4);
      if (*(int *)(iVar6 + 0x10) == 0) {
        local_54 = 0;
      }
      else {
        local_54 = *(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10) >> 2;
      }
      piVar8 = *(int **)(iVar6 + 0x10);
      piVar11 = (int *)*piVar8;
      local_3c = piVar11[2];
      iVar5 = piVar11[1];
      local_30[0] = *piVar11;
      local_30[3] = 0xffffffff;
      local_30[4] = 0xffffffff;
      local_30[5] = 0xffffffff;
      param_2 = iVar5;
      local_30[1] = iVar5;
      local_30[2] = local_3c;
      local_30[7] = local_30[8];
      if (1 < local_54) {
        iVar4 = FUN_1076fb70(piVar8[1],local_30);
        if (iVar4 == iVar5) {
          local_30[1] = local_30[0];
          iVar10 = local_30[0];
          local_30[0] = iVar5;
        }
        else {
          iVar10 = iVar5;
          if (iVar4 == local_3c) {
            local_30[2] = local_30[0];
            local_30[0] = local_3c;
          }
        }
        iVar5 = iVar10;
        if (2 < local_54) {
          cVar2 = FUN_10771600(piVar8[1]);
          piVar8 = *(int **)(iVar6 + 0x10);
          if (cVar2 == '\0') {
            FUN_1076fbc0(piVar8[2],local_30,&local_38,&local_34);
            iVar5 = local_30[1];
            if (local_38 != local_30[1]) goto LAB_10770fbc;
            bVar13 = local_34 == -1;
          }
          else {
            bVar13 = local_30[1] == *(int *)(piVar8[1] + 4);
          }
          iVar4 = local_30[2];
          iVar5 = local_30[1];
          if (bVar13) {
            local_30[1] = local_30[2];
            local_30[2] = iVar5;
            iVar5 = iVar4;
          }
        }
      }
LAB_10770fbc:
      if ((local_50 == 0) || (param_3 == '\0')) {
        cVar2 = FUN_10770d90(*piVar8,local_30[0],iVar5);
        if (cVar2 == '\0') {
          uVar14 = *(undefined4 *)(iVar1 + 8);
          goto LAB_10771054;
        }
      }
      else {
        FUN_10773e00(*(undefined4 *)(iVar1 + 8),1,local_30);
        if (*(int *)(iVar1 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
        }
        uVar3 = FUN_10770d70(iVar5 - local_48);
        param_2 = CONCAT31(param_2._1_3_,uVar3);
        cVar2 = FUN_10770d90(**(undefined4 **)(iVar6 + 0x10),local_30[0],local_30[1]);
        if ((char)param_2 != cVar2) {
          uVar14 = *(undefined4 *)(iVar1 + 8);
LAB_10771054:
          FUN_10773e00(uVar14,1,local_30);
        }
      }
      FUN_10773e00(*(undefined4 *)(iVar1 + 8),1,local_30);
      FUN_10773e00(*(undefined4 *)(iVar1 + 8),1,local_30 + 1);
      FUN_10773e00(*(undefined4 *)(iVar1 + 8),1,local_30 + 2);
      piVar8 = local_30;
      piVar11 = local_30 + 6;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
      }
      iVar5 = 1;
      if (1 < local_54) {
        do {
          iVar4 = *(int *)(iVar6 + 0x10);
          local_40 = FUN_1076fb70(local_30 + 6,*(undefined4 *)(iVar4 + iVar5 * 4));
          if (local_40 == -1) {
            FUN_10773e00(*(undefined4 *)(iVar1 + 8),1,*(int *)(iVar4 + iVar5 * 4) + 8);
            local_30[6] = **(int **)(*(int *)(iVar6 + 0x10) + iVar5 * 4);
            local_30[7] = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + iVar5 * 4) + 4);
            local_30[8] = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + iVar5 * 4) + 8);
          }
          else {
            FUN_10773e00(*(undefined4 *)(iVar1 + 8),1,&local_40);
            local_30[6] = local_30[7];
            local_30[7] = local_30[8];
            local_30[8] = local_40;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_54);
      }
      if (param_3 == '\0') {
        puVar9 = *(undefined4 **)(iVar1 + 8);
        param_2 = 0xffffffff;
        if (*(int *)(iVar1 + 0xc) - (int)puVar9 >> 2 == 0) {
          iVar6 = *(int *)(iVar1 + 4);
          if ((iVar6 == 0) || (uVar7 = (int)puVar9 - iVar6 >> 2, uVar7 < 2)) {
            uVar7 = 1;
          }
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)puVar9 - iVar6 >> 2;
          }
          iVar6 = iVar6 + uVar7;
          iVar5 = iVar6;
          if (iVar6 < 0) {
            iVar5 = 0;
          }
          iVar5 = thunk_FUN_1032ffc0(iVar5 * 4);
          local_3c = iVar5;
          for (puVar12 = *(undefined4 **)(iVar1 + 4); puVar12 != puVar9; puVar12 = puVar12 + 1) {
            FUN_10774a90(iVar5,puVar12);
            iVar5 = iVar5 + 4;
          }
          FUN_107747f0(iVar5,1,&param_2);
          FUN_107747c0(puVar9,*(undefined4 *)(iVar1 + 8),iVar5 + 4);
          FUN_107747b0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
          thunk_FUN_103254a0(*(undefined4 *)(iVar1 + 4));
          iVar5 = local_3c;
          *(int *)(iVar1 + 0xc) = local_3c + iVar6 * 4;
          iVar6 = FUN_10772dc0();
          *(int *)(iVar1 + 4) = iVar5;
          *(int *)(iVar1 + 8) = iVar5 + 4 + iVar6 * 4;
        }
        else {
          FUN_107747c0(puVar9,puVar9,puVar9 + 1);
          FUN_107747f0(*(int *)(iVar1 + 8),1 - (*(int *)(iVar1 + 8) - (int)puVar9 >> 2),&param_2);
          puVar12 = *(undefined4 **)(iVar1 + 8);
          for (; puVar9 != puVar12; puVar9 = puVar9 + 1) {
            *puVar9 = param_2;
          }
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
        }
        local_48 = local_48 + 1;
        *param_4 = *param_4 + 1;
      }
      else if (local_50 != local_4c + -1) {
        FUN_10773e00(*(undefined4 *)(iVar1 + 8),1,local_30 + 8);
      }
      local_30[6] = local_30[7];
      local_50 = local_50 + 1;
    } while (local_50 < local_4c);
  }
  if (param_3 != '\0') {
    *param_4 = 1;
  }
  return;
}


// ==== 10771340 FUN_10771340

void FUN_10771340(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  int *piVar8;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10831618;
  local_c = ExceptionList;
  iVar3 = param_2 + -6;
  uVar7 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 1;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  *(int *)(in_ECX + 0x10) = iVar3;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  if (in_ECX != param_1) {
    if (*(int *)(param_1 + 4) != 0) {
      uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
    }
    uVar4 = FUN_1076ef80();
    if (uVar4 < uVar7) {
      uVar7 = FUN_1076ef80();
      uVar4 = FUN_10772ff0();
      if (uVar7 <= uVar4) {
        iVar3 = *(int *)(param_1 + 4);
        iVar6 = FUN_1076ef80();
        iVar3 = iVar3 + iVar6 * 2;
        FUN_107749d0(*(undefined4 *)(param_1 + 4),iVar3,*(undefined4 *)(in_ECX + 4));
        FUN_107731c0(iVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
        iVar3 = FUN_1076ef80();
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4) + iVar3 * 2;
        goto LAB_1077147c;
      }
      FUN_107731b0(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
      thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
      iVar3 = FUN_1076ef80();
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      uVar5 = thunk_FUN_1032ffc0(iVar3 * 2);
      *(undefined4 *)(in_ECX + 4) = uVar5;
      iVar3 = FUN_107731c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar5);
      *(int *)(in_ECX + 0xc) = iVar3;
    }
    else {
      uVar5 = FUN_107749d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                           *(undefined4 *)(in_ECX + 4));
      FUN_107731b0(uVar5,*(undefined4 *)(in_ECX + 8));
      iVar3 = FUN_1076ef80();
      iVar3 = *(int *)(in_ECX + 4) + iVar3 * 2;
    }
    *(int *)(in_ECX + 8) = iVar3;
  }
LAB_1077147c:
  local_18 = 0;
  local_1c[0] = (undefined1)param_2;
  local_14 = 0;
  local_10 = 0;
  local_3c[0] = (undefined1)param_2;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_1076f320(local_1c,local_3c,param_4);
  local_28 = 0;
  local_2c[0] = (undefined1)param_2;
  local_24 = 0;
  local_20 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_10772370(local_2c,local_1c,local_3c,10);
  FUN_10771650(local_2c,param_5,local_3c,param_6);
  iVar3 = local_28;
  for (uVar7 = 0; (iVar3 != 0 && (uVar7 < (uint)(local_24 - iVar3 >> 2))); uVar7 = uVar7 + 1) {
    iVar6 = *(int *)(iVar3 + uVar7 * 4);
    if (iVar6 != 0) {
      FUN_1076ef00();
      thunk_FUN_103254a0(iVar6);
      iVar3 = local_28;
    }
  }
  iVar6 = local_38;
  for (uVar7 = 0; (iVar6 != 0 && (uVar7 < (uint)(local_34 - iVar6 >> 2))); uVar7 = uVar7 + 1) {
    piVar8 = *(int **)(iVar6 + uVar7 * 4);
    while (piVar2 = piVar8, piVar2 != (int *)0x0) {
      if (piVar2[3] == uVar7) {
        piVar8 = (int *)piVar2[5];
      }
      else {
        piVar8 = (int *)piVar2[6];
      }
      iVar1 = *piVar2;
      *piVar2 = iVar1 + -1;
      iVar6 = local_38;
      iVar3 = local_28;
      if (iVar1 + -1 == 0) {
        thunk_FUN_103254a0(piVar2);
        iVar6 = local_38;
        iVar3 = local_28;
      }
    }
  }
  thunk_FUN_103254a0(iVar3);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_10773430(local_38,local_34);
  thunk_FUN_103254a0(local_38);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4 = 0xffffffff;
  FUN_1076ef00();
  ExceptionList = local_c;
  return;
}


// ==== 10771600 FUN_10771600

bool FUN_10771600(int *param_1)

{
  if (*param_1 == param_1[1]) {
    return true;
  }
  if (*param_1 == param_1[2]) {
    return true;
  }
  return param_1[1] == param_1[2];
}


// ==== 10771620 FUN_10771620

bool FUN_10771620(short param_1,short param_2,short param_3)

{
  if (param_1 == param_2) {
    return true;
  }
  if (param_1 == param_3) {
    return true;
  }
  return param_2 == param_3;
}


// ==== 10771650 FUN_10771650

void FUN_10771650(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int in_ECX;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  float10 fVar19;
  bool local_82;
  undefined1 local_81;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  int local_6c;
  uint local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int *local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10831656;
  local_c = ExceptionList;
  piVar11 = *(int **)(in_ECX + 0x10);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_7c = 0;
  ExceptionList = &local_c;
  local_6c = in_ECX;
  local_64 = piVar11;
  for (local_4c = 0;
      (iVar17 = *(int *)(param_1 + 4), iVar17 != 0 &&
      (local_4c < (uint)(*(int *)(param_1 + 8) - iVar17 >> 2))); local_4c = local_4c + 1) {
    local_3c = local_3c & 0xffffff00;
    local_68 = 0;
    uVar16 = 0;
    while( true ) {
      iVar14 = *(int *)(*(int *)(iVar17 + local_7c) + 0x10);
      if ((iVar14 == 0) ||
         ((uint)(*(int *)(*(int *)(iVar17 + local_7c) + 0x14) - iVar14 >> 2) <= uVar16)) break;
      cVar7 = FUN_10771600(*(undefined4 *)
                            (*(int *)(*(int *)(iVar17 + local_7c) + 0x10) + uVar16 * 4));
      if (cVar7 == '\0') {
        local_68 = local_68 + 1;
      }
      uVar16 = uVar16 + 1;
      piVar11 = local_64;
    }
    if ((int)piVar11 < (int)local_68) {
      local_50 = (int)local_68 / (int)piVar11;
      local_70 = (float)((int)local_68 % (int)piVar11);
      local_74 = 0;
      local_68 = 0;
      if (0 < (int)local_50) {
        local_5c = 0;
        local_58 = piVar11;
        do {
          piVar9 = (int *)thunk_FUN_1032ffc0(0x2c);
          local_4._0_1_ = 1;
          local_48 = piVar9;
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            *piVar9 = 0;
            piVar9[1] = 0;
            piVar9[2] = local_3c;
            FUN_10772d40(&local_81);
            piVar9[7] = 0;
            piVar9[8] = -1;
            *(undefined1 *)(piVar9 + 9) = 0;
            piVar9[10] = 0;
          }
          iVar17 = local_5c + local_74;
          local_4 = (uint)local_4._1_3_ << 8;
          bVar3 = true;
          local_80 = piVar9;
          if (iVar17 < local_74 + (int)local_58) {
            local_78 = iVar17 + 1;
            iVar14 = iVar17 * 4;
            local_60 = local_74 + (int)local_58;
            do {
              local_48 = *(int **)(*(int *)(*(int *)(param_1 + 4) + local_7c) + 0x10);
              cVar7 = FUN_10771600(*(undefined4 *)(iVar14 + (int)local_48));
              if (cVar7 == '\0') {
                local_78 = local_78 + 1;
                FUN_10772de0(piVar9[5],iVar14 + (int)local_48);
                bVar3 = false;
                piVar9 = local_80;
              }
              else {
                local_74 = local_74 + 1;
                local_60 = local_60 + 1;
                if (((local_78 == local_60) &&
                    (((local_68 != local_50 - 1 || (3 < (int)local_70)) || ((int)local_70 < 1)))) ||
                   (bVar3)) {
                  local_78 = local_78 + 1;
                }
                else {
                  local_78 = local_78 + 1;
                  FUN_10772de0(piVar9[5],iVar14 + (int)local_48);
                  piVar9 = local_80;
                }
              }
              iVar17 = iVar17 + 1;
              iVar14 = iVar14 + 4;
              piVar11 = local_64;
            } while (iVar17 < local_60);
          }
          if (((local_68 == local_50 - 1) && ((int)local_70 < 4)) && (0 < (int)local_70)) {
            local_60 = 0;
            iVar17 = iVar17 * 4;
            do {
              iVar14 = *(int *)(*(int *)(*(int *)(param_1 + 4) + local_7c) + 0x10);
              cVar7 = FUN_10771600(*(undefined4 *)(iVar17 + iVar14));
              if (cVar7 == '\0') {
                FUN_10772de0(piVar9[5],iVar17 + iVar14);
                local_60 = local_60 + 1;
              }
              else {
                FUN_10772de0(piVar9[5],iVar17 + iVar14);
                local_74 = local_74 + 1;
              }
              iVar17 = iVar17 + 4;
              piVar9 = local_80;
            } while (local_60 < (int)local_70);
            local_70 = 0.0;
            piVar11 = local_64;
          }
          FUN_10773440(local_14,&local_80);
          local_68 = local_68 + 1;
          local_5c = local_5c + (int)piVar11;
          local_58 = (int *)((int)local_58 + (int)piVar11);
        } while ((int)local_68 < (int)local_50);
      }
      fVar4 = local_70;
      iVar17 = 0;
      iVar14 = local_68 * (int)piVar11 + local_74;
      if (local_70 != 0.0) {
        local_80 = (int *)thunk_FUN_1032ffc0(0x2c);
        if (local_80 == (int *)0x0) {
          local_80 = (int *)0x0;
        }
        else {
          *local_80 = 0;
          local_80[1] = 0;
          local_80[2] = local_3c;
          *(undefined1 *)(local_80 + 3) = local_81;
          local_80[4] = 0;
          local_80[5] = 0;
          local_80[6] = 0;
          local_80[7] = 0;
          local_80[8] = -1;
          *(undefined1 *)(local_80 + 9) = 0;
          local_80[10] = 0;
        }
        bVar3 = true;
        if (0 < (int)fVar4) {
          iVar14 = iVar14 * 4;
          do {
            iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + local_7c) + 0x10);
            cVar7 = FUN_10771600(*(undefined4 *)(iVar1 + iVar14));
            if (cVar7 == '\0') {
              iVar17 = iVar17 + 1;
              FUN_107739b0(local_80[5],1,iVar1 + iVar14);
              bVar3 = false;
            }
            else if (!bVar3) {
              FUN_107739b0(local_80[5],1,iVar1 + iVar14);
            }
            iVar14 = iVar14 + 4;
            piVar11 = local_64;
          } while (iVar17 < (int)local_70);
        }
        goto LAB_10771a68;
      }
    }
    else {
      local_80 = (int *)thunk_FUN_1032ffc0(0x2c);
      iVar17 = local_7c;
      if (local_80 == (int *)0x0) {
        local_80 = (int *)0x0;
      }
      else {
        *local_80 = 0;
        local_80[1] = 0;
        local_80[2] = local_3c;
        *(undefined1 *)(local_80 + 3) = local_81;
        local_80[4] = 0;
        local_80[5] = 0;
        local_80[6] = 0;
        local_80[7] = 0;
        local_80[8] = -1;
        *(undefined1 *)(local_80 + 9) = 0;
        local_80[10] = 0;
      }
      uVar16 = 0;
      while( true ) {
        iVar14 = *(int *)(iVar17 + *(int *)(param_1 + 4));
        if ((*(int *)(iVar14 + 0x10) == 0) ||
           ((uint)(*(int *)(iVar14 + 0x14) - *(int *)(iVar14 + 0x10) >> 2) <= uVar16)) break;
        FUN_107739b0(local_80[5],1,*(int *)(iVar14 + 0x10) + uVar16 * 4);
        uVar16 = uVar16 + 1;
      }
LAB_10771a68:
      FUN_10773bf0(local_14,1,&local_80);
    }
    local_7c = local_7c + 4;
  }
  local_28 = 0;
  local_2c[0] = local_81;
  local_24 = 0;
  local_20 = 0;
  local_4._0_1_ = 2;
  FUN_10770ad0(local_1c,local_2c,param_4);
  uVar10 = FUN_10774a00(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
                        *(undefined4 *)(param_2 + 4));
  FUN_10773630(uVar10,*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = uVar10;
  if ((local_28 != 0) && (local_48 = (int *)(local_24 - local_28 >> 2), local_48 != (int *)0x0)) {
    piVar11 = (int *)thunk_FUN_1032ffc0(8);
    local_4._0_1_ = 3;
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      iVar17 = *(int *)(local_6c + 0x10);
      piVar11[1] = iVar17;
      local_48 = piVar11;
      iVar17 = thunk_FUN_1032ffc0(iVar17 << 2);
      *piVar11 = iVar17;
      iVar17 = 0;
      if (0 < piVar11[1]) {
        do {
          iVar17 = iVar17 + 1;
          *(undefined4 *)(*piVar11 + -4 + iVar17 * 4) = 0xffffffff;
        } while (iVar17 < piVar11[1]);
      }
    }
    local_4._0_1_ = 2;
    local_50 = 0;
    local_48 = (int *)0x461c4000;
    uVar16 = 0;
    iVar17 = local_28;
    local_64 = piVar11;
    while ((uVar15 = uVar16, uVar16 = local_50, piVar11 = local_64, iVar17 != 0 &&
           (uVar15 < (uint)(local_24 - iVar17 >> 2)))) {
      uVar13 = 0;
      uVar16 = 0;
      local_4c = 0;
      while( true ) {
        iVar14 = *(int *)(iVar17 + uVar15 * 4);
        iVar1 = *(int *)(iVar14 + 0x10);
        if ((iVar1 == 0) || ((uint)(*(int *)(iVar14 + 0x14) - iVar1 >> 2) <= uVar16)) break;
        iVar17 = FUN_10772290(*(undefined4 *)(iVar1 + uVar16 * 4),param_3);
        uVar13 = uVar13 + iVar17;
        uVar16 = uVar16 + 1;
        iVar17 = local_28;
      }
      iVar14 = *(int *)(iVar17 + uVar15 * 4);
      iVar1 = *(int *)(iVar14 + 0x10);
      if (iVar1 == 0) {
        local_58 = (int *)0x0;
      }
      else {
        local_58 = (int *)(*(int *)(iVar14 + 0x14) - iVar1 >> 2);
      }
      local_54 = 0;
      local_4c = uVar13;
      if ((float)local_48 <= (float)(int)uVar13 / (float)(int)local_58) {
        uVar16 = uVar15 + 1;
      }
      else {
        uVar16 = uVar15 + 1;
        local_50 = uVar15;
        local_48 = (int *)((float)(int)uVar13 / (float)(int)local_58);
      }
    }
    FUN_10771f80(local_64,*(undefined4 *)(iVar17 + local_50 * 4));
    FUN_10773bf0(*(undefined4 *)(param_2 + 8),1,local_28 + uVar16 * 4);
    *(undefined1 *)(*(int *)(local_28 + uVar16 * 4) + 0x24) = 1;
    iVar17 = *(int *)(local_28 + uVar16 * 4);
    iVar14 = *(int *)(iVar17 + 0x10);
    if (iVar14 == 0) {
      bVar8 = 0;
    }
    else {
      bVar8 = (byte)(*(int *)(iVar17 + 0x14) - iVar14 >> 2);
    }
    local_82 = (bool)(~bVar8 & 1);
LAB_10771d38:
    local_70 = -1.0;
    uVar16 = 0;
    while ((uVar15 = uVar16, uVar16 = local_4c, local_68 = uVar15, local_28 != 0 &&
           (uVar15 < (uint)(local_24 - local_28 >> 2)))) {
      iVar17 = *(int *)(local_28 + uVar15 * 4);
      if (*(char *)(iVar17 + 0x24) == '\0') {
        fVar19 = (float10)FUN_10772150(piVar11,iVar17);
        if (fVar19 <= (float10)local_70) {
          if ((float10)local_70 <= fVar19) {
            iVar17 = *(int *)(local_28 + uVar15 * 4);
            if (*(int *)(iVar17 + 0x10) == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(iVar17 + 0x14) - *(int *)(iVar17 + 0x10) >> 2;
            }
            local_48 = *(int **)(iVar17 + 0x10);
            puVar2 = (uint *)*local_48;
            local_38 = 0xffffffff;
            uVar16 = *puVar2;
            uVar15 = puVar2[1];
            local_3c = puVar2[2];
            local_34 = 0xffffffff;
            local_30 = 0xffffffff;
            uVar13 = uVar15;
            local_44 = uVar16;
            local_40 = uVar15;
            if (1 < iVar14) {
              uVar12 = FUN_1076fb70(local_48[1],&local_44);
              uVar18 = uVar16;
              uVar5 = uVar16;
              uVar6 = local_3c;
              if ((uVar12 == uVar15) ||
                 (uVar13 = local_3c, uVar18 = uVar15, uVar5 = local_40, uVar6 = uVar16,
                 uVar12 == local_3c)) {
                local_3c = uVar6;
                local_40 = uVar5;
                uVar16 = uVar13;
                uVar15 = uVar18;
                local_44 = uVar13;
              }
              uVar13 = uVar15;
              if (((2 < iVar14) &&
                  (FUN_1076fbc0(local_48[2],&local_44,&local_50,&local_58), local_50 == uVar15)) &&
                 (local_58 == (int *)0xffffffff)) {
                uVar13 = local_3c;
                local_3c = uVar15;
              }
            }
            bVar8 = FUN_10770d90(puVar2,uVar16,uVar13);
            piVar11 = local_64;
            uVar15 = local_68;
            if (local_82 == (bool)bVar8) {
              local_4c = local_68;
            }
          }
          goto LAB_10771e91;
        }
        local_70 = (float)fVar19;
        uVar16 = uVar15 + 1;
        local_4c = uVar15;
      }
      else {
LAB_10771e91:
        uVar16 = uVar15 + 1;
      }
    }
    if (local_70 != -1.0) {
      *(undefined1 *)(*(int *)(local_28 + local_4c * 4) + 0x24) = 1;
      FUN_10771f80(piVar11,*(undefined4 *)(local_28 + local_4c * 4));
      FUN_10773bf0(*(undefined4 *)(param_2 + 8),1,local_28 + uVar16 * 4);
      iVar17 = *(int *)(local_28 + uVar16 * 4);
      iVar14 = *(int *)(iVar17 + 0x10);
      if (iVar14 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(int *)(iVar17 + 0x14) - iVar14 >> 2;
      }
      if ((uVar16 & 1) != 0) {
        local_82 = local_82 == false;
      }
      goto LAB_10771d38;
    }
    if (piVar11 != (int *)0x0) {
      thunk_FUN_103254a0(*piVar11);
      *piVar11 = 0;
      thunk_FUN_103254a0(piVar11);
    }
  }
  thunk_FUN_103254a0(local_28);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  thunk_FUN_103254a0(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10771f80 FUN_10771f80

void FUN_10771f80(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
LAB_10771f8f:
  do {
    iVar3 = *(int *)(param_2 + 0x10);
    if ((iVar3 == 0) || ((uint)(*(int *)(param_2 + 0x14) - iVar3 >> 2) <= uVar5)) {
      return;
    }
    iVar2 = param_1[1];
    iVar6 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == **(int **)(iVar3 + uVar5 * 4)) goto LAB_10771ff3;
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar6 < iVar2);
    }
    iVar2 = iVar2 + -2;
    uVar1 = **(undefined4 **)(iVar3 + uVar5 * 4);
    while (-1 < iVar2) {
      iVar2 = iVar2 + -1;
      *(undefined4 *)(*param_1 + 8 + iVar2 * 4) = *(undefined4 *)(*param_1 + 4 + iVar2 * 4);
    }
    *(undefined4 *)*param_1 = uVar1;
LAB_10771ff3:
    iVar3 = param_1[1];
    iVar2 = 0;
    if (0 < iVar3) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 4))
        goto LAB_1077203b;
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < iVar3);
    }
    iVar3 = iVar3 + -2;
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 4);
    while (-1 < iVar3) {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(*param_1 + 8 + iVar3 * 4) = *(undefined4 *)(*param_1 + 4 + iVar3 * 4);
    }
    *(undefined4 *)*param_1 = uVar1;
LAB_1077203b:
    iVar3 = param_1[1];
    iVar2 = 0;
    if (0 < iVar3) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 8)) {
          uVar5 = uVar5 + 1;
          goto LAB_10771f8f;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < iVar3);
    }
    iVar3 = iVar3 + -2;
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 8);
    while (-1 < iVar3) {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(*param_1 + 8 + iVar3 * 4) = *(undefined4 *)(*param_1 + 4 + iVar3 * 4);
    }
    uVar5 = uVar5 + 1;
    *(undefined4 *)*param_1 = uVar1;
  } while( true );
}


// ==== 107720a0 FUN_107720a0

void FUN_107720a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1[1];
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)*param_1;
    do {
      if (*piVar3 == *param_2) goto LAB_107720de;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = *param_2;
  iVar1 = iVar1 + -2;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*param_1 + 8 + iVar1 * 4) = *(undefined4 *)(*param_1 + 4 + iVar1 * 4);
  }
  *(int *)*param_1 = iVar2;
LAB_107720de:
  iVar1 = param_1[1];
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)*param_1;
    do {
      if (*piVar3 == param_2[1]) goto LAB_10772113;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = param_2[1];
  iVar1 = iVar1 + -2;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*param_1 + 8 + iVar1 * 4) = *(undefined4 *)(*param_1 + 4 + iVar1 * 4);
  }
  *(int *)*param_1 = iVar2;
LAB_10772113:
  iVar1 = param_1[1];
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)*param_1;
    do {
      if (*piVar3 == param_2[2]) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = param_2[2];
  iVar1 = iVar1 + -2;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*param_1 + 8 + iVar1 * 4) = *(undefined4 *)(*param_1 + 4 + iVar1 * 4);
  }
  *(int *)*param_1 = iVar2;
  return;
}


// ==== 10772150 FUN_10772150

float10 FUN_10772150(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar5 = 0;
  local_c = 0;
  local_8 = 0;
  do {
    if ((*(int *)(param_2 + 0x10) == 0) ||
       ((uint)(*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2) <= uVar5)) {
      return (float10)local_c / (float10)local_8;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    iVar2 = param_1[1];
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == **(int **)(iVar1 + uVar5 * 4)) {
          local_c = local_c + 1;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(iVar1 + uVar5 * 4) + 4)) {
          local_c = local_c + 1;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(iVar1 + uVar5 * 4) + 8)) {
          local_c = local_c + 1;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    local_8 = local_8 + 1;
    uVar5 = uVar5 + 1;
  } while( true );
}


// ==== 10772220 FUN_10772220

int FUN_10772220(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1[1];
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)*param_1;
    do {
      if (*piVar4 == *param_2) {
        iVar2 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)*param_1;
    do {
      if (*piVar4 == param_2[1]) {
        iVar2 = iVar2 + 1;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)*param_1;
    while (*piVar4 != param_2[2]) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar1 <= iVar3) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== 10772290 FUN_10772290

char FUN_10772290(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  iVar4 = FUN_1076f280(param_2,uVar2,uVar1,param_1);
  cVar5 = iVar4 != 0;
  uVar3 = param_1[2];
  iVar4 = FUN_1076f280(param_2,uVar1,uVar3,param_1);
  if (iVar4 != 0) {
    cVar5 = cVar5 + '\x01';
  }
  iVar4 = FUN_1076f280(param_2,uVar3,uVar2,param_1);
  if (iVar4 != 0) {
    cVar5 = cVar5 + '\x01';
  }
  return cVar5;
}


// ==== 10772300 FUN_10772300

float10 FUN_10772300(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_4;
  
  iVar4 = 0;
  piVar5 = *(int **)(param_1 + 4);
  local_4 = 0;
  if (piVar5 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - (int)piVar5 >> 2;
  }
  iVar6 = iVar2;
  if (0 < iVar2) {
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 2;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + (iVar3 - *(int *)(iVar1 + 0x28));
      iVar6 = iVar6 + -1;
      local_4 = iVar4;
    } while (iVar6 != 0);
  }
  return (float10)local_4 / (float10)iVar2;
}


// ==== 10772370 FUN_10772370

void FUN_10772370(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  char local_dd;
  int local_d8;
  int local_d4;
  undefined4 *local_d0;
  int local_cc;
  int local_c8;
  int *local_c4;
  int local_c0;
  undefined4 *local_b8;
  char local_b4;
  char local_b3;
  int local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  int local_90;
  undefined4 *local_8c;
  int local_88;
  double local_84;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined1 local_64 [4];
  undefined1 local_60 [12];
  undefined4 local_54;
  uint local_48;
  undefined4 local_3c;
  uint local_30;
  undefined4 local_24;
  uint local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10831679;
  local_c = ExceptionList;
  local_88 = param_4 * 6;
  iVar8 = 0;
  local_70 = param_4 * 0x60 + 4;
  local_cc = 0;
  local_dd = '\0';
  ExceptionList = &local_c;
  do {
    iVar7 = local_88;
    piVar4 = (int *)thunk_FUN_1032ffc0(local_70);
    local_4 = 0;
    if (piVar4 == (int *)0x0) {
      local_c4 = (int *)0x0;
    }
    else {
      *piVar4 = iVar7;
      _eh_vector_constructor_iterator_
                (piVar4 + 1,0x10,iVar7,(_func_void_void_ptr *)&LAB_10772c20,FUN_1076ef40);
      local_c4 = piVar4 + 1;
    }
    iVar7 = 0;
    local_4 = 0xffffffff;
    local_c0 = 0;
    local_b4 = local_dd;
    local_b3 = local_dd;
    local_ac = 0;
    FUN_10774430();
    local_4 = 1;
    local_c8 = 0;
    piVar4 = local_c4;
    iVar2 = local_c0;
    if (0 < param_4) {
      do {
        local_d0 = (undefined4 *)FUN_1076fac0(param_2,param_3);
        iVar2 = local_b0;
        if (local_d0 == (undefined4 *)0x0) {
          local_dd = '\x01';
          iVar2 = iVar7;
          break;
        }
        FUN_10773940(&local_90,&local_d0);
        if (local_90 == iVar2) {
          FUN_10773650(local_14,&local_d0);
          uVar5 = FUN_1076f240(param_3,*local_d0,local_d0[1]);
          local_78 = (undefined4 *)thunk_FUN_1032ffc0(0x2c);
          if (local_78 == (undefined4 *)0x0) {
            local_78 = (undefined4 *)0x0;
          }
          else {
            local_24 = CONCAT31(local_24._1_3_,1);
            *local_78 = local_d0;
            local_78[1] = uVar5;
            local_78[2] = local_24;
            *(char *)(local_78 + 3) = local_dd;
            local_78[4] = 0;
            local_78[5] = 0;
            local_78[6] = 0;
            local_78[7] = iVar8;
            local_78[8] = local_cc;
            *(undefined1 *)(local_78 + 9) = 0;
            local_78[10] = 0;
            iVar8 = iVar8 + 1;
            local_cc = local_cc + 1;
          }
          FUN_10773bf0(piVar4[2],1,&local_78);
          uVar5 = FUN_1076f240(param_3,*local_d0,local_d0[1]);
          local_7c = (undefined4 *)thunk_FUN_1032ffc0(0x2c);
          if (local_7c == (undefined4 *)0x0) {
            local_7c = (undefined4 *)0x0;
          }
          else {
            local_30 = local_30 & 0xffffff00;
            *local_7c = local_d0;
            local_7c[1] = uVar5;
            local_7c[2] = local_30;
            *(char *)(local_7c + 3) = local_dd;
            local_7c[4] = 0;
            local_7c[5] = 0;
            local_7c[6] = 0;
            local_7c[7] = iVar8;
            local_7c[8] = local_cc;
            *(undefined1 *)(local_7c + 9) = 0;
            local_7c[10] = 0;
            iVar8 = iVar8 + 1;
            local_cc = local_cc + 1;
          }
          FUN_10773bf0(piVar4[6],1,&local_7c);
          uVar5 = FUN_1076f240(param_3,local_d0[1],local_d0[2]);
          local_98 = (undefined4 *)thunk_FUN_1032ffc0(0x2c);
          if (local_98 == (undefined4 *)0x0) {
            local_98 = (undefined4 *)0x0;
          }
          else {
            local_54 = CONCAT31(local_54._1_3_,1);
            *local_98 = local_d0;
            local_98[1] = uVar5;
            local_98[2] = local_54;
            *(char *)(local_98 + 3) = local_dd;
            local_98[4] = 0;
            local_98[5] = 0;
            local_98[6] = 0;
            local_98[7] = iVar8;
            local_98[8] = local_cc;
            *(undefined1 *)(local_98 + 9) = 0;
            local_98[10] = 0;
            iVar8 = iVar8 + 1;
            local_cc = local_cc + 1;
          }
          FUN_10773bf0(piVar4[10],1,&local_98);
          uVar5 = FUN_1076f240(param_3,local_d0[1],local_d0[2]);
          local_74 = (undefined4 *)thunk_FUN_1032ffc0(0x2c);
          if (local_74 == (undefined4 *)0x0) {
            local_74 = (undefined4 *)0x0;
          }
          else {
            local_48 = local_48 & 0xffffff00;
            *local_74 = local_d0;
            local_74[1] = uVar5;
            local_74[2] = local_48;
            *(char *)(local_74 + 3) = local_dd;
            local_74[4] = 0;
            local_74[5] = 0;
            local_74[6] = 0;
            local_74[7] = iVar8;
            local_74[8] = local_cc;
            *(undefined1 *)(local_74 + 9) = 0;
            local_74[10] = 0;
            iVar8 = iVar8 + 1;
            local_cc = local_cc + 1;
          }
          FUN_10773bf0(piVar4[0xe],1,&local_74);
          uVar5 = FUN_1076f240(param_3,local_d0[2],*local_d0);
          local_94 = (undefined4 *)thunk_FUN_1032ffc0(0x2c);
          if (local_94 == (undefined4 *)0x0) {
            local_94 = (undefined4 *)0x0;
          }
          else {
            local_3c = CONCAT31(local_3c._1_3_,1);
            *local_94 = local_d0;
            local_94[1] = uVar5;
            local_94[2] = local_3c;
            *(char *)(local_94 + 3) = local_dd;
            local_94[4] = 0;
            local_94[5] = 0;
            local_94[6] = 0;
            local_94[7] = iVar8;
            local_94[8] = local_cc;
            *(undefined1 *)(local_94 + 9) = 0;
            local_94[10] = 0;
            iVar8 = iVar8 + 1;
            local_cc = local_cc + 1;
          }
          FUN_10773bf0(piVar4[0x12],1,&local_94);
          uVar5 = FUN_1076f240(param_3,local_d0[2],*local_d0);
          local_8c = (undefined4 *)thunk_FUN_1032ffc0(0x2c);
          if (local_8c == (undefined4 *)0x0) {
            local_8c = (undefined4 *)0x0;
          }
          else {
            local_18 = local_18 & 0xffffff00;
            *local_8c = local_d0;
            local_8c[1] = uVar5;
            local_8c[2] = local_18;
            *(char *)(local_8c + 3) = local_dd;
            local_8c[4] = 0;
            local_8c[5] = 0;
            local_8c[6] = 0;
            local_8c[7] = iVar8;
            local_8c[8] = local_cc;
            *(undefined1 *)(local_8c + 9) = 0;
            local_8c[10] = 0;
            iVar8 = iVar8 + 1;
            local_cc = local_cc + 1;
          }
          piVar1 = piVar4 + 0x16;
          iVar7 = iVar7 + 6;
          piVar4 = piVar4 + 0x18;
          FUN_10773bf0(*piVar1,1,&local_8c);
        }
        local_c8 = local_c8 + 1;
        iVar2 = iVar7;
      } while (local_c8 < param_4);
    }
    local_c0 = iVar2;
    if (0 < iVar7) {
      piVar4 = local_c4 + 1;
      local_d8 = iVar7;
      do {
        FUN_1076fd00(param_3,param_2);
        local_a4 = 0;
        local_a0 = 0;
        local_9c = local_9c & 0xffffff00;
        local_b8 = *(undefined4 **)*piVar4;
        uVar5 = local_b8[8];
        cVar3 = FUN_107709b0(param_2,param_3,local_b8,&local_a4);
        iVar7 = local_c0;
        while (local_c0 = iVar7, cVar3 != '\0') {
          local_b8 = (undefined4 *)thunk_FUN_1032ffc0(0x2c);
          if (local_b8 == (undefined4 *)0x0) {
            local_b8 = (undefined4 *)0x0;
          }
          else {
            *local_b8 = local_a4;
            local_b8[1] = local_a0;
            local_b8[2] = local_9c;
            *(char *)(local_b8 + 3) = local_dd;
            local_b8[4] = 0;
            local_b8[5] = 0;
            local_b8[6] = 0;
            local_b8[7] = iVar8;
            local_b8[8] = uVar5;
            *(undefined1 *)(local_b8 + 9) = 0;
            local_b8[10] = 0;
            iVar8 = iVar8 + 1;
          }
          FUN_1076fd00(param_3,param_2);
          FUN_10773bf0(piVar4[1],1,&local_b8);
          cVar3 = FUN_107709b0(param_2,param_3,local_b8,&local_a4);
          iVar7 = local_c0;
        }
        piVar4 = piVar4 + 4;
        local_d8 = local_d8 + -1;
      } while (local_d8 != 0);
    }
    local_c0 = 0;
    local_84 = 0.0;
    local_c8 = 0;
    if (0 < iVar7) {
      piVar4 = local_c4 + 1;
      do {
        fVar9 = (float10)FUN_10772300(piVar4 + -1);
        if (*piVar4 == 0) {
          local_6c = 0;
        }
        else {
          local_6c = piVar4[1] - *piVar4 >> 2;
        }
        uStack_68 = 0;
        fVar9 = (float10)local_6c * (float10)0.0 + fVar9;
        if ((float10)local_84 < fVar9) {
          local_84 = (double)fVar9;
          local_c0 = local_c8;
        }
        piVar4 = piVar4 + 4;
        local_c8 = local_c8 + 1;
      } while (local_c8 < iVar7);
    }
    FUN_107708e0(param_1,local_c4 + local_c0 * 4);
    local_c8 = 0;
    if (0 < iVar7) {
      piVar4 = local_c4 + 1;
      do {
        if (local_c8 != local_c0) {
          if (*piVar4 == 0) {
            local_d8 = 0;
          }
          else {
            local_d8 = piVar4[1] - *piVar4 >> 2;
          }
          local_d4 = 0;
          if (0 < local_d8) {
            do {
              iVar2 = *(int *)(*piVar4 + local_d4 * 4);
              if (iVar2 != 0) {
                thunk_FUN_103254a0(*(undefined4 *)(iVar2 + 0x10));
                *(undefined4 *)(iVar2 + 0x10) = 0;
                *(undefined4 *)(iVar2 + 0x14) = 0;
                *(undefined4 *)(iVar2 + 0x18) = 0;
                thunk_FUN_103254a0(iVar2);
              }
              local_d4 = local_d4 + 1;
            } while (local_d4 < local_d8);
          }
        }
        local_c8 = local_c8 + 1;
        piVar4 = piVar4 + 4;
      } while (local_c8 < iVar7);
    }
    if (local_c4 != (int *)0x0) {
      piVar4 = local_c4 + -1;
      _eh_vector_destructor_iterator_(local_c4,0x10,local_c4[-1],FUN_1076ef40);
      thunk_FUN_103254a0(piVar4);
    }
    local_4 = 0xffffffff;
    puVar6 = (undefined4 *)FUN_10773640(local_60);
    FUN_10773870(local_64,*puVar6,local_b0);
    thunk_FUN_103254a0(local_b0);
    iVar7 = DAT_11d85d30;
    DAT_11d85d34 = DAT_11d85d34 + -1;
    local_b0 = 0;
    local_a8 = 0;
    if ((DAT_11d85d34 == 0) && (DAT_11d85d30 = 0, iVar7 != 0)) {
      thunk_FUN_103254a0(iVar7);
    }
    if (local_dd != '\0') {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


// ==== 10772c40 FUN_10772c40

void FUN_10772c40(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(in_ECX + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(in_ECX + 0xc) == 0) {
    while (piVar2 != piVar1) {
      FUN_10774980();
      FUN_10774010(local_4,piVar2);
    }
  }
  else {
    FUN_107743f0(piVar1[1]);
    *(int *)(*(int *)(in_ECX + 4) + 4) = DAT_11d85d30;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    FUN_10773640(local_8);
  }
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  iVar3 = DAT_11d85d30;
  DAT_11d85d34 = DAT_11d85d34 + -1;
  if ((DAT_11d85d34 == 0) && (DAT_11d85d30 = 0, iVar3 != 0)) {
    thunk_FUN_103254a0(iVar3);
  }
  return;
}


// ==== 10772d40 FUN_10772d40

void FUN_10772d40(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 10772d60 FUN_10772d60

int FUN_10772d60(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2;
}


// ==== 10772d80 FUN_10772d80

void FUN_10772d80(void)

{
  int in_ECX;
  
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 10772da0 FUN_10772da0

int FUN_10772da0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2;
}


// ==== 10772dc0 FUN_10772dc0

int FUN_10772dc0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2;
}


// ==== 10772de0 FUN_10772de0

int FUN_10772de0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 4);
  iVar7 = (int)param_1 - iVar3 >> 2;
  if (*(int *)(in_ECX + 0xc) - iVar2 >> 2 != 0) {
    if (iVar2 - (int)param_1 >> 2 == 0) {
      FUN_10772fc0(param_1,iVar2,param_1 + 1);
      FUN_10774720(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1 >> 2),param_2);
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_10772fc0(iVar2 + -4,iVar2,iVar2);
      puVar6 = *(undefined4 **)(in_ECX + 8);
      puVar1 = puVar6;
      while (param_1 != puVar1 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar1[-2];
        puVar1 = puVar1 + -1;
      }
      puVar6 = param_1 + 1;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 4;
    return *(int *)(in_ECX + 4) + iVar7 * 4;
  }
  if ((iVar3 == 0) || (uVar5 = iVar2 - iVar3 >> 2, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar3 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  iVar4 = thunk_FUN_1032ffc0(iVar3 * 4);
  iVar3 = iVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); puVar6 != param_1; puVar6 = puVar6 + 1) {
    FUN_10774a30(iVar3,puVar6);
    iVar3 = iVar3 + 4;
  }
  FUN_10774a30(iVar3,param_2);
  FUN_10772fc0(param_1,*(undefined4 *)(in_ECX + 8),iVar3 + 4);
  FUN_10772fb0(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(int *)(in_ECX + 0xc) = iVar4 + iVar2 * 4;
  iVar2 = FUN_10772d60();
  *(int *)(in_ECX + 4) = iVar4;
  *(int *)(in_ECX + 8) = iVar4 + 4 + iVar2 * 4;
  return iVar4 + iVar7 * 4;
}


// ==== 10772f80 FUN_10772f80

void FUN_10772f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined4 **)(in_ECX + 8) = param_1;
  return;
}


// ==== 10772fb0 FUN_10772fb0

void FUN_10772fb0(void)

{
  return;
}


// ==== 10772fc0 FUN_10772fc0

void FUN_10772fc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


// ==== 10772ff0 FUN_10772ff0

int FUN_10772ff0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 1;
}


// ==== 10773010 FUN_10773010

int FUN_10773010(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  
  iVar2 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 4);
  iVar7 = (int)param_1 - iVar3 >> 1;
  if (*(int *)(in_ECX + 0xc) - iVar2 >> 1 != 0) {
    if (iVar2 - (int)param_1 >> 1 == 0) {
      FUN_107731c0(param_1,iVar2,param_1 + 1);
      FUN_10773bc0(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1 >> 1),param_2);
      puVar6 = *(undefined2 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_107731c0(iVar2 + -2,iVar2,iVar2);
      puVar6 = *(undefined2 **)(in_ECX + 8);
      puVar1 = puVar6;
      while (param_1 != puVar1 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar1[-2];
        puVar1 = puVar1 + -1;
      }
      puVar6 = param_1 + 1;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 2;
    return *(int *)(in_ECX + 4) + iVar7 * 2;
  }
  if ((iVar3 == 0) || (uVar5 = iVar2 - iVar3 >> 1, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar3 >> 1;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  iVar4 = thunk_FUN_1032ffc0(iVar3 * 2);
  iVar3 = iVar4;
  for (puVar6 = *(undefined2 **)(in_ECX + 4); puVar6 != param_1; puVar6 = puVar6 + 1) {
    FUN_10774a50(iVar3,puVar6);
    iVar3 = iVar3 + 2;
  }
  FUN_10774a50(iVar3,param_2);
  FUN_107731c0(param_1,*(undefined4 *)(in_ECX + 8),iVar3 + 2);
  FUN_107731b0(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(int *)(in_ECX + 0xc) = iVar4 + iVar2 * 2;
  iVar2 = FUN_1076ef80();
  *(int *)(in_ECX + 4) = iVar4;
  *(int *)(in_ECX + 8) = iVar4 + 2 + iVar2 * 2;
  return iVar4 + iVar7 * 2;
}


// ==== 107731b0 FUN_107731b0

void FUN_107731b0(void)

{
  return;
}


// ==== 107731c0 FUN_107731c0

void FUN_107731c0(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


// ==== 107731f0 FUN_107731f0

void FUN_107731f0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar6 >> 2)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 2) < param_2) {
      puVar7 = param_1 + param_2;
      if (param_1 != puVar6) {
        puVar4 = puVar7 + -param_2;
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar6);
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (iVar2 = param_2 - ((int)puVar6 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *param_3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar7 = puVar6;
      for (puVar4 = puVar6 + -param_2; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (puVar7 = puVar6 + -param_2; param_1 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_1 + param_2;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar5 = (int)puVar6 - iVar2 >> 2, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = (undefined4 *)thunk_FUN_1032ffc0(iVar3 * 4);
  puVar7 = puVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, puVar1 = puVar7, puVar6 != param_1;
      puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar6 = puVar7 + param_2;
  if (param_1 != puVar1) {
    param_1 = (undefined4 *)((int)puVar6 + (param_2 * -4 - (int)puVar7) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *param_1;
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    } while (param_1 != puVar1);
  }
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 **)(in_ECX + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 4) = puVar4;
    *(undefined4 **)(in_ECX + 8) = puVar4 + param_2;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar4;
  *(undefined4 **)(in_ECX + 8) = puVar4 + (*(int *)(in_ECX + 8) - iVar2 >> 2) + param_2;
  return;
}


// ==== 10773400 FUN_10773400

void FUN_10773400(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined4 **)(in_ECX + 8) = param_1;
  return;
}


// ==== 10773430 FUN_10773430

void FUN_10773430(void)

{
  return;
}


// ==== 10773440 FUN_10773440

int FUN_10773440(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 4);
  iVar7 = (int)param_1 - iVar3 >> 2;
  if (*(int *)(in_ECX + 0xc) - iVar2 >> 2 != 0) {
    if (iVar2 - (int)param_1 >> 2 == 0) {
      FUN_10774750(param_1,iVar2,param_1 + 1);
      FUN_10774780(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1 >> 2),param_2);
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_10774750(iVar2 + -4,iVar2,iVar2);
      puVar6 = *(undefined4 **)(in_ECX + 8);
      puVar1 = puVar6;
      while (param_1 != puVar1 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar1[-2];
        puVar1 = puVar1 + -1;
      }
      puVar6 = param_1 + 1;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 4;
    return *(int *)(in_ECX + 4) + iVar7 * 4;
  }
  if ((iVar3 == 0) || (uVar5 = iVar2 - iVar3 >> 2, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar3 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  iVar4 = thunk_FUN_1032ffc0(iVar3 * 4);
  iVar3 = iVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); puVar6 != param_1; puVar6 = puVar6 + 1) {
    FUN_10774a70(iVar3,puVar6);
    iVar3 = iVar3 + 4;
  }
  FUN_10774a70(iVar3,param_2);
  FUN_10774750(param_1,*(undefined4 *)(in_ECX + 8),iVar3 + 4);
  FUN_10773630(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(int *)(in_ECX + 0xc) = iVar4 + iVar2 * 4;
  iVar2 = FUN_107735e0();
  *(int *)(in_ECX + 4) = iVar4;
  *(int *)(in_ECX + 8) = iVar4 + 4 + iVar2 * 4;
  return iVar4 + iVar7 * 4;
}


// ==== 107735e0 FUN_107735e0

int FUN_107735e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2;
}


// ==== 10773600 FUN_10773600

void FUN_10773600(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined4 **)(in_ECX + 8) = param_1;
  return;
}


// ==== 10773630 FUN_10773630

void FUN_10773630(void)

{
  return;
}


// ==== 10773640 FUN_10773640

void FUN_10773640(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = **(undefined4 **)(in_ECX + 4);
  return;
}


// ==== 10773650 FUN_10773650

void FUN_10773650(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int in_ECX;
  undefined4 *puVar10;
  bool bVar11;
  
  puVar8 = param_2;
  bVar11 = true;
  piVar1 = *(int **)(in_ECX + 4);
  piVar6 = piVar1;
  piVar7 = (int *)piVar1[1];
  while (piVar7 != DAT_11d85d30) {
    bVar11 = *param_2 < (uint)piVar7[3];
    piVar6 = piVar7;
    if (bVar11) {
      piVar7 = (int *)*piVar7;
    }
    else {
      piVar7 = (int *)piVar7[2];
    }
  }
  if (*(char *)(in_ECX + 8) != '\0') {
    param_2 = (uint *)FUN_10774900(piVar6,0);
    *param_2 = (uint)DAT_11d85d30;
    param_2[2] = (uint)DAT_11d85d30;
    FUN_10774a30(param_2 + 3,puVar8);
    puVar9 = param_2;
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    if (((piVar6 == *(int **)(in_ECX + 4)) || (piVar7 != DAT_11d85d30)) ||
       (*puVar8 < (uint)piVar6[3])) {
      *piVar6 = (int)param_2;
      piVar1 = *(int **)(in_ECX + 4);
      if (piVar6 == piVar1) {
        piVar1[1] = (int)param_2;
        *(uint **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
      else if (piVar6 == (int *)*piVar1) {
        *piVar1 = (int)param_2;
      }
    }
    else {
      piVar6[2] = (int)param_2;
      if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
        *(uint **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
    }
    puVar10 = param_2;
    if (param_2 != *(undefined4 **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        puVar2 = (undefined4 *)puVar10[1];
        if (puVar2[4] != 0) break;
        puVar3 = *(undefined4 **)puVar2[1];
        if (puVar2 == puVar3) {
          iVar4 = ((undefined4 *)puVar2[1])[2];
          if (*(int *)(iVar4 + 0x10) == 0) {
            puVar2[4] = 1;
            *(undefined4 *)(iVar4 + 0x10) = 1;
            *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
            puVar10 = *(undefined4 **)(puVar10[1] + 4);
          }
          else {
            if (puVar10 == (undefined4 *)puVar2[2]) {
              FUN_10774820(puVar2);
              puVar10 = puVar2;
            }
            *(undefined4 *)(puVar10[1] + 0x10) = 1;
            *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
            FUN_107748a0(*(undefined4 *)(puVar10[1] + 4));
          }
        }
        else if (puVar3[4] == 0) {
          puVar2[4] = 1;
          puVar3[4] = 1;
          *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
          puVar10 = *(undefined4 **)(puVar10[1] + 4);
        }
        else {
          if (puVar10 == (undefined4 *)*puVar2) {
            FUN_107748a0(puVar2);
            puVar10 = puVar2;
          }
          *(undefined4 *)(puVar10[1] + 0x10) = 1;
          *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
          FUN_10774820(*(undefined4 *)(puVar10[1] + 4));
        }
      } while (puVar10 != *(undefined4 **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x10) = 1;
    *param_1 = puVar9;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (bVar11) {
    if (piVar6 == (int *)*piVar1) goto LAB_10773836;
    FUN_10774920();
  }
  if (*puVar8 <= (uint)piVar6[3]) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = piVar6;
    return;
  }
LAB_10773836:
  puVar9 = (undefined4 *)FUN_107744b0(&param_2,piVar7,piVar6,puVar8);
  uVar5 = *puVar9;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar5;
  return;
}


// ==== 10773870 FUN_10773870

void FUN_10773870(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_3;
  if (((*(int *)(in_ECX + 0xc) != 0) && (piVar1 = *(int **)(in_ECX + 4), param_2 == (int *)*piVar1))
     && (param_3 == piVar1)) {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_11d85d30) {
      do {
        FUN_107743f0(piVar2[2]);
        piVar1 = (int *)*piVar2;
        thunk_FUN_103254a0(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_11d85d30);
    }
    *(int **)(*(int *)(in_ECX + 4) + 4) = DAT_11d85d30;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    *param_1 = **(undefined4 **)(in_ECX + 4);
    return;
  }
  do {
    if (param_2 == piVar2) {
      *param_1 = param_2;
      return;
    }
    if ((int *)param_2[2] == DAT_11d85d30) {
      piVar1 = (int *)param_2[1];
      piVar3 = param_2;
      if (param_2 == (int *)piVar1[2]) {
        do {
          piVar3 = piVar1;
          piVar1 = (int *)piVar3[1];
        } while (piVar3 == (int *)piVar1[2]);
      }
      if ((int *)piVar3[2] != piVar1) goto LAB_1077391e;
    }
    else {
      piVar1 = (int *)FUN_10774880((int *)param_2[2]);
LAB_1077391e:
      piVar3 = piVar1;
    }
    FUN_10774010(&param_3,param_2);
    param_2 = piVar3;
  } while( true );
}


// ==== 10773940 FUN_10773940

void FUN_10773940(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  puVar4 = puVar1;
  if ((undefined4 *)puVar1[1] != DAT_11d85d30) {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != DAT_11d85d30);
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}


// ==== 107739b0 FUN_107739b0

void FUN_107739b0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar6 >> 2)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 2) < param_2) {
      puVar7 = param_1 + param_2;
      if (param_1 != puVar6) {
        puVar4 = puVar7 + -param_2;
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar6);
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (iVar2 = param_2 - ((int)puVar6 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *param_3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar7 = puVar6;
      for (puVar4 = puVar6 + -param_2; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (puVar7 = puVar6 + -param_2; param_1 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_1 + param_2;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar5 = (int)puVar6 - iVar2 >> 2, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = (undefined4 *)thunk_FUN_1032ffc0(iVar3 * 4);
  puVar7 = puVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, puVar1 = puVar7, puVar6 != param_1;
      puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar6 = puVar7 + param_2;
  if (param_1 != puVar1) {
    param_1 = (undefined4 *)((int)puVar6 + (param_2 * -4 - (int)puVar7) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *param_1;
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    } while (param_1 != puVar1);
  }
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 **)(in_ECX + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 4) = puVar4;
    *(undefined4 **)(in_ECX + 8) = puVar4 + param_2;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar4;
  *(undefined4 **)(in_ECX + 8) = puVar4 + (*(int *)(in_ECX + 8) - iVar2 >> 2) + param_2;
  return;
}


// ==== 10773bc0 FUN_10773bc0

void FUN_10773bc0(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10773bf0 FUN_10773bf0

void FUN_10773bf0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar6 >> 2)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 2) < param_2) {
      puVar7 = param_1 + param_2;
      if (param_1 != puVar6) {
        puVar4 = puVar7 + -param_2;
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar6);
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (iVar2 = param_2 - ((int)puVar6 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *param_3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar7 = puVar6;
      for (puVar4 = puVar6 + -param_2; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (puVar7 = puVar6 + -param_2; param_1 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_1 + param_2;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar5 = (int)puVar6 - iVar2 >> 2, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = (undefined4 *)thunk_FUN_1032ffc0(iVar3 * 4);
  puVar7 = puVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, puVar1 = puVar7, puVar6 != param_1;
      puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar6 = puVar7 + param_2;
  if (param_1 != puVar1) {
    param_1 = (undefined4 *)((int)puVar6 + (param_2 * -4 - (int)puVar7) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *param_1;
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    } while (param_1 != puVar1);
  }
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 **)(in_ECX + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 4) = puVar4;
    *(undefined4 **)(in_ECX + 8) = puVar4 + param_2;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar4;
  *(undefined4 **)(in_ECX + 8) = puVar4 + (*(int *)(in_ECX + 8) - iVar2 >> 2) + param_2;
  return;
}


// ==== 10773e00 FUN_10773e00

void FUN_10773e00(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar6 >> 2)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 2) < param_2) {
      puVar7 = param_1 + param_2;
      if (param_1 != puVar6) {
        puVar4 = puVar7 + -param_2;
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar6);
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (iVar2 = param_2 - ((int)puVar6 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *param_3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar7 = puVar6;
      for (puVar4 = puVar6 + -param_2; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (puVar7 = puVar6 + -param_2; param_1 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_1 + param_2;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar5 = (int)puVar6 - iVar2 >> 2, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = (undefined4 *)thunk_FUN_1032ffc0(iVar3 * 4);
  puVar7 = puVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, puVar1 = puVar7, puVar6 != param_1;
      puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar6 = puVar7 + param_2;
  if (param_1 != puVar1) {
    param_1 = (undefined4 *)((int)puVar6 + (param_2 * -4 - (int)puVar7) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *param_1;
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    } while (param_1 != puVar1);
  }
  thunk_FUN_103254a0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 **)(in_ECX + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 4) = puVar4;
    *(undefined4 **)(in_ECX + 8) = puVar4 + param_2;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar4;
  *(undefined4 **)(in_ECX + 8) = puVar4 + (*(int *)(in_ECX + 8) - iVar2 >> 2) + param_2;
  return;
}


// ==== 10774010 FUN_10774010

void FUN_10774010(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  int *local_4;
  
  FUN_10774980();
  piVar6 = (int *)*param_2;
  local_4 = param_2;
  if (piVar6 == DAT_11d85d30) {
    piVar8 = (int *)param_2[2];
  }
  else {
    piVar2 = (int *)param_2[2];
    piVar8 = piVar6;
    if (piVar2 != DAT_11d85d30) {
      for (piVar8 = (int *)*piVar2; piVar8 != DAT_11d85d30; piVar8 = (int *)*piVar8) {
        piVar2 = piVar8;
      }
      piVar8 = (int *)piVar2[2];
      local_4 = piVar2;
      if (piVar2 != param_2) {
        piVar6[1] = (int)piVar2;
        *piVar2 = *param_2;
        if (piVar2 == (int *)param_2[2]) {
          piVar8[1] = (int)piVar2;
        }
        else {
          piVar8[1] = piVar2[1];
          *(int **)piVar2[1] = piVar8;
          piVar2[2] = param_2[2];
          *(int **)(param_2[2] + 4) = piVar2;
        }
        if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_2) {
          *(int **)(*(int *)(in_ECX + 4) + 4) = piVar2;
        }
        else {
          puVar7 = (undefined4 *)param_2[1];
          if ((int *)*puVar7 == param_2) {
            *puVar7 = piVar2;
          }
          else {
            puVar7[2] = piVar2;
          }
        }
        local_4 = param_2;
        piVar2[1] = param_2[1];
        iVar1 = piVar2[4];
        piVar2[4] = param_2[4];
        param_2[4] = iVar1;
        goto LAB_1077413f;
      }
    }
  }
  piVar8[1] = local_4[1];
  if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_2) {
    *(int **)(*(int *)(in_ECX + 4) + 4) = piVar8;
  }
  else {
    puVar7 = (undefined4 *)param_2[1];
    if ((int *)*puVar7 == param_2) {
      *puVar7 = piVar8;
    }
    else {
      puVar7[2] = piVar8;
    }
  }
  piVar6 = *(int **)(in_ECX + 4);
  if ((int *)*piVar6 == param_2) {
    if ((int *)param_2[2] == DAT_11d85d30) {
      *piVar6 = param_2[1];
    }
    else {
      piVar3 = (int *)*piVar8;
      piVar2 = piVar8;
      while (piVar5 = piVar3, piVar5 != DAT_11d85d30) {
        piVar2 = piVar5;
        piVar3 = (int *)*piVar5;
      }
      *piVar6 = (int)piVar2;
    }
  }
  if (*(int **)(*(int *)(in_ECX + 4) + 8) == param_2) {
    if ((int *)*param_2 == DAT_11d85d30) {
      piVar6 = (int *)param_2[1];
    }
    else {
      piVar2 = (int *)piVar8[2];
      piVar6 = piVar8;
      while (piVar3 = piVar2, piVar3 != DAT_11d85d30) {
        piVar6 = piVar3;
        piVar2 = (int *)piVar3[2];
      }
    }
    *(int **)(*(int *)(in_ECX + 4) + 8) = piVar6;
  }
LAB_1077413f:
  if (local_4[4] == 1) {
    if (piVar8 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        if (piVar8[4] != 1) break;
        piVar6 = *(int **)piVar8[1];
        if (piVar8 == piVar6) {
          piVar6 = (int *)((undefined4 *)piVar8[1])[2];
          if (piVar6[4] == 0) {
            piVar6[4] = 1;
            *(undefined4 *)(piVar8[1] + 0x10) = 0;
            iVar1 = piVar8[1];
            piVar6 = *(int **)(iVar1 + 8);
            *(int *)(iVar1 + 8) = *piVar6;
            if ((int *)*piVar6 != DAT_11d85d30) {
              ((int *)*piVar6)[1] = iVar1;
            }
            piVar6[1] = *(int *)(iVar1 + 4);
            if (iVar1 == *(int *)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar6;
            }
            else {
              piVar2 = *(int **)(iVar1 + 4);
              if (iVar1 == *piVar2) {
                *piVar2 = (int)piVar6;
              }
              else {
                piVar2[2] = (int)piVar6;
              }
            }
            *piVar6 = iVar1;
            *(int **)(iVar1 + 4) = piVar6;
            piVar6 = *(int **)(piVar8[1] + 8);
          }
          if ((*(int *)(*piVar6 + 0x10) != 1) || (*(int *)(piVar6[2] + 0x10) != 1)) {
            if (*(int *)(piVar6[2] + 0x10) == 1) {
              *(undefined4 *)(*piVar6 + 0x10) = 1;
              iVar1 = *piVar6;
              piVar6[4] = 0;
              *piVar6 = *(int *)(iVar1 + 8);
              if (*(int **)(iVar1 + 8) != DAT_11d85d30) {
                (*(int **)(iVar1 + 8))[1] = (int)piVar6;
              }
              *(int *)(iVar1 + 4) = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
                *(int *)(*(int *)(in_ECX + 4) + 4) = iVar1;
              }
              else {
                piVar2 = (int *)piVar6[1];
                if (piVar6 == (int *)piVar2[2]) {
                  piVar2[2] = iVar1;
                }
                else {
                  *piVar2 = iVar1;
                }
              }
              *(int **)(iVar1 + 8) = piVar6;
              piVar6[1] = iVar1;
              piVar6 = *(int **)(piVar8[1] + 8);
            }
            piVar6[4] = *(int *)(piVar8[1] + 0x10);
            *(undefined4 *)(piVar8[1] + 0x10) = 1;
            *(undefined4 *)(piVar6[2] + 0x10) = 1;
            puVar7 = (undefined4 *)piVar8[1];
            puVar9 = (undefined4 *)puVar7[2];
            puVar7[2] = *puVar9;
            if ((int *)*puVar9 != DAT_11d85d30) {
              ((int *)*puVar9)[1] = (int)puVar7;
            }
            puVar9[1] = puVar7[1];
            if (puVar7 == *(undefined4 **)(*(int *)(in_ECX + 4) + 4)) {
              *(undefined4 **)(*(int *)(in_ECX + 4) + 4) = puVar9;
              *puVar9 = puVar7;
            }
            else {
              piVar6 = (int *)puVar7[1];
              if (puVar7 == (undefined4 *)*piVar6) {
                *piVar6 = (int)puVar9;
                *puVar9 = puVar7;
              }
              else {
                piVar6[2] = (int)puVar9;
                *puVar9 = puVar7;
              }
            }
LAB_107743bc:
            puVar7[1] = puVar9;
            break;
          }
        }
        else {
          if (piVar6[4] == 0) {
            piVar6[4] = 1;
            *(undefined4 *)(piVar8[1] + 0x10) = 0;
            piVar6 = (int *)piVar8[1];
            iVar1 = *piVar6;
            *piVar6 = *(int *)(iVar1 + 8);
            if (*(int **)(iVar1 + 8) != DAT_11d85d30) {
              (*(int **)(iVar1 + 8))[1] = (int)piVar6;
            }
            *(int *)(iVar1 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int *)(*(int *)(in_ECX + 4) + 4) = iVar1;
            }
            else {
              piVar2 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar2[2]) {
                piVar2[2] = iVar1;
              }
              else {
                *piVar2 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar6;
            piVar6[1] = iVar1;
            piVar6 = *(int **)piVar8[1];
          }
          if ((*(int *)(piVar6[2] + 0x10) != 1) || (*(int *)(*piVar6 + 0x10) != 1)) {
            if (*(int *)(*piVar6 + 0x10) == 1) {
              *(undefined4 *)(piVar6[2] + 0x10) = 1;
              piVar2 = (int *)piVar6[2];
              piVar6[4] = 0;
              piVar6[2] = *piVar2;
              if ((int *)*piVar2 != DAT_11d85d30) {
                ((int *)*piVar2)[1] = (int)piVar6;
              }
              piVar2[1] = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
                *(int **)(*(int *)(in_ECX + 4) + 4) = piVar2;
              }
              else {
                piVar3 = (int *)piVar6[1];
                if (piVar6 == (int *)*piVar3) {
                  *piVar3 = (int)piVar2;
                }
                else {
                  piVar3[2] = (int)piVar2;
                }
              }
              *piVar2 = (int)piVar6;
              piVar6[1] = (int)piVar2;
              piVar6 = *(int **)piVar8[1];
            }
            piVar6[4] = *(int *)(piVar8[1] + 0x10);
            *(undefined4 *)(piVar8[1] + 0x10) = 1;
            *(undefined4 *)(*piVar6 + 0x10) = 1;
            puVar7 = (undefined4 *)piVar8[1];
            puVar9 = (undefined4 *)*puVar7;
            *puVar7 = puVar9[2];
            if ((int *)puVar9[2] != DAT_11d85d30) {
              ((int *)puVar9[2])[1] = (int)puVar7;
            }
            puVar9[1] = puVar7[1];
            if (puVar7 == *(undefined4 **)(*(int *)(in_ECX + 4) + 4)) {
              *(undefined4 **)(*(int *)(in_ECX + 4) + 4) = puVar9;
            }
            else {
              puVar4 = (undefined4 *)puVar7[1];
              if (puVar7 == (undefined4 *)puVar4[2]) {
                puVar4[2] = puVar9;
              }
              else {
                *puVar4 = puVar9;
              }
            }
            puVar9[2] = puVar7;
            goto LAB_107743bc;
          }
        }
        piVar6[4] = 0;
        piVar8 = (int *)piVar8[1];
      } while (piVar8 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    piVar8[4] = 1;
  }
  thunk_FUN_103254a0(local_4);
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
  *param_1 = param_2;
  return;
}


// ==== 107743f0 FUN_107743f0

void FUN_107743f0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_11d85d30) {
    do {
      FUN_107743f0(param_1[2]);
      piVar1 = (int *)*param_1;
      thunk_FUN_103254a0(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_11d85d30);
  }
  return;
}


