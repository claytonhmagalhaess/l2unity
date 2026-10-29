// SparkDicaItem__MontaSet__180627c80 @ 0x180627c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__MontaSet__180627c80(longlong param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  longlong lVar16;
  byte bVar17;
  longlong *plVar18;
  longlong *unaff_RDI;
  longlong *plVar19;
  byte bStack_88;
  int iStack_84;
  int iStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  longlong **pplStack_68;
  longlong lStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  longlong **pplStack_48;
  longlong lStack_40;
  
  if (cRam00000001834b3cf8 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.ContainsKey);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,int>);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Current);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_ItemTable);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JObject);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'legs'");
    FUN_180315380(LIT_"'\\n  <color='");
    FUN_180315380(LIT_"'Shield Effect'");
    FUN_180315380(LIT_"'Set Effect'");
    FUN_180315380(LIT_"'#9BE36B'");
    FUN_180315380(LIT_"'shield'");
    FUN_180315380(LIT_"'Set'");
    FUN_180315380(LIT_"'+6 Effect'");
    FUN_180315380(LIT_"'#7A7768'");
    FUN_180315380(LIT_"'Item '");
    FUN_180315380(LIT_"'chest'");
    FUN_180315380(LIT_"'\\n\\n<color=#F2D37A>'");
    FUN_180315380(LIT_"'skill'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'enchant6'");
    FUN_180315380(LIT_"'>'");
    FUN_180315380(LIT_"'shieldSkill'");
    cRam00000001834b3cf8 = '\x01';
  }
  plStack_50 = (longlong *)0x0;
  pplStack_48 = (longlong **)0x0;
  lStack_40 = 0;
  plVar18 = (longlong *)0x0;
  iStack_84 = 0;
  iStack_80 = 0;
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3cfc == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JArray);
    FUN_180315380(TI_System.IO.Path);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'Data/Meta/Sets_Infinity.json'");
    cRam00000001834b3cfc = '\x01';
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28) == 0) {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = UnityEngine_Application__get_streamingAssetsPath(0);
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = System_IO_Path__Combine(uVar11,LIT_"'Data/Meta/Sets_Infinity.json'",0);
    cVar4 = SparkDados__Existe(uVar11,0);
    if (cVar4 == '\0') {
      uVar11 = func_0x000180315580(TI_Newtonsoft.Json.Linq.JArray);
      Newtonsoft_Json_Linq_JArray___ctor(uVar11,0);
    }
    else {
      uVar11 = SparkDados__LerTexto(uVar11,0);
      uVar11 = func_0x00018199a350(uVar11,0);
    }
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660(TI_SparkDicaItem);
    }
    *(undefined8 *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28) = uVar11;
    func_0x000180314690(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28,uVar11);
    lVar13 = *(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar13 = *(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x28);
  }
  if (lVar13 == 0) {
    return;
  }
  plStack_58 = (longlong *)Newtonsoft_Json_Linq_JArray__GetEnumerator(lVar13,0);
  plStack_70 = (longlong *)0x0;
  pplStack_68 = &plStack_58;
  plVar19 = plVar18;
