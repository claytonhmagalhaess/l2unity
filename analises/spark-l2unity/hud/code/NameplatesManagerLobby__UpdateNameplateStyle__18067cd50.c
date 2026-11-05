// NameplatesManagerLobby__UpdateNameplateStyle__18067cd50 @ 0x18067cd50

void NameplatesManagerLobby__UpdateNameplateStyle__18067cd50(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b3e37 == '\0') {
    FUN_180315380(TI_LobbyNameplate);
    FUN_180315380(TI_SelectableCharacterEntity);
    cRam00000001834b3e37 = '\x01';
  }
  NameplatesManagerBase__UpdateNameplateStyle__180679bf0(param_1,param_2,0);
  if ((param_2 != (longlong *)0x0) && (plVar2 = (longlong *)param_2[10], plVar2 != (longlong *)0x0))
  {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TI_SelectableCharacterEntity + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar2 + 200) + -8 + (ulonglong)*(byte *)(TI_SelectableCharacterEntity + 0x130) * 8
         ) != TI_SelectableCharacterEntity)) {
      FUN_1803146d0(plVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar5 = *(int *)((longlong)plVar2 + 0xdc);
    lVar3 = *param_2;
    bVar1 = *(byte *)(TI_LobbyNameplate + 0x130);
    if (iVar5 < 1) {
      if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
         (*(longlong *)(*(longlong *)(lVar3 + 200) + -8 + (ulonglong)bVar1 * 8) !=
          TI_LobbyNameplate)) {
        FUN_1803146d0(param_2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam00000001834b3dfc == '\0') {
        FUN_180315380(LIT_"'delete-timer'");
        cRam00000001834b3dfc = '\x01';
      }
      if ((char)param_2[0x26] != '\0') {
        *(undefined1 *)(param_2 + 0x26) = 0;
        uVar7 = LIT_"'delete-timer'";
        lVar3 = param_2[2];
        if (lVar3 == 0) goto code_r0x00018067cfd9;
        cVar6 = UnityEngine_UIElements_VisualElement__ClassListContains
                          (lVar3,LIT_"'delete-timer'",0);
        if (cVar6 != '\0') {
          UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar3,uVar7,0);
        }
      }
      return;
    }
    if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
       (*(longlong *)
         (*(longlong *)(lVar3 + 200) + -8 + (ulonglong)*(byte *)(TI_LobbyNameplate + 0x130) * 8)
        != TI_LobbyNameplate)) {
      FUN_1803146d0(param_2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (cRam00000001834b3dfb == '\0') {
      FUN_180315380(LIT_"'delete-timer'");
      cRam00000001834b3dfb = '\x01';
    }
    if ((char)param_2[0x26] == '\0') {
      lVar3 = param_2[2];
      *(undefined1 *)(param_2 + 0x26) = 1;
      uVar7 = LIT_"'delete-timer'";
      if (lVar3 == 0) goto code_r0x00018067cfd9;
      cVar6 = UnityEngine_UIElements_VisualElement__ClassListContains(lVar3,LIT_"'delete-timer'",0);
      if (cVar6 == '\0') {
        UnityEngine_UIElements_VisualElement__AddToClassList(lVar3,uVar7,0);
      }
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(TI_LobbyNameplate + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*param_2 + 200) + -8 +
         (ulonglong)*(byte *)(TI_LobbyNameplate + 0x130) * 8) != TI_LobbyNameplate)) {
      FUN_1803146d0(param_2,TI_LobbyNameplate);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (cRam00000001834b3dfd == '\0') {
      FUN_180315380(LIT_"'Remaining Time : '");
      cRam00000001834b3dfd = '\x01';
    }
    plVar2 = (longlong *)param_2[0x27];
    uVar7 = DateUtils__ConvertSecondsToDate(iVar5,0);
    uVar7 = System_String__Concat(LIT_"'Remaining Time : '",uVar7,0);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018067cfd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xe48))(plVar2,uVar7,*(undefined8 *)(*plVar2 + 0xe50));
      return;
    }
  }
code_r0x00018067cfd9:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

