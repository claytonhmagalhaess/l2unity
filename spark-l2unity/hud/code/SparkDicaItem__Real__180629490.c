// SparkDicaItem__Real__180629490 @ 0x180629490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDicaItem__Real__180629490(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort uVar13;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (cRam00000001834b3cf2 == '\0') {
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    cRam00000001834b3cf2 = '\x01';
  }
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  lVar5 = Newtonsoft_Json_Linq_JObject__get_Item(param_1,param_2,0);
  if (lVar5 == 0) {
    return 0;
  }
  uVar6 = Newtonsoft_Json_Linq_JObject__get_Item(param_1,param_2,0);
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b9e5f == '\0') {
    FUN_180315380(TI_System.Numerics.BigInteger);
    FUN_180315380(TI_System.Convert);
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_Newtonsoft.Json.Linq.JToken);
    cRam00000001834b9e5f = '\x01';
  }
  if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar9 = (longlong *)Newtonsoft_Json_Linq_JToken__EnsureValue(uVar6,0);
  if (plVar9 != (longlong *)0x0) {
    if (*(int *)(TI_Newtonsoft.Json.Linq.JToken + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar11 = *(undefined8 *)(*(longlong *)(TI_Newtonsoft.Json.Linq.JToken + 0xb8) + 8);
    if (cRam00000001834b9e43 == '\0') {
      FUN_180315380(MR_System.Array.IndexOf<Newtonsoft.Json.Linq.JTokenType>);
      cRam00000001834b9e43 = '\x01';
    }
    uVar3 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
    iVar4 = FUN_1809dfe70(uVar11,uVar3,MR_System.Array.IndexOf<Newtonsoft.Json.Linq.JTokenType>);
    if (iVar4 != -1) {
      plVar9 = (longlong *)plVar9[7];
      if (plVar9 != (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
        if (*plVar9 == TI_System.Numerics.BigInteger) {
          plVar8 = plVar9;
        }
        if (plVar8 != (longlong *)0x0) {
          if (*(longlong *)(*plVar9 + 0x40) == *(longlong *)(TI_System.Numerics.BigInteger + 0x40)) {
            puVar10 = (undefined8 *)func_0x000180314870();
            uStack_28 = *puVar10;
            uStack_20 = puVar10[1];
            if (*(int *)(TI_System.Numerics.BigInteger + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar6 = System_Numerics_BigInteger__op_Explicit(&uStack_28,0);
            return uVar6;
          }
          FUN_1803146d0(plVar9,TI_System.Numerics.BigInteger);
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
      }
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(TI_System.Convert + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b9232 == '\0') {
        FUN_180315380(TI_System.IConvertible,uVar6,0);
        cRam00000001834b9232 = '\x01';
      }
      lVar5 = TI_System.IConvertible;
      if (plVar9 == (longlong *)0x0) {
        return 0;
      }
      lVar7 = func_0x0001803146b0(plVar9,TI_System.IConvertible);
      lVar2 = TI_System.IConvertible;
      if (lVar7 == 0) {
        FUN_1803146d0(plVar9,lVar5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      plVar8 = (longlong *)func_0x0001803146b0(plVar9,TI_System.IConvertible);
      if (plVar8 == (longlong *)0x0) {
        FUN_1803146d0(plVar9,lVar2);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      lVar5 = *plVar8;
      if (*(ushort *)(lVar5 + 0x12e) != 0) {
        uVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TI_System.IConvertible) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0xb)
                       * 0x10 + 0x138 + lVar5);
            goto LAB_180255d43;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar5 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_System.IConvertible,0xb);
LAB_180255d43:
                    /* WARNING: Could not recover jumptable at 0x000180255d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar10)(plVar8,uVar6,puVar10[1]);
      return uVar6;
    }
  }
  uVar11 = func_0x0001803153a0(TI_System.Globalization.CultureInfo);
  func_0x000180002510(uVar11);
  uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar12 = func_0x0001803153a0(TI_Newtonsoft.Json.Linq.JToken);
  func_0x000180002510(uVar12);
  uVar6 = Newtonsoft_Json_Linq_JToken__GetType(uVar6,0);
  uVar12 = func_0x0001803153a0(LIT_"'Can not convert {0} to Single.'");
  uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar12,uVar11,uVar6,0);
  uVar11 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar11 = func_0x000180315580(uVar11);
  System_ArgumentException___ctor(uVar11,uVar6,0);
  uVar6 = func_0x0001803153a0(MD_Newtonsoft.Json.Linq.JToken.op_Explicit);
  FUN_180315590(uVar11,uVar6);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

