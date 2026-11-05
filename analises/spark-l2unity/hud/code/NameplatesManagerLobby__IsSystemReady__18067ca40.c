// NameplatesManagerLobby__IsSystemReady__18067ca40 @ 0x18067ca40

/* WARNING: Removing unreachable block (ram,0x00018242cdb4) */
/* WARNING: Removing unreachable block (ram,0x00018242cdb9) */
/* WARNING: Removing unreachable block (ram,0x00018242cdca) */
/* WARNING: Removing unreachable block (ram,0x00018242cdd4) */
/* WARNING: Removing unreachable block (ram,0x00018242cddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong NameplatesManagerLobby__IsSystemReady__18067ca40(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b3e36 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'NameplatesContainer'");
    cRam00000001834b3e36 = '\x01';
  }
  if (cRam00000001834b31c1 == '\0') {
    FUN_180315380(TI_L2LoginUI);
    cRam00000001834b31c1 = '\x01';
  }
  uVar4 = **(ulonglong **)(TI_L2LoginUI + 0xb8);
  if (uVar4 == 0) goto code_r0x00018067cc02;
  if (*(char *)(uVar4 + 0x28) != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((char)uVar4 == '\0') {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
        if (cVar3 != '\0') {
          if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x00018067cc02;
          uVar5 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x40),0);
          *(undefined8 *)(param_1 + 0x38) = uVar5;
          func_0x000180314690(param_1 + 0x38);
        }
        lVar1 = *(longlong *)(param_1 + 0x38);
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
        if (lVar1 != 0) {
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660(TI_UnityEngine.Object);
          }
          if (lVar1 == 0) {
            FUN_1803155d0();
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          return (ulonglong)(*(longlong *)(lVar1 + 0x10) != 0);
        }
        return 0;
      }
      if (cRam00000001834b31c1 == '\0') {
        FUN_180315380(TI_L2LoginUI);
        cRam00000001834b31c1 = '\x01';
      }
      if (**(longlong **)(TI_L2LoginUI + 0xb8) == 0) {
code_r0x00018067cc02:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      uVar5 = *(undefined8 *)(**(longlong **)(TI_L2LoginUI + 0xb8) + 0x20);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = FUN_180b0e310(uVar5,LIT_"'NameplatesContainer'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      uVar4 = func_0x000180314690(param_1 + 0x48,uVar5);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

