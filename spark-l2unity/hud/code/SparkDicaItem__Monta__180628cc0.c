// SparkDicaItem__Monta__180628cc0 @ 0x180628cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDicaItem__Monta__180628cc0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lStackX_8;
  longlong lStackX_20;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  char cStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  lStackX_8 = param_1;
  if (cRam00000001834b3ce8 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<string>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Current);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    FUN_180315380(MR_System.Collections.Generic.List<string>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'\\n<color=#D88FFF>  '");
    FUN_180315380(LIT_"' <color=#7FE0C8>'");
    FUN_180315380(LIT_"'g'");
    FUN_180315380(LIT_"'#FFB84D'");
    FUN_180315380(LIT_"']</color>'");
    FUN_180315380(LIT_"'\\n\\n<color=#D88FFF>Augment Effects</color>'");
    FUN_180315380(LIT_"'<color={0}>+{1}</color> '");
    FUN_180315380(LIT_"'  <color=#A3A08A>['");
    FUN_180315380(LIT_"'</color>'");
    cRam00000001834b3ce8 = '\x01';
  }
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      return param_2;
    }
    lStack_48 = lVar2;
    plVar7 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
    plStack_40 = plVar7;
    System_Text_StringBuilder___ctor(plVar7,0);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar8 = SparkDicaItem__DadosServidor__180625f70(uVar1,0);
    lStack_50 = lVar8;
    if (lVar8 == 0) {
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(*(longlong *)(lVar2 + 0x30) + 0x40);
      }
    }
    else {
      uVar9 = Newtonsoft_Json_Linq_JObject__get_Item(lVar8,LIT_"'g'",0);
      if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar9 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar9,0);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkDicaItem__Grau__180626810(uVar9,0);
    }
    plStack_58 = plVar7;
    if (0 < *(int *)(param_1 + 0x34)) {
      lStackX_20 = CONCAT44(lStackX_20._4_4_,*(undefined4 *)(param_1 + 0x34));
      uVar9 = func_0x000180314670(_DAT_1834c6268,&lStackX_20);
      uVar9 = System_String__Format(LIT_"'<color={0}>+{1}</color> '",LIT_"'#FFB84D'",uVar9,0);
      if (plVar7 == (longlong *)0x0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return uVar9;
      }
      System_Text_StringBuilder__Append(plVar7,uVar9,0);
    }
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = SparkDicaItem__TituloComNivel__18062a1c0(param_2,0);
    if (plVar7 != (longlong *)0x0) {
      System_Text_StringBuilder__Append(plVar7,uVar9,0);
      lVar13 = 0;
      lVar10 = lVar13;
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x38);
      }
      cVar5 = System_String__IsNullOrWhiteSpace(lVar10,0);
      if (cVar5 == '\0') {
        if (lVar10 == 0) goto code_r0x0001806293df;
        uVar9 = func_0x00018170d270(lVar10,0);
        uVar9 = System_String__Concat(LIT_"' <color=#7FE0C8>'",uVar9,LIT_"'</color>'",0);
        System_Text_StringBuilder__Append(plVar7,uVar9,0);
      }
      if (cVar4 != '\0') {
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b3cee == '\0') {
          FUN_180315380(TI_ItemGrade);
          FUN_180315380(LIT_"'-Grade'");
          cRam00000001834b3cee = '\x01';
        }
        uStack_88 = TI_ItemGrade;
        puStack_80 = (undefined8 *)0xffffffffffffffff;
        cStack_78 = cVar4;
        lVar10 = System_Enum__ToString(&uStack_88,0);
        if (lVar10 == 0) {
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return uVar9;
        }
        uVar9 = System_String__ToUpper(lVar10,0);
        uVar9 = System_String__Concat(uVar9,LIT_"'-Grade'",0);
        uVar9 = System_String__Concat(LIT_"'  <color=#A3A08A>['",uVar9,LIT_"']</color>'",0);
        System_Text_StringBuilder__Append(plVar7,uVar9,0);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      if (lVar8 == 0) {
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkDicaItem__AtributosDoCliente__1806243d0(plVar7,lVar2,cVar4,uVar1,0);
      }
      else {
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkDicaItem__AtributosDoServidor__1806248f0
                  (plVar7,lVar8,lVar2,cVar4,CONCAT44(uVar14,uVar1),0);
      }
      uVar14 = *(undefined4 *)(param_1 + 0x44);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar10 = SparkDicaItem__LinhasAugment__180626c20(uVar14,0);
      if (lVar10 != 0) {
        if (0 < *(int *)(lVar10 + 0x18)) {
          System_Text_StringBuilder__Append(plVar7,LIT_"'\\n\\n<color=#D88FFF>Augment Effects</color>'",0);
          FUN_180bada40(&uStack_88,lVar10,MR_System.Collections.Generic.List<string>.GetEnumerator);
          uStack_70 = uStack_88;
          puStack_68 = puStack_80;
          uStack_60 = CONCAT71(uStack_77,cStack_78);
          uStack_88 = 0;
          puStack_80 = &uStack_70;
          while (cVar4 = FUN_1812fa7e0(&uStack_70,MR_System.Collections.Generic.List<string>.MoveNext), cVar4 != '\0') {
            uVar9 = System_String__Concat(LIT_"'\\n<color=#D88FFF>  '",uStack_60,LIT_"'</color>'",0);
            System_Text_StringBuilder__Append(plVar7,uVar9);
          }
          Gear__UpdateWeaponType__1803dadf0(&uStack_70,MR_System.Collections.Generic.List<string>.Dispose);
        }
        uVar14 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkDicaItem__MontaSet__180627c80(plVar7,uVar14,0);
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
        if (lVar8 != 0) {
          if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
            func_0x000180315660();
          }
          iVar6 = SparkDicaItem__Inteiro__180626930(lVar8,LIT_"'dur'",0);
          lVar8 = (longlong)iVar6;
          if (0 < iVar6) {
            if (0 < *(longlong *)(param_1 + 0x38)) {
              lVar8 = *(longlong *)(param_1 + 0x38);
            }
            uVar9 = LIT_"'#B09B79'";
            if (lVar8 + 1 < 6) {
              uVar9 = LIT_"'#FF0000'";
            }
            System_Text_StringBuilder__Append(plVar7,LIT_"'\\n\\n<color=#FFFFFF><noparse><Shadow Item Info></noparse>...",0);
            lStackX_20 = lVar8;
            uVar11 = func_0x000180314670(_DAT_1834c6288,&lStackX_20);
            lStackX_8 = CONCAT44(lStackX_8._4_4_,iVar6);
            uVar12 = func_0x000180314670(_DAT_1834c6268,&lStackX_8);
            uVar9 = System_String__Format(LIT_"'\\n<color=#A3A3A3>Remaining Mana/Total Mana:</color><colo...",uVar9,uVar11,uVar12,0);
            System_Text_StringBuilder__Append(plVar7,uVar9,0);
            System_Text_StringBuilder__Append(plVar7,LIT_"'\\n<color=#FFFFFF>Unable to Trade/Drop</color>'",0);
          }
        }
        if (cRam00000001834b3cff == '\0') {
          FUN_180315380(LIT_"'</color>'");
          FUN_180315380(LIT_"'\\n\\n<color=#C9C4B0>'");
          cRam00000001834b3cff = '\x01';
        }
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20);
        }
        cVar4 = System_String__IsNullOrWhiteSpace(lVar13,0);
        if (cVar4 == '\0') {
          if (lVar13 == 0) goto code_r0x0001806293df;
          uVar9 = func_0x00018170d270(lVar13,0);
          uVar9 = System_String__Concat(LIT_"'\\n\\n<color=#C9C4B0>'",uVar9,LIT_"'</color>'",0);
          System_Text_StringBuilder__Append(plVar7,uVar9,0);
        }
        uVar9 = (**(code **)(*plStack_40 + 0x168))(plVar7,*(undefined8 *)(*plStack_40 + 0x170));
        return uVar9;
      }
    }
  }
code_r0x0001806293df:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar9 = (*pcVar3)();
  return uVar9;
}

