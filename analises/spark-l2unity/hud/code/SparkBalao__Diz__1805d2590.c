// SparkBalao__Diz__1805d2590 @ 0x1805d2590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkBalao__Diz__1805d2590(int param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (cRam00000001834b3b29 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.set_Item);
    FUN_180315380(TI_SparkBalao);
    FUN_180315380(TI_SparkLinkItem);
    FUN_180315380(MR_System.ValueTuple<string,float>..ctor);
    FUN_180315380(LIT_"'...'");
    cRam00000001834b3b29 = '\x01';
  }
  if ((param_1 == 0) || (cVar3 = System_String__IsNullOrWhiteSpace(param_2,0), cVar3 != '\0')) {
    return;
  }
  if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = SparkLinkItem__ParaBalao__1805f5200(param_2,0);
  if ((lVar6 != 0) && (lVar6 = func_0x00018170d270(lVar6,0), lVar6 != 0)) {
    if (0x28 < *(int *)(lVar6 + 0x10)) {
      uVar5 = System_String__get_Chars(lVar6,0x24,0);
      if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
        func_0x000180315660();
      }
      bVar4 = func_0x00018180ff40(uVar5,0);
      lVar6 = System_String__Substring(lVar6,0,(bVar4 ^ 1) + 0x24,0);
      if (lVar6 == 0) goto DAT_1805d274e;
      uVar7 = func_0x00018170cd70(lVar6,0);
      lVar6 = System_String__Concat(uVar7,LIT_"'...'",0);
    }
    if (*(int *)(TI_SparkBalao + 0xe4) == 0) {
      func_0x000180315660(TI_SparkBalao);
    }
    lVar1 = **(longlong **)(TI_SparkBalao + 0xb8);
    fVar8 = (float)FUN_182436650(0);
    uStack_28 = 0;
    uStack_20 = 0;
    FUN_181006040(&uStack_28,lVar6,fVar8 + 6.0,MR_System.ValueTuple<string,float>..ctor);
    if (lVar1 != 0) {
      uStack_18 = (undefined4)uStack_28;
      uStack_14 = uStack_28._4_4_;
      uStack_10 = (undefined4)uStack_20;
      uStack_c = uStack_20._4_4_;
      FUN_1811e5030(lVar1,param_1,&uStack_18,MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.set_Item);
      return;
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
DAT_1805d274e:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

