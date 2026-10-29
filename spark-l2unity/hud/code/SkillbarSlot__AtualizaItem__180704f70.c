// SkillbarSlot__AtualizaItem__180704f70 @ 0x180704f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__AtualizaItem__180704f70(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (cRam00000001834b416e == '\0') {
    FUN_180315380(TI_InventorySlot);
    cRam00000001834b416e = '\x01';
  }
  if (((*(longlong *)(param_1 + 0xb0) != 0) && (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x18) == 1)
      ) && (plVar1 = *(longlong **)(param_1 + 0xa8), plVar1 != (longlong *)0x0)) {
    if (((*(byte *)(TI_InventorySlot + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
        (*(longlong *)
          (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) ==
         TI_InventorySlot)) &&
       ((param_2 == -1 || (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x1c) == param_2)))) {
      if (DAT_1834b3102 == '\0') {
        FUN_180315380(TI_PlayerInventory);
        DAT_1834b3102 = '\x01';
      }
      if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar3 = PlayerInventory__GetItemByObjectId
                          (**(longlong **)(TI_PlayerInventory + 0xb8),
                           *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1c),0);
        if (lVar3 != 0) {
          (**(code **)(*plVar1 + 0x208))(plVar1,lVar3,*(undefined8 *)(*plVar1 + 0x210));
        }
      }
    }
  }
  return;
}

