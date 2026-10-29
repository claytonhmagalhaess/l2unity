// ClickManager__DestinoNadando__1804f2750 @ 0x1804f2750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ClickManager__DestinoNadando__1804f2750
          (longlong param_1,float *param_2,float *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float extraout_XMM0_Da_00;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  ulonglong uStack_128;
  float fStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  
  if (cRam00000001834b35a3 == '\0') {
    FUN_180315380(MR_System.Array.Sort<UnityEngine.RaycastHit>);
    FUN_180315380(TI_System.Comparison<UnityEngine.RaycastHit>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Physics);
    FUN_180315380(TI_PlayerController);
    FUN_180315380(TI_SparkNado);
    FUN_180315380(MD_ClickManager.__c._DestinoNadando_b__27_0);
    FUN_180315380(TI_ClickManager.<>c);
    cRam00000001834b35a3 = '\x01';
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  fStack_120 = 0.0;
  uStack_118 = 0;
  uStack_110 = 0;
  if (DAT_1834b2e67 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector3);
    DAT_1834b2e67 = '\x01';
  }
  fVar23 = *(float *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
  *(undefined8 *)param_3 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
  param_3[2] = fVar23;
  if (DAT_1834b2f30 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector3);
    DAT_1834b2f30 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x20);
  *param_4 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x18);
  *(undefined4 *)(param_4 + 1) = uVar2;
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
  lVar10 = **(longlong **)(TI_PlayerController + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Equality(lVar10,0,0);
  if (cVar5 == '\0') {
    if (lVar10 == 0) goto code_r0x0001804f3046;
    if ((*(char *)(lVar10 + 0x7c) != '\0') &&
       (cVar5 = PlayerController__get_Voando(lVar10,0), cVar5 == '\0')) {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      uVar13 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if (cVar5 == '\0') {
        fVar23 = *(float *)(lVar10 + 0x80);
        if (*(int *)(TI_SparkNado + 0xe4) == 0) {
          func_0x000180315660();
        }
        fVar16 = (float)SparkNado__get_LinhaDeBoia(0);
        lVar10 = FUN_1804169f0(0);
        if (lVar10 != 0) {
          lVar10 = UnityEngine_Component__get_transform(lVar10,0);
          uVar6 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x60),0);
          if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
            func_0x000180315660();
          }
          uStack_138 = *(undefined8 *)(param_2 + 4);
          uStack_148 = *(undefined8 *)param_2;
          fStack_140 = param_2[2];
          fStack_13c = param_2[3];
          lVar11 = UnityEngine_Physics__RaycastAll(&uStack_148,0x447a0000,~uVar6,1,0);
          if (*(int *)(TI_ClickManager.<>c + 0xe4) == 0) {
            func_0x000180315660(TI_ClickManager.<>c);
          }
          lVar12 = *(longlong *)(*(longlong *)(TI_ClickManager.<>c + 0xb8) + 0x10);
          if (lVar12 == 0) {
            if (*(int *)(TI_ClickManager.<>c + 0xe4) == 0) {
              func_0x000180315660(TI_ClickManager.<>c);
            }
            uVar13 = **(undefined8 **)(TI_ClickManager.<>c + 0xb8);
            lVar12 = func_0x000180315580(TI_System.Comparison<UnityEngine.RaycastHit>);
            FUN_1811304d0(lVar12,uVar13,MD_ClickManager.__c._DestinoNadando_b__27_0,0);
            *(longlong *)(*(longlong *)(TI_ClickManager.<>c + 0xb8) + 0x10) = lVar12;
            func_0x000180314690(*(longlong *)(TI_ClickManager.<>c + 0xb8) + 0x10,lVar12);
          }
          FUN_1809328d0(lVar11,lVar12,MR_System.Array.Sort<UnityEngine.RaycastHit>);
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          if (lVar11 != 0) {
            for (uVar6 = 0; (int)uVar6 < *(int *)(lVar11 + 0x18); uVar6 = uVar6 + 1) {
              if (*(uint *)(lVar11 + 0x18) <= uVar6) {
                FUN_1803155c0();
                pcVar3 = (code *)swi(3);
                uVar13 = (*pcVar3)();
                return uVar13;
              }
              lVar12 = (longlong)(int)uVar6 * 0x2c;
              puVar14 = (undefined8 *)(lVar12 + 0x20 + lVar11);
              uStack_118 = *puVar14;
              uStack_110 = puVar14[1];
              puVar14 = (undefined8 *)(lVar12 + 0x30 + lVar11);
              uStack_108 = *puVar14;
              uStack_100 = *(undefined4 *)(puVar14 + 1);
              puVar1 = (undefined4 *)(lVar12 + 0x3c + lVar11);
              uStack_fc = *puVar1;
              uStack_f8 = puVar1[1];
              uStack_f4 = *(undefined8 *)(puVar1 + 2);
              uVar13 = UnityEngine_RaycastHit__get_collider(&uStack_118,0);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar5 = UnityEngine_Object__op_Equality(uVar13);
              if (cVar5 == '\0') {
                lVar12 = UnityEngine_RaycastHit__get_collider(&uStack_118,0);
                if ((lVar12 == 0) ||
                   (lVar12 = UnityEngine_Component__get_transform(lVar12,0), lVar12 == 0))
                goto code_r0x0001804f3046;
                cVar5 = UnityEngine_Transform__IsChildOf(lVar12);
                if (cVar5 == '\0') {
                  uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c));
                  uVar8 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c));
                  lVar12 = UnityEngine_RaycastHit__get_collider(&uStack_118);
                  if ((lVar12 == 0) ||
                     (lVar12 = UnityEngine_Component__get_gameObject(lVar12), lVar12 == 0))
                  goto code_r0x0001804f3046;
                  uVar9 = UnityEngine_GameObject__get_layer(lVar12);
                  if (uVar7 != (uVar8 | 1 << (uVar9 & 0x1f))) {
                    bVar4 = true;
                    uStack_d8 = uStack_118;
                    uStack_d0 = uStack_110;
                    uStack_c8 = uStack_108;
                    uStack_c0 = uStack_100;
                    uStack_bc = uStack_fc;
                    uStack_b8 = uStack_f8;
                    uStack_b4 = uStack_f4;
                    puVar14 = (undefined8 *)func_0x0001824d9960(&uStack_148,&uStack_d8,0);
                    fVar20 = *(float *)(puVar14 + 1);
                    *(undefined8 *)param_3 = *puVar14;
                    param_3[2] = fVar20;
                    puVar14 = (undefined8 *)func_0x0001824d9940(&uStack_148,&uStack_d8,0);
                    uVar2 = *(undefined4 *)(puVar14 + 1);
                    *param_4 = *puVar14;
                    *(undefined4 *)(param_4 + 1) = uVar2;
                    goto code_r0x0001804f2d59;
                  }
                }
              }
            }
            if (lVar10 != 0) {
              bVar4 = false;
              puVar14 = (undefined8 *)UnityEngine_Transform__get_position(&uStack_148,lVar10,0);
              uStack_e8 = *puVar14;
              uStack_e0 = *(undefined4 *)(puVar14 + 1);
              uStack_148 = *(undefined8 *)param_2;
              fStack_140 = param_2[2];
              FUN_180416d40(&uStack_148,&uStack_e8,0);
              fVar17 = extraout_XMM0_Da + 10.0;
              fVar20 = param_2[4];
              fVar21 = param_2[5];
              fVar22 = param_2[1];
              fVar18 = param_2[2];
              *param_3 = fVar17 * param_2[3] + *param_2;
              param_3[1] = fVar17 * fVar20 + fVar22;
              param_3[2] = fVar17 * fVar21 + fVar18;
code_r0x0001804f2d59:
              fVar23 = fVar23 - fVar16;
              if (((0.0001 < param_2[4]) && (param_2[1] <= fVar23 && fVar23 != param_2[1])) &&
                 ((fVar16 = (fVar23 - param_2[1]) / param_2[4], !bVar4 ||
                  (func_0x000182398770(&uStack_d8,0), fVar16 < extraout_XMM0_Da_00)))) {
                fVar20 = param_2[3];
                fVar21 = param_2[5];
                uStack_128 = (ulonglong)(uint)fVar20;
                fStack_120 = fVar21;
                if (fVar20 * fVar20 + 0.0 + fVar21 * fVar21 <= 1e-06) {
                  if (lVar10 == 0) goto code_r0x0001804f3046;
                  pfVar15 = (float *)UnityEngine_Transform__get_forward(&uStack_148,lVar10,0);
                  fVar20 = *pfVar15;
                  fVar22 = pfVar15[1];
                  fVar21 = pfVar15[2];
                }
                else {
                  if (cRam00000001834b3023 == '\0') {
                    FUN_180315380(TI_UnityEngine.Vector3);
                    cRam00000001834b3023 = '\x01';
                  }
                  fVar18 = (float)FUN_18043b850(&uStack_128,0);
                  if (fVar18 <= 1e-05) {
                    pfVar15 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
                    fVar20 = *pfVar15;
                    fVar22 = pfVar15[1];
                    fVar21 = pfVar15[2];
                  }
                  else {
                    fVar22 = 0.0 / fVar18;
                    fVar20 = fVar20 / fVar18;
                    fVar21 = fVar21 / fVar18;
                  }
                }
                fVar18 = param_2[5];
                fVar17 = param_2[3];
                if (lVar10 == 0) goto code_r0x0001804f3046;
                pfVar15 = (float *)UnityEngine_Transform__get_position(&uStack_148,lVar10,0);
                fVar19 = 1.0;
                fVar16 = ((fVar16 * fVar17 + *param_2) - *pfVar15) * fVar20 + fVar22 * 0.0 +
                         ((fVar16 * fVar18 + param_2[2]) - pfVar15[2]) * fVar21;
                if ((fVar16 < 1.0) || (fVar19 = 13.0, 13.0 < fVar16)) {
                  fVar16 = fVar19;
                }
                pfVar15 = (float *)UnityEngine_Transform__get_position(&uStack_148,lVar10,0);
                fVar18 = *pfVar15;
                lVar10 = UnityEngine_Transform__get_position(&uStack_148,lVar10,0);
                param_3[2] = fVar21 * fVar16 + *(float *)(lVar10 + 8);
                *param_3 = fVar20 * fVar16 + fVar18;
                param_3[1] = fVar22 * fVar16 + fVar23;
                if (DAT_1834b2f30 == '\0') {
                  FUN_180315380(TI_UnityEngine.Vector3);
                  DAT_1834b2f30 = '\x01';
                }
                uVar2 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x20);
                *param_4 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x18);
                *(undefined4 *)(param_4 + 1) = uVar2;
              }
              if ((0.0 < param_2[4]) && (fVar23 < param_3[1])) {
                param_3[1] = fVar23;
                if (DAT_1834b2f30 == '\0') {
                  FUN_180315380(TI_UnityEngine.Vector3);
                  DAT_1834b2f30 = '\x01';
                }
                uVar2 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x20);
                *param_4 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x18);
                *(undefined4 *)(param_4 + 1) = uVar2;
              }
              return 1;
            }
          }
        }
code_r0x0001804f3046:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return uVar13;
      }
    }
  }
  return 0;
}

