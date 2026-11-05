// ==== 10400730 FUN_10400730 target=10c5104c callers=UNCONDITIONAL_CALL@1030a150
// strings: 1087e888=GameGuard Fail! \n Please Restart Lineage2 | 1087e830=(Receive)Game Guard Module Not Equal | 

uint FUN_10400730(void)

{
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e3f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)GL2Console + 0x80))(L"GameGuard Fail! \n Please Restart Lineage2",1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401220 FUN_10401220 target=10c5104c callers=UNCONDITIONAL_CALL@10309b38
// strings: 

uint FUN_10401220(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e4e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*(int *)GL2Console + 0x734))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040c450 FUN_1040c450 target=10c5104c callers=UNCONDITIONAL_CALL@1030105f
// strings: 10883db8=(Receive)LoginFailPacket2 errorcode:%d | 

uint FUN_1040c450(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint extraout_EAX;
  FOutputDevice *pFVar2;
  FOutputDevice *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e960;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = (FOutputDevice *)0x0;
  ExceptionList = &local_10;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087f9dc,&local_18);
  if (local_18 == (FOutputDevice *)0x1f) {
    pcVar1 = *(code **)(*(int *)GL2Console + 0x90);
    pFVar2 = (FOutputDevice *)0x1f;
  }
  else {
    appMemset((void *)(DAT_10b1f538 + 0xe8),0,0x80);
    *(undefined4 *)(DAT_10b1f538 + 0x50) = 0;
    thunk_FUN_10402b50();
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x38) = 0;
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4850) = 0;
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4854) = 0;
    *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x50bc) = 0;
    pcVar1 = *(code **)(*(int *)GL2Console + 0x90);
    pFVar2 = local_18;
  }
  (*pcVar1)(pFVar2);
  FOutputDevice::Logf(local_18,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040c5e0 FUN_1040c5e0 target=10c5104c callers=UNCONDITIONAL_CALL@103104ab
// strings: 10883e60=(Receive)AccountKickedPacketMerge | 10883e18=(Receive)AccountKickedPacket | 

uint FUN_1040c5e0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_EAX;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_1087ff44,&local_4,&local_8);
  *(undefined4 *)(DAT_10b1f538 + 0x50) = 0;
  iVar1 = *(int *)(DAT_10b1f538 + 0x4c);
  if (*(SOCKET *)(iVar1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4efc));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4850) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4854) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x50b8) = 1;
  iVar1 = (**(code **)(*(int *)GL2Console + 0x544))(local_8);
  if (iVar1 == 0) {
    (**(code **)(*(int *)GL2Console + 0x540))(local_8);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 1040c710 FUN_1040c710 target=10c5104c callers=UNCONDITIONAL_CALL@103091d3
// strings: 10883f24=dddddddd | 10883ef4=FobiddenServerFlag | 10883eb4=(Receive)LoginOkPacket  | 

uint FUN_1040c710(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint extraout_EAX;
  void *unaff_EBP;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [3];
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080e979;
  pvStack_c = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_20[0] = 0;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,"dddddddd",&DAT_10b20f34,
                             &DAT_10b20f38,&DAT_10b20f3c,&DAT_10b20f40,&local_2c,local_20,&local_24,
                             &local_28);
  pvVar2 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x10,L"FobiddenServerFlag");
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),uVar1,&DAT_10883ef0,0x10,pvVar2);
  iVar3 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2c8))(unaff_EBP);
  if (iVar3 != 0) {
    appMemset((void *)(DAT_10b1f538 + 0xe8),0,0x80);
    L2ParamStack::L2ParamStack((L2ParamStack *)&local_28,10);
    uStack_10 = 0;
    L2ParamStack::PushBack((L2ParamStack *)&local_28,unaff_EBP);
    L2ParamStack::PushBack((L2ParamStack *)&local_28,pvVar2);
    (**(code **)(*(int *)GL2Console + 0x94))(&local_28);
    uStack_10 = 0xffffffff;
    L2ParamStack::~L2ParamStack((L2ParamStack *)&local_28);
  }
  if (pvVar2 != (void *)0x0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(pvVar2);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_14;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040c930 FUN_1040c930 target=10c5104c callers=UNCONDITIONAL_CALL@103061c2
// strings: 10883f98=cddcchhcdc | 10883f38=(Receive)ServerListPacket ServerNum:%d | 

/* WARNING: Removing unreachable block (ram,0x1040c9c6) */
/* WARNING: Removing unreachable block (ram,0x1040c9d0) */
/* WARNING: Removing unreachable block (ram,0x1040cabd) */
/* WARNING: Removing unreachable block (ram,0x1040cac4) */
/* WARNING: Removing unreachable block (ram,0x1040ca9f) */
/* WARNING: Removing unreachable block (ram,0x1040caa6) */
/* WARNING: Removing unreachable block (ram,0x1040cad9) */
/* WARNING: Removing unreachable block (ram,0x1040cb00) */

uint FUN_1040c930(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080e999;
  pvStack_c = ExceptionList;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_44 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x4c),param_2,&DAT_10881a1c,&local_48,&local_44);
  (**(code **)(*(int *)GL2Console + 0xbc))(local_44);
  (**(code **)(*(int *)GL2Console + 0xc4))();
  FOutputDevice::Logf((FOutputDevice *)0x0,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040d250 FUN_1040d250 target=10c5104c callers=UNCONDITIONAL_CALL@10310555
// strings: 10884100=(Receive)NcpSay CreatureID : %d classid : %d Say Msg:%s | 

uint FUN_1040d250(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_428;
  void *local_424;
  void *local_420;
  L2ParamStack local_41c [16];
  undefined1 local_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e9dc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_10884188,&local_424,&local_420,
                     &local_428,0x400,local_40c);
  L2ParamStack::L2ParamStack(local_41c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_41c,local_424);
  L2ParamStack::PushBack(local_41c,local_420);
  L2ParamStack::PushBack(local_41c,local_428);
  L2ParamStack::PushBack(local_41c,local_40c);
  (**(code **)(*(int *)GL2Console + 0x5b8))(local_41c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_41c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1040fc8f Catch@1040fc8f target=10c5104c callers=DATA@1093eb74
// strings: 10884cf8=SdSddddddddddffdQddddddddddddddddddddddddddddddddddddddddddddddddffdddchh | 

void Catch_1040fc8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x44) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x44,&DAT_10914c48);
}


// ==== 10411260 FUN_10411260 target=10c5104c callers=UNCONDITIONAL_CALL@1031011d
// strings: 1088517c=dddhhhdhhhhd | 10885134=(Receive)GMViewItemListPacket | 

uint FUN_10411260(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  int iVar2;
  short unaff_BP;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [2];
  undefined1 local_6c [40];
  undefined2 auStack_44 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 auStack_c [3];
  
  local_7c = 0;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088518c,0x30,local_6c,
                             &local_78,local_74,&local_7c);
  (**(code **)(*(int *)GL2Console + 0x4f0))(local_74[0],local_78);
  iVar2 = 0;
  if (0 < unaff_BP) {
    do {
      auStack_44[0] = 0xffff;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xffffffff;
      uStack_14 = 0;
      uStack_10 = 0;
      auStack_c[0] = 0xffffffff;
      uStack_24 = 0;
      local_78 = 0xffffffff;
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1088494c,&local_78);
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddhhhdhhhhd",&uStack_40,
                                 &uStack_3c,&uStack_38,auStack_44,&uStack_28,&uStack_26,&uStack_2c,
                                 &uStack_24,&uStack_20,&uStack_14,&uStack_10,auStack_c);
      (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x540))(auStack_44);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_BP);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10414290 FUN_10414290 target=10c5104c callers=UNCONDITIONAL_CALL@10306a55
// strings: 10885e68=dddddhh | 10885dd0=(Receive) ShortCutRegisterPacket ShortCutType=%d RoomNum=%d | 

uint FUN_10414290(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  FOutputDevice *pFVar3;
  code *pcVar4;
  char local_4d;
  short local_4c [2];
  FOutputDevice *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ef99;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  iVar1 = param_1;
  local_4 = 0;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff44,&local_44,
                             &local_40);
  switch(local_44) {
  case (void *)0x1:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,"dddddhh",&local_3c,&local_48,&local_38,
                       &local_34,&local_30,&param_1,local_4c);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    L2ParamStack::PushBack(local_1c,local_3c);
    L2ParamStack::PushBack(local_1c,local_48);
    L2ParamStack::PushBack(local_1c,local_38);
    L2ParamStack::PushBack(local_1c,local_34);
    L2ParamStack::PushBack(local_1c,local_30);
    L2ParamStack::PushBack(local_1c,(void *)(int)(short)param_1);
    pFVar3 = (FOutputDevice *)(int)local_4c[0];
    break;
  case (void *)0x2:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_10885e60,&local_2c,&local_28,
                       &local_4d,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    L2ParamStack::PushBack(local_1c,local_2c);
    L2ParamStack::PushBack(local_1c,local_28);
    L2ParamStack::PushBack(local_1c,(void *)(int)local_4d);
    pFVar3 = local_48;
    break;
  case (void *)0x3:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_24,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    local_3c = local_24;
    goto LAB_104144cc;
  case (void *)0x4:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_20,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
    L2ParamStack::PushBack(local_1c,local_20);
    pFVar3 = local_48;
    break;
  case (void *)0x5:
    thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1087ff44,&local_3c,&local_48);
    pcVar4 = PushBack_exref;
    L2ParamStack::PushBack(local_1c,local_44);
    L2ParamStack::PushBack(local_1c,local_40);
LAB_104144cc:
    (*pcVar4)(local_3c);
    pFVar3 = local_48;
    break;
  default:
    goto switchD_104142f1_default;
  }
  (*pcVar4)(pFVar3);
switchD_104142f1_default:
  (**(code **)(*(int *)GL2Console + 0x2d4))(local_1c);
  FOutputDevice::Logf(local_48,*(ushort **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10414600 FUN_10414600 target=10c5104c callers=UNCONDITIONAL_CALL@10312ee0
// strings: 10885e68=dddddhh | 10885ed0=(Receive) ShortCutInitPacket | 

uint FUN_10414600(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint extraout_EAX;
  void *pvVar2;
  L2ParamStack local_6c [24];
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  void *local_3c;
  int local_38;
  int local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  short local_20 [2];
  short local_1c [3];
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080efb9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)DAT_10b1f538[0x15] + 0x400))();
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_38);
  local_34 = 0;
  do {
    if (local_38 <= local_34) {
      (**(code **)(*DAT_10b1f538 + 0x338))();
      FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
      ExceptionList = local_10;
      return extraout_EAX & 0xffffff00;
    }
    L2ParamStack::L2ParamStack(local_6c,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_28,
                               &local_2c);
    switch(local_28) {
    case (void *)0x1:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,"dddddhh",&local_30,&local_24
                                 ,&local_3c,&local_40,&local_44,local_1c,local_20);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_30);
      L2ParamStack::PushBack(local_6c,local_24);
      L2ParamStack::PushBack(local_6c,local_3c);
      L2ParamStack::PushBack(local_6c,local_40);
      L2ParamStack::PushBack(local_6c,local_44);
      L2ParamStack::PushBack(local_6c,(void *)(int)local_1c[0]);
      pvVar2 = (void *)(int)local_20[0];
      break;
    case (void *)0x2:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10885e60,&local_48,
                                 &local_4c,&local_15,&local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_48);
      L2ParamStack::PushBack(local_6c,local_4c);
      pvVar2 = (void *)(int)local_15;
      goto LAB_10414840;
    case (void *)0x3:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_50,
                                 &local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_50);
      pvVar2 = local_24;
      break;
    case (void *)0x4:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_54,
                                 &local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      L2ParamStack::PushBack(local_6c,local_54);
      pvVar2 = local_24;
      break;
    case (void *)0x5:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_30,
                                 &local_24);
      L2ParamStack::PushBack(local_6c,local_28);
      L2ParamStack::PushBack(local_6c,local_2c);
      pvVar2 = local_30;
LAB_10414840:
      L2ParamStack::PushBack(local_6c,pvVar2);
      pvVar2 = local_24;
      break;
    default:
      goto switchD_104146ab_default;
    }
    L2ParamStack::PushBack(local_6c,pvVar2);
switchD_104146ab_default:
    (**(code **)(*(int *)GL2Console + 0x2d4))(local_6c);
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_6c);
    local_34 = local_34 + 1;
  } while( true );
}


// ==== 104156d0 FUN_104156d0 target=10c5104c callers=UNCONDITIONAL_CALL@1030731f
// strings: 

uint FUN_104156d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint extraout_EAX;
  ushort local_674 [512];
  ushort local_274 [256];
  ushort *local_74;
  L2ParamStack local_6c [20];
  ushort *local_58;
  void *local_54 [2];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  void *local_3c;
  void *local_38;
  L2ParamStack local_34 [16];
  short local_24;
  short local_20 [2];
  ushort *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f0c2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff980;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_38);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_4c);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_18 = 0;
  do {
    if (local_4c <= local_18) {
      L2ParamStack::L2ParamStack(local_6c,10);
      local_8._0_1_ = 2;
      L2ParamStack::PushBack(local_6c,local_38);
      (**(code **)(*(int *)GL2Console + 0x354))(local_6c,0,0);
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_6c);
      ExceptionList = local_10;
      return extraout_EAX & 0xffffff00;
    }
    L2ParamStack::L2ParamStack(local_34,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
    L2ParamStack::PushBack(local_34,local_3c);
    switch(local_3c) {
    case (void *)0x0:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108847bc,0x400);
      puVar2 = local_674;
      break;
    case (void *)0x1:
    case (void *)0x2:
    case (void *)0x3:
    case (void *)0x5:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
      puVar2 = local_1c;
      break;
    case (void *)0x4:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,local_54);
      L2ParamStack::PushBack(local_34,local_54[0]);
      puVar2 = local_58;
      break;
    case (void *)0x6:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886380);
      puVar2 = local_74;
      break;
    case (void *)0x7:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff0c,&local_48,
                                 &local_44);
      puVar2 = FL2GameData::GetZoneName
                         (&GL2GameData,(float)local_48,(float)local_44,(float)local_40);
      appStrcpy(local_274,puVar2);
      puVar2 = local_274;
      break;
    case (void *)0x8:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886384,&local_1c,
                                 local_20);
      L2ParamStack::PushBack(local_34,local_1c);
      L2ParamStack::PushBack(local_34,(void *)(int)local_20[0]);
      puVar2 = (ushort *)(int)local_24;
      break;
    default:
      goto switchD_1041579d_default;
    }
    L2ParamStack::PushBack(local_34,puVar2);
switchD_1041579d_default:
    (**(code **)(*(int *)GL2Console + 0x350))();
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_34);
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 10418de0 FUN_10418de0 target=10c5104c callers=UNCONDITIONAL_CALL@1030bc53
// strings: 10886fd4=(Receive)ShowTownMapPacket | 

uint FUN_10418de0(int param_1,undefined4 param_2)

{
  uint extraout_EAX;
  void *local_824;
  void *local_820;
  L2ParamStack local_81c [16];
  undefined2 local_80c;
  undefined1 local_80a [2046];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f42c;
  pvStack_c = ExceptionList;
  local_80c = 0;
  ExceptionList = &pvStack_c;
  _memset(local_80a,0,0x7fe);
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1088424c,0x800,&local_80c,
                     &local_820,&local_824);
  L2ParamStack::L2ParamStack(local_81c,10);
  local_4 = 0;
  L2ParamStack::PushBack(local_81c,&local_80c);
  L2ParamStack::PushBack(local_81c,local_820);
  L2ParamStack::PushBack(local_81c,local_824);
  (**(code **)(*(int *)GL2Console + 0x638))(local_81c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_81c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 1041a090 FUN_1041a090 target=10c5104c callers=UNCONDITIONAL_CALL@10311e2d
// strings: 

uint FUN_1041a090(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint extraout_EAX;
  ushort local_674 [512];
  ushort local_274 [256];
  ushort *local_74;
  L2ParamStack local_68 [16];
  int local_58;
  void *local_54;
  int local_50;
  ushort *local_4c;
  int local_48;
  void *local_44;
  ushort *local_40;
  void *local_38;
  int local_34;
  L2ParamStack local_30 [16];
  void *local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080f4f2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff980;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff8c,&local_20);
  uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c,&local_48);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_18 = 0;
  do {
    if (local_48 <= local_18) {
      thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_54);
      L2ParamStack::L2ParamStack(local_68,10);
      local_8._0_1_ = 2;
      L2ParamStack::PushBack(local_68,local_20);
      L2ParamStack::PushBack(local_68,local_54);
      L2ParamStack::PushBack(local_68,local_38);
      (**(code **)(*(int *)GL2Console + 0x660))();
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_68);
      ExceptionList = local_10;
      return extraout_EAX & 0xffffff00;
    }
    L2ParamStack::L2ParamStack(local_30,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
    L2ParamStack::PushBack(local_30,local_1c);
    switch(local_1c) {
    case (void *)0x0:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_108847bc,0x400);
      puVar2 = local_674;
      break;
    case (void *)0x1:
    case (void *)0x2:
    case (void *)0x3:
    case (void *)0x5:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff8c);
      puVar2 = local_4c;
      break;
    case (void *)0x4:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff44,&local_44);
      L2ParamStack::PushBack(local_30,local_44);
      puVar2 = local_40;
      break;
    case (void *)0x6:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_10886380);
      puVar2 = local_74;
      break;
    case (void *)0x7:
      uVar1 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),uVar1,&DAT_1087ff0c,&local_34,
                                 &local_58);
      puVar2 = FL2GameData::GetZoneName
                         (&GL2GameData,(float)local_34,(float)local_58,(float)local_50);
      appStrcpy(local_274,puVar2);
      puVar2 = local_274;
      break;
    default:
      goto switchD_1041a15d_default;
    }
    L2ParamStack::PushBack(local_30,puVar2);
switchD_1041a15d_default:
    (**(code **)(*(int *)GL2Console + 0x350))();
    local_8 = local_8 & 0xffffff00;
    L2ParamStack::~L2ParamStack(local_30);
    local_18 = local_18 + 1;
  } while( true );
}


// ==== 1041a410 FUN_1041a410 target=10c5104c callers=UNCONDITIONAL_CALL@1030aa1f
// strings: 

