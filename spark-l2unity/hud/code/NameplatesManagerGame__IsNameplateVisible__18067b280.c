// NameplatesManagerGame__IsNameplateVisible__18067b280 @ 0x18067b280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 NameplatesManagerGame__IsNameplateVisible__18067b280(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  code *pcVar8;
  char cVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [112];
  
  if (cRam00000001834b3e2b == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e2b = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar9 = UnityEngine_Object__op_Equality(param_2,0,0);
  if (cVar9 != '\0') {
    return 0;
  }
  if (cRam00000001834b31d1 == '\0') {
    FUN_180315380(TI_ClickManager);
    cRam00000001834b31d1 = '\x01';
  }
  if (**(longlong **)(TI_ClickManager + 0xb8) != 0) {
    lVar7 = *(longlong *)(**(longlong **)(TI_ClickManager + 0xb8) + 0x40);
    if (lVar7 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lVar7 + 0x38);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar9 = UnityEngine_Object__op_Equality(uVar12,param_2,0);
    if (cVar9 != '\0') {
      return 1;
    }
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) != 0) {
      cVar9 = TargetManager__HasTarget__1807ea7b0(**(longlong **)(TI_TargetManager + 0xb8),0);
      if (cVar9 == '\0') {
        cVar9 = '\0';
      }
      else {
        if (DAT_1834b3015 == '\0') {
          FUN_180315380(TI_TargetManager);
          DAT_1834b3015 = '\x01';
        }
        if ((**(longlong **)(TI_TargetManager + 0xb8) == 0) ||
           (lVar7 = *(longlong *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20), lVar7 == 0))
        goto code_r0x00018067b5c7;
        uVar12 = UnityEngine_Component__get_transform(lVar7,0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar9 = UnityEngine_Object__op_Equality(uVar12,param_2,0);
      }
      if ((*(longlong *)(param_1 + 0x38) != 0) &&
         (pfVar10 = (float *)UnityEngine_Transform__get_position
                                       (&uStack_88,*(longlong *)(param_1 + 0x38),0), param_2 != 0))
      {
        fVar1 = pfVar10[1];
        fVar2 = *pfVar10;
        fVar3 = pfVar10[2];
        pfVar10 = (float *)UnityEngine_Transform__get_position(&uStack_88,param_2,0);
        fVar4 = *pfVar10;
        fVar5 = pfVar10[1];
        fVar6 = pfVar10[2];
        if (cRam00000001834b2f41 == '\0') {
          FUN_180315380(TI_System.Math);
          cRam00000001834b2f41 = '\x01';
        }
        if (*(int *)(TI_System.Math + 0xe4) == 0) {
          func_0x000180315660();
        }
        dVar13 = (double)((fVar1 - fVar5) * (fVar1 - fVar5) + (fVar2 - fVar4) * (fVar2 - fVar4) +
                         (fVar3 - fVar6) * (fVar3 - fVar6));
        if (dVar13 < 0.0) {
          dVar13 = (double)FUN_1803a9930();
        }
        else {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = dVar13;
          auVar14 = sqrtpd(ZEXT816(0),auVar14);
          dVar13 = auVar14._0_8_;
        }
        if (((float)dVar13 < *(float *)(param_1 + 0x20) ||
             (float)dVar13 == *(float *)(param_1 + 0x20)) || (cVar9 != '\0')) {
          lVar7 = *(longlong *)(param_1 + 0x40);
          puVar11 = (undefined8 *)UnityEngine_Transform__get_position(auStack_78,param_2,0);
          if (lVar7 == 0) goto code_r0x00018067b5c7;
          uStack_88 = *puVar11;
          uStack_80 = *(undefined4 *)(puVar11 + 1);
          pfVar10 = (float *)UnityEngine_Camera__WorldToViewportPoint(auStack_78,lVar7,&uStack_88,0)
          ;
          if ((((*pfVar10 <= 1.0) && (0.0 <= *pfVar10)) && (pfVar10[1] <= 1.0)) &&
             ((0.0 <= pfVar10[1] && (-0.2 < pfVar10[2] || pfVar10[2] == -0.2)))) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
code_r0x00018067b5c7:
  FUN_1803155d0();
  pcVar8 = (code *)swi(3);
  uVar12 = (*pcVar8)();
  return uVar12;
}