code_r0x000180628040:
  if (plStack_58 != (longlong *)0x0) {
    cVar4 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
    plVar3 = plStack_58;
    if (cVar4 != '\0') {
      if (plStack_58 != (longlong *)0x0) {
        lVar13 = *plStack_58;
        uVar15 = 0;
        if (*(ushort *)(lVar13 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                TI_System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>) {
              puVar12 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) *
                         0x10 + 0x138 + lVar13);
              goto code_r0x0001806280b5;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(lVar13 + 0x12e));
        }
        puVar12 = (undefined8 *)FUN_180312860(plStack_58,TI_System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>,0);
code_r0x0001806280b5:
        unaff_RDI = (longlong *)(*(code *)*puVar12)(plVar3,puVar12[1]);
        if (unaff_RDI != (longlong *)0x0) {
          if ((*(byte *)(TI_Newtonsoft.Json.Linq.JObject + 0x130) <= *(byte *)(*unaff_RDI + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(*unaff_RDI + 200) + -8 +
               (ulonglong)*(byte *)(TI_Newtonsoft.Json.Linq.JObject + 0x130) * 8) == TI_Newtonsoft.Json.Linq.JObject)) {
            uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(unaff_RDI,LIT_"'chest'",0);
            if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
              func_0x000180315660();
            }
            iVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
            if (iVar7 != param_2) goto code_r0x000180628152;
            goto code_r0x0001806281cb;
          }
          goto code_r0x000180628930;
        }
        goto code_r0x00018062892a;
      }
      goto code_r0x000180628938;
    }
    if (plStack_58 != (longlong *)0x0) {
      FUN_180002390(0,TI_System.IDisposable,plStack_58);
    }
    if (plVar19 == (longlong *)0x0) {
      return;
    }
    lVar13 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,int>);
    FUN_1811e4340(lVar13,MR_System.Collections.Generic.Dictionary<int,int>..ctor);
    lStack_78 = lVar13;
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    uVar11 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if (cVar4 == '\0') goto code_r0x0001806283ad;
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerInventory + 0xb8) == 0) ||
       (lVar14 = *(longlong *)(**(longlong **)(TI_PlayerInventory + 0xb8) + 0x28), lVar14 == 0))
    goto code_r0x000180628924;
    FUN_180bada40(&plStack_70,lVar14,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    plStack_50 = plStack_70;
    pplStack_48 = pplStack_68;
    lStack_40 = lStack_60;
    plStack_70 = (longlong *)0x0;
    pplStack_68 = &plStack_50;
    goto code_r0x000180628324;
  }
  goto code_r0x00018062893d;
