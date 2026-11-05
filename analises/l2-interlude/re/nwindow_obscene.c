// ==== 1014cff0 FUN_1014cff0 depth=0 from=raiz callees=CORE.DLL::FString::Left@EXTERNAL:000001c6 CORE.DLL::appSprintf@EXTERNAL:000001ba CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::Right@EXTERNAL:000001c4 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::appStrlen@EXTERNAL:000001b4 CORE.DLL::FString::Len@EXTERNAL:000001a8 CORE.DLL::FString::operator+@EXTERNAL:000001c1 FUN_10145800@10145800 CORE.DLL::FString::operator=@EXTERNAL:000001a3 FUN_100133a0@100133a0 CORE.DLL::appStrstr@EXTERNAL:0000014e __security_check_cookie@101c16c2 CORE.DLL::FString::operator+=@EXTERNAL:000001c5 CORE.DLL::FString::operator+@EXTERNAL:00000119
// strings: 10270cb4=%s%s%s | 

void FUN_1014cff0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  FString *pFVar5;
  FString *this;
  int iVar6;
  undefined4 local_9c;
  int local_98 [2];
  FString local_90 [4];
  FString local_8c [8];
  FString *local_84;
  FString *apFStack_80 [2];
  FString aFStack_78 [4];
  FString local_74 [8];
  FString aFStack_6c [8];
  undefined1 auStack_64 [8];
  FString aFStack_5c [4];
  FString aFStack_58 [8];
  FString aFStack_50 [8];
  ushort local_48 [8];
  ushort local_38 [2];
  FString aFStack_34 [4];
  undefined1 auStack_30 [32];
  uint local_10;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_1020bb2e;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&stack0xffffff58;
  ExceptionList = &local_c;
  local_9c = 0;
  FString::FString(local_8c);
  local_4 = 0;
  FString::FString((FString *)&stack0xffffff58);
  local_4._0_1_ = 1;
  if (param_1 != (ushort *)0x0) {
    FUN_10145800(param_1);
    iVar6 = 0;
    iVar2 = appStrlen(param_1);
    if (0 < iVar2) {
      do {
        uVar1 = param_1[iVar6];
        if ((ushort)(uVar1 - 0x41) < 0x1a) {
          uVar1 = uVar1 + 0x20;
        }
        FUN_100133a0(local_38,&DAT_10235064,uVar1);
        FString::operator+=((FString *)&stack0xffffff58,local_38);
        iVar6 = iVar6 + 1;
        iVar2 = appStrlen(param_1);
      } while (iVar6 < iVar2);
    }
    local_98[0] = 0;
    if (0 < *(int *)(GL2GameData_exref + 0x3d20)) {
      do {
        iVar6 = local_98[0];
        iVar2 = *(int *)(*(int *)(GL2GameData_exref + 0x3d1c) + local_98[0] * 4);
        if (iVar2 != 0) {
          this = (FString *)(iVar2 + 4);
          puVar3 = FString::operator*(this);
          if (puVar3 != (ushort *)0x0) {
            puVar3 = FString::operator*(this);
            puVar4 = FString::operator*((FString *)&stack0xffffff58);
            puVar3 = appStrstr(puVar4,puVar3);
            if (puVar3 != (ushort *)0x0) {
              local_9c = 1;
              do {
                FString::operator=(local_74,param_1);
                FString::operator*(local_90);
                puVar3 = FString::operator*(this);
                appStrlen(puVar3);
                FString::Len(local_74);
                apFStack_80[0] = (FString *)FString::Right(local_74,(int)aFStack_50);
                apFStack_80[0] = (FString *)FString::Left(aFStack_78,(int)auStack_30);
                FString::operator*(local_84);
                FString::operator*((FString *)(GL2GameData_exref + 0x6cb8c));
                FString::operator*(apFStack_80[0]);
                appSprintf(param_1,(ushort *)L"%s%s%s");
                FString::~FString(aFStack_34);
                FString::~FString(aFStack_58);
                FString::Left((FString *)local_98,(int)auStack_64);
                FString::Len((FString *)&local_9c);
                FString::Right((FString *)&local_9c,(int)local_74);
                FString::operator*((FString *)(GL2GameData_exref + 0x6cb8c));
                pFVar5 = (FString *)FString::operator+(aFStack_6c,local_48);
                pFVar5 = (FString *)FString::operator+(pFVar5,aFStack_58);
                local_4._0_1_ = 7;
                FString::operator=((FString *)&stack0xffffff58,pFVar5);
                local_4._0_1_ = 6;
                FString::~FString(aFStack_5c);
                local_4._0_1_ = 5;
                FString::~FString(aFStack_50);
                FString::operator*((FString *)&stack0xffffff58);
                local_4._0_1_ = 4;
                FString::~FString((FString *)apFStack_80);
                local_4._0_1_ = 1;
                FString::~FString(local_74);
                puVar3 = FString::operator*(this);
                puVar4 = FString::operator*((FString *)&stack0xffffff58);
                puVar3 = appStrstr(puVar4,puVar3);
                iVar6 = local_98[0];
              } while (puVar3 != (ushort *)0x0);
            }
          }
        }
        local_98[0] = iVar6 + 1;
      } while (local_98[0] < *(int *)(GL2GameData_exref + 0x3d20));
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)&stack0xffffff58);
  local_4 = 0xffffffff;
  FString::~FString(local_8c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&stack0xffffff58);
  return;
}


