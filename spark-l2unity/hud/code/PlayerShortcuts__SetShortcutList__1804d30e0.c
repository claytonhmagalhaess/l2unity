// PlayerShortcuts__SetShortcutList__1804d30e0 @ 0x1804d30e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__SetShortcutList__1804d30e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (cRam00000001834b3408 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.Add);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.Clear);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,Shortcut>);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'Skillbar window is not ready but already trying to updat...");
    cRam00000001834b3408 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar5 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,Shortcut>);
    FUN_1811e4340(uVar5,MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    func_0x000180314690(param_1 + 0x30,uVar5);
  }
  else {
    FUN_18117b6e0(*(undefined8 *)(param_1 + 0x30),MR_System.Collections.Generic.Dictionary<int,Shortcut>.Clear);
  }
  iVar7 = 0;
  if (param_2 != 0) {
    for (; iVar7 < *(int *)(param_2 + 0x18); iVar7 = iVar7 + 1) {
      lVar4 = FUN_180bbafe0(param_2,iVar7,MR_System.Collections.Generic.List<Shortcut>.get_Item);
      if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) goto code_r0x0001804d32f2;
      FUN_1811f4d00();
    }
    if (cRam00000001834b32cb == '\0') {
      FUN_180315380(TI_SkillbarWindow);
      cRam00000001834b32cb = '\x01';
    }
    uVar5 = **(undefined8 **)(TI_SkillbarWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if (cVar3 != '\0') {
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = LIT_"'Skillbar window is not ready but already trying to updat...";
      if (DAT_1834bfa18 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug,0);
        FUN_180315380(TI_UnityEngine.ILogger);
        DAT_1834bfa18 = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b3803 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        DAT_1834b3803 = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar4 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
      if (lVar4 != 0) {
        FUN_180036090(5,TI_UnityEngine.ILogger,lVar4,0,uVar5);
        return;
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam00000001834b32cb == '\0') {
      FUN_180315380(TI_SkillbarWindow);
      cRam00000001834b32cb = '\x01';
    }
    if (**(longlong **)(TI_SkillbarWindow + 0xb8) != 0) {
      lVar4 = SkillbarWindow__UpdateAllShortcuts__1807087e0
                        (**(longlong **)(TI_SkillbarWindow + 0xb8),param_2,0);
      if (lVar4 == 0) {
        uVar5 = func_0x0001803153a0(TI_System.NullReferenceException);
        uVar5 = func_0x000180315580(uVar5);
        uVar6 = func_0x0001803153a0(LIT_"'routine is null'");
        System_NullReferenceException___ctor(uVar5,uVar6,0);
        uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
        FUN_180315590(uVar5,uVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (DAT_1834c11f5 == '\0') {
        FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.Object>);
        FUN_180315380(LIT_"'obj'");
        DAT_1834c11f5 = '\x01';
      }
      if (param_1 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        if (lVar1 == 0) {
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(param_1,LIT_"'obj'",0);
        }
        if (_DAT_1834c1258 == (code *)0x0) {
          _DAT_1834c1258 = (code *)FUN_180315630(&UNK_1829422b0);
        }
        cVar3 = (*_DAT_1834c1258)(lVar1);
        if (cVar3 != '\0') {
          if (DAT_1834c11f7 == '\0') {
            FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.MonoBehaviour>);
            DAT_1834c11f7 = '\x01';
          }
          lVar1 = *(longlong *)(param_1 + 0x10);
          if (lVar1 == 0) {
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(param_1,0);
          }
          if (_DAT_1834c1268 == (code *)0x0) {
            _DAT_1834c1268 = (code *)FUN_180315630(&UNK_182942380);
          }
                    /* WARNING: Could not recover jumptable at 0x000182429079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_DAT_1834c1268)(lVar1,lVar4);
          return;
        }
        uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
        uVar5 = func_0x000180315580(uVar5);
        uVar6 = func_0x0001803153a0(LIT_"'Coroutines can only be stopped on a MonoBehaviour'");
        System_ArgumentException___ctor(uVar5,uVar6,0);
        uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
        FUN_180315590(uVar5,uVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(0,LIT_"'obj'",0);
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_r0x0001804d32f2:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

