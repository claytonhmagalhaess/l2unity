// NameplatesManagerBase__ShouldCreateNameplateForEntity__1806797c0 @ 0x1806797c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool NameplatesManagerBase__ShouldCreateNameplateForEntity__1806797c0
               (longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lStackX_10;
  
  if (cRam00000001834b3e19 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.TryGetComponent<Entity>);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e19 = '\x01';
  }
  lStackX_10 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if (cVar4 != '\0') {
      uVar6 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x24),0);
      uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x24),0);
      if (uVar6 == (uVar7 | 1 << (*(uint *)(param_2 + 0x18) & 0x1f))) {
        if (*(longlong *)(param_2 + 0x38) != 0) {
          cVar4 = FUN_180997660(*(longlong *)(param_2 + 0x38),&lStackX_10,MR_UnityEngine.Component.TryGetComponent<Entity>);
          if (cVar4 == '\0') {
            return false;
          }
          if ((lStackX_10 != 0) && (*(longlong *)(lStackX_10 + 0x30) != 0)) {
            iVar1 = *(int *)(*(longlong *)(lStackX_10 + 0x30) + 0x14);
            lVar9 = FUN_1804582c0(0);
            if (lVar9 != 0) {
              iVar8 = GameClient__get_CurrentPlayerId(lVar9,0);
              return iVar1 != iVar8;
            }
          }
        }
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  return false;
}

