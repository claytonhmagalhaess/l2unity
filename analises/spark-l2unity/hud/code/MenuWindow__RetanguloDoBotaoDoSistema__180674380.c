// MenuWindow__RetanguloDoBotaoDoSistema__180674380 @ 0x180674380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * MenuWindow__RetanguloDoBotaoDoSistema__180674380(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b3df3 == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'SystemMenuButton'");
    cRam00000001834b3df3 = '\x01';
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = FUN_180b0e310(uVar1,LIT_"'SystemMenuButton'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    if (lVar3 != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_worldBound(auStack_28,lVar3,0);
      fVar2 = *(float *)(lVar4 + 8);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (0.0 < fVar2) {
        puVar5 = (undefined4 *)
                 UnityEngine_UIElements_VisualElement__get_worldBound(auStack_28,lVar3,0);
        uVar6 = *puVar5;
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        uVar9 = puVar5[3];
        goto code_r0x00018067448d;
      }
    }
    if (*(longlong *)(param_2 + 0x30) != 0) {
      puVar5 = (undefined4 *)
               UnityEngine_UIElements_VisualElement__get_worldBound
                         (auStack_28,*(undefined8 *)(param_2 + 0x30),0);
      uVar6 = *puVar5;
      uVar7 = puVar5[1];
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      goto code_r0x00018067448d;
    }
  }
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
code_r0x00018067448d:
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  return param_1;
}

