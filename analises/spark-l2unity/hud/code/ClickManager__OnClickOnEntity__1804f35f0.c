// ClickManager__OnClickOnEntity__1804f35f0 @ 0x1804f35f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClickManager__OnClickOnEntity__1804f35f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (cRam00000001834b35a5 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerController);
    cRam00000001834b35a5 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001804f39f9;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(lVar1,0,0);
  if (cVar4 == '\0') {
code_r0x0001804f38a4:
    cVar4 = '\0';
code_r0x0001804f38a6:
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_InputManager + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar5 != '\0') {
      if (DAT_1834b3532 == '\0') {
        FUN_180315380(TI_InputManager);
        DAT_1834b3532 = '\x01';
      }
      if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f39f9;
      if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf1) != '\0') {
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(lVar1,0,0);
        if (cVar5 != '\0') {
          if (lVar1 == 0) goto code_r0x0001804f39f9;
          if (*(longlong *)(lVar1 + 0x30) != 0) {
            lVar7 = FUN_1804582c0(0);
            if (lVar7 == 0) {
              return;
            }
            if ((*(longlong *)(lVar1 + 0x30) != 0) && (*(longlong *)(lVar7 + 0xa8) != 0)) {
              GameClientPacketHandler__SendRequestAction
                        (*(longlong *)(lVar7 + 0xa8),
                         *(undefined4 *)(*(longlong *)(lVar1 + 0x30) + 0x14),1,0);
              return;
            }
            goto code_r0x0001804f39f9;
          }
        }
      }
    }
  }
  else {
    if (lVar1 == 0) goto code_r0x0001804f39f9;
    if (*(longlong *)(lVar1 + 0x38) == 0) goto code_r0x0001804f38a4;
    cVar4 = *(char *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    if (cVar4 == '\0') goto code_r0x0001804f38a6;
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
  uVar6 = **(undefined8 **)(TI_PlayerController + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar5 == '\0') {
code_r0x0001804f377a:
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) == 0) goto code_r0x0001804f39f9;
    cVar5 = TargetManager__HasTarget__1807ea7b0(**(longlong **)(TI_TargetManager + 0xb8),0);
    if (cVar5 != '\0') {
      if (DAT_1834b3015 == '\0') {
        FUN_180315380(TI_TargetManager);
        DAT_1834b3015 = '\x01';
      }
      if ((**(longlong **)(TI_TargetManager + 0xb8) == 0) ||
         (lVar1 = *(longlong *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20), lVar1 == 0))
      goto code_r0x0001804f39f9;
      uVar6 = UnityEngine_Component__get_transform(lVar1,0);
      if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001804f39f9;
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Equality(uVar6,uVar2,0);
      if (cVar5 != '\0') {
        if (cVar4 != '\0') {
          return;
        }
        if (DAT_1834b3104 == '\0') {
          FUN_180315380(TI_PlayerActions);
          DAT_1834b3104 = '\x01';
        }
        if (**(longlong **)(TI_PlayerActions + 0xb8) != 0) {
          PlayerActions__UseAction(**(longlong **)(TI_PlayerActions + 0xb8),2,0);
          return;
        }
        goto code_r0x0001804f39f9;
      }
    }
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
    if (**(longlong **)(TI_PlayerController + 0xb8) == 0) goto code_r0x0001804f39f9;
    cVar5 = PlayerController__get_Voando(**(longlong **)(TI_PlayerController + 0xb8),0);
    if (cVar5 == '\0') goto code_r0x0001804f377a;
  }
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  if (**(longlong **)(TI_TargetManager + 0xb8) != 0) {
    TargetManager__SetTarget__1807eaec0
              (**(longlong **)(TI_TargetManager + 0xb8),*(undefined8 *)(param_1 + 0x38),0);
    return;
  }
code_r0x0001804f39f9:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