// ==== 1014f040 FUN_1014f040 depth=0 from=raiz callees=FUN_1014cff0@1014cff0 FUN_100ba5b0@100ba5b0
// strings: 

void FUN_1014f040(undefined4 param_1,int param_2,int param_3)

{
  FUN_1014cff0(param_3);
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_100ba5b0(param_1,param_2,param_3);
  }
  return;
}


// ==== 10163d90 FUN_10163d90 depth=0 from=raiz callees=FUN_101394d0@101394d0 FUN_1014cff0@1014cff0 CORE.DLL::L2ParamStack::Top@EXTERNAL:00000149 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_1013df30@1013df30
// strings: 

undefined4 FUN_10163d90(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  puVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  FUN_1014cff0(pvVar4);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  if (pvVar2 != (void *)0x1) {
    if (pvVar2 == (void *)0x3) {
      uVar5 = 0xff00ff00;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x4) {
      uVar5 = 0xff7d77ff;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x2) {
      FUN_1013df30(pvVar1,puVar3,pvVar4,0xffff00ff,2);
      FUN_101394d0(puVar3);
      return 1;
    }
    if (pvVar2 == (void *)0x8) {
      uVar5 = 0xffeaa5f5;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x9) {
      uVar5 = 0xff77ff99;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x6) {
      uVar5 = 0xff80ffff;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0x7) {
      uVar5 = 0xff80ffff;
      goto LAB_10163eeb;
    }
    if (pvVar2 == (void *)0xa) {
      uVar5 = 0xff80ffff;
      puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x6b83c));
      goto LAB_10163eeb;
    }
    if (pvVar2 != (void *)0xb) {
      if (pvVar2 != (void *)0xe) {
        if (pvVar2 == (void *)0xf) {
          uVar5 = 0xffff9695;
          goto LAB_10163eeb;
        }
        if (pvVar2 == (void *)0x10) {
          uVar5 = 0xfffff8b2;
          goto LAB_10163eeb;
        }
        if (pvVar2 == (void *)0x12) {
          uVar5 = 0xff00ffff;
          puVar3 = (ushort *)0x0;
          goto LAB_10163eeb;
        }
        if (pvVar2 == (void *)0x11) {
          uVar5 = 0xff408cff;
          goto LAB_10163eeb;
        }
        pvVar2 = (void *)0x0;
      }
      uVar5 = 0xffdcdcdc;
      goto LAB_10163eeb;
    }
  }
  pvVar2 = (void *)0x1;
  uVar5 = 0xffff7200;
LAB_10163eeb:
  FUN_1013df30(pvVar1,puVar3,pvVar4,uVar5,pvVar2);
  return 1;
}


// ==== 1016e320 FUN_1016e320 depth=0 from=raiz callees=FUN_1014cff0@1014cff0 FUN_100d10a0@100d10a0 __wcsicmp@101c331a ENGINE.DLL::FL2GameData::GetNpcName@EXTERNAL:00000075
// strings: 

undefined4 FUN_1016e320(wchar_t *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  wchar_t *_Str2;
  undefined4 uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10211b88;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  iVar5 = 0;
  if (((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) ||
     (iVar3 = FUN_1014cff0(param_1), iVar3 != 0)) {
LAB_1016e3f2:
    uVar4 = 0;
  }
  else {
    piVar1 = *(int **)(GL2GameData_exref + 0x1838);
    local_4 = 0;
    if (0 < piVar1[1]) {
      do {
        _Str2 = (wchar_t *)
                FL2GameData::GetNpcName
                          ((FL2GameData *)GL2GameData_exref,*(int *)(*piVar1 + 4 + iVar5 * 0xc));
        if ((_Str2 != (wchar_t *)0x0) && (iVar3 = __wcsicmp(param_1,_Str2), iVar3 == 0)) {
          local_4 = 0xffffffff;
          FUN_100d10a0(uVar2);
          goto LAB_1016e3f2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar1[1]);
    }
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}