uint FUN_1041a410(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080f519;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,&DAT_1087ff0c,&local_2c,
                             &local_28,&local_30);
  L2ParamStack::L2ParamStack(local_1c,(int)local_30 * 3 + 3);
  iVar3 = 0;
  local_4 = 0;
  L2ParamStack::PushBack(local_1c,local_2c);
  L2ParamStack::PushBack(local_1c,local_28);
  L2ParamStack::PushBack(local_1c,local_30);
  if (0 < (int)local_30) {
    do {
      uVar2 = thunk_FUN_104026b0(*(undefined4 *)(iVar1 + 0x48),uVar2,&DAT_1088545c,&local_24,
                                 &param_1,&local_20);
      L2ParamStack::PushBack(local_1c,local_24);
      L2ParamStack::PushBack(local_1c,(void *)(int)(short)param_1);
      L2ParamStack::PushBack(local_1c,local_20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_30);
  }
  (**(code **)(*(int *)GL2Console + 0x204))(local_1c);
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&local_20);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10421460 FUN_10421460 target=10c5104c callers=thunk_FUN_10421460@1030a19b
// strings: 1088876c=INVALID_PING_SOCKET | 10888590=Can not resolve hostname | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10421460(int param_1,int param_2,char *param_3,u_short param_4)

{
  SOCKET SVar1;
  ulong uVar2;
  hostent *phVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined4 local_18;
  sockaddr local_10;
  
  if (*(int *)(DAT_10b1f538 + 0x50) == 0) {
    return;
  }
  if (*(SOCKET *)(param_1 + 0x850) != 0) {
    closesocket(*(SOCKET *)(param_1 + 0x850));
  }
  SVar1 = socket(2,1,6);
  *(SOCKET *)(param_1 + 0x850) = SVar1;
  if (SVar1 == 0xffffffff) {
    thunk_FUN_10401a60(L"INVALID_PING_SOCKET");
    return;
  }
  uVar2 = inet_addr(param_3);
  if (uVar2 == 0xffffffff) {
    phVar3 = gethostbyname(param_3);
    if (phVar3 == (hostent *)0x0) {
      thunk_FUN_10401a60(L"Can not resolve hostname");
      return;
    }
    _memcpy(local_10.sa_data + 2,*phVar3->h_addr_list,(int)phVar3->h_length);
    uVar2 = local_10.sa_data._2_4_;
  }
  local_10.sa_data._2_4_ = uVar2;
  local_10.sa_family = 2;
  local_10.sa_data._0_2_ = htons(param_4);
  dVar5 = appSecondsQPC();
  dVar5 = dVar5 * _DAT_10888760;
  iVar4 = connect(*(SOCKET *)(param_1 + 0x850),&local_10,0x10);
  if (iVar4 != 0) {
    if (DAT_10b1f538 != 0) {
      (**(code **)(*(int *)GL2Console + 0x624))
                (*(undefined4 *)(param_2 * 0x10 + 0x38 + param_1),9999);
      return;
    }
    __endthread();
    return;
  }
  dVar6 = appSecondsQPC();
  local_18 = (undefined4)(longlong)ROUND(dVar6 * _DAT_10888760 - dVar5);
  *(undefined4 *)((param_2 + 4) * 0x10 + param_1) = local_18;
  if (DAT_10b1f538 == 0) {
    __endthread();
  }
  else {
    (**(code **)(*(int *)GL2Console + 0x624))
              (*(undefined4 *)(param_2 * 0x10 + 0x38 + param_1),local_18);
  }
  thunk_FUN_104024b0(param_1,&DAT_1087f8f8,0,0xfffffffe);
  return;
}


// ==== 1042e430 FUN_1042e430 target=10c5104c callers=UNCONDITIONAL_CALL@1030e025
// strings: 1088a748=dddddddddddddddddddffffdddcccccSSdddddddddddQQQddddddddddddddccdd | 1088a698=(Receive)PetInfo ID:%d, ClassID:%d, CanBeAttacked:%d, X:%d, Y:%d, Z:%d | 1088a684=PetInfo | 1088a600=[Error] Can not find the Vehicle data [PetInfoPacket] | 

uint FUN_1042e430(int param_1,undefined4 param_2)

{
  User *pUVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint extraout_EAX;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 unaff_EBX;
  User *pUVar8;
  undefined4 unaff_EDI;
  float local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float local_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  uint uStack_1a8;
  int local_1a4;
  void *local_1a0;
  undefined4 local_19c;
  int local_198;
  int local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  int local_164;
  undefined4 local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  void *local_128;
  undefined4 local_124;
  undefined4 local_120;
  void *local_11c;
  undefined4 local_118;
  undefined1 local_114 [4];
  void *local_110;
  undefined4 local_10c;
  void *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  L2ParamStack local_f0 [8];
  undefined4 uStack_e8;
  double dStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  ushort auStack_90 [4];
  ushort local_88 [2];
  short local_84 [18];
  ushort auStack_60 [4];
  ushort auStack_58 [2];
  undefined2 local_54 [18];
  undefined1 auStack_30 [24];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_108100fa;
  pvStack_14 = ExceptionList;
  local_1b4 = 0.0;
  local_174 = 0;
  local_194 = 0;
  local_110 = (void *)0x0;
  local_11c = (void *)0x0;
  local_104 = 0;
  local_fc = 0;
  local_54[0] = 0;
  local_84[0] = 0;
  local_168 = 0;
  ExceptionList = &pvStack_14;
  thunk_FUN_104026b0(*(undefined4 *)(param_1 + 0x48),param_2,
                     "dddddddddddddddddddffffdddcccccSSdddddddddddQQQddddddddddddddccdd",&local_108,
                     &local_1c4,&local_1a0,&local_148,&local_150,&local_158,&local_160,&local_dc,
                     &local_1b8,&local_1b4,&local_174,&local_128,&local_124,local_f0,local_114,
                     &local_120,&local_100,&local_f8,&local_118,(int)&uStack_d4 + 4,
                     (int)&local_dc + 4,&local_b8,(int)&uStack_b4 + 4,&local_1a4,&local_190,
                     &local_19c,&local_fc,&local_104,&local_11c,&local_110,&local_194,0x30,local_84,
                     0x30,local_54,local_88,&local_f4,&local_10c,&local_140,&local_138,&local_144,
                     &local_184,&local_154,&local_17c,&local_18c,&local_134,&local_130,&local_a0,
                     &local_a8,&local_16c,&local_14c,&local_164,&local_13c,&local_15c,&local_188,
                     &local_180,&local_198,&local_178,&local_c0,&local_170,&local_1b4,&local_168,
                     &local_c4,(int)&uStack_1bc + 3,(int)&uStack_1bc + 2,&local_c8,&local_bc);
  *(void **)(*(int *)(param_1 + 0x48) + 0x4f64) = local_108;
  *(float *)(*(int *)(param_1 + 0x48) + 0x4f68) = local_1c4;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f9c) = local_150;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa0) = local_158;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa4) = local_160;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fa8) = local_144;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fac) = local_184;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fb0) = local_154;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fb4) = local_17c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fb8) = local_18c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fbc) = local_134;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar3 + 0x4fc0) = local_130;
  *(undefined4 *)(iVar3 + 0x4fc4) = local_12c;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar3 + 0x4fc8) = local_a0;
  *(undefined4 *)(iVar3 + 0x4fcc) = local_9c;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar3 + 0x4fd0) = local_a8;
  *(undefined4 *)(iVar3 + 0x4fd4) = local_a4;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fd8) = local_140;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fdc) = local_138;
  *(int *)(*(int *)(param_1 + 0x48) + 0x4fe0) = local_16c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fe4) = local_14c;
  *(int *)(*(int *)(param_1 + 0x48) + 0x4fe8) = local_164;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4fec) = local_13c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4ff0) = local_180;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4ff4) = local_178;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4ff8) = local_170;
  *(int *)(*(int *)(param_1 + 0x48) + 0x4ffc) = local_15c;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5000) = local_188;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5008) = local_c0;
  *(float *)(*(int *)(param_1 + 0x48) + 0x500c) = local_1b4;
  *(int *)(*(int *)(param_1 + 0x48) + 0x5004) = local_198;
  *(void **)(*(int *)(param_1 + 0x48) + 0x5014) = local_1a0;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5018) = local_c4;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x501c) = local_c8;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5020) = local_bc;
  if (local_84[0] == 0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4fc))(1);
  }
  else {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4fc))(0);
  }
  pUVar8 = (User *)0x0;
  if ((((DAT_10b1f538 == 0) || (iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), iVar3 == 0)) ||
      (piVar4 = (int *)thunk_FUN_104226e0(&stack0xfffffe38), *piVar4 != 1)) ||
     ((iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), *(int *)(iVar3 + 4) == 0 ||
      (iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), *(int *)(iVar3 + 4) == 0)))) {
    if ((local_198 != 0) && (local_198 != 2)) goto LAB_1042ed3a;
    pUVar8 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"PetInfo");
    if (pUVar8 == (User *)0x0) {
      pUVar8 = (User *)0x0;
    }
    else {
      pUVar8 = (User *)User::User(pUVar8);
    }
    *(undefined4 *)(pUVar8 + 0x18) = unaff_EDI;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f68) = unaff_EDI;
    *(undefined4 *)(pUVar8 + 0x94) = 0;
    *(undefined4 *)(pUVar8 + 8) = 1;
    *(undefined4 *)(pUVar8 + 0xc) = 1;
    *(int *)(pUVar8 + 0x14) = iStack_1ac + -1000000;
    *(undefined4 *)(pUVar8 + 0x10) = local_154;
    *(undefined4 *)(pUVar8 + 0x19c) = local_134;
    *(undefined4 *)(pUVar8 + 0x1a0) = local_130;
    *(undefined4 *)(pUVar8 + 0x1a4) = local_fc;
    *(undefined4 *)(pUVar8 + 0x1a8) = local_120;
    *(undefined4 *)(pUVar8 + 0x1b4) = local_12c;
    *(undefined4 *)(pUVar8 + 0x1b8) = local_10c;
    *(undefined4 *)(pUVar8 + 0x1ac) = local_104;
    *(undefined4 *)(pUVar8 + 0x1b0) = local_124;
    *(double *)(pUVar8 + 0x1bc) = (double)(float)dStack_e4;
    *(double *)(pUVar8 + 0x1c4) = (double)(float)local_dc;
    *(double *)(pUVar8 + 0x1bc) = dStack_e4;
    *(double *)(pUVar8 + 0x1c4) = local_dc;
    *(float *)(pUVar8 + 0x1cc) = (float)(double)CONCAT44(local_c0,local_c4);
    *(float *)(pUVar8 + 0x1d0) = (float)(double)CONCAT44(local_b8,local_bc);
    *(undefined4 *)(pUVar8 + 0xb4) = uStack_1b0;
    *(uint *)(pUVar8 + 0xb8) = uStack_1a8;
    *(undefined4 *)(pUVar8 + 0xc0) = local_19c;
    *(float *)(pUVar8 + 0x23c) = uStack_1c0;
    *(undefined4 *)(pUVar8 + 0x2ac) = local_180;
    *(undefined4 *)(pUVar8 + 0x194) = local_100;
    *(undefined4 *)(pUVar8 + 0x198) = local_118;
    if (auStack_90[0] == 0) {
      iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
      if (iVar3 != 0) {
        puVar5 = FString::operator*((FString *)(iVar3 + 4));
        User::SetName(pUVar8,puVar5);
        puVar5 = FString::operator*((FString *)(iVar3 + 4));
        thunk_FUN_103ff860(puVar5);
        *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 0;
      }
    }
    else {
      User::SetName(pUVar8,auStack_90);
      thunk_FUN_103ff860(auStack_90);
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 1;
    }
    if (auStack_60[0] == 0) {
      iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
      if (iVar3 != 0) {
        puVar5 = FString::operator*((FString *)(iVar3 + 0x10));
        goto LAB_1042f004;
      }
    }
    else {
      puVar5 = auStack_60;
LAB_1042f004:
      User::SetNickName(pUVar8,puVar5);
    }
    *(undefined4 *)(pUVar8 + 0x188) = local_14c;
    *(undefined4 *)(pUVar8 + 0x18c) = local_144;
    *(undefined4 *)(pUVar8 + 0x7c) = local_190;
    *(undefined4 *)(pUVar8 + 0x80) = local_150;
    *(undefined4 *)(pUVar8 + 0x84) = local_188;
    *(undefined4 *)(pUVar8 + 0x88) = local_160;
    *(int *)(pUVar8 + 0x218) = local_198;
    *(undefined4 *)(pUVar8 + 0x58) = local_140;
    *(undefined4 *)(pUVar8 + 0x5c) = local_13c;
    *(undefined4 *)(pUVar8 + 0x60) = local_138;
    *(undefined4 *)(pUVar8 + 0x214) = local_178;
    *(undefined4 *)(pUVar8 + 0x8c) = local_158;
    *(undefined4 *)(pUVar8 + 0x224) = local_170;
    *(undefined4 *)(pUVar8 + 0x22c) = local_148;
    *(undefined4 *)(pUVar8 + 0x234) = local_168;
    *(int *)(pUVar8 + 0x238) = local_194;
    *(undefined4 *)(pUVar8 + 0x21c) = local_18c;
    *(int *)(pUVar8 + 0x230) = local_1a4;
    *(undefined4 *)(pUVar8 + 0x220) = local_184;
    pUVar1 = pUVar8 + 0x18;
    *(undefined4 *)(pUVar8 + 0x228) = local_17c;
    if ((0 < *(int *)(pUVar8 + 0x18)) && (DAT_10b1f538 != 0)) {
      iVar3 = thunk_FUN_104226e0(pUVar1);
      if (iVar3 != 0) {
        thunk_FUN_103254a0(iVar3);
        thunk_FUN_1042c470(pUVar1);
      }
      puVar6 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      pvStack_18 = (void *)0xffffffff;
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = pUVar8;
        *puVar6 = 1;
      }
      thunk_FUN_1042c3f0(pUVar1,&stack0xfffffe34);
    }
    uStack_1bc = (float)local_15c;
    local_1b8 = (float)local_164;
    local_1b4 = (float)local_16c;
    if (0 < (int)local_1c4) {
      if ((((DAT_10b1f538 == 0) || (iVar3 = thunk_FUN_104226e0(&local_1c4), iVar3 == 0)) ||
          (piVar4 = (int *)thunk_FUN_104226e0(&local_1c4), *piVar4 != 3)) ||
         ((iVar3 = thunk_FUN_104226e0(&local_1c4), *(int *)(iVar3 + 4) == 0 ||
          (iVar3 = thunk_FUN_104226e0(&local_1c4), *(int *)(iVar3 + 4) == 0)))) {
        FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                            (ushort *)*(FOutputDevice **)GNetworkLog_exref);
      }
      else {
        iVar3 = thunk_FUN_104226e0(&local_1c4);
        if ((iVar3 == 0) ||
           ((piVar4 = (int *)thunk_FUN_104226e0(&local_1c4), *piVar4 != 3 ||
            (iVar3 = thunk_FUN_104226e0(&local_1c4), *(int *)(iVar3 + 4) == 0)))) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_104226e0(&local_1c4);
          iVar3 = *(int *)(iVar3 + 4);
        }
        local_a0 = 0;
        local_9c = 0;
        uStack_98 = 0x3f800000;
        pfVar7 = (float *)FVector::RotateAngleAxis
                                    ((FVector *)&uStack_1bc,(int)auStack_30,
                                     (FVector *)(*(uint *)(*(int *)(iVar3 + 4) + 0x1cc) & 0xffff));
        iVar3 = *(int *)(iVar3 + 4);
        uStack_1c0 = *pfVar7 + *(float *)(iVar3 + 0x1bc);
        uStack_1bc = *(float *)(iVar3 + 0x1c0) + pfVar7[1];
        local_1b8 = *(float *)(iVar3 + 0x1c4) + pfVar7[2];
      }
    }
    *(undefined4 *)(pUVar8 + 0x204) = 0;
    L2ParamStack::L2ParamStack((L2ParamStack *)&local_f8,10);
    pvStack_18 = (void *)0x1;
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_108);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_110);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_128);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_11c);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,local_1a0);
    L2ParamStack::PushBack((L2ParamStack *)&local_f8,(void *)(int)(char)((uint)unaff_EBX >> 0x18));
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 600))
              (pUVar8,uStack_1bc,local_1b8,local_1b4,uStack_e8,&local_f8);
    if (*(int *)(pUVar8 + 0x204) != 0) {
      *(uint *)(*(int *)(pUVar8 + 0x204) + 0x6a0) = ((int)uStack_1a8 < 1) - 1 & uStack_1a8;
      if (local_194 < 1) {
        *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = 0;
      }
      else {
        *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = local_194;
      }
      if ((int)local_1a0 < 1) {
        *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = 0;
      }
      else {
        *(void **)(*(int *)(pUVar8 + 0x204) + 0x6a8) = local_1a0;
      }
      *(int *)(*(int *)(pUVar8 + 0x204) + 0x17d0) = local_16c;
      User::SetEventmatchEffect(pUVar8,(int)uStack_1c0._2_1_);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    L2ParamStack::~L2ParamStack(local_f0);
    goto LAB_1042ed3a;
  }
  iVar3 = thunk_FUN_104226e0(&stack0xfffffe38);
  if ((iVar3 == 0) ||
     ((piVar4 = (int *)thunk_FUN_104226e0(&stack0xfffffe38), *piVar4 != 1 ||
      (iVar3 = thunk_FUN_104226e0(&stack0xfffffe38), *(int *)(iVar3 + 4) == 0)))) {
    pUVar8 = (User *)0x0;
  }
  else {
    iVar3 = thunk_FUN_104226e0(&stack0xfffffe38);
    pUVar8 = *(User **)(iVar3 + 4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4f68) = unaff_EBX;
  *(undefined4 *)(pUVar8 + 0x94) = 0;
  *(undefined4 *)(pUVar8 + 8) = 1;
  *(undefined4 *)(pUVar8 + 0xc) = 1;
  *(int *)(pUVar8 + 0x14) = local_1a4 + -1000000;
  *(undefined4 *)(pUVar8 + 0x10) = local_14c;
  *(undefined4 *)(pUVar8 + 0x19c) = local_12c;
  *(void **)(pUVar8 + 0x1a0) = local_128;
  *(undefined4 *)(pUVar8 + 0x1a4) = local_f4;
  *(undefined4 *)(pUVar8 + 0x1a8) = local_118;
  *(undefined4 *)(pUVar8 + 0x1b4) = local_124;
  *(undefined4 *)(pUVar8 + 0x1b8) = local_104;
  *(undefined4 *)(pUVar8 + 0x1ac) = local_fc;
  *(void **)(pUVar8 + 0x1b0) = local_11c;
  *(double *)(pUVar8 + 0x1bc) = local_dc;
  *(undefined8 *)(pUVar8 + 0x1c4) = uStack_d4;
  *(float *)(pUVar8 + 0x1cc) = (float)(double)CONCAT44(local_b8,local_bc);
  *(float *)(pUVar8 + 0x1d0) = (float)uStack_b4;
  *(uint *)(pUVar8 + 0xb4) = uStack_1a8;
  *(void **)(pUVar8 + 0xb8) = local_1a0;
  *(int *)(pUVar8 + 0xc0) = local_194;
  *(float *)(pUVar8 + 0x23c) = local_1b8;
  *(undefined4 *)(pUVar8 + 0x2ac) = local_178;
  *(undefined4 *)(pUVar8 + 0x194) = local_f8;
  *(void **)(pUVar8 + 0x198) = local_110;
  *(undefined4 *)(pUVar8 + 0x230) = local_19c;
  if (local_88[0] == 0) {
    iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
    if (iVar3 != 0) {
      puVar5 = FString::operator*((FString *)(iVar3 + 4));
      User::SetName(pUVar8,puVar5);
      puVar5 = FString::operator*((FString *)(iVar3 + 4));
      thunk_FUN_103ff860(puVar5);
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 0;
    }
  }
  else {
    User::SetName(pUVar8,local_88);
    thunk_FUN_103ff860(local_88);
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x5010) = 1;
  }
  if (auStack_58[0] == 0) {
    iVar3 = thunk_FUN_10422f80(pUVar8 + 0x14);
    if (iVar3 != 0) {
      puVar5 = FString::operator*((FString *)(iVar3 + 0x10));
      goto LAB_1042eb63;
    }
  }
  else {
    puVar5 = auStack_58;
LAB_1042eb63:
    User::SetNickName(pUVar8,puVar5);
  }
  *(undefined4 *)(pUVar8 + 0x188) = local_144;
  *(undefined4 *)(pUVar8 + 0x18c) = local_13c;
  *(undefined4 *)(pUVar8 + 0x7c) = local_188;
  *(undefined4 *)(pUVar8 + 0x80) = local_148;
  *(undefined4 *)(pUVar8 + 0x84) = local_180;
  *(undefined4 *)(pUVar8 + 0x88) = local_158;
  *(undefined4 *)(pUVar8 + 0x218) = local_190;
  *(undefined4 *)(pUVar8 + 0x58) = local_138;
  *(undefined4 *)(pUVar8 + 0x5c) = local_134;
  *(undefined4 *)(pUVar8 + 0x60) = local_130;
  *(undefined4 *)(pUVar8 + 0x214) = local_170;
  *(undefined4 *)(pUVar8 + 0x8c) = local_150;
  *(undefined4 *)(pUVar8 + 0x224) = local_168;
  *(undefined4 *)(pUVar8 + 0x22c) = local_140;
  *(undefined4 *)(pUVar8 + 0x234) = local_160;
  *(undefined4 *)(pUVar8 + 0x238) = local_18c;
  *(undefined4 *)(pUVar8 + 0x21c) = local_184;
  *(undefined4 *)(pUVar8 + 0x230) = local_19c;
  *(undefined4 *)(pUVar8 + 0x220) = local_17c;
  *(undefined4 *)(pUVar8 + 0x228) = local_174;
  if (*(int *)(pUVar8 + 0x204) != 0) {
    *(uint *)(*(int *)(pUVar8 + 0x204) + 0x6a0) = ((int)uStack_1a8 < 1) - 1 & uStack_1a8;
    if (local_194 < 1) {
      *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = 0;
    }
    else {
      *(int *)(*(int *)(pUVar8 + 0x204) + 0x6a4) = local_194;
    }
    if ((int)local_1a0 < 1) {
      *(undefined4 *)(*(int *)(pUVar8 + 0x204) + 0x6a8) = 0;
    }
    else {
      *(void **)(*(int *)(pUVar8 + 0x204) + 0x6a8) = local_1a0;
    }
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6b0) = (float)*(double *)(pUVar8 + 0x1bc);
    local_1c4 = (float)*(double *)(pUVar8 + 0x1c4);
    *(float *)(*(int *)(pUVar8 + 0x204) + 0x6b4) = local_1c4;
    iVar3 = *(int *)(pUVar8 + 0x204);
    if (*(char *)(*(int *)(iVar3 + 0x14d8) + 0x434) == '\x01') {
      fVar2 = *(float *)(iVar3 + 0x6ec);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0x6f0);
    }
    *(float *)(iVar3 + 0x1550) = fVar2 * *(float *)(iVar3 + 0x6b4);
    *(int *)(*(int *)(pUVar8 + 0x204) + 0x17d0) = local_16c;
    *(int *)(*(int *)(pUVar8 + 0x204) + 0x778) = (int)uStack_1c0._3_1_;
    User::SetEventmatchEffect(pUVar8,(int)uStack_1c0._2_1_);
  }
