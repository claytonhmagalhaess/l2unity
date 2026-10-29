// InventorySlot__HandleMiddleClick__18061fd00 @ 0x18061fd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventorySlot__HandleMiddleClick__18061fd00(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (DAT_1834b3102 == '\0') {
    FUN_180315380(TI_PlayerInventory);
    DAT_1834b3102 = '\x01';
  }
  if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    if (cRam00000001834b3050 == '\0') {
      FUN_180315380(LIT_"'trash_basket'",uVar1,1,0);
      cRam00000001834b3050 = '\x01';
    }
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      AudioManager__PlayEquipSound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'trash_basket'",0);
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
         (plVar2 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
         plVar2 != (longlong *)0x0)) {
        if (cRam00000001834b365b == '\0') {
          FUN_180315380(TI_RequestDestroyItemPacket,uVar1,1,0);
          cRam00000001834b365b = '\x01';
        }
        uVar4 = func_0x000180315580(TI_RequestDestroyItemPacket);
        RequestDestroyItemPacket___ctor(uVar4,uVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00018050bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x178))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x180));
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

