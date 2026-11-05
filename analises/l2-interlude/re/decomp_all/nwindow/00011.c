// ==== 10137146 Catch@10137146

void Catch_10137146(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMsgInfo::SetCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137170 FUN_10137170

void FUN_10137170(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}


// ==== 101371c3 Catch@101371c3

void Catch_101371c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101371d7 Catch@101371d7

void Catch_101371d7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMsgInfo::SetTimeStamp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137200 FUN_10137200

void FUN_10137200(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208c59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FString::operator=((FString *)(in_ECX + 8),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10137267 Catch@10137267

void Catch_10137267(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013727b Catch@1013727b

void Catch_1013727b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMsgInfo::SetMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101372a0 FUN_101372a0

undefined4 FUN_101372a0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 101372e6 Catch@101372e6

void Catch_101372e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101372fa Catch@101372fa

void Catch_101372fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMsgInfo::GetCreatureID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137320 FUN_10137320

undefined4 FUN_10137320(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 10137367 Catch@10137367

void Catch_10137367(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013737b Catch@1013737b

void Catch_1013737b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMsgInfo::GetTimeStamp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101373a0 FUN_101373a0

undefined4 FUN_101373a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10033620();
  ExceptionList = local_10;
  return 1;
}


// ==== 101373ee Catch@101373ee

void Catch_101373ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10137402 Catch@10137402

void Catch_10137402(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatListBox::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137420 FUN_10137420

void FUN_10137420(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x35c) = param_1;
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x360) == 0) {
      uVar1 = FUN_1003f630(L"L2UI_CH3.ChatWnd.Chatting_Back2",1);
      *(undefined4 *)(in_ECX + 0x360) = uVar1;
    }
    if (*(int *)(in_ECX + 0x364) == 0) {
      uVar1 = FUN_1003f630(L"L2UI_CH3.ChatWnd.Chatting_Back3",1);
      *(undefined4 *)(in_ECX + 0x364) = uVar1;
    }
    if (*(int *)(in_ECX + 0x368) == 0) {
      uVar1 = FUN_1003f630(L"L2UI_CH3.ChatWnd.Chatting_Back4",1);
      *(undefined4 *)(in_ECX + 0x368) = uVar1;
    }
  }
  return;
}


// ==== 10137490 FUN_10137490

void FUN_10137490(uint param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10058dc0(param_1 | 8);
  ExceptionList = local_10;
  return;
}


// ==== 101374e9 Catch@101374e9

void Catch_101374e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101374fd Catch@101374fd

void Catch_101374fd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatListBox::SetWindowStyle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137520 FUN_10137520

bool FUN_10137520(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_100570d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return true;
  }
  if ((param_1 == 0x501) && (param_2 == 0x1501)) {
    iVar1 = (**(code **)(*in_ECX + 0x208))(param_3);
    return iVar1 != 0;
  }
  return false;
}


// ==== 10137580 FUN_10137580

undefined4 FUN_10137580(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208d00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10061b40();
  uVar1 = FUN_1003f600(0xf017,1000,0);
  *(undefined4 *)(in_ECX + 0x224) = uVar1;
  ExceptionList = local_10;
  return 1;
}


// ==== 101375e9 Catch@101375e9

void Catch_101375e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101375fd Catch@101375fd

void Catch_101375fd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137620 FUN_10137620

void FUN_10137620(void)

{
  code *pcVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208d20;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GL2TextCapture_exref == 1) {
    pcVar1 = *(code **)(*in_ECX + 500);
  }
  else {
    if (*(int *)GL2TextCapture_exref != 3) {
      return;
    }
    pcVar1 = *(code **)(*in_ECX + 0x1f8);
  }
  ExceptionList = &local_10;
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}


// ==== 10137690 Catch@10137690

void Catch_10137690(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101376a4 Catch@101376a4

void Catch_101376a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::ProcessEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101376d0 FUN_101376d0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_101376d0(void)

{
  uint *puVar1;
  int *piVar2;
  int *in_ECX;
  uint uStack_1054;
  int local_1044 [2];
  int local_103c;
  int local_1038;
  int local_1034 [3];
  int local_1028;
  int local_1024;
  int local_1020;
  int local_101c;
  undefined1 *local_1018;
  void *local_1014;
  undefined1 *puStack_1010;
  undefined4 local_100c;
  ushort local_1008 [1024];
  ushort local_808 [1024];
  uint local_8;
  
  puStack_1010 = &LAB_10208d40;
  local_1014 = ExceptionList;
  uStack_1054 = DAT_103554c4 ^ (uint)local_1008;
  local_1018 = (undefined1 *)&uStack_1054;
  ExceptionList = &local_1014;
  local_100c = 0;
  puVar1 = &uStack_1054;
  local_8 = uStack_1054;
  if (*(int *)GL2TextCapture_exref == 1) {
    appSystemTime(&local_1038,&local_1024,&local_103c,&local_101c,&local_1028,&local_1020,local_1034
                  ,local_1044);
    appSprintf(local_808,(ushort *)L"L2_%02d_%02d_%02d_%02d.log",local_1024,local_101c,local_1028,
               local_1020);
    piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))
                              (local_808,8,*(undefined4 *)GNull_exref);
    in_ECX[0x88] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      local_1034[1] = 0xfeff;
      (**(code **)(*piVar2 + 4))(local_1034 + 1,2);
      appSprintf(local_1008,(ushort *)L"[ L2 Text Capture] [ %02d/%02d %02d:%02d:%02d ]",local_1024,
                 local_101c,local_1028,local_1020,local_1034[0]);
      (**(code **)(*in_ECX + 0x1fc))(local_1008);
    }
    *(undefined4 *)GL2TextCapture_exref = 2;
    local_100c = 0xffffffff;
    puVar1 = (uint *)local_1018;
  }
  local_1018 = (undefined1 *)puVar1;
  ExceptionList = local_1014;
  __security_check_cookie(local_8 ^ (uint)local_1008);
  return;
}


// ==== 1013781e Catch@1013781e

void Catch_1013781e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10137832 Catch@10137832

void Catch_10137832(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::OpenTextCapture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137850 FUN_10137850

void FUN_10137850(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208d70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)GL2TextCapture_exref == 3) {
    if (*(int **)(in_ECX + 0x220) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x220) + 0x58))();
      if (*(undefined4 **)(in_ECX + 0x220) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0x220))(1);
      }
      *(undefined4 *)(in_ECX + 0x220) = 0;
    }
    *(undefined4 *)GL2TextCapture_exref = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101378e0 Catch@101378e0

void Catch_101378e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101378f4 Catch@101378f4

void Catch_101378f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::CloseTextCapture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137920 FUN_10137920