LAB_1042ed3a:
  if ((local_198 == 0) || (local_198 == 2)) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4f4))(local_10c);
  }
  (**(code **)(*(int *)GL2Console + 0x6f4))(pUVar8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_18;
  return extraout_EAX & 0xffffff00;
}


// ==== 104342f0 FUN_104342f0 target=10c5104c callers=UNCONDITIONAL_CALL@103024c8
// strings: 1088aed8=UserInfo | 1088ae38=dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddddcccddh | 10887e80=ddddc | 1088ad98=[Error] Can not find the Vehicle data [UserInfoPacket] | 1088ad00=(Receive)UserInfo ID:%d Name:%s Race:%d Sex:%d X:%d Y:%d Z:%d | 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104342f0(void)

{
  User *pUVar1;
  User *pUVar2;
  uint *puVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  UNetworkHandler *pUVar7;
  uint3 uVar8;
  short sVar9;
  User *pUVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  uint extraout_EAX;
  APawn *pAVar18;
  uint *puVar19;
  short *psVar20;
  short sVar21;
  uint *unaff_EBP;
  User *pUVar22;
  undefined4 unaff_retaddr;
  char cStack_11d;
  short *psStack_118;
  int iStack_114;
  uint local_110;
  short *psStack_10c;
  int iStack_108;
  char cStack_101;
  int local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  User *local_dc;
  int iStack_d8;
  User *pUStack_d4;
  User *pUStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  void *pvStack_b4;
  float fStack_b0;
  float fStack_ac;
  short *psStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  L2ParamStack aLStack_94 [16];
  uint uStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  int iStack_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  double dStack_34;
  undefined8 uStack_2c;
  void *pvStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  uVar8 = (uint3)psStack_118;
  iStack_4 = -1;
  puStack_8 = &LAB_10810894;
  pvStack_c = ExceptionList;
  psStack_118 = (short *)(uint)(uint3)psStack_118;
  local_dc = (User *)CONCAT31(local_dc._1_3_,1);
  local_110 = 0;
  local_100 = 0;
  ExceptionList = &pvStack_c;
  pUVar10 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(0x314,L"UserInfo");
  if (pUVar10 == (User *)0x0) {
    pUVar10 = (User *)0x0;
  }
  else {
    pUVar10 = (User *)User::User(pUVar10);
  }
  _memset(pUVar10,0,0x314);
  iVar13 = iStack_4;
  pUStack_d0 = pUVar10 + 0x50;
  local_dc = pUVar10 + 0x4c;
  pUStack_d4 = pUVar10 + 0x1c;
  pUVar1 = pUVar10 + 0x18;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iStack_4 + 0x48),unaff_retaddr,
                              "dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddddcccddh"
                              ,&iStack_e0,&iStack_cc,&iStack_d8,&local_110,pUVar1,0x30,pUStack_d4,
                              local_dc,pUStack_d0,pUVar10 + 0x54,pUVar10 + 0x58,pUVar10 + 0x5c,
                              pUVar10 + 100,pUVar10 + 0x68,pUVar10 + 0x6c,pUVar10 + 0x70,
                              pUVar10 + 0x74,pUVar10 + 0x78,pUVar10 + 0x7c,pUVar10 + 0x80,
                              pUVar10 + 0x84,pUVar10 + 0x88,pUVar10 + 0x218,pUVar10 + 0x214,
                              pUVar10 + 0x8c,pUVar10 + 0x90,pUVar10 + 0x98,pUVar10 + 0x9c,
                              pUVar10 + 0xa0,pUVar10 + 0xa4,pUVar10 + 0xa8,pUVar10 + 0xac,
                              pUVar10 + 0xb0,pUVar10 + 0xb4,pUVar10 + 0xb8,pUVar10 + 0xbc,
                              pUVar10 + 0xc0,pUVar10 + 0xc4,pUVar10 + 200,pUVar10 + 0xcc,
                              pUVar10 + 0xd0,pUVar10 + 0xdc,pUVar10 + 0xe0,&uStack_84,auStack_80,
                              auStack_7c,auStack_78,auStack_74,auStack_70,auStack_6c,auStack_68,
                              &iStack_64,auStack_60,auStack_5c,&iStack_58,auStack_54,auStack_50,
                              auStack_4c,auStack_40,auStack_3c,pUVar10 + 0xe8,pUVar10 + 0xec,
                              pUVar10 + 0xf0,pUVar10 + 0xf4,pUVar10 + 0xf8,pUVar10 + 0xfc,
                              pUVar10 + 0x100,pUVar10 + 0x104,pUVar10 + 0x108,pUVar10 + 0x10c,
                              pUVar10 + 0x110,pUVar10 + 0x114,pUVar10 + 0x118,pUVar10 + 0x11c,
                              pUVar10 + 0x120,pUVar10 + 0x124,pUVar10 + 0x128,pUVar10 + 300,
                              pUVar10 + 0x130,pUVar10 + 0x134,pUVar10 + 0x138,pUVar10 + 0x13c,
                              pUVar10 + 0x140,pUVar10 + 0x144,pUVar10 + 0x148,pUVar10 + 0x14c,
                              pUVar10 + 0x150,pUVar10 + 0x154,pUVar10 + 0x158,pUVar10 + 0x15c,
                              pUVar10 + 0x170,pUVar10 + 0x174,pUVar10 + 0x178,pUVar10 + 0x17c,
                              pUVar10 + 0x224,pUVar10 + 0x228,pUVar10 + 0x22c,pUVar10 + 0x230,
                              pUVar10 + 0x21c,pUVar10 + 0x220,pUVar10 + 0x234,pUVar10 + 0x23c,
                              pUVar10 + 0x2ac,pUVar10 + 0x238,pUVar10 + 0x194,pUVar10 + 0x198,
                              pUVar10 + 0x19c,pUVar10 + 0x1a0,pUVar10 + 0x1a4,pUVar10 + 0x1a8,
                              pUVar10 + 0x1b4,pUVar10 + 0x1b8,pUVar10 + 0x1ac,pUVar10 + 0x1b0,
                              &uStack_2c,&uStack_1c,&dStack_34,&pvStack_24,pUVar10 + 0x240,
                              pUVar10 + 0x244,pUVar10 + 0x248,pUVar10 + 0x250);
  sVar9 = (short)uVar8;
  if (0 < sVar9) {
    lVar6 = (ulonglong)((int)sVar9 + 1) * 2;
    iStack_108 = (**(code **)**(undefined4 **)GMalloc_exref)
                           ((uint)lVar6 | -(uint)((int)((ulonglong)lVar6 >> 0x20) != 0),
                            &DAT_10853a28);
  }
  sVar21 = 0;
  if (0 < sVar9) {
    do {
      uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1088494c,
                                  iStack_108 + sVar21 * 2);
      sVar21 = sVar21 + 1;
    } while (sVar21 < sVar9);
  }
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087f9dc,pUVar10 + 700);
  uStack_e8 = 0;
  uStack_c8 = 0;
  uStack_a4 = 0;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_10883f30,&uStack_e8,
                              &uStack_ec);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,&pvStack_b4);
  if (0 < *(int *)(pUVar10 + 0x284)) {
    L2ParamStack::L2ParamStack(aLStack_94,10);
    pvStack_c = (void *)0x0;
    L2ParamStack::PushBack(aLStack_94,pvStack_b4);
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3cc))(aLStack_94);
    pvStack_c = (void *)0xffffffff;
    L2ParamStack::~L2ParamStack(aLStack_94);
  }
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1088ae30,pUVar10 + 0x2e0,
                              pUVar10 + 0x2e2,&uStack_c8,pUVar10 + 0x2e4);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,"ddddc",pUVar10 + 0x2c0,
                              &uStack_a4,pUVar10 + 0x2c4,pUVar10 + 0x2c8,&cStack_101);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087f9dc,pUVar10 + 0x2ec);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1088ae2c,pUVar10 + 0x2a0,
                              pUVar10 + 0x2f8,pUVar10 + 0x2fc);
  uStack_c4 = 0;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087fa3c,&uStack_c4,
                              &iStack_b8,&iStack_bc,&iStack_c0);
  fStack_b0 = (float)iStack_b8;
  pUVar22 = pUVar10 + 0x308;
  fStack_fc = (float)iStack_bc;
  psStack_10c = (short *)(float)iStack_c0;
  fStack_ac = fStack_fc;
  psStack_a8 = psStack_10c;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,pUVar22);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087f9dc,&uStack_e4);
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff44,pUVar10 + 0x30c,
                              pUVar10 + 0x310);
  pUVar2 = pUVar10 + 400;
  uVar11 = thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,pUVar2);
  *(uint *)pUVar2 =
       (((byte)*pUVar2 | 0xffffff00) << 8 | (uint)(byte)pUVar10[0x191]) << 8 |
       (uint)(byte)pUVar10[0x192];
  thunk_FUN_104026b0(*(undefined4 *)(iVar13 + 0x48),uVar11,&DAT_1087ff8c,pUVar10 + 0x304);
  iVar13 = *(int *)(pUVar10 + 0x304);
  if ((iVar13 < 1) || (0x13 < iVar13)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  *(undefined4 *)(pUVar10 + 0x300) = uVar11;
  *(undefined4 *)(pUVar10 + 0x94) = 1;
  *(uint *)pUVar22 =
       (((byte)*pUVar22 | 0xffffff00) << 8 | (uint)(byte)pUVar10[0x309]) << 8 |
       (uint)(byte)pUVar10[0x30a];
  *(undefined8 *)(pUVar10 + 0x1bc) = uStack_1c;
  *(undefined8 *)(pUVar10 + 0x1c4) = uStack_2c;
  *(float *)(pUVar10 + 0x1cc) = (float)dStack_34;
  *(float *)(pUVar10 + 0x1d0) = (float)(double)CONCAT44(uStack_20,pvStack_24);
  *(int *)(pUVar10 + 0x2e8) = (int)cStack_101;
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *(uint *)pUVar1) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *(uint *)pUVar1) {
          if ((((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
               (piVar12 = (int *)thunk_FUN_104226e0(pUVar1), *piVar12 == 1)) &&
              (iVar13 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar13 + 4) != 0)) &&
             (iVar13 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar13 + 4) != 0)) {
            iVar13 = thunk_FUN_104226e0(pUVar1);
            if (((iVar13 == 0) || (piVar12 = (int *)thunk_FUN_104226e0(pUVar1), *piVar12 != 1)) ||
               (iVar13 = thunk_FUN_104226e0(pUVar1), *(int *)(iVar13 + 4) == 0)) {
              psStack_10c = (short *)0x0;
            }
            else {
              iVar13 = thunk_FUN_104226e0(pUVar1);
              psStack_10c = *(short **)(iVar13 + 4);
            }
            puVar19 = (uint *)(psStack_10c + 0x4c);
            fStack_fc = (float)((int)pUVar10 - (int)psStack_10c);
            local_100 = 0;
            goto LAB_10434c80;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  iStack_114 = 0;
  pUVar22 = pUVar10 + 0x98;
  do {
    if (*(int *)pUVar22 != 0) {
      piVar12 = (int *)(**(code **)**(undefined4 **)GMalloc_exref)(0x18,&DAT_10853a28);
      *piVar12 = *(int *)pUVar22;
      piVar12[1] = (&uStack_84)[iStack_114];
      piVar12[4] = 0;
      piVar12[5] = 0;
      if ((0 < *(int *)pUVar22) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
        iVar13 = thunk_FUN_104226e0(pUVar22);
        if (iVar13 != 0) {
          (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
          thunk_FUN_1042c470(pUVar22);
        }
        unaff_EBP = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
        if (unaff_EBP == (uint *)0x0) {
          unaff_EBP = (uint *)0x0;
        }
        else {
          *unaff_EBP = 0;
          unaff_EBP[1] = 0;
        }
        pvStack_c = (void *)0xffffffff;
        if (unaff_EBP != (uint *)0x0) {
          unaff_EBP[1] = (uint)piVar12;
          *unaff_EBP = 2;
        }
        thunk_FUN_1042c3f0(pUVar22,&stack0xfffffed8);
      }
    }
    iStack_114 = iStack_114 + 1;
    pUVar22 = pUVar22 + 4;
  } while (iStack_114 < 0x14);
  *(undefined4 *)(pUVar10 + 8) = 0;
  *(undefined4 *)(pUVar10 + 0x94) = 1;
  if ((0 < (int)*(uint *)pUVar1) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
    iVar13 = thunk_FUN_104226e0(pUVar1);
    if (iVar13 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
      thunk_FUN_1042c470(pUVar1);
    }
    unaff_EBP = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (unaff_EBP == (uint *)0x0) {
      unaff_EBP = (uint *)0x0;
    }
    else {
      *unaff_EBP = 0;
      unaff_EBP[1] = 0;
    }
    pvStack_c = (void *)0xffffffff;
    if (unaff_EBP != (uint *)0x0) {
      unaff_EBP[1] = (uint)pUVar10;
      *unaff_EBP = 1;
    }
    thunk_FUN_1042c3f0(pUVar1,&stack0xfffffed8);
  }
  fStack_f8 = (float)iStack_e0;
  DAT_10b1f530 = *(uint *)pUVar1;
  fStack_f4 = (float)iStack_cc;
  fStack_f0 = (float)iStack_d8;
  if (0 < (int)local_110) {
    if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
      iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & local_110) * 4);
      if (iVar13 != -1) {
        iVar16 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == local_110) {
            if ((((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
                 (piVar12 = (int *)thunk_FUN_104226e0(&local_110), *piVar12 == 3)) &&
                (iVar13 = thunk_FUN_104226e0(&local_110), *(int *)(iVar13 + 4) != 0)) &&
               (iVar13 = thunk_FUN_104226e0(&local_110), *(int *)(iVar13 + 4) != 0)) {
              iVar13 = thunk_FUN_104226e0(&local_110);
              if (((iVar13 == 0) || (piVar12 = (int *)thunk_FUN_104226e0(&local_110), *piVar12 != 3)
                  ) || (iVar13 = thunk_FUN_104226e0(&local_110), *(int *)(iVar13 + 4) == 0)) {
                iVar13 = 0;
              }
              else {
                iVar13 = thunk_FUN_104226e0(&local_110);
                iVar13 = *(int *)(iVar13 + 4);
              }
              uStack_a0 = 0;
              uStack_9c = 0;
              uStack_98 = 0x3f800000;
              pfVar17 = (float *)FVector::RotateAngleAxis
                                           ((FVector *)&fStack_f8,(int)aLStack_94,
                                            (FVector *)
                                            (*(uint *)(*(int *)(iVar13 + 4) + 0x1cc) & 0xffff));
              iVar13 = *(int *)(iVar13 + 4);
              fStack_fc = *pfVar17 + *(float *)(iVar13 + 0x1bc);
              fStack_f8 = *(float *)(iVar13 + 0x1c0) + pfVar17[1];
              fStack_f4 = *(float *)(iVar13 + 0x1c4) + pfVar17[2];
              goto LAB_10435993;
            }
            break;
          }
          iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
        } while (iVar13 != -1);
      }
    }
    FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                        (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  }
