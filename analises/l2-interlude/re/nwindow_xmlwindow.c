// ==== 100f4020 FUN_100f4020 depth=0 from=raiz callees=FUN_100f1350@100f1350 FUN_100d9a30@100d9a30 FUN_100cd670@100cd670 FUN_100cd3e0@100cd3e0 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100cd980@100cd980 FUN_100c8240@100c8240 FUN_100e4b60@100e4b60 FUN_100cda90@100cda90 FUN_100efd60@100efd60 FUN_10005c30@10005c30 FUN_100cec80@100cec80 FUN_100d01f0@100d01f0 CORE.DLL::FString::operator==@EXTERNAL:000001c7 FUN_100f2cb0@100f2cb0 CORE.DLL::appFailAssert@EXTERNAL:0000018a CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100ce7f0@100ce7f0 FUN_100c80b0@100c80b0 FUN_100cd4b0@100cd4b0 FUN_100cd860@100cd860 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100c97c0@100c97c0 FUN_10004ed0@10004ed0
// strings: 102651d8=XMLUIData(%s):default property processing failed!! | 1026b8c4=parent | 10268648=backTex | 1026b8b4=script | 10265d00=state | 1026b8a8=frame | 1026b890=resizeframe | 1026b87c=iconable | 1026b86c=hidden | 1026b84c=alwaysFullAlpha | 1026b838=stuckable | 1026b82c=title | 1026b810=savePosition | 1026b7fc=saveSize | 1026b7e8=draggable | 1026b7cc=hookKeyInput | 1026b7a0=WorkingConfiguration | 1026b790=Drawer | 1026b778=ownerWindow | 1024149c=undefined | 1026b720=XMLUIData(%s):ownerWindow is not defined!! | 1026aee0=direction | 1026b6c8=XMLUIData(%s):direction is not defined!! | 1026b6b4=offset | 1026b694=directionFixed | 1026b678=ShowHideAnim | 1026b664=ShowAnim | 1026b608=XMLUIData(%s):ShowAnim node is not present!! | 1026b5a8=XMLUIData(%s):Failed to process ShowAnim node!! | 1026b594=HideAnim | 1026b538=XMLUIData(%s):HideAnim node is not present!! | 1026b4d8=XMLUIData(%s):Failed to process HideAnim node!! | 1026b4cc=Frame | 1026b4c0=size | 1026aee0=direction | 1026b4a8=exitbutton | 1026b48c=expandbutton | 1026b46c=expandOrgHeight | 1026b44c=expandExpHeight | 1026b438=Iconable | 10246314=IconName | 1024149c=undefined | 1026b6c8=XMLUIData(%s):direction is not defined!! | 1026b420=TooltipIdx | 1026b408=ResizeFrame | 1025f5c0=width | 1025f5b0=height | 1026aee0=direction | 1026b3e8=maxIncrease | 10265158=XMLUIData(%s):failed to get child window elements!! | 10265138=DefaultProperty | 10265124=#comment | 1026b790=Drawer | 1026b3d8=Anchor | 1026b4cc=Frame | 1026b408=ResizeFrame | 1026b438=Iconable | 1026b678=ShowHideAnim | 1026b390=.\XML\XMLWindowData.cpp | 102650fc=m_ChildList | 102650a0=XMLUIData(%s):failed to process child window | 

undefined4 __fastcall FUN_100f4020(int *param_1)

