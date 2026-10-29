// NpcHtmlWindow___cctor__1806847d0 @ 0x1806847d0

/* WARNING: Possible PIC construction at 0x000180684940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00018068497c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806849b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806849f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180684a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180684a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180684aae: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180684af6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180684b3e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180684b86: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180684bca: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180684b8b) */
/* WARNING: Removing unreachable block (ram,0x000180684b95) */
/* WARNING: Removing unreachable block (ram,0x000180684bb5) */
/* WARNING: Removing unreachable block (ram,0x000180684b43) */
/* WARNING: Removing unreachable block (ram,0x000180684b4d) */
/* WARNING: Removing unreachable block (ram,0x000180684b71) */
/* WARNING: Removing unreachable block (ram,0x000180684afb) */
/* WARNING: Removing unreachable block (ram,0x000180684b05) */
/* WARNING: Removing unreachable block (ram,0x000180684b29) */
/* WARNING: Removing unreachable block (ram,0x000180684ab3) */
/* WARNING: Removing unreachable block (ram,0x000180684abd) */
/* WARNING: Removing unreachable block (ram,0x000180684ae1) */
/* WARNING: Removing unreachable block (ram,0x000180684a71) */
/* WARNING: Removing unreachable block (ram,0x000180684a7b) */
/* WARNING: Removing unreachable block (ram,0x000180684a99) */
/* WARNING: Removing unreachable block (ram,0x000180684a35) */
/* WARNING: Removing unreachable block (ram,0x000180684a3f) */
/* WARNING: Removing unreachable block (ram,0x000180684a5d) */
/* WARNING: Removing unreachable block (ram,0x0001806849f9) */
/* WARNING: Removing unreachable block (ram,0x000180684a03) */
/* WARNING: Removing unreachable block (ram,0x000180684a21) */
/* WARNING: Removing unreachable block (ram,0x0001806849bd) */
/* WARNING: Removing unreachable block (ram,0x0001806849c7) */
/* WARNING: Removing unreachable block (ram,0x0001806849e5) */
/* WARNING: Removing unreachable block (ram,0x000180684981) */
/* WARNING: Removing unreachable block (ram,0x00018068498b) */
/* WARNING: Removing unreachable block (ram,0x0001806849a9) */
/* WARNING: Removing unreachable block (ram,0x000180684945) */
/* WARNING: Removing unreachable block (ram,0x00018068494f) */
/* WARNING: Removing unreachable block (ram,0x00018068496d) */
/* WARNING: Removing unreachable block (ram,0x000180684bcf) */
/* WARNING: Removing unreachable block (ram,0x000180684bd5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong NpcHtmlWindow___cctor__1806847d0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3e5a == '\0') {
    FUN_180315380(TI_NpcHtmlWindow);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'admin_ban_acc'");
    FUN_180315380(LIT_"'admin_kill_menu'");
    FUN_180315380(LIT_"'admin_kick_non_gm'");
    FUN_180315380(LIT_"'admin_silence'");
    FUN_180315380(LIT_"'admin_clanhalldel'");
    FUN_180315380(LIT_"'admin_remove'");
    FUN_180315380(LIT_"'admin_masskill'");
    FUN_180315380(LIT_"'admin_kick'");
    FUN_180315380(LIT_"'admin_ban_menu'");
    FUN_180315380(LIT_"'admin_kill'");
    FUN_180315380(LIT_"'admin_ban'");
    FUN_180315380(LIT_"'admin_clear_inventory'");
    FUN_180315380(LIT_"'admin_set_level'");
    FUN_180315380(LIT_"'admin_jail'");
    FUN_180315380(LIT_"'admin_kill_monster'");
    FUN_180315380(LIT_"'admin_banchat'");
    FUN_180315380(LIT_"'admin_delete'");
    FUN_180315380(LIT_"'admin_changelvl'");
    FUN_180315380(LIT_"'admin_server_shutdown'");
    FUN_180315380(LIT_"'admin_kick_menu'");
    FUN_180315380(LIT_"'admin_server_restart'");
    FUN_180315380(LIT_"'admin_ban_char'");
    cRam00000001834b3e5a = '\x01';
  }
  uVar4 = func_0x000180314710(TI_string__,0x16);
  if (uVar4 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  if (*(int *)(uVar4 + 0x18) == 0) {
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  *(undefined8 *)(uVar4 + 0x20) = LIT_"'admin_ban'";
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(uVar4 + 0x20 >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar4 = *puVar1;
      bVar6 = uVar2 == uVar4;
      if (bVar6) {
        *puVar1 = uVar2 | 1L << (uVar5 & 0x3f);
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (!bVar6);
  }
  return uVar4;
}