void FUN_10137920(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208d90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x220) != 0) {
    iVar1 = **(int **)(in_ECX + 0x220);
    iVar2 = appStrlen(param_1);
    (**(code **)(iVar1 + 4))(param_1,iVar2 * 2);
    iVar1 = **(int **)(in_ECX + 0x220);
    iVar2 = appStrlen((ushort *)&DAT_1023d1c8);
    (**(code **)(iVar1 + 4))(&DAT_1023d1c8,iVar2 * 2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101379c5 Catch@101379c5

void Catch_101379c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101379d9 Catch@101379d9

void Catch_101379d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::CaptureString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137a00 FUN_10137a00

void FUN_10137a00(void)

{
  return;
}


// ==== 10137a57 Catch@10137a57

void Catch_10137a57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10137a6b Catch@10137a6b

void Catch_10137a6b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::CaptureString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137a90 FUN_10137a90

void FUN_10137a90(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    puVar2 = param_1;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
    if ((uint)((int)puVar2 - (int)(param_1 + 1) >> 1) < 0x18) {
      puVar2 = (ushort *)(in_ECX + 0x1cc);
      appStrcpy(puVar2,param_1);
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (uVar1 != 0);
      iVar3 = (int)puVar2 - (in_ECX + 0x1ce) >> 1;
      *(undefined2 *)(in_ECX + 0x1cc + iVar3 * 2) = 0x20;
      *(undefined2 *)(in_ECX + 0x1ce + iVar3 * 2) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10137b3c Catch@10137b3c

void Catch_10137b3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10137b50 Catch@10137b50

void Catch_10137b50(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::SetWhisperName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137b70 FUN_10137b70

void FUN_10137b70(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
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
  if ((param_2 != (ushort *)0x0) && (param_1 != (ushort *)0x0)) {
    puVar1 = FParser::SetString((FParser *)(in_ECX + 0x25c),param_2);
    iVar2 = FUN_10135a20(puVar1);
    local_2c[0] = iVar2;
    if (*param_2 == 0x24) {
      if (iVar2 == 0) {
        appSprintf(param_1,(ushort *)L"%s %s",&DAT_1024a75c);
      }
      else {
        appSprintf(param_1,(ushort *)L"%s%s",&DAT_1024a75c);
      }
    }
    else {
      appSprintf(param_1,(ushort *)&DAT_1022dde0,puVar1);
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
        appStrcat(param_1,&DAT_1023d5d0);
        appStrcat(param_1,puVar1);
      }
      else {
        appStrcat(param_1,puVar1);
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
      appStrcpy(param_1,param_2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10137cfa Catch@10137cfa

void Catch_10137cfa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10137d0e Catch@10137d0e

void Catch_10137d0e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::CompleteSentenceWithoutPDV");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137d30 FUN_10137d30

void FUN_10137d30(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208e10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  bVar2 = true;
  *in_ECX = *in_ECX - in_ECX[5];
  if (*in_ECX < 0) {
    *in_ECX = 0;
  }
  iVar3 = FUN_10136cc0(*in_ECX);
  if (iVar3 != 0) {
    bVar2 = false;
  }
  for (; iVar4 < in_ECX[0xb]; iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 8;
    piVar1 = (int *)(in_ECX[10] + 4 + iVar3);
    *piVar1 = *piVar1 - in_ECX[5];
    piVar1 = (int *)(in_ECX[10] + 4 + iVar3);
    if (*piVar1 < 0) {
      *piVar1 = 0;
    }
    iVar3 = FUN_10136cc0(*(undefined4 *)(in_ECX[10] + iVar3 + 4));
    if (iVar3 != 0) {
      bVar2 = false;
    }
  }
  if ((in_ECX[1] != 0) && (bVar2)) {
    in_ECX[1] = 0;
    FUN_10170650(0x3c5,0xffb09b79);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10137e14 Catch@10137e14

void Catch_10137e14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10137e28 Catch@10137e28

void Catch_10137e28(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMark::ReduceMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137e50 FUN_10137e50

undefined4 FUN_10137e50(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208e30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10033250();
  (**(code **)(*in_ECX + 0x20c))(5,10,0);
  in_ECX[0xc5] = 0x17;
  in_ECX[0xc6] = 0xe;
  ExceptionList = local_10;
  return 1;
}


// ==== 10137ec6 Catch@10137ec6

void Catch_10137ec6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10137eda Catch@10137eda

void Catch_10137eda(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatListBox::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137f00 FUN_10137f00

undefined4 FUN_10137f00(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_28;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208e50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_8 = 0;
  FUN_10002f40(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  uVar3 = FUN_101c19e0();
  uVar4 = FUN_101c19e0(uVar3);
  FUN_10021df0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84),uVar4,uVar3);
  if (*(int *)(in_ECX + 0x35c) != 0) {
    if (*(int *)(in_ECX + 0x360) != 0) {
      FUN_10021a00(0,0,0x15c,0x12,0,0,0x15c,0x12,*(int *)(in_ECX + 0x360),0xff,1);
    }
    iVar8 = 0;
    while( true ) {
      iVar5 = FUN_101c19e0();
      iVar12 = *(int *)(in_ECX + 0x364);
      if (iVar5 <= iVar8) break;
      if (iVar12 != 0) {
        FUN_10021a00(0,iVar8 * 0xf + 0x12,0x15c,0xf,0,0,0x15c,0xf,iVar12,0xff,1);
      }
      iVar7 = iVar8 * 0xf + 0x21;
      iVar8 = iVar8 + 1;
    }
    if ((iVar12 != 0) && (0 < iVar7)) {
      uVar17 = 1;
      uVar14 = 0xff;
      uVar11 = 0xf;
      uVar10 = 0x15c;
      uVar9 = 0;
      uVar4 = 0;
      uVar3 = FUN_101c19e0(0,0,0x15c,0xf,iVar12,0xff,1);
      FUN_10021a00(0,iVar7,0x15c,uVar3,uVar4,uVar9,uVar10,uVar11,iVar12,uVar14,uVar17);
    }
    iVar7 = *(int *)(in_ECX + 0x368);
    if (iVar7 != 0) {
      uVar18 = 1;
      uVar15 = 0xff;
      uVar17 = 0x12;
      uVar14 = 0x15c;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0x12;
      uVar4 = 0x15c;
      uVar3 = FUN_101c19e0(0x15c,0x12,0,0,0x15c,0x12,iVar7,0xff,1);
      FUN_10021a00(0,uVar3,uVar4,uVar9,uVar10,uVar11,uVar14,uVar17,iVar7,uVar15,uVar18);
    }
  }
  iVar7 = FUN_101c19e0();
  if (iVar7 / 0xf != *(int *)(in_ECX + 0x300)) {
    iVar7 = FUN_101c19e0();
    *(int *)(in_ECX + 0x300) = iVar7;
    if (iVar7 <= *(int *)(in_ECX + 0x2ec)) {
      *(int *)(in_ECX + 0x308) = *(int *)(in_ECX + 0x2ec) - iVar7;
    }
    FUN_10049a00(*(undefined4 *)(in_ECX + 0x30c),iVar7);
    FUN_10049b50(*(undefined4 *)(in_ECX + 0x308));
  }
  FUN_10049a00(*(undefined4 *)(in_ECX + 0x30c),*(undefined4 *)(in_ECX + 0x300));
  if (*(int *)(in_ECX + 0x2ec) < *(int *)(in_ECX + 0x300)) {
    *(undefined4 *)(in_ECX + 0x308) = 0;
  }
  iVar7 = *(int *)(in_ECX + 0x308);
  local_1c = 0;
  for (; ((iVar7 < *(int *)(in_ECX + 0x308) + *(int *)(in_ECX + 0x300) &&
          (iVar7 <= *(int *)(in_ECX + 0x30c))) && (iVar7 < *(int *)(in_ECX + 0x2ec)));
      iVar7 = iVar7 + 1) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x2e8) + iVar7 * 4);
    FUN_1004f5c0(0);
    iVar8 = *piVar1;
    iVar12 = *(int *)(iVar8 + 0x10);
    uVar3 = *(undefined4 *)(iVar8 + 0xc);
    uVar19 = 0xffffffff;
    uVar16 = 0;
    uVar13 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar4 = 0;
    fVar2 = (float)iVar12;
    if (iVar12 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    local_28 = (undefined4)(longlong)ROUND(((*(float *)(in_ECX + 0x88) - 16.0) - 6.0) - fVar2);
    uVar6 = FUN_1004f5c0(0);
    FUN_100217a0(*(int *)(in_ECX + 0x314) + iVar12,
                 (*(int *)(in_ECX + 0x31c) + 0xb) * local_1c + *(int *)(in_ECX + 0x318),uVar3,uVar6,
                 local_28,uVar4,uVar9,uVar10,uVar11,uVar14,uVar17,uVar15,uVar18,uVar13,uVar16,uVar19
                );
    local_1c = local_1c + 1;
  }
  FUN_100212e0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  ExceptionList = local_10;
  return 1;
}


// ==== 1013826d Catch@1013826d

void Catch_1013826d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10138281 Catch@10138281

void Catch_10138281(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatListBox::OnPaint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101382a0 FUN_101382a0

void FUN_101382a0(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uStack_5c;
  FString local_4c [8];
  L2ParamStack local_44 [4];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10208e9b;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014e820();
  if (iVar1 != 0) {
    if (param_1 == 0x10000000) {
      if ((void *)(param_2 + 4) != (void *)0x0) {
        L2ParamStack::L2ParamStack(local_44,10);
        local_8._0_1_ = 1;
        L2ParamStack::PushBack(local_44,(void *)(param_2 + 4));
        (**(code **)(*DAT_103663bc + 0x360))();
        local_8 = (uint)local_8._1_3_ << 8;
        L2ParamStack::~L2ParamStack(local_44);
      }
    }
    else if (param_1 == 0x10000001) {
      puVar2 = (ushort *)(param_2 + 6);
      FUN_10048820();
      local_8._0_1_ = 2;
      FString::operator=(local_4c,(ushort *)&DAT_1022f9f8);
      FString::operator=(local_40,puVar2);
      FUN_100488e0(local_4c);
      local_8._0_1_ = 2;
      FUN_10172350();
      FString::FString(local_28,puVar2);
      local_8._0_1_ = 4;
      iVar1 = FUN_101652c0();
      local_8._0_1_ = 2;
      FString::~FString(local_28);
      if (iVar1 != 0) {
        FString::FString(local_34,puVar2);
        local_8._0_1_ = 5;
        FUN_101654b0();
        local_8._0_1_ = 2;
        FString::~FString(local_34);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10048880();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013840d Catch@1013840d

void Catch_1013840d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10138421 Catch@10138421

void Catch_10138421(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::ExecuteBuilderUnrealCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138440 FUN_10138440

undefined4 FUN_10138440(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0xf017) {
    FUN_10137d30();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1013849f Catch@1013849f

void Catch_1013849f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101384b3 Catch@101384b3

void Catch_101384b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101384d0 FUN_101384d0

void FUN_101384d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = FArray::Add(in_ECX,1,8);
  iVar1 = *(int *)in_ECX;
  *(undefined4 *)(iVar1 + iVar2 * 8) = *param_1;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = param_1[1];
  return;
}


// ==== 10138500 FUN_10138500

UObject * FUN_10138500(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UChatWindowHandle::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10138530 FUN_10138530

void FUN_10138530(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208ee0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  for (iVar1 = 0; iVar1 < (int)in_ECX[0xb]; iVar1 = iVar1 + 1) {
    if (*(int *)(in_ECX[10] + iVar1 * 8) != 0) {
      FUN_1000a240(1);
    }
  }
  for (iVar1 = 0; iVar1 < (int)in_ECX[0xb]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 10),8,0);
  ExceptionList = local_10;
  return;
}


// ==== 101385c6 Catch@101385c6

void Catch_101385c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101385da Catch@101385da

void Catch_101385da(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMark::ClearData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138600 FUN_10138600

void FUN_10138600(void)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int *in_ECX;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  undefined1 local_34 [20];
  int local_20;
  int local_1c;
  FColor local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10208f3e;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  local_1c = 1;
  *in_ECX = *in_ECX - in_ECX[5];
  if (*in_ECX < 0) {
    *in_ECX = 0;
  }
  iVar2 = FUN_10136cc0(*in_ECX);
  if (iVar2 != 0) {
    local_1c = 0;
  }
  for (; local_20 = iVar4, iVar4 < in_ECX[0xb]; iVar4 = iVar4 + 1) {
    iVar2 = iVar4 * 8;
    piVar1 = (int *)(in_ECX[10] + 4 + iVar2);
    *piVar1 = *piVar1 - in_ECX[5];
    piVar1 = (int *)(in_ECX[10] + 4 + iVar2);
    if (*piVar1 < 0) {
      *piVar1 = 0;
    }
    iVar2 = FUN_10136cc0(*(undefined4 *)(in_ECX[10] + iVar2 + 4));
    if (iVar2 != 0) {
      local_1c = 0;
    }
  }
  if ((in_ECX[1] != 0) && (local_1c != 0)) {
    in_ECX[1] = 0;
    FColor::FColor(&local_18,0xffb09b79);
    FUN_1003f970();
    local_8._0_1_ = 1;
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x39bb8));
    FString::FString(local_4c,puVar3);
    local_8._0_1_ = 2;
    FString::FString(local_40,(ushort *)&DAT_1027c6f8);
    local_8._0_1_ = 3;
    FUN_10040230(local_40,local_4c);
    local_8._0_1_ = 2;
    FString::~FString(local_40);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorR");
    local_8._0_1_ = 4;
    FUN_10040090(local_4c,local_16);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorG");
    local_8._0_1_ = 5;
    FUN_10040090(local_4c,local_17);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorB");
    local_8._0_1_ = 6;
    FUN_10040090(local_4c,local_18);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    FString::FString(local_4c,(ushort *)L"ColorA");
    local_8._0_1_ = 7;
    FUN_10040090(local_4c,local_15);
    local_8._0_1_ = 1;
    FString::~FString(local_4c);
    puVar6 = local_34;
    uVar5 = 0x640;
    FUN_10005c30(0x640,puVar6);
    FUN_100d1790(uVar5,puVar6);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013882e Catch@1013882e

void Catch_1013882e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10138842 Catch@10138842

void Catch_10138842(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMark::ReduceMarkInMatch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138860 FUN_10138860

void FUN_10138860(undefined4 param_1,ushort *param_2)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int *in_ECX;
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
  if (param_2 != (ushort *)0x0) {
    iVar2 = FUN_10136d50(param_1,*in_ECX);
    *in_ECX = *in_ECX + iVar2;
    if ((in_ECX[1] == 0) && (iVar2 = FUN_10136c30(*in_ECX), iVar2 != 0)) {
      in_ECX[1] = 1;
      FUN_10170650(0x3c4,0xffb09b79);
      FUN_10170650(0x436,0xffb09b79);
    }
    while( true ) {
      local_18 = iVar5;
      if (in_ECX[0xb] <= iVar5) {
        FUN_10136e80();
        iVar5 = FUN_10004ed0(0x14);
        local_8._0_1_ = 1;
        if (iVar5 == 0) {
          local_28 = 0;
        }
        else {
          local_28 = FUN_1004f780(param_2);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_24 = in_ECX[8];
        FUN_101384d0(&local_28);
        ExceptionList = local_10;
        return;
      }
      puVar6 = param_2;
      puVar3 = (ushort *)FUN_1004f5c0(0);
      iVar2 = appStrcmp(puVar3,puVar6);
      if (iVar2 == 0) break;
      iVar5 = iVar5 + 1;
    }
    iVar2 = in_ECX[10] + iVar5 * 8;
    iVar4 = FUN_10136df0(*(undefined4 *)(iVar2 + 4));
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + iVar4;
    if ((in_ECX[1] == 0) &&
       (iVar5 = FUN_10136c30(*(undefined4 *)(in_ECX[10] + iVar5 * 8 + 4)), iVar5 != 0)) {
      in_ECX[1] = 1;
      FUN_10170650(0x3c4,0xffb09b79);
      FUN_10170650(0x436,0xffb09b79);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10138a06 Catch@10138a06

void Catch_10138a06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10138a1a Catch@10138a1a

void Catch_10138a1a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMark::UpdateMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138a40 FUN_10138a40

void FUN_10138a40(uint param_1,ushort *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209083;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 != (ushort *)0x0) {
    iVar1 = FUN_10136d50(param_1,*in_ECX);
    *in_ECX = *in_ECX + iVar1;
    if ((in_ECX[1] == 0) && (iVar1 = FUN_10136c30(*in_ECX), iVar1 != 0)) {
      FColor::FColor((FColor *)&param_1,0xffb09b79);
      FUN_1003f970();
      local_8._0_1_ = 1;
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x39b5c));
      FString::FString(local_44,puVar2);
      local_8._0_1_ = 2;
      FString::FString(local_38,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 3;
      FUN_10040230(local_38,local_44);
      local_8._0_1_ = 2;
      FString::~FString(local_38);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 4;
      FUN_10040090(local_44,param_1 >> 0x10 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 5;
      FUN_10040090(local_44,param_1 >> 8 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 6;
      FUN_10040090(local_44,param_1 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 7;
      FUN_10040090(local_44,param_1 >> 0x18);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      FUN_1003faa0();
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3c454));
      FString::FString(local_38,puVar2);
      local_8._0_1_ = 8;
      FString::FString(local_44,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 9;
      FUN_10040230(local_44,local_38);
      local_8._0_1_ = 8;
      FString::~FString(local_44);
      local_8._0_1_ = 1;
      FString::~FString(local_38);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 10;
      FUN_10040090(local_44,param_1 >> 0x10 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 0xb;
      FUN_10040090(local_44,param_1 >> 8 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 0xc;
      FUN_10040090(local_44,param_1 & 0xff);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 0xd;
      FUN_10040090(local_44,param_1 >> 0x18);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      in_ECX[1] = 1;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
    local_18 = 0;
    while( true ) {
      if (in_ECX[0xb] <= local_18) {
        FUN_10136e80();
        param_1 = FUN_10004ed0(0x14);
        local_8._0_1_ = 0x1b;
        if (param_1 == 0) {
          local_28 = 0;
        }
        else {
          local_28 = FUN_1004f780(param_2);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_24 = in_ECX[8];
        FUN_101384d0(&local_28);
        ExceptionList = local_10;
        return;
      }
      iVar1 = local_18 * 8;
      puVar2 = param_2;
      puVar3 = (ushort *)FUN_1004f5c0(0);
      iVar4 = appStrcmp(puVar3,puVar2);
      if (iVar4 == 0) break;
      local_18 = local_18 + 1;
    }
    param_2 = (ushort *)(iVar1 + in_ECX[10]);
    iVar4 = FUN_10136df0(*(undefined4 *)((int)param_2 + 4));
    *(int *)((int)param_2 + 4U) = *(int *)((int)param_2 + 4U) + iVar4;
    if ((in_ECX[1] == 0) &&
       (iVar1 = FUN_10136c30(*(undefined4 *)(in_ECX[10] + iVar1 + 4)), iVar1 != 0)) {
      in_ECX[1] = 1;
      FColor::FColor((FColor *)&param_2,0xffb09b79);
      FUN_1003f970();
      local_8._0_1_ = 0xe;
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x39b5c));
      FString::FString(local_38,puVar2);
      local_8._0_1_ = 0xf;
      FString::FString(local_44,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 0x10;
      FUN_10040230(local_44,local_38);
      local_8._0_1_ = 0xf;
      FString::~FString(local_44);
      local_8._0_1_ = 0xe;
      FString::~FString(local_38);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 0x11;
      FUN_10040090(local_44,(uint)param_2 >> 0x10 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 0x12;
      FUN_10040090(local_44,(uint)param_2 >> 8 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 0x13;
      FUN_10040090(local_44,(uint)param_2 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 0x14;
      FUN_10040090(local_44,(uint)param_2 >> 0x18);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      FUN_1003faa0();
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x3c454));
      FString::FString(local_38,puVar2);
      local_8._0_1_ = 0x15;
      FString::FString(local_44,(ushort *)&DAT_1027c6f8);
      local_8._0_1_ = 0x16;
      FUN_10040230(local_44,local_38);
      local_8._0_1_ = 0x15;
      FString::~FString(local_44);
      local_8._0_1_ = 0xe;
      FString::~FString(local_38);
      FString::FString(local_44,(ushort *)L"ColorR");
      local_8._0_1_ = 0x17;
      FUN_10040090(local_44,(uint)param_2 >> 0x10 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorG");
      local_8._0_1_ = 0x18;
      FUN_10040090(local_44,(uint)param_2 >> 8 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorB");
      local_8._0_1_ = 0x19;
      FUN_10040090(local_44,(uint)param_2 & 0xff);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      FString::FString(local_44,(ushort *)L"ColorA");
      local_8._0_1_ = 0x1a;
      FUN_10040090(local_44,(uint)param_2 >> 0x18);
      local_8._0_1_ = 0xe;
      FString::~FString(local_44);
      puVar6 = local_2c;
      uVar5 = 0x640;
      FUN_10005c30(0x640,puVar6);
      FUN_100d1790(uVar5,puVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1003fff0();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101390c5 Catch@101390c5

void Catch_101390c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101390d9 Catch@101390d9

void Catch_101390d9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMark::UpdateMarkInMatch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139100 FUN_10139100

void FUN_10139100(void)

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
  
  puStack_c = &LAB_102090a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_44 = *(undefined4 *)GError_exref;
  uStack_40 = 0;
  FName::FName((FName *)&uStack_44,0);
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = UObject::StaticConstructObject(&UChatWindowHandle::PrivateStaticClass,pUVar1);
  iVar3 = FUN_10138500(pUVar2);
  *(int *)(in_ECX + 400) = iVar3;
  if (iVar3 == 0) {
    uStack_40 = 0x1013918a;
    appFailAssert("m_pScriptHandle",".\\Src\\NChatWnd.cpp",0x24e);
  }
  UObject::AddToRoot(*(UObject **)(in_ECX + 400));
  UWindowHandle::SetTargetWnd(*(UWindowHandle **)(in_ECX + 400),in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 101391be Catch@101391be

void Catch_101391be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101391d2 Catch@101391d2

void Catch_101391d2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatListBox::CreateScriptHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101391f0 FUN_101391f0

undefined4 FUN_101391f0(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_102090c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10138530();
  if (*(int *)(in_ECX + 0x224) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x224));
    *(undefined4 *)(in_ECX + 0x224) = 0;
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x210); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x20c) + iVar1 * 4) != 0) {
      FUN_1000a240(1);
    }
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1013928f Catch@1013928f

void Catch_1013928f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101392a3 Catch@101392a3

void Catch_101392a3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101392c0 FUN_101392c0

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


// ==== 1013949e Catch@1013949e

void Catch_1013949e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101394b2 Catch@101394b2

void Catch_101394b2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::AddChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101394d0 FUN_101394d0

void FUN_101394d0(wchar_t *param_1)

{
  undefined4 *puVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *_Str1;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
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
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    pwVar3 = param_1;
    do {
      wVar2 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar2 != L'\0');
    if ((uint)((int)pwVar3 - (int)(param_1 + 1) >> 1) < 0x18) {
      if (*param_1 == L'-') {
        return;
      }
      ExceptionList = &local_10;
      for (iVar6 = 0; iVar6 < *(int *)(in_ECX + 0x210); iVar6 = iVar6 + 1) {
        pwVar3 = param_1;
        _Str1 = (wchar_t *)FUN_1004f5c0(0);
        iVar4 = __wcsicmp(_Str1,pwVar3);
        if (iVar4 == 0) {
          uVar5 = *(undefined4 *)(iVar6 * 4 + *(int *)(in_ECX + 0x20c));
          for (; iVar6 < *(int *)(in_ECX + 0x210) + -1; iVar6 = iVar6 + 1) {
            puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x20c) + iVar6 * 4);
            *puVar1 = puVar1[1];
          }
          *(undefined4 *)(*(int *)(in_ECX + 0x20c) + iVar6 * 4) = uVar5;
          *(int *)(in_ECX + 0x218) = *(int *)(in_ECX + 0x210) + -1;
          ExceptionList = local_10;
          return;
        }
      }
      iVar6 = 0;
      local_18 = 0;
      if (*(int *)(in_ECX + 0x210) < 0x40) {
        iVar6 = FUN_10004ed0(0x14);
        local_8._0_1_ = 2;
        if (iVar6 == 0) {
          local_18 = 0;
        }
        else {
          local_18 = FUN_1004f780(param_1);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_100d9a30(&local_18);
      }
      else {
        local_18 = **(int **)(in_ECX + 0x20c);
        if (local_18 != 0) {
          FUN_1000a240(1);
          local_18 = 0;
        }
        for (; iVar6 < *(int *)(in_ECX + 0x210) + -1; iVar6 = iVar6 + 1) {
          puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x20c) + iVar6 * 4);
          *puVar1 = puVar1[1];
        }
        local_18 = FUN_10004ed0(0x14);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_18 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1004f780(param_1);
        }
        *(undefined4 *)(*(int *)(in_ECX + 0x20c) + iVar6 * 4) = uVar5;
      }
      *(int *)(in_ECX + 0x218) = *(int *)(in_ECX + 0x210) + -1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101396cd Catch@101396cd

void Catch_101396cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101396e1 Catch@101396e1

void Catch_101396e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::AddWhisperName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139700 FUN_10139700

void FUN_10139700(int param_1)

{
  int in_ECX;
  FString *this;
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
  
  puStack_c = &LAB_102091c4;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 0x210) < 1) goto LAB_1013985b;
    uVar1 = FUN_1004f5c0(0);
    FString::Printf((ushort *)local_34,L"\"%s ",uVar1);
    local_8._0_1_ = 4;
    FUN_1003f970();
    local_8._0_1_ = 5;
    FString::FString(local_40,(ushort *)L"String");
    local_8._0_1_ = 6;
    FUN_10040230(local_40,local_34);
    local_8._0_1_ = 5;
    FString::~FString(local_40);
    puVar2 = local_28;
    uVar1 = 0x230;
    FUN_10005c30(0x230,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8._0_1_ = 4;
    FUN_1003fff0();
    this = local_34;
  }
  else {
    local_14 = (undefined1 *)&uStack_50;
    FString::Printf((ushort *)local_40,L"\"%s ",param_1);
    local_8._0_1_ = 1;
    FUN_1003f970();
    local_8._0_1_ = 2;
    FString::FString(local_34,(ushort *)L"String");
    local_8._0_1_ = 3;
    FUN_10040230(local_34,local_40);
    local_8._0_1_ = 2;
    FString::~FString(local_34);
    puVar2 = local_28;
    uVar1 = 0x230;
    FUN_10005c30(0x230,puVar2);
    FUN_100d1790(uVar1,puVar2);
    local_8._0_1_ = 1;
    FUN_1003fff0();
    this = local_40;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(this);
LAB_1013985b:
  *(undefined4 *)(in_ECX + 0x21c) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 10139880 Catch@10139880

void Catch_10139880(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10139894 Catch@10139894

void Catch_10139894(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::AttachWhisperName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101398c0 FUN_101398c0

void FUN_101398c0(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  FString *pFVar6;
  int in_ECX;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pvVar3 = ExceptionList;
  puStack_c = &LAB_10209249;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x21c) != 0) {
    if (param_1 == 0) {
      iVar4 = *(int *)(in_ECX + 0x210);
      iVar2 = *(int *)(in_ECX + 0x218);
      if (iVar2 == iVar4 + -1) {
        *(int *)(in_ECX + 0x218) = iVar2 + 1;
        local_14 = (undefined1 *)&uStack_50;
        FString::FString(local_28);
        local_8._0_1_ = 5;
        pFVar6 = (FString *)FString::Printf((ushort *)local_40,&DAT_1022dde0,PTR_DAT_10350e28);
        local_8._0_1_ = 6;
        FString::operator=(local_28,pFVar6);
        local_8._0_1_ = 5;
        FString::~FString(local_40);
        FUN_1003f970();
        local_8._0_1_ = 7;
        FString::FString(local_40,(ushort *)L"String");
        local_8._0_1_ = 8;
        FUN_10040230(local_40,local_28);
        local_8._0_1_ = 7;
        FString::~FString(local_40);
        pFVar6 = local_34;
        uVar5 = 0x230;
        FUN_10005c30(0x230,pFVar6);
        FUN_100d1790(uVar5,pFVar6);
        local_8._0_1_ = 5;
        FUN_1003fff0();
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
      }
      else if (iVar2 <= iVar4 + -1) {
        *(int *)(in_ECX + 0x218) = iVar2 + 1;
        if (iVar4 + -1 < iVar2 + 1) {
          *(int *)(in_ECX + 0x218) = iVar4 + -1;
        }
        if (iVar4 < 1) {
          ExceptionList = pvVar3;
          return;
        }
        iVar4 = FUN_1004f5c0(0);
        if (iVar4 == 0) {
          ExceptionList = local_10;
          return;
        }
        FString::FString(local_28);
        local_8._0_1_ = 9;
        uVar5 = FUN_1004f5c0(0);
        pFVar6 = (FString *)FString::Printf((ushort *)local_40,L"%s%s ",PTR_DAT_10350e28,uVar5);
        local_8._0_1_ = 10;
        FString::operator=(local_28,pFVar6);
        local_8._0_1_ = 9;
        FString::~FString(local_40);
        FUN_1003f970();
        local_8._0_1_ = 0xb;
        FString::FString(local_40,(ushort *)L"String");
        local_8._0_1_ = 0xc;
        FUN_10040230(local_40,local_28);
        local_8._0_1_ = 0xb;
        FString::~FString(local_40);
        pFVar6 = local_34;
        uVar5 = 0x230;
        FUN_10005c30(0x230,pFVar6);
        FUN_100d1790(uVar5,pFVar6);
        local_8._0_1_ = 9;
        FUN_1003fff0();
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
        ExceptionList = local_10;
        return;
      }
      ExceptionList = local_10;
      return;
    }
    piVar1 = (int *)(in_ECX + 0x218);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(in_ECX + 0x218) = 0;
    }
    if ((0 < *(int *)(in_ECX + 0x210)) &&
       (local_14 = (undefined1 *)&uStack_50, iVar4 = FUN_1004f5c0(0), iVar4 != 0)) {
      FString::FString(local_34);
      local_8._0_1_ = 1;
      uVar5 = FUN_1004f5c0(0);
      pFVar6 = (FString *)FString::Printf((ushort *)local_40,L"%s%s ",PTR_DAT_10350e28,uVar5);
      local_8._0_1_ = 2;
      FString::operator=(local_34,pFVar6);
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      FUN_1003f970();
      local_8._0_1_ = 3;
      FString::FString(local_40,(ushort *)L"String");
      local_8._0_1_ = 4;
      FUN_10040230(local_40,local_34);
      local_8._0_1_ = 3;
      FString::~FString(local_40);
      pFVar6 = local_28;
      uVar5 = 0x230;
      FUN_10005c30(0x230,pFVar6);
      FUN_100d1790(uVar5,pFVar6);
      local_8._0_1_ = 1;
      FUN_1003fff0();
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10139c1c Catch@10139c1c

void Catch_10139c1c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10139c30 Catch@10139c30

void Catch_10139c30(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::ChangeWhisperName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139c50 FUN_10139c50

/* WARNING: Type propagation algorithm not settling */

void FUN_10139c50(undefined4 param_1,undefined4 param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  size_t _Count;
  void *local_914;
  undefined1 *puStack_910;
  undefined4 local_90c;
  wchar_t local_908 [1024];
  wchar_t local_108 [128];
  uint local_8;
  
  puStack_910 = &LAB_10209270;
  local_914 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_908;
  ExceptionList = &local_914;
  iVar5 = 0;
  local_90c = 0;
  FUN_10137b70(local_908,param_1);
  iVar2 = appStrlen((ushort *)local_908);
  if (iVar2 == 0) goto LAB_1013a04b;
  pwVar4 = local_908 + 1;
  iVar2 = *(int *)GIsOldChat_exref;
  if (iVar2 == 0) {
    switch(param_2) {
    case 0:
      break;
    case 1:
      iVar5 = 8;
      break;
    case 2:
      iVar5 = 3;
      break;
    case 3:
      iVar5 = 4;
      break;
    case 4:
      iVar5 = 9;
      break;
    default:
      goto switchD_10139cdc_default;
    }
  }
switchD_10139cdc_default:
  if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e20) ||
     (local_908[0] == *(wchar_t *)PTR_DAT_10350e24)) {
    iVar5 = 1;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e38) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e3c)) {
    iVar5 = 4;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e30) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e34)) {
    iVar5 = 3;
  }
  else if (((local_908[0] == L'＂') || (local_908[0] == *(wchar_t *)PTR_DAT_10350e28)) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e2c)) {
    iVar5 = 2;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e48) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e4c)) {
    iVar5 = 6;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e50) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e54)) {
    iVar5 = 7;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e58) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e5c)) {
    iVar5 = 8;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e60) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e64)) {
    iVar5 = 9;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350ea0) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350ea4)) {
    iVar5 = 0x11;
  }
  else if (((local_908[0] == *(wchar_t *)PTR_DAT_10350e90) &&
           (local_908[1] == *(short *)(PTR_DAT_10350e90 + 2))) ||
          ((local_908[0] == *(wchar_t *)PTR_DAT_10350e94 &&
           (local_908[1] == *(short *)(PTR_DAT_10350e94 + 2))))) {
    iVar5 = 0xf;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e98) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e9c)) {
    iVar5 = 0x10;
  }
  if (iVar2 == 0) {
    if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e18) ||
       (local_908[0] == *(wchar_t *)PTR_DAT_10350e1c)) {
      iVar5 = 0;
    }
LAB_10139ec4:
    if (iVar5 == 2) {
      for (_Count = 0; (pwVar4[_Count] != L' ' && (pwVar4[_Count] != L'\x3000'));
          _Count = _Count + 1) {
        pwVar3 = pwVar4;
        do {
          wVar1 = *pwVar3;
          pwVar3 = pwVar3 + 1;
        } while (wVar1 != L'\0');
        if ((int)pwVar3 - (int)(local_908 + 2) >> 1 <= (int)_Count) break;
      }
      if (_Count == 0) {
        pwVar4 = local_908;
        iVar2 = appStrlen((ushort *)local_908);
        FUN_10138860(iVar2,pwVar4);
        iVar2 = FUN_10136f10();
        if (iVar2 == 0) {
          FUN_10141990(2,local_908,0);
        }
        else {
          FUN_10170650(0x3c6,0xffb09b79);
        }
        goto LAB_1013a04b;
      }
      _wcsncpy(local_108,pwVar4,_Count);
      local_108[_Count] = L'\0';
      pwVar4 = local_908;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      if (((int)pwVar4 - (int)(local_908 + 1) >> 1 <= (int)(_Count + 2)) ||
         (pwVar4 = local_908 + _Count + 2, pwVar4 == (wchar_t *)0x0)) goto LAB_1013a04b;
      FUN_10137a90(local_108);
      FUN_101394d0(local_108);
      pwVar3 = pwVar4;
      iVar2 = appStrlen((ushort *)pwVar4);
      FUN_10138860(iVar2,pwVar3);
      iVar2 = FUN_10136f10();
      if (iVar2 == 0) {
        FUN_10141990(2,pwVar4,local_108);
        local_90c = 0xffffffff;
        goto LAB_1013a04b;
      }
      goto LAB_1013a2be;
    }
    if ((iVar5 != 0) || (iVar2 == 0)) {
      if (iVar2 == 0) {
        if (((local_908[0] == *(wchar_t *)PTR_DAT_10350e90) &&
            (local_908[1] == *(short *)(PTR_DAT_10350e90 + 2))) ||
           ((local_908[0] == *(wchar_t *)PTR_DAT_10350e94 &&
            (local_908[1] == *(short *)(PTR_DAT_10350e94 + 2))))) {
LAB_1013a217:
          pwVar4 = local_908 + 2;
        }
        else if ((((((((local_908[0] == *(wchar_t *)PTR_DAT_10350e20) ||
                      (local_908[0] == *(wchar_t *)PTR_DAT_10350e24)) ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e38)) ||
                    ((local_908[0] == *(wchar_t *)PTR_DAT_10350e3c ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e30)))) ||
                   (local_908[0] == *(wchar_t *)PTR_DAT_10350e34)) ||
                  (((local_908[0] == *(wchar_t *)PTR_DAT_10350e28 ||
                    (local_908[0] == *(wchar_t *)PTR_DAT_10350e2c)) ||
                   ((local_908[0] == *(wchar_t *)PTR_DAT_10350e48 ||
                    (((local_908[0] == *(wchar_t *)PTR_DAT_10350e4c ||
                      (local_908[0] == *(wchar_t *)PTR_DAT_10350e50)) ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e54)))))))) ||
                 ((local_908[0] == *(wchar_t *)PTR_DAT_10350e58 ||
                  (local_908[0] == *(wchar_t *)PTR_DAT_10350e5c)))) ||
                ((local_908[0] == *(wchar_t *)PTR_DAT_10350e60 ||
                 ((((local_908[0] == *(wchar_t *)PTR_DAT_10350e64 ||
                    (local_908[0] == *(wchar_t *)PTR_DAT_10350e18)) ||
                   ((local_908[0] == *(wchar_t *)PTR_DAT_10350e1c ||
                    (((local_908[0] == *(wchar_t *)PTR_DAT_10350ea0 ||
                      (local_908[0] == *(wchar_t *)PTR_DAT_10350ea4)) ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e98)))))) ||
                  (pwVar4 = local_908, local_908[0] == *(wchar_t *)PTR_DAT_10350e9c)))))) {
          pwVar4 = local_908 + 1;
        }
      }
      else if (((local_908[0] == *(wchar_t *)PTR_DAT_10350e90) &&
               (local_908[1] == *(short *)(PTR_DAT_10350e90 + 2))) ||
              ((local_908[0] == *(wchar_t *)PTR_DAT_10350e94 &&
               (local_908[1] == *(short *)(PTR_DAT_10350e94 + 2))))) goto LAB_1013a217;
      if (*pwVar4 != L'\0') {
        if ((iVar5 == 1) || (iVar5 == 8)) {
          pwVar3 = pwVar4;
          iVar2 = appStrlen((ushort *)pwVar4);
          FUN_10138860(iVar2,pwVar3);
          iVar2 = FUN_10136f10();
          if (iVar2 != 0) goto LAB_1013a2be;
        }
        else if (iVar5 == 0) {
          pwVar3 = pwVar4;
          iVar2 = appStrlen((ushort *)pwVar4);
          FUN_10138860(iVar2,pwVar3);
          iVar2 = FUN_10136f10();
          if (iVar2 == 0) {
            FUN_10141990(0,pwVar4,0);
            local_90c = 0xffffffff;
            goto LAB_1013a04b;
          }
          goto LAB_1013a2be;
        }
        FUN_10141990(iVar5,pwVar4,0);
        local_90c = 0xffffffff;
        goto LAB_1013a04b;
      }
    }
  }
  else {
    if (iVar5 != 0) goto LAB_10139ec4;
    pwVar4 = local_908;
    iVar2 = appStrlen((ushort *)local_908);
    FUN_10138860(iVar2,pwVar4);
    iVar2 = FUN_10136f10();
    if (iVar2 == 0) {
      FUN_10141990(0,local_908,0);
      local_90c = 0xffffffff;
      goto LAB_1013a04b;
    }
LAB_1013a2be:
    FUN_10170650(0x3c6,0xffb09b79);
  }
  local_90c = 0xffffffff;
LAB_1013a04b:
  ExceptionList = local_914;
  __security_check_cookie(local_8 ^ (uint)local_908);
  return;
}


// ==== 1013a2d9 Catch@1013a2d9

void Catch_1013a2d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1013a2ed Catch@1013a2ed

void Catch_1013a2ed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::ProcessNonCommandChatString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013a320 FUN_1013a320

void FUN_1013a320(undefined1 *param_1)

{
  FL2ReplayManager *pFVar1;
  APawn *this;
  int iVar2;
  FL2MagicSkillData *pFVar3;
  FL2MagicSkillCommandData *pFVar4;
  User *this_00;
  short *psVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  int in_ECX;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  FString *pFVar12;
  uint local_da0;
  undefined4 local_d90 [2];
  undefined4 local_d88;
  undefined4 local_d84;
  undefined4 local_d80;
  undefined4 local_cdc [2];
  undefined4 local_cd4;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined4 local_c28;
  undefined4 local_c24;
  undefined4 local_c1c;
  undefined4 local_c18;
  undefined4 local_b74;
  undefined4 local_b70;
  undefined4 local_b68;
  undefined4 local_b64;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined4 local_ab8;
  undefined4 local_ab4;
  undefined4 local_ab0;
  undefined4 local_a0c;
  undefined4 local_a08;
  undefined4 local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  FString local_958 [12];
  FString local_94c [12];
  FString local_940 [16];
  FString local_930 [12];
  FString local_924 [12];
  FString local_918 [19];
  char local_905;
  APawn *local_904;
  int local_900;
  ushort local_8fc [1024];
  ushort local_fc [100];
  ushort local_34 [4];
  L2ParamStack local_2c [4];
  undefined1 local_28 [16];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10209425;
  local_10 = ExceptionList;
  local_da0 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_da0;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = local_da0;
  local_904 = (APawn *)FUN_1014ddb0();
  if ((local_904 != (APawn *)0x0) && (*(int *)(local_904 + 0x62c) == 6)) {
    *(undefined4 *)(local_904 + 0x62c) = 0;
    goto LAB_1013a37f;
  }
  appMemset(local_fc,0,200);
  FUN_1014dd00();
  switch(param_1) {
  case (undefined1 *)0x1:
    puVar7 = FParser::GetRemainStr((FParser *)(in_ECX + 0x25c));
    FUN_1003f970();
    local_8._0_1_ = 1;
    if (puVar7 != (ushort *)0x0) {
      FString::FString(local_94c,puVar7);
      local_8._0_1_ = 2;
      FString::FString(local_958,(ushort *)L"Message");
      local_8._0_1_ = 3;
      FUN_10040230(local_958,local_94c);
      local_8._0_1_ = 2;
      FString::~FString(local_958);
      local_8._0_1_ = 1;
      FString::~FString(local_94c);
    }
    puVar10 = local_28;
    uVar6 = 0x781;
    FUN_10005c30(0x781,puVar10);
    FUN_100d1790(uVar6,puVar10);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
    local_8 = -1;
    break;
  case (undefined1 *)0x2:
    FUN_10144db0();
    local_8 = -1;
    break;
  case (undefined1 *)0x3:
    FUN_10144dc0();
    local_8 = -1;
    break;
  case (undefined1 *)0x4:
    FUN_10144120(0);
    local_8 = -1;
    break;
  case (undefined1 *)0x5:
    FUN_10144120(1);
    local_8 = -1;
    break;
  case (undefined1 *)0x6:
    FUN_10144130(0);
    local_8 = -1;
    break;
  case (undefined1 *)0x7:
    FUN_10144130(1);
    local_8 = -1;
    break;
  case (undefined1 *)0x8:
    iVar2 = FUN_1014ddd0();
    iVar8 = FUN_1014dd00();
    if ((iVar8 != 0) && (iVar2 != 0)) {
      uVar6 = 0;
LAB_1013a530:
      iVar8 = *(int *)(iVar8 + 0x204);
      FUN_1014ca10(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar8 + 0x1bc),
                   *(undefined4 *)(iVar8 + 0x1c0),*(undefined4 *)(iVar8 + 0x1c4),0,uVar6);
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x9:
    iVar8 = FUN_1014ddd0();
    iVar2 = FUN_1014dd00();
    if ((iVar2 != 0) && (iVar8 != 0)) {
      iVar2 = *(int *)(iVar2 + 0x204);
      FUN_101440d0(*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar2 + 0x1bc),
                   *(undefined4 *)(iVar2 + 0x1c0),*(undefined4 *)(iVar2 + 0x1c4));
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xa:
    iVar2 = FUN_1014ddd0();
    iVar8 = FUN_1014dd00();
    if ((iVar8 != 0) && (iVar2 != 0)) {
      uVar6 = 1;
      goto LAB_1013a530;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xb:
    iVar8 = FUN_1014ddd0();
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x204) != 0)) {
      FUN_101430e0(*(undefined4 *)(*(int *)(iVar8 + 0x204) + 0x60));
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xc:
    local_900 = in_ECX + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) {
LAB_1013a655:
      uVar11 = 0;
      uVar9 = 5;
      uVar6 = 0xffb09b79;
      puVar7 = FString::operator*((FString *)(GL2GameData_exref + 0x4044c));
      FUN_101392c0(puVar7,uVar6,uVar9,uVar11);
      local_8 = -1;
      break;
    }
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    if (((local_fc[0] != 0) && (iVar8 = FUN_10145900(local_fc), iVar8 != 0)) &&
       (*(int *)(iVar8 + 0x204) != 0)) {
      FUN_1014c6a0(*(undefined4 *)(iVar8 + 0x18));
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0xd:
    iVar8 = FUN_1014ddd0();
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x204) == 0)) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x204) + 0x60);
    }
    FUN_1014c7c0(200,uVar6);
    local_8 = -1;
    break;
  case (undefined1 *)0xe:
    FUN_1014c720(200,0xffffffff);
    local_8 = -1;
    break;
  case (undefined1 *)0xf:
    FUN_1015a770();
    local_8 = -1;
    break;
  case (undefined1 *)0x10:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
        FUN_10170650(0xb9,0xffb09b79);
        local_8 = -1;
        break;
      }
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,7);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      L2ParamStack::PushBack(local_2c,*(void **)GL2PartyLooting_exref);
      FUN_10144860(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,6);
      L2ParamStack::PushBack(local_2c,psVar5);
      L2ParamStack::PushBack(local_2c,*(void **)GL2PartyLooting_exref);
      FUN_10144860(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x11:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_10144880(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x12:
    puVar7 = (ushort *)FUN_10135980();
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    if (local_fc[0] == 0) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 != 0) && (*(int *)(iVar8 + 8) == 0)) {
        appStrcpy(local_fc,(ushort *)(iVar8 + 0x1c));
      }
      if (local_fc[0] == 0) {
        FUN_10170650(0xbb,0xffb09b79);
        local_8 = -1;
        break;
      }
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,9);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_10144890(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x13:
    FUN_10145240();
    local_8 = -1;
    break;
  case (undefined1 *)0x14:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 10;
    L2ParamStack::PushBack(local_2c,(void *)0x1);
    L2ParamStack::PushBack(local_2c,(void *)0xffffffff);
    L2ParamStack::PushBack(local_2c,(void *)0x1);
    FUN_10149af0(local_2c);
    FString::FString(local_940,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 0xb;
    pFVar12 = local_940;
    uVar6 = 0x65e;
    FUN_10005c30(0x65e,pFVar12);
    FUN_100d1790(uVar6,pFVar12);
    local_8 = CONCAT31(local_8._1_3_,10);
    FString::~FString(local_940);
    goto LAB_1013bd7b;
  case (undefined1 *)0x15:
    FUN_10144110(2);
    local_8 = -1;
    break;
  case (undefined1 *)0x16:
    FUN_10144110(3);
    local_8 = -1;
    break;
  case (undefined1 *)0x17:
    FUN_10144110(4);
    local_8 = -1;
    break;
  case (undefined1 *)0x18:
    local_900 = in_ECX + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    pFVar4 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_fc);
    if (pFVar4 != (FL2MagicSkillCommandData *)0x0) {
      pFVar3 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,*(int *)pFVar4,1);
      this = local_904;
      if (*(int *)(pFVar3 + 0x30) != 0xc) {
        L2ParamStack::L2ParamStack(local_2c,10);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        L2ParamStack::PushBack(local_2c,*(void **)pFVar4);
        L2ParamStack::PushBack(local_2c,(void *)0x0);
        L2ParamStack::PushBack(local_2c,(void *)0x0);
        FUN_10143b50(local_2c);
        goto LAB_1013bd7b;
      }
      if (*(int *)(local_904 + 0x62c) != 5) {
        (**(code **)(**(int **)(local_904 + 0x14d8) + 800))();
        APawn::NActionStop(this);
        *(undefined4 *)(this + 0x62c) = 6;
        *(undefined4 *)(this + 0x648) = *(undefined4 *)pFVar4;
        local_8 = -1;
        break;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x19:
    local_900 = in_ECX + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    pFVar4 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_fc);
    if (pFVar4 != (FL2MagicSkillCommandData *)0x0) {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      L2ParamStack::PushBack(local_2c,*(void **)pFVar4);
      L2ParamStack::PushBack(local_2c,(void *)0x1);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      FUN_10143b50(local_2c);
      goto LAB_1013bd7b;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1a:
    local_900 = in_ECX + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    pFVar4 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_fc);
    if (pFVar4 != (FL2MagicSkillCommandData *)0x0) {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      L2ParamStack::PushBack(local_2c,*(void **)pFVar4);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      L2ParamStack::PushBack(local_2c,(void *)0x1);
      FUN_10143b50(local_2c);
      goto LAB_1013bd7b;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1b:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        uVar6 = 0;
LAB_1013aed5:
        uVar9 = 0;
LAB_1013aed6:
        FUN_10171680(iVar8 + -0xd + (int)local_904 * 0xc,uVar9,uVar6);
        local_8 = -1;
        break;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1c:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        uVar6 = 0;
        uVar9 = 1;
        goto LAB_1013aed6;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1d:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        uVar6 = 1;
        goto LAB_1013aed5;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x1e:
    iVar8 = FUN_1014ddd0();
    if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
      FUN_10170650(0x1ff,0xffb09b79);
      local_8 = -1;
      break;
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    L2ParamStack::PushBack(local_2c,*(void **)(*(int *)(iVar8 + 0x204) + 0x60));
    FUN_10170650(0x1fe,0xffb09b79);
    FUN_10144460(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x1f:
    FUN_1000ef40();
    local_8._0_1_ = 0x10;
    local_d90[0] = 0x31;
    local_d84 = 1;
    local_d80 = 0;
    local_d88 = *(undefined4 *)(in_ECX + 0xb8);
    FUN_1000dd30(0x200);
    FUN_1016e1b0(local_d90);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x20:
    FUN_1000ef40();
    local_8._0_1_ = 0x11;
    local_ac0 = 0x32;
    local_ab4 = 1;
    local_ab0 = 1;
    local_abc = 0;
    local_ab8 = *(undefined4 *)(in_ECX + 0xb8);
    FUN_1000dd30(0x201);
    FUN_1016e1b0(&local_ac0);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x21:
    FUN_1000ef40();
    local_8._0_1_ = 0x12;
    local_cdc[0] = 0x30;
    local_cd0 = 1;
    local_ccc = 0;
    local_cd4 = *(undefined4 *)(in_ECX + 0xb8);
    FUN_1000dd30(0x202);
    FUN_1016e1b0(local_cdc);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x22:
    FUN_1000ef40();
    local_8._0_1_ = 0x13;
    local_a0c = 0x2f;
    local_a00 = 1;
    local_9fc = 1;
    local_a08 = 0;
    local_a04 = *(undefined4 *)(in_ECX + 0xb8);
    FUN_1000dd30(0x203);
    FUN_1016e1b0(&local_a0c);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x23:
    FUN_10144490();
    local_8 = -1;
    break;
  case (undefined1 *)0x24:
    local_900 = in_ECX + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_101447b0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x25:
    FUN_101447e0();
    local_8 = -1;
    break;
  case (undefined1 *)0x26:
    local_900 = in_ECX + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x15);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_101447c0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x27:
    FUN_10145290();
    local_8 = -1;
    break;
  case (undefined1 *)0x28:
  case (undefined1 *)0x29:
  case (undefined1 *)0x2a:
  case (undefined1 *)0x44:
  case (undefined1 *)0x61:
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x2b:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    L2ParamStack::PushBack(local_2c,(void *)0x2);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x2c:
    puVar7 = (ushort *)FUN_10135980();
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    if (local_fc[0] == 0) {
      this_00 = (User *)FUN_1014ddd0();
      if ((this_00 == (User *)0x0) || (*(int *)(this_00 + 8) != 0)) goto LAB_1013a655;
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      puVar7 = User::GetName(this_00);
      L2ParamStack::PushBack(local_2c,puVar7);
      FUN_101447f0(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x19);
      L2ParamStack::PushBack(local_2c,(void *)0x0);
      L2ParamStack::PushBack(local_2c,local_fc);
      FUN_101447f0(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x2d:
    local_900 = in_ECX + 0x25c;
    puVar7 = (ushort *)FUN_10135980();
    if (puVar7 == (ushort *)0x0) goto LAB_1013a655;
    while (puVar7 != (ushort *)0x0) {
      FUN_10135a20(puVar7);
      appStrcat(local_fc,puVar7);
      puVar7 = (ushort *)FUN_10135980();
      if (puVar7 == (ushort *)0x0) break;
      appStrcat(local_fc,&DAT_1023d5d0);
    }
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    L2ParamStack::PushBack(local_2c,(void *)0x1);
    L2ParamStack::PushBack(local_2c,local_fc);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x2e:
    FUN_10144110(5);
    local_8 = -1;
    break;
  case (undefined1 *)0x2f:
    FUN_10144110(6);
    local_8 = -1;
    break;
  case (undefined1 *)0x30:
    FUN_10144110(7);
    local_8 = -1;
    break;
  case (undefined1 *)0x31:
    FUN_10144110(8);
    local_8 = -1;
    break;
  case (undefined1 *)0x32:
    FUN_10144110(9);
    local_8 = -1;
    break;
  case (undefined1 *)0x33:
    FUN_10144110(10);
    local_8 = -1;
    break;
  default:
    if (param_1 < IMAGE_DOS_HEADER_10000000.e_magic + 1) {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x28);
      L2ParamStack::PushBack(local_2c,param_1);
      FUN_101453e0(local_2c);
      goto LAB_1013bd7b;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x35:
    FUN_101453f0();
    local_8 = -1;
    break;
  case (undefined1 *)0x36:
    FUN_10144110(0xb);
    local_8 = -1;
    break;
  case (undefined1 *)0x37:
    FUN_10144110(0xc);
    local_8 = -1;
    break;
  case (undefined1 *)0x38:
    FUN_10144110(0xd);
    local_8 = -1;
    break;
  case (undefined1 *)0x39:
    FUN_10170860(0,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x3a:
    FUN_10170860(1,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x3b:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    L2ParamStack::PushBack(local_2c,(void *)0x25);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_101440c0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x3c:
    FUN_10170860(0x26,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x3f:
    FUN_10170860(0xf,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x40:
    FUN_10170860(0x10,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x41:
    FUN_10170860(0x11,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x42:
    FUN_10144c60(200,0xffffffff);
    local_8 = -1;
    break;
  case (undefined1 *)0x43:
    FUN_10170860(0x13,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x45:
    FUN_10170860(0x15,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x46:
    FUN_10170860(0x16,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x47:
    FUN_10170860(0x17,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x4b:
    FUN_10170860(0x28,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x4e:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    L2ParamStack::PushBack(local_2c,(void *)0x3);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x4f:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    L2ParamStack::PushBack(local_2c,(void *)0x4);
    FUN_101447f0(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x50:
    iVar8 = FUN_10135980();
    FUN_10135a20(iVar8);
    if ((iVar8 != 0) &&
       (local_904 = (APawn *)thunk_FUN_101c1b01(iVar8), local_904 + -1 < (APawn *)0xa)) {
      iVar8 = FUN_10135980();
      FUN_10135a20(iVar8);
      if ((iVar8 != 0) && (iVar8 = thunk_FUN_101c1b01(iVar8), iVar8 - 1U < 0xc)) {
        FUN_1015a2d0(iVar8 + -0xd + (int)local_904 * 0xc);
        local_8 = -1;
        break;
      }
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x54:
    uVar6 = FUN_10135980();
    (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x98))(uVar6);
    local_8 = -1;
    break;
  case (undefined1 *)0x55:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
        FUN_10170650(0x578,0xffb09b79);
        local_8 = -1;
        break;
      }
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,5);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      FUN_10149690(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,4);
      L2ParamStack::PushBack(local_2c,psVar5);
      FUN_10149690(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x56:
    FUN_1000ef40();
    local_8._0_1_ = 0x1e;
    local_c28 = 0x12;
    local_c1c = 1;
    local_c18 = 1;
    local_c24 = 0;
    FUN_1000dd30(0x5fb);
    FUN_1016e1b0(&local_c28);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x57:
    FUN_1000ef40();
    local_8._0_1_ = 0x1f;
    local_b74 = 0x14;
    local_b68 = 1;
    local_b64 = 1;
    local_b70 = 0;
    FUN_1000dd30(0x5fc);
    FUN_1016e1b0(&local_b74);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000e440();
    local_8 = -1;
    break;
  case (undefined1 *)0x5b:
    FUN_101441a0();
    local_8 = -1;
    break;
  case (undefined1 *)0x5e:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) {
LAB_1013b913:
        FUN_10170650(0x5fa,0xffb09b79);
        local_8 = -1;
        break;
      }
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x21);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      FUN_10143a10(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x20);
      L2ParamStack::PushBack(local_2c,psVar5);
      FUN_10143a10(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x5f:
    psVar5 = (short *)FUN_10135980();
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      iVar8 = FUN_1014ddd0();
      if ((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) goto LAB_1013b913;
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x23);
      L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
      FUN_10143a30(local_2c);
    }
    else {
      L2ParamStack::L2ParamStack(local_2c,10);
      local_8 = CONCAT31(local_8._1_3_,0x22);
      L2ParamStack::PushBack(local_2c,psVar5);
      FUN_10143a30(local_2c);
    }
    goto LAB_1013bd7b;
  case (undefined1 *)0x62:
    puVar7 = FParser::GetRemainStr((FParser *)(in_ECX + 0x25c));
    if (puVar7 == (ushort *)0x0) {
      local_8fc[0] = 0;
    }
    else {
      appStrncpy(local_8fc,puVar7,0x3ff);
    }
    iVar8 = appStrlen(local_8fc);
    if (iVar8 != 0) {
      iVar8 = FUN_1014cff0(local_8fc);
      if (iVar8 != 0) {
        FUN_10170650(0xcc,0xffb09b79);
        local_8 = -1;
        break;
      }
      FString::FString(local_918,puVar7);
      local_8._0_1_ = 0x24;
      iVar8 = FUN_10064bd0(local_918);
      local_905 = 0x10 < iVar8;
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_918);
      if (local_905 != '\0') {
        FUN_10170650(0x50,0xffb09b79);
        local_8 = -1;
        break;
      }
    }
    iVar8 = FUN_1014dd00();
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x25);
    L2ParamStack::PushBack(local_2c,(void *)(iVar8 + 0x1c));
    L2ParamStack::PushBack(local_2c,puVar7);
    FUN_10144280(local_2c);
    goto LAB_1013bd7b;
  case (undefined1 *)0x65:
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    L2ParamStack::PushBack(local_2c,(void *)0x33);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    L2ParamStack::PushBack(local_2c,(void *)0x0);
    FUN_101440c0(local_2c);
LAB_1013bd7b:
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_2c);
switchD_1013a3ca_caseD_28:
    local_8 = -1;
    break;
  case (undefined1 *)0x67:
    pFVar1 = *(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198);
    if (pFVar1 != (FL2ReplayManager *)0x0) {
      FL2ReplayManager::OnSaveStart(pFVar1);
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x68:
    pFVar1 = *(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198);
    if (pFVar1 != (FL2ReplayManager *)0x0) {
      FL2ReplayManager::OnSaveStop(pFVar1);
      local_8 = -1;
      break;
    }
    goto switchD_1013a3ca_caseD_28;
  case (undefined1 *)0x69:
    FUN_10170860(0x37,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6a:
    FUN_10170860(0x36,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6b:
    FUN_10170860(0x35,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6c:
    FUN_10170860(0x34,0,0);
    local_8 = -1;
    break;
  case (undefined1 *)0x6f:
  case (undefined1 *)0x71:
    puVar7 = FParser::GetRemainStr((FParser *)(in_ECX + 0x25c));
    if (puVar7 == (ushort *)0x0) {
      iVar8 = FUN_1014ddd0();
      if (((iVar8 == 0) || (*(int *)(iVar8 + 8) != 0)) || (*(int *)(iVar8 + 0xc) != 0))
      goto switchD_1013a3ca_caseD_28;
      puVar7 = (ushort *)(iVar8 + 0x1c);
    }
    appStrncpy(local_34,puVar7,0xc);
    if (param_1 == (undefined1 *)0x6f) {
      FString::FString(local_924,local_34);
      local_8._0_1_ = 0x26;
      FUN_101445d0(local_924,0);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_924);
      local_8 = -1;
    }
    else {
      FString::FString(local_930,local_34);
      local_8._0_1_ = 0x27;
      FUN_101445d0(local_930,1);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_930);
      local_8 = -1;
    }
    break;
  case (undefined1 *)0x70:
    FUN_10144710();
    local_8 = -1;
  }
LAB_1013a37f:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1013bd93 Catch@1013bd93

void Catch_1013bd93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x908) = *(undefined4 *)(unaff_EBP + -0x930);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x908,&DAT_102a47f0);
}


// ==== 1013bdb0 Catch@1013bdb0

void Catch_1013bdb0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::ExecuteCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013bf90 FUN_1013bf90

undefined4 FUN_1013bf90(int param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209450;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 3) {
    ExceptionList = &local_10;
    FUN_10139700(0);
  }
  else {
    if (param_1 == 4) {
      uVar1 = 1;
    }
    else {
      if (param_1 != 5) {
        return 1;
      }
      uVar1 = 0;
    }
    ExceptionList = &local_10;
    FUN_101398c0(uVar1);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1013c001 Catch@1013c001

void Catch_1013c001(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c015 Catch@1013c015

void Catch_1013c015(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::OnChatEditBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c040 FUN_1013c040

void FUN_1013c040(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x21c) = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x210); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x20c) + iVar1 * 4) != 0) {
      FUN_1000a240(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x210); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x20c),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 1013c0dc Catch@1013c0dc

void Catch_1013c0dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1013c0f0 Catch@1013c0f0

void Catch_1013c0f0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c110 FUN_1013c110

void FUN_1013c110(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209499;
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


// ==== 1013c1b0 FUN_1013c1b0

void FUN_1013c1b0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102094d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  FUN_10136b70();
  FArray::FArray((FArray *)(in_ECX + 10));
  ExceptionList = local_10;
  return;
}


// ==== 1013c227 Catch@1013c227

void Catch_1013c227(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c23b Catch@1013c23b

void Catch_1013c23b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatMark::NCChatMark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c260 FUN_1013c260

void FUN_1013c260(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10209501;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArray::FArray(in_ECX);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 4); iVar1 = iVar1 + 1) {
    *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1013c2dd Catch@1013c2dd

void Catch_1013c2dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013c2f1 Catch@1013c2f1

void Catch_1013c2f1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWhisperInfo::NCChatWhisperInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c310 FUN_1013c310

void FUN_1013c310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209520;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101358a0(param_1);
  if (iVar1 == 0x20000000) {
    FUN_10139c50(param_1,param_2);
  }
  else if ((iVar1 == 0x10000001) || (iVar1 == 0x10000000)) {
    FUN_101382a0(iVar1,param_1);
  }
  else {
    FUN_1013a320(iVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013c3a4 Catch@1013c3a4

void Catch_1013c3a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c3b8 Catch@1013c3b8

void Catch_1013c3b8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::ProcessChatLine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c3e0 FUN_1013c3e0

void FUN_1013c3e0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_1013c110(DAT_103554c4 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}


// ==== 1013c430 FUN_1013c430

void FUN_1013c430(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1013c310(param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 1013c488 Catch@1013c488

void Catch_1013c488(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c49c Catch@1013c49c

void Catch_1013c49c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::ExecuteCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c4c0 FUN_1013c4c0

void FUN_1013c4c0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10209598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10034140();
  *in_ECX = NCChatListBox::vftable;
  in_ECX[0xd7] = 0;
  in_ECX[0xd8] = 0;
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1013c537 Catch@1013c537

void Catch_1013c537(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c54b Catch@1013c54b

void Catch_1013c54b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatListBox::NCChatListBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c570 FUN_1013c570

void FUN_1013c570(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_102095c8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCChatListBox::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_100341a0(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1013c5d0 FUN_1013c5d0

void FUN_1013c5d0(byte param_1)

{
  void *in_ECX;
  
  FUN_1013c570();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x36c);
  }
  return;
}


// ==== 1013c600 FUN_1013c600

void FUN_1013c600(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_102095f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10034230(param_1,param_2,CONCAT31((int3)((uint)ExceptionList >> 8),param_3 != 0),0x11);
  *in_ECX = NCChatListBox::vftable;
  in_ECX[0xd7] = 0;
  in_ECX[0xd8] = 0;
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1013c68c Catch@1013c68c

void Catch_1013c68c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c6a0 Catch@1013c6a0

void Catch_1013c6a0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatListBox::NCChatListBox");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c6c0 FUN_1013c6c0

void FUN_1013c6c0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10209652;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  local_8 = 0;
  *in_ECX = NCChatWnd::vftable;
  FUN_1013c260();
  local_8._0_1_ = 1;
  in_ECX[0x89] = 0;
  FUN_1013c1b0();
  local_8._0_1_ = 2;
  FUN_10135770();
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined2 *)(in_ECX + 0x73) = 0;
  in_ECX[0x88] = 0;
  FUN_10138530();
  ExceptionList = local_10;
  return;
}


// ==== 1013c768 Catch@1013c768

void Catch_1013c768(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c77c Catch@1013c77c

void Catch_1013c77c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCChatWnd::NCChatWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c7a0 FUN_1013c7a0

void FUN_1013c7a0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_102096b5;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCChatWnd::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  FUN_10135810(uVar1);
  local_4._0_1_ = 1;
  FUN_100197e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1013c110();
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 1013c850 FUN_1013c850

void FUN_1013c850(byte param_1)

{
  void *in_ECX;
  
  FUN_1013c7a0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x674);
  }
  return;
}


// ==== 1013c8a0 FUN_1013c8a0

void FUN_1013c8a0(void)

{
  return;
}


// ==== 1013c8eb Catch@1013c8eb

void Catch_1013c8eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c8ff Catch@1013c8ff

void Catch_1013c8ff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c920 FUN_1013c920

void FUN_1013c920(int param_1,int param_2,int param_3,int param_4)

{
  int in_ECX;
  
  *(int *)(in_ECX + 600) = param_1;
  *(int *)(in_ECX + 0x25c) = param_2;
  *(float *)(in_ECX + 0x260) = (float)(param_3 - param_1);
  *(float *)(in_ECX + 0x264) = (float)(param_4 - param_2);
  return;
}


// ==== 1013c9a3 Catch@1013c9a3

void Catch_1013c9a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013c9b7 Catch@1013c9b7

void Catch_1013c9b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::SetJoypadRadar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013c9e0 FUN_1013c9e0

void FUN_1013c9e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x218) + 0xfc))(0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1013ca08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x218) + 0x13c))();
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x218) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x1013ca1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x218) + 0x78))();
  return;
}


// ==== 1013ca20 FUN_1013ca20

void FUN_1013ca20(void)

{
  FUN_100bb090();
  return;
}


// ==== 1013ca30 FUN_1013ca30

undefined4 FUN_1013ca30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x230);
}


// ==== 1013ca7a Catch@1013ca7a

void Catch_1013ca7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013ca8e Catch@1013ca8e

void Catch_1013ca8e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::GetPawnViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013cab0 FUN_1013cab0

undefined4 FUN_1013cab0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x234);
}


// ==== 1013cafa Catch@1013cafa

void Catch_1013cafa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013cb0e Catch@1013cb0e

void Catch_1013cb0e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::GetNpcViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013cb30 FUN_1013cb30

undefined4 FUN_1013cb30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x238);
}


// ==== 1013cb7a Catch@1013cb7a

void Catch_1013cb7a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013cb8e Catch@1013cb8e

void Catch_1013cb8e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::GetMSViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013cbb0 FUN_1013cbb0

void FUN_1013cbb0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0xfc))(0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1013cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x23c) + 0x13c))();
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x23c) + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x1013cbee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x23c) + 0x78))();
  return;
}


// ==== 1013cbf0 FUN_1013cbf0

void FUN_1013cbf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &UNK_10209770;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  uStack_8 = 0;
  iVar1 = FUN_1005e660(param_1,param_2);
  if (iVar1 == 0) {
    FUN_10057430(param_1,param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1013cc56 Catch@1013cc56

void Catch_1013cc56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013cc6a Catch@1013cc6a

void Catch_1013cc6a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::FindChildWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013cc90 FUN_1013cc90

void FUN_1013cc90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x270) = param_1;
  *(undefined4 *)(in_ECX + 0x268) = param_2;
  *(undefined4 *)(in_ECX + 0x26c) = param_3;
  return;
}


// ==== 1013ccf8 Catch@1013ccf8

void Catch_1013ccf8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013cd0c Catch@1013cd0c

void Catch_1013cd0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::SetFrameClickPoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013cd30 FUN_1013cd30

void FUN_1013cd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1039dac0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cd60 FUN_1013cd60

void FUN_1013cd60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ab4e0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cd90 FUN_1013cd90

void FUN_1013cd90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035c110,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cdc0 FUN_1013cdc0

void FUN_1013cdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1035cb70,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cdf0 FUN_1013cdf0

void FUN_1013cdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036ff80,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013ce20 FUN_1013ce20

void FUN_1013ce20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103704b0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013ce50 FUN_1013ce50

void FUN_1013ce50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1039efa8,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013ce80 FUN_1013ce80

void FUN_1013ce80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103ae8c0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013ceb0 FUN_1013ceb0

void FUN_1013ceb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103b0d10,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cee0 FUN_1013cee0

