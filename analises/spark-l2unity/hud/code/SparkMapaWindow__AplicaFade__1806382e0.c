// SparkMapaWindow__AplicaFade__1806382e0 @ 0x1806382e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__AplicaFade__1806382e0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  float fVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [64];
  
  if (cRam00000001834b3d21 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3d21 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  fVar9 = 1.0 - *(float *)(param_1 + 0x254);
  fVar9 = 1.0 - (1.0 - *(float *)(param_1 + 0x254)) * fVar9 * fVar9;
  lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x30),0);
  uVar5 = func_0x000182601c10(fVar9,0);
  if (lVar4 != 0) {
    FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      fVar9 = fVar9 * 0.04000002 + 0.96;
      plVar6 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      uStack_78 = CONCAT44(fVar9,fVar9);
      uStack_70 = CONCAT44(uStack_70._4_4_,0x3f800000);
      uStack_58 = 0;
      uStack_50 = 0;
      func_0x000182149c00(&uStack_58,&uStack_78,0);
      uStack_78 = uStack_58;
      uStack_70 = uStack_50;
      puVar7 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_78,0)
      ;
      if (plVar6 != (longlong *)0x0) {
        lVar4 = *plVar6;
        uVar5 = *puVar7;
        uVar3 = puVar7[1];
        uVar1 = *(undefined4 *)(puVar7 + 2);
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          uVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x6d)
                        * 0x10 + 0x138 + lVar4);
              goto code_r0x000180638473;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x6d);
code_r0x000180638473:
        uStack_78 = uVar5;
        uStack_70 = uVar3;
        uStack_68 = uVar1;
        (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

