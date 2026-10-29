// NameplatesManagerGame__UpdatePlayerGauge__18067c200 @ 0x18067c200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__UpdatePlayerGauge__18067c200(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return;
  }
  fVar9 = *(float *)(*(longlong *)(param_1 + 0x70) + 0x138);
  fVar8 = (float)FUN_182436650(0);
  lVar3 = *(longlong *)(param_1 + 0x70);
  if (0.0 < fVar9 - fVar8) {
    fVar9 = (float)FUN_182436650(0);
    if (lVar3 != 0) {
      if (cRam00000001834b3e15 == '\0') {
        FUN_180315380(TI_UnityEngine.UIElements.IStyle);
        cRam00000001834b3e15 = '\x01';
      }
      if (*(char *)(lVar3 + 0x130) == '\0') {
        return;
      }
      fVar9 = (fVar9 - *(float *)(lVar3 + 0x134)) /
              (*(float *)(lVar3 + 0x138) - *(float *)(lVar3 + 0x134));
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      else if (1.0 < fVar9) {
        fVar9 = 1.0;
      }
      if (*(longlong *)(lVar3 + 0x140) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x140),0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,fVar9 * 80.0,0);
        if (plVar5 != (longlong *)0x0) {
          lVar3 = *plVar5;
          uVar1 = *puVar6;
          uVar2 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar3 + 0x12e) != 0) {
            uVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                          0xad) * 0x10 + 0x138 + lVar3);
                goto code_r0x00018067c365;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067c365:
          uStack_38 = uVar1;
          uStack_30 = uVar2;
          (*(code *)*puVar6)(plVar5,&uStack_38,puVar6[1]);
          return;
        }
      }
    }
  }
  else if (lVar3 != 0) {
    PlayerNameplate__HideGauge__1806a2530(lVar3,0);
    return;
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

