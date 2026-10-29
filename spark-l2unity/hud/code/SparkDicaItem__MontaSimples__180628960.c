// SparkDicaItem__MontaSimples__180628960 @ 0x180628960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__MontaSimples__180628960(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int aiStackX_8 [2];
  
  if (cRam00000001834b3cfd == '\0') {
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'\\n<color={0}>Weight:</color> {1}'");
    FUN_180315380(LIT_"'t'");
    FUN_180315380(LIT_"'\\n<color=#A3A08A>'");
    FUN_180315380(LIT_"' <color={0}>({1:n0})</color>'");
    FUN_180315380(LIT_"'w'");
    FUN_180315380(LIT_"'<color=#E8D4A0>'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'#A3A08A'");
    cRam00000001834b3cfd = '\x01';
  }
  plVar5 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar5,0);
  if (param_1 == 0) goto code_r0x000180628cb6;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = SparkDicaItem__DadosServidor__180625f70(uVar1,0);
  uVar7 = System_String__Concat(LIT_"'<color=#E8D4A0>'",param_2,LIT_"'</color>'",0);
  if (plVar5 == (longlong *)0x0) goto code_r0x000180628cb6;
  System_Text_StringBuilder__Append(plVar5,uVar7,0);
  if (1 < param_3) {
    aiStackX_8[0] = param_3;
    uVar7 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
    uVar7 = System_String__Format(LIT_"' <color={0}>({1:n0})</color>'",LIT_"'#A3A08A'",uVar7,0);
    System_Text_StringBuilder__Append(plVar5,uVar7,0);
  }
  lVar8 = LIT_"''";
  if (lVar6 != 0) {
    uVar7 = Newtonsoft_Json_Linq_JObject__get_Item(lVar6,LIT_"'t'",0);
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar8 = SparkDicaItem__TipoComum__180629b70(uVar7,0);
  }
  if (lVar8 == 0) goto code_r0x000180628cb6;
  if (0 < *(int *)(lVar8 + 0x10)) {
    uVar7 = System_String__Concat(LIT_"'\\n<color=#A3A08A>'",lVar8,LIT_"'</color>'",0);
    System_Text_StringBuilder__Append(plVar5,uVar7,0);
  }
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x30) != 0)) {
      iVar4 = *(int *)(*(longlong *)(lVar6 + 0x30) + 0x30);
      goto code_r0x000180628bb5;
    }
  }
  else {
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar4 = SparkDicaItem__Inteiro__180626930(lVar6,LIT_"'w'",0);
code_r0x000180628bb5:
    if (0 < iVar4) {
      aiStackX_8[0] = iVar4;
      uVar7 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
      uVar7 = System_String__Format(LIT_"'\\n<color={0}>Weight:</color> {1}'",LIT_"'#A3A08A'",uVar7,0);
      System_Text_StringBuilder__Append(plVar5,uVar7,0);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3cff == '\0') {
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'\\n\\n<color=#C9C4B0>'");
    cRam00000001834b3cff = '\x01';
  }
  if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x20);
  }
  cVar3 = System_String__IsNullOrWhiteSpace(lVar6,0);
  if (cVar3 == '\0') {
    if (lVar6 == 0) {
code_r0x000180628cb6:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = func_0x00018170d270(lVar6,0);
    uVar7 = System_String__Concat(LIT_"'\\n\\n<color=#C9C4B0>'",uVar7,LIT_"'</color>'",0);
    System_Text_StringBuilder__Append(plVar5,uVar7,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000180628caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  return;
}

