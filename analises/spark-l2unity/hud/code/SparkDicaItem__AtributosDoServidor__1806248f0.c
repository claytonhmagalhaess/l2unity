// SparkDicaItem__AtributosDoServidor__1806248f0 @ 0x1806248f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__AtributosDoServidor__1806248f0
               (longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4,
               undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 uVar13;
  bool bVar14;
  longlong *plVar15;
  float fVar16;
  undefined4 auStackX_10 [2];
  longlong *plStackX_18;
  undefined1 uStackX_20;
  longlong lStack_48;
  undefined8 uStack_40;
  
  plStackX_18 = param_3;
  uStackX_20 = param_4;
  if (cRam00000001834b3cf3 == '\0') {
    FUN_180315380(MR_System.Linq.Enumerable.Where<string>);
    FUN_180315380(TI_System.Func<string,bool>);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JArray);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_string__);
    FUN_180315380(MD_SparkDicaItem.__c._AtributosDoServidor_b__25_0);
    FUN_180315380(TI_SparkDicaItem.<>c);
    FUN_180315380(TI_Weapon);
    FUN_180315380(LIT_"'\\n\\n<color=#7FE0C8>'");
    FUN_180315380(LIT_"'Skill '");
    FUN_180315380(LIT_"'\\n<color=#C9C4B0>'");
    FUN_180315380(LIT_"'none'");
    FUN_180315380(LIT_"'mpb'");
    FUN_180315380(LIT_"'\\n<color={0}>Evasion:</color> {1:+0;-0}'");
    FUN_180315380(LIT_"'sps'");
    FUN_180315380(LIT_"'\\n<color={0}>Weight:</color> {1}'");
    FUN_180315380(LIT_"'Shield Def. Rate'");
    FUN_180315380(LIT_"'%%'");
    FUN_180315380(LIT_"'sdef'");
    FUN_180315380(LIT_"'mdef'");
    FUN_180315380(LIT_"'dual'");
    FUN_180315380(LIT_"'b'");
    FUN_180315380(LIT_"'pdef'");
    FUN_180315380(LIT_"'M. Def.'");
    FUN_180315380(LIT_"'avoid'");
    FUN_180315380(LIT_"'spd'");
    FUN_180315380(LIT_"'t'");
    FUN_180315380(LIT_"'%'");
    FUN_180315380(LIT_"'dualfist'");
    FUN_180315380(LIT_"'P. Def.'");
    FUN_180315380(LIT_"'MP Consume'");
    FUN_180315380(LIT_"'\\n<color=#A3A08A>'");
    FUN_180315380(LIT_"'crit'");
    FUN_180315380(LIT_"'bow'");
    FUN_180315380(LIT_"'P. Atk.'");
    FUN_180315380(LIT_"'sk'");
    FUN_180315380(LIT_"'Critical'");
    FUN_180315380(LIT_"' / '");
    FUN_180315380(LIT_"'Max MP'");
    FUN_180315380(LIT_"'hit'");
    FUN_180315380(LIT_"'w'");
    FUN_180315380(LIT_"'patk'");
    FUN_180315380(LIT_"'srate'");
    FUN_180315380(LIT_"'Atk. Spd.'");
    FUN_180315380(LIT_"'mp'");
    FUN_180315380(LIT_"'ss'");
    FUN_180315380(LIT_"'Shield Def.'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'\\n<color={0}>Evasion:</color> {1}'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'\\n<color={0}>Soulshot / Spiritshot:</color> {1} / {2}'");
    FUN_180315380(LIT_"'\\n<color={0}>Accuracy:</color> {1:+0.##;-0.##}'");
    FUN_180315380(LIT_"'#A3A08A'");
    FUN_180315380(LIT_"'matk'");
    FUN_180315380(LIT_"'M. Atk.'");
    cRam00000001834b3cf3 = '\x01';
  }
  if (param_2 == 0) goto code_r0x000180625aa9;
  uVar6 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,LIT_"'t'",0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
  lVar10 = LIT_"''";
  if (lVar7 != 0) {
    lVar10 = lVar7;
  }
  uVar6 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,LIT_"'b'",0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar8 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
  lVar7 = LIT_"''";
  if (lVar8 != 0) {
    lVar7 = lVar8;
  }
  lStack_48 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,LIT_"'patk'",0);
  if (lStack_48 == 0) {
    bVar14 = false;
code_r0x000180624c8a:
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3cf9 == '\0') {
      FUN_180315380(LIT_"'light'");
      FUN_180315380(LIT_"'magic'");
      FUN_180315380(LIT_"'Robe'");
      FUN_180315380(LIT_"'Heavy Armor'");
      FUN_180315380(LIT_"'heavy'");
      FUN_180315380(LIT_"''");
      FUN_180315380(LIT_"'Light Armor'");
      cRam00000001834b3cf9 = '\x01';
    }
    lVar8 = lVar10;
    if ((lVar10 == 0) && (lVar8 = LIT_"''", LIT_"''" == 0)) goto code_r0x000180625aa9;
    uVar6 = System_String__ToLowerInvariant(lVar8,0);
    cVar2 = func_0x0001817058a0(uVar6,LIT_"'light'",0);
    lVar8 = LIT_"'Light Armor'";
    if ((cVar2 == '\0') &&
       ((cVar2 = func_0x0001817058a0(uVar6,LIT_"'heavy'",0), lVar8 = LIT_"'Heavy Armor'",
        cVar2 == '\0' &&
        (cVar2 = func_0x0001817058a0(uVar6,LIT_"'magic'",0), lVar8 = LIT_"''",
        cVar2 != '\0')))) {
      lVar8 = LIT_"'Robe'";
    }
  }
  else {
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'sdef'",0);
    bVar14 = 0 < iVar5;
    if (bVar14) goto code_r0x000180624c8a;
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar8 = SparkDicaItem__TipoArma__1806296d0(lVar10,0);
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = SparkDicaItem__LugarDoServidor__180627590(lVar7,bVar14,0);
  lVar7 = func_0x000180314710(TI_string__,2);
  if (lVar7 == 0) goto code_r0x000180625aa9;
  if (*(int *)(lVar7 + 0x18) == 0) {
code_r0x000180625af1:
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(longlong *)(lVar7 + 0x20) = lVar8;
  func_0x000180314690(lVar7 + 0x20,lVar8);
  if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x000180625af1;
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  func_0x000180314690(lVar7 + 0x28,uVar6);
  if (*(int *)(TI_SparkDicaItem.<>c + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar8 = *(longlong *)(*(longlong *)(TI_SparkDicaItem.<>c + 0xb8) + 8);
  uVar6 = LIT_"' / '";
  if (lVar8 == 0) {
    uStack_40 = LIT_"' / '";
    if (*(int *)(TI_SparkDicaItem.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = **(undefined8 **)(TI_SparkDicaItem.<>c + 0xb8);
    lVar8 = func_0x000180315580(TI_System.Func<string,bool>);
    FUN_1814b0170(lVar8,uVar6,MD_SparkDicaItem.__c._AtributosDoServidor_b__25_0,0);
    *(longlong *)(*(longlong *)(TI_SparkDicaItem.<>c + 0xb8) + 8) = lVar8;
    func_0x000180314690(*(longlong *)(TI_SparkDicaItem.<>c + 0xb8) + 8,lVar8);
    uVar6 = uStack_40;
  }
  uVar9 = FUN_1809c8e80(lVar7,lVar8,MR_System.Linq.Enumerable.Where<string>);
  lVar7 = System_String__Join(uVar6,uVar9,0);
  if (lVar7 == 0) goto code_r0x000180625aa9;
  if (0 < *(int *)(lVar7 + 0x10)) {
    uVar6 = System_String__Concat(LIT_"'\\n<color=#A3A08A>'",lVar7,LIT_"'</color>'",0);
    if (param_1 == 0) goto code_r0x000180625aa9;
    System_Text_StringBuilder__Append(param_1,uVar6,0);
  }
  plVar15 = plStackX_18;
  lVar7 = 0;
  if (bVar14 == false) {
    if (lStack_48 == 0) {
      lVar10 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,LIT_"'pdef'",0);
      plVar15 = plStackX_18;
      if (lVar10 != 0) {
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar3 = SparkDicaItem__BonusDefesa__180625e40(uStackX_20,param_5,0);
        uVar4 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'pdef'",0);
        SparkDicaItem__Linha__180626b20(param_1,LIT_"'P. Def.'",uVar4,uVar3,0);
        uVar4 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'mdef'",0);
        SparkDicaItem__Linha__180626b20(param_1,LIT_"'M. Def.'",uVar4,uVar3,0);
        iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'mpb'",0);
        uVar6 = LIT_"'Max MP'";
        if (cRam00000001834b3d00 == '\0') {
          FUN_180315380(LIT_"'#6FC3FF'");
          FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
          FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
          FUN_180315380(LIT_"'#A3A08A'");
          cRam00000001834b3d00 = '\x01';
        }
        if (0 < iVar5) {
          lStack_48 = CONCAT44(lStack_48._4_4_,iVar5);
          uVar9 = func_0x000180314670(_DAT_1834c6268,&lStack_48);
          uVar6 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar6,uVar9,0);
          if (param_1 == 0) {
            FUN_1803155d0();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          System_Text_StringBuilder__Append(param_1,uVar6,0);
        }
        iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'avoid'",0);
        plVar15 = plStackX_18;
        if (iVar5 != 0) {
          lStack_48 = CONCAT44(lStack_48._4_4_,iVar5);
          uVar6 = func_0x000180314670(_DAT_1834c6268,&lStack_48);
          uVar6 = System_String__Format(LIT_"'\\n<color={0}>Evasion:</color> {1:+0;-0}'",LIT_"'#A3A08A'",uVar6,0);
          if (param_1 == 0) {
            FUN_1803155d0();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          goto code_r0x0001806257c1;
        }
      }
    }
    else {
      if (plStackX_18 == (longlong *)0x0) {
code_r0x000180625173:
        uVar13 = 0;
      }
      else {
        if (((*(byte *)(*plStackX_18 + 0x130) < *(byte *)(TI_Weapon + 0x130)) ||
            (*(longlong *)
              (*(longlong *)(*plStackX_18 + 200) + -8 +
              (ulonglong)*(byte *)(TI_Weapon + 0x130) * 8) != TI_Weapon)) ||
           (lVar8 = Weapon__get_Weapongrp(plStackX_18,0), lVar8 == 0)) goto code_r0x000180625173;
        lVar8 = Weapon__get_Weapongrp(plVar15,0);
        if (lVar8 == 0) goto code_r0x000180625aa9;
        uVar13 = *(undefined1 *)(lVar8 + 0x60);
      }
      cVar2 = func_0x0001817058a0(lVar10,LIT_"'bow'",0);
      if (cVar2 != '\0') {
        uVar13 = 6;
      }
      cVar2 = func_0x0001817058a0(lVar10,LIT_"'dual'",0);
      if (cVar2 != '\0') {
        uVar13 = 9;
      }
      cVar2 = func_0x0001817058a0(lVar10,LIT_"'dualfist'",0);
      if (cVar2 != '\0') {
        uVar13 = 10;
      }
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'patk'",0);
      uVar4 = SparkDicaItem__BonusAtaque__180625c70(uStackX_20,uVar13,param_5,0);
      SparkDicaItem__Linha__180626b20(param_1,LIT_"'P. Atk.'",uVar3,uVar4,0);
      uVar3 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'matk'",0);
      uVar4 = SparkDicaItem__BonusMagia__180625ec0(uStackX_20,param_5,0);
      SparkDicaItem__Linha__180626b20(param_1,LIT_"'M. Atk.'",uVar3,uVar4,0);
      iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'spd'",0);
      uVar6 = LIT_"'Atk. Spd.'";
      if (cRam00000001834b3d00 == '\0') {
        FUN_180315380(LIT_"'#6FC3FF'");
        FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
        FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
        FUN_180315380(LIT_"'#A3A08A'");
        cRam00000001834b3d00 = '\x01';
      }
      if (0 < iVar5) {
        lStack_48 = CONCAT44(lStack_48._4_4_,iVar5);
        uVar9 = func_0x000180314670(_DAT_1834c6268,&lStack_48);
        uVar6 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar6,uVar9,0);
        if (param_1 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        System_Text_StringBuilder__Append(param_1,uVar6,0);
      }
      iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'crit'",0);
      uVar6 = LIT_"'Critical'";
      if (cRam00000001834b3d00 == '\0') {
        FUN_180315380(LIT_"'#6FC3FF'");
        FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
        FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
        FUN_180315380(LIT_"'#A3A08A'");
        cRam00000001834b3d00 = '\x01';
      }
      if (0 < iVar5) {
        lStack_48 = CONCAT44(lStack_48._4_4_,iVar5);
        uVar9 = func_0x000180314670(_DAT_1834c6268,&lStack_48);
        uVar6 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar6,uVar9,0);
        if (param_1 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        System_Text_StringBuilder__Append(param_1,uVar6,0);
      }
      uVar6 = LIT_"'hit'";
      if (cRam00000001834b3cf2 == '\0') {
        FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
        cRam00000001834b3cf2 = '\x01';
      }
      lVar10 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,uVar6,0);
      if (lVar10 == 0) {
        fVar16 = 0.0;
      }
      else {
        uVar6 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,uVar6,0);
        if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
          func_0x000180315660();
        }
        fVar16 = (float)Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
      }
      if (0.001 < ABS(fVar16)) {
        lStack_48 = CONCAT44(lStack_48._4_4_,fVar16);
        uVar6 = func_0x000180314670(_DAT_1834c6298,&lStack_48);
        uVar6 = System_String__Format(LIT_"'\\n<color={0}>Accuracy:</color> {1:+0.##;-0.##}'",LIT_"'#A3A08A'",uVar6,0);
        if (param_1 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        System_Text_StringBuilder__Append(param_1,uVar6,0);
      }
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'mp'",0);
      uVar6 = LIT_"'MP Consume'";
      if (cRam00000001834b3d00 == '\0') {
        FUN_180315380(LIT_"'#6FC3FF'");
        FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
        FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
        FUN_180315380(LIT_"'#A3A08A'");
        cRam00000001834b3d00 = '\x01';
      }
      if (0 < iVar5) {
        lStack_48 = CONCAT44(lStack_48._4_4_,iVar5);
        uVar9 = func_0x000180314670(_DAT_1834c6268,&lStack_48);
        uVar6 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar6,uVar9,0);
        if (param_1 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        System_Text_StringBuilder__Append(param_1,uVar6,0);
      }
      iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'ss'",0);
      if (iVar5 < 1) {
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'sps'",0);
        if (iVar5 < 1) goto code_r0x0001806257d3;
      }
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'ss'",0);
      lStack_48 = CONCAT44(lStack_48._4_4_,uVar3);
      uVar6 = func_0x000180314670(_DAT_1834c6268,&lStack_48);
      uVar3 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'sps'",0);
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
      uVar9 = func_0x000180314670(_DAT_1834c6268,&uStack_40);
      uVar6 = System_String__Format(LIT_"'\\n<color={0}>Soulshot / Spiritshot:</color> {1} / {2}'",LIT_"'#A3A08A'",uVar6,uVar9,0);
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      System_Text_StringBuilder__Append(param_1,uVar6,0);
    }
  }
  else {
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'sdef'",0);
    uVar6 = LIT_"'Shield Def.'";
    if (cRam00000001834b3d00 == '\0') {
      FUN_180315380(LIT_"'#6FC3FF'");
      FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
      FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
      FUN_180315380(LIT_"'#A3A08A'");
      cRam00000001834b3d00 = '\x01';
    }
    if (0 < iVar5) {
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar5);
      uVar9 = func_0x000180314670(_DAT_1834c6268,&uStack_40);
      uVar6 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar6,uVar9,0);
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      System_Text_StringBuilder__Append(param_1,uVar6,0);
    }
    iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'srate'",0);
    uVar6 = LIT_"'Shield Def. Rate'";
    if (cRam00000001834b3d00 == '\0') {
      FUN_180315380(LIT_"'#6FC3FF'");
      FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
      FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
      FUN_180315380(LIT_"'#A3A08A'");
      cRam00000001834b3d00 = '\x01';
    }
    if (0 < iVar5) {
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar5);
      uVar9 = func_0x000180314670(_DAT_1834c6268,&uStack_40);
      uVar6 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",uVar6,uVar9,0);
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      System_Text_StringBuilder__Append(param_1,uVar6,0);
    }
    iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'avoid'",0);
    plVar15 = plStackX_18;
    if (iVar5 != 0) {
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar5);
      uVar6 = func_0x000180314670(_DAT_1834c6268,&uStack_40);
      uVar6 = System_String__Format(LIT_"'\\n<color={0}>Evasion:</color> {1}'",LIT_"'#A3A08A'",uVar6,0);
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
code_r0x0001806257c1:
      System_Text_StringBuilder__Append(param_1,uVar6,0);
      plVar15 = plStackX_18;
    }
  }