LAB_10435993:
  *(undefined4 *)(pUVar10 + 0x204) = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x124))
            (pUVar10,fStack_f8,fStack_f4,fStack_f0,0,(int)cStack_11d,uStack_c8,uStack_ec,uStack_e4);
  sVar9 = *(short *)(pUVar10 + 0x2b0);
  if (((sVar9 == 1) || (sVar9 == 3)) || ((sVar9 == 5 || ((sVar9 == 7 || (sVar9 == 8)))))) {
    APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
    if (*(short *)(pUVar10 + 0x2b0) == 7) {
      *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 10;
    }
    else {
      *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 9;
    }
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x63c) = *(int *)(pUVar10 + 0x204);
  }
  if ((*(short *)(pUVar10 + 0x2b0) == 0) && (*(int *)(*(APawn **)(pUVar10 + 0x204) + 0x62c) == 9)) {
    APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
  }
  pAVar18 = *(APawn **)(pUVar10 + 0x204);
  if ((*(int *)(pAVar18 + 0x718) != 0) && ((*(byte *)(*(int *)(pAVar18 + 0x718) + 0x714) & 1) != 0))
  {
    APawn::CheckCubicStatus(pAVar18,0,(short *)0x0);
    pAVar18 = *(APawn **)(*(int *)(pUVar10 + 0x204) + 0x718);
  }
  APawn::CheckCubicStatus(pAVar18,(short)unaff_EBP,psStack_118);
  *(float *)(*(int *)(pUVar10 + 0x204) + 0x17d0) = fStack_f8;
  *(int *)(*(int *)(pUVar10 + 0x204) + 0x778) = (int)fStack_fc._0_1_;
  iVar13 = User::HasBootsSound(pUVar10,iStack_64);
  *(int *)(*(int *)(pUVar10 + 0x204) + 0x1828) = iVar13;
  *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x1830) = *(undefined4 *)(pUVar10 + 0x2e8);
  puVar19 = (uint *)(*(int *)(pUVar10 + 0x204) + 0x1820);
  *puVar19 = *puVar19 ^
             (*(uint *)(*(int *)(pUVar10 + 0x204) + 0x1820) ^ *(uint *)(pUVar10 + 0x2fc)) & 1;
  goto LAB_10435c34;
LAB_10434c80:
  uVar5 = *puVar19;
  if ((uVar5 != 0) || (*(int *)((int)fStack_fc + (int)puVar19) != 0)) {
    if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
      iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                       (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
      if (iVar13 != -1) {
        iVar16 = *(int *)(DAT_10b1f538 + 0x194);
        do {
          if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
            if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
              iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                               (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
              goto joined_r0x10434e38;
            }
            break;
          }
          iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
        } while (iVar13 != -1);
      }
    }
    goto LAB_10434cd8;
  }
  goto LAB_104350ec;
joined_r0x10434e38:
  if (iVar13 == -1) goto LAB_10434e54;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_10434e56;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x10434e38;
LAB_10434e54:
  piVar12 = (int *)0x0;
LAB_10434e56:
  if ((*piVar12 == 2) && (iVar13 = thunk_FUN_104226e0(puVar19), *(int *)(iVar13 + 4) != 0)) {
    iVar13 = thunk_FUN_104226e0(puVar19);
    iStack_114 = *(int *)(iVar13 + 4);
  }
  else {
LAB_10434cd8:
    iStack_114 = 0;
  }
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    puVar3 = (uint *)((int)fStack_fc + (int)puVar19);
    uVar5 = *puVar3;
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
          if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
            iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                             (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
            goto joined_r0x10434eae;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
LAB_10434d38:
  iVar13 = 0;
LAB_10434d3a:
  if (((iStack_114 == 0) || (iVar13 == 0)) || (iStack_114 != iVar13)) {
    puVar3 = (uint *)((int)fStack_fc + (int)puVar19);
    if ((*(int *)((int)fStack_fc + (int)puVar19) != 0) && (iVar13 == 0)) {
      puVar14 = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(0x18,&DAT_10853a28);
      *puVar14 = *puVar3;
      puVar14[1] = (&uStack_84)[local_100];
      puVar14[4] = 0;
      puVar14[5] = 0;
      if ((0 < (int)*puVar3) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
        iVar13 = thunk_FUN_104226e0(puVar3);
        if (iVar13 != 0) {
          (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
          thunk_FUN_1042c470(puVar3);
        }
        unaff_EBP = (uint *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
        if (unaff_EBP == (uint *)0x0) {
          unaff_EBP = (uint *)0x0;
        }
        else {
          *unaff_EBP = 0;
          unaff_EBP[1] = 0;
        }
        pvStack_c = (void *)0xffffffff;
        if (unaff_EBP != (uint *)0x0) {
          unaff_EBP[1] = (uint)puVar14;
          *unaff_EBP = 2;
        }
        thunk_FUN_1042c3f0(puVar3,&stack0xfffffed8);
      }
    }
    uVar5 = *puVar3;
    if (iStack_114 == 0) {
      if ((0 < (int)uVar5) && (*puVar19 != uVar5)) {
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x168))((&uStack_84)[local_100]);
      }
    }
    else {
      if (((int)uVar5 < 1) || (*puVar19 == uVar5)) {
        if (uVar5 == 0) {
          (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x168))(*(undefined4 *)(iStack_114 + 4));
        }
      }
      else {
        (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x168))((&uStack_84)[local_100]);
      }
      if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
        iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                         (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar19) * 4);
        if (iVar13 != -1) {
          iVar16 = *(int *)(DAT_10b1f538 + 0x194);
          do {
            if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *puVar19) {
              if (((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
                  (piVar12 = (int *)thunk_FUN_104226e0(puVar19), *piVar12 == 2)) &&
                 (iVar13 = thunk_FUN_104226e0(puVar19), *(int *)(iVar13 + 4) != 0)) {
                iVar13 = thunk_FUN_104226e0(puVar19);
                uVar11 = *(undefined4 *)(iVar13 + 4);
                goto LAB_10434fc9;
              }
              break;
            }
            iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
          } while (iVar13 != -1);
        }
      }
      uVar11 = 0;
LAB_10434fc9:
      (**(code **)(**(int **)GMalloc_exref + 8))(uVar11);
      if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
        iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                         (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *puVar19) * 4);
        if (iVar13 != -1) {
          iVar16 = *(int *)(DAT_10b1f538 + 0x194);
          do {
            if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *puVar19) {
              if ((*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) &&
                 (piVar12 = (int *)thunk_FUN_104226e0(puVar19), *piVar12 == 2)) {
                uVar11 = thunk_FUN_104226e0(puVar19);
                (**(code **)(**(int **)GMalloc_exref + 8))(uVar11);
                thunk_FUN_1042c470(puVar19);
              }
              break;
            }
            iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
          } while (iVar13 != -1);
        }
      }
    }
  }
LAB_104350ec:
  local_100 = local_100 + 1;
  puVar19 = puVar19 + 1;
  if (0x13 < local_100) goto code_r0x1043510b;
  goto LAB_10434c80;
joined_r0x10434eae:
  if (iVar13 == -1) goto LAB_10434ec4;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_10434ec6;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x10434eae;
LAB_10434ec4:
  piVar12 = (int *)0x0;
LAB_10434ec6:
  if ((*piVar12 == 2) && (iVar13 = thunk_FUN_104226e0(puVar3), *(int *)(iVar13 + 4) != 0)) {
    iVar13 = thunk_FUN_104226e0(puVar3);
    iVar13 = *(int *)(iVar13 + 4);
    goto LAB_10434d3a;
  }
  goto LAB_10434d38;
code_r0x1043510b:
  *(undefined4 *)(pUVar10 + 0x204) = *(undefined4 *)(psStack_10c + 0x102);
  *(undefined4 *)(pUVar10 + 0x1d4) = *(undefined4 *)(psStack_10c + 0xea);
  *(undefined4 *)(pUVar10 + 0x1d8) = *(undefined4 *)(psStack_10c + 0xec);
  *(undefined4 *)(pUVar10 + 0x1dc) = *(undefined4 *)(psStack_10c + 0xee);
  *(undefined4 *)(pUVar10 + 0x1e0) = *(undefined4 *)(psStack_10c + 0xf0);
  *(undefined4 *)(pUVar10 + 0x1e4) = *(undefined4 *)(psStack_10c + 0xf2);
  *(undefined4 *)(pUVar10 + 0x1e8) = *(undefined4 *)(psStack_10c + 0xf4);
  *(undefined4 *)(pUVar10 + 0x1ec) = *(undefined4 *)(psStack_10c + 0xf6);
  *(undefined4 *)(pUVar10 + 0x1f0) = *(undefined4 *)(psStack_10c + 0xf8);
  *(undefined4 *)(pUVar10 + 500) = *(undefined4 *)(psStack_10c + 0xfa);
  *(undefined4 *)(pUVar10 + 0x1f8) = *(undefined4 *)(psStack_10c + 0xfc);
  *(undefined4 *)(pUVar10 + 0x1fc) = *(undefined4 *)(psStack_10c + 0xfe);
  *(undefined4 *)(pUVar10 + 0x200) = *(undefined4 *)(psStack_10c + 0x100);
  *(undefined4 *)(pUVar10 + 0x2d4) = *(undefined4 *)(psStack_10c + 0x16a);
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    uVar5 = *(uint *)(psStack_10c + 0xc);
    psVar20 = psStack_10c + 0xc;
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
          if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
            iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                             (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & uVar5) * 4);
            goto joined_r0x10435221;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  goto LAB_1043526b;
joined_r0x10435221:
  if (iVar13 == -1) goto LAB_1043523b;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == uVar5) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_1043523d;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x10435221;
joined_r0x104357a5:
  if (iVar13 == -1) goto LAB_104357c4;
  if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *unaff_EBP) {
    piVar12 = *(int **)(iVar16 + 8 + iVar13 * 0xc);
    goto LAB_104357c6;
  }
  iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
  goto joined_r0x104357a5;
LAB_104357c4:
  piVar12 = (int *)0x0;
LAB_104357c6:
  if ((*piVar12 != 1) || (iVar13 = thunk_FUN_104226e0(unaff_EBP), *(int *)(iVar13 + 4) == 0))
  goto LAB_10435764;
  iVar13 = thunk_FUN_104226e0(unaff_EBP);
  uVar11 = *(undefined4 *)(iVar13 + 4);
  goto LAB_10435766;
LAB_1043523b:
  piVar12 = (int *)0x0;
LAB_1043523d:
  if (*piVar12 == 1) {
    uVar11 = thunk_FUN_104226e0(psVar20);
    (**(code **)(**(int **)GMalloc_exref + 8))(uVar11);
    thunk_FUN_1042c470(psVar20);
  }
LAB_1043526b:
  (**(code **)(**(int **)GMalloc_exref + 8))(psStack_10c);
  uVar5 = *unaff_EBP;
  *(undefined4 *)(pUVar10 + 8) = 0;
  *(undefined4 *)(pUVar10 + 0x94) = 1;
  if ((0 < (int)uVar5) && (DAT_10b1f538 != (UNetworkHandler *)0x0)) {
    iVar13 = thunk_FUN_104226e0(unaff_EBP);
    if (iVar13 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar13);
      thunk_FUN_1042c470(unaff_EBP);
    }
    puVar15 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      *puVar15 = 0;
      puVar15[1] = 0;
    }
    uStack_10 = 0xffffffff;
    if (puVar15 != (undefined4 *)0x0) {
      puVar15[1] = pUVar10;
      *puVar15 = 1;
    }
    thunk_FUN_1042c3f0(unaff_EBP,&stack0xfffffed4);
  }
  if (*(int *)(pUVar10 + 0x204) != 0) {
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6ec) = (float)*(int *)(pUVar10 + 0x19c);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6f0) = (float)*(int *)(pUVar10 + 0x1a0);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6f4) = (float)*(int *)(pUVar10 + 0x1a4);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6f8) = (float)*(int *)(pUVar10 + 0x1a8);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6fc) = (float)*(int *)(pUVar10 + 0x1ac);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x700) = (float)*(int *)(pUVar10 + 0x1b0);
    if ((char)((uint)pUVar1 >> 0x18) == '\0') {
      AActor::SetCollisionSize
                (*(AActor **)(pUVar10 + 0x204),*(float *)(pUVar10 + 0x1cc),
                 *(float *)(pUVar10 + 0x1d0));
    }
    iVar13 = *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0);
    iVar16 = User::GetItemClassID(pUVar10,10);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) = iVar16;
    if (*(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) == 0) {
      iVar16 = User::GetItemClassID(pUVar10,0xb);
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) = iVar16;
    }
    if (*(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) == 0) {
      iVar16 = User::GetItemClassID(pUVar10,0xc);
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0) = iVar16;
    }
    if (iVar13 != *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a0)) {
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x182c) = iVar13;
      iVar13 = *(int *)(pUVar10 + 0x204);
      if (((-1 < *(int *)(iVar13 + 0x6a0)) &&
          (iVar16 = thunk_FUN_10422ee0(iVar13 + 0x6a0), iVar16 != 0)) && (*(int *)(iVar16 + 4) == 0)
         ) {
        if (*(int *)(iVar16 + 0x168) < 0) {
          *(uint *)(iVar13 + 0x1820) = *(uint *)(iVar13 + 0x1820) & 0xfffffffd;
        }
        else {
          *(uint *)(iVar13 + 0x1820) = *(uint *)(iVar13 + 0x1820) | 2;
        }
      }
    }
    iVar13 = User::GetItemClassID(pUVar10,2);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a4) = iVar13;
    iVar13 = User::GetItemClassID(pUVar10,0xd);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x6a8) = iVar13;
    fVar4 = (float)_DAT_1088ae20;
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6b8) = (float)*(int *)(pUVar10 + 0x23c) / fVar4;
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6bc) = (float)*(int *)(pUVar10 + 0x2ac) / fVar4;
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6b0) = (float)*(double *)(pUVar10 + 0x1bc);
    *(float *)(*(int *)(pUVar10 + 0x204) + 0x6b4) = (float)*(double *)(pUVar10 + 0x1c4);
    *(undefined1 *)(*(int *)(*(int *)(pUVar10 + 0x204) + 0x14d8) + 0x434) = (undefined1)uStack_e8;
    iVar13 = *(int *)(pUVar10 + 0x204);
    if (*(char *)(*(int *)(iVar13 + 0x14d8) + 0x434) == '\x01') {
      *(float *)(iVar13 + 0x1550) = *(float *)(iVar13 + 0x6ec) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      *(float *)(iVar13 + 0x1554) = *(float *)(iVar13 + 0x6f4) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      fVar4 = *(float *)(iVar13 + 0x6fc);
    }
    else {
      *(float *)(iVar13 + 0x1550) = *(float *)(iVar13 + 0x6f0) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      *(float *)(iVar13 + 0x1554) = *(float *)(iVar13 + 0x6f8) * *(float *)(iVar13 + 0x6b4);
      iVar13 = *(int *)(pUVar10 + 0x204);
      fVar4 = *(float *)(iVar13 + 0x700);
    }
    *(float *)(iVar13 + 0x1558) = fVar4 * *(float *)(iVar13 + 0x6b4);
    sVar9 = *(short *)(pUVar10 + 0x2b0);
    if (((sVar9 == 1) || (sVar9 == 3)) || ((sVar9 == 5 || ((sVar9 == 7 || (sVar9 == 8)))))) {
      APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
      if (*(short *)(pUVar10 + 0x2b0) == 7) {
        *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 10;
      }
      else {
        *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x62c) = 9;
      }
      *(int *)(*(int *)(pUVar10 + 0x204) + 0x63c) = *(int *)(pUVar10 + 0x204);
    }
    if ((*(short *)(pUVar10 + 0x2b0) == 0) && (*(int *)(*(APawn **)(pUVar10 + 0x204) + 0x62c) == 9))
    {
      APawn::NActionStop(*(APawn **)(pUVar10 + 0x204));
    }
    pAVar18 = *(APawn **)(pUVar10 + 0x204);
    if ((*(int *)(pAVar18 + 0x718) != 0) &&
       ((*(byte *)(*(int *)(pAVar18 + 0x718) + 0x714) & 1) != 0)) {
      APawn::CheckCubicStatus(pAVar18,0,(short *)0x0);
      pAVar18 = *(APawn **)(*(int *)(pUVar10 + 0x204) + 0x718);
    }
    APawn::CheckCubicStatus(pAVar18,(short)puVar19,psStack_10c);
    *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x17d0) = uStack_ec;
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x778) = (int)fStack_f0._0_1_;
    iVar13 = User::HasBootsSound(pUVar10,iStack_58);
    *(int *)(*(int *)(pUVar10 + 0x204) + 0x1828) = iVar13;
    *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x1830) = *(undefined4 *)(pUVar10 + 0x2e8);
    puVar19 = (uint *)(*(int *)(pUVar10 + 0x204) + 0x1820);
    *puVar19 = *puVar19 ^
               (*(uint *)(*(int *)(pUVar10 + 0x204) + 0x1820) ^ *(uint *)(pUVar10 + 0x2fc)) & 1;
  }
  pUVar7 = DAT_10b1f538;
  if (DAT_10b1f538 != (UNetworkHandler *)0x0) {
    iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                     (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *unaff_EBP) * 4);
    if (iVar13 != -1) {
      iVar16 = *(int *)(DAT_10b1f538 + 0x194);
      do {
        if (*(uint *)(iVar16 + 4 + iVar13 * 0xc) == *unaff_EBP) {
          if (*(int *)(iVar16 + 8 + iVar13 * 0xc) != 0) {
            iVar13 = *(int *)(*(int *)(DAT_10b1f538 + 0x1a0) +
                             (*(int *)(DAT_10b1f538 + 0x1a4) - 1U & *unaff_EBP) * 4);
            goto joined_r0x104357a5;
          }
          break;
        }
        iVar13 = *(int *)(iVar16 + iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
LAB_10435764:
  uVar11 = 0;
LAB_10435766:
  (**(code **)(**(int **)(pUVar7 + 0x54) + 0x170))(uVar11,0,0);
LAB_10435c34:
  iVar13 = *(int *)(pUVar10 + 0x204);
  if (iVar13 != 0) {
    *(uint *)(iVar13 + 0x1820) =
         *(uint *)(iVar13 + 0x1820) ^
         (*(int *)(pUVar10 + 0x300) * 4 ^ *(uint *)(iVar13 + 0x1820)) & 4;
    *(undefined4 *)(*(int *)(pUVar10 + 0x204) + 0x1824) = *(undefined4 *)(pUVar10 + 0x304);
  }
  User::SetEventmatchEffect(pUVar10,*(int *)(pUVar10 + 0x2ec));
  if (0 < *(int *)(pUVar10 + 0x284)) {
    thunk_FUN_104317d0(*(int *)(pUVar10 + 0x284),*(undefined4 *)(pUVar10 + 0x288),
                       *(undefined4 *)(pUVar10 + 0x28c),*(undefined4 *)(pUVar10 + 0x290),
                       *(undefined4 *)(pUVar10 + 0x2a0),0x80000000);
  }
  *(uint *)(pUVar10 + 0x298) = *(uint *)(pUVar10 + 0x294) >> 6 & 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4ec))();
  if (0 < (short)unaff_EBP) {
    (**(code **)(**(int **)GMalloc_exref + 8))(psStack_118);
  }
  if (pUStack_d4 != (User *)0x0) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x720))
              (*(undefined4 *)(pUVar10 + 0x204),0,iStack_c0,iStack_bc,iStack_b8,0,0);
  }
  User::SetAttackItemVariationOption(pUVar10);
  UNetworkHandler::NotifyQuestMark(DAT_10b1f538);
  (**(code **)(*(int *)GL2Console + 0x6f0))(pUVar10);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_24;
  return extraout_EAX & 0xffffff00;
}


