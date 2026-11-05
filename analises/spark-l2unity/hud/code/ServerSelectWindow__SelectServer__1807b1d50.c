// ServerSelectWindow__SelectServer__1807b1d50 @ 0x1807b1d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ServerSelectWindow__SelectServer__1807b1d50(longlong param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  
  if (cRam00000001834b44f5 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(LIT_"'selected'");
    FUN_180315380(LIT_"'Server selected: '");
    cRam00000001834b44f5 = '\x01';
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  iVar7 = 0;
  if (lVar3 != 0) {
    while (lVar5 = *(longlong *)(param_1 + 0x98), iVar7 < *(int *)(lVar3 + 0x18)) {
      if ((lVar5 == 0) || (lVar3 = FUN_180bbafe0(lVar5,iVar7,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item), lVar3 == 0))
      goto code_r0x0001807b2164;
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar3,LIT_"'selected'",0);
      lVar3 = *(longlong *)(param_1 + 0x98);
      iVar7 = iVar7 + 1;
      if (lVar3 == 0) goto code_r0x0001807b2164;
    }
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) + -1 < param_2) {
        return;
      }
      if ((*(longlong *)(param_1 + 0x98) != 0) &&
         (lVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0x98),param_2,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item), lVar3 != 0))
      {
        UnityEngine_UIElements_VisualElement__AddToClassList(lVar3,LIT_"'selected'",0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          return;
        }
        lVar3 = *(longlong *)(param_1 + 0xa0);
        if (*(int *)(lVar3 + 0x18) == 0) {
          return;
        }
        if (*(int *)(lVar3 + 0x18) + -1 < param_2) {
          return;
        }
        lVar3 = FUN_180bbafe0(lVar3,param_2,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
        if (lVar3 != 0) {
          if (*(longlong *)(lVar3 + 0x10) == 0) {
            return;
          }
          if ((*(longlong *)(param_1 + 0xa0) != 0) &&
             (lVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0xa0),param_2,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item),
             lVar3 != 0)) {
            uVar1 = *(undefined4 *)(lVar3 + 0x28);
            *(undefined4 *)(param_1 + 0xa8) = uVar1;
            if (DAT_1834b30fb == '\0') {
              FUN_180315380(TI_GameClient);
              DAT_1834b30fb = '\x01';
            }
            if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
              *(undefined4 *)(**(longlong **)(TI_GameClient + 0xb8) + 0x88) = uVar1;
              uVar4 = System_Int32__ToString(param_1 + 0xa8,0);
              uVar4 = System_String__Concat(LIT_"'Server selected: '",uVar4,0);
              if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                func_0x000180315660();
              }
              UnityEngine_Debug__Log(uVar4,0);
              if (DAT_1834b30fb == '\0') {
                FUN_180315380(TI_GameClient);
                DAT_1834b30fb = '\x01';
              }
              if (*(longlong *)(param_1 + 0xa0) != 0) {
                lVar3 = **(longlong **)(TI_GameClient + 0xb8);
                lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0xa0),param_2,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
                if (lVar5 != 0) {
                  lVar5 = *(longlong *)(lVar5 + 0x10);
                  if (cRam00000001834b4553 == '\0') {
                    FUN_180315380(TI_System.Text.StringBuilder);
                    FUN_180315380(LIT_"'.'");
                    cRam00000001834b4553 = '\x01';
                  }
                  plVar6 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
                  System_Text_StringBuilder___ctor(plVar6,0);
                  if (lVar5 != 0) {
                    uVar8 = 0;
                    goto code_r0x0001807b2030;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0001807b2164:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_r0x0001807b2030:
  if (*(int *)(lVar5 + 0x18) <= (int)uVar8) goto code_r0x0001807b207b;
  if (*(uint *)(lVar5 + 0x18) <= uVar8) {
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (plVar6 == (longlong *)0x0) goto code_r0x0001807b2164;
  System_Text_StringBuilder__Append(plVar6,*(undefined1 *)((longlong)(int)uVar8 + 0x20 + lVar5),0);
  if ((int)uVar8 < *(int *)(lVar5 + 0x18) + -1) {
    System_Text_StringBuilder__Append(plVar6,LIT_"'.'");
  }
  uVar8 = uVar8 + 1;
  goto code_r0x0001807b2030;
code_r0x0001807b207b:
  if ((plVar6 != (longlong *)0x0) &&
     (uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)), lVar3 != 0))
  {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    func_0x000180314690(lVar3 + 0x20,uVar4);
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar3 = **(longlong **)(TI_GameClient + 0xb8);
      lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0xa0),param_2,MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item);
      if ((lVar5 != 0) && (lVar3 != 0)) {
        *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar5 + 0x18);
        if (cRam00000001834b3021 == '\0') {
          FUN_180315380(TI_GameManager);
          cRam00000001834b3021 = '\x01';
        }
        if (**(longlong **)(TI_GameManager + 0xb8) != 0) {
          if (*(char *)(**(longlong **)(TI_GameManager + 0xb8) + 0x28) != '\0') {
            ServerSelectWindow__ConfirmButtonPressed__1807b1740(param_1,0);
          }
          return;
        }
      }
    }
  }
  goto code_r0x0001807b2164;
}

