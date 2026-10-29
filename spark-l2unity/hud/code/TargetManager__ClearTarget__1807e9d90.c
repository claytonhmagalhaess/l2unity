// TargetManager__ClearTarget__1807e9d90 @ 0x1807e9d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetManager__ClearTarget__1807e9d90(longlong param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  
  cVar3 = TargetManager__HasTarget__1807ea7b0(param_1,0);
  if (cVar3 != '\0') {
    if (DAT_1834b4713 == '\0') {
      FUN_180315380(TI_PlayerCombat);
      DAT_1834b4713 = '\x01';
    }
    if (**(longlong **)(TI_PlayerCombat + 0xb8) == 0) goto code_r0x0001807e9efe;
    if (*(int *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) != -1) {
      if (param_2 != '\0') {
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) == 0) ||
           (lVar1 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar1 == 0))
        goto code_r0x0001807e9efe;
        GameClientPacketHandler__SendRequestCancel(lVar1,0,0);
      }
      if (DAT_1834b4713 == '\0') {
        FUN_180315380(TI_PlayerCombat);
        DAT_1834b4713 = '\x01';
      }
      if (**(longlong **)(TI_PlayerCombat + 0xb8) == 0) {
code_r0x0001807e9efe:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) = 0xffffffff;
      if (DAT_1834b4713 == '\0') {
        FUN_180315380(TI_PlayerCombat);
        DAT_1834b4713 = '\x01';
      }
      lVar1 = **(longlong **)(TI_PlayerCombat + 0xb8);
      if (lVar1 == 0) goto code_r0x0001807e9efe;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      func_0x000180314690(lVar1 + 0x30,0);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x000180314690(param_1 + 0x20,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    func_0x000180314690(param_1 + 0x28,0);
  }
  return;
}

