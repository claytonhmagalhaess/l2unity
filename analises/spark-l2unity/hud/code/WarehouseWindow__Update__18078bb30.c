// WarehouseWindow__Update__18078bb30 @ 0x18078bb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WarehouseWindow__Update__18078bb30(longlong *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b43c0 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkArmazem);
    cRam00000001834b43c0 = '\x01';
  }
  if ((char)param_1[0x1e] == '\0') {
    return;
  }
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3570 == '\0') {
    FUN_180315380(TI_SparkArmazem);
    cRam00000001834b3570 = '\x01';
  }
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if ((*(char *)(*(longlong *)(TI_SparkArmazem + 0xb8) + 0x1c) != '\0') &&
     ((char)param_1[7] == '\0')) {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar9 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if (cVar4 != '\0') {
      lVar7 = param_1[0x20];
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Inequality(lVar7,0,0);
      lVar7 = FUN_1804169f0(0);
      if ((lVar7 == 0) || (lVar7 = UnityEngine_Component__get_transform(lVar7,0), lVar7 == 0))
      goto DAT_18078c075;
      pfVar8 = (float *)UnityEngine_Transform__get_position(auStack_38,lVar7,0);
      fVar14 = (float)*(undefined8 *)pfVar8;
      fVar2 = pfVar8[2];
      if (cVar4 == '\0') {
        fVar1 = *(float *)((longlong)param_1 + 0xf4);
        fVar13 = *(float *)((longlong)param_1 + 0xfc);
        fVar14 = *pfVar8;
        fVar2 = pfVar8[2];
      }
      else {
        if ((param_1[0x20] == 0) ||
           (lVar7 = UnityEngine_Component__get_transform(param_1[0x20],0), lVar7 == 0))
        goto DAT_18078c075;
        pfVar8 = (float *)UnityEngine_Transform__get_position(auStack_38,lVar7,0);
        fVar1 = *pfVar8;
        fVar13 = pfVar8[2];
      }
      if (DAT_1834b3024 == '\0') {
        FUN_180315380(TI_System.Math);
        DAT_1834b3024 = '\x01';
      }
      if (*(int *)(TI_System.Math + 0xe4) == 0) {
        func_0x000180315660();
      }
      dVar11 = (double)((fVar14 - fVar1) * (fVar14 - fVar1) + 0.0 +
                       (fVar2 - fVar13) * (fVar2 - fVar13));
      if (dVar11 < 0.0) {
        dVar11 = (double)FUN_1803a9930();
      }
      else {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar11;
        auVar12 = sqrtpd(ZEXT816(0),auVar12);
        dVar11 = auVar12._0_8_;
      }
      if (cVar4 == '\0') {
        fVar14 = 1.1428572;
      }
      else {
        fVar14 = 2.857143;
      }
      if ((float)dVar11 <= fVar14) {
        lVar7 = FUN_1804169f0(0);
        if (lVar7 == 0) goto DAT_18078c075;
        cVar4 = Entity__get_IsDead(lVar7,0);
        if (cVar4 == '\0') goto code_r0x00018078bdc5;
      }
      if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkArmazem__Fecha__1804d7550(0);
    }
  }
code_r0x00018078bdc5:
  if (*(char *)((longlong)param_1 + 0xf1) == '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3570 == '\0') {
    FUN_180315380(TI_SparkArmazem);
    cRam00000001834b3570 = '\x01';
  }
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkArmazem + 0xb8) + 0x1c) == '\0') {
    if ((char)param_1[7] != '\0') {
      return;
    }
    (**(code **)(*param_1 + 0x1c8))(param_1,1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  lVar7 = param_1[0x21];
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar5 = FUN_1804d0550(0);
  if ((int)lVar7 == iVar5) goto code_r0x00018078c034;
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = FUN_1804d0550(0);
  *(undefined4 *)(param_1 + 0x21) = uVar6;
  uVar9 = FUN_1804169f0(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if (cVar4 == '\0') {
    if (DAT_1834b2e67 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector3);
      DAT_1834b2e67 = '\x01';
    }
    uVar9 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
    uVar6 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
  }
  else {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
       (lVar7 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0),
       lVar7 == 0)) goto DAT_18078c075;
    puVar10 = (undefined8 *)UnityEngine_Transform__get_position(auStack_38,lVar7,0);
    uVar9 = *puVar10;
    uVar6 = *(undefined4 *)(puVar10 + 1);
  }
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar6;
  uVar9 = FUN_18043b810(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if (cVar4 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_18043b810(0);
    if (lVar7 == 0) {
DAT_18078c075:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x20);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(lVar7,0,0);
  if (cVar4 == '\0') {
code_r0x00018078bff0:
    lVar7 = 0;
  }
  else {
    uVar9 = FUN_1804169f0(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(lVar7,uVar9,0);
    if (cVar4 == '\0') goto code_r0x00018078bff0;
  }
  param_1[0x20] = lVar7;
  func_0x000180314690(param_1 + 0x20,lVar7);
  if ((char)param_1[7] != '\0') {
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  }
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
code_r0x00018078c034:
  WarehouseWindow__Redesenha(param_1,0);
  return;
}

