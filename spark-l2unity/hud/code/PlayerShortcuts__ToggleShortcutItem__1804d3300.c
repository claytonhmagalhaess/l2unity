// PlayerShortcuts__ToggleShortcutItem__1804d3300 @ 0x1804d3300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__ToggleShortcutItem__1804d3300
               (longlong param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 auStackX_18 [4];
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (cRam00000001834b340d == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Remove);
    FUN_180315380(LIT_"\"Can't find item with itemId={0} in Inventory.\"");
    cRam00000001834b340d = '\x01';
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar2 = FUN_18162e860(*(longlong *)(param_1 + 0x28),param_2,MR_System.Collections.Generic.List<int>.Contains);
    if (param_3 == '\0') {
      if (cVar2 != '\0') {
        if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001804d35d0;
        FUN_181631d30(*(longlong *)(param_1 + 0x28),param_2,MR_System.Collections.Generic.List<int>.Remove);
      }
    }
    else if (cVar2 == '\0') {
      if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001804d35d0;
      FUN_1800034b0(*(longlong *)(param_1 + 0x28),param_2,MR_System.Collections.Generic.List<int>.Add);
    }
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
      lVar3 = PlayerInventory__GetItemById(**(longlong **)(TI_PlayerInventory + 0xb8),param_2,0);
      if (lVar3 == 0) {
        auStackX_18[0] = param_2;
        uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
        uVar4 = System_String__Format(LIT_"\"Can't find item with itemId={0} in Inventory.\"",uVar4,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar4,0);
        return;
      }
      if (cRam00000001834b33ff == '\0') {
        FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values);
        FUN_180315380(MR_System.Linq.Enumerable.ToList<Shortcut>);
        cRam00000001834b33ff = '\x01';
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        uVar4 = FUN_18117fd20(*(longlong *)(param_1 + 0x30),MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values);
        lVar5 = FUN_1809c8820(uVar4,MR_System.Linq.Enumerable.ToList<Shortcut>);
        if (lVar5 != 0) {
          FUN_180bada40(&uStack_60,lVar5,MR_System.Collections.Generic.List<Shortcut>.GetEnumerator);
          uStack_48 = (undefined4)uStack_60;
          uStack_44 = uStack_60._4_4_;
          uStack_40 = (undefined4)uStack_58;
          uStack_3c = uStack_58._4_4_;
          lStack_38 = lStack_50;
          uStack_60 = 0;
          uStack_58 = &uStack_48;
          while( true ) {
            while( true ) {
              do {
                cVar2 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<Shortcut>.MoveNext);
                lVar5 = lStack_38;
                if (cVar2 == '\0') {
                  Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<Shortcut>.Dispose);
                  return;
                }
                if (lStack_38 == 0) goto code_r0x0001804d35e1;
              } while ((*(int *)(lStack_38 + 0x18) != 1) ||
                      (*(int *)(lStack_38 + 0x1c) != *(int *)(lVar3 + 0x18)));
              lVar6 = FUN_180493b20(0);
              if (param_3 == '\0') break;
              if (lVar6 == 0) goto code_r0x0001804d35dc;
              SkillbarWindow__AddToggledSlot__180706110
                        (lVar6,*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(lVar5 + 0x10),0);
            }
            if (lVar6 == 0) break;
            SkillbarWindow__RemoveToggledSlot__180707ef0
                      (lVar6,*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(lVar5 + 0x10));
          }
          goto code_r0x0001804d35d6;
        }
      }
    }
  }
code_r0x0001804d35d0:
  FUN_1803155d0();
code_r0x0001804d35d6:
  FUN_1803155d0();
code_r0x0001804d35dc:
  FUN_1803155d0();
code_r0x0001804d35e1:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

