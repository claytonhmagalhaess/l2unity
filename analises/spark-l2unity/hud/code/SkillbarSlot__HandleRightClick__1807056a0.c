// SkillbarSlot__HandleRightClick__1807056a0 @ 0x1807056a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__HandleRightClick__1807056a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4177 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(LIT_"'action_summon_soulshot'");
    FUN_180315380(LIT_"'action_summon_spiritshot'");
    FUN_180315380(LIT_"'action_bless_spiritshot'");
    FUN_180315380(LIT_"'action_soulshot'");
    FUN_180315380(LIT_"'action_spiritshot'");
    FUN_180315380(LIT_"'Toggle bar slot {0}.'");
    cRam00000001834b4177 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0xb0) == 0) || (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x18) != 1))
  {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
        TI_InventorySlot)) {
      FUN_1803146d0(plVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = plVar1[0x15];
    if (lVar2 != 0) {
      cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar2 + 0x28),LIT_"'action_soulshot'",0);
      if ((((cVar4 == '\0') &&
           (cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar2 + 0x28),LIT_"'action_bless_spiritshot'",0),
           cVar4 == '\0')) &&
          (cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar2 + 0x28),LIT_"'action_spiritshot'",0),
          cVar4 == '\0')) &&
         ((cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar2 + 0x28),LIT_"'action_summon_soulshot'",0),
          cVar4 == '\0' &&
          (cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar2 + 0x28),LIT_"'action_summon_spiritshot'",0),
          cVar4 == '\0')))) {
        return;
      }
      auStackX_8[0] = *(undefined4 *)(param_1 + 0x14);
      uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar5 = System_String__Format(LIT_"'Toggle bar slot {0}.'",uVar5,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(uVar5,0);
      if (cRam00000001834b3101 == '\0') {
        FUN_180315380(TI_PlayerShortcuts);
        cRam00000001834b3101 = '\x01';
      }
      if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
        PlayerShortcuts__RequestToggleShortcutItem__1804d3070
                  (**(longlong **)(TI_PlayerShortcuts + 0xb8),*(undefined4 *)(lVar2 + 0x10),
                   *(undefined1 *)(param_1 + 0x88),0);
        return;
      }
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

