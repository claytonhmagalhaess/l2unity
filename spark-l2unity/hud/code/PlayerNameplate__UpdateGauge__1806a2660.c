// PlayerNameplate__UpdateGauge__1806a2660 @ 0x1806a2660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerNameplate__UpdateGauge__1806a2660(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  float fVar8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3e15 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3e15 = '\x01';
  }
  if (*(char *)(param_1 + 0x130) == '\0') {
    return;
  }
  fVar8 = (param_2 - *(float *)(param_1 + 0x134)) /
          (*(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x134));
  if (fVar8 < 0.0) {
    fVar8 = 0.0;
  }
  else if (1.0 < fVar8) {
    fVar8 = 1.0;
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x140),0);
    puVar6 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,fVar8 * 80.0,0);
    if (plVar5 != (longlong *)0x0) {
      lVar3 = *plVar5;
      uVar1 = *puVar6;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar3);
            goto code_r0x0001806a2765;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806a2765:
      uStack_28 = uVar1;
      uStack_20 = uVar2;
      (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

