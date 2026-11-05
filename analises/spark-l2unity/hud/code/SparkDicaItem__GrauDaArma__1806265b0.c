// SparkDicaItem__GrauDaArma__1806265b0 @ 0x1806265b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte SparkDicaItem__GrauDaArma__1806265b0
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3cec == '\0') {
    FUN_180315380(TI_ItemTable);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'g'");
    cRam00000001834b3cec = '\x01';
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = SparkDicaItem__DadosServidor__180625f70(param_1,0);
  if (lVar4 != 0) {
    uVar6 = Newtonsoft_Json_Linq_JObject__get_Item(lVar4,LIT_"'g'",0);
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3ced == '\0') {
      FUN_180315380(LIT_"'a'");
      FUN_180315380(LIT_"'b'");
      FUN_180315380(LIT_"'c'");
      FUN_180315380(LIT_"'d'");
      FUN_180315380(LIT_"''");
      FUN_180315380(LIT_"'s'");
      cRam00000001834b3ced = '\x01';
    }
    if ((lVar4 == 0) && (lVar4 = LIT_"''", LIT_"''" == 0)) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    uVar6 = System_String__ToLowerInvariant(lVar4,0);
    cVar3 = func_0x0001817058a0(uVar6,LIT_"'d'",0,param_4,unaff_RBX);
    if (cVar3 != '\0') {
      return 1;
    }
    cVar3 = func_0x0001817058a0(uVar6,LIT_"'c'",0,param_4,unaff_RBX);
    if (cVar3 != '\0') {
      return 2;
    }
    cVar3 = func_0x0001817058a0(uVar6,LIT_"'b'",0,param_4,unaff_RBX);
    if (cVar3 != '\0') {
      return 3;
    }
    cVar3 = func_0x0001817058a0(uVar6,LIT_"'a'",0);
    if (cVar3 != '\0') {
      return 4;
    }
    cVar3 = func_0x0001817058a0(uVar6,LIT_"'s'",0);
    return -(cVar3 != '\0') & 5;
  }
  if (*(int *)(TI_ItemTable + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = ItemTable__get_Instance(0);
  if (lVar4 != 0) {
    if (*(int *)(TI_ItemTable + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = ItemTable__get_Instance(0);
    if (lVar4 == 0) {
code_r0x000180626704:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    lVar4 = ItemTable__GetWeapon(lVar4,param_1,0);
    if (lVar4 != 0) {
      lVar5 = Weapon__get_Weapongrp(lVar4,0);
      if (lVar5 != 0) {
        lVar4 = Weapon__get_Weapongrp(lVar4,0);
        if (lVar4 != 0) {
          return *(byte *)(lVar4 + 0x40);
        }
        goto code_r0x000180626704;
      }
    }
  }
  return 0;
}

