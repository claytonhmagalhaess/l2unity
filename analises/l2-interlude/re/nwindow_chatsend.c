// ==== 10137b70 FUN_10137b70 depth=0 from=raiz callees=FUN_10135a20@10135a20 FUN_10135980@10135980 CORE.DLL::appStrcpy@EXTERNAL:000001c3 ENGINE.DLL::FParser::SetString@EXTERNAL:0000005a CORE.DLL::appSprintf@EXTERNAL:000001ba CORE.DLL::appStrcat@EXTERNAL:000001d4
// strings: 102566f8=%s%s | 1025674c=%s %s | 

void __thiscall FUN_10137b70(int param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint uStack_3c;
  int local_2c [4];
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208df0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_1c = 1;
  if ((param_3 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    puVar1 = FParser::SetString((FParser *)(param_1 + 0x25c),param_3);
    iVar2 = FUN_10135a20(puVar1);
    local_2c[0] = iVar2;
    if (*param_3 == 0x24) {
      if (iVar2 == 0) {
        appSprintf(param_2,(ushort *)L"%s %s",&DAT_1024a75c);
      }
      else {
        appSprintf(param_2,(ushort *)L"%s%s",&DAT_1024a75c);
      }
    }
    else {
      appSprintf(param_2,(ushort *)&DAT_1022dde0,puVar1);
    }
    puVar1 = (ushort *)FUN_10135980();
    local_2c[1] = FUN_10135a20(puVar1);
    local_18 = 0;
    if ((iVar2 != 0) || (local_2c[1] != 0)) {
      local_1c = 0;
    }
    while (puVar1 != (ushort *)0x0) {
      uVar3 = local_18 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (local_2c[uVar3] == 0) {
        appStrcat(param_2,&DAT_1023d5d0);
        appStrcat(param_2,puVar1);
      }
      else {
        appStrcat(param_2,puVar1);
      }
      puVar1 = (ushort *)FUN_10135980();
      iVar2 = FUN_10135a20(puVar1);
      local_2c[uVar3] = iVar2;
      local_18 = local_18 + 1;
      if ((local_2c[0] != 0) || (local_2c[1] != 0)) {
        local_1c = 0;
      }
    }
    if (local_1c != 0) {
      appStrcpy(param_2,param_3);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10138860 FUN_10138860 depth=0 from=raiz callees=FUN_10136c30@10136c30 FUN_1004f780@1004f780 FUN_10136e80@10136e80 FUN_101384d0@101384d0 FUN_10136df0@10136df0 FUN_10136d50@10136d50 CORE.DLL::appStrcmp@EXTERNAL:0000014d FUN_10170650@10170650 FUN_1004f5c0@1004f5c0 FUN_10004ed0@10004ed0
// strings: 

void __thiscall FUN_10138860(int *param_1,undefined4 param_2,ushort *param_3)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uStack_38;
  undefined4 local_28;
  int local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10208f6b;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  if (param_3 != (ushort *)0x0) {
    iVar2 = FUN_10136d50(param_2,*param_1);
    *param_1 = *param_1 + iVar2;
    if ((param_1[1] == 0) && (iVar2 = FUN_10136c30(*param_1), iVar2 != 0)) {
      param_1[1] = 1;
      FUN_10170650(0x3c4,0xffb09b79);
      FUN_10170650(0x436,0xffb09b79);
    }
    while( true ) {
      local_18 = iVar5;
      if (param_1[0xb] <= iVar5) {
        FUN_10136e80();
        iVar5 = FUN_10004ed0(0x14);
        local_8._0_1_ = 1;
        if (iVar5 == 0) {
          local_28 = 0;
        }
        else {
          local_28 = FUN_1004f780(param_3);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_24 = param_1[8];
        FUN_101384d0(&local_28);
        ExceptionList = local_10;
        return;
      }
      puVar6 = param_3;
      puVar3 = (ushort *)FUN_1004f5c0(0);
      iVar2 = appStrcmp(puVar3,puVar6);
      if (iVar2 == 0) break;
      iVar5 = iVar5 + 1;
    }
    iVar2 = param_1[10] + iVar5 * 8;
    iVar4 = FUN_10136df0(*(undefined4 *)(iVar2 + 4));
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + iVar4;
    if ((param_1[1] == 0) &&
       (iVar5 = FUN_10136c30(*(undefined4 *)(param_1[10] + iVar5 * 8 + 4)), iVar5 != 0)) {
      param_1[1] = 1;
      FUN_10170650(0x3c4,0xffb09b79);
      FUN_10170650(0x436,0xffb09b79);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10136f10 FUN_10136f10 depth=0 from=raiz callees=
// strings: 

undefined4 __fastcall FUN_10136f10(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== 10137a90 FUN_10137a90 depth=0 from=raiz callees=CORE.DLL::appStrcpy@EXTERNAL:000001c3
// strings: 

void __thiscall FUN_10137a90(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_2 != (ushort *)0x0) && (*param_2 != 0)) {
    puVar2 = param_2;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
    if ((uint)((int)puVar2 - (int)(param_2 + 1) >> 1) < 0x18) {
      puVar2 = (ushort *)(param_1 + 0x1cc);
      appStrcpy(puVar2,param_2);
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (uVar1 != 0);
      iVar3 = (int)puVar2 - (param_1 + 0x1ce) >> 1;
      *(undefined2 *)(param_1 + 0x1cc + iVar3 * 2) = 0x20;
      *(undefined2 *)(param_1 + 0x1ce + iVar3 * 2) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101394d0 FUN_101394d0 depth=0 from=raiz callees=FUN_1004f780@1004f780 __wcsicmp@101c331a FUN_1000a240@1000a240 FUN_100d9a30@100d9a30 FUN_1004f5c0@1004f5c0 FUN_10004ed0@10004ed0
// strings: 

void __thiscall FUN_101394d0(int param_1,wchar_t *param_2)

{
  undefined4 *puVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *_Str1;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uStack_40;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209166;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  local_8 = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    pwVar3 = param_2;
    do {
      wVar2 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar2 != L'\0');
    if ((uint)((int)pwVar3 - (int)(param_2 + 1) >> 1) < 0x18) {
      if (*param_2 == L'-') {
        return;
      }
      ExceptionList = &local_10;
      for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x210); iVar6 = iVar6 + 1) {
        pwVar3 = param_2;
        _Str1 = (wchar_t *)FUN_1004f5c0(0);
        iVar4 = __wcsicmp(_Str1,pwVar3);
        if (iVar4 == 0) {
          uVar5 = *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x20c));
          for (; iVar6 < *(int *)(param_1 + 0x210) + -1; iVar6 = iVar6 + 1) {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 0x20c) + iVar6 * 4);
            *puVar1 = puVar1[1];
          }
          *(undefined4 *)(*(int *)(param_1 + 0x20c) + iVar6 * 4) = uVar5;
          *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x210) + -1;
          ExceptionList = local_10;
          return;
        }
      }
      iVar6 = 0;
      local_18 = 0;
      if (*(int *)(param_1 + 0x210) < 0x40) {
        iVar6 = FUN_10004ed0(0x14);
        local_8._0_1_ = 2;
        if (iVar6 == 0) {
          local_18 = 0;
        }
        else {
          local_18 = FUN_1004f780(param_2);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_100d9a30(&local_18);
      }
      else {
        local_18 = **(int **)(param_1 + 0x20c);
        if (local_18 != 0) {
          FUN_1000a240(1);
          local_18 = 0;
        }
        for (; iVar6 < *(int *)(param_1 + 0x210) + -1; iVar6 = iVar6 + 1) {
          puVar1 = (undefined4 *)(*(int *)(param_1 + 0x20c) + iVar6 * 4);
          *puVar1 = puVar1[1];
        }
        local_18 = FUN_10004ed0(0x14);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_18 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1004f780(param_2);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x20c) + iVar6 * 4) = uVar5;
      }
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x210) + -1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10141990 FUN_10141990 depth=0 from=raiz callees=CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:000001b9 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:000001b7 FUN_101392c0@101392c0 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:000001b8
// strings: 

undefined4 __thiscall FUN_10141990(int param_1,void *param_2,void *param_3,void *param_4)

{
  int *piVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020a069;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x50) + 0x60);
  if (*(int *)GIsOnlyL2Console_exref == 0) {
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_2c,param_2);
    L2ParamStack::PushBack(local_2c,param_3);
    L2ParamStack::PushBack(local_2c,param_4);
    (**(code **)(*piVar1 + 0x2b0))(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
  }
  else {
    local_14 = (undefined1 *)&uStack_3c;
    FUN_101392c0(param_3,0xffdcdcdc,0,0);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10135a20 FUN_10135a20 depth=1 from=FUN_10137b70 callees=FUN_1014dd00@1014dd00 FUN_1014ddd0@1014ddd0 CORE.DLL::appStrcpy@EXTERNAL:000001c3 FUN_101458e0@101458e0 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::appStricmp@EXTERNAL:000000f1 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10142840@10142840 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::appStrlen@EXTERNAL:000001b4 __security_check_cookie@101c16c2 CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_10135a00@10135a00
// strings: 1024a72c=%target | 1024a720=%self | 

void FUN_10135a20(ushort *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  FString *pFVar5;
  undefined4 *puVar6;
  uint uStack_220;
  undefined1 local_210 [192];
  FString local_150 [12];
  FString local_144 [12];
  FString local_138 [12];
  FString local_12c [12];
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [12];
  FString local_fc [20];
  int local_e8;
  FString local_e4 [12];
  undefined1 *local_d8;
  void *local_d4;
  undefined1 *puStack_d0;
  int local_cc;
  undefined4 local_c8 [2];
  ushort local_c0 [92];
  uint local_8;
  
  puStack_d0 = &LAB_10208894;
  local_d4 = ExceptionList;
  uStack_220 = DAT_103554c4 ^ (uint)local_c8;
  local_d8 = (undefined1 *)&uStack_220;
  ExceptionList = &local_d4;
  local_cc = 0;
  local_8 = uStack_220;
  if (param_1 == (ushort *)0x0) goto LAB_10135af7;
  local_e8 = 0;
  local_d8 = (undefined1 *)&uStack_220;
  while ((iVar4 = local_e8, local_e8 < 0xb &&
         (iVar1 = appStricmp((ushort *)(&PTR_u__target_10350d90)[local_e8],param_1), iVar1 != 0))) {
    local_e8 = iVar4 + 1;
  }
  FUN_10135a00();
  FString::FString(local_e4);
  local_cc._0_1_ = 1;
  switch(iVar4) {
  case 0:
    iVar4 = FUN_1014ddd0();
    goto LAB_10135acf;
  case 1:
    iVar4 = FUN_1014dd00();
LAB_10135acf:
    if (iVar4 == 0) goto switchD_10135abd_default;
    puVar3 = (ushort *)(iVar4 + 0x1c);
LAB_10135ada:
    appStrcpy(param_1,puVar3);
    goto LAB_10135ae5;
  case 2:
    puVar2 = (undefined4 *)FUN_101458e0(local_210);
    puVar6 = local_c8;
    for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar4 = appStrlen(local_c0);
    if (iVar4 == 0) goto switchD_10135abd_default;
    puVar3 = local_c0;
    goto LAB_10135ada;
  case 3:
    pFVar5 = (FString *)FUN_10142840(local_138,0);
    local_cc._0_1_ = 2;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_138;
    break;
  case 4:
    pFVar5 = (FString *)FUN_10142840(local_144,1);
    local_cc._0_1_ = 3;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_144;
    break;
  case 5:
    pFVar5 = (FString *)FUN_10142840(local_fc,2);
    local_cc._0_1_ = 4;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_fc;
    break;
  case 6:
    pFVar5 = (FString *)FUN_10142840(local_120,3);
    local_cc._0_1_ = 5;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_120;
    break;
  case 7:
    pFVar5 = (FString *)FUN_10142840(local_150,4);
    local_cc._0_1_ = 6;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_150;
    break;
  case 8:
    pFVar5 = (FString *)FUN_10142840(local_108,5);
    local_cc._0_1_ = 7;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_108;
    break;
  case 9:
    pFVar5 = (FString *)FUN_10142840(local_114,6);
    local_cc._0_1_ = 8;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_114;
    break;
  case 10:
    pFVar5 = (FString *)FUN_10142840(local_12c,7);
    local_cc._0_1_ = 9;
    FString::operator=(local_e4,pFVar5);
    pFVar5 = local_12c;
    break;
  default:
    goto switchD_10135abd_default;
  }
  local_cc._0_1_ = 1;
  FString::~FString(pFVar5);
  puVar3 = FString::operator*(local_e4);
  appStrcpy(param_1,puVar3);
  iVar4 = FString::operator_int(local_e4);
  if (iVar4 == 0) {
switchD_10135abd_default:
    local_cc = (uint)local_cc._1_3_ << 8;
    FString::~FString(local_e4);
  }
  else {
LAB_10135ae5:
    local_cc = (uint)local_cc._1_3_ << 8;
    FString::~FString(local_e4);
  }
LAB_10135af7:
  ExceptionList = local_d4;
  __security_check_cookie(local_8 ^ (uint)local_c8);
  return;
}


// ==== 10135980 FUN_10135980 depth=1 from=FUN_10137b70 callees=ENGINE.DLL::FParser::GetNextToken@EXTERNAL:00000059
// strings: 

void __fastcall FUN_10135980(FParser *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FParser::GetNextToken(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10136c30 FUN_10136c30 depth=1 from=FUN_10138860 callees=
// strings: 

bool __thiscall FUN_10136c30(int *param_1,int param_2)

{
  return *param_1 < param_2;
}


// ==== 1004f780 FUN_1004f780 depth=1 from=FUN_10138860 callees=FUN_1004f610@1004f610
// strings: 

undefined4 * __thiscall FUN_1004f780(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1004f610(param_2,0);
  return param_1;
}


// ==== 10136e80 FUN_10136e80 depth=1 from=FUN_10138860 callees=
// strings: 

void __fastcall FUN_10136e80(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ==== 101384d0 FUN_101384d0 depth=1 from=FUN_10138860 callees=CORE.DLL::FArray::Add@EXTERNAL:00000185
// strings: 

void __thiscall FUN_101384d0(FArray *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FArray::Add(param_1,1,8);
  iVar1 = *(int *)param_1;
  *(undefined4 *)(iVar1 + iVar2 * 8) = *param_2;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = param_2[1];
  return;
}


// ==== 10136df0 FUN_10136df0 depth=1 from=FUN_10138860 callees=FUN_101c19e0@101c19e0
// strings: 

void FUN_10136df0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208b50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101c19e0();
  ExceptionList = local_10;
  return;
}


// ==== 10136d50 FUN_10136d50 depth=1 from=FUN_10138860 callees=FUN_101c19e0@101c19e0
// strings: 

void FUN_10136d50(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101c19e0();
  ExceptionList = local_10;
  return;
}


// ==== 10170650 FUN_10170650 depth=1 from=FUN_10138860 callees=FUN_1000ef40@1000ef40 FUN_1016e1b0@1016e1b0 FUN_101481d0@101481d0 FUN_1013e510@1013e510 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10147e60@10147e60 FUN_1000dd30@1000dd30 FUN_1000e440@1000e440
// strings: 

void FUN_10170650(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1021213b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = param_1 * 0x5c;
  if ((*(int *)(GL2GameData_exref + iVar2 + 0x240e8) != 0) && (param_1 < 3000)) {
    if (*(int *)(GL2GameData_exref + iVar2 + 0x240f8) == 4) {
      FUN_1000ef40(DAT_103554c4 ^ (uint)&stack0xffffff34);
      local_4 = 0;
      local_c0[0] = 0x1f;
      local_b4 = 1;
      local_b0 = 0;
      local_b8 = 0;
      FUN_1000dd30(param_1);
      FUN_1016e1b0(local_c0);
      local_4 = 0xffffffff;
      FUN_1000e440();
    }
    else {
      FUN_1013e510(param_1,*(undefined4 *)(GL2GameData_exref + iVar2 + 0x240fc));
      puVar1 = FString::operator*((FString *)(GL2GameData_exref + iVar2 + 0x24100));
      FUN_10147e60(puVar1);
      puVar1 = FString::operator*((FString *)(GL2GameData_exref + iVar2 + 0x2410c));
      FUN_101481d0(puVar1);
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 1004f5c0 FUN_1004f5c0 depth=1 from=FUN_10138860 callees=
// strings: 

int __thiscall FUN_1004f5c0(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    return 0;
  }
  return *(int *)(param_1 + 4) + param_2 * 2;
}


// ==== 10004ed0 FUN_10004ed0 depth=1 from=FUN_10138860 callees=
// strings: 

void FUN_10004ed0(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_1022f8a0);
  return;
}


// ==== 101c331a __wcsicmp depth=1 from=FUN_101394d0 callees=FUN_101c2369@101c2369 __wcsicmp_l@101c320b FUN_101c8c22@101c8c22
// strings: 

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_103b3d3c == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      puVar3 = (undefined4 *)FUN_101c8c22();
      *puVar3 = 0x16;
      FUN_101c2369(0,0,0,0,0);
      iVar4 = 0x7fffffff;
    }
    else {
      do {
        wVar1 = *_Str1;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          wVar1 = wVar1 + L' ';
        }
        wVar2 = *_Str2;
        if ((0x40 < (ushort)wVar2) && ((ushort)wVar2 < 0x5b)) {
          wVar2 = wVar2 + L' ';
        }
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
      } while ((wVar1 != L'\0') && (wVar1 == wVar2));
      iVar4 = (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
    }
  }
  else {
    iVar4 = __wcsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar4;
}


// ==== 1000a240 FUN_1000a240 depth=1 from=FUN_101394d0 callees=FUN_1004f7b0@1004f7b0
// strings: 

undefined4 __thiscall FUN_1000a240(undefined4 param_1,byte param_2)

{
  FUN_1004f7b0();
  if ((param_2 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  }
  return param_1;
}


// ==== 100d9a30 FUN_100d9a30 depth=1 from=FUN_101394d0 callees=CORE.DLL::FArray::Add@EXTERNAL:00000185
// strings: 

void __thiscall FUN_100d9a30(FArray *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_1,1,4);
  *(undefined4 *)(*(int *)param_1 + iVar1 * 4) = *param_2;
  return;
}


// ==== 101392c0 FUN_101392c0 depth=1 from=FUN_10141990 callees=FUN_1003fff0@1003fff0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10005c30@10005c30 FUN_10040230@10040230 ENGINE.DLL::FColor::FColor@EXTERNAL:00000086 FUN_10040090@10040090 FUN_100d1790@100d1790 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_1003f970@1003f970
// strings: 102418a0=Type | 1027c6e8=ColorR | 1027c6d8=ColorG | 1027c6c8=ColorB | 1027c828=SysType | 

void FUN_101392c0(ushort *param_1,ulong param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [20];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209127;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FColor::FColor((FColor *)&param_2,param_2);
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_38,(ushort *)L"Type");
  iVar1 = param_3;
  local_8._0_1_ = 2;
  FUN_10040090(local_38,param_3);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  FString::FString(local_44,param_1);
  local_8._0_1_ = 3;
  FString::FString(local_38,(ushort *)&DAT_1027c6f8);
  local_8._0_1_ = 4;
  FUN_10040230(local_38,local_44);
  local_8._0_1_ = 3;
  FString::~FString(local_38);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"ColorR");
  local_8._0_1_ = 5;
  FUN_10040090(local_44,param_2 >> 0x10 & 0xff);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"ColorG");
  local_8._0_1_ = 6;
  FUN_10040090(local_44,param_2 >> 8 & 0xff);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  FString::FString(local_44,(ushort *)L"ColorB");
  local_8._0_1_ = 7;
  FUN_10040090(local_44,param_2 & 0xff);
  local_8._0_1_ = 1;
  FString::~FString(local_44);
  if (iVar1 == 5) {
    FString::FString(local_44,(ushort *)L"SysType");
    local_8._0_1_ = 8;
    FUN_10040090(local_44,param_4);
    local_8._0_1_ = 1;
    FString::~FString(local_44);
  }
  puVar3 = local_2c;
  uVar2 = 0x21c;
  FUN_10005c30(0x21c,puVar3);
  FUN_100d1790(uVar2,puVar3);
  if (*(int *)GL2TextCapture_exref == 2) {
    (**(code **)(*local_18 + 0x1fc))(param_1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


