// SparkRadarWindow__DesenhaPlanta__1806e6e30 @ 0x1806e6e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__DesenhaPlanta__1806e6e30(longlong param_1,float *param_2,float param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ushort uVar14;
  float fVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_68 [80];
  
  if (cRam00000001834b40a0 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b40a0 = '\x01';
  }
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  param_3 = param_3 / 52.5;
  if (lVar2 != 0) {
    fVar15 = (1024.0 / *(float *)(lVar2 + 0x28)) * param_3;
    if (fVar15 == *(float *)(param_1 + 0x1e8)) {
code_r0x0001806e7023:
      if (*(longlong *)(param_1 + 0x1b0) != 0) {
        plVar8 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b0),0);
        uVar11 = func_0x0001825fc560((*(float *)(lVar2 + 0x20) - param_2[2] * 52.5) * param_3,0);
        uVar12 = func_0x0001825fc560((*(float *)(lVar2 + 0x24) - *param_2 * 52.5) * param_3,0);
        uStack_98 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        func_0x000182607f40(&uStack_a8,uVar11,uVar12,0);
        uStack_88 = (undefined4)uStack_a8;
        uStack_84 = uStack_a8._4_4_;
        uStack_80 = (undefined4)uStack_a0;
        uStack_7c = uStack_a0._4_4_;
        uStack_78 = (undefined4)uStack_98;
        uStack_74 = (undefined4)((ulonglong)uStack_98 >> 0x20);
        puVar13 = (undefined4 *)
                  UnityEngine_UIElements_StyleRotate__op_Implicit(auStack_68,&uStack_88,0);
        if (plVar8 != (longlong *)0x0) {
          uStack_88 = *puVar13;
          uStack_84 = puVar13[1];
          uStack_80 = puVar13[2];
          lVar2 = *plVar8;
          uStack_7c = (undefined4)*(undefined8 *)(puVar13 + 3);
          uVar1 = uStack_7c;
          uStack_78 = (undefined4)((ulonglong)*(undefined8 *)(puVar13 + 3) >> 0x20);
          uVar5 = uStack_78;
          uStack_74 = (undefined4)*(undefined8 *)(puVar13 + 5);
          uVar6 = uStack_74;
          uStack_70 = (undefined4)((ulonglong)*(undefined8 *)(puVar13 + 5) >> 0x20);
          uVar7 = uStack_70;
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            uVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                           0x7f) * 0x10 + 0x138 + lVar2);
                goto code_r0x0001806e7137;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x0001806e7137:
          uStack_7c = uVar1;
          uStack_78 = uVar5;
          uStack_74 = uVar6;
          uStack_70 = uVar7;
          (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]);
          return;
        }
      }
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(float *)(param_1 + 0x1e8) = fVar15;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      plVar8 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b0),0);
      if (*(longlong *)(param_1 + 0x1b0) != 0) {
        plVar9 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b0),0);
        puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,fVar15,0)
        ;
        if (plVar9 != (longlong *)0x0) {
          lVar3 = *plVar9;
          uVar11 = *puVar10;
          uVar1 = *(undefined4 *)(puVar10 + 1);
          if (*(ushort *)(lVar3 + 0x12e) != 0) {
            uVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                           0x43) * 0x10 + 0x138 + lVar3);
                goto code_r0x0001806e6f87;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar3 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806e6f87:
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
          uStack_a8 = uVar11;
          (*(code *)*puVar10)(plVar9,&uStack_a8,puVar10[1]);
          if (plVar8 != (longlong *)0x0) {
            lVar3 = *plVar8;
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                             0xad) * 0x10 + 0x138 + lVar3);
                  goto code_r0x0001806e7009;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806e7009:
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
            uStack_a8 = uVar11;
            (*(code *)*puVar10)(plVar8,&uStack_a8,puVar10[1]);
            goto code_r0x0001806e7023;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