void FUN_1013cee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1037f358,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cf10 FUN_1013cf10

void FUN_1013cf10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a7bd0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cf40 FUN_1013cf40

void FUN_1013cf40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a8100,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cf70 FUN_1013cf70

void FUN_1013cf70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a8630,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cfa0 FUN_1013cfa0

void FUN_1013cfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a2e00,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013cfd0 FUN_1013cfd0

void FUN_1013cfd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a3330,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d000 FUN_1013d000

void FUN_1013d000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a3d90,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d030 FUN_1013d030

void FUN_1013d030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1039ea78,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d060 FUN_1013d060

void FUN_1013d060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a28d0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d090 FUN_1013d090

void FUN_1013d090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a5cb0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d0c0 FUN_1013d0c0

void FUN_1013d0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103aedf0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d0f0 FUN_1013d0f0

void FUN_1013d0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036d1d8,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d120 FUN_1013d120

void FUN_1013d120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103abf40,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d150 FUN_1013d150

void FUN_1013d150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a9090,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d180 FUN_1013d180

void FUN_1013d180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103a6c40,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1013d1b0 FUN_1013d1b0

void FUN_1013d1b0(byte param_1)

{
  FUN_10137040();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1013d1e0 FUN_1013d1e0

void FUN_1013d1e0(ushort *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  ushort *puVar3;
  ushort *local_c24;
  L2ParamStack local_c20 [16];
  ushort local_c10;
  undefined1 local_c0e [510];
  ushort auStack_a10 [256];
  ushort auStack_810 [256];
  ushort local_610 [256];
  ushort local_410 [256];
  ushort local_210 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102097c8;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_c24;
  ExceptionList = &local_c;
  local_c24 = param_1;
  iVar1 = ParseCommand(&local_c24,(ushort *)L"Link");
  if (iVar1 == 0) {
    iVar1 = ParseCommand(&local_c24,(ushort *)L"Write");
    if (iVar1 == 0) goto LAB_1013d546;
    L2ParamStack::L2ParamStack(local_c20,10);
    local_4 = 1;
    iVar1 = ParseToken(&local_c24,&local_c10,0x100,1);
    if (iVar1 != 0) {
      L2ParamStack::PushBack(local_c20,&local_c10);
      iVar1 = ParseToken(&local_c24,local_610,0x100,1);
      if (iVar1 != 0) {
        L2ParamStack::PushBack(local_c20,local_610);
        iVar1 = ParseToken(&local_c24,local_410,0x100,1);
        if (iVar1 != 0) {
          L2ParamStack::PushBack(local_c20,local_410);
          iVar1 = ParseToken(&local_c24,local_210,0x100,1);
          if (((iVar1 != 0) && (param_2 != (int *)0x0)) &&
             (pvVar2 = (void *)(**(code **)(*param_2 + 0x200))(local_210), pvVar2 != (void *)0x0)) {
            L2ParamStack::PushBack(local_c20,pvVar2);
            iVar1 = appStrcmp(&local_c10,&DAT_1024fae4);
            if (((iVar1 == 0) || (iVar1 = appStrcmp(&local_c10,(ushort *)&DAT_1027d144), iVar1 == 0)
                ) || (iVar1 = appStrcmp(&local_c10,(ushort *)&DAT_1027d140), iVar1 == 0)) {
              appStrcpy(auStack_a10,(ushort *)&DAT_1023afc8);
              puVar3 = auStack_a10;
            }
            else {
              iVar1 = ParseToken(&local_c24,auStack_a10,0x100,1);
              if ((iVar1 == 0) ||
                 (puVar3 = (ushort *)(**(code **)(*param_2 + 0x200))(auStack_a10),
                 puVar3 == (ushort *)0x0)) goto LAB_1013d52f;
            }
            L2ParamStack::PushBack(local_c20,puVar3);
            iVar1 = appStrcmp(&local_c10,&DAT_1024fae4);
            if ((iVar1 == 0) || (iVar1 = appStrcmp(&local_c10,(ushort *)&DAT_1027d140), iVar1 == 0))
            {
              appStrcpy(auStack_810,(ushort *)&DAT_1023afc8);
              puVar3 = auStack_810;
LAB_1013d514:
              L2ParamStack::PushBack(local_c20,puVar3);
            }
            else {
              iVar1 = ParseToken(&local_c24,auStack_810,0x100,1);
              if (iVar1 != 0) {
                puVar3 = (ushort *)(**(code **)(*param_2 + 0x200))(auStack_810);
                if (puVar3 == (ushort *)0x0) goto LAB_1013d52f;
                goto LAB_1013d514;
              }
            }
            FUN_10144ab0(local_c20);
            goto LAB_1013d2c6;
          }
        }
      }
    }
LAB_1013d52f:
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_c20);
  }
  else {
    local_c10 = 0;
    _memset(local_c0e,0,0x1fe);
    iVar1 = ParseToken(&local_c24,&local_c10,0x100,1);
    if (iVar1 == 0) goto LAB_1013d546;
    L2ParamStack::L2ParamStack(local_c20,10);
    local_4 = 0;
    L2ParamStack::PushBack(local_c20,&local_c10);
    if (param_2[0x85] == 1) {
      FUN_10144bf0(local_c20);
    }
    else {
      FUN_10144970(local_c20);
    }
LAB_1013d2c6:
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_c20);
  }
LAB_1013d546:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_c24);
  return;
}


// ==== 1013d570 FUN_1013d570

void FUN_1013d570(int *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  uint uStack_54;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209800;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  local_8 = 0;
  local_20 = 0;
  local_24 = 0;
  local_40 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  if ((*(int *)(in_ECX + 0x270) != 0) && (*(int *)(in_ECX + 0x270) != param_2)) {
    ExceptionList = &local_10;
    FUN_10058770(&local_44);
    FUN_10058770(&local_34);
    iVar1 = *(int *)(in_ECX + 0x26c);
    *param_1 = (*(int *)(in_ECX + 0x268) - local_34) + local_44;
    param_1[1] = (iVar1 - local_30) + local_40;
    ExceptionList = local_10;
    return;
  }
  *param_1 = *(int *)(in_ECX + 0x268);
  param_1[1] = *(int *)(in_ECX + 0x26c);
  return;
}


// ==== 1013d649 Catch@1013d649

void Catch_1013d649(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013d65d Catch@1013d65d

void Catch_1013d65d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::GetFrameClickPoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013d680 FUN_1013d680

void FUN_1013d680(int param_1,int param_2)

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


// ==== 1013d700 FUN_1013d700

undefined4 FUN_1013d700(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x248); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x244) + iVar1 * 4) != 0) {
      FUN_1013d1b0(1);
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x248); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x244),4,0);
  if (*(int *)(in_ECX + 0x250) != 0) {
    FUN_1003f610(*(int *)(in_ECX + 0x250));
    *(undefined4 *)(in_ECX + 0x250) = 0;
  }
  FUN_10061e90();
  ExceptionList = local_10;
  return 1;
}


// ==== 1013d7b3 Catch@1013d7b3

void Catch_1013d7b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1013d7c7 Catch@1013d7c7

void Catch_1013d7c7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::OnDestroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013d7f0 FUN_1013d7f0

void FUN_1013d7f0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  undefined4 uVar5;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209852;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c,(ushort *)L"MainWnd");
  local_8._0_1_ = 1;
  uVar5 = 0;
  pFVar4 = local_2c;
  FUN_10005c30(pFVar4,0);
  piVar1 = (int *)FUN_100d0cb0(pFVar4,uVar5);
  local_8._0_1_ = 0;
  FString::~FString(local_2c);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
  if (param_1 == -1) {
    iVar2 = (**(code **)(*piVar1 + 0xfc))(0);
    if (iVar2 != 0) {
      FUN_1014ed50(0xc);
      (**(code **)(*piVar1 + 0x13c))();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    FString::FString(local_2c,(ushort *)L"MainWnd.MainTabCtrl");
    local_8._0_1_ = 2;
    uVar5 = 0;
    pFVar4 = local_2c;
    FUN_10005c30(pFVar4,0);
    uVar5 = FUN_100d0cb0(pFVar4,uVar5);
    iVar2 = FUN_10005ce0(uVar5);
    local_8._0_1_ = 0;
    FString::~FString(local_2c);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x308);
    iVar3 = (**(code **)(*piVar1 + 0xfc))(0);
    if (((iVar3 != 0) && (iVar2 == param_1)) && (param_2 == '\0')) {
      (**(code **)(*piVar1 + 0x13c))();
      uVar5 = 0xc;
      goto LAB_1013d970;
    }
    uVar5 = 0x1b1;
    local_18 = 0x1b1;
    switch(param_1) {
    case 0:
      break;
    case 1:
      uVar5 = 0x77;
      break;
    case 2:
      uVar5 = 0x7f;
      break;
    case 3:
      uVar5 = 0x1b7;
      break;
    case 4:
      uVar5 = 0x76;
      break;
    default:
      goto switchD_1013d91e_default;
    }
    local_18 = uVar5;
switchD_1013d91e_default:
    uVar5 = local_18;
    FUN_10050ec0(param_1,1);
    (**(code **)(*piVar1 + 0x164))(uVar5);
  }
  (**(code **)(*piVar1 + 0x138))();
  (**(code **)(*piVar1 + 0x78))();
  uVar5 = 0xb;
LAB_1013d970:
  FUN_1014ed50(uVar5);
  ExceptionList = local_10;
  return;
}


// ==== 1013d996 Catch@1013d996

void Catch_1013d996(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013d9aa Catch@1013d9aa

void Catch_1013d9aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::ShowMainWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013d9e0 FUN_1013d9e0

void FUN_1013d9e0(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  FString local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10209879;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)L"SystemMenuWnd");
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  piVar2 = (int *)FUN_100d0cb0(local_18,0);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0xfc))(0);
    if (iVar3 != 0) {
      FUN_1014ed50(0x12);
      (**(code **)(*piVar2 + 0x13c))();
      ExceptionList = pvStack_10;
      return;
    }
    FUN_1014ed50(0x11);
    (**(code **)(*piVar2 + 0x138))();
    (**(code **)(*piVar2 + 0x78))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1013dac0 FUN_1013dac0

void FUN_1013dac0(void)

{
  uint uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102098a9;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)local_18;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)&DAT_1022f9f8);
  local_4 = 0;
  if (DAT_1035786c == 0) {
    FUN_10005270(uVar1);
  }
  FUN_100d1790(0xa47,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 1013db40 FUN_1013db40

void FUN_1013db40(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_102098e1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1003f970();
  local_8._0_1_ = 1;
  FString::FString(local_34,(ushort *)L"SSQStatus");
  local_8._0_1_ = 2;
  FUN_10040090(local_34,param_1);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  puVar2 = local_28;
  uVar1 = 0x6f4;
  FUN_10005c30(0x6f4,puVar2);
  FUN_100d1790(uVar1,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1003fff0();
  ExceptionList = local_10;
  return;
}


// ==== 1013dbe9 Catch@1013dbe9

void Catch_1013dbe9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013dbfd Catch@1013dbfd

void Catch_1013dbfd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::ShowMinimapWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013dc20 FUN_1013dc20

void FUN_1013dc20(void)

{
  undefined1 local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10209911;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003f970(DAT_103554c4 ^ (uint)local_24);
  local_4 = 0;
  FString::FString(local_18,(ushort *)L"Init");
  local_4._0_1_ = 1;
  FUN_10040090(local_18,1);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(local_18);
  if (DAT_1035786c == 0) {
    FUN_10005270();
  }
  FUN_100d1790(0x4a6,local_24);
  local_4 = 0xffffffff;
  FUN_1003fff0();
  ExceptionList = local_c;
  return;
}


// ==== 1013dcd0 FUN_1013dcd0

void FUN_1013dcd0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FString *pFVar4;
  undefined4 uVar5;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209939;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)L"OptionWnd");
  local_8._0_1_ = 1;
  uVar5 = 0;
  pFVar4 = local_28;
  FUN_10005c30(pFVar4,0);
  piVar1 = (int *)FUN_100d0cb0(pFVar4,uVar5);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xfc))(0);
    if (iVar2 == 0) {
      FUN_1014ed50(0x11);
      (**(code **)(*piVar1 + 0x138))();
      pcVar3 = *(code **)(*piVar1 + 0x78);
    }
    else {
      FUN_1014ed50(0x12);
      pcVar3 = *(code **)(*piVar1 + 0x13c);
    }
    (*pcVar3)();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013dd97 Catch@1013dd97

void Catch_1013dd97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013ddab Catch@1013ddab

void Catch_1013ddab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::ShowOptionWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013ddd0 FUN_1013ddd0

