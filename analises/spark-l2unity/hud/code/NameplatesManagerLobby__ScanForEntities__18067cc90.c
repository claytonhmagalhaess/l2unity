// NameplatesManagerLobby__ScanForEntities__18067cc90 @ 0x18067cc90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerLobby__ScanForEntities__18067cc90(longlong *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (DAT_1834b3e17 == '\0') {
    FUN_180315380(TI_UnityEngine.Collider__,0);
    FUN_180315380(TI_UnityEngine.Physics);
    DAT_1834b3e17 = '\x01';
  }
  if (param_1[7] != 0) {
    puVar9 = (undefined8 *)UnityEngine_Transform__get_position(&uStack_38,param_1[7],0);
    lVar6 = param_1[4];
    lVar10 = param_1[0xd];
    uVar7 = *puVar9;
    uVar1 = *(undefined4 *)(puVar9 + 1);
    uVar4 = func_0x000182427a70(*(undefined4 *)((longlong)param_1 + 0x24),0);
    if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_38 = uVar7;
    uStack_30 = uVar1;
    iVar5 = UnityEngine_Physics__OverlapSphereNonAlloc(&uStack_38,(int)lVar6,lVar10,uVar4,0);
    lVar10 = param_1[0xd];
    if (lVar10 != 0) {
      if (iVar5 == *(int *)(lVar10 + 0x18)) {
        lVar10 = func_0x000180314710(TI_UnityEngine.Collider__,*(int *)(lVar10 + 0x18) * 2);
        param_1[0xd] = lVar10;
        func_0x000180314690(param_1 + 0xd,lVar10);
        if (param_1[7] == 0) goto LAB_1806797b9;
        puVar9 = (undefined8 *)UnityEngine_Transform__get_position(&uStack_38,param_1[7],0);
        lVar6 = param_1[4];
        lVar10 = param_1[0xd];
        uVar7 = *puVar9;
        uVar1 = *(undefined4 *)(puVar9 + 1);
        uVar4 = func_0x000182427a70(*(undefined4 *)((longlong)param_1 + 0x24),0);
        if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_38 = uVar7;
        uStack_30 = uVar1;
        iVar5 = UnityEngine_Physics__OverlapSphereNonAlloc(&uStack_38,(int)lVar6,lVar10,uVar4,0);
      }
      lVar10 = param_1[0xd];
      if (DAT_1834b3e18 == '\0') {
        FUN_180315380(MR_UnityEngine.Component.TryGetComponent<Entity>,lVar10,iVar5,0);
        FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.ContainsKey);
        FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
        FUN_180315380(TI_System.Func<int,Nameplate>);
        FUN_180315380(TI_UnityEngine.Object);
        FUN_180315380(MD_NameplatesManagerBase.__c__DisplayClass18_0._ProcessEntitiesInRange_b__0);
        FUN_180315380(TI_NameplatesManagerBase.<>c__DisplayClass18_0);
        DAT_1834b3e18 = '\x01';
      }
      uVar12 = 0;
      if (0 < iVar5) {
        do {
          lVar6 = func_0x000180315580(TI_NameplatesManagerBase.<>c__DisplayClass18_0);
          Gear__UpdateWeaponType__1803dadf0(lVar6,0);
          if (lVar6 == 0) {
LAB_180679296:
            FUN_1803155d0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(longlong **)(lVar6 + 0x18) = param_1;
          func_0x000180314690(lVar6 + 0x18);
          if (lVar10 == 0) goto LAB_180679296;
          if (*(uint *)(lVar10 + 0x18) <= (uint)uVar12) {
            FUN_1803155c0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar8 = *(longlong *)(lVar10 + 0x20 + uVar12 * 8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Equality(lVar8,0,0);
          if (cVar3 == '\0') {
            if (lVar8 == 0) goto LAB_180679296;
            uVar7 = UnityEngine_Collider__get_attachedRigidbody(lVar8,0);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
            if (((cVar3 != '\0') &&
                (lVar8 = UnityEngine_Collider__get_attachedRigidbody(lVar8,0), lVar8 == 0)) ||
               (lVar8 = UnityEngine_Component__get_transform(lVar8,0), lVar8 == 0))
            goto LAB_180679296;
            cVar3 = FUN_180997660(lVar8);
            if (cVar3 != '\0') {
              if (*(longlong *)(lVar6 + 0x10) == 0) goto LAB_180679296;
              if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) != 0) {
                if (param_1[6] == 0) goto LAB_180679296;
                cVar3 = FUN_181131ff0();
                if ((cVar3 == '\0') &&
                   (cVar3 = (**(code **)(*param_1 + 0x1a8))(param_1), cVar3 != '\0')) {
                  if (*(longlong *)(lVar6 + 0x10) == 0) goto LAB_180679296;
                  UnityEngine_Component__get_transform(*(longlong *)(lVar6 + 0x10),0);
                  cVar3 = (**(code **)(*param_1 + 0x208))(param_1);
                  if (cVar3 != '\0') {
                    if ((*(longlong *)(lVar6 + 0x10) == 0) ||
                       (lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30), lVar8 == 0))
                    goto LAB_180679296;
                    uVar1 = *(undefined4 *)(lVar8 + 0x14);
                    lVar8 = param_1[6];
                    uVar7 = func_0x000180315580(TI_System.Func<int,Nameplate>);
                    FUN_18116ac60(uVar7,lVar6,MD_NameplatesManagerBase.__c__DisplayClass18_0._ProcessEntitiesInRange_b__0,0);
                    if (lVar8 == 0) goto LAB_180679296;
                    FUN_181133680(lVar8,uVar1,uVar7,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
                  }
                }
              }
            }
          }
          uVar11 = (uint)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while ((int)uVar11 < iVar5);
      }
      return;
    }
  }
LAB_1806797b9:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

