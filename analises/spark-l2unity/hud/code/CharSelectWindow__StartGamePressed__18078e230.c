// CharSelectWindow__StartGamePressed__18078e230 @ 0x18078e230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharSelectWindow__StartGamePressed__18078e230(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [56];
  undefined1 *puStack_40;
  undefined *puStack_30;
  undefined8 uStack_18;
  
  if (DAT_1834b30fd == '\0') {
    puStack_30 = &UNK_18078e249;
    FUN_180315380(TI_L2ConfirmWindow);
    DAT_1834b30fd = '\x01';
  }
  plVar2 = (longlong *)**(longlong **)(TI_L2ConfirmWindow + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    puStack_30 = &UNK_18078e278;
    (**(code **)(*plVar2 + 0x1c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1d0));
    if (cRam00000001834b31c4 == '\0') {
      puStack_30 = &UNK_18078e28d;
      FUN_180315380(TI_CharacterSelector);
      cRam00000001834b31c4 = '\x01';
    }
    lVar3 = **(longlong **)(TI_CharacterSelector + 0xb8);
    if (lVar3 != 0) {
      if (cRam00000001834b45f8 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
        FUN_180315380(LIT_"'Please select a character'");
        FUN_180315380(LIT_"'game_start'");
        cRam00000001834b45f8 = '\x01';
      }
      if (*(int *)(lVar3 + 0x20) != -1) {
        if (*(longlong *)(lVar3 + 0x98) != 0) {
          FUN_1815f9940(auStack_78,*(longlong *)(lVar3 + 0x98),*(undefined4 *)(lVar3 + 0x20),
                        MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
          if (0 < uStack_18._4_4_) goto code_r0x0001807ba22f;
          if (DAT_1834b301f == '\0') {
            FUN_180315380(TI_AudioManager);
            DAT_1834b301f = '\x01';
          }
          if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
            AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'game_start'",0)
            ;
            if (DAT_1834b30fb == '\0') {
              FUN_180315380(TI_GameClient);
              DAT_1834b30fb = '\x01';
            }
            if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
               (plVar2 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
               plVar2 != (longlong *)0x0)) {
              uVar1 = *(undefined4 *)(lVar3 + 0x20);
              if (cRam00000001834b3656 == '\0') {
                puStack_30 = &UNK_18050dfa9;
                FUN_180315380(TI_RequestCharSelectPacket,uVar1,0);
                cRam00000001834b3656 = '\x01';
              }
              puStack_30 = &UNK_18050dfbc;
              uVar5 = func_0x000180315580(TI_RequestCharSelectPacket);
              puStack_30 = &UNK_18050dfcc;
              RequestCharSelectPacket___ctor(uVar5,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00018050dfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x178))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x180));
              return;
            }
          }
        }
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
code_r0x0001807ba22f:
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = LIT_"'Please select a character'";
      if (DAT_1834bfa1e == '\0') {
        puStack_40 = (undefined1 *)0x1823d21fe;
        FUN_180315380(TI_UnityEngine.Debug,0);
        puStack_40 = (undefined1 *)0x1823d220a;
        FUN_180315380(TI_UnityEngine.ILogger);
        DAT_1834bfa1e = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        puStack_40 = &LAB_1823d2226;
        func_0x000180315660();
      }
      if (DAT_1834b3803 == '\0') {
        puStack_40 = (undefined1 *)0x1823d223b;
        FUN_180315380(TI_UnityEngine.Debug);
        DAT_1834b3803 = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        puStack_40 = &LAB_1823d2257;
        func_0x000180315660();
      }
      lVar3 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
      if (lVar3 != 0) {
        uStack_18 = uVar5;
        puStack_40 = (undefined1 *)0x1823d228a;
        FUN_180036090(5,TI_UnityEngine.ILogger,lVar3,2);
        return;
      }
      puStack_40 = (undefined1 *)0x1823d2295;
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puStack_30 = &UNK_18078e2ba;
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

