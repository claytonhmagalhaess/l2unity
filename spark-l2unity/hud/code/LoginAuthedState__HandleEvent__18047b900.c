// LoginAuthedState__HandleEvent__18047b900 @ 0x18047b900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginAuthedState__HandleEvent__18047b900(longlong param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  int iVar14;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (cRam00000001834b3167 == '\0') {
    puStack_40 = &UNK_18047b92c;
    FUN_180315380(TI_UnityEngine.Debug);
    puStack_40 = &UNK_18047b938;
    FUN_180315380(TI_GameEvent);
    puStack_40 = &UNK_18047b944;
    FUN_180315380(TI_GameState);
    puStack_40 = &UNK_18047b950;
    FUN_180315380(TI_ServerListPacket);
    puStack_40 = &UNK_18047b95c;
    FUN_180315380(LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'");
    cRam00000001834b3167 = '\x01';
  }
  if (param_2 == 1) {
    lVar12 = *(longlong *)(param_1 + 0x18);
    if (lVar12 != 0) {
      uVar13 = 5;
GameManager__ChangeState:
      if (cRam00000001834b315c == '\0') {
        puStack_50 = &UNK_18047a42e;
        FUN_180315380(TI_UnityEngine.Debug,uVar13,0,0);
        puStack_50 = &UNK_18047a43a;
        FUN_180315380(TI_GameState);
        puStack_50 = &UNK_18047a446;
        FUN_180315380(LIT_"'[GameStateMachine][STATE] '");
        cRam00000001834b315c = '\x01';
      }
      if (*(char *)(lVar12 + 0x20) != '\0') {
        puStack_50 = &UNK_18047a47e;
        uVar8 = System_Enum__ToString(&stack0xffffffffffffffd8,0);
        puStack_50 = &UNK_18047a490;
        uVar8 = System_String__Concat(LIT_"'[GameStateMachine][STATE] '",uVar8,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          puStack_50 = &UNK_18047a4a8;
          func_0x000180315660();
        }
        puStack_50 = &UNK_18047a4b2;
        UnityEngine_Debug__Log(uVar8,0);
      }
      plVar3 = *(longlong **)(lVar12 + 0x40);
      if (plVar3 != (longlong *)0x0) {
        puStack_50 = &UNK_18047a4d0;
        (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      }
      *(undefined1 *)(lVar12 + 0x39) = uVar13;
      puStack_50 = &UNK_18047a4de;
      GameManager__InitializeState(lVar12,0);
      plVar3 = *(longlong **)(lVar12 + 0x40);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018047a503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x178))(plVar3,0,*(undefined8 *)(*plVar3 + 0x180));
        return;
      }
      return;
    }
  }
  else if (param_2 == 2) {
    if (cRam00000001834b31c1 == '\0') {
      puStack_40 = &UNK_18047bad1;
      FUN_180315380(TI_L2LoginUI);
      cRam00000001834b31c1 = '\x01';
    }
    if (**(longlong **)(TI_L2LoginUI + 0xb8) != 0) {
      puStack_40 = &UNK_18047baf9;
      L2LoginUI__ShowServerSelectWindow__180777b60(**(longlong **)(TI_L2LoginUI + 0xb8),0);
      if (cRam00000001834b31c6 == '\0') {
        puStack_40 = &UNK_18047bb0e;
        FUN_180315380(TI_ServerSelectWindow);
        cRam00000001834b31c6 = '\x01';
      }
      lVar12 = **(longlong **)(TI_ServerSelectWindow + 0xb8);
      if (lVar12 != 0) {
        if (param_3 != (longlong *)0x0) {
          if ((*(byte *)(*param_3 + 0x130) < *(byte *)(TI_ServerListPacket + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*param_3 + 200) + -8 +
               (ulonglong)*(byte *)(TI_ServerListPacket + 0x130) * 8) != TI_ServerListPacket)) {
            puStack_40 = &UNK_18047bbba;
            FUN_1803146d0(param_3);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (cRam00000001834b44f4 == '\0') {
          puStack_60 = &UNK_1807b2214;
          FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue,param_3,0);
          puStack_60 = &UNK_1807b2220;
          FUN_180315380(MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Count);
          puStack_60 = &UNK_1807b222c;
          FUN_180315380(MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
          puStack_60 = &UNK_1807b2238;
          FUN_180315380(LIT_"''");
          cRam00000001834b44f4 = '\x01';
        }
        iVar14 = 0;
        if (param_3 != (longlong *)0x0) {
          bVar1 = *(byte *)((longlong)param_3 + 0x29);
          lVar4 = param_3[6];
          lVar5 = param_3[7];
          puStack_60 = &UNK_1807b2280;
          ServerSelectWindow__ResetWindow(lVar12,0);
          *(longlong *)(lVar12 + 0xa0) = lVar4;
          puStack_60 = &UNK_1807b2296;
          func_0x000180314690(lVar12 + 0xa0,lVar4);
          if (lVar4 != 0) {
            while( true ) {
              if (*(int *)(lVar4 + 0x18) <= iVar14) {
                for (iVar14 = *(int *)(lVar4 + 0x18); iVar14 < 0x14; iVar14 = iVar14 + 1) {
                  uStack_30 = 0;
                  uVar7 = uStack_38 >> 0x20;
                  uStack_38 = CONCAT44((int)uVar7,0xffffffff);
                  puStack_60 = &UNK_1807b2495;
                  ServerSelectWindow__AddServerRow(lVar12,iVar14,LIT_"''",LIT_"''");
                }
                if (((bVar1 == 0) && (*(longlong *)(lVar12 + 0xa0) != 0)) &&
                   (0 < *(int *)(*(longlong *)(lVar12 + 0xa0) + 0x18))) {
                  puStack_60 = &UNK_1807b24c4;
                  ServerSelectWindow__SelectServer__1807b1d50(lVar12,0,0);
                }
                return;
              }
              puStack_60 = &UNK_1807b22bf;
              lVar11 = FUN_180bbafe0(lVar4,iVar14,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
              if ((lVar11 == 0) || (lVar5 == 0)) break;
              puStack_60 = &UNK_1807b22e8;
              FUN_1811f1940(lVar5,*(undefined4 *)(lVar11 + 0x28),&stack0x00000010,
                            MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
              puStack_60 = &UNK_1807b22f9;
              lVar11 = FUN_180bbafe0(lVar4,iVar14,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
              if (lVar11 == 0) break;
              uVar2 = *(undefined4 *)(lVar11 + 0x28);
              if (cRam00000001834b44f6 == '\0') {
                puStack_60 = &UNK_1807b231a;
                FUN_180315380(TI_ServerNameDAO);
                cRam00000001834b44f6 = '\x01';
              }
              if (*(int *)(TI_ServerNameDAO + 0xe4) == 0) {
                puStack_60 = &UNK_1807b2336;
                func_0x000180315660();
              }
              puStack_60 = &UNK_1807b233f;
              uVar8 = ServerNameDAO__GetServer(uVar2,0);
              puStack_60 = &UNK_1807b2353;
              lVar11 = FUN_180bbafe0(lVar4,iVar14,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
              if (lVar11 == 0) break;
              uVar2 = *(undefined4 *)(lVar11 + 0x24);
              if (cRam00000001834b44f7 == '\0') {
                puStack_60 = &UNK_1807b2375;
                FUN_180315380(LIT_"'Heavy'");
                puStack_60 = &UNK_1807b2381;
                FUN_180315380(LIT_"'Full'");
                puStack_60 = &UNK_1807b238d;
                FUN_180315380(LIT_"'Normal'");
                puStack_60 = &UNK_1807b2399;
                FUN_180315380(LIT_"'GM Only'");
                puStack_60 = &UNK_1807b23a5;
                FUN_180315380(LIT_"'Down'");
                puStack_60 = &UNK_1807b23b1;
                FUN_180315380(LIT_"'Light'");
                puStack_60 = &UNK_1807b23bd;
                FUN_180315380(LIT_"'Unknown'");
                cRam00000001834b44f7 = '\x01';
              }
              uVar9 = LIT_"'Unknown'";
              switch(uVar2) {
              case 0:
                uVar9 = LIT_"'Light'";
                break;
              case 1:
                uVar9 = LIT_"'Normal'";
                break;
              case 2:
                uVar9 = LIT_"'Heavy'";
                break;
              case 3:
                uVar9 = LIT_"'Full'";
                break;
              case 4:
                uVar9 = LIT_"'Down'";
                break;
              case 5:
                uVar9 = LIT_"'GM Only'";
              }
              uStack_30 = 0;
              uStack_38 = uStack_38 & 0xffffffff00000000;
              puStack_60 = &UNK_1807b2436;
              ServerSelectWindow__AddServerRow(lVar12,iVar14,uVar8,uVar9);
              puStack_60 = &UNK_1807b2447;
              lVar11 = FUN_180bbafe0(lVar4);
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x28) == (uint)bVar1) {
                puStack_60 = &UNK_1807b2463;
                ServerSelectWindow__SelectServer__1807b1d50(lVar12,iVar14,0);
              }
              iVar14 = iVar14 + 1;
            }
          }
        }
        puStack_60 = &UNK_1807b24eb;
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  else if (param_2 == 3) {
    if (cRam00000001834b31c1 == '\0') {
      puStack_40 = &UNK_18047ba6b;
      FUN_180315380(TI_L2LoginUI);
      cRam00000001834b31c1 = '\x01';
    }
    if (**(longlong **)(TI_L2LoginUI + 0xb8) != 0) {
      puStack_40 = &UNK_18047ba93;
      L2LoginUI__ShowLoginWindow__180777960(**(longlong **)(TI_L2LoginUI + 0xb8),0);
      lVar12 = *(longlong *)(param_1 + 0x18);
      if (lVar12 != 0) {
        uVar13 = 2;
        goto GameManager__ChangeState;
      }
    }
  }
  else {
    if (param_2 != 0xd) {
      puStack_40 = &UNK_18047b9e6;
      uVar8 = func_0x000180314670(TI_GameEvent,&stack0xffffffffffffffe8);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        puStack_40 = &UNK_18047ba0f;
        uVar9 = func_0x000180314670(TI_GameState,&stack0x00000010);
        puStack_40 = &UNK_18047ba24;
        uVar8 = System_String__Format(LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'",uVar8,uVar9,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          puStack_40 = &UNK_18047ba3c;
          func_0x000180315660();
        }
        puStack_40 = &UNK_18047ba46;
        UnityEngine_Debug__LogWarning(uVar8,0);
        return;
      }
      puStack_40 = &UNK_18047bbb1;
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (DAT_1834b30fb == '\0') {
      puStack_40 = &UNK_18047b99a;
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    lVar12 = **(longlong **)(TI_GameClient + 0xb8);
    if (lVar12 != 0) {
      if (cRam00000001834b3772 == '\0') {
        FUN_180315380(MR_System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<DefaultClient.<Connect>d__41>);
        cRam00000001834b3772 = '\x01';
      }
      uStack_48 = 0;
      puStack_40 = (undefined *)0x0;
      uStack_38 = 0;
      uStack_30 = 0;
      puVar10 = (undefined8 *)
                System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(auStack_68,0);
      puStack_40 = (undefined *)*puVar10;
      uStack_38 = puVar10[1];
      uStack_30 = puVar10[2];
      func_0x000180314690(&puStack_40,0);
      func_0x000180314690(&stack0xffffffffffffffe0,lVar12);
      uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
      FUN_18095a060(&puStack_40,&uStack_48,MR_System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<DefaultClient.<Connect>d__41>);
      return;
    }
  }
  puStack_40 = &UNK_18047bbab;
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