// ==== 104a7a00 FUN_104a7a00 target=10c5104c callers=OnSaveStart@10306811
// strings: 

void __fastcall FUN_104a7a00(FL2ReplayManager *param_1)

{
  FString aFStack_30 [8];
  undefined4 uStack_28;
  L2ParamStack aLStack_1c [12];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10816b52;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x54a0) == 0) {
    ExceptionList = &local_c;
    FString::FString(aFStack_30,(ushort *)&DAT_10853d94);
    local_4 = 0xffffffff;
    FL2ReplayManager::PrepareSave(param_1);
    L2ParamStack::L2ParamStack((L2ParamStack *)&uStack_28,10);
    uStack_10 = 1;
    L2ParamStack::PushBack((L2ParamStack *)&uStack_28,(void *)0x674);
    (**(code **)(*(int *)GL2Console + 0x354))(&uStack_28,0,0,0);
    if (*(int *)(DAT_10c51044 + 0x60) != 0) {
      uStack_28 = 0x104a7aac;
      (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0x4d4))();
    }
    local_4 = 0xffffffff;
    uStack_28 = 0x104a7abe;
    L2ParamStack::~L2ParamStack(aLStack_1c);
  }
  ExceptionList = local_c;
  return;
}


// ==== 104aca20 FUN_104aca20 target=10c5104c callers=OnSaveStartStop@10313e2b
// strings: 

void __fastcall FUN_104aca20(FL2ReplayManager *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uStack_44;
  void *pvVar3;
  undefined1 *local_30;
  L2ParamStack local_2c [4];
  L2ParamStack aLStack_28 [8];
  void *pvStack_20;
  L2ParamStack local_1c [4];
  uint uStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10817394;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x54a0) == 2) {
    ExceptionList = &local_c;
    L2ParamStack::L2ParamStack(local_1c,10);
    local_4 = 0;
    L2ParamStack::L2ParamStack(local_2c,10);
    local_4 = CONCAT31(local_4._1_3_,1);
    L2ParamStack::PushBack(local_1c,(void *)0x0);
    puVar1 = FString::operator*((FString *)(param_1 + 0x54c0));
    L2ParamStack::PushBack(local_1c,puVar1);
    (**(code **)(*(int *)GL2Console + 0x350))();
    iVar2 = FL2ReplayManager::Save(param_1);
    if (iVar2 == 0) {
      pvVar3 = (void *)0x676;
    }
    else {
      pvVar3 = (void *)0x675;
    }
    uStack_44 = 0x104acac1;
    L2ParamStack::PushBack((L2ParamStack *)&local_30,pvVar3);
    uStack_44 = 0;
    (**(code **)(*(int *)GL2Console + 0x354))(&local_30,0);
    FL2ReplayManager::Clear(param_1,-1);
    uStack_18 = uStack_18 & 0xffffff00;
    L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffc0);
    uStack_18 = 0xffffffff;
    L2ParamStack::~L2ParamStack((L2ParamStack *)&local_30);
    ExceptionList = pvStack_20;
    return;
  }
  if (*(int *)(param_1 + 0x54a0) == 0) {
    local_30 = (undefined1 *)&uStack_44;
    ExceptionList = &local_c;
    FString::FString((FString *)&uStack_44,(ushort *)&DAT_10853d94);
    local_4 = 0xffffffff;
    FL2ReplayManager::PrepareSave(param_1);
    L2ParamStack::L2ParamStack(aLStack_28,10);
    uStack_10 = 3;
    L2ParamStack::PushBack(aLStack_28,(void *)0x674);
    (**(code **)(*(int *)GL2Console + 0x354))(aLStack_28,0,0,0);
    if (*(int *)(DAT_10c51044 + 0x60) != 0) {
      (**(code **)(**(int **)(DAT_10c51044 + 0x60) + 0x4d4))();
    }
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_1c);
  }
  ExceptionList = local_c;
  return;
}


// ==== 104acc30 FUN_104acc30 target=10c5104c callers=OnSaveStop@1030f466
// strings: 

void __fastcall FUN_104acc30(FL2ReplayManager *param_1)

{
  ushort *puVar1;
  int iVar2;
  void *pvVar3;
  L2ParamStack local_2c [16];
  L2ParamStack local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108173c2;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x54a0) == 2) {
    ExceptionList = &local_c;
    L2ParamStack::L2ParamStack(local_1c,10);
    local_4 = 0;
    L2ParamStack::L2ParamStack(local_2c,10);
    local_4._0_1_ = 1;
    L2ParamStack::PushBack(local_1c,(void *)0x0);
    puVar1 = FString::operator*((FString *)(param_1 + 0x54c0));
    L2ParamStack::PushBack(local_1c,puVar1);
    (**(code **)(*(int *)GL2Console + 0x350))(local_1c);
    iVar2 = FL2ReplayManager::Save(param_1);
    if (iVar2 == 0) {
      pvVar3 = (void *)0x676;
    }
    else {
      pvVar3 = (void *)0x675;
    }
    L2ParamStack::PushBack((L2ParamStack *)&stack0xffffffd0,pvVar3);
    (**(code **)(*(int *)GL2Console + 0x354))(&stack0xffffffd0,0,0,0);
    FL2ReplayManager::Clear(param_1,-1);
    local_4 = (uint)local_4._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_2c);
    local_4 = 0xffffffff;
    L2ParamStack::~L2ParamStack(local_1c);
  }
  ExceptionList = local_c;
  return;
}


// ==== 105396f0 FUN_105396f0 target=10c5104c callers=Exec@10309a70
// strings: 108b71c8=.\UnCamera.cpp | 108b5310=Actor | 108b7a00=TRUEFONT | 108b79e0=ISFULLSCREEN | 108b79d4=true | 108b79c4=false | 108b79c4=false | 108b79d4=true | 108b79b0=GETPING | 108b799c=INJECT | 108b7978=Injecting: %s | 108b7960=NETSPEED | 108b7938=NETSPEED %i | 108b7920=LANSPEED | 108b790c=SHOWALL | 108b78fc=REPORT | 108b78e4=Report:\n | 108b78d8=17:00:35 | 108b78c8=Aug 21 2007 | 108b7898=   Version: %s %s\n | 108b7864=   Player class: %s\n | 108b7844=   URL: %s\n | 108b7808=   Location: %i %i %i\n | 108b77d8=   Network client\n | 108b77a8=   Game class: %s\n | 108b7778=   Difficulty: %i\n | 108b776c=SHOT | 108b774c=Shot%05i.jpg | 108b772c=Shot%05i.bmp | 108b7710=SHOWACTORS | 108b76f4=HIDEACTORS | 108b76e4=RMODE | 108b76d8=WIRE | 108b76c0=l2shader | 108b76b4=REND | 108b76a4=BLEND | 108b7690=NORMALS | 108b7684=BONE | 108b7678=SKIN | 108b7668=BOUND | 108b7654=DEFAULT | 108b7644=RESET | 108b7638=SHOW | 108b7628=ACTORS | 108b7610=ACTORINFO | 108b75f0=STATICMESHES | 108b75dc=TERRAIN | 108b75b0=CORONAS | 108b7598=PARTICLES | 108b757c=RADII | 108b756c=FLUID | 108b7550=PROJECTORS | 108b7524=FALLBACKMATERIALS | 108b750c=COLLISION | 108b74f4=TERRITORY | 108b74e4=VOLUME | 108b74d8=NAME | 108b74cc=DROP | 108b74b0=WINDOWNAME | 108b7498=WINDOWBOX | 108b747c=MUSICVOLUME | 108b7460=CINEMATICS | 108b7438=CINEMATICSRATIO | 108b7410=FIXEDVISIBILITY | 108b73ec=TOGGLEREFRAST | 108b73e0=EXEC | 

undefined4 __thiscall FUN_105396f0(UPlayer *param_1,FOutputDevice *param_2,FOutputDevice *param_3)

