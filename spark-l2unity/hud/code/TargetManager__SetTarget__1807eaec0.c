// TargetManager__SetTarget__1807eaec0 @ 0x1807eaec0

/* WARNING: Possible PIC construction at 0x0001807eb048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807eb0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001807ea031: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001807eb101) */
/* WARNING: Removing unreachable block (ram,0x0001807eb10a) */
/* WARNING: Removing unreachable block (ram,0x0001807eb11d) */
/* WARNING: Removing unreachable block (ram,0x0001807eb137) */
/* WARNING: Removing unreachable block (ram,0x0001807eb14e) */
/* WARNING: Removing unreachable block (ram,0x0001807eb157) */
/* WARNING: Removing unreachable block (ram,0x0001807eb16a) */
/* WARNING: Removing unreachable block (ram,0x0001807eb180) */
/* WARNING: Removing unreachable block (ram,0x0001807eb189) */
/* WARNING: Removing unreachable block (ram,0x0001807eb192) */
/* WARNING: Removing unreachable block (ram,0x0001807eb19e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TargetManager__SetTarget__1807eaec0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RDI;
  uint uVar9;
  bool bVar10;
  
  if (DAT_1834b46c8 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<Entity>);
    DAT_1834b46c8 = '\x01';
  }
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x38) == 0) {
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar6 = FUN_180997040(*(longlong *)(param_2 + 0x38),MR_UnityEngine.Component.GetComponent<Entity>);
    if (DAT_1834b46c9 == '\0') {
      FUN_180315380(TI_NpcSpawner,uVar6,1,0,unaff_RDI);
      FUN_180315380(TI_UnityEngine.Object);
      DAT_1834b46c9 = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((char)uVar7 == '\0') {
      if (*(int *)(TI_NpcSpawner + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = NpcSpawner__NaoSelecionavel(uVar6,0);
      if ((char)uVar7 == '\0') {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if (cVar5 != '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar2,uVar6,0);
          if ((char)uVar7 != '\0') {
            uVar8 = param_1 + 0x58;
            *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x20);
            goto SUB_180314690;
          }
        }
        *(undefined8 *)(param_1 + 0x20) = uVar6;
        func_0x000180314690(param_1 + 0x20,uVar6);
        if (DAT_1834b4713 == '\0') {
          FUN_180315380(TI_PlayerCombat);
          DAT_1834b4713 = '\x01';
        }
        if (((*(longlong *)(param_1 + 0x20) != 0) &&
            (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30), lVar3 != 0)) &&
           (**(longlong **)(TI_PlayerCombat + 0xb8) != 0)) {
          *(undefined4 *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) =
               *(undefined4 *)(lVar3 + 0x14);
          if (DAT_1834b4713 == '\0') {
            FUN_180315380(TI_PlayerCombat);
            DAT_1834b4713 = '\x01';
          }
          uVar7 = TI_PlayerCombat;
          lVar3 = **(longlong **)(TI_PlayerCombat + 0xb8);
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_1 + 0x20);
            uVar8 = lVar3 + 0x30;
            goto SUB_180314690;
          }
        }
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
    }
    return uVar7;
  }
  uVar7 = TargetManager__HasTarget__1807ea7b0(param_1,0);
  if ((char)uVar7 == '\0') {
    return uVar7;
  }
  if (DAT_1834b4713 == '\0') {
    FUN_180315380(TI_PlayerCombat);
    DAT_1834b4713 = '\x01';
  }
  if (**(longlong **)(TI_PlayerCombat + 0xb8) != 0) {
    if (*(int *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) == -1) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar7 = func_0x000180314690(param_1 + 0x20,0);
      uVar8 = param_1 + 0x28;
      *(undefined8 *)(param_1 + 0x28) = 0;
SUB_180314690:
      if (_DAT_1834c7d58 != 0) {
        uVar9 = (uint)(uVar8 >> 0xc);
        puVar1 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
        do {
          uVar8 = *puVar1;
          LOCK();
          uVar7 = *puVar1;
          bVar10 = uVar8 == uVar7;
          if (bVar10) {
            *puVar1 = uVar8 | 1L << (uVar9 & 0x3f);
            uVar7 = uVar8;
          }
          UNLOCK();
        } while (!bVar10);
      }
      return uVar7;
    }
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
       (lVar3 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar3 != 0)) {
      GameClientPacketHandler__SendRequestCancel(lVar3,0,0);
      if (DAT_1834b4713 == '\0') {
        FUN_180315380(TI_PlayerCombat);
        DAT_1834b4713 = '\x01';
      }
      if (**(longlong **)(TI_PlayerCombat + 0xb8) != 0) {
        *(undefined4 *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) = 0xffffffff;
        if (DAT_1834b4713 == '\0') {
          FUN_180315380(TI_PlayerCombat);
          DAT_1834b4713 = '\x01';
        }
        uVar7 = TI_PlayerCombat;
        lVar3 = **(longlong **)(TI_PlayerCombat + 0xb8);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x30) = 0;
          uVar8 = lVar3 + 0x30;
          goto SUB_180314690;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return uVar7;
}

