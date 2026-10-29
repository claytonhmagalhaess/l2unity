// OptionsWindow__TrocaLoot__18069ae30 @ 0x18069ae30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__TrocaLoot__18069ae30(undefined8 param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint auStackX_10 [2];
  undefined1 auStackX_20 [8];
  undefined1 auStack_48 [4];
  uint uStack_44;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  auStackX_10[0] = param_2;
  if (cRam00000001834b3e8d == '\0') {
    FUN_180315380(TI_object__);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkAvisoNaTela);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(LIT_"'loot {0}: em party={1}, lider={2}, modo da party={3}'");
    FUN_180315380(LIT_"'Only the party leader can change the loot.'");
    FUN_180315380(LIT_"'Asking the party to accept: '");
    FUN_180315380(LIT_"'spk_loot '");
    FUN_180315380(LIT_"'.'");
    FUN_180315380(LIT_"'Your next party will use: '");
    cRam00000001834b3e8d = '\x01';
  }
  plVar4 = (longlong *)func_0x000180314710(TI_object__,4);
  uStack_44 = auStackX_10[0];
  lVar5 = func_0x000180314670(_DAT_1834c6268,&uStack_44);
  if (plVar4 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((lVar5 != 0) &&
     (lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar7 = func_0x000180314f80();
    FUN_180315590(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    func_0x000180314690(plVar4 + 4,lVar5);
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    auStackX_20[0] = SparkParty__get_EmParty(0);
    lVar5 = func_0x000180314670(uRam00000001834c6248,auStackX_20);
    if ((lVar5 != 0) &&
       (lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = func_0x000180314f80();
      FUN_180315590(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      func_0x000180314690(plVar4 + 5,lVar5);
      auStack_48[0] = SparkParty__get_SouLider(0);
      lVar5 = func_0x000180314670(uRam00000001834c6248,auStack_48);
      if ((lVar5 != 0) &&
         (lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar7 = func_0x000180314f80();
        FUN_180315590(uVar7,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        func_0x000180314690(plVar4 + 6,lVar5);
        if (cRam00000001834b33c6 == '\0') {
          FUN_180315380(TI_SparkParty);
          cRam00000001834b33c6 = '\x01';
        }
        if (*(int *)(TI_SparkParty + 0xe4) == 0) {
          func_0x000180315660(TI_SparkParty);
        }
        auStack_40[0] = *(undefined4 *)(*(longlong *)(TI_SparkParty + 0xb8) + 0xc);
        lVar5 = func_0x000180314670(_DAT_1834c6268,auStack_40);
        if ((lVar5 != 0) &&
           (lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar7 = func_0x000180314f80();
          FUN_180315590(uVar7,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar5;
          func_0x000180314690(plVar4 + 7,lVar5);
          System_String__Format(LIT_"'loot {0}: em party={1}, lider={2}, modo da party={3}'",plVar4,0);
          if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = SparkParty__get_EmParty(0);
          uVar2 = auStackX_10[0];
          if (cVar3 == '\0') {
            if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
              func_0x000180315660(TI_SparkOpcoes);
            }
            *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x88) = uVar2;
            SparkOpcoes__SalvaJogo(0);
            lVar5 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x90);
            if (lVar5 == 0) {
code_r0x00018069b3c7:
              FUN_1803155d0();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(uint *)(lVar5 + 0x18) <= auStackX_10[0]) {
DAT_18069b3c1:
              FUN_1803155c0();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar7 = System_String__Concat
                              (LIT_"'Your next party will use: '",
                               *(undefined8 *)(lVar5 + 0x20 + (longlong)(int)auStackX_10[0] * 8),
                               LIT_"'.'",0);
            if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar8 = 0x9c4;
          }
          else {
            if (*(int *)(TI_SparkParty + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = SparkParty__get_SouLider(0);
            uVar2 = auStackX_10[0];
            if (cVar3 == '\0') {
              if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar8 = 3000;
              uVar7 = LIT_"'Only the party leader can change the loot.'";
            }
            else {
              if (*(int *)(TI_SparkParty + 0xe4) == 0) {
                func_0x000180315660();
              }
              if (cRam00000001834b33c6 == '\0') {
                FUN_180315380(TI_SparkParty);
                cRam00000001834b33c6 = '\x01';
              }
              if (*(int *)(TI_SparkParty + 0xe4) == 0) {
                func_0x000180315660();
              }
              if (uVar2 == *(uint *)(*(longlong *)(TI_SparkParty + 0xb8) + 0xc)) {
                return;
              }
              if (cRam00000001834b30fb == '\0') {
                FUN_180315380(TI_GameClient);
                cRam00000001834b30fb = '\x01';
              }
              if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
                lVar5 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
                uVar7 = System_Int32__ToString(auStackX_10,0);
                uVar7 = System_String__Concat(LIT_"'spk_loot '",uVar7,0);
                if (lVar5 == 0) goto code_r0x00018069b3c7;
                GameClientPacketHandler__RequestBypassToServer(lVar5,uVar7,0);
              }
              if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
                func_0x000180315660(TI_SparkOpcoes);
              }
              lVar5 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x90);
              if (lVar5 == 0) goto code_r0x00018069b3c7;
              if (*(uint *)(lVar5 + 0x18) <= auStackX_10[0]) goto DAT_18069b3c1;
              uVar7 = System_String__Concat
                                (LIT_"'Asking the party to accept: '",
                                 *(undefined8 *)(lVar5 + 0x20 + (longlong)(int)auStackX_10[0] * 8),
                                 LIT_"'.'",0);
              if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar8 = 3000;
            }
          }
          uStack_28 = 0;
          uStack_30 = 0;
          uStack_38 = 0;
          SparkAvisoNaTela__Mostra(uVar7,uVar8,2,0,&uStack_38,0);
          return;
        }
      }
    }
  }
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

