// NameplatesManagerBase__ProcessEntitiesInRange__180678ff0 @ 0x180678ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerBase__ProcessEntitiesInRange__180678ff0
               (longlong *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (DAT_1834b3e18 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.TryGetComponent<Entity>);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.ContainsKey);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
    FUN_180315380(TI_System.Func<int,Nameplate>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_NameplatesManagerBase.__c__DisplayClass18_0._ProcessEntitiesInRange_b__0);
    FUN_180315380(TI_NameplatesManagerBase.<>c__DisplayClass18_0);
    DAT_1834b3e18 = '\x01';
  }
  uVar8 = 0;
  if (0 < param_3) {
    do {
      lVar4 = func_0x000180315580(TI_NameplatesManagerBase.<>c__DisplayClass18_0);
      Gear__UpdateWeaponType__1803dadf0(lVar4,0);
      if (lVar4 == 0) {
LAB_180679296:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(longlong **)(lVar4 + 0x18) = param_1;
      func_0x000180314690(lVar4 + 0x18);
      if (param_2 == 0) goto LAB_180679296;
      if (*(uint *)(param_2 + 0x18) <= (uint)uVar8) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = *(longlong *)(param_2 + 0x20 + uVar8 * 8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Equality(lVar6,0,0);
      if (cVar3 == '\0') {
        if (lVar6 == 0) goto LAB_180679296;
        uVar5 = UnityEngine_Collider__get_attachedRigidbody(lVar6,0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if (((cVar3 != '\0') &&
            (lVar6 = UnityEngine_Collider__get_attachedRigidbody(lVar6,0), lVar6 == 0)) ||
           (lVar6 = UnityEngine_Component__get_transform(lVar6,0), lVar6 == 0)) goto LAB_180679296;
        cVar3 = FUN_180997660(lVar6);
        if (cVar3 != '\0') {
          if (*(longlong *)(lVar4 + 0x10) == 0) goto LAB_180679296;
          if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) != 0) {
            if (param_1[6] == 0) goto LAB_180679296;
            cVar3 = FUN_181131ff0();
            if ((cVar3 == '\0') && (cVar3 = (**(code **)(*param_1 + 0x1a8))(param_1), cVar3 != '\0')
               ) {
              if (*(longlong *)(lVar4 + 0x10) == 0) goto LAB_180679296;
              UnityEngine_Component__get_transform(*(longlong *)(lVar4 + 0x10),0);
              cVar3 = (**(code **)(*param_1 + 0x208))(param_1);
              if (cVar3 != '\0') {
                if ((*(longlong *)(lVar4 + 0x10) == 0) ||
                   (lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30), lVar6 == 0))
                goto LAB_180679296;
                uVar1 = *(undefined4 *)(lVar6 + 0x14);
                lVar6 = param_1[6];
                uVar5 = func_0x000180315580(TI_System.Func<int,Nameplate>);
                FUN_18116ac60(uVar5,lVar4,MD_NameplatesManagerBase.__c__DisplayClass18_0._ProcessEntitiesInRange_b__0,0);
                if (lVar6 == 0) goto LAB_180679296;
                FUN_181133680(lVar6,uVar1,uVar5,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
              }
            }
          }
        }
      }
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < param_3);
  }
  return;
}