code_r0x000180628152:
  uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(unaff_RDI,LIT_"'legs'",0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
  if (iVar7 != 0) {
    uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(unaff_RDI,LIT_"'legs'",0);
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
    if (iVar7 == param_2) {
code_r0x0001806281cb:
      plVar19 = unaff_RDI;
    }
  }
  goto code_r0x000180628040;
code_r0x000180628324:
  cVar4 = FUN_1812fa7e0(&plStack_50,MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
  if (cVar4 != '\0') {
    if (lStack_40 == 0) goto code_r0x00018062894e;
    if (*(char *)(lStack_40 + 0x2e) != '\0') {
      if (lVar13 == 0) goto code_r0x000180628949;
      FUN_1811f4b00(lVar13,*(undefined4 *)(lStack_40 + 0x1c));
    }
    goto code_r0x000180628324;
  }
  Gear__UpdateWeaponType__1803dadf0(&plStack_50,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
code_r0x0001806283ad:
  lStack_78 = func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(lStack_78,0);
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  plStack_70 = *(longlong **)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x30);
  if (plStack_70 == (longlong *)0x0) goto code_r0x000180628924;
  bVar17 = 1;
  unaff_RDI = (longlong *)0x1;
  bStack_88 = 1;
  while( true ) {
    uVar8 = (uint)plVar18;
    if ((int)plStack_70[3] <= (int)uVar8) break;
    if (*(uint *)(plStack_70 + 3) <= uVar8) goto code_r0x00018062895a;
    uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,plStack_70[(longlong)(int)uVar8 + 4],0);
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    iStack_84 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
    if (iStack_84 != 0) {
      if (lVar13 == 0) goto code_r0x000180628924;
      bVar5 = FUN_1811f1940(lVar13,iStack_84);
      bVar1 = 5 < iStack_80;
      if (*(int *)(TI_ItemTable + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar14 = ItemTable__get_Instance(0);
      if (lVar14 == 0) goto code_r0x000180628924;
      lVar14 = ItemTable__GetItem(lVar14,iStack_84);
      if (((lVar14 == 0) || (*(longlong *)(lVar14 + 0x20) == 0)) ||
         (unaff_RDI = *(longlong **)(*(longlong *)(lVar14 + 0x20) + 0x18),
         unaff_RDI == (longlong *)0x0)) {
        uVar11 = System_Int32__ToString(&iStack_84,0);
        unaff_RDI = (longlong *)System_String__Concat(LIT_"'Item '",uVar11);
      }
      lVar14 = func_0x000180314710(TI_string__,5);
      if (lVar14 == 0) goto code_r0x000180628924;
      if (*(int *)(lVar14 + 0x18) == 0) {
code_r0x00018062895a:
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(lVar14 + 0x20) = LIT_"'\\n  <color='";
      func_0x000180314690(lVar14 + 0x20);
      uVar11 = LIT_"'#7A7768'";
      if (bVar5 != 0) {
        uVar11 = LIT_"'#9BE36B'";
      }
      if (*(uint *)(lVar14 + 0x18) < 2) goto code_r0x00018062895a;
      *(undefined8 *)(lVar14 + 0x28) = uVar11;
      func_0x000180314690(lVar14 + 0x28);
      if (*(uint *)(lVar14 + 0x18) < 3) goto code_r0x00018062895a;
      *(undefined8 *)(lVar14 + 0x30) = LIT_"'>'";
      func_0x000180314690(lVar14 + 0x30);
      if (*(uint *)(lVar14 + 0x18) < 4) goto code_r0x00018062895a;
      *(longlong **)(lVar14 + 0x38) = unaff_RDI;
      func_0x000180314690(lVar14 + 0x38,unaff_RDI);
      if (*(uint *)(lVar14 + 0x18) < 5) goto code_r0x00018062895a;
      *(undefined8 *)(lVar14 + 0x40) = LIT_"'</color>'";
      func_0x000180314690(lVar14 + 0x40);
      uVar11 = System_String__Concat(lVar14,0);
      if (lStack_78 == 0) goto code_r0x000180628924;
      bVar17 = bVar17 & bVar5;
      bStack_88 = bStack_88 & (bVar5 != 0 && bVar1);
      unaff_RDI = (longlong *)(ulonglong)bStack_88;
      System_Text_StringBuilder__Append(lStack_78,uVar11);
    }
    plVar18 = (longlong *)(ulonglong)(uVar8 + 1);
  }
  lVar14 = SkillNameTable__get_Instance(0);
  if (lVar14 == 0) {
code_r0x00018062867a:
    lVar16 = LIT_"'Set'";
  }
  else {
    uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'skill'",0);
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
    lVar14 = SkillNameTable__GetName(lVar14,uVar9,1,0);
    if ((lVar14 == 0) || (lVar16 = *(longlong *)(lVar14 + 0x20), *(longlong *)(lVar14 + 0x20) == 0))
    goto code_r0x00018062867a;
  }
  uVar11 = System_String__Concat(LIT_"'\\n\\n<color=#F2D37A>'",lVar16,LIT_"'</color>'",0);
  if (param_1 == 0) {
code_r0x000180628924:
    FUN_1803155d0();
code_r0x00018062892a:
    FUN_1803155d0();
code_r0x000180628930:
    FUN_1803146d0(unaff_RDI);
code_r0x000180628938:
    FUN_1803155d0();
code_r0x00018062893d:
    FUN_1803155d0();
    FUN_180311490();
code_r0x000180628949:
    FUN_1803155d0();
code_r0x00018062894e:
    FUN_1803155d0();
    FUN_180311490();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  System_Text_StringBuilder__Append(param_1,uVar11,0);
  System_Text_StringBuilder__Append(param_1,lStack_78,0);
  uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'skill'",0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar9 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkDicaItem__Efeito__180626230(param_1,LIT_"'Set Effect'",uVar9,bVar17,0);
  uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'shield'",0);
  iVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
  bVar5 = (byte)unaff_RDI;
  if (iVar7 != 0) {
    uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'shieldSkill'",0);
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
    if (iVar7 != 0) {
      uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'shieldSkill'",0);
      if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar9 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
      unaff_RDI = pLIT_"'Shield Effect'";
      if (bVar17 == 0) {
        uVar6 = 0;
      }
      else {
        uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'shield'",0);
        if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar10 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
        if (lVar13 == 0) goto code_r0x000180628924;
        uVar6 = FUN_1811e5360(lVar13,uVar10,MR_System.Collections.Generic.Dictionary<int,int>.ContainsKey);
      }
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkDicaItem__Efeito__180626230(param_1,unaff_RDI,uVar9,uVar6,0);
      bVar5 = bStack_88;
    }
  }
  uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'enchant6'",0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
  if (iVar7 != 0) {
    uVar11 = Newtonsoft_Json_Linq_JObject__get_Item(plVar19,LIT_"'enchant6'",0);
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkDicaItem__Efeito__180626230(param_1,LIT_"'+6 Effect'",uVar9,bVar5 & bVar17,0);
  }
  return;
}

