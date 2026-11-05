// ChatWindow__CalculaViraTexto__1805c5e20 @ 0x1805c5e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ChatWindow__CalculaViraTexto__1805c5e20(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if (DAT_1834b3acd == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkObservador);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkTeclas);
    DAT_1834b3acd = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if ((((*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xde) == '\0') &&
       (*(char *)(param_1 + 0x118) != '\0')) && (*(char *)(param_1 + 0x128) == '\0')) &&
     (*(char *)(param_1 + 0x88) == '\0')) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkTeclas__get_Trocando(0);
    if (cVar3 == '\0') {
      if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = FUN_1804f0780(0);
      if (cVar3 == '\0') {
        lVar5 = FUN_180479110(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Equality(lVar5,0,0);
        if (cVar3 == '\0') {
          if (lVar5 != 0) {
            if (*(char *)(lVar5 + 0x88) != '\0') {
              return 0;
            }
            if (*(char *)(lVar5 + 0x89) != '\0') {
              return 0;
            }
            if (DAT_1834b3ad1 == '\0') {
              FUN_180315380(TI_UnityEngine.UIElements.IPanel);
              FUN_180315380(TI_UnityEngine.UIElements.TextField);
              FUN_180315380(MR_UnityEngine.UIElements.VisualElement.GetFirstAncestorOfType<UnityEngine.UIElements.TextField>);
              FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
              DAT_1834b3ad1 = '\x01';
            }
            if (((*(longlong *)(param_1 + 0x108) != 0) &&
                (lVar5 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x108),0), lVar5 != 0)) &&
               ((lVar5 = FUN_1800020c0(3,TI_UnityEngine.UIElements.IPanel,lVar5), lVar5 != 0 &&
                (plVar6 = (longlong *)
                          UnityEngine_UIElements_FocusController__get_focusedElement(lVar5,0),
                plVar6 != (longlong *)0x0)))) {
              if (((*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
                  (*(longlong *)
                    (*(longlong *)(*plVar6 + 200) + -8 +
                    (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) == TI_UnityEngine.UIElements.VisualElement)) &&
                 (plVar6 != *(longlong **)(param_1 + 0x108))) {
                if (*(longlong *)(param_1 + 0x108) == 0) goto LAB_1805c6180;
                cVar3 = UnityEngine_UIElements_VisualElement__Contains
                                  (*(longlong *)(param_1 + 0x108),plVar6,0);
                if (cVar3 == '\0') {
                  if ((*(byte *)(TI_UnityEngine.UIElements.TextField + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
                     (*(longlong *)
                       (*(longlong *)(*plVar6 + 200) + -8 +
                       (ulonglong)*(byte *)(TI_UnityEngine.UIElements.TextField + 0x130) * 8) == TI_UnityEngine.UIElements.TextField)) {
                    return 0;
                  }
                  lVar5 = FUN_180b1a7e0(plVar6,MR_UnityEngine.UIElements.VisualElement.GetFirstAncestorOfType<UnityEngine.UIElements.TextField>);
                  if (lVar5 != 0) {
                    return 0;
                  }
                }
              }
            }
            lVar5 = FUN_180493ae0(0);
            if (lVar5 == 0) {
              return 0;
            }
            if (*(longlong *)(lVar5 + 0x1a8) != 0) {
              cVar3 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                                (*(longlong *)(lVar5 + 0x1a8),0);
              if (*(longlong *)(lVar5 + 0x1a0) != 0) {
                cVar4 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                                  (*(longlong *)(lVar5 + 0x1a0),0);
                if (cVar3 != cVar4) {
                  return 0;
                }
                if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                  func_0x000180315660(TI_ChatWindow);
                }
                lVar1 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x18);
                if (lVar1 != 0) {
                  uVar9 = 0;
                  while( true ) {
                    if (*(int *)(lVar1 + 0x18) <= (int)uVar9) {
                      return 0;
                    }
                    if (*(uint *)(lVar1 + 0x18) <= uVar9) {
                      FUN_1803155c0();
                      pcVar2 = (code *)swi(3);
                      uVar8 = (*pcVar2)();
                      return uVar8;
                    }
                    lVar7 = UnityEngine_InputSystem_Keyboard__get_Item
                                      (lVar5,*(undefined4 *)
                                              (lVar1 + 0x20 + (longlong)(int)uVar9 * 4),0);
                    if (lVar7 == 0) break;
                    cVar3 = UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame
                                      (lVar7,0);
                    if (cVar3 != '\0') {
                      return 1;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
LAB_1805c6180:
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
      }
    }
  }
  return 0;
}