void FUN_1013ddd0(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209969;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x4ce;
  FUN_10005c30(0x4ce,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1013de4f Catch@1013de4f

void Catch_1013de4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013de63 Catch@1013de63

void Catch_1013de63(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::ShowMacroListWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013de80 FUN_1013de80

void FUN_1013de80(void)

{
  undefined4 uVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209999;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  pFVar2 = local_28;
  uVar1 = 0x8e8;
  FUN_10005c30(0x8e8,pFVar2);
  FUN_100d1790(uVar1,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1013deff Catch@1013deff

void Catch_1013deff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013df13 Catch@1013df13

void Catch_1013df13(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::ShowGMWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013df30 FUN_1013df30

void FUN_1013df30(int param_1,undefined4 param_2,wchar_t *param_3,ulong param_4,int param_5)

{
  wchar_t wVar1;
  int iVar2;
  User *this;
  int iVar3;
  wchar_t *_Dest;
  wchar_t *pwVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uStack_868;
  FString local_84c [16];
  int local_83c;
  wchar_t *local_838;
  FString local_828 [12];
  int local_81c;
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  uint local_80c;
  ushort local_808 [1024];
  uint local_8;
  
  puStack_810 = &LAB_10209a59;
  local_814 = ExceptionList;
  uStack_868 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_868;
  ExceptionList = &local_814;
  local_80c = 0;
  local_83c = in_ECX;
  local_8 = uStack_868;
  if (param_5 == 0x12) {
    local_818 = (undefined1 *)&uStack_868;
    appSprintf(local_808,(ushort *)&DAT_1022dde0);
LAB_1013e153:
    FUN_101392c0();
  }
  else {
    appSprintf(local_808,(ushort *)L"%s: %s");
    if ((param_5 == 6) || (param_5 == 7)) {
      FUN_101a72a0();
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x214) + 0xfc))();
      if (iVar3 == 0) {
        if (param_5 == 6) {
          param_4 = 0xffdcdcdc;
        }
        FString::FString(local_828,(ushort *)&DAT_1022f9f8);
        local_80c._0_1_ = 1;
        FUN_10005c30();
        FUN_100d1790();
        local_80c._0_1_ = 0;
        FString::~FString(local_828);
        FColor::FColor((FColor *)&local_81c,param_4);
        FUN_1003f970();
        local_80c._0_1_ = 2;
        FString::FString(local_84c,local_808);
        local_80c._0_1_ = 3;
        FString::FString(local_828,(ushort *)L"Message");
        local_80c._0_1_ = 4;
        FUN_10040230();
        local_80c._0_1_ = 3;
        FString::~FString(local_828);
        local_80c._0_1_ = 2;
        FString::~FString(local_84c);
        FString::FString(local_828,(ushort *)L"ColorR");
        local_80c._0_1_ = 5;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FString::FString(local_828,(ushort *)L"ColorG");
        local_80c._0_1_ = 6;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FString::FString(local_828,(ushort *)L"ColorB");
        local_80c._0_1_ = 7;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FString::FString(local_828,(ushort *)L"ColorA");
        local_80c._0_1_ = 8;
        FUN_10040090();
        local_80c._0_1_ = 2;
        FString::~FString(local_828);
        FUN_10005c30();
        FUN_100d1790();
        local_80c = (uint)local_80c._1_3_ << 8;
        FUN_1003fff0();
      }
      goto LAB_1013e2f5;
    }
    if (param_5 != 0xe) goto LAB_1013e153;
    FColor::FColor((FColor *)&local_81c,param_4);
    FUN_1003f970();
    local_80c._0_1_ = 9;
    FString::FString(local_828,local_808);
    local_80c._0_1_ = 10;
    FString::FString(local_84c,(ushort *)&DAT_1027c6f8);
    local_80c._0_1_ = 0xb;
    FUN_10040230();
    local_80c._0_1_ = 10;
    FString::~FString(local_84c);
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorR");
    local_80c._0_1_ = 0xc;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorG");
    local_80c._0_1_ = 0xd;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorB");
    local_80c._0_1_ = 0xe;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FString::FString(local_828,(ushort *)L"ColorA");
    local_80c._0_1_ = 0xf;
    FUN_10040090();
    local_80c._0_1_ = 9;
    FString::~FString(local_828);
    FUN_10005c30();
    FUN_100d1790();
    local_80c = (uint)local_80c._1_3_ << 8;
    FUN_1003fff0();
  }
  this = (User *)FUN_10145910();
  if ((this == (User *)0x0) || (iVar3 = User::GetPrivateStoreState(this), iVar3 == 0)) {
    _Dest = (wchar_t *)FUN_10004ed0();
    pwVar4 = param_3;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    local_838 = _Dest;
    if ((uint)((int)pwVar4 - (int)(param_3 + 1) >> 1) < 0x13) {
      appStrcpy((ushort *)_Dest,(ushort *)param_3);
    }
    else {
      _wcsncpy(_Dest,param_3,0x13);
      builtin_wcsncpy(_Dest + 0x12,L"...",4);
    }
    local_81c = 0;
    for (iVar3 = 0; iVar6 = 0, iVar2 = local_81c, iVar3 < *(int *)(local_83c + 0x248);
        iVar3 = iVar3 + 1) {
      iVar6 = *(int *)(*(int *)(local_83c + 0x244) + iVar3 * 4);
      iVar5 = FUN_101372a0();
      _Dest = local_838;
      iVar2 = iVar6;
      if (iVar5 == param_1) break;
    }
    local_81c = iVar2;
    if (iVar6 == 0) {
      local_838 = (wchar_t *)FUN_10004ed0();
      local_80c._0_1_ = 0x10;
      if (local_838 == (wchar_t *)0x0) {
        local_81c = 0;
      }
      else {
        local_81c = FUN_10136f90();
      }
      local_80c = (uint)local_80c._1_3_ << 8;
      FUN_100d9a30();
    }
    FUN_101370e0();
    FUN_10137170();
    local_838 = (wchar_t *)&stack0xfffff788;
    FString::FString((FString *)&stack0xfffff788,(ushort *)_Dest);
    local_80c = local_80c & 0xffffff00;
    FUN_10137200();
    if ((this != (User *)0x0) && (*(int *)(this + 0x204) != 0)) {
      iVar3 = FString::operator_int((FString *)(*(int *)(this + 0x204) + 0x178c));
      if (iVar3 == 0) {
        *(int *)(*(int *)(this + 0x204) + 0x4c) = *(int *)(*(int *)(this + 0x204) + 0x4c) + 1;
      }
      FStringNoInit::operator=((FStringNoInit *)(*(int *)(this + 0x204) + 0x178c),(ushort *)_Dest);
    }
    FUN_10024ca0();
    local_80c = 0xffffffff;
  }
LAB_1013e2f5:
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 1013e4d2 Catch@1013e4d2

void Catch_1013e4d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 1013e4e6 Catch@1013e4e6

void Catch_1013e4e6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::AddChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013e510 FUN_1013e510

void FUN_1013e510(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209aa1;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0x5c + 0x240ec));
  if (puVar1 != (ushort *)0x0) {
    uVar3 = 0;
    uVar2 = 5;
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + param_1 * 0x5c + 0x240ec));
    FUN_101392c0(puVar1,param_2,uVar2,uVar3);
    FUN_1003f970();
    local_8._0_1_ = 1;
    FString::FString(local_34,(ushort *)L"Index");
    local_8._0_1_ = 2;
    FUN_10040090(local_34,param_1);
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    puVar4 = local_28;
    uVar2 = 0x244;
    FUN_10005c30(0x244,puVar4);
    FUN_100d1790(uVar2,puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013e601 Catch@1013e601

void Catch_1013e601(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013e615 Catch@1013e615

void Catch_1013e615(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::AddSystemMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013e640 FUN_1013e640

void FUN_1013e640(ushort *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  uint uStack_8c;
  FString local_7c [12];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209b07;
  local_10 = ExceptionList;
  uStack_8c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_8c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 6) {
    FString::FString(local_34,(ushort *)&DAT_1022f9f8);
    local_8._0_1_ = 1;
    pFVar2 = local_34;
    uVar1 = 0x780;
    FUN_10005c30(0x780,pFVar2);
    FUN_100d1790(uVar1,pFVar2);
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FColor::FColor((FColor *)&param_2,0xff80ffff);
    FUN_1003f970();
    local_8._0_1_ = 2;
    FString::FString(local_4c,param_1);
    local_8._0_1_ = 3;
    FString::FString(local_40,(ushort *)L"Message");
    local_8._0_1_ = 4;
    FUN_10040230(local_40,local_4c);
    local_8._0_1_ = 3;
    FString::~FString(local_40);
    local_8._0_1_ = 2;
    FString::~FString(local_4c);
    FString::FString(local_58,(ushort *)L"ColorR");
    local_8._0_1_ = 5;
    FUN_10040090(local_58,param_2 >> 0x10 & 0xff);
    local_8._0_1_ = 2;
    FString::~FString(local_58);
    FString::FString(local_64,(ushort *)L"ColorG");
    local_8._0_1_ = 6;
    FUN_10040090(local_64,param_2 >> 8 & 0xff);
    local_8._0_1_ = 2;
    FString::~FString(local_64);
    FString::FString(local_70,(ushort *)L"ColorB");
    local_8._0_1_ = 7;
    FUN_10040090(local_70,param_2 & 0xff);
    local_8._0_1_ = 2;
    FString::~FString(local_70);
    FString::FString(local_7c,(ushort *)L"ColorA");
    local_8._0_1_ = 8;
    FUN_10040090(local_7c,param_2 >> 0x18);
    local_8._0_1_ = 2;
    FString::~FString(local_7c);
    puVar3 = local_28;
    uVar1 = 0x78a;
    FUN_10005c30(0x78a,puVar3);
    FUN_100d1790(uVar1,puVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1003fff0();
  }
  else if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    local_14 = (undefined1 *)&uStack_8c;
    FUN_101392c0(param_1,param_3,5,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013e83a Catch@1013e83a

void Catch_1013e83a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013e84e Catch@1013e84e

void Catch_1013e84e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::AddSystemMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013e870 FUN_1013e870

undefined4 FUN_1013e870(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  if (param_1 == 0xfa0d05) {
    *(int *)(in_ECX + 0x254) = *(int *)(in_ECX + 0x254) + 1;
    while (iVar5 < *(int *)(in_ECX + 0x248)) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x244) + iVar5 * 4);
      iVar3 = FUN_10137320();
      if (iVar3 + 5 < *(int *)(in_ECX + 0x254)) {
        uVar4 = FUN_101372a0();
        iVar3 = FUN_10145910(uVar4);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x204) != 0)) {
          FStringNoInit::operator=
                    ((FStringNoInit *)(*(int *)(iVar3 + 0x204) + 0x178c),(ushort *)&DAT_1022f9f8);
          piVar1 = (int *)(*(int *)(iVar3 + 0x204) + 0x4c);
          *piVar1 = *piVar1 + 1;
        }
        if (iVar2 != 0) {
          FUN_1013d1b0(1);
        }
        FUN_1013d680(iVar5,1);
      }
      else {
        iVar5 = iVar5 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1013e971 Catch@1013e971

void Catch_1013e971(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013e985 Catch@1013e985

void Catch_1013e985(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::OnTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013e9b0 FUN_1013e9b0

undefined4 FUN_1013e9b0(undefined4 param_1,UObject *param_2)

{
  int iVar1;
  FString aFStack_54 [4];
  undefined4 uStack_50;
  FString aFStack_48 [4];
  undefined4 uStack_44;
  undefined4 *puStack_40;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10209b62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_40 = (undefined4 *)param_1;
  uStack_44 = 0x1013e9ed;
  FUN_1005f6e0();
  param_2 = (UObject *)0x0;
  puStack_40 = &param_2;
  uStack_44 = 0x1013ea06;
  FUN_10147a60();
  if (param_2 != (UObject *)0x0) {
    puStack_40 = (undefined4 *)0x1013ea2e;
    iVar1 = UObject::IsA(param_2,(UClass *)&DAT_103678a0);
    if (iVar1 != 0) {
      uStack_50 = 0x1013ea4c;
      FString::FString(aFStack_48,(ushort *)L"IsLockShortcutWnd");
      local_8._0_1_ = 1;
      FString::FString(aFStack_54,(ushort *)L"Game");
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10042370();
      puStack_40 = (undefined4 *)0x1013ea88;
      iVar1 = FUN_100181a0();
      if (iVar1 != 0) {
        FUN_100472e0();
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1013eab3 Catch@1013eab3

void Catch_1013eab3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1013eac7 Catch@1013eac7

void Catch_1013eac7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::OnDropItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013eaf0 FUN_1013eaf0

void FUN_1013eaf0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209b89;
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


// ==== 1013eb90 FUN_1013eb90

void FUN_1013eb90(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10209bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCGMPetitionWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1013ebf0 FUN_1013ebf0

void FUN_1013ebf0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209be8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCGMPetitionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1013ec50 FUN_1013ec50

void FUN_1013ec50(byte param_1)

{
  void *in_ECX;
  
  FUN_1013ebf0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e0);
  }
  return;
}


// ==== 1013ec80 FUN_1013ec80

void FUN_1013ec80(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10209c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCLoginFunctionWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1013ece0 FUN_1013ece0

void FUN_1013ece0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209c48;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCLoginFunctionWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1013ed40 FUN_1013ed40

void FUN_1013ed40(byte param_1)

{
  void *in_ECX;
  
  FUN_1013ece0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e4);
  }
  return;
}


// ==== 1013ed70 FUN_1013ed70

void FUN_1013ed70(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10209c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10061fa0(DAT_103554c4 ^ (uint)&stack0xffffffec);
  *in_ECX = NCLoginServerWnd::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1013edd0 FUN_1013edd0

void FUN_1013edd0(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10209ca8;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCLoginServerWnd::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  FUN_10002910(uVar1);
  ExceptionList = local_c;
  return;
}


// ==== 1013ee30 FUN_1013ee30

void FUN_1013ee30(byte param_1)

{
  void *in_ECX;
  
  FUN_1013edd0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d4);
  }
  return;
}


// ==== 1013ee60 FUN_1013ee60

void FUN_1013ee60(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10209cef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10061fa0();
  local_8 = 0;
  *in_ECX = NCConsole::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x91));
  in_ECX[0x97] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x98] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x9a] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1013eef8 Catch@1013eef8

void Catch_1013eef8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1013ef0c Catch@1013ef0c

void Catch_1013ef0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::NCConsole");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013ef30 FUN_1013ef30

void FUN_1013ef30(void)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10209d26;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = NCConsole::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FUN_1013eaf0(uVar1);
  local_4 = 0xffffffff;
  FUN_10002910();
  ExceptionList = local_c;
  return;
}


// ==== 1013efa0 FUN_1013efa0

void FUN_1013efa0(byte param_1)

{
  void *in_ECX;
  
  FUN_1013ef30();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x274);
  }
  return;
}


// ==== 1013efd0 FUN_1013efd0

undefined4 FUN_1013efd0(void)

{
  float fVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  int *piVar5;
  UPackage *pUVar6;
  int in_ECX;
  ushort in_FPUControlWord;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  wchar_t *pwStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_484;
  undefined4 uStack_480;
  code *pcStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined *puStack_3d8;
  wchar_t *pwStack_3d4;
  undefined4 *puStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  wchar_t *pwStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  wchar_t *pwStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int iStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_184;
  undefined4 uStack_160;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  FString local_70 [12];
  FString local_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  FString local_10 [4];
  undefined4 local_c;
  
  puStack_80 = &LAB_10209ef7;
  local_84 = ExceptionList;
  ExceptionList = &local_84;
  local_7c = 0;
  if (*(int *)GIsOnlyXMLUI_exref == 0) {
    local_50 = 0;
    local_54 = 0;
    local_4c = 0.0;
    local_48 = 0;
    FUN_1005d0a0();
    local_2c = FUN_101c19e0();
    local_34 = FUN_101c19e0();
    FUN_10024960();
    local_14 = &stack0xfffffecc;
    FName::FName((FName *)&stack0xfffffecc,0);
    UObject::GetTransientPackage();
    iVar2 = FUN_1013ce50();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_101757b0();
    }
    *(int *)(in_ECX + 0x1cc) = iVar2;
    if (iVar2 == 0) {
      appFailAssert("m_pDebugConsole",".\\Src\\NConsole.cpp",0x27);
    }
    FUN_10060d40();
    FUN_1005c1e0();
    (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x130))();
    (**(code **)(**(int **)(in_ECX + 0x1cc) + 0xd0))();
    FString::FString(local_70);
    local_7c._0_1_ = 1;
    pFVar3 = (FString *)FString::Printf((ushort *)local_10);
    local_7c._0_1_ = 2;
    iVar2 = **(int **)GConfig_exref;
    FString::operator*(pFVar3);
    iVar2 = (**(code **)(iVar2 + 0xc))();
    local_7c = CONCAT31(local_7c._1_3_,1);
    FString::~FString(local_10);
    if (iVar2 == 0) {
      uStack_160 = 0x1013f17f;
      FString::operator=(local_70,(ushort *)L"L2Font.start_logo-k");
    }
    local_14 = (undefined1 *)&uStack_160;
    FName::FName((FName *)&uStack_160,0);
    UObject::GetTransientPackage();
    iVar2 = FUN_100ed6e0();
    uStack_160 = 0;
    if (iVar2 != 0) {
      uStack_160 = 0;
      local_14 = &stack0xfffffe88;
      FString::FString((FString *)&stack0xfffffe88,local_70);
      local_7c = CONCAT31((int3)((uint)local_7c >> 8),1);
      uStack_160 = FUN_10054020();
    }
    *(undefined4 *)(in_ECX + 0x1d4) = uStack_160;
    FUN_10060d40();
    uStack_160 = 0x1013f211;
    FUN_1005c1e0();
    uStack_160 = 0x43800000;
    (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x128))();
    (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xd0))();
    FString::FString(local_64);
    local_7c._0_1_ = 4;
    pFVar3 = (FString *)FString::Printf((ushort *)local_10);
    local_7c._0_1_ = 5;
    local_1c = (int *)**(int **)GConfig_exref;
    FString::operator*(pFVar3);
    iVar2 = (**(code **)((int)local_1c + 0xc))();
    local_7c = CONCAT31(local_7c._1_3_,4);
    local_1c._3_1_ = iVar2 == 0;
    FString::~FString(local_10);
    if (local_1c._3_1_ != '\0') {
      uStack_184 = 0x1013f2da;
      FString::operator=(local_64,(ushort *)L"L2Font.start_minilogo-k");
    }
    local_14 = (undefined1 *)&uStack_184;
    uStack_18c = 0x1013f2ea;
    FName::FName((FName *)&uStack_184,0);
    UObject::GetTransientPackage();
    uStack_18c = 0x300;
    uStack_190 = 0x1013f2f7;
    local_1c = (int *)FUN_100ed6e0();
    if (local_1c == (int *)0x0) {
      uStack_184 = 0;
    }
    else {
      uStack_18c = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      local_14 = &stack0xfffffe64;
      uStack_1a4 = 0x1013f33d;
      FString::FString((FString *)&stack0xfffffe64,local_64);
      local_7c = CONCAT31((int3)((uint)local_7c >> 8),4);
      uStack_184 = FUN_10054020();
    }
    *(undefined4 *)(in_ECX + 0x1d8) = uStack_184;
    FUN_10060d40();
    uStack_184 = 0x1013f36f;
    FUN_1005c1e0();
    uStack_184 = 0x43680000;
    (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x128))();
    local_18 = 0;
    local_14 = (undefined1 *)0x0;
    uStack_18c = 0;
    uStack_190 = 1;
    uStack_194 = 0x1013f3b1;
    (**(code **)(**(int **)(in_ECX + 0x1d8) + 0xd0))();
    uStack_194 = 0;
    local_14 = (undefined1 *)&uStack_198;
    FName::FName((FName *)&uStack_198,0);
    UObject::GetTransientPackage();
    uStack_1a4 = 0x1013f3ce;
    iVar2 = FUN_1013d000();
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uStack_194 = 0x1013f3dc;
      uVar4 = FUN_10181b60();
    }
    *(undefined4 *)(in_ECX + 0x1dc) = uVar4;
    uStack_194 = 0x1013f3f1;
    iVar2 = FUN_10141090();
    uStack_194 = 2;
    uStack_198 = 2;
    fVar1 = *(float *)(in_ECX + 0x8c) * 0.5;
    if (iVar2 == 0) {
      local_28._0_4_ = (undefined4)(longlong)ROUND(fVar1 - 54.0);
      uStack_1a8 = (undefined4)local_28;
      local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 128.0);
    }
    else {
      local_28._0_4_ = (undefined4)(longlong)ROUND(fVar1 - 64.0);
      uStack_1a8 = (undefined4)local_28;
      local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 128.0);
    }
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    uStack_1a4 = 0x100;
    uStack_1b0 = 0x1013f4c1;
    uStack_1ac = (undefined4)local_28;
    (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xc0))();
    uStack_1b0 = 0x6004000;
    uStack_1b4 = *(undefined4 *)(in_ECX + 0x1dc);
    uStack_1b8 = 0x1013f4d4;
    uStack_1b0 = FUN_10060d40();
    uStack_1b4 = 0x1013f4e0;
    FUN_1005c1e0();
    uStack_1b0 = 0x95;
    uStack_1b4 = 0x1013f4f5;
    (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x164))();
    local_20 = 0;
    local_1c = (int *)0x0;
    uStack_1b4 = 0;
    uStack_1b8 = 0;
    uStack_1bc = 5;
    uStack_1c0 = 0x1013f511;
    (**(code **)(**(int **)(in_ECX + 0x1dc) + 0xd0))();
    uStack_1c0 = 0;
    local_14 = (undefined1 *)&uStack_1c4;
    uStack_1cc = 0x1013f521;
    FName::FName((FName *)&uStack_1c4,0);
    UObject::GetTransientPackage();
    uStack_1cc = 0x1e4;
    uStack_1d0 = 0x1013f52e;
    iVar2 = FUN_1013cfa0();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_1c0 = 0x1013f53c;
      piVar5 = (int *)FUN_1013ec80();
    }
    *(int **)(in_ECX + 0x1e0) = piVar5;
    uStack_1c0 = 4;
    uStack_1c4 = 1;
    uStack_1cc = 0x8a;
    uStack_1d0 = 0x78;
    iStack_1d4 = local_34 + -200;
    iStack_1d8 = local_2c + -0x9a;
    uStack_1dc = 0x1013f572;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_1dc = 0x6000000;
    uStack_1e0 = *(undefined4 *)(in_ECX + 0x1e0);
    uStack_1e4 = 0x1013f585;
    uStack_1dc = FUN_10060d40();
    uStack_1e0 = 0x1013f591;
    FUN_1005c1e0();
    uStack_1dc = 0xffffffc2;
    uStack_1e0 = 0xffffffde;
    uStack_1e4 = 9;
    uStack_1e8 = 0x1013f5b6;
    (**(code **)(**(int **)(in_ECX + 0x1e0) + 0xd0))();
    uStack_1e8 = 0;
    local_14 = (undefined1 *)&uStack_1ec;
    uStack_1f4 = 0x1013f5c6;
    FName::FName((FName *)&uStack_1ec,0);
    UObject::GetTransientPackage();
    uStack_1f4 = 0x1e0;
    uStack_1f8 = 0x1013f5d3;
    iVar2 = FUN_1013cf10();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_1e8 = 0x1013f5e1;
      piVar5 = (int *)FUN_101904a0();
    }
    *(int **)(in_ECX + 0x1e4) = piVar5;
    uStack_1e8 = 2;
    uStack_1ec = 2;
    uStack_1f4 = 0x1a9;
    uStack_1f8 = 0x222;
    local_28._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) * 0.5 - 212.0);
    uStack_1fc = (undefined4)local_28;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 273.0);
    uStack_200 = (undefined4)local_28;
    uStack_204 = 0x1013f661;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_204 = 0x6004000;
    uStack_208 = *(undefined4 *)(in_ECX + 0x1e4);
    uStack_20c = 0x1013f674;
    uStack_204 = FUN_10060d40();
    uStack_208 = 0x1013f680;
    FUN_1005c1e0();
    uStack_204 = 0x21a;
    uStack_208 = 0x1013f695;
    (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x164))();
    uStack_208 = 0;
    uStack_20c = 0;
    uStack_210 = 5;
    uStack_214 = 0x1013f6b1;
    (**(code **)(**(int **)(in_ECX + 0x1e4) + 0xd0))();
    uStack_214 = 0;
    local_14 = (undefined1 *)&uStack_218;
    uStack_220 = 0x1013f6c1;
    FName::FName((FName *)&uStack_218,0);
    UObject::GetTransientPackage();
    uStack_220 = 0x2f4;
    uStack_224 = 0x1013f6ce;
    iVar2 = FUN_1013cdc0();
    if (iVar2 == 0) {
      local_1c = (int *)0x0;
    }
    else {
      uStack_214 = 0x1013f6dc;
      local_1c = (int *)FUN_10012480();
    }
    *(int **)(in_ECX + 0x200) = local_1c;
    local_14 = (undefined1 *)*local_1c;
    uStack_214 = 2;
    uStack_218 = 2;
    uStack_220 = 0x6c;
    uStack_224 = 0x100;
    iStack_228 = local_34 / 2 + -0x36;
    iStack_22c = local_2c / 2 + -0x80;
    uStack_230 = 0x1013f723;
    (**(code **)((int)local_14 + 0xc0))();
    uStack_230 = 0;
    uStack_234 = *(undefined4 *)(in_ECX + 0x200);
    uStack_230 = FUN_10060d40();
    uStack_234 = 0x1013f73f;
    FUN_1005c1e0();
    uStack_230 = 0;
    local_14 = (undefined1 *)&uStack_234;
    uStack_23c = 0x1013f74f;
    FName::FName((FName *)&uStack_234,0);
    UObject::GetTransientPackage();
    uStack_23c = 0x1ec;
    uStack_240 = 0x1013f75c;
    iVar2 = FUN_1013cf40();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_230 = 0x1013f76a;
      piVar5 = (int *)FUN_101907d0();
    }
    *(int **)(in_ECX + 0x1e8) = piVar5;
    uStack_230 = 2;
    uStack_234 = 2;
    uStack_23c = 0x1a9;
    uStack_240 = 0x222;
    local_28._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) * 0.5 - 212.0);
    uStack_244 = (undefined4)local_28;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 273.0);
    uStack_248 = (undefined4)local_28;
    uStack_24c = 0x1013f7ea;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_24c = 0x6004000;
    uStack_250 = *(undefined4 *)(in_ECX + 0x1e8);
    uStack_254 = 0x1013f7fd;
    uStack_24c = FUN_10060d40();
    uStack_250 = 0x1013f809;
    FUN_1005c1e0();
    uStack_24c = 0x256;
    uStack_250 = 0x1013f81e;
    (**(code **)(**(int **)(in_ECX + 0x1e8) + 0x164))();
    uStack_250 = 0;
    uStack_254 = 0;
    uStack_258 = 5;
    uStack_25c = 0x1013f83a;
    (**(code **)(**(int **)(in_ECX + 0x1e8) + 0xd0))();
    uStack_25c = 0;
    local_14 = (undefined1 *)&uStack_260;
    uStack_268 = 0x1013f84a;
    FName::FName((FName *)&uStack_260,0);
    UObject::GetTransientPackage();
    uStack_268 = 0x1d8;
    uStack_26c = 0x1013f857;
    iVar2 = FUN_1013cf70();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_25c = 0x1013f865;
      piVar5 = (int *)FUN_10190c40();
    }
    *(int **)(in_ECX + 0x1ec) = piVar5;
    uStack_25c = 2;
    uStack_260 = 2;
    uStack_268 = 0x1a9;
    uStack_26c = 0x222;
    local_28._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c) * 0.5 - 212.0);
    uStack_270 = (undefined4)local_28;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x88) * 0.5 - 273.0);
    uStack_274 = (undefined4)local_28;
    uStack_278 = 0x1013f8e5;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_278 = 0x6004000;
    uStack_27c = *(undefined4 *)(in_ECX + 0x1ec);
    uStack_280 = 0x1013f8f8;
    uStack_278 = FUN_10060d40();
    uStack_27c = 0x1013f904;
    FUN_1005c1e0();
    uStack_278 = 0;
    uStack_27c = 0;
    uStack_280 = 5;
    uStack_284 = 0x1013f920;
    (**(code **)(**(int **)(in_ECX + 0x1ec) + 0xd0))();
    uStack_284 = 0;
    local_14 = (undefined1 *)&uStack_288;
    uStack_290 = 0x1013f930;
    FName::FName((FName *)&uStack_288,0);
    UObject::GetTransientPackage();
    uStack_290 = 0x1d4;
    uStack_294 = 0x1013f93d;
    iVar2 = FUN_1013cfd0();
    if (iVar2 == 0) {
      uStack_288 = 0;
    }
    else {
      uStack_284 = 0x1013f94b;
      uStack_288 = FUN_1013ed70();
    }
    *(undefined4 *)(in_ECX + 0x1d0) = uStack_288;
    uStack_284 = 0x4000000;
    uStack_284 = FUN_10060d40();
    uStack_288 = 0x1013f96e;
    FUN_1005c1e0();
    uStack_284 = 0;
    uStack_288 = 0;
    uStack_290 = 0x1013f98a;
    (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xd0))();
    uStack_290 = 0x44078000;
    uStack_294 = 0x439e0000;
    uStack_298 = 0x1013f9b0;
    (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x128))();
    uStack_298 = 0;
    uStack_29c = 0;
    uStack_2a0 = 5;
    uStack_2a4 = 0x1013f9d2;
    (**(code **)(**(int **)(in_ECX + 0x1d0) + 0xd0))();
    uStack_2a4 = 0;
    local_14 = (undefined1 *)&uStack_2a8;
    uStack_2b0 = 0x1013f9e2;
    FName::FName((FName *)&uStack_2a8,0);
    UObject::GetTransientPackage();
    uStack_2b0 = 0x1e0;
    iStack_2b4 = 0x1013f9ef;
    iVar2 = FUN_1013d090();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_2a4 = 0x1013f9fd;
      piVar5 = (int *)FUN_10186e50();
    }
    *(int **)(in_ECX + 0x1f0) = piVar5;
    uStack_2a4 = 4;
    uStack_2a8 = 2;
    uStack_2b0 = 0x34;
    iStack_2b4 = local_2c;
    iStack_2b8 = local_34 + -0x34;
    uStack_2bc = 0;
    uStack_2c0 = 0x1013fa27;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_2c0 = 0x6000000;
    uStack_2c4 = *(undefined4 *)(in_ECX + 0x1f0);
    uStack_2c8 = 0x1013fa3a;
    uStack_2c0 = FUN_10060d40();
    uStack_2c4 = 0x1013fa46;
    FUN_1005c1e0();
    uStack_2c0 = 0x5e;
    uStack_2c4 = 0x1013fa53;
    FUN_10186b80();
    uStack_2c0 = 0x1013fa63;
    (**(code **)(**(int **)(in_ECX + 0x1f0) + 0x138))();
    local_38 = 0;
    local_34 = 0;
    uStack_2c0 = 0;
    uStack_2c4 = 0;
    uStack_2c8 = 8;
    uStack_2cc = 0x1013fa7f;
    (**(code **)(**(int **)(in_ECX + 0x1f0) + 0xd0))();
    uStack_2cc = 0x34;
    uStack_2d0 = 0;
    uStack_2d4 = 0;
    uStack_2d8 = 0x3f800000;
    uStack_2dc = 0x1013faa1;
    (**(code **)(**(int **)(in_ECX + 0x1f0) + 0x130))();
    uStack_2dc = 0;
    local_14 = (undefined1 *)&uStack_2e0;
    uStack_2e8 = 0x1013fab1;
    FName::FName((FName *)&uStack_2e0,0);
    UObject::GetTransientPackage();
    uStack_2e8 = 0x1e4;
    uStack_2ec = 0x1013fabe;
    iVar2 = FUN_1013d060();
    if (iVar2 == 0) {
      uStack_2e0 = 0;
    }
    else {
      uStack_2dc = 0x1013facc;
      uStack_2e0 = FUN_1017f5f0();
    }
    *(undefined4 *)(in_ECX + 0x1f8) = uStack_2e0;
    uStack_2dc = 0x6000008;
    uStack_2dc = FUN_10060d40();
    uStack_2e0 = 0x1013faef;
    FUN_1005c1e0();
    local_30 = 0;
    local_2c = 0;
    uStack_2dc = 0;
    uStack_2e0 = 0;
    uStack_2e8 = 0x1013fb0b;
    (**(code **)(**(int **)(in_ECX + 0x1f8) + 0xd0))();
    uStack_2e8 = 0xffffffcc;
    uStack_2ec = 0;
    uStack_2f0 = 0x3f800000;
    uStack_2f4 = 0x3f800000;
    uStack_2f8 = 0x1013fb2b;
    (**(code **)(**(int **)(in_ECX + 0x1f8) + 0x130))();
    uStack_2f8 = 0;
    local_14 = (undefined1 *)&uStack_2fc;
    uStack_304 = 0x1013fb3b;
    FName::FName((FName *)&uStack_2fc,0);
    UObject::GetTransientPackage();
    uStack_304 = 0x23c;
    uStack_308 = 0x1013fb48;
    iVar2 = FUN_1013cd60();
    if (iVar2 == 0) {
      uStack_2fc = 0;
    }
    else {
      uStack_2f8 = 0x1013fb56;
      uStack_2fc = FUN_1019a1e0();
    }
    *(undefined4 *)(in_ECX + 0x1fc) = uStack_2fc;
    uStack_2f8 = 0x6000000;
    uStack_2f8 = FUN_10060d40();
    uStack_2fc = 0x1013fb79;
    FUN_1005c1e0();
    uStack_2f8 = 0;
    uStack_2fc = 0;
    uStack_304 = 0x1013fb95;
    (**(code **)(**(int **)(in_ECX + 0x1fc) + 0xd0))();
    uStack_304 = 0xffffffcc;
    uStack_308 = 0;
    uStack_30c = 0x3f800000;
    uStack_310 = 0x3f800000;
    uStack_314 = 0x1013fbb5;
    (**(code **)(**(int **)(in_ECX + 0x1fc) + 0x130))();
    uStack_314 = 0;
    local_14 = (undefined1 *)&uStack_318;
    uStack_320 = 0x1013fbc5;
    FName::FName((FName *)&uStack_318,0);
    UObject::GetTransientPackage();
    uStack_320 = 0xcf0;
    uStack_324 = 0x1013fbd2;
    iVar2 = FUN_1013d030();
    if (iVar2 == 0) {
      uStack_318 = 0;
    }
    else {
      uStack_314 = 0x1013fbe0;
      uStack_318 = FUN_10175130();
    }
    *(undefined4 *)(in_ECX + 500) = uStack_318;
    uStack_314 = 0x6000000;
    uStack_314 = FUN_10060d40();
    uStack_318 = 0x1013fc03;
    FUN_1005c1e0();
    local_78 = 0;
    local_74 = 0;
    uStack_314 = 0;
    uStack_318 = 0;
    uStack_320 = 0x1013fc1f;
    (**(code **)(**(int **)(in_ECX + 500) + 0xd0))();
    uStack_320 = 0;
    uStack_324 = 0;
    uStack_328 = 0x3f800000;
    uStack_32c = 0x3f800000;
    uStack_330 = 0x1013fc3f;
    (**(code **)(**(int **)(in_ECX + 500) + 0x130))();
    uStack_330 = 0;
    local_14 = (undefined1 *)&uStack_334;
    uStack_33c = 0x1013fc4f;
    FName::FName((FName *)&uStack_334,0);
    UObject::GetTransientPackage();
    uStack_33c = 0x1e4;
    uStack_340 = 0x1013fc5c;
    iVar2 = FUN_1013d0c0();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_330 = 0x1013fc6a;
      piVar5 = (int *)FUN_101a81b0();
    }
    *(int **)(in_ECX + 0x204) = piVar5;
    uStack_330 = 3;
    uStack_334 = 0;
    local_28._0_4_ = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x8c));
    uStack_33c = (undefined4)local_28;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x88));
    uStack_340 = (undefined4)local_28;
    uStack_344 = 0;
    uStack_348 = 0;
    uStack_34c = 0x1013fcce;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_34c = 0x6004001;
    uStack_350 = *(undefined4 *)(in_ECX + 0x204);
    uStack_34c = FUN_10060d40();
    uStack_350 = 0x1013fced;
    FUN_1005c1e0();
    uStack_34c = 0;
    local_14 = (undefined1 *)&uStack_350;
    uStack_358 = 0x1013fcfd;
    FName::FName((FName *)&uStack_350,0);
    UObject::GetTransientPackage();
    uStack_358 = 0x1e0;
    uStack_35c = 0x1013fd0a;
    iVar2 = FUN_1013ce80();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_34c = 0x1013fd18;
      piVar5 = (int *)FUN_1013eb90();
    }
    *(int **)(in_ECX + 0x214) = piVar5;
    uStack_34c = 5;
    uStack_350 = 0;
    uStack_358 = 0x19c;
    uStack_35c = 0x136;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) * 0.5 - 252.0);
    uStack_360 = (undefined4)local_28;
    uStack_364 = 0;
    uStack_368 = 0x1013fd6e;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_368 = 1;
    uStack_36c = *(undefined4 *)(in_ECX + 0x214);
    uStack_370 = 0x1013fd7e;
    uStack_368 = FUN_10060d40();
    uStack_36c = 0x1013fd8a;
    FUN_1005c1e0();
    uStack_368 = 0x1d8;
    uStack_36c = 0x1013fd9f;
    (**(code **)(**(int **)(in_ECX + 0x214) + 0x164))();
    uStack_36c = 0;
    uStack_370 = 1;
    FUN_100577d0();
    uStack_36c = 0;
    local_14 = (undefined1 *)&uStack_370;
    uStack_378 = 0x1013fdbe;
    FName::FName((FName *)&uStack_370,0);
    UObject::GetTransientPackage();
    uStack_378 = 0x1d4;
    uStack_37c = 0x1013fdcb;
    iVar2 = FUN_1013cdf0();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_36c = 0x1013fdd9;
      piVar5 = (int *)FUN_10089fd0();
    }
    *(int **)(in_ECX + 0x20c) = piVar5;
    uStack_36c = 5;
    uStack_370 = 0;
    uStack_378 = 0x191;
    uStack_37c = 0x136;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) * 0.5 - 252.0);
    uStack_380 = (undefined4)local_28;
    uStack_384 = 0;
    uStack_388 = 0x1013fe2f;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_388 = 0x1001;
    uStack_38c = *(undefined4 *)(in_ECX + 0x20c);
    pwStack_390 = L"譐ಎ\x02\xe800쎒\xfff1jŪ躋Ȍ";
    uStack_388 = FUN_10060d40();
    uStack_38c = 0x1013fe4e;
    FUN_1005c1e0();
    uStack_388 = 0;
    uStack_38c = 1;
    pwStack_390 = L"躋Ȍ";
    FUN_100577d0();
    uStack_388 = 0x1bc;
    uStack_38c = 0x1013fe72;
    (**(code **)(**(int **)(in_ECX + 0x20c) + 0x164))();
    uStack_38c = 1;
    pwStack_390 = L"L2UI_ch3.NpcWnd.Npc1_back";
    uVar4 = FUN_1003f630();
    pwStack_390 = *(wchar_t **)(in_ECX + 0x20c);
    *(undefined4 *)(pwStack_390 + 0xe8) = uVar4;
    uStack_38c = 0;
    local_14 = (undefined1 *)&pwStack_390;
    uStack_398 = 0x1013fe9c;
    FName::FName((FName *)&pwStack_390,0);
    UObject::GetTransientPackage();
    uStack_398 = 0x1d4;
    uStack_39c = 0x1013fea9;
    iVar2 = FUN_1013cdf0();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_38c = 0x1013feb7;
      piVar5 = (int *)FUN_10089fd0();
    }
    *(int **)(in_ECX + 0x210) = piVar5;
    uStack_38c = 5;
    pwStack_390 = (wchar_t *)0x0;
    uStack_398 = 0x191;
    uStack_39c = 0x136;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) * 0.5 - 252.0);
    uStack_3a0 = (undefined4)local_28;
    uStack_3a4 = 0;
    uStack_3a8 = 0x1013ff0d;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_3a8 = 0x1001;
    uStack_3ac = *(undefined4 *)(in_ECX + 0x210);
    pwStack_3b0 = L"譐ႎ\x02\xe800슴\xfff1jŪ躋Ȑ";
    uStack_3a8 = FUN_10060d40();
    uStack_3ac = 0x1013ff2c;
    FUN_1005c1e0();
    uStack_3a8 = 0;
    uStack_3ac = 1;
    pwStack_3b0 = L"躋Ȑ";
    FUN_100577d0();
    uStack_3a8 = 0x1bc;
    uStack_3ac = 0x1013ff50;
    (**(code **)(**(int **)(in_ECX + 0x210) + 0x164))();
    uStack_3ac = 1;
    pwStack_3b0 = L"L2UI_ch3.NpcWnd.Npc1_back";
    uVar4 = FUN_1003f630();
    pwStack_3b0 = *(wchar_t **)(in_ECX + 0x210);
    *(undefined4 *)(pwStack_3b0 + 0xe8) = uVar4;
    uStack_3ac = 0;
    local_14 = (undefined1 *)&pwStack_3b0;
    uStack_3b8 = 0x1013ff7a;
    FName::FName((FName *)&pwStack_3b0,0);
    UObject::GetTransientPackage();
    uStack_3b8 = 0x3a0;
    uStack_3bc = 0x1013ff87;
    iVar2 = FUN_1013cd90();
    if (iVar2 == 0) {
      pwStack_3b0 = (wchar_t *)0x0;
    }
    else {
      uStack_3ac = 0x1013ff95;
      pwStack_3b0 = (wchar_t *)FUN_10012260();
    }
    *(wchar_t **)(in_ECX + 0x228) = pwStack_3b0;
    uStack_3ac = 0x800020;
    uStack_3ac = FUN_10060d40();
    pwStack_3b0 = L"赨";
    FUN_1005c1e0();
    uStack_3ac = 0x8d;
    pwStack_3b0 = (wchar_t *)0x8c;
    FUN_1000eae0();
    uStack_3ac = 0;
    pwStack_3b0 = (wchar_t *)0x1;
    FUN_100577d0();
    uStack_3ac = 0x42d80000;
    pwStack_3b0 = (wchar_t *)0x43800000;
    (**(code **)(**(int **)(in_ECX + 0x228) + 0x128))();
    uStack_3b8 = 0;
    uStack_3bc = 5;
    uStack_3c0 = 0x1014001e;
    (**(code **)(**(int **)(in_ECX + 0x228) + 0xd0))();
    uStack_3c0 = 0;
    local_14 = (undefined1 *)&uStack_3c4;
    uStack_3cc = 0x1014002e;
    FName::FName((FName *)&uStack_3c4,0);
    UObject::GetTransientPackage();
    uStack_3cc = 0x3a0;
    puStack_3d0 = (undefined4 *)0x1014003b;
    iVar2 = FUN_1013cd90();
    if (iVar2 == 0) {
      uStack_3c4 = 0;
    }
    else {
      uStack_3c0 = 0x10140049;
      uStack_3c4 = FUN_10012260();
    }
    *(undefined4 *)(in_ECX + 0x22c) = uStack_3c4;
    uStack_3c0 = 0x20;
    uStack_3c0 = FUN_10060d40();
    uStack_3c4 = 0x10140069;
    FUN_1005c1e0();
    uStack_3c0 = 0xb9;
    uStack_3c4 = 0xb8;
    FUN_1000eae0();
    uStack_3c0 = 0;
    uStack_3c4 = 1;
    FUN_100577d0();
    uStack_3c0 = 0;
    uStack_3c4 = 0x15b;
    uStack_3cc = 0x101400b2;
    (**(code **)(**(int **)(in_ECX + 0x22c) + 0xd0))();
    local_3c = 500;
    uStack_3cc = 0;
    puStack_3d0 = &local_3c;
    pwStack_3d4 = L"ShortCutDelay";
    puStack_3d8 = &DAT_10252b00;
    uStack_3dc = 0x101400d8;
    iVar2 = (**(code **)(**(int **)GConfig_exref + 4))();
    if (iVar2 == 0) {
      local_3c = 500;
    }
    uStack_3dc = 0;
    local_14 = (undefined1 *)&uStack_3e0;
    uStack_3e8 = 0x101400f3;
    FName::FName((FName *)&uStack_3e0,0);
    UObject::GetTransientPackage();
    uStack_3e8 = 0x674;
    uStack_3ec = 0x10140100;
    iVar2 = FUN_1013cd30();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_3dc = 0x1014010e;
      piVar5 = (int *)FUN_1013c6c0();
    }
    *(int **)(in_ECX + 0x208) = piVar5;
    uStack_3dc = 4;
    uStack_3e0 = 0;
    uStack_3e8 = 0xbb;
    uStack_3ec = 0x15c;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) - 187.0);
    uStack_3f0 = (undefined4)local_28;
    uStack_3f4 = 0;
    uStack_3f8 = 0x1014015d;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_3f8 = 0x6001009;
    uStack_3fc = *(undefined4 *)(in_ECX + 0x208);
    uStack_400 = 0x10140170;
    uStack_3f8 = FUN_10060d40();
    uStack_3fc = 0x1014017c;
    FUN_1005c1e0();
    uStack_3f8 = 1;
    uStack_3fc = 0;
    uStack_400 = 0x1014018b;
    FUN_100577d0();
    uStack_3f8 = 0;
    uStack_3fc = 0;
    uStack_400 = 7;
    uStack_404 = 0x101401ad;
    (**(code **)(**(int **)(in_ECX + 0x208) + 0xd0))();
    uStack_404 = 0;
    local_14 = (undefined1 *)&uStack_408;
    uStack_410 = 0x101401bd;
    FName::FName((FName *)&uStack_408,0);
    UObject::GetTransientPackage();
    uStack_410 = 0x1dc;
    uStack_414 = 0x101401ca;
    iVar2 = FUN_1013cee0();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_404 = 0x101401d8;
      piVar5 = (int *)FUN_100bd380();
    }
    *(int **)(in_ECX + 0x218) = piVar5;
    uStack_404 = 3;
    uStack_408 = 0;
    uStack_410 = 0x191;
    uStack_414 = 0x100;
    uStack_418 = 0xb4;
    uStack_41c = 0x180;
    uStack_420 = 0x10140208;
    (**(code **)(*piVar5 + 0xc0))();
    uStack_420 = 0x3001;
    uStack_424 = *(undefined4 *)(in_ECX + 0x218);
    uStack_428 = 0x1014021b;
    uStack_420 = FUN_10060d40();
    uStack_424 = 0x10140227;
    FUN_1005c1e0();
    uStack_420 = 999;
    uStack_424 = 0x1014023c;
    (**(code **)(**(int **)(in_ECX + 0x218) + 0x164))();
    uStack_424 = 0;
    uStack_428 = 1;
    FUN_100577d0();
    uStack_424 = 0;
    local_14 = (undefined1 *)&uStack_428;
    FName::FName((FName *)&uStack_428,0);
    UObject::GetTransientPackage();
    iVar2 = FUN_1013ceb0();
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uStack_424 = 0x10140276;
      piVar5 = (int *)FUN_101ac3c0();
    }
    *(int **)(in_ECX + 0x23c) = piVar5;
    uStack_424 = 3;
    uStack_428 = 0;
    local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
    local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
    local_28 = (longlong)ROUND(local_4c * 0.5 - 167.0);
    (**(code **)(*piVar5 + 0xc0))();
    FUN_10060d40();
    FUN_1005c1e0();
    FUN_100577d0();
    (**(code **)(**(int **)(in_ECX + 0x23c) + 0x164))();
    local_14 = &stack0xfffffbb8;
    uStack_450 = 0x10140340;
    FName::FName((FName *)&stack0xfffffbb8,0);
    UObject::GetTransientPackage();
    uStack_450 = 0x234;
    uStack_454 = 0x1014034d;
    iVar2 = FUN_1013d0f0();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_100697c0();
    }
    *(int *)(in_ECX + 0x21c) = iVar2;
    if (iVar2 == 0) {
      uStack_450 = 0x1014037e;
      appFailAssert("m_pXMLDebugWnd",".\\Src\\NConsole.cpp",0x463);
    }
    FUN_10060d40();
    FUN_1005c1e0();
    (**(code **)(**(int **)(in_ECX + 0x21c) + 0x128))();
    uStack_450 = 0;
    uStack_454 = 5;
    uStack_458 = 0x101403e2;
    (**(code **)(**(int **)(in_ECX + 0x21c) + 0xd0))();
    local_44 = (ulonglong)local_44._4_4_ << 0x20;
    uStack_458 = 0;
    uStack_45c = 0;
    uStack_460 = 0;
    uStack_464 = 0x101403fa;
    (**(code **)(**(int **)(in_ECX + 0x21c) + 0xd0))();
    uStack_464 = 1;
    uStack_468 = 0x1014040c;
    (**(code **)(**(int **)(in_ECX + 0x21c) + 0x164))();
    if (*(int *)GIsTestHtml_exref != 0) {
      uStack_468 = 0;
      local_14 = (undefined1 *)&pcStack_46c;
      FName::FName((FName *)&pcStack_46c,0);
      UObject::GetTransientPackage();
      iVar2 = FUN_1013ce20();
      if (iVar2 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        uStack_468 = 0x10140445;
        piVar5 = (int *)FUN_1008a250();
      }
      *(int **)(in_ECX + 0x224) = piVar5;
      uStack_468 = 3;
      pcStack_46c = (code *)0x0;
      local_1c = (int *)CONCAT22(in_FPUControlWord,(undefined2)local_1c);
      local_14 = (undefined1 *)(in_FPUControlWord | 0xc00);
      local_44 = (longlong)ROUND(local_4c * 0.5);
      uStack_480 = (undefined4)local_44;
      uStack_484 = 0x101404b3;
      (**(code **)(*piVar5 + 0xc0))();
      uStack_468 = 0x22;
      pcStack_46c = *(code **)(in_ECX + 0x224);
      uStack_468 = FUN_10060d40();
      pcStack_46c = (code *)0x101404cf;
      FUN_1005c1e0();
    }
    if ((*(int *)GIsL2Console_exref == 0) && (*(int *)GIsL2NetLogin_exref == 0)) {
      uStack_468 = 0;
      local_14 = (undefined1 *)&pcStack_46c;
      pcStack_46c = GIsL2Console_exref;
      FName::FName((FName *)&pcStack_46c,0);
      UObject::GetTransientPackage();
      iVar2 = FUN_1013d120();
      if (iVar2 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        uStack_468 = 0x10140518;
        piVar5 = (int *)FUN_101a4000();
      }
      *(int **)(in_ECX + 0x230) = piVar5;
      uStack_468 = 100;
      pcStack_46c = (code *)0xffffffff;
      (**(code **)(*piVar5 + 0xd0))();
      (**(code **)(**(int **)(in_ECX + 0x230) + 0xe4))();
      (**(code **)(**(int **)(in_ECX + 0x230) + 0x128))();
      uStack_480 = *(undefined4 *)(in_ECX + 0x230);
      uStack_484 = 0x10140587;
      FUN_10060d40();
      uStack_480 = 0x10140593;
      FUN_1005c1e0();
      uStack_480 = 0x101405a8;
      (**(code **)(**(int **)(in_ECX + 0x230) + 0x168))();
      uStack_480 = 0x101405b8;
      (**(code **)(**(int **)(in_ECX + 0x230) + 0x13c))();
      uStack_480 = 0;
      local_14 = (undefined1 *)&uStack_484;
      uStack_48c = 0x101405c8;
      FName::FName((FName *)&uStack_484,0);
      UObject::GetTransientPackage();
      uStack_48c = 0x3f84;
      uStack_490 = 0x101405d5;
      iVar2 = FUN_1013d150();
      if (iVar2 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        uStack_480 = 0x101405e3;
        piVar5 = (int *)FUN_10194650();
      }
      *(int **)(in_ECX + 0x234) = piVar5;
      local_28 = 0x64ffffffff;
      uStack_480 = 100;
      uStack_484 = 0xffffffff;
      uStack_48c = 0x1014060c;
      (**(code **)(*piVar5 + 0xd0))();
      uStack_48c = 0x1014061c;
      (**(code **)(**(int **)(in_ECX + 0x234) + 0xe4))();
      uStack_48c = 0x43898000;
      uStack_490 = 0x43700000;
      pwStack_494 = L"j躋ȴ";
      (**(code **)(**(int **)(in_ECX + 0x234) + 0x128))();
      pwStack_494 = (wchar_t *)0x0;
      uStack_498 = *(undefined4 *)(in_ECX + 0x234);
      uStack_49c = 0x10140652;
      pwStack_494 = (wchar_t *)FUN_10060d40();
      uStack_498 = 0x1014065e;
      FUN_1005c1e0();
      pwStack_494 = L"NpcViewerState";
      uStack_498 = 0x10140673;
      (**(code **)(**(int **)(in_ECX + 0x234) + 0x168))();
      uStack_498 = 0x10140683;
      (**(code **)(**(int **)(in_ECX + 0x234) + 0x13c))();
      uStack_498 = 0;
      local_14 = (undefined1 *)&uStack_49c;
      FName::FName((FName *)&uStack_49c,0);
      pUVar6 = UObject::GetTransientPackage();
      iVar2 = FUN_1013d180(0x3fa0,pUVar6);
      if (iVar2 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        uStack_498 = 0x101406ae;
        piVar5 = (int *)FUN_1018e480();
      }
      *(int **)(in_ECX + 0x238) = piVar5;
      local_c = 0xffffffff;
      uStack_498 = 100;
      uStack_49c = 0xffffffff;
      (**(code **)(*piVar5 + 0xd0))(3);
      (**(code **)(**(int **)(in_ECX + 0x238) + 0xe4))();
      (**(code **)(**(int **)(in_ECX + 0x238) + 0x128))(0x43700000,0x43c80000);
      uVar4 = FUN_10060d40(*(undefined4 *)(in_ECX + 0x238),0);
      FUN_1005c1e0(uVar4);
      (**(code **)(**(int **)(in_ECX + 0x238) + 0x168))(L"SKILLVIEWER");
      (**(code **)(**(int **)(in_ECX + 0x238) + 0x13c))();
    }
    uStack_468 = 0;
    pcStack_46c = (code *)0x3e8;
    uVar4 = FUN_1003f600();
    *(undefined4 *)(in_ECX + 0x250) = uVar4;
    FString::FString(local_10,(ushort *)L"LoginState");
    local_7c._0_1_ = 7;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"EulaMsgState");
    local_7c._0_1_ = 8;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ChinaWarnMsgState");
    local_7c._0_1_ = 9;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ServerListState");
    local_7c._0_1_ = 10;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ReplaySelectState");
    local_7c._0_1_ = 0xb;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoginState");
    local_7c._0_1_ = 0xc;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"EulaMsgState");
    local_7c._0_1_ = 0xd;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ChinaWarnMsgState");
    local_7c._0_1_ = 0xe;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ServerListState");
    local_7c._0_1_ = 0xf;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ReplaySelectState");
    local_7c._0_1_ = 0x10;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoginState");
    local_7c._0_1_ = 0x11;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoginState");
    local_7c._0_1_ = 0x12;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"WarnMsgState");
    local_7c._0_1_ = 0x13;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"EulaMsgState");
    local_7c._0_1_ = 0x14;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ChinaWarnMsgState");
    local_7c._0_1_ = 0x15;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ServerListState");
    local_7c._0_1_ = 0x16;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"CreditState");
    local_7c._0_1_ = 0x17;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"CharacterSelectState");
    local_7c._0_1_ = 0x18;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"CharacterCreateState");
    local_7c._0_1_ = 0x19;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"BenchMarkResultState");
    local_7c._0_1_ = 0x1a;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoginState");
    local_7c._0_1_ = 0x1b;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"EulaMsgState");
    local_7c._0_1_ = 0x1c;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ChinaWarnMsgState");
    local_7c._0_1_ = 0x1d;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ServerListState");
    local_7c._0_1_ = 0x1e;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"CharacterSelectState");
    local_7c._0_1_ = 0x1f;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"ReplaySelectState");
    local_7c._0_1_ = 0x20;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x21;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoginState");
    local_7c._0_1_ = 0x22;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoadingState");
    local_7c._0_1_ = 0x23;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"CharacterSelectState");
    local_7c._0_1_ = 0x24;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x25;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoginState");
    local_7c._0_1_ = 0x26;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"LoadingState");
    local_7c._0_1_ = 0x27;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"CharacterSelectState");
    local_7c._0_1_ = 0x28;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x29;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x2a;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x2b;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x2c;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x2d;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x2e;
    FUN_10141490();
    local_7c._0_1_ = 4;
    FString::~FString(local_10);
    FString::FString(local_10,(ushort *)L"GamingState");
    local_7c._0_1_ = 0x2f;
    FUN_10141490();
    local_7c = CONCAT31(local_7c._1_3_,4);
    FString::~FString(local_10);
    iVar2 = FUN_1003f630();
    *(int *)(in_ECX + 0x240) = iVar2;
    if (iVar2 == 0) {
      uStack_480 = 0x10140fe4;
      appFailAssert("m_pMoveAllItemTex",".\\Src\\NConsole.cpp",0x55a);
    }
    *(undefined4 *)(in_ECX + 0x270) = 0;
    local_7c._0_1_ = 1;
    FString::~FString(local_64);
    local_7c = (uint)local_7c._1_3_ << 8;
    FString::~FString(local_70);
  }
  ExceptionList = local_84;
  return 1;
}


// ==== 10141026 Catch@10141026

void Catch_10141026(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_102a47f0);
}


// ==== 1014103d Catch@1014103d

void Catch_1014103d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NCConsole::OnCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141070 FUN_10141070

void FUN_10141070(undefined4 param_1)

{
  FUN_101b9890(param_1);
  return;
}


// ==== 10141090 FUN_10141090

undefined4 FUN_10141090(void)

{
  if (*(int *)GLanguageType_exref == 0) {
    return 1;
  }
  return 0;
}


// ==== 101410f7 Catch@101410f7

void Catch_101410f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014110b Catch@1014110b

void Catch_1014110b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsUseOTP");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141130 FUN_10141130

undefined4 FUN_10141130(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x513c);
}


// ==== 1014117a Catch@1014117a

void Catch_1014117a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014118e Catch@1014118e

void Catch_1014118e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetServerAgeLimit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101411b0 FUN_101411b0

undefined4 FUN_101411b0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209f60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10141130();
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141216 Catch@10141216

void Catch_10141216(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014122a Catch@1014122a

void Catch_1014122a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsLimitContentForYoungUsers");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141250 FUN_10141250

undefined4 FUN_10141250(void)

{
  if (DAT_10350f68 == 0) {
    return 0;
  }
  return 1;
}


// ==== 101412b6 Catch@101412b6

void Catch_101412b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101412ca Catch@101412ca

void Catch_101412ca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsFinalRelease");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101412f0 FUN_101412f0

undefined4 FUN_101412f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5144);
}


// ==== 1014133a Catch@1014133a

void Catch_1014133a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014134e Catch@1014134e

void Catch_1014134e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetLobbySelectedCharacterInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141370 FUN_10141370

undefined4 FUN_10141370(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209fc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5064) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_10045430(param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 101413df Catch@101413df

void Catch_101413df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101413f3 Catch@101413f3

void Catch_101413f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetShortcutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141410 FUN_10141410

void FUN_10141410(FString *param_1,FString *param_2)

{
  FString aFStack_30 [4];
  undefined4 uStack_2c;
  FString aFStack_24 [12];
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10209ff2;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  uStack_2c = 0x10141448;
  FString::FString(aFStack_24,param_2);
  local_4 = 0;
  FString::FString(aFStack_30,param_1);
  local_4 = 0xffffffff;
  FUN_10070850();
  ExceptionList = local_c;
  return;
}


// ==== 10141490 FUN_10141490

void FUN_10141490(undefined4 param_1,FString *param_2)

{
  int iVar1;
  FString aFStack_38 [8];
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020a019;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_30 = 0x101414cf;
  iVar1 = FString::operator_int(param_2);
  if (iVar1 != 0) {
    FString::FString(aFStack_38,param_2);
    local_8 = local_8 & 0xffffff00;
    FUN_1006ff70(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10141514 Catch@10141514

void Catch_10141514(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141528 Catch@10141528

void Catch_10141528(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RegisterUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141550 FUN_10141550

void FUN_10141550(void)

{
  HKL pHVar1;
  HIMC pHVar2;
  short sVar3;
  DWORD local_110;
  DWORD local_10c;
  CHAR local_108 [260];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)&local_110;
  pHVar1 = GetKeyboardLayout(0);
  ImmGetIMEFileNameA(pHVar1,local_108,0x103);
  pHVar2 = ImmGetContext(DAT_103663b8);
  switch((uint)pHVar1 & 0x3ff) {
  case 4:
    sVar3 = (short)((uint)pHVar1 >> 0x10);
    if ((((sVar3 != -0x1ffe) && (sVar3 != -0x1ffa)) && (sVar3 != -0x1ff8)) &&
       ((*(int *)GLanguageType_exref != 3 || (sVar3 != -0x1fff)))) {
      lstrcmpiA(local_108,"CINTLGNT.IME");
    }
    goto LAB_101416c2;
  default:
    break;
  case 9:
    break;
  case 0x11:
LAB_101416c2:
    ImmGetOpenStatus(pHVar2);
    break;
  case 0x12:
    ImmGetConversionStatus(pHVar2,&local_110,&local_10c);
    break;
  case 0x1e:
  }
  ImmReleaseContext(DAT_103663b8,pHVar2);
  __security_check_cookie(local_4 ^ (uint)&local_110);
  return;
}


// ==== 10141740 FUN_10141740

undefined4 FUN_10141740(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50a8) != 0) {
    uVar1 = FUN_10070e60();
    return uVar1;
  }
  return 0;
}


// ==== 10141760 FUN_10141760

undefined4 FUN_10141760(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  short *psVar4;
  ushort *puVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a040;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  psVar4 = L2ParamStack::Top(param_1);
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    puVar5 = FL2GameData::GetNpcName((FL2GameData *)GL2GameData_exref,(int)pvVar3 + -1000000);
    if (pvVar2 == (void *)0x1) {
      uVar6 = 0xffff7200;
    }
    else if (pvVar2 == (void *)0x3) {
      uVar6 = 0xff00ff00;
    }
    else if (pvVar2 == (void *)0x4) {
      uVar6 = 0xff7d77ff;
    }
    else {
      if (pvVar2 == (void *)0x2) {
        FUN_1013df30(pvVar1,puVar5,psVar4,0xffff00ff,2);
        FUN_101394d0(puVar5);
        ExceptionList = local_10;
        return 1;
      }
      if (pvVar2 == (void *)0x8) {
        uVar6 = 0xffeaa5f5;
      }
      else if (pvVar2 == (void *)0x9) {
        uVar6 = 0xff77ff99;
      }
      else if (pvVar2 == (void *)0x6) {
        uVar6 = 0xff80ffff;
      }
      else if (pvVar2 == (void *)0x7) {
        uVar6 = 0xff80ffff;
      }
      else if (pvVar2 == (void *)0xa) {
        pvVar2 = (void *)0x7;
        uVar6 = 0xff80ffff;
        puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x6b83c));
      }
      else if (pvVar2 == (void *)0xf) {
        pvVar2 = (void *)0x7;
        uVar6 = 0xffff9695;
      }
      else if (pvVar2 == (void *)0x10) {
        pvVar2 = (void *)0x7;
        uVar6 = 0xfffff8b2;
      }
      else if (pvVar2 == (void *)0x12) {
        pvVar2 = (void *)0x7;
        uVar6 = 0xff7b7df2;
      }
      else {
        pvVar2 = (void *)0x0;
        uVar6 = 0xffdcdcdc;
      }
    }
    FUN_1013df30(pvVar1,puVar5,psVar4,uVar6,pvVar2);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1014195f Catch@1014195f

void Catch_1014195f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10141973 Catch@10141973

void Catch_10141973(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::DisplayChatMsg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141990 FUN_10141990

undefined4 FUN_10141990(void *param_1,void *param_2,void *param_3)

{
  int *piVar1;
  int in_ECX;
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
  piVar1 = *(int **)(*(int *)(in_ECX + 0x50) + 0x60);
  if (*(int *)GIsOnlyL2Console_exref == 0) {
    L2ParamStack::L2ParamStack(local_2c,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_2c,param_1);
    L2ParamStack::PushBack(local_2c,param_2);
    L2ParamStack::PushBack(local_2c,param_3);
    (**(code **)(*piVar1 + 0x2b0))(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
  }
  else {
    local_14 = (undefined1 *)&uStack_3c;
    FUN_101392c0(param_2,0xffdcdcdc,0,0);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141a56 Catch@10141a56

void Catch_10141a56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141a6a Catch@10141a6a

void Catch_10141a6a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SendChatMsgToServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141a90 FUN_10141a90

undefined4 FUN_10141a90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x138))(param_1,param_2,param_3)
  ;
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141b11 Catch@10141b11

void Catch_10141b11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141b25 Catch@10141b25

void Catch_10141b25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestAuthLogin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141b50 FUN_10141b50

undefined4 FUN_10141b50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a0b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x13c))(param_1,param_2);
  if (iVar1 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141bcd Catch@10141bcd

void Catch_10141bcd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141be1 Catch@10141be1

void Catch_10141be1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestAuthCardKeyLogin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141c00 FUN_10141c00

void FUN_10141c00(void)

{
  FL2ReplayManager *this;
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2b4))();
  this = *(FL2ReplayManager **)(*(int *)(in_ECX + 0x50) + 0x198);
  if (this != (FL2ReplayManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10141c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FL2ReplayManager::OnSaveStop(this);
    return;
  }
  return;
}


// ==== 10141c30 FUN_10141c30

undefined4 FUN_10141c30(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  int *in_ECX;
  uint uStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a0d0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar2 = in_ECX[0x1440];
  puVar1 = &uStack_38;
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x800))(&local_20,&local_1c,&local_18);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = (**(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0x148))
                    (param_1,iVar2 != 0,local_20,local_1c,local_18);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141ce4 Catch@10141ce4

void Catch_10141ce4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10141cf8 Catch@10141cf8

void Catch_10141cf8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestGameStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141d20 FUN_10141d20

void FUN_10141d20(void)

{
  UL2ConsoleWnd *in_ECX;
  FString aFStack_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020a0f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x50ac) != 0) && (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f8) != 0)) {
    FUN_1017de50();
  }
  uStack_38 = 0x10141d79;
  UL2ConsoleWnd::SetState(in_ECX,1);
  FString::FString(aFStack_3c,(ushort *)L"LoadingState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  ExceptionList = local_10;
  return;
}