{
  uint *puVar1;
  FOutputDevice *pFVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  UClass *pUVar11;
  FString *this;
  ushort *puVar12;
  UObject *pUVar13;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  FOutputDevice *this_04;
  undefined4 unaff_EBX;
  float fVar14;
  double dStack_90c;
  undefined4 uStack_908;
  ushort local_108 [64];
  L2ParamStack local_88 [24];
  L2ParamStack local_70 [16];
  L2ParamStack local_60 [16];
  FString local_50 [16];
  int local_40;
  int local_38;
  int local_34;
  FOutputDevice local_24 [4];
  FString local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1081ae98;
  local_10 = ExceptionList;
  dStack_90c = (double)CONCAT44(uStack_908,unaff_EBX);
  local_14 = &stack0xfffff6ec;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar5 = &stack0xfffff6ec;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert("Actor",".\\UnCamera.cpp",0x171);
    puVar5 = local_14;
  }
  local_14 = puVar5;
  pFVar2 = param_3;
  if (((*(int *)(param_1 + 0x40) == 0) ||
      (iVar6 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x40) + 0x34))(param_2,param_3),
      iVar6 == 0)) &&
     ((*(int *)(param_1 + 0x44) == 0 ||
      (iVar6 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x44) + 0x34))(param_2,pFVar2),
      iVar6 == 0)))) {
    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"TRUEFONT");
    if (iVar6 == 0) {
      iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"ISFULLSCREEN");
      if (iVar6 == 0) {
        iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"GETPING");
        if (iVar6 == 0) {
          iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"INJECT");
          if (iVar6 == 0) {
            iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"NETSPEED");
            if (iVar6 == 0) {
              iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"LANSPEED");
              if (iVar6 == 0) {
                iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"SHOWALL");
                if (iVar6 != 0) {
                  for (iVar6 = 0; iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x3c);
                      iVar6 = iVar6 + 1) {
                    iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x38);
                    if (*(int *)(iVar8 + iVar6 * 4) != 0) {
                      puVar1 = (uint *)(*(int *)(iVar8 + iVar6 * 4) + 100);
                      *puVar1 = *puVar1 & 0xffffffdf;
                    }
                  }
                  ExceptionList = local_10;
                  return 1;
                }
                iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"REPORT");
                if (iVar6 != 0) {
                  thunk_FUN_10538650(&DAT_10853d94);
                  local_8._0_1_ = 1;
                  FOutputDevice::Log(local_24,(ushort *)L"Report:\r\n");
                  appFromAnsi("17:00:35",(ushort *)0x0);
                  appFromAnsi("Aug 21 2007",(ushort *)0x0);
                  FOutputDevice::Logf(this_02,(ushort *)local_24);
                  pUVar11 = UObject::GetClass(*(UObject **)(param_1 + 4));
                  UObject::GetName((UObject *)pUVar11);
                  FOutputDevice::Logf(local_24,(ushort *)local_24);
                  this = (FString *)
                         FURL::String((FURL *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x78),
                                      (int)local_50);
                  local_8._0_1_ = 2;
                  FString::operator*(this);
                  FOutputDevice::Logf(this_03,(ushort *)local_24);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  FString::~FString(local_50);
                  FUN_107a6660();
                  FUN_107a6660();
                  FUN_107a6660();
                  FOutputDevice::Logf(this_04,(ushort *)local_24);
                  pUVar13 = *(UObject **)(*(int *)(*(int *)(param_1 + 4) + 0xe0) + 0x614);
                  if (pUVar13 == (UObject *)0x0) {
                    dStack_90c = (double)CONCAT44(uStack_908,L"   Network client\r\n");
                    FOutputDevice::Logf((FOutputDevice *)0x0,(ushort *)local_24);
                  }
                  else {
                    pUVar11 = UObject::GetClass(pUVar13);
                    puVar12 = UObject::GetName((UObject *)pUVar11);
                    dStack_90c = (double)CONCAT44(uStack_908,puVar12);
                    FOutputDevice::Logf(local_24,(ushort *)local_24);
                    pFVar2 = *(FOutputDevice **)(*(int *)(*(int *)(param_1 + 4) + 0xe0) + 0x614);
                    dStack_90c = (double)*(float *)(pFVar2 + 0x3c0);
                    FOutputDevice::Logf(pFVar2,(ushort *)local_24);
                  }
                  puVar12 = FString::operator*(local_20);
                  dStack_90c = (double)CONCAT44(0x10539b52,SUB84(dStack_90c,0));
                  appClipboardCopy(puVar12);
                  local_8 = local_8 & 0xffffff00;
                  thunk_FUN_10538890();
                  ExceptionList = local_10;
                  return 1;
                }
                iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"SHOT");
                if (iVar6 == 0) {
                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"SHOWACTORS");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0xe0) + 0x5d4) == '\0') {
                      puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x5ac);
                      *puVar1 = *puVar1 | 8;
                      ExceptionList = local_10;
                      return 1;
                    }
                    ExceptionList = local_10;
                    return 0;
                  }
                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"HIDEACTORS");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0xe0) + 0x5d4) == '\0') {
                      puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x5ac);
                      *puVar1 = *puVar1 & 0xfffffff7;
                      ExceptionList = local_10;
                      return 1;
                    }
                    ExceptionList = local_10;
                    return 0;
                  }
                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"RMODE");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0xe0) + 0x5d4) != '\0') {
                      ExceptionList = local_10;
                      return 0;
                    }
                    iVar6 = appStricmp((ushort *)L"WIRE",(ushort *)param_2);
                    if (iVar6 == 0) {
                      *(uint *)GL2WireSkeletalMesh_exref =
                           (uint)(*(int *)GL2WireSkeletalMesh_exref == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = appAtoi((ushort *)param_2);
                    if (iVar6 < 1) {
                      ExceptionList = local_10;
                      return 1;
                    }
                    *(int *)(*(int *)(param_1 + 4) + 0x5b8) = iVar6;
                    ExceptionList = local_10;
                    return 1;
                  }
                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"l2shader");
                  if (iVar6 != 0) {
                    *(uint *)GL2Shader_exref = (uint)(*(int *)GL2Shader_exref == 0);
                    (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0xe4) + 0x118))();
                    for (iVar6 = 0;
                        iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x11b4);
                        iVar6 = iVar6 + 1) {
                      local_34 = iVar6;
                      (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) +
                                                      0x11b0) + iVar6 * 4) + 0x118))();
                    }
                    ExceptionList = local_10;
                    return 1;
                  }
                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"REND");
                  if (iVar6 != 0) {
                    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0xe0) + 0x5d4) != '\0') {
                      ExceptionList = local_10;
                      return 0;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"BLEND");
                    if ((iVar6 != 0) ||
                       (iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"NORMALS"), iVar6 != 0))
                    {
                      *(uint *)(param_1 + 0xe8) = (uint)(*(int *)(param_1 + 0xe8) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"BONE");
                    if (iVar6 != 0) {
                      *(uint *)(param_1 + 0xe0) = (uint)(*(int *)(param_1 + 0xe0) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"SKIN");
                    if (iVar6 != 0) {
                      *(uint *)(param_1 + 0xe4) = (uint)(*(int *)(param_1 + 0xe4) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"BOUND");
                    if (iVar6 != 0) {
                      *(uint *)(param_1 + 0xdc) = (uint)(*(int *)(param_1 + 0xdc) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"DEFAULT");
                    if ((iVar6 == 0) &&
                       (iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"RESET"), iVar6 == 0)) {
                      ExceptionList = local_10;
                      return 0;
                    }
                    *(undefined4 *)(param_1 + 0xdc) = 0;
                    *(undefined4 *)(param_1 + 0xe8) = 0;
                    *(undefined4 *)(param_1 + 0xe0) = 0;
                    ExceptionList = local_10;
                    return 1;
                  }
                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"SHOW");
                  if (iVar6 == 0) {
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"CINEMATICS");
                    if (iVar6 != 0) {
                      iVar6 = appStrlen((ushort *)param_2);
                      if (iVar6 != 0) {
                        iVar6 = appAtoi((ushort *)param_2);
                        *(int *)(param_1 + 0xf0) = iVar6;
                        ExceptionList = local_10;
                        return 1;
                      }
                      *(uint *)(param_1 + 0xf0) = (uint)(*(int *)(param_1 + 0xf0) == 0);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"CINEMATICSRATIO");
                    if (iVar6 != 0) {
                      fVar14 = appAtof((ushort *)param_2);
                      *(float *)(param_1 + 0xf4) = fVar14;
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"FIXEDVISIBILITY");
                    if (iVar6 != 0) {
                      iVar6 = *(int *)(param_1 + 4);
                      if (*(char *)(*(int *)(iVar6 + 0xe0) + 0x5d4) != '\0') {
                        ExceptionList = local_10;
                        return 0;
                      }
                      *(uint *)(iVar6 + 0x564) =
                           *(uint *)(iVar6 + 0x564) ^
                           (~*(uint *)(iVar6 + 0x564) ^ *(uint *)(iVar6 + 0x564)) & 0x800000;
                      iVar6 = *(int *)(param_1 + 4);
                      if ((*(uint *)(iVar6 + 0x564) & 0x800000) == 0) {
                        ExceptionList = local_10;
                        return 1;
                      }
                      *(undefined4 *)(iVar6 + 0x600) = *(undefined4 *)(iVar6 + 0x1bc);
                      *(undefined4 *)(iVar6 + 0x604) = *(undefined4 *)(iVar6 + 0x1c0);
                      *(undefined4 *)(iVar6 + 0x608) = *(undefined4 *)(iVar6 + 0x1c4);
                      iVar8 = *(int *)(param_1 + 4);
                      *(undefined4 *)(iVar8 + 0x60c) = *(undefined4 *)(iVar8 + 0x1c8);
                      *(undefined4 *)(iVar8 + 0x610) = *(undefined4 *)(iVar8 + 0x1cc);
                      *(undefined4 *)(iVar8 + 0x614) = *(undefined4 *)(iVar8 + 0x1d0);
                      piVar4 = *(int **)(param_1 + 4);
                      (**(code **)(*piVar4 + 0x36c))(iVar6,piVar4 + 0x180,piVar4 + 0x183);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"TOGGLEREFRAST");
                    if (iVar6 != 0) {
                      *(uint *)(param_1 + 0xa0) = (uint)(*(int *)(param_1 + 0xa0) == 0);
                      iVar6 = **(int **)(param_1 + 0x44);
                      uVar10 = (**(code **)(*(int *)(param_1 + -0x38) + 0x7c))(0,1);
                      (**(code **)(iVar6 + 0x74))
                                (param_1 + -0x38,*(undefined4 *)(param_1 + 0x5c),
                                 *(undefined4 *)(param_1 + 0x60),uVar10);
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"EXEC");
                    if (iVar6 != 0) {
                      iVar6 = ParseToken((ushort **)&param_2,(ushort *)&uStack_908,0x400,0);
                      if (iVar6 == 0) {
                        ExceptionList = local_10;
                        return 1;
                      }
                      UViewport::ExecMacro
                                ((UViewport *)(param_1 + -0x38),(ushort *)&uStack_908,pFVar2);
                      ExceptionList = local_10;
                      return 1;
                    }
                    if ((*(int **)(param_1 + 8) != (int *)0x0) &&
                       (iVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x4c))
                                          (param_2,pFVar2,
                                           *(undefined4 *)(*(int *)(param_1 + 4) + 0x3bc)),
                       iVar6 != 0)) {
                      ExceptionList = local_10;
                      return 1;
                    }
                    iVar6 = UPlayer::Exec(param_1,(ushort *)param_2,pFVar2);
                    if (iVar6 != 0) {
                      ExceptionList = local_10;
                      return 1;
                    }
                    ExceptionList = local_10;
                    return 0;
                  }
                  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0xe0) + 0x5d4) != '\0') {
                    ExceptionList = local_10;
                    return 0;
                  }
                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"ACTORS");
                  if (iVar6 == 0) {
                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"ACTORINFO");
                    if (iVar6 == 0) {
                      iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"STATICMESHES");
                      if (iVar6 == 0) {
                        iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"TERRAIN");
                        if (iVar6 == 0) {
                          iVar6 = ParseCommand((ushort **)&param_2,(ushort *)&DAT_108b75d0);
                          if (iVar6 == 0) {
                            iVar6 = ParseCommand((ushort **)&param_2,(ushort *)&DAT_108b75c4);
                            if (iVar6 == 0) {
                              iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"CORONAS");
                              if (iVar6 == 0) {
                                iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"PARTICLES");
                                if (iVar6 == 0) {
                                  iVar6 = ParseCommand((ushort **)&param_2,(ushort *)&DAT_108b758c);
                                  if (iVar6 == 0) {
                                    iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"RADII");
                                    if (iVar6 == 0) {
                                      iVar6 = ParseCommand((ushort **)&param_2,(ushort *)L"FLUID");
                                      if (iVar6 == 0) {
                                        iVar6 = ParseCommand((ushort **)&param_2,
                                                             (ushort *)L"PROJECTORS");
                                        if (iVar6 == 0) {
                                          iVar6 = ParseCommand((ushort **)&param_2,
                                                               (ushort *)L"FALLBACKMATERIALS");
                                          if (iVar6 == 0) {
                                            iVar6 = ParseCommand((ushort **)&param_2,
                                                                 (ushort *)L"COLLISION");
                                            if (iVar6 == 0) {
                                              iVar6 = ParseCommand((ushort **)&param_2,
                                                                   (ushort *)L"TERRITORY");
                                              if (iVar6 == 0) {
                                                iVar6 = ParseCommand((ushort **)&param_2,
                                                                     (ushort *)L"VOLUME");
                                                if (iVar6 == 0) {
                                                  iVar6 = ParseCommand((ushort **)&param_2,
                                                                       (ushort *)L"NAME");
                                                  if (iVar6 == 0) {
                                                    iVar6 = ParseCommand((ushort **)&param_2,
                                                                         (ushort *)L"DROP");
                                                    if (iVar6 == 0) {
                                                      iVar6 = ParseCommand((ushort **)&param_2,
                                                                           (ushort *)L"WINDOWNAME");
                                                      if (iVar6 == 0) {
                                                        iVar6 = ParseCommand((ushort **)&param_2,
                                                                             (ushort *)L"WINDOWBOX")
                                                        ;
                                                        if (iVar6 == 0) {
                                                          iVar6 = ParseCommand((ushort **)&param_2,
                                                                               (ushort *)
                                                                               L"MUSICVOLUME");
                                                          if (iVar6 != 0) {
                                                            *(uint *)(*(int *)(param_1 + 4) + 0x5ac)
                                                                 = *(uint *)(*(int *)(param_1 + 4) +
                                                                            0x5ac) ^ 0x2000;
                                                          }
                                                        }
                                                        else {
                                                          *(int *)GL2ShowWindowBox_exref =
                                                               (*(int *)GL2ShowWindowBox_exref + 1)
                                                               % 3;
                                                        }
                                                      }
                                                      else {
                                                        *(int *)GL2ShowWindowName_exref =
                                                             (*(int *)GL2ShowWindowName_exref + 1) %
                                                             3;
                                                      }
                                                    }
                                                    else {
                                                      *(uint *)GL2HideDropMesh_exref =
                                                           (uint)(*(int *)GL2HideDropMesh_exref == 0
                                                                 );
                                                    }
                                                  }
                                                  else {
                                                    *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                                         *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^
                                                         0x1000;
                                                  }
                                                }
                                                else {
                                                  *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                                       *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^
                                                       0x800000;
                                                }
                                              }
                                              else {
                                                *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                                     *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^
                                                     0x80000000;
                                              }
                                            }
                                            else {
                                              *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                                   *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^
                                                   0x80000000;
                                            }
                                          }
                                          else {
                                            *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                                 *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^
                                                 0x40000000;
                                          }
                                        }
                                        else {
                                          *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                               *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x20000000
                                          ;
                                        }
                                      }
                                      else {
                                        *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                             *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x10000000;
                                      }
                                    }
                                    else {
                                      *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                           *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 2;
                                    }
                                  }
                                  else {
                                    *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                         *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x2000000;
                                  }
                                }
                                else {
                                  *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                       *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x1000000;
                                }
                              }
                              else {
                                *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                     *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x400000;
                              }
                            }
                            else {
                              *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                   *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 4;
                            }
                          }
                          else {
                            *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                                 *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x80000;
                          }
                        }
                        else {
                          *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                               *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x40000;
                        }
                      }
                      else {
                        *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                             *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x8000;
                      }
                    }
                    else {
                      *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                           *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 0x4000000;
                    }
                  }
                  else {
                    *(uint *)(*(int *)(param_1 + 4) + 0x5ac) =
                         *(uint *)(*(int *)(param_1 + 4) + 0x5ac) ^ 8;
                  }
                  if (*(int *)GIsEditor_exref != 0) {
                    ExceptionList = local_10;
                    return 1;
                  }
                  for (iVar6 = 0; iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x3c);
                      iVar6 = iVar6 + 1) {
                    iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x38) +
                                    iVar6 * 4);
                    if ((iVar8 != 0) && ((*(byte *)(iVar8 + 100) & 0x10) != 0)) {
                      *(undefined1 *)(iVar8 + 0x50) = 0;
                    }
                  }
                  for (iVar6 = 0; iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x11b4);
                      iVar6 = iVar6 + 1) {
                    iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x11b0) +
                                    iVar6 * 4);
                    for (iVar9 = 0; iVar9 < *(int *)(iVar8 + 0x3c); iVar9 = iVar9 + 1) {
                      iVar3 = *(int *)(*(int *)(iVar8 + 0x38) + iVar9 * 4);
                      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 100) & 0x10) != 0)) {
                        *(undefined1 *)(iVar3 + 0x50) = 0;
                      }
                    }
                  }
                  ExceptionList = local_10;
                  return 1;
                }
                if (*(int *)GIsEditor_exref != 0) {
                  ExceptionList = local_10;
                  return 1;
                }
                FMemMark::FMemMark((FMemMark *)local_50,(FMemStack *)GMem_exref);
                iVar6 = ((int)(*(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) >> 0x1f & 3U))
                        >> 2) * 4;
                local_38 = iVar6;
                param_3 = (FOutputDevice *)
                          thunk_FUN_10522300(4,GMem_exref,*(int *)(param_1 + 0x60) * iVar6,8);
                (**(code **)(**(int **)(param_1 + 0x44) + 0xa4))(param_1 + -0x38,param_3);
                for (iVar8 = 0; local_40 = iVar8, iVar8 < 0x10000; iVar8 = iVar8 + 1) {
                  if (*(int *)GL2ScreenShotQuality_exref == 0) {
                    pwVar7 = L"Shot%05i.bmp";
                  }
                  else {
                    pwVar7 = L"Shot%05i.jpg";
                  }
                  appSprintf(local_108,(ushort *)pwVar7,iVar8);
                  iVar9 = (**(code **)(**(int **)GFileManager_exref + 0x10))(local_108);
                  if (iVar9 < 0) break;
                }
                if ((*(int *)GIsL2Console_exref != 0) && (*(int *)GIsL2NetLogin_exref != 0)) {
                  pUVar13 = UObject::GetOuter((UObject *)(param_1 + -0x38));
                  iVar8 = thunk_FUN_105395a0(*(undefined4 *)(pUVar13 + 0x34));
                  if (iVar8 != 0) {
                    L2ParamStack::L2ParamStack(local_60,10);
                    local_8._0_1_ = 3;
                    L2ParamStack::L2ParamStack(local_70,10);
                    local_8._0_1_ = 4;
                    L2ParamStack::L2ParamStack((L2ParamStack *)local_24,10);
                    local_8._0_1_ = 5;
                    L2ParamStack::PushBack(local_60,(void *)0x0);
                    L2ParamStack::PushBack(local_60,local_108);
                    (**(code **)(*(int *)GL2Console + 0x350))(local_60);
                    L2ParamStack::PushBack(local_70,(void *)0x1);
                    L2ParamStack::PushBack(local_70,*(void **)(param_1 + 0x5c));
                    (**(code **)(*(int *)GL2Console + 0x350))(local_70);
                    L2ParamStack::PushBack((L2ParamStack *)local_24,(void *)0x1);
                    L2ParamStack::PushBack((L2ParamStack *)local_24,*(void **)(param_1 + 0x60));
                    (**(code **)(*(int *)GL2Console + 0x350))(local_24);
                    L2ParamStack::L2ParamStack(local_88,10);
                    local_8._0_1_ = 6;
                    L2ParamStack::PushBack(local_88,(void *)0x4b4);
                    (**(code **)(*(int *)GL2Console + 0x354))(local_88,0,0,0);
                    local_8._0_1_ = 5;
                    L2ParamStack::~L2ParamStack(local_88);
                    local_8._0_1_ = 4;
                    L2ParamStack::~L2ParamStack((L2ParamStack *)local_24);
                    local_8._0_1_ = 3;
                    L2ParamStack::~L2ParamStack(local_70);
                    local_8 = (uint)local_8._1_3_ << 8;
                    L2ParamStack::~L2ParamStack(local_60);
                    iVar6 = local_38;
                  }
                }
                iVar8 = *(int *)GL2ScreenShotQuality_exref;
                if (iVar8 != 0) {
                  iVar9 = 0;
                  if (iVar8 == 1) {
                    iVar9 = 0x14;
                  }
                  else if (iVar8 == 2) {
                    iVar9 = 0x23;
                  }
                  else if (iVar8 == 3) {
                    iVar9 = 0x32;
                  }
                  appCreateJpeg(local_108,iVar6,*(int *)(param_1 + 0x60),(ulong *)param_3,
                                *(FFileManager **)GFileManager_exref,iVar9);
                  FMemMark::Pop((FMemMark *)local_50);
                  ExceptionList = local_10;
                  return 1;
                }
                appCreateBitmap(local_108,iVar6,*(int *)(param_1 + 0x60),(ulong *)param_3,
                                *(FFileManager **)GFileManager_exref,1);
                FMemMark::Pop((FMemMark *)local_50);
                ExceptionList = local_10;
                return 1;
              }
              iVar8 = appAtoi((ushort *)param_2);
              iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x70);
              *(int *)(DAT_10db0314 + 0x54) = iVar8;
              UObject::SaveConfig((UObject *)DAT_10db0314,0x4000,(ushort *)0x0);
              if (iVar8 < 500) {
                ExceptionList = local_10;
                return 1;
              }
              if (iVar6 == 0) {
                ExceptionList = local_10;
                return 1;
              }
              if (*(int *)(iVar6 + 0x44) == 0) {
                ExceptionList = local_10;
                return 1;
              }
              iVar9 = FURL::HasOption((FURL *)(*(int *)(iVar6 + 0x44) + 0x7c),
                                      (ushort *)&DAT_108b7954);
              if (iVar9 == 0) {
                ExceptionList = local_10;
                return 1;
              }
            }
            else {
              iVar8 = appAtoi((ushort *)param_2);
              iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x70);
              *(int *)(DAT_10db0314 + 0x54) = iVar8;
              UObject::SaveConfig((UObject *)DAT_10db0314,0x4000,(ushort *)0x0);
              if (iVar8 < 500) {
                ExceptionList = local_10;
                return 1;
              }
              if (iVar6 == 0) {
                ExceptionList = local_10;
                return 1;
              }
              if (*(int *)(iVar6 + 0x44) == 0) {
                ExceptionList = local_10;
                return 1;
              }
              iVar9 = FURL::HasOption((FURL *)(*(int *)(iVar6 + 0x44) + 0x7c),
                                      (ushort *)&DAT_108b7954);
              if (iVar9 != 0) {
                ExceptionList = local_10;
                return 1;
              }
            }
            uVar10 = thunk_FUN_10370460(iVar8,500,*(undefined4 *)(iVar6 + 0x70));
            *(undefined4 *)(*(int *)(iVar6 + 0x44) + 0x50) = uVar10;
            pFVar2 = *(FOutputDevice **)(*(int *)(iVar6 + 0x44) + 0x50);
            *(FOutputDevice **)(param_1 + 0x18) = pFVar2;
            FOutputDevice::Logf(pFVar2,(ushort *)(*(int *)(iVar6 + 0x44) + 0x34));
          }
          else {
            iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xe4) + 0x70);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x44) != 0)) {
              FOutputDevice::Logf(this_01,(ushort *)pFVar2);
              FOutputDevice::Logf(param_2,(ushort *)(*(int *)(iVar6 + 0x44) + 0x34));
            }
          }
        }
        else {
          FOutputDevice::Logf(this_00,(ushort *)pFVar2);
        }
      }
      else {
        iVar6 = (**(code **)(*(int *)(param_1 + -0x38) + 0x7c))();
        pwVar7 = L"true";
        if (iVar6 == 0) {
          pwVar7 = L"false";
        }
        FOutputDevice::Log(pFVar2,(ushort *)pwVar7);
      }
    }
    else {
      *(uint *)GIsTrueFontUse_exref = (uint)(*(int *)GIsTrueFontUse_exref == 0);
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10561c10 FUN_10561c10 target=10c5104c callers=SetSelectedCreatureID@1030ae57
// strings: 

void __thiscall FUN_10561c10(int param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081c2a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x414) = param_2;
  if (GL2Console != (UL2ConsoleWnd *)0x0) {
    (**(code **)(*(int *)GL2Console + 0x70))(param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10590e30 FUN_10590e30 target=10c5104c callers=Init@1030fe39
// strings: 108c5da0=.\UnGame.cpp | 108c6db0=sizeof(*this)==GetClass()->GetPropertiesSize() | 108c6d80=EnableSecondWindow | 108c6d44=..\Systextures\Crest.utx | 108c6d44=..\Systextures\Crest.utx | 108c6cf0=ini:Engine.Engine.ViewportManager | 108c6ca4=ini:Engine.Engine.RenderDevice | 108c6c70=Engine.NetworkHandler | 10884e34=Engine.OrcMove | 108bfc70=Replay.ini | 108c0260=SeamlessMaginotLine | 108c6c60=OPTION | 108bfc70=Replay.ini | 108c6c34=RewriteCameraInst | 108c6c60=OPTION | 108bfc70=Replay.ini | 108c6c10=LoadCameraInst | 108c6c60=OPTION | 108bfc70=Replay.ini | 108c6be8=UseBinCameraInst | 108c6c60=OPTION | 108bfc70=Replay.ini | 108c6bc4=LoadingTexName | 108c6c60=OPTION | 108bfc70=Replay.ini | 108c6ba8=UseChatData | 108c6c60=OPTION | 108bfc70=Replay.ini | 108c6b90=DrawName | 108c6c60=OPTION | 108bfc70=Replay.ini | 108bfc54=SCENE | 108c6b10=There is no Replay Scene!!! Check Replay.ini file!!! | 108c6af0=SceneName%d | 108bfc70=Replay.ini | 108bfc54=SCENE | 108c6ad4=AFTER_CG%d | 108bfc70=Replay.ini | 108bfc54=SCENE | 108bfc70=Replay.ini | 108c6ac4=UseBGM | 108c6c60=OPTION | 108c6ab4=BGM%d | 108bfc70=Replay.ini | 108bfc70=Replay.ini | 108c6a88=LoadResource | 108c6c60=OPTION | 108bfc70=Replay.ini | 108c6a78=PATHS | 108c6a64=PATHS%d | 108bfc70=Replay.ini | 108c6a78=PATHS | 108c6a4c=Entry.unr | 108a24e0=Entry | 108a24e0=Entry | 108a24d0=Engine | 108a24b0=FailedBrowse | 108c6a34=SkyLevel | 108c6a34=SkyLevel | 108a24d0=Engine | 108a24b0=FailedBrowse | 10857d18=User | 108a2518=DefaultPlayer | 108a24e0=Entry | 108a24e0=Entry | 108a24d0=Engine | 108a24b0=FailedBrowse | 108c6a14=LoadEntryMap | 108a24e0=Entry | 108a24e0=Entry | 108a24d0=Engine | 108a24b0=FailedBrowse | 108c6a04=SERVER | 108a24d0=Engine | 108c69e8=InvalidUrl | 108a24d0=Engine | 108a24b0=FailedBrowse | 108c69ac=engine.InteractionMaster | 108c6960=ini:Engine.Engine.GUIController | 108c6908=Could not spawn a GUI Controller! | 108c68c4=ini:Engine.Engine.Console | 108c6878=DEBUG : Begin GameData Load!!! | 108c6818=DEBUG : GameData Load Time = %2.4f sec | 108a24e0=Entry | 108c6a04=SERVER | 108c67d8=Game engine initialized | 108c67a8=IsUnderWaterEffect | 108c6788=IsUseCommand | 108a2508=Lobby | 108c6770=LogonMap | 108a24d0=Engine | 108a24b0=FailedBrowse | 108c6720=End of Loading Lobby : %2.4f sec | 108be34c=ini:Engine.Engine.L2Console | 108be34c=ini:Engine.Engine.L2Console | 108c6704=Alaudio.int | 108c66f0=MaxTime | 108c66d4=MusicVolume | 108c6704=Alaudio.int | 108c66ac=DefaultMusicTime | 108c66d4=MusicVolume | 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10590e30(UObject *param_1,FL2ReplayManager *param_2)

{
  undefined1 uVar1;
  UClass *pUVar2;
  int iVar3;
  int *piVar4;
  UObject *pUVar5;
  FL2ReplayManager *this;
  int iVar6;
  FString *this_00;
  ATerrainInfo *pAVar7;
  undefined4 uVar8;
  UInteraction *pUVar9;
  UBaseGUIController *this_01;
  UInteraction *pUVar10;
  ushort *puVar11;
  FLandMark *this_02;
  FOutputDevice *this_03;
  wchar_t *pwStack_421c;
  int *piStack_4218;
  wchar_t *pwStack_420c;
  ETravelType EVar12;
  wchar_t *pwStack_41fc;
  FString *pFStack_41f8;
  ushort local_4194;
  undefined1 local_4192 [8190];
  ushort local_2194;
  undefined1 local_2192 [8190];
  ushort local_194 [30];
  FURL local_158 [68];
  FURL local_114 [72];
  FURL local_cc [64];
  int local_8c;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  FString local_78 [12];
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  ushort *local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  FString local_44 [12];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  FString local_24 [12];
  FString local_18 [12];
  undefined8 local_c;
  
  puStack_80 = &LAB_1081e10f;
  local_84 = ExceptionList;
  local_8c = 0x10590e58;
  local_88 = &stack0xffffbe60;
  local_7c._0_1_ = 0;
  local_7c._1_3_ = 0;
  ExceptionList = &local_84;
  pUVar2 = UObject::GetClass(param_1);
  iVar3 = (**(code **)(*(int *)pUVar2 + 0x78))();
  if (iVar3 != 0x380) {
    appFailAssert("sizeof(*this)==GetClass()->GetPropertiesSize()",".\\UnGame.cpp",0x20f);
  }
  if (param_2 != (FL2ReplayManager *)0x84) {
    appRequestExit(0);
  }
  UEngine::Init((UEngine *)param_1,(int)param_2);
  local_54 = 1;
  (**(code **)**(undefined4 **)GConfig_exref)();
  if ((local_54 == 0) && (1 < *(int *)GL2ClientOrder_exref)) {
    appRequestExit(0);
    ExceptionList = local_84;
    return;
  }
  UGameEngine::InitClick((UGameEngine *)param_1);
  iVar3 = UObject::CheckSafePackage((ushort *)L"..\\Systextures\\Crest.utx");
  if (iVar3 == 0) {
    (**(code **)(**(int **)GFileManager_exref + 0x14))();
  }
  if (*(int *)GIsL2NetLogin_exref == 0) {
    *(undefined4 *)(param_1 + 0xe8) = 1;
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
  appCleanFileCache();
  if (*(int *)GIsClient_exref != 0) {
    UObject::StaticLoadClass
              (&UClient::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.ViewportManager",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe48,0);
    piVar4 = (int *)thunk_FUN_1058b320();
    *(int **)(param_1 + 0x54) = piVar4;
    (**(code **)(*piVar4 + 0x68))();
    UObject::StaticLoadClass
              (&URenderDevice::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.RenderDevice",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe44,0);
    piVar4 = (int *)thunk_FUN_1058b3a0();
    *(int **)(param_1 + 0x5c) = piVar4;
    (**(code **)(*piVar4 + 0x6c))();
    iVar3 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xc0))();
    if (*(int *)(iVar3 + 4) < 0xc) {
      *(undefined4 *)GIsL2WaterEffect_exref = 0;
    }
    UObject::StaticLoadClass
              (&UL2NetHandler::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Engine.NetworkHandler",
               (ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe38,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(param_1 + 0x60) = pUVar5;
    UObject::AddToRoot(pUVar5);
    (**(code **)(**(int **)(param_1 + 0x60) + 0x6c))();
    UObject::StaticLoadClass
              (&UL2OrcMove::PrivateStaticClass,(UObject *)0x0,(ushort *)L"Engine.OrcMove",
               (ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe30,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(param_1 + 0x70) = pUVar5;
    (**(code **)(*(int *)pUVar5 + 0x74))();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = (undefined1)local_7c;
  if (*(int *)GL2UseReplayManager_exref != 0) {
    param_2 = (FL2ReplayManager *)thunk_FUN_1032ffc0();
    local_7c._0_1_ = 1;
    if (param_2 == (FL2ReplayManager *)0x0) {
      this = (FL2ReplayManager *)0x0;
    }
    else {
      this = (FL2ReplayManager *)
             FL2ReplayManager::FL2ReplayManager(param_2,(uint)(*(int *)GL2ReplayMode_exref == 0));
    }
    local_7c._0_1_ = 0;
    uVar1 = (undefined1)local_7c;
    local_7c._0_1_ = 0;
    *(FL2ReplayManager **)(param_1 + 0x198) = this;
    if ((*(int *)GL2ReplayMode_exref != 0) &&
       (uVar1 = (undefined1)local_7c, this != (FL2ReplayManager *)0x0)) {
      FL2ReplayManager::SetState(this,1);
      iVar3 = (**(code **)(**(int **)GConfig_exref + 8))();
      if (iVar3 == 0) {
        *(undefined4 *)GL2SeamlessMaginotLine_exref = _DAT_1089f98c;
      }
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_34 = 0;
      }
      *(int *)(*(int *)(param_1 + 0x198) + 0x54e0) = local_34;
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_30 = 1;
      }
      if (local_34 != 0) {
        local_30 = 0;
      }
      FL2ReplayManager::SetCameraInstMode(*(FL2ReplayManager **)(param_1 + 0x198),local_30);
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_48 = 1;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x198) + 0x54e4) = local_48;
      FString::FString(local_44);
      local_7c._0_1_ = 2;
      pFStack_41f8 = local_44;
      pwStack_41fc = L"LoadingTexName";
      iVar3 = (**(code **)(**(int **)GConfig_exref + 0xc))();
      if (iVar3 != 0) {
        local_c = (double)CONCAT44(&pwStack_420c,(undefined4)local_c);
        FString::FString((FString *)&pwStack_420c,local_44);
        local_7c._0_1_ = 2;
        FL2ReplayManager::SetLoadingTexName(*(FL2ReplayManager **)(param_1 + 0x198));
      }
      pwStack_420c = L"UseChatData";
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_2c = 0;
      }
      piStack_4218 = (int *)0x1059129f;
      FL2ReplayManager::SetUseChatData(*(FL2ReplayManager **)(param_1 + 0x198),local_2c);
      piStack_4218 = &local_4c;
      pwStack_421c = L"DrawName";
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_4c = local_2c;
      }
      *(int *)(*(int *)(param_1 + 0x198) + 0x5508) = local_4c;
      FString::FString(local_78);
      local_7c = CONCAT31(local_7c._1_3_,4);
      iVar3 = (**(code **)(**(int **)GConfig_exref + 4))();
      if (iVar3 == 0) {
        param_2 = (FL2ReplayManager *)0x0;
LAB_10591316:
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
      }
      else if (param_2 == (FL2ReplayManager *)0x0) goto LAB_10591316;
      local_68 = 0;
      while (iVar3 = local_68, local_68 < (int)param_2) {
        appSprintf(local_194,(ushort *)L"SceneName%d");
        iVar6 = (**(code **)(**(int **)GConfig_exref + 0xc))();
        if (iVar6 != 0) {
          appSprintf(local_194,(ushort *)L"AFTER_CG%d");
          iVar6 = (**(code **)**(undefined4 **)GConfig_exref)();
          if (iVar6 == 0) {
            local_50 = 0;
          }
          local_c = (double)CONCAT44(&stack0xffffbdb0,(undefined4)local_c);
          FString::FString((FString *)&stack0xffffbdb0,local_78);
          local_7c = CONCAT31((int3)((uint)local_7c >> 8),4);
          FL2ReplayManager::AddSceneName(*(FL2ReplayManager **)(param_1 + 0x198));
        }
        local_68 = iVar3 + 1;
      }
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        local_38 = 0;
      }
      *(int *)(*(int *)(param_1 + 0x198) + 0x54e8) = local_38;
      if (local_38 != 0) {
        FString::FString(local_24);
        local_7c._0_1_ = 6;
        for (iVar3 = 0; local_5c = iVar3, iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
          appSprintf(local_194,(ushort *)L"BGM%d");
          iVar6 = (**(code **)(**(int **)GConfig_exref + 0xc))();
          if (iVar6 != 0) {
            local_c = (double)CONCAT44(&stack0xffffbdb4,(undefined4)local_c);
            FString::FString((FString *)&stack0xffffbdb4,local_24);
            local_7c._0_1_ = 6;
            FL2ReplayManager::SetBGM(*(FL2ReplayManager **)(param_1 + 0x198));
          }
        }
        local_7c = CONCAT31(local_7c._1_3_,4);
        FString::~FString(local_24);
      }
      iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
      if (iVar3 == 0) {
        *(undefined4 *)GL2ReplayLoadResource_exref = 0;
      }
      iVar3 = (**(code **)(**(int **)GConfig_exref + 4))
                        (L"PATHS",&DAT_108bfc64,&local_28,L"Replay.ini");
      if (iVar3 == 0) {
        local_28 = 0;
      }
      if ((*(int *)GL2ReplayLoadResource_exref != 0) && (0 < local_28)) {
        FString::FString(local_24);
        local_7c = CONCAT31(local_7c._1_3_,8);
        thunk_FUN_1032c1a0();
        for (iVar3 = 0; local_6c = iVar3, iVar3 < local_28; iVar3 = iVar3 + 1) {
          appSprintf(local_194,(ushort *)L"PATHS%d");
          iVar6 = (**(code **)(**(int **)GConfig_exref + 0xc))();
          if ((iVar6 != 0) && (this_00 = (FString *)thunk_FUN_1032ad60(), this_00 != (FString *)0x0)
             ) {
            FString::FString(this_00,local_24);
          }
        }
        local_7c = CONCAT31(local_7c._1_3_,4);
        FString::~FString(local_24);
      }
      FString::operator=(&FURL::DefaultLocalMap,(ushort *)L"Entry.unr");
      local_7c._0_1_ = 2;
      FString::~FString(local_78);
      local_7c._0_1_ = 0;
      FString::~FString(local_44);
      uVar1 = (undefined1)local_7c;
    }
  }
  local_7c._0_1_ = uVar1;
  FString::FString(local_18);
  local_7c._0_1_ = 9;
  uVar1 = (undefined1)local_7c;
  local_7c._0_1_ = 9;
  if (*(int *)(param_1 + 0x54) != 0) {
    FURL::FURL(local_cc,(ushort *)L"Entry");
    local_7c._0_1_ = 10;
    iVar3 = (**(code **)(*(int *)param_1 + 0xcc))();
    local_7c._0_1_ = 9;
    FURL::~FURL(local_cc);
    if (iVar3 == 0) {
      FString::operator*(local_18);
      LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x19c);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a0) = uVar8;
    uVar1 = (undefined1)local_7c;
  }
  local_7c._0_1_ = uVar1;
  if (((*(int *)GIsOnlyL2Console_exref == 0) &&
      (*(undefined4 *)(param_1 + 0x1a4) = 0, *(int *)(param_1 + 0x54) != 0)) &&
     (*(int *)GL2SharedSky_exref != 0)) {
    FURL::FURL(local_cc,(ushort *)L"SkyLevel");
    local_7c._0_1_ = 0xb;
    iVar3 = (**(code **)(*(int *)param_1 + 0xcc))();
    local_7c._0_1_ = 9;
    FURL::~FURL(local_cc);
    if (iVar3 == 0) {
      FString::operator*(local_18);
      LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x19c);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1a4) = uVar8;
  }
  FURL::FURL(local_114,(ushort *)0x0);
  local_7c._0_1_ = 0xc;
  FURL::LoadURLConfig(local_114,(ushort *)L"DefaultPlayer",(ushort *)L"User");
  if (*(int *)GIsL2Console_exref != 0) {
    FURL::FURL(local_cc,local_114,(ushort *)L"Entry",1);
    local_7c._0_1_ = 0xd;
    DAT_10c51050 = 1;
    if (*(int *)GIsL2Seamless_exref != 0) {
      *(undefined4 *)GIsL2Seamless_exref = 0;
      DAT_10c51054 = 1;
      *(uint *)GL2ThreadFilter_exref = *(uint *)GL2ThreadFilter_exref & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar3 = (**(code **)(*(int *)param_1 + 0xcc))();
      if (iVar3 == 0) {
        FString::operator*(local_18);
        LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
        FOutputDevice::Logf(*(FOutputDevice **)GError_exref,
                            (ushort *)*(FOutputDevice **)GError_exref);
      }
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
    }
    goto LAB_10591b79;
  }
  (**(code **)**(undefined4 **)GConfig_exref)();
  if ((DAT_10c51050 != 0) && (*(int *)GIsL2Seamless_exref != 0)) {
    *(undefined4 *)GIsL2Seamless_exref = 0;
    DAT_10c51054 = 1;
    *(uint *)GL2ThreadFilter_exref = *(uint *)GL2ThreadFilter_exref & 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FURL::FURL(local_158,(ushort *)L"Entry");
    local_7c._0_1_ = 0xe;
    iVar3 = (**(code **)(*(int *)param_1 + 0xcc))();
    local_7c._0_1_ = 0xc;
    FURL::~FURL(local_158);
    if (iVar3 == 0) {
      FString::operator*(local_18);
      LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x19c);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a0) = uVar8;
  }
  local_2194 = 0;
  _memset(local_2192,0,0x1ffe);
  local_58 = appCmdLine();
  iVar3 = ParseToken(&local_58,&local_2194,0x1000,0);
  if (((iVar3 == 0) ||
      ((iVar3 = appStricmp(&local_2194,(ushort *)L"SERVER"), iVar3 == 0 &&
       (iVar3 = ParseToken(&local_58,&local_2194,0x1000,0), iVar3 == 0)))) || (local_2194 == 0x2d))
  {
    puVar11 = FString::operator*(&FURL::DefaultLocalMap);
    appStrcpy(&local_2194,puVar11);
  }
  FURL::FURL(local_cc,local_114,&local_2194,1);
  local_7c._0_1_ = 0xf;
  if (local_8c == 0) {
    LocalizeError((ushort *)L"InvalidUrl",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
  }
  FURL::FURL((FURL *)&pwStack_420c,local_cc);
  local_7c._0_1_ = 0xf;
  local_60 = (**(code **)(*(int *)param_1 + 200))();
  if (local_60 == 0) {
    iVar3 = FString::operator==(local_18,(ushort *)&DAT_10853d94);
    if (iVar3 != 0) {
      puVar11 = FString::operator*(&FURL::DefaultLocalMap);
      iVar3 = appStricmp(&local_2194,puVar11);
      if (iVar3 != 0) {
        EVar12 = 1;
        puVar11 = FString::operator*(&FURL::DefaultLocalMap);
        pwStack_420c = L"䗆ᇼڋ젅";
        FURL::FURL((FURL *)&pwStack_41fc,local_114,puVar11,EVar12);
        local_7c._0_1_ = 0xf;
        local_60 = (**(code **)(*(int *)param_1 + 200))();
        if (local_60 != 0) goto LAB_10591ae7;
      }
    }
    FString::operator*(local_18);
    LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
  }
LAB_10591ae7:
  if (((*(int *)GIsL2Seamless_exref != 0) && (*(ULevel **)(param_1 + 0x19c) != (ULevel *)0x0)) &&
     (pAVar7 = ULevel::GetTerrainInfo(*(ULevel **)(param_1 + 0x19c)), pAVar7 != (ATerrainInfo *)0x0)
     ) {
    DAT_10c596f4 = *(undefined4 *)(pAVar7 + 0x1bc);
    DAT_10c596f8 = *(FURL **)(pAVar7 + 0x1c0);
    _DAT_10c59708 = DAT_10c596fc;
    _DAT_10c59700 = DAT_10c596f4;
    _DAT_10c59704 = DAT_10c596f8;
    UGameEngine::GetSWMapXY((UGameEngine *)param_1);
    thunk_FUN_105897f0();
  }
LAB_10591b79:
  local_7c._0_1_ = 0xc;
  FURL::~FURL(local_cc);
  piVar4 = (int *)0x0;
  if (*(int *)(param_1 + 0x54) != 0) {
    UInput::StaticInitInput();
    UObject::StaticLoadClass
              (&UInteractionMaster::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"engine.InteractionMaster",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe48,0);
    uVar8 = thunk_FUN_1058b420();
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xb4) = uVar8;
    *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 0xb4) + 0x34) = *(int *)(param_1 + 0x54);
    UInteractionMaster::DisplayCopyright(*(UInteractionMaster **)(*(int *)(param_1 + 0x54) + 0xb4));
    iVar3 = **(int **)(param_1 + 0x54);
    FName::FName((FName *)&stack0xffffbe4c,0);
    piVar4 = (int *)(**(code **)(iVar3 + 0x88))();
    FString::FString(local_44,(ushort *)L"ini:Engine.Engine.GUIController");
    local_7c._0_1_ = 0x12;
    pUVar9 = UInteractionMaster::eventAddInteraction
                       (*(UInteractionMaster **)(*(int *)(param_1 + 0x54) + 0xb4),local_44,
                        (UPlayer *)0x0);
    local_7c = CONCAT31(local_7c._1_3_,0xc);
    FString::~FString(local_44);
    if (pUVar9 == (UInteraction *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_03,*(ushort **)GLog_exref);
      }
    }
    else {
      iVar3 = thunk_FUN_1058b4a0();
      if (iVar3 != 0) {
        this_01 = (UBaseGUIController *)thunk_FUN_1058b4a0();
        UBaseGUIController::eventInitializeController(this_01);
        iVar3 = thunk_FUN_1058b4a0();
        piVar4[0x1c] = iVar3;
      }
    }
    FString::FString(local_44,(ushort *)L"ini:Engine.Engine.Console");
    local_7c._0_1_ = 0x13;
    pUVar10 = UInteractionMaster::eventAddInteraction
                        (*(UInteractionMaster **)(*(int *)(param_1 + 0x54) + 0xb4),local_44,
                         (UPlayer *)0x0);
    local_7c._0_1_ = 0xc;
    FString::~FString(local_44);
    if (pUVar10 != (UInteraction *)0x0) {
      *(UInteraction **)(*(int *)(*(int *)(param_1 + 0x54) + 0xb4) + 0x3c) = pUVar10;
    }
    *(int **)(pUVar9 + 0x38) = piVar4;
    *(int **)(pUVar10 + 0x38) = piVar4;
    piVar4[0x10] = **(int **)(*(int *)(*(int *)(param_1 + 0x54) + 0xb4) + 0x40);
    local_c = appSecondsQPC();
    FOutputDevice::Logf((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    FL2GameData::Load(&GL2GameData,0);
    appSecondsQPC();
    FOutputDevice::Logf(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
    FString::FString(local_24);
    local_7c._0_1_ = 0x14;
    uVar1 = (undefined1)local_7c;
    local_7c._0_1_ = 0x14;
    if (*(int *)GIsL2Console_exref == 0) {
      local_4194 = 0;
      local_7c._0_1_ = uVar1;
      _memset(local_4192,0,0x1ffe);
      puVar11 = appCmdLine();
      local_c = (double)CONCAT44(puVar11,(undefined4)local_c);
      iVar3 = ParseToken((ushort **)((int)&local_c + 4),&local_4194,0x1000,0);
      if (((iVar3 == 0) ||
          ((iVar3 = appStricmp(&local_4194,(ushort *)L"SERVER"), iVar3 == 0 &&
           (iVar3 = ParseToken((ushort **)((int)&local_c + 4),&local_4194,0x1000,0), iVar3 == 0))))
         || (local_4194 == 0x2d)) {
        puVar11 = FString::operator*(&FURL::DefaultLocalMap);
        appStrcpy(&local_4194,puVar11);
      }
      FURL::FURL(local_cc,local_114,&local_4194,1);
      local_7c = CONCAT31(local_7c._1_3_,0x16);
    }
    else {
      FURL::FURL(local_cc,local_114,(ushort *)L"Entry",1);
      local_7c = CONCAT31(local_7c._1_3_,0x15);
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x19c) + 0xcc))();
    if (iVar3 == 0) {
      FString::operator*(local_24);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
    }
    local_7c = CONCAT31(local_7c._1_3_,0x14);
    FURL::~FURL(local_cc);
    if (*(int *)GIsOnlyL2Console_exref == 0) {
      UEngine::InitAudio((UEngine *)param_1);
      if (*(int **)(param_1 + 0x58) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x58) + 0x70))();
      }
    }
    (**(code **)(*(int *)piVar4[0x1e] + 0x6c))();
    if (*(int *)GIsL2Console_exref == 0) {
      (**(code **)(*piVar4 + 0x8c))();
      (**(code **)(**(int **)(param_1 + 0x19c) + 0xf8))();
    }
    local_7c._0_1_ = 0xc;
    FString::~FString(local_24);
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2fa);
  }
  iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
  if (iVar3 == 0) {
    *(undefined4 *)GL2UnderWaterEffect_exref = 0;
  }
  iVar3 = (**(code **)**(undefined4 **)GConfig_exref)();
  if (iVar3 == 0) {
    *(undefined4 *)GL2UseCommand_exref = 0;
  }
  if (((*(int *)GIsEditor_exref == 0) && (*(int *)(param_1 + 0x54) != 0)) &&
     ((*(int *)GIsL2Console_exref != 0 && (*(int *)GIsL2NetLogin_exref != 0)))) {
    if (*(int *)GIsOnlyL2Console_exref == 0) {
      local_c = appSecondsQPC();
      FURL::FURL(local_cc,local_114,(ushort *)L"Lobby",1);
      local_7c._0_1_ = 0x17;
      FURL::AddOption(local_cc,(ushort *)L"LogonMap");
      FURL::FURL((FURL *)&pwStack_421c,local_cc);
      local_7c = CONCAT31(local_7c._1_3_,0x17);
      iVar3 = (**(code **)(*(int *)param_1 + 200))();
      if (iVar3 == 0) {
        FString::operator*(local_18);
        LocalizeError((ushort *)L"FailedBrowse",(ushort *)L"Engine",(ushort *)0x0);
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
      }
      if (*(int *)GLog_exref != 0) {
        appSecondsQPC();
        FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
      }
      local_7c._0_1_ = 0xc;
      FURL::~FURL(local_cc);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x8c))();
      (**(code **)(**(int **)(param_1 + 0x19c) + 0xf8))();
    }
    UObject::StaticLoadClass
              (&UL2ConsoleWnd::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.L2Console",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe1c,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(param_1 + 0x68) = pUVar5;
    if (pUVar5 != (UObject *)0x0) {
      GL2Console = (UL2ConsoleWnd *)pUVar5;
      (**(code **)(**(int **)(param_1 + 0x68) + 0x5a8))();
      if (*(int *)GIsOnlyL2Console_exref == 0) {
        (**(code **)(**(int **)(param_1 + 0x68) + 0x600))();
      }
      (**(code **)(**(int **)(param_1 + 0x68) + 0x65c))();
    }
  }
  if (*(int *)GL2ReplayMode_exref != 0) {
    UObject::StaticLoadClass
              (&UL2ConsoleWnd::PrivateStaticClass,(UObject *)0x0,
               (ushort *)L"ini:Engine.Engine.L2Console",(ushort *)0x0,1,(UPackageMap *)0x0);
    FName::FName((FName *)&stack0xffffbe1c,0);
    UObject::GetTransientPackage();
    pUVar5 = UObject::StaticConstructObject();
    *(UObject **)(param_1 + 0x68) = pUVar5;
    if ((pUVar5 != (UObject *)0x0) &&
       (GL2Console = (UL2ConsoleWnd *)pUVar5,
       iVar3 = (**(code **)(**(int **)(param_1 + 0x68) + 0x608))(), iVar3 != 0)) {
      *(undefined4 *)GIsL2Console_exref = 1;
    }
  }
  iVar3 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x338) = _DAT_108acd14;
  }
  iVar3 = (**(code **)(**(int **)GConfig_exref + 8))();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x33c) = _DAT_1089fb1c;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x3c) != 0)) &&
      (iVar3 = *(int *)(**(int **)(iVar3 + 0x38) + 0x3c), iVar3 != 0)) &&
     ((*(int *)GIsL2Mark_exref == 2 && (*(int *)(iVar3 + 0x3bc) != 0)))) {
    pFStack_41f8 = (FString *)0x1059226c;
    this_02 = (FLandMark *)thunk_FUN_1032ffc0();
    local_7c._0_1_ = 0x19;
    if (this_02 == (FLandMark *)0x0) {
      uVar8 = 0;
    }
    else {
      pFStack_41f8 = (FString *)0x10592288;
      uVar8 = FLandMark::FLandMark(this_02,*(APawn **)(iVar3 + 0x3bc));
    }
    *(undefined4 *)(param_1 + 0x2fc) = uVar8;
  }
  local_7c._0_1_ = 9;
  FURL::~FURL(local_114);
  local_7c = (uint)local_7c._1_3_ << 8;
  FString::~FString(local_18);
  ExceptionList = local_84;
  return;
}


