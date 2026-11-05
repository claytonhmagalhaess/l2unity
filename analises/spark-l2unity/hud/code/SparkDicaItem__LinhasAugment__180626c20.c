// SparkDicaItem__LinhasAugment__180626c20 @ 0x180626c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkDicaItem__LinhasAugment__180626c20(uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  int aiStackX_8 [4];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  longlong lStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_50;
  longlong *plStack_48;
  
  if (cRam00000001834b3d05 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_int__);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JArray);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'Skill '");
    FUN_180315380(LIT_"': '");
    FUN_180315380(LIT_"'Item Skill: '");
    FUN_180315380(LIT_"'stats'");
    FUN_180315380(LIT_"'{0} +{1:0.##}'");
    FUN_180315380(LIT_"'skills'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3d05 = '\x01';
  }
  aiStackX_8[0] = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  auStackX_18[0] = 0;
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<string>..ctor);
  if (param_1 != 0) {
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3d06 == '\0') {
      FUN_180315380(TI_UnityEngine.Application);
      FUN_180315380(TI_System.IO.Path);
      FUN_180315380(TI_SparkDicaItem);
      FUN_180315380(LIT_"'Data/Meta/Augments_Infinity.json'");
      cRam00000001834b3d06 = '\x01';
    }
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_SparkDicaItem + 0xb8) == 0) {
      if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = UnityEngine_Application__get_streamingAssetsPath(0);
      if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = System_IO_Path__Combine(uVar7,LIT_"'Data/Meta/Augments_Infinity.json'",0);
      cVar3 = SparkDados__Existe(uVar7,0);
      if (cVar3 == '\0') {
        return lVar6;
      }
      uVar7 = SparkDados__LerTexto(uVar7,0);
      uVar7 = func_0x00018199e940(uVar7,0);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      **(undefined8 **)(TI_SparkDicaItem + 0xb8) = uVar7;
      func_0x000180314690(*(undefined8 *)(TI_SparkDicaItem + 0xb8),uVar7);
      plVar9 = *(longlong **)(TI_SparkDicaItem + 0xb8);
    }
    else {
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      plVar9 = *(longlong **)(TI_SparkDicaItem + 0xb8);
    }
    uVar12 = 0;
    lVar1 = *plVar9;
    if (lVar1 != 0) {
      lVar8 = func_0x000180314710(TI_int__,2);
      if (lVar8 == 0) {
code_r0x0001806273ee:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        lVar6 = (*pcVar2)();
        return lVar6;
      }
      lStack_70 = lVar6;
      if ((*(int *)(lVar8 + 0x18) == 0) ||
         (*(uint *)(lVar8 + 0x20) = param_1 & 0xffff, *(uint *)(lVar8 + 0x18) < 2)) {
code_r0x0001806273e8:
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        lVar6 = (*pcVar2)();
        return lVar6;
      }
      *(int *)(lVar8 + 0x24) = (int)param_1 >> 0x10;
      lStack_60 = lVar8;
      for (; (int)uVar12 < (int)*(uint *)(lVar8 + 0x18); uVar12 = uVar12 + 1) {
        if (*(uint *)(lVar8 + 0x18) <= uVar12) goto code_r0x0001806273e8;
        aiStackX_8[0] = *(int *)(lVar8 + 0x20 + (longlong)(int)uVar12 * 4);
        if (aiStackX_8[0] != 0) {
          if (lVar1 == 0) goto code_r0x0001806273ee;
          plVar9 = (longlong *)Newtonsoft_Json_Linq_JObject__get_Item(lVar1,LIT_"'stats'",0);
          if (plVar9 != (longlong *)0x0) {
            uVar7 = System_Int32__ToString(aiStackX_8,0);
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x218))(plVar9,uVar7);
            if (plVar9 != (longlong *)0x0) {
              if ((*(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                 (*(longlong *)
                   (*(longlong *)(*plVar9 + 200) + -8 +
                   (ulonglong)*(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130) * 8) == TI_Newtonsoft.Json.Linq.JArray))
              {
                lStack_80 = Newtonsoft_Json_Linq_JArray__GetEnumerator(plVar9,0);
                uStack_50 = 0;
                plStack_48 = &lStack_80;
                lStack_68 = lVar1;
                while( true ) {
                  if (lStack_80 == 0) goto code_r0x0001806273dc;
                  cVar3 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
                  if (cVar3 == '\0') break;
                  if (lStack_80 == 0) {
code_r0x0001806273d7:
                    FUN_1803155d0();
code_r0x0001806273dc:
                    FUN_1803155d0();
                    FUN_180311490();
                    pcVar2 = (code *)swi(3);
                    lVar6 = (*pcVar2)();
                    return lVar6;
                  }
                  plVar9 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>);
                  if (plVar9 == (longlong *)0x0) {
                    FUN_1803155d0();
code_r0x0001806273c5:
                    FUN_1803155d0();
code_r0x0001806273ca:
                    FUN_1803155d0();
code_r0x0001806273cf:
                    FUN_1803146d0(plVar9);
                    goto code_r0x0001806273d7;
                  }
                  if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130)) ||
                     (*(longlong *)
                       (*(longlong *)(*plVar9 + 200) + -8 +
                       (ulonglong)*(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130) * 8) !=
                      TI_Newtonsoft.Json.Linq.JArray)) goto code_r0x0001806273cf;
                  uVar7 = func_0x00018199a7c0(plVar9,0,0);
                  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
                  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
                    func_0x000180315660(TI_SparkDicaItem);
                  }
                  lVar11 = *(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 8);
                  if (lVar11 == 0) goto code_r0x0001806273ca;
                  cVar3 = FUN_1812698d0(lVar11,uVar7,&uStack_78,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
                  if (cVar3 != '\0') {
                    uVar7 = uStack_78;
                  }
                  plVar9 = (longlong *)func_0x00018199a7c0(plVar9,1,0);
                  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  auStackX_20[0] = Newtonsoft_Json_Linq_JToken__op_Explicit(plVar9,0);
                  uVar10 = func_0x000180314670(_DAT_1834c6298,auStackX_20);
                  uVar7 = System_String__Format(LIT_"'{0} +{1:0.##}'",uVar7,uVar10,0);
                  if (lVar6 == 0) goto code_r0x0001806273c5;
                  FUN_180002eb0(lVar6,uVar7,MR_System.Collections.Generic.List<string>.Add);
                }
                if (lStack_80 != 0) {
                  FUN_180002390(0,TI_System.IDisposable);
                }
                goto code_r0x0001806273a2;
              }
            }
          }
          plVar9 = (longlong *)Newtonsoft_Json_Linq_JObject__get_Item(lVar1,LIT_"'skills'",0);
          if (plVar9 != (longlong *)0x0) {
            uVar7 = System_Int32__ToString(aiStackX_8,0);
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x218))(plVar9,uVar7);
            if (plVar9 != (longlong *)0x0) {
              if ((*(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                 (*(longlong *)
                   (*(longlong *)(*plVar9 + 200) + -8 +
                   (ulonglong)*(byte *)(TI_Newtonsoft.Json.Linq.JArray + 0x130) * 8) == TI_Newtonsoft.Json.Linq.JArray))
              {
                uVar7 = func_0x00018199a7c0(plVar9,0,0);
                if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
                  func_0x000180315660();
                }
                auStackX_18[0] = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
                uVar7 = func_0x00018199a7c0(plVar9,1,0);
                uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
                lVar11 = SkillNameTable__get_Instance(0);
                if (((lVar11 == 0) ||
                    (lVar11 = SkillNameTable__GetName(lVar11,auStackX_18[0],uVar4,0), lVar11 == 0))
                   || (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 == 0)) {
                  uVar7 = System_Int32__ToString(auStackX_18,0);
                  lVar11 = System_String__Concat(LIT_"'Skill '",uVar7,0);
                  if (lVar11 == 0) goto code_r0x0001806273ee;
                }
                uVar10 = System_String__Replace(lVar11,LIT_"'Item Skill: '",LIT_"''",0);
                iVar5 = Newtonsoft_Json_Linq_JContainer__get_Count(plVar9,0);
                uVar7 = LIT_"''";
                if (3 < iVar5) {
                  uVar7 = func_0x00018199a7c0(plVar9,3,0);
                  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
                }
                cVar3 = func_0x000181707e50(uVar7,0);
                if (cVar3 == '\0') {
                  uVar10 = System_String__Concat(uVar7,LIT_"': '",uVar10,0);
                }
                if (lVar6 == 0) goto code_r0x0001806273ee;
                FUN_180002eb0(lVar6,uVar10);
              }
            }
          }
        }
code_r0x0001806273a2:
      }
    }
  }
  return lVar6;
}

