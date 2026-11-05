// TargetManager__SetTarget__1807eaf40 @ 0x1807eaf40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetManager__SetTarget__1807eaf40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  
  if (DAT_1834b46c9 == '\0') {
    FUN_180315380(TI_NpcSpawner,param_2,1,0);
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834b46c9 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Equality(param_2,0,0);
  if (cVar6 == '\0') {
    if (*(int *)(TI_NpcSpawner + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = NpcSpawner__NaoSelecionavel(param_2,0);
    if (cVar6 == '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if (cVar6 != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar6 = UnityEngine_Object__op_Inequality(uVar1,param_2,0);
        if (cVar6 != '\0') {
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x20);
          func_0x000180314690(param_1 + 0x58);
        }
      }
      *(undefined8 *)(param_1 + 0x20) = param_2;
      func_0x000180314690(param_1 + 0x20,param_2);
      if (DAT_1834b4713 == '\0') {
        FUN_180315380(TI_PlayerCombat);
        DAT_1834b4713 = '\x01';
      }
      if (((*(longlong *)(param_1 + 0x20) != 0) &&
          (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30), lVar2 != 0)) &&
         (**(longlong **)(TI_PlayerCombat + 0xb8) != 0)) {
        *(undefined4 *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) =
             *(undefined4 *)(lVar2 + 0x14);
        if (DAT_1834b4713 == '\0') {
          FUN_180315380(TI_PlayerCombat);
          DAT_1834b4713 = '\x01';
        }
        lVar2 = **(longlong **)(TI_PlayerCombat + 0xb8);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_1 + 0x20);
          func_0x000180314690(lVar2 + 0x30);
          if (DAT_1834b3801 == '\0') {
            FUN_180315380(TI_ShopWindow);
            DAT_1834b3801 = '\x01';
          }
          plVar3 = (longlong *)**(longlong **)(TI_ShopWindow + 0xb8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
            if (DAT_1834b30fb == '\0') {
              FUN_180315380(TI_GameClient);
              DAT_1834b30fb = '\x01';
            }
            if (((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
                (*(longlong *)(param_1 + 0x20) != 0)) &&
               ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30), lVar2 != 0 &&
                (lVar4 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar4 != 0)))
               ) {
              GameClientPacketHandler__SendRequestSetTarget(lVar4,*(undefined4 *)(lVar2 + 0x14),0);
              return;
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

