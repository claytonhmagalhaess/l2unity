// SparkQuestHud__PosicaoInicial__1806b3890 @ 0x1806b3890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__PosicaoInicial__1806b3890(longlong param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  float afStackX_8 [2];
  float afStackX_20 [2];
  undefined1 auStack_58 [64];
  
  if (cRam00000001834b3fda == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(LIT_"'spark.quest.quadro.proporcao'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3fda = '\x01';
  }
  afStackX_20[0] = 0.0;
  afStackX_8[0] = 0.0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
code_r0x0001806b3b79:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = func_0x0001825d76d0(*(longlong *)(param_1 + 0x20),0);
  if (*(char *)(param_1 + 0x68) == '\0') {
    if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x0001806b3b79;
    lVar7 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x20),0);
    if ((lVar7 != 0) && (lVar4 != 0)) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_layout(auStack_58,lVar4,0);
      fVar1 = *(float *)(lVar7 + 8);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (10.0 <= fVar1) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                            (auStack_58,*(longlong *)(param_1 + 0x20),0);
          fVar1 = *(float *)(lVar7 + 8);
          if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (fVar1 < 10.0) {
            return;
          }
          *(undefined1 *)(param_1 + 0x68) = 1;
          lVar7 = UnityEngine_PlayerPrefs__GetString(LIT_"'spark.quest.quadro.proporcao'",LIT_"''",0);
          if (lVar7 != 0) {
            lVar7 = System_String__Split(lVar7,0x7c,0,0);
            if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (lVar7 != 0) {
              if ((*(int *)(lVar7 + 0x18) == 2) &&
                 (cVar6 = System_Single__TryParse
                                    (*(undefined8 *)(lVar7 + 0x20),0xa7,uVar8,afStackX_20,0),
                 cVar6 != '\0')) {
                if (*(uint *)(lVar7 + 0x18) < 2) {
                  FUN_1803155c0();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                cVar6 = System_Single__TryParse
                                  (*(undefined8 *)(lVar7 + 0x28),0xa7,uVar8,afStackX_8,0);
                fVar1 = afStackX_20[0];
                if ((((cVar6 != '\0') && (0.0 <= afStackX_20[0])) && (afStackX_20[0] <= 1.0)) &&
                   ((0.0 <= afStackX_8[0] && (afStackX_8[0] <= 1.0)))) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_layout(auStack_58,lVar4,0);
                  fVar2 = *(float *)(lVar7 + 8);
                  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  fVar5 = afStackX_8[0];
                  lVar4 = UnityEngine_UIElements_VisualElement__get_layout(auStack_58,lVar4,0);
                  SparkQuestHud__Move__1806b3090
                            (param_1,CONCAT44(fVar5 * *(float *)(lVar4 + 0xc),fVar2 * fVar1),0);
                  return;
                }
              }
              SparkQuestHud__Padrao__1806b35c0(param_1,0);
              return;
            }
          }
        }
        goto code_r0x0001806b3b79;
      }
    }
  }
  return;
}

