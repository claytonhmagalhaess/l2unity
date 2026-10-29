// ServerSelectWindow__UpdateServerList__1807b21f0 @ 0x1807b21f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ServerSelectWindow__UpdateServerList__1807b21f0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 auStackX_10 [2];
  
  if (cRam00000001834b44f4 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
    FUN_180315380(LIT_"''");
    cRam00000001834b44f4 = '\x01';
  }
  iVar8 = 0;
  auStackX_10[0] = 0;
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_2 + 0x29);
    lVar3 = *(longlong *)(param_2 + 0x30);
    lVar4 = *(longlong *)(param_2 + 0x38);
    ServerSelectWindow__ResetWindow(param_1,0);
    *(longlong *)(param_1 + 0xa0) = lVar3;
    func_0x000180314690(param_1 + 0xa0,lVar3);
    if (lVar3 != 0) {
      while( true ) {
        if (*(int *)(lVar3 + 0x18) <= iVar8) {
          for (iVar8 = *(int *)(lVar3 + 0x18); iVar8 < 0x14; iVar8 = iVar8 + 1) {
            ServerSelectWindow__AddServerRow
                      (param_1,iVar8,LIT_"''",LIT_"''",0xffffffff,0);
          }
          if (((bVar1 == 0) && (*(longlong *)(param_1 + 0xa0) != 0)) &&
             (0 < *(int *)(*(longlong *)(param_1 + 0xa0) + 0x18))) {
            ServerSelectWindow__SelectServer__1807b1d50(param_1,0,0);
          }
          return;
        }
        lVar6 = FUN_180bbafe0(lVar3,iVar8,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
        if ((lVar6 == 0) || (lVar4 == 0)) break;
        FUN_1811f1940(lVar4,*(undefined4 *)(lVar6 + 0x28),auStackX_10,MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
        lVar6 = FUN_180bbafe0(lVar3,iVar8,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
        if (lVar6 == 0) break;
        uVar2 = *(undefined4 *)(lVar6 + 0x28);
        if (cRam00000001834b44f6 == '\0') {
          FUN_180315380(TI_ServerNameDAO);
          cRam00000001834b44f6 = '\x01';
        }
        if (*(int *)(TI_ServerNameDAO + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar7 = ServerNameDAO__GetServer(uVar2,0);
        lVar6 = FUN_180bbafe0(lVar3,iVar8,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
        if (lVar6 == 0) break;
        uVar2 = *(undefined4 *)(lVar6 + 0x24);
        if (cRam00000001834b44f7 == '\0') {
          FUN_180315380(LIT_"'Heavy'");
          FUN_180315380(LIT_"'Full'");
          FUN_180315380(LIT_"'Normal'");
          FUN_180315380(LIT_"'GM Only'");
          FUN_180315380(LIT_"'Down'");
          FUN_180315380(LIT_"'Light'");
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
        ServerSelectWindow__AddServerRow(param_1,iVar8,uVar7,uVar9,auStackX_10[0],0);
        lVar6 = FUN_180bbafe0(lVar3);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x28) == (uint)bVar1) {
          ServerSelectWindow__SelectServer__1807b1d50(param_1,iVar8,0);
        }
        iVar8 = iVar8 + 1;
      }
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

