// SparkQuestHud__Guarda__1806b0f30 @ 0x1806b0f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__Guarda__1806b0f30(longlong param_1)

{
  float fVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 uVar7;
  float afStackX_8 [2];
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b3fdb == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(LIT_"'spark.quest.quadro.proporcao'");
    FUN_180315380(LIT_"'0.0000'");
    FUN_180315380(LIT_"'|'");
    cRam00000001834b3fdb = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
code_r0x0001806b110d:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar3 = func_0x0001825d76d0(*(longlong *)(param_1 + 0x20),0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_layout(auStack_28,lVar3,0);
    fVar1 = *(float *)(lVar4 + 8);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (10.0 <= fVar1) {
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        pfVar6 = (float *)UnityEngine_UIElements_VisualElement__get_layout
                                    (auStack_28,*(longlong *)(param_1 + 0x20),0);
        fVar1 = *pfVar6;
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar4 = UnityEngine_UIElements_VisualElement__get_layout(auStack_28,lVar3,0);
        afStackX_8[0] = fVar1 / *(float *)(lVar4 + 8);
        uVar7 = System_Single__ToString(afStackX_8,LIT_"'0.0000'",uVar5,0);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          lVar4 = UnityEngine_UIElements_VisualElement__get_layout
                            (auStack_28,*(longlong *)(param_1 + 0x20),0);
          fVar1 = *(float *)(lVar4 + 4);
          lVar3 = UnityEngine_UIElements_VisualElement__get_layout(auStack_28,lVar3,0);
          afStackX_8[0] = fVar1 / *(float *)(lVar3 + 0xc);
          uVar5 = System_Single__ToString(afStackX_8,LIT_"'0.0000'",uVar5,0);
          uVar5 = System_String__Concat(uVar7,LIT_"'|'",uVar5,0);
          UnityEngine_PlayerPrefs__SetString(LIT_"'spark.quest.quadro.proporcao'",uVar5,0);
          return;
        }
      }
      goto code_r0x0001806b110d;
    }
  }
  return;
}