{
  int iVar1;
  FString *pFVar2;
  int *piVar3;
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
    pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
    FString::operator*(pFVar2);
    pwStack_78 = L"XMLUIData(%s):default property processing failed!!";
  }
  else {
    pwStack_78 = (wchar_t *)0x100f40df;
    FString::FString(local_48,(ushort *)L"parent");
    local_8._0_1_ = 3;
    FUN_100cd860();
    local_8._0_1_ = 3;
    (**(code **)(*param_1 + 0x78))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"backTex");
    local_8._0_1_ = 5;
    FUN_100cd860();
    local_8._0_1_ = 5;
    (**(code **)(*param_1 + 0x7c))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"script");
    local_8._0_1_ = 7;
    FUN_100cd860();
    local_8._0_1_ = 7;
    (**(code **)(*param_1 + 0x80))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"state");
    local_8._0_1_ = 9;
    FUN_100cd860();
    local_8._0_1_ = 9;
    (**(code **)(*param_1 + 0x84))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"frame");
    local_8._0_1_ = 0xb;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x88))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"resizeframe");
    local_8._0_1_ = 0xc;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xa8))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"iconable");
    local_8._0_1_ = 0xd;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x8c))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"hidden");
    local_8._0_1_ = 0xe;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x90))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"alwaysFullAlpha");
    local_8._0_1_ = 0xf;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x94))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"stuckable");
    local_8._0_1_ = 0x10;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0x98))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"title");
    local_8._0_1_ = 0x11;
    iVar1 = *param_1;
    FUN_100cd980();
    (**(code **)(iVar1 + 0x9c))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"savePosition");
    local_8._0_1_ = 0x12;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xa0))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"saveSize");
    local_8._0_1_ = 0x13;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xa4))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"draggable");
    local_8._0_1_ = 0x14;
    iVar1 = *param_1;
    FUN_100cda90();
    (**(code **)(iVar1 + 0xac))();
    local_8._0_1_ = 1;
    FString::~FString(local_48);
    FString::FString(local_48,(ushort *)L"hookKeyInput");
    local_8._0_1_ = 0x15;
    iVar1 = FUN_100cda90();
    param_1[0x38] = iVar1;
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
          param_1[0x3b] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"direction");
          local_8._0_1_ = 0x23;
          iVar1 = FUN_100ce7f0();
          param_1[0x3c] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x3c] == 0) {
            param_1[0x3c] = 3;
          }
          FString::FString(local_48,(ushort *)L"exitbutton");
          local_8._0_1_ = 0x24;
          iVar1 = FUN_100cda90();
          param_1[0x36] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"expandbutton");
          local_8._0_1_ = 0x25;
          iVar1 = FUN_100cda90();
          param_1[0x46] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x46] == -1) {
            param_1[0x46] = 0;
          }
          FString::FString(local_48,(ushort *)L"expandOrgHeight");
          local_8._0_1_ = 0x26;
          iVar1 = FUN_100cd980();
          param_1[0x47] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x47] == -9999) {
            param_1[0x47] = 0;
          }
          FString::FString(local_48,(ushort *)L"expandExpHeight");
          local_8._0_1_ = 0x27;
          iVar1 = FUN_100cd980();
          param_1[0x48] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x48] == -9999) {
            param_1[0x48] = 0;
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
          FString::operator=((FString *)(param_1 + 0x42),pFVar2);
          local_8._0_1_ = 0x29;
          FString::~FString(local_60);
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          iVar1 = FString::operator==((FString *)(param_1 + 0x42),(ushort *)L"undefined");
          if (iVar1 != 0) {
            pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
            FString::operator*(pFVar2);
            pwStack_78 = L"XMLUIData(%s):direction is not defined!!";
            goto LAB_100f409c;
          }
          FString::FString(local_48,(ushort *)L"TooltipIdx");
          local_8._0_1_ = 0x2b;
          iVar1 = FUN_100cd980();
          param_1[0x45] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x45] == -9999) goto LAB_100f45b2;
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
          param_1[0x3e] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)&DAT_1026b400);
          local_8._0_1_ = 0x2e;
          iVar1 = FUN_100cd980();
          param_1[0x3f] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"width");
          local_8._0_1_ = 0x2f;
          iVar1 = FUN_100cd980();
          param_1[0x40] = (int)(float)iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"height");
          local_8._0_1_ = 0x30;
          iVar1 = FUN_100cd980();
          param_1[0x41] = (int)(float)iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          FString::FString(local_48,(ushort *)L"direction");
          local_8._0_1_ = 0x31;
          iVar1 = FUN_100ce7f0();
          param_1[0x3d] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x3d] == 0) {
            param_1[0x3d] = 2;
          }
          FString::FString(local_48,(ushort *)L"maxIncrease");
          local_8._0_1_ = 0x32;
          iVar1 = FUN_100cd980();
          param_1[0x3a] = iVar1;
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
                if (param_1[0x55] == 0) {
                  local_2c = (undefined1 *)FUN_10004ed0();
                  local_8._0_1_ = 0x37;
                  if (local_2c == (undefined1 *)0x0) {
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = FUN_100e4b60();
                  }
                  local_8._0_1_ = 0x35;
                  param_1[0x55] = iVar1;
                  if (iVar1 == 0) {
                    appFailAssert("m_ChildList",".\\XML\\XMLWindowData.cpp",0xea);
                  }
                }
                FUN_100d9a30();
                (**(code **)(*piVar3 + 0x38))();
                pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
                local_2c = &stack0xffffff28;
                FString::FString((FString *)&stack0xffffff28,pFVar2);
                local_8._0_1_ = 0x35;
                iVar1 = (**(code **)(*piVar3 + 4))(local_30);
                if (iVar1 == 0) {
                  FString::operator*(local_48);
                  pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
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
        pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
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
        pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
        FString::operator*(pFVar2);
        pwStack_78 = L"XMLUIData(%s):ShowAnim node is not present!!";
      }
      else {
        iVar1 = FUN_100f2cb0();
        if (iVar1 == 0) {
          pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
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
            pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
            FString::operator*(pFVar2);
            pwStack_78 = L"XMLUIData(%s):HideAnim node is not present!!";
          }
          else {
            iVar1 = FUN_100f2cb0();
            if (iVar1 != 0) goto LAB_100f47c4;
            pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
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
      FString::operator=((FString *)(param_1 + 0x4c),pFVar2);
      local_8._0_1_ = 0x19;
      FString::~FString(local_60);
      local_8._0_1_ = 1;
      FString::~FString(local_48);
      iVar1 = FString::operator==((FString *)(param_1 + 0x4c),(ushort *)L"undefined");
      if (iVar1 == 0) {
        FString::FString(local_48,(ushort *)L"direction");
        local_8._0_1_ = 0x1b;
        iVar1 = FUN_100ce7f0();
        param_1[0x49] = iVar1;
        local_8._0_1_ = 1;
        FString::~FString(local_48);
        if (param_1[0x49] != 0) {
          FString::FString(local_48,(ushort *)L"offset");
          local_8._0_1_ = 0x1c;
          iVar1 = FUN_100cd980();
          param_1[0x4a] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x4a] == -9999) {
            param_1[0x4a] = 0;
          }
          FString::FString(local_48,(ushort *)L"directionFixed");
          local_8._0_1_ = 0x1d;
          iVar1 = FUN_100cda90();
          param_1[0x4b] = iVar1;
          local_8._0_1_ = 1;
          FString::~FString(local_48);
          if (param_1[0x4b] == -1) {
            param_1[0x4b] = 0;
          }
          goto LAB_100f4657;
        }
LAB_100f45b2:
        pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
        FString::operator*(pFVar2);
        pwStack_78 = L"XMLUIData(%s):direction is not defined!!";
      }
      else {
        pFVar2 = (FString *)(**(code **)(*param_1 + 0x44))();
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


// ==== 100f35b0 FUN_100f35b0 depth=0 from=raiz callees=FUN_10141490@10141490 FUN_100205d0@100205d0 FUN_1001e050@1001e050 FUN_10057c40@10057c40 FUN_1001e110@1001e110 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10057d60@10057d60 FUN_10057b20@10057b20 CORE.DLL::FString::operator!=@EXTERNAL:000001aa CORE.DLL::FString::FString@EXTERNAL:0000019e CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100f2de0@100f2de0 CORE.DLL::UObject::GetTransientPackage@EXTERNAL:0000019b CORE.DLL::FName::FName@EXTERNAL:0000019c FUN_1005c050@1005c050 FUN_10005c30@10005c30 FUN_100ca430@100ca430 FUN_100f0800@100f0800 FUN_10023870@10023870 FUN_100577d0@100577d0 FUN_100d01f0@100d01f0 FUN_10057cd0@10057cd0 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 FUN_10057bb0@10057bb0
// strings: 1026b2f0=XMLWindowData(%s):failed to create default property!! | 1026b1f0=XMLWindowData(%s):ChildList contains NULL(%s)!! | 1026b280=XMLWindowData(%s):failed to create child window(%s)!! | 1024149c=undefined | 1024149c=undefined | 

undefined4 __thiscall FUN_100f35b0(FString *param_1,undefined4 param_2,FString *param_3)

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
  pFStack_70 = param_1;
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
    (**(code **)(*(int *)param_1 + 0xb8))();
    local_8._0_1_ = 1;
    local_24 = &stack0xffffff7c;
    (**(code **)(*(int *)param_1 + 0xb4))(&stack0xffffff7c);
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = (int *)FUN_100205d0();
  }
  piVar5 = local_18;
  *(int **)(param_1 + 0x7c) = local_18;
  pFStack_6c = (FString *)0x100f3661;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar2 != 0) {
    pFStack_6c = (FString *)0x80;
    pFStack_70 = (FString *)0x100f3673;
    (**(code **)(*(int *)param_1 + 0x30))();
    pFStack_70 = (FString *)0x100f367f;
    iVar2 = (**(code **)(*(int *)param_1 + 0xec))();
    if (iVar2 != 0) {
      pFStack_6c = (FString *)0x100f368f;
      pFStack_6c = (FString *)(**(code **)(*(int *)param_1 + 0xe8))();
      pFStack_70 = (FString *)0x100f3698;
      FUN_10057b20();
      pFStack_6c = (FString *)0x100f36a4;
      pFStack_6c = (FString *)(**(code **)(*(int *)param_1 + 0xec))();
      pFStack_70 = (FString *)0x100f36ad;
      FUN_10057bb0();
    }
  }
  pFStack_6c = (FString *)0x100f36b9;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc4))();
  if (iVar2 != 0) {
    pFStack_6c = (FString *)0x2000;
    pFStack_70 = (FString *)0x100f36cb;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  pFStack_6c = local_40;
  pFStack_70 = (FString *)0x100f36db;
  (**(code **)(*(int *)param_1 + 0xf8))();
  local_8 = CONCAT31(local_8._1_3_,3);
  pFStack_70 = (FString *)0x100f36e8;
  iVar2 = FString::operator_int(local_40);
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x2000;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3706;
  iVar2 = (**(code **)(*(int *)param_1 + 200))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x1000;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3724;
  iVar2 = (**(code **)(*(int *)param_1 + 0xcc))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x2000000;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3742;
  iVar2 = (**(code **)(*(int *)param_1 + 0xd8))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x8000000;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  pFStack_70 = (FString *)0x100f3760;
  iVar2 = (**(code **)(*(int *)param_1 + 0xdc))();
  if (iVar2 == 0) {
    pFStack_70 = (FString *)0x4000;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  pFStack_70 = (FString *)0x100f377e;
  iVar2 = (**(code **)(*(int *)param_1 + 0x104))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x400000;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  if (*(int *)(param_1 + 0xe0) != -1) {
    pFStack_70 = (FString *)0x20000000;
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  pFStack_70 = (FString *)0x100f37b3;
  pFStack_70 = (FString *)(**(code **)(*(int *)param_1 + 0xf0))();
  if (pFStack_70 != (FString *)0x0) {
    FUN_10057c40();
    pFStack_70 = local_30;
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xf4))();
    uStack_80 = *puVar3;
    iStack_7c = puVar3[1];
    FUN_1005c050();
    pFStack_70 = (FString *)(**(code **)(*(int *)param_1 + 0xe4))();
    FUN_10057cd0();
  }
  pFStack_70 = (FString *)0x100f3814;
  iVar2 = (**(code **)(*(int *)param_1 + 0x120))();
  if (iVar2 != 0) {
    pFStack_70 = local_28;
    pFStack_70 = (FString *)(**(code **)(*(int *)param_1 + 0x128))();
    FUN_1001e050();
  }
  pFStack_70 = (FString *)0x100f383f;
  iVar2 = (**(code **)(*(int *)param_1 + 0x124))();
  if (iVar2 != 0) {
    pFStack_70 = local_28;
    pFStack_70 = (FString *)(**(code **)(*(int *)param_1 + 300))();
    FUN_1001e110();
  }
  pFStack_70 = (FString *)0x100f386a;
  pFStack_70 = (FString *)(**(code **)(*(int *)param_1 + 0xd4))();
  (**(code **)(*(int *)param_1 + 0xd0))();
  FUN_100577d0();
  pFStack_70 = param_3;
  iVar2 = FUN_100f0800();
  if (iVar2 == 0) {
    pFStack_70 = (FString *)0x100f389c;
    pFVar4 = (FString *)(**(code **)(*(int *)param_1 + 0x44))();
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
  iVar2 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x100f3922;
    iVar2 = (**(code **)(*(int *)param_1 + 0xec))();
    if (iVar2 != 0) {
      pFStack_70 = (FString *)0x100f3932;
      iVar2 = (**(code **)(*(int *)param_1 + 0x100))();
      if (iVar2 != 0) {
        pFStack_70 = (FString *)0x100f393f;
        piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x58))();
        pFStack_70 = (FString *)0x100f394d;
        iVar2 = (**(code **)(*(int *)param_1 + 0x108))();
        if (iVar2 < 1) {
          pFStack_70 = (FString *)0x100f395d;
          (**(code **)(*piVar5 + 4))();
        }
        pFStack_70 = (FString *)0x100f396b;
        pFStack_70 = (FString *)(**(code **)(*(int *)param_1 + 0x10c))();
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
  iVar2 = (**(code **)(*(int *)param_1 + 0x60))();
  if (iVar2 != 0) {
    pFStack_70 = (FString *)0x100f39a0;
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x13c))();
    iVar2 = **(int **)(param_1 + 0x7c);
    pFStack_70 = (FString *)0x100f39ad;
    uVar6 = (**(code **)(iVar2 + 0x84))();
    pFStack_70 = (FString *)(uVar6 & 0xfbffffff);
    (**(code **)(iVar2 + 0x80))();
  }
  pFStack_70 = (FString *)0x100f39ca;
  iVar2 = (**(code **)(*(int *)param_1 + 0x110))();
  if (iVar2 != 0) {
    pFStack_70 = local_2c;
    uVar7 = (**(code **)(*(int *)param_1 + 0x11c))();
    local_8._0_1_ = 4;
    iVar8 = *piVar5;
    (**(code **)(*(int *)param_1 + 0x118))();
    (**(code **)(*(int *)param_1 + 0x114))();
    uStack_80 = uVar7;
    iStack_7c = iVar2;
    (**(code **)(iVar8 + 0x208))();
    local_8 = CONCAT31(local_8._1_3_,3);
    pFStack_70 = (FString *)0x100f3a22;
    FString::~FString(local_2c);
  }
  pFStack_70 = (FString *)0x100f3a2e;
  pFStack_70 = (FString *)(**(code **)(*(int *)param_1 + 0xe0))();
  if (pFStack_70 != (FString *)0xffffd8f1) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x164))();
  }
  pFStack_70 = (FString *)0x100f3a4f;
  piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x130))();
  if (piVar5 != (int *)0x0) {
    local_1c = 0;
    while (iVar2 = local_1c, local_1c < piVar5[1]) {
      piVar1 = *(int **)(*piVar5 + local_1c * 4);
      if (piVar1 == (int *)0x0) {
        pFStack_70 = (FString *)0x100f3a7b;
        pFVar4 = (FString *)(**(code **)(*(int *)param_1 + 0x44))();
        pFStack_70 = (FString *)0x100f3a83;
        pFStack_70 = (FString *)FString::operator*(pFVar4);
        goto LAB_100f38aa;
      }
      pFStack_70 = *(FString **)(param_1 + 0x7c);
      iVar8 = (**(code **)(*piVar1 + 0xc))();
      if (iVar8 == 0) {
        pFStack_70 = (FString *)0x100f3aaa;
        pFVar4 = (FString *)(**(code **)(*piVar1 + 0x44))();
        pFStack_70 = (FString *)0x100f3ab2;
        pFStack_70 = (FString *)FString::operator*(pFVar4);
        pFVar4 = (FString *)(**(code **)(*(int *)param_1 + 0x44))();
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
  (**(code **)(*(int *)param_1 + 0xbc))();
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
  iVar2 = (**(code **)(*(int *)param_1 + 0x60))();
  if (iVar2 == 0) {
    pcVar9 = *(code **)(**(int **)(param_1 + 0x7c) + 0x138);
  }
  else {
    pcVar9 = *(code **)(**(int **)(param_1 + 0x7c) + 0x13c);
  }
  (*pcVar9)();
LAB_100f3b5a:
  (**(code **)(*(int *)param_1 + 0xb0))();
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


// ==== 100f3c20 FUN_100f3c20 depth=0 from=raiz callees=FUN_100ef8c0@100ef8c0 FUN_100d9a30@100d9a30 CORE.DLL::FArchive::IsSaving@EXTERNAL:000001ab CORE.DLL::appFailAssert@EXTERNAL:0000018a FUN_1001dc60@1001dc60 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100052e0@100052e0 FUN_1003ff50@1003ff50 CORE.DLL::FString::FString@EXTERNAL:0000019e FUN_100c8240@100c8240 FUN_100e4b60@100e4b60 FUN_100f2e10@100f2e10 CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_10005c30@10005c30 FUN_1001dd10@1001dd10 CORE.DLL::operator<<@EXTERNAL:00000110 FUN_10004ed0@10004ed0 FUN_1005ba90@1005ba90
// strings: 1026b390=.\XML\XMLWindowData.cpp | 10258fb4=pUIData | 1026b390=.\XML\XMLWindowData.cpp | 102650fc=m_ChildList | 

void __thiscall FUN_100f3c20(int param_1,FArchive *param_2)

{
  int iVar1;
  FString *pFVar2;
  int *piVar3;
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
  operator<<(param_2,(FString *)(param_1 + 0x88));
  operator<<(param_2,(FString *)(param_1 + 0x94));
  operator<<(param_2,(FString *)(param_1 + 0xa0));
  operator<<(param_2,(FString *)(param_1 + 0xac));
  FUN_100052e0(param_2,param_1 + 0xb8);
  FUN_100052e0(param_2,param_1 + 0xbc);
  FUN_100052e0(param_2,param_1 + 0xc0);
  FUN_100052e0(param_2,param_1 + 0xc4);
  FUN_100052e0();
  FUN_100052e0(param_2);
  FUN_100052e0(param_2,param_1 + 0xd0);
  FUN_100052e0(param_2,param_1 + 0xe4);
  FUN_100052e0(param_2,param_1 + 0xd4);
  FUN_100f2e10(param_2,param_1 + 0xec);
  FUN_1005ba90(param_2,param_1 + 0xf0);
  FUN_100052e0(param_2,param_1 + 0xd8);
  FUN_100052e0();
  FUN_1005ba90(param_2);
  FUN_1003ff50(param_2,param_1 + 0xf8);
  FUN_100052e0(param_2,param_1 + 0xe8);
  FUN_100052e0(param_2,param_1 + 0x118);
  FUN_100052e0(param_2,param_1 + 0x11c);
  FUN_100052e0(param_2,param_1 + 0x120);
  FUN_1005ba90(param_2,param_1 + 0x124);
  FUN_100052e0();
  FUN_100052e0(param_2);
  operator<<(param_2,(FString *)(param_1 + 0x130));
  FUN_1001dc60(param_2,param_1 + 0x13c);
  FUN_1001dc60(param_2,param_1 + 0x140);
  FUN_1001dd10(param_2,param_1 + 0x144);
  FUN_1001dd10(param_2,param_1 + 0x14c);
  operator<<(param_2,(FString *)(param_1 + 0x108));
  FUN_100052e0();
  FUN_100052e0(param_2);
  operator<<(param_2,(FString *)(param_1 + 0x158));
  iVar1 = FArchive::IsSaving(param_2);
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
      if (*(int *)(param_1 + 0x154) == 0) {
        iVar1 = FUN_10004ed0();
        local_8._0_1_ = 4;
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_100e4b60();
        }
        local_8._0_1_ = 2;
        *(int *)(param_1 + 0x154) = iVar1;
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
  else if (*(int *)(param_1 + 0x154) == 0) {
    FUN_100052e0();
  }
  else {
    FUN_100052e0();
    for (local_18 = 0; local_18 < (*(int **)(param_1 + 0x154))[1]; local_18 = local_18 + 1) {
      piVar3 = *(int **)(**(int **)(param_1 + 0x154) + local_18 * 4);
      if (piVar3 == (int *)0x0) {
        appFailAssert("pUIData",".\\XML\\XMLWindowData.cpp",0x2bd);
      }
      pFVar2 = (FString *)(**(code **)(*piVar3 + 0x40))();
      FString::FString(local_38,pFVar2);
      local_8._0_1_ = 1;
      operator<<(param_2,local_38);
      (**(code **)(*piVar3 + 100))();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_38);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 100efd60 FUN_100efd60 depth=0 from=raiz callees=FUN_100cd670@100cd670 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_100cd980@100cd980 CORE.DLL::FString::operator=@EXTERNAL:000001a2 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100cda90@100cda90 CORE.DLL::FString::operator=@EXTERNAL:000001a3 FUN_100cd860@100cd860 FUN_10005c30@10005c30 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_100ce6d0@100ce6d0 FUN_100d01f0@100d01f0 FUN_100cdce0@100cdce0 CORE.DLL::FString::operator==@EXTERNAL:000001c7
// strings: 1026a1a8=XMLUIData(%s):processing node is NULL!! | 10265138=DefaultProperty | 1026a138=XMLUIData(%s):failed to get unique DefaultProperty!! | 10246ca8=name | 1026a124=extends | 1026a10c=alwaysOnTop | 1026a0f0=alwaysOnBack | 1026a0e0=virtual | 1026a0c8=passThrough | 1025f5cc=Size | 1026a0ac=RelativeSize | 1026a090=AbsoluteSize | 1026a07c=widthRate | 1026a028=XMLUIData(%s):widthRate is not defined!! | 1026a00c=heightRate | 10269fb8=XMLUIData(%s):heightRate is not defined!! | 10269f9c=offsetWidth | 10269f80=offsetHeight | 1025f790=Position | 1025f6ec=relativePoint | 1024149c=undefined | 10269f68=anchorPoint | 1024149c=undefined | 10269f50=relativeTo | 1024149c=undefined | 1025f668=offsetX | 1025f658=offsetY | 1025f644=anchored | 10269f40=Tooltip | 102692ac=type | 1024149c=undefined | 10269ee0=XMLUIData(%s):type in Tooltip is not defined!! | 1025f5c0=width | 10269e90=XMLUIData(%s):width is not defined!! | 1025f5b0=height | 10269e40=XMLUIData(%s):height is not defined!! | 10269db8=XMLUIData(%s):neither Relative size nor Absolute size is defined!! | 1024149c=undefined | 10269d50=XMLUIData(%s):failed to get unique Size element!! | 1025e168=text | 10269d3c=TabOrder | 10269d28=preOrder | 10269d14=postOrder | 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100efd60(int *param_1,int param_2)

{
  FString *pFVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
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
  if (param_2 == 0) {
    local_14 = (undefined1 *)&uStack_70;
    pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
    puVar2 = FString::operator*(pFVar1);
    pwVar6 = L"XMLUIData(%s):processing node is NULL!!";
  }
  else {
    param_2 = 0;
    FString::FString(local_60,(ushort *)L"DefaultProperty");
    local_8._0_1_ = 2;
    iVar4 = FUN_100cd670(local_60,&param_2);
    local_8._0_1_ = 1;
    FString::~FString(local_60);
    if (iVar4 != 0) {
      FString::FString(local_60,(ushort *)L"name");
      local_8._0_1_ = 3;
      uVar3 = FUN_100cd860(local_40,local_60);
      local_8._0_1_ = 4;
      (**(code **)(*param_1 + 0x14))(uVar3);
      local_8._0_1_ = 3;
      FString::~FString(local_40);
      local_8._0_1_ = 1;
      FString::~FString(local_60);
      FString::FString(local_60,(ushort *)L"extends");
      local_8._0_1_ = 5;
      FUN_100cd860(local_54,local_60);
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      (**(code **)(*param_1 + 0x18))(local_54);
      FString::FString(local_60,(ushort *)L"alwaysOnTop");
      local_8._0_1_ = 8;
      uVar3 = FUN_100cda90(local_60);
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      (**(code **)(*param_1 + 0x1c))(uVar3);
      FString::FString(local_60,(ushort *)L"alwaysOnBack");
      local_8._0_1_ = 9;
      uVar3 = FUN_100cda90(local_60);
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      (**(code **)(*param_1 + 0x20))(uVar3);
      FString::FString(local_60,(ushort *)L"virtual");
      local_8._0_1_ = 10;
      iVar4 = FUN_100cda90(local_60);
      param_1[0x18] = iVar4;
      local_8._0_1_ = 7;
      FString::~FString(local_60);
      FString::FString(local_60,(ushort *)L"passThrough");
      local_8._0_1_ = 0xb;
      iVar4 = FUN_100cda90(local_60);
      param_1[0x19] = iVar4;
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
            (**(code **)(*param_1 + 0x2c))(local_30,local_2c,local_60,local_28,local_24[0],uVar3);
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
              FString::operator=((FString *)(param_1 + 0xf),pFVar1);
              local_8._0_1_ = 0x24;
              FString::~FString(local_40);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
              FString::FString(local_60,(ushort *)L"postOrder");
              local_8._0_1_ = 0x26;
              pFVar1 = (FString *)FUN_100cd860(local_40,local_60);
              local_8._0_1_ = 0x27;
              FString::operator=((FString *)(param_1 + 0x12),pFVar1);
              local_8._0_1_ = 0x26;
              FString::~FString(local_40);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
            }
            FString::operator=((FString *)(param_1 + 9),(FString *)&stack0x00000008);
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
          FString::operator=((FString *)(param_1 + 0x1b),pFVar1);
          local_8._0_1_ = 0x20;
          FString::~FString(local_40);
          local_8._0_1_ = 7;
          FString::~FString(local_60);
          iVar4 = FString::operator==((FString *)(param_1 + 0x1b),(ushort *)L"undefined");
          if (iVar4 == 0) {
            FString::FString(local_60,(ushort *)L"text");
            local_8._0_1_ = 0x22;
            iVar4 = FUN_100cd980(local_60);
            param_1[0x1e] = iVar4;
            local_8._0_1_ = 7;
            FString::~FString(local_60);
            goto LAB_100f059e;
          }
          pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
          puVar2 = FString::operator*(pFVar1);
          pwVar6 = L"XMLUIData(%s):type in Tooltip is not defined!!";
        }
        else {
          pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
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
            pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
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
              (**(code **)(*param_1 + 0x24))(local_38,iVar4);
              goto LAB_100f01af;
            }
            pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
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
            pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
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
              local_34 = (float)(int)local_34 / (float)_DAT_10234778;
              local_38 = (float)(int)local_38 / (float)_DAT_10234778;
              (**(code **)(*param_1 + 0x28))(local_38,local_34,uVar3,local_24[3],local_60);
              local_8._0_1_ = 7;
              FString::~FString(local_60);
              goto LAB_100f01af;
            }
            pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
            puVar2 = FString::operator*(pFVar1);
            pwVar6 = L"XMLUIData(%s):heightRate is not defined!!";
          }
        }
        else {
LAB_100f0523:
          pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
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
    pFVar1 = (FString *)(**(code **)(*param_1 + 0x44))();
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


// ==== 100f0800 FUN_100f0800 depth=0 from=raiz callees=FUN_10060970@10060970 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::operator!=@EXTERNAL:000001aa CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_100c8aa0@100c8aa0 FUN_100576b0@100576b0 FUN_1005c1e0@1005c1e0 FUN_10005c30@10005c30 CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_10057740@10057740 FUN_100d01f0@100d01f0 FUN_10060d40@10060d40 FUN_100cf600@100cf600
// strings: 1026a2fc=Duplicated Window name=%s!! | 1026a298=XMLUIData(%s):cannot find proper parent window!! | 1024149c=undefined | 1024149c=undefined | 1024149c=undefined | 1026a248=XMLUIData(%s):position is not defined!! | 

undefined4 __thiscall FUN_100f0800(int *param_1,int param_2,int param_3)

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
  if (param_2 != 0) {
    pFVar6 = (FString *)(param_1 + 1);
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
    piVar7 = param_1 + 0x1f;
    puVar3 = FString::operator*(pFVar6);
    FUN_10060970(puVar3,piVar7);
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  FUN_100576b0(1);
  FUN_10057740(param_1 + 1);
  iVar4 = (**(code **)(*param_1 + 0x60))();
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x30))(0x4000000);
    (**(code **)(*param_1 + 0x30))(2);
  }
  iVar4 = (**(code **)(*param_1 + 0x4c))();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x30))(0x800000);
  }
  iVar4 = (**(code **)(*param_1 + 0x50))();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x30))(0x1000000);
  }
  if (param_3 == 0) {
    param_3 = *(int *)(DAT_103663bc + 0x50ac);
  }
  if (param_3 == 0) {
    pFVar6 = (FString *)(**(code **)(*param_1 + 0x44))();
    puVar3 = FString::operator*(pFVar6);
    pwVar10 = L"XMLUIData(%s):cannot find proper parent window!!";
  }
  else {
    local_18 = param_1[0x1a];
    if (param_1[0x18] == 1) {
      local_18 = local_18 | 8;
    }
    if (param_1[0x19] == 1) {
      local_18 = local_18 | 8;
    }
    uVar1 = local_18;
    uVar5 = FUN_10060d40(param_1[0x1f],local_18);
    FUN_1005c1e0(uVar5);
    iVar4 = FString::operator!=((FString *)(param_1 + 0x1b),(ushort *)L"undefined");
    if (iVar4 != 0) {
      local_18 = uVar1 | 0x20;
      (**(code **)(*(int *)param_1[0x1f] + 0xac))((FString *)(param_1 + 0x1b));
    }
    if (param_1[0x1e] != -9999) {
      (**(code **)(*(int *)param_1[0x1f] + 0xb4))(param_1[0x1e]);
    }
    piVar7 = (int *)(**(code **)(*param_1 + 0x58))();
    if (piVar7 != (int *)0x0) {
      if (piVar7[1] == 0) {
        (**(code **)(*(int *)param_1[0x1f] + 0x130))(piVar7[6],piVar7[7],piVar7[8],piVar7[9]);
      }
      else {
        FUN_100cf600(param_3);
        iVar4 = *(int *)param_1[0x1f];
        iVar8 = (**(code **)(*piVar7 + 4))();
        iVar8 = (**(code **)*piVar7)((float)iVar8);
        (**(code **)(iVar4 + 0x128))((float)iVar8);
      }
    }
    puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x5c))();
    if (puVar9 != (undefined4 *)0x0) {
      iVar4 = *(int *)param_1[0x1f];
      iVar8 = (**(code **)(*param_1 + 0x54))();
      (**(code **)(iVar4 + 0xd8))(*puVar9,puVar9[1],puVar9 + 2,puVar9[5],puVar9[6],iVar8 == 0);
      iVar4 = FString::operator!=((FString *)(param_1 + 0xf),(ushort *)L"undefined");
      if (iVar4 != 0) {
        (**(code **)(*(int *)param_1[0x1f] + 0x110))((FString *)(param_1 + 0xf));
      }
      iVar4 = FString::operator!=((FString *)(param_1 + 0x12),(ushort *)L"undefined");
      if (iVar4 != 0) {
        (**(code **)(*(int *)param_1[0x1f] + 0x114))((FString *)(param_1 + 0x12));
      }
      ExceptionList = local_10;
      return 1;
    }
    pFVar6 = (FString *)(**(code **)(*param_1 + 0x44))();
    puVar3 = FString::operator*(pFVar6);
    pwVar10 = L"XMLUIData(%s):position is not defined!!";
  }
LAB_100f0881:
  uVar5 = FUN_10005c30(pwVar10,puVar3);
  FUN_100d01f0(uVar5);
  ExceptionList = local_10;
  return 0;
}