// ==== 10141dbe Catch@10141dbe

void Catch_10141dbe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141dd2 Catch@10141dd2

void Catch_10141dd2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveCharacterSelectedPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141df0 FUN_10141df0

undefined4 FUN_10141df0(undefined4 param_1)

{
  int iVar1;
  UL2ConsoleWnd *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x14c))(param_1);
  if (iVar1 != 0) {
    UL2ConsoleWnd::SetState(in_ECX,1);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141e75 Catch@10141e75

void Catch_10141e75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141e89 Catch@10141e89

void Catch_10141e89(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestCharacterDelete");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141eb0 FUN_10141eb0

undefined4 FUN_10141eb0(undefined4 param_1)

{
  int iVar1;
  UL2ConsoleWnd *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x150))(param_1);
  if (iVar1 != 0) {
    UL2ConsoleWnd::SetState(in_ECX,1);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10141f35 Catch@10141f35

void Catch_10141f35(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141f49 Catch@10141f49

void Catch_10141f49(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestCharacterRestore");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10141f70 FUN_10141f70

void FUN_10141f70(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x154))();
  ExceptionList = local_10;
  return;
}


// ==== 10141fc4 Catch@10141fc4

void Catch_10141fc4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10141fd8 Catch@10141fd8

void Catch_10141fd8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestNewCharacter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142000 FUN_10142000

void FUN_10142000(void)

{
  UL2ConsoleWnd *in_ECX;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_f0 [24];
  uint uStack_90;
  undefined4 local_78 [24];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1020a180;
  local_10 = ExceptionList;
  uStack_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_18 = uStack_90;
  ExceptionList = &local_10;
  local_14 = (undefined1 *)&uStack_90;
  puVar4 = local_78;
  puVar3 = (undefined4 *)register0x00000010;
  for (iVar1 = 0x18; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  local_8 = 0;
  iVar1 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
  puVar3 = local_78;
  puVar4 = auStack_f0;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = (**(code **)(iVar1 + 0x158))();
  if (iVar1 != 0) {
    UL2ConsoleWnd::SetState(in_ECX,1);
  }
  ExceptionList = local_10;
  auStack_f0[3] = 0x10142090;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1014209a Catch@1014209a

void Catch_1014209a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + -0x7c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x78,&DAT_102a47f0);
}


// ==== 101420ae Catch@101420ae

void Catch_101420ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestCharacterCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101420d0 FUN_101420d0

void FUN_101420d0(undefined4 param_1)

{
  FL2ReplayManager *this;
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2e4))(param_1);
  this = *(FL2ReplayManager **)(*(int *)(in_ECX + 0x50) + 0x198);
  if (this != (FL2ReplayManager *)0x0) {
    FL2ReplayManager::OnSaveStop(this);
  }
  return;
}


// ==== 10142100 FUN_10142100

void FUN_10142100(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014210e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2e8))();
  return;
}


// ==== 10142110 FUN_10142110

void FUN_10142110(void)

{
  int iVar1;
  FString aFStack_24 [4];
  undefined4 uStack_20;
  ushort *puStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020a1b9;
  local_c = ExceptionList;
  uStack_18 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  puStack_1c = (ushort *)0x10142146;
  iVar1 = FString::Len((FString *)(GL2GameData_exref + 0x7cb88));
  if (0 < iVar1) {
    FString::FString(aFStack_24,(ushort *)L"WarnMsgState");
    local_4 = 0xffffffff;
    FUN_10070110();
    puStack_1c = (ushort *)0x10142191;
    puStack_1c = FString::operator*((FString *)(GL2GameData_exref + 0x7cb88));
    uStack_20 = 0x101421a3;
    FUN_1018f2c0();
  }
  ExceptionList = local_c;
  return;
}


// ==== 101421c0 FUN_101421c0

void FUN_101421c0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a1e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x140))();
  ExceptionList = local_10;
  return;
}


// ==== 10142214 Catch@10142214

void Catch_10142214(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142228 Catch@10142228

void Catch_10142228(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestServerList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142250 FUN_10142250

void FUN_10142250(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x144))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101422aa Catch@101422aa

void Catch_101422aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101422be Catch@101422be

void Catch_101422be(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestServerLogin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101422e0 FUN_101422e0

void FUN_101422e0(undefined4 param_1)

{
  int in_ECX;
  FString aFStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020a229;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(aFStack_3c,(ushort *)L"ServerListState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  uStack_34 = 0x10142356;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1d0) + 0x174))();
  uStack_34 = param_1;
  uStack_38 = 0x10142371;
  FUN_101a84d0();
  uStack_34 = 0x1014238a;
  (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1d0) + 0x1cc) + 0x78))();
  ExceptionList = local_10;
  return;
}


// ==== 101423a5 Catch@101423a5

void Catch_101423a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101423b9 Catch@101423b9

void Catch_101423b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveServerList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101423e0 FUN_101423e0

void FUN_101423e0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101a99d0(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10142448 Catch@10142448

void Catch_10142448(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014245c Catch@1014245c

void Catch_1014245c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddServerList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142480 FUN_10142480

void FUN_10142480(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101a8680();
  (**(code **)(*in_ECX + 0x7fc))(5);
  ExceptionList = local_10;
  return;
}


// ==== 101424f2 Catch@101424f2

void Catch_101424f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142506 Catch@10142506

void Catch_10142506(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::EndServerList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142530 FUN_10142530

void FUN_10142530(undefined4 param_1)

{
  int iVar1;
  ushort *puVar2;
  UL2ConsoleWnd *in_ECX;
  FString *pFVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  switch(param_1) {
  case 0:
    iVar1 = *(int *)in_ECX;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x26eec));
    (**(code **)(iVar1 + 0x658))(puVar2);
    break;
  case 1:
    iVar1 = *(int *)in_ECX;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x25c98));
    (**(code **)(iVar1 + 0x658))(puVar2);
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1fc) + 0x1cc) + 0x174))();
    break;
  case 2:
    pFVar3 = (FString *)(GL2GameData_exref + 0x25d50);
    goto LAB_10142676;
  case 3:
    pFVar3 = (FString *)(GL2GameData_exref + 0x25dac);
    goto LAB_101425f8;
  case 4:
    pFVar3 = (FString *)(GL2GameData_exref + 0x28a3c);
    goto LAB_10142676;
  case 5:
    pFVar3 = (FString *)(GL2GameData_exref + 0x4e544);
LAB_101425f8:
    iVar1 = *(int *)in_ECX;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 0x658))(puVar2);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1fc) + 0x1cc) + 0x1ec) +
                0x174))();
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1fc) + 0x1cc) + 0x1ec) +
                0x78))();
    break;
  case 6:
    pFVar3 = (FString *)(GL2GameData_exref + 0x51cf8);
LAB_10142676:
    iVar1 = *(int *)in_ECX;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 0x658))(puVar2);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1fc) + 0x1cc) + 0x1ec) +
                0x174))();
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1fc) + 0x1cc) + 0x1ec) +
                0x78))();
  }
  UL2ConsoleWnd::SetState(in_ECX,3);
  ExceptionList = local_10;
  return;
}


// ==== 101426ef Catch@101426ef

void Catch_101426ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142703 Catch@10142703

void Catch_10142703(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RefuseCharacterCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142740 FUN_10142740

void FUN_10142740(void)

{
  L2ConsoleState LVar1;
  UL2ConsoleWnd *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStackY_340 [193];
  undefined4 uStackY_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a2b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f8) == 0) {
    uStackY_3c = 0x10142798;
    appFailAssert("m_pConsole->m_pLobbyWnd",".\\Src\\NConsoleWindow.cpp",0x911);
  }
  LVar1 = UL2ConsoleWnd::GetState(in_ECX);
  if (LVar1 != 5) {
    puVar3 = auStackY_340;
    for (iVar2 = 0xc5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *(undefined4 *)register0x00000010;
      puVar3 = puVar3 + 1;
    }
    FUN_1017eeb0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101427e6 Catch@101427e6

void Catch_101427e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101427fa Catch@101427fa

void Catch_101427fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddCharacterInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142820 FUN_10142820

undefined4 FUN_10142820(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    uVar1 = FUN_101ace30();
    return uVar1;
  }
  return 0;
}


// ==== 10142840 FUN_10142840

FString * FUN_10142840(FString *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020a2ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(DAT_103663bc + 0x5110) == 0) {
    FString::FString(param_1,(ushort *)&DAT_1022f9f8);
  }
  else {
    FUN_101ad9f0(param_1,param_2);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 101428d0 FUN_101428d0

void FUN_101428d0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int *in_ECX;
  FString *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a310;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 1) {
    this = (FString *)(GL2GameData_exref + 0x2aee4);
  }
  else {
    if (param_1 == 2) {
      iVar1 = *in_ECX;
      ExceptionList = &local_10;
      puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x30358));
      (**(code **)(iVar1 + 0x658))(puVar2);
      ExceptionList = local_10;
      return;
    }
    if (param_1 != 3) {
      return;
    }
    this = (FString *)(GL2GameData_exref + 0x302fc);
  }
  iVar1 = *in_ECX;
  ExceptionList = &local_10;
  puVar2 = FString::operator*(this);
  (**(code **)(iVar1 + 0x658))(puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1014297f Catch@1014297f

void Catch_1014297f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142993 Catch@10142993

void Catch_10142993(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AcceptCharacterDelete");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101429b0 FUN_101429b0

void FUN_101429b0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  uint uStack_34;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a330;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  local_18 = 1;
  iVar4 = (**(code **)**(undefined4 **)GConfig_exref)(&DAT_10252b00,L"L2VersionCheck",&local_18,0);
  if (iVar4 == 0) {
    local_18 = 1;
  }
  else if (local_18 == 0) {
    if ((char)pvVar1 == '\0') {
      iVar4 = *in_ECX;
      puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x260e8));
      (**(code **)(iVar4 + 0x658))(puVar5);
    }
    goto LAB_10142a91;
  }
  if ((char)pvVar1 == '\0') {
    (**(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0x2b4))();
    iVar4 = *in_ECX;
    puVar5 = FString::operator*((FString *)(GL2GameData_exref + 0x2608c));
    (**(code **)(iVar4 + 0x658))(puVar5);
  }
LAB_10142a91:
  in_ECX[0x1449] = (int)pvVar2;
  in_ECX[0x144a] = (int)pvVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10142abb Catch@10142abb

void Catch_10142abb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10142acf Catch@10142acf

void Catch_10142acf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveVersionCheck");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142af0 FUN_10142af0

void FUN_10142af0(void)

{
  return;
}


// ==== 10142b00 FUN_10142b00

void FUN_10142b00(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a359;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10142b5a Catch@10142b5a

void Catch_10142b5a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142b6e Catch@10142b6e

void Catch_10142b6e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetLoadingTex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142b90 FUN_10142b90

void FUN_10142b90(void)

{
  FL2ReplayManager *this;
  int iVar1;
  FString aFStack_20 [8];
  undefined4 uStack_18;
  uint uStack_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020a39b;
  local_c = ExceptionList;
  uStack_14 = DAT_103554c4 ^ (uint)&local_10;
  ExceptionList = &local_c;
  if ((*(int *)GL2ReplayMode_exref != 0) &&
     (this = *(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198),
     this != (FL2ReplayManager *)0x0)) {
    uStack_18 = 0x10142bdc;
    iVar1 = FL2ReplayManager::GetState(this);
    local_10 = aFStack_20;
    if (iVar1 == 1) {
      local_10 = aFStack_20;
      FString::FString(aFStack_20,(ushort *)L"BenchMarkMenuState");
      local_4 = 0xffffffff;
      FUN_10070110();
      ExceptionList = local_c;
      return;
    }
    if (iVar1 == 5) {
      local_10 = aFStack_20;
      FString::FString(aFStack_20,(ushort *)L"BenchMarkResultState");
      local_4 = 0xffffffff;
      FUN_10070110();
      ExceptionList = local_c;
      return;
    }
    FString::FString(aFStack_20,(ushort *)L"BenchMarkPlayState");
    local_4 = 0xffffffff;
    FUN_10070110();
    uStack_18 = 0x10142ca7;
    iVar1 = FL2ReplayManager::UseChatData
                      (*(FL2ReplayManager **)(*(int *)(DAT_103663bc + 0x50) + 0x198));
    if (iVar1 != 0) {
      uStack_18 = 0x10142cc7;
      (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50ac) + 0x208) + 0x138))();
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 10142ce0 FUN_10142ce0

void FUN_10142ce0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_7c [20];
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a3c0;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar2 = auStack_7c;
  for (iVar1 = 0x14; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)register0x00000010;
    puVar2 = puVar2 + 1;
  }
  FUN_10196e80();
  ExceptionList = local_10;
  return;
}


// ==== 10142d4f Catch@10142d4f

void Catch_10142d4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142d63 Catch@10142d63

void Catch_10142d63(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AddRecommandedData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142d80 FUN_10142d80

void FUN_10142d80(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a3e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100bda90();
  ExceptionList = local_10;
  return;
}


// ==== 10142ddc Catch@10142ddc

void Catch_10142ddc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142df0 Catch@10142df0

void Catch_10142df0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::EndRecommandedData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142e10 FUN_10142e10

void FUN_10142e10(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x160))();
  ExceptionList = local_10;
  return;
}


// ==== 10142e64 Catch@10142e64

void Catch_10142e64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142e78 Catch@10142e78

void Catch_10142e78(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142ea0 FUN_10142ea0

undefined4 FUN_10142ea0(void *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020a429;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,param_1);
  pvVar1 = (void *)(**(code **)(*in_ECX + 0x590))();
  L2ParamStack::PushBack(local_2c,pvVar1);
  uVar2 = (**(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0x184))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return uVar2;
}


// ==== 10142f3d Catch@10142f3d

void Catch_10142f3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142f51 Catch@10142f51

void Catch_10142f51(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestUseItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142f70 FUN_10142f70

void FUN_10142f70(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10142f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2cc))();
  return;
}


// ==== 10142f80 FUN_10142f80

void FUN_10142f80(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x314))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10142fda Catch@10142fda

void Catch_10142fda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10142fee Catch@10142fee

void Catch_10142fee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestEnchantItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143010 FUN_10143010

void FUN_10143010(L2ParamStack *param_1)

{
  L2ParamStack::Top(param_1);
  L2ParamStack::Top(param_1);
  L2ParamStack::Top(param_1);
  return;
}


// ==== 10143030 FUN_10143030

void FUN_10143030(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_68 [15];
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a470;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
  puVar3 = auStack_68;
  for (iVar2 = 0xf; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)register0x00000010;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(iVar1 + 0x2fc))();
  ExceptionList = local_10;
  return;
}


// ==== 10143097 Catch@10143097

void Catch_10143097(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101430ab Catch@101430ab

void Catch_101430ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestDestroyItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101430d0 FUN_101430d0

void FUN_101430d0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101430de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x300))();
  return;
}


// ==== 101430e0 FUN_101430e0

void FUN_101430e0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x174))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1014313a Catch@1014313a

void Catch_1014313a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014314e Catch@1014314e

void Catch_1014314e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestTrade");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143170 FUN_10143170

void FUN_10143170(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_68 [15];
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a4b0;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
  puVar3 = auStack_68;
  for (iVar2 = 0xf; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)register0x00000010;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(iVar1 + 0x178))();
  ExceptionList = local_10;
  return;
}


// ==== 101431d7 Catch@101431d7

void Catch_101431d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101431eb Catch@101431eb

void Catch_101431eb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestAddTradeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143210 FUN_10143210

void FUN_10143210(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a4d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x17c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1014326a Catch@1014326a

void Catch_1014326a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014327e Catch@1014327e

void Catch_1014327e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestTradeDone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101432a0 FUN_101432a0

void FUN_101432a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101432ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2d8))();
  return;
}


// ==== 101432b0 FUN_101432b0

void FUN_101432b0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a4f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x198))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1014330a Catch@1014330a

void Catch_1014330a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014331e Catch@1014331e

void Catch_1014331e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestBuySeed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143340 FUN_10143340

void FUN_10143340(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x19c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1014339a Catch@1014339a

void Catch_1014339a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101433ae Catch@101433ae

void Catch_101433ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestProcureCrop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101433d0 FUN_101433d0

void FUN_101433d0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a530;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 400))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1014342a Catch@1014342a

void Catch_1014342a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014343e Catch@1014343e

void Catch_1014343e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestBuyItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143460 FUN_10143460

void FUN_10143460(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x18c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101434ba Catch@101434ba

void Catch_101434ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101434ce Catch@101434ce

void Catch_101434ce(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestSellItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101434f0 FUN_101434f0

void FUN_101434f0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x194))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1014354a Catch@1014354a

void Catch_1014354a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014355e Catch@1014355e

void Catch_1014355e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestPreviewItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143580 FUN_10143580

void FUN_10143580(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014358e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x278))();
  return;
}


// ==== 10143590 FUN_10143590

void FUN_10143590(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014359e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x27c))();
  return;
}


// ==== 101435a0 FUN_101435a0

void FUN_101435a0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x310))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101435fa Catch@101435fa

void Catch_101435fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014360e Catch@1014360e

void Catch_1014360e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestDestroyQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143630 FUN_10143630

bool FUN_10143630(int param_1,int param_2)

{
  FL2QuestData *pFVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a5b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = FL2GameData::GetQuestData((FL2GameData *)GL2GameData_exref,param_1,param_2);
  if (pFVar1 == (FL2QuestData *)0x0) {
    ExceptionList = local_10;
    return false;
  }
  ExceptionList = local_10;
  return *(int *)(pFVar1 + 0x24) != 0;
}


// ==== 101436ab Catch@101436ab

void Catch_101436ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101436bf Catch@101436bf

void Catch_101436bf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsShowableJournalQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101436e0 FUN_101436e0

bool FUN_101436e0(int param_1,int param_2)

{
  FL2QuestData *pFVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a5d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = FL2GameData::GetQuestData((FL2GameData *)GL2GameData_exref,param_1,param_2);
  if (pFVar1 == (FL2QuestData *)0x0) {
    ExceptionList = local_10;
    return false;
  }
  ExceptionList = local_10;
  return *(int *)(pFVar1 + 0x4c) != 0;
}


// ==== 1014375b Catch@1014375b

void Catch_1014375b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014376f Catch@1014376f

void Catch_1014376f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsShowableItemNumQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143790 FUN_10143790

ushort * FUN_10143790(int param_1,int param_2)

{
  FL2QuestData *pFVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a5f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = FL2GameData::GetQuestData((FL2GameData *)GL2GameData_exref,param_1,param_2);
  if (pFVar1 == (FL2QuestData *)0x0) {
    ExceptionList = local_10;
    return (ushort *)&DAT_1022f9f8;
  }
  puVar2 = FString::operator*((FString *)(pFVar1 + 0x28));
  ExceptionList = local_10;
  return puVar2;
}


// ==== 10143810 Catch@10143810

void Catch_10143810(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10143824 Catch@10143824

void Catch_10143824(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetQuestDescrition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143850 FUN_10143850

void FUN_10143850(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FL2GameData::GetCurrentZoneName((FL2GameData *)GL2GameData_exref);
  ExceptionList = local_10;
  return;
}


// ==== 101438a0 Catch@101438a0

void Catch_101438a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101438b4 Catch@101438b4

void Catch_101438b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetCurrentZoneName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101438e0 FUN_101438e0

void FUN_101438e0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FL2GameData::GetCurrentZoneID((FL2GameData *)GL2GameData_exref);
  ExceptionList = local_10;
  return;
}


// ==== 10143930 Catch@10143930

void Catch_10143930(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10143944 Catch@10143944

void Catch_10143944(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetCurrentZoneID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143970 FUN_10143970

void FUN_10143970(float param_1,float param_2,float param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FL2GameData::GetZoneID((FL2GameData *)GL2GameData_exref,param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 101439db Catch@101439db

void Catch_101439db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101439ef Catch@101439ef

void Catch_101439ef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetZoneID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143a10 FUN_10143a10

void FUN_10143a10(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x328))();
  return;
}


// ==== 10143a20 FUN_10143a20

void FUN_10143a20(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x32c))();
  return;
}


// ==== 10143a30 FUN_10143a30

void FUN_10143a30(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x330))();
  return;
}


// ==== 10143a40 FUN_10143a40

void FUN_10143a40(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x334))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10143aa1 Catch@10143aa1

void Catch_10143aa1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10143ab5 Catch@10143ab5

void Catch_10143ab5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestExMPCCShowPartyMembersInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143ae0 FUN_10143ae0

void FUN_10143ae0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x318))();
  return;
}


// ==== 10143af0 FUN_10143af0

void FUN_10143af0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x31c))();
  return;
}


// ==== 10143b00 FUN_10143b00

void FUN_10143b00(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 800))();
  return;
}


// ==== 10143b10 FUN_10143b10

void FUN_10143b10(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x324))();
  return;
}


// ==== 10143b20 FUN_10143b20

void FUN_10143b20(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x28c))();
  return;
}


// ==== 10143b30 FUN_10143b30

void FUN_10143b30(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x294))();
  return;
}


// ==== 10143b40 FUN_10143b40

void FUN_10143b40(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x290))();
  return;
}


// ==== 10143b50 FUN_10143b50

void FUN_10143b50(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2a8))();
  return;
}


// ==== 10143b60 FUN_10143b60

void FUN_10143b60(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2d0))();
  return;
}


// ==== 10143b70 FUN_10143b70

void FUN_10143b70(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2a4))();
  return;
}


// ==== 10143b80 FUN_10143b80

void FUN_10143b80(void)

{
  return;
}


// ==== 10143b90 FUN_10143b90

void FUN_10143b90(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x38c))();
  return;
}


// ==== 10143ba0 FUN_10143ba0

void FUN_10143ba0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x390))();
  return;
}


// ==== 10143bb0 FUN_10143bb0

void FUN_10143bb0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x394))();
  return;
}


// ==== 10143bc0 FUN_10143bc0

void FUN_10143bc0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x398))();
  return;
}


// ==== 10143bd0 FUN_10143bd0

void FUN_10143bd0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3a0))();
  return;
}


// ==== 10143be0 FUN_10143be0

void FUN_10143be0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3a4))();
  return;
}


// ==== 10143bf0 FUN_10143bf0

void FUN_10143bf0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3a8))();
  return;
}


// ==== 10143c00 FUN_10143c00

void FUN_10143c00(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3b0))();
  return;
}


// ==== 10143c10 FUN_10143c10

void FUN_10143c10(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3b4))();
  return;
}


// ==== 10143c20 FUN_10143c20

void FUN_10143c20(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3b8))();
  return;
}


// ==== 10143c30 FUN_10143c30

void FUN_10143c30(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3bc))();
  return;
}


// ==== 10143c40 FUN_10143c40

void FUN_10143c40(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3c0))();
  return;
}


// ==== 10143c50 FUN_10143c50

void FUN_10143c50(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3c4))();
  return;
}


// ==== 10143c60 FUN_10143c60

void FUN_10143c60(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3c8))();
  return;
}


// ==== 10143c70 FUN_10143c70

void FUN_10143c70(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3cc))();
  return;
}


// ==== 10143c80 FUN_10143c80

void FUN_10143c80(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10143c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3d0))();
  return;
}


// ==== 10143c90 FUN_10143c90

void FUN_10143c90(void)

{
  FUN_1013d7f0(0,0);
  return;
}


// ==== 10143ca0 FUN_10143ca0

void FUN_10143ca0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    FUN_10047220();
  }
  else if (param_1 == 1) {
    FUN_10047190();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10143d1c Catch@10143d1c

void Catch_10143d1c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10143d30 Catch@10143d30

void Catch_10143d30(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::JoypadShortcutUpDown");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143d50 FUN_10143d50

void FUN_10143d50(undefined4 param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  FString aFStack_54 [4];
  undefined4 uStack_50;
  FString aFStack_48 [8];
  undefined4 uStack_40;
  int *piStack_3c;
  uint uStack_38;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020a6c2;
  local_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  local_18 = 0;
  piStack_3c = &local_18;
  uStack_50 = 0x10143d9c;
  FString::FString(aFStack_48,(ushort *)L"IsLockShortcutWnd");
  local_8._0_1_ = 1;
  FString::FString(aFStack_54,(ushort *)L"Game");
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10042370();
  if (local_18 == 0) {
    piStack_3c = (int *)param_1;
    uStack_40 = 0x10143de4;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x288))();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 10143dff Catch@10143dff

void Catch_10143dff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10143e13 Catch@10143e13

void Catch_10143e13(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestShortCutDel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143e30 FUN_10143e30

void FUN_10143e30(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a6e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10046ca0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10143e90 Catch@10143e90

void Catch_10143e90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10143ea4 Catch@10143ea4

void Catch_10143ea4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdateShortCutMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143ed0 FUN_10143ed0

void FUN_10143ed0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a700;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5064) != 0) {
    FUN_100468e0(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10143f30 Catch@10143f30

void Catch_10143f30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10143f44 Catch@10143f44

void Catch_10143f44(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdateShortCutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143f70 FUN_10143f70

void FUN_10143f70(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5064) != 0) {
    FUN_10046b10(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10143fd0 Catch@10143fd0

void Catch_10143fd0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10143fe4 Catch@10143fe4

void Catch_10143fe4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdatePetShortCutItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144010 FUN_10144010

void FUN_10144010(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5064) != 0) {
    FUN_10045360(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10144070 Catch@10144070

void Catch_10144070(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144084 Catch@10144084

void Catch_10144084(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveShortCutDelete");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101440b0 FUN_101440b0

void FUN_101440b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101440be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2a0))();
  return;
}


// ==== 101440c0 FUN_101440c0

void FUN_101440c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101440ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2dc))();
  return;
}


// ==== 101440d0 FUN_101440d0

void FUN_101440d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xe8))
            (param_1,param_2,param_3,param_4,0);
  return;
}


// ==== 10144110 FUN_10144110

void FUN_10144110(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014411e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x10c))();
  return;
}


// ==== 10144120 FUN_10144120

void FUN_10144120(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014412e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x114))();
  return;
}


// ==== 10144130 FUN_10144130

void FUN_10144130(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014413e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x110))();
  return;
}


// ==== 10144140 FUN_10144140

void FUN_10144140(void)

{
  FUN_101adf20();
  return;
}


// ==== 10144160 FUN_10144160

void FUN_10144160(void)

{
  FUN_101ae290();
  return;
}


// ==== 10144170 FUN_10144170

void FUN_10144170(void)

{
  FUN_101ae390();
  return;
}


// ==== 10144180 FUN_10144180

void FUN_10144180(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1c4))(0,0);
  return;
}


// ==== 101441a0 FUN_101441a0

void FUN_101441a0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x230))(0,0);
  return;
}


// ==== 101441c0 FUN_101441c0

void FUN_101441c0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1c8))(0,0);
  return;
}


// ==== 101441e0 FUN_101441e0

void FUN_101441e0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101441ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1d8))();
  return;
}


// ==== 101441f0 FUN_101441f0

void FUN_101441f0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101441fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1dc))();
  return;
}


// ==== 10144200 FUN_10144200

void FUN_10144200(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014420e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1e0))();
  return;
}


// ==== 10144210 FUN_10144210

void FUN_10144210(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014421e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1e4))();
  return;
}


// ==== 10144220 FUN_10144220

void FUN_10144220(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014422e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1f0))();
  return;
}


// ==== 10144230 FUN_10144230

void FUN_10144230(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014423e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 500))();
  return;
}


// ==== 10144240 FUN_10144240

void FUN_10144240(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014424e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1f8))();
  return;
}


// ==== 10144250 FUN_10144250

void FUN_10144250(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014425e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1fc))();
  return;
}


// ==== 10144260 FUN_10144260

void FUN_10144260(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014426e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x200))();
  return;
}


// ==== 10144270 FUN_10144270

void FUN_10144270(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014427e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x208))();
  return;
}


// ==== 10144280 FUN_10144280

void FUN_10144280(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014428e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x20c))();
  return;
}


// ==== 10144290 FUN_10144290

void FUN_10144290(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014429e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1e8))();
  return;
}


// ==== 101442a0 FUN_101442a0

void FUN_101442a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101442ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1ec))();
  return;
}


// ==== 101442b0 FUN_101442b0

void FUN_101442b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101442be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x210))();
  return;
}


// ==== 101442c0 FUN_101442c0

void FUN_101442c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101442ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x214))();
  return;
}


// ==== 101442d0 FUN_101442d0

void FUN_101442d0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101442de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x218))();
  return;
}


// ==== 101442e0 FUN_101442e0

void FUN_101442e0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101442ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x21c))();
  return;
}


// ==== 101442f0 FUN_101442f0

void FUN_101442f0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101442fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x220))();
  return;
}


// ==== 10144300 FUN_10144300

void FUN_10144300(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014430e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x224))();
  return;
}


// ==== 10144310 FUN_10144310

void FUN_10144310(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014431e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x228))();
  return;
}


// ==== 10144320 FUN_10144320

void FUN_10144320(void)

{
  int in_ECX;
  FString aFStack_3c [12];
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a772;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FString::FString(aFStack_3c,(FString *)&stack0x00000004);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x22c))();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 101443a6 Catch@101443a6

void Catch_101443a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101443ba Catch@101443ba

void Catch_101443ba(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestPCCafeCouponUse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101443e0 FUN_101443e0

void FUN_101443e0(void)

{
  return;
}


// ==== 1014442d Catch@1014442d

void Catch_1014442d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144441 Catch@10144441

void Catch_10144441(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceivePledgeExtendedInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144460 FUN_10144460

void FUN_10144460(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014446e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x238))();
  return;
}


// ==== 10144470 FUN_10144470

void FUN_10144470(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014447e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x23c))();
  return;
}


// ==== 10144480 FUN_10144480

void FUN_10144480(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014448e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x240))();
  return;
}


// ==== 10144490 FUN_10144490

void FUN_10144490(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014449e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x24c))();
  return;
}


// ==== 101444a0 FUN_101444a0

void FUN_101444a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101444ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x244))();
  return;
}


// ==== 101444b0 FUN_101444b0

void FUN_101444b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101444be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x248))();
  return;
}


// ==== 101444c0 FUN_101444c0

void FUN_101444c0(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_1013e510(0x207,0xffb09b79);
    return;
  }
  FUN_1013e510(0x208,0xffb09b79);
  return;
}


// ==== 10144500 FUN_10144500

void FUN_10144500(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_1013e510(0x209,0xffb09b79);
    return;
  }
  FUN_1013e510(0x20a,0xffb09b79);
  return;
}


// ==== 10144540 FUN_10144540

void FUN_10144540(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_1013e510(0x20b,0xffb09b79);
    return;
  }
  FUN_1013e510(0x20c,0xffb09b79);
  return;
}


// ==== 10144580 FUN_10144580

void FUN_10144580(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014458e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x33c))();
  return;
}


// ==== 10144590 FUN_10144590

void FUN_10144590(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014459e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x340))();
  return;
}


// ==== 101445a0 FUN_101445a0

void FUN_101445a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101445ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x344))();
  return;
}


// ==== 101445b0 FUN_101445b0

void FUN_101445b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101445be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x348))();
  return;
}


// ==== 101445c0 FUN_101445c0

void FUN_101445c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101445ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x34c))();
  return;
}


// ==== 101445d0 FUN_101445d0

void FUN_101445d0(FString *param_1,void *param_2)

{
  uint uVar1;
  ushort *puVar2;
  int in_ECX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020a7b9;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  puVar2 = FString::operator*(param_1);
  L2ParamStack::PushBack(local_1c,puVar2);
  L2ParamStack::PushBack(local_1c,param_2);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x500))(local_1c,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10144670 FUN_10144670

void FUN_10144670(void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  int in_ECX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020a7e9;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,param_1);
  L2ParamStack::PushBack(local_1c,param_2);
  L2ParamStack::PushBack(local_1c,param_3);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x504))(local_1c,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10144710 FUN_10144710

void FUN_10144710(void)

{
  uint uVar1;
  int in_ECX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020a819;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x508))(local_1c,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10144790 FUN_10144790

void FUN_10144790(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014479e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x36c))();
  return;
}


// ==== 101447a0 FUN_101447a0

void FUN_101447a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101447ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x370))();
  return;
}


// ==== 101447b0 FUN_101447b0

void FUN_101447b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101447be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x250))();
  return;
}


// ==== 101447c0 FUN_101447c0

void FUN_101447c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101447ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x254))();
  return;
}


// ==== 101447d0 FUN_101447d0

void FUN_101447d0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101447de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x25c))();
  return;
}


// ==== 101447e0 FUN_101447e0

void FUN_101447e0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101447ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 600))();
  return;
}


// ==== 101447f0 FUN_101447f0

void FUN_101447f0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101447fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x260))();
  return;
}


// ==== 10144800 FUN_10144800

void FUN_10144800(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014480e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x350))();
  return;
}


// ==== 10144810 FUN_10144810

void FUN_10144810(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014481e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x354))();
  return;
}


// ==== 10144820 FUN_10144820

void FUN_10144820(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014482e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x358))();
  return;
}


// ==== 10144830 FUN_10144830

void FUN_10144830(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014483e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x35c))();
  return;
}


// ==== 10144840 FUN_10144840

void FUN_10144840(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014484e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x360))();
  return;
}


// ==== 10144850 FUN_10144850

void FUN_10144850(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014485e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x364))();
  return;
}


// ==== 10144860 FUN_10144860

void FUN_10144860(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014486e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x264))();
  return;
}


// ==== 10144870 FUN_10144870

void FUN_10144870(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014487e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x268))();
  return;
}


// ==== 10144880 FUN_10144880

void FUN_10144880(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014488e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x26c))();
  return;
}


// ==== 10144890 FUN_10144890

void FUN_10144890(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014489e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x270))();
  return;
}


// ==== 101448a0 FUN_101448a0

void FUN_101448a0(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_1013e510(200,0xffb09b79);
    return;
  }
  FUN_1013e510(0x13c,0xffb09b79);
  return;
}


// ==== 101448e0 FUN_101448e0

void FUN_101448e0(L2ParamStack *param_1)

{
  void *pvVar1;
  
  pvVar1 = L2ParamStack::Top(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_1013e510(0xcb,0xffb09b79);
    return;
  }
  FUN_1013e510(0x13e,0xffb09b79);
  return;
}


// ==== 10144920 FUN_10144920

void FUN_10144920(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1020a849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10144970 FUN_10144970

void FUN_10144970(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a870;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1a4))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101449d1 Catch@101449d1

void Catch_101449d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101449e5 Catch@101449e5

void Catch_101449e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestLinkHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144a10 FUN_10144a10

void FUN_10144a10(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1ac))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10144a71 Catch@10144a71

void Catch_10144a71(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144a85 Catch@10144a85

void Catch_10144a85(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestBypassToServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144ab0 FUN_10144ab0

void FUN_10144ab0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a8b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1a8))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10144b11 Catch@10144b11

void Catch_10144b11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144b25 Catch@10144b25

void Catch_10144b25(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestBBSWrite");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144b50 FUN_10144b50

void FUN_10144b50(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a8d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2f4))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10144bb1 Catch@10144bb1

void Catch_10144bb1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144bc5 Catch@10144bc5

