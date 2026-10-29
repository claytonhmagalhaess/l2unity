// SparkDicaItem__AtributosDoCliente__1806243d0 @ 0x1806243d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__AtributosDoCliente__1806243d0
               (longlong param_1,longlong *param_2,undefined1 param_3,undefined4 param_4)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  float afStackX_10 [2];
  
  if (cRam00000001834b3cf4 == '\0') {
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_Weapon);
    FUN_180315380(LIT_"'\\n<color={0}>Weight:</color> {1}'");
    FUN_180315380(LIT_"'Shield Def. Rate'");
    FUN_180315380(LIT_"'M. Def.'");
    FUN_180315380(LIT_"'P. Def.'");
    FUN_180315380(LIT_"'P. Atk.'");
    FUN_180315380(LIT_"'Critical'");
    FUN_180315380(LIT_"'Atk. Spd.'");
    FUN_180315380(LIT_"'Shield Def.'");
    FUN_180315380(LIT_"'#A3A08A'");
    FUN_180315380(LIT_"'M. Atk.'");
    cRam00000001834b3cf4 = '\x01';
  }
  if (param_2 == (longlong *)0x0) {
code_r0x0001806248c0:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = param_2[5];
  if (lVar2 != 0) {
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(TI_Weapon + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*param_2 + 200) + -8 +
         (ulonglong)*(byte *)(TI_Weapon + 0x130) * 8) != TI_Weapon)) {
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = SparkDicaItem__BonusDefesa__180625e40(param_3,param_4,0);
      SparkDicaItem__Linha__180626b20
                (param_1,LIT_"'P. Def.'",*(undefined4 *)(lVar2 + 0x14),uVar5,0);
      SparkDicaItem__Linha__180626b20
                (param_1,LIT_"'M. Def.'",*(undefined4 *)(lVar2 + 0x18),uVar5,0);
      uVar8 = LIT_"'Shield Def.'";
      fVar1 = *(float *)(lVar2 + 0x3c);
      if (cRam00000001834b3d00 == '\0') {
        FUN_180315380(LIT_"'#6FC3FF'");
        FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
        FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
        FUN_180315380(LIT_"'#A3A08A'");
        cRam00000001834b3d00 = '\x01';
      }
      if (0 < (int)fVar1) {
        afStackX_10[0] = fVar1;
        uVar7 = func_0x000180314670(_DAT_1834c6268,afStackX_10);
        uVar8 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar8,uVar7,0);
        if (param_1 == 0) {
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        System_Text_StringBuilder__Append(param_1,uVar8,0);
      }
      uVar8 = LIT_"'Shield Def. Rate'";
      fVar1 = *(float *)(lVar2 + 0x40);
      if (cRam00000001834b3d00 == '\0') {
        FUN_180315380(LIT_"'#6FC3FF'");
        FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
        FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
        FUN_180315380(LIT_"'#A3A08A'");
        cRam00000001834b3d00 = '\x01';
      }
      if ((int)fVar1 < 1) goto code_r0x000180624841;
      afStackX_10[0] = fVar1;
      uVar7 = func_0x000180314670(_DAT_1834c6268,afStackX_10);
      uVar8 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar8,uVar7,0);
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      lVar6 = Weapon__get_Weapongrp(param_2,0);
      if (lVar6 == 0) {
        uVar9 = 0;
      }
      else {
        lVar6 = Weapon__get_Weapongrp(param_2,0);
        if (lVar6 == 0) goto code_r0x0001806248c0;
        uVar9 = *(undefined1 *)(lVar6 + 0x60);
      }
      uVar5 = *(undefined4 *)(lVar2 + 0x1c);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = SparkDicaItem__BonusAtaque__180625c70(param_3,uVar9,param_4,0);
      SparkDicaItem__Linha__180626b20(param_1,LIT_"'P. Atk.'",uVar5,uVar4,0);
      uVar5 = *(undefined4 *)(lVar2 + 0x20);
      uVar4 = SparkDicaItem__BonusMagia__180625ec0(param_3,param_4,0);
      SparkDicaItem__Linha__180626b20(param_1,LIT_"'M. Atk.'",uVar5,uVar4,0);
      uVar8 = LIT_"'Atk. Spd.'";
      fVar1 = *(float *)(lVar2 + 0x24);
      if (cRam00000001834b3d00 == '\0') {
        FUN_180315380(LIT_"'#6FC3FF'");
        FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
        FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
        FUN_180315380(LIT_"'#A3A08A'");
        cRam00000001834b3d00 = '\x01';
      }
      if (0 < (int)fVar1) {
        afStackX_10[0] = fVar1;
        uVar7 = func_0x000180314670(_DAT_1834c6268,afStackX_10);
        uVar8 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar8,uVar7,0);
        if (param_1 == 0) {
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        System_Text_StringBuilder__Append(param_1,uVar8,0);
      }
      uVar8 = LIT_"'Critical'";
      fVar1 = *(float *)(lVar2 + 0x30);
      if (cRam00000001834b3d01 == '\0') {
        FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2:0.#}'");
        FUN_180315380(LIT_"'#A3A08A'");
        cRam00000001834b3d01 = '\x01';
      }
      if (fVar1 <= 0.0) goto code_r0x000180624841;
      afStackX_10[0] = fVar1;
      uVar7 = func_0x000180314670(_DAT_1834c6298,afStackX_10);
      uVar8 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2:0.#}'",LIT_"'#A3A08A'",uVar8,uVar7,0);
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    System_Text_StringBuilder__Append(param_1,uVar8,0);
  }
code_r0x000180624841:
  if ((param_2[6] != 0) && (0 < *(int *)(param_2[6] + 0x30))) {
    afStackX_10[0] = *(float *)(param_2[6] + 0x30);
    uVar8 = func_0x000180314670(_DAT_1834c6268,afStackX_10);
    uVar8 = System_String__Format(LIT_"'\\n<color={0}>Weight:</color> {1}'",LIT_"'#A3A08A'",uVar8,0);
    if (param_1 == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    System_Text_StringBuilder__Append(param_1,uVar8,0);
  }
  return;
}

