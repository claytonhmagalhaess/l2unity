// SparkDicaItem__GrauDoItem__180626710 @ 0x180626710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte SparkDicaItem__GrauDoItem__180626710
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3ceb == '\0') {
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'g'");
    cRam00000001834b3ceb = '\x01';
  }
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    bVar4 = (*pcVar2)();
    return bVar4;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = SparkDicaItem__DadosServidor__180625f70(uVar1,0);
  if (lVar5 == 0) {
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0)) {
      return *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 0x40);
    }
    return 0;
  }
  uVar6 = Newtonsoft_Json_Linq_JObject__get_Item(lVar5,LIT_"'g'",0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
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
  if ((lVar5 == 0) && (lVar5 = LIT_"''", LIT_"''" == 0)) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    bVar4 = (*pcVar2)();
    return bVar4;
  }
  uVar6 = System_String__ToLowerInvariant(lVar5,0);
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

