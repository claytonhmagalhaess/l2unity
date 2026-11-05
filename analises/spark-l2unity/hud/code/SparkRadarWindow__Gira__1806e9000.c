// SparkRadarWindow__Gira__1806e9000 @ 0x1806e9000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Gira__1806e9000(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ushort uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 auStackX_18 [2];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [120];
  
  if (cRam00000001834b409a == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerController);
    cRam00000001834b409a = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  if (DAT_1834b31bf == '\0') {
    FUN_180315380(TI_CameraController);
    DAT_1834b31bf = '\x01';
  }
  uVar9 = **(undefined8 **)(TI_CameraController + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if (cVar6 == '\0') {
    uVar9 = GameManager__get_CameraDoJogo(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if (cVar6 == '\0') {
      lVar8 = 0;
    }
    else {
      lVar8 = GameManager__get_CameraDoJogo(0);
      if (lVar8 == 0) goto code_r0x0001806e974b;
      lVar8 = UnityEngine_Component__get_transform(lVar8,0);
    }
  }
  else {
    if (DAT_1834b31bf == '\0') {
      FUN_180315380(TI_CameraController);
      DAT_1834b31bf = '\x01';
    }
    if (**(longlong **)(TI_CameraController + 0xb8) == 0) goto code_r0x0001806e974b;
    lVar8 = UnityEngine_Component__get_transform(**(longlong **)(TI_CameraController + 0xb8),0);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Equality(lVar8,0,0);
  if (cVar6 == '\0') {
    if (lVar8 == 0) {
code_r0x0001806e974b:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar8 = UnityEngine_Transform__get_eulerAngles(&uStack_b8,lVar8,0);
    fVar15 = *(float *)(lVar8 + 4);
    fVar17 = -90.0 - fVar15;
    fVar16 = *(float *)(param_1 + 0x158) - fVar17;
    fVar14 = (float)func_0x0001803a9df0(fVar16 / 360.0);
    fVar16 = fVar16 - fVar14 * 360.0;
    if (fVar16 < 0.0) {
      fVar16 = 0.0;
    }
    else if (360.0 < fVar16) {
      fVar16 = 360.0;
    }
    if (180.0 < fVar16) {
      fVar16 = fVar16 - 360.0;
    }
    if (0.2 < ABS(fVar16)) {
      *(float *)(param_1 + 0x158) = fVar17;
      auStackX_18[0] = 0;
      UnityEngine_UIElements_Angle___ctor(auStackX_18,fVar17,0,0);
      UnityEngine_UIElements_Rotate___ctor(&uStack_98,auStackX_18[0],0);
      if (*(longlong *)(param_1 + 0x98) == 0) {
code_r0x0001806e9751:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar10 = (longlong *)
                UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
      uStack_b8 = uStack_98;
      uStack_b0 = uStack_90;
      uStack_a8 = uStack_88;
      puVar11 = (undefined4 *)
                UnityEngine_UIElements_StyleRotate__op_Implicit(auStack_80,&uStack_b8,0);
      if (plVar10 == (longlong *)0x0) goto code_r0x0001806e9751;
      uStack_d8 = *puVar11;
      uStack_d4 = puVar11[1];
      uStack_d0 = puVar11[2];
      lVar8 = *plVar10;
      uStack_cc = (undefined4)*(undefined8 *)(puVar11 + 3);
      uVar2 = uStack_cc;
      uStack_c8 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 3) >> 0x20);
      uVar3 = uStack_c8;
      uStack_c4 = (undefined4)*(undefined8 *)(puVar11 + 5);
      uVar4 = uStack_c4;
      uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 5) >> 0x20);
      uVar5 = uStack_c0;
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        uVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x6b)
                       * 0x10 + 0x138 + lVar8);
            goto code_r0x0001806e92f9;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x6b);
code_r0x0001806e92f9:
      uStack_cc = uVar2;
      uStack_c8 = uVar3;
      uStack_c4 = uVar4;
      uStack_c0 = uVar5;
      (*(code *)*puVar12)(plVar10,&uStack_d8,puVar12[1]);
      if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x0001806e9751;
      plVar10 = (longlong *)
                UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
      uStack_b8 = uStack_98;
      uStack_b0 = uStack_90;
      uStack_a8 = uStack_88;
      puVar11 = (undefined4 *)
                UnityEngine_UIElements_StyleRotate__op_Implicit(auStack_80,&uStack_b8,0);
      if (plVar10 == (longlong *)0x0) goto code_r0x0001806e9751;
      uStack_d8 = *puVar11;
      uStack_d4 = puVar11[1];
      uStack_d0 = puVar11[2];
      lVar8 = *plVar10;
      uStack_cc = (undefined4)*(undefined8 *)(puVar11 + 3);
      uVar2 = uStack_cc;
      uStack_c8 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 3) >> 0x20);
      uVar3 = uStack_c8;
      uStack_c4 = (undefined4)*(undefined8 *)(puVar11 + 5);
      uVar4 = uStack_c4;
      uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 5) >> 0x20);
      uVar5 = uStack_c0;
      if (*(ushort *)(lVar8 + 0x12e) != 0) {
        uVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x6b)
                       * 0x10 + 0x138 + lVar8);
            goto code_r0x0001806e93b9;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x6b);
