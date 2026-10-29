// TargetManager__IsTransformVisible__1807ea930 @ 0x1807ea930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool TargetManager__IsTransformVisible__1807ea930(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float *pfVar20;
  uint uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uStack_a0 = &UNK_1807ea956;
    pfVar20 = (float *)UnityEngine_Transform__get_position
                                 (&uStack_78,*(longlong *)(param_1 + 0x30),0);
    if (param_2 != 0) {
      fVar1 = pfVar20[1];
      uStack_28 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
      uStack_20 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
      fVar2 = *pfVar20;
      uStack_38 = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
      uStack_30 = CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
      fVar3 = pfVar20[2];
      uStack_48 = CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
      uStack_40 = CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
      uStack_a0._0_4_ = 0x807ea9a3;
      uStack_a0._4_4_ = 1;
      pfVar20 = (float *)UnityEngine_Transform__get_position(&uStack_78,param_2,0);
      fVar4 = *pfVar20;
      fVar5 = pfVar20[1];
      fVar6 = pfVar20[2];
      if (cRam00000001834b2f41 == '\0') {
        uStack_a0._0_4_ = 0x807ea9c9;
        uStack_a0._4_4_ = 1;
        FUN_180315380(TI_System.Math);
        cRam00000001834b2f41 = '\x01';
      }
      uVar12 = uStack_40;
      uVar7 = uStack_48;
      if (*(int *)(TI_System.Math + 0xe4) == 0) {
        uStack_a0._0_4_ = 0x807eaa06;
        uStack_a0._4_4_ = 1;
        func_0x000180315660();
      }
      uVar14 = uStack_30;
      uVar13 = uStack_38;
      dVar22 = (double)((fVar1 - fVar5) * (fVar1 - fVar5) + (fVar2 - fVar4) * (fVar2 - fVar4) +
                       (fVar3 - fVar6) * (fVar3 - fVar6));
      if (dVar22 < 0.0) {
        uStack_a0._0_4_ = 0x807eaa49;
        uStack_a0._4_4_ = 1;
        dVar22 = (double)FUN_1803a9930();
      }
      else {
        auVar23._8_8_ = 0;
        auVar23._0_8_ = dVar22;
        auVar23 = sqrtpd(ZEXT816(0),auVar23);
        dVar22 = auVar23._0_8_;
      }
      if (3.8095238 < (float)dVar22) {
        return false;
      }
      if (DAT_1834b31bf == '\0') {
        uStack_a0._0_4_ = 0x807eaa71;
        uStack_a0._4_4_ = 1;
        FUN_180315380(TI_CameraController);
        DAT_1834b31bf = '\x01';
      }
      lVar10 = **(longlong **)(TI_CameraController + 0xb8);
      if (lVar10 != 0) {
        if (cRam00000001834b3900 == '\0') {
          FUN_180315380(TI_UnityEngine.Physics,param_2,0);
          cRam00000001834b3900 = '\x01';
        }
        uStack_38 = uStack_28;
        uStack_30 = uStack_20;
        uStack_48 = uVar13;
        uStack_40 = uVar14;
        uStack_58 = uVar7;
        uStack_50 = uVar12;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        if ((*(longlong *)(lVar10 + 0x90) != 0) &&
           (lVar18 = CameraCollisionDetection__GetCameraViewPortPoints
                               (*(longlong *)(lVar10 + 0x90),0), lVar18 != 0)) {
          uVar21 = 0;
          while( true ) {
            if (*(int *)(lVar18 + 0x18) <= (int)uVar21) {
              return false;
            }
            if (*(uint *)(lVar18 + 0x18) <= uVar21) {
              FUN_1803155c0();
              pcVar11 = (code *)swi(3);
              uVar16 = (*pcVar11)();
              return (bool)uVar16;
            }
            if (param_2 == 0) goto code_r0x00018057252b;
            uVar7 = *(undefined8 *)(lVar18 + 0x20 + (longlong)(int)uVar21 * 0xc);
            uVar8 = *(undefined4 *)(lVar18 + 0x28 + (longlong)(int)uVar21 * 0xc);
            pfVar20 = (float *)UnityEngine_Transform__get_position(auStack_98,param_2,0);
            fVar1 = *pfVar20;
            fVar2 = pfVar20[1];
            fVar3 = pfVar20[2];
            if (DAT_1834b2f30 == '\0') {
              FUN_180315380(TI_UnityEngine.Vector3);
              DAT_1834b2f30 = '\x01';
            }
            lVar9 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
            fVar4 = *(float *)(lVar9 + 0x18);
            fVar5 = *(float *)(lVar9 + 0x1c);
            fVar6 = *(float *)(lVar9 + 0x20);
            uVar17 = func_0x000182427a70(*(undefined4 *)(lVar10 + 0x40),0);
            if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
              func_0x000180315660();
            }
            fStack_b8 = fVar1 + fVar4;
            fStack_b4 = fVar2 + fVar5;
            fStack_b0 = fVar3 + fVar6;
            uStack_a8 = uVar7;
            uStack_a0._0_4_ = uVar8;
            cVar15 = UnityEngine_Physics__Linecast(&uStack_a8,&fStack_b8,&uStack_88,uVar17,0);
            if (cVar15 == '\0') break;
            uVar21 = uVar21 + 1;
          }
          lVar10 = *(longlong *)(lVar10 + 0x98);
          puVar19 = (undefined8 *)UnityEngine_Transform__get_position(auStack_98,param_2,0);
          if (lVar10 != 0) {
            uStack_a8 = *puVar19;
            uStack_a0 = (undefined *)CONCAT44(uStack_a0._4_4_,*(undefined4 *)(puVar19 + 1));
            pfVar20 = (float *)UnityEngine_Camera__WorldToViewportPoint
                                         (auStack_98,lVar10,&uStack_a8,0);
            if (1.0 < *pfVar20) {
              return false;
            }
            if (*pfVar20 < 0.0) {
              return false;
            }
            if (1.0 < pfVar20[1]) {
              return false;
            }
            if (pfVar20[1] < 0.0) {
              return false;
            }
            return -0.2 <= pfVar20[2];
          }
        }
code_r0x00018057252b:
        FUN_1803155d0();
        pcVar11 = (code *)swi(3);
        uVar16 = (*pcVar11)();
        return (bool)uVar16;
      }
    }
  }
  uStack_a0 = &UNK_1807eaab1;
  FUN_1803155d0();
  pcVar11 = (code *)swi(3);
  uVar16 = (*pcVar11)();
  return (bool)uVar16;
}

