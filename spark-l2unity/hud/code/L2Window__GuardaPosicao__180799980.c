// L2Window__GuardaPosicao__180799980 @ 0x180799980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__GuardaPosicao__180799980(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float afStackX_8 [2];
  float fStackX_1c;
  undefined1 auStack_68 [96];
  
  if (cRam00000001834b4481 == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(LIT_"'0.0000'");
    FUN_180315380(LIT_"'canto|'");
    FUN_180315380(LIT_"'|'");
    cRam00000001834b4481 = '\x01';
  }
  uVar7 = L2Window__Painel__18079a070(param_1,0);
  if ((param_1[6] != 0) && (fVar10 = (float)uVar7, 0.0 < fVar10)) {
    pfVar8 = (float *)UnityEngine_UIElements_VisualElement__get_layout(auStack_68,param_1[6],0);
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    fVar4 = pfVar8[3];
    if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    cVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    fStackX_1c = (float)((ulonglong)uVar7 >> 0x20);
    if (cVar6 == '\0') {
      uVar7 = L2Window__get_ChaveDaPosicao(param_1,0);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      afStackX_8[0] = (fVar3 * 0.5 + fVar1) / fVar10;
      uVar5 = System_Single__ToString(afStackX_8,LIT_"'0.0000'",uVar9,0);
      afStackX_8[0] = (fVar4 * 0.5 + fVar2) / fStackX_1c;
      uVar9 = System_Single__ToString(afStackX_8,LIT_"'0.0000'",uVar9,0);
      uVar9 = System_String__Concat(uVar5,LIT_"'|'",uVar9,0);
    }
    else {
      uVar7 = L2Window__get_ChaveDaPosicao(param_1,0);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      afStackX_8[0] = fVar1 / fVar10;
      uVar5 = System_Single__ToString(afStackX_8,LIT_"'0.0000'",uVar9,0);
      afStackX_8[0] = fVar2 / fStackX_1c;
      uVar9 = System_Single__ToString(afStackX_8,LIT_"'0.0000'",uVar9,0);
      uVar9 = System_String__Concat(LIT_"'canto|'",uVar5,LIT_"'|'",uVar9,0);
    }
    UnityEngine_PlayerPrefs__SetString(uVar7,uVar9,0);
  }
  return;
}

