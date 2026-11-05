// SparkMapaWindow__Update__18064af10 @ 0x18064af10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__Update__18064af10(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if (cRam00000001834b3d20 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d20 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     ((*(int *)(param_1 + 600) != 0 || (*(char *)(param_1 + 0x38) == '\0')))) {
    fVar6 = (float)FUN_182436680(0);
    if (0.05 <= fVar6) {
      fVar6 = 0.05;
    }
    if (*(int *)(param_1 + 600) != 0) {
      if (*(int *)(param_1 + 600) < 1) {
        fVar8 = -0.14;
      }
      else {
        fVar8 = 0.18;
      }
      fVar8 = fVar6 / fVar8 + *(float *)(param_1 + 0x254);
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      *(float *)(param_1 + 0x254) = fVar8;
      iVar1 = *(int *)(param_1 + 600);
      if (0 < iVar1) {
        if (1.0 <= fVar8) {
          *(undefined4 *)(param_1 + 600) = 0;
        }
        iVar1 = *(int *)(param_1 + 600);
      }
      if (((iVar1 < 0) && (fVar8 <= 0.0)) &&
         (*(undefined4 *)(param_1 + 600) = 0, *(char *)(param_1 + 0x38) != '\0')) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
DAT_18064b253:
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar4 == 0) goto DAT_18064b253;
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      }
      SparkMapaWindow__AplicaFade__1806382e0(param_1,0);
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      fVar8 = *(float *)(param_1 + 0x234);
      fVar9 = *(float *)(param_1 + 0x238);
      if (DAT_1834b2f44 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector2);
        DAT_1834b2f44 = '\x01';
      }
      fVar8 = fVar8 - **(float **)(TI_UnityEngine.Vector2 + 0xb8);
      fVar9 = fVar9 - (*(float **)(TI_UnityEngine.Vector2 + 0xb8))[1];
      if ((9.9999994e-11 <= fVar9 * fVar9 + fVar8 * fVar8) && (*(char *)(param_1 + 0x228) == '\0'))
      {
        SparkMapaWindow__Arrasta__180638bc0
                  (param_1,CONCAT44(fVar6 * *(float *)(param_1 + 0x238),
                                    fVar6 * *(float *)(param_1 + 0x234)),1,0);
        fVar8 = (float)FUN_1803aa2b0(fVar6 * -5.0);
        fVar9 = fVar8 * *(float *)(param_1 + 0x238);
        fVar8 = fVar8 * *(float *)(param_1 + 0x234);
        *(float *)(param_1 + 0x238) = fVar9;
        *(float *)(param_1 + 0x234) = fVar8;
        if (fVar9 * fVar9 + fVar8 * fVar8 < 144.0) {
          uVar5 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition(0);
          *(undefined8 *)(param_1 + 0x234) = uVar5;
        }
      }
      fVar8 = *(float *)(param_1 + 0x248);
      if (fVar8 != 0.0) {
        if (0.002 <= ABS(fVar8)) {
          fVar9 = (float)FUN_1803aa2b0(fVar6 * -14.0);
          fVar8 = (1.0 - fVar9) * fVar8;
        }
        *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x248) - fVar8;
        uVar7 = FUN_1803aa2b0(fVar8);
        cVar3 = SparkMapaWindow__AplicaZoom__180638900
                          (param_1,uVar7,*(undefined8 *)(param_1 + 0x24c),0);
        if (cVar3 == '\0') {
          *(undefined4 *)(param_1 + 0x248) = 0;
        }
        SparkMapaWindow__Redesenha__180646390(param_1,0);
      }
      SparkMapaWindow__Florestas__18063ab30(param_1,fVar6,0);
    }
  }
  return;
}

