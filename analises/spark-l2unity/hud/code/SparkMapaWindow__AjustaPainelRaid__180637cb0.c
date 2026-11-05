// SparkMapaWindow__AjustaPainelRaid__180637cb0 @ 0x180637cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__AjustaPainelRaid__180637cb0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3d2c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3d2c = '\x01';
  }
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    plVar3 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x1b8));
    puVar4 = (undefined8 *)UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,2,0)
    ;
    if (plVar3 == (longlong *)0x0) {
code_r0x000180637fcf:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar9 = *plVar3;
    uVar6 = 0;
    uVar1 = *puVar4;
    uVar7 = *(undefined4 *)(puVar4 + 1);
    uVar5 = 0;
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar5 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar4 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 0x47) *
                    0x10 + 0x138 + lVar9);
          goto code_r0x000180637d89;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(lVar9 + 0x12e));
    }
    puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180637d89:
    uStack_28 = uVar1;
    uStack_20 = uVar7;
    (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
    if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x000180637fcf;
    plVar3 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b8),0);
    puVar4 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x43870000,0);
    if (plVar3 == (longlong *)0x0) goto code_r0x000180637fcf;
    lVar9 = *plVar3;
    uVar10 = (undefined4)*puVar4;
    uVar11 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    uVar7 = *(undefined4 *)(puVar4 + 1);
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar8 = *(longlong *)(lVar9 + 0xb0);
      do {
        if (*(longlong *)(lVar8 + (ulonglong)uVar6 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x000180637fab;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(lVar9 + 0x12e));
    }
  }
  else {
    plVar3 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x1b8));
    puVar4 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x40800000,0);
    if (plVar3 == (longlong *)0x0) goto code_r0x000180637fcf;
    lVar9 = *plVar3;
    uVar6 = 0;
    uVar1 = *puVar4;
    uVar7 = *(undefined4 *)(puVar4 + 1);
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar5 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar4 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 0x47) *
                    0x10 + 0x138 + lVar9);
          goto code_r0x000180637ef9;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(lVar9 + 0x12e));
    }
    puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180637ef9:
    uStack_28 = uVar1;
    uStack_20 = uVar7;
    (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
    if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x000180637fcf;
    plVar3 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b8),0);
    puVar4 = (undefined8 *)UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,2,0)
    ;
    if (plVar3 == (longlong *)0x0) goto code_r0x000180637fcf;
    lVar9 = *plVar3;
    uVar10 = (undefined4)*puVar4;
    uVar11 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    uVar7 = *(undefined4 *)(puVar4 + 1);
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar8 = *(longlong *)(lVar9 + 0xb0);
      do {
        if (*(longlong *)(lVar8 + (ulonglong)uVar6 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x000180637fab;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(lVar9 + 0x12e));
    }
  }
  puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180637e26:
  uStack_28 = CONCAT44(uVar11,uVar10);
  uStack_20 = uVar7;
  (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
  return;
code_r0x000180637fab:
  puVar4 = (undefined8 *)
           ((longlong)(*(int *)(lVar8 + 8 + (ulonglong)uVar6 * 0x10) + 0xad) * 0x10 + 0x138 + lVar9)
  ;
  goto code_r0x000180637e26;
}

