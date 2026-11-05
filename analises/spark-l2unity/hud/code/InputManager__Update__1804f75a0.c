// InputManager__Update__1804f75a0 @ 0x1804f75a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InputManager__Update__1804f75a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  float extraout_EAX;
  undefined8 uVar10;
  longlong lVar11;
  float extraout_var;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fStackX_c;
  undefined8 uStackX_18;
  
  if (DAT_1834b35af == '\0') {
    FUN_180315380(TI_ChatWindow,0);
    FUN_180315380(MR_UnityEngine.InputSystem.InputAction.ReadValue<float>);
    FUN_180315380(MR_UnityEngine.InputSystem.InputAction.ReadValue<UnityEngine.Vector2>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerController);
    FUN_180315380(TI_SparkObservador);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'FlyLeft'");
    FUN_180315380(LIT_"'FlyBack'");
    FUN_180315380(LIT_"'FlyRight'");
    FUN_180315380(LIT_"'LowDetail'");
    FUN_180315380(LIT_"'Skills'");
    FUN_180315380(LIT_"'FlyForward'");
    DAT_1834b35af = '\x01';
  }
  uStackX_18 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_1804f758b;
  uVar10 = FUN_180a02160(*(longlong *)(param_1 + 0x30),MR_UnityEngine.InputSystem.InputAction.ReadValue<UnityEngine.Vector2>);
  fStackX_c = (float)((ulonglong)uVar10 >> 0x20);
  *(float *)(param_1 + 0xd0) = (float)uVar10;
  *(float *)(param_1 + 0xd4) = fStackX_c;
  if (fStackX_c == 0.0) {
    if ((float)uVar10 == 0.0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0xd8) = uVar4;
  if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                    (*(longlong *)(param_1 + 0x20),0);
  *(undefined1 *)(param_1 + 200) = uVar4;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                    (*(longlong *)(param_1 + 0x28),0);
  *(undefined1 *)(param_1 + 0xc9) = uVar4;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__WasReleasedThisFrame(*(longlong *)(param_1 + 0x28),0)
  ;
  *(undefined1 *)(param_1 + 0xca) = uVar4;
  if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__IsPressed(*(longlong *)(param_1 + 0x20),0);
  *(undefined1 *)(param_1 + 0xcb) = uVar4;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__IsPressed(*(longlong *)(param_1 + 0x28),0);
  *(undefined1 *)(param_1 + 0xcc) = uVar4;
  if (*(longlong *)(param_1 + 0xa0) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                    (*(longlong *)(param_1 + 0xa0),0);
  *(undefined1 *)(param_1 + 0xf7) = uVar4;
  if (*(longlong *)(param_1 + 0xb8) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                    (*(longlong *)(param_1 + 0xb8),0);
  *(undefined1 *)(param_1 + 0xf8) = uVar4;
  if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__IsPressed(*(longlong *)(param_1 + 0x78),0);
  *(undefined1 *)(param_1 + 0xf0) = uVar4;
  if (*(longlong *)(param_1 + 0x80) == 0) goto LAB_1804f758b;
  uVar4 = UnityEngine_InputSystem_InputAction__IsPressed(*(longlong *)(param_1 + 0x80),0);
  *(undefined1 *)(param_1 + 0xf1) = uVar4;
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto LAB_1804f758b;
  if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) == '\0') {
    if ((*(char *)(param_1 + 0xcc) != '\0') && (*(char *)(param_1 + 0xd8) != '\0')) {
      *(undefined1 *)(param_1 + 0xd9) = 1;
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto LAB_1804f758b;
      L2GameUI__DisableMouse__180772520(**(longlong **)(TI_L2GameUI + 0xb8),0);
    }
    if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_1804f758b;
    uVar16 = FUN_180a02070(*(longlong *)(param_1 + 0x38),MR_UnityEngine.InputSystem.InputAction.ReadValue<float>);
    *(undefined4 *)(param_1 + 0xdc) = uVar16;
  }
  if (*(char *)(param_1 + 0xca) != '\0') {
    *(undefined1 *)(param_1 + 0xd9) = 0;
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto LAB_1804f758b;
    L2GameUI__EnableMouse__180772560(**(longlong **)(TI_L2GameUI + 0xb8),0);
  }
  if (*(int *)(TI_PlayerController + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b2f33 == '\0') {
    FUN_180315380(TI_PlayerController);
    DAT_1834b2f33 = '\x01';
  }
  if (*(int *)(TI_PlayerController + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar10 = **(undefined8 **)(TI_PlayerController + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if (cVar5 == '\0') {
    cVar5 = '\0';
  }
  else {
    if (*(int *)(TI_PlayerController + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b2f33 == '\0') {
      FUN_180315380(TI_PlayerController);
      DAT_1834b2f33 = '\x01';
    }
    if (*(int *)(TI_PlayerController + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_PlayerController + 0xb8) == 0) goto LAB_1804f758b;
    cVar5 = PlayerController__get_Voando(**(longlong **)(TI_PlayerController + 0xb8),0);
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3105 == '\0') {
    FUN_180315380(TI_ChatWindow);
    DAT_1834b3105 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar10 = *(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if (cVar6 == '\0') {
LAB_1804f73fc:
    if (DAT_1834b2f44 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector2);
      DAT_1834b2f44 = '\x01';
    }
    uVar16 = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
    *(undefined4 *)(param_1 + 0xe4) = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
    *(undefined4 *)(param_1 + 0xe0) = uVar16;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf2) = 0;
    *(undefined1 *)(param_1 + 0xf6) = 0;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x108);
      uVar16 = System_Array__InternalArray__ICollection_get_Count(uVar10,0);
      System_Array__Clear(uVar10,0,uVar16,0);
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x110);
      uVar16 = System_Array__InternalArray__ICollection_get_Count(uVar10,0);
      System_Array__Clear(uVar10,0,uVar16,0);
    }
  }
  else {
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b3105 == '\0') {
      FUN_180315380(TI_ChatWindow);
      DAT_1834b3105 = '\x01';
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar11 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (lVar11 == 0) goto LAB_1804f758b;
    if (*(char *)(lVar11 + 0x88) != '\0') goto LAB_1804f73fc;
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto LAB_1804f758b;
    if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x88) != '\0') goto LAB_1804f73fc;
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar11 = FUN_180458270(0);
    if (lVar11 == 0) goto LAB_1804f758b;
    cVar6 = ChatWindow__get_TeclaViraTexto(lVar11,0);
    if (cVar6 != '\0') goto LAB_1804f73fc;
    if (cVar5 == '\0') {
      UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition(0);
      fVar18 = extraout_var;
      fVar17 = extraout_EAX;
    }
    else {
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = SparkTeclas__Segurando__1804ce6c0(LIT_"'FlyRight'",0);
      if (cVar6 == '\0') {
        fVar17 = 0.0;
      }
      else {
        fVar17 = 1.0;
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = SparkTeclas__Segurando__1804ce6c0(LIT_"'FlyLeft'",0);
      if (cVar6 == '\0') {
        fVar18 = 0.0;
      }
      else {
        fVar18 = 1.0;
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar17 = fVar17 - fVar18;
      cVar6 = SparkTeclas__Segurando__1804ce6c0(LIT_"'FlyForward'",0);
      if (cVar6 == '\0') {
        fVar18 = 0.0;
      }
      else {
        fVar18 = 1.0;
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = SparkTeclas__Segurando__1804ce6c0(LIT_"'FlyBack'",0);
      if (cVar6 == '\0') {
        fVar18 = fVar18 - 0.0;
      }
      else {
        fVar18 = fVar18 - 1.0;
      }
    }
    *(float *)(param_1 + 0xe4) = fVar18;
    *(float *)(param_1 + 0xe0) = fVar17;
    uStackX_18 = CONCAT44(fVar18,fVar17);
    if (1.0 < fVar18 * fVar18 + fVar17 * fVar17) {
      uVar10 = UnityEngine_Vector2__Normalize(&uStackX_18,0);
      fStackX_c = (float)((ulonglong)uVar10 >> 0x20);
      *(float *)(param_1 + 0xe4) = fStackX_c;
      *(int *)(param_1 + 0xe0) = (int)uVar10;
    }
    if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = FUN_1804f0780(0);
    if (cVar6 == '\0') {
      if (*(longlong *)(param_1 + 0x58) == 0) goto LAB_1804f758b;
      uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                        (*(longlong *)(param_1 + 0x58),0);
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0xec) = uVar4;
    if (*(longlong *)(param_1 + 0x60) == 0) goto LAB_1804f758b;
    uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                      (*(longlong *)(param_1 + 0x60),0);
    *(undefined1 *)(param_1 + 0xed) = uVar4;
    if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_1804f758b;
    uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                      (*(longlong *)(param_1 + 0x68),0);
    *(undefined1 *)(param_1 + 0xee) = uVar4;
    if (cVar6 == '\0') {
      if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1804f758b;
      uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                        (*(longlong *)(param_1 + 0x70),0);
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0xef) = uVar4;
    if (*(longlong *)(param_1 + 0x90) == 0) goto LAB_1804f758b;
    cVar7 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                      (*(longlong *)(param_1 + 0x90),0);
    if (cVar7 == '\0') {
      bVar8 = 0;
    }
    else {
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      bVar8 = SparkTeclas__Apertou__1804ca540(LIT_"'LowDetail'",0);
      bVar8 = bVar8 ^ 1;
    }
    *(byte *)(param_1 + 0xf3) = bVar8;
    if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_1804f758b;
    uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                      (*(longlong *)(param_1 + 0x88),0);
    *(undefined1 *)(param_1 + 0xf2) = uVar4;
    if (*(longlong *)(param_1 + 0xa8) == 0) goto LAB_1804f758b;
    uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                      (*(longlong *)(param_1 + 0xa8),0);
    *(undefined1 *)(param_1 + 0xf4) = uVar4;
    if (*(longlong *)(param_1 + 0x98) == 0) goto LAB_1804f758b;
    uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                      (*(longlong *)(param_1 + 0x98),0);
    *(undefined1 *)(param_1 + 0xf5) = uVar4;
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = SparkTeclas__get_Trocando(0);
    if (cVar7 == '\0') {
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Skills'",0);
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0xf6) = uVar4;
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = SparkTeclas__TrocandoPagina__1804cf4a0(0);
    uVar14 = 0;
    do {
      uVar13 = 0;
      do {
        lVar11 = *(longlong *)(param_1 + 0x100);
        if (lVar11 == 0) goto LAB_1804f758b;
        if (**(uint **)(lVar11 + 0x10) <= uVar14) {
LAB_1804f7591:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)(*(uint **)(lVar11 + 0x10) + 4);
        uVar12 = (uint)uVar13;
        if ((uint)lVar1 <= uVar12) goto LAB_1804f7591;
        lVar11 = *(longlong *)(lVar11 + 0x20 + ((ulonglong)uVar14 * lVar1 + uVar13) * 8);
        if (cVar7 == '\0') {
          if (cVar5 == '\0') {
            cVar9 = '\0';
          }
          else {
            if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar9 = SparkTeclas__TeclaDoVoo__1804ce890(lVar11);
          }
        }
        else {
          cVar9 = '\x01';
        }
        lVar1 = *(longlong *)(param_1 + 0x108);
        if ((cVar6 == '\0') && (cVar9 == '\0')) {
          if (lVar11 == 0) goto LAB_1804f758b;
          uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame(lVar11);
        }
        else {
          uVar4 = 0;
        }
        if (lVar1 == 0) goto LAB_1804f758b;
        if ((**(uint **)(lVar1 + 0x10) <= uVar14) ||
           (lVar2 = *(longlong *)(*(uint **)(lVar1 + 0x10) + 4), (uint)lVar2 <= uVar12))
        goto LAB_1804f7591;
        *(undefined1 *)(uVar13 + 0x20 + (ulonglong)uVar14 * lVar2 + lVar1) = uVar4;
        lVar1 = *(longlong *)(param_1 + 0x110);
        if ((cVar6 == '\0') && (cVar9 == '\0')) {
          if (lVar11 == 0) goto LAB_1804f758b;
          uVar4 = UnityEngine_InputSystem_InputAction__IsPressed(lVar11,0);
        }
        else {
          uVar4 = 0;
        }
        if (lVar1 == 0) goto LAB_1804f758b;
        if ((**(uint **)(lVar1 + 0x10) <= uVar14) ||
           (lVar11 = *(longlong *)(*(uint **)(lVar1 + 0x10) + 4), (uint)lVar11 <= uVar12))
        goto LAB_1804f7591;
        *(undefined1 *)(uVar13 + 0x20 + (ulonglong)uVar14 * lVar11 + lVar1) = uVar4;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while ((int)(uVar12 + 1) < 0xc);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 5);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                      (*(longlong *)(param_1 + 0x48),0);
    *(undefined1 *)(param_1 + 0xe8) = uVar4;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                        (*(longlong *)(param_1 + 0x50),0);
      *(undefined1 *)(param_1 + 0xe9) = uVar4;
      if ((cVar5 == '\0') || (*(char *)(param_1 + 0xcb) == '\0')) {
        cVar5 = '\0';
      }
      else {
        cVar5 = *(char *)(param_1 + 0xcc);
      }
      bVar15 = cVar5 != '\0';
      *(bool *)(param_1 + 0xeb) = bVar15;
      if ((*(float *)(param_1 + 0xe4) != 0.0) || (*(float *)(param_1 + 0xe0) != 0.0)) {
        bVar15 = true;
      }
      *(bool *)(param_1 + 0xea) = bVar15;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        uVar4 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame
                          (*(longlong *)(param_1 + 0xc0),0);
        *(undefined1 *)(param_1 + 0xf9) = uVar4;
        return;
      }
    }
  }
LAB_1804f758b:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

