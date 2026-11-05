// TargetManager__FixedUpdate__1807ea070 @ 0x1807ea070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetManager__FixedUpdate__1807ea070(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b46c1 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Physics);
    cRam00000001834b46c1 = '\x01';
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (cVar4 != '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar4 == '\0') {
      return;
    }
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x0001807ea433;
    uVar6 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar4 == '\0') {
      return;
    }
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x0001807ea433;
    uVar6 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    func_0x000180314690(param_1 + 0x30,uVar6);
  }
  if (cRam00000001834b46c3 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b46c3 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0001807ea433;
  iVar10 = 0;
  if (*(int *)(param_1 + 0x50) < *(int *)(*(longlong *)(param_1 + 0x48) + 0x18)) {
    cVar4 = TargetManager__HasTarget__1807ea7b0(param_1,0);
    if (cVar4 != '\0') {
      if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x0001807ea433;
      uVar6 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x20),0);
      cVar4 = TargetManager__IsTransformVisible__1807ea930(param_1,uVar6,0);
      if (cVar4 == '\0') goto code_r0x0001807ea32d;
    }
    cVar4 = TargetManager__HasTarget__1807ea7b0(param_1,0);
    if (cVar4 != '\0') {
      lVar9 = *(longlong *)(param_1 + 0x48);
      while (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) <= iVar10) goto code_r0x0001807ea331;
        if (*(longlong *)(param_1 + 0x48) == 0) break;
        uVar6 = FUN_180bbafe0(*(longlong *)(param_1 + 0x48),iVar10);
        if (*(longlong *)(param_1 + 0x20) == 0) break;
        uVar7 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x20),0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Equality(uVar6,uVar7);
        if ((cVar4 != '\0') && (iVar10 != *(int *)(param_1 + 0x50))) {
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
        iVar10 = iVar10 + 1;
        lVar9 = *(longlong *)(param_1 + 0x48);
      }
      goto code_r0x0001807ea433;
    }
  }
  else {
code_r0x0001807ea32d:
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
code_r0x0001807ea331:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    puVar8 = (undefined8 *)
             UnityEngine_Transform__get_position(&uStack_38,*(longlong *)(param_1 + 0x30),0);
    uVar6 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    lVar9 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar9 != 0) {
      puVar8 = (undefined8 *)UnityEngine_Transform__get_forward(&uStack_38,lVar9,0);
      uVar7 = *puVar8;
      uVar2 = *(undefined4 *)(puVar8 + 1);
      uVar5 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x38),0);
      if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_48 = uVar7;
      uStack_40 = uVar2;
      uStack_38 = uVar6;
      uStack_30 = uVar1;
      uVar6 = UnityEngine_Physics__SphereCastAll(&uStack_38,0x4073cf3d,&uStack_48,0,uVar5,0);
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      func_0x000180314690(param_1 + 0x40,uVar6);
      uVar6 = TargetManager__GetVisibleEntities__1807ea560(param_1,0);
      *(undefined8 *)(param_1 + 0x48) = uVar6;
      func_0x000180314690(param_1 + 0x48,uVar6);
      return;
    }
  }
code_r0x0001807ea433:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