void Catch_10144bc5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestBBSBoard");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144bf0 FUN_10144bf0

void FUN_10144bf0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1b0))();
  return;
}


// ==== 10144c00 FUN_10144c00

void FUN_10144c00(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1b4))();
  return;
}


// ==== 10144c10 FUN_10144c10

void FUN_10144c10(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1b8))();
  return;
}


// ==== 10144c20 FUN_10144c20

void FUN_10144c20(uint param_1)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x50dc) & param_1) != 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x1bc))(param_1);
    *(uint *)(in_ECX + 0x50dc) = *(uint *)(in_ECX + 0x50dc) ^ param_1;
  }
  return;
}


// ==== 10144c50 FUN_10144c50

void FUN_10144c50(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x50dc) = param_1;
  return;
}


// ==== 10144c60 FUN_10144c60

void FUN_10144c60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x410))((float)param_1,param_2)
  ;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0xfffffff0)) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x374))(*puVar1);
  }
  return;
}


// ==== 10144cb0 FUN_10144cb0

void FUN_10144cb0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x378))();
  return;
}


// ==== 10144cc0 FUN_10144cc0

void FUN_10144cc0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x37c))();
  return;
}


// ==== 10144cd0 FUN_10144cd0

void FUN_10144cd0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x380))();
  return;
}


// ==== 10144ce0 FUN_10144ce0

void FUN_10144ce0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x388))();
  return;
}


// ==== 10144cf0 FUN_10144cf0

void FUN_10144cf0(undefined4 param_1,FString *param_2)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a8f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
  puVar2 = FString::operator*(param_2);
  (**(code **)(iVar1 + 0x170))(puVar2,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10144d63 Catch@10144d63

void Catch_10144d63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144d77 Catch@10144d77

void Catch_10144d77(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestGMCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144da0 FUN_10144da0

void FUN_10144da0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x164))();
  return;
}


// ==== 10144db0 FUN_10144db0

void FUN_10144db0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x168))();
  return;
}


// ==== 10144dc0 FUN_10144dc0

void FUN_10144dc0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10144dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x16c))();
  return;
}


// ==== 10144dd0 FUN_10144dd0

void FUN_10144dd0(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a910;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad0f0();
  if (iVar1 != 0) {
    FUN_101b1b50(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10144e3c Catch@10144e3c

void Catch_10144e3c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144e50 Catch@10144e50

void Catch_10144e50(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GMViewCharacterInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144e70 FUN_10144e70

void FUN_10144e70(void)

{
  FUN_1013db40();
  return;
}


// ==== 10144e80 FUN_10144e80

void FUN_10144e80(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x50c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10144ee1 Catch@10144ee1

void Catch_10144ee1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144ef5 Catch@10144ef5

void Catch_10144ef5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestConfirmTargetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144f20 FUN_10144f20

void FUN_10144f20(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a950;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x510))(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10144f85 Catch@10144f85

void Catch_10144f85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10144f99 Catch@10144f99

void Catch_10144f99(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestConfirmRefinerItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10144fc0 FUN_10144fc0

void FUN_10144fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a970;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x514))(param_1,param_2,param_3,param_4)
  ;
  ExceptionList = local_10;
  return;
}


// ==== 1014502d Catch@1014502d

void Catch_1014502d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10145041 Catch@10145041

void Catch_10145041(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestConfirmGemStone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10145060 FUN_10145060

void FUN_10145060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x518))(param_1,param_2,param_3,param_4)
  ;
  ExceptionList = local_10;
  return;
}


// ==== 101450cd Catch@101450cd

void Catch_101450cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101450e1 Catch@101450e1

void Catch_101450e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestRefine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10145100 FUN_10145100

void FUN_10145100(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x51c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10145161 Catch@10145161

void Catch_10145161(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10145175 Catch@10145175

void Catch_10145175(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestConfirmCancelItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101451a0 FUN_101451a0

void FUN_101451a0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020a9d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x520))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10145201 Catch@10145201

void Catch_10145201(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10145215 Catch@10145215

void Catch_10145215(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestRefineCancel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10145240 FUN_10145240

void FUN_10145240(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014524e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3d4))();
  return;
}


// ==== 10145250 FUN_10145250

void FUN_10145250(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014525e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3d8))();
  return;
}


// ==== 10145260 FUN_10145260

void FUN_10145260(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014526e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3e0))();
  return;
}


// ==== 10145270 FUN_10145270

void FUN_10145270(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014527e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3e4))();
  return;
}


// ==== 10145280 FUN_10145280

void FUN_10145280(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014528e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3ec))();
  return;
}


// ==== 10145290 FUN_10145290

void FUN_10145290(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014529e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3f0))();
  return;
}


// ==== 101452a0 FUN_101452a0

void FUN_101452a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101452ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3f4))();
  return;
}


// ==== 101452b0 FUN_101452b0

void FUN_101452b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101452be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x3fc))();
  return;
}


// ==== 101452c0 FUN_101452c0

void FUN_101452c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101452ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x400))();
  return;
}


// ==== 101452d0 FUN_101452d0

void FUN_101452d0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101452de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x408))();
  return;
}


// ==== 101452e0 FUN_101452e0

void FUN_101452e0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101452ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x368))();
  return;
}


// ==== 101452f0 FUN_101452f0

void FUN_101452f0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101452fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x45c))();
  return;
}


// ==== 10145300 FUN_10145300

void FUN_10145300(undefined4 param_1,LPCWSTR param_2,wchar_t *param_3)

{
  wchar_t local_204 [256];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_204;
  if ((param_2 != (LPCWSTR)0x0) && (param_3 != (wchar_t *)0x0)) {
    __vswprintf(local_204,param_3,&stack0x00000010);
    MessageBoxW((HWND)0x0,local_204,param_2,0);
  }
  __security_check_cookie(local_4 ^ (uint)local_204);
  return;
}


// ==== 10145370 FUN_10145370

void FUN_10145370(L2ParamStack *param_1)

{
  L2ParamStack local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020a9f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  L2ParamStack::operator=(local_1c,param_1);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = local_c;
  return;
}


// ==== 101453e0 FUN_101453e0

void FUN_101453e0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101453ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x450))();
  return;
}


// ==== 101453f0 FUN_101453f0

void FUN_101453f0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101453fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x44c))();
  return;
}


// ==== 10145400 FUN_10145400

void FUN_10145400(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014540e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2f8))();
  return;
}


// ==== 10145410 FUN_10145410

void FUN_10145410(void)

{
  ushort *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aa32;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 2;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  L2ParamStack::PushBack(local_2c,puVar1);
  (**(code **)(*DAT_103663bc + 0x360))(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  L2ParamStack::~L2ParamStack(local_2c);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 101454ad Catch@101454ad

void Catch_101454ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101454c1 Catch@101454c1

void Catch_101454c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SendBypassBuildCmd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101454e0 FUN_101454e0

void FUN_101454e0(void)

{
  UL2ConsoleWnd *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020aa59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString((FString *)&stack0xffffffc4,(ushort *)L"CharacterSelectState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  (**(code **)(*(int *)in_ECX + 0x5c4))();
  UL2ConsoleWnd::SetState(in_ECX,4);
  ExceptionList = local_10;
  return;
}


// ==== 10145573 Catch@10145573

void Catch_10145573(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10145587 Catch@10145587

void Catch_10145587(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GotoCharacterSelect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101455b0 FUN_101455b0

void FUN_101455b0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FUN_1013e640(param_1,5,param_2);
  }
  return;
}


// ==== 101455d0 FUN_101455d0

void FUN_101455d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aa80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_1039e520 == 0) {
    FUN_10072070(param_1,param_2,param_3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014563d Catch@1014563d

void Catch_1014563d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10145651 Catch@10145651

void Catch_10145651(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetL2Cursor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10145670 FUN_10145670

void FUN_10145670(void)

{
  FUN_10071760();
  return;
}


// ==== 10145680 FUN_10145680

void FUN_10145680(void)

{
  DAT_1039e520 = 1;
  return;
}


// ==== 10145690 FUN_10145690

void FUN_10145690(void)

{
  DAT_1039e520 = 0;
  return;
}


// ==== 101456a0 FUN_101456a0

void FUN_101456a0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x50e4) = 1;
  return;
}


// ==== 101456b0 FUN_101456b0

void FUN_101456b0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x50e4) = 0;
  return;
}


// ==== 101456c0 FUN_101456c0

void FUN_101456c0(short *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1f0) != 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1f0) + 0x174))();
    if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
      FUN_10186b50(param_1);
    }
    iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1f0) + 0xfc))(0);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1f0) + 0x138))();
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1f0) + 0x78))();
    }
  }
  return;
}


// ==== 10145750 FUN_10145750

undefined4 FUN_10145750(short *param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    piVar1 = *(int **)(DAT_103663c0 + 0x13c);
    if (DAT_103663c0 != -0x13c) {
      iVar4 = 0;
      psVar2 = param_1;
      do {
        iVar3 = (**(code **)(*piVar1 + 0x74))(*psVar2);
        if (iVar3 == 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        psVar2 = param_1 + iVar4;
      } while (param_1[iVar4] != 0);
    }
    return 0;
  }
  return 1;
}


// ==== 101457c0 FUN_101457c0

undefined4 FUN_101457c0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  if ((param_1 != (short *)0x0) && (sVar1 = *param_1, sVar1 != 0)) {
    iVar2 = 0;
    do {
      if (sVar1 == 0x26) {
        return 0;
      }
      sVar1 = param_1[iVar2 + 1];
      iVar2 = iVar2 + 1;
    } while (sVar1 != 0);
  }
  return 1;
}


// ==== 10145800 FUN_10145800

void FUN_10145800(short *param_1)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  
  if ((param_1 != (short *)0x0) &&
     (piVar2 = *(int **)(DAT_103663c0 + 0x13c), DAT_103663c0 != -0x13c)) {
    psVar3 = param_1;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    if (*param_1 != 0) {
      iVar6 = 1;
      psVar7 = param_1;
      do {
        iVar4 = (**(code **)(*piVar2 + 0x74))(*psVar7);
        if (((iVar4 == 0) && (*psVar7 != 0xd)) && (*psVar7 != 10)) {
          *psVar7 = 0;
          iVar4 = iVar6 + -1;
          for (iVar5 = iVar6; iVar5 < (int)psVar3 - (int)(param_1 + 1) >> 1; iVar5 = iVar5 + 1) {
            param_1[iVar4] = param_1[iVar4 + 1];
            iVar4 = iVar4 + 1;
          }
          param_1[iVar4] = 0;
        }
        else {
          iVar6 = iVar6 + 1;
          psVar7 = psVar7 + 1;
        }
      } while (*psVar7 != 0);
    }
  }
  return;
}


// ==== 101458c0 FUN_101458c0

void FUN_101458c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101458ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x88))();
  return;
}


// ==== 101458d0 FUN_101458d0

void FUN_101458d0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101458de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xa0))();
  return;
}


// ==== 101458e0 FUN_101458e0

undefined4 FUN_101458e0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x8c))(param_1);
  return param_1;
}


// ==== 10145900 FUN_10145900

void FUN_10145900(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014590e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x90))();
  return;
}


// ==== 10145910 FUN_10145910

void FUN_10145910(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014591e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x94))();
  return;
}


// ==== 10145920 FUN_10145920

void FUN_10145920(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014592e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x9c))();
  return;
}


// ==== 10145930 FUN_10145930

int FUN_10145930(int param_1)

{
  UClass *pUVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aaa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x50) != 0) && (*(int *)(*(int *)(in_ECX + 0x50) + 0x244) != 0)) {
    pUVar1 = APawn::StaticClass();
    iVar2 = UObject::IsA(*(UObject **)(*(int *)(in_ECX + 0x50) + 0x244),pUVar1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x50) + 0x244);
      if (param_1 != 0) {
        iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x94))
                          (*(undefined4 *)(iVar2 + 0x60));
        if (iVar3 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        if (*(int *)(iVar3 + 8) != 0) {
          ExceptionList = local_10;
          return 0;
        }
      }
      ExceptionList = local_10;
      return iVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101459e6 Catch@101459e6

void Catch_101459e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101459fa Catch@101459fa

void Catch_101459fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetTargetedActor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10145a20 FUN_10145a20

undefined4 FUN_10145a20(void)

{
  UClass *pUVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x50) != 0) && (*(int *)(*(int *)(in_ECX + 0x50) + 0x244) != 0)) {
    pUVar1 = AL2Pickup::StaticClass();
    iVar2 = UObject::IsA(*(UObject **)(*(int *)(in_ECX + 0x50) + 0x244),pUVar1);
    if (iVar2 != 0) {
      return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x244);
    }
  }
  return 0;
}


// ==== 10145a60 FUN_10145a60

void FUN_10145a60(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10145a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xac))();
  return;
}


// ==== 10145a70 FUN_10145a70

void FUN_10145a70(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10145a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xb0))();
  return;
}


// ==== 10145a80 FUN_10145a80

void FUN_10145a80(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10145a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xb4))();
  return;
}


// ==== 10145a90 FUN_10145a90

void FUN_10145a90(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10145a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xb8))();
  return;
}


// ==== 10145aa0 FUN_10145aa0

void FUN_10145aa0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10145aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xbc))();
  return;
}


// ==== 10145ab0 FUN_10145ab0

ushort * FUN_10145ab0(undefined4 param_1)

{
  ushort *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6aae0));
    return puVar1;
  case 2:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6aaec));
    return puVar1;
  case 3:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6aaf8));
    return puVar1;
  case 4:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab04));
    return puVar1;
  case 5:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab10));
    return puVar1;
  case 6:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab1c));
    return puVar1;
  case 7:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ab28));
    return puVar1;
  case 8:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6c07c));
    return puVar1;
  default:
    return (ushort *)0x0;
  }
}


// ==== 10145ba0 FUN_10145ba0

void FUN_10145ba0(int param_1,uint param_2,FString *param_3,int param_4)

{
  ushort *puVar1;
  FString *this;
  ushort local_18 [10];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_18;
  if (param_1 == 0) {
    if ((param_2 == 0x80) || (param_2 == 0x100)) {
      this = (FString *)(GL2GameData_exref + 0x6b434);
    }
    else {
      if (param_2 != 0x4000) goto LAB_10145eb9;
      this = (FString *)(GL2GameData_exref + 0x6b440);
    }
  }
  else if (param_1 == 1) {
    if ((int)param_2 < 0x801) {
      if (param_2 == 0x800) {
        appStrcpy(local_18,(ushort *)&DAT_1027f35c);
        puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6b3ec));
        FString::operator=(param_3,puVar1);
      }
      else {
        if ((int)param_2 < 0x101) {
          if (param_2 == 0x100) {
LAB_10145c34:
            this = (FString *)(GL2GameData_exref + 0x6b3b0);
          }
          else if (param_2 == 1) {
            this = (FString *)(GL2GameData_exref + 0x6b398);
          }
          else {
            if (param_2 != 0x40) {
              if (param_2 != 0x80) goto LAB_10145eb9;
              goto LAB_10145c34;
            }
            this = (FString *)(GL2GameData_exref + 0x6b3a4);
          }
          goto LAB_10145eaa;
        }
        if (param_2 == 0x200) {
          this = (FString *)(GL2GameData_exref + 0x6b3bc);
          goto LAB_10145eaa;
        }
        if (param_2 != 0x400) goto LAB_10145eb9;
        appStrcpy(local_18,(ushort *)&DAT_1027f35c);
        puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6b3e0));
        FString::operator=(param_3,puVar1);
      }
LAB_10145cb0:
      FString::operator+=(param_3,local_18);
      if (param_4 == 1) {
        puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6b458));
        FString::operator+=(param_3,puVar1);
        __security_check_cookie(local_4 ^ (uint)local_18);
        return;
      }
      if (param_4 == 2) {
        puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6b464));
        FString::operator+=(param_3,puVar1);
        __security_check_cookie(local_4 ^ (uint)local_18);
        return;
      }
      if (param_4 == 3) {
        puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6b44c));
        FString::operator+=(param_3,puVar1);
        __security_check_cookie(local_4 ^ (uint)local_18);
        return;
      }
      goto LAB_10145eb9;
    }
    if ((int)param_2 < 0x10001) {
      if (param_2 != 0x10000) {
        if (param_2 == 0x1000) {
          this = (FString *)(GL2GameData_exref + 0x6b3c8);
        }
        else {
          if (param_2 != 0x2000) {
            if (param_2 != 0x8000) goto LAB_10145eb9;
            appStrcpy(local_18,(ushort *)&DAT_1027f35c);
            puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6c244));
            FString::operator=(param_3,puVar1);
            goto LAB_10145cb0;
          }
          this = (FString *)(GL2GameData_exref + 0x6b3d4);
        }
        goto LAB_10145eaa;
      }
    }
    else if ((param_2 != 0x40000) && (param_2 != 0x80000)) goto LAB_10145eb9;
    this = (FString *)(GL2GameData_exref + 0x6d8dc);
  }
  else if (param_1 == 2) {
    if (((param_2 & 4) == 0) && ((param_2 & 2) == 0)) {
      if ((param_2 & 8) == 0) {
        if (((param_2 & 0x20) == 0) && ((param_2 & 0x10) == 0)) goto LAB_10145eb9;
        this = (FString *)(GL2GameData_exref + 0x6b410);
      }
      else {
        this = (FString *)(GL2GameData_exref + 0x6b404);
      }
    }
    else {
      this = (FString *)(GL2GameData_exref + 0x6b3f8);
    }
  }
  else if (param_1 == 3) {
    this = (FString *)(GL2GameData_exref + 0x6b41c);
  }
  else {
    if (param_1 != 4) goto LAB_10145eb9;
    this = (FString *)(GL2GameData_exref + 0x6b428);
  }
LAB_10145eaa:
  puVar1 = FString::operator*(this);
  FString::operator=(param_3,puVar1);
LAB_10145eb9:
  __security_check_cookie(local_4 ^ (uint)local_18);
  return;
}


// ==== 10145ed0 FUN_10145ed0

void FUN_10145ed0(int param_1)

{
  if (param_1 < 0x104) {
    FString::operator*((FString *)(GL2GameData_exref + 0x6b764));
    return;
  }
  if (param_1 < 0x135) {
    FString::operator*((FString *)(GL2GameData_exref + 0x6b758));
    return;
  }
  if (param_1 < 0x160) {
    FString::operator*((FString *)(GL2GameData_exref + 0x6b74c));
    return;
  }
  if (param_1 < 0x196) {
    FString::operator*((FString *)(GL2GameData_exref + 0x6b740));
    return;
  }
  FString::operator*((FString *)(GL2GameData_exref + 0x6b734));
  return;
}


// ==== 10145f50 FUN_10145f50

ushort * FUN_10145f50(int param_1)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  
  iVar1 = 0;
  pcVar3 = GL2GameData_exref + 0x7cbbc;
  while ((*(int *)(pcVar3 + -4) == 0 || (*(int *)pcVar3 != param_1))) {
    iVar1 = iVar1 + 1;
    pcVar3 = pcVar3 + 0x2c;
    if (99 < iVar1) {
      return (ushort *)0x0;
    }
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + iVar1 * 0x2c + 0x7cbc0));
  return puVar2;
}


// ==== 10145fa0 FUN_10145fa0

ushort * FUN_10145fa0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  
  iVar1 = 0;
  pcVar3 = GL2GameData_exref + 0x7cbbc;
  while ((*(int *)(pcVar3 + -4) == 0 || (*(int *)pcVar3 != param_1))) {
    iVar1 = iVar1 + 1;
    pcVar3 = pcVar3 + 0x2c;
    if (99 < iVar1) {
      return (ushort *)0x0;
    }
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + iVar1 * 0x2c + 0x7cbcc));
  return puVar2;
}


// ==== 10145ff0 FUN_10145ff0

ushort * FUN_10145ff0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  
  iVar1 = 0;
  pcVar3 = GL2GameData_exref + 0x7cbbc;
  while ((*(int *)(pcVar3 + -4) == 0 || (*(int *)pcVar3 != param_1))) {
    iVar1 = iVar1 + 1;
    pcVar3 = pcVar3 + 0x2c;
    if (99 < iVar1) {
      return (ushort *)0x0;
    }
  }
  puVar2 = FString::operator*((FString *)(GL2GameData_exref + iVar1 * 0x2c + 0x7cbd8));
  return puVar2;
}


// ==== 10146040 FUN_10146040

void FUN_10146040(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10064640(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1014609d Catch@1014609d

void Catch_1014609d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101460b1 Catch@101460b1

void Catch_101460b1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetNewLineString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101460d0 FUN_101460d0

void FUN_101460d0(uint param_1)

{
  if (param_1 < 0x58) {
    FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6b470));
    return;
  }
  FString::operator*((FString *)(GL2GameData_exref + param_1 * 0xc + 0x6db10));
  return;
}


// ==== 10146110 FUN_10146110

ushort * FUN_10146110(undefined4 param_1)

{
  ushort *puVar1;
  FString *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aae0;
  local_10 = ExceptionList;
  local_8 = 0;
  switch(param_1) {
  case 1:
    this = (FString *)(GL2GameData_exref + 0x6da08);
    break;
  case 2:
    this = (FString *)(GL2GameData_exref + 0x6da2c);
    break;
  case 3:
    this = (FString *)(GL2GameData_exref + 0x6da38);
    break;
  case 4:
    this = (FString *)(GL2GameData_exref + 0x6da68);
    break;
  case 5:
    this = (FString *)(GL2GameData_exref + 0x6da8c);
    break;
  case 6:
    this = (FString *)(GL2GameData_exref + 0x6da80);
    break;
  case 7:
    this = (FString *)(GL2GameData_exref + 0x6e35c);
    break;
  case 8:
    this = (FString *)(GL2GameData_exref + 0x6e350);
    break;
  case 9:
    this = (FString *)(GL2GameData_exref + 0x6da5c);
    break;
  default:
    return (ushort *)&DAT_1022f9f8;
  }
  ExceptionList = &local_10;
  puVar1 = FString::operator*(this);
  ExceptionList = local_10;
  return puVar1;
}


// ==== 1014620a Catch@1014620a

void Catch_1014620a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014621e Catch@1014621e

void Catch_1014621e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetManorName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146260 FUN_10146260

undefined4 FUN_10146260(int param_1)

{
  switch(param_1) {
  case 0:
  case 10:
  case 0x12:
  case 0x19:
  case 0x1f:
  case 0x26:
  case 0x2c:
  case 0x31:
  case 0x35:
    return 1;
  case 1:
  case 4:
  case 7:
  case 0xb:
  case 0xf:
  case 0x13:
  case 0x16:
  case 0x1a:
  case 0x1d:
  case 0x20:
  case 0x23:
  case 0x27:
  case 0x2a:
  case 0x2d:
  case 0x2f:
  case 0x32:
  case 0x36:
  case 0x38:
    return 2;
  case 2:
  case 3:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x25:
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x2e:
  case 0x30:
  case 0x33:
  case 0x34:
  case 0x37:
  case 0x39:
    goto switchD_101462a1_caseD_2;
  default:
    if (0x1e < param_1 - 0x58U) {
      return 0xffffffff;
    }
switchD_101462a1_caseD_2:
    return 3;
  }
}


// ==== 10146312 Catch@10146312

