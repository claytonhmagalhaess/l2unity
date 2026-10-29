// ChatWindow__Update__1805d0d80 @ 0x1805d0d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__Update__1805d0d80(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3aca == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex);
    FUN_180315380(LIT_"''");
    cRam00000001834b3aca = '\x01';
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xde) == '\0') {
    if (cRam00000001834b3ace == '\0') {
      FUN_180315380(TI_System.Action<char>);
      FUN_180315380(MD_ChatWindow.TextoDigitado);
      cRam00000001834b3ace = '\x01';
    }
    if (DAT_1834b32c2 == '\0') {
      FUN_180315380(TI_UnityEngine.InputSystem.Keyboard);
      DAT_1834b32c2 = '\x01';
    }
    lVar10 = **(longlong **)(TI_UnityEngine.InputSystem.Keyboard + 0xb8);
    if (lVar10 != *(longlong *)(param_1 + 0x138)) {
      if (*(longlong *)(param_1 + 0x138) != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x138);
        uVar8 = func_0x000180315580(TI_System.Action<char>);
        FUN_180b7dd60(uVar8,param_1,MD_ChatWindow.TextoDigitado,0);
        UnityEngine_InputSystem_Keyboard__remove_onTextInput(uVar9,uVar8,0);
      }
      *(longlong *)(param_1 + 0x138) = lVar10;
      func_0x000180314690(param_1 + 0x138,lVar10);
      if (*(longlong *)(param_1 + 0x138) != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x138);
        uVar8 = func_0x000180315580(TI_System.Action<char>);
        FUN_180b7dd60(uVar8,param_1,MD_ChatWindow.TextoDigitado,0);
        UnityEngine_InputSystem_Keyboard__add_onTextInput(uVar9,uVar8,0);
      }
    }
    if (*(char *)(param_1 + 0x88) == '\0') {
      iVar7 = *(int *)(param_1 + 0x144);
      iVar5 = FUN_1824364b0(0);
      if (iVar7 != iVar5) {
        uVar6 = FUN_1824364b0(0);
        *(undefined4 *)(param_1 + 0x144) = uVar6;
        uVar3 = ChatWindow__CalculaViraTexto__1805c5e20(param_1,0);
        *(undefined1 *)(param_1 + 0x148) = uVar3;
      }
      if (*(char *)(param_1 + 0x148) != '\0') {
        if (*(longlong *)(param_1 + 0x90) == 0) goto DAT_1805d1489;
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x18);
        uVar9 = ChatWindow__OpenChat__1805cc030(param_1,0);
        UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar9,0);
      }
      if (*(char *)(param_1 + 0x88) != '\0') goto code_r0x0001805d0fbe;
    }
    else {
code_r0x0001805d0fbe:
      if (*(longlong *)(param_1 + 0x130) == 0) goto DAT_1805d1489;
      iVar7 = func_0x000181717180(*(longlong *)(param_1 + 0x130),0);
      if (0 < iVar7) {
        plVar1 = *(longlong **)(param_1 + 0x108);
        if (plVar1 == (longlong *)0x0) goto DAT_1805d1489;
        uVar9 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
        plVar1 = *(longlong **)(param_1 + 0x130);
        if (plVar1 == (longlong *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        }
        lVar10 = System_String__Concat(uVar9,uVar8,0);
        if (*(longlong *)(param_1 + 0x108) == 0) goto DAT_1805d1489;
        iVar7 = FUN_180f01f60(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength);
        if (0 < iVar7) {
          if ((lVar10 == 0) || (*(longlong *)(param_1 + 0x108) == 0)) goto DAT_1805d1489;
          iVar7 = *(int *)(lVar10 + 0x10);
          iVar5 = FUN_180f01f60(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength);
          if (iVar5 < iVar7) {
            if (*(longlong *)(param_1 + 0x108) == 0) goto DAT_1805d1489;
            uVar6 = FUN_180f01f60(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength);
            lVar10 = System_String__Substring(lVar10,0,uVar6,0);
          }
        }
        plVar1 = *(longlong **)(param_1 + 0x108);
        if (plVar1 == (longlong *)0x0) goto DAT_1805d1489;
        (**(code **)(*plVar1 + 0xa88))(plVar1,lVar10,*(undefined8 *)(*plVar1 + 0xa90));
        ChatWindow__CursorNoFim__1805c6860(param_1,0);
      }
    }
    if (*(longlong *)(param_1 + 0x130) == 0) goto DAT_1805d1489;
    System_Text_StringBuilder__Clear(*(longlong *)(param_1 + 0x130),0);
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf8) != '\0') {
      if (*(char *)(param_1 + 0x88) == '\0') {
        if (*(longlong *)(param_1 + 0x90) == 0) goto DAT_1805d1489;
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x18);
        uVar9 = ChatWindow__OpenChat__1805cc030(param_1,0);
        UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar9,0);
      }
      else {
        cVar4 = ChatWindow__AceitaSugestao__1805c3dd0(param_1,0);
        if (cVar4 == '\0') {
          ChatWindow__CloseChat__1805c6330(param_1,1,0);
        }
        else {
          cVar4 = ChatWindow__CampoDoChatComFoco__1805c6190(param_1,0);
          if (cVar4 == '\0') {
            plVar1 = *(longlong **)(param_1 + 0x108);
            if (plVar1 == (longlong *)0x0) goto DAT_1805d1489;
            (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
          }
        }
      }
    }
    if ((*(char *)(param_1 + 0x88) == '\0') || (*(char *)(param_1 + 0x9c) == '\0')) {
      if (DAT_1834b3532 == '\0') {
        FUN_180315380(TI_InputManager);
        DAT_1834b3532 = '\x01';
      }
      if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
        if ((*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xe9) != '\0') &&
           (*(char *)(param_1 + 0x88) != '\0')) {
          lVar10 = *(longlong *)(param_1 + 0x90);
          if (lVar10 == 0) goto DAT_1805d1489;
          if (0 < *(int *)(lVar10 + 0x18)) {
            iVar7 = *(int *)(param_1 + 0x98) + 1;
            if (*(int *)(lVar10 + 0x18) <= iVar7) {
              iVar7 = *(int *)(lVar10 + 0x18);
            }
            *(int *)(param_1 + 0x98) = iVar7;
            if (lVar10 == 0) goto DAT_1805d1489;
            plVar1 = *(longlong **)(param_1 + 0x108);
            uVar9 = LIT_"''";
            if (iVar7 < *(int *)(lVar10 + 0x18)) {
              uVar9 = FUN_180bbafe0(lVar10,iVar7,MR_System.Collections.Generic.List<string>.get_Item);
            }
            if (plVar1 == (longlong *)0x0) goto DAT_1805d1489;
            (**(code **)(*plVar1 + 0xa88))(plVar1,uVar9,*(undefined8 *)(*plVar1 + 0xa90));
            plVar1 = *(longlong **)(param_1 + 0x108);
            if ((plVar1 == (longlong *)0x0) ||
               (lVar10 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80)),
               lVar10 == 0)) goto DAT_1805d1489;
            FUN_180f03c20(plVar1,*(undefined4 *)(lVar10 + 0x10),MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex);
          }
        }
        if (DAT_1834b3532 == '\0') {
          FUN_180315380(TI_InputManager);
          DAT_1834b3532 = '\x01';
        }
        if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
          if ((*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xe8) == '\0') ||
             (*(char *)(param_1 + 0x88) == '\0')) {
            return;
          }
          if (*(longlong *)(param_1 + 0x90) != 0) {
            if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) < 1) {
              return;
            }
            iVar7 = *(int *)(param_1 + 0x98) + -1;
            if (iVar7 < 1) {
              iVar7 = 0;
            }
            *(int *)(param_1 + 0x98) = iVar7;
            if (*(longlong *)(param_1 + 0x90) != 0) {
              plVar1 = *(longlong **)(param_1 + 0x108);
              uVar9 = FUN_180bbafe0(*(longlong *)(param_1 + 0x90),iVar7,MR_System.Collections.Generic.List<string>.get_Item);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xa88))(plVar1,uVar9,*(undefined8 *)(*plVar1 + 0xa90));
                plVar1 = *(longlong **)(param_1 + 0x108);
                if ((plVar1 != (longlong *)0x0) &&
                   (lVar11 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80))
                   , lVar10 = MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex, lVar11 != 0)) {
                  iVar7 = *(int *)(lVar11 + 0x10);
                  if (cRam00000001834b6d17 == '\0') {
                    FUN_180315380(TI_UnityEngine.UIElements.ITextSelection);
                    cRam00000001834b6d17 = '\x01';
                  }
                  if (((plVar1[0x6b] != 0) &&
                      (lVar11 = *(longlong *)(plVar1[0x6b] + 0x2c8), lVar11 != 0)) &&
                     (lVar11 = func_0x0001803df910(lVar11,0), lVar11 != 0)) {
                    iVar5 = FUN_1800020c0(2,TI_UnityEngine.UIElements.ITextSelection,lVar11);
                    if (iVar5 != iVar7) {
                      if (((plVar1[0x6b] == 0) ||
                          (lVar11 = *(longlong *)(plVar1[0x6b] + 0x2c8), lVar11 == 0)) ||
                         (lVar11 = func_0x0001803df910(lVar11,0), lVar11 == 0))
                      goto code_r0x000180f03d60;
                      FUN_1800022b0(3,TI_UnityEngine.UIElements.ITextSelection,lVar11,iVar7,unaff_RDI);
                      lVar11 = *(longlong *)
                                (*(longlong *)(*(longlong *)(lVar10 + 0x20) + 0xc0) + 0x18);
                      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                        lVar11 = FUN_180312f40(lVar11);
                      }
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        func_0x000180315660(lVar11);
                      }
                      lVar10 = *(longlong *)
                                (*(longlong *)(*(longlong *)(lVar10 + 0x20) + 0xc0) + 0x18);
                      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                        lVar10 = FUN_180312f40(lVar10);
                      }
                      UnityEngine_UIElements_CallbackEventHandler__NotifyPropertyChanged
                                (plVar1,*(longlong *)(lVar10 + 0xb8) + 0x5f0,0);
                    }
                    return;
                  }
code_r0x000180f03d60:
                  FUN_1803155d0();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (DAT_1834b3532 == '\0') {
        FUN_180315380(TI_InputManager);
        DAT_1834b3532 = '\x01';
      }
      if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
        if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xe8) != '\0') {
          ChatWindow__TrocaTell__1805d0620(param_1,1,0);
        }
        if (DAT_1834b3532 == '\0') {
          FUN_180315380(TI_InputManager);
          DAT_1834b3532 = '\x01';
        }
        if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
          if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xe9) == '\0') {
            return;
          }
          ChatWindow__TrocaTell__1805d0620(param_1,0xffffffff,0);
          return;
        }
      }
    }
  }
DAT_1805d1489:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

