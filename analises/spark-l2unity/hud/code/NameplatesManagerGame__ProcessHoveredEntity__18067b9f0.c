// NameplatesManagerGame__ProcessHoveredEntity__18067b9f0 @ 0x18067b9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__ProcessHoveredEntity__18067b9f0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lStackX_18;
  
  if (cRam00000001834b3e27 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<Entity>);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
    FUN_180315380(TI_System.Func<int,Nameplate>);
    FUN_180315380(TI_SparkObjetoEstaticoEntity);
    FUN_180315380(TI_SparkPortaEntity);
    FUN_180315380(MD_NameplatesManagerGame.__c__DisplayClass9_0._ProcessHoveredEntity_b__0);
    FUN_180315380(TI_NameplatesManagerGame.<>c__DisplayClass9_0);
    cRam00000001834b3e27 = '\x01';
  }
  lVar9 = func_0x000180315580(TI_NameplatesManagerGame.<>c__DisplayClass9_0);
  Gear__UpdateWeaponType__1803dadf0(lVar9,0);
  if (lVar9 != 0) {
    *(longlong *)(lVar9 + 0x10) = param_1;
    func_0x000180314690(lVar9 + 0x10,param_1);
    if (cRam00000001834b31d1 == '\0') {
      FUN_180315380(TI_ClickManager);
      cRam00000001834b31d1 = '\x01';
    }
    if (**(longlong **)(TI_ClickManager + 0xb8) != 0) {
      lVar3 = *(longlong *)(**(longlong **)(TI_ClickManager + 0xb8) + 0x40);
      if (cRam00000001834b3e19 == '\0') {
        FUN_180315380(MR_UnityEngine.Component.TryGetComponent<Entity>);
        FUN_180315380(TI_UnityEngine.Object);
        cRam00000001834b3e19 = '\x01';
      }
      lStackX_18 = 0;
      if (lVar3 != 0) {
        uVar11 = *(undefined8 *)(lVar3 + 0x38);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if (cVar5 != '\0') {
          uVar6 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x24),0);
          uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x24),0);
          if (uVar6 == (uVar7 | 1 << (*(uint *)(lVar3 + 0x18) & 0x1f))) {
            if (*(longlong *)(lVar3 + 0x38) != 0) {
              cVar5 = FUN_180997660(*(longlong *)(lVar3 + 0x38),&lStackX_18,MR_UnityEngine.Component.TryGetComponent<Entity>);
              if (cVar5 == '\0') {
                return;
              }
              if ((lStackX_18 != 0) && (*(longlong *)(lStackX_18 + 0x30) != 0)) {
                iVar1 = *(int *)(*(longlong *)(lStackX_18 + 0x30) + 0x14);
                lVar10 = FUN_1804582c0(0);
                if (lVar10 != 0) {
                  iVar8 = GameClient__get_CurrentPlayerId(lVar10,0);
                  if (iVar1 == iVar8) {
                    return;
                  }
                  if (*(longlong *)(lVar3 + 0x38) != 0) {
                    uVar11 = FUN_180997040(*(longlong *)(lVar3 + 0x38),MR_UnityEngine.Component.GetComponent<Entity>);
                    *(undefined8 *)(lVar9 + 0x18) = uVar11;
                    func_0x000180314690(lVar9 + 0x18,uVar11);
                    if (*(longlong **)(lVar9 + 0x18) != (longlong *)0x0) {
                      lVar3 = **(longlong **)(lVar9 + 0x18);
                      if ((*(byte *)(TI_SparkPortaEntity + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
                         (*(longlong *)
                           (*(longlong *)(lVar3 + 200) + -8 +
                           (ulonglong)*(byte *)(TI_SparkPortaEntity + 0x130) * 8) ==
                          TI_SparkPortaEntity)) {
                        return;
                      }
                      if ((*(byte *)(TI_SparkObjetoEstaticoEntity + 0x130) <=
                           *(byte *)(**(longlong **)(lVar9 + 0x18) + 0x130)) &&
                         (*(longlong *)
                           (*(longlong *)(**(longlong **)(lVar9 + 0x18) + 200) + -8 +
                           (ulonglong)*(byte *)(TI_SparkObjetoEstaticoEntity + 0x130) * 8) ==
                          TI_SparkObjetoEstaticoEntity)) {
                        return;
                      }
                      lVar3 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x30);
                      if (lVar3 != 0) {
                        lVar10 = *(longlong *)(param_1 + 0x30);
                        uVar2 = *(undefined4 *)(lVar3 + 0x14);
                        uVar11 = func_0x000180315580(TI_System.Func<int,Nameplate>);
                        FUN_18116ac60(uVar11,lVar9,MD_NameplatesManagerGame.__c__DisplayClass9_0._ProcessHoveredEntity_b__0,0);
                        if (lVar10 != 0) {
                          lVar9 = FUN_181133680(lVar10,uVar2,uVar11,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd);
                          if (lVar9 == 0) {
                            return;
                          }
                          if (*(char *)(lVar9 + 0x48) != '\0') {
                            return;
                          }
                          *(undefined1 *)(lVar9 + 0x48) = 1;
                          Nameplate__Exibe__1806768f0(lVar9,1,0);
                          return;
                        }
                      }
                    }
                  }
                  goto code_r0x00018067bce2;
                }
              }
            }
            FUN_1803155d0();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      return;
    }
  }
code_r0x00018067bce2:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

