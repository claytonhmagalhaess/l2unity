// PlayerShortcuts__MoveShortcut__1804d21d0 @ 0x1804d21d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__MoveShortcut__1804d21d0
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 auStackX_10 [2];
  
  if (cRam00000001834b340c == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'MoveShortcut. Old slot is null at {0}.'");
    cRam00000001834b340c = '\x01';
  }
  lVar3 = PlayerShortcuts__GetShortcutBySlot__1804d2090(param_1,param_2,0);
  lVar4 = PlayerShortcuts__GetShortcutBySlot__1804d2090(param_1,param_3,0);
  PlayerShortcuts__RemoveShotcutLocally__1804d2910(param_1,param_3,0);
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (lVar1 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar1 != 0)) {
    GameClientPacketHandler__RequestRemoveShortcut(lVar1,param_3,0);
    PlayerShortcuts__RemoveShotcutLocally__1804d2910(param_1,param_2,0);
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
       (lVar1 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar1 != 0)) {
      GameClientPacketHandler__RequestRemoveShortcut(lVar1,param_2,0);
      if (lVar3 == 0) {
        auStackX_10[0] = param_2;
        uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_10);
        uVar5 = System_String__Format(LIT_"'MoveShortcut. Old slot is null at {0}.'",uVar5,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogError(uVar5,0);
      }
      else {
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) == 0) ||
           (lVar1 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar1 == 0))
        goto code_r0x0001804d2407;
        GameClientPacketHandler__RequestAddShortcut
                  (lVar1,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),param_3,0);
        if (lVar4 != 0) {
          if (DAT_1834b30fb == '\0') {
            FUN_180315380(TI_GameClient);
            DAT_1834b30fb = '\x01';
          }
          if ((**(longlong **)(TI_GameClient + 0xb8) == 0) ||
             (lVar3 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar3 == 0))
          goto code_r0x0001804d2407;
          GameClientPacketHandler__RequestAddShortcut
                    (lVar3,*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),param_2,0);
        }
      }
      return;
    }
  }
code_r0x0001804d2407:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