code_r0x0001806e93b9:
      uStack_cc = uVar2;
      uStack_c8 = uVar3;
      uStack_c4 = uVar4;
      uStack_c0 = uVar5;
      (*(code *)*puVar12)(plVar10,&uStack_d8,puVar12[1]);
    }
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar9 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    fVar14 = fVar15;
    if (cVar6 != '\0') {
      if (*(int *)(TI_PlayerController + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b2f33 == '\0') {
        FUN_180315380(TI_PlayerController);
        DAT_1834b2f33 = '\x01';
      }
      if (*(int *)(TI_PlayerController + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar9 = **(undefined8 **)(TI_PlayerController + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if (cVar6 == '\0') {
        if (DAT_1834b2f32 == '\0') {
          FUN_180315380(TI_PlayerEntity);
          DAT_1834b2f32 = '\x01';
        }
        lVar8 = **(longlong **)(TI_PlayerEntity + 0xb8);
      }
      else {
        if (*(int *)(TI_PlayerController + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar8 = FUN_1804169a0(0);
      }
      if (((lVar8 == 0) || (lVar8 = UnityEngine_Component__get_transform(lVar8,0), lVar8 == 0)) ||
         ((iVar7 = UnityEngine_Transform__get_childCount(lVar8,0), 0 < iVar7 &&
          (lVar8 = UnityEngine_Transform__GetChild(lVar8,0,0), lVar8 == 0))))
      goto code_r0x0001806e974b;
      lVar8 = UnityEngine_Transform__get_eulerAngles(&uStack_b8,lVar8,0);
      fVar14 = *(float *)(lVar8 + 4);
    }
    fVar14 = fVar14 - fVar15;
    fVar16 = *(float *)(param_1 + 0x15c) - fVar14;
    fVar15 = (float)func_0x0001803a9df0(fVar16 / 360.0);
    fVar16 = fVar16 - fVar15 * 360.0;
    if (fVar16 < 0.0) {
      fVar16 = 0.0;
    }
    else if (360.0 < fVar16) {
      fVar16 = 360.0;
    }
    if (180.0 < fVar16) {
      fVar16 = fVar16 - 360.0;
    }
    if (0.5 < ABS(fVar16)) {
      *(float *)(param_1 + 0x15c) = fVar14;
      if (*(longlong *)(param_1 + 200) != 0) {
        plVar10 = (longlong *)
                  UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
        auStackX_18[0] = 0;
        UnityEngine_UIElements_Angle___ctor(auStackX_18,fVar14,0,0);
        uStack_a8 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        UnityEngine_UIElements_Rotate___ctor(&uStack_b8,auStackX_18[0],0);
        uStack_d8 = (undefined4)uStack_b8;
        uStack_d4 = uStack_b8._4_4_;
        uStack_d0 = (undefined4)uStack_b0;
        uStack_cc = uStack_b0._4_4_;
        uStack_c8 = (undefined4)uStack_a8;
        uStack_c4 = (undefined4)((ulonglong)uStack_a8 >> 0x20);
        puVar11 = (undefined4 *)
                  UnityEngine_UIElements_StyleRotate__op_Implicit(auStack_80,&uStack_d8,0);
        if (plVar10 != (longlong *)0x0) {
          uStack_d8 = *puVar11;
          uStack_d4 = puVar11[1];
          uStack_d0 = puVar11[2];
          lVar8 = *plVar10;
          uStack_cc = (undefined4)*(undefined8 *)(puVar11 + 3);
          uVar2 = uStack_cc;
          uStack_c8 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 3) >> 0x20);
          uVar3 = uStack_c8;
          uStack_c4 = (undefined4)*(undefined8 *)(puVar11 + 5);
          uVar4 = uStack_c4;
          uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 5) >> 0x20);
          uVar5 = uStack_c0;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar12 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0x6b) * 0x10 + 0x138 + lVar8);
                goto code_r0x0001806e96d3;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x6b);
code_r0x0001806e96d3:
          uStack_cc = uVar2;
          uStack_c8 = uVar3;
          uStack_c4 = uVar4;
          uStack_c0 = uVar5;
          (*(code *)*puVar12)(plVar10,&uStack_d8,puVar12[1]);
          return;
        }
      }
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

