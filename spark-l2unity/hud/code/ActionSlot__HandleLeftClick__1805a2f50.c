// ActionSlot__HandleLeftClick__1805a2f50 @ 0x1805a2f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ActionSlot__HandleLeftClick__1805a2f50(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong *aplStackX_8 [4];
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (DAT_1834b3104 == '\0') {
    FUN_180315380(TI_PlayerActions);
    DAT_1834b3104 = '\x01';
  }
  lVar2 = **(longlong **)(TI_PlayerActions + 0xb8);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    if (DAT_1834b45b4 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.Dictionary<ActionType,L2Action>.TryGetValue,uVar1,0);
      DAT_1834b45b4 = '\x01';
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    aplStackX_8[0] = (longlong *)0x0;
    if (lVar2 != 0) {
      cVar4 = FUN_181237020(lVar2,uVar1,aplStackX_8,MR_System.Collections.Generic.Dictionary<ActionType,L2Action>.TryGetValue);
      if (cVar4 == '\0') {
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
           (lVar2 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar2 != 0)) {
          GameClientPacketHandler__RequestActionUse(lVar2,uVar1,0);
          return;
        }
      }
      else if (aplStackX_8[0] != (longlong *)0x0) {
        (**(code **)(*aplStackX_8[0] + 0x178))
                  (aplStackX_8[0],*(undefined8 *)(*aplStackX_8[0] + 0x180));
        return;
      }
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