code_r0x0001806257d3:
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar5 = SparkDicaItem__Inteiro__180626930(param_2,LIT_"'w'",0);
  if (0 < iVar5) {
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar5);
    uVar6 = func_0x000180314670(_DAT_1834c6268,&uStack_40);
    uVar6 = System_String__Format(LIT_"'\\n<color={0}>Weight:</color> {1}'",LIT_"'#A3A08A'",uVar6,0);
    if (param_1 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    System_Text_StringBuilder__Append(param_1,uVar6,0);
  }
  plVar11 = (longlong *)Newtonsoft_Json_Linq_JObject__get_Item(param_2,LIT_"'sk'",0);
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if (*(byte *)(*plVar11 + 0x130) < *(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*plVar11 + 200) + -8 + (ulonglong)*(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130) * 8)
      != TI_Newtonsoft.Json.Linq.JArray) {
    return;
  }
  iVar5 = Newtonsoft_Json_Linq_JContainer__get_Count(plVar11,0);
  if (iVar5 != 2) {
    return;
  }
  uVar6 = func_0x00018199a7c0(plVar11,0,0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
  if (iVar5 < 1) {
    return;
  }
  uVar6 = func_0x00018199a7c0(plVar11,0,0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  auStackX_10[0] = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
  uVar6 = func_0x00018199a7c0(plVar11,1,0);
  iVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar6,0);
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  lVar10 = SkillNameTable__get_Instance(0);
  if ((((lVar10 == 0) ||
       (lVar10 = SkillNameTable__GetName(lVar10,auStackX_10[0],iVar5,0), lVar10 == 0)) &&
      ((lVar8 = SkillNameTable__get_Instance(0), lVar10 = lVar7, lVar8 == 0 ||
       (lVar10 = SkillNameTable__GetName(lVar8,auStackX_10[0],1,0), lVar10 == 0)))) ||
     (lVar8 = *(longlong *)(lVar10 + 0x20), lVar8 == 0)) {
    uVar6 = System_Int32__ToString(auStackX_10,0);
    lVar8 = System_String__Concat(LIT_"'Skill '",uVar6,0);
    lVar12 = LIT_"''";
    if (lVar10 != 0) goto code_r0x0001806259ae;
  }
  else {
code_r0x0001806259ae:
    cVar2 = System_String__IsNullOrWhiteSpace(*(undefined8 *)(lVar10 + 0x28),0);
    lVar12 = LIT_"''";
    if ((cVar2 == '\0') &&
       (cVar2 = System_String__op_Inequality(*(undefined8 *)(lVar10 + 0x28),LIT_"'none'",0),
       lVar12 = LIT_"''", cVar2 != '\0')) {
      if (*(longlong *)(lVar10 + 0x28) == 0) goto code_r0x000180625aa9;
      lVar12 = System_String__Replace
                         (*(longlong *)(lVar10 + 0x28),LIT_"'%%'",LIT_"'%'",0);
    }
  }
  if ((plVar15 != (longlong *)0x0) && (plVar15[4] != 0)) {
    lVar7 = *(longlong *)(plVar15[4] + 0x20);
  }
  cVar2 = System_String__IsNullOrWhiteSpace(lVar7,0);
  if (cVar2 != '\0') {
    uVar6 = System_String__Concat(LIT_"'\\n\\n<color=#7FE0C8>'",lVar8,LIT_"'</color>'",0);
    if ((param_1 == 0) || (System_Text_StringBuilder__Append(param_1,uVar6,0), lVar12 == 0)) {
code_r0x000180625aa9:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (0 < *(int *)(lVar12 + 0x10)) {
      uVar6 = System_String__Concat(LIT_"'\\n<color=#C9C4B0>'",lVar12,LIT_"'</color>'",0);
      System_Text_StringBuilder__Append(param_1,uVar6,0);
    }
  }
  return;
}

