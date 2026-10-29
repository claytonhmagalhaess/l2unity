// NameplatesManagerGame__CheckIfNotPlayer__18067a740 @ 0x18067a740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool NameplatesManagerGame__CheckIfNotPlayer__18067a740(undefined8 param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x14);
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
      iVar4 = GameClient__get_CurrentPlayerId(**(longlong **)(TI_GameClient + 0xb8),0);
      return iVar1 != iVar4;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return (bool)uVar3;
}

