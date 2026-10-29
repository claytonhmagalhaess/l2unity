// PlayerShortcuts__GetKeybindForShortcut__1804d1f90 @ 0x1804d1f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
PlayerShortcuts__GetKeybindForShortcut__1804d1f90(undefined8 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b3406 == '\0') {
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Count);
    FUN_180315380(LIT_"''");
    cRam00000001834b3406 = '\x01';
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if ((**(longlong **)(TI_InputManager + 0xb8) != 0) &&
     (lVar3 = *(longlong *)(**(longlong **)(TI_InputManager + 0xb8) + 0x100), lVar3 != 0)) {
    if ((**(uint **)(lVar3 + 0x10) <= param_2) ||
       (lVar2 = *(longlong *)(*(uint **)(lVar3 + 0x10) + 4), (uint)lVar2 <= param_3)) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    lVar3 = *(longlong *)(lVar3 + 0x20 + ((int)param_2 * lVar2 + (longlong)(int)param_3) * 8);
    if (lVar3 != 0) {
      lVar2 = UnityEngine_InputSystem_InputAction__get_bindings(auStack_18,lVar3,0);
      if (*(int *)(lVar2 + 0xc) != 0) {
        lVar3 = UnityEngine_InputSystem_InputActionRebindingExtensions__GetBindingDisplayString
                          (lVar3,0,0,0);
        if (lVar3 != 0) {
          if (cRam00000001834b89ca == '\0') {
            FUN_180315380(TI_System.Globalization.CultureInfo,0);
            cRam00000001834b89ca = '\x01';
          }
          if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar4 = (longlong *)System_Globalization_CultureInfo__get_CurrentCulture(0);
          if (plVar4 != (longlong *)0x0) {
            plVar4 = (longlong *)
                     (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
            if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018170ccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x1e0));
              return uVar5;
            }
          }
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        goto code_r0x0001804d2080;
      }
    }
    return LIT_"''";
  }
code_r0x0001804d2080:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

