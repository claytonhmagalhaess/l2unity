// TargetManager__ClearTarget__1807e9f10 @ 0x1807e9f10

/* WARNING: Possible PIC construction at 0x0001807ea031: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TargetManager__ClearTarget__1807e9f10(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = TargetManager__HasTarget__1807ea7b0(param_1,0);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  if (DAT_1834b4713 == '\0') {
    FUN_180315380(TI_PlayerCombat);
    DAT_1834b4713 = '\x01';
  }
  if (**(longlong **)(TI_PlayerCombat + 0xb8) != 0) {
    if (*(int *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) == -1) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar5 = func_0x000180314690(param_1 + 0x20,0);
      uVar4 = param_1 + 0x28;
      *(undefined8 *)(param_1 + 0x28) = 0;
SUB_180314690:
      if (_DAT_1834c7d58 != 0) {
        uVar6 = (uint)(uVar4 >> 0xc);
        puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
        do {
          uVar4 = *puVar1;
          LOCK();
          uVar5 = *puVar1;
          bVar7 = uVar4 == uVar5;
          if (bVar7) {
            *puVar1 = uVar4 | 1L << (uVar6 & 0x3f);
            uVar5 = uVar4;
          }
          UNLOCK();
        } while (!bVar7);
      }
      return uVar5;
    }
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
       (lVar2 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar2 != 0)) {
      GameClientPacketHandler__SendRequestCancel(lVar2,0,0);
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
        uVar5 = TI_PlayerCombat;
        lVar2 = **(longlong **)(TI_PlayerCombat + 0xb8);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x30) = 0;
          uVar4 = lVar2 + 0x30;
          goto SUB_180314690;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}