// ==== 105aeb7d Catch@105aeb7d target=10c5104c callers=DATA@10970080
// strings: 108ccf04=UnIn::Crash | 108ccedc=PLAYERPAWNMOVETO | 108ccea8=Engine.MarkProjector | 108cce98=CHAIR | 108cce7c=STAND | 108cce38=KEYBOARDBACKMOVESTART | 108ca034=OnRelease | 108cce00=KEYBOARDBACKMOVEFINISH | 108ca034=OnRelease | 108ccdd4=KEYBOARDMOVESTART | 108ca034=OnRelease | 108ccdc8=DIR= | 108ccd98=KEYBOARDMOVEFINISH | 108ca034=OnRelease | 108ccdc8=DIR= | 108ccd64=KEYBOARDPERMANENTMOVE | 108ca034=OnRelease | 108ccd44=JOYSTICKMOVE | 108ca034=OnRelease | 108ccd1c=LEFTTURNINGSTART | 108ca034=OnRelease | 108cccf0=LEFTTURNINGFINISH | 108ca034=OnRelease | 108cccc4=RIGHTTURNINGSTART | 108ca034=OnRelease | 108ccc94=RIGHTTURNINGFINISH | 108ca034=OnRelease | 108ccc7c=STEPMOVE | 108cd494=YAW= | 108ccc6c=DIST= | 108ccc48=COMBOANIMPLAY | 108ccc2c=ATTACKNUM= | 108ccc08=ATTACKNAME%d= | 108ccbec=CHANGEANIM | 108ccbdc=ANIM= | 108ccbc4=WALK | 108ccbb8=WAIT | 108ccba0=CheckGrp | 108cd844=Type= | 108ccb84=anim= | 108ccb74=sound= | 108ccb64=Armor | 108cca98====================================ArmorGrp Start================================== | 108cc9d0====================================ArmorGrp End================================== | 108cc9bc=Weapon | 108cc8f0====================================WeaponGrp Start================================== | 108cc828====================================WeaponGrp End================================== | 108cc758====================================NpcGrp Start================================== | 108cc698====================================NpcGrp End================================== | 108cc5c8====================================CharGrp Start================================== | 108cc500====================================CharGrp End================================== | 108cc420====================================ETCItemGrp Start================================== | 108cc350====================================ETCItemGrp End================================== | 108cc330=skillsound | 108cc258====================================SkillSoundGrp Start================================== | 108cc188====================================SkillSoundGrp End================================== | 108cc168=enterevent | 108cc090====================================EnterEventGrp Start================================== | 108cbfc0====================================EnterEventGrp End================================== | 108cbf9c=mobskillanim | 108cbec0====================================MobSkillAnimGrp Start================================== | 108cbde8====================================MobSkillAnimGrp End================================== | 108cbdd4=music | 108cbd10====================================Music Start================================== | 108cbc50====================================Music End================================== | 108cbc24=variationeffect | 108cbb48====================================VariationEffect Start================================== | 108cba70====================================VariationEffect End================================== | 108cba54=Addabnormal | 108cba28=deleteabnormal | 108cba08=AddEffect | 108cd844=Type= | 108cb9e8=DeleteEffect | 108cd844=Type= | 108cd844=Type= | 108cb9d0=Level= | 108cb9b4=FIRECRACKER | 108cb9a4=FENCE | 108cb994=State= | 108cb97c=BONESCALE | 108ccc6c=DIST= | 108cb958=TYPE= | 108cb94c=DASH | 108cb958=TYPE= | 108cb93c=LEVEL= | 108cb92c=TRANS | 108cb914=Social02 | 108cb904=SETROT | 108cb8e8=bighead | 108cb8d8=size= | 108cb8c0=Lodchange | 108cb8a4=Env Reload | 108acc9c=Env.INT | 108a48d0=env.int | 108c0290=FogSpeed | 108a48d0=env.int | 108bffc0=StartRange1 | 108a48d0=env.int | 108bffa8=EndRange1 | 108a48d0=env.int | 108c0090=StartRange2 | 108a48d0=env.int | 108c0078=EndRange2 | 108a48d0=env.int | 108c005c=StartRange3 | 108a48d0=env.int | 108c0044=EndRange3 | 108a48d0=env.int | 108c0028=StartRange4 | 108a48d0=env.int | 108c0010=EndRange4 | 108a48d0=env.int | 108bfff4=StartRange5 | 108a48d0=env.int | 108bffdc=EndRange5 | 108cb890=SETTIME | 108cb880=TIME= | 108cb848=SETTIMERATIO | 108cb838=RATIO= | 108cb810=CancelMAGICTEST | 108cb7e0=DeleteSelectedActor | 108cb7cc=ClickMe | 108cb7a0=PawnViewer | 108be34c=ini:Engine.Engine.L2Console | 108cb780=NpcViewer | 108be34c=ini:Engine.Engine.L2Console | 108cb75c=SkillViewer | 108be34c=ini:Engine.Engine.L2Console | 108cb750=HERO | 108cb744=Cast | 108a07b8=none | 108cb71c=SkillRemain | 108cb70c=level= | 108cb700=Sec= | 108cb6f4=HIt= | 108cb6e0=beginmr | 108cb6cc=Special | 108cb6ac=Time= | 108cb6a0=Dur= | 108cb678=dist= | 108b913c=Normal | 108cb640=WaitType | 108cb630=type= | 108cb620=rate= | 108cb614=Swim | 108cb600=Weather | 108cb5e0=PlayScene | 108cb5c8=addcubic | 108cd844=Type= | 108cb5b4=decubic | 108cd844=Type= | 108cb598=cubicskill | 108cb570=ATTACKSPEEDDOWN | 108ca9a0=SPEED= | 108cb54c=ATTACKSPEEDUP | 108ca9a0=SPEED= | 108cb534=setwyvern | 108cb524=CLASS= | 108cb4c0=LineageCreature.FlyDragonAmbientCreatures | 108cb468=MESH= | 108cb428=LineageMonsters.wyvern_m00 | 108ca9a0=SPEED= | 108cb410=NUM= | 108cb3b8=LineageCreature.AmbientCreatureFlock | 108cb398=BoneSim | 108cb380=ReduceLOD | 108cb360=KeepMinFrame | 108c0388=SkipAnim | 108cb348=Hitwater | 108cb338=SHADOW | 108cb314=DEFAULTSHADOW | 108cb304=MODE= | 108cb958=TYPE= | 108cb2dc=%s RIDE FAILED! | 108cb2cc=UNRIDE | 108cb2a0=%s UNRIDE FAILED! | 108cb288=ANIMPLAY | 108ccbdc=ANIM= | 108cb274=REFRESH | 108ca77c=CAMERAPITCH | 108ca9a0=SPEED= | 108ca6fc=CAMERAYAW | 108ca9a0=SPEED= | 108cb260=YAWTURN | 108ca9a0=SPEED= | 108cb248=TRANSFER | 108cb230=BuildZone | 108cb224=Map= | 108cb214=Width= | 108cb204=Post= | 108cb1ec=LoadPath | 108cb1dc=FILE= | 108cb1cc=Limit | 108cb1bc=User= | 108cb17c=Rendering Actor Limit = %d | 108cb160=C_TELEPORT | 108cb14c=RETURN | 108cb140=HOME | 108cb224=Map= | 

void Catch_105aeb7d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UnIn::Crash");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