void Catch_10146312(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146326 Catch@10146326

void Catch_10146326(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetClassStep");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146390 FUN_10146390

undefined * FUN_10146390(int param_1)

{
  if (0 < param_1) {
    return (&PTR_u_none_10350f70)[param_1];
  }
  return (undefined *)0x0;
}


// ==== 101463fb Catch@101463fb

void Catch_101463fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014640f Catch@1014640f

void Catch_1014640f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetItemGradeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146430 FUN_10146430

undefined4 FUN_10146430(FString *param_1)

{
  int iVar1;
  int iVar2;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ab52;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (iVar1 == 8) {
    FString::Mid(param_1,(int)local_38,1);
    local_8._0_1_ = 1;
    for (iVar1 = 1; local_18 = iVar1, iVar1 < 6; iVar1 = iVar1 + 1) {
      FString::FString(local_2c,(ushort *)(&PTR_u_none_10350f70)[iVar1]);
      local_8._0_1_ = 2;
      iVar2 = FString::operator==(local_38,local_2c);
      if (iVar2 != 0) {
        local_8._0_1_ = 1;
        FString::~FString(local_2c);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_38);
        ExceptionList = local_10;
        return 1;
      }
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_38);
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1014651f Catch@1014651f

void Catch_1014651f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10146533 Catch@10146533

void Catch_10146533(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsGradeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146550 FUN_10146550

void FUN_10146550(void)

{
                    /* WARNING: Could not recover jumptable at 0x1014655c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)GMalloc_exref + 8))();
  return;
}


// ==== 10146560 FUN_10146560

void FUN_10146560(ushort *param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  
  puVar1 = FL2GameData::GetItemName((FL2GameData *)GL2GameData_exref,param_2);
  puVar2 = FL2GameData::GetItemAdditionalName((FL2GameData *)GL2GameData_exref,param_2);
  if (puVar1 != (ushort *)0x0) {
    if (puVar2 != (ushort *)0x0) {
      iVar3 = appStrcmp(puVar2,(ushort *)L"NAME_None");
      if (iVar3 != 0) {
        appSprintf(param_1,(ushort *)L"%s-%s",puVar1,puVar2);
        return;
      }
    }
    appSprintf(param_1,(ushort *)&DAT_1022dde0,puVar1);
  }
  return;
}


// ==== 101465e0 FUN_101465e0

void FUN_101465e0(undefined4 param_1)

{
  int *in_ECX;
  FString *this;
  uint uStack_98;
  FString local_88 [12];
  FString local_7c [12];
  FString local_70 [12];
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
  
  puStack_c = &LAB_1020abc4;
  local_10 = ExceptionList;
  uStack_98 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_98;
  ExceptionList = &local_10;
  local_8 = 0;
  switch(param_1) {
  case 0:
    local_14 = (undefined1 *)&uStack_98;
    FString::FString(local_28,(ushort *)L"None");
    local_8._0_1_ = 1;
    (**(code **)(*in_ECX + 0x780))(local_28);
    local_8._0_1_ = 0;
    FString::~FString(local_28);
    FString::FString(local_34,(ushort *)L"PawnViewerState");
    local_8._0_1_ = 2;
    (**(code **)(*in_ECX + 0x780))(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    this = local_34;
    break;
  case 1:
    local_14 = (undefined1 *)&uStack_98;
    FString::FString(local_40,(ushort *)L"None");
    local_8._0_1_ = 3;
    (**(code **)(*in_ECX + 0x780))(local_40);
    local_8 = (uint)local_8._1_3_ << 8;
    this = local_40;
    break;
  default:
    goto switchD_1014661e_caseD_2;
  case 3:
    local_14 = (undefined1 *)&uStack_98;
    FString::FString(local_4c,(ushort *)L"None");
    local_8._0_1_ = 4;
    (**(code **)(*in_ECX + 0x780))(local_4c);
    local_8._0_1_ = 0;
    FString::~FString(local_4c);
    FString::FString(local_58,(ushort *)L"NpcViewerState");
    local_8._0_1_ = 5;
    (**(code **)(*in_ECX + 0x780))(local_58);
    local_8 = (uint)local_8._1_3_ << 8;
    this = local_58;
    break;
  case 4:
    local_14 = (undefined1 *)&uStack_98;
    FString::FString(local_64,(ushort *)L"None");
    local_8._0_1_ = 6;
    (**(code **)(*in_ECX + 0x780))(local_64);
    local_8 = (uint)local_8._1_3_ << 8;
    this = local_64;
    break;
  case 5:
    local_14 = (undefined1 *)&uStack_98;
    FString::FString(local_70,(ushort *)L"None");
    local_8._0_1_ = 7;
    (**(code **)(*in_ECX + 0x780))(local_70);
    local_8._0_1_ = 0;
    FString::~FString(local_70);
    FString::FString(local_7c,(ushort *)L"MSViewerState");
    local_8._0_1_ = 8;
    (**(code **)(*in_ECX + 0x780))(local_7c);
    local_8 = (uint)local_8._1_3_ << 8;
    this = local_7c;
    break;
  case 6:
    FString::FString(local_88,(ushort *)L"None");
    local_8._0_1_ = 9;
    (**(code **)(*in_ECX + 0x780))(local_88);
    local_8 = (uint)local_8._1_3_ << 8;
    this = local_88;
  }
  FString::~FString(this);
switchD_1014661e_caseD_2:
  ExceptionList = local_10;
  return;
}


// ==== 101467df Catch@101467df

void Catch_101467df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101467f3 Catch@101467f3

void Catch_101467f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PawnViewerFunction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146830 FUN_10146830

undefined4 FUN_10146830(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020abf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    iVar2 = 0;
    while( true ) {
      iVar1 = FUN_101aceb0();
      if (iVar1 <= iVar2) break;
      iVar1 = FUN_101adac0(iVar2);
      if (param_1 == iVar1) {
        ExceptionList = local_10;
        return 1;
      }
      iVar2 = iVar2 + 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 101468d7 Catch@101468d7

void Catch_101468d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101468eb Catch@101468eb

void Catch_101468eb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsToggleOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146910 FUN_10146910

int FUN_10146910(int param_1)

{
  if (3 < param_1) {
    param_1 = param_1 * 2 + -3;
  }
  return param_1;
}


// ==== 10146962 Catch@10146962

void Catch_10146962(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146976 Catch@10146976

void Catch_10146976(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetWeaponEnchantedNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101469a0 FUN_101469a0

int FUN_101469a0(int param_1)

{
  if (3 < param_1) {
    param_1 = param_1 * 3 + -6;
  }
  return param_1;
}


// ==== 101469f2 Catch@101469f2

void Catch_101469f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146a06 Catch@10146a06

void Catch_10146a06(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetArmorEnchantedNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146a30 FUN_10146a30

void FUN_10146a30(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ac50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x338))();
  ExceptionList = local_10;
  return;
}


// ==== 10146a84 Catch@10146a84

void Catch_10146a84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146a98 Catch@10146a98

void Catch_10146a98(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestSkillCoolTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146ac0 FUN_10146ac0

void FUN_10146ac0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ac70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101ad340(1);
  ExceptionList = local_10;
  return;
}


// ==== 10146b1d Catch@10146b1d

void Catch_10146b1d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146b31 Catch@10146b31

void Catch_10146b31(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ResetSkillCoolTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146b50 FUN_10146b50

void FUN_10146b50(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ac90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((0 < param_3) && (param_4 <= param_3)) {
    FUN_101ad3e0(param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10146bc6 Catch@10146bc6

void Catch_10146bc6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146bda Catch@10146bda

void Catch_10146bda(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StartCoolTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146c00 FUN_10146c00

void FUN_10146c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101ad3e0(param_1,1,param_4,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10146c6b Catch@10146c6b

void Catch_10146c6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146c7f Catch@10146c7f

void Catch_10146c7f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveUseShardGroupItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146ca0 FUN_10146ca0

undefined4 FUN_10146ca0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_1 < 0x9d3) {
    if (0x9cc < param_1) {
      return 1;
    }
    if (param_1 < 0x5bc) {
      if (0x5b6 < param_1) {
        return 1;
      }
      if (param_1 < 0x426) {
        if (0x423 < param_1) {
          return 1;
        }
        if (param_1 < 0x2de) {
          return 0;
        }
        bVar3 = SBORROW4(param_1,0x2df);
        bVar2 = param_1 + -0x2df < 0;
        bVar1 = param_1 == 0x2df;
      }
      else {
        if (param_1 < 0x55e) {
          return 0;
        }
        bVar3 = SBORROW4(param_1,0x55f);
        bVar2 = param_1 + -0x55f < 0;
        bVar1 = param_1 == 0x55f;
      }
    }
    else {
      if (0x72b < param_1) {
        return 0;
      }
      if (0x726 < param_1) {
        return 1;
      }
      if (param_1 < 0x603) {
        return 0;
      }
      bVar3 = SBORROW4(param_1,0x604);
      bVar2 = param_1 + -0x604 < 0;
      bVar1 = param_1 == 0x604;
    }
  }
  else {
    if (0x15d8 < param_1) {
      switch(param_1) {
      case 0x169d:
      case 0x169e:
      case 0x1793:
      case 0x1794:
        return 1;
      default:
        return 0;
      }
    }
    if (0x15d6 < param_1) {
      return 1;
    }
    if (0x1248 < param_1) {
      if (param_1 != 0x1472) {
        return 0;
      }
      return 1;
    }
    if (0x1244 < param_1) {
      return 1;
    }
    if (param_1 < 0xf6b) {
      return 0;
    }
    bVar3 = SBORROW4(param_1,0xf70);
    bVar2 = param_1 + -0xf70 < 0;
    bVar1 = param_1 == 0xf70;
  }
  if (!bVar1 && bVar3 == bVar2) {
    return 0;
  }
  return 1;
}


// ==== 10146e70 FUN_10146e70

undefined4 FUN_10146e70(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020acd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x5a8))(param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  UL2ConsoleWnd::SetState(DAT_103663bc,7);
  ExceptionList = local_10;
  return 1;
}


// ==== 10146eef Catch@10146eef

void Catch_10146eef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146f03 Catch@10146f03

void Catch_10146f03(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::InitForPawnViewer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146f20 FUN_10146f20

undefined4 FUN_10146f20(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020acf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x5a8))(param_1);
  if (iVar1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10146f91 Catch@10146f91

void Catch_10146f91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10146fa5 Catch@10146fa5

void Catch_10146fa5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::InitReplayMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146fd0 FUN_10146fd0

undefined4 FUN_10146fd0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ad10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DAT_103663bc = in_ECX;
  UObject::AddToRoot(in_ECX);
  ExceptionList = local_10;
  return 1;
}


// ==== 10147025 Catch@10147025

void Catch_10147025(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10147039 Catch@10147039

void Catch_10147039(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::InitForXMLConvert");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147060 FUN_10147060

void FUN_10147060(void)

{
  int iVar1;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ad30;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0x3fc00000;
  local_1c = 0x40b00000;
  if ((*(int *)GL2KeepMinFrameRate_exref != 0) || (*(float *)GL2OriginTerrainCR_exref < 5.0)) {
    iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                      (&DAT_1027f86c,L"StartRange1",&local_18,L"env.int");
    if (iVar1 == 0) {
      local_18 = 0x3f000000;
    }
    iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                      (&DAT_1027f86c,L"EndRange1",&local_1c,L"env.int");
    if (iVar1 == 0) {
      local_1c = 0x40600000;
    }
  }
  else if ((*(float *)GL2OriginTerrainCR_exref < 5.0) || (6.0 <= *(float *)GL2OriginTerrainCR_exref)
          ) {
    if ((*(float *)GL2OriginTerrainCR_exref < 6.0) || (7.0 <= *(float *)GL2OriginTerrainCR_exref)) {
      if ((*(float *)GL2OriginTerrainCR_exref < 7.0) || (8.0 <= *(float *)GL2OriginTerrainCR_exref))
      {
        if (8.0 <= *(float *)GL2OriginTerrainCR_exref) {
          local_14 = (undefined1 *)&uStack_34;
          iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                            (&DAT_1027f86c,L"StartRange5",&local_18,L"env.int");
          if (iVar1 == 0) {
            local_18 = 0x40200000;
          }
          iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                            (&DAT_1027f86c,L"EndRange5",&local_1c,L"env.int");
          if (iVar1 == 0) {
            local_1c = 0x40f00000;
          }
        }
      }
      else {
        local_14 = (undefined1 *)&uStack_34;
        iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                          (&DAT_1027f86c,L"StartRange4",&local_18,L"env.int");
        if (iVar1 == 0) {
          local_18 = 0x40000000;
        }
        iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                          (&DAT_1027f86c,L"EndRange4",&local_1c,L"env.int");
        if (iVar1 == 0) {
          local_1c = 0x40d00000;
        }
      }
    }
    else {
      local_14 = (undefined1 *)&uStack_34;
      iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                        (&DAT_1027f86c,L"StartRange3",&local_18,L"env.int");
      if (iVar1 == 0) {
        local_18 = 0x3fc00000;
      }
      iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                        (&DAT_1027f86c,L"EndRange3",&local_1c,L"env.int");
      if (iVar1 == 0) {
        local_1c = 0x40b00000;
      }
    }
  }
  else {
    local_14 = (undefined1 *)&uStack_34;
    iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                      (&DAT_1027f86c,L"StartRange2",&local_18,L"env.int");
    if (iVar1 == 0) {
      local_18 = 0x3f800000;
    }
    iVar1 = (**(code **)(**(int **)GConfig_exref + 8))
                      (&DAT_1027f86c,L"EndRange2",&local_1c,L"env.int");
    if (iVar1 == 0) {
      local_1c = 0x40900000;
    }
  }
  *(undefined4 *)GL2FogStart_exref = local_18;
  *(undefined4 *)GL2FogEnd_exref = local_1c;
  ExceptionList = local_10;
  return;
}


// ==== 10147342 Catch@10147342

void Catch_10147342(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10147356 Catch@10147356

void Catch_10147356(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::UpdateFog");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147380 FUN_10147380

undefined4 FUN_10147380(ushort *param_1)

{
  int iVar1;
  undefined4 uStack_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020ad59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_3c = 0x101473c1;
  iVar1 = ParseCommand(&param_1,(ushort *)L"SetState");
  if (iVar1 != 0) {
    FString::FString((FString *)&uStack_3c,param_1);
    local_8 = local_8 & 0xffffff00;
    FUN_10070110();
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10147422 Catch@10147422

void Catch_10147422(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10147436 Catch@10147436

void Catch_10147436(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ExecutionConsole");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147460 FUN_10147460

void FUN_10147460(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50ac) != 0) {
    FUN_1013c920();
    return;
  }
  return;
}


// ==== 10147480 FUN_10147480

undefined4 FUN_10147480(int param_1)

{
  if ((((param_1 != 2) && (param_1 != 3)) && (param_1 != 8)) &&
     ((((param_1 != 0x17 && (param_1 != 0x24)) &&
       ((param_1 != 0x2e && ((param_1 != 0x30 && (param_1 != 0x37)))))) && (param_1 != 0x39)))) {
    if (((param_1 == 9) || (param_1 == 0x18)) || (param_1 == 0x25)) {
      return 1;
    }
    if (((param_1 == 5) || (param_1 == 6)) || ((param_1 == 0x14 || (param_1 == 0x21)))) {
      return 2;
    }
    if ((param_1 == 0x15) || (param_1 == 0x22)) {
      return 3;
    }
    if ((((param_1 == 0xc) || (param_1 == 0xd)) || (param_1 == 0x1b)) || (param_1 == 0x28)) {
      return 4;
    }
    if ((((param_1 == 0x10) || (param_1 == 0x11)) ||
        ((param_1 == 0x1e || ((param_1 == 0x2b || (param_1 == 0x34)))))) || (param_1 == 0x33)) {
      return 5;
    }
    if (((param_1 == 0xe) || (param_1 == 0x1c)) || (param_1 == 0x29)) {
      return 6;
    }
    if (((((param_1 == 0) || (param_1 == 1)) ||
         ((param_1 == 4 || ((param_1 == 7 || (param_1 == 0x12)))))) ||
        (((param_1 == 0x13 ||
          ((((param_1 == 0x16 || (param_1 == 0x1f)) || (param_1 == 0x20)) ||
           (((param_1 == 0x23 || (param_1 == 0x2c)) ||
            ((param_1 == 0x2d || ((param_1 == 0x2f || (param_1 == 0x35)))))))))) ||
         (param_1 == 0x36)))) || (param_1 == 0x38)) {
      return 7;
    }
    if (((((((param_1 == 0x31) || (param_1 == 0x32)) || (param_1 == 0x26)) ||
          ((param_1 == 0x27 || (param_1 == 0x2a)))) || (param_1 == 0x19)) ||
        ((param_1 == 0x1a || (param_1 == 0x1d)))) ||
       ((param_1 == 10 || ((param_1 == 0xb || (param_1 == 0xf)))))) {
      return 8;
    }
    if (((((param_1 == 0x58) || (param_1 == 0x59)) || (param_1 == 0x5d)) ||
        (((param_1 == 0x65 || (param_1 == 0x6c)) ||
         ((param_1 == 0x71 || ((param_1 == 0x72 || (param_1 == 0x75)))))))) || (param_1 == 0x76)) {
      return 9;
    }
    if (((param_1 == 0x5c) || (param_1 == 0x66)) || (param_1 == 0x6d)) {
      return 10;
    }
    if (((param_1 == 0x5a) || (param_1 == 0x5b)) || ((param_1 == 99 || (param_1 == 0x6a)))) {
      return 0xb;
    }
    if ((param_1 == 100) || (param_1 == 0x6b)) {
      return 0xc;
    }
    if ((((param_1 == 0x5e) || (param_1 == 0x5f)) || (param_1 == 0x67)) || (param_1 == 0x6e)) {
      return 0xd;
    }
    if ((((param_1 == 0x61) || (param_1 == 0x62)) ||
        ((param_1 == 0x69 || ((param_1 == 0x70 || (param_1 == 0x74)))))) || (param_1 == 0x73)) {
      return 0xe;
    }
    if (((param_1 == 0x60) || (param_1 == 0x68)) || (param_1 == 0x6f)) {
      return 0xf;
    }
  }
  return 0;
}


// ==== 101477e0 FUN_101477e0

void FUN_101477e0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x50ac) != 0) &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1d0) + 0x1cc) != 0)) {
    FUN_101a8c60();
    return;
  }
  return;
}


// ==== 10147810 FUN_10147810

void FUN_10147810(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5138) = param_1;
  *(undefined4 *)(in_ECX + 0x5134) = 1;
  *(undefined4 *)GIsL2Mark_exref = 0;
  return;
}


// ==== 1014787c Catch@1014787c

void Catch_1014787c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10147890 Catch@10147890

void Catch_10147890(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetPrevL2Mark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101478b0 FUN_101478b0

void FUN_101478b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5134) != 0) {
    *(undefined4 *)GIsL2Mark_exref = *(undefined4 *)(in_ECX + 0x5138);
    *(undefined4 *)(in_ECX + 0x5138) = 0;
    *(undefined4 *)(in_ECX + 0x5134) = 0;
  }
  return;
}


// ==== 1014791b Catch@1014791b

void Catch_1014791b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014792f Catch@1014792f

void Catch_1014792f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RestorePrevL2Mark");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147950 FUN_10147950

void FUN_10147950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020adc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x5160) == 2) && (*(int *)(in_ECX + 0x5164) != 0)) {
    FUN_10054cc0();
  }
  *(int *)(in_ECX + 0x5160) = param_1;
  *(undefined4 *)(in_ECX + 0x5164) = param_2;
  *(undefined4 *)(in_ECX + 0x5168) = param_4;
  if (param_1 == 0) {
    *(undefined4 *)(in_ECX + 0x5164) = 0;
    *(undefined4 *)(in_ECX + 0x5168) = 0;
    *(undefined4 *)(in_ECX + 0x516c) = 0;
    FUN_10145690();
  }
  else {
    if (param_1 == 1) {
      uVar1 = 0;
    }
    else {
      if (param_1 != 2) {
        ExceptionList = local_10;
        return;
      }
      uVar1 = *(undefined4 *)(*(int *)(DAT_103663bc + 0x50ac) + 0x240);
    }
    FUN_101455d0(4,param_3,uVar1);
    FUN_10145680();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10147a2d Catch@10147a2d

void Catch_10147a2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10147a41 Catch@10147a41

void Catch_10147a41(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetDragDropState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147a60 FUN_10147a60

undefined4 FUN_10147a60(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(in_ECX + 0x5164);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(in_ECX + 0x5168);
  }
  return *(undefined4 *)(in_ECX + 0x5160);
}


// ==== 10147aca Catch@10147aca

void Catch_10147aca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10147ade Catch@10147ade

void Catch_10147ade(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetDragDropState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147b00 FUN_10147b00

void FUN_10147b00(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5160) == 0) {
    appFailAssert("m_DragDropState != DDS_None",".\\Src\\NConsoleWindow.cpp",0x41ce);
    *(undefined4 *)(in_ECX + 0x516c) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x516c) = param_1;
  return;
}


// ==== 10147b40 FUN_10147b40

undefined4 FUN_10147b40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x516c);
}


// ==== 10147b50 FUN_10147b50

void FUN_10147b50(undefined4 param_1)

{
  uint uVar1;
  ushort *puVar2;
  int *in_ECX;
  FString *this;
  ushort local_404 [512];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_404;
  if (DAT_1039e528 == 0) goto LAB_10147c5a;
  uVar1 = FUN_101b9850();
  if (uVar1 == 0x755) {
switchD_10147bab_caseD_73:
    FUN_101b9870(param_1);
    goto LAB_10147c5a;
  }
  if (0x17c < uVar1) {
switchD_10147bab_caseD_6f:
    this = (FString *)(GL2GameData_exref + 0x3c3f8);
    goto LAB_10147c20;
  }
  if (uVar1 == 0x17c) {
switchD_10147bab_caseD_154:
    this = (FString *)(GL2GameData_exref + 0x355a4);
  }
  else {
    switch(uVar1) {
    case 0x6e:
      this = (FString *)(GL2GameData_exref + 0x353d8);
      break;
    default:
      goto switchD_10147bab_caseD_6f;
    case 0x72:
      this = (FString *)(GL2GameData_exref + 0x35434);
      break;
    case 0x73:
      goto switchD_10147bab_caseD_73;
    case 0x78:
    case 0x7c:
    case 0x96:
    case 0x99:
    case 0xaa:
      this = (FString *)(GL2GameData_exref + 0x35490);
      break;
    case 0x9b:
      this = (FString *)(GL2GameData_exref + 0x354ec);
      break;
    case 200:
      this = (FString *)(GL2GameData_exref + 0x35548);
      break;
    case 0x154:
    case 0x15e:
      goto switchD_10147bab_caseD_154;
    case 0x168:
      this = (FString *)(GL2GameData_exref + 0x35600);
    }
  }
LAB_10147c20:
  puVar2 = FString::operator*(this);
  appSprintf(local_404,(ushort *)L"%s\n(ErrorCode=%d)",puVar2,uVar1);
  (**(code **)(*in_ECX + 0x80))(local_404,1);
LAB_10147c5a:
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}


// ==== 10147da0 FUN_10147da0

undefined4 FUN_10147da0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = FL2GameData::GetItemAdditionalName((FL2GameData *)GL2GameData_exref,param_1);
  if ((param_1 != 0) && (puVar1 != (ushort *)0x0)) {
    iVar2 = appStrcmp(puVar1,(ushort *)L"NAME_None");
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 10147de0 FUN_10147de0

void FUN_10147de0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10147dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x460))();
  return;
}


// ==== 10147df0 FUN_10147df0

void FUN_10147df0(undefined4 param_1)

{
  FUN_101aefc0(param_1,1);
  return;
}


// ==== 10147e10 FUN_10147e10

void FUN_10147e10(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10147e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(iVar1 + 0x60) + 0x464))();
    return;
  }
  return;
}


// ==== 10147e30 FUN_10147e30

ushort * FUN_10147e30(int param_1)

{
  ushort *puVar1;
  
  puVar1 = FL2GameData::GetItemAdditionalName((FL2GameData *)GL2GameData_exref,param_1);
  if (puVar1 != (ushort *)0x0) {
    appStrcmp(puVar1,(ushort *)L"NAME_None");
  }
  return puVar1;
}


// ==== 10147e60 FUN_10147e60

void FUN_10147e60(ushort *param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ae00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    iVar1 = appStrcmp(param_1,(ushort *)L"None");
    if (iVar1 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x50) + 0x63c))(param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10147edd Catch@10147edd

void Catch_10147edd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10147ef1 Catch@10147ef1

void Catch_10147ef1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PlayConsoleSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147f10 FUN_10147f10

void FUN_10147f10(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ae20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x640))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10147f6e Catch@10147f6e

void Catch_10147f6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10147f82 Catch@10147f82

void Catch_10147f82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StopConsoleSound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147fa0 FUN_10147fa0

void FUN_10147fa0(FString *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  FString aFStack_54 [12];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020ae49;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x50);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) {
    uStack_30 = 0;
    local_34 = 0;
    uStack_38 = 0x10147ff7;
    (**(code **)(**(int **)(iVar1 + 0x58) + 0xd8))();
    uStack_38 = 0;
    uStack_3c = 0x3f800000;
    uStack_40 = param_4;
    uStack_44 = param_3;
    uStack_48 = param_2;
    FString::FString(aFStack_54,param_1);
    local_8 = local_8 & 0xffffff00;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x50a0) = uVar2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014805a Catch@1014805a

void Catch_1014805a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014806e Catch@1014806e

void Catch_1014806e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PlayConsoleMusic");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148090 FUN_10148090

void FUN_10148090(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ae70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x50);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x58) + 0xd8))(0,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101480ff Catch@101480ff

void Catch_101480ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148113 Catch@10148113

void Catch_10148113(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StopConsoleMusic");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148130 FUN_10148130

void FUN_10148130(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020ae90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x50);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x58) + 0xe0))(0,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014819f Catch@1014819f

void Catch_1014819f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101481b3 Catch@101481b3

void Catch_101481b3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StopConsoleVoice");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101481d0 FUN_101481d0

void FUN_101481d0(ushort *param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    iVar1 = appStrcmp(param_1,(ushort *)L"None");
    if (iVar1 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x50) + 0x644))(param_1);
    }
  }
  return;
}


// ==== 10148210 FUN_10148210

void FUN_10148210(undefined4 param_1)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aeb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x354))(param_1,0,0,1);
  ExceptionList = local_10;
  return;
}


// ==== 10148271 Catch@10148271

void Catch_10148271(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148285 Catch@10148285

void Catch_10148285(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ConfirmDlg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101482b0 FUN_101482b0

void FUN_101482b0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x46c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10148311 Catch@10148311

void Catch_10148311(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148325 Catch@10148325

void Catch_10148325(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SendConfirmDlg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148350 FUN_10148350

void FUN_10148350(undefined4 param_1)

{
  FUN_101ac370(param_1);
  FUN_1013cbb0();
  return;
}


// ==== 10148380 FUN_10148380

void FUN_10148380(FString *param_1,undefined4 *param_2)

{
  FString *pFVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020aef9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  pFVar1 = (FString *)(**(code **)(*in_ECX + 0x688))(local_28);
  local_8._0_1_ = 1;
  FString::operator=(param_1,pFVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x690))(local_28);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  ExceptionList = local_10;
  return;
}


// ==== 1014841d Catch@1014841d

void Catch_1014841d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148431 Catch@10148431

void Catch_10148431(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetTargetInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148450 FUN_10148450

void FUN_10148450(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020af20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x488))();
  ExceptionList = local_10;
  return;
}


// ==== 101484a4 Catch@101484a4

void Catch_101484a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101484b8 Catch@101484b8

void Catch_101484b8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetUserAccount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101484e0 FUN_101484e0

void FUN_101484e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020af40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x48c))();
  ExceptionList = local_10;
  return;
}


// ==== 10148534 Catch@10148534

void Catch_10148534(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148548 Catch@10148548

void Catch_10148548(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetUserPassword");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148570 FUN_10148570

void FUN_10148570(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020af60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x490))();
  ExceptionList = local_10;
  return;
}


// ==== 101485c4 Catch@101485c4

void Catch_101485c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101485d8 Catch@101485d8

void Catch_101485d8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetUserOneTimePassword");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148600 FUN_10148600

void FUN_10148600(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014860e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x470))();
  return;
}


// ==== 10148610 FUN_10148610

void FUN_10148610(void)

{
  FUN_100b1d60();
  return;
}


// ==== 10148630 FUN_10148630

void FUN_10148630(void)

{
  FUN_100b1d70();
  return;
}


// ==== 10148650 FUN_10148650

void FUN_10148650(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014865e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x47c))();
  return;
}


// ==== 10148660 FUN_10148660

void FUN_10148660(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014866e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x480))();
  return;
}


// ==== 10148670 FUN_10148670

void FUN_10148670(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020af80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x478))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101486d1 Catch@101486d1

void Catch_101486d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101486e5 Catch@101486e5

void Catch_101486e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestPetitionFeedBack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148710 FUN_10148710

void FUN_10148710(undefined4 param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020afa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    uVar2 = 0;
    if (param_2 == '\x01') {
      uVar2 = 0;
    }
    else if (param_2 == '\x02') {
      uVar2 = 1;
    }
    FUN_101b0b40(param_1,uVar2,param_3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10148798 Catch@10148798

void Catch_10148798(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101487ac Catch@101487ac

void Catch_101487ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchTeamInfoStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101487d0 FUN_101487d0

void FUN_101487d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  FString *in_stack_0000003c;
  FString aFStack_60 [12];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020afd2;
  local_10 = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  puStack_30 = (undefined1 *)0x10148817;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    puStack_30 = in_stack_0000003c;
    uStack_34 = in_stack_00000038;
    uStack_38 = in_stack_00000034;
    uStack_3c = in_stack_00000030;
    uStack_40 = in_stack_0000002c;
    uStack_44 = in_stack_00000028;
    uStack_48 = in_stack_00000024;
    uStack_4c = in_stack_00000020;
    uStack_50 = in_stack_0000001c;
    uStack_54 = in_stack_00000018;
    in_stack_0000003c = aFStack_60;
    FString::FString(aFStack_60,(FString *)&stack0x0000000c);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_101b1450(param_1,param_2);
  }
  local_8 = 0xffffffff;
  puStack_30 = (undefined1 *)0x1014887d;
  FString::~FString((FString *)&stack0x0000000c);
  ExceptionList = local_10;
  return;
}


// ==== 10148891 Catch@10148891

void Catch_10148891(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101488a5 Catch@101488a5

void Catch_101488a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchTeamInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101488d0 FUN_101488d0

void FUN_101488d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020aff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    FUN_101b1650(param_1,param_2,param_3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10148944 Catch@10148944

void Catch_10148944(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148958 Catch@10148958

void Catch_10148958(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchSpellInfoStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148980 FUN_10148980

void FUN_10148980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101ad070();
  if (iVar1 != 0) {
    FUN_101b1720(param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101489f8 Catch@101489f8

void Catch_101489f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148a0c Catch@10148a0c

void Catch_10148a0c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchSpellInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148a30 FUN_10148a30

void FUN_10148a30(void)

{
  return;
}


// ==== 10148a7d Catch@10148a7d

void Catch_10148a7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148a91 Catch@10148a91

void Catch_10148a91(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnEventMatchTeamUnlocked");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148ab0 FUN_10148ab0

void FUN_10148ab0(void)

{
  return;
}


// ==== 10148afd Catch@10148afd

void Catch_10148afd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148b11 Catch@10148b11

void Catch_10148b11(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnCharInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148b30 FUN_10148b30

void FUN_10148b30(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x50ac) != 0) && (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x208) != 0)) {
    FUN_1013c430(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10148b9c Catch@10148b9c

void Catch_10148b9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148bb0 Catch@10148bb0

void Catch_10148bb0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ExecuteCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148bd0 FUN_10148bd0

void FUN_10148bd0(ushort *param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x50ac) != 0) && (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x208) != 0)) {
    iVar1 = FL2GameData::GetCommandTypeFromAction((FL2GameData *)GL2GameData_exref,param_1);
    FUN_1013a320(iVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10148c54 Catch@10148c54

void Catch_10148c54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148c68 Catch@10148c68

void Catch_10148c68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ExecuteCommandFromAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148c90 FUN_10148c90

void FUN_10148c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  *(undefined4 *)GL2DisableGCLobby_exref = 1;
  *(undefined4 *)(in_ECX + 0x5100) = 1;
  *(undefined4 *)(in_ECX + 0x50fc) = 1;
  *(undefined4 *)(in_ECX + 0x50f8) = param_1;
  *(undefined4 *)(in_ECX + 0x5104) = param_2;
  *(undefined4 *)(in_ECX + 0x5108) = param_3;
  *(undefined4 *)(in_ECX + 0x510c) = param_4;
  return;
}


// ==== 10148d1a Catch@10148d1a

void Catch_10148d1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148d2e Catch@10148d2e

void Catch_10148d2e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::BeginGMChangeServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148d50 FUN_10148d50

void FUN_10148d50(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b0d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50fc) == param_1 + -1) {
    *(int *)(in_ECX + 0x50fc) = param_1;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10148dce Catch@10148dce

void Catch_10148dce(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148de2 Catch@10148de2

void Catch_10148de2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetGMChangeServerState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148e00 FUN_10148e00

void FUN_10148e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b0f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_101c19e0();
  *param_1 = uVar1;
  uVar1 = FUN_101c19e0();
  *param_2 = uVar1;
  uVar1 = FUN_101c19e0();
  *param_3 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10148e81 Catch@10148e81

void Catch_10148e81(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10148e95 Catch@10148e95

void Catch_10148e95(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetGMChangeServerLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148ec0 FUN_10148ec0

void FUN_10148ec0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x50fc) = 0;
  *(undefined4 *)(in_ECX + 0x5100) = 0;
  return;
}


// ==== 10148ed0 FUN_10148ed0

void FUN_10148ed0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x50f8) = param_1;
  return;
}


// ==== 10148ee0 FUN_10148ee0

void FUN_10148ee0(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x50fc) = *(int *)(in_ECX + 0x50fc) + -1;
  return;
}


// ==== 10148ef0 FUN_10148ef0

void FUN_10148ef0(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x50fc) = *(int *)(in_ECX + 0x50fc) + 1;
  return;
}


// ==== 10148f00 FUN_10148f00

void FUN_10148f00(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_ECX;
  uint uStack_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b110;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  local_8 = 0;
  if (*(int *)GL2UseGameGuard_exref == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x36c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x370) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x374) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x378) = 0;
  }
  else {
    if (DAT_1039e528 == 0) {
      return;
    }
    local_2c = param_1;
    local_28 = param_2;
    local_24 = param_3;
    local_20 = param_4;
    DAT_1039e530 = param_5;
    if ((((param_1 != 0) || (param_2 != 0)) || (param_3 != 0)) || (param_4 != 0)) {
      ExceptionList = &local_10;
      FUN_101b9a20(&local_2c);
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x36c) = 0x123;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x370) = 0x4567;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x374) = 0x89ab;
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x378) = 0xcdef;
  }
  if (param_5 == 0) {
    iVar1 = *(int *)(in_ECX + 0x50);
    local_14 = (undefined1 *)&uStack_3c;
    (**(code **)(**(int **)(iVar1 + 0x60) + 0x494))
              (*(undefined4 *)(iVar1 + 0x36c),*(undefined4 *)(iVar1 + 0x370),
               *(undefined4 *)(iVar1 + 0x374),*(undefined4 *)(iVar1 + 0x378));
  }
  else if (param_5 == 3) {
    local_14 = (undefined1 *)&uStack_3c;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x134))();
  }
  else if (param_5 == 4) {
    local_14 = (undefined1 *)&uStack_3c;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0xf4))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 10149064 Catch@10149064

void Catch_10149064(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149078 Catch@10149078

void Catch_10149078(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GameGuardQuery");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101490a0 FUN_101490a0

undefined4 FUN_101490a0(undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b130;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(DAT_103663bc + 0x5110) != 0) {
    ExceptionList = &local_10;
    uVar1 = FUN_101ae8f0(param_1);
    ExceptionList = local_10;
    return uVar1;
  }
  return 0;
}


// ==== 10149119 Catch@10149119

void Catch_10149119(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014912d Catch@1014912d

void Catch_1014912d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsPartyMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149150 FUN_10149150

void FUN_10149150(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5184) != 0) {
    FUN_101ab8c0(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101491b0 Catch@101491b0

void Catch_101491b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101491c4 Catch@101491c4

void Catch_101491c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::InitFishViewportWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101491f0 FUN_101491f0

void FUN_101491f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5184) != 0) {
    FUN_101aad80(param_1,param_2,param_3);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10149258 Catch@10149258

void Catch_10149258(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014926c Catch@1014926c

void Catch_1014926c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::InitFishStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149290 FUN_10149290

void FUN_10149290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5184) != 0) {
    FUN_101ab720(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10149308 Catch@10149308

void Catch_10149308(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014931c Catch@1014931c

void Catch_1014931c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetFishStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149340 FUN_10149340

void FUN_10149340(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b1b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5184) != 0) {
    FUN_101ab100();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014939a Catch@1014939a

void Catch_1014939a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101493ae Catch@101493ae

void Catch_101493ae(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetFishViewportWindowFinalAction");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101493d0 FUN_101493d0

void FUN_101493d0(void)

{
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020b1d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)L"SpecialCameraState");
  local_8._0_1_ = 1;
  (**(code **)(*in_ECX + 0x780))(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1014944c Catch@1014944c

void Catch_1014944c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149460 Catch@10149460

void Catch_10149460(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StartSpecialCameraMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149480 FUN_10149480

void FUN_10149480(void)

{
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020b209;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)L"GamingState");
  local_8._0_1_ = 1;
  (**(code **)(*in_ECX + 0x780))(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101494fc Catch@101494fc

void Catch_101494fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149510 Catch@10149510

void Catch_10149510(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::FinishSpecialCameraMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149530 FUN_10149530

void FUN_10149530(void)

{
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020b239;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)L"GMCameraState");
  local_8._0_1_ = 1;
  (**(code **)(*in_ECX + 0x780))(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101495ac Catch@101495ac

void Catch_101495ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101495c0 Catch@101495c0

void Catch_101495c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::StartGMCameraMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101495e0 FUN_101495e0

void FUN_101495e0(void)

{
  int *in_ECX;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020b269;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28,(ushort *)L"GamingState");
  local_8._0_1_ = 1;
  (**(code **)(*in_ECX + 0x780))(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1014965c Catch@1014965c

void Catch_1014965c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149670 Catch@10149670

void Catch_10149670(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::FinishGMCameraMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149690 FUN_10149690

void FUN_10149690(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014969e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4b0))();
  return;
}


// ==== 101496a0 FUN_101496a0

void FUN_101496a0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b290;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4b4))();
  ExceptionList = local_10;
  return;
}


// ==== 101496fb Catch@101496fb

void Catch_101496fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014970f Catch@1014970f

void Catch_1014970f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestManorList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149730 FUN_10149730

void FUN_10149730(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b2b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4b8))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10149791 Catch@10149791

void Catch_10149791(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101497a5 Catch@101497a5

void Catch_101497a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestProcureCropList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101497d0 FUN_101497d0

void FUN_101497d0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b2d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4bc))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10149831 Catch@10149831

void Catch_10149831(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149845 Catch@10149845

void Catch_10149845(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestSetSeed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149870 FUN_10149870

void FUN_10149870(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b2f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4c0))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101498d1 Catch@101498d1

void Catch_101498d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101498e5 Catch@101498e5

void Catch_101498e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestSetCrop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149910 FUN_10149910

void FUN_10149910(void)

{
  int in_ECX;
  FString aFStack_3c [12];
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b322;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FString::FString(aFStack_3c,(FString *)&stack0x00000004);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4c4))();
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10149996 Catch@10149996

void Catch_10149996(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101499aa Catch@101499aa

void Catch_101499aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestWriteHeroWords");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101499d0 FUN_101499d0

void FUN_101499d0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4c8))();
  ExceptionList = local_10;
  return;
}


// ==== 10149a2b Catch@10149a2b

void Catch_10149a2b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149a3f Catch@10149a3f

void Catch_10149a3f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestOlympiadObserverEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149a60 FUN_10149a60

void FUN_10149a60(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4cc))();
  ExceptionList = local_10;
  return;
}


// ==== 10149abb Catch@10149abb

void Catch_10149abb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149acf Catch@10149acf

void Catch_10149acf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestOlympiadMatchList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149af0 FUN_10149af0

void FUN_10149af0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x498))();
  return;
}


// ==== 10149b00 FUN_10149b00

void FUN_10149b00(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x49c))();
  return;
}


// ==== 10149b10 FUN_10149b10

void FUN_10149b10(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4a0))();
  return;
}


// ==== 10149b20 FUN_10149b20

void FUN_10149b20(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4a4))();
  return;
}


// ==== 10149b30 FUN_10149b30

void FUN_10149b30(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4a8))();
  return;
}


// ==== 10149b40 FUN_10149b40

void FUN_10149b40(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4ac))();
  return;
}


// ==== 10149b50 FUN_10149b50

void FUN_10149b50(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x298))();
  return;
}


// ==== 10149b60 FUN_10149b60

void FUN_10149b60(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x29c))();
  return;
}


// ==== 10149b70 FUN_10149b70

ushort * FUN_10149b70(undefined4 param_1)

{
  ushort *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6d9fc));
    return puVar1;
  case 2:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da08));
    return puVar1;
  case 3:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da14));
    return puVar1;
  case 4:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da20));
    return puVar1;
  case 5:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da2c));
    return puVar1;
  case 6:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da38));
    return puVar1;
  case 7:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da44));
    return puVar1;
  default:
    return (ushort *)0x0;
  case 9:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da5c));
    return puVar1;
  case 10:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da68));
    return puVar1;
  case 0xb:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da74));
    return puVar1;
  case 0xc:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da80));
    return puVar1;
  case 0xd:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6da8c));
    return puVar1;
  case 0xe:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6e350));
    return puVar1;
  case 0xf:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6e35c));
    return puVar1;
  case 100:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ec80));
    return puVar1;
  }
}


// ==== 10149d80 FUN_10149d80

ushort * FUN_10149d80(undefined4 param_1)

{
  ushort *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6bfb0));
    return puVar1;
  case 1:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6bfbc));
    return puVar1;
  case 2:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ce44));
    return puVar1;
  case 3:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ce50));
    return puVar1;
  case 4:
    puVar1 = FString::operator*((FString *)(GL2GameData_exref + 0x6ce5c));
    return puVar1;
  default:
    return (ushort *)0x0;
  }
}


// ==== 10149e20 FUN_10149e20

void FUN_10149e20(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  if (*(int *)(in_ECX + 0x5064) != 0) {
    FUN_10045570(pvVar1,pvVar2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10149e97 Catch@10149e97

void Catch_10149e97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10149eab Catch@10149eab

void Catch_10149eab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnExAutoSoulShot");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149ed0 FUN_10149ed0

void FUN_10149ed0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10149ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4d0))();
  return;
}


// ==== 10149ee0 FUN_10149ee0

undefined4 FUN_10149ee0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_1 < 0xf71) {
    if (0xf6a < param_1) {
      return 1;
    }
    if (param_1 < 0x72c) {
      if (param_1 == 0x72b) {
        return 1;
      }
      if (param_1 < 0x5b7) {
        return 0;
      }
      bVar3 = SBORROW4(param_1,0x5bb);
      bVar2 = param_1 + -0x5bb < 0;
      bVar1 = param_1 == 0x5bb;
    }
    else {
      if (param_1 < 0x9cd) {
        return 0;
      }
      bVar3 = SBORROW4(param_1,0x9d2);
      bVar2 = param_1 + -0x9d2 < 0;
      bVar1 = param_1 == 0x9d2;
    }
  }
  else {
    if (0x198c < param_1) {
      if (param_1 < 0x19f5) {
        return 0;
      }
      if (0x19f7 < param_1) {
        return 0;
      }
      return 1;
    }
    if (0x1986 < param_1) {
      return 1;
    }
    if (param_1 < 0x169d) {
      return 0;
    }
    bVar3 = SBORROW4(param_1,0x169e);
    bVar2 = param_1 + -0x169e < 0;
    bVar1 = param_1 == 0x169e;
  }
  if (!bVar1 && bVar3 == bVar2) {
    return 0;
  }
  return 1;
}


// ==== 10149f50 FUN_10149f50

void FUN_10149f50(void)

{
  FString aFStack_3c [12];
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020b3a9;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(aFStack_3c,(ushort *)L"ReplaySelectState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  ExceptionList = local_10;
  return;
}


// ==== 10149fc7 Catch@10149fc7

void Catch_10149fc7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10149fdb Catch@10149fdb

void Catch_10149fdb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ShowReplayListWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a000 FUN_1014a000

void FUN_1014a000(FString *param_1)

{
  FString aFStack_3c [12];
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020b3d9;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(aFStack_3c,param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  ExceptionList = local_10;
  return;
}


// ==== 1014a078 Catch@1014a078

void Catch_1014a078(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a08c Catch@1014a08c

void Catch_1014a08c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetUIState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a0b0 FUN_1014a0b0

void FUN_1014a0b0(void)

{
  void *pvVar1;
  int in_ECX;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020b409;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  pvVar1 = (void *)FUN_101b27e0(0x1fd9);
  L2ParamStack::PushBack(local_2c,pvVar1);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x474))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1014a14c Catch@1014a14c

void Catch_1014a14c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a160 Catch@1014a160

void Catch_1014a160(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestGetBossRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a180 FUN_1014a180

void FUN_1014a180(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014a18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4e8))();
  return;
}


// ==== 1014a190 FUN_1014a190

void FUN_1014a190(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014a19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4ec))();
  return;
}


// ==== 1014a1a0 FUN_1014a1a0

void FUN_1014a1a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014a1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4f0))();
  return;
}


// ==== 1014a1b0 FUN_1014a1b0

void FUN_1014a1b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014a1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4f4))();
  return;
}


// ==== 1014a1c0 FUN_1014a1c0

void FUN_1014a1c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1014a1ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x4f8))();
  return;
}


// ==== 1014a1d0 FUN_1014a1d0

bool FUN_1014a1d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_101b27e0(param_1);
  return 0 < iVar1;
}


// ==== 1014a1f0 FUN_1014a1f0

undefined1 * FUN_1014a1f0(void)

{
  undefined1 auStack_100 [216];
  
  return auStack_100;
}


// ==== 1014a236 Catch@1014a236

void Catch_1014a236(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a24a Catch@1014a24a

void Catch_1014a24a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::LoadOption");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a270 FUN_1014a270

undefined4 FUN_1014a270(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101acf50(param_1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1014a2cc Catch@1014a2cc

void Catch_1014a2cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a2e0 Catch@1014a2e0

void Catch_1014a2e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::Get3DArrowTargetPos");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a300 FUN_1014a300

void FUN_1014a300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101acf30(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}


// ==== 1014a374 Catch@1014a374

void Catch_1014a374(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a388 Catch@1014a388

void Catch_1014a388(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::Set3DArrowTargetPos");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a3b0 FUN_1014a3b0

FString * FUN_1014a3b0(FString *param_1,undefined4 param_2)

{
  ushort *puVar1;
  FString *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1020b4aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FString::FString(param_1);
  local_4 = 0;
  switch(param_2) {
  case 0:
    this = (FString *)(GL2GameData_exref + 0x6e9c8);
    break;
  case 1:
    this = (FString *)(GL2GameData_exref + 0x6e9d4);
    break;
  case 2:
    this = (FString *)(GL2GameData_exref + 0x6e9ec);
    break;
  case 3:
    this = (FString *)(GL2GameData_exref + 0x6e9f8);
    break;
  case 4:
    this = (FString *)(GL2GameData_exref + 0x6ea04);
    break;
  case 5:
    this = (FString *)(GL2GameData_exref + 0x6ea10);
    break;
  case 6:
    this = (FString *)(GL2GameData_exref + 0x6ea1c);
    break;
  case 7:
    this = (FString *)(GL2GameData_exref + 0x6ea28);
    break;
  case 8:
    this = (FString *)(GL2GameData_exref + 0x6ea34);
    break;
  default:
    goto switchD_1014a40b_default;
  }
  puVar1 = FString::operator*(this);
  FString::operator=(param_1,puVar1);
switchD_1014a40b_default:
  ExceptionList = local_c;
  return param_1;
}


// ==== 1014a4e0 FUN_1014a4e0

void FUN_1014a4e0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5180) = 1;
  return;
}


// ==== 1014a535 Catch@1014a535

void Catch_1014a535(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a549 Catch@1014a549

void Catch_1014a549(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GotoLoginNextTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a570 FUN_1014a570

void FUN_1014a570(int *param_1)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b4f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(in_ECX + 0x5140);
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x68))(0x504,0,0);
    }
    *(int **)(in_ECX + 0x5140) = param_1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014a5e6 Catch@1014a5e6

void Catch_1014a5e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a5fa Catch@1014a5fa

void Catch_1014a5fa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetCurrentDraggingWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a620 FUN_1014a620

undefined4 FUN_1014a620(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5140);
}


// ==== 1014a66a Catch@1014a66a

void Catch_1014a66a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a67e Catch@1014a67e

void Catch_1014a67e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetCurrentDraggingWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a6a0 FUN_1014a6a0

void FUN_1014a6a0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5184) = param_1;
  return;
}


// ==== 1014a6f6 Catch@1014a6f6

void Catch_1014a6f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a70a Catch@1014a70a

void Catch_1014a70a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::SetFishVIewportWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a730 FUN_1014a730

undefined4 FUN_1014a730(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b550;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_1013ca30();
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1014a797 Catch@1014a797

void Catch_1014a797(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a7ab Catch@1014a7ab

void Catch_1014a7ab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetPawnViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a7d0 FUN_1014a7d0

undefined4 FUN_1014a7d0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b570;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_1013cab0();
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1014a837 Catch@1014a837

void Catch_1014a837(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a84b Catch@1014a84b

void Catch_1014a84b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetNpcViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a870 FUN_1014a870

undefined4 FUN_1014a870(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b590;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  uVar1 = FUN_1013cb30();
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1014a8d7 Catch@1014a8d7

void Catch_1014a8d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014a8eb Catch@1014a8eb

void Catch_1014a8eb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetMSViewerWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a910 FUN_1014a910

void FUN_1014a910(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  ushort *puVar6;
  FString *this;
  ushort local_804 [512];
  ushort local_404 [512];
  uint local_4;
  
  local_4 = DAT_103554c4 ^ (uint)local_804;
  switch(param_1) {
  case 0x3e9:
  case 0x3ea:
switchD_1014a952_caseD_3e9:
    this = (FString *)(GL2GameData_exref + 0x3565c);
    break;
  default:
    goto switchD_1014a952_caseD_3eb;
  case 0x3f3:
  case 0x3f4:
  case 0x3f5:
    this = (FString *)(GL2GameData_exref + 0x35548);
    break;
  case 0x3f6:
    puVar6 = FString::operator*((FString *)(GL2GameData_exref + 0x3565c));
    appSprintf(local_804,puVar6,param_2);
    puVar6 = local_804;
    goto LAB_1014aae7;
  case 0x3f7:
    this = (FString *)(GL2GameData_exref + 0x356b8);
    break;
  case 0x3f9:
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    if (DAT_1039e52c == 0) goto switchD_1014a952_caseD_3e9;
    switch(DAT_1039e530) {
    case 0:
      (**(code **)(**(int **)(*(int *)(DAT_1039e52c + 0x50) + 0x60) + 0x494))
                (uVar1,uVar2,uVar3,uVar4);
      break;
    case 1:
    case 2:
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x36c) = uVar1;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x370) = uVar2;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x374) = uVar3;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x378) = uVar4;
      break;
    case 3:
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x36c) = uVar1;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x370) = uVar2;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x374) = uVar3;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x378) = uVar4;
      pcVar5 = *(code **)(**(int **)(*(int *)(DAT_1039e52c + 0x50) + 0x60) + 0x134);
      goto LAB_1014aa69;
    case 4:
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x36c) = uVar1;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x370) = uVar2;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x374) = uVar3;
      *(undefined4 *)(*(int *)(DAT_1039e52c + 0x50) + 0x378) = uVar4;
      pcVar5 = *(code **)(**(int **)(*(int *)(DAT_1039e52c + 0x50) + 0x60) + 0xf4);
LAB_1014aa69:
      (*pcVar5)();
    }
switchD_1014a952_caseD_3eb:
    goto LAB_1014aa70;
  }
  puVar6 = FString::operator*(this);
LAB_1014aae7:
  appSprintf(local_404,(ushort *)L"%s\n(ErrorCode=%d)",puVar6,param_1);
  (**(code **)(*DAT_103663bc + 0x80))(local_404,1);
LAB_1014aa70:
  __security_check_cookie(local_4 ^ (uint)local_804);
  return;
}


// ==== 1014ab60 FUN_1014ab60

void FUN_1014ab60(void)

{
  if (DAT_1039ea64 != (undefined4 *)0x0) {
    (**(code **)*DAT_1039ea64)(1);
  }
  DAT_1039ea64 = (undefined4 *)0x0;
  return;
}


// ==== 1014ab80 FUN_1014ab80

void FUN_1014ab80(void)

{
  if (DAT_1035786c != (undefined4 *)0x0) {
    (**(code **)*DAT_1035786c)(1);
  }
  DAT_1035786c = (undefined4 *)0x0;
  return;
}


// ==== 1014aba0 FUN_1014aba0

void FUN_1014aba0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020b5b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1014abf0 FUN_1014abf0

void FUN_1014abf0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020b5e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1014ac40 FUN_1014ac40

void FUN_1014ac40(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1020b61b;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_103554c4 ^ (uint)auStack_10);
  ExceptionList = &local_c;
  uVar3 = 0x10;
  iVar2 = (**(code **)**(undefined4 **)GMalloc_exref)(0x10,&DAT_1022f8a0);
  local_c = (void *)0x0;
  if (iVar2 != 0) {
    FUN_101b79d0(uVar3,iVar2);
  }
  ExceptionList = pvVar1;
  return;
}


// ==== 1014acb0 FUN_1014acb0

UObject * FUN_1014acb0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = APawn::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1014ace0 FUN_1014ace0

UObject * FUN_1014ace0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = ALineagePlayerController::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1014ad10 FUN_1014ad10

FString * FUN_1014ad10(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020b65a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return param_1;
}


// ==== 1014ad70 FUN_1014ad70

void FUN_1014ad70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1036e698,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1014ada0 FUN_1014ada0

void FUN_1014ada0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_10368300,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1014add0 FUN_1014add0

void FUN_1014add0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103b1770,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1014ae00 FUN_1014ae00

FString * FUN_1014ae00(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020b69a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x58));
  ExceptionList = local_c;
  return param_1;
}


// ==== 1014ae60 FUN_1014ae60

void FUN_1014ae60(void)

{
  undefined2 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020b6cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 0x200));
  *in_ECX = 0;
  in_ECX[0x100] = 0;
  in_ECX[0x206] = 0;
  *(undefined4 *)(in_ECX + 0x246) = 0;
  *(undefined4 *)(in_ECX + 0x248) = 0;
  *(undefined4 *)(in_ECX + 0x24a) = 0;
  *(undefined4 *)(in_ECX + 0x24c) = 0;
  *(undefined4 *)(in_ECX + 0x24e) = 0;
  *(undefined4 *)(in_ECX + 0x250) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x252) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x254) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x256) = 0;
  *(undefined4 *)(in_ECX + 600) = 0;
  *(undefined4 *)(in_ECX + 0x25a) = 0;
  *(undefined4 *)(in_ECX + 0x260) = 0;
  *(undefined4 *)(in_ECX + 0x268) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x25c) = 0;
  *(undefined4 *)(in_ECX + 0x25e) = 0;
  *(undefined4 *)(in_ECX + 0x262) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1014af30 FUN_1014af30

void FUN_1014af30(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1020b6ff;
  local_c = ExceptionList;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 0;
  piVar2 = (int *)(in_ECX + 0x490);
  iVar3 = 4;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xc))(1,uVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x400));
  ExceptionList = local_c;
  return;
}


// ==== 1014afc0 FUN_1014afc0

void FUN_1014afc0(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[0x100] = 0;
  in_ECX[0x200] = 0;
  in_ECX[0xa00] = 0;
  *(undefined4 *)(in_ECX + 0xa40) = 0;
  *(undefined4 *)(in_ECX + 0xa42) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xa44) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xa46) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xa48) = 0;
  *(undefined4 *)(in_ECX + 0xa4a) = 0;
  *(undefined4 *)(in_ECX + 0xa4c) = 0;
  *(undefined4 *)(in_ECX + 0xa50) = 0;
  *(undefined4 *)(in_ECX + 0xa54) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xa52) = 0;
  *(undefined4 *)(in_ECX + 0xa4e) = 0xffffffff;
  return;
}


// ==== 1014b030 FUN_1014b030

void FUN_1014b030(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[0x100] = 0;
  in_ECX[0x200] = 0;
  *(undefined4 *)(in_ECX + 0xa00) = 0;
  *(undefined4 *)(in_ECX + 0xa02) = 0;
  *(undefined4 *)(in_ECX + 0xa04) = 0;
  *(undefined4 *)(in_ECX + 0xa06) = 0;
  *(undefined4 *)(in_ECX + 0xa08) = 0;
  *(undefined4 *)(in_ECX + 0xa0a) = 0;
  *(undefined4 *)(in_ECX + 0xa0c) = 0;
  return;
}


// ==== 1014b070 FUN_1014b070

void FUN_1014b070(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1d0) = param_2;
  *(undefined4 *)(in_ECX + 0x1d4) = param_1;
  *(undefined4 *)(in_ECX + 0x1cc) = 1;
  (**(code **)(**(int **)(in_ECX + 0x1e0) + 0x13c))();
  (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x174))();
  (**(code **)(**(int **)(in_ECX + 0x1e4) + 0x78))();
  return;
}


// ==== 1014b0d0 FUN_1014b0d0

void FUN_1014b0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_1039dff0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1014b100 FUN_1014b100

void FUN_1014b100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&DAT_103709e0,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1014b130 FUN_1014b130

void FUN_1014b130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = 0;
  in_ECX[4] = param_3;
  return;
}


// ==== 1014b160 FUN_1014b160

undefined4 FUN_1014b160(float param_1)

{
  float fVar1;
  int in_ECX;
  
  param_1 = param_1 + *(float *)(in_ECX + 0xc);
  *(float *)(in_ECX + 0xc) = param_1;
  fVar1 = (float)*(int *)(in_ECX + 4);
  if (*(int *)(in_ECX + 4) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (fVar1 / 1000.0 < param_1) {
    *(float *)(in_ECX + 0xc) = param_1 - fVar1 / 1000.0;
    return 1;
  }
  return 0;
}


// ==== 1014b1b0 FUN_1014b1b0

void FUN_1014b1b0(void)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020b783;
  local_c = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&stack0xffffffec;
  if (*(int *)GL2UseGameGuard_exref == 0) {
    return;
  }
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  if (*(int *)GL2ReplayMode_exref != 0) {
    ExceptionList = pvVar1;
    return;
  }
  if (*(int *)GIsEditor_exref != 0) {
    ExceptionList = pvVar1;
    return;
  }
  if (*(int *)GIsUCC_exref != 0) {
    ExceptionList = pvVar1;
    return;
  }
  iVar3 = *(int *)GLanguageType_exref;
  if (iVar3 == 0) {
    if (*(int *)GL2TestServer_exref == 0) {
      iVar3 = FUN_10004ed0(1,uVar2);
      local_4 = 1;
      if (iVar3 != 0) {
        uVar4 = FUN_10141070(L"Lineage2");
        goto LAB_1014b3d0;
      }
    }
    else {
      iVar3 = FUN_10004ed0(1,uVar2);
      local_4 = 0;
      if (iVar3 != 0) {
        uVar4 = FUN_10141070(L"Lineage2Test");
        goto LAB_1014b3d0;
      }
    }
  }
  else if (iVar3 == 3) {
    iVar3 = FUN_10004ed0(1,uVar2);
    local_4 = 2;
    if (iVar3 != 0) {
      uVar4 = FUN_10141070(L"Lineage2tw");
      goto LAB_1014b3d0;
    }
  }
  else if (iVar3 == 4) {
    iVar3 = FUN_10004ed0(1,uVar2);
    local_4 = 3;
    if (iVar3 != 0) {
      uVar4 = FUN_10141070(L"Lineage2cn");
      goto LAB_1014b3d0;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = FUN_10004ed0(1,uVar2);
    local_4 = 4;
    if (iVar3 != 0) {
      uVar4 = FUN_10141070(L"Lineage2us");
      goto LAB_1014b3d0;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = FUN_10004ed0(1,uVar2);
    local_4 = 5;
    if (iVar3 != 0) {
      uVar4 = FUN_10141070(L"Lineage2jp");
      goto LAB_1014b3d0;
    }
  }
  else if (iVar3 == 5) {
    iVar3 = FUN_10004ed0(1,uVar2);
    local_4 = 6;
    if (iVar3 != 0) {
      uVar4 = FUN_10141070(L"Lineage2th");
      goto LAB_1014b3d0;
    }
  }
  else if (iVar3 == 6) {
    iVar3 = FUN_10004ed0(1,uVar2);
    local_4 = 7;
    if (iVar3 != 0) {
      uVar4 = FUN_10141070(L"Lineage2ph");
      goto LAB_1014b3d0;
    }
  }
  else {
    iVar3 = FUN_10004ed0(1,uVar2);
    local_4 = 8;
    if (iVar3 != 0) {
      uVar4 = FUN_10141070(L"Lineage2");
      goto LAB_1014b3d0;
    }
  }
  uVar4 = 0;
LAB_1014b3d0:
  *in_ECX = uVar4;
  ExceptionList = local_c;
  return;
}


// ==== 1014b3f0 FUN_1014b3f0

void FUN_1014b3f0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b7a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5144) != 0) {
    FUN_10024ca0(*(int *)(in_ECX + 0x5144));
    *(undefined4 *)(in_ECX + 0x5144) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014b45a Catch@1014b45a

void Catch_1014b45a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014b46e Catch@1014b46e

void Catch_1014b46e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ClearLobbySelectedCharacterInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b490 FUN_1014b490

void FUN_1014b490(byte param_1)

{
  FUN_10049830();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1014b4c0 FUN_1014b4c0

void FUN_1014b4c0(byte param_1)

{
  FUN_10041cf0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1014b4f0 FUN_1014b4f0

void FUN_1014b4f0(byte param_1)

{
  FUN_1000ca50();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1014b520 FUN_1014b520

void FUN_1014b520(byte param_1)

{
  FUN_101b2fb0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1014b550 FUN_1014b550

void FUN_1014b550(byte param_1)

{
  FUN_10136290();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1014b580 FUN_1014b580

void FUN_1014b580(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 0x50ac) != 0) &&
       (iVar1 = *(int *)(*(int *)(in_ECX + 0x50ac) + 0x218), iVar1 != 0)) &&
      (iVar1 = *(int *)(iVar1 + 0x1cc), iVar1 != 0)) &&
     (piVar2 = *(int **)(iVar1 + 0x1cc), piVar2 != (int *)0x0)) {
    if (param_2 == 0x50b) {
      (**(code **)*piVar2)(param_3,param_4);
      return;
    }
    if (param_2 == 0x50c) {
      (**(code **)(*piVar2 + 4))(param_3,param_4);
    }
  }
  return;
}


// ==== 1014b5f0 FUN_1014b5f0

void FUN_1014b5f0(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x50cc) <= iVar2) {
      return;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x50c8) + iVar2 * 0x14);
    if (((*piVar1 == param_1) && (piVar1[4] == param_2)) && (piVar1[2] == 0)) break;
    iVar2 = iVar2 + 1;
  }
  piVar1[2] = 1;
  return;
}


// ==== 1014b66e Catch@1014b66e

void Catch_1014b66e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014b682 Catch@1014b682

void Catch_1014b682(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::NKillTimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b6a0 FUN_1014b6a0

undefined4 FUN_1014b6a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x74);
}


// ==== 1014b6f2 Catch@1014b6f2

void Catch_1014b6f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014b706 Catch@1014b706

void Catch_1014b706(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetCanvasPointer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b730 FUN_1014b730

void FUN_1014b730(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c);
  if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x3bc), iVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = *(undefined4 *)(iVar1 + 0x1bc);
    param_1[1] = *(undefined4 *)(iVar1 + 0x1c0);
    param_1[2] = *(undefined4 *)(iVar1 + 0x1c4);
  }
  return;
}


// ==== 1014b7c0 Catch@1014b7c0

void Catch_1014b7c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014b7d4 Catch@1014b7d4

void Catch_1014b7d4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetPlayerPawnPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b800 FUN_1014b800

void FUN_1014b800(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c);
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = *(undefined4 *)(iVar1 + 0x1bc);
    param_1[1] = *(undefined4 *)(iVar1 + 0x1c0);
    param_1[2] = *(undefined4 *)(iVar1 + 0x1c4);
  }
  return;
}


// ==== 1014b883 Catch@1014b883

void Catch_1014b883(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014b897 Catch@1014b897

void Catch_1014b897(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetCameraPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b8c0 FUN_1014b8c0

void FUN_1014b8c0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1014ace0(*(undefined4 *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c));
  ExceptionList = local_10;
  return;
}


// ==== 1014b91b Catch@1014b91b

void Catch_1014b91b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014b92f Catch@1014b92f

void Catch_1014b92f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GetPlayerController");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b950 FUN_1014b950

void FUN_1014b950(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b860;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x50ac) != 0) && (*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1dc) != 0)) {
    FUN_1014b070(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014b9c0 Catch@1014b9c0

void Catch_1014b9c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014b9d4 Catch@1014b9d4

void Catch_1014b9d4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::CardKeyLoginStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ba00 FUN_1014ba00

void FUN_1014ba00(L2ParamStack *param_1)

{
  int iVar1;
  void *pvVar2;
  UL2ConsoleWnd *in_ECX;
  FString aFStack_3c [4];
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020b89b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x5100) == 0) {
    iVar1 = FString::Len((FString *)(GL2GameData_exref + 0x7cb94));
    if (iVar1 < 1) {
      if (*(int *)GLanguageType_exref == 4) {
        FString::FString(aFStack_3c,(ushort *)L"ChinaWarnMsgState");
        local_8 = local_8 & 0xffffff00;
        FUN_10070110();
        iVar1 = *(int *)(*(int *)(in_ECX + 0x50ac) + 0x1dc);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x1cc) = 0;
          *(undefined4 *)(iVar1 + 0x1d4) = 0;
          *(undefined4 *)(iVar1 + 0x1d0) = 0;
        }
        pvVar2 = L2ParamStack::Top(param_1);
        *(void **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1ec) + 0x1d4) = pvVar2;
        L2ParamStack::Top(param_1);
        uStack_38 = 0x1014bbe7;
        FUN_101a94e0();
        uStack_38 = 0x1014bbf1;
        UL2ConsoleWnd::SetState(in_ECX,2);
      }
      else {
        FString::FString(aFStack_3c,(ushort *)L"ServerListState");
        local_8 = local_8 & 0xffffff00;
        FUN_10070110();
        iVar1 = *(int *)(*(int *)(in_ECX + 0x50ac) + 0x1dc);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x1cc) = 0;
          *(undefined4 *)(iVar1 + 0x1d4) = 0;
          *(undefined4 *)(iVar1 + 0x1d0) = 0;
        }
        L2ParamStack::Top(param_1);
        uStack_38 = 0x1014bc59;
        FUN_101a94e0();
        (**(code **)(*(int *)in_ECX + 0x7bc))();
      }
    }
    else {
      FString::FString(aFStack_3c,(ushort *)L"EulaMsgState");
      local_8 = local_8 & 0xffffff00;
      FUN_10070110();
      iVar1 = *(int *)(*(int *)(in_ECX + 0x50ac) + 0x1dc);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x1cc) = 0;
        *(undefined4 *)(iVar1 + 0x1d4) = 0;
        *(undefined4 *)(iVar1 + 0x1d0) = 0;
      }
      if (*(int *)GL2TestServer_exref == 0) {
        FString::operator*((FString *)(GL2GameData_exref + 0x7cb94));
      }
      else {
        FString::operator*((FString *)(GL2GameData_exref + 0x7cba0));
      }
      uStack_38 = 0x1014bafb;
      FUN_1018f440();
      pvVar2 = L2ParamStack::Top(param_1);
      *(void **)(*(int *)(*(int *)(in_ECX + 0x50ac) + 0x1e8) + 0x1dc) = pvVar2;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50ac) + 0x1e8) + 0x78))();
      L2ParamStack::Top(param_1);
      uStack_38 = 0x1014bb49;
      FUN_101a94e0();
      uStack_38 = 0x1014bb53;
      UL2ConsoleWnd::SetState(in_ECX,2);
    }
  }
  else {
    uStack_38 = 0x1014ba46;
    (**(code **)(*(int *)in_ECX + 0x7fc))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014bc80 Catch@1014bc80

void Catch_1014bc80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014bc94 Catch@1014bc94

void Catch_1014bc94(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveNotice");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014bcc0 FUN_1014bcc0

void FUN_1014bcc0(int param_1)

{
  FString *this;
  int iVar1;
  code *pcVar2;
  int *in_ECX;
  uint uStack_bc;
  FString local_ac [20];
  undefined1 *local_98;
  void *local_94;
  undefined1 *puStack_90;
  int local_8c;
  ushort local_88;
  undefined1 local_86 [126];
  uint local_8;
  
  puStack_90 = &LAB_1020b8c9;
  local_94 = ExceptionList;
  uStack_bc = DAT_103554c4 ^ (uint)&local_88;
  local_98 = (undefined1 *)&uStack_bc;
  ExceptionList = &local_94;
  local_8c = 0;
  local_8 = uStack_bc;
  this = (FString *)(**(code **)(*in_ECX + 0x784))(local_ac);
  local_8c._0_1_ = 1;
  iVar1 = FString::operator==(this,(ushort *)L"GamingState");
  local_8c = (uint)local_8c._1_3_ << 8;
  FString::~FString(local_ac);
  if (iVar1 == 0) {
    FUN_101454e0();
    FUN_1017dc20();
    if (param_1 == 0) {
      local_88 = 0;
      _memset(local_86,0,0x7e);
      pcVar2 = GCountryCode_exref;
      if (*(int *)GIsNative_exref == 0) {
        pcVar2 = (code *)&DAT_10280bbc;
      }
      appSprintf(&local_88,(ushort *)L"SystemMsg_%s.char_start",pcVar2);
      FUN_101481d0(&local_88);
    }
    (**(code **)(*in_ECX + 0x7fc))(6);
    local_8c = -1;
  }
  ExceptionList = local_94;
  __security_check_cookie(local_8 ^ (uint)&local_88);
  return;
}


// ==== 1014bdd7 Catch@1014bdd7

void Catch_1014bdd7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014bdeb Catch@1014bdeb

void Catch_1014bdeb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::ReceiveCharacterInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014be10 FUN_1014be10

void FUN_1014be10(void)

{
  int iVar1;
  UL2ConsoleWnd *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020b909;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x50ac) == 0) {
    appFailAssert("m_pConsole",".\\Src\\NConsoleWindow.cpp",0x91c);
  }
  if (**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) == 0) {
    appFailAssert("m_Engine->Client->Viewports(0)",".\\Src\\NConsoleWindow.cpp",0x922);
  }
  if (*(int *)(*(int *)(in_ECX + 0x50) + 0x5c) == 0) {
    appFailAssert("m_Engine->GRenDev",".\\Src\\NConsoleWindow.cpp",0x923);
  }
  FUN_101496a0();
  if (*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x94) !=
      *(int *)GSEKScreenX_exref) {
    iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x5c) + 0x70))
                      (**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38),
                       *(int *)GSEKScreenX_exref,*(undefined4 *)GSEKScreenY_exref,
                       (int)(*(int *)GColorBits_exref + (*(int *)GColorBits_exref >> 0x1f & 7U)) >>
                       3);
    if (iVar1 != 0) {
      *(undefined4 *)GSEKScreenX_exref =
           *(undefined4 *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x94);
      *(undefined4 *)GSEKScreenY_exref =
           *(undefined4 *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x98);
    }
  }
  UL2ConsoleWnd::SetState(in_ECX,5);
  FString::FString((FString *)&stack0xffffffc4,(ushort *)L"GamingState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  ExceptionList = local_10;
  return;
}


// ==== 1014bf96 Catch@1014bf96

void Catch_1014bf96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1014bfaa Catch@1014bfaa

void Catch_1014bfaa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AcceptGameStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014bfd0 FUN_1014bfd0

void FUN_1014bfd0(int param_1)

{
  int iVar1;
  UL2ConsoleWnd *in_ECX;
  void *local_94;
  undefined1 *puStack_90;
  uint local_8c;
  ushort local_88;
  undefined1 local_86 [126];
  uint local_8;
  
  puStack_90 = &LAB_1020b939;
  local_94 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)&local_88;
  ExceptionList = &local_94;
  local_8c = 0;
  if (param_1 == 0) {
    UL2ConsoleWnd::SetState(in_ECX,4);
    iVar1 = *(int *)in_ECX;
    FString::operator*((FString *)(GL2GameData_exref + 0x26eec));
    (**(code **)(iVar1 + 0x658))();
  }
  else {
    FString::FString((FString *)&stack0xffffff40,(ushort *)L"CharacterCreateState");
    local_8c = local_8c & 0xffffff00;
    FUN_10070110();
    (**(code **)(*(int *)in_ECX + 0x5c4))();
    UL2ConsoleWnd::SetState(in_ECX,3);
    local_88 = 0;
    _memset(local_86,0,0x7e);
    appSprintf(&local_88,(ushort *)L"SystemMsg_%s.char_creation");
    FUN_101481d0();
  }
  local_8c = 0xffffffff;
  ExceptionList = local_94;
  __security_check_cookie(local_8 ^ (uint)&local_88);
  return;
}


// ==== 1014c101 Catch@1014c101

void Catch_1014c101(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014c115 Catch@1014c115

void Catch_1014c115(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AcceptNewCharacter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c140 FUN_1014c140

void FUN_1014c140(int param_1)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  int *in_ECX;
  void *local_94;
  undefined1 *puStack_90;
  undefined4 local_8c;
  ushort local_88;
  undefined1 local_86 [126];
  uint local_8;
  
  puStack_90 = &LAB_1020b970;
  local_94 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)&local_88;
  ExceptionList = &local_94;
  local_8c = 0;
  if (param_1 == 0) {
    iVar1 = *in_ECX;
    puVar2 = FString::operator*((FString *)(GL2GameData_exref + 0x26eec));
    (**(code **)(iVar1 + 0x658))(puVar2);
  }
  else {
    local_88 = 0;
    _memset(local_86,0,0x7e);
    pcVar3 = GCountryCode_exref;
    if (*(int *)GIsNative_exref == 0) {
      pcVar3 = (code *)&DAT_10280bbc;
    }
    appSprintf(&local_88,(ushort *)L"SystemMsg_%s.char_lobby",pcVar3);
    FUN_101481d0(&local_88);
  }
  local_8c = 0xffffffff;
  ExceptionList = local_94;
  __security_check_cookie(local_8 ^ (uint)&local_88);
  return;
}


// ==== 1014c226 Catch@1014c226

void Catch_1014c226(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014c23a Catch@1014c23a

void Catch_1014c23a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::AcceptCharacterCreate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c260 FUN_1014c260

void FUN_1014c260(int param_1)

{
  uint *puVar1;
  ALevelInfo *pAVar2;
  int iVar3;
  int *in_ECX;
  FURL aFStack_10c [56];
  undefined4 uStack_d4;
  wchar_t *pwVar4;
  uint uStack_c0;
  FURL local_b0 [68];
  undefined1 *local_6c;
  void *local_68;
  undefined1 *puStack_64;
  int local_60;
  FURL local_5c [72];
  FString local_14 [16];
  
  puStack_64 = &LAB_1020b9c4;
  local_68 = ExceptionList;
  uStack_c0 = DAT_103554c4 ^ (uint)local_5c;
  local_6c = (undefined1 *)&uStack_c0;
  ExceptionList = &local_68;
  local_60 = 0;
  puVar1 = &uStack_c0;
  if (*(int *)(*(int *)(in_ECX[0x142b] + 0x1f8) + 0x1cc) != 0) {
    FUN_1017da10();
    puVar1 = (uint *)local_6c;
  }
  local_6c = (undefined1 *)puVar1;
  if (param_1 == 0x1e) {
    pwVar4 = L"Lobby";
    pAVar2 = ULevel::GetLevelInfo(*(ULevel **)(in_ECX[0x14] + 0x19c));
    FStringNoInit::operator=((FStringNoInit *)(pAVar2 + 0x628),(ushort *)pwVar4);
    FUN_1014a4e0();
  }
  else {
    FString::FString(local_14);
    local_60._0_1_ = 1;
    FURL::FURL(local_b0,(ushort *)0x0);
    local_60._0_1_ = 2;
    FURL::LoadURLConfig(local_b0,(ushort *)L"DefaultPlayer",(ushort *)L"User");
    FURL::FURL(local_5c,local_b0,(ushort *)L"Lobby",1);
    local_60._0_1_ = 3;
    FURL::AddOption(local_5c,(ushort *)L"L2Restart");
    FURL::FURL(aFStack_10c,local_5c);
    local_60 = CONCAT31(local_60._1_3_,3);
    iVar3 = (**(code **)(*(int *)in_ECX[0x14] + 200))();
    if (iVar3 == 0) {
      FString::operator*(local_14);
      uStack_d4 = 0x1014c38b;
      LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
    }
    local_60._0_1_ = 2;
    FURL::~FURL(local_5c);
    local_60._0_1_ = 1;
    FURL::~FURL(local_b0);
    local_60 = (uint)local_60._1_3_ << 8;
    FString::~FString(local_14);
  }
  (**(code **)(*in_ECX + 0x7fc))();
  ExceptionList = local_68;
  return;
}


// ==== 1014c3f3 Catch@1014c3f3

void Catch_1014c3f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x54) = *(undefined4 *)(unaff_EBP + 0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x54,&DAT_102a47f0);
}


// ==== 1014c407 Catch@1014c407

void Catch_1014c407(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RestartEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c430 FUN_1014c430

void FUN_1014c430(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 auStack_80 [15];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  uint uStack_38;
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020b9e0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_3c = local_28;
  local_40 = 0x1014c46d;
  FUN_1014b730();
  iVar1 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
  local_44 = in_stack_00000040;
  local_40 = in_stack_00000044;
  local_3c = (undefined1 *)in_stack_00000048;
  puVar3 = auStack_80;
  for (iVar2 = 0xf; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)register0x00000010;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(iVar1 + 0x188))();
  ExceptionList = local_10;
  return;
}


// ==== 1014c4b8 Catch@1014c4b8

void Catch_1014c4b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014c4cc Catch@1014c4cc

void Catch_1014c4cc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::RequestDropItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c4f0 FUN_1014c4f0

void FUN_1014c4f0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ushort *puVar3;
  FString aFStack_50 [4];
  undefined4 uStack_4c;
  uint uStack_44;
  FString local_34 [16];
  undefined1 *local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1020ba12;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_101b0200();
  pvVar1 = L2ParamStack::Top(param_1);
  for (local_18 = 0; local_18 < (int)pvVar1; local_18 = local_18 + 1) {
    pvVar2 = L2ParamStack::Top(param_1);
    L2ParamStack::Top(param_1);
    uStack_4c = 0x1014c561;
    puVar3 = (ushort *)FUN_10146110();
    uStack_4c = 0x1014c56b;
    FString::FString(local_34,puVar3);
    local_8._0_1_ = 1;
    local_24 = aFStack_50;
    FString::FString(aFStack_50,local_34);
    local_8._0_1_ = 1;
    FUN_101afa10(pvVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_34);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014c5c8 Catch@1014c5c8

void Catch_1014c5c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1014c5dc Catch@1014c5dc

void Catch_1014c5dc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::OnSendManorList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014c600 FUN_1014c600

void FUN_1014c600(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uchar uVar6;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c) +
                  0x3bc);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c4);
    uVar3 = *(undefined4 *)(iVar1 + 0x1bc);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c0);
    piVar5 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
    iVar1 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
    uVar6 = UInput::KeyDown(*(UInput **)(*piVar5 + 0x78),0x10);
    (**(code **)(iVar1 + 0x100))
              (*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x3c) + 0x3bc) + 0x60),uVar3,uVar4,uVar2,
               uVar6);
  }
  return;
}


// ==== 1014c6a0 FUN_1014c6a0

void FUN_1014c6a0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar uVar6;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
  iVar2 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x1bc);
    uVar4 = *(undefined4 *)(iVar2 + 0x1c0);
    uVar5 = *(undefined4 *)(iVar2 + 0x1c4);
    iVar2 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
    uVar6 = UInput::KeyDown(*(UInput **)(*piVar1 + 0x78),0x10);
    (**(code **)(iVar2 + 0x100))(param_1,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1014c720 FUN_1014c720

void FUN_1014c720(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  undefined4 *puVar5;
  int in_ECX;
  
  puVar5 = (undefined4 *)
           (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x414))((float)param_1,param_2)
  ;
  if ((puVar5 != (undefined4 *)0x0) && (puVar5 != (undefined4 *)0xfffffff0)) {
    piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
    iVar2 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
    uVar4 = UInput::KeyDown(*(UInput **)(*piVar1 + 0x78),0x10);
    iVar3 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
    (**(code **)(iVar2 + 0x100))
              (*puVar5,*(undefined4 *)(iVar3 + 0x1bc),*(undefined4 *)(iVar3 + 0x1c0),
               *(undefined4 *)(iVar3 + 0x1c4),uVar4);
  }
  return;
}


// ==== 1014c7c0 FUN_1014c7c0

void FUN_1014c7c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  int iVar5;
  int in_ECX;
  
  iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x420))((float)param_1,param_2);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x204) != 0)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x194) = 1;
    piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
    iVar2 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
    uVar4 = UInput::KeyDown(*(UInput **)(*piVar1 + 0x78),0x10);
    iVar3 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
    (**(code **)(iVar2 + 0x100))
              (*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar3 + 0x1bc),
               *(undefined4 *)(iVar3 + 0x1c0),*(undefined4 *)(iVar3 + 0x1c4),uVar4);
  }
  return;
}


// ==== 1014c870 FUN_1014c870

void FUN_1014c870(undefined4 param_1)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  iVar3 = FUN_10145910(param_1);
  if ((((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x204), iVar4 != 0)) &&
      (*(int *)(iVar4 + 0x14d8) != 0)) &&
     (iVar4 = (**(code **)(**(int **)(iVar4 + 0x14d8) + 0x35c))(), iVar4 != 0)) {
    iVar4 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x204) + 0x14d8) + 0x35c))();
    iVar4 = FUN_10145910(*(undefined4 *)(iVar4 + 0x60));
    if (iVar4 == 0) {
      iVar4 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
      iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x204) + 0x14d8) + 0x35c))();
      iVar3 = (**(code **)(iVar4 + 0x9c))(*(undefined4 *)(iVar3 + 0x60));
      if (iVar3 == 0) {
        return;
      }
      uVar5 = *(undefined4 *)(iVar3 + 8);
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
      iVar3 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
      uVar2 = UInput::KeyDown(*(UInput **)(*piVar1 + 0x78),0x10);
      iVar4 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0x18);
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
      iVar3 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
      uVar2 = UInput::KeyDown(*(UInput **)(*piVar1 + 0x78),0x10);
      iVar4 = *(int *)(*(int *)(*piVar1 + 0x3c) + 0x3bc);
    }
    (**(code **)(iVar3 + 0x100))
              (uVar5,*(undefined4 *)(iVar4 + 0x1bc),*(undefined4 *)(iVar4 + 0x1c0),
               *(undefined4 *)(iVar4 + 0x1c4),uVar2);
  }
  return;
}


// ==== 1014c9b0 FUN_1014c9b0

void FUN_1014c9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uchar uVar2;
  int in_ECX;
  
  iVar1 = **(int **)(*(int *)(in_ECX + 0x50) + 0x60);
  uVar2 = UInput::KeyDown(*(UInput **)
                           (**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x78),0x10
                         );
  (**(code **)(iVar1 + 0x100))(param_1,param_2,param_3,param_4,uVar2);
  return;
}


// ==== 1014ca10 FUN_1014ca10

void FUN_1014ca10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,uint param_6)

{
  FLandMark *this;
  uchar uVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  code *pcVar4;
  
  if (*(int *)(in_ECX[0x14] + 0x194) == 0) {
    iVar3 = (**(code **)(*in_ECX + 0x590))();
    if (iVar3 != 0) {
      param_5 = (**(code **)(*in_ECX + 0x590))();
    }
    uVar1 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38) + 0x78),
                            0x10);
    if (uVar1 != '\0') {
      bVar2 = UInput::KeyDown(*(UInput **)(**(int **)(*(int *)(in_ECX[0x14] + 0x54) + 0x38) + 0x78),
                              0x10);
      param_6 = (uint)bVar2;
    }
    if (param_5 == 0) {
      pcVar4 = *(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0x100);
      param_6 = param_6 & 0xff;
    }
    else {
      pcVar4 = *(code **)(**(int **)(in_ECX[0x14] + 0x60) + 0xe8);
    }
    (*pcVar4)(param_1,param_2,param_3,param_4,param_6);
    if ((in_ECX[0x14] != 0) &&
       (this = *(FLandMark **)(in_ECX[0x14] + 0x2fc), this != (FLandMark *)0x0)) {
      FLandMark::DeleteLandMark(this,0);
    }
  }
  return;
}


// ==== 1014cae0 FUN_1014cae0

/* WARNING: Type propagation algorithm not settling */

void FUN_1014cae0(ushort *param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  bool bVar7;
  ushort *local_a28;
  int local_a24;
  L2ParamStack local_a20 [16];
  ushort local_a10 [256];
  ushort local_810;
  undefined1 local_80e [2046];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020ba3c;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_a28;
  uVar3 = DAT_103554c4 ^ (uint)&stack0xfffff5cc;
  ExceptionList = &local_c;
  local_a28 = param_1;
  bVar2 = false;
  iVar4 = ParseCommand(&local_a28,(ushort *)L"BYPASS");
  if (iVar4 == 0) {
    (**(code **)(**(int **)(local_a24 + 0x50ac) + 500))(param_1,param_2,uVar3);
  }
  else {
    local_810 = 0;
    _memset(local_80e,0,0x7fe);
    L2ParamStack::L2ParamStack(local_a20,10);
    local_4 = 0;
    iVar4 = ParseToken(&local_a28,local_a10,0x100,1);
    if (iVar4 != 0) {
      do {
        if (bVar2) {
LAB_1014cbeb:
          if (local_a10[0] == 0x24) {
            if ((param_2 != (int *)0x0) &&
               (puVar5 = (ushort *)(**(code **)(*param_2 + 0x200))(local_a10 + 1),
               puVar5 != (ushort *)0x0)) {
              if (local_810 != 0) goto LAB_1014cc79;
              appSprintf(&local_810,(ushort *)&DAT_1022dde0);
            }
          }
          else if (local_810 == 0) {
            appSprintf(&local_810,(ushort *)&DAT_1022dde0,local_a10);
          }
          else {
            puVar5 = local_a10;
LAB_1014cc79:
            appSprintf(&local_810,(ushort *)L"%s %s",&local_810,puVar5);
          }
        }
        else {
          puVar6 = &DAT_10280e4c;
          puVar5 = local_a10;
          do {
            uVar1 = *puVar5;
            bVar7 = uVar1 < *puVar6;
            if (uVar1 != *puVar6) {
LAB_1014cbda:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_1014cbdf;
            }
            if (uVar1 == 0) break;
            uVar1 = puVar5[1];
            bVar7 = uVar1 < puVar6[1];
            if (uVar1 != puVar6[1]) goto LAB_1014cbda;
            puVar5 = puVar5 + 2;
            puVar6 = puVar6 + 2;
          } while (uVar1 != 0);
          iVar4 = 0;
LAB_1014cbdf:
          if (iVar4 != 0) goto LAB_1014cbeb;
          bVar2 = true;
        }
        iVar4 = ParseToken(&local_a28,local_a10,0x100,1);
      } while (iVar4 != 0);
      L2ParamStack::PushBack(local_a20,&local_810);
      if (param_2[0x85] == 1) {
        FUN_10144c00(local_a20);
      }
      else {
        FUN_10144a10(local_a20);
      }
    }
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_a20);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_a28);
  return;
}


// ==== 1014cd40 FUN_1014cd40

void FUN_1014cd40(void)

{
  int iVar1;
  UL2ConsoleWnd *in_ECX;
  FString aFStack_44 [4];
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1020ba79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1013ca20();
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x2b4))();
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x60) + 0x308))();
  (**(code **)(*(int *)in_ECX + 0x5c4))();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x50ac) + 0x1dc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
    *(undefined4 *)(iVar1 + 0x1d4) = 0;
    *(undefined4 *)(iVar1 + 0x1d0) = 0;
  }
  uStack_40 = 0x1014cdd8;
  UL2ConsoleWnd::SetState(in_ECX,2);
  FString::FString(aFStack_44,(ushort *)L"LoginState");
  local_8 = local_8 & 0xffffff00;
  FUN_10070110();
  ExceptionList = local_10;
  return;
}


