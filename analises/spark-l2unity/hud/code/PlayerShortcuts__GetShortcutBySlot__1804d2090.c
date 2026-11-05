// PlayerShortcuts__GetShortcutBySlot__1804d2090 @ 0x1804d2090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 PlayerShortcuts__GetShortcutBySlot__1804d2090(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uStackX_8;
  
  if (cRam00000001834b340a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.TryGetValue);
    cRam00000001834b340a = '\x01';
  }
  uStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar2 = FUN_1812007b0(*(longlong *)(param_1 + 0x30),param_2,&uStackX_8,MR_System.Collections.Generic.Dictionary<int,Shortcut>.TryGetValue);
    if (cVar2 == '\0') {
      uStackX_8 = 0;
    }
    return uStackX_8;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

