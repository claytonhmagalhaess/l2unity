// L2ToolTip__UpdateTooltipItem__180798870 @ 0x180798870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ToolTip__UpdateTooltipItem__180798870
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lStackX_10;
  
  if (cRam00000001834b446a == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'-Grade]'");
    FUN_180315380(LIT_"'  ['");
    FUN_180315380(LIT_"'Data/UI/Assets/Inventory/grade_'");
    FUN_180315380(LIT_"''");
    cRam00000001834b446a = '\x01';
  }
  if ((param_2 != 0) || (param_2 = LIT_"''", LIT_"''" != 0)) {
    iVar4 = func_0x0001817079f0(param_2,10,0);
    lVar5 = LIT_"''";
    lStackX_10 = param_2;
    if (-1 < iVar4) {
      lStackX_10 = System_String__Substring(param_2,0,iVar4,0);
      if (param_2 == 0) goto DAT_180798b19;
      lVar5 = func_0x00018170c060(param_2,iVar4 + 1,0);
    }
    lVar6 = LIT_"''";
    if (lVar5 != 0) {
      iVar4 = func_0x0001817079f0(lVar5,10,0);
      lVar7 = lVar5;
      if (-1 < iVar4) {
        lVar7 = System_String__Substring(lVar5,0,iVar4,0);
      }
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkDicaItem__EhLinhaDeTipo__1806264f0(lVar7,0);
      lVar9 = lVar5;
      if ((cVar3 != '\0') && (lVar6 = lVar7, lVar9 = LIT_"''", -1 < iVar4)) {
        lVar9 = func_0x00018170c060(lVar5,iVar4 + 1,0);
      }
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = SparkDicaItem__TiraGrau__18062a090(&lStackX_10,0);
      if (lVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = System_String__Concat(LIT_"'Data/UI/Assets/Inventory/grade_'",lVar5,0);
        if (*(int *)(TI_SparkArte + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar8 = FUN_180a90ae0(uVar8,MR_SparkArte.Load<UnityEngine.Texture2D>);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Equality(uVar8,0,0);
        lVar7 = lStackX_10;
        if (cVar3 != '\0') {
          uVar2 = System_String__ToUpperInvariant(lVar5,0);
          lStackX_10 = System_String__Concat
                                 (lVar7,LIT_"'  ['",uVar2,LIT_"'-Grade]'",0);
        }
      }
      L2ToolTip__UpdateTooltipLink__180798b20
                (param_1,lStackX_10,lVar9,param_3,param_4,lVar6,uVar8,0);
      return;
    }
  }
DAT_180798b19:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

