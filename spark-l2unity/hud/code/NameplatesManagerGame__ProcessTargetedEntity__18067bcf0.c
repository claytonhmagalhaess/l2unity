// NameplatesManagerGame__ProcessTargetedEntity__18067bcf0 @ 0x18067bcf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__ProcessTargetedEntity__18067bcf0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  if (cRam00000001834b3e28 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.TryGetComponent<Entity>);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.ContainsKey);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
    FUN_180315380(TI_System.Func<int,Nameplate>);
    FUN_180315380(TI_SparkObjetoEstaticoEntity);
    FUN_180315380(TI_SparkPortaEntity);
    FUN_180315380(MD_NameplatesManagerGame.__c__DisplayClass10_0._ProcessTargetedEntity_b__0);
    FUN_180315380(TI_NameplatesManagerGame.<>c__DisplayClass10_0);
    cRam00000001834b3e28 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_NameplatesManagerGame.<>c__DisplayClass10_0);
  Gear__UpdateWeaponType__1803dadf0(lVar7,0);
  if (lVar7 != 0) {
    *(longlong **)(lVar7 + 0x10) = param_1;
    func_0x000180314690(lVar7 + 0x10,param_1);
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) != 0) {
      cVar5 = TargetManager__HasTarget__1807ea7b0(**(longlong **)(TI_TargetManager + 0xb8),0);
      if (cVar5 == '\0') {
        return;
      }
      if (DAT_1834b3015 == '\0') {
        FUN_180315380(TI_TargetManager);
        DAT_1834b3015 = '\x01';
      }
      if (((**(longlong **)(TI_TargetManager + 0xb8) != 0) &&
          (lVar8 = *(longlong *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20), lVar8 != 0)) &&
         (lVar8 = UnityEngine_Component__get_transform(lVar8,0), lVar8 != 0)) {
        cVar5 = FUN_180997660(lVar8,lVar7 + 0x18,MR_UnityEngine.Component.TryGetComponent<Entity>);
        if (cVar5 == '\0') {
          return;
        }
        if ((*(longlong *)(lVar7 + 0x18) != 0) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x30), lVar3 != 0)) {
          iVar1 = *(int *)(lVar3 + 0x14);
          if (DAT_1834b30fb == '\0') {
            FUN_180315380(TI_GameClient);
            DAT_1834b30fb = '\x01';
          }
          if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
            iVar6 = GameClient__get_CurrentPlayerId(**(longlong **)(TI_GameClient + 0xb8),0);
            if (iVar1 != iVar6) {
              if (*(longlong **)(lVar7 + 0x18) == (longlong *)0x0) goto code_r0x00018067bfe6;
              lVar3 = **(longlong **)(lVar7 + 0x18);
              if ((*(byte *)(lVar3 + 0x130) < *(byte *)(TI_SparkPortaEntity + 0x130)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar3 + 200) + -8 +
                   (ulonglong)*(byte *)(TI_SparkPortaEntity + 0x130) * 8) != TI_SparkPortaEntity))
              {
                if ((*(byte *)(**(longlong **)(lVar7 + 0x18) + 0x130) <
                     *(byte *)(TI_SparkObjetoEstaticoEntity + 0x130)) ||
                   (*(longlong *)
                     (*(longlong *)(**(longlong **)(lVar7 + 0x18) + 200) + -8 +
                     (ulonglong)*(byte *)(TI_SparkObjetoEstaticoEntity + 0x130) * 8) != TI_SparkObjetoEstaticoEntity
                   )) {
                  lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x30);
                  if ((lVar3 != 0) && (param_1[6] != 0)) {
                    cVar5 = FUN_181131ff0(param_1[6],*(undefined4 *)(lVar3 + 0x14),MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.ContainsKey);
                    if (cVar5 != '\0') {
                      return;
                    }
                    cVar5 = (**(code **)(*param_1 + 0x208))
                                      (param_1,lVar8,*(undefined8 *)(*param_1 + 0x210));
                    if (cVar5 == '\0') {
                      return;
                    }
                    if ((*(longlong *)(lVar7 + 0x18) != 0) &&
                       (lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x30), lVar8 != 0)) {
                      uVar2 = *(undefined4 *)(lVar8 + 0x14);
                      lVar8 = param_1[6];
                      uVar9 = func_0x000180315580(TI_System.Func<int,Nameplate>);
                      FUN_18116ac60(uVar9,lVar7,MD_NameplatesManagerGame.__c__DisplayClass10_0._ProcessTargetedEntity_b__0,0);
                      if (lVar8 != 0) {
                        FUN_181133680(lVar8,uVar2,uVar9,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
                        return;
                      }
                    }
                  }
                  goto code_r0x00018067bfe6;
                }
              }
            }
            return;
          }
        }
      }
    }
  }
code_r0x00018067bfe6:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

