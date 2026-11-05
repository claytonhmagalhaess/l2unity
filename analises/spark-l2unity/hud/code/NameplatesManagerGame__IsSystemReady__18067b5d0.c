// NameplatesManagerGame__IsSystemReady__18067b5d0 @ 0x18067b5d0

/* WARNING: Removing unreachable block (ram,0x00018242cdb4) */
/* WARNING: Removing unreachable block (ram,0x00018242cdb9) */
/* WARNING: Removing unreachable block (ram,0x00018242cdca) */
/* WARNING: Removing unreachable block (ram,0x00018242cdd4) */
/* WARNING: Removing unreachable block (ram,0x00018242cddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong NameplatesManagerGame__IsSystemReady__18067b5d0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (cRam00000001834b3e26 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'Camera component not found on CameraController'");
    FUN_180315380(LIT_"'CameraController instance is null'");
    FUN_180315380(LIT_"'NameplatesContainer'");
    cRam00000001834b3e26 = '\x01';
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  uVar5 = **(ulonglong **)(TI_L2GameUI + 0xb8);
  if (uVar5 != 0) {
    if (*(char *)(uVar5 + 0x28) == '\0') {
code_r0x00018067b804:
      return uVar5 & 0xffffffffffffff00;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if (cVar2 != '\0') {
      if (DAT_1834b31bf == '\0') {
        FUN_180315380(TI_CameraController);
        DAT_1834b31bf = '\x01';
      }
      uVar3 = **(undefined8 **)(TI_CameraController + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if (cVar2 != '\0') {
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = UnityEngine_Debug__LogWarning(LIT_"'CameraController instance is null'",0);
        return uVar5 & 0xffffffffffffff00;
      }
      if (DAT_1834b31bf == '\0') {
        FUN_180315380(TI_CameraController);
        DAT_1834b31bf = '\x01';
      }
      if (**(longlong **)(TI_CameraController + 0xb8) == 0) goto code_r0x00018067b944;
      uVar3 = FUN_180997040(**(longlong **)(TI_CameraController + 0xb8),MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if (cVar2 != '\0') {
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = UnityEngine_Debug__LogWarning(LIT_"'Camera component not found on CameraController'",0);
        goto code_r0x00018067b804;
      }
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      func_0x000180314690(param_1 + 0x40);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if (cVar2 != '\0') {
        lVar4 = FUN_1804169f0(0);
        if (lVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = UnityEngine_Component__get_transform(lVar4);
        }
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if (cVar2 != '\0') {
          lVar4 = FUN_1804169f0(0);
          if (lVar4 == 0) goto code_r0x00018067b944;
          uVar3 = UnityEngine_Component__get_transform(lVar4,0);
          *(undefined8 *)(param_1 + 0x38) = uVar3;
          func_0x000180314690(param_1 + 0x38);
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834c131f == '\0') {
        FUN_180315380(TI_UnityEngine.Object,0,0);
        DAT_1834c131f = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660(TI_UnityEngine.Object);
      }
      if (DAT_1834c12f9 == '\0') {
        FUN_180315380(TI_UnityEngine.Object);
        DAT_1834c12f9 = '\x01';
      }
      if (lVar4 != 0) {
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660(TI_UnityEngine.Object);
        }
        if (lVar4 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        return (ulonglong)(*(longlong *)(lVar4 + 0x10) != 0);
      }
      return 0;
    }
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
      uVar3 = *(undefined8 *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x20);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = FUN_180b0e310(uVar3,LIT_"'NameplatesContainer'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      uVar5 = func_0x000180314690(param_1 + 0x48,uVar3);
      return uVar5 & 0xffffffffffffff00;
    }
  }
code_r0x00018067b944:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

