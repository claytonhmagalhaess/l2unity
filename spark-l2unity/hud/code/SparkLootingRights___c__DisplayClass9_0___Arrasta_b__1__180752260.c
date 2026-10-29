// SparkLootingRights___c__DisplayClass9_0___Arrasta_b__1__180752260 @ 0x180752260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLootingRights___c__DisplayClass9_0___Arrasta_b__1__180752260
               (longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (cRam00000001834b4285 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_position);
    FUN_180315380(TI_SparkLootingRights);
    cRam00000001834b4285 = '\x01';
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if ((param_2 != 0) && (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0)) {
    fVar10 = *(float *)(param_2 + 0x9c);
    fVar11 = *(float *)(param_1 + 0x14);
    fVar1 = *(float *)(param_2 + 0xa0);
    fVar2 = *(float *)(param_1 + 0x18);
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style
                       (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
    fVar10 = (fVar10 - fVar11) + *(float *)(param_1 + 0x1c);
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,fVar10,0);
    if (plVar7 != (longlong *)0x0) {
      lVar5 = *plVar7;
      uVar3 = *puVar8;
      uVar4 = *(undefined4 *)(puVar8 + 1);
      if (*(ushort *)(lVar5 + 0x12e) != 0) {
        uVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar8 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x47) *
                      0x10 + 0x138 + lVar5);
            goto code_r0x000180752399;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180752399:
      uStack_58 = uVar3;
      uStack_50 = uVar4;
      (*(code *)*puVar8)(plVar7,&uStack_58,puVar8[1]);
      if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
        plVar7 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style
                           (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
        fVar11 = (fVar1 - fVar2) + *(float *)(param_1 + 0x20);
        fVar10 = 0.0;
        if (0.0 <= fVar11) {
          fVar10 = fVar11;
        }
        puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,fVar10,0);
        if (plVar7 != (longlong *)0x0) {
          lVar5 = *plVar7;
          uVar3 = *puVar8;
          uVar4 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            uVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                          0x73) * 0x10 + 0x138 + lVar5);
                goto code_r0x000180752463;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180752463:
          uStack_58 = uVar3;
          uStack_50 = uVar4;
          (*(code *)*puVar8)(plVar7,&uStack_58,puVar8[1]);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