// ==== 1014ce1c Catch@1014ce1c

void Catch_1014ce1c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014ce30 Catch@1014ce30

void Catch_1014ce30(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::GotoLogin");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014ce50 FUN_1014ce50

undefined4 FUN_1014ce50(void)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020baa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)GLanguageType_exref == 0) && (iVar3 = (**(code **)(*in_ECX + 0x6c))(), iVar3 != 0)) {
    ExceptionList = local_10;
    return 0;
  }
  if ((((in_ECX[0x14] != 0) && (iVar3 = *(int *)(in_ECX[0x14] + 0x54), iVar3 != 0)) &&
      (piVar1 = *(int **)(iVar3 + 0x38), *piVar1 != 0)) &&
     ((iVar3 = *piVar1, *(int *)(iVar3 + 0x78) != 0 &&
      (uVar2 = UInput::KeyDown(*(UInput **)(iVar3 + 0x78),0x11), uVar2 != '\0')))) {
    ExceptionList = local_10;
    return 1;
  }
  if (in_ECX[0x1439] != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1014cefc Catch@1014cefc

void Catch_1014cefc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014cf10 Catch@1014cf10

void Catch_1014cf10(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::IsPKMode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014cf30 FUN_1014cf30

undefined4 FUN_1014cf30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020bac0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x50) + 0x54);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    ExceptionList = &local_10;
    uVar2 = (*(code *)**(undefined4 **)(**(int **)(iVar1 + 0x38) + 0x38))
                      (param_1,*(undefined4 *)GLog_exref);
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}


// ==== 1014cfb6 Catch@1014cfb6

void Catch_1014cfb6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1014cfca Catch@1014cfca

void Catch_1014cfca(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"NConsoleWnd::PassCommandToUnreal");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


