// StatusWindow__OnClick__1807633b0 @ 0x1807633b0

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

ulonglong StatusWindow__OnClick__1807633b0(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 unaff_RDI;
  uint uVar10;
  bool bVar11;
  
  if (DAT_1834b42c4 == '\0') {
    FUN_180315380(TI_ObjectData);
    DAT_1834b42c4 = '\x01';
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  if ((**(longlong **)(TI_PlayerEntity + 0xb8) != 0) &&
     (lVar6 = UnityEngine_Component__get_transform(**(longlong **)(TI_PlayerEntity + 0xb8),0),
     lVar6 != 0)) {
    uVar7 = UnityEngine_Component__get_gameObject(lVar6,0);
    lVar6 = func_0x000180315580(TI_ObjectData);
    ObjectData___ctor(lVar6,uVar7,0);
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    lVar2 = **(longlong **)(TI_TargetManager + 0xb8);
    if (lVar2 != 0) {
      if (DAT_1834b46c8 == '\0') {
        FUN_180315380(MR_UnityEngine.Component.GetComponent<Entity>,lVar6,0);
        DAT_1834b46c8 = '\x01';
      }
      if (lVar6 != 0) {
        if (*(longlong *)(lVar6 + 0x38) == 0) {
          FUN_1803155d0();
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        uVar7 = FUN_180997040(*(longlong *)(lVar6 + 0x38),MR_UnityEngine.Component.GetComponent<Entity>);
        if (DAT_1834b46c9 == '\0') {
          FUN_180315380(TI_NpcSpawner,uVar7,1,0,unaff_RDI);
          FUN_180315380(TI_UnityEngine.Object);
          DAT_1834b46c9 = '\x01';
        }
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
        if ((char)uVar8 == '\0') {
          if (*(int *)(TI_NpcSpawner + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar8 = NpcSpawner__NaoSelecionavel(uVar7,0);
          if ((char)uVar8 == '\0') {
            uVar3 = *(undefined8 *)(lVar2 + 0x20);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
            if (cVar5 != '\0') {
              uVar3 = *(undefined8 *)(lVar2 + 0x20);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar8 = UnityEngine_Object__op_Inequality(uVar3,uVar7,0);
              if ((char)uVar8 != '\0') {
                uVar9 = lVar2 + 0x58;
                *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar2 + 0x20);
                goto SUB_180314690;
              }
            }
            *(undefined8 *)(lVar2 + 0x20) = uVar7;
            func_0x000180314690(lVar2 + 0x20,uVar7);
            if (DAT_1834b4713 == '\0') {
              FUN_180315380(TI_PlayerCombat);
              DAT_1834b4713 = '\x01';
            }
            if (((*(longlong *)(lVar2 + 0x20) != 0) &&
                (lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x30), lVar6 != 0)) &&
               (**(longlong **)(TI_PlayerCombat + 0xb8) != 0)) {
              *(undefined4 *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) =
                   *(undefined4 *)(lVar6 + 0x14);
              if (DAT_1834b4713 == '\0') {
                FUN_180315380(TI_PlayerCombat);
                DAT_1834b4713 = '\x01';
              }
              uVar8 = TI_PlayerCombat;
              lVar6 = **(longlong **)(TI_PlayerCombat + 0xb8);
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar2 + 0x20);
                uVar9 = lVar6 + 0x30;
                goto SUB_180314690;
              }
            }
            FUN_1803155d0();
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return uVar8;
          }
        }
        return uVar8;
      }
      uVar8 = TargetManager__HasTarget__1807ea7b0(lVar2,0);
      if ((char)uVar8 == '\0') {
        return uVar8;
      }
      if (DAT_1834b4713 == '\0') {
        FUN_180315380(TI_PlayerCombat);
        DAT_1834b4713 = '\x01';
      }
      if (**(longlong **)(TI_PlayerCombat + 0xb8) != 0) {
        if (*(int *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) == -1) {
          *(undefined8 *)(lVar2 + 0x20) = 0;
          uVar8 = func_0x000180314690(lVar2 + 0x20,0);
          uVar9 = lVar2 + 0x28;
          *(undefined8 *)(lVar2 + 0x28) = 0;
SUB_180314690:
          if (_DAT_1834c7d58 != 0) {
            uVar10 = (uint)(uVar9 >> 0xc);
            puVar1 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
            do {
              uVar9 = *puVar1;
              LOCK();
              uVar8 = *puVar1;
              bVar11 = uVar9 == uVar8;
              if (bVar11) {
                *puVar1 = uVar9 | 1L << (uVar10 & 0x3f);
                uVar8 = uVar9;
              }
              UNLOCK();
            } while (!bVar11);
          }
          return uVar8;
        }
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
           (lVar6 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar6 != 0)) {
          GameClientPacketHandler__SendRequestCancel(lVar6,0,0);
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
            uVar8 = TI_PlayerCombat;
            lVar6 = **(longlong **)(TI_PlayerCombat + 0xb8);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x30) = 0;
              uVar9 = lVar6 + 0x30;
              goto SUB_180314690;
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  uVar8 = (*pcVar4)();
  return uVar8;
}

