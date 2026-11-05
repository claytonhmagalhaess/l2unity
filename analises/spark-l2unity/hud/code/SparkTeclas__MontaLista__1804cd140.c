// SparkTeclas__MontaLista__1804cd140 @ 0x1804cd140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__MontaLista__1804cd140(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int aiStackX_10 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  longlong lStack_78;
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (cRam00000001834b32f4 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<SparkTeclas.Item>);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'Fly down'");
    FUN_180315380(LIT_"'Reset window positions'");
    FUN_180315380(LIT_"'FlyLeft'");
    FUN_180315380(LIT_"'System menu'");
    FUN_180315380(LIT_"'Fly up'");
    FUN_180315380(LIT_"'FlyBack'");
    FUN_180315380(LIT_"'Hide chat'");
    FUN_180315380(LIT_"'Bar 1 - page {0}'");
    FUN_180315380(LIT_"'GM window'");
    FUN_180315380(LIT_"'CharacterStatus'");
    FUN_180315380(LIT_"'Shortcut bar {0}'");
    FUN_180315380(LIT_"'Ctrl'");
    FUN_180315380(LIT_"'Turn left'");
    FUN_180315380(LIT_"'Open chat / send'");
    FUN_180315380(LIT_"'Next message / whisper'");
    FUN_180315380(LIT_"'SystemMenu'");
    FUN_180315380(LIT_"'Validate'");
    FUN_180315380(LIT_"'Character status'");
    FUN_180315380(LIT_"'Windows'");
    FUN_180315380(LIT_"'Macro'");
    FUN_180315380(LIT_"'Bar pages'");
    FUN_180315380(LIT_"'Fly forward'");
    FUN_180315380(LIT_"'FlyRight'");
    FUN_180315380(LIT_"'TargetSelf'");
    FUN_180315380(LIT_"'Actions'");
    FUN_180315380(LIT_"'Force attack (hold)'");
    FUN_180315380(LIT_"'Shortcut{0}-{1}'");
    FUN_180315380(LIT_"'NextTarget'");
    FUN_180315380(LIT_"'Attack'");
    FUN_180315380(LIT_"'Character'");
    FUN_180315380(LIT_"'Board'");
    FUN_180315380(LIT_"'Target yourself'");
    FUN_180315380(LIT_"'HideUI'");
    FUN_180315380(LIT_"'Turn right'");
    FUN_180315380(LIT_"'LowDetail'");
    FUN_180315380(LIT_"'Inventory'");
    FUN_180315380(LIT_"'Community board'");
    FUN_180315380(LIT_"'Sit / stand'");
    FUN_180315380(LIT_"'Next target'");
    FUN_180315380(LIT_"'ArrowUp'");
    FUN_180315380(LIT_"'Interface'");
    FUN_180315380(LIT_"'Mute'");
    FUN_180315380(LIT_"'Skills'");
    FUN_180315380(LIT_"'Previous message / whisper'");
    FUN_180315380(LIT_"'Gm'");
    FUN_180315380(LIT_"'Party buffs display'");
    FUN_180315380(LIT_"'CloseWindow'");
    FUN_180315380(LIT_"'Radar'");
    FUN_180315380(LIT_"'BarPage'");
    FUN_180315380(LIT_"'Chat'");
    FUN_180315380(LIT_"'FlyDown'");
    FUN_180315380(LIT_"'FlyForward'");
    FUN_180315380(LIT_"'ResetLayout'");
    FUN_180315380(LIT_"'Friends'");
    FUN_180315380(LIT_"'Sit'");
    FUN_180315380(LIT_"'Map'");
    FUN_180315380(LIT_"'Clan'");
    FUN_180315380(LIT_"'Mute all sound'");
    FUN_180315380(LIT_"'FlyUp'");
    FUN_180315380(LIT_"'PartyBuffs'");
    FUN_180315380(LIT_"'Quest'");
    FUN_180315380(LIT_"'Stay in place on ground click (hold)'");
    FUN_180315380(LIT_"'HideChat'");
    FUN_180315380(LIT_"'Close window / cancel cast'");
    FUN_180315380(LIT_"'Wyvern'");
    FUN_180315380(LIT_"'Hide all interface'");
    FUN_180315380(LIT_"'ArrowDown'");
    FUN_180315380(LIT_"'Shift'");
    FUN_180315380(LIT_"'Bar {0} - slot {1}'");
    FUN_180315380(LIT_"'Fly back'");
    FUN_180315380(LIT_"'Low detail mode'");
    cRam00000001834b32f4 = '\x01';
  }
  aiStackX_10[0] = 0;
  lVar4 = func_0x000180315580(TI_System.Collections.Generic.List<SparkTeclas.Item>);
  FUN_180bba2e0(lVar4,MR_System.Collections.Generic.List<SparkTeclas.Item>..ctor);
  lStack_78 = lVar4;
  func_0x000180314690(&lStack_78,lVar4);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Windows'",LIT_"'Inventory'",LIT_"'Inventory'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Windows'",LIT_"'Character status'",LIT_"'CharacterStatus'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Windows'",LIT_"'Actions'",LIT_"'Actions'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Skills'",LIT_"'Skills'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Windows'",LIT_"'System menu'",LIT_"'SystemMenu'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Quest'",LIT_"'Quest'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Clan'",LIT_"'Clan'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Friends'",LIT_"'Friends'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Map'",LIT_"'Map'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Radar'",LIT_"'Radar'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Macro'",LIT_"'Macro'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'Community board'",LIT_"'Board'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Windows'",LIT_"'GM window'",LIT_"'Gm'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Interface'",LIT_"'Hide all interface'",LIT_"'HideUI'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Interface'",LIT_"'Hide chat'",LIT_"'HideChat'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Interface'",LIT_"'Party buffs display'",LIT_"'PartyBuffs'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Interface'",LIT_"'Reset window positions'",LIT_"'ResetLayout'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Interface'",LIT_"'Low detail mode'",LIT_"'LowDetail'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Interface'",LIT_"'Mute all sound'",LIT_"'Mute'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Character'",LIT_"'Attack'",LIT_"'Attack'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Character'",LIT_"'Sit / stand'",LIT_"'Sit'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Character'",LIT_"'Target yourself'",LIT_"'TargetSelf'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Character'",LIT_"'Next target'",LIT_"'NextTarget'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Character'",LIT_"'Force attack (hold)'",LIT_"'Ctrl'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Character'",LIT_"'Stay in place on ground click (hold)'",LIT_"'Shift'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Character'",LIT_"'Close window / cancel cast'",LIT_"'CloseWindow'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Wyvern'",LIT_"'Fly forward'",LIT_"'FlyForward'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Wyvern'",LIT_"'Fly back'",LIT_"'FlyBack'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Wyvern'",LIT_"'Turn left'",LIT_"'FlyLeft'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Wyvern'",LIT_"'Turn right'",LIT_"'FlyRight'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Wyvern'",LIT_"'Fly up'",LIT_"'FlyUp'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Nossa_22_1
            (LIT_"'Wyvern'",LIT_"'Fly down'",LIT_"'FlyDown'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Chat'",LIT_"'Open chat / send'",LIT_"'Validate'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Chat'",LIT_"'Previous message / whisper'",LIT_"'ArrowUp'",&lStack_78,0);
  SparkTeclas___MontaLista_g__Jogo_22_0
            (LIT_"'Chat'",LIT_"'Next message / whisper'",LIT_"'ArrowDown'",&lStack_78,0);
  if (lStack_78 == 0) {
    FUN_1803155d0();
code_r0x0001804cdd4a:
    FUN_1803155d0();
code_r0x0001804cdd50:
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_60,lStack_78,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_48 = (undefined4)uStack_60;
    uStack_44 = uStack_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    lStack_38 = lStack_50;
    uStack_60 = 0;
    uStack_58 = &uStack_48;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
      lVar4 = lStack_38;
      if (cVar2 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
        aiStackX_10[0] = 1;
        do {
          aiStackX_18[0] = aiStackX_10[0];
          uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
          uVar5 = System_String__Format(LIT_"'Bar 1 - page {0}'",uVar5,0);
          uVar6 = System_Int32__ToString(aiStackX_10,0);
          uVar6 = System_String__Concat(LIT_"'BarPage'",uVar6,0);
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkTeclas___MontaLista_g__Nossa_22_1(LIT_"'Bar pages'",uVar5,uVar6,&lStack_78,0);
          aiStackX_10[0] = aiStackX_10[0] + 1;
        } while (aiStackX_10[0] < 6);
        iVar10 = 1;
        do {
          iVar9 = 1;
          do {
            aiStackX_18[0] = iVar10;
            uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
            uVar5 = System_String__Format(LIT_"'Shortcut bar {0}'",uVar5,0);
            aiStackX_20[0] = iVar10;
            uVar6 = func_0x000180314670(_DAT_1834c6268,aiStackX_20);
            iStack_70 = iVar9;
            uVar7 = func_0x000180314670(_DAT_1834c6268,&iStack_70);
            uVar6 = System_String__Format(LIT_"'Bar {0} - slot {1}'",uVar6,uVar7,0);
            iStack_6c = iVar10;
            uVar7 = func_0x000180314670(_DAT_1834c6268,&iStack_6c);
            aiStack_68[0] = iVar9;
            uVar8 = func_0x000180314670(_DAT_1834c6268,aiStack_68);
            uVar7 = System_String__Format(LIT_"'Shortcut{0}-{1}'",uVar7,uVar8,0);
            if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkTeclas___MontaLista_g__Jogo_22_0(uVar5,uVar6,uVar7,&lStack_78,0);
            lVar4 = lStack_78;
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0xd);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 6);
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660(TI_SparkTeclas);
        }
        *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10) = lVar4;
        func_0x000180314690(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10,lVar4);
        return;
      }
      if (lStack_38 == 0) break;
      if (*(longlong *)(lStack_38 + 0x20) == 0) goto code_r0x0001804cdd50;
      cVar2 = func_0x0001817058a0(*(undefined8 *)(*(longlong *)(lStack_38 + 0x20) + 0x10),
                                  LIT_"'ArrowUp'");
      if (cVar2 == '\0') {
        if (*(longlong *)(lVar4 + 0x20) == 0) goto code_r0x0001804cdd4a;
        uVar3 = func_0x0001817058a0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x10),
                                    LIT_"'ArrowDown'");
        *(undefined1 *)(lVar4 + 0x38) = uVar3;
      }
      else {
        *(undefined1 *)(lVar4 + 0x38) = 1;
      }
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

