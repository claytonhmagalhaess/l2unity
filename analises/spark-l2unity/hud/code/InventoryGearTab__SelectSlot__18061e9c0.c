// InventoryGearTab__SelectSlot__18061e9c0 @ 0x18061e9c0

void InventoryGearTab__SelectSlot__18061e9c0(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  if (cRam00000001834b3cc0 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.get_Item);
    cRam00000001834b3cc0 = '\x01';
  }
  if (*(int *)(param_1 + 0x50) != -1) {
    if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x00018061ea60;
    plVar2 = (longlong *)
             FUN_18123a310(*(longlong *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),
                           MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.get_Item);
    if (plVar2 == (longlong *)0x0) goto code_r0x00018061ea60;
    (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar2 = (longlong *)FUN_18123a310(*(longlong *)(param_1 + 0x40),param_2,MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.get_Item);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      *(undefined4 *)(param_1 + 0x50) = param_2;
      return;
    }
  }
code_r0x00018061ea60:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

