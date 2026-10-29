// SparkDicaItem__ManaDaSombra__180627ae0 @ 0x180627ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__ManaDaSombra__180627ae0(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int aiStackX_18 [2];
  longlong alStack_18 [2];
  
  if (cRam00000001834b3ce9 == '\0') {
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'#B09B79'");
    FUN_180315380(LIT_"'\\n<color=#A3A3A3>Remaining Mana/Total Mana:</color><colo...");
    FUN_180315380(LIT_"'dur'");
    FUN_180315380(LIT_"'\\n\\n<color=#FFFFFF><noparse><Shadow Item Info></noparse>...");
    FUN_180315380(LIT_"'\\n<color=#FFFFFF>Unable to Trade/Drop</color>'");
    FUN_180315380(LIT_"'#FF0000'");
    cRam00000001834b3ce9 = '\x01';
  }
  if (param_3 != 0) {
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar2 = SparkDicaItem__Inteiro__180626930(param_3,LIT_"'dur'",0);
    lVar6 = (longlong)iVar2;
    if (0 < iVar2) {
      if (param_2 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0 < *(longlong *)(param_2 + 0x38)) {
        lVar6 = *(longlong *)(param_2 + 0x38);
      }
      uVar5 = LIT_"'#B09B79'";
      if (lVar6 + 1 < 6) {
        uVar5 = LIT_"'#FF0000'";
      }
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      System_Text_StringBuilder__Append(param_1,LIT_"'\\n\\n<color=#FFFFFF><noparse><Shadow Item Info></noparse>...",0);
      alStack_18[0] = lVar6;
      uVar3 = func_0x000180314670(_DAT_1834c6288,alStack_18);
      aiStackX_18[0] = iVar2;
      uVar4 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
      uVar5 = System_String__Format(LIT_"'\\n<color=#A3A3A3>Remaining Mana/Total Mana:</color><colo...",uVar5,uVar3,uVar4,0);
      System_Text_StringBuilder__Append(param_1,uVar5,0);
      System_Text_StringBuilder__Append(param_1,LIT_"'\\n<color=#FFFFFF>Unable to Trade/Drop</color>'",0);
    }
  }
  return;
}

