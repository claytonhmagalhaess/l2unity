// L2SlotManager__PontoDoDrop__180792eb0 @ 0x180792eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 L2SlotManager__PontoDoDrop__180792eb0(float *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  double extraout_XMM0_Qa;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  double dVar12;
  
  if (cRam00000001834b444f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Physics);
    cRam00000001834b444f = '\x01';
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  if ((**(longlong **)(TI_PlayerEntity + 0xb8) != 0) &&
     (lVar8 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0),
     lVar8 != 0)) {
    pfVar9 = (float *)UnityEngine_Transform__get_position(&uStack_b8,lVar8,0);
    fVar15 = *pfVar9;
    fVar1 = pfVar9[1];
    fVar14 = pfVar9[2];
    *param_1 = fVar15;
    param_1[1] = fVar1;
    param_1[2] = fVar14;
    lVar8 = UnityEngine_Camera__get_main(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Equality(lVar8,0,0);
    if (cVar6 == '\0') {
      if (cRam00000001834b30fe == '\0') {
        FUN_180315380(TI_World);
        cRam00000001834b30fe = '\x01';
      }
      uVar11 = **(undefined8 **)(TI_World + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if (cVar6 == '\0') {
        puVar10 = (undefined8 *)UnityEngine_Input__get_mousePosition(&uStack_a8,0);
        if (lVar8 != 0) {
          uStack_b8 = *puVar10;
          uStack_b0 = *(undefined4 *)(puVar10 + 1);
          puVar10 = (undefined8 *)
                    UnityEngine_Camera__ScreenPointToRay(&uStack_a8,lVar8,&uStack_b8,0);
          uVar4 = *puVar10;
          uVar5 = puVar10[1];
          uVar11 = puVar10[2];
          if (cRam00000001834b30fe == '\0') {
            FUN_180315380(TI_World);
            cRam00000001834b30fe = '\x01';
          }
          if (**(longlong **)(TI_World + 0xb8) != 0) {
            uVar7 = func_0x000182427a70(*(undefined4 *)
                                         (**(longlong **)(TI_World + 0xb8) + 0x44),0);
            if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
              func_0x000180315660();
            }
            uStack_a8 = uVar4;
            uStack_a0 = uVar5;
            uStack_98 = uVar11;
            cVar6 = UnityEngine_Physics__Raycast(&uStack_a8,&uStack_88,0x43480000,uVar7,0);
            if (cVar6 == '\0') {
              return 1;
            }
            pfVar9 = (float *)func_0x0001824d9960(&uStack_a8,&uStack_88,0);
            fVar2 = pfVar9[1];
            fVar15 = *pfVar9 - fVar15;
            fVar14 = pfVar9[2] - fVar14;
            if (DAT_1834b2e52 == '\0') {
              FUN_180315380(TI_System.Math);
              DAT_1834b2e52 = '\x01';
            }
            if (*(int *)(TI_System.Math + 0xe4) == 0) {
              func_0x000180315660();
            }
            dVar12 = (double)(fVar14 * fVar14 + fVar15 * fVar15);
            if (dVar12 < 0.0) {
              FUN_1803a9930();
              dVar12 = extraout_XMM0_Qa;
            }
            else {
              auVar13._8_8_ = 0;
              auVar13._0_8_ = dVar12;
              auVar13 = sqrtpd(ZEXT816(0),auVar13);
              dVar12 = auVar13._0_8_;
            }
            if (((float)dVar12 <= 2.7619047) && (ABS(fVar2 - fVar1) <= 0.95238096)) {
              puVar10 = (undefined8 *)func_0x0001824d9960(&uStack_a8,&uStack_88,0);
              fVar15 = *(float *)(puVar10 + 1);
              *(undefined8 *)param_1 = *puVar10;
              param_1[2] = fVar15;
              return 1;
            }
            return 0;
          }
        }
        goto code_r0x000180793214;
      }
    }
    return 1;
  }
code_r0x000180793214:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar11 = (*pcVar3)();
  return uVar11;
}

